// ===== 0090dcb4  FUN_0090dcb4 =====

void FUN_0090dcb4(long *param_1,double *param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  double dVar3;
  
  *param_1 = (long)&PTR_FUN_00d3d548;
  uVar1 = (ulong)(uint)(int)param_2[2];
  if (*(byte *)(param_2 + 3) == 0) {
    uVar1 = 0;
  }
  FUN_009266a8(param_1 + 1,param_3,(int)(*param_2 * 1073741824.0),(int)(param_2[1] * 32768.0),
               uVar1 | (ulong)*(byte *)(param_2 + 3) << 0x20,param_2[4]);
  pvVar2 = (void *)0x0;
  if (*(char *)(param_2 + 5) == '\x01') {
    dVar3 = param_2[6];
    pvVar2 = operator_new(0x50);
    uVar1 = (ulong)(uint)(int)param_2[2];
    if (*(byte *)(param_2 + 3) == 0) {
      uVar1 = 0;
    }
    FUN_00920c60(pvVar2,(int)(dVar3 * 32768.0),*(undefined4 *)(param_2 + 7),
                 uVar1 | (ulong)*(byte *)(param_2 + 3) << 0x20);
  }
  param_1[0xf] = (long)pvVar2;
  *(undefined4 *)(param_1 + 0x10) = 0x50;
                    /* WARNING: Could not recover jumptable at 0x0090dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


// ===== 0090dd88  FUN_0090dd88 =====

void FUN_0090dd88(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (((param_3 & 1) == 0) || (lVar2 = *(long *)(param_1 + 0x78), lVar2 == 0)) {
    FUN_0092671c(param_1 + 8,param_2);
    lVar2 = *(long *)(param_1 + 0x78);
    uVar3 = 0x50;
    if ((*(ulong *)(param_1 + 0x6c) & 0x100000000) != 0) {
      uVar3 = (undefined4)*(ulong *)(param_1 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar3 = 0x50;
    if ((*(ulong *)(param_1 + 0x6c) & 0x100000000) != 0) {
      uVar3 = (undefined4)*(ulong *)(param_1 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar3;
  }
  FUN_00920cb4(lVar2,param_2,param_3 & 1);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x78) + 0x44);
  iVar4 = 0;
  if ((uVar5 & 0x100000000) != 0) {
    iVar4 = (int)uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) <= iVar4) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x80) = iVar1;
  return;
}


// ===== 0090de34  FUN_0090de34 =====

void FUN_0090de34(long param_1)

{
  FUN_00926880(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0x50;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_00920dc0();
    return;
  }
  return;
}


// ===== 0090de80  FUN_0090de80 =====

undefined4 FUN_0090de80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


// ===== 0090de8c  FUN_0090de8c =====

void FUN_0090de8c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xf];
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_00d3d548;
  if (pvVar1 != (void *)0x0) {
    FUN_0090e074(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_0090e074(param_1 + 2);
  return;
}


// ===== 0090def4  FUN_0090def4 =====

void FUN_0090def4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xf];
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_00d3d548;
  if (pvVar1 != (void *)0x0) {
    FUN_0090e074(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_0090e074(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 0090df68  FUN_0090df68 =====

void FUN_0090df68(undefined8 *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_00d3d580;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    puVar4 = (undefined4 *)operator_new(param_2 * 4);
    param_1[1] = puVar4;
    param_1[2] = puVar4;
    uVar6 = param_2 * 4 - 4 >> 2;
    uVar2 = (ulong)-(long)puVar4 >> 2;
    if (uVar6 <= (ulong)-(long)puVar4 >> 2) {
      uVar2 = uVar6;
    }
    puVar1 = puVar4 + param_2;
    param_1[3] = puVar1;
    if ((7 < uVar2) && ((-(int)puVar4 & 3U) == 0)) {
      uVar6 = uVar2 + 1 & 7;
      uVar3 = 8;
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      puVar8 = (undefined8 *)(puVar4 + 4);
      lVar7 = (uVar2 + 1) - uVar3;
      puVar4 = puVar4 + lVar7;
      do {
        lVar7 = lVar7 + -8;
        puVar8[-1] = 0;
        puVar8[-2] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8 = puVar8 + 4;
      } while (lVar7 != 0);
    }
    do {
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    param_1[2] = puVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  return;
}


// ===== 0090e074  FUN_0090e074 =====

void FUN_0090e074(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3d580;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[2];
  uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[2] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -4);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0090e128  FUN_0090e128 =====

void FUN_0090e128(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3d580;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0090e1f0  FUN_0090e1f0 =====

void FUN_0090e1f0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  piVar7 = *(int **)(param_1 + 8);
  piVar10 = *(int **)(param_1 + 0x10);
  if (piVar7 == piVar10) {
    iVar17 = 0;
    piVar10 = piVar7;
    goto LAB_0090e274;
  }
  uVar8 = (long)piVar10 + (-4 - (long)piVar7);
  piVar11 = (int *)(param_1 + 0x20);
  if (((uVar8 < 0x2c) || (piVar10 + -1 < piVar7)) ||
     ((piVar11 < piVar10 && (piVar7 < (int *)(param_1 + 0x24U))))) {
    iVar17 = 0;
    piVar9 = piVar7;
LAB_0090e244:
    do {
      iVar18 = (int)((ulong)((long)*piVar11 * (long)*piVar9) >> 0xf);
      piVar7 = piVar9 + 1;
      *piVar9 = iVar18;
      iVar17 = iVar17 + iVar18;
      piVar9 = piVar7;
    } while (piVar7 != piVar10);
  }
  else {
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = *piVar11;
    uVar8 = (uVar8 >> 2) + 1;
    uVar12 = uVar8 & 0x7ffffffffffffff8;
    piVar9 = piVar7 + (uVar8 & 0x7ffffffffffffff8);
    piVar7 = piVar7 + 4;
    do {
      uVar12 = uVar12 - 8;
      iVar1 = (int)((ulong)((long)(int)*(undefined8 *)(piVar7 + -4) * (long)iVar25) >> 0xf);
      iVar13 = (int)((ulong)((long)(int)((ulong)*(undefined8 *)(piVar7 + -4) >> 0x20) * (long)iVar25
                            ) >> 0xf);
      iVar2 = (int)((ulong)((long)(int)*(undefined8 *)piVar7 * (long)iVar25) >> 0xf);
      iVar14 = (int)((ulong)((long)(int)((ulong)*(undefined8 *)piVar7 >> 0x20) * (long)iVar25) >>
                    0xf);
      iVar3 = (int)((ulong)((long)(int)*(undefined8 *)(piVar7 + -2) * (long)iVar25) >> 0xf);
      iVar15 = (int)((ulong)((long)(int)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20) * (long)iVar25
                            ) >> 0xf);
      iVar4 = (int)((ulong)((long)(int)*(undefined8 *)(piVar7 + 2) * (long)iVar25) >> 0xf);
      iVar16 = (int)((ulong)((long)(int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) * (long)iVar25)
                    >> 0xf);
      iVar17 = iVar17 + iVar1;
      iVar18 = iVar18 + iVar13;
      iVar19 = iVar19 + iVar3;
      iVar20 = iVar20 + iVar15;
      iVar21 = iVar21 + iVar2;
      iVar22 = iVar22 + iVar14;
      iVar23 = iVar23 + iVar4;
      iVar24 = iVar24 + iVar16;
      *(ulong *)(piVar7 + -2) = CONCAT44(iVar15,iVar3);
      *(ulong *)(piVar7 + -4) = CONCAT44(iVar13,iVar1);
      *(ulong *)(piVar7 + 2) = CONCAT44(iVar16,iVar4);
      *(ulong *)piVar7 = CONCAT44(iVar14,iVar2);
      piVar7 = piVar7 + 8;
    } while (uVar12 != 0);
    iVar17 = iVar21 + iVar17 + iVar22 + iVar18 + iVar23 + iVar19 + iVar24 + iVar20;
    if (uVar8 != (uVar8 & 0x7ffffffffffffff8)) goto LAB_0090e244;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  piVar10 = *(int **)(param_1 + 8);
LAB_0090e274:
  uVar8 = (ulong)param_2;
  if ((ulong)((long)piVar7 - (long)piVar10 >> 2) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  piVar10[uVar8] = piVar10[uVar8] + *(int *)(param_1 + 0x20) * -0x8000 + 0x40000000;
  iVar17 = iVar17 + *(int *)(param_1 + 0x20) * -0x8000;
  if (iVar17 != 0) {
    piVar7 = *(int **)(param_1 + 8);
    piVar10 = *(int **)(param_1 + 0x10);
    iVar18 = iVar17;
    if (piVar7 != piVar10) {
      do {
        piVar11 = piVar7 + 1;
        iVar19 = -iVar18;
        if (-1 < iVar18) {
          iVar19 = iVar18;
        }
        iVar20 = *piVar7 >> 4;
        if (iVar19 <= iVar20) {
          iVar20 = iVar19;
        }
        iVar19 = -iVar20;
        if (iVar17 < 1) {
          iVar19 = iVar20;
        }
        iVar18 = iVar19 + iVar18;
        *piVar7 = iVar19 + *piVar7;
        piVar7 = piVar11;
      } while (iVar18 != 0 && piVar11 != piVar10);
    }
  }
  iVar17 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar17 + 1;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(param_1 + 0x20) == uVar6) {
      return;
    }
    uVar5 = (uint)((1.0 - *(double *)(param_1 + 0x30) / (double)(iVar17 + 2)) * 32768.0);
    if ((int)uVar5 <= (int)uVar6) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar6 = *(int *)(param_1 + 0x20) +
            ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) + 3 >> 2);
  }
  *(uint *)(param_1 + 0x20) = uVar6;
  return;
}


// ===== 0090e3f4  FUN_0090e3f4 =====

int FUN_0090e3f4(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  piVar2 = *(int **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10) - (long)piVar2;
  if (lVar3 != 0) {
    uVar4 = lVar3 >> 2;
    param_2 = 0x40000000 - param_2;
    iVar5 = 0x40000000 - *piVar2;
    if ((uVar4 != 1 && iVar5 != param_2) && (uVar4 == 1 || param_2 <= iVar5)) {
      uVar6 = 1;
      do {
        if (uVar4 == uVar6) goto LAB_0090e474;
        uVar1 = uVar6 + 1;
      } while ((uVar6 < uVar4 - 1) &&
              (iVar5 = iVar5 - piVar2[uVar6], uVar6 = uVar1, param_2 < iVar5));
      iVar5 = (int)uVar1 + -1;
    }
    else {
      iVar5 = 0;
    }
    return iVar5;
  }
LAB_0090e474:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0090e488  FUN_0090e488 =====

void FUN_0090e488(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 8) != piVar1) {
    uVar4 = 0x4002;
    piVar2 = *(int **)(param_1 + 8);
    do {
      uVar4 = uVar4 >> 1;
      piVar3 = piVar2 + 1;
      *piVar2 = (int)uVar4 << 0x10;
      piVar2 = piVar3;
    } while (piVar3 != piVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 0090e4bc  FUN_0090e4bc =====

ulong FUN_0090e4bc(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 2;
}


// ===== 0090e4d0  FUN_0090e4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e4d0(long *param_1,long *param_2,undefined4 *param_3,undefined8 *param_4,long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined4 uStack_68;
  long local_60;
  undefined4 local_58;
  
  lVar7 = *param_2;
  *param_1 = lVar7;
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7 + 8);
  }
  lVar7 = param_2[3];
  lVar9 = param_2[2];
  lVar8 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar7;
  param_1[2] = lVar9;
  param_1[1] = lVar8;
  puVar4 = (undefined8 *)operator_new(0x10);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 10;
  param_1[5] = (long)puVar4;
  pvVar5 = operator_new(0x2a8);
  FUN_00921310(pvVar5,puVar4);
  param_1[6] = (long)pvVar5;
  pvVar5 = operator_new(0x70);
  local_70 = (long *)*param_4;
  *param_4 = 0;
  FUN_009139c8(pvVar5,param_2,&local_70);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  param_1[7] = (long)pvVar5;
  pvVar5 = operator_new(0x28);
  FUN_00914bc8(pvVar5,*param_3);
  param_1[8] = (long)pvVar5;
  pvVar5 = operator_new(0x20);
  FUN_00915530();
  param_1[9] = (long)pvVar5;
  pvVar5 = operator_new(0x38);
  FUN_0091f390(pvVar5,*(undefined8 *)(param_3 + 2),param_1[5],param_1[6]);
  plVar6 = local_70;
  param_1[10] = (long)pvVar5;
  local_60 = param_1[5];
  local_58 = param_3[7];
  uStack_68 = param_3[5];
  local_70._2_6_ = SUB86(plVar6,2);
  local_70._0_2_ = (ushort)(*(byte *)((long)param_3 + 0x1b) ^ 1);
  local_70 = (long *)CONCAT44((int)*(undefined8 *)(param_3 + 2),(undefined4)local_70);
  lVar7 = (**(code **)(*param_5 + 0x10))(param_5,param_2,&local_70);
  param_1[0xb] = lVar7;
  plVar6 = (long *)operator_new(8);
  puVar3 = PTR_DAT_00d53110;
  param_1[0xc] = (long)plVar6;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6 = (long *)operator_new(0x28);
  puVar3 = PTR_DAT_00d53118;
  uVar2 = _UNK_001f4db8;
  uVar1 = _DAT_001f4db0;
  lVar7 = param_1[7];
  *(undefined1 *)(plVar6 + 1) = 0;
  plVar6[4] = lVar7;
  *(undefined8 *)((long)plVar6 + 0x14) = uVar2;
  *(undefined8 *)((long)plVar6 + 0xc) = uVar1;
  *plVar6 = (long)(puVar3 + 0x10);
  param_1[0xd] = (long)plVar6;
  plVar6 = (long *)operator_new(8);
  puVar3 = PTR_DAT_00d530e0;
  param_1[0xe] = (long)plVar6;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6 = (long *)operator_new(8);
  puVar3 = PTR_DAT_00d53108;
  param_1[0xf] = (long)plVar6;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6 = (long *)operator_new(8);
  puVar3 = PTR_DAT_00d53120;
  param_1[0x10] = (long)plVar6;
  *plVar6 = (long)(puVar3 + 0x10);
  return;
}


// ===== 0090e6f0  FUN_0090e6f0 =====

void FUN_0090e6f0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar3 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0090e854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0090e868  FUN_0090e868 =====

void FUN_0090e868(undefined8 *param_1,uint *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  void *local_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_00d3d5c0;
  lVar5 = *param_3;
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar7 = param_3[4];
  lVar5 = param_3[3];
  lVar8 = param_3[1];
  param_1[3] = param_3[2];
  param_1[2] = lVar8;
  param_1[5] = lVar7;
  param_1[4] = lVar5;
  lVar5 = param_3[5];
  param_3[5] = 0;
  param_1[6] = lVar5;
  lVar5 = param_3[7];
  param_3[7] = 0;
  param_1[7] = lVar5;
  lVar5 = param_3[8];
  param_3[8] = 0;
  param_1[8] = lVar5;
  lVar5 = param_3[9];
  param_3[9] = 0;
  param_1[9] = lVar5;
  lVar5 = param_3[10];
  param_3[10] = 0;
  param_1[10] = lVar5;
  lVar5 = param_3[0xc];
  param_3[0xc] = 0;
  param_1[0xb] = lVar5;
  lVar5 = param_3[0xd];
  param_3[0xd] = 0;
  param_1[0xc] = lVar5;
  lVar5 = param_3[0xf];
  param_3[0xf] = 0;
  param_1[0xd] = lVar5;
  lVar5 = param_3[0xe];
  param_3[0xe] = 0;
  param_1[0xe] = lVar5;
  lVar5 = param_3[0x10];
  param_3[0x10] = 0;
  param_1[0xf] = lVar5;
  lVar5 = param_3[6];
  param_3[6] = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = 0;
  lVar5 = param_3[0xb];
  param_3[0xb] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x309;
  *(undefined2 *)((long)param_1 + 0xd4) = 1;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  param_1[0x12] = lVar5;
  param_1[0x22] = 0x1680;
  pvVar3 = operator_new__(0x2d00);
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x23] = pvVar3;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0x100;
  *(char *)((long)param_1 + 0x132) = (char)param_2[6];
  *(undefined1 *)((long)param_1 + 0x133) = *(undefined1 *)((long)param_2 + 0x19);
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  uVar1 = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2b) = uVar1;
  param_1[0x2c] = 0;
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_0084a0a4(local_48,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/audio_coding/neteq/neteq_impl.cc",0x511,
                 "NetEq config: ",local_48);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  uVar6 = *param_2;
  if ((int)uVar6 < 32000) {
    if ((uVar6 == 8000) || (uVar6 == 16000)) goto LAB_0090eaa8;
  }
  else if ((uVar6 == 32000) || (uVar6 == 48000)) goto LAB_0090eaa8;
  uVar4 = FUN_004249b0();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../modules/audio_coding/neteq/neteq_impl.cc",0x52b,"Sample rate "
                 ,uVar6," Hz not supported. Changing to 8000 Hz.");
  }
  uVar6 = 8000;
LAB_0090eaa8:
  (**(code **)(*(long *)param_1[0x12] + 0x38))((long *)param_1[0x12],param_2[4]);
  *(uint *)(param_1 + 0x1d) = uVar6;
  uVar2 = (uVar6 >> 6 & 0x3ff) / 0x7d;
  *(uint *)(param_1 + 0x1c) = uVar6;
  *(uint *)((long)param_1 + 0xe4) = uVar2;
  param_1[0x1e] = (ulong)(uVar2 * 0x50);
  (**(code **)(*(long *)param_1[0x12] + 0x30))((long *)param_1[0x12],uVar6);
  param_1[0x1f] = param_1[0x1e] << 1;
  if ((param_4 & 1) != 0) {
    FUN_0090eb2c(param_1,uVar6,1);
  }
  return;
}


// ===== 0090eb2c  FUN_0090eb2c =====

void FUN_0090eb2c(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  
  uVar3 = FUN_0044075c();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_002258f2,"../../modules/audio_coding/neteq/neteq_impl.cc",0x3c00,
                 "SetSampleRateAndChannels ",param_2,&DAT_001d5e07,param_3);
  }
  if ((int)param_2 < 32000) {
    if (param_2 == 8000) goto LAB_0090ebc4;
    uVar11 = 16000;
  }
  else {
    if (param_2 == 32000) goto LAB_0090ebc4;
    uVar11 = 48000;
  }
  if (param_2 != uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x783,
                 "fs_hz == 8000 || fs_hz == 16000 || fs_hz == 32000 || fs_hz == 48000",&DAT_001f5fa0
                );
  }
LAB_0090ebc4:
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x784,"channels > 0",&DAT_001fbca2
                 ,0,0);
  }
  if (0x18 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x785,
                 "channels <= kMaxNumberOfAudioChannels",&DAT_001fb920,param_3,0x18);
  }
  uVar12 = (ulong)((param_2 >> 2 & 0x3fff) / 0x19);
  uVar3 = param_3 * uVar12;
  param_1[0x1e] = uVar12;
  if (0x1e00 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x78c,
                 "channels * output_size_samples_ <= AudioFrame::kMaxDataSizeSamples",&DAT_001fb920,
                 uVar3,0x1e00);
  }
  FUN_00921aac(param_1[0x10],(int)param_1[0x1c]);
  uVar11 = param_2 >> 6 & 0x3ff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1f] = param_1[0x1e] * 3;
  *(uint *)(param_1 + 0x1c) = param_2;
  *(uint *)((long)param_1 + 0xe4) = uVar11 / 0x7d;
  lVar4 = (**(code **)(*(long *)param_1[7] + 0x60))();
  if (lVar4 != 0) {
    FUN_00926910();
  }
  pvVar5 = operator_new(0x20);
  FUN_009157a8(pvVar5,param_3);
  plVar6 = (long *)param_1[0x13];
  param_1[0x13] = (long)pvVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  lVar4 = (long)*(int *)((long)param_1 + 0xe4) * 0x21c0;
  FUN_0091594c(puVar7,param_3,lVar4);
  puVar7[4] = lVar4;
  pvVar5 = (void *)param_1[0x14];
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[6] = 0;
  *puVar7 = &PTR_FUN_00d3db80;
  param_1[0x14] = (long)puVar7;
  if (pvVar5 != (void *)0x0) {
    FUN_00915980(pvVar5);
    operator_delete(pvVar5);
  }
  pvVar5 = operator_new(0x20);
  FUN_0091a3ec(pvVar5,param_3);
  plVar6 = (long *)param_1[0x11];
  param_1[0x11] = (long)pvVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_00920520(param_1 + 0x1a);
  (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3);
  lVar4 = param_1[0x14];
  lVar14 = *(long *)(lVar4 + 0x20);
  lVar8 = (**(code **)(*(long *)param_1[0x15] + 0x30))();
  FUN_00925e40(lVar4,lVar14 - lVar8);
  puVar7 = (undefined8 *)operator_new(0x38);
  lVar4 = param_1[0x15];
  lVar14 = param_1[7];
  *(uint *)(puVar7 + 1) = param_2;
  *puVar7 = &PTR_FUN_00d3d6e8;
  puVar7[4] = lVar4;
  lVar4 = param_1[0x10];
  lVar8 = param_1[0x11];
  uVar1 = (param_2 >> 3 & 0x1fff) / 0x7d;
  uVar2 = param_2 + uVar1 * -1000;
  puVar7[2] = lVar14;
  puVar7[3] = lVar8;
  if ((uVar2 & 0xffff) == 0) {
    plVar6 = (long *)param_1[0x16];
    puVar7[5] = (ulong)uVar1;
    puVar7[6] = lVar4;
    param_1[0x16] = (long)puVar7;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      lVar8 = param_1[0x11];
    }
    lVar4 = (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],param_2,param_3,lVar8);
    plVar6 = (long *)param_1[0x18];
    param_1[0x18] = lVar4;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar6 = (long *)param_1[0xf];
    lVar4 = param_1[0x11];
    uVar9 = (**(code **)(*(long *)param_1[0x15] + 0x30))();
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3,lVar4,uVar9);
    plVar6 = (long *)param_1[0x19];
    param_1[0x19] = lVar4;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    puVar10 = (uint *)operator_new(0x28);
    lVar4 = param_1[0x14];
    *puVar10 = param_2;
    *(undefined1 *)(puVar10 + 1) = 1;
    lVar8 = param_1[7];
    *(long *)(puVar10 + 6) = lVar4;
    pvVar5 = (void *)param_1[0x1b];
    param_1[0x1b] = (long)puVar10;
    *(ulong *)(puVar10 + 2) = (ulong)(uVar11 / 0x19);
    *(long *)(puVar10 + 4) = lVar8;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    if ((ulong)param_1[0x22] < param_3 * 0x1680) {
      param_1[0x22] = param_3 * 0x1680;
      pvVar5 = operator_new__(param_3 * 0x2d00);
      pvVar13 = (void *)param_1[0x23];
      param_1[0x23] = (long)pvVar5;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
    }
    plVar6 = (long *)param_1[0x12];
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0090eedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x30))(plVar6,(int)param_1[0x1c],param_1[0x1e]);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x7bf,"controller_",&DAT_001fbee0,
                 "Unexpectedly found no NetEqController");
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,uVar2 & 0xffff,0,param_2,
               " is not evenly divisible by ",1000);
}


// ===== 0090efd4  FUN_0090efd4 =====

void FUN_0090efd4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x2e];
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_00d3d5c0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  FUN_005da674(param_1 + 0x28);
  pvVar2 = (void *)param_1[0x27];
  param_1[0x27] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar2 = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00915980(pvVar2);
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar2 = (void *)param_1[6];
  param_1[6] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0090f25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 0090f270  FUN_0090f270 =====

void FUN_0090f270(void *param_1)

{
  FUN_0090efd4();
  operator_delete(param_1);
  return;
}


// ===== 0090f2a0  FUN_0090f2a0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0090f2a0(long param_1,long param_2,void *param_3,undefined1 *param_4,undefined1 **param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined3 uVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  long *******ppppppplVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  long ******pppppplVar17;
  undefined8 uVar18;
  int *piVar19;
  byte bVar20;
  long *******ppppppplVar21;
  char cVar22;
  int *local_170;
  int *piStack_168;
  undefined1 *local_160;
  long *******local_158;
  long *******local_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long *local_a0;
  long *******local_98;
  long *******local_90;
  ulong local_88;
  char **local_80;
  char *local_78;
  char *pcStack_70;
  
  if (((DAT_00d804b0 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00d804b0), iVar7 != 0)) {
    DAT_00d804a8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d804b0);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d804a8 != '\0') {
    FUN_0066d348(0x42,DAT_00d804a8,"NetEqImpl::InsertPacket",0,0,0,0,0,0);
    local_78 = DAT_00d804a8;
    pcStack_70 = "NetEqImpl::InsertPacket";
    local_80 = &local_78;
  }
  if (param_4 == (undefined1 *)0x0) {
    uVar12 = FUN_004249b0();
    if ((uVar12 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ead,"../../modules/audio_coding/neteq/neteq_impl.cc",0x5f3,
                   "InsertPacket",&DAT_001c4dc3,"payload is empty");
      uVar18 = 0xffffffff;
      goto joined_r0x0090fbe0;
    }
LAB_0090f590:
    uVar18 = 0xffffffff;
    goto joined_r0x0090fbe0;
  }
  FUN_00921f34(*(undefined8 *)(param_1 + 0x80));
  local_98 = (long *******)&local_98;
  local_88 = 0;
  local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = local_98;
  FUN_0091d2b8(&local_140);
  uStack_138 = (undefined1 *)0x0;
  local_140 = (undefined1 *)
              CONCAT44(CONCAT22(CONCAT11(local_140._7_1_,*(undefined1 *)(param_2 + 1)),
                                *(undefined2 *)(param_2 + 2)),*(undefined4 *)(param_2 + 4));
  puVar16 = (undefined1 *)0x0;
  puVar1 = local_130;
  if (local_130 < param_4) {
    puVar1 = param_4;
    if (param_4 <= local_130 + ((ulong)local_130 >> 1)) {
      puVar1 = local_130 + ((ulong)local_130 >> 1);
    }
    puVar10 = (undefined1 *)operator_new__((ulong)puVar1);
    puVar16 = local_128;
    bVar6 = local_128 != (undefined1 *)0x0;
    local_128 = puVar10;
    if (bVar6) {
      operator_delete__(puVar16);
      puVar16 = uStack_138;
    }
  }
  local_130 = puVar1;
  memcpy(local_128 + (long)puVar16,param_3,(size_t)param_4);
  uStack_138 = param_4;
  ppppppplVar11 = (long *******)operator_new(0xb8);
  if (ppppppplVar11 == (long *******)0x0) {
LAB_0090ff3c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *ppppppplVar11 = (long ******)0x0;
  ppppppplVar11[1] = (long ******)0x0;
  if (ppppppplVar11 + 2 == (long *******)0x0) goto LAB_0090ff3c;
  FUN_0091d2d8(ppppppplVar11 + 2,&local_140);
  *ppppppplVar11 = (long ******)local_98;
  ppppppplVar11[1] = (long ******)&local_98;
  local_98[1] = (long ******)ppppppplVar11;
  local_88 = local_88 + 1;
  local_98 = ppppppplVar11;
  FUN_0091d3a4(&local_140);
  cVar22 = *(char *)(param_1 + 0x131);
  if (cVar22 == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  uVar12 = FUN_009146ac(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_2 + 1));
  if ((uVar12 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))(*(long **)(param_1 + 0x60),&local_98);
  }
  if (local_88 == 0) goto LAB_0090ff50;
  if (cVar22 != '\0') {
    iVar7 = *(int *)(local_90 + 2);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
    (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
    FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0),iVar7 - *(int *)(param_1 + 0x128));
    *(int *)(param_1 + 0x128) = iVar7;
  }
  uVar12 = FUN_009146ac(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_2 + 1));
  if ((uVar12 & 1) == 0) {
LAB_0090f510:
    iVar7 = FUN_009146e0(*(undefined8 *)(param_1 + 0x38),&local_98);
    if (iVar7 != -5) {
      uVar12 = FUN_009146ac(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_2 + 1));
      if (((uVar12 & 1) != 0) &&
         ((**(code **)(**(long **)(param_1 + 0x60) + 0x20))(*(long **)(param_1 + 0x60),&local_98),
         local_88 == 0)) {
LAB_0090ff50:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                  );
      }
      for (ppppppplVar11 = local_90; (long ********)ppppppplVar11 != &local_98;
          ppppppplVar11 = (long *******)ppppppplVar11[1]) {
        while (uVar12 = FUN_00914678(*(undefined8 *)(param_1 + 0x38),
                                     *(undefined1 *)((long)ppppppplVar11 + 0x16)), (uVar12 & 1) != 0
              ) {
          local_130 = (undefined1 *)CONCAT44(local_130._4_4_,0xaaaaaaaa);
          local_140 = (undefined1 *)0x0;
          uStack_138 = (undefined1 *)0x0;
          local_130 = (undefined1 *)((ulong)local_130 & 0xffffffffffffff00);
          iVar7 = FUN_00914e28(*(undefined4 *)(ppppppplVar11 + 2),ppppppplVar11[5],ppppppplVar11[3],
                               &local_140);
          if ((iVar7 != 0) ||
             (iVar7 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                                (*(long **)(param_1 + 0x40),&local_140), iVar7 != 0))
          goto LAB_0090f524;
          ppppppplVar21 = (long *******)ppppppplVar11[1];
          (*ppppppplVar11)[1] = (long *****)ppppppplVar21;
          *ppppppplVar21 = *ppppppplVar11;
          local_88 = local_88 - 1;
          if ((ppppppplVar11 == (long *******)0xfffffffffffffff0) ||
             (FUN_0091d3a4(ppppppplVar11 + 2), ppppppplVar11 == (long *******)0x0))
          goto LAB_0090ff28;
          operator_delete(ppppppplVar11);
          ppppppplVar11 = ppppppplVar21;
          if ((long ********)ppppppplVar21 == &local_98) goto LAB_0090f6d8;
        }
      }
LAB_0090f6d8:
      local_148 = 0;
      local_158 = (long *******)&local_158;
      local_150 = (long *******)&local_158;
      uVar12 = local_88;
      if (local_88 != 0) {
        uVar8 = 0;
        do {
          while( true ) {
            ppppppplVar11 = local_90;
            lVar13 = (**(code **)(**(long **)(param_1 + 0x38) + 0x40))
                               (*(long **)(param_1 + 0x38),*(undefined1 *)((long)local_90 + 0x16));
            ppppppplVar21 = local_90;
            if (lVar13 == 0) {
              uVar12 = FUN_004022fc();
              if ((uVar12 & 1) != 0) goto LAB_0090fbf0;
              FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x95a,
                           "SplitAudio unknown payload type");
              uVar18 = 0xffffffff;
              goto LAB_0090fec8;
            }
            if (*(char *)(lVar13 + 0x90) == '\x01') break;
            uVar5 = *(undefined3 *)((long)ppppppplVar11 + 0x14);
            uVar4 = *(undefined3 *)((long)ppppppplVar11 + 0x14);
            uVar9 = *(undefined4 *)((long)ppppppplVar11 + 0x34);
            local_160 = &DAT_aaaaaaaaaaaaaaaa;
            piStack_168 = (int *)&DAT_aaaaaaaaaaaaaaaa;
            local_170 = (int *)&DAT_aaaaaaaaaaaaaaaa;
            plVar14 = (long *)FUN_00913d00();
            (**(code **)(*plVar14 + 0x10))
                      (&local_170,plVar14,ppppppplVar11 + 3,*(undefined4 *)(ppppppplVar11 + 2));
            ppppppplVar11 = local_90;
            piVar3 = piStack_168;
            if (local_170 == piStack_168) {
              if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
                          );
              }
              pppppplVar17 = local_90[1];
              (*local_90)[1] = (long *****)pppppplVar17;
              *pppppplVar17 = (long *****)*local_90;
              local_88 = local_88 - 1;
              if ((local_90 + 2 == (long *******)0x0) ||
                 (FUN_0091d3a4(local_90 + 2), ppppppplVar11 == (long *******)0x0))
              goto LAB_0090ff28;
              operator_delete(ppppppplVar11);
            }
            else {
              bVar6 = true;
              piVar19 = local_170;
              do {
                if ((uVar8 & 1) == 0) {
                  uVar8 = (**(code **)(**(long **)(piVar19 + 2) + 0x18))();
                  if (bVar6) goto LAB_0090f8bc;
LAB_0090f810:
                  uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
                  local_140 = &DAT_aaaaaaaaaaaaaaaa;
                  local_128 = &DAT_aaaaaaaaaaaaaaaa;
                  local_130 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
                  local_120 = &DAT_aaaaaaaaaaaaaaaa;
                  local_108 = &DAT_aaaaaaaaaaaaaaaa;
                  local_110 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_100 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                  local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  FUN_0091d2b8(&local_140);
                  local_140 = (undefined1 *)CONCAT44(CONCAT13(local_140._7_1_,uVar4),*piVar19);
                  local_120 = (undefined1 *)CONCAT44(uVar9,piVar19[1]);
                  if (*piVar19 == *(int *)(param_5 + 4)) {
                    puStack_118 = (undefined1 *)CONCAT44(puStack_118._4_4_,*(undefined4 *)param_5);
                    if (((ulong)local_b0 & 1) == 0) {
                      puVar1 = param_5[1];
                      local_110 = (undefined1 *)0x0;
                      local_108 = (undefined1 *)0x0;
                      local_100 = (undefined1 *)0x0;
                      uVar12 = (long)param_5[2] - (long)puVar1;
                      if (uVar12 != 0) {
                        if ((long)uVar12 < 0) {
LAB_0090ff78:
                          local_100 = (undefined1 *)0x0;
                          local_108 = (undefined1 *)0x0;
                          local_110 = (undefined1 *)0x0;
                    /* WARNING: Subroutine does not return */
                          FUN_005da79c();
                        }
                        local_110 = (undefined1 *)operator_new(uVar12);
                        puVar16 = local_110 + uVar12;
                        local_108 = local_110;
                        local_100 = puVar16;
                        memcpy(local_110,puVar1,uVar12);
                        local_108 = puVar16;
                      }
                      puStack_f0 = param_5[5];
                      puStack_f8 = param_5[4];
                      local_e0 = param_5[7];
                      puStack_e8 = param_5[6];
                      puStack_b8 = (undefined1 *)
                                   CONCAT71(puStack_b8._1_7_,*(undefined1 *)(param_5 + 0xc));
                      puStack_d0 = param_5[9];
                      puStack_d8 = param_5[8];
                      local_c0 = param_5[0xb];
                      puStack_c8 = param_5[10];
                      local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,1);
                    }
                    else {
                      if (&puStack_118 != param_5) {
                        FUN_005e72f8(&local_110,param_5[1],param_5[2],
                                     (long)param_5[2] - (long)param_5[1] >> 2);
                      }
                      puStack_f0 = param_5[5];
                      puStack_f8 = param_5[4];
                      local_e0 = param_5[7];
                      puStack_e8 = param_5[6];
                      puStack_b8 = (undefined1 *)
                                   CONCAT71(puStack_b8._1_7_,*(undefined1 *)(param_5 + 0xc));
                      puStack_d0 = param_5[9];
                      puStack_d8 = param_5[8];
                      local_c0 = param_5[0xb];
                      puStack_c8 = param_5[10];
                    }
                  }
                  plVar14 = *(long **)(piVar19 + 2);
                  piVar19[2] = 0;
                  piVar19[3] = 0;
                  if (local_a0 != (long *)0x0) {
                    lVar13 = *local_a0;
                    local_a0 = plVar14;
                    (**(code **)(lVar13 + 8))();
                    plVar14 = local_a0;
                  }
                  local_a0 = plVar14;
                  ppppppplVar11 = (long *******)operator_new(0xb8);
                  if (ppppppplVar11 == (long *******)0x0) goto LAB_0090ff3c;
                  *ppppppplVar11 = (long ******)0x0;
                  ppppppplVar11[1] = (long ******)0x0;
                  if (ppppppplVar11 + 2 == (long *******)0x0) goto LAB_0090ff3c;
                  FUN_0091d2d8(ppppppplVar11 + 2,&local_140);
                  *ppppppplVar11 = (long ******)local_158;
                  ppppppplVar11[1] = (long ******)&local_158;
                  local_158[1] = (long ******)ppppppplVar11;
                  local_148 = local_148 + 1;
                  local_158 = ppppppplVar11;
                  FUN_0091d3a4(&local_140);
                }
                else {
                  uVar8 = 1;
                  if (!bVar6) goto LAB_0090f810;
LAB_0090f8bc:
                  uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
                  local_140 = &DAT_aaaaaaaaaaaaaaaa;
                  local_128 = &DAT_aaaaaaaaaaaaaaaa;
                  local_130 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
                  local_120 = &DAT_aaaaaaaaaaaaaaaa;
                  local_108 = &DAT_aaaaaaaaaaaaaaaa;
                  local_110 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_100 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                  local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  FUN_0091d2b8(&local_140);
                  local_140 = (undefined1 *)CONCAT44(CONCAT13(local_140._7_1_,uVar5),*piVar19);
                  local_120 = (undefined1 *)CONCAT44(uVar9,piVar19[1]);
                  if (*piVar19 == *(int *)(param_5 + 4)) {
                    puStack_118 = (undefined1 *)CONCAT44(puStack_118._4_4_,*(undefined4 *)param_5);
                    if (((ulong)local_b0 & 1) == 0) {
                      puVar1 = param_5[1];
                      local_110 = (undefined1 *)0x0;
                      local_108 = (undefined1 *)0x0;
                      local_100 = (undefined1 *)0x0;
                      uVar12 = (long)param_5[2] - (long)puVar1;
                      if (uVar12 != 0) {
                        if ((long)uVar12 < 0) goto LAB_0090ff78;
                        local_110 = (undefined1 *)operator_new(uVar12);
                        puVar16 = local_110 + uVar12;
                        local_108 = local_110;
                        local_100 = puVar16;
                        memcpy(local_110,puVar1,uVar12);
                        local_108 = puVar16;
                      }
                      puStack_f0 = param_5[5];
                      puStack_f8 = param_5[4];
                      local_e0 = param_5[7];
                      puStack_e8 = param_5[6];
                      puStack_b8 = (undefined1 *)
                                   CONCAT71(puStack_b8._1_7_,*(undefined1 *)(param_5 + 0xc));
                      puStack_d0 = param_5[9];
                      puStack_d8 = param_5[8];
                      local_c0 = param_5[0xb];
                      puStack_c8 = param_5[10];
                      local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,1);
                    }
                    else {
                      if (&puStack_118 != param_5) {
                        FUN_005e72f8(&local_110,param_5[1],param_5[2],
                                     (long)param_5[2] - (long)param_5[1] >> 2);
                      }
                      puStack_f0 = param_5[5];
                      puStack_f8 = param_5[4];
                      local_e0 = param_5[7];
                      puStack_e8 = param_5[6];
                      puStack_b8 = (undefined1 *)
                                   CONCAT71(puStack_b8._1_7_,*(undefined1 *)(param_5 + 0xc));
                      puStack_d0 = param_5[9];
                      puStack_d8 = param_5[8];
                      local_c0 = param_5[0xb];
                      puStack_c8 = param_5[10];
                    }
                  }
                  plVar14 = *(long **)(piVar19 + 2);
                  piVar19[2] = 0;
                  piVar19[3] = 0;
                  if (local_a0 != (long *)0x0) {
                    lVar13 = *local_a0;
                    local_a0 = plVar14;
                    (**(code **)(lVar13 + 8))();
                    plVar14 = local_a0;
                  }
                  local_a0 = plVar14;
                  if (local_88 == 0) goto LAB_0090ff50;
                  FUN_0091d4ac(local_90 + 2,&local_140);
                  FUN_0091d3a4(&local_140);
                  ppppppplVar11 = local_90;
                  if ((&local_158 != (long ********)local_90) &&
                     (ppppppplVar21 = (long *******)local_90[1],
                     &local_158 != (long ********)ppppppplVar21)) {
                    (*local_90)[1] = (long *****)ppppppplVar21;
                    *ppppppplVar21 = *local_90;
                    local_158[1] = (long ******)local_90;
                    *ppppppplVar11 = (long ******)local_158;
                    local_158 = ppppppplVar11;
                    ppppppplVar11[1] = (long ******)&local_158;
                    local_88 = local_88 - 1;
                    local_148 = local_148 + 1;
                  }
                }
                piVar19 = piVar19 + 4;
                bVar6 = false;
              } while (piVar19 != piVar3);
            }
            piVar19 = local_170;
            piVar3 = piStack_168;
            if (local_170 != (int *)0x0) {
              while (piVar19 != piVar3) {
                piVar3 = piVar3 + -4;
                if (piVar3 == (int *)0x0) goto LAB_0090ff28;
                FUN_006701d4(piVar3);
              }
              piStack_168 = piVar19;
              operator_delete(local_170);
            }
LAB_0090f714:
            if (local_88 == 0) goto LAB_0090fbf8;
          }
          if ((&local_158 == (long ********)local_90) ||
             (ppppppplVar11 = (long *******)local_90[1], &local_158 == (long ********)ppppppplVar11)
             ) goto LAB_0090f714;
          (*local_90)[1] = (long *****)ppppppplVar11;
          *ppppppplVar11 = *local_90;
          local_158[1] = (long ******)local_90;
          *ppppppplVar21 = (long ******)local_158;
          local_158 = ppppppplVar21;
          ppppppplVar21[1] = (long ******)&local_158;
          local_88 = local_88 - 1;
          local_148 = local_148 + 1;
        } while (local_88 != 0);
LAB_0090fbf8:
        if ((long ********)local_150 == &local_158) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          ppppppplVar11 = local_150;
          do {
            ppppppplVar21 = ppppppplVar11 + 6;
            ppppppplVar11 = (long *******)ppppppplVar11[1];
            if (*(int *)ppppppplVar21 == 0) {
              uVar12 = uVar12 + 1;
            }
          } while ((long ********)ppppppplVar11 != &local_158);
        }
      }
      if (uVar12 <= local_148 && local_148 - uVar12 != 0) {
        (**(code **)(**(long **)(param_1 + 0x80) + 0x20))
                  (*(long **)(param_1 + 0x80),local_148 - uVar12);
      }
      if ((long ********)local_150 != &local_158) {
        bVar20 = 0;
        ppppppplVar11 = local_150;
        do {
          uVar12 = FUN_00910038(param_1,*(undefined1 *)((long)ppppppplVar11 + 0x16));
          if ((uVar12 & 1) != 0) {
            (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
            bVar20 = 1;
          }
          uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          local_130 = &DAT_aaaaaaaaaaaaaaaa;
          lVar13 = (**(code **)(**(long **)(param_1 + 0x38) + 0x40))
                             (*(long **)(param_1 + 0x38),*(undefined1 *)((long)ppppppplVar11 + 0x16)
                             );
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          local_130 = &DAT_aaaaaaaaaaaaaaaa;
          if (lVar13 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(byte *)(lVar13 + 0x90) - 1 < 2;
          }
          uStack_138._0_7_ = CONCAT16(bVar6,0xaaaaaaaaaaaa);
          uStack_138 = (undefined1 *)CONCAT17(0xaa,(undefined7)uStack_138);
          uVar18 = uStack_138;
          if (ppppppplVar11[0x16] == (long ******)0x0) {
            local_140 = (undefined1 *)*(undefined8 *)(param_1 + 0xf8);
            uStack_138 = (undefined1 *)CONCAT44(uStack_138._4_4_,*(undefined4 *)(ppppppplVar11 + 2))
            ;
            uStack_138._6_2_ = SUB82(uVar18,6);
            uStack_138 = (undefined1 *)CONCAT26(uStack_138._6_2_,*(undefined6 *)(ppppppplVar11 + 2))
            ;
            pppppplVar17 = (long ******)0x0;
          }
          else {
            local_140 = (undefined1 *)(*(code *)(*ppppppplVar11[0x16])[2])();
            uVar18 = uStack_138;
            pppppplVar17 = ppppppplVar11[0x16];
            uStack_138 = (undefined1 *)CONCAT44(uStack_138._4_4_,*(undefined4 *)(ppppppplVar11 + 2))
            ;
            uStack_138._6_2_ = SUB82(uVar18,6);
            uStack_138 = (undefined1 *)CONCAT26(uStack_138._6_2_,*(undefined6 *)(ppppppplVar11 + 2))
            ;
            if (pppppplVar17 != (long ******)0x0) {
              pppppplVar17 = (long ******)(*(code *)(*pppppplVar17)[3])();
            }
          }
          uStack_138 = (undefined1 *)
                       (CONCAT17((char)pppppplVar17,(undefined7)uStack_138) & 0x1ffffffffffffff);
          iVar7 = (**(code **)(**(long **)(param_1 + 0x50) + 0x28))
                            (*(long **)(param_1 + 0x50),ppppppplVar11 + 2);
          if (iVar7 == 1) {
            bVar20 = 1;
          }
          else if (iVar7 != 0) goto LAB_0090fbf0;
          local_130 = (undefined1 *)CONCAT71(local_130._1_7_,bVar20);
          uVar12 = (**(code **)(**(long **)(param_1 + 0x90) + 0x78))
                             (*(long **)(param_1 + 0x90),*(undefined4 *)(param_1 + 0xe0),
                              ((*(byte *)(param_1 + 0x124) | bVar20) ^ 0xff) & 1,&local_140);
          if ((uVar12 >> 0x20 & 1) != 0) {
            (**(code **)(**(long **)(param_1 + 0x80) + 0x28))
                      (*(long **)(param_1 + 0x80),(long)(int)uVar12);
          }
          ppppppplVar11 = (long *******)ppppppplVar11[1];
        } while ((long ********)ppppppplVar11 != &local_158);
        if (bVar20 != 0) {
          cVar22 = '\x01';
          *(undefined1 *)(param_1 + 0x124) = 1;
        }
      }
      if (*(char *)(param_1 + 0x131) == '\x01') {
        *(undefined1 *)(param_1 + 0x131) = 0;
        *(undefined1 *)(param_1 + 0x124) = 1;
      }
      *(undefined1 *)(param_1 + 0x178) = 0;
      if ((cVar22 != '\0') &&
         (uVar12 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(), (uVar12 & 1) == 0)) {
        lVar13 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
        uVar2 = *(undefined1 *)(lVar13 + 6);
        uVar12 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),uVar2);
        if ((uVar12 & 1) == 0) {
          plVar14 = (long *)FUN_009144e8(*(undefined8 *)(param_1 + 0x38),uVar2);
          lVar13 = (**(code **)(*plVar14 + 0x60))();
        }
        else {
          lVar13 = 1;
        }
        uVar18 = (**(code **)(**(long **)(param_1 + 0x38) + 0x40))(*(long **)(param_1 + 0x38),uVar2)
        ;
        iVar7 = FUN_00910200();
        if ((iVar7 != *(int *)(param_1 + 0xe0)) ||
           (lVar15 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98)), lVar13 != lVar15)) {
          uVar9 = FUN_00910200(uVar18);
          FUN_0090eb2c(param_1,uVar9,lVar13);
        }
      }
      uVar18 = 0;
      goto LAB_0090fec8;
    }
  }
  else {
    uVar12 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(*(long **)(param_1 + 0x58),&local_98)
    ;
    if ((uVar12 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
                (*(long **)(param_1 + 0x58),&local_98,*(undefined8 *)(param_1 + 0x38));
      if (local_88 == 0) goto LAB_0090f590;
      goto LAB_0090f510;
    }
  }
LAB_0090f524:
  uVar18 = 0xffffffff;
LAB_0090f528:
  if (local_88 != 0) {
    pppppplVar17 = local_98[1];
    (*local_90)[1] = (long *****)pppppplVar17;
    *pppppplVar17 = (long *****)*local_90;
    local_88 = 0;
    ppppppplVar11 = local_90;
    while ((long ********)ppppppplVar11 != &local_98) {
      if (ppppppplVar11 + 2 == (long *******)0x0) {
LAB_0090ff28:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      ppppppplVar21 = (long *******)ppppppplVar11[1];
      FUN_0091d3a4(ppppppplVar11 + 2);
      if (ppppppplVar11 == (long *******)0x0) goto LAB_0090ff28;
      operator_delete(ppppppplVar11);
      ppppppplVar11 = ppppppplVar21;
    }
  }
joined_r0x0090fbe0:
  if ((local_80 != (char **)0x0) && (**local_80 != '\0')) {
    FUN_0066d348(0x45,*local_80,local_80[1],0,0,0,0,0,0);
  }
  return uVar18;
LAB_0090fbf0:
  uVar18 = 0xffffffff;
LAB_0090fec8:
  if (local_148 != 0) {
    pppppplVar17 = local_158[1];
    (*local_150)[1] = (long *****)pppppplVar17;
    *pppppplVar17 = (long *****)*local_150;
    local_148 = 0;
    ppppppplVar11 = local_150;
    while ((long ********)ppppppplVar11 != &local_158) {
      if (ppppppplVar11 + 2 == (long *******)0x0) goto LAB_0090ff28;
      ppppppplVar21 = (long *******)ppppppplVar11[1];
      FUN_0091d3a4(ppppppplVar11 + 2);
      if (ppppppplVar11 == (long *******)0x0) goto LAB_0090ff28;
      operator_delete(ppppppplVar11);
      ppppppplVar11 = ppppppplVar21;
    }
  }
  goto LAB_0090f528;
}


// ===== 0090ffac  FUN_0090ffac =====

void FUN_0090ffac(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
              );
  }
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = (long *)plVar2[1];
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar1 = *plVar2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  if ((plVar2 + 2 != (long *)0x0) && (FUN_0091d3a4(plVar2 + 2), plVar2 != (long *)0x0)) {
    operator_delete(plVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00910038  FUN_00910038 =====

undefined8 FUN_00910038(long param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar4 = FUN_00914644(*(undefined8 *)(param_1 + 0x38));
  if ((uVar4 & 1) != 0) {
    if ((*(char *)(param_1 + 0x130) == '\x01') &&
       ((uint)*(byte *)(param_1 + 0x12f) != (param_2 & 0xff))) {
      if (*(char *)(param_1 + 0x12e) == '\x01') {
        *(undefined1 *)(param_1 + 0x12e) = 0;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(ushort *)(param_1 + 0x12f) = (ushort)param_2 & 0xff | 0x100;
    return uVar5;
  }
  uVar4 = FUN_00914678(*(undefined8 *)(param_1 + 0x38),param_2);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x12e) != '\x01') ||
     ((uint)*(byte *)(param_1 + 0x12d) == (param_2 & 0xff))) {
    if (*(char *)(param_1 + 0x130) != '\x01') {
LAB_009101ac:
      uVar5 = 0;
      goto LAB_009101c8;
    }
    plVar8 = *(long **)(param_1 + 0x38);
    uVar1 = *(undefined1 *)(param_1 + 0x12f);
    lVar6 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2);
    lVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar1);
    if ((lVar6 != 0) && (lVar7 != 0)) {
      if (*(char *)(lVar6 + 0x90) == '\x02') {
        iVar2 = *(int *)(lVar6 + 0x40);
      }
      else {
        plVar8 = (long *)FUN_00913d00(lVar6);
        if (plVar8 == (long *)0x0) {
          if ((*(byte *)(lVar6 + 0x8c) & 1) == 0) goto LAB_009101ec;
          iVar2 = *(int *)(lVar6 + 0x88);
        }
        else {
          iVar2 = (**(code **)(*plVar8 + 0x58))();
        }
      }
      if (*(char *)(lVar7 + 0x90) == '\x02') {
        iVar3 = *(int *)(lVar7 + 0x40);
      }
      else {
        plVar8 = (long *)FUN_00913d00(lVar7);
        if (plVar8 == (long *)0x0) {
          if ((*(byte *)(lVar7 + 0x8c) & 1) == 0) {
LAB_009101ec:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          iVar3 = *(int *)(lVar7 + 0x88);
        }
        else {
          iVar3 = (**(code **)(*plVar8 + 0x58))();
        }
      }
      if (iVar2 == iVar3) goto LAB_009101ac;
    }
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  uVar5 = 1;
LAB_009101c8:
  *(ushort *)(param_1 + 0x12d) = (ushort)param_2 & 0xff | 0x100;
  return uVar5;
}


// ===== 00910200  FUN_00910200 =====

ulong FUN_00910200(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    uVar1 = *(uint *)(param_1 + 0x40);
  }
  else {
    plVar2 = (long *)FUN_00913d00(param_1);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00910248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      return uVar3;
    }
    if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  return (ulong)uVar1;
}


// ===== 0091027c  FUN_0091027c =====

undefined4
FUN_0091027c(long param_1,long param_2,byte *param_3,undefined4 *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00d804c0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d804c0), iVar2 != 0)) {
    DAT_00d804b8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d804c0);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d804b8 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00d804b8,"NetEqImpl::GetAudio",0,0,0,0,0,0);
    local_60 = DAT_00d804b8;
    pcStack_58 = "NetEqImpl::GetAudio";
  }
  iVar2 = FUN_0091047c(param_1,param_2,param_5);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    goto LAB_009103d4;
  }
  FUN_00921c54(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xf0),
               *(undefined4 *)(param_1 + 0xe0));
  if (param_3 != (byte *)0x0) {
    bVar1 = FUN_0065901c(param_2);
    *param_3 = bVar1 & 1;
  }
  iVar2 = *(int *)(param_1 + 0x100);
  if (iVar2 - 9U < 2) {
    uVar3 = 2;
  }
  else {
    if (iVar2 == 1) {
      psVar4 = *(short **)(*(long *)(param_1 + 0xa8) + 0x80);
      if (*(long *)(psVar4 + -4) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                  );
      }
      if (*psVar4 == 0) {
        uVar3 = 3;
        goto LAB_009103a8;
      }
    }
    uVar3 = 5;
    if (iVar2 != 0xb) {
      uVar3 = 0;
    }
    if (iVar2 == 1) {
      uVar3 = 1;
    }
  }
LAB_009103a8:
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x20);
  *(long *)(param_2 + 0x38) = 1L << ((ulong)*(uint *)(param_1 + 0x104) & 0x3f);
  uVar3 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xe8);
  }
LAB_009103d4:
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar3;
}


// ===== 0091047c  FUN_0091047c =====

int FUN_0091047c(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long ******pppppplVar3;
  undefined1 *puVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *****ppppplVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  long ******pppppplVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 uStack_f9;
  char *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_98;
  int local_90;
  int local_8c;
  byte local_88 [4];
  int local_84;
  undefined8 local_80;
  ulong local_78;
  undefined4 local_70;
  long *****local_68;
  long *****local_60;
  ulong local_58;
  
  local_68 = (long *****)&local_68;
  lVar19 = *(long *)(param_1 + 0x140);
  local_58 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0xaaaaaa00;
  local_60 = local_68;
  lVar13 = *(long *)(param_1 + 0x148);
  while (lVar2 = lVar13, lVar19 != lVar2) {
    lVar13 = lVar2 + -0x68;
    if (lVar13 == 0) goto LAB_009106a0;
    pvVar10 = *(void **)(lVar2 + -0x60);
    if (pvVar10 != (void *)0x0) {
      pvVar15 = *(void **)(lVar2 + -0x58);
      uVar17 = (ulong)((long)pvVar15 + (-4 - ((long)pvVar15 << 0x3e))) >> 2;
      uVar16 = (ulong)(((long)pvVar10 - (long)pvVar15 << 0x3e) - ((long)pvVar10 - (long)pvVar15)) >>
               2;
      if (uVar17 <= uVar16) {
        uVar16 = uVar17;
      }
      if ((1 < uVar16) && ((((int)pvVar10 - (int)pvVar15 | -(int)pvVar15) & 3U) == 0)) {
        uVar16 = uVar16 & 0x3ffffffffffffffe;
        pvVar15 = (void *)((long)pvVar15 + uVar16 * -4);
        do {
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
      }
      while (pvVar15 != pvVar10) {
        pvVar15 = (void *)((long)pvVar15 + -4);
        if (pvVar15 == (void *)0x0) goto LAB_009106a0;
      }
      *(void **)(lVar2 + -0x58) = pvVar10;
      operator_delete(pvVar10);
    }
  }
  *(long *)(param_1 + 0x148) = lVar19;
  **(long **)(param_1 + 0x30) = **(long **)(param_1 + 0x30) + 1;
  if (((*(char *)(param_1 + 0x133) == '\x01') &&
      (uVar16 = FUN_00919064(*(undefined8 *)(param_1 + 0xa8)), (uVar16 & 1) != 0)) &&
     (uVar16 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(), (uVar16 & 1) != 0)) {
    if (*(char *)(param_1 + 0x178) == '\x01') {
      *(undefined1 *)(param_1 + 0x178) = 0;
    }
    FUN_00658c90(param_2);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0xf0);
    param_2[8] = *(int *)(param_1 + 0xe0);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0xf0);
    if ((*(byte *)(param_1 + 0x131) & 1) == 0) {
      iVar8 = (**(code **)(**(long **)(param_1 + 0x60) + 0x30))
                        (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x120));
      iVar8 = iVar8 - param_2[6];
    }
    else {
      iVar8 = 0;
    }
    *param_2 = iVar8;
    uVar11 = FUN_00915b90(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_2 + 10) = uVar11;
    FUN_00921910(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xf0),0);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x80))();
    iVar8 = 0;
    goto LAB_00910620;
  }
  iVar8 = FUN_0091179c(param_1,&local_84,&local_68,&local_80,local_88,param_3);
  uVar16 = local_58;
  if (iVar8 != 0) {
LAB_0091061c:
    *(undefined4 *)(param_1 + 0x100) = 0xd;
    goto LAB_00910620;
  }
  local_90 = 0;
  local_8c = -0x55555556;
  iVar7 = FUN_00911f00(param_1,&local_68,&local_84,&local_90,&local_8c);
  iVar1 = local_84;
  iVar9 = local_90;
  lVar19 = (long)local_90;
  if (0 < local_90) {
    *(int *)(param_1 + 0x108) = local_8c;
    *(undefined1 *)(param_1 + 0x10c) = 1;
  }
  if ((local_58 != 0 && local_84 == 6) || (local_8c == 2 && local_58 < uVar16)) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    pvVar10 = operator_new(0x10);
    FUN_0090d5d0(pvVar10,uVar11);
    pvVar15 = *(void **)(param_1 + 0x138);
    *(void **)(param_1 + 0x138) = pvVar10;
    if (pvVar15 != (void *)0x0) {
      operator_delete(pvVar15);
    }
  }
  FUN_00915b00(*(undefined8 *)(param_1 + 0x98));
  bVar6 = local_88[0];
  iVar5 = local_8c;
  iVar8 = 0;
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 0) {
        FUN_0091cca4(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x118),lVar19,
                     *(undefined4 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x98));
        if (iVar9 != 0) {
          *(undefined4 *)(param_1 + 0x100) = 0;
        }
        if ((iVar5 == 2) || ((iVar9 == 0 && (*(int *)(param_1 + 0x100) == 10)))) {
          *(undefined4 *)(param_1 + 0x100) = 10;
        }
        if ((bVar6 & 1) == 0) {
          (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
        }
        if (0 < iVar9) {
          FUN_00921a9c(*(undefined8 *)(param_1 + 0x80));
        }
      }
      else if (iVar1 == 1) {
        FUN_00912390(param_1,*(undefined8 *)(param_1 + 0x118),lVar19,local_8c,local_88[0]);
      }
      else {
        if (iVar1 != 2) goto LAB_00910a10;
        if ((*(char *)(param_1 + 0x12e) != '\x01') ||
           (uVar16 = FUN_00912488(param_1), (uVar16 & 1) == 0)) {
          iVar8 = FUN_00912668(param_1,local_88[0]);
          goto LAB_009107c0;
        }
      }
LAB_00910a0c:
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_009127fc(param_1,*(undefined8 *)(param_1 + 0x118),lVar19,local_8c,local_88[0],
                           iVar1 == 4 & *(byte *)(param_1 + 0x132));
    }
LAB_00910a10:
    *(int *)(param_1 + 0x104) = iVar1;
  }
  else {
    if (7 < iVar1) {
      if (iVar1 == 8) {
        FUN_0091cca4(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x118),lVar19,
                     *(undefined4 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x98));
        *(undefined4 *)(param_1 + 0x100) = 10;
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
        goto LAB_00910a0c;
      }
      if (iVar1 != 9) {
        if (iVar1 == 10) {
          uVar16 = FUN_004249b0();
          if ((uVar16 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x18b3,
                         "Invalid operation kUndefined.");
          }
          iVar8 = 10;
          goto LAB_0091061c;
        }
        goto LAB_00910a10;
      }
      uVar16 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
      if ((uVar16 & 1) == 0) {
        iVar8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                          (*(long **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0xe0),local_80._4_4_
                           ,local_78 & 0xffffffff);
        if (iVar8 == 0) goto LAB_0091091c;
      }
      else {
LAB_0091091c:
        iVar8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0xf0),
                           *(undefined8 *)(param_1 + 0x98));
      }
      if (iVar8 < 0) {
        FUN_00915b3c(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xf0));
        *(undefined4 *)(param_1 + 0x104) = 9;
        goto LAB_00910620;
      }
      FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0));
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
      iVar8 = 0;
      local_88[0] = 0;
      *(undefined4 *)(param_1 + 0x100) = 0xc;
      goto LAB_00910a10;
    }
    if (1 < iVar1 - 6U) {
      if (iVar1 == 5) {
        iVar8 = FUN_009129c8(param_1,*(undefined8 *)(param_1 + 0x118),lVar19,local_8c,local_88[0]);
      }
      goto LAB_00910a10;
    }
    iVar8 = FUN_00912b84(param_1,&local_68,local_88[0]);
LAB_009107c0:
    *(int *)(param_1 + 0x104) = iVar1;
    if (iVar8 < 0) goto LAB_00910620;
  }
  if (*(int *)(param_1 + 0x100) != 9) {
    FUN_0091baec(*(undefined8 *)(param_1 + 0xd8));
  }
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148)) {
    local_98 = (undefined1 *)0x0;
  }
  else {
    FUN_005da7b4(&local_98,param_1 + 0x140);
  }
  FUN_00925c34(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
  FUN_00658d08(param_2);
  FUN_00659340(param_2,*(undefined4 *)(param_1 + 0xe0));
  uVar20 = *(undefined8 *)(param_1 + 0xf0);
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar11 = FUN_00915b90(*(undefined8 *)(param_1 + 0xa0));
  FUN_006591e8(&local_c0,param_2,uVar20,uVar11);
  puStack_d8 = puStack_b8;
  local_e0 = local_c0;
  puStack_c8 = puStack_a8;
  puStack_d0 = puStack_b0;
  uVar16 = FUN_00925f8c(*(undefined8 *)(param_1 + 0xa0),&local_e0);
  puVar4 = local_98;
  pvVar10 = *(void **)(param_2 + 0x10);
  local_98 = (undefined1 *)0x0;
  *(undefined1 **)(param_2 + 0x10) = puVar4;
  if ((pvVar10 != (void *)0x0) && (iVar9 = FUN_00d0f7a0(0xffffffff,pvVar10), iVar9 == 1)) {
    FUN_005da674((long)pvVar10 + 8);
    operator_delete(pvVar10);
  }
  uVar17 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  uVar12 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8));
  if (uVar17 < uVar12) {
    lVar19 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))();
    lVar13 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
    FUN_00925e40(*(long *)(param_1 + 0xa0),
                 (lVar13 - lVar19) + *(long *)(*(long *)(param_1 + 0xa0) + 0x20));
  }
  if ((uVar16 & 1) == 0) {
    uVar16 = FUN_004249b0();
    if ((uVar16 & 1) == 0) {
      local_e8 = &uStack_f9;
      local_f8 = "../../modules/audio_coding/neteq/neteq_impl.cc";
      uStack_f0 = 0x1a53;
      FUN_00623bb0(&DAT_001f4ef8,"../../modules/audio_coding/neteq/neteq_impl.cc",0x1a53,
                   "audio_frame->samples_per_channel_ (",*(undefined8 *)(param_2 + 6),
                   ") != output_size_samples_ (",*(undefined8 *)(param_1 + 0xf0),&DAT_001ca519);
    }
    FUN_006592d8(param_2);
    iVar8 = 0xd;
  }
  else {
    if (local_88[0] == 1) {
      uVar11 = FUN_00915b90(*(undefined8 *)(param_1 + 0xa0));
      uVar20 = FUN_006591a0(param_2);
      iVar8 = FUN_00912cc8(param_1,&local_80,uVar11,uVar20);
    }
    if ((*(uint *)(param_1 + 0x100) < 0xb) &&
       ((0x721U >> (ulong)(*(uint *)(param_1 + 0x100) & 0x1f) & 1) != 0)) {
      FUN_0091a570(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0xa0));
    }
    if (local_84 == 9) {
      uVar20 = *(undefined8 *)(param_1 + 0xa0);
      uVar11 = FUN_0091601c(uVar20);
      FUN_00925e78(uVar20,uVar11);
    }
    if ((*(int *)(param_1 + 0x100) == 1) || (*(int *)(param_1 + 0x100) == 0xb)) {
      iVar9 = *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0xf0);
      *(int *)(param_1 + 0x120) = iVar9;
    }
    else {
      iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + 0x28);
      iVar9 = FUN_00925c04();
      iVar1 = iVar1 - iVar9;
      iVar9 = *(int *)(param_1 + 0x120);
      if (0 < iVar1 - *(int *)(param_1 + 0x120)) {
        *(int *)(param_1 + 0x120) = iVar1;
        iVar9 = iVar1;
      }
    }
    if ((*(byte *)(param_1 + 0x131) & 1) == 0) {
      iVar9 = (**(code **)(**(long **)(param_1 + 0x60) + 0x30))(*(long **)(param_1 + 0x60),iVar9);
      iVar9 = iVar9 - param_2[6];
    }
    else {
      iVar9 = 0;
    }
    *param_2 = iVar9;
    if ((0xb < *(uint *)(param_1 + 0x100)) ||
       ((0xe02U >> (ulong)(*(uint *)(param_1 + 0x100) & 0x1f) & 1) == 0)) {
      pvVar10 = *(void **)(param_1 + 0x138);
      *(undefined8 *)(param_1 + 0x138) = 0;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    if (iVar7 != 0) {
      iVar8 = iVar7;
    }
  }
  puVar4 = local_98;
  if ((local_98 != (undefined1 *)0x0) && (iVar9 = FUN_00d0f7a0(0xffffffff,local_98), iVar9 == 1)) {
    FUN_005da674(puVar4 + 8);
    operator_delete(puVar4);
  }
LAB_00910620:
  if (local_58 != 0) {
    ppppplVar14 = (long *****)local_68[1];
    (*local_60)[1] = (long ***)ppppplVar14;
    *ppppplVar14 = *local_60;
    local_58 = 0;
    pppppplVar3 = (long ******)local_60;
    while (pppppplVar3 != &local_68) {
      if (pppppplVar3 + 2 == (long ******)0x0) {
LAB_009106a0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pppppplVar18 = (long ******)pppppplVar3[1];
      FUN_0091d3a4(pppppplVar3 + 2);
      if (pppppplVar3 == (long ******)0x0) goto LAB_009106a0;
      operator_delete(pppppplVar3);
      pppppplVar3 = pppppplVar18;
    }
  }
  return iVar8;
}


// ===== 00910d28  FUN_00910d28 =====

void FUN_00910d28(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(&local_50);
  puVar1 = puStack_48;
  for (puVar2 = local_50; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x68))(*(long **)(param_1 + 0x50),*puVar2);
  }
  if (local_50 != (undefined4 *)0x0) {
    uVar4 = (ulong)((long)puStack_48 + (-4 - ((long)puStack_48 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3e) -
                   ((long)local_50 - (long)puStack_48)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    puVar2 = puStack_48;
    if ((1 < uVar3) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      puVar2 = puStack_48 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (puVar2 != local_50) {
      puVar2 = puVar2 + -1;
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00910e38  FUN_00910e38 =====

bool FUN_00910e38(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ***__src;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 ***__dest;
  undefined8 **local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined8 **local_90;
  ulong uStack_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  char *local_60;
  char **ppcStack_58;
  undefined1 uStack_31;
  
  uVar6 = FUN_0044075c();
  if ((uVar6 & 1) == 0) {
    local_78 = "../../modules/audio_coding/neteq/neteq_impl.cc";
    local_70 = 0xed0;
    local_68 = &uStack_31;
    ppcStack_58 = &local_78;
    local_60 = "NetEqImpl::RegisterPayloadType: payload type ";
    local_a8 = (undefined8 ***)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_008435e8(&local_a8,param_3);
    uVar6 = uStack_a0;
    __src = (undefined8 ***)local_a8;
    if (-1 < (long)local_98) {
      uVar6 = local_98 >> 0x38;
      __src = &local_a8;
    }
    if ((__src == (undefined8 ***)0x0) && (uVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
                );
    }
    if (0x7ffffffffffffff6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (uVar6 < 0x17) {
      local_80 = CONCAT17((char)uVar6,(undefined7)local_80);
      __dest = &local_90;
    }
    else {
      uVar1 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (undefined8 ***)operator_new(uVar2);
      local_80 = uVar2 | 0x8000000000000000;
      local_90 = __dest;
      uStack_88 = uVar6;
    }
    if ((undefined8 ***)((long)__dest + uVar6) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar6))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,uVar6);
    ppcVar4 = ppcStack_58;
    pcVar3 = local_60;
    *(undefined1 *)((long)__dest + uVar6) = 0;
    FUN_00623bb0(&DAT_001f623e,*ppcVar4,*(undefined4 *)(ppcVar4 + 1),pcVar3,param_2,", codec ",
                 &local_90);
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    if ((long)local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  iVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                    (*(long **)(param_1 + 0x38),param_2,param_3);
  return iVar5 == 0;
}


// ===== 00911030  FUN_00911030 =====

bool FUN_00911030(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_009144e8(*(undefined8 *)(param_1 + 0x38));
  return lVar1 != 0;
}


// ===== 00911058  FUN_00911058 =====

undefined8 FUN_00911058(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x30))();
  if (iVar1 == 0 || iVar1 == -5) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x68))(*(long **)(param_1 + 0x50),param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 009110bc  FUN_009110bc =====

void FUN_009110bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009110cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  return;
}


// ===== 009110d0  FUN_009110d0 =====

undefined8 FUN_009110d0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x2711) {
                    /* WARNING: Could not recover jumptable at 0x009110ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))();
    return uVar1;
  }
  return 0;
}


// ===== 009110f8  FUN_009110f8 =====

undefined8 FUN_009110f8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x2711) {
                    /* WARNING: Could not recover jumptable at 0x00911114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x38))();
    return uVar1;
  }
  return 0;
}


// ===== 00911120  FUN_00911120 =====

undefined8 FUN_00911120(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x2711) {
                    /* WARNING: Could not recover jumptable at 0x0091113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x48))();
    return uVar1;
  }
  return 0;
}


// ===== 00911148  FUN_00911148 =====

void FUN_00911148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00911158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x50))();
  return;
}


// ===== 0091115c  FUN_0091115c =====

void FUN_0091115c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0091116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x68))();
  return;
}


// ===== 00911170  FUN_00911170 =====

int FUN_00911170(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x90) + 0x90))();
  iVar4 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 % 1000 == 0) {
    iVar2 = 0;
    if (iVar1 / 1000 != 0) {
      iVar2 = (iVar3 + iVar4) / (iVar1 / 1000);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar1 % 1000,0,(long)iVar1
               ," is not evenly divisible by ",1000);
}


// ===== 00911218  FUN_00911218 =====

undefined8 FUN_00911218(long param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (**(code **)(**(long **)(param_1 + 0x50) + 0x78))
                    (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xf8));
  lVar5 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0x68))(*(long **)(param_1 + 0x90));
  uVar3 = (**(code **)(**(long **)(param_1 + 0x90) + 0x88))(*(long **)(param_1 + 0x90));
  iVar1 = *(int *)(param_1 + 0xe0);
  param_2[1] = uVar2;
  *(undefined1 **)(param_2 + 7) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_2 + 3) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_2 + 0xe) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_2 + 10) = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = 0;
  if ((long)iVar1 != 0) {
    uVar2 = (undefined2)((ulong)((lVar5 + lVar4) * 1000) / (ulong)(long)iVar1);
  }
  param_2[2] = uVar3 & 1;
  *param_2 = uVar2;
  FUN_00922164(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xf8),param_2);
  return 0;
}


// ===== 009112e0  FUN_009112e0 =====

void FUN_009112e0(undefined2 *param_1,long param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  plVar3 = *(long **)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  pcVar7 = *(code **)(*plVar3 + 0x78);
  *(undefined1 **)(param_1 + 0xe) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 10) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  lVar4 = (*pcVar7)(plVar3,uVar6);
  lVar5 = FUN_00925c04(*(undefined8 *)(param_2 + 0xa0));
  uVar1 = (**(code **)(**(long **)(param_2 + 0x90) + 0x68))(*(long **)(param_2 + 0x90));
  plVar3 = *(long **)(param_2 + 0x90);
  param_1[1] = uVar1;
  uVar2 = (**(code **)(*plVar3 + 0x88))(plVar3);
  uVar1 = 0;
  if ((long)*(int *)(param_2 + 0xe0) != 0) {
    uVar1 = (undefined2)((ulong)((lVar5 + lVar4) * 1000) / (ulong)(long)*(int *)(param_2 + 0xe0));
  }
  param_1[2] = uVar2 & 1;
  *param_1 = uVar1;
  return;
}


// ===== 0091138c  FUN_0091138c =====

void FUN_0091138c(long param_1)

{
  FUN_009224c0(*(undefined8 *)(param_1 + 0x80));
  return;
}


// ===== 00911398  FUN_00911398 =====

void FUN_00911398(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00922504(uVar4);
  lVar5 = (**(code **)(**(long **)(param_2 + 0x50) + 0x78))
                    (*(long **)(param_2 + 0x50),*(undefined8 *)(param_2 + 0xf8));
  lVar6 = FUN_00925c04(*(undefined8 *)(param_2 + 0xa0));
  uVar9 = (ulong)*(int *)(param_2 + 0xe0);
  plVar7 = *(long **)(param_2 + 0x50);
  uVar1 = 0;
  if (uVar9 != 0) {
    uVar1 = (ulong)((lVar6 + lVar5) * 1000) / uVar9;
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = (ulong)(*(long *)(param_2 + 0xf8) * 1000) / uVar9;
  }
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  lVar5 = (**(code **)(*plVar7 + 0x40))();
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    piVar8 = (int *)(**(code **)(**(long **)(param_2 + 0x50) + 0x40))();
    bVar3 = *piVar8 == *(int *)(*(long *)(param_2 + 0xa0) + 0x28);
  }
  *(bool *)(param_1 + 6) = bVar3;
  return;
}


// ===== 0091146c  FUN_0091146c =====

ulong FUN_0091146c(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x131) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x100) - 9U < 2) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x30))
                    (*(long **)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x120));
  return uVar1 & 0xffffffff | 0x100000000;
}


// ===== 009114d0  FUN_009114d0 =====

undefined4 FUN_009114d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}


// ===== 009114dc  FUN_009114dc =====

void FUN_009114dc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_70 [64];
  
  if (((*(byte *)(param_2 + 0x12e) & 1) == 0) ||
     (lVar4 = (**(code **)(**(long **)(param_2 + 0x38) + 0x40))
                        (*(long **)(param_2 + 0x38),*(undefined1 *)(param_2 + 0x12d)), lVar4 == 0))
  {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x12e) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar1 = *(byte *)(param_2 + 0x12d);
    if (*(char *)(lVar4 + 0x90) == '\x02') {
      uVar2 = *(undefined4 *)(lVar4 + 0x40);
    }
    else {
      plVar5 = (long *)FUN_00913d00(lVar4);
      if (plVar5 == (long *)0x0) {
        if ((*(byte *)(lVar4 + 0x8c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        uVar2 = *(undefined4 *)(lVar4 + 0x88);
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x58))();
      }
    }
    plVar5 = (long *)FUN_00913d00(lVar4);
    uVar3 = (**(code **)(*plVar5 + 0x60))();
    FUN_00667388(auStack_70,lVar4 + 0x28);
    *param_1 = CONCAT44(uVar2,(uint)bVar1);
    *(undefined4 *)(param_1 + 1) = uVar3;
    FUN_00667434(param_1 + 2,auStack_70);
    *(undefined1 *)(param_1 + 10) = 1;
    FUN_006678ac(auStack_70);
  }
  return;
}


// ===== 00911610  FUN_00911610 =====

void FUN_00911610(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x1338,
                 "FlushBuffers");
  }
  (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  FUN_00925ffc(*(undefined8 *)(param_1 + 0xa0));
  lVar1 = *(long *)(param_1 + 0xa0);
  lVar4 = *(long *)(lVar1 + 0x20);
  lVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))();
  FUN_00925e40(lVar1,lVar4 - lVar3);
  *(undefined1 *)(param_1 + 0x131) = 1;
  return;
}


// ===== 009116a4  FUN_009116a4 =====

void FUN_009116a4(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x1398,
                 "PauseDelayEstimates");
  }
  pvVar2 = *(void **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  *(undefined1 *)(param_1 + 0x178) = 1;
  return;
}


// ===== 0091170c  FUN_0091170c =====

ulong FUN_0091170c(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 % 1000 == 0) {
    uVar2 = 0;
    if ((long)(iVar1 / 1000) != 0) {
      uVar2 = uVar3 / (ulong)(long)(iVar1 / 1000);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar1 % 1000,0,(long)iVar1
               ," is not evenly divisible by ",1000);
}


// ===== 0091179c  FUN_0091179c =====

undefined8
FUN_0091179c(long param_1,uint *param_2,undefined8 param_3,undefined4 *param_4,byte *param_5,
            ulong param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  *param_5 = 0;
  *param_2 = 10;
  uVar17 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x28);
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x58))
              (*(long **)(param_1 + 0x50),(ulong)uVar17,*(int *)(param_1 + 0xe0) * 5);
  }
  puVar8 = (uint *)(**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
  puVar12 = *(undefined8 **)(param_1 + 0x138);
  if (puVar12 == (undefined8 *)0x0) {
    lVar9 = 0;
  }
  else {
    uVar10 = puVar12[1];
    lVar15 = *(long *)(param_1 + 0xf0);
    lVar14 = *(long *)*puVar12;
    lVar9 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    lVar9 = lVar9 + (lVar14 + ~uVar10) * lVar15;
  }
  if ((puVar8 != (uint *)0x0) && (*(int *)(param_1 + 0x100) == 9)) {
    do {
      uVar10 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)((long)puVar8 + 6));
      if (((uVar10 & 1) == 0) || ((uVar17 < *puVar8 && (lVar9 + (ulong)uVar17 <= (ulong)*puVar8))))
      break;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x50))();
      if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x50) + 0x58))
                  (*(long **)(param_1 + 0x50),uVar17,*(int *)(param_1 + 0xe0) * 5);
      }
      puVar8 = (uint *)(**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
    } while (puVar8 != (uint *)0x0);
  }
  iVar5 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  iVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8));
  iVar5 = iVar5 - iVar6;
  if ((*(uint *)(param_1 + 0x100) < 8) &&
     ((0xd8U >> (ulong)(*(uint *)(param_1 + 0x100) & 0x1f) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x60))
              (*(long **)(param_1 + 0x90),-iVar5 - *(int *)(param_1 + 0xf0));
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
                     (*(long **)(param_1 + 0x40),uVar17 + (int)lVar9,param_4);
  if ((uVar10 & 1) != 0) {
    *param_5 = 1;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x138);
  if (puVar12 == (undefined8 *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar14 = puVar12[1];
    lVar16 = *(long *)(param_1 + 0xf0);
    lVar15 = *(long *)*puVar12;
    lVar9 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    lVar9 = lVar9 + (lVar15 - lVar14) * lVar16;
  }
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaaaaaaaa00;
  local_b8 = 0xaaaaaaaaaaaaaa00;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x50) + 0x88))
                    (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38));
  local_a0 = (undefined1 *)(CONCAT71(local_a0._1_7_,uVar4) & 0xffffffffffffff01);
  local_98 = (undefined1 *)
             (**(code **)(**(long **)(param_1 + 0x50) + 0x78))
                       (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xf8));
  local_90 = (undefined1 *)
             (**(code **)(**(long **)(param_1 + 0x50) + 0x80))
                       (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xf8),
                        (long)*(int *)(param_1 + 0xe8),0);
  puStack_88 = (undefined1 *)
               (**(code **)(**(long **)(param_1 + 0x50) + 0x80))
                         (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xf8),
                          (long)*(int *)(param_1 + 0xe8),1);
  local_80 = (undefined1 *)
             (**(code **)(**(long **)(param_1 + 0x50) + 0x70))(*(long **)(param_1 + 0x50));
  puVar3 = local_d0;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x28);
  local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,uVar1);
  puVar13 = *(undefined2 **)(*(long *)(param_1 + 0xa8) + 0x80);
  if (*(long *)(puVar13 + -4) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
              );
  }
  puStack_c8 = *(undefined1 **)(param_1 + 0xf8);
  local_d0._6_2_ = SUB82(puVar3,6);
  local_d0._0_6_ = CONCAT24(*puVar13,uVar1);
  local_b8 = CONCAT44(*(undefined4 *)(param_1 + 0x100),(undefined4)local_b8);
  local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,*param_5);
  puStack_a8 = (undefined1 *)lVar9;
  local_78 = (undefined1 *)FUN_00925c04();
  if (puVar8 != (uint *)0x0) {
    uVar7 = *puVar8;
    if (*(long **)(puVar8 + 0x28) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar11 = (**(code **)(**(long **)(puVar8 + 0x28) + 0x18))();
      uVar10 = 0x100000000;
      if ((uVar11 & 1) == 0) {
        uVar10 = 0;
      }
    }
    uVar11 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)((long)puVar8 + 6));
    local_c0 = 0x10000000000;
    if ((uVar11 & 1) == 0) {
      local_c0 = 0;
    }
    local_c0 = local_c0 | uVar7 | uVar10;
    local_b8 = CONCAT71(local_b8._1_7_,1);
  }
  local_70 = (undefined1 *)(CONCAT71(local_70._1_7_,*(undefined1 *)(param_1 + 0x178)) ^ 1);
  uVar7 = (**(code **)(**(long **)(param_1 + 0x90) + 0x20))
                    (*(long **)(param_1 + 0x90),&local_d0,param_1 + 300);
  *param_2 = uVar7;
  if ((((puVar8 != (uint *)0x0) && (*(long **)(puVar8 + 0x28) != (long *)0x0)) &&
      (uVar10 = (**(code **)(**(long **)(puVar8 + 0x28) + 0x18))(), (uVar10 & 1) != 0)) &&
     ((*param_2 < 6 && ((0x3aU >> (ulong)(*param_2 & 0x1f) & 1) != 0)))) {
    *param_2 = 0;
  }
  if ((param_6 >> 0x20 & 1) == 0) {
    param_6 = (ulong)*param_2;
  }
  else {
    *param_2 = (uint)param_6;
  }
  if ((*(int *)(param_1 + 0xf0) <= iVar5) &&
     ((5 < (uint)param_6 || ((0x3aU >> (ulong)((uint)param_6 & 0x1f) & 1) == 0))))
  goto LAB_00911d44;
  (**(code **)(**(long **)(param_1 + 0x90) + 0x58))(*(long **)(param_1 + 0x90),param_6 & 0xffffffff)
  ;
  if ((*(int *)(param_1 + 0x100) == 0xb) && (*param_2 != 2)) {
    FUN_00921aac(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xe0));
  }
  if (((*(byte *)(param_1 + 0x124) & 1) != 0) || (uVar7 = *param_2, uVar7 == 10)) {
    if ((puVar8 == (uint *)0x0) && ((*param_5 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x128) = *param_4;
    }
    else {
      if (puVar8 == (uint *)0x0) {
        uVar10 = FUN_004249b0();
        if ((uVar10 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x20db,
                       "Packet missing where it shouldn\'t.");
          return 0xffffffff;
        }
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x128) = *puVar8;
      uVar7 = *param_2;
      if (uVar7 == 7) {
        uVar10 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)((long)puVar8 + 6));
        if ((uVar10 & 1) != 0) {
          *param_2 = 6;
          goto LAB_00911be4;
        }
        uVar7 = *param_2;
      }
      if (uVar7 != 6) {
        *param_2 = 0;
      }
    }
LAB_00911be4:
    FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0),*(int *)(param_1 + 0x128) - uVar17);
    *(undefined1 *)(param_1 + 0x124) = 0;
    uVar17 = *(uint *)(param_1 + 0x128);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    FUN_009218a0(*(undefined8 *)(param_1 + 0x80));
    uVar7 = *param_2;
  }
  uVar18 = *(ulong *)(param_1 + 0xf0);
  uVar2 = *(int *)(param_1 + 0xe4) * 0x50;
  uVar10 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2;
  iVar19 = (int)uVar10;
  iVar6 = (int)((ulong)uVar2 << 1);
  uVar11 = uVar18;
  if ((int)uVar7 < 5) {
    if (uVar7 - 3 < 2) {
      if (iVar19 <= iVar5) goto LAB_00911e44;
      if (((int)uVar2 <= iVar5) && (uVar10 <= *(ulong *)(param_1 + 0xf8))) {
LAB_00911d44:
        *param_2 = 0;
        return 0;
      }
      if ((iVar5 < iVar6) && (*(ulong *)(param_1 + 0xf8) < uVar10)) {
        *param_2 = 0;
        uVar11 = uVar18 << 1;
      }
    }
    else if (uVar7 == 1) {
      uVar11 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
      if (uVar11 <= uVar18) {
        uVar11 = uVar18;
      }
    }
    else if (uVar7 == 2) {
      *(uint *)(param_1 + 0x128) = uVar17;
      return 0;
    }
  }
  else {
    if (uVar7 - 7 < 2) {
      return 0;
    }
    if (uVar7 == 5) {
      if ((iVar19 <= iVar5) || (((int)uVar2 <= iVar5 && (uVar10 <= *(ulong *)(param_1 + 0xf8))))) {
LAB_00911e44:
        (**(code **)(**(long **)(param_1 + 0x90) + 0x98))(*(long **)(param_1 + 0x90),iVar5);
        (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))(*(long **)(param_1 + 0x90),1);
        return 0;
      }
      if (iVar5 < iVar6) {
        uVar11 = uVar18 << (*(ulong *)(param_1 + 0xf8) < uVar10);
      }
    }
    else if (uVar7 == 9) {
      puVar12 = *(undefined8 **)(param_1 + 0x138);
      *(uint *)(param_1 + 0x128) = uVar17;
      if (puVar12 == (undefined8 *)0x0) {
        return 0;
      }
      lVar9 = puVar12[1];
      lVar15 = *(long *)*puVar12;
      lVar14 = (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
      uVar10 = lVar14 + (lVar15 - lVar9) * uVar18;
      if (uVar10 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x100) == 0xc) {
        return 0;
      }
      FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0),uVar10 & 0xffffffff);
      iVar5 = *(int *)(param_1 + 0x128) + (int)uVar10;
      goto LAB_00911e04;
    }
  }
  if (puVar8 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0),*puVar8 - uVar17);
    iVar6 = FUN_00912db8(param_1,uVar11,param_3);
    if (iVar6 < 0) {
      return 0x10;
    }
  }
  if (*param_2 - 3 < 3) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x98))(*(long **)(param_1 + 0x90),iVar6 + iVar5);
    (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))(*(long **)(param_1 + 0x90),1);
    if ((*param_2 - 3 < 2) && (iVar6 + iVar5 < iVar19)) {
      *param_2 = 0;
    }
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0xa0) + 0x28);
LAB_00911e04:
  *(int *)(param_1 + 0x128) = iVar5;
  return 0;
}


// ===== 00911f00  FUN_00911f00 =====

undefined4 FUN_00911f00(long param_1,long *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  char local_54 [4];
  
  *param_5 = 1;
  plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x50))();
  if (param_2[2] == 0) goto LAB_009121c0;
  uVar1 = *(undefined1 *)(param_2[1] + 0x16);
  uVar7 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),uVar1);
  if ((uVar7 & 1) != 0) goto LAB_009121c0;
  plVar6 = (long *)FUN_009144e8(*(undefined8 *)(param_1 + 0x38),uVar1);
  if (plVar6 == (long *)0x0) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/neteq_impl.cc",0x25f2,
                   "Unknown payload type ",uVar1);
    }
    if (param_2[2] != 0) {
      plVar6 = (long *)param_2[1];
      plVar11 = *(long **)(*param_2 + 8);
      *(long **)(*plVar6 + 8) = plVar11;
      *plVar11 = *plVar6;
      param_2[2] = 0;
      while (plVar6 != param_2) {
        if (plVar6 + 2 == (long *)0x0) goto LAB_00912368;
        plVar11 = (long *)plVar6[1];
        FUN_0091d3a4(plVar6 + 2);
        if (plVar6 == (long *)0x0) goto LAB_00912368;
        operator_delete(plVar6);
        plVar6 = plVar11;
      }
    }
    return 3;
  }
  local_54[0] = -0x56;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x48))(*(long **)(param_1 + 0x38),uVar1,local_54);
  if (local_54[0] != '\x01') goto LAB_009121c0;
  lVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x40))(*(long **)(param_1 + 0x38),uVar1);
  if (lVar8 == 0) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/neteq_impl.cc",0x265a,
                   "Unknown payload type ",uVar1);
    }
    if (param_2[2] == 0) {
      return 3;
    }
    plVar6 = (long *)param_2[1];
    plVar11 = *(long **)(*param_2 + 8);
    *(long **)(*plVar6 + 8) = plVar11;
    *plVar11 = *plVar6;
    param_2[2] = 0;
    while( true ) {
      if (plVar6 == param_2) {
        return 3;
      }
      if (plVar6 + 2 == (long *)0x0) break;
      plVar11 = (long *)plVar6[1];
      FUN_0091d3a4(plVar6 + 2);
      if (plVar6 == (long *)0x0) break;
      operator_delete(plVar6);
      plVar6 = plVar11;
    }
LAB_00912368:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (*(char *)(lVar8 + 0x90) == '\x02') {
    iVar4 = *(int *)(lVar8 + 0x40);
  }
  else {
    plVar11 = (long *)FUN_00913d00(lVar8);
    if (plVar11 == (long *)0x0) {
      if ((*(byte *)(lVar8 + 0x8c) & 1) == 0) goto LAB_0091237c;
      iVar4 = *(int *)(lVar8 + 0x88);
    }
    else {
      iVar4 = (**(code **)(*plVar11 + 0x58))();
    }
  }
  if (iVar4 == *(int *)(param_1 + 0xe0)) {
    lVar9 = (**(code **)(*plVar6 + 0x60))(plVar6);
    lVar10 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98));
    if (lVar9 != lVar10) goto LAB_00912150;
  }
  else {
LAB_00912150:
    if (*(char *)(lVar8 + 0x90) == '\x02') {
      uVar3 = *(undefined4 *)(lVar8 + 0x40);
    }
    else {
      plVar11 = (long *)FUN_00913d00(lVar8);
      if (plVar11 == (long *)0x0) {
        if ((*(byte *)(lVar8 + 0x8c) & 1) == 0) {
LAB_0091237c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        uVar3 = *(undefined4 *)(lVar8 + 0x88);
      }
      else {
        uVar3 = (**(code **)(*plVar11 + 0x58))();
      }
    }
    uVar12 = (**(code **)(*plVar6 + 0x60))(plVar6);
    FUN_0090eb2c(param_1,uVar3,uVar12);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
LAB_009121c0:
  if (*(char *)(param_1 + 300) == '\x01') {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6);
    }
    lVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x60))();
    if (lVar8 != 0) {
      FUN_00926910();
    }
    *(undefined1 *)(param_1 + 300) = 0;
  }
  *param_4 = 0;
  iVar4 = *param_3;
  if ((plVar6 != (long *)0x0) && (iVar4 == 1)) {
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
    if ((uVar7 & 1) != 0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,1,*(long *)(param_1 + 0x118) + (long)*param_4 * 2);
    }
    iVar4 = *param_3;
  }
  if (iVar4 == 8) {
    uVar3 = FUN_009131b8(param_1,plVar6,param_4,param_5);
  }
  else {
    uVar3 = FUN_009132dc(param_1,param_2);
  }
  if (*param_4 < 0) {
    *param_4 = 0;
    FUN_00925fe8(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xf8));
    if ((plVar6 == (long *)0x0) || (iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6), iVar4 == 0)) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2842,
                     "Decoder error (no error code)");
      }
      uVar3 = 9;
    }
    else {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2822,
                     "Decoder returned error code: ",iVar4);
      }
      uVar3 = 8;
    }
    *param_3 = 2;
  }
  if (*param_5 != 2) {
    uVar12 = *(undefined8 *)(param_1 + 0xa0);
    iVar4 = *param_4;
    iVar5 = FUN_00915b90(uVar12);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = iVar4 / iVar5;
    }
    FUN_00925fe8(uVar12,iVar2);
  }
  return uVar3;
}


// ===== 00912390  FUN_00912390 =====

void FUN_00912390(long param_1,undefined8 param_2,ulong param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  uVar3 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)(param_3 / uVar3);
  }
  uVar3 = FUN_00919064(*(undefined8 *)(param_1 + 0xa8));
  if (((uVar3 & 1) == 0) &&
     ((*(char *)(param_1 + 0x10c) != '\x01' || (*(int *)(param_1 + 0x108) != 2)))) {
    FUN_009219a4(*(undefined8 *)(param_1 + 0x80),iVar2 - iVar1);
  }
  else {
    FUN_00921a0c(*(undefined8 *)(param_1 + 0x80),iVar2 - iVar1);
  }
  uVar4 = 10;
  if (param_4 != 2) {
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
  if ((param_5 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00912484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  return;
}


// ===== 00912488  FUN_00912488 =====

undefined8 FUN_00912488(long param_1)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x50))();
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  uVar4 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98));
  lVar15 = *(long *)(param_1 + 0xf0);
  lVar5 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  lVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0x160) = 0;
  lVar15 = (lVar6 - lVar5) + lVar15;
  (**(code **)(*plVar3 + 0x28))(plVar3,lVar15,param_1 + 0x160);
  if (*(ulong *)(param_1 + 0x160) == 0) {
    return 0;
  }
  if (*(ulong *)(param_1 + 0x160) < lVar15 * uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/neteq_impl.cc",0x5be,
                 "concealment_audio_.size() >= requested_samples_per_channel * channels",
                 &DAT_001fb920);
  }
  FUN_00925ca8(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x160);
  uVar9 = *(ulong *)(param_1 + 0x160);
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar9 / uVar4;
  }
  if (uVar9 * 2 != 0) {
    uVar4 = uVar9 * 2 - 2;
    psVar12 = *(short **)(param_1 + 0x170);
    uVar13 = (uint)uVar4;
    psVar11 = psVar12;
    if ((~uVar13 & 6) != 0) {
      lVar15 = -((ulong)((uVar13 >> 1) + 1) & 3);
      psVar10 = psVar12;
      do {
        if (*psVar10 != 0) goto LAB_009125e0;
        bVar2 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar11 = psVar10 + 1;
        psVar10 = psVar10 + 1;
      } while (bVar2);
    }
    if (5 < uVar4) {
      do {
        if ((((*psVar11 != 0) || (psVar11[1] != 0)) || (psVar11[2] != 0)) || (psVar11[3] != 0))
        goto LAB_009125e0;
        psVar11 = psVar11 + 4;
      } while (psVar11 != psVar12 + uVar9);
    }
  }
  FUN_00921910(*(undefined8 *)(param_1 + 0x80),uVar1,*(int *)(param_1 + 0x100) != 0xb);
LAB_009125f0:
  *(undefined4 *)(param_1 + 0x100) = 0xb;
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    pvVar7 = operator_new(0x10);
    FUN_0090d5d0(pvVar7,uVar14);
    pvVar8 = *(void **)(param_1 + 0x138);
    *(void **)(param_1 + 0x138) = pvVar7;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  return 1;
LAB_009125e0:
  FUN_009218ac(*(undefined8 *)(param_1 + 0x80),uVar1,*(int *)(param_1 + 0x100) != 0xb);
  goto LAB_009125f0;
}


// ===== 00912668  FUN_00912668 =====

int FUN_00912668(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  
  lVar3 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
  lVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8));
  if ((ulong)(lVar3 - lVar4) < *(ulong *)(param_1 + 0xf0)) {
    do {
      FUN_00915b00(*(undefined8 *)(param_1 + 0x98));
      iVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
                        (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98));
      uVar5 = FUN_0091601c(*(undefined8 *)(param_1 + 0x98));
      iVar1 = *(int *)(param_1 + 0x100);
      uVar6 = FUN_00919064(*(undefined8 *)(param_1 + 0xa8));
      if (((uVar6 & 1) == 0) &&
         ((*(char *)(param_1 + 0x10c) != '\x01' || (*(int *)(param_1 + 0x108) != 2)))) {
        FUN_009218ac(*(undefined8 *)(param_1 + 0x80),uVar5,iVar1 != 1);
        *(undefined4 *)(param_1 + 0x100) = 1;
      }
      else {
        FUN_00921910(*(undefined8 *)(param_1 + 0x80),uVar5,iVar1 != 1);
        *(undefined4 *)(param_1 + 0x100) = 1;
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      FUN_00925c34(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
      FUN_00915b00(*(undefined8 *)(param_1 + 0x98));
      lVar3 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
      lVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))(*(long **)(param_1 + 0xa8));
    } while ((ulong)(lVar3 - lVar4) < *(ulong *)(param_1 + 0xf0));
  }
  if ((param_2 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    pvVar7 = operator_new(0x10);
    FUN_0090d5d0(pvVar7,uVar5);
    pvVar8 = *(void **)(param_1 + 0x138);
    *(void **)(param_1 + 0x138) = pvVar7;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  return 0;
}


// ===== 009127fc  FUN_009127fc =====

undefined8
FUN_009127fc(long param_1,void *param_2,ulong param_3,int param_4,ulong param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 local_48;
  
  iVar3 = *(int *)(param_1 + 0xe4) * 0xf0;
  uVar4 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98));
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar7 = param_3 / uVar4;
  }
  if (uVar7 < (ulong)(long)iVar3) {
    uVar7 = (ulong)(iVar3 - (int)uVar7);
    memmove((void *)((long)param_2 + uVar4 * uVar7 * 2),param_2,param_3 << 1);
    FUN_00916360(*(undefined8 *)(param_1 + 0xa0),uVar7,param_2);
    param_3 = uVar4 * (long)iVar3;
  }
  else {
    uVar7 = 0;
  }
  local_48 = 0;
  iVar3 = FUN_00917738(*(undefined8 *)(param_1 + 0xc0),param_2,param_3,param_6 & 1,
                       *(undefined8 *)(param_1 + 0x98),&local_48);
  FUN_00921bb4(*(undefined8 *)(param_1 + 0x80),local_48);
  if (iVar3 < 1) {
    if (iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x100) = 5;
      return 5;
    }
    if (iVar3 != 0) goto LAB_00912910;
    uVar6 = 3;
  }
  else if (iVar3 == 2) {
    uVar6 = 5;
  }
  else {
    if (iVar3 != 1) goto LAB_00912910;
    uVar6 = 4;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar6;
LAB_00912910:
  if (uVar7 != 0) {
    uVar4 = FUN_0091601c(*(undefined8 *)(param_1 + 0x98));
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    lVar5 = FUN_0091601c(uVar2);
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
      FUN_00925eb0(uVar2,uVar1,uVar7);
    }
    else {
      FUN_00925f18(uVar2,uVar1,lVar5 - uVar7);
      FUN_00925d30(*(undefined8 *)(param_1 + 0xa0),uVar7 - uVar4);
      uVar7 = uVar4;
    }
    FUN_00916054(*(undefined8 *)(param_1 + 0x98),uVar7);
  }
  if (param_4 == 2) {
    *(undefined4 *)(param_1 + 0x100) = 10;
  }
  if ((param_5 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  }
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
  return 0;
}


// ===== 009129c8  FUN_009129c8 =====

undefined8 FUN_009129c8(long param_1,void *param_2,ulong param_3,int param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_48;
  
  uVar9 = (ulong)(*(int *)(param_1 + 0xe4) * 0xf0);
  uVar4 = FUN_00915b90(*(undefined8 *)(param_1 + 0x98));
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = param_3 / uVar4;
  }
  uVar8 = uVar9 - uVar5;
  if (uVar9 < uVar5 || uVar8 == 0) {
    uVar8 = 0;
    lVar6 = 0;
  }
  else {
    uVar5 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
    if (uVar5 < uVar8) {
      lVar6 = FUN_00925c04(*(undefined8 *)(param_1 + 0xa0));
      lVar6 = uVar8 - lVar6;
    }
    else {
      lVar6 = 0;
    }
    memmove((void *)((long)param_2 + uVar8 * uVar4 * 2),param_2,param_3 << 1);
    FUN_00916360(*(undefined8 *)(param_1 + 0xa0),uVar8,param_2);
    param_3 = uVar4 * uVar9;
  }
  local_48 = 0;
  iVar3 = FUN_00920298(*(undefined8 *)(param_1 + 200),param_2,param_3,lVar6,
                       *(undefined8 *)(param_1 + 0x98),&local_48);
  FUN_00921b7c(*(undefined8 *)(param_1 + 0x80),local_48);
  if (iVar3 < 1) {
    if (iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x100) = 8;
      return 6;
    }
    if (iVar3 != 0) goto LAB_00912afc;
    uVar7 = 6;
  }
  else if (iVar3 == 2) {
    uVar7 = 8;
  }
  else {
    if (iVar3 != 1) goto LAB_00912afc;
    uVar7 = 7;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar7;
LAB_00912afc:
  if (uVar8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    lVar6 = FUN_0091601c(uVar2);
    FUN_00925eb0(uVar2,uVar1,uVar8,lVar6 - uVar8);
    FUN_00916054(*(undefined8 *)(param_1 + 0x98),uVar8);
  }
  if (param_4 == 2) {
    *(undefined4 *)(param_1 + 0x100) = 10;
  }
  if ((param_5 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  }
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
  return 0;
}


// ===== 00912b84  FUN_00912b84 =====

int FUN_00912b84(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar3 = *(long *)(param_2 + 8);
    uVar2 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar3 + 0x16));
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x347b,
                     "Trying to decode non-CNG payload as CNG.");
      }
      return 1;
    }
    iVar1 = FUN_0091bafc(*(undefined8 *)(param_1 + 0xd8),lVar3 + 0x10);
    if (iVar1 == 2) {
      FUN_00915b3c(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xf0));
      return -*(int *)(*(long *)(param_1 + 0xd8) + 0x20);
    }
  }
  iVar1 = FUN_0091bb6c(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xf0),
                       *(undefined8 *)(param_1 + 0x98));
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(*(long **)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0x100) = 9;
  if ((param_3 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  }
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/neteq_impl.cc",0x3502,
                   "Comfort noise generator returned error code: ",
                   *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x20));
    }
    iVar1 = 7;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ===== 00912cc8  FUN_00912cc8 =====

uint FUN_00912cc8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  uVar6 = *(ulong *)(param_1 + 0xf0);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xa0) + 0x30);
  uVar4 = *(ulong *)(*(long *)(param_1 + 0xa0) + 0x20);
  uVar3 = uVar5 - uVar4;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = uVar6;
  if (uVar3 <= uVar6) {
    uVar1 = uVar3;
  }
  if (uVar5 <= uVar4) {
    uVar1 = 0;
  }
  FUN_009157a8(&local_60,param_3);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
  if (((uVar3 & 1) != 0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                        (*(long **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0xe0),
                         *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8)), uVar2 == 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))
                      (*(long **)(param_1 + 0x48),uVar6 - uVar1,&local_60);
  }
  FUN_009160ec(&local_60,uVar6 - uVar1,param_4 + uVar1 * 2);
  FUN_00915980(&local_60);
  return uVar2 & (int)uVar2 >> 0x1f;
}


// ===== 00912db8  FUN_00912db8 =====

ulong FUN_00912db8(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  long *plStack_88;
  long *local_80;
  undefined1 *local_78;
  
  puVar8 = (uint *)(**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
  if (puVar8 == (uint *)0x0) {
    uVar15 = FUN_004249b0();
    if ((uVar15 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x393b,
                   "Packet buffer unexpectedly empty.");
    }
LAB_00913150:
    uVar15 = 0xffffffff;
  }
  else {
    uVar2 = *puVar8;
    uVar15 = 0;
    bVar5 = 0;
    do {
      *(uint *)(param_1 + 0x128) = *puVar8;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      plStack_88 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x48))(&local_120);
      cVar4 = (char)local_78;
      if (((ulong)local_78 & 1) == 0) {
        uVar13 = FUN_004249b0();
        if ((uVar13 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x39a3,
                       "Should always be able to extract a packet here");
          puVar8 = (uint *)0x0;
        }
        else {
          puVar8 = (uint *)0x0;
        }
      }
      else {
        uVar13 = (ulong)(int)((long *)*plStack_88)[1];
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = 0xffffffffffffffff / uVar13;
        }
        uVar11 = *(long *)*plStack_88 - plStack_88[1];
        uVar13 = uVar11 * uVar13;
        if (uVar15 <= uVar11) {
          uVar13 = 0xffffffffffffffff;
        }
        FUN_00922020(*(undefined8 *)(param_1 + 0x80),uVar13 & 0xffffffff);
        if (((ulong)local_78 & 1) == 0) goto LAB_0091317c;
        bVar5 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),local_120._6_1_);
        if (((ulong)local_78 & 1) == 0) goto LAB_0091317c;
        if (local_80 == (long *)0x0) {
          if (((bVar5 & 1) == 0) && (uVar15 = FUN_004022fc(), (uVar15 & 1) == 0)) {
            if (((ulong)local_78 & 1) == 0) goto LAB_0091317c;
            FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/neteq_impl.cc",0x3a42,
                         "Unknown payload type ",local_120._6_1_);
          }
LAB_00912f58:
          uVar15 = *(ulong *)(param_1 + 0xf8);
        }
        else {
          uVar15 = (**(code **)(*local_80 + 0x10))();
          if (((ulong)local_78 & 1) == 0) goto LAB_0091317c;
          if (0 < (int)local_100) {
            FUN_00921f00(*(undefined8 *)(param_1 + 0x80),uVar15 & 0xffffffff);
          }
          if (uVar15 == 0) goto LAB_00912f58;
        }
        if (((ulong)local_78 & 1) == 0) {
LAB_0091317c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        iVar3 = (int)local_120;
        lVar12 = 0;
        if ((((ulong)local_90 & 1) != 0) && (local_d0 != (undefined1 *)0x8000000000000000)) {
          lVar9 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          if ((((ulong)local_78 & 1) == 0) || (((ulong)local_90 & 1) == 0)) goto LAB_0091317c;
          lVar12 = 0x7fffffffffffffff;
          if ((lVar9 != 0x7fffffffffffffff) && (local_d0 != (undefined1 *)0x8000000000000000)) {
            lVar12 = -0x8000000000000000;
            if (local_d0 != (undefined1 *)0x7fffffffffffffff && lVar9 != -0x8000000000000000) {
              lVar12 = lVar9 - (long)local_d0;
            }
          }
        }
        uVar14 = *(undefined8 *)(param_1 + 0x80);
        iVar6 = (**(code **)(**(long **)(param_1 + 0x90) + 0x68))();
        iVar7 = (**(code **)(**(long **)(param_1 + 0x90) + 0x70))(*(long **)(param_1 + 0x90));
        FUN_00921ec4(uVar14,uVar15,uVar13,(long)iVar6,(long)iVar7,lVar12);
        puVar8 = (uint *)(**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
        if (puVar8 == (uint *)0x0) {
          if (((ulong)local_78 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
LAB_00913074:
          bVar5 = 0;
        }
        else {
          if (((ulong)local_78 & 1) == 0) goto LAB_0091317c;
          if (*(char *)((long)puVar8 + 6) != local_120._6_1_) goto LAB_00913074;
          bVar5 = uVar15 + ((ulong)local_120 & 0xffffffff) == (ulong)*puVar8 & (bVar5 ^ 1);
        }
        plVar10 = (long *)operator_new(0xb8);
        if (plVar10 == (long *)0x0) {
LAB_00913190:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        if (plVar10 + 2 == (long *)0x0) goto LAB_00913190;
        uVar15 = uVar15 + (iVar3 - uVar2);
        FUN_0091d2d8(plVar10 + 2,&local_120);
        lVar12 = *param_3;
        *plVar10 = lVar12;
        plVar10[1] = (long)param_3;
        *(long **)(lVar12 + 8) = plVar10;
        *param_3 = (long)plVar10;
        param_3[2] = param_3[2] + 1;
        if ((char)local_78 == '\x01') {
          FUN_0091d3a4(&local_120);
          local_78 = (undefined1 *)((ulong)local_78 & 0xffffffffffffff00);
        }
      }
      if ((char)local_78 == '\x01') {
        FUN_0091d3a4(&local_120);
      }
      if (cVar4 == '\0') goto LAB_00913150;
      bVar1 = uVar15 < param_2 & bVar5;
      bVar5 = 1;
    } while (bVar1 != 0);
    if (uVar15 != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x60))
                (*(long **)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x128));
    }
  }
  return uVar15 & 0xffffffff;
}


// ===== 009131b8  FUN_009131b8 =====

undefined8 FUN_009131b8(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
    *param_3 = -1;
  }
  else {
    iVar1 = *param_3;
    do {
      if (*(int *)(param_1 + 0xf0) <= iVar1) {
        lVar4 = (long)iVar1;
LAB_00913294:
        FUN_00921bec(*(undefined8 *)(param_1 + 0x80),lVar4);
        return 0;
      }
      iVar1 = FUN_006701f8(param_2,0,0,*(undefined4 *)(param_1 + 0xe0),
                           (*(long *)(param_1 + 0x110) - (long)iVar1) * 2,
                           *(long *)(param_1 + 0x118) + (long)iVar1 * 2,param_4);
      if (iVar1 < 1) {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2952,
                       "Failed to decode CNG");
        }
        lVar4 = -1;
        *param_3 = -1;
        goto LAB_00913294;
      }
      iVar1 = *param_3 + iVar1;
      *param_3 = iVar1;
    } while (iVar1 <= *(int *)(param_1 + 0x110));
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2982,
                   "Decoded too much CNG.");
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xe;
    }
  }
  return uVar3;
}


// ===== 009132dc  FUN_009132dc =====

undefined8
FUN_009132dc(long param_1,long *param_2,undefined8 param_3,long *param_4,int *param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 *puVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  lVar12 = param_2[2];
  do {
    if (lVar12 == 0) {
      return 0;
    }
    uVar7 = FUN_00914644(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_2[1] + 0x16));
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    if (param_2[2] == 0) {
LAB_00913664:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                );
    }
    lVar4 = *(long *)(param_1 + 0x110) - (long)*param_5;
    lVar12 = 0;
    if (lVar4 != 0) {
      lVar12 = *(long *)(param_1 + 0x118) + (long)*param_5 * 2;
    }
    (**(code **)(**(long **)(param_2[1] + 0xb0) + 0x20))
              (&local_80,*(long **)(param_2[1] + 0xb0),lVar12,lVar4);
    if (param_2[2] == 0) goto LAB_00913664;
    lVar12 = param_2[1];
    if (*(char *)(lVar12 + 0xa0) == '\x01') {
      puVar1 = *(undefined4 **)(param_1 + 0x148);
      if (puVar1 < *(undefined4 **)(param_1 + 0x150)) {
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar3 = *(undefined4 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 2) = 0;
        *puVar1 = uVar3;
        pvVar11 = *(void **)(lVar12 + 0x40);
        uVar7 = *(long *)(lVar12 + 0x48) - (long)pvVar11;
        if (uVar7 != 0) {
          if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005da79c();
          }
          pvVar8 = operator_new(uVar7);
          *(void **)(puVar1 + 2) = pvVar8;
          *(void **)(puVar1 + 4) = pvVar8;
          *(ulong *)(puVar1 + 6) = (long)pvVar8 + uVar7;
          memcpy(pvVar8,pvVar11,uVar7);
          *(ulong *)(puVar1 + 4) = (long)pvVar8 + uVar7;
        }
        uVar15 = *(undefined8 *)(lVar12 + 0x90);
        uVar14 = *(undefined8 *)(lVar12 + 0x88);
        uVar16 = *(undefined8 *)(lVar12 + 0x78);
        puVar10 = puVar1 + 0x1a;
        uVar18 = *(undefined8 *)(lVar12 + 0x60);
        uVar17 = *(undefined8 *)(lVar12 + 0x58);
        uVar20 = *(undefined8 *)(lVar12 + 0x70);
        uVar19 = *(undefined8 *)(lVar12 + 0x68);
        *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(lVar12 + 0x80);
        *(undefined8 *)(puVar1 + 0x10) = uVar16;
        *(undefined8 *)(puVar1 + 0x16) = uVar15;
        *(undefined8 *)(puVar1 + 0x14) = uVar14;
        *(undefined8 *)(puVar1 + 10) = uVar18;
        *(undefined8 *)(puVar1 + 8) = uVar17;
        *(undefined8 *)(puVar1 + 0xe) = uVar20;
        *(undefined8 *)(puVar1 + 0xc) = uVar19;
        *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(lVar12 + 0x98);
      }
      else {
        puVar10 = (undefined4 *)FUN_0060aa50(param_1 + 0x140,lVar12 + 0x38);
      }
      *(undefined4 **)(param_1 + 0x148) = puVar10;
    }
    FUN_0090ffac(param_2);
    puVar6 = local_80;
    if (((ulong)local_70 & 1) == 0) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2b02,
                     "Decode error");
      }
      *param_5 = -1;
      lVar12 = *(long *)(param_1 + 0x140);
      lVar4 = *(long *)(param_1 + 0x148);
      goto joined_r0x009134ac;
    }
    *param_6 = puStack_78._0_4_;
    if (local_80 != (undefined1 *)0x0) {
      *param_5 = *param_5 + (int)local_80;
      uVar9 = (**(code **)(*param_4 + 0x60))(param_4);
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = (ulong)puVar6 / uVar9;
      }
      *(ulong *)(param_1 + 0xf8) = uVar7;
    }
    if (*(int *)(param_1 + 0x110) < *param_5) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/neteq_impl.cc",0x2b42,
                     "Decoded too much.");
      }
      if (param_2[2] == 0) {
        return 0xe;
      }
      plVar2 = (long *)param_2[1];
      plVar13 = *(long **)(*param_2 + 8);
      *(long **)(*plVar2 + 8) = plVar13;
      *plVar13 = *plVar2;
      param_2[2] = 0;
      break;
    }
    lVar12 = param_2[2];
  } while( true );
joined_r0x00913618:
  if (plVar2 == param_2) {
    return 0xe;
  }
  if (plVar2 + 2 == (long *)0x0) {
LAB_00913650:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar13 = (long *)plVar2[1];
  FUN_0091d3a4(plVar2 + 2);
  if (plVar2 == (long *)0x0) goto LAB_00913650;
  operator_delete(plVar2);
  plVar2 = plVar13;
  goto joined_r0x00913618;
joined_r0x009134ac:
  lVar5 = lVar4;
  if (lVar12 != lVar5) {
    lVar4 = lVar5 + -0x68;
    if (lVar4 == 0) goto LAB_00913650;
    pvVar11 = *(void **)(lVar5 + -0x60);
    if (pvVar11 != (void *)0x0) {
      pvVar8 = *(void **)(lVar5 + -0x58);
      uVar9 = (ulong)((long)pvVar8 + (-4 - ((long)pvVar8 << 0x3e))) >> 2;
      uVar7 = (ulong)(((long)pvVar11 - (long)pvVar8 << 0x3e) - ((long)pvVar11 - (long)pvVar8)) >> 2;
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      if ((1 < uVar7) && ((((int)pvVar11 - (int)pvVar8 | -(int)pvVar8) & 3U) == 0)) {
        uVar7 = uVar7 & 0x3ffffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar7 * -4);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (pvVar8 != pvVar11) {
        pvVar8 = (void *)((long)pvVar8 + -4);
        if (pvVar8 == (void *)0x0) goto LAB_00913650;
      }
      *(void **)(lVar5 + -0x58) = pvVar11;
      operator_delete(pvVar11);
    }
    goto joined_r0x009134ac;
  }
  *(long *)(param_1 + 0x148) = lVar12;
  if (param_2[2] != 0) {
    plVar2 = (long *)param_2[1];
    plVar13 = *(long **)(*param_2 + 8);
    *(long **)(*plVar2 + 8) = plVar13;
    *plVar13 = *plVar2;
    param_2[2] = 0;
    while (plVar2 != param_2) {
      if (plVar2 + 2 == (long *)0x0) goto LAB_00913650;
      plVar13 = (long *)plVar2[1];
      FUN_0091d3a4(plVar2 + 2);
      if (plVar2 == (long *)0x0) goto LAB_00913650;
      operator_delete(plVar2);
      plVar2 = plVar13;
    }
  }
  return 0;
}


// ===== 00913690  FUN_00913690 =====

void FUN_00913690(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long *plVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                    (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x88),
                     *(undefined8 *)(param_1 + 0xa0),param_1 + 0xd0,*(undefined8 *)(param_1 + 0x80),
                     param_2,param_3);
  plVar3 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = operator_new(0x188);
  FUN_0091be74(pvVar2,param_2,param_3,*(undefined8 *)(param_1 + 0xa8),
               *(undefined8 *)(param_1 + 0xa0));
  plVar3 = *(long **)(param_1 + 0xb8);
  *(void **)(param_1 + 0xb8) = pvVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00913734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


// ===== 0091374c  FUN_0091374c =====

void FUN_0091374c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0091375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
  return;
}


// ===== 00913760  FUN_00913760 =====

void FUN_00913760(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x132) = param_2;
  return;
}


// ===== 0091376c  FUN_0091376c =====

undefined4 FUN_0091376c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88;
  
  FUN_00659568(auStack_98,param_2,0x8000000000000000);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,auStack_98);
  if (local_90 != (void *)0x0) {
    uVar3 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      local_88 = (void *)((long)local_88 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (local_88 != local_90) {
      local_88 = (void *)((long)local_88 + -4);
      if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_88 = local_90;
    operator_delete(local_90);
  }
  return uVar1;
}


// ===== 00913874  FUN_00913874 =====

undefined4
FUN_00913874(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88;
  
  FUN_00659568(auStack_98,param_2,param_5);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,auStack_98);
  if (local_90 != (void *)0x0) {
    uVar3 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      local_88 = (void *)((long)local_88 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (local_88 != local_90) {
      local_88 = (void *)((long)local_88 + -4);
      if (local_88 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_88 = local_90;
    operator_delete(local_90);
  }
  return uVar1;
}


// ===== 0091397c  FUN_0091397c =====

void FUN_0091397c(void)

{
  return;
}


// ===== 00913984  FUN_00913984 =====

void FUN_00913984(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  return;
}


// ===== 00913994  FUN_00913994 =====

void FUN_00913994(void)

{
  return;
}


// ===== 0091399c  FUN_0091399c =====

void FUN_0091399c(void)

{
  return;
}


// ===== 009139a4  FUN_009139a4 =====

void FUN_009139a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 009139b4  FUN_009139b4 =====

void FUN_009139b4(void)

{
  return;
}


// ===== 009139bc  FUN_009139bc =====

void FUN_009139bc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009139c8  FUN_009139c8 =====

void FUN_009139c8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d3d708;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar3 = param_2[2];
  lVar1 = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[5] = lVar5;
  param_1[4] = lVar4;
  param_1[3] = lVar3;
  param_1[2] = lVar1;
  param_1[6] = param_1 + 7;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0;
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


// ===== 00913a60  FUN_00913a60 =====

void FUN_00913a60(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3d708;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  pvVar2 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  local_8 = param_1 + 6;
  FUN_00914864(&local_8,param_1[7]);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 00913af8  FUN_00913af8 =====

void FUN_00913af8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3d708;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  pvVar2 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  local_28 = param_1 + 6;
  FUN_00914864(&local_28,param_1[7]);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00913ba4  FUN_00913ba4 =====

void FUN_00913ba4(long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar4 = param_2[3];
  lVar7 = param_2[2];
  lVar6 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar4;
  param_1[2] = lVar7;
  param_1[1] = lVar6;
  FUN_00667388(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar1 = param_3;
  }
  uVar2 = FUN_0061ff84(puVar1,uVar5,&DAT_0019d1fe,2);
  uVar5 = (ulong)*(uint *)(param_3 + 3) | 0x100000000;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  *(int *)(param_1 + 0x11) = (int)uVar5;
  *(char *)((long)param_1 + 0x8c) = (char)(uVar5 >> 0x20);
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar1 = param_3;
  }
  uVar5 = FUN_0061ff84(puVar1,uVar5,&DAT_0019d1fe,2);
  if ((uVar5 & 1) == 0) {
    uVar5 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    uVar5 = FUN_0061ff84(puVar1,uVar5,"telephone-event",0xf);
    if ((uVar5 & 1) == 0) {
      uVar5 = param_3[1];
      puVar1 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar1 = param_3;
      }
      uVar5 = FUN_0061ff84(puVar1,uVar5,&DAT_0019e63e,3);
      uVar3 = 3;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar3;
  return;
}


// ===== 00913d00  FUN_00913d00 =====

long FUN_00913d00(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))
                      (*(long **)(param_1 + 0x78),param_1,param_1 + 0x28);
    plVar2 = *(long **)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      lVar1 = *(long *)(param_1 + 0x80);
    }
  }
  return lVar1;
}


// ===== 00913d78  FUN_00913d78 =====

bool FUN_00913d78(long param_1)

{
  return *(long *)(param_1 + 0x40) == 0;
}


// ===== 00913d8c  FUN_00913d8c =====

undefined4 FUN_00913d8c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 00913d98  FUN_00913d98 =====

void FUN_00913d98(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [64];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  undefined1 local_108;
  uint local_100 [2];
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined1 local_68;
  long *local_48;
  
  plVar10 = (long *)param_2[6];
  plVar1 = param_2 + 7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (plVar10 != plVar1) {
    do {
      bVar4 = *(byte *)(plVar10 + 4);
      for (plVar9 = (long *)param_3[1]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        while ((int)*(uint *)(plVar9 + 4) <= (int)(uint)bVar4) {
          if (*(uint *)(plVar9 + 4) == (uint)bVar4) {
            if ((plVar9 == param_3 + 1) ||
               (uVar7 = FUN_00667a08(plVar9 + 5,plVar10 + 10), (uVar7 & 1) == 0)) goto LAB_00913e40;
            goto LAB_00913e5c;
          }
          plVar9 = (long *)plVar9[1];
          if (plVar9 == (long *)0x0) goto LAB_00913e40;
        }
      }
LAB_00913e40:
      puVar2 = (uint *)param_1[1];
      local_100[0] = (uint)bVar4;
      if (puVar2 < (uint *)param_1[2]) {
        if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar8 = puVar2 + 1;
        *puVar2 = local_100[0];
      }
      else {
        puVar8 = (uint *)FUN_00914770(param_1,local_100);
      }
      param_1[1] = puVar8;
LAB_00913e5c:
      plVar9 = (long *)plVar10[1];
      plVar12 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar12[2];
          bVar5 = plVar12 != (long *)*plVar10;
          plVar12 = plVar10;
        } while (bVar5);
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    } while (plVar10 != plVar1);
    puVar3 = (undefined4 *)param_1[1];
    for (puVar11 = (undefined4 *)*param_1; puVar11 != puVar3; puVar11 = puVar11 + 1) {
      (**(code **)(*param_2 + 0x30))(param_2,*puVar11);
    }
  }
  plVar10 = (long *)*param_3;
  do {
    if (plVar10 == param_3 + 1) {
      return;
    }
    plVar9 = (long *)*plVar1;
    if (plVar9 != (long *)0x0) {
      do {
        if (*(byte *)(plVar9 + 4) <= *(byte *)(plVar10 + 4)) {
          if (*(byte *)(plVar9 + 4) == *(byte *)(plVar10 + 4)) goto LAB_00914034;
          plVar9 = plVar9 + 1;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    FUN_00913ba4(&local_198,param_2 + 1,plVar10 + 5,param_2[0xb]);
    local_100[0] = *(uint *)(plVar10 + 4);
    local_f8 = local_198;
    if (local_198 != (long *)0x0) {
      FUN_00d0f740(1,local_198 + 1);
    }
    uStack_e8 = uStack_188;
    local_f0 = local_190;
    uStack_d8 = uStack_178;
    uStack_e0 = local_180;
    FUN_00667388(auStack_d0,auStack_170);
    local_78 = local_118;
    local_118 = (long *)0x0;
    local_80 = local_120;
    uStack_88 = uStack_128;
    local_90 = local_130;
    local_70 = local_110;
    local_68 = local_108;
    local_48 = param_2 + 6;
    FUN_0091492c(&local_48,local_100);
    plVar9 = local_78;
    local_78 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_006678ac(auStack_d0);
    plVar9 = local_f8;
    if ((local_f8 != (long *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,local_f8 + 1), iVar6 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    plVar9 = local_118;
    local_118 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_006678ac(auStack_170);
    plVar9 = local_198;
    if ((local_198 != (long *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,local_198 + 1), iVar6 == 1))
    {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
LAB_00914034:
    plVar9 = (long *)plVar10[1];
    plVar12 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar12[2];
        bVar5 = plVar12 != (long *)*plVar10;
        plVar12 = plVar10;
      } while (bVar5);
    }
    else {
      do {
        plVar10 = plVar9;
        plVar9 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  } while( true );
}


// ===== 0091409c  FUN_0091409c =====

undefined4 FUN_0091409c(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  ulong extraout_x1;
  undefined4 uVar3;
  long *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [64];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  uint local_e8 [2];
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  if (0x7f < param_2) {
    return 0xffffffff;
  }
  FUN_00913ba4(&local_180,param_1 + 8,param_3,*(undefined8 *)(param_1 + 0x58));
  local_e0 = local_180;
  local_e8[0] = param_2;
  if (local_180 != (long *)0x0) {
    FUN_00d0f740(1,local_180 + 1);
  }
  uStack_d0 = uStack_170;
  local_d8 = local_178;
  uStack_c0 = uStack_160;
  uStack_c8 = local_168;
  FUN_00667388(auStack_b8,auStack_158);
  local_60 = plStack_100;
  plStack_100 = (long *)0x0;
  uStack_70 = uStack_110;
  local_78 = local_118;
  uStack_68 = local_108;
  local_58 = local_f8;
  local_50 = local_f0;
  local_48 = param_1 + 0x30;
  FUN_0091492c(&local_48,local_e8);
  plVar1 = local_60;
  local_60 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_006678ac(auStack_b8);
  plVar1 = local_e0;
  if ((local_e0 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_e0 + 1), iVar2 == 1)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_006678ac(auStack_158);
  if ((local_180 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_180 + 1), iVar2 == 1)) {
    (**(code **)(*local_180 + 8))(local_180);
  }
  uVar3 = 0xfffffffc;
  if ((extraout_x1 & 1) != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 0091421c  FUN_0091421c =====

undefined8 FUN_0091421c(long param_1,byte param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    return 0xfffffffb;
  }
  while( true ) {
    while (param_2 < *(byte *)(plVar1 + 4)) {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return 0xfffffffb;
      }
    }
    if (param_2 == *(byte *)(plVar1 + 4)) break;
    plVar1 = (long *)plVar1[1];
    if (plVar1 == (long *)0x0) {
      return 0xfffffffb;
    }
  }
  if (plVar1 == (long *)(param_1 + 0x38)) {
    return 0xfffffffb;
  }
  FUN_00914acc(param_1 + 0x30,plVar1);
  if (*(uint *)(param_1 + 0x48) == (uint)param_2) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x4c) != (uint)param_2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return 0;
}


// ===== 009142dc  FUN_009142dc =====

void FUN_009142dc(long param_1)

{
  undefined8 *puVar1;
  long local_8;
  
  puVar1 = (undefined8 *)(param_1 + 0x38);
  local_8 = param_1 + 0x30;
  FUN_00914864(&local_8,*puVar1);
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return;
}


// ===== 0091432c  FUN_0091432c =====

long * FUN_0091432c(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    while (param_2 < *(byte *)(plVar2 + 4)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    if (param_2 == *(byte *)(plVar2 + 4)) break;
    plVar2 = (long *)plVar2[1];
  }
  plVar1 = (long *)0x0;
  if (plVar2 != (long *)(param_1 + 0x38)) {
    plVar1 = plVar2 + 5;
  }
  return plVar1;
}


// ===== 00914378  FUN_00914378 =====

undefined8 FUN_00914378(long *param_1,uint param_2,undefined1 *param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 == 0) {
    return 0xfffffffb;
  }
  if (*(char *)(lVar1 + 0x90) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/decoder_database.cc",0xc5,
                 "!info->IsComfortNoise()",&DAT_001f5fa0);
  }
  *param_3 = 0;
  if (-1 < (int)*(uint *)(param_1 + 9)) {
    if (*(uint *)(param_1 + 9) == (param_2 & 0xff)) goto LAB_00914414;
    lVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    plVar2 = *(long **)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *param_3 = 1;
LAB_00914414:
  *(uint *)(param_1 + 9) = param_2 & 0xff;
  return 0;
}


// ===== 00914450  FUN_00914450 =====

long FUN_00914450(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (-1 < (int)param_1[9]) {
    lVar1 = (**(code **)(*param_1 + 0x40))();
    lVar2 = lVar1;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x90) == '\0') {
        lVar2 = *(long *)(lVar1 + 0x80);
        if (lVar2 == 0) {
          lVar2 = (**(code **)(**(long **)(lVar1 + 0x78) + 0x30))
                            (*(long **)(lVar1 + 0x78),lVar1,lVar1 + 0x28);
          plVar3 = *(long **)(lVar1 + 0x80);
          *(long *)(lVar1 + 0x80) = lVar2;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
            lVar2 = *(long *)(lVar1 + 0x80);
          }
        }
      }
      else {
        lVar2 = 0;
      }
    }
    return lVar2;
  }
  return 0;
}


// ===== 009144e8  FUN_009144e8 =====

long FUN_009144e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x90) == '\0') {
      lVar2 = *(long *)(lVar1 + 0x80);
      if (lVar2 == 0) {
        lVar2 = (**(code **)(**(long **)(lVar1 + 0x78) + 0x30))
                          (*(long **)(lVar1 + 0x78),lVar1,lVar1 + 0x28);
        plVar3 = *(long **)(lVar1 + 0x80);
        *(long *)(lVar1 + 0x80) = lVar2;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
          lVar2 = *(long *)(lVar1 + 0x80);
        }
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


// ===== 0091456c  FUN_0091456c =====

undefined8 FUN_0091456c(long *param_1,uint param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 == 0) {
    uVar3 = 0xfffffffb;
  }
  else {
    if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) &&
       (*(uint *)((long)param_1 + 0x4c) != (param_2 & 0xff))) {
      pvVar2 = (void *)param_1[10];
      param_1[10] = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    uVar3 = 0;
    *(uint *)((long)param_1 + 0x4c) = param_2 & 0xff;
  }
  return uVar3;
}


// ===== 009145dc  FUN_009145dc =====

void * FUN_009145dc(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x4c) < 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x50);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = operator_new(0x7c);
      FUN_009268d4();
      pvVar1 = *(void **)(param_1 + 0x50);
      *(void **)(param_1 + 0x50) = pvVar2;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = *(void **)(param_1 + 0x50);
      }
    }
  }
  return pvVar2;
}


// ===== 00914644  FUN_00914644 =====

ulong FUN_00914644(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(char *)(uVar1 + 0x90) == '\x01');
  }
  return uVar1;
}


// ===== 00914678  FUN_00914678 =====

ulong FUN_00914678(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(char *)(uVar1 + 0x90) == '\x02');
  }
  return uVar1;
}


// ===== 009146ac  FUN_009146ac =====

ulong FUN_009146ac(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(char *)(uVar1 + 0x90) == '\x03');
  }
  return uVar1;
}


// ===== 009146e0  FUN_009146e0 =====

undefined8 FUN_009146e0(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_2;
  do {
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 == param_2) {
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined1 *)(lVar3 + 0x16));
  } while (lVar1 != 0);
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_coding/neteq/decoder_database.cc",0x89a,
                 "CheckPayloadTypes: unknown RTP payload type ",*(undefined1 *)(lVar3 + 0x16));
  }
  return 0xfffffffb;
}


// ===== 00914770  FUN_00914770 =====

undefined4 * FUN_00914770(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005d348c();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00914864  FUN_00914864 =====

void FUN_00914864(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00914864(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)param_2[0x15];
      puVar3 = (undefined8 *)param_2[1];
      param_2[0x15] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_006678ac(param_2 + 10);
      plVar2 = (long *)param_2[5];
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      operator_delete(param_2);
      param_2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0091492c  FUN_0091492c =====

undefined1  [16] FUN_0091492c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar12 = (long *)*param_1;
  plVar5 = (long *)operator_new(0xc0);
  if (plVar5 != (long *)0x0) {
    *plVar5 = 0;
    if ((byte *)(plVar5 + 4) != (byte *)0x0) {
      lVar8 = *(long *)(param_2 + 2);
      *(char *)(plVar5 + 4) = (char)*param_2;
      plVar5[5] = lVar8;
      if (lVar8 != 0) {
        FUN_00d0f740(1,lVar8 + 8);
      }
      lVar8 = *(long *)(param_2 + 4);
      lVar13 = *(long *)(param_2 + 10);
      lVar10 = *(long *)(param_2 + 8);
      plVar5[7] = *(long *)(param_2 + 6);
      plVar5[6] = lVar8;
      plVar5[9] = lVar13;
      plVar5[8] = lVar10;
      FUN_00667388(plVar5 + 10,param_2 + 0xc);
      lVar8 = *(long *)(param_2 + 0x20);
      plVar6 = *(long **)(param_2 + 0x22);
      lVar13 = *(long *)(param_2 + 0x1c);
      lVar10 = *(long *)(param_2 + 0x24);
      uVar1 = *(undefined1 *)(param_2 + 0x26);
      *(undefined8 *)(param_2 + 0x22) = 0;
      plVar5[0x13] = *(long *)(param_2 + 0x1e);
      plVar5[0x12] = lVar13;
      plVar5[0x14] = lVar8;
      plVar5[0x15] = (long)plVar6;
      plVar5[0x16] = lVar10;
      *(undefined1 *)(plVar5 + 0x17) = uVar1;
      plVar9 = plVar12 + 1;
      plVar11 = plVar9;
      if ((long *)*plVar9 != (long *)0x0) {
        bVar2 = *(byte *)(plVar5 + 4);
        plVar3 = (long *)*plVar9;
        do {
          while (plVar11 = plVar3, *(byte *)(plVar11 + 4) <= bVar2) {
            if (bVar2 == *(byte *)(plVar11 + 4)) {
              plVar5[0x15] = 0;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 8))();
              }
              FUN_006678ac(plVar5 + 10);
              plVar12 = (long *)plVar5[5];
              if ((plVar12 != (long *)0x0) &&
                 (iVar4 = FUN_00d0f7a0(0xffffffff,plVar12 + 1), iVar4 == 1)) {
                (**(code **)(*plVar12 + 8))(plVar12);
              }
              operator_delete(plVar5);
              uVar7 = 0;
              goto LAB_00914aa0;
            }
            plVar3 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              plVar9 = plVar11 + 1;
              goto LAB_00914a04;
            }
          }
          plVar9 = plVar11;
          plVar3 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
LAB_00914a04:
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)plVar11;
      *plVar9 = (long)plVar5;
      plVar6 = plVar5;
      if (*(long *)*plVar12 != 0) {
        *plVar12 = *(long *)*plVar12;
        plVar6 = (long *)*plVar9;
      }
      FUN_005d5b94(plVar12[1],plVar6);
      uVar7 = 1;
      plVar12[2] = plVar12[2] + 1;
      plVar11 = plVar5;
LAB_00914aa0:
      auVar14._8_8_ = uVar7;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00914acc  FUN_00914acc =====

undefined8 * FUN_00914acc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar5 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar6 = (undefined8 *)puVar5[2];
      bVar2 = puVar5 != (undefined8 *)*puVar6;
      puVar5 = puVar6;
    } while (bVar2);
  }
  else {
    do {
      puVar6 = puVar1;
      puVar1 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar6;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar4 = (long *)param_2[0x15];
  param_2[0x15] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_006678ac(param_2 + 10);
  plVar4 = (long *)param_2[5];
  if ((plVar4 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar3 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  operator_delete(param_2);
  return puVar6;
}


// ===== 00914bc8  FUN_00914bc8 =====

void FUN_00914bc8(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_00d3d780;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[4] = 0;
  if ((int)param_2 < 32000) {
    if ((param_2 == 8000) || (param_2 == 16000)) {
LAB_00914c24:
      *(uint *)(param_1 + 1) = (param_2 * 7) / 100;
      *(uint *)((long)param_1 + 0xc) = (param_2 >> 2 & 0x3fff) / 0x19;
      return;
    }
  }
  else if ((param_2 == 48000) || (param_2 == 32000)) goto LAB_00914c24;
  return;
}


// ===== 00914c54  FUN_00914c54 =====

void FUN_00914c54(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3d780;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00914cf0  FUN_00914cf0 =====

void FUN_00914cf0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3d780;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00914d98  FUN_00914d98 =====

void FUN_00914d98(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    while (plVar1 != (long *)(param_1 + 0x10)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00914e28  FUN_00914e28 =====

undefined8 FUN_00914e28(undefined4 param_1,byte *param_2,ulong param_3,undefined4 *param_4)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/dtmf_buffer.cc",0x4a,"payload",&DAT_001f5fa0);
  }
  if (param_4 != (undefined4 *)0x0) {
    if (param_3 < 4) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/dtmf_buffer.cc",0x26a,
                     "ParseEvent payload too short");
      }
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      param_4[1] = (uint)*param_2;
      *(byte *)(param_4 + 4) = param_2[1] >> 7;
      param_4[2] = param_2[1] & 0x3f;
      uVar1 = *(ushort *)(param_2 + 2);
      *param_4 = param_1;
      param_4[3] = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_coding/neteq/dtmf_buffer.cc",0x4b,"event",&DAT_001f5fa0);
}


// ===== 00914ef8  FUN_00914ef8 =====

undefined8 FUN_00914ef8(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *local_18;
  
  if (((*(uint *)((long)param_2 + 4) < 0x10) && (*(uint *)(param_2 + 1) < 0x40)) &&
     (iVar2 = *(int *)((long)param_2 + 0xc), 0xffff0000 < iVar2 - 0x10000U)) {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar1 = param_1 + 0x10;
    if (lVar6 != lVar1) {
      do {
        if ((*(uint *)(lVar6 + 0x14) == *(uint *)((long)param_2 + 4)) &&
           (*(int *)(lVar6 + 0x10) == (int)*param_2)) {
          if ((*(byte *)(lVar6 + 0x20) & 1) == 0) {
            if (iVar2 <= *(int *)(lVar6 + 0x1c)) {
              iVar2 = *(int *)(lVar6 + 0x1c);
            }
            *(int *)(lVar6 + 0x1c) = iVar2;
          }
          if ((char)param_2[2] == '\x01') {
            *(undefined1 *)(lVar6 + 0x20) = 1;
            return 0;
          }
          goto LAB_00915038;
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar1);
    }
    plVar5 = (long *)operator_new(0x28);
    if ((plVar5 == (long *)0x0) || (plVar5 + 2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar8 = param_2[1];
    lVar7 = *param_2;
    *(int *)(plVar5 + 4) = (int)param_2[2];
    lVar6 = *(long *)(param_1 + 0x10);
    plVar5[3] = lVar8;
    plVar5[2] = lVar7;
    *plVar5 = lVar6;
    plVar5[1] = lVar1;
    *(long **)(lVar6 + 8) = plVar5;
    *(long **)(param_1 + 0x10) = plVar5;
    lVar6 = *(long *)(param_1 + 0x20) + 1;
    *(long *)(param_1 + 0x20) = lVar6;
    local_18 = FUN_00915064;
    FUN_00915304(*(undefined8 *)(param_1 + 0x18),lVar1,lVar6,&local_18);
LAB_00915038:
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/dtmf_buffer.cc",0x342,
                   "InsertEvent invalid parameters");
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}


// ===== 00915064  FUN_00915064 =====

bool FUN_00915064(int *param_1,int *param_2)

{
  if (*param_2 == *param_1) {
    return param_1[1] < param_2[1];
  }
  return (uint)(*param_2 - *param_1) < 0x7fffffff;
}


// ===== 0091509c  FUN_0091509c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0091509c(long param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    if (plVar6 == (long *)(param_1 + 0x10)) {
      return 0;
    }
    puVar7 = (uint *)(plVar6 + 2);
    bVar4 = *(byte *)(plVar6 + 4);
    uVar1 = *(int *)((long)plVar6 + 0x1c) + *puVar7;
    if ((bVar4 & 1) == 0) {
      uVar1 = *(int *)(param_1 + 8) + uVar1;
      if ((long *)plVar6[1] == (long *)(param_1 + 0x10)) goto LAB_00915128;
      uVar3 = *(uint *)((long *)plVar6[1] + 2);
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
      bVar5 = true;
    }
    else {
LAB_00915128:
      bVar5 = false;
      uVar3 = uVar1;
    }
    if ((*puVar7 <= param_2) && (param_2 <= uVar3)) {
      if (param_3 != (undefined4 *)0x0) {
        param_3[1] = *(undefined4 *)((long)plVar6 + 0x14);
        *(char *)(param_3 + 4) = (char)plVar6[4];
        param_3[2] = (int)plVar6[3];
        param_3[3] = *(undefined4 *)((long)plVar6 + 0x1c);
        *param_3 = (int)plVar6[2];
        bVar4 = *(byte *)(plVar6 + 4) & 1;
      }
      if (bVar4 == 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0xc) + param_2 < uVar3) {
        return 1;
      }
LAB_00915204:
      plVar2 = (long *)plVar6[1];
      *(long **)(*plVar6 + 8) = plVar2;
      *plVar2 = *plVar6;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      if ((puVar7 != (uint *)0x0) && (plVar6 != (long *)0x0)) {
        operator_delete(plVar6);
        return 1;
      }
LAB_0091524c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (uVar3 < param_2) {
      if (!bVar5) {
        if (param_3 != (undefined4 *)0x0) {
          param_3[1] = *(undefined4 *)((long)plVar6 + 0x14);
          *(char *)(param_3 + 4) = (char)plVar6[4];
          param_3[2] = (int)plVar6[3];
          param_3[3] = *(undefined4 *)((long)plVar6 + 0x1c);
          *param_3 = (int)plVar6[2];
        }
        goto LAB_00915204;
      }
      plVar2 = (long *)plVar6[1];
      *(long **)(*plVar6 + 8) = plVar2;
      *plVar2 = *plVar6;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      if ((puVar7 == (uint *)0x0) || (plVar6 == (long *)0x0)) goto LAB_0091524c;
      operator_delete(plVar6);
      plVar6 = plVar2;
    }
    else {
      plVar6 = (long *)plVar6[1];
    }
  } while( true );
}


// ===== 00915260  FUN_00915260 =====

undefined8 FUN_00915260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0091526c  FUN_0091526c =====

bool FUN_0091526c(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}


// ===== 00915280  FUN_00915280 =====

undefined8 FUN_00915280(long param_1,uint param_2)

{
  if ((int)param_2 < 32000) {
    if ((param_2 == 8000) || (param_2 == 16000)) {
LAB_009152cc:
      *(uint *)(param_1 + 8) = (param_2 * 7) / 100;
      *(uint *)(param_1 + 0xc) = (param_2 >> 2 & 0x3fff) / 0x19;
      return 0;
    }
  }
  else if ((param_2 == 48000) || (param_2 == 32000)) goto LAB_009152cc;
  return 4;
}


// ===== 00915304  FUN_00915304 =====

long * FUN_00915304(long *param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      param_2 = (long *)*param_2;
      uVar4 = (*(code *)*param_4)(param_2 + 2,param_1 + 2);
      if ((uVar4 & 1) != 0) {
        plVar9 = (long *)param_2[1];
        *(long **)(*param_2 + 8) = plVar9;
        *plVar9 = *param_2;
        *(long **)(*param_1 + 8) = param_2;
        *param_2 = *param_1;
        *param_1 = (long)param_2;
        param_2[1] = (long)param_1;
        param_1 = param_2;
      }
    }
    else {
      uVar8 = param_3 >> 1;
      uVar4 = uVar8 + 1;
      plVar9 = param_1;
      do {
        uVar4 = uVar4 - 1;
        plVar9 = (long *)plVar9[1];
      } while (1 < uVar4);
      param_1 = (long *)FUN_00915304(param_1,plVar9,uVar8,param_4);
      plVar9 = (long *)FUN_00915304(plVar9,param_2,param_3 - uVar8,param_4);
      uVar4 = (*(code *)*param_4)(plVar9 + 2,param_1 + 2);
      if ((uVar4 & 1) == 0) {
        plVar7 = plVar9;
        plVar3 = plVar9;
        plVar6 = (long *)param_1[1];
        if ((long *)param_1[1] == plVar9) {
          return param_1;
        }
      }
      else {
        plVar7 = (long *)plVar9[1];
        while ((plVar7 != param_2 &&
               (uVar4 = (*(code *)*param_4)(plVar7 + 2,param_1 + 2), (uVar4 & 1) != 0))) {
          plVar7 = (long *)plVar7[1];
        }
        lVar5 = *plVar7;
        plVar6 = *(long **)(lVar5 + 8);
        *(long **)(*plVar9 + 8) = plVar6;
        *plVar6 = *plVar9;
        plVar6 = (long *)param_1[1];
        *(long **)(*param_1 + 8) = plVar9;
        *plVar9 = *param_1;
        *param_1 = lVar5;
        *(long **)(lVar5 + 8) = param_1;
        plVar3 = plVar7;
        param_1 = plVar9;
        if (plVar6 == plVar7) {
          return plVar9;
        }
      }
      do {
        while( true ) {
          if (plVar3 == param_2) {
            return param_1;
          }
          uVar4 = (*(code *)*param_4)(plVar3 + 2,plVar6 + 2);
          if ((uVar4 & 1) == 0) break;
          plVar9 = (long *)plVar3[1];
          while ((plVar9 != param_2 &&
                 (uVar4 = (*(code *)*param_4)(plVar9 + 2,plVar6 + 2), (uVar4 & 1) != 0))) {
            plVar9 = (long *)plVar9[1];
          }
          lVar5 = *plVar9;
          plVar1 = plVar9;
          if (plVar7 != plVar3) {
            plVar1 = plVar7;
          }
          plVar7 = *(long **)(lVar5 + 8);
          *(long **)(*plVar3 + 8) = plVar7;
          *plVar7 = *plVar3;
          plVar2 = (long *)plVar6[1];
          *(long **)(*plVar6 + 8) = plVar3;
          *plVar3 = *plVar6;
          *plVar6 = lVar5;
          *(long **)(lVar5 + 8) = plVar6;
          plVar7 = plVar1;
          plVar3 = plVar9;
          plVar6 = plVar2;
          if (plVar2 == plVar1) {
            return param_1;
          }
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != plVar7);
    }
  }
  return param_1;
}


// ===== 00915530  FUN_00915530 =====

void FUN_00915530(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3d7d0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}


// ===== 00915550  FUN_00915550 =====

undefined4 FUN_00915550(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_2 == 8000) {
    lVar3 = 0;
  }
  else if (param_2 == 48000) {
    lVar3 = 3;
  }
  else if (param_2 == 32000) {
    lVar3 = 2;
  }
  else {
    lVar3 = 1;
  }
  uVar2 = 0xfffffffe;
  if ((param_3 < 0x10) && (param_4 < 0x40)) {
    lVar3 = lVar3 * 0x40;
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(&UNK_002258f8 + (ulong)param_3 * 4 + lVar3);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&UNK_002259f8 + (ulong)param_3 * 4 + lVar3);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(&DAT_00225cf8 + (ulong)param_4 * 4);
    uVar1 = *(undefined4 *)(&UNK_00225af8 + (ulong)param_3 * 4 + lVar3);
    *(undefined2 *)(param_1 + 0x1a) = 0;
    *(short *)(param_1 + 0x18) = (short)uVar1;
    uVar1 = *(undefined4 *)(&UNK_00225bf8 + (ulong)param_3 * 4 + lVar3);
    *(undefined2 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(short *)(param_1 + 0x1c) = (short)uVar1;
  }
  return uVar2;
}


// ===== 0091562c  FUN_0091562c =====

void FUN_0091562c(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


// ===== 00915638  FUN_00915638 =====

ulong FUN_00915638(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if (param_3 == 0) {
      param_2 = 0xfffffffe;
    }
    else {
      FUN_00916570(param_3);
      if (param_2 != 0) {
        uVar7 = 0;
        do {
          sVar3 = *(short *)(param_1 + 0x18);
          *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x1a);
          sVar3 = (short)(*(int *)(param_1 + 0xc) * (int)*(short *)(param_1 + 0x1a) + 0x2000U >> 0xe
                         ) - sVar3;
          sVar4 = *(short *)(param_1 + 0x1c);
          *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1e);
          *(short *)(param_1 + 0x1a) = sVar3;
          sVar4 = (short)(*(int *)(param_1 + 0x10) * (int)*(short *)(param_1 + 0x1e) + 0x2000U >>
                         0xe) - sVar4;
          *(short *)(param_1 + 0x1e) = sVar4;
          iVar2 = *(int *)(param_1 + 0x14);
          plVar5 = (long *)FUN_00915ba4(param_3,0);
          uVar6 = 0;
          if ((ulong)plVar5[1] <= uVar7 + plVar5[2]) {
            uVar6 = plVar5[1];
          }
          lVar1 = uVar7 + (plVar5[2] - uVar6);
          uVar7 = uVar7 + 1;
          *(short *)(*plVar5 + lVar1 * 2) =
               (short)((sVar3 * 0x5a83 + sVar4 * 0x8000 + 0x4000 >> 0xf) * iVar2 + 0x2000U >> 0xe);
        } while (param_2 != uVar7);
      }
      uVar7 = FUN_00915b90(param_3);
      if (1 < uVar7) {
        uVar7 = 1;
        do {
          FUN_00916608(param_3,0,uVar7);
          uVar7 = uVar7 + 1;
          uVar6 = FUN_00915b90(param_3);
        } while (uVar7 < uVar6);
      }
    }
  }
  else {
    param_2 = 0xffffffff;
  }
  return param_2 & 0xffffffff;
}


// ===== 00915788  FUN_00915788 =====

undefined1 FUN_00915788(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 00915794  FUN_00915794 =====

void FUN_00915794(void)

{
  return;
}


// ===== 0091579c  FUN_0091579c =====

void FUN_0091579c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009157a8  FUN_009157a8 =====

void FUN_009157a8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d3d810;
  FUN_009157dc(param_1 + 1,param_2,0);
  return;
}


// ===== 009157dc  FUN_009157dc =====

void FUN_009157dc(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  
  if (0x18 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/neteq/audio_multi_vector.cc",0x1e,
                 "num_channels <= kMaxNumberOfAudioChannels",&DAT_001fb920,param_2,0x18);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    uVar10 = param_2 * 8;
    puVar4 = (undefined8 *)operator_new(uVar10);
    uVar6 = uVar10 - 8 >> 3;
    *param_1 = puVar4;
    uVar2 = (ulong)-(long)puVar4 >> 3;
    if (uVar6 <= (ulong)-(long)puVar4 >> 3) {
      uVar2 = uVar6;
    }
    puVar1 = puVar4 + param_2;
    param_1[2] = puVar1;
    puVar7 = puVar4;
    if ((5 < uVar2) && ((-(int)puVar4 & 7U) == 0)) {
      uVar6 = uVar2 + 1 & 3;
      uVar3 = 4;
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      puVar9 = puVar4 + 2;
      lVar8 = (uVar2 + 1) - uVar3;
      puVar7 = puVar4 + lVar8;
      do {
        lVar8 = lVar8 + -4;
        puVar9[-1] = 0;
        puVar9[-2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 4;
      } while (lVar8 != 0);
    }
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = puVar7 + 1;
      *puVar7 = 0;
      puVar7 = puVar9;
    } while (puVar9 != puVar1);
    param_1[1] = puVar1;
    do {
      pvVar5 = operator_new(0x20);
      if (param_3 == 0) {
        FUN_00916658();
      }
      else {
        FUN_00916698(pvVar5,param_3);
      }
      pvVar11 = (void *)*puVar4;
      *puVar4 = pvVar5;
      if (pvVar11 != (void *)0x0) {
        FUN_009166f8(pvVar11);
        operator_delete(pvVar11);
      }
      uVar10 = uVar10 - 8;
      puVar4 = puVar4 + 1;
    } while (uVar10 != 0);
  }
  return;
}


// ===== 0091594c  FUN_0091594c =====

void FUN_0091594c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00d3d810;
  FUN_009157dc(param_1 + 1,param_2,param_3);
  return;
}


// ===== 00915980  FUN_00915980 =====

void FUN_00915980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00d3d810;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[2];
  puVar1 = puVar4;
  if (puVar4 != puVar2) {
    do {
      puVar2 = puVar2 + -1;
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*puVar2;
      *puVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_009166f8(pvVar3);
        operator_delete(pvVar3);
      }
    } while (puVar2 != puVar4);
    puVar1 = (undefined8 *)param_1[1];
  }
  param_1[2] = puVar4;
  operator_delete(puVar1);
  return;
}


// ===== 00915a44  FUN_00915a44 =====

void FUN_00915a44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00d3d810;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[2];
    puVar1 = puVar4;
    if (puVar4 != puVar2) {
      do {
        puVar2 = puVar2 + -1;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar3 = (void *)*puVar2;
        *puVar2 = 0;
        if (pvVar3 != (void *)0x0) {
          FUN_009166f8(pvVar3);
          operator_delete(pvVar3);
        }
      } while (puVar2 != puVar4);
      puVar1 = (undefined8 *)param_1[1];
    }
    param_1[2] = puVar4;
    operator_delete(puVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00915b00  FUN_00915b00 =====

void FUN_00915b00(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_009166ec(*puVar2);
  }
  return;
}


// ===== 00915b3c  FUN_00915b3c =====

void FUN_00915b3c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_009166ec(*puVar2);
    FUN_00916eac(*puVar2,param_2);
  }
  return;
}


// ===== 00915b90  FUN_00915b90 =====

long FUN_00915b90(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
}


// ===== 00915ba4  FUN_00915ba4 =====

undefined8 FUN_00915ba4(long param_1,ulong param_2)

{
  if (param_2 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)) {
    return *(undefined8 *)(*(long *)(param_1 + 8) + param_2 * 8);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00915be0  FUN_00915be0 =====

void FUN_00915be0(long param_1,long param_2,ulong param_3)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_3 != 0) {
    puVar18 = *(undefined8 **)(param_1 + 8);
    puVar19 = *(undefined8 **)(param_1 + 0x10);
    if ((long)puVar19 - (long)puVar18 == 8) {
      FUN_00916ce0(*puVar18,param_2,param_3);
      return;
    }
    uVar17 = (long)puVar19 - (long)puVar18 >> 3;
    uVar5 = 0;
    if (uVar17 != 0) {
      uVar5 = param_3 / uVar17;
    }
    uVar8 = uVar5 << 1;
    if (uVar5 == 0xffffffffffffffff || (long)(uVar5 + 1) < 0 != SCARRY8(uVar5,1)) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar8);
    if (puVar19 != puVar18) {
      lVar4 = uVar5 - 1;
      uVar8 = 0;
      uVar3 = uVar5;
      if (uVar5 == 0 || lVar4 == 0) {
        uVar3 = 0;
      }
      uVar9 = uVar3 & 0xfffffffffffffff0;
      uVar10 = uVar3 & 0xfffffffffffffffc;
      puVar20 = (undefined8 *)(param_2 + 0x10);
      uVar11 = uVar17;
      lVar16 = param_2;
      do {
        if (uVar17 <= param_3) {
          if (uVar5 < 4) {
            uVar12 = 0;
          }
          else {
            uVar2 = param_2 + uVar8 * 2;
            uVar12 = 0;
            if (((uVar2 <= uVar2 + lVar4 * 2) &&
                (uVar11 == 1 && (pvVar7 <= (void *)((long)pvVar7 + lVar4 * 2) && -1 < lVar4))) &&
               (0x1f < (long)pvVar7 - uVar2)) {
              if (uVar5 < 0x10) {
                uVar12 = 0;
              }
              else {
                puVar15 = (undefined8 *)((long)pvVar7 + 0x10);
                puVar13 = puVar20;
                uVar12 = uVar9;
                do {
                  puVar6 = puVar13 + -1;
                  uVar21 = puVar13[-2];
                  uVar23 = puVar13[1];
                  uVar22 = *puVar13;
                  uVar12 = uVar12 - 0x10;
                  puVar13 = puVar13 + 4;
                  puVar15[-1] = *puVar6;
                  puVar15[-2] = uVar21;
                  puVar15[1] = uVar23;
                  *puVar15 = uVar22;
                  puVar15 = puVar15 + 4;
                } while (uVar12 != 0);
                if (uVar5 == uVar9) goto LAB_00915cf8;
                uVar12 = uVar9;
                if ((uVar3 & 0xc) == 0) goto LAB_00915cd4;
              }
              lVar14 = uVar10 - uVar12;
              puVar15 = (undefined8 *)((long)pvVar7 + uVar12 * 2);
              puVar13 = (undefined8 *)(lVar16 + uVar12 * 2);
              do {
                lVar14 = lVar14 + -4;
                *puVar15 = *puVar13;
                puVar15 = puVar15 + 1;
                puVar13 = puVar13 + 1;
              } while (lVar14 != 0);
              uVar12 = uVar10;
              if (uVar5 == uVar10) goto LAB_00915cf8;
            }
          }
LAB_00915cd4:
          lVar14 = uVar12 * uVar11 * 2;
          do {
            puVar1 = (undefined2 *)(lVar16 + lVar14);
            lVar14 = lVar14 + uVar11 * 2;
            *(undefined2 *)((long)pvVar7 + uVar12 * 2) = *puVar1;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar5);
        }
LAB_00915cf8:
        if ((ulong)((long)puVar19 - (long)puVar18 >> 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        FUN_00916ce0(puVar18[uVar8],pvVar7,uVar5);
        puVar18 = *(undefined8 **)(param_1 + 8);
        puVar19 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = uVar8 + 1;
        puVar20 = (undefined8 *)((long)puVar20 + 2);
        lVar16 = lVar16 + 2;
        uVar11 = (long)puVar19 - (long)puVar18 >> 3;
      } while (uVar8 < uVar11);
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      return;
    }
  }
  return;
}


// ===== 00915e50  FUN_00915e50 =====

void FUN_00915e50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 - lVar1 == *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) && lVar2 != lVar1) {
    uVar3 = 0;
    do {
      if (((ulong)(lVar2 - lVar1 >> 3) <= uVar3) ||
         ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar3)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_00916b6c(*(undefined8 *)(lVar1 + uVar3 * 8),
                   *(undefined8 *)(*(long *)(param_2 + 8) + uVar3 * 8));
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar2 - lVar1 >> 3));
  }
  return;
}


// ===== 00915ef0  FUN_00915ef0 =====

undefined8 FUN_00915ef0(long param_1,ulong param_2)

{
  if (param_2 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)) {
    return *(undefined8 *)(*(long *)(param_1 + 8) + param_2 * 8);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00915f2c  FUN_00915f2c =====

void FUN_00915f2c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(undefined8 **)(param_2 + 0x10) != *(undefined8 **)(param_2 + 8)) {
    lVar2 = FUN_00916884(**(undefined8 **)(param_2 + 8));
    uVar1 = lVar2 - 1U;
    if (param_3 <= lVar2 - 1U) {
      uVar1 = param_3;
    }
    if (*(undefined8 **)(param_2 + 0x10) != *(undefined8 **)(param_2 + 8)) {
      lVar3 = FUN_00916884(**(undefined8 **)(param_2 + 8));
      lVar2 = *(long *)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 - lVar2 == *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) && (lVar4 != lVar2))
      {
        uVar5 = 0;
        do {
          if (((ulong)(lVar4 - lVar2 >> 3) <= uVar5) ||
             ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar5))
          goto LAB_00916008;
          FUN_00916b90(*(undefined8 *)(lVar2 + uVar5 * 8),
                       *(undefined8 *)(*(long *)(param_2 + 8) + uVar5 * 8),lVar3 - uVar1,uVar1);
          lVar2 = *(long *)(param_1 + 8);
          lVar4 = *(long *)(param_1 + 0x10);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulong)(lVar4 - lVar2 >> 3));
      }
      return;
    }
  }
LAB_00916008:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0091601c  FUN_0091601c =====

void FUN_0091601c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
    FUN_00916884(**(undefined8 **)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00916054  FUN_00916054 =====

void FUN_00916054(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00916e34(*puVar2,param_2);
  }
  return;
}


// ===== 009160a0  FUN_009160a0 =====

void FUN_009160a0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00916e70(*puVar2,param_2);
  }
  return;
}


// ===== 009160ec  FUN_009160ec =====

void FUN_009160ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00916100(param_1,0,param_2,param_3);
  return;
}


// ===== 00916100  FUN_00916100 =====

long FUN_00916100(long param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  
  if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
    uVar4 = FUN_00916884(**(undefined8 **)(param_1 + 8));
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
      uVar5 = FUN_00916884(**(undefined8 **)(param_1 + 8));
      if (uVar5 < uVar4 + param_3) {
        if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 8)) goto LAB_00916238;
        param_3 = FUN_00916884(**(undefined8 **)(param_1 + 8));
        param_3 = param_3 - uVar4;
      }
      puVar9 = *(undefined8 **)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      if ((long)puVar10 - (long)puVar9 == 8) {
        FUN_009168a4(*puVar9,param_3,uVar4,param_4);
        lVar6 = param_3;
      }
      else if (param_3 == 0) {
        lVar6 = 0;
      }
      else {
        lVar7 = 0;
        lVar6 = 0;
        do {
          bVar3 = puVar10 != puVar9;
          puVar10 = puVar9;
          if (bVar3) {
            uVar5 = 0;
            do {
              plVar8 = (long *)puVar9[uVar5];
              uVar1 = lVar7 + uVar4 + plVar8[2];
              uVar2 = 0;
              if ((ulong)plVar8[1] <= uVar1) {
                uVar2 = plVar8[1];
              }
              *(undefined2 *)(param_4 + lVar6 * 2 + uVar5 * 2) =
                   *(undefined2 *)(*plVar8 + (uVar1 - uVar2) * 2);
              uVar5 = uVar5 + 1;
              puVar9 = *(undefined8 **)(param_1 + 8);
            } while (uVar5 < (ulong)((long)*(undefined8 **)(param_1 + 0x10) - (long)puVar9 >> 3));
            lVar6 = lVar6 + uVar5;
            puVar10 = *(undefined8 **)(param_1 + 0x10);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != param_3);
      }
      return lVar6;
    }
  }
LAB_00916238:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0091624c  FUN_0091624c =====

undefined8 FUN_0091624c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  lVar5 = *(long *)(param_3 + 8);
  uVar3 = FUN_00916884(**(undefined8 **)(param_1 + 8));
  if (uVar3 < (ulong)(lVar5 + param_2)) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x10) - (long)*(undefined8 **)(param_1 + 8) == 8) {
      uVar4 = FUN_00916960(**(undefined8 **)(param_1 + 8),param_2,*(undefined8 *)(param_3 + 0x10),
                           *(undefined8 *)(param_3 + 0x18));
      return uVar4;
    }
    uVar3 = *(ulong *)(param_3 + 8);
    if (uVar3 != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar2 = *(long **)(param_1 + 0x10);
        if (*(long **)(param_1 + 8) != plVar2) {
          plVar8 = *(long **)(param_1 + 8);
          do {
            plVar7 = plVar8 + 1;
            plVar8 = (long *)*plVar8;
            uVar3 = uVar6 + param_2 + plVar8[2];
            uVar1 = 0;
            if ((ulong)plVar8[1] <= uVar3) {
              uVar1 = plVar8[1];
            }
            *(undefined2 *)(*(long *)(param_3 + 0x10) + lVar5 * 2) =
                 *(undefined2 *)(*plVar8 + (uVar3 - uVar1) * 2);
            lVar5 = lVar5 + 1;
            plVar8 = plVar7;
          } while (plVar7 != plVar2);
          uVar3 = *(ulong *)(param_3 + 8);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 00916360  FUN_00916360 =====

void FUN_00916360(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
    uVar1 = FUN_00916884(**(undefined8 **)(param_1 + 8));
    if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
      if (param_2 <= uVar1) {
        uVar1 = param_2;
      }
      lVar2 = FUN_00916884(**(undefined8 **)(param_1 + 8));
      FUN_00916100(param_1,lVar2 - uVar1,uVar1,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009163f0  FUN_009163f0 =====

void FUN_009163f0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(undefined8 **)(param_2 + 0x10) != *(undefined8 **)(param_2 + 8)) {
    uVar1 = FUN_00916884(**(undefined8 **)(param_2 + 8));
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    if ((lVar3 - lVar2 == *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) && (lVar3 != lVar2)) {
      uVar4 = 0;
      do {
        if (((ulong)(lVar3 - lVar2 >> 3) <= uVar4) ||
           ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar4))
        goto LAB_009164b4;
        FUN_00917378(*(undefined8 *)(lVar2 + uVar4 * 8),
                     *(undefined8 *)(*(long *)(param_2 + 8) + uVar4 * 8),uVar1,param_4);
        lVar2 = *(long *)(param_1 + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)(lVar3 - lVar2 >> 3));
    }
    return;
  }
LAB_009164b4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009164c8  FUN_009164c8 =====

void FUN_009164c8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 - lVar1 == *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) && lVar2 != lVar1) {
    uVar3 = 0;
    do {
      if (((ulong)(lVar2 - lVar1 >> 3) <= uVar3) ||
         ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar3)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_0091764c(*(undefined8 *)(lVar1 + uVar3 * 8),
                   *(undefined8 *)(*(long *)(param_2 + 8) + uVar3 * 8),param_3);
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar2 - lVar1 >> 3));
  }
  return;
}


// ===== 00916570  FUN_00916570 =====

void FUN_00916570(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(undefined8 **)(param_1 + 0x10) != *(undefined8 **)(param_1 + 8)) {
    uVar2 = FUN_00916884(**(undefined8 **)(param_1 + 8));
    if (uVar2 < param_2) {
      if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 8)) goto LAB_009165f4;
      lVar3 = FUN_00916884(**(undefined8 **)(param_1 + 8));
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      if (*(undefined8 **)(param_1 + 8) != puVar1) {
        puVar4 = *(undefined8 **)(param_1 + 8);
        do {
          puVar5 = puVar4 + 1;
          FUN_00916eac(*puVar4,param_2 - lVar3);
          puVar4 = puVar5;
        } while (puVar5 != puVar1);
      }
    }
    return;
  }
LAB_009165f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00916608  FUN_00916608 =====

void FUN_00916608(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(long *)(param_1 + 0x10) - lVar1 >> 3;
  if ((param_2 < uVar2) && (param_3 < uVar2)) {
    FUN_00916714(*(undefined8 *)(lVar1 + param_2 * 8),*(undefined8 *)(lVar1 + param_3 * 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00916658  FUN_00916658 =====

void FUN_00916658(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new__(0x16);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = puVar1;
  param_1[1] = 0xb;
  *(undefined8 *)((long)puVar1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 00916698  FUN_00916698 =====

void FUN_00916698(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *__s;
  
  lVar1 = param_2 + 1;
  uVar2 = lVar1 * 2;
  if (lVar1 == -1 || param_2 + 2 < 0 != SCARRY8(lVar1,1)) {
    uVar2 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar2);
  *param_1 = __s;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = param_2;
  memset(__s,0,lVar1 * 2);
  return;
}


// ===== 009166ec  FUN_009166ec =====

void FUN_009166ec(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 009166f8  FUN_009166f8 =====

void FUN_009166f8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 00916714  FUN_00916714 =====

void FUN_00916714(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *__src;
  ulong uVar8;
  
  uVar5 = param_1[1];
  uVar8 = param_2[1];
  uVar2 = (uVar5 + param_1[3]) - param_1[2];
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar2 / uVar5;
  }
  uVar2 = uVar2 - uVar3 * uVar5;
  if (uVar8 <= uVar2) {
    uVar5 = param_2[2];
    lVar7 = uVar2 + 1;
    uVar3 = lVar7 * 2;
    if (lVar7 == -1 || (long)(uVar2 + 2) < 0 != SCARRY8(lVar7,1)) {
      uVar3 = 0xffffffffffffffff;
    }
    uVar6 = (param_2[3] + uVar8) - uVar5;
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar6 / uVar8;
    }
    uVar6 = uVar6 - uVar2 * uVar8;
    pvVar1 = operator_new__(uVar3);
    __src = (void *)*param_2;
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar5 / uVar8;
      }
      lVar4 = uVar5 - uVar3 * uVar8;
      uVar8 = uVar8 - lVar4;
      uVar3 = uVar8;
      if (uVar6 <= uVar8) {
        uVar3 = uVar6;
      }
      memcpy(pvVar1,(void *)((long)__src + lVar4 * 2),uVar3 << 1);
      if (uVar8 < uVar6) {
        memcpy((void *)((long)pvVar1 + uVar3 * 2),__src,(uVar6 - uVar3) * 2);
      }
    }
    param_2[2] = 0;
    param_2[3] = uVar6;
    *param_2 = pvVar1;
    param_2[1] = lVar7;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
  }
  uVar3 = param_1[2];
  uVar5 = param_1[1];
  uVar8 = (uVar5 + param_1[3]) - uVar3;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar8 / uVar5;
  }
  uVar8 = uVar8 - uVar2 * uVar5;
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar3 / uVar5;
    }
    pvVar1 = (void *)*param_2;
    lVar7 = uVar3 - uVar2 * uVar5;
    uVar5 = uVar5 - lVar7;
    uVar3 = uVar5;
    if (uVar8 <= uVar5) {
      uVar3 = uVar8;
    }
    memcpy(pvVar1,(void *)(*param_1 + lVar7 * 2),uVar3 << 1);
    if (uVar5 < uVar8) {
      memcpy((void *)((long)pvVar1 + uVar3 * 2),(void *)*param_1,(uVar8 - uVar3) * 2);
    }
  }
  param_2[2] = 0;
  uVar5 = param_1[1];
  uVar2 = (uVar5 + param_1[3]) - param_1[2];
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar2 / uVar5;
  }
  param_2[3] = uVar2 - uVar3 * uVar5;
  return;
}


// ===== 00916884  FUN_00916884 =====

long FUN_00916884(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = (uVar3 + *(long *)(param_1 + 0x18)) - *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
  return uVar2 - uVar1 * uVar3;
}


// ===== 009168a4  FUN_009168a4 =====

void FUN_009168a4(long *param_1,ulong param_2,long param_3,void *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar6 = param_1[1];
    uVar3 = (uVar6 + param_1[3]) - param_1[2];
    uVar1 = param_1[2] + param_3;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar3 / uVar6;
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar1 / uVar6;
    }
    uVar4 = (uVar3 - uVar4 * uVar6) - param_3;
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    lVar5 = uVar1 - uVar2 * uVar6;
    uVar6 = uVar6 - lVar5;
    uVar1 = uVar6;
    if (uVar4 <= uVar6) {
      uVar1 = uVar4;
    }
    memcpy(param_4,(void *)(*param_1 + lVar5 * 2),uVar1 << 1);
    if (uVar6 < uVar4) {
      memcpy((void *)((long)param_4 + uVar1 * 2),(void *)*param_1,(uVar4 - uVar1) * 2);
      return;
    }
  }
  return;
}


// ===== 00916960  FUN_00916960 =====

bool FUN_00916960(long *param_1,long param_2,void *param_3,ulong param_4)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_1[1];
  uVar4 = (uVar2 + param_1[3]) - param_1[2];
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar4 / uVar2;
  }
  uVar5 = (uVar4 - uVar5 * uVar2) - param_2;
  if (param_4 <= uVar5) {
    uVar4 = param_1[2] + param_2;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar4 / uVar2;
    }
    lVar3 = uVar4 - uVar1 * uVar2;
    uVar2 = uVar2 - lVar3;
    uVar4 = uVar2;
    if (param_4 <= uVar2) {
      uVar4 = param_4;
    }
    __dest = (void *)0x0;
    if (uVar4 != 0) {
      __dest = param_3;
    }
    __src = (void *)0x0;
    if (uVar4 != 0) {
      __src = (void *)(*param_1 + lVar3 * 2);
    }
    memcpy(__dest,__src,uVar4 << 1);
    if (uVar2 < param_4) {
      memcpy((void *)((long)param_3 + uVar2 * 2),(void *)*param_1,(param_4 - uVar4) * 2);
    }
  }
  return param_4 <= uVar5;
}


// ===== 00916a18  FUN_00916a18 =====

void FUN_00916a18(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  void *__src;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar6 = param_1[2];
    uVar7 = param_1[1];
    uVar2 = (uVar7 + param_1[3]) - uVar6;
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar2 / uVar7;
    }
    uVar2 = uVar2 - uVar1 * uVar7;
    uVar1 = uVar2 + param_3;
    if (uVar7 <= uVar1) {
      lVar5 = uVar1 + 1;
      uVar3 = lVar5 * 2;
      if (lVar5 == -1 || (long)(uVar1 + 2) < 0 != SCARRY8(lVar5,1)) {
        uVar3 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar3);
      __src = (void *)*param_1;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        lVar4 = uVar6 - uVar1 * uVar7;
        uVar7 = uVar7 - lVar4;
        uVar6 = uVar7;
        if (uVar2 <= uVar7) {
          uVar6 = uVar2;
        }
        memcpy(__dest,(void *)((long)__src + lVar4 * 2),uVar6 << 1);
        if (uVar7 < uVar2) {
          memcpy((void *)((long)__dest + uVar6 * 2),__src,(uVar2 - uVar6) * 2);
        }
      }
      param_1[2] = 0;
      param_1[3] = uVar2;
      *param_1 = (long)__dest;
      param_1[1] = lVar5;
      if (__src == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        operator_delete__(__src);
        uVar6 = param_1[2];
      }
    }
    uVar1 = uVar6;
    if (param_3 <= uVar6) {
      uVar1 = param_3;
    }
    lVar5 = param_3 - uVar1;
    memcpy((void *)(*param_1 + (uVar6 - uVar1) * 2),(void *)((long)param_2 + lVar5 * 2),uVar1 << 1);
    if (uVar6 < param_3) {
      memcpy((void *)(*param_1 + (param_1[1] - lVar5) * 2),param_2,lVar5 * 2);
    }
    uVar1 = param_1[1];
    uVar6 = (param_1[2] - param_3) + uVar1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar6 / uVar1;
    }
    param_1[2] = uVar6 - uVar2 * uVar1;
  }
  return;
}


// ===== 00916b6c  FUN_00916b6c =====

void FUN_00916b6c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_2 + 8);
  uVar2 = (uVar3 + *(long *)(param_2 + 0x18)) - *(long *)(param_2 + 0x10);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
  FUN_00916b90(param_1,param_2,uVar2 - uVar1 * uVar3,0);
  return;
}


// ===== 00916b90  FUN_00916b90 =====

void FUN_00916b90(undefined8 *param_1,long *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar6 = param_1[2];
    uVar7 = param_1[1];
    uVar2 = (uVar7 + param_1[3]) - uVar6;
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar2 / uVar7;
    }
    uVar2 = uVar2 - uVar1 * uVar7;
    uVar1 = uVar2 + param_3;
    if (uVar7 <= uVar1) {
      lVar5 = uVar1 + 1;
      uVar3 = lVar5 * 2;
      if (lVar5 == -1 || (long)(uVar1 + 2) < 0 != SCARRY8(lVar5,1)) {
        uVar3 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar3);
      __src = (void *)*param_1;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        lVar4 = uVar6 - uVar1 * uVar7;
        uVar7 = uVar7 - lVar4;
        uVar6 = uVar7;
        if (uVar2 <= uVar7) {
          uVar6 = uVar2;
        }
        memcpy(__dest,(void *)((long)__src + lVar4 * 2),uVar6 << 1);
        if (uVar7 < uVar2) {
          memcpy((void *)((long)__dest + uVar6 * 2),__src,(uVar2 - uVar6) * 2);
        }
      }
      param_1[2] = 0;
      param_1[3] = uVar2;
      *param_1 = __dest;
      param_1[1] = lVar5;
      if (__src != (void *)0x0) {
        operator_delete__(__src);
      }
    }
    uVar6 = param_2[1];
    uVar1 = 0;
    if (uVar6 != 0) {
      uVar1 = (ulong)(param_2[2] + param_4) / uVar6;
    }
    lVar5 = (param_2[2] + param_4) - uVar1 * uVar6;
    uVar6 = uVar6 - lVar5;
    uVar1 = uVar6;
    if (param_3 <= uVar6) {
      uVar1 = param_3;
    }
    FUN_00916ce0(param_1,*param_2 + lVar5 * 2,uVar1);
    if (uVar6 < param_3) {
      FUN_00916ce0(param_1,*param_2,param_3 - uVar1);
      return;
    }
  }
  return;
}


// ===== 00916ce0  FUN_00916ce0 =====

void FUN_00916ce0(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar2 = param_1[2];
    uVar6 = param_1[3];
    uVar7 = param_1[1];
    uVar5 = (uVar7 + uVar6) - uVar2;
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar5 / uVar7;
    }
    uVar5 = uVar5 - uVar3 * uVar7;
    uVar3 = uVar5 + param_3;
    if (uVar7 <= uVar3) {
      uVar1 = uVar3 + 1;
      uVar6 = uVar1 * 2;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar3 + 2) < 0 != SCARRY8(uVar1,1)) {
        uVar6 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar6);
      __src = (void *)*param_1;
      if (uVar5 != 0) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar2 / uVar7;
        }
        lVar4 = uVar2 - uVar6 * uVar7;
        uVar7 = uVar7 - lVar4;
        uVar2 = uVar7;
        if (uVar5 <= uVar7) {
          uVar2 = uVar5;
        }
        memcpy(__dest,(void *)((long)__src + lVar4 * 2),uVar2 << 1);
        if (uVar7 < uVar5) {
          memcpy((void *)((long)__dest + uVar2 * 2),__src,(uVar5 - uVar2) * 2);
        }
      }
      param_1[2] = 0;
      param_1[3] = uVar5;
      *param_1 = (long)__dest;
      param_1[1] = uVar1;
      uVar6 = uVar5;
      uVar7 = uVar1;
      if (__src != (void *)0x0) {
        operator_delete__(__src);
        uVar7 = param_1[1];
        uVar6 = param_1[3];
      }
    }
    uVar7 = uVar7 - uVar6;
    uVar2 = uVar7;
    if (param_3 <= uVar7) {
      uVar2 = param_3;
    }
    memcpy((void *)(*param_1 + uVar6 * 2),param_2,uVar2 << 1);
    if (uVar7 < param_3) {
      memcpy((void *)*param_1,(void *)((long)param_2 + uVar2 * 2),(param_3 - uVar2) * 2);
    }
    uVar6 = param_1[1];
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (param_1[3] + param_3) / uVar6;
    }
    param_1[3] = (param_1[3] + param_3) - uVar2 * uVar6;
  }
  return;
}


// ===== 00916e34  FUN_00916e34 =====

void FUN_00916e34(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar2 = (uVar3 + *(long *)(param_1 + 0x18)) - *(long *)(param_1 + 0x10);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    uVar2 = uVar2 - uVar1 * uVar3;
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    uVar2 = uVar2 + *(long *)(param_1 + 0x10);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    *(ulong *)(param_1 + 0x10) = uVar2 - uVar1 * uVar3;
  }
  return;
}


// ===== 00916e70  FUN_00916e70 =====

void FUN_00916e70(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    lVar1 = uVar3 + *(long *)(param_1 + 0x18);
    uVar4 = lVar1 - *(long *)(param_1 + 0x10);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar2 * uVar3;
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    uVar4 = lVar1 - uVar4;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar4 / uVar3;
    }
    *(ulong *)(param_1 + 0x18) = uVar4 - uVar2 * uVar3;
  }
  return;
}


// ===== 00916eac  FUN_00916eac =====

void FUN_00916eac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar2 = (uVar3 + *(long *)(param_1 + 0x18)) - *(long *)(param_1 + 0x10);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar2 / uVar3;
    }
    FUN_00916ed4(param_1,param_2,uVar2 - uVar1 * uVar3);
    return;
  }
  return;
}


// ===== 00916ed4  FUN_00916ed4 =====

void FUN_00916ed4(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__src;
  ulong uVar9;
  ulong uVar10;
  void *local_68;
  
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar10 = param_1[1];
  uVar7 = (uVar10 + uVar5) - uVar2;
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar7 / uVar10;
  }
  uVar7 = uVar7 - uVar3 * uVar10;
  uVar3 = uVar7 - param_3;
  if (uVar3 == 0) {
    local_68 = (void *)0x0;
    uVar9 = uVar7;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar3 == 0xffffffffffffffff || (long)(uVar3 + 1) < 0 != SCARRY8(uVar3,1)) {
      uVar8 = 0xffffffffffffffff;
    }
    local_68 = operator_new__(uVar8);
    pvVar4 = (void *)*param_1;
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (uVar2 + param_3) / uVar10;
    }
    lVar6 = (uVar2 + param_3) - uVar8 * uVar10;
    uVar9 = uVar10 - lVar6;
    uVar8 = uVar9;
    if (uVar3 <= uVar9) {
      uVar8 = uVar3;
    }
    memcpy(local_68,(void *)((long)pvVar4 + lVar6 * 2),uVar8 << 1);
    if (uVar9 < uVar3) {
      memcpy((void *)((long)local_68 + uVar8 * 2),pvVar4,(uVar3 - uVar8) * 2);
    }
    uVar8 = uVar7;
    if (uVar3 <= uVar7) {
      uVar8 = uVar3;
    }
    uVar8 = (uVar10 + uVar5) - uVar8;
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = uVar8 / uVar10;
    }
    uVar5 = uVar8 - uVar5 * uVar10;
    param_1[3] = uVar5;
    uVar9 = (uVar10 + uVar5) - uVar2;
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar8 * uVar10;
  }
  uVar1 = uVar3 + param_2 + uVar9;
  uVar8 = uVar10;
  if (uVar10 <= uVar1) {
    uVar8 = uVar1 + 1;
    uVar5 = uVar8 * 2;
    if (uVar8 == 0xffffffffffffffff || (long)(uVar1 + 2) < 0 != SCARRY8(uVar8,1)) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    __src = (void *)*param_1;
    if (uVar9 != 0) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar2 / uVar10;
      }
      lVar6 = uVar2 - uVar5 * uVar10;
      uVar10 = uVar10 - lVar6;
      uVar2 = uVar10;
      if (uVar9 <= uVar10) {
        uVar2 = uVar9;
      }
      memcpy(pvVar4,(void *)((long)__src + lVar6 * 2),uVar2 << 1);
      if (uVar10 < uVar9) {
        memcpy((void *)((long)pvVar4 + uVar2 * 2),__src,(uVar9 - uVar2) * 2);
      }
    }
    *param_1 = (long)pvVar4;
    param_1[1] = uVar8;
    param_1[2] = 0;
    param_1[3] = uVar9;
    uVar5 = uVar9;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      uVar8 = param_1[1];
      uVar5 = param_1[3];
    }
  }
  uVar8 = uVar8 - uVar5;
  uVar2 = uVar8;
  if (param_2 <= uVar8) {
    uVar2 = param_2;
  }
  memset((void *)(*param_1 + uVar5 * 2),0,uVar2 << 1);
  if (uVar8 < param_2) {
    memset((void *)*param_1,0,(param_2 - uVar2) * 2);
  }
  uVar5 = param_1[1];
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = (param_1[3] + param_2) / uVar5;
  }
  param_1[3] = (param_1[3] + param_2) - uVar2 * uVar5;
  if (uVar7 != param_3) {
    FUN_00916ce0(param_1,local_68,uVar3);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    return;
  }
  return;
}


// ===== 00917110  FUN_00917110 =====

void FUN_00917110(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = (uVar3 + *(long *)(param_1 + 0x18)) - *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
  uVar2 = uVar2 - uVar1 * uVar3;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if (uVar2 - param_3 < param_3) {
    FUN_00916ed4();
    return;
  }
  FUN_00917150();
  return;
}


// ===== 00917150  FUN_00917150 =====

void FUN_00917150(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *__src;
  long lVar7;
  ulong uVar8;
  void *local_68;
  
  if (param_3 == 0) {
    uVar8 = param_1[2];
    uVar2 = param_1[1];
    local_68 = (void *)0x0;
    lVar7 = uVar2 + param_1[3];
  }
  else {
    uVar2 = param_3 << 1;
    if (param_3 == 0xffffffffffffffff || (long)(param_3 + 1) < 0 != SCARRY8(param_3,1)) {
      uVar2 = 0xffffffffffffffff;
    }
    local_68 = operator_new__(uVar2);
    uVar2 = param_1[1];
    uVar8 = param_1[2];
    pvVar6 = (void *)*param_1;
    lVar7 = uVar2 + param_1[3];
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar8 / uVar2;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (lVar7 - uVar8) / uVar2;
    }
    uVar3 = (lVar7 - uVar8) - uVar3 * uVar2;
    lVar4 = uVar8 - uVar1 * uVar2;
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    uVar5 = uVar2 - lVar4;
    uVar1 = uVar5;
    if (uVar3 <= uVar5) {
      uVar1 = uVar3;
    }
    memcpy(local_68,(void *)((long)pvVar6 + lVar4 * 2),uVar1 << 1);
    if (uVar5 < uVar3) {
      memcpy((void *)((long)local_68 + uVar1 * 2),pvVar6,(uVar3 - uVar1) * 2);
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (uVar3 + uVar8) / uVar2;
    }
    uVar8 = (uVar3 + uVar8) - uVar1 * uVar2;
    param_1[2] = uVar8;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = (lVar7 - uVar8) / uVar2;
  }
  uVar3 = (lVar7 - uVar8) - uVar1 * uVar2;
  uVar1 = param_3 + param_2 + uVar3;
  if (uVar2 <= uVar1) {
    lVar7 = uVar1 + 1;
    uVar5 = lVar7 * 2;
    if (lVar7 == -1 || (long)(uVar1 + 2) < 0 != SCARRY8(lVar7,1)) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new__(uVar5);
    __src = (void *)*param_1;
    if (uVar3 != 0) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar8 / uVar2;
      }
      lVar4 = uVar8 - uVar1 * uVar2;
      uVar2 = uVar2 - lVar4;
      uVar8 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = uVar3;
      }
      memcpy(pvVar6,(void *)((long)__src + lVar4 * 2),uVar8 << 1);
      if (uVar2 < uVar3) {
        memcpy((void *)((long)pvVar6 + uVar8 * 2),__src,(uVar3 - uVar8) * 2);
      }
    }
    param_1[2] = 0;
    param_1[3] = uVar3;
    *param_1 = (long)pvVar6;
    param_1[1] = lVar7;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
  }
  uVar8 = param_1[2];
  uVar2 = uVar8;
  if (param_2 <= uVar8) {
    uVar2 = param_2;
  }
  memset((void *)(*param_1 + (uVar8 - uVar2) * 2),0,uVar2 << 1);
  if (uVar8 < param_2) {
    memset((void *)(*param_1 + (param_1[1] - (param_2 - uVar2)) * 2),0,(param_2 - uVar2) * 2);
  }
  uVar8 = param_1[1];
  uVar2 = (param_1[2] - param_2) + uVar8;
  uVar1 = 0;
  if (uVar8 != 0) {
    uVar1 = uVar2 / uVar8;
  }
  param_1[2] = uVar2 - uVar1 * uVar8;
  if (param_3 != 0) {
    FUN_00916a18(param_1,local_68,param_3);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    return;
  }
  return;
}


// ===== 00917378  FUN_00917378 =====

void FUN_00917378(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *__src;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar3 = param_1[2];
    uVar7 = param_1[1];
    uVar4 = (uVar7 + param_1[3]) - uVar3;
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar4 / uVar7;
    }
    uVar4 = uVar4 - uVar5 * uVar7;
    if (uVar4 <= param_4) {
      param_4 = uVar4;
    }
    uVar5 = param_4 + param_3;
    if (uVar7 <= uVar5) {
      uVar2 = uVar4;
      if (uVar4 <= uVar5) {
        uVar2 = uVar5;
      }
      lVar1 = uVar2 + 1;
      uVar5 = lVar1 * 2;
      if (lVar1 == -1 || (long)(uVar2 + 2) < 0 != SCARRY8(lVar1,1)) {
        uVar5 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar5);
      __src = (void *)*param_1;
      if (uVar4 != 0) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar3 / uVar7;
        }
        lVar6 = uVar3 - uVar5 * uVar7;
        uVar7 = uVar7 - lVar6;
        uVar3 = uVar7;
        if (uVar4 <= uVar7) {
          uVar3 = uVar4;
        }
        memcpy(__dest,(void *)((long)__src + lVar6 * 2),uVar3 << 1);
        if (uVar7 < uVar4) {
          memcpy((void *)((long)__dest + uVar3 * 2),__src,(uVar4 - uVar3) * 2);
        }
      }
      param_1[2] = 0;
      param_1[3] = uVar4;
      *param_1 = __dest;
      param_1[1] = lVar1;
      if (__src != (void *)0x0) {
        operator_delete__(__src);
      }
    }
    uVar5 = param_2[1] - param_2[2];
    uVar3 = uVar5;
    if (param_3 <= uVar5) {
      uVar3 = param_3;
    }
    FUN_009174d0(param_1,*param_2 + param_2[2] * 2,uVar3,param_4);
    if (uVar5 < param_3) {
      FUN_009174d0(param_1,*param_2,param_3 - uVar3,uVar3 + param_4);
      return;
    }
  }
  return;
}


// ===== 009174d0  FUN_009174d0 =====

void FUN_009174d0(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    uVar7 = param_1[2];
    uVar6 = param_1[1];
    uVar3 = (uVar6 + param_1[3]) - uVar7;
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar3 / uVar6;
    }
    uVar3 = uVar3 - uVar2 * uVar6;
    if (uVar3 <= param_4) {
      param_4 = uVar3;
    }
    uVar2 = param_4 + param_3;
    uVar1 = uVar3;
    if (uVar3 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar6 <= uVar2) {
      uVar2 = uVar1 + 1;
      uVar4 = uVar2 * 2;
      if (uVar2 == 0xffffffffffffffff || (long)(uVar1 + 2) < 0 != SCARRY8(uVar2,1)) {
        uVar4 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar4);
      __src = (void *)*param_1;
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        lVar5 = uVar7 - uVar4 * uVar6;
        uVar6 = uVar6 - lVar5;
        uVar7 = uVar6;
        if (uVar3 <= uVar6) {
          uVar7 = uVar3;
        }
        memcpy(__dest,(void *)((long)__src + lVar5 * 2),uVar7 << 1);
        if (uVar6 < uVar3) {
          memcpy((void *)((long)__dest + uVar7 * 2),__src,(uVar3 - uVar7) * 2);
        }
      }
      param_1[2] = 0;
      param_1[3] = uVar3;
      *param_1 = (long)__dest;
      param_1[1] = uVar2;
      if (__src == (void *)0x0) {
        uVar7 = 0;
        uVar6 = uVar2;
      }
      else {
        operator_delete__(__src);
        uVar7 = param_1[2];
        uVar6 = param_1[1];
      }
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (uVar7 + param_4) / uVar6;
    }
    lVar5 = (uVar7 + param_4) - uVar2 * uVar6;
    uVar6 = uVar6 - lVar5;
    uVar7 = uVar6;
    if (param_3 <= uVar6) {
      uVar7 = param_3;
    }
    memcpy((void *)(*param_1 + lVar5 * 2),param_2,uVar7 << 1);
    if (uVar6 < param_3) {
      memcpy((void *)*param_1,(void *)((long)param_2 + uVar7 * 2),(param_3 - uVar7) * 2);
    }
    uVar7 = param_1[1];
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (param_1[2] + uVar1) / uVar7;
    }
    param_1[3] = (param_1[2] + uVar1) - uVar2 * uVar7;
  }
  return;
}


// ===== 0091764c  FUN_0091764c =====

void FUN_0091764c(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar3 = param_1[2];
  uVar10 = param_1[1];
  uVar13 = param_2[1];
  uVar8 = (uVar10 + param_1[3]) - lVar3;
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = uVar8 / uVar10;
  }
  uVar12 = (uVar13 + param_2[3]) - param_2[2];
  uVar7 = 0;
  if (uVar13 != 0) {
    uVar7 = uVar12 / uVar13;
  }
  uVar8 = uVar8 - uVar9 * uVar10;
  uVar9 = uVar8;
  if (param_3 <= uVar8) {
    uVar9 = param_3;
  }
  uVar12 = uVar12 - uVar7 * uVar13;
  uVar10 = uVar12;
  if (uVar9 <= uVar12) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    iVar1 = (int)uVar10 + 1;
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = 0x4000 / iVar1;
    }
    uVar9 = 0;
    iVar11 = 0x4000 - iVar6;
    iVar1 = iVar6;
    do {
      uVar7 = param_1[1];
      uVar13 = ((uVar8 + lVar3) - uVar10) + uVar9;
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = uVar13 / uVar7;
      }
      lVar14 = uVar13 - uVar12 * uVar7;
      uVar13 = 0;
      if ((ulong)param_2[1] <= uVar9 + param_2[2]) {
        uVar13 = param_2[1];
      }
      lVar2 = uVar9 + (param_2[2] - uVar13);
      uVar9 = uVar9 + 1;
      iVar5 = iVar1 * *(short *)(*param_2 + lVar2 * 2);
      iVar1 = iVar1 + iVar6;
      iVar4 = iVar11 * *(short *)(*param_1 + lVar14 * 2);
      iVar11 = iVar11 - iVar6;
      *(short *)(*param_1 + lVar14 * 2) = (short)(iVar5 + iVar4 + 0x2000U >> 0xe);
    } while (uVar9 < uVar10);
    uVar8 = param_2[1];
    uVar12 = (uVar8 + param_2[3]) - param_2[2];
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar12 / uVar8;
    }
    uVar12 = uVar12 - uVar9 * uVar8;
  }
  if (uVar12 - uVar10 == 0) {
    return;
  }
  FUN_00916b90(param_1,param_2,uVar12 - uVar10);
  return;
}


// ===== 00917738  FUN_00917738 =====

undefined8
FUN_00917738(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_3 / uVar3;
    }
    if ((ulong)((long)*(int *)(param_1 + 0xc) * 0xef) <= uVar1) {
      uVar2 = FUN_00926074();
      return uVar2;
    }
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_2;
  }
  FUN_00915be0(param_5,uVar2);
  return 0xffffffff;
}


// ===== 00917790  FUN_00917790 =====

void FUN_00917790(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  *param_3 = 0;
  return;
}


// ===== 0091779c  FUN_0091779c =====

uint FUN_0091779c(long param_1,long param_2,long param_3,ulong param_4,short param_5,uint param_6,
                 uint param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  sVar3 = 0x2000;
  if ((param_7 & 1) == 0) {
    sVar3 = 0x399a;
  }
  if (((param_6 & 1) == 0) || (sVar3 < param_5)) {
    uVar6 = (ulong)(*(int *)(param_1 + 0xc) * 0x78);
    if ((param_7 & 1) != 0) {
      uVar2 = 0;
      if (param_4 != 0) {
        uVar2 = uVar6 / param_4;
      }
      param_4 = uVar2 * param_4;
    }
    lVar1 = 0;
    if (*(long *)(param_1 + 0x10) * uVar6 != 0) {
      lVar1 = param_2;
    }
    FUN_00915be0(param_8,lVar1);
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_009157a8(&local_70,*(undefined8 *)(param_1 + 0x10));
    lVar1 = 0;
    if (*(long *)(param_1 + 0x10) * param_4 != 0) {
      lVar1 = param_2 + *(long *)(param_1 + 0x10) * uVar6 * 2;
    }
    FUN_00915be0(&local_70,lVar1);
    FUN_009164c8(param_8,&local_70,param_4);
    lVar4 = *(long *)(param_1 + 0x10) * (param_4 + uVar6);
    param_3 = param_3 - lVar4;
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_2 + lVar4 * 2;
    }
    FUN_00915be0(param_8,lVar1,param_3);
    uVar5 = (param_6 ^ 0xffffffff) & 1;
    FUN_00915980(&local_70);
  }
  else {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = param_2;
    }
    FUN_00915be0(param_8,lVar1,param_3);
    uVar5 = 2;
  }
  return uVar5;
}


// ===== 009178dc  FUN_009178dc =====

void FUN_009178dc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined2 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_00d3d838;
  *(int *)(puVar1 + 1) = param_2;
  *(int *)((long)puVar1 + 0xc) = param_2 / 8000;
  *(undefined8 *)((long)puVar1 + 0x106) = 0;
  *(undefined8 *)((long)puVar1 + 0xfe) = 0;
  *(undefined8 *)((long)puVar1 + 0x116) = 0;
  *(undefined8 *)((long)puVar1 + 0x10e) = 0;
  *(undefined8 *)((long)puVar1 + 0x126) = 0;
  *(undefined8 *)((long)puVar1 + 0x11e) = 0;
  *(undefined8 *)((long)puVar1 + 0x136) = 0;
  *(undefined8 *)((long)puVar1 + 0x12e) = 0;
  *(undefined8 *)((long)puVar1 + 0x146) = 0;
  *(undefined8 *)((long)puVar1 + 0x13e) = 0;
  *(undefined8 *)((long)puVar1 + 0x156) = 0;
  *(undefined8 *)((long)puVar1 + 0x14e) = 0;
  *(undefined8 *)((long)puVar1 + 0x15c) = 0;
  return;
}


// ===== 00917964  FUN_00917964 =====

void FUN_00917964(void)

{
  return;
}


// ===== 0091796c  FUN_0091796c =====

void FUN_0091796c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00917978  FUN_00917978 =====

void FUN_00917978(void)

{
  return;
}


// ===== 00917980  FUN_00917980 =====

void FUN_00917980(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0091798c  FUN_0091798c =====

void FUN_0091798c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[0x10];
  *param_1 = &PTR_FUN_00d3d890;
  param_1[0x10] = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * 0x70 + lVar1 + -0x48;
      lVar2 = lVar2 * -0x70;
      do {
        FUN_009166f8(lVar3 + 0x20);
        FUN_009166f8(lVar3);
        lVar2 = lVar2 + 0x70;
        lVar3 = lVar3 + -0x70;
      } while (lVar2 != 0);
    }
    operator_delete__((long *)(lVar1 + -8));
    return;
  }
  return;
}


// ===== 00917a1c  FUN_00917a1c =====

void FUN_00917a1c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[0x10];
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_00d3d890;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * 0x70 + lVar1 + -0x48;
      lVar2 = lVar2 * -0x70;
      do {
        FUN_009166f8(lVar3 + 0x20);
        FUN_009166f8(lVar3);
        lVar2 = lVar2 + 0x70;
        lVar3 = lVar3 + -0x70;
      } while (lVar2 != 0);
    }
    operator_delete__((long *)(lVar1 + -8));
  }
  operator_delete(param_1);
  return;
}


// ===== 00917abc  FUN_00917abc =====

void FUN_00917abc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = 0;
    lVar2 = 0x48;
    do {
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar1) {
LAB_00917b50:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                  );
      }
      FUN_009166ec(*(long *)(param_1 + 0x80) + lVar2 + -0x20);
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar1) goto LAB_00917b50;
      FUN_009166ec(*(long *)(param_1 + 0x80) + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x70;
    } while (uVar1 < *(ulong *)(param_1 + 0x20));
  }
  return;
}


// ===== 00917b64  FUN_00917b64 =====

undefined8 FUN_00917b64(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  short sVar28;
  ulong uVar29;
  short *psVar30;
  short sVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  ushort *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 local_2e30;
  undefined4 local_2e28;
  undefined1 auStack_2e24 [4];
  short local_2e20 [8];
  undefined8 auStack_2e10 [186];
  short local_2840 [4];
  undefined8 auStack_2838 [899];
  undefined1 auStack_c20 [1500];
  undefined1 auStack_644 [1508];
  
  memset(auStack_644,0xaa,0x5dc);
  memset(auStack_c20,0xaa,0x5dc);
  memset(local_2840,0xaa,0x1c20);
  lVar32 = *(long *)(param_1 + 0x40);
  memset(&local_2e30,0xaa,0x5ec);
  iVar34 = *(int *)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar29 = *(ulong *)(param_1 + 0x48);
    if (uVar29 != 0) {
      uVar27 = 0;
      do {
        uVar26 = uVar29 - uVar27;
        if (0xff < uVar26) {
          uVar26 = 0x100;
        }
        FUN_00920570(*(undefined8 *)(param_1 + 8),2);
        FUN_00920538(*(undefined8 *)(param_1 + 8),uVar26,auStack_644 + uVar27 * 2);
        uVar27 = uVar26 + uVar27;
      } while (uVar27 < uVar29);
    }
  }
  else {
    FUN_00918390(param_1,auStack_644);
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  uVar1 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c);
  *(uint *)(param_1 + 0x6c) = uVar1;
  if ((int)uVar1 < 1) {
    uVar16 = 1;
  }
  else {
    if (uVar1 == 1) goto LAB_00917c8c;
    uVar16 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar16;
  if (2 < uVar1) {
LAB_0091838c:
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(0x5512,0x918390);
    (*pcVar20)();
  }
LAB_00917c8c:
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar29 = 0;
    uVar27 = *(ulong *)(param_1 + (ulong)uVar1 * 8 + 0x50);
    iVar34 = iVar34 / 8000;
    iVar9 = 0;
    if (iVar34 != 0) {
      iVar9 = 0x419 / iVar34;
    }
    lVar2 = uVar27 + *(long *)(param_1 + 0x40);
    lVar24 = *(long *)(param_1 + 0x48) - uVar27;
    uVar25 = lVar2 * 2;
    uVar26 = uVar27 - 1;
    if (lVar2 == -1 || lVar2 + 1 < 0 != SCARRY8(lVar2,1)) {
      uVar25 = 0xffffffffffffffff;
    }
    pcVar20 = *(code **)PTR_PTR_FUN_00d52080;
    iVar10 = 0;
    if (iVar34 != 0) {
      iVar10 = 0x831 / iVar34;
    }
    if (0xe0f < uVar26) {
      uVar26 = 0xe10;
    }
    uVar19 = uVar26 + 1 & 0xf;
    uVar21 = 0x10;
    if (uVar19 != 0) {
      uVar21 = uVar19;
    }
    uVar21 = (uVar26 + 1) - uVar21;
    do {
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar29) goto LAB_00918378;
      psVar30 = (short *)(*(long *)(param_1 + 0x80) + uVar29 * 0x70);
      iVar34 = *(int *)(param_1 + 0x6c);
      if (iVar34 == 2) {
        pvVar11 = operator_new__(uVar25);
        FUN_009168a4(psVar30 + 0x14,lVar2,lVar24,pvVar11);
        pvVar12 = operator_new__(uVar25);
        FUN_009168a4(psVar30 + 0x24,lVar2,lVar24,pvVar12);
        uVar22 = 1;
        uVar15 = 1;
LAB_00917ea4:
        (*pcVar20)(pvVar11,uVar22,pvVar12,1,uVar15,local_2840,lVar2);
        if (pvVar12 != (void *)0x0) {
          operator_delete__(pvVar12);
        }
        if (pvVar11 != (void *)0x0) {
          operator_delete__(pvVar11);
        }
      }
      else {
        if (iVar34 == 1) {
          pvVar11 = operator_new__(uVar25);
          FUN_009168a4(psVar30 + 0x14,lVar2,lVar24,pvVar11);
          pvVar12 = operator_new__(uVar25);
          FUN_009168a4(psVar30 + 0x24,lVar2,lVar24,pvVar12);
          uVar22 = 3;
          uVar15 = 2;
          goto LAB_00917ea4;
        }
        if (iVar34 == 0) {
          FUN_009168a4(psVar30 + 0x14,lVar2,lVar24,local_2840);
        }
      }
      iVar34 = *(int *)(param_1 + 0x1c);
      if (iVar34 == 8000) {
        sVar31 = 0x1555;
        iVar33 = -0x1555;
        iVar34 = 0x6aab;
      }
      else if (iVar34 == 32000) {
        sVar31 = 0x618;
        iVar33 = -0x618;
        iVar34 = 0x79e8;
      }
      else if (iVar34 == 16000) {
        sVar31 = 0xba3;
        iVar33 = -0xba3;
        iVar34 = 0x745d;
      }
      else {
        sVar31 = 0x421;
        iVar33 = -0x421;
        iVar34 = 0x7bdf;
      }
      if ((0x333 < *psVar30) && (0x2000 < psVar30[0x11])) {
        lVar13 = FUN_0091601c(*(undefined8 *)(param_1 + 0x10));
        lVar17 = *(long *)(param_1 + 0x40);
        if (lVar17 != 0) {
          uVar26 = 0;
          sVar28 = sVar31;
          do {
            plVar14 = (long *)FUN_00915ba4(*(undefined8 *)(param_1 + 0x10),uVar29);
            lVar3 = (lVar13 - lVar17) + uVar26;
            sVar6 = *psVar30;
            sVar7 = local_2840[uVar26];
            uVar19 = 0;
            if ((ulong)plVar14[1] <= (ulong)(lVar3 + plVar14[2])) {
              uVar19 = plVar14[1];
            }
            sVar8 = *(short *)(*plVar14 + (lVar3 + (plVar14[2] - uVar19)) * 2);
            plVar14 = (long *)FUN_00915ba4(*(undefined8 *)(param_1 + 0x10),uVar29);
            uVar26 = uVar26 + 1;
            uVar19 = 0;
            if ((ulong)plVar14[1] <= (ulong)(lVar3 + plVar14[2])) {
              uVar19 = plVar14[1];
            }
            *(short *)(*plVar14 + (lVar3 + (plVar14[2] - uVar19)) * 2) =
                 (short)(((int)sVar7 * (int)sVar6 >> 0xe) * (int)sVar28 +
                         (int)(short)iVar34 * (int)sVar8 + 0x4000U >> 0xf);
            iVar34 = (short)iVar34 + iVar33;
            sVar28 = sVar28 + sVar31;
          } while (uVar26 < *(ulong *)(param_1 + 0x40));
        }
      }
      local_2e28 = *(undefined4 *)(psVar30 + 0xc);
      local_2e30 = *(undefined8 *)(psVar30 + 8);
      uVar5 = psVar30[0xf];
      iVar34 = 1 << (ulong)(uVar5 - 1 & 0x1f);
      if ((short)uVar5 < 1) {
        iVar34 = 0;
      }
      FUN_009195a4(auStack_c20,auStack_644,psVar30[0xe],iVar34,uVar5,uVar27);
      FUN_009196fc(auStack_c20,auStack_2e24,psVar30 + 1,7,uVar27);
      uVar22 = *(undefined8 *)((long)&local_2e30 + uVar27 * 2);
      *(undefined4 *)(psVar30 + 0xc) = *(undefined4 *)(auStack_2e24 + uVar27 * 2 + -4);
      *(undefined8 *)(psVar30 + 8) = uVar22;
      uVar4 = *(uint *)(param_1 + 0x48);
      puVar35 = (ushort *)(psVar30 + 0x11);
      uVar1 = 0x1a;
      if (uVar4 != 0) {
        uVar1 = 0x1a - (int)LZCOUNT(uVar4 ^ uVar4 << 1 | 1);
      }
      uVar26 = (ulong)((int)(short)*puVar35 - (int)psVar30[0x10] >> (8 - uVar1 & 0x1f));
      uVar4 = 0;
      if (*(char *)(param_1 + 0x70) == '\0') {
        uVar4 = 0x100 >> (ulong)(uVar1 & 0x1f);
      }
      uVar19 = uVar27;
      if (uVar26 <= uVar27) {
        uVar19 = uVar26;
      }
      FUN_00919ec8(local_2840 + lVar32,auStack_2e24,uVar19,puVar35,uVar4,local_2840);
      if (uVar26 < uVar27) {
        if (uVar4 != 0) {
          psVar30[0x11] = psVar30[0x10];
        }
        if (0xe10 < uVar19) goto LAB_0091838c;
        (*pcVar20)(local_2840 + lVar32 + uVar19,*puVar35,auStack_2e24 + uVar19 * 2,
                   0x4000 - (uint)*puVar35,0xe,local_2840 + uVar19,uVar27 - uVar19);
      }
      iVar34 = *(int *)(param_1 + 0x28);
      if (iVar34 == 3) {
        iVar34 = *(int *)(psVar30 + 0x36);
        if (*(int *)(psVar30 + 0x36) <= iVar9) {
          iVar34 = iVar9;
        }
        *(int *)(psVar30 + 0x36) = iVar34;
        iVar34 = *(int *)(param_1 + 0x28);
        if (iVar34 == 7) goto LAB_009181a8;
LAB_00918198:
        if (iVar34 == 0) goto LAB_009181c4;
LAB_009181cc:
        FUN_009195a4(local_2840,local_2840,*psVar30,0x2000,0xe,uVar27);
        if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
          FUN_0091a098(local_2840,*(undefined4 *)(psVar30 + 0x36),uVar27);
          sVar31 = *psVar30;
          sVar28 = (short)(((int)(0x3f800000 -
                                 ((int)uVar27 * 0x400 * *(int *)(psVar30 + 0x36) & 0xffff0000U)) >>
                           0x10) * (int)sVar31 + 0x2000U >> 0xe);
          if ((3 < *(int *)(param_1 + 0x28)) &&
             ((int)sVar31 == (int)sVar28 || (int)sVar31 < (int)sVar28)) {
            sVar28 = 0;
          }
          *psVar30 = sVar28;
        }
      }
      else {
        if (iVar34 != 7) goto LAB_00918198;
LAB_009181a8:
        iVar34 = *(int *)(psVar30 + 0x36);
        if (*(int *)(psVar30 + 0x36) <= iVar10) {
          iVar34 = iVar10;
        }
        *(int *)(psVar30 + 0x36) = iVar34;
        if (*(int *)(param_1 + 0x28) != 0) goto LAB_009181cc;
LAB_009181c4:
        if ((*(byte *)(psVar30 + 0x34) & 1) == 0) goto LAB_009181cc;
      }
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar29) {
LAB_00918378:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                  );
      }
      FUN_0091a818(*(undefined8 *)(param_1 + 0x30),auStack_644,0x2ee,uVar29,
                   *(undefined4 *)(*(long *)(param_1 + 0x80) + uVar29 * 0x70 + 0x6c),
                   199 < *(int *)(param_1 + 0x28),uVar27,&local_2e30);
      if (uVar27 != 0) {
        puVar23 = auStack_2838 + 1;
        puVar18 = auStack_2e10;
        uVar26 = uVar21;
        if (uVar27 < 0x11) {
          uVar19 = 0;
        }
        else {
          do {
            uVar15 = puVar23[-1];
            uVar22 = puVar23[-2];
            uVar41 = puVar23[1];
            uVar40 = *puVar23;
            uVar26 = uVar26 - 0x10;
            uVar37 = puVar18[-1];
            uVar36 = puVar18[-2];
            uVar39 = puVar18[1];
            uVar38 = *puVar18;
            puVar18 = puVar18 + 4;
            puVar23[-1] = CONCAT26((short)((ulong)uVar15 >> 0x30) + (short)((ulong)uVar37 >> 0x30),
                                   CONCAT24((short)((ulong)uVar15 >> 0x20) +
                                            (short)((ulong)uVar37 >> 0x20),
                                            CONCAT22((short)((ulong)uVar15 >> 0x10) +
                                                     (short)((ulong)uVar37 >> 0x10),
                                                     (short)uVar15 + (short)uVar37)));
            puVar23[-2] = CONCAT26((short)((ulong)uVar22 >> 0x30) + (short)((ulong)uVar36 >> 0x30),
                                   CONCAT24((short)((ulong)uVar22 >> 0x20) +
                                            (short)((ulong)uVar36 >> 0x20),
                                            CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                                     (short)((ulong)uVar36 >> 0x10),
                                                     (short)uVar22 + (short)uVar36)));
            puVar23[1] = CONCAT26((short)((ulong)uVar41 >> 0x30) + (short)((ulong)uVar39 >> 0x30),
                                  CONCAT24((short)((ulong)uVar41 >> 0x20) +
                                           (short)((ulong)uVar39 >> 0x20),
                                           CONCAT22((short)((ulong)uVar41 >> 0x10) +
                                                    (short)((ulong)uVar39 >> 0x10),
                                                    (short)uVar41 + (short)uVar39)));
            *puVar23 = CONCAT26((short)((ulong)uVar40 >> 0x30) + (short)((ulong)uVar38 >> 0x30),
                                CONCAT24((short)((ulong)uVar40 >> 0x20) +
                                         (short)((ulong)uVar38 >> 0x20),
                                         CONCAT22((short)((ulong)uVar40 >> 0x10) +
                                                  (short)((ulong)uVar38 >> 0x10),
                                                  (short)uVar40 + (short)uVar38)));
            puVar23 = puVar23 + 4;
            uVar19 = uVar21;
          } while (uVar26 != 0);
        }
        do {
          if (uVar19 == 0xe10) goto LAB_0091838c;
          local_2840[uVar19] = local_2840[uVar19] + local_2e20[uVar19];
          uVar19 = uVar19 + 1;
        } while (uVar27 != uVar19);
      }
      if (uVar29 == 0) {
        FUN_00916570(param_2,uVar27);
      }
      uVar22 = FUN_00915ba4(param_2,uVar29);
      FUN_009174d0(uVar22,local_2840,uVar27,0);
      uVar29 = uVar29 + 1;
    } while (uVar29 < *(ulong *)(param_1 + 0x20));
  }
  iVar34 = *(int *)(param_1 + 0x28);
  if (0xc6 < iVar34) {
    iVar34 = 199;
  }
  *(int *)(param_1 + 0x28) = iVar34 + 1;
  lVar32 = FUN_0091601c(param_2);
  uVar29 = *(long *)(param_1 + 0x78) + lVar32;
  uVar27 = (ulong)(*(int *)(param_1 + 0x1c) << 1);
  if (uVar27 <= uVar29) {
    uVar29 = uVar27;
  }
  *(ulong *)(param_1 + 0x78) = uVar29;
  return 0;
}


// ===== 00918390  FUN_00918390 =====

void FUN_00918390(long param_1,void *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong __n;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  short sVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  void *pvVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  void *pvVar26;
  undefined1 uVar27;
  ushort uVar28;
  ulong uVar29;
  ulong uVar30;
  code *pcVar31;
  code *pcVar32;
  long lVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  undefined1 *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined1 *puVar46;
  undefined8 local_14f0;
  undefined4 local_14e8;
  undefined1 auStack_14e4 [1508];
  undefined8 local_f00;
  uint local_ef8;
  int aiStack_ef4 [595];
  undefined4 local_5a8;
  short local_5a4;
  undefined1 *local_5a0 [3];
  undefined4 local_588;
  ushort local_584;
  undefined1 *local_580 [3];
  undefined1 auStack_568 [1224];
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  
  puStack_7c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaa;
  uStack_88 = 0xaaaaaaaa;
  local_84 = 0xaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0xaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  memset(auStack_568,0xaa,0x4c8);
  local_588 = -0x55555556;
  local_584 = 0xaaaa;
  local_580[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_580[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_580[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_5a0[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_5a0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_5a0[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_5a8 = 0xaaaaaaaa;
  local_5a4 = -0x5556;
  memset(aiStack_ef4,0xaa,0x94c);
  local_ef8 = 0xaaaaaaaa;
  local_f00 = &DAT_aaaaaaaaaaaaaaaa;
  memset(&local_14f0,0xaa,0x5ec);
  iVar18 = *(int *)(param_1 + 0x1c);
  uVar30 = (ulong)(uint)(iVar18 / 8000 + (iVar18 >> 0x1f)) - ((long)iVar18 * 0x10624dd3 >> 0x3f);
  iVar38 = (int)uVar30;
  uVar7 = iVar38 << 8;
  lVar39 = (long)(int)uVar7;
  lVar19 = FUN_0091601c(*(undefined8 *)(param_1 + 0x10));
  uVar29 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
  if (iVar18 < -7999) {
    uVar29 = 0xffffffffffffffff;
  }
  pvVar20 = operator_new__(uVar29);
  uVar21 = FUN_00915ba4(*(undefined8 *)(param_1 + 0x10),0);
  FUN_009168a4(uVar21,lVar39,lVar19 - lVar39,pvVar20);
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = DAT_001f5550;
  *(undefined2 *)(*(long *)(param_1 + 8) + 4) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar40 = 0;
    uVar29 = 0;
    do {
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar29) goto LAB_00918fd4;
      *(undefined2 *)(*(long *)(param_1 + 0x80) + lVar40 + 0x22) = 0x4000;
      if (*(ulong *)(*(long *)(param_1 + 0x80) + -8) <= uVar29) goto LAB_00918fd4;
      *(undefined2 *)(*(long *)(param_1 + 0x80) + lVar40) = 0x4000;
      FUN_0091a978(*(undefined8 *)(param_1 + 0x30),uVar29,0);
      uVar29 = uVar29 + 1;
      lVar40 = lVar40 + 0x70;
    } while (uVar29 < *(ulong *)(param_1 + 0x20));
  }
  lVar45 = (long)iVar38;
  lVar40 = lVar45 + (long)iVar38 * 4;
  lVar44 = (long)(iVar38 * 4);
  uVar29 = (ulong)(iVar38 * 0x14);
  puVar41 = (undefined1 *)(long)(iVar38 * 0x78);
  lVar37 = lVar40 * 4;
  FUN_009190f4(param_1,pvVar20,lVar39,auStack_568);
  FUN_0091995c(auStack_568,0x33,3,uVar30 & 0xffffffff,local_580,&local_588);
  puVar46 = puVar41 + -1;
  local_580[0] = local_580[0] + uVar29;
  pvVar2 = (void *)((long)pvVar20 + (lVar39 + lVar40 * -4) * 2);
  local_580[1] = local_580[1] + uVar29;
  local_580[2] = local_580[2] + uVar29;
  uVar30 = (long)local_580[0] - lVar44;
  if ((ulong)((long)local_580[0] - lVar44) <= uVar29) {
    uVar30 = uVar29;
  }
  puVar35 = local_580[0] + lVar44;
  if (puVar46 <= local_580[0] + lVar44) {
    puVar35 = puVar46;
  }
  local_5a0[0] = (undefined1 *)FUN_00919d50(pvVar2,uVar30,puVar35,lVar37,&local_f00);
  uVar13 = 0x10 - (int)LZCOUNT((uint)local_f00 ^ (uint)local_f00 << 1 | 1);
  uVar7 = 0x10;
  if ((uint)local_f00 != 0) {
    uVar7 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
  }
  uVar30 = (long)local_580[1] - lVar44;
  if ((ulong)((long)local_580[1] - lVar44) <= uVar29) {
    uVar30 = uVar29;
  }
  puVar35 = local_580[1] + lVar44;
  if (puVar46 <= local_580[1] + lVar44) {
    puVar35 = puVar46;
  }
  local_5a0[1] = (undefined1 *)FUN_00919d50(pvVar2,uVar30,puVar35,lVar37,(ulong)&local_f00 | 4);
  uVar13 = 0x10;
  if (local_f00._4_4_ != 0) {
    uVar13 = 0x10 - (int)LZCOUNT(local_f00._4_4_ ^ local_f00._4_4_ << 1 | 1);
  }
  if ((int)uVar13 <= (int)uVar7) {
    uVar13 = uVar7;
  }
  uVar30 = (long)local_580[2] - lVar44;
  if ((ulong)((long)local_580[2] - lVar44) <= uVar29) {
    uVar30 = uVar29;
  }
  puVar35 = local_580[2] + lVar44;
  if (puVar46 <= local_580[2] + lVar44) {
    puVar35 = puVar46;
  }
  local_5a0[2] = (undefined1 *)FUN_00919d50(pvVar2,uVar30,puVar35,lVar37,&local_ef8);
  uVar7 = 0x10;
  if (local_ef8 != 0) {
    uVar7 = 0x10 - (int)LZCOUNT(local_ef8 ^ local_ef8 << 1 | 1);
  }
  if ((int)uVar7 <= (int)uVar13) {
    uVar7 = uVar13;
  }
  FUN_00654ec0(&local_5a8,3,&local_f00,uVar7);
  if ((short)local_5a8 < 1) {
    iVar17 = 0;
    if ((short)local_588 != 0) {
      iVar17 = 0x7fffffff;
    }
  }
  else {
    iVar17 = 0;
    if ((short)local_5a8 != 0) {
      iVar17 = (local_588 << 0x10) / (int)(short)local_5a8;
    }
  }
  uVar30 = -(ulong)(iVar17 == -0x80000000);
  if (local_5a8._2_2_ < 1) {
    iVar16 = 0;
    if (local_588._2_2_ != 0) {
      iVar16 = 0x7fffffff;
    }
  }
  else {
    iVar16 = 0;
    if (local_5a8._2_2_ != 0) {
      iVar16 = (int)((uint)local_588._2_2_ << 0x10) / (int)local_5a8._2_2_;
    }
  }
  if (iVar17 < iVar16) {
    uVar30 = 1;
    iVar17 = iVar16;
  }
  if (local_5a4 < 1) {
    iVar16 = 0;
    if (local_584 != 0) {
      iVar16 = 0x7fffffff;
    }
  }
  else {
    iVar16 = 0;
    if (local_5a4 != 0) {
      iVar16 = (int)((uint)local_584 << 0x10) / (int)local_5a4;
    }
  }
  uVar29 = 2;
  if (iVar16 <= iVar17) {
    uVar29 = uVar30;
  }
  if (2 < uVar29) {
LAB_00918fe8:
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(0x5512,0x918fec);
    (*pcVar31)();
  }
  puVar35 = local_5a0[uVar29];
  puVar36 = local_580[uVar29];
  puVar46 = puVar35;
  if (puVar35 <= puVar36) {
    puVar46 = puVar36;
  }
  puVar4 = puVar35 + 10;
  if (puVar41 <= puVar35 + 10) {
    puVar4 = puVar41;
  }
  iVar17 = (int)(short)((short)puVar35 - (short)puVar36);
  if (puVar4 <= (undefined1 *)(long)(iVar38 * 0x3c)) {
    puVar4 = (undefined1 *)(long)(iVar38 * 0x3c);
  }
  *(undefined1 **)(param_1 + 0x48) = puVar46;
  iVar16 = -iVar17;
  if (-1 < iVar17) {
    iVar16 = iVar17;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar29 = (ulong)(iVar16 + 1) & 0xffff;
    uVar30 = 0;
    pcVar31 = *(code **)PTR_PTR_FUN_00d51f30;
    puVar41 = puVar36;
    if (puVar35 <= puVar36) {
      puVar41 = puVar35;
    }
    uVar13 = (uint)puVar4;
    lVar37 = (lVar39 - (long)puVar4) - (long)puVar41;
    pvVar2 = (void *)((long)pvVar20 + (lVar39 - (long)puVar4) * 2);
    uVar7 = 0x1f;
    if (uVar13 != 0) {
      uVar7 = (uint)LZCOUNT(uVar13 ^ uVar13 << 1 | 1) ^ 0x1f;
    }
    __n = lVar45 * 0x140 | 0xc;
    puVar46 = puVar36 + (long)puVar35;
    lVar44 = 0x6c;
    uVar6 = __n;
    if (iVar18 < -7999) {
      uVar6 = 0xffffffffffffffff;
    }
    pcVar32 = *(code **)PTR_PTR_FUN_00d52070;
    lVar33 = (long)puVar35 << (puVar35 < (undefined1 *)0x28);
    uVar1 = lVar33 + 0x1e;
    puVar34 = puVar46 + -1;
    if (puVar35 <= puVar36) {
      puVar34 = puVar46 + 1;
    }
    do {
      lVar43 = *(long *)(param_1 + 0x80);
      if (*(ulong *)(lVar43 + -8) <= uVar30) {
LAB_00918fd4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                  );
      }
      if (uVar30 != 0) {
        uVar21 = FUN_00915ba4(*(undefined8 *)(param_1 + 0x10),uVar30);
        FUN_009168a4(uVar21,lVar39,lVar19 - lVar39,pvVar20);
      }
      sVar11 = (*pcVar31)((void *)((long)pvVar20 + (lVar37 - uVar29) * 2),
                          puVar41 + (long)(puVar4 + uVar29) + -1);
      iVar18 = 0x1f;
      if (sVar11 != 0) {
        iVar18 = 0x20 - (int)LZCOUNT((int)sVar11 * (int)sVar11);
      }
      iVar18 = iVar18 + uVar7;
      if (iVar18 < 0x20) {
        iVar18 = 0x1f;
      }
      iVar18 = iVar18 + -0x1f;
      (*pcVar32)(aiStack_ef4,pvVar2,(void *)((long)pvVar20 + lVar37 * 2),puVar4,uVar29,iVar18,
                 0xffffffff);
      uVar22 = FUN_0091a3ac(aiStack_ef4,uVar29);
      if (0x252 < uVar22) goto LAB_00918fe8;
      iVar17 = aiStack_ef4[uVar22];
      uVar13 = FUN_0091b330(pvVar2,pvVar2,puVar4,iVar18);
      pvVar26 = (void *)((long)pvVar20 + ((lVar39 - (long)puVar4) - (long)(puVar41 + uVar22)) * 2);
      uVar14 = FUN_0091b330(pvVar26,pvVar26,puVar4,iVar18);
      iVar16 = 0;
      if ((0 < (int)uVar13) && (0 < (int)uVar14)) {
        uVar8 = 0x11 - (int)LZCOUNT(uVar13);
        uVar9 = 0x11 - (int)LZCOUNT(uVar14);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        uVar8 = (uVar9 + uVar8 & 1) + uVar8;
        uVar15 = FUN_0091b810((uVar13 >> (ulong)(uVar8 & 0x1f)) * (uVar14 >> (ulong)(uVar9 & 0x1f)))
        ;
        uVar8 = uVar8 + uVar9;
        uVar13 = uVar8 >> 1;
        iVar16 = iVar17 << (ulong)(0xe - uVar13 & 0x1f);
        if (0x1d < uVar8) {
          iVar16 = iVar17 >> (uVar13 - 0xe & 0x1f);
        }
        iVar16 = FUN_0065880c(iVar16,uVar15);
        if (0x3fff < iVar16) {
          iVar16 = 0x4000;
        }
      }
      uVar22 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
      pvVar26 = (void *)((long)pvVar20 + (lVar39 - uVar22) * 2);
      pvVar3 = (void *)((long)pvVar26 + (long)puVar35 * -2);
      iVar17 = FUN_0091b330(pvVar26,pvVar26,uVar22,iVar18);
      uVar13 = FUN_0091b330(pvVar3,pvVar3,uVar22,iVar18);
      iVar18 = iVar17 + 3;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      uVar14 = uVar13 + 3;
      if (-1 < (int)uVar13) {
        uVar14 = uVar13;
      }
      if ((iVar18 >> 2 < (int)uVar13) && ((int)uVar14 >> 2 < iVar17)) {
        uVar8 = 0x10 - (int)LZCOUNT(uVar13 ^ uVar13 << 1 | 1);
        uVar14 = 0x10;
        if (uVar13 != 0) {
          uVar14 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        }
        iVar18 = iVar17 << (ulong)(0xd - uVar14 & 0x1f);
        if (0xd < uVar14) {
          iVar18 = iVar17 >> (uVar14 - 0xd & 0x1f);
        }
        iVar18 = FUN_0065880c(iVar18,(int)uVar13 >> (uVar14 & 0x1f));
        uVar23 = FUN_0091b810(iVar18 << 0xd);
        lVar42 = lVar43 + lVar44;
        uVar23 = uVar23 & 0xffffffff;
        FUN_009166ec(lVar42 + -0x44);
        FUN_00916ce0(lVar42 + -0x44,pvVar26,uVar22);
        lVar42 = lVar42 + -0x24;
        FUN_009166ec(lVar42);
        uVar24 = FUN_00916884(lVar42);
        if (uVar24 < uVar22) {
          lVar25 = FUN_00916884(lVar42);
          FUN_00916eac(lVar42,uVar22 - lVar25);
        }
        uVar24 = uVar22 * 2;
        if (uVar22 == 0xffffffffffffffff || (long)(uVar22 + 1) < 0 != SCARRY8(uVar22,1)) {
          uVar24 = 0xffffffffffffffff;
        }
        pvVar26 = operator_new__(uVar24);
        FUN_009195a4(pvVar26,pvVar3,uVar23,0x1000,0xd,uVar22);
        FUN_009174d0(lVar42,pvVar26,uVar22,0);
        if (pvVar26 != (void *)0x0) {
          operator_delete__(pvVar26);
        }
      }
      else {
        lVar42 = lVar43 + lVar44;
        FUN_009166ec(lVar42 + -0x44);
        FUN_00916ce0(lVar42 + -0x44,pvVar26,uVar22);
        FUN_00916714(lVar42 + -0x44,lVar42 + -0x24);
        uVar14 = 0x1000;
        if (uVar13 != 0 && (int)uVar13 <= iVar18 >> 2) {
          uVar14 = 0x4000;
        }
        uVar23 = (ulong)uVar14;
      }
      puVar5 = puVar35;
      if (puVar35 != puVar36) {
        puVar5 = (undefined1 *)((ulong)puVar46 >> 1);
      }
      *(undefined1 **)(param_1 + 0x50) = puVar35;
      *(undefined1 **)(param_1 + 0x58) = puVar5;
      puVar5 = puVar35;
      if (puVar35 != puVar36) {
        puVar5 = (undefined1 *)((ulong)puVar34 >> 1);
      }
      *(undefined1 **)(param_1 + 0x60) = puVar5;
      pvVar26 = operator_new__(uVar6);
      memset(pvVar26,0,__n);
      memcpy((void *)((long)pvVar26 + 0xc),(void *)((long)pvVar20 + (lVar39 + lVar40 * -0x20) * 2),
             lVar45 * 0x140);
      FUN_0091a9ac((long)pvVar26 + 0xc,(long)pvVar26 + 0xc,lVar40 * 0x20,7,0xffffffff,&local_90);
      if (pvVar26 != (void *)0x0) {
        operator_delete__(pvVar26);
      }
      if (0 < (int)local_90) {
        lVar42 = lVar43 + lVar44;
        sVar11 = FUN_0091aa88(&local_90,lVar42 + -0x6a,&local_a0,6);
        if (sVar11 != 1) {
          *(undefined2 *)(lVar42 + -0x6a) = 0x1000;
          FUN_0091b9d4(lVar42 + -0x68,0,6);
        }
      }
      if (uVar30 == 0) {
        if (uVar1 < 0x101) {
          memcpy(param_2,PTR_DAT_00d53130,uVar1 * 2);
        }
        else {
          memcpy(param_2,PTR_DAT_00d53130,0x200);
          FUN_00920570(*(undefined8 *)(param_1 + 8),2);
          FUN_00920538(*(undefined8 *)(param_1 + 8),lVar33 + -0xe2,(long)param_2 + 0x200);
        }
      }
      lVar42 = lVar43 + lVar44;
      uVar15 = *(undefined4 *)((long)pvVar20 + lVar39 * 2 + -4);
      *(undefined8 *)(lVar42 + -0x5c) = *(undefined8 *)((long)pvVar20 + lVar39 * 2 + -0xc);
      *(undefined4 *)(lVar42 + -0x54) = uVar15;
      local_14f0 = *(undefined8 *)((long)pvVar20 + lVar39 * 2 + -0x10c);
      local_14e8 = *(undefined4 *)((long)pvVar20 + lVar39 * 2 + -0x104);
      FUN_0091b1a4((long)pvVar20 + lVar39 * 2 + -0x100,auStack_14e4,lVar42 + -0x6a,7,0x80);
      sVar11 = (*pcVar31)(auStack_14e4,0x80);
      iVar18 = 0;
      if ((uint)((int)LZCOUNT((int)sVar11) * 2) < 0x29) {
        iVar18 = (int)LZCOUNT((int)sVar11) * -2 + 0x28;
      }
      iVar17 = 8;
      if (sVar11 != 0x7fff) {
        iVar17 = iVar18;
      }
      uVar14 = FUN_0091b330(auStack_14e4,auStack_14e4,0x80,iVar17);
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = (uint)LZCOUNT(uVar14 ^ uVar14 << 1 | 1);
      }
      uVar8 = uVar13 - 3 | 1;
      iVar18 = uVar14 << (ulong)(uVar13 - 3 & 0x1f | 1);
      if (uVar13 < 3) {
        iVar18 = (int)uVar14 >> (-uVar8 & 0x1f);
      }
      uVar12 = FUN_0091b810(iVar18);
      uVar28 = 0;
      *(undefined2 *)(lVar42 + -0x50) = uVar12;
      *(short *)(lVar42 + -0x4e) = (short)((uVar8 - iVar17) + 7 >> 1) + 0xd;
      if (0x1ec3 < iVar16) {
        uVar13 = (uint)(iVar16 * iVar16) >> 0xe;
        iVar17 = uVar13 * -0x4026 + iVar16 * 0x4ddb + (uVar13 * iVar16 >> 0xe) * 0x1690;
        iVar18 = iVar17 + -0x50ec000;
        iVar17 = iVar17 + -0x50eb001;
        if (-1 < iVar18) {
          iVar17 = iVar18;
        }
        iVar17 = iVar17 >> 0xc;
        if (0x3fff < iVar17) {
          iVar17 = 0x4000;
        }
        uVar28 = (ushort)iVar17 & ((short)(ushort)iVar17 >> 0x1f ^ 0xffffU);
      }
      uVar10 = (ushort)uVar23;
      iVar18 = (int)(short)uVar10;
      *(ushort *)(lVar42 + -0x4c) = uVar28;
      if (iVar18 < 0x3001) {
        iVar18 = FUN_0065880c(iVar18 * -0x80 + 0x100000,puVar35);
        sVar11 = *(short *)(lVar42 + -0x4c);
        *(int *)(lVar43 + lVar44) = iVar18;
        if (sVar11 < 0x3334) {
          iVar17 = 0;
          if (iVar38 != 0) {
            iVar17 = 0x147b / iVar38;
          }
          if (iVar17 <= iVar18) {
            iVar17 = iVar18;
          }
        }
        else {
          uVar27 = 0;
          iVar17 = 0;
          if ((short)uVar10 < 0x1f5d) goto LAB_00918954;
        }
        uVar27 = 0;
        *(int *)(lVar43 + lVar44) = iVar17;
      }
      else {
        uVar22 = (long)puVar35 * (uVar23 & 0xffff) >> 8;
        if (0x7ffe < uVar22) {
          uVar22 = 0x7fff;
        }
        iVar18 = FUN_0065880c(iVar18 * 0x1000 + -0x2000000,uVar22);
        if (uVar10 < 0x399b) {
          iVar17 = iVar18 + 0xb;
          if (-1 < iVar18 + 4) {
            iVar17 = iVar18 + 4;
          }
          iVar17 = iVar17 >> 3;
        }
        else {
          iVar17 = (iVar18 + 1) / 2;
        }
        *(int *)(lVar43 + lVar44) = iVar17;
        uVar27 = 1;
      }
LAB_00918954:
      lVar43 = lVar43 + lVar44;
      uVar30 = uVar30 + 1;
      lVar44 = lVar44 + 0x70;
      *(undefined1 *)(lVar43 + -4) = uVar27;
    } while (uVar30 < *(ulong *)(param_1 + 0x20));
  }
  if (pvVar20 != (void *)0x0) {
    operator_delete__(pvVar20);
  }
  return;
}


// ===== 00918fec  FUN_00918fec =====

void FUN_00918fec(long param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))
            (*(long **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x78),
             *(undefined4 *)(param_1 + 0x1c));
  FUN_00921aac(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c));
  return;
}


// ===== 0091903c  FUN_0091903c =====

void FUN_0091903c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001f5550;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  FUN_00921aac(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c));
  return;
}


// ===== 00919064  FUN_00919064 =====

bool FUN_00919064(long param_1)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      bVar1 = true;
    }
    else {
      lVar3 = *(long *)(*(short **)(param_1 + 0x80) + -4);
      psVar2 = *(short **)(param_1 + 0x80);
      do {
        lVar4 = lVar4 + -1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                    );
        }
        bVar1 = *psVar2 == 0;
      } while ((*psVar2 == 0) && (lVar3 = lVar3 + -1, psVar2 = psVar2 + 0x38, lVar4 != 0));
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 009190e8  FUN_009190e8 =====

undefined8 FUN_009190e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 009190f4  FUN_009190f4 =====

void FUN_009190f4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 8000) {
    iVar8 = 2;
    uVar7 = 3;
    puVar6 = PTR_DAT_00d530f8;
  }
  else if (iVar2 == 32000) {
    iVar8 = 8;
    uVar7 = 7;
    puVar6 = PTR_DAT_00d53100;
  }
  else {
    iVar8 = 0xc;
    if (iVar2 == 16000) {
      iVar8 = 4;
    }
    uVar7 = 7;
    puVar6 = PTR_DAT_00d530f0;
    if (iVar2 == 16000) {
      uVar7 = 5;
      puVar6 = PTR_DAT_00d530e8;
    }
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)PTR_PTR_FUN_00d52078)
            (param_2 + param_3 * 2 + (ulong)(uint)(iVar8 * 0x7c) * -2,(ulong)(uint)(iVar8 * 0x7c),
             &local_130,0x7c,puVar6,uVar7,iVar8,0);
  sVar4 = (**(code **)PTR_PTR_FUN_00d51f30)(&local_130,0x7c);
  iVar2 = 0x10;
  if (sVar4 != 0) {
    iVar2 = 0x10 - (int)LZCOUNT((int)sVar4 ^ (int)sVar4 << 1 | 1);
  }
  FUN_00654c3c(&local_130,0x7c,&local_130,iVar2);
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0091a9ac(&puStack_b0,(long)&uStack_c8 + 4,0x3c,0x36,0xffffffff,&local_210);
  uVar5 = (**(code **)PTR_PTR_FUN_00d52068)(&local_210,0x36);
  uVar3 = 0x12 - (int)LZCOUNT(uVar5 ^ uVar5 << 1 | 1);
  uVar1 = 0x12;
  if (uVar5 != 0) {
    uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  FUN_00654ec0(param_4,0x36,&local_210,uVar1);
  return;
}


// ===== 009192b8  FUN_009192b8 =====

undefined8 *
FUN_009192b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,ulong param_7)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  
  puVar2 = (undefined8 *)operator_new(0x88);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_7;
  ppuVar6 = &PTR_FUN_00d3d890;
  puVar2[2] = param_3;
  *puVar2 = &PTR_FUN_00d3d890;
  puVar2[1] = param_4;
  *(undefined1 *)(puVar2 + 3) = 1;
  *(int *)((long)puVar2 + 0x1c) = param_6;
  puVar2[4] = param_7;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[6] = param_2;
  puVar2[7] = param_5;
  puVar2[0xf] = 0;
  puVar2[0xd] = 0;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  uVar4 = param_7 * 0x70 | 8;
  puVar2[8] = (long)((param_6 * 5) / 8000);
  if (SUB168(auVar1 * ZEXT816(0x70),8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  puVar3 = (ulong *)operator_new__(uVar4);
  puVar5 = puVar3 + 1;
  *puVar3 = param_7;
  if (param_7 != 0) {
    puVar3 = puVar5;
    do {
      *(undefined2 *)puVar3 = 0x4000;
      *(undefined8 *)((long)puVar3 + 0x1c) = 0;
      FUN_00916658(puVar3 + 5);
      FUN_00916658(puVar3 + 9);
      *(undefined1 *)(puVar3 + 0xd) = 0;
      *(undefined4 *)((long)puVar3 + 0x6c) = 0;
      *(undefined8 *)((long)puVar3 + 2) = 0;
      *(undefined8 *)((long)puVar3 + 0x12) = 0;
      *(undefined8 *)((long)puVar3 + 10) = 0;
      *(undefined2 *)((long)puVar3 + 0x1a) = 0;
      puVar3 = puVar3 + 0xe;
    } while (puVar3 != puVar5 + param_7 * 0xe);
    ppuVar6 = (undefined **)*puVar2;
  }
  puVar2[0x10] = puVar5;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[10] = 0;
  (*(code *)ppuVar6[2])(puVar2);
  return puVar2;
}


// ===== 00919404  FUN_00919404 =====

void FUN_00919404(void)

{
  return;
}


// ===== 0091940c  FUN_0091940c =====

void FUN_0091940c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00919418  FUN_00919418 =====

void FUN_00919418(undefined2 *param_1,short *param_2,short *param_3,ulong param_4,uint param_5)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short sVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  long lVar31;
  ulong uVar32;
  short *psVar33;
  short *psVar34;
  undefined2 *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  short *psVar38;
  short *psVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  if (param_4 == 0) {
    return;
  }
  if ((((param_4 < 4) || (lVar31 = param_4 - 1, param_3 + lVar31 < param_3)) ||
      (param_1 + lVar31 < param_1)) ||
     (((param_2 + lVar31 < param_2 || (lVar31 < 0)) ||
      (((ulong)((long)param_1 - (long)param_2) < 0x20 ||
       ((ulong)((long)param_1 - (long)param_3) < 0x20)))))) {
    uVar32 = 0;
    psVar33 = param_3;
    psVar34 = param_2;
    puVar35 = param_1;
  }
  else {
    auVar40._0_8_ = CONCAT44(param_5,param_5) & 0xffff0000ffff;
    auVar40._8_4_ = param_5 & 0xffff;
    auVar40._12_4_ = param_5 & 0xffff;
    if (param_4 < 0x10) {
      uVar37 = 0;
    }
    else {
      auVar42 = NEON_neg(auVar40,4);
      uVar32 = param_4 & 0xfffffffffffffff0;
      puVar35 = param_1 + 8;
      psVar33 = param_2 + 8;
      psVar34 = param_3 + 8;
      uVar37 = param_4 & 0xfffffffffffffff0;
      do {
        psVar38 = psVar34 + -8;
        psVar1 = psVar34 + -7;
        psVar2 = psVar34 + -6;
        psVar3 = psVar34 + -5;
        psVar4 = psVar34 + -4;
        psVar5 = psVar34 + -3;
        psVar6 = psVar34 + -2;
        psVar7 = psVar34 + -1;
        sVar8 = *psVar34;
        psVar9 = psVar34 + 1;
        psVar10 = psVar34 + 2;
        psVar11 = psVar34 + 3;
        psVar12 = psVar34 + 4;
        psVar13 = psVar34 + 5;
        psVar14 = psVar34 + 6;
        psVar15 = psVar34 + 7;
        uVar37 = uVar37 - 0x10;
        psVar39 = psVar33 + -8;
        psVar16 = psVar33 + -7;
        psVar17 = psVar33 + -6;
        psVar18 = psVar33 + -5;
        psVar19 = psVar33 + -4;
        psVar20 = psVar33 + -3;
        psVar21 = psVar33 + -2;
        psVar22 = psVar33 + -1;
        sVar23 = *psVar33;
        psVar24 = psVar33 + 1;
        psVar25 = psVar33 + 2;
        psVar26 = psVar33 + 3;
        psVar27 = psVar33 + 4;
        psVar28 = psVar33 + 5;
        psVar29 = psVar33 + 6;
        psVar30 = psVar33 + 7;
        psVar33 = psVar33 + 0x10;
        psVar34 = psVar34 + 0x10;
        auVar44._0_4_ = (int)*psVar4 * (int)*psVar19;
        auVar44._4_4_ = (int)*psVar5 * (int)*psVar20;
        auVar44._8_4_ = (int)*psVar6 * (int)*psVar21;
        auVar44._12_4_ = (int)*psVar7 * (int)*psVar22;
        auVar47._0_4_ = (int)sVar8 * (int)sVar23;
        auVar47._4_4_ = (int)*psVar9 * (int)*psVar24;
        auVar47._8_4_ = (int)*psVar10 * (int)*psVar25;
        auVar47._12_4_ = (int)*psVar11 * (int)*psVar26;
        auVar46._0_4_ = (int)*psVar12 * (int)*psVar27;
        auVar46._4_4_ = (int)*psVar13 * (int)*psVar28;
        auVar46._8_4_ = (int)*psVar14 * (int)*psVar29;
        auVar46._12_4_ = (int)*psVar15 * (int)*psVar30;
        auVar44 = NEON_sshl(auVar44,auVar42,4);
        auVar45._4_4_ = (int)*psVar1 * (int)*psVar16;
        auVar45._0_4_ = (int)*psVar38 * (int)*psVar39;
        auVar45._8_4_ = (int)*psVar2 * (int)*psVar17;
        auVar45._12_4_ = (int)*psVar3 * (int)*psVar18;
        auVar48 = NEON_sshl(auVar45,auVar42,4);
        auVar45 = NEON_sshl(auVar47,auVar42,4);
        auVar47 = NEON_sshl(auVar46,auVar42,4);
        *puVar35 = auVar44._0_2_;
        puVar35[1] = auVar44._4_2_;
        puVar35[2] = auVar44._8_2_;
        puVar35[3] = auVar44._12_2_;
        puVar35[-8] = auVar48._0_2_;
        puVar35[-7] = auVar48._4_2_;
        puVar35[-6] = auVar48._8_2_;
        puVar35[-5] = auVar48._12_2_;
        puVar35[8] = auVar47._0_2_;
        puVar35[9] = auVar47._4_2_;
        puVar35[10] = auVar47._8_2_;
        puVar35[0xb] = auVar47._12_2_;
        *puVar35 = auVar45._0_2_;
        puVar35[1] = auVar45._4_2_;
        puVar35[2] = auVar45._8_2_;
        puVar35[3] = auVar45._12_2_;
        puVar35 = puVar35 + 0x10;
      } while (uVar37 != 0);
      if (param_4 == uVar32) {
        return;
      }
      uVar37 = uVar32;
      if ((param_4 & 0xc) == 0) {
        psVar33 = param_3 + uVar32;
        psVar34 = param_2 + uVar32;
        puVar35 = param_1 + uVar32;
        goto LAB_0091943c;
      }
    }
    uVar32 = param_4 & 0xfffffffffffffffc;
    auVar40 = NEON_neg(auVar40,4);
    lVar31 = uVar37 - uVar32;
    psVar33 = param_3 + uVar32;
    psVar34 = param_2 + uVar32;
    puVar35 = param_1 + uVar32;
    puVar36 = (undefined8 *)(param_1 + uVar37);
    psVar38 = param_2 + uVar37;
    psVar39 = param_3 + uVar37;
    do {
      uVar41 = *(undefined8 *)psVar38;
      lVar31 = lVar31 + 4;
      uVar43 = *(undefined8 *)psVar39;
      auVar42._0_4_ = (int)(short)uVar43 * (int)(short)uVar41;
      auVar42._4_4_ = (int)(short)((ulong)uVar43 >> 0x10) * (int)(short)((ulong)uVar41 >> 0x10);
      auVar42._8_4_ = (int)(short)((ulong)uVar43 >> 0x20) * (int)(short)((ulong)uVar41 >> 0x20);
      auVar42._12_4_ = (int)(short)((ulong)uVar43 >> 0x30) * (int)(short)((ulong)uVar41 >> 0x30);
      auVar42 = NEON_sshl(auVar42,auVar40,4);
      *puVar36 = CONCAT26(auVar42._12_2_,
                          CONCAT24(auVar42._8_2_,CONCAT22(auVar42._4_2_,auVar42._0_2_)));
      puVar36 = puVar36 + 1;
      psVar38 = psVar38 + 4;
      psVar39 = psVar39 + 4;
    } while (lVar31 != 0);
    if (param_4 == uVar32) {
      return;
    }
  }
LAB_0091943c:
  lVar31 = param_4 - uVar32;
  do {
    lVar31 = lVar31 + -1;
    *puVar35 = (short)((int)*psVar33 * (int)*psVar34 >> (param_5 & 0x1f));
    psVar33 = psVar33 + 1;
    psVar34 = psVar34 + 1;
    puVar35 = puVar35 + 1;
  } while (lVar31 != 0);
  return;
}


// ===== 009195a4  FUN_009195a4 =====

void FUN_009195a4(ulong param_1,ulong param_2,short param_3,int param_4,uint param_5,ulong param_6)

{
  short *psVar1;
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
  ulong uVar17;
  long lVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  short *psVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if (param_6 == 0) {
    return;
  }
  if (param_6 < 4) {
    uVar17 = 0;
  }
  else {
    lVar18 = (param_6 - 1) * 2;
    uVar17 = 0;
    if ((((param_1 <= param_1 + lVar18) && (param_2 <= param_2 + lVar18)) &&
        (-1 < (long)(param_6 - 1))) && (0x1f < param_1 - param_2)) {
      auVar24._0_8_ = CONCAT44(param_5,param_5) & 0xffff0000ffff;
      auVar24._8_4_ = param_5 & 0xffff;
      auVar24._12_4_ = param_5 & 0xffff;
      if (param_6 < 0x10) {
        uVar23 = 0;
      }
      else {
        auVar26 = NEON_neg(auVar24,4);
        uVar17 = param_6 & 0xfffffffffffffff0;
        puVar19 = (undefined2 *)(param_1 + 0x10);
        psVar21 = (short *)(param_2 + 0x10);
        uVar23 = param_6 & 0xfffffffffffffff0;
        do {
          psVar1 = psVar21 + -8;
          psVar2 = psVar21 + -7;
          psVar3 = psVar21 + -6;
          psVar4 = psVar21 + -5;
          psVar5 = psVar21 + -4;
          psVar6 = psVar21 + -3;
          psVar7 = psVar21 + -2;
          psVar8 = psVar21 + -1;
          sVar9 = *psVar21;
          psVar10 = psVar21 + 1;
          psVar11 = psVar21 + 2;
          psVar12 = psVar21 + 3;
          psVar13 = psVar21 + 4;
          psVar14 = psVar21 + 5;
          psVar15 = psVar21 + 6;
          psVar16 = psVar21 + 7;
          uVar23 = uVar23 - 0x10;
          psVar21 = psVar21 + 0x10;
          auVar29._0_4_ = param_4 + (int)param_3 * (int)*psVar1;
          auVar29._4_4_ = param_4 + (int)param_3 * (int)*psVar2;
          auVar29._8_4_ = param_4 + (int)param_3 * (int)*psVar3;
          auVar29._12_4_ = param_4 + (int)param_3 * (int)*psVar4;
          auVar31._0_4_ = param_4 + (int)param_3 * (int)*psVar5;
          auVar31._4_4_ = param_4 + (int)param_3 * (int)*psVar6;
          auVar31._8_4_ = param_4 + (int)param_3 * (int)*psVar7;
          auVar31._12_4_ = param_4 + (int)param_3 * (int)*psVar8;
          auVar27._0_4_ = param_4 + (int)param_3 * (int)*psVar13;
          auVar27._4_4_ = param_4 + (int)param_3 * (int)*psVar14;
          auVar27._8_4_ = param_4 + (int)param_3 * (int)*psVar15;
          auVar27._12_4_ = param_4 + (int)param_3 * (int)*psVar16;
          auVar30 = NEON_sshl(auVar29,auVar26,4);
          auVar29 = NEON_sshl(auVar31,auVar26,4);
          auVar28._4_4_ = param_4 + (int)param_3 * (int)*psVar10;
          auVar28._0_4_ = param_4 + (int)param_3 * (int)sVar9;
          auVar28._8_4_ = param_4 + (int)param_3 * (int)*psVar11;
          auVar28._12_4_ = param_4 + (int)param_3 * (int)*psVar12;
          auVar31 = NEON_sshl(auVar28,auVar26,4);
          auVar28 = NEON_sshl(auVar27,auVar26,4);
          *puVar19 = auVar29._0_2_;
          puVar19[1] = auVar29._4_2_;
          puVar19[2] = auVar29._8_2_;
          puVar19[3] = auVar29._12_2_;
          puVar19[-8] = auVar30._0_2_;
          puVar19[-7] = auVar30._4_2_;
          puVar19[-6] = auVar30._8_2_;
          puVar19[-5] = auVar30._12_2_;
          puVar19[8] = auVar28._0_2_;
          puVar19[9] = auVar28._4_2_;
          puVar19[10] = auVar28._8_2_;
          puVar19[0xb] = auVar28._12_2_;
          *puVar19 = auVar31._0_2_;
          puVar19[1] = auVar31._4_2_;
          puVar19[2] = auVar31._8_2_;
          puVar19[3] = auVar31._12_2_;
          puVar19 = puVar19 + 0x10;
        } while (uVar23 != 0);
        if (param_6 == uVar17) {
          return;
        }
        uVar23 = uVar17;
        if ((param_6 & 0xc) == 0) goto LAB_009195bc;
      }
      auVar24 = NEON_neg(auVar24,4);
      uVar17 = param_6 & 0xfffffffffffffffc;
      lVar18 = uVar23 - uVar17;
      puVar20 = (undefined8 *)(param_1 + uVar23 * 2);
      puVar22 = (undefined8 *)(param_2 + uVar23 * 2);
      do {
        uVar25 = *puVar22;
        lVar18 = lVar18 + 4;
        auVar26._0_4_ = param_4 + (int)param_3 * (int)(short)uVar25;
        auVar26._4_4_ = param_4 + (int)param_3 * (int)(short)((ulong)uVar25 >> 0x10);
        auVar26._8_4_ = param_4 + (int)param_3 * (int)(short)((ulong)uVar25 >> 0x20);
        auVar26._12_4_ = param_4 + (int)param_3 * (int)(short)((ulong)uVar25 >> 0x30);
        auVar26 = NEON_sshl(auVar26,auVar24,4);
        *puVar20 = CONCAT26(auVar26._12_2_,
                            CONCAT24(auVar26._8_2_,CONCAT22(auVar26._4_2_,auVar26._0_2_)));
        puVar20 = puVar20 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar18 != 0);
      if (param_6 == uVar17) {
        return;
      }
    }
  }
LAB_009195bc:
  lVar18 = param_6 - uVar17;
  puVar19 = (undefined2 *)(param_1 + uVar17 * 2);
  psVar21 = (short *)(param_2 + uVar17 * 2);
  do {
    lVar18 = lVar18 + -1;
    *puVar19 = (short)(param_4 + (int)*psVar21 * (int)param_3 >> (param_5 & 0x1f));
    puVar19 = puVar19 + 1;
    psVar21 = psVar21 + 1;
  } while (lVar18 != 0);
  return;
}


// ===== 009196fc  FUN_009196fc =====

void FUN_009196fc(long param_1,long param_2,short *param_3,long param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  short sVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  
  if (param_5 != 0) {
    uVar6 = param_4 - 1;
    sVar2 = *param_3;
    lVar5 = 0;
    puVar7 = (undefined8 *)(param_2 + param_4 * -2 + 0x12);
    lVar8 = -param_4;
    lVar4 = param_2;
    do {
      lVar8 = lVar8 + 1;
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      else {
        if (uVar6 < 4) {
          lVar9 = 0;
          uVar15 = uVar6;
        }
        else {
          if (uVar6 < 0x10) {
            uVar13 = 0;
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            lVar14 = 0;
            lVar16 = 0;
            lVar17 = 0;
            lVar21 = 0;
            lVar23 = 0;
            lVar18 = 0;
            lVar20 = 0;
            lVar24 = 0;
            lVar25 = 0;
            lVar26 = 0;
            lVar27 = 0;
            uVar15 = uVar6 & 0xfffffffffffffff0;
            lVar28 = 0;
            lVar29 = 0;
            lVar30 = 0;
            lVar31 = 0;
            pauVar10 = (undefined1 (*) [16])(param_3 + param_4 + -8);
            puVar11 = puVar7;
            do {
              pauVar1 = pauVar10 + -1;
              auVar32 = *pauVar10;
              uVar15 = uVar15 - 0x10;
              uVar22 = puVar11[-1];
              uVar19 = puVar11[-2];
              uVar35 = puVar11[1];
              uVar34 = *puVar11;
              puVar11 = puVar11 + 4;
              pauVar10 = pauVar10 + -2;
              auVar32 = NEON_rev64(auVar32,2);
              auVar33 = NEON_rev64(*pauVar1,2);
              auVar32 = NEON_ext(auVar32,auVar32,8,1);
              auVar33 = NEON_ext(auVar33,auVar33,8,1);
              lVar24 = lVar24 + (int)(short)((ulong)uVar22 >> 0x20) * (int)auVar32._12_2_;
              lVar25 = lVar25 + (int)(short)((ulong)uVar22 >> 0x30) * (int)auVar32._14_2_;
              lVar18 = lVar18 + (int)(short)uVar22 * (int)auVar32._8_2_;
              lVar20 = lVar20 + (int)(short)((ulong)uVar22 >> 0x10) * (int)auVar32._10_2_;
              lVar21 = lVar21 + (int)(short)((ulong)uVar19 >> 0x20) * (int)auVar32._4_2_;
              lVar23 = lVar23 + (int)(short)((ulong)uVar19 >> 0x30) * (int)auVar32._6_2_;
              lVar16 = lVar16 + (int)(short)uVar19 * (int)auVar32._0_2_;
              lVar17 = lVar17 + (int)(short)((ulong)uVar19 >> 0x10) * (int)auVar32._2_2_;
              lVar30 = lVar30 + (int)(short)((ulong)uVar35 >> 0x20) * (int)auVar33._12_2_;
              lVar31 = lVar31 + (int)(short)((ulong)uVar35 >> 0x30) * (int)auVar33._14_2_;
              lVar28 = lVar28 + (int)(short)uVar35 * (int)auVar33._8_2_;
              lVar29 = lVar29 + (int)(short)((ulong)uVar35 >> 0x10) * (int)auVar33._10_2_;
              lVar9 = lVar9 + (int)(short)((ulong)uVar34 >> 0x20) * (int)auVar33._4_2_;
              lVar14 = lVar14 + (int)(short)((ulong)uVar34 >> 0x30) * (int)auVar33._6_2_;
              lVar26 = lVar26 + (int)(short)uVar34 * (int)auVar33._0_2_;
              lVar27 = lVar27 + (int)(short)((ulong)uVar34 >> 0x10) * (int)auVar33._2_2_;
            } while (uVar15 != 0);
            lVar9 = lVar26 + lVar16 + lVar28 + lVar18 + lVar9 + lVar21 + lVar30 + lVar24 +
                    lVar27 + lVar17 + lVar29 + lVar20 + lVar14 + lVar23 + lVar31 + lVar25;
            if (uVar6 == (uVar6 & 0xfffffffffffffff0)) goto LAB_00919764;
            uVar13 = uVar6 & 0xfffffffffffffff0;
            uVar15 = uVar6 & 0xf;
            if ((uVar6 & 0xc) == 0) goto LAB_009198e0;
          }
          lVar16 = 0;
          lVar17 = 0;
          lVar18 = 0;
          lVar14 = uVar13 - (uVar6 & 0xfffffffffffffffc);
          puVar11 = (undefined8 *)(param_2 + (uVar13 + lVar8) * 2);
          psVar12 = param_3 + param_4 + (-4 - uVar13);
          do {
            lVar14 = lVar14 + 4;
            uVar22 = *puVar11;
            uVar19 = NEON_rev64(*(undefined8 *)psVar12,2);
            lVar17 = lVar17 + (int)(short)((ulong)uVar22 >> 0x20) *
                              (int)(short)((ulong)uVar19 >> 0x20);
            lVar18 = lVar18 + (int)(short)((ulong)uVar22 >> 0x30) *
                              (int)(short)((ulong)uVar19 >> 0x30);
            lVar9 = lVar9 + (int)(short)uVar22 * (int)(short)uVar19;
            lVar16 = lVar16 + (int)(short)((ulong)uVar22 >> 0x10) *
                              (int)(short)((ulong)uVar19 >> 0x10);
            puVar11 = puVar11 + 1;
            psVar12 = psVar12 + -4;
          } while (lVar14 != 0);
          uVar15 = uVar6 & 3;
          lVar9 = lVar9 + lVar17 + lVar16 + lVar18;
          if (uVar6 == (uVar6 & 0xfffffffffffffffc)) goto LAB_00919764;
        }
LAB_009198e0:
        lVar14 = -uVar15;
        psVar12 = param_3 + uVar15;
        do {
          lVar16 = lVar14 * 2;
          bVar3 = lVar14 != -1;
          lVar14 = lVar14 + 1;
          lVar9 = lVar9 + (long)(int)*(short *)(lVar4 + lVar16) * (long)(int)*psVar12;
          psVar12 = psVar12 + -1;
        } while (bVar3);
      }
LAB_00919764:
      puVar7 = (undefined8 *)((long)puVar7 + 2);
      lVar4 = lVar4 + 2;
      lVar9 = (long)(int)*(short *)(param_1 + lVar5 * 2) * (long)(int)sVar2 - lVar9;
      if (lVar9 < -0x7ffffff) {
        lVar9 = -0x8000000;
      }
      if (0x7fff7fe < lVar9) {
        lVar9 = 0x7fff7ff;
      }
      *(short *)(param_2 + lVar5 * 2) = (short)((int)lVar9 + 0x800U >> 0xc);
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_5);
  }
  return;
}


// ===== 00919910  FUN_00919910 =====

uint FUN_00919910(short *param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = param_3 << 6 | 0x20;
    do {
      uVar2 = uVar2 + param_4 & ((int)(uVar2 + param_4) >> 0x1f ^ 0xffffffffU);
      iVar1 = param_3 * (int)*param_1;
      param_3 = uVar2 >> 6;
      if (0x3fff < param_3) {
        param_3 = 0x4000;
      }
      param_2 = param_2 + -1;
      *param_1 = (short)(iVar1 + 0x2000U >> 0xe);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return param_3;
}


// ===== 0091995c  FUN_0091995c =====

void FUN_0091995c(long param_1,long param_2,ulong param_3,ulong param_4,ulong *param_5,
                 short *param_6)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = 0;
  lVar7 = 0;
  if (param_3 == 1) {
    param_2 = param_2 + 1;
  }
  uVar6 = param_2 - 1;
  uVar5 = 1;
  do {
    uVar4 = FUN_0091a368(param_1,uVar6);
    *param_5 = uVar4;
    if (param_3 != uVar5) {
      lVar7 = 0;
      if (1 < uVar4) {
        lVar7 = uVar4 - 2;
      }
      uVar8 = uVar4 + 2;
      if (uVar6 <= uVar4 + 2) {
        uVar8 = uVar6;
      }
    }
    psVar2 = (short *)(param_1 + uVar4 * 2);
    if ((uVar4 == 0) || (uVar6 - 1 == uVar4)) {
      sVar3 = *psVar2;
      if (uVar6 - 1 == uVar4) {
        if ((int)psVar2[1] < (int)sVar3) goto LAB_00919a1c;
        *param_6 = (short)((uint)((int)psVar2[1] + (int)sVar3) >> 1);
        uVar4 = (*param_5 << 1 | 1) * (long)(int)param_4;
      }
      else {
        *param_6 = sVar3;
        uVar4 = (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1) *
                *param_5;
      }
      *param_5 = uVar4;
    }
    else {
LAB_00919a1c:
      FUN_00919ad4(psVar2 + -1,param_4,param_5,param_6);
    }
    if (param_3 != uVar5) {
      memset((void *)(param_1 + lVar7 * 2),0,(uVar8 - lVar7) * 2 + 2);
    }
    param_6 = param_6 + 1;
    param_5 = param_5 + 1;
    uVar6 = uVar6 + (param_3 == 1);
    bVar1 = param_3 - 1 < uVar5;
    uVar5 = uVar5 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}


// ===== 00919ad4  FUN_00919ad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00919ad4(short *param_1,uint param_2,long *param_3,short *param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ushort local_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined6 uStack_16;
  undefined2 uStack_10;
  undefined1 *local_e;
  
  uStack_18 = 0xaaaa;
  uStack_1a = 0xaaaa;
  uVar6 = param_2 - 1;
  local_e = &DAT_aaaaaaaaaaaaaaaa;
  uStack_16 = 0xaaaaaaaaaaaa;
  uStack_10 = 0xaaaa;
  local_20 = 0;
  if (uVar6 == 0) {
    uStack_1e = 0x100008;
  }
  else if (param_2 == 2) {
    uStack_1e = (undefined4)DAT_001f5060;
    uStack_1a = (undefined2)((ulong)DAT_001f5060 >> 0x20);
    uStack_18 = (undefined2)((ulong)DAT_001f5060 >> 0x30);
  }
  else if (param_2 == 4) {
    uStack_16 = (undefined6)_UNK_001f43e8;
    uStack_10 = (undefined2)((ulong)_UNK_001f43e8 >> 0x30);
    uStack_1e = (undefined4)_DAT_001f43e0;
    uStack_1a = (undefined2)((ulong)_DAT_001f43e0 >> 0x20);
    uStack_18 = (undefined2)((ulong)_DAT_001f43e0 >> 0x30);
  }
  else {
    uStack_16 = (undefined6)_UNK_001f20c8;
    uStack_10 = (undefined2)((ulong)_UNK_001f20c8 >> 0x30);
    uStack_1e = (undefined4)_DAT_001f20c0;
    uStack_1a = (undefined2)((ulong)_DAT_001f20c0 >> 0x20);
    uStack_18 = (undefined2)((ulong)_DAT_001f20c0 >> 0x30);
    local_e = DAT_001f5d70;
  }
  if (param_2 < 0xd) {
    lVar10 = (long)(int)param_2;
    if ((((ulong)(&local_20)[lVar10] < 0x11) && (uVar6 < 0xd)) && ((ulong)(&local_20)[uVar6] < 0x11)
       ) {
      sVar2 = param_1[1];
      iVar4 = (int)*(short *)(&DAT_00225df8 + (ulong)(&local_20)[lVar10] * 6) -
              (int)*(short *)(&DAT_00225df8 + (ulong)(&local_20)[uVar6] * 6);
      iVar5 = (*param_1 * -3 + sVar2 * 4) - (int)param_1[2];
      iVar12 = ((int)*(short *)(&DAT_00225df8 + (ulong)(&local_20)[uVar6] * 6) +
               (int)*(short *)(&DAT_00225df8 + (ulong)(&local_20)[lVar10] * 6)) / 2;
      iVar1 = (int)*param_1 + sVar2 * -2 + (int)param_1[2];
      iVar3 = -iVar1;
      iVar8 = iVar5 * 0x78;
      if (iVar8 + iVar1 * iVar12 < 0 == SBORROW4(iVar8,-(iVar1 * iVar12))) {
        if (iVar8 <= (iVar12 + (short)iVar4) * iVar3) {
          *param_4 = sVar2;
          lVar11 = lVar10 * *param_3 * 2;
LAB_00919d40:
          *param_3 = lVar11;
          return;
        }
        iVar12 = iVar12 + (short)iVar4 * 2;
        lVar11 = 1;
        do {
          if ((param_2 == (uint)lVar11) || (iVar8 < (short)iVar12 * iVar3)) {
            if ((0xc < (uint)(lVar11 + (ulong)param_2)) ||
               (0x10 < (ulong)(&local_20)[lVar11 + (ulong)param_2 & 0xffffffff])) goto LAB_00919d4c;
            lVar7 = (ulong)(&local_20)[lVar11 + (ulong)param_2 & 0xffffffff] * 6;
            iVar1 = iVar1 * *(short *)(&DAT_00225dfa + lVar7) +
                    iVar5 * *(short *)(&DAT_00225dfc + lVar7) + *param_1 * 0x100;
            iVar12 = iVar1 + 0xff;
            if (-1 < iVar1) {
              iVar12 = iVar1;
            }
            *param_4 = (short)((uint)iVar12 >> 8);
            lVar11 = lVar11 + lVar10 * 2 * *param_3;
            goto LAB_00919d40;
          }
          lVar11 = lVar11 + 1;
          iVar12 = iVar12 + iVar4;
        } while ((int)lVar11 != 0);
      }
      else {
        lVar11 = 1;
        do {
          if ((param_2 == (uint)lVar11) || (iVar12 = iVar12 - iVar4, (short)iVar12 * iVar3 < iVar8))
          {
            if ((0xc < (uint)((ulong)param_2 - lVar11)) ||
               (0x10 < (ulong)(&local_20)[(ulong)param_2 - lVar11 & 0xffffffff])) goto LAB_00919d4c;
            lVar7 = (ulong)(&local_20)[(ulong)param_2 - lVar11 & 0xffffffff] * 6;
            iVar1 = iVar1 * *(short *)(&DAT_00225dfa + lVar7) +
                    iVar5 * *(short *)(&DAT_00225dfc + lVar7) + *param_1 * 0x100;
            iVar12 = iVar1 + 0xff;
            if (-1 < iVar1) {
              iVar12 = iVar1;
            }
            *param_4 = (short)((uint)iVar12 >> 8);
            lVar11 = lVar10 * 2 * *param_3 - lVar11;
            goto LAB_00919d40;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 != 0);
      }
      return;
    }
  }
LAB_00919d4c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(0x5512,0x919d50);
  (*pcVar9)();
}


// ===== 00919d50  FUN_00919d50 =====

ulong FUN_00919d50(long param_1,ulong param_2,ulong param_3,ulong param_4,int *param_5)

{
  short *psVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  short sVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  short *psVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar28;
  undefined8 uVar27;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  if (param_3 < param_2) {
    uVar6 = 0;
    iVar21 = 0x7fffffff;
  }
  else {
    lVar11 = param_2 * -2;
    pauVar10 = (undefined1 (*) [16])(param_1 + param_2 * -2 + 0x10);
    uVar7 = 0;
    iVar9 = 0x7fffffff;
    do {
      if (param_4 == 0) {
        iVar21 = 0;
      }
      else {
        if (param_4 < 4) {
          uVar6 = 0;
          iVar21 = 0;
        }
        else {
          if (param_4 < 0x10) {
            uVar14 = 0;
            iVar21 = 0;
          }
          else {
            iVar21 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar17 = 0;
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            pauVar12 = (undefined1 (*) [16])(param_1 + 0x10);
            iVar26 = 0;
            iVar28 = 0;
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            iVar32 = 0;
            iVar33 = 0;
            iVar34 = 0;
            uVar6 = param_4 & 0xfffffffffffffff0;
            pauVar15 = pauVar10;
            do {
              pauVar2 = pauVar15 + -1;
              auVar5 = *pauVar15;
              uVar6 = uVar6 - 0x10;
              pauVar3 = pauVar12 + -1;
              auVar36 = *pauVar12;
              pauVar15 = pauVar15 + 2;
              pauVar12 = pauVar12 + 2;
              auVar35 = NEON_sabd(*pauVar3,*pauVar2,2);
              auVar36 = NEON_sabd(auVar36,auVar5,2);
              iVar26 = iVar26 + (uint)auVar35._8_2_;
              iVar28 = iVar28 + (uint)auVar35._10_2_;
              iVar29 = iVar29 + (uint)auVar35._12_2_;
              iVar30 = iVar30 + (uint)auVar35._14_2_;
              iVar17 = iVar17 + (uint)auVar35._0_2_;
              iVar18 = iVar18 + (uint)auVar35._2_2_;
              iVar19 = iVar19 + (uint)auVar35._4_2_;
              iVar20 = iVar20 + (uint)auVar35._6_2_;
              iVar21 = iVar21 + (uint)auVar36._8_2_;
              iVar22 = iVar22 + (uint)auVar36._10_2_;
              iVar23 = iVar23 + (uint)auVar36._12_2_;
              iVar24 = iVar24 + (uint)auVar36._14_2_;
              iVar31 = iVar31 + (uint)auVar36._0_2_;
              iVar32 = iVar32 + (uint)auVar36._2_2_;
              iVar33 = iVar33 + (uint)auVar36._4_2_;
              iVar34 = iVar34 + (uint)auVar36._6_2_;
            } while (uVar6 != 0);
            iVar21 = iVar31 + iVar17 + iVar21 + iVar26 + iVar32 + iVar18 + iVar22 + iVar28 +
                     iVar33 + iVar19 + iVar23 + iVar29 + iVar34 + iVar20 + iVar24 + iVar30;
            if (param_4 == (param_4 & 0xfffffffffffffff0)) goto LAB_00919da0;
            uVar14 = param_4 & 0xfffffffffffffff0;
            uVar6 = param_4 & 0xfffffffffffffff0;
            if ((param_4 & 0xc) == 0) goto LAB_00919e9c;
          }
          iVar23 = 0;
          iVar24 = 0;
          iVar22 = 0;
          puVar13 = (undefined8 *)(param_1 + uVar14 * 2);
          lVar8 = uVar14 - (param_4 & 0xfffffffffffffffc);
          do {
            uVar25 = *puVar13;
            uVar27 = *(undefined8 *)((long)puVar13 + lVar11);
            lVar8 = lVar8 + 4;
            puVar13 = puVar13 + 1;
            iVar17 = MP_INT_ABS((int)(short)uVar25 - (int)(short)uVar27);
            iVar18 = MP_INT_ABS((int)(short)((ulong)uVar25 >> 0x10) -
                                (int)(short)((ulong)uVar27 >> 0x10));
            iVar19 = MP_INT_ABS((int)(short)((ulong)uVar25 >> 0x20) -
                                (int)(short)((ulong)uVar27 >> 0x20));
            iVar20 = MP_INT_ABS((int)(short)((ulong)uVar25 >> 0x30) -
                                (int)(short)((ulong)uVar27 >> 0x30));
            iVar21 = iVar21 + iVar17;
            iVar22 = iVar22 + iVar18;
            iVar23 = iVar23 + iVar19;
            iVar24 = iVar24 + iVar20;
          } while (lVar8 != 0);
          iVar21 = iVar21 + iVar22 + iVar23 + iVar24;
          uVar6 = param_4 & 0xfffffffffffffffc;
          if (param_4 == (param_4 & 0xfffffffffffffffc)) goto LAB_00919da0;
        }
LAB_00919e9c:
        psVar16 = (short *)(param_1 + uVar6 * 2);
        lVar8 = param_4 - uVar6;
        do {
          sVar4 = *psVar16;
          psVar1 = (short *)((long)psVar16 + lVar11);
          psVar16 = psVar16 + 1;
          iVar23 = (int)sVar4 - (int)*psVar1;
          iVar22 = -iVar23;
          if (-1 < iVar23) {
            iVar22 = iVar23;
          }
          lVar8 = lVar8 + -1;
          iVar21 = iVar22 + iVar21;
        } while (lVar8 != 0);
      }
LAB_00919da0:
      pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xe);
      lVar11 = lVar11 + -2;
      uVar6 = param_2;
      if (iVar9 <= iVar21) {
        uVar6 = uVar7;
      }
      param_2 = param_2 + 1;
      if (iVar9 <= iVar21) {
        iVar21 = iVar9;
      }
      uVar7 = uVar6;
      iVar9 = iVar21;
    } while (param_2 <= param_3);
  }
  *param_5 = iVar21;
  return uVar6;
}


// ===== 00919ec8  FUN_00919ec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00919ec8(ulong param_1,ulong param_2,ulong param_3,ushort *param_4,int param_5,
                 ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  short *psVar14;
  undefined8 *puVar15;
  long lVar16;
  short *psVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  
  uVar6 = *param_4;
  uVar11 = (uint)uVar6;
  if (param_3 != 0) {
    iVar8 = 0x4000 - (uint)uVar6;
    if (param_3 < 0x10) {
      uVar9 = 0;
    }
    else {
      lVar10 = (param_3 - 1) * 2;
      uVar9 = 0;
      if ((((param_2 <= param_2 + lVar10) && (param_6 <= param_6 + lVar10)) &&
          (param_1 <= param_1 + lVar10)) &&
         (((-1 < (long)(param_3 - 1) && (uVar9 = 0, 0x1f < param_6 - param_1)) &&
          (0x1f < param_6 - param_2)))) {
        sVar5 = (short)param_5;
        sVar38 = (short)iVar8;
        sVar7 = (short)-param_5;
        sVar44 = (short)((ulong)_UNK_001f1a58 >> 0x10);
        sVar45 = (short)((ulong)_UNK_001f1a58 >> 0x20);
        sVar46 = (short)((ulong)_UNK_001f1a58 >> 0x30);
        sVar40 = (short)((ulong)_DAT_001f1a50 >> 0x10);
        sVar41 = (short)((ulong)_DAT_001f1a50 >> 0x20);
        sVar42 = (short)((ulong)_DAT_001f1a50 >> 0x30);
        uVar9 = param_3 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(param_2 + 0x10);
        iVar8 = iVar8 + param_5 * (int)uVar9;
        pauVar18 = (undefined1 (*) [16])(param_1 + 0x10);
        sVar31 = sVar38 + sVar5 * (short)_DAT_001f1a50;
        sVar32 = sVar38 + sVar5 * sVar40;
        sVar33 = sVar38 + sVar5 * sVar41;
        sVar34 = sVar38 + sVar5 * sVar42;
        sVar35 = sVar38 + sVar5 * (short)_UNK_001f1a58;
        sVar36 = sVar38 + sVar5 * sVar44;
        sVar37 = sVar38 + sVar5 * sVar45;
        sVar38 = sVar38 + sVar5 * sVar46;
        sVar39 = uVar6 + sVar7 * (short)_DAT_001f1a50;
        sVar40 = uVar6 + sVar7 * sVar40;
        sVar41 = uVar6 + sVar7 * sVar41;
        sVar42 = uVar6 + sVar7 * sVar42;
        sVar43 = uVar6 + sVar7 * (short)_UNK_001f1a58;
        sVar44 = uVar6 + sVar7 * sVar44;
        sVar45 = uVar6 + sVar7 * sVar45;
        sVar46 = uVar6 + sVar7 * sVar46;
        uVar11 = (uint)uVar6 + (int)uVar9 * -param_5;
        uVar6 = (ushort)uVar11;
        puVar13 = (undefined8 *)(param_6 + 0x10);
        uVar19 = param_3 & 0xfffffffffffffff0;
        do {
          sVar47 = sVar39 + sVar7 * 8;
          sVar48 = sVar40 + sVar7 * 8;
          sVar49 = sVar41 + sVar7 * 8;
          sVar50 = sVar42 + sVar7 * 8;
          sVar51 = sVar43 + sVar7 * 8;
          sVar52 = sVar44 + sVar7 * 8;
          sVar53 = sVar45 + sVar7 * 8;
          sVar54 = sVar46 + sVar7 * 8;
          uVar2 = *(undefined8 *)(pauVar18[-1] + 8);
          uVar1 = *(undefined8 *)pauVar18[-1];
          auVar4 = *pauVar18;
          sVar60 = sVar31 + sVar5 * 8;
          sVar61 = sVar32 + sVar5 * 8;
          sVar62 = sVar33 + sVar5 * 8;
          sVar63 = sVar34 + sVar5 * 8;
          sVar64 = sVar35 + sVar5 * 8;
          uVar66 = puVar15[-1];
          uVar65 = puVar15[-2];
          uVar68 = puVar15[1];
          uVar67 = *puVar15;
          uVar19 = uVar19 - 0x10;
          puVar15 = puVar15 + 4;
          pauVar18 = pauVar18 + 2;
          iVar20 = (int)sVar39;
          iVar21 = (int)sVar40;
          iVar22 = (int)sVar41;
          iVar23 = (int)sVar42;
          iVar24 = (int)sVar43;
          iVar26 = (int)sVar44;
          iVar27 = (int)sVar45;
          iVar29 = (int)sVar46;
          auVar55._8_8_ = auVar4._8_8_;
          sVar39 = sVar39 + sVar7 * 0x10;
          sVar40 = sVar40 + sVar7 * 0x10;
          sVar41 = sVar41 + sVar7 * 0x10;
          sVar42 = sVar42 + sVar7 * 0x10;
          sVar43 = sVar43 + sVar7 * 0x10;
          sVar44 = sVar44 + sVar7 * 0x10;
          sVar45 = sVar45 + sVar7 * 0x10;
          sVar46 = sVar46 + sVar7 * 0x10;
          auVar57._0_8_ =
               CONCAT44((short)((ulong)uVar1 >> 0x10) * iVar21 +
                        (int)(short)((ulong)uVar65 >> 0x10) * (int)sVar32,
                        (short)uVar1 * iVar20 + (int)(short)uVar65 * (int)sVar31);
          auVar57._8_4_ =
               (short)((ulong)uVar1 >> 0x20) * iVar22 +
               (int)(short)((ulong)uVar65 >> 0x20) * (int)sVar33;
          auVar57._12_4_ =
               (short)((ulong)uVar1 >> 0x30) * iVar23 +
               (int)(short)((ulong)uVar65 >> 0x30) * (int)sVar34;
          iVar25 = (int)sVar35;
          iVar28 = (int)sVar37;
          iVar30 = (int)sVar38;
          iVar23 = (short)((ulong)uVar2 >> 0x10) * iVar26 +
                   (int)(short)((ulong)uVar66 >> 0x10) * (int)sVar36;
          iVar20 = (int)auVar4._10_2_ * (int)sVar52 +
                   (int)(short)((ulong)uVar68 >> 0x10) * (int)(short)(sVar36 + sVar5 * 8);
          iVar21 = (int)auVar4._12_2_ * (int)sVar53 +
                   (int)(short)((ulong)uVar68 >> 0x20) * (int)(short)(sVar37 + sVar5 * 8);
          iVar22 = (int)auVar4._14_2_ * (int)sVar54 +
                   (int)(short)((ulong)uVar68 >> 0x30) * (int)(short)(sVar38 + sVar5 * 8);
          sVar31 = sVar31 + sVar5 * 0x10;
          sVar32 = sVar32 + sVar5 * 0x10;
          sVar33 = sVar33 + sVar5 * 0x10;
          sVar34 = sVar34 + sVar5 * 0x10;
          sVar35 = sVar35 + sVar5 * 0x10;
          sVar36 = sVar36 + sVar5 * 0x10;
          sVar37 = sVar37 + sVar5 * 0x10;
          sVar38 = sVar38 + sVar5 * 0x10;
          auVar55._0_8_ = NEON_rshrn(auVar4._0_8_,auVar57,0xe,4);
          auVar58._8_8_ = auVar57._8_8_;
          auVar3._4_4_ = (int)auVar4._2_2_ * (int)sVar48 +
                         (int)(short)((ulong)uVar67 >> 0x10) * (int)sVar61;
          auVar3._0_4_ = (int)auVar4._0_2_ * (int)sVar47 + (int)(short)uVar67 * (int)sVar60;
          auVar3._8_4_ = (int)auVar4._4_2_ * (int)sVar49 +
                         (int)(short)((ulong)uVar67 >> 0x20) * (int)sVar62;
          auVar3._12_4_ =
               (int)auVar4._6_2_ * (int)sVar50 + (int)(short)((ulong)uVar67 >> 0x30) * (int)sVar63;
          auVar58._0_8_ = NEON_rshrn(auVar57._0_8_,auVar3,0xe,4);
          auVar56._4_2_ = (short)iVar23;
          auVar56._0_4_ = (short)uVar2 * iVar24 + (short)uVar66 * iVar25;
          auVar56._6_2_ = (short)((uint)iVar23 >> 0x10);
          auVar56._8_4_ =
               (short)((ulong)uVar2 >> 0x20) * iVar27 + (short)((ulong)uVar66 >> 0x20) * iVar28;
          auVar56._12_4_ =
               (short)((ulong)uVar2 >> 0x30) * iVar29 + (short)((ulong)uVar66 >> 0x30) * iVar30;
          auVar56 = NEON_rshrn2(auVar55,auVar56,0xe,4);
          auVar59._4_2_ = (short)iVar20;
          auVar59._0_4_ = (int)auVar4._8_2_ * (int)sVar51 + (int)(short)uVar68 * (int)sVar64;
          auVar59._6_2_ = (short)((uint)iVar20 >> 0x10);
          auVar59._8_2_ = (short)iVar21;
          auVar59._10_2_ = (short)((uint)iVar21 >> 0x10);
          auVar59._12_2_ = (short)iVar22;
          auVar59._14_2_ = (short)((uint)iVar22 >> 0x10);
          auVar59 = NEON_rshrn2(auVar58,auVar59,0xe,4);
          puVar13[-1] = auVar56._8_8_;
          puVar13[-2] = auVar56._0_8_;
          puVar13[1] = auVar59._8_8_;
          *puVar13 = auVar59._0_8_;
          puVar13 = puVar13 + 4;
        } while (uVar19 != 0);
        if (param_3 == uVar9) goto LAB_00919f34;
      }
    }
    lVar16 = uVar9 * 2;
    lVar10 = param_3 - uVar9;
    puVar12 = (undefined2 *)(param_6 + lVar16);
    psVar14 = (short *)(param_2 + lVar16);
    psVar17 = (short *)(param_1 + lVar16);
    do {
      sVar5 = (short)iVar8;
      sVar7 = (short)uVar11;
      lVar10 = lVar10 + -1;
      uVar11 = uVar11 - param_5;
      uVar6 = (ushort)uVar11;
      iVar8 = iVar8 + param_5;
      *puVar12 = (short)((int)*psVar14 * (int)sVar5 + (int)*psVar17 * (int)sVar7 + 0x2000U >> 0xe);
      puVar12 = puVar12 + 1;
      psVar14 = psVar14 + 1;
      psVar17 = psVar17 + 1;
    } while (lVar10 != 0);
  }
LAB_00919f34:
  *param_4 = uVar6;
  return;
}


// ===== 0091a048  FUN_0091a048 =====

void FUN_0091a048(short *param_1,long param_2,ushort *param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*param_3;
  if (param_2 != 0) {
    uVar3 = (uint)*param_3 << 6 | 0x20;
    do {
      uVar3 = uVar3 + param_4 & ((int)(uVar3 + param_4) >> 0x1f ^ 0xffffffffU);
      iVar1 = (int)*param_1 * uVar2;
      uVar2 = uVar3 >> 6;
      if (0x3fff < uVar2) {
        uVar2 = 0x4000;
      }
      param_2 = param_2 + -1;
      *param_5 = (short)(iVar1 + 0x2000U >> 0xe);
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    } while (param_2 != 0);
  }
  *param_3 = (ushort)uVar2;
  return;
}


// ===== 0091a098  FUN_0091a098 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0091a098(ulong param_1,int param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar28;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  
  if (param_3 == 0) {
    return;
  }
  iVar12 = 0x100020;
  if (param_3 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if ((param_1 <= param_1 + (param_3 - 1) * 2) && (-1 < (long)(param_3 - 1))) {
      iVar18 = -param_2;
      if (param_3 < 0x10) {
        iVar17 = 0x100020;
        uVar11 = 0;
      }
      else {
        puVar10 = (undefined8 *)(param_1 + 0x10);
        uVar11 = param_3 & 0xfffffffffffffff0;
        uVar7 = param_3 & 0xfffffffffffffff0;
        iVar17 = (int)uVar7 * iVar18 + 0x100020;
        iVar12 = iVar18 * (int)_DAT_001f3f60 + 0x100020;
        iVar14 = iVar18 * (int)((ulong)_DAT_001f3f60 >> 0x20) + 0x100020;
        iVar13 = iVar18 * (int)_UNK_001f3f68 + 0x100020;
        iVar15 = iVar18 * (int)((ulong)_UNK_001f3f68 >> 0x20) + 0x100020;
        iVar16 = iVar18 * _DAT_001f21f0 + 0x100020;
        iVar19 = iVar18 * _UNK_001f21f4 + 0x100020;
        iVar20 = iVar18 * _UNK_001f21f8 + 0x100020;
        iVar21 = iVar18 * _UNK_001f21fc + 0x100020;
        do {
          iVar22 = iVar12 + param_2 * -8;
          iVar25 = iVar14 + param_2 * -8;
          iVar26 = iVar13 + param_2 * -8;
          iVar27 = iVar15 + param_2 * -8;
          uVar3 = puVar10[-1];
          uVar2 = puVar10[-2];
          uVar6 = puVar10[1];
          uVar5 = *puVar10;
          iVar28 = iVar12 >> 6;
          iVar32 = iVar14 >> 6;
          iVar33 = iVar13 >> 6;
          iVar34 = iVar15 >> 6;
          iVar35 = iVar16 + param_2 * -8;
          iVar36 = iVar19 + param_2 * -8;
          iVar37 = iVar20 + param_2 * -8;
          iVar38 = iVar21 + param_2 * -8;
          iVar12 = iVar12 + param_2 * -0x10;
          iVar14 = iVar14 + param_2 * -0x10;
          iVar13 = iVar13 + param_2 * -0x10;
          iVar15 = iVar15 + param_2 * -0x10;
          uVar11 = uVar11 - 0x10;
          auVar29._0_8_ = CONCAT44(iVar32 * (short)((ulong)uVar2 >> 0x10),iVar28 * (short)uVar2);
          auVar29._8_4_ = iVar33 * (short)((ulong)uVar2 >> 0x20);
          auVar29._12_4_ = iVar34 * (short)((ulong)uVar2 >> 0x30);
          auVar31._0_8_ =
               CONCAT44((iVar25 >> 6) * (int)(short)((ulong)uVar5 >> 0x10),
                        (iVar22 >> 6) * (int)(short)uVar5);
          auVar31._8_4_ = (iVar26 >> 6) * (int)(short)((ulong)uVar5 >> 0x20);
          auVar31._12_4_ = (iVar27 >> 6) * (int)(short)((ulong)uVar5 >> 0x30);
          iVar22 = iVar16 >> 6;
          iVar25 = iVar19 >> 6;
          iVar26 = iVar20 >> 6;
          iVar27 = iVar21 >> 6;
          iVar16 = iVar16 + param_2 * -0x10;
          iVar19 = iVar19 + param_2 * -0x10;
          iVar20 = iVar20 + param_2 * -0x10;
          iVar21 = iVar21 + param_2 * -0x10;
          auVar30._8_8_ = auVar29._8_8_;
          auVar30._0_8_ = NEON_rshrn(auVar29._0_8_,auVar29,0xe,4);
          auVar23._8_8_ = auVar31._8_8_;
          auVar23._0_8_ = NEON_rshrn(auVar31._0_8_,auVar31,0xe,4);
          auVar24._4_4_ = iVar25 * (short)((ulong)uVar3 >> 0x10);
          auVar24._0_4_ = iVar22 * (short)uVar3;
          auVar24._8_4_ = iVar26 * (short)((ulong)uVar3 >> 0x20);
          auVar24._12_4_ = iVar27 * (short)((ulong)uVar3 >> 0x30);
          auVar31 = NEON_rshrn2(auVar30,auVar24,0xe,4);
          auVar4._4_4_ = (iVar36 >> 6) * (int)(short)((ulong)uVar6 >> 0x10);
          auVar4._0_4_ = (iVar35 >> 6) * (int)(short)uVar6;
          auVar4._8_4_ = (iVar37 >> 6) * (int)(short)((ulong)uVar6 >> 0x20);
          auVar4._12_4_ = (iVar38 >> 6) * (int)(short)((ulong)uVar6 >> 0x30);
          auVar24 = NEON_rshrn2(auVar23,auVar4,0xe,4);
          puVar10[-1] = auVar31._8_8_;
          puVar10[-2] = auVar31._0_8_;
          puVar10[1] = auVar24._8_8_;
          *puVar10 = auVar24._0_8_;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        if (param_3 == uVar7) {
          return;
        }
        uVar11 = uVar7;
        if ((param_3 & 0xc) == 0) {
          iVar12 = (int)uVar7 * iVar18 + 0x100020;
          goto LAB_0091a0b4;
        }
      }
      iVar14 = param_2 * -4;
      uVar7 = param_3 & 0xfffffffffffffffc;
      iVar12 = (int)uVar7 * iVar18 + 0x100020;
      iVar13 = iVar17 + iVar18 * (int)_DAT_001f3f60;
      iVar15 = iVar17 + iVar18 * (int)((ulong)_DAT_001f3f60 >> 0x20);
      iVar16 = iVar17 + iVar18 * (int)_UNK_001f3f68;
      iVar17 = iVar17 + iVar18 * (int)((ulong)_UNK_001f3f68 >> 0x20);
      lVar8 = uVar11 - uVar7;
      puVar10 = (undefined8 *)(param_1 + uVar11 * 2);
      do {
        uVar2 = *puVar10;
        iVar18 = iVar13 >> 6;
        iVar19 = iVar15 >> 6;
        iVar20 = iVar16 >> 6;
        iVar21 = iVar17 >> 6;
        iVar13 = iVar13 + iVar14;
        iVar15 = iVar15 + iVar14;
        iVar16 = iVar16 + iVar14;
        iVar17 = iVar17 + iVar14;
        lVar8 = lVar8 + 4;
        iVar18 = iVar18 * (short)uVar2;
        iVar19 = iVar19 * (short)((ulong)uVar2 >> 0x10);
        auVar1._4_4_ = iVar19;
        auVar1._0_4_ = iVar18;
        auVar1._8_4_ = iVar20 * (short)((ulong)uVar2 >> 0x20);
        auVar1._12_4_ = iVar21 * (short)((ulong)uVar2 >> 0x30);
        uVar2 = NEON_rshrn(CONCAT44(iVar19,iVar18),auVar1,0xe,4);
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
      } while (lVar8 != 0);
      if (param_3 == uVar7) {
        return;
      }
    }
  }
LAB_0091a0b4:
  lVar8 = param_3 - uVar7;
  psVar9 = (short *)(param_1 + uVar7 * 2);
  do {
    iVar18 = iVar12 >> 6;
    lVar8 = lVar8 + -1;
    iVar12 = iVar12 - param_2;
    *psVar9 = (short)(iVar18 * *psVar9 + 0x2000U >> 0xe);
    psVar9 = psVar9 + 1;
  } while (lVar8 != 0);
  return;
}


// ===== 0091a230  FUN_0091a230 =====

undefined8
FUN_0091a230(long param_1,long param_2,undefined8 param_3,int param_4,ulong param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_4 < 32000) {
    if (param_4 == 8000) {
      puVar2 = &DAT_00225e5e;
      uVar4 = 2;
      lVar3 = 3;
      uVar1 = 2;
    }
    else {
      if (param_4 != 16000) {
        return 0xffffffff;
      }
      puVar2 = &DAT_00225e64;
      uVar1 = 4;
      uVar4 = 3;
      lVar3 = 5;
    }
  }
  else {
    if (param_4 == 32000) {
      puVar2 = &DAT_00225e6e;
      uVar1 = 8;
    }
    else {
      if (param_4 != 48000) {
        return 0xffffffff;
      }
      puVar2 = &DAT_00225e7c;
      uVar1 = 0xc;
    }
    uVar4 = 4;
    lVar3 = 7;
  }
  if ((param_5 & 1) == 0) {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0091a304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)PTR_PTR_FUN_00d52078)
                    (param_1 + lVar3 * 2 + -2,(param_2 - lVar3) + 1,param_6,param_3,puVar2,lVar3,
                     uVar1,uVar4);
  return uVar1;
}


// ===== 0091a308  FUN_0091a308 =====

short FUN_0091a308(undefined8 param_1,undefined8 param_2)

{
  short local_18 [2];
  short local_14 [2];
  
  local_14[0] = -0x5556;
  local_18[0] = -0x5556;
  FUN_0065b280(param_1,param_2,local_14,local_18);
  if ((int)local_14[0] + (int)local_18[0] < 0 == SBORROW4((int)local_14[0],-(int)local_18[0]) &&
      local_14[0] != local_18[0]) {
    local_14[0] = local_18[0];
  }
  return local_14[0];
}


// ===== 0091a368  FUN_0091a368 =====

long FUN_0091a368(long param_1,long param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 != 0) {
    lVar5 = 0;
    iVar6 = 0x8000;
    lVar4 = 0;
    do {
      sVar2 = *(short *)(param_1 + lVar5 * 2);
      iVar3 = (int)(short)iVar6;
      lVar1 = lVar5;
      if (sVar2 <= iVar3) {
        lVar1 = lVar4;
      }
      lVar5 = lVar5 + 1;
      iVar6 = (int)sVar2;
      if (sVar2 <= iVar3) {
        iVar6 = iVar3;
      }
      lVar4 = lVar1;
    } while (param_2 != lVar5);
    return lVar1;
  }
  return 0;
}


// ===== 0091a3ac  FUN_0091a3ac =====

long FUN_0091a3ac(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_2 != 0) {
    lVar4 = 0;
    lVar3 = 0;
    iVar5 = -0x80000000;
    do {
      iVar2 = *(int *)(param_1 + lVar4 * 4);
      lVar1 = lVar4;
      if (iVar2 <= iVar5) {
        lVar1 = lVar3;
      }
      lVar4 = lVar4 + 1;
      if (iVar2 <= iVar5) {
        iVar2 = iVar5;
      }
      lVar3 = lVar1;
      iVar5 = iVar2;
    } while (param_2 != lVar4);
    return lVar1;
  }
  return 0;
}


// ===== 0091a3ec  FUN_0091a3ec =====

void FUN_0091a3ec(undefined8 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  uVar5 = param_2 * 0x38;
  *param_1 = &PTR_FUN_00d3d900;
  param_1[1] = param_2;
  if (SUB168(auVar1 * ZEXT816(0x38),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar3 = (undefined8 *)operator_new__(uVar5);
  uVar2 = DAT_001f5818;
  if (param_2 == 0) {
    param_1[2] = puVar3;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    puVar6 = puVar3;
    do {
      *puVar6 = uVar2;
      *(undefined4 *)(puVar6 + 1) = 500000;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined8 *)((long)puVar6 + 0x1c) = 0;
      *(undefined8 *)((long)puVar6 + 0x14) = 0;
      *(undefined8 *)((long)puVar6 + 0xc) = 0;
      *(undefined8 *)((long)puVar6 + 0x2a) = 0;
      *(undefined2 *)(puVar6 + 4) = 0x1000;
      *(undefined4 *)((long)puVar6 + 0x32) = 0x4e200000;
      *(undefined2 *)((long)puVar6 + 0x36) = 0x18;
      puVar6 = puVar6 + 7;
    } while (puVar6 != puVar3 + param_2 * 7);
    lVar4 = 0;
    uVar5 = 0;
    param_1[2] = puVar3;
    *(undefined1 *)(param_1 + 3) = 0;
    do {
      uVar5 = uVar5 + 1;
      puVar3 = (undefined8 *)(param_1[2] + lVar4);
      lVar4 = lVar4 + 0x38;
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 1) = 500000;
      *(undefined8 *)((long)puVar3 + 0x24) = 0;
      *(undefined8 *)((long)puVar3 + 0x1c) = 0;
      *(undefined8 *)((long)puVar3 + 0x14) = 0;
      *(undefined8 *)((long)puVar3 + 0xc) = 0;
      *(undefined8 *)((long)puVar3 + 0x2a) = 0;
      *(undefined2 *)(puVar3 + 4) = 0x1000;
      *(undefined4 *)((long)puVar3 + 0x32) = 0x4e200000;
      *(undefined2 *)((long)puVar3 + 0x36) = 0x18;
    } while (uVar5 < (ulong)param_1[1]);
  }
  return;
}


// ===== 0091a500  FUN_0091a500 =====

void FUN_0091a500(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d3d900;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 0091a528  FUN_0091a528 =====

void FUN_0091a528(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d3d900;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0091a570  FUN_0091a570 =====

undefined4 FUN_0091a570(long param_1,undefined8 param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [384];
  undefined1 auStack_1d0 [112];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  short local_140;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  
  local_140 = -0x5556;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(long *)(param_1 + 8) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    uVar11 = 0;
    lVar12 = 0x36;
    local_70 = 0xaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    do {
      lVar13 = *(long *)(param_1 + 0x10);
      memset(auStack_360,0,0x210);
      uVar9 = FUN_00915ef0(param_2,uVar11);
      lVar10 = FUN_0091601c(param_2);
      FUN_009168a4(uVar9,0x100,lVar10 + -0x100,auStack_350);
      iVar7 = FUN_0091a9ac(auStack_350,auStack_350,0x100,9,0xffffffff,&local_90);
      lVar10 = lVar13 + lVar12;
      uVar2 = (int)local_90 >> (8U - iVar7 & 0x1f);
      if ((int)uVar2 < *(int *)(lVar10 + -0x2e)) {
        if ((int)local_90 < 1) {
          return uVar14;
        }
        uVar8 = uVar2;
        if ((int)uVar2 < 2) {
          uVar8 = 1;
        }
        *(uint *)(lVar10 + -0x2e) = uVar8;
        *(undefined4 *)(lVar13 + lVar12 + -0x2a) = 0;
        sVar6 = FUN_0091aa88(&local_90,&local_150,&local_130,8);
        if (sVar6 != 1) {
          return uVar14;
        }
        FUN_0091b1a4(auStack_1d0,&local_120,&local_150,9,0x40);
        uVar8 = FUN_0091b330(&local_120,&local_120,0x40,0);
        if ((0 < (int)uVar2) &&
           (lVar10 = (long)(int)uVar8 + (long)(int)uVar8 * 4,
           (long)(lVar10 + (ulong)uVar2 * -0x10) < 0 == SBORROW8(lVar10,(ulong)uVar2 * 0x10))) {
          psVar1 = (short *)(*(long *)(param_1 + 0x10) + lVar12);
          iVar7 = 0;
          if (uVar8 != 0) {
            iVar7 = (int)LZCOUNT(uVar8 ^ uVar8 << 1 | 1);
          }
          psVar1[-3] = local_140;
          *(undefined1 **)(psVar1 + -7) = puStack_148;
          *(undefined1 **)(psVar1 + -0xb) = local_150;
          uVar4 = iVar7 - 1U;
          if ((iVar7 - 1U & 1) != 0) {
            uVar4 = iVar7 - 2;
          }
          *(uint *)(psVar1 + -0x1b) = uVar2;
          *(undefined8 *)(psVar1 + -0xf) = uStack_158;
          *(undefined8 *)(psVar1 + -0x13) = local_160;
          *(uint *)(psVar1 + -0x17) = uVar2;
          iVar7 = (int)uVar8 >> (-uVar4 & 0x1f);
          if (-1 < (int)uVar4) {
            iVar7 = uVar8 << (ulong)(uVar4 & 0x1f);
          }
          psVar1[-0x15] = 0;
          psVar1[-0x14] = 0;
          sVar6 = FUN_0091b810(iVar7);
          uVar14 = 1;
          psVar1[-1] = sVar6;
          *psVar1 = (short)(uVar4 + 6 >> 1) + 0xd;
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
      }
      else {
        lVar10 = *(long *)(param_1 + 0x10) + lVar12;
        uVar8 = *(uint *)(lVar10 + -0x2e);
        uVar5 = *(int *)(lVar10 + -0x32) - (*(int *)(lVar10 + -0x32) >> 10);
        uVar4 = *(int *)(lVar10 + -0x2a) + (*(int *)(lVar10 + -0x2a) * 0xe5 >> 0x10) +
                (uVar8 & 0xff) * 0xe5 + (uVar8 >> 8 & 0xff) * 0xe500;
        if ((int)uVar2 <= (int)uVar5) {
          uVar2 = uVar5;
        }
        *(uint *)(lVar10 + -0x32) = uVar2;
        iVar7 = uVar8 + ((int)uVar8 >> 0x10) * 0xe5 + ((int)uVar4 >> 0x10);
        iVar3 = (int)(uVar2 + 0x80000) >> 0x14;
        *(uint *)(lVar10 + -0x2a) = uVar4 & 0xffff;
        *(int *)(lVar10 + -0x2e) = iVar7;
        if (iVar7 < iVar3) {
          *(int *)(lVar10 + -0x2e) = iVar3;
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x38;
    } while (uVar11 < *(ulong *)(param_1 + 8));
  }
  return uVar14;
}


// ===== 0091a818  FUN_0091a818 =====

void FUN_0091a818(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,long param_7,undefined8 *param_8)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_62c [1500];
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    memset(auStack_62c,0xaa,0x5dc);
    lVar5 = param_4 * 0x38;
    lVar6 = *(long *)(param_1 + 0x10) + lVar5;
    uVar7 = *(undefined8 *)(lVar6 + 0x10);
    param_8[1] = *(undefined8 *)(lVar6 + 0x18);
    *param_8 = uVar7;
    lVar6 = *(long *)(param_1 + 0x10) + lVar5;
    uVar1 = *(ushort *)(lVar6 + 0x36);
    iVar3 = 1 << (ulong)(uVar1 - 1 & 0x1f);
    if ((short)uVar1 < 2) {
      iVar3 = 0;
    }
    FUN_009195a4(auStack_62c,param_2,*(undefined2 *)(lVar6 + 0x34),iVar3,uVar1,param_7);
    FUN_009196fc(auStack_62c,param_8 + 2,*(long *)(param_1 + 0x10) + lVar5 + 0x20,9,param_7);
    puVar4 = (undefined8 *)((long)param_8 + param_7 * 2);
    uVar7 = *puVar4;
    lVar6 = *(long *)(param_1 + 0x10) + lVar5;
    *(undefined8 *)(lVar6 + 0x18) = puVar4[1];
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    lVar6 = *(long *)(param_1 + 0x10);
    sVar2 = *(short *)(lVar6 + lVar5 + 0x32);
    if (sVar2 < 0x4000) {
      FUN_009195a4(param_8 + 2,param_8 + 2,(int)sVar2,0x2000,0xe,param_7);
      lVar6 = *(long *)(param_1 + 0x10);
    }
    *(short *)(lVar6 + param_4 * 0x38 + 0x32) = sVar2;
    return;
  }
  memset(param_8 + 2,0,param_7 << 1);
  return;
}


// ===== 0091a978  FUN_0091a978 =====

void FUN_0091a978(long param_1,long param_2,undefined2 param_3)

{
  *(undefined2 *)(*(long *)(param_1 + 0x10) + param_2 * 0x38 + 0x32) = param_3;
  return;
}


// ===== 0091a994  FUN_0091a994 =====

undefined4 FUN_0091a994(long param_1,long param_2)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + param_2 * 0x38);
}


// ===== 0091a9ac  FUN_0091a9ac =====

uint FUN_0091a9ac(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5,
                 undefined8 param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  
  sVar2 = FUN_0091a308(param_1,param_3);
  uVar4 = ((int)param_4 + -1) * param_5;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  sVar3 = FUN_0091a308(param_2 + (long)(int)(uVar4 & (int)uVar4 >> 0x1f) * 2,param_3 + (int)uVar1);
  uVar4 = (int)sVar3 * (int)sVar2;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  uVar4 = (uint)(param_3 * (ulong)uVar1 >> 0x1f);
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = (uint)LZCOUNT(uVar4 ^ uVar4 << 1 | 1) ^ 0x1f;
  }
  (**(code **)PTR_PTR_FUN_00d52070)(param_6,param_1,param_2,param_3,param_4,uVar1,param_5);
  return uVar1;
}


// ===== 0091aa88  FUN_0091aa88 =====

undefined8 FUN_0091aa88(uint *param_1,undefined2 *param_2,short *param_3,ulong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  short *psVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  short *psVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
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
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  short sVar58;
  int iVar57;
  undefined8 uVar52;
  short sVar55;
  short sVar56;
  int iVar59;
  undefined1 auVar53 [16];
  int iVar60;
  undefined1 auVar54 [16];
  short sVar64;
  short sVar65;
  short sVar66;
  ulong uVar61;
  undefined8 uVar63;
  uint uVar68;
  undefined8 uVar67;
  uint uVar69;
  uint uVar70;
  short sVar73;
  short sVar74;
  undefined8 uVar71;
  short sVar75;
  undefined8 uVar72;
  short sVar78;
  short sVar79;
  undefined8 uVar76;
  short sVar80;
  undefined8 uVar77;
  undefined8 local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined2 uStack_178;
  undefined6 local_176;
  undefined2 uStack_170;
  undefined1 *puStack_16e;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined1 *puStack_13e;
  undefined1 local_134 [4];
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined2 uStack_118;
  undefined6 local_116;
  undefined2 uStack_110;
  undefined1 *puStack_10e;
  undefined1 local_104 [4];
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined2 uStack_e8;
  undefined6 local_e6;
  undefined2 uStack_e0;
  undefined1 *puStack_de;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined2 uStack_b8;
  undefined6 local_b6;
  undefined2 uStack_b0;
  undefined1 *puStack_ae;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined1 *puStack_7e;
  ulong uVar62;
  
  uVar8 = *param_1;
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar16 = (uint)LZCOUNT(uVar8 ^ uVar8 << 1 | 1);
  }
  puStack_7e = &DAT_aaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaa;
  local_86 = 0xaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_ae = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaa;
  local_b6 = 0xaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_13e = &DAT_aaaaaaaaaaaaaaaa;
  uStack_140 = 0xaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_148 = 0xaaaa;
  local_146 = 0xaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_16e = &DAT_aaaaaaaaaaaaaaaa;
  uStack_170 = 0xaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaa;
  local_176 = 0xaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_4 < 8) {
    lVar17 = 0;
  }
  else {
    uVar13 = param_4;
    if (0x14 < param_4) {
      uVar13 = 0x15;
    }
    uVar32 = (undefined1)uVar16;
    pauVar24 = (undefined1 (*) [16])(param_1 + 4);
    uVar31 = uVar13 + 1 & 7;
    uVar30 = 8;
    if (uVar31 != 0) {
      uVar30 = uVar31;
    }
    lVar17 = (uVar13 + 1) - uVar30;
    puVar18 = (undefined8 *)((ulong)&local_d0 | 8);
    puVar21 = (undefined8 *)((ulong)&local_a0 | 8);
    lVar15 = lVar17;
    do {
      pauVar1 = pauVar24 + -1;
      auVar50 = *pauVar24;
      lVar15 = lVar15 + -8;
      pauVar24 = pauVar24 + 2;
      auVar49[4] = uVar32;
      auVar49._0_4_ = uVar16;
      auVar49._5_3_ = 0;
      auVar49[8] = uVar32;
      auVar49._9_3_ = 0;
      auVar49[0xc] = uVar32;
      auVar49._13_3_ = 0;
      auVar49 = NEON_ushl(*pauVar1,auVar49,4);
      auVar53[4] = uVar32;
      auVar53._0_4_ = uVar16;
      auVar53._5_3_ = 0;
      auVar53[8] = uVar32;
      auVar53._9_3_ = 0;
      auVar53[0xc] = uVar32;
      auVar53._13_3_ = 0;
      auVar53 = NEON_ushl(auVar50,auVar53,4);
      puVar21[-1] = CONCAT26(auVar49._14_2_,
                             CONCAT24(auVar49._10_2_,CONCAT22(auVar49._6_2_,auVar49._2_2_)));
      *puVar21 = CONCAT26(auVar53._14_2_,
                          CONCAT24(auVar53._10_2_,CONCAT22(auVar53._6_2_,auVar53._2_2_)));
      puVar21 = puVar21 + 2;
      puVar18[-1] = CONCAT26(auVar49._12_2_ >> 1,
                             CONCAT24(auVar49._8_2_ >> 1,
                                      CONCAT22(auVar49._4_2_ >> 1,auVar49._0_2_ >> 1)));
      *puVar18 = CONCAT26(auVar53._12_2_ >> 1,
                          CONCAT24(auVar53._8_2_ >> 1,
                                   CONCAT22(auVar53._4_2_ >> 1,auVar53._0_2_ >> 1)));
      puVar18 = puVar18 + 2;
    } while (lVar15 != 0);
  }
  do {
    if (lVar17 == 0x15) goto LAB_0091b1a0;
    uVar8 = param_1[lVar17] << (ulong)(uVar16 & 0x1f);
    *(short *)((long)&local_a0 + lVar17 * 2) = (short)(uVar8 >> 0x10);
    *(ushort *)((long)&local_d0 + lVar17 * 2) = (ushort)(uVar8 >> 1) & 0x7fff;
    lVar17 = lVar17 + 1;
  } while (param_4 + 1 != lVar17);
  sVar56 = (short)local_a0;
  sVar55 = (short)local_d0;
  puStack_de = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaa;
  local_e6 = 0xaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar57 = param_1[1] << (ulong)(uVar16 & 0x1f);
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_118 = 0xaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_10e = &DAT_aaaaaaaaaaaaaaaa;
  local_116 = 0xaaaaaaaaaaaa;
  uStack_110 = 0xaaaa;
  iVar14 = -iVar57;
  if (-1 < iVar57) {
    iVar14 = iVar57;
  }
  uVar8 = FUN_0065884c(iVar14,(int)(short)local_a0,(int)(short)local_d0);
  uVar16 = -uVar8;
  if (iVar57 < 1) {
    uVar16 = uVar8;
  }
  sVar58 = (short)(uVar16 >> 0x10);
  *param_3 = sVar58;
  uStack_100._0_4_ = CONCAT22(sVar58 >> 4,(undefined2)uStack_100);
  uStack_130._0_4_ =
       CONCAT22((short)((uVar16 >> 4) + ((int)uVar16 >> 0x14) * -0x10000 >> 1),
                (undefined2)uStack_130);
  if (1 < param_4) {
    iVar14 = (int)uVar16 >> 0x10;
    puVar21 = (undefined8 *)local_134;
    puVar18 = (undefined8 *)local_104;
    uVar31 = (ulong)&uStack_100 | 4;
    uVar13 = 2;
    iVar14 = iVar14 * iVar14 + ((int)((uVar16 >> 1 & 0x7fff) * iVar14) >> 0xe);
    uVar8 = iVar14 * 2;
    uVar16 = iVar14 * -2;
    if (-1 < (int)uVar8) {
      uVar16 = uVar8;
    }
    iVar14 = (int)(uVar16 ^ 0x7fffffff) >> 0x10;
    uVar30 = (ulong)&uStack_130 | 4;
    uVar16 = iVar14 * sVar56 + (iVar14 * sVar55 >> 0xf) +
             ((int)(((uVar16 ^ 0x7fffffff) >> 1 & 0x7fff) * (int)sVar56) >> 0xf);
    uVar10 = uVar16 * 2;
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (uint)LZCOUNT((uVar16 ^ uVar10) << 1 | 1);
    }
    uVar10 = uVar10 << (ulong)(uVar8 & 0x1f);
    uVar11 = 1;
    uVar29 = 0;
    do {
      uVar3 = uVar29 + 1;
      if (uVar29 < 7) {
        iVar14 = 0;
        uVar12 = 1;
LAB_0091ae84:
        psVar19 = (short *)((long)&local_a0 + uVar12 * 2);
        psVar23 = (short *)((long)&local_d0 + uVar12 * 2);
        uVar28 = uVar13;
        do {
          lVar17 = uVar28 * 2;
          lVar15 = uVar28 * 2;
          uVar28 = uVar28 - 1;
          iVar57 = (int)*(short *)((long)&uStack_100 + lVar17 + uVar12 * -2);
          iVar14 = iVar14 + (iVar57 * *psVar19 +
                             ((int)*(short *)((long)&uStack_130 + lVar15 + uVar12 * -2) *
                              (int)*psVar19 >> 0xf) + (*psVar23 * iVar57 >> 0xf)) * 2;
          psVar19 = psVar19 + 1;
          psVar23 = psVar23 + 1;
        } while (uVar12 != uVar28);
      }
      else {
        uVar32 = 0;
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar28 = uVar11 & 0xfffffffffffffff8;
        uVar12 = uVar3 & 0xfffffffffffffff8 | 1;
        puVar20 = (undefined8 *)((ulong)&local_a0 | 10);
        puVar22 = puVar18;
        puVar25 = (undefined8 *)((ulong)&local_d0 | 10);
        puVar27 = puVar21;
        auVar49 = ZEXT816(0);
        do {
          puVar5 = puVar22 + -1;
          uVar48 = *puVar22;
          uVar28 = uVar28 - 8;
          puVar2 = puVar27 + -1;
          uVar63 = *puVar27;
          puVar27 = puVar27 + -2;
          uVar71 = puVar20[-1];
          uVar76 = *puVar20;
          puVar22 = puVar22 + -2;
          uVar48 = NEON_rev64(uVar48,2);
          uVar52 = NEON_rev64(*puVar5,2);
          puVar20 = puVar20 + 2;
          uVar63 = NEON_rev64(uVar63,2);
          uVar67 = NEON_rev64(*puVar2,2);
          sVar55 = (short)((ulong)uVar48 >> 0x10);
          sVar56 = (short)((ulong)uVar48 >> 0x20);
          sVar58 = (short)((ulong)uVar48 >> 0x30);
          sVar73 = (short)((ulong)uVar71 >> 0x10);
          sVar74 = (short)((ulong)uVar71 >> 0x20);
          sVar75 = (short)((ulong)uVar71 >> 0x30);
          sVar64 = (short)((ulong)uVar52 >> 0x10);
          sVar65 = (short)((ulong)uVar52 >> 0x20);
          sVar66 = (short)((ulong)uVar52 >> 0x30);
          sVar78 = (short)((ulong)uVar76 >> 0x10);
          sVar79 = (short)((ulong)uVar76 >> 0x20);
          sVar80 = (short)((ulong)uVar76 >> 0x30);
          uVar72 = puVar25[-1];
          uVar77 = *puVar25;
          puVar25 = puVar25 + 2;
          iVar14 = ((int)(short)uVar48 * (int)(short)uVar71 +
                    ((int)(short)uVar63 * (int)(short)uVar71 >> 0xf) +
                   ((int)(short)uVar72 * (int)(short)uVar48 >> 0xf)) * 2 +
                   CONCAT13(uVar35,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
          uVar32 = (undefined1)iVar14;
          uVar33 = (undefined1)((uint)iVar14 >> 8);
          uVar34 = (undefined1)((uint)iVar14 >> 0x10);
          uVar35 = (undefined1)((uint)iVar14 >> 0x18);
          iVar57 = ((int)sVar55 * (int)sVar73 +
                    ((int)(short)((ulong)uVar63 >> 0x10) * (int)sVar73 >> 0xf) +
                   ((int)(short)((ulong)uVar72 >> 0x10) * (int)sVar55 >> 0xf)) * 2 +
                   CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
          uVar36 = (undefined1)iVar57;
          uVar37 = (undefined1)((uint)iVar57 >> 8);
          uVar38 = (undefined1)((uint)iVar57 >> 0x10);
          uVar39 = (undefined1)((uint)iVar57 >> 0x18);
          iVar59 = ((int)sVar56 * (int)sVar74 +
                    ((int)(short)((ulong)uVar63 >> 0x20) * (int)sVar74 >> 0xf) +
                   ((int)(short)((ulong)uVar72 >> 0x20) * (int)sVar56 >> 0xf)) * 2 +
                   CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
          uVar40 = (undefined1)iVar59;
          uVar41 = (undefined1)((uint)iVar59 >> 8);
          uVar42 = (undefined1)((uint)iVar59 >> 0x10);
          uVar43 = (undefined1)((uint)iVar59 >> 0x18);
          iVar60 = ((int)sVar58 * (int)sVar75 +
                    ((int)(short)((ulong)uVar63 >> 0x30) * (int)sVar75 >> 0xf) +
                   ((int)(short)((ulong)uVar72 >> 0x30) * (int)sVar58 >> 0xf)) * 2 +
                   CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
          uVar44 = (undefined1)iVar60;
          uVar45 = (undefined1)((uint)iVar60 >> 8);
          uVar46 = (undefined1)((uint)iVar60 >> 0x10);
          uVar47 = (undefined1)((uint)iVar60 >> 0x18);
          auVar50._0_4_ =
               ((int)(short)uVar52 * (int)(short)uVar76 +
                ((int)(short)uVar67 * (int)(short)uVar76 >> 0xf) +
               ((int)(short)uVar77 * (int)(short)uVar52 >> 0xf)) * 2 + auVar49._0_4_;
          auVar50._4_4_ =
               ((int)sVar64 * (int)sVar78 +
                ((int)(short)((ulong)uVar67 >> 0x10) * (int)sVar78 >> 0xf) +
               ((int)(short)((ulong)uVar77 >> 0x10) * (int)sVar64 >> 0xf)) * 2 + auVar49._4_4_;
          auVar50._8_4_ =
               ((int)sVar65 * (int)sVar79 +
                ((int)(short)((ulong)uVar67 >> 0x20) * (int)sVar79 >> 0xf) +
               ((int)(short)((ulong)uVar77 >> 0x20) * (int)sVar65 >> 0xf)) * 2 + auVar49._8_4_;
          auVar50._12_4_ =
               ((int)sVar66 * (int)sVar80 +
                ((int)(short)((ulong)uVar67 >> 0x30) * (int)sVar80 >> 0xf) +
               ((int)(short)((ulong)uVar77 >> 0x30) * (int)sVar66 >> 0xf)) * 2 + auVar49._12_4_;
          auVar49 = auVar50;
        } while (uVar28 != 0);
        iVar14 = auVar50._0_4_ + iVar14 + auVar50._4_4_ + iVar57 +
                 auVar50._8_4_ + iVar59 + auVar50._12_4_ + iVar60;
        if (uVar3 != (uVar3 & 0xfffffffffffffff8)) goto LAB_0091ae84;
      }
      if (uVar29 == 0x13) goto LAB_0091b1a0;
      iVar14 = (uint)*(ushort *)((long)&local_a0 + uVar13 * 2) * 0x10000 + iVar14 * 0x10 +
               *(short *)((long)&local_d0 + uVar13 * 2) * 2;
      iVar57 = -iVar14;
      if (-1 < iVar14) {
        iVar57 = iVar14;
      }
      uVar9 = FUN_0065884c(iVar57,uVar10 >> 0x10);
      uVar16 = -uVar9;
      if (iVar14 < 1) {
        uVar16 = uVar9;
      }
      iVar14 = 0;
      if (uVar16 != 0) {
        iVar14 = (int)LZCOUNT(uVar16 ^ uVar16 << 1 | 1);
      }
      uVar9 = 0x7fffffff;
      if ((int)uVar16 < 1) {
        uVar9 = 0x80000000;
      }
      uVar4 = uVar16 << (ulong)(uVar8 & 0x1f);
      if (iVar14 < (short)uVar8 && uVar16 != 0) {
        uVar4 = uVar9;
      }
      iVar14 = (int)uVar4 >> 0x10;
      sVar55 = (short)(uVar4 >> 0x10);
      param_3[uVar13 - 1] = sVar55;
      if (iVar14 - 0x7fefU < 0xffff0023) {
        return 0;
      }
      uVar16 = uVar4 >> 1 & 0x7fff;
      if (uVar29 < 3) {
        uVar28 = 1;
LAB_0091b034:
        lVar15 = uVar28 * 2;
        lVar17 = 0;
        psVar19 = (short *)(uVar30 + uVar28 * -2);
        psVar23 = (short *)(uVar31 + uVar28 * -2);
        do {
          sVar56 = *(short *)((long)&uStack_100 + lVar17 * 2 + lVar15);
          uVar9 = (int)*(short *)((long)&uStack_130 + lVar17 * 2 + lVar15) + iVar14 * *psVar23 +
                  ((int)(uVar16 * (int)*psVar23) >> 0xf) + (iVar14 * *psVar19 >> 0xf);
          *(ushort *)((long)&local_190 + lVar17 * 2 + lVar15) = (ushort)uVar9 & 0x7fff;
          *(short *)((long)&local_160 + lVar17 * 2 + lVar15) = sVar56 + (short)(uVar9 >> 0xf);
          lVar17 = lVar17 + 1;
          psVar19 = psVar19 + -1;
          psVar23 = psVar23 + -1;
        } while (uVar13 - uVar28 != lVar17);
      }
      else {
        lVar17 = 0;
        uVar12 = uVar11 & 0xfffffffffffffffc;
        uVar28 = uVar3 & 0xfffffffffffffffc | 1;
        puVar26 = (ulong *)((ulong)&local_190 | 2);
        puVar20 = (undefined8 *)((ulong)&local_160 | 2);
        puVar25 = (undefined8 *)((ulong)&uStack_100 | 2);
        puVar22 = (undefined8 *)((ulong)&uStack_130 | 2);
        do {
          puVar27 = (undefined8 *)((long)puVar18 + lVar17);
          puVar5 = (undefined8 *)((long)puVar21 + lVar17);
          uVar12 = uVar12 - 4;
          uVar63 = *puVar22;
          lVar17 = lVar17 + -8;
          uVar48 = NEON_rev64(*puVar27,2);
          uVar52 = NEON_rev64(*puVar5,2);
          iVar57 = (int)(short)((ulong)uVar48 >> 0x10);
          iVar59 = (int)(short)((ulong)uVar48 >> 0x20);
          iVar60 = (int)(short)((ulong)uVar48 >> 0x30);
          uVar9 = (short)uVar48 * iVar14 + (int)(short)uVar63 +
                  ((int)((int)(short)uVar48 * uVar16) >> 0xf) + ((short)uVar52 * iVar14 >> 0xf);
          uVar68 = iVar57 * iVar14 + (int)(short)((ulong)uVar63 >> 0x10) +
                   ((int)(iVar57 * uVar16) >> 0xf) +
                   ((short)((ulong)uVar52 >> 0x10) * iVar14 >> 0xf);
          uVar69 = iVar59 * iVar14 + (int)(short)((ulong)uVar63 >> 0x20) +
                   ((int)(iVar59 * uVar16) >> 0xf) +
                   ((short)((ulong)uVar52 >> 0x20) * iVar14 >> 0xf);
          uVar70 = iVar60 * iVar14 + (int)(short)((ulong)uVar63 >> 0x30) +
                   ((int)(iVar60 * uVar16) >> 0xf) +
                   ((short)((ulong)uVar52 >> 0x30) * iVar14 >> 0xf);
          uVar48 = *puVar25;
          uVar61 = CONCAT62((int6)(((ulong)CONCAT22((short)uVar70,(short)uVar69) << 0x20) >> 0x10),
                            (short)uVar9) & 0xffffffffffff7fff;
          uVar62 = CONCAT44((int)(uVar61 >> 0x20),CONCAT22((short)uVar68,(short)uVar61)) &
                   0xffffffff7fffffff;
          *puVar20 = CONCAT26((short)((ulong)uVar48 >> 0x30) + (short)(uVar70 >> 0xf),
                              CONCAT24((short)((ulong)uVar48 >> 0x20) + (short)(uVar69 >> 0xf),
                                       CONCAT22((short)((ulong)uVar48 >> 0x10) +
                                                (short)(uVar68 >> 0xf),
                                                (short)uVar48 + (short)(uVar9 >> 0xf))));
          *puVar26 = CONCAT26((short)(uVar62 >> 0x30),CONCAT24((short)(uVar61 >> 0x20),(int)uVar62))
                     & 0x7fff7fffffffffff;
          puVar26 = puVar26 + 1;
          puVar20 = puVar20 + 1;
          puVar25 = puVar25 + 1;
          puVar22 = puVar22 + 1;
        } while (uVar12 != 0);
        if (uVar3 != (uVar3 & 0xfffffffffffffffc)) goto LAB_0091b034;
      }
      *(short *)((long)&local_160 + uVar13 * 2) = sVar55 >> 4;
      *(short *)((long)&local_190 + uVar13 * 2) =
           (short)((uVar4 >> 4) + ((int)uVar4 >> 0x14) * -0x10000 >> 1);
      memcpy((void *)((ulong)&uStack_100 | 2),(void *)((ulong)&local_160 | 2),uVar29 * 2 + 4);
      memcpy((void *)((ulong)&uStack_130 | 2),(void *)((ulong)&local_190 | 2),uVar29 * 2 + 4);
      uVar13 = uVar13 + 1;
      puVar21 = (undefined8 *)((long)puVar21 + 2);
      puVar18 = (undefined8 *)((long)puVar18 + 2);
      uVar30 = uVar30 + 2;
      uVar31 = uVar31 + 2;
      iVar14 = iVar14 * iVar14 + ((int)(iVar14 * uVar16) >> 0xe);
      uVar9 = iVar14 * 2;
      uVar16 = iVar14 * -2;
      if (-1 < (int)uVar9) {
        uVar16 = uVar9;
      }
      iVar14 = (int)(uVar16 ^ 0x7fffffff) >> 0x10;
      iVar14 = iVar14 * ((int)uVar10 >> 0x10) + ((int)(iVar14 * (uVar10 >> 1 & 0x7fff)) >> 0xf) +
               ((int)(((uVar16 ^ 0x7fffffff) >> 1 & 0x7fff) * ((int)uVar10 >> 0x10)) >> 0xf);
      uVar16 = 0;
      if (iVar14 != 0) {
        uVar16 = (int)LZCOUNT(iVar14 * 2 ^ iVar14 >> 0x1e) - 1;
      }
      uVar10 = iVar14 * 2 << (ulong)(uVar16 & 0x1f);
      uVar8 = uVar16 + uVar8;
      bVar7 = uVar29 != param_4 - 2;
      uVar11 = uVar11 + 1;
      uVar29 = uVar29 + 1;
    } while (bVar7);
  }
  *param_2 = 0x1000;
  if (param_4 != 0) {
    if (param_4 < 9) {
      lVar17 = 1;
    }
    else {
      uVar13 = param_4 - 1;
      if (0x13 < uVar13) {
        uVar13 = 0x14;
      }
      uVar31 = uVar13 + 1 & 7;
      uVar30 = 8;
      if (uVar31 != 0) {
        uVar30 = uVar31;
      }
      lVar15 = (uVar13 + 1) - uVar30;
      puVar18 = (undefined8 *)((ulong)&uStack_100 | 10);
      puVar20 = (undefined8 *)((ulong)&uStack_130 | 10);
      lVar17 = lVar15 + 1;
      puVar21 = (undefined8 *)(param_2 + 5);
      do {
        uVar48 = puVar18[-1];
        uVar52 = *puVar18;
        lVar15 = lVar15 + -8;
        uVar63 = puVar20[-1];
        uVar67 = *puVar20;
        puVar18 = puVar18 + 2;
        puVar20 = puVar20 + 2;
        auVar51._0_8_ =
             CONCAT44((short)((ulong)uVar63 >> 0x10) * 4 +
                      (uint)(ushort)((ulong)uVar48 >> 0x10) * 0x20000,
                      (short)uVar63 * 4 + (uint)(ushort)uVar48 * 0x20000);
        auVar51._8_4_ =
             (short)((ulong)uVar63 >> 0x20) * 4 + (uint)(ushort)((ulong)uVar48 >> 0x20) * 0x20000;
        auVar51._12_4_ =
             (short)((ulong)uVar63 >> 0x30) * 4 + (uint)(ushort)((ulong)uVar48 >> 0x30) * 0x20000;
        auVar54._0_8_ =
             CONCAT44((short)((ulong)uVar67 >> 0x10) * 4 +
                      (uint)(ushort)((ulong)uVar52 >> 0x10) * 0x20000,
                      (short)uVar67 * 4 + (uint)(ushort)uVar52 * 0x20000);
        auVar54._8_4_ =
             (short)((ulong)uVar67 >> 0x20) * 4 + (uint)(ushort)((ulong)uVar52 >> 0x20) * 0x20000;
        auVar54._12_4_ =
             (short)((ulong)uVar67 >> 0x30) * 4 + (uint)(ushort)((ulong)uVar52 >> 0x30) * 0x20000;
        uVar48 = NEON_raddhn(auVar51._0_8_,auVar51,ZEXT216(0),4);
        uVar52 = NEON_raddhn(auVar54._0_8_,auVar54,ZEXT216(0),4);
        puVar21[-1] = uVar48;
        *puVar21 = uVar52;
        puVar21 = puVar21 + 2;
      } while (lVar15 != 0);
    }
    do {
      if (lVar17 == 0x15) {
LAB_0091b1a0:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x91b1a4);
        (*pcVar6)();
      }
      param_2[lVar17] =
           (short)((uint)*(ushort *)((long)&uStack_100 + lVar17 * 2) * 0x20000 +
                   *(short *)((long)&uStack_130 + lVar17 * 2) * 4 + 0x8000 >> 0x10);
      lVar17 = lVar17 + 1;
    } while (param_4 + 1 != lVar17);
  }
  return 1;
}


// ===== 0091b1a4  FUN_0091b1a4 =====

void FUN_0091b1a4(long param_1,undefined2 *param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  short *psVar8;
  short *psVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar20;
  undefined8 uVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar25;
  undefined8 uVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  
  if (param_5 != 0) {
    lVar10 = 0;
    pauVar11 = (undefined1 (*) [16])(param_1 + -0xe);
    lVar12 = param_1 + -6;
    do {
      if (param_4 == 0) {
        uVar13 = 0;
      }
      else {
        if (param_4 < 4) {
          iVar14 = 0;
          uVar6 = 0;
LAB_0091b2e8:
          lVar5 = param_4 - uVar6;
          psVar8 = (short *)(param_1 + uVar6 * -2);
          psVar9 = (short *)(param_3 + uVar6 * 2);
          do {
            lVar5 = lVar5 + -1;
            iVar14 = iVar14 + (int)*psVar8 * (int)*psVar9;
            psVar8 = psVar8 + -1;
            psVar9 = psVar9 + 1;
          } while (lVar5 != 0);
        }
        else if (param_4 < 0x10) {
          uVar2 = 0;
          iVar14 = 0;
LAB_0091b2a4:
          iVar16 = 0;
          iVar17 = 0;
          iVar15 = 0;
          lVar5 = uVar2 - (param_4 & 0xfffffffffffffffc);
          puVar4 = (undefined8 *)(lVar12 + uVar2 * -2);
          puVar7 = (undefined8 *)(param_3 + uVar2 * 2);
          do {
            lVar5 = lVar5 + 4;
            uVar24 = *puVar7;
            uVar19 = NEON_rev64(*puVar4,2);
            iVar14 = iVar14 + (int)(short)uVar19 * (int)(short)uVar24;
            iVar15 = iVar15 + (int)(short)((ulong)uVar19 >> 0x10) *
                              (int)(short)((ulong)uVar24 >> 0x10);
            iVar16 = iVar16 + (int)(short)((ulong)uVar19 >> 0x20) *
                              (int)(short)((ulong)uVar24 >> 0x20);
            iVar17 = iVar17 + (int)(short)((ulong)uVar19 >> 0x30) *
                              (int)(short)((ulong)uVar24 >> 0x30);
            puVar4 = puVar4 + -1;
            puVar7 = puVar7 + 1;
          } while (lVar5 != 0);
          iVar14 = iVar14 + iVar15 + iVar16 + iVar17;
          uVar6 = param_4 & 0xfffffffffffffffc;
          if (param_4 != (param_4 & 0xfffffffffffffffc)) goto LAB_0091b2e8;
        }
        else {
          iVar14 = 0;
          iVar15 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          puVar4 = (undefined8 *)(param_3 + 0x10);
          iVar23 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar31 = 0;
          uVar2 = param_4 & 0xfffffffffffffff0;
          pauVar3 = pauVar11;
          do {
            pauVar1 = pauVar3 + -1;
            auVar32 = *pauVar3;
            uVar2 = uVar2 - 0x10;
            uVar24 = puVar4[-1];
            uVar19 = puVar4[-2];
            uVar35 = puVar4[1];
            uVar34 = *puVar4;
            pauVar3 = pauVar3 + -2;
            puVar4 = puVar4 + 4;
            auVar32 = NEON_rev64(auVar32,2);
            auVar33 = NEON_rev64(*pauVar1,2);
            auVar32 = NEON_ext(auVar32,auVar32,8,1);
            auVar33 = NEON_ext(auVar33,auVar33,8,1);
            iVar23 = iVar23 + (int)auVar32._8_2_ * (int)(short)uVar24;
            iVar25 = iVar25 + (int)auVar32._10_2_ * (int)(short)((ulong)uVar24 >> 0x10);
            iVar26 = iVar26 + (int)auVar32._12_2_ * (int)(short)((ulong)uVar24 >> 0x20);
            iVar27 = iVar27 + (int)auVar32._14_2_ * (int)(short)((ulong)uVar24 >> 0x30);
            iVar18 = iVar18 + (int)auVar32._0_2_ * (int)(short)uVar19;
            iVar20 = iVar20 + (int)auVar32._2_2_ * (int)(short)((ulong)uVar19 >> 0x10);
            iVar21 = iVar21 + (int)auVar32._4_2_ * (int)(short)((ulong)uVar19 >> 0x20);
            iVar22 = iVar22 + (int)auVar32._6_2_ * (int)(short)((ulong)uVar19 >> 0x30);
            iVar14 = iVar14 + (int)auVar33._8_2_ * (int)(short)uVar35;
            iVar15 = iVar15 + (int)auVar33._10_2_ * (int)(short)((ulong)uVar35 >> 0x10);
            iVar16 = iVar16 + (int)auVar33._12_2_ * (int)(short)((ulong)uVar35 >> 0x20);
            iVar17 = iVar17 + (int)auVar33._14_2_ * (int)(short)((ulong)uVar35 >> 0x30);
            iVar28 = iVar28 + (int)auVar33._0_2_ * (int)(short)uVar34;
            iVar29 = iVar29 + (int)auVar33._2_2_ * (int)(short)((ulong)uVar34 >> 0x10);
            iVar30 = iVar30 + (int)auVar33._4_2_ * (int)(short)((ulong)uVar34 >> 0x20);
            iVar31 = iVar31 + (int)auVar33._6_2_ * (int)(short)((ulong)uVar34 >> 0x30);
          } while (uVar2 != 0);
          iVar14 = iVar28 + iVar18 + iVar14 + iVar23 + iVar29 + iVar20 + iVar15 + iVar25 +
                   iVar30 + iVar21 + iVar16 + iVar26 + iVar31 + iVar22 + iVar17 + iVar27;
          if (param_4 != (param_4 & 0xfffffffffffffff0)) {
            uVar2 = param_4 & 0xfffffffffffffff0;
            uVar6 = param_4 & 0xfffffffffffffff0;
            if ((param_4 & 0xc) == 0) goto LAB_0091b2e8;
            goto LAB_0091b2a4;
          }
        }
        if (iVar14 < -0x7ffffff) {
          iVar14 = -0x8000000;
        }
        if (0x7fff7fe < iVar14) {
          iVar14 = 0x7fff7ff;
        }
        uVar13 = (undefined2)(iVar14 + 0x800U >> 0xc);
      }
      lVar10 = lVar10 + 1;
      pauVar11 = (undefined1 (*) [16])(*pauVar11 + 2);
      lVar12 = lVar12 + 2;
      param_1 = param_1 + 2;
      *param_2 = uVar13;
      param_2 = param_2 + 1;
    } while (lVar10 != param_5);
  }
  return;
}


// ===== 0091b330  FUN_0091b330 =====

ulong FUN_0091b330(long param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  short *psVar3;
  short *psVar18;
  ulong uVar33;
  short *psVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  undefined8 *puVar42;
  short *psVar43;
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  long lVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  short sVar55;
  long lVar56;
  long lVar58;
  undefined1 auVar57 [16];
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined2 uVar63;
  undefined2 uVar64;
  undefined2 uVar65;
  undefined2 uVar66;
  long lVar67;
  undefined1 auVar68 [16];
  long lVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  short sVar73;
  long lVar74;
  long lVar75;
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
  undefined8 uStack_58;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  
  uVar33 = param_3 - 4;
  if (param_3 < 4) {
    uVar33 = 0;
    uVar36 = 0;
    uVar37 = param_3;
    if (param_3 == 0) goto LAB_0091b79c;
  }
  else {
    if (uVar33 < 0xc) {
      lVar39 = 0;
      uVar33 = 0;
LAB_0091b5d8:
      auVar45._4_4_ = param_4;
      auVar45._0_4_ = param_4;
      auVar45._8_4_ = param_4;
      auVar45._12_4_ = param_4;
      uVar36 = lVar39 + 3;
      auVar46 = NEON_neg(auVar45,4);
      puVar38 = (undefined8 *)(param_1 + lVar39 * 2);
      puVar42 = (undefined8 *)(param_2 + lVar39 * 2);
      do {
        uVar48 = *puVar38;
        uVar36 = uVar36 + 4;
        uVar52 = *puVar42;
        auVar49._0_4_ = (int)(short)uVar52 * (int)(short)uVar48;
        auVar49._4_4_ = (int)(short)((ulong)uVar52 >> 0x10) * (int)(short)((ulong)uVar48 >> 0x10);
        auVar49._8_4_ = (int)(short)((ulong)uVar52 >> 0x20) * (int)(short)((ulong)uVar48 >> 0x20);
        auVar49._12_4_ = (int)(short)((ulong)uVar52 >> 0x30) * (int)(short)((ulong)uVar48 >> 0x30);
        auVar50 = NEON_sshl(auVar49,auVar46,4);
        lVar39 = NEON_saddlv(auVar50,4);
        uVar33 = lVar39 + uVar33;
        puVar38 = puVar38 + 1;
        puVar42 = puVar42 + 1;
      } while (uVar36 < param_3);
    }
    else {
      uVar36 = (uVar33 >> 2) + 1;
      if (uVar33 < 0x3c) {
        uVar37 = 0;
        uVar33 = 0;
LAB_0091b548:
        auVar91._4_4_ = param_4;
        auVar91._0_4_ = param_4;
        auVar91._8_4_ = param_4;
        auVar91._12_4_ = param_4;
        lVar53 = 0;
        lVar54 = 0;
        psVar34 = (short *)(param_1 + uVar37 * 8);
        psVar43 = (short *)(param_2 + uVar37 * 8);
        auVar46 = NEON_neg(auVar91,4);
        lVar51 = 0;
        uVar44 = uVar36 & 0x7ffffffffffffffc;
        lVar39 = uVar44 << 2;
        lVar41 = uVar37 - uVar44;
        do {
          sVar55 = *psVar34;
          psVar3 = psVar34 + 1;
          psVar4 = psVar34 + 2;
          psVar5 = psVar34 + 3;
          psVar6 = psVar34 + 4;
          psVar7 = psVar34 + 5;
          psVar8 = psVar34 + 6;
          psVar9 = psVar34 + 7;
          psVar10 = psVar34 + 8;
          psVar11 = psVar34 + 9;
          psVar12 = psVar34 + 10;
          psVar13 = psVar34 + 0xb;
          psVar14 = psVar34 + 0xc;
          psVar15 = psVar34 + 0xd;
          psVar16 = psVar34 + 0xe;
          psVar17 = psVar34 + 0xf;
          psVar34 = psVar34 + 0x10;
          lVar41 = lVar41 + 4;
          sVar73 = *psVar43;
          psVar18 = psVar43 + 1;
          psVar19 = psVar43 + 2;
          psVar20 = psVar43 + 3;
          psVar21 = psVar43 + 4;
          psVar22 = psVar43 + 5;
          psVar23 = psVar43 + 6;
          psVar24 = psVar43 + 7;
          psVar25 = psVar43 + 8;
          psVar26 = psVar43 + 9;
          psVar27 = psVar43 + 10;
          psVar28 = psVar43 + 0xb;
          psVar29 = psVar43 + 0xc;
          psVar30 = psVar43 + 0xd;
          psVar31 = psVar43 + 0xe;
          psVar32 = psVar43 + 0xf;
          psVar43 = psVar43 + 0x10;
          auVar68._0_4_ = (int)sVar73 * (int)sVar55;
          auVar68._4_4_ = (int)*psVar21 * (int)*psVar6;
          auVar68._8_4_ = (int)*psVar25 * (int)*psVar10;
          auVar68._12_4_ = (int)*psVar29 * (int)*psVar14;
          auVar82._0_4_ = (int)*psVar18 * (int)*psVar3;
          auVar82._4_4_ = (int)*psVar22 * (int)*psVar7;
          auVar82._8_4_ = (int)*psVar26 * (int)*psVar11;
          auVar82._12_4_ = (int)*psVar30 * (int)*psVar15;
          auVar85._0_4_ = (int)*psVar19 * (int)*psVar4;
          auVar85._4_4_ = (int)*psVar23 * (int)*psVar8;
          auVar85._8_4_ = (int)*psVar27 * (int)*psVar12;
          auVar85._12_4_ = (int)*psVar31 * (int)*psVar16;
          auVar93._0_4_ = (int)*psVar20 * (int)*psVar5;
          auVar93._4_4_ = (int)*psVar24 * (int)*psVar9;
          auVar93._8_4_ = (int)*psVar28 * (int)*psVar13;
          auVar93._12_4_ = (int)*psVar32 * (int)*psVar17;
          auVar84 = NEON_sshl(auVar68,auVar46,4);
          auVar80 = NEON_sshl(auVar85,auVar46,4);
          auVar50 = NEON_sshl(auVar93,auVar46,4);
          auVar86 = NEON_sshl(auVar82,auVar46,4);
          lVar53 = lVar53 + auVar84._8_4_ + (long)auVar86._8_4_ + (long)auVar80._8_4_ +
                   (long)auVar50._8_4_;
          lVar54 = lVar54 + auVar84._12_4_ + (long)auVar86._12_4_ + (long)auVar80._12_4_ +
                   (long)auVar50._12_4_;
          uVar33 = uVar33 + (long)auVar84._0_4_ + (long)auVar86._0_4_ + (long)auVar80._0_4_ +
                   (long)auVar50._0_4_;
          lVar51 = lVar51 + auVar84._4_4_ + (long)auVar86._4_4_ + (long)auVar80._4_4_ +
                   (long)auVar50._4_4_;
        } while (lVar41 != 0);
        uVar33 = uVar33 + lVar53 + lVar51 + lVar54;
        if (uVar36 != uVar44) goto LAB_0091b5d8;
      }
      else {
        auVar46._4_4_ = param_4;
        auVar46._0_4_ = param_4;
        auVar46._8_4_ = param_4;
        auVar46._12_4_ = param_4;
        lVar41 = 0;
        lVar51 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar56 = 0;
        lVar58 = 0;
        uVar37 = uVar36 & 0x7ffffffffffffff0;
        lVar59 = 0;
        lVar60 = 0;
        lVar61 = 0;
        lVar62 = 0;
        uVar63 = 0;
        uVar64 = 0;
        uVar65 = 0;
        uVar66 = 0;
        lVar39 = 0;
        lVar67 = 0;
        lVar69 = 0;
        lVar74 = 0;
        lVar75 = 0;
        auVar46 = NEON_neg(auVar46,4);
        uVar33 = uVar36 & 0x7ffffffffffffff0;
        psVar34 = (short *)(param_1 + 0x40);
        psVar43 = (short *)(param_2 + 0x40);
        do {
          uVar33 = uVar33 - 0x10;
          auVar88._0_4_ = (int)psVar43[0x10] * (int)psVar34[0x10];
          auVar88._4_4_ = (int)psVar43[0x14] * (int)psVar34[0x14];
          auVar88._8_4_ = (int)psVar43[0x18] * (int)psVar34[0x18];
          auVar88._12_4_ = (int)psVar43[0x1c] * (int)psVar34[0x1c];
          auVar92._0_4_ = (int)psVar43[-0x10] * (int)psVar34[-0x10];
          auVar92._4_4_ = (int)psVar43[-0xc] * (int)psVar34[-0xc];
          auVar92._8_4_ = (int)psVar43[-8] * (int)psVar34[-8];
          auVar92._12_4_ = (int)psVar43[-4] * (int)psVar34[-4];
          auVar70._0_4_ = (int)psVar43[-0x20] * (int)psVar34[-0x20];
          auVar70._4_4_ = (int)psVar43[-0x1c] * (int)psVar34[-0x1c];
          auVar70._8_4_ = (int)psVar43[-0x18] * (int)psVar34[-0x18];
          auVar70._12_4_ = (int)psVar43[-0x14] * (int)psVar34[-0x14];
          auVar87._0_4_ = (int)psVar43[1] * (int)psVar34[1];
          auVar87._4_4_ = (int)psVar43[5] * (int)psVar34[5];
          auVar87._8_4_ = (int)psVar43[9] * (int)psVar34[9];
          auVar87._12_4_ = (int)psVar43[0xd] * (int)psVar34[0xd];
          auVar89._0_4_ = (int)psVar43[0x12] * (int)psVar34[0x12];
          auVar89._4_4_ = (int)psVar43[0x16] * (int)psVar34[0x16];
          auVar89._8_4_ = (int)psVar43[0x1a] * (int)psVar34[0x1a];
          auVar89._12_4_ = (int)psVar43[0x1e] * (int)psVar34[0x1e];
          auVar91 = NEON_sshl(auVar88,auVar46,4);
          auVar90._0_4_ = (int)psVar43[-0x1e] * (int)psVar34[-0x1e];
          auVar90._4_4_ = (int)psVar43[-0x1a] * (int)psVar34[-0x1a];
          auVar90._8_4_ = (int)psVar43[-0x16] * (int)psVar34[-0x16];
          auVar90._12_4_ = (int)psVar43[-0x12] * (int)psVar34[-0x12];
          auVar93 = NEON_sshl(auVar92,auVar46,4);
          auVar88 = NEON_sshl(auVar70,auVar46,4);
          auVar81._4_4_ = (int)psVar43[4] * (int)psVar34[4];
          auVar81._0_4_ = (int)*psVar43 * (int)*psVar34;
          auVar81._8_8_ = uStack_58;
          auVar50._4_2_ = (short)((int)psVar43[0x15] * (int)psVar34[0x15]);
          auVar50._0_4_ = (int)psVar43[0x11] * (int)psVar34[0x11];
          auVar50._6_2_ = (short)((uint)((int)psVar43[0x15] * (int)psVar34[0x15]) >> 0x10);
          auVar50._8_4_ = (int)psVar43[0x19] * (int)psVar34[0x19];
          auVar50._12_4_ = (int)psVar43[0x1d] * (int)psVar34[0x1d];
          auVar70 = NEON_sshl(auVar50,auVar46,4);
          auVar72._4_4_ = (int)psVar43[-0xb] * (int)psVar34[-0xb];
          auVar72._0_4_ = (int)psVar43[-0xf] * (int)psVar34[-0xf];
          auVar72._8_4_ = (int)psVar43[-7] * (int)psVar34[-7];
          auVar72._12_4_ = (int)psVar43[-3] * (int)psVar34[-3];
          auVar72 = NEON_sshl(auVar72,auVar46,4);
          auVar86._4_4_ = (int)psVar43[-0x1b] * (int)psVar34[-0x1b];
          auVar86._0_4_ = (int)psVar43[-0x1f] * (int)psVar34[-0x1f];
          auVar86._8_4_ = (int)psVar43[-0x17] * (int)psVar34[-0x17];
          auVar86._12_4_ = (int)psVar43[-0x13] * (int)psVar34[-0x13];
          auVar86 = NEON_sshl(auVar86,auVar46,4);
          auVar92 = NEON_sshl(auVar81,auVar46,4);
          auVar94._0_4_ = (int)psVar43[2] * (int)psVar34[2];
          auVar94._4_4_ = (int)psVar43[6] * (int)psVar34[6];
          auVar94._8_4_ = (int)psVar43[10] * (int)psVar34[10];
          auVar94._12_4_ = (int)psVar43[0xe] * (int)psVar34[0xe];
          auVar87 = NEON_sshl(auVar87,auVar46,4);
          auVar71._0_4_ = (int)psVar43[0x13] * (int)psVar34[0x13];
          auVar71._4_4_ = (int)psVar43[0x17] * (int)psVar34[0x17];
          auVar71._8_4_ = (int)psVar43[0x1b] * (int)psVar34[0x1b];
          auVar71._12_4_ = (int)psVar43[0x1f] * (int)psVar34[0x1f];
          auVar76._0_4_ = (int)psVar43[3] * (int)psVar34[3];
          auVar76._4_4_ = (int)psVar43[7] * (int)psVar34[7];
          auVar76._8_4_ = (int)psVar43[0xb] * (int)psVar34[0xb];
          auVar76._12_4_ = (int)psVar43[0xf] * (int)psVar34[0xf];
          auVar90 = NEON_sshl(auVar90,auVar46,4);
          auVar84._4_4_ = (int)psVar43[-10] * (int)psVar34[-10];
          auVar84._0_4_ = (int)psVar43[-0xe] * (int)psVar34[-0xe];
          auVar84._8_4_ = (int)psVar43[-6] * (int)psVar34[-6];
          auVar84._12_4_ = (int)psVar43[-2] * (int)psVar34[-2];
          auVar50 = NEON_sshl(auVar84,auVar46,4);
          auVar94 = NEON_sshl(auVar94,auVar46,4);
          auVar89 = NEON_sshl(auVar89,auVar46,4);
          auVar78._4_2_ = (short)((int)psVar43[-9] * (int)psVar34[-9]);
          auVar78._0_4_ = (int)psVar43[-0xd] * (int)psVar34[-0xd];
          auVar78._6_2_ = (short)((uint)((int)psVar43[-9] * (int)psVar34[-9]) >> 0x10);
          auVar78._8_2_ = (short)((int)psVar43[-5] * (int)psVar34[-5]);
          auVar78._10_2_ = (short)((uint)((int)psVar43[-5] * (int)psVar34[-5]) >> 0x10);
          auVar78._12_2_ = (short)((int)psVar43[-1] * (int)psVar34[-1]);
          auVar78._14_2_ = (short)((uint)((int)psVar43[-1] * (int)psVar34[-1]) >> 0x10);
          auVar78 = NEON_sshl(auVar78,auVar46,4);
          auVar80._4_4_ = (int)psVar43[-0x19] * (int)psVar34[-0x19];
          auVar80._0_4_ = (int)psVar43[-0x1d] * (int)psVar34[-0x1d];
          auVar80._8_4_ = (int)psVar43[-0x15] * (int)psVar34[-0x15];
          auVar80._12_4_ = (int)psVar43[-0x11] * (int)psVar34[-0x11];
          auVar80 = NEON_sshl(auVar80,auVar46,4);
          auVar81 = NEON_sshl(auVar71,auVar46,4);
          auVar84 = NEON_sshl(auVar76,auVar46,4);
          lVar61 = lVar61 + auVar93._8_4_ + (long)auVar72._8_4_ + (long)auVar50._8_4_ +
                   (long)auVar78._8_4_;
          lVar62 = lVar62 + auVar93._12_4_ + (long)auVar72._12_4_ + (long)auVar50._12_4_ +
                   (long)auVar78._12_4_;
          lVar59 = lVar59 + auVar93._0_4_ + (long)auVar72._0_4_ + (long)auVar50._0_4_ +
                   (long)auVar78._0_4_;
          lVar60 = lVar60 + auVar93._4_4_ + (long)auVar72._4_4_ + (long)auVar50._4_4_ +
                   (long)auVar78._4_4_;
          lVar74 = lVar74 + auVar91._8_4_ + (long)auVar70._8_4_ + (long)auVar89._8_4_ +
                   (long)auVar81._8_4_;
          lVar75 = lVar75 + auVar91._12_4_ + (long)auVar70._12_4_ + (long)auVar89._12_4_ +
                   (long)auVar81._12_4_;
          lVar56 = lVar56 + auVar88._8_4_ + (long)auVar86._8_4_ + (long)auVar90._8_4_ +
                   (long)auVar80._8_4_;
          lVar58 = lVar58 + auVar88._12_4_ + (long)auVar86._12_4_ + (long)auVar90._12_4_ +
                   (long)auVar80._12_4_;
          lVar53 = lVar53 + auVar88._0_4_ + (long)auVar86._0_4_ + (long)auVar90._0_4_ +
                   (long)auVar80._0_4_;
          lVar54 = lVar54 + auVar88._4_4_ + (long)auVar86._4_4_ + (long)auVar90._4_4_ +
                   (long)auVar80._4_4_;
          lVar67 = lVar67 + auVar91._0_4_ + (long)auVar70._0_4_ + (long)auVar89._0_4_ +
                   (long)auVar81._0_4_;
          lVar69 = lVar69 + auVar91._4_4_ + (long)auVar70._4_4_ + (long)auVar89._4_4_ +
                   (long)auVar81._4_4_;
          lVar41 = lVar41 + auVar92._8_4_ + (long)auVar87._8_4_ + (long)auVar94._8_4_ +
                   (long)auVar84._8_4_;
          lVar51 = lVar51 + auVar92._12_4_ + (long)auVar87._12_4_ + (long)auVar94._12_4_ +
                   (long)auVar84._12_4_;
          lVar1 = CONCAT26(uVar66,CONCAT24(uVar65,CONCAT22(uVar64,uVar63))) + (long)auVar92._0_4_ +
                  (long)auVar87._0_4_ + (long)auVar94._0_4_ + (long)auVar84._0_4_;
          uVar63 = (undefined2)lVar1;
          uVar64 = (undefined2)((ulong)lVar1 >> 0x10);
          uVar65 = (undefined2)((ulong)lVar1 >> 0x20);
          uVar66 = (undefined2)((ulong)lVar1 >> 0x30);
          lVar39 = lVar39 + auVar92._4_4_ + (long)auVar87._4_4_ + (long)auVar94._4_4_ +
                   (long)auVar84._4_4_;
          psVar34 = psVar34 + 0x40;
          psVar43 = psVar43 + 0x40;
        } while (uVar33 != 0);
        uVar33 = lVar1 + lVar53 + lVar67 + lVar59 + lVar41 + lVar56 + lVar74 + lVar61 +
                 lVar39 + lVar54 + lVar69 + lVar60 + lVar51 + lVar58 + lVar75 + lVar62;
        if (uVar36 != uVar37) {
          if ((uVar36 & 0xc) == 0) {
            lVar39 = uVar37 << 2;
            goto LAB_0091b5d8;
          }
          goto LAB_0091b548;
        }
      }
    }
    uVar36 = param_3 & 0xfffffffffffffffc;
    uVar37 = param_3 - uVar36;
    if (param_3 < uVar36 || param_3 - uVar36 == 0) goto LAB_0091b79c;
  }
  if (3 < uVar37) {
    auVar47._4_4_ = param_4;
    auVar47._0_4_ = param_4;
    auVar47._8_4_ = param_4;
    auVar47._12_4_ = param_4;
    if (uVar37 < 0x10) {
      uVar40 = 0;
    }
    else {
      lVar53 = 0;
      lVar54 = 0;
      lVar56 = 0;
      lVar58 = 0;
      lVar59 = 0;
      lVar60 = 0;
      lVar61 = 0;
      lVar62 = 0;
      lVar67 = 0;
      lVar69 = 0;
      lVar39 = uVar36 * 2 + 0x10;
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar66 = 0;
      lVar41 = 0;
      lVar74 = 0;
      lVar75 = 0;
      uVar40 = uVar37 & 0xfffffffffffffff0;
      lVar51 = 0;
      auVar46 = NEON_neg(auVar47,4);
      psVar34 = (short *)(param_2 + lVar39);
      psVar43 = (short *)(param_1 + lVar39);
      uVar44 = uVar37 & 0xfffffffffffffff0;
      do {
        psVar15 = psVar34 + -8;
        psVar14 = psVar34 + -7;
        psVar13 = psVar34 + -6;
        psVar12 = psVar34 + -5;
        psVar11 = psVar34 + -4;
        psVar10 = psVar34 + -3;
        psVar9 = psVar34 + -2;
        psVar8 = psVar34 + -1;
        sVar55 = *psVar34;
        psVar7 = psVar34 + 1;
        psVar6 = psVar34 + 2;
        psVar5 = psVar34 + 3;
        psVar4 = psVar34 + 4;
        psVar3 = psVar34 + 5;
        psVar16 = psVar34 + 6;
        psVar32 = psVar34 + 7;
        uVar44 = uVar44 - 0x10;
        psVar17 = psVar43 + -8;
        psVar18 = psVar43 + -7;
        psVar19 = psVar43 + -6;
        psVar20 = psVar43 + -5;
        psVar21 = psVar43 + -4;
        psVar22 = psVar43 + -3;
        psVar23 = psVar43 + -2;
        psVar24 = psVar43 + -1;
        sVar73 = *psVar43;
        psVar25 = psVar43 + 1;
        psVar26 = psVar43 + 2;
        psVar27 = psVar43 + 3;
        psVar28 = psVar43 + 4;
        psVar29 = psVar43 + 5;
        psVar30 = psVar43 + 6;
        psVar31 = psVar43 + 7;
        psVar34 = psVar34 + 0x10;
        psVar43 = psVar43 + 0x10;
        auVar77._0_4_ = (int)*psVar15 * (int)*psVar17;
        auVar77._4_4_ = (int)*psVar14 * (int)*psVar18;
        auVar77._8_4_ = (int)*psVar13 * (int)*psVar19;
        auVar77._12_4_ = (int)*psVar12 * (int)*psVar20;
        auVar79._0_4_ = (int)*psVar4 * (int)*psVar28;
        auVar79._4_4_ = (int)*psVar3 * (int)*psVar29;
        auVar79._8_4_ = (int)*psVar16 * (int)*psVar30;
        auVar79._12_4_ = (int)*psVar32 * (int)*psVar31;
        auVar83._0_4_ = (int)sVar55 * (int)sVar73;
        auVar83._4_4_ = (int)*psVar7 * (int)*psVar25;
        auVar83._8_4_ = (int)*psVar6 * (int)*psVar26;
        auVar83._12_4_ = (int)*psVar5 * (int)*psVar27;
        auVar2._4_2_ = (short)((int)*psVar10 * (int)*psVar22);
        auVar2._0_4_ = (int)*psVar11 * (int)*psVar21;
        auVar2._6_2_ = (short)((uint)((int)*psVar10 * (int)*psVar22) >> 0x10);
        auVar2._8_2_ = (short)((int)*psVar9 * (int)*psVar23);
        auVar2._10_2_ = (short)((uint)((int)*psVar9 * (int)*psVar23) >> 0x10);
        auVar2._12_2_ = (short)((int)*psVar8 * (int)*psVar24);
        auVar2._14_2_ = (short)((uint)((int)*psVar8 * (int)*psVar24) >> 0x10);
        auVar86 = NEON_sshl(auVar2,auVar46,4);
        auVar50 = NEON_sshl(auVar77,auVar46,4);
        auVar80 = NEON_sshl(auVar79,auVar46,4);
        auVar84 = NEON_sshl(auVar83,auVar46,4);
        lVar59 = lVar59 + auVar86._8_4_;
        lVar60 = lVar60 + auVar86._12_4_;
        lVar53 = lVar53 + auVar86._0_4_;
        lVar54 = lVar54 + auVar86._4_4_;
        lVar56 = lVar56 + auVar50._8_4_;
        lVar58 = lVar58 + auVar50._12_4_;
        uVar33 = uVar33 + (long)auVar50._0_4_;
        lVar51 = lVar51 + auVar50._4_4_;
        lVar74 = lVar74 + auVar80._8_4_;
        lVar75 = lVar75 + auVar80._12_4_;
        lVar39 = CONCAT26(uVar66,CONCAT24(uVar65,CONCAT22(uVar64,uVar63))) + (long)auVar80._0_4_;
        uVar63 = (undefined2)lVar39;
        uVar64 = (undefined2)((ulong)lVar39 >> 0x10);
        uVar65 = (undefined2)((ulong)lVar39 >> 0x20);
        uVar66 = (undefined2)((ulong)lVar39 >> 0x30);
        lVar41 = lVar41 + auVar80._4_4_;
        lVar67 = lVar67 + auVar84._8_4_;
        lVar69 = lVar69 + auVar84._12_4_;
        lVar61 = lVar61 + auVar84._0_4_;
        lVar62 = lVar62 + auVar84._4_4_;
      } while (uVar44 != 0);
      uVar33 = lVar61 + uVar33 + lVar39 + lVar53 + lVar67 + lVar56 + lVar74 + lVar59 +
               lVar62 + lVar51 + lVar41 + lVar54 + lVar69 + lVar58 + lVar75 + lVar60;
      if (uVar37 == uVar40) goto LAB_0091b79c;
      if ((uVar37 & 0xc) == 0) {
        uVar36 = uVar36 + uVar40;
        goto LAB_0091b770;
      }
    }
    lVar53 = 0;
    lVar54 = 0;
    uVar44 = param_3 & 3;
    auVar46 = NEON_neg(auVar47,4);
    lVar51 = 0;
    lVar39 = uVar40 + uVar36;
    uVar36 = uVar36 + (uVar37 - uVar44);
    lVar41 = lVar39 * 2;
    lVar39 = (lVar39 + uVar44) - param_3;
    puVar38 = (undefined8 *)(param_2 + lVar41);
    puVar42 = (undefined8 *)(param_1 + lVar41);
    do {
      uVar48 = *puVar42;
      lVar39 = lVar39 + 4;
      uVar52 = *puVar38;
      auVar57._0_4_ = (int)(short)uVar52 * (int)(short)uVar48;
      auVar57._4_4_ = (int)(short)((ulong)uVar52 >> 0x10) * (int)(short)((ulong)uVar48 >> 0x10);
      auVar57._8_4_ = (int)(short)((ulong)uVar52 >> 0x20) * (int)(short)((ulong)uVar48 >> 0x20);
      auVar57._12_4_ = (int)(short)((ulong)uVar52 >> 0x30) * (int)(short)((ulong)uVar48 >> 0x30);
      auVar50 = NEON_sshl(auVar57,auVar46,4);
      lVar53 = lVar53 + auVar50._8_4_;
      lVar54 = lVar54 + auVar50._12_4_;
      uVar33 = uVar33 + (long)auVar50._0_4_;
      lVar51 = lVar51 + auVar50._4_4_;
      puVar38 = puVar38 + 1;
      puVar42 = puVar42 + 1;
    } while (lVar39 != 0);
    uVar33 = uVar33 + lVar53 + lVar51 + lVar54;
    if (uVar44 == 0) goto LAB_0091b79c;
  }
LAB_0091b770:
  lVar39 = param_3 - uVar36;
  psVar34 = (short *)(param_2 + uVar36 * 2);
  psVar43 = (short *)(param_1 + uVar36 * 2);
  do {
    lVar39 = lVar39 + -1;
    uVar33 = uVar33 + (long)((int)*psVar34 * (int)*psVar43 >> (param_4 & 0x1f));
    psVar34 = psVar34 + 1;
    psVar43 = psVar43 + 1;
  } while (lVar39 != 0);
LAB_0091b79c:
  uVar35 = 2;
  if ((long)uVar33 < 0x80000000) {
    uVar35 = 0;
  }
  if ((long)uVar33 < -0x80000000) {
    uVar35 = uVar35 + 1;
  }
  if (uVar35 < 2) {
    if (uVar35 != 0) {
      uVar33 = 0x80000000;
    }
  }
  else {
    if (uVar35 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar33 = 0x7fffffff;
  }
  return uVar33 & 0xffffffff;
}


// ===== 0091b810  FUN_0091b810 =====

uint FUN_0091b810(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0x10000;
  if (param_1 < 0x40000000) {
    uVar8 = 0;
  }
  uVar2 = (uVar8 >> 0x10) << 0x1e | 0x10000000;
  iVar6 = param_1 + -0x40000000;
  if (param_1 < 0x40000000) {
    iVar6 = param_1;
  }
  if ((int)uVar2 <= iVar6) {
    uVar8 = uVar8 | 0x8000;
  }
  uVar3 = 0;
  if ((int)uVar2 <= iVar6) {
    uVar3 = uVar2;
  }
  iVar6 = iVar6 - uVar3;
  uVar2 = (uVar8 >> 0xf) << 0x1c | 0x4000000;
  if ((int)uVar2 <= iVar6) {
    uVar8 = uVar8 | 0x4000;
  }
  uVar3 = (uVar8 >> 0xe) << 0x1a | 0x1000000;
  uVar4 = 0;
  if ((int)uVar2 <= iVar6) {
    uVar4 = uVar2;
  }
  iVar6 = iVar6 - uVar4;
  if ((int)uVar3 <= iVar6) {
    uVar8 = uVar8 | 0x2000;
  }
  uVar2 = 0;
  if ((int)uVar3 <= iVar6) {
    uVar2 = uVar3;
  }
  iVar6 = iVar6 - uVar2;
  iVar1 = uVar8 * 0x800 + 0x400000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x1000;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x400 + 0x100000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x800;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x200 + 0x40000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x400;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x100 + 0x10000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x200;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x80 + 0x4000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x100;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x40 + 0x1000;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x80;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x20 + 0x400;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x40;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 0x10 + 0x100;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x20;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 8 + 0x40;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 0x10;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar6 = iVar6 - iVar5;
  iVar1 = uVar8 * 4 + 0x10;
  if (iVar1 <= iVar6) {
    uVar8 = uVar8 | 8;
  }
  iVar5 = 0;
  if (iVar1 <= iVar6) {
    iVar5 = iVar1;
  }
  iVar1 = uVar8 * 2 + 4;
  iVar7 = 0;
  if (iVar1 <= iVar6 - iVar5) {
    uVar8 = uVar8 | 4;
    iVar7 = iVar1;
  }
  return (uint)((int)uVar8 < (iVar6 - iVar5) - iVar7) | uVar8 >> 1;
}


// ===== 0091b9d4  FUN_0091b9d4 =====

void FUN_0091b9d4(undefined2 *param_1,undefined2 param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    return;
  }
  if (3 < param_3) {
    if (param_3 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar6 = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
      uVar3 = param_3 & 0xfffffffffffffff0;
      puVar2 = (undefined8 *)(param_1 + 8);
      uVar5 = param_3 & 0xfffffffffffffff0;
      do {
        uVar5 = uVar5 - 0x10;
        puVar2[-1] = uVar6;
        puVar2[-2] = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
        puVar2[1] = uVar6;
        *puVar2 = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
        puVar2 = puVar2 + 4;
      } while (uVar5 != 0);
      if (param_3 == uVar3) {
        return;
      }
      if ((param_3 & 0xc) == 0) {
        param_1 = param_1 + uVar3;
        param_3 = param_3 & 0xf;
        goto LAB_0091ba5c;
      }
    }
    uVar5 = param_3 & 0xfffffffffffffffc;
    puVar2 = (undefined8 *)(param_1 + uVar3);
    param_1 = param_1 + uVar5;
    lVar4 = uVar3 - uVar5;
    do {
      lVar4 = lVar4 + 4;
      *puVar2 = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
      puVar2 = puVar2 + 1;
    } while (lVar4 != 0);
    bVar1 = param_3 == uVar5;
    param_3 = param_3 & 3;
    if (bVar1) {
      return;
    }
  }
LAB_0091ba5c:
  do {
    param_3 = param_3 - 1;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return;
}


// ===== 0091ba78  FUN_0091ba78 =====

void FUN_0091ba78(undefined4 *param_1,undefined4 param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    if (7 < param_3) {
      puVar2 = (undefined8 *)(param_1 + 4);
      uVar3 = param_3 & 0xfffffffffffffff8;
      do {
        uVar3 = uVar3 - 8;
        puVar2[-1] = CONCAT44(param_2,param_2);
        puVar2[-2] = CONCAT44(param_2,param_2);
        puVar2[1] = CONCAT44(param_2,param_2);
        *puVar2 = CONCAT44(param_2,param_2);
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
      bVar1 = param_3 == (param_3 & 0xfffffffffffffff8);
      param_1 = param_1 + (param_3 & 0xfffffffffffffff8);
      param_3 = param_3 & 7;
      if (bVar1) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = param_2;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 0091bad4  FUN_0091bad4 =====

void FUN_0091bad4(long param_1,long param_2,long param_3,void *param_4)

{
  memcpy(param_4,(void *)(param_1 + (param_2 - param_3) * 2),param_3 << 1);
  return;
}


// ===== 0091baec  FUN_0091baec =====

void FUN_0091baec(long param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ===== 0091bafc  FUN_0091bafc =====

undefined8 FUN_0091bafc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))
                    (*(long **)(param_1 + 0x10),*(undefined1 *)(param_2 + 6));
  if (iVar1 == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
    uVar2 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    FUN_0092694c(uVar3,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0091bb6c  FUN_0091bb6c =====

undefined4 FUN_0091bb6c(int *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  short sVar14;
  int iVar15;
  ulong uVar16;
  short sVar17;
  int iVar18;
  
  lVar7 = FUN_00915b90(param_3);
  if (lVar7 == 1) {
    iVar18 = param_1[1];
    lVar7 = param_2;
    if ((char)iVar18 == '\x01') {
      lVar7 = *(long *)(param_1 + 2) + param_2;
    }
    FUN_00916570(param_3,lVar7);
    lVar8 = (**(code **)(**(long **)(param_1 + 4) + 0x60))();
    if (lVar8 == 0) {
      uVar12 = FUN_004249b0();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/comfort_noise.cc",0x20b,
                     "Unknwown payload type");
        uVar13 = 1;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar12 = lVar7 << 1;
      if (lVar7 == -1 || lVar7 + 1 < 0 != SCARRY8(lVar7,1)) {
        uVar12 = 0xffffffffffffffff;
      }
      pvVar9 = operator_new__(uVar12);
      pvVar2 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar2 = pvVar9;
      }
      uVar12 = FUN_00926b70(lVar8,pvVar2,lVar7,(char)iVar18);
      if ((uVar12 & 1) == 0) {
        FUN_00915b3c(param_3,param_2);
        uVar12 = FUN_004249b0();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/comfort_noise.cc",0x253,
                       "ComfortNoiseDecoder::Genererate failed to generate comfort noise");
        }
        uVar13 = 2;
      }
      else {
        uVar10 = FUN_00915ba4(param_3,0);
        FUN_009174d0(uVar10,pvVar9,lVar7,0);
        if ((char)param_1[1] == '\x01') {
          iVar18 = *param_1;
          if (iVar18 == 8000) {
            sVar14 = 0x1555;
            iVar15 = -0x1555;
            iVar18 = 0x6aab;
          }
          else if (iVar18 == 32000) {
            sVar14 = 0x618;
            iVar15 = -0x618;
            iVar18 = 0x79e8;
          }
          else if (iVar18 == 16000) {
            sVar14 = 0xba3;
            iVar15 = -0xba3;
            iVar18 = 0x745d;
          }
          else {
            sVar14 = 0x421;
            iVar15 = -0x421;
            iVar18 = 0x7bdf;
          }
          lVar7 = FUN_0091601c(*(undefined8 *)(param_1 + 6));
          lVar8 = *(long *)(param_1 + 2);
          if (lVar8 == 0) {
            uVar12 = 0;
          }
          else {
            uVar16 = 0;
            sVar17 = sVar14;
            do {
              plVar11 = (long *)FUN_00915ba4(*(undefined8 *)(param_1 + 6),0);
              lVar1 = (lVar7 - lVar8) + uVar16;
              sVar5 = (short)iVar18;
              uVar12 = 0;
              if ((ulong)plVar11[1] <= (ulong)(lVar1 + plVar11[2])) {
                uVar12 = plVar11[1];
              }
              sVar3 = *(short *)(*plVar11 + (lVar1 + (plVar11[2] - uVar12)) * 2);
              plVar11 = (long *)FUN_00915ba4(param_3,0);
              iVar6 = (int)sVar17;
              uVar12 = 0;
              if ((ulong)plVar11[1] <= uVar16 + plVar11[2]) {
                uVar12 = plVar11[1];
              }
              sVar4 = *(short *)(*plVar11 + (uVar16 + (plVar11[2] - uVar12)) * 2);
              plVar11 = (long *)FUN_00915ba4(*(undefined8 *)(param_1 + 6),0);
              uVar16 = uVar16 + 1;
              iVar18 = sVar5 + iVar15;
              sVar17 = sVar17 + sVar14;
              uVar12 = 0;
              if ((ulong)plVar11[1] <= (ulong)(lVar1 + plVar11[2])) {
                uVar12 = plVar11[1];
              }
              *(short *)(*plVar11 + (lVar1 + (plVar11[2] - uVar12)) * 2) =
                   (short)(sVar4 * iVar6 + (int)sVar5 * (int)sVar3 + 0x4000U >> 0xf);
              uVar12 = *(ulong *)(param_1 + 2);
            } while (uVar16 < uVar12);
          }
          FUN_00916054(param_3,uVar12);
        }
        uVar13 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
      }
      if (pvVar9 != (void *)0x0) {
        operator_delete__(pvVar9);
      }
    }
  }
  else {
    uVar12 = FUN_004249b0();
    if ((uVar12 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/comfort_noise.cc",0x193,
                   "No multi-channel support");
    }
    uVar13 = 3;
  }
  return uVar13;
}


// ===== 0091be74  FUN_0091be74 =====

void FUN_0091be74(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *param_1 = &PTR_FUN_00d3d920;
  *(int *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[6] = param_5;
  *(int *)(param_1 + 3) = param_2 / 8000;
  param_1[4] = (long)(param_2 / 100);
  param_1[5] = param_4;
  FUN_009157a8(param_1 + 0x2a,param_3);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}


// ===== 0091bf00  FUN_0091bf00 =====

void FUN_0091bf00(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x2e];
  *param_1 = &PTR_FUN_00d3d920;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2f];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x2f] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00915980(param_1 + 0x2a);
  return;
}


// ===== 0091bfbc  FUN_0091bfbc =====

void FUN_0091bfbc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x2e];
  *param_1 = &PTR_FUN_00d3d920;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2f];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x2f] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00915980(param_1 + 0x2a);
  operator_delete(param_1);
  return;
}


// ===== 0091c084  FUN_0091c084 =====

long FUN_0091c084(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  void *__src;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long local_c8;
  short local_98 [2];
  short local_94 [2];
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  long local_68;
  
  if (param_3 == 0) {
    local_c8 = 0;
  }
  else {
    lVar7 = FUN_0091c568(param_1,&local_68,&local_70);
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_009157a8(&local_90,*(undefined8 *)(param_1 + 0x10));
    FUN_00915be0(&local_90,param_2,param_3);
    uVar8 = FUN_0091601c(&local_90);
    uVar11 = uVar8 << 1;
    if (uVar8 == 0xffffffffffffffff || (long)(uVar8 + 1) < 0 != SCARRY8(uVar8,1)) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar9 = operator_new__(uVar11);
    uVar11 = lVar7 << 1;
    if (lVar7 == -1 || lVar7 + 1 < 0 != SCARRY8(lVar7,1)) {
      uVar11 = 0xffffffffffffffff;
    }
    __src = operator_new__(uVar11);
    if (*(long *)(param_1 + 0x10) == 0) {
      local_c8 = 0;
    }
    else {
      lVar16 = 0;
      lVar17 = 0;
      uVar11 = 0;
      pcVar12 = *(code **)PTR_PTR_FUN_00d52078;
      do {
        uVar10 = FUN_00915ba4(&local_90,uVar11);
        FUN_009168a4(uVar10,uVar8,0,pvVar9);
        uVar10 = FUN_00915ba4(param_1 + 0x150,uVar11);
        FUN_009168a4(uVar10,lVar7,0,__src);
        sVar6 = FUN_0091c68c(param_1,pvVar9,uVar8,__src);
        if (0x3fff < sVar6) {
          sVar6 = 0x4000;
        }
        if (uVar11 == 0) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 8000) {
            lVar17 = 3;
            puVar18 = PTR_DAT_00d530f8;
          }
          else if (iVar2 == 32000) {
            lVar17 = 7;
            puVar18 = PTR_DAT_00d53100;
          }
          else {
            lVar17 = 7;
            puVar18 = PTR_DAT_00d530f0;
            if (iVar2 == 16000) {
              lVar17 = 5;
              puVar18 = PTR_DAT_00d530e8;
            }
          }
          uVar15 = lVar17 - 1;
          uVar5 = (long)iVar2 / 4000;
          (*pcVar12)((void *)((long)__src + uVar15 * 2),lVar7 - uVar15,param_1 + 0x38,100,puVar18,
                     lVar17,uVar5 & 0xffffffff,0);
          if ((ulong)(long)(iVar2 / 100) < uVar8) {
            (*pcVar12)((void *)((long)pvVar9 + uVar15 * 2),uVar8 - uVar15,param_1 + 0x100,0x28,
                       puVar18,lVar17,uVar5 & 0xffffffff,0);
          }
          else {
            uVar13 = (ulong)(int)uVar5;
            uVar1 = 0;
            if (uVar15 <= uVar8) {
              uVar1 = uVar8 - uVar15;
            }
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar1 / uVar13;
            }
            if (uVar13 <= uVar1) {
              (*pcVar12)((void *)((long)pvVar9 + uVar15 * 2),uVar1,param_1 + 0x100,uVar4,puVar18,
                         lVar17,uVar5 & 0xffffffff,0);
            }
            if (0x28 < uVar4) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0x5512,0x91c568);
              (*pcVar12)();
            }
            memset((void *)(param_1 + 0x100 + uVar4 * 2),0,uVar4 * -2 + 0x50);
          }
          lVar17 = FUN_0091c7dc(param_1,local_68,uVar8,local_70);
        }
        FUN_0091c9d8(param_1 + 0x170,lVar17 + uVar8);
        iVar2 = *(int *)(param_1 + 0x18);
        lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x80);
        uVar5 = lVar7 - lVar17;
        if ((ulong)((long)iVar2 * 0x3c) <= (ulong)(lVar7 - lVar17)) {
          uVar5 = (long)iVar2 * 0x3c;
        }
        uVar15 = uVar8;
        if (uVar5 <= uVar8) {
          uVar15 = uVar5;
        }
        if (*(ulong *)(lVar14 + -8) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                    );
        }
        local_94[0] = *(short *)(lVar14 + lVar16);
        lVar14 = *(long *)(param_1 + 0x170) + lVar17 * 2;
        if (local_94[0] <= sVar6) {
          local_94[0] = sVar6;
        }
        if (local_94[0] < 0x4000) {
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = 0x1062 / iVar2;
          }
          iVar2 = 0;
          if (uVar8 != 0) {
            iVar2 = (int)((local_94[0] * -0x40 + 0x100000) / uVar8);
          }
          if (iVar3 <= iVar2) {
            iVar3 = iVar2;
          }
          local_94[0] = FUN_00919910(pvVar9,uVar15,(int)local_94[0],iVar3);
          FUN_0091a048((void *)((long)pvVar9 + uVar15 * 2),uVar8 - uVar15,local_94,iVar3,
                       lVar14 + uVar15 * 2);
        }
        else {
          memmove((void *)(lVar14 + uVar15 * 2),(void *)((long)pvVar9 + uVar15 * 2),
                  (uVar8 - uVar15) * 2);
        }
        local_c8 = lVar17 + uVar8;
        uVar5 = 0;
        if (uVar15 + 1 != 0) {
          uVar5 = 0x4000 / (uVar15 + 1);
        }
        local_98[0] = 0x4000 - (short)uVar5;
        memmove(*(void **)(param_1 + 0x170),__src,lVar17 * 2);
        FUN_00919ec8((void *)((long)__src + lVar17 * 2),pvVar9,uVar15,local_98,uVar5,lVar14);
        if (uVar11 == 0) {
          FUN_00916570(param_4,lVar17 + uVar8);
        }
        uVar10 = FUN_00915ba4(param_4,uVar11);
        FUN_009174d0(uVar10,*(undefined8 *)(param_1 + 0x170),lVar17 + uVar8,0);
        uVar11 = uVar11 + 1;
        lVar16 = lVar16 + 0x70;
      } while (uVar11 < *(ulong *)(param_1 + 0x10));
    }
    FUN_00925eb0(*(long *)(param_1 + 0x30),param_4,local_68,
                 *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
    FUN_00916054(param_4,local_68);
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    local_c8 = local_c8 - local_68;
    if (pvVar9 != (void *)0x0) {
      operator_delete__(pvVar9);
    }
    FUN_00915980(&local_90);
  }
  return local_c8;
}


// ===== 0091c568  FUN_0091c568 =====

ulong FUN_0091c568(long param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uVar1 = FUN_00925c04(*(undefined8 *)(param_1 + 0x30));
  *param_2 = uVar1;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  if (0x4eb < *param_2) {
    FUN_00925d3c(*(long *)(param_1 + 0x30),*param_2 - 0x4ec,
                 *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
    *param_2 = 0x4ec;
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009157a8(&local_50,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),&local_50);
  uVar2 = FUN_0091601c(&local_50);
  *param_3 = uVar2;
  FUN_00915b00(param_1 + 0x150);
  FUN_00915f2c(param_1 + 0x150,*(long *)(param_1 + 0x30),
               *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
  uVar4 = (ulong)(*(int *)(param_1 + 0x18) * 0xca);
  uVar1 = FUN_0091601c(param_1 + 0x150);
  if (uVar1 < uVar4) {
    while (uVar1 = FUN_0091601c(param_1 + 0x150), uVar1 < uVar4) {
      FUN_00915e50(param_1 + 0x150,&local_50);
    }
    lVar3 = FUN_0091601c(param_1 + 0x150);
    FUN_009160a0(param_1 + 0x150,lVar3 - uVar4);
  }
  FUN_00915980(&local_50);
  return uVar4;
}


// ===== 0091c68c  FUN_0091c68c =====

undefined8 FUN_0091c68c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  code *pcVar11;
  
  pcVar11 = *(code **)PTR_PTR_FUN_00d51f30;
  uVar9 = (long)*(int *)(param_1 + 0x18) << 6;
  if (param_3 <= uVar9) {
    uVar9 = param_3;
  }
  sVar5 = (*pcVar11)(param_4,uVar9);
  iVar7 = 0;
  if ((int)uVar9 != 0) {
    iVar7 = 0x7fffffff / (int)uVar9;
  }
  uVar4 = 0;
  if (iVar7 != 0) {
    uVar4 = ((int)sVar5 * (int)sVar5) / iVar7;
  }
  uVar10 = 0;
  if (uVar4 != 0) {
    uVar10 = (uint)LZCOUNT(uVar4 ^ uVar4 << 1 | 1) ^ 0x1f;
  }
  iVar6 = FUN_0091b330(param_4,param_4,uVar9,uVar10);
  sVar5 = (*pcVar11)(param_2,uVar9);
  uVar4 = 0;
  if (iVar7 != 0) {
    uVar4 = ((int)sVar5 * (int)sVar5) / iVar7;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = (uint)LZCOUNT(uVar4 ^ uVar4 << 1 | 1) ^ 0x1f;
  }
  iVar7 = FUN_0091b330(param_2,param_2,uVar9,uVar1);
  uVar4 = 0;
  if (uVar10 <= uVar1) {
    uVar4 = uVar1 - uVar10;
  }
  uVar2 = 0;
  if (uVar1 <= uVar10) {
    uVar2 = uVar10 - uVar1;
  }
  iVar6 = iVar6 >> (uVar4 & 0x1f);
  uVar4 = iVar7 >> (uVar2 & 0x1f);
  if (iVar6 < (int)uVar4) {
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = (uint)LZCOUNT(uVar4 ^ uVar4 << 1 | 1);
    }
    iVar7 = uVar4 << (ulong)(uVar10 - 0x11 & 0x1f);
    if (uVar10 < 0x11) {
      iVar7 = (int)uVar4 >> (0x11 - uVar10 & 0x1f);
    }
    iVar3 = iVar6 << (ulong)(uVar10 - 3 & 0x1f);
    if (uVar10 < 3) {
      iVar3 = iVar6 >> (3 - uVar10 & 0x1f);
    }
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = iVar3 / iVar7;
    }
    uVar8 = FUN_0091b810(iVar6 << 0xe);
  }
  else {
    uVar8 = 0x4000;
  }
  return uVar8;
}


// ===== 0091c7dc  FUN_0091c7dc =====

undefined1 * FUN_0091c7dc(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  void *__s;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined2 local_15c [2];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  uVar10 = (ulong)(*(int *)(param_1 + 0x18) << 1);
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = 0;
  if (uVar10 != 0) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x48) / uVar10;
  }
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar10 = 0x3c;
  if (uVar4 + 1 < 0x3c) {
    uVar10 = uVar4 + 1;
  }
  FUN_0091a9ac(param_1 + 0x100,param_1 + 0x38,0x28,uVar10,1,&local_150);
  lVar8 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  lVar14 = lVar8 * 2;
  lVar13 = lVar14 + 0x3a;
  uVar4 = lVar13 * 2;
  if (lVar13 == -1 || lVar14 + 0x3b < 0 != SCARRY8(lVar13,1)) {
    uVar4 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar4);
  memset(__s,0,lVar13 * 2);
  lVar13 = (long)__s + lVar14 + -2;
  uVar7 = (**(code **)PTR_PTR_FUN_00d52068)(&local_150,uVar10);
  uVar3 = 0x11 - (int)LZCOUNT(uVar7 ^ uVar7 << 1 | 1);
  uVar2 = 0x11;
  if (uVar7 != 0) {
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  FUN_00654ec0(lVar13,uVar10,&local_150,uVar2);
  lVar14 = *(long *)(param_1 + 0x20);
  lVar9 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  puVar11 = (undefined1 *)(lVar9 + lVar14);
  puVar1 = param_2;
  if (param_2 <= puVar11) {
    puVar1 = puVar11;
  }
  local_158 = &DAT_aaaaaaaaaaaaaaaa;
  uVar12 = (ulong)(*(int *)(param_1 + 0x18) << 1);
  uVar4 = 0;
  if (param_3 <= puVar1) {
    uVar4 = (long)puVar1 - (long)param_3;
  }
  uVar5 = 0;
  if (uVar12 != 0) {
    uVar5 = uVar4 / uVar12;
  }
  uVar12 = (lVar8 - uVar5) + 0x3b;
  local_15c[0] = 0xaaaa;
  if (uVar10 <= uVar12) {
    uVar12 = uVar10;
  }
  FUN_0091995c(lVar13 + uVar5 * 2,uVar12,1,*(int *)(param_1 + 0x18),&local_158,local_15c);
  puVar11 = local_158 + uVar4;
  do {
    lVar13 = *(long *)(param_1 + 0x20);
    puVar1 = puVar11 + (long)param_3;
    local_158 = puVar11;
    lVar8 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
    puVar6 = local_158;
    puVar11 = local_158 + param_4;
  } while (puVar1 < (undefined1 *)(lVar8 + lVar13) || local_158 + (long)param_3 < param_2);
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
  return puVar6;
}


// ===== 0091c9d8  FUN_0091c9d8 =====

void FUN_0091c9d8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  
  __src = (void *)*param_1;
  puVar4 = (undefined2 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar12 = (long)__n >> 1;
  uVar6 = param_2 - uVar12;
  uVar9 = (uint)puVar4;
  if (param_2 < uVar12 || uVar6 == 0) {
    if (param_2 < uVar12) {
      puVar11 = (undefined2 *)((long)__src + param_2 * 2);
      uVar6 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3f) - ((long)puVar11 - (long)puVar4)) >> 1;
      uVar12 = (ulong)((long)puVar4 + ((long)puVar4 << 0x3f) + -2) >> 1;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      if ((1 < uVar6) && ((((int)__src - uVar9 | uVar9) & 1) == 0)) {
        uVar6 = uVar6 & 0x7ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar11) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar11;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 1) < param_2) {
      if ((long)param_2 < 0) {
        FUN_006ce1ec();
      }
      else {
        uVar1 = uVar8;
        if (uVar8 <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffffd < uVar8) {
          uVar1 = 0x7fffffffffffffff;
        }
        if (-1 < (long)uVar1) {
          pvVar3 = operator_new(uVar1 * 2);
          if (uVar6 * 2 == 0) {
            puVar11 = (undefined2 *)((long)pvVar3 + __n);
          }
          else {
            puVar11 = (undefined2 *)((long)pvVar3 + uVar6 * 2 + __n);
            uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 1;
            uVar8 = (param_2 * 2 - __n) - 2 >> 1;
            if (uVar8 <= uVar6) {
              uVar6 = uVar8;
            }
            if (uVar6 < 0x10) {
              puVar4 = (undefined2 *)((long)pvVar3 + __n);
            }
            else {
              puVar4 = (undefined2 *)((long)pvVar3 + __n);
              if ((((int)__src - uVar9) - (int)pvVar3 & 1) == 0) {
                uVar8 = uVar6 + 1 & 0xf;
                uVar2 = 0x10;
                if (uVar8 != 0) {
                  uVar2 = uVar8;
                }
                lVar5 = (uVar6 + 1) - uVar2;
                puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar4 = (undefined2 *)((long)pvVar3 + lVar5 * 2 + __n);
                do {
                  lVar5 = lVar5 + -0x10;
                  puVar7[-1] = 0;
                  puVar7[-2] = 0;
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7 = puVar7 + 4;
                } while (lVar5 != 0);
              }
            }
            do {
              if (puVar4 == (undefined2 *)0x0) goto LAB_0091cc5c;
              puVar10 = puVar4 + 1;
              *puVar4 = 0;
              puVar4 = puVar10;
            } while (puVar10 != puVar11);
          }
          __dest = (void *)((long)pvVar3 + uVar12 * -2 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar11;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 2);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar11 = puVar4;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      puVar11 = puVar4 + uVar6;
      uVar12 = (param_2 * 2 - __n) - 2 >> 1;
      uVar6 = (ulong)-(long)puVar4 >> 1;
      if (uVar12 <= (ulong)-(long)puVar4 >> 1) {
        uVar6 = uVar12;
      }
      if ((0xf < uVar6) && (((ulong)puVar4 & 1) == 0)) {
        uVar12 = uVar6 + 1 & 0xf;
        uVar8 = 0x10;
        if (uVar12 != 0) {
          uVar8 = uVar12;
        }
        puVar7 = (undefined8 *)(puVar4 + 8);
        lVar5 = (uVar6 + 1) - uVar8;
        puVar4 = puVar4 + lVar5;
        do {
          lVar5 = lVar5 + -0x10;
          puVar7[-1] = 0;
          puVar7[-2] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7 = puVar7 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar4 == (undefined2 *)0x0) {
LAB_0091cc5c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar10 = puVar4 + 1;
        *puVar4 = 0;
        puVar4 = puVar10;
      } while (puVar10 != puVar11);
    }
    param_1[1] = puVar11;
  }
  return;
}


// ===== 0091cc78  FUN_0091cc78 =====

long FUN_0091cc78(long param_1)

{
  return *(long *)(param_1 + 0x10) * (long)(*(int *)(param_1 + 8) / 100);
}


// ===== 0091cca4  FUN_0091cca4 =====

ulong FUN_0091cca4(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  
  if (param_3 == 0) {
    FUN_00915b00(param_5);
  }
  else {
    uVar13 = FUN_00915b90(param_5);
    uVar15 = 0;
    if (uVar13 != 0) {
      uVar15 = param_3 / uVar13;
    }
    if (param_3 == uVar15 * uVar13) {
      FUN_00915be0(param_5,param_2,param_3);
      iVar11 = *(int *)(param_1 + 8);
      uVar6 = iVar11 / 8000;
      uVar2 = uVar6;
      if (iVar11 < -7999) {
        uVar2 = ~uVar6;
      }
      if (param_4 == 1) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
        uVar19 = FUN_00915b90(param_5);
        FUN_009157a8(&local_d0,uVar19);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),&local_d0);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
        uVar13 = FUN_00915b90(param_5);
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = param_3 / uVar13;
        }
        uVar13 = uVar15 << 1;
        if (uVar15 == 0xffffffffffffffff || (long)(uVar15 + 1) < 0 != SCARRY8(uVar15,1)) {
          uVar13 = 0xffffffffffffffff;
        }
        pvVar16 = operator_new__(uVar13);
        lVar14 = FUN_00915b90(param_5);
        puVar9 = PTR_FUN_00d27df8;
        if (lVar14 != 0) {
          iVar8 = 0;
          if (uVar6 != 0) {
            iVar8 = 0x40 / (int)uVar6;
          }
          uVar13 = 0;
          uVar21 = uVar15;
          if ((ulong)(long)(int)(uVar6 * 0x40) <= uVar15) {
            uVar21 = (long)(int)(uVar6 * 0x40);
          }
          iVar3 = 0x24;
          if (0x3e7e < iVar11 + 7999U) {
            iVar3 = 0x25 - (int)LZCOUNT(uVar2);
          }
          do {
            lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
            if (*(ulong *)(lVar14 + -8) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                        );
            }
            sVar7 = *(short *)(lVar14 + uVar13 * 0x70);
            uVar19 = FUN_00915ba4(param_5,uVar13);
            FUN_009168a4(uVar19,uVar15,0,pvVar16);
            sVar10 = (*(code *)puVar9)(pvVar16,uVar15);
            iVar11 = 0;
            if (sVar10 != 0) {
              iVar11 = (int)LZCOUNT((int)sVar10 * (int)sVar10) + -1;
            }
            uVar24 = (ulong)(iVar3 - iVar11 & (iVar3 - iVar11 >> 0x1f ^ 0xffffffffU));
            iVar11 = FUN_0091b330(pvVar16,pvVar16,uVar21,uVar24);
            iVar12 = (int)(uVar21 >> (uVar24 & 0x3f));
            if (iVar12 < 1) {
LAB_0091cff8:
              sVar10 = 0x4000;
            }
            else {
              uVar2 = 0;
              if (iVar12 != 0) {
                uVar2 = iVar11 / iVar12;
              }
              if ((uVar2 == 0) ||
                 (iVar11 = FUN_0091a994(*(undefined8 *)(param_1 + 0x18),uVar13),
                 (int)uVar2 <= iVar11)) goto LAB_0091cff8;
              uVar6 = uVar2 ^ (int)uVar2 >> 0x1f;
              iVar22 = (int)LZCOUNT(uVar6);
              iVar12 = FUN_0091a994(*(undefined8 *)(param_1 + 0x18),uVar13);
              iVar11 = iVar12 << (ulong)(iVar22 - 3U & 0x1f);
              if (uVar6 >> 0x1d != 0) {
                iVar11 = iVar12 >> (3U - iVar22 & 0x1f);
              }
              iVar12 = uVar2 << (ulong)(iVar22 - 0x11U & 0x1f);
              if (0x7fff < uVar6) {
                iVar12 = (int)uVar2 >> (0x11U - iVar22 & 0x1f);
              }
              iVar11 = FUN_0065880c(iVar11,iVar12);
              iVar11 = FUN_0091b810(iVar11 << 0xe);
              if (0x3fff < iVar11) {
                iVar11 = 0x4000;
              }
              sVar10 = (short)iVar11;
            }
            iVar11 = (int)sVar7;
            uVar24 = 0;
            if (iVar11 <= sVar10) {
              iVar11 = (int)sVar10;
            }
            iVar12 = 0;
            if (uVar15 != 0) {
              iVar12 = (int)((0x4000U - (long)iVar11) / uVar15);
            }
            iVar22 = iVar8;
            if (iVar8 <= iVar12) {
              iVar22 = iVar12;
            }
            do {
              plVar20 = (long *)FUN_00915ba4(param_5,uVar13);
              sVar7 = (short)iVar11;
              uVar18 = 0;
              if ((ulong)plVar20[1] <= uVar24 + plVar20[2]) {
                uVar18 = plVar20[1];
              }
              sVar10 = *(short *)(*plVar20 + (uVar24 + (plVar20[2] - uVar18)) * 2);
              plVar20 = (long *)FUN_00915ba4(param_5,uVar13);
              iVar11 = iVar22 + sVar7;
              uVar18 = 0;
              if ((ulong)plVar20[1] <= uVar24 + plVar20[2]) {
                uVar18 = plVar20[1];
              }
              if (0x3fff < iVar11) {
                iVar11 = 0x4000;
              }
              lVar14 = uVar24 + (plVar20[2] - uVar18);
              uVar24 = uVar24 + 1;
              *(short *)(*plVar20 + lVar14 * 2) = (short)((int)sVar10 * (int)sVar7 + 0x2000U >> 0xe)
              ;
            } while (uVar24 < uVar15);
            plVar20 = (long *)FUN_00915ba4(&local_d0,uVar13);
            plVar17 = (long *)FUN_00915ba4(param_5,uVar13);
            uVar23 = *(ulong *)(param_1 + 0x28);
            uVar24 = FUN_00916884(plVar20);
            uVar18 = FUN_00916884(plVar17);
            if (uVar23 <= uVar24) {
              uVar24 = uVar23;
            }
            if (uVar24 <= uVar18) {
              uVar18 = uVar24;
            }
            if (uVar18 != 0) {
              uVar24 = 0;
              iVar11 = 0;
              uVar2 = 0;
              if ((short)uVar18 != 0) {
                uVar2 = 0x4000 / (int)(short)uVar18;
              }
              do {
                iVar11 = (uVar2 & 0xffff) + (int)(short)iVar11;
                uVar23 = 0;
                if ((ulong)plVar17[1] <= uVar24 + plVar17[2]) {
                  uVar23 = plVar17[1];
                }
                uVar4 = 0;
                if ((ulong)plVar20[1] <= uVar24 + plVar20[2]) {
                  uVar4 = plVar20[1];
                }
                lVar14 = uVar24 + (plVar17[2] - uVar23);
                lVar1 = uVar24 + (plVar20[2] - uVar4);
                uVar24 = uVar24 + 1;
                *(short *)(*plVar17 + lVar14 * 2) =
                     (short)((0x4000 - (short)iVar11) * (int)*(short *)(*plVar20 + lVar1 * 2) +
                             (int)(short)iVar11 * (int)*(short *)(*plVar17 + lVar14 * 2) + 0x2000U
                            >> 0xe);
              } while (uVar18 != uVar24);
            }
            uVar13 = uVar13 + 1;
            uVar24 = FUN_00915b90(param_5);
          } while (uVar13 < uVar24);
        }
        if (pvVar16 != (void *)0x0) {
          operator_delete__(pvVar16);
        }
        FUN_00915980(&local_d0);
      }
      else if (param_4 == 9) {
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        lVar14 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
        if (lVar14 == 0) {
          uVar19 = FUN_00915ba4(param_5,0);
          FUN_009168a4(uVar19,(long)(int)(uVar6 * 8),0,&local_d0);
        }
        else {
          uVar15 = FUN_00926b70(lVar14,&local_d0,0x30,0);
          if ((uVar15 & 1) == 0) {
            puStack_c8 = (undefined1 *)0x0;
            local_d0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            puStack_c0 = (undefined1 *)0x0;
            puStack_a8 = (undefined1 *)0x0;
            local_b0 = (undefined1 *)0x0;
            puStack_98 = (undefined1 *)0x0;
            puStack_a0 = (undefined1 *)0x0;
            puStack_88 = (undefined1 *)0x0;
            local_90 = (undefined1 *)0x0;
            puStack_78 = (undefined1 *)0x0;
            puStack_80 = (undefined1 *)0x0;
          }
        }
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00916698(&local_f0,0x30);
        FUN_009174d0(&local_f0,&local_d0,0x30,0);
        plVar20 = (long *)FUN_00915ba4(param_5,0);
        uVar21 = *(ulong *)(param_1 + 0x28);
        uVar15 = FUN_00916884(&local_f0);
        uVar13 = FUN_00916884(plVar20);
        if (uVar21 <= uVar15) {
          uVar15 = uVar21;
        }
        if (uVar15 <= uVar13) {
          uVar13 = uVar15;
        }
        if (uVar13 != 0) {
          uVar15 = 0;
          iVar11 = 0;
          uVar2 = 0;
          if ((short)uVar13 != 0) {
            uVar2 = 0x4000 / (int)(short)uVar13;
          }
          do {
            iVar11 = (uVar2 & 0xffff) + (int)(short)iVar11;
            uVar21 = 0;
            if ((ulong)plVar20[1] <= uVar15 + plVar20[2]) {
              uVar21 = plVar20[1];
            }
            puVar5 = (undefined1 *)0x0;
            if (puStack_e8 <= puStack_e0 + uVar15) {
              puVar5 = puStack_e8;
            }
            lVar14 = uVar15 + (plVar20[2] - uVar21);
            lVar1 = uVar15 - (long)puVar5;
            uVar15 = uVar15 + 1;
            *(short *)(*plVar20 + lVar14 * 2) =
                 (short)((0x4000 - (short)iVar11) *
                         (int)*(short *)(local_f0 + (long)(puStack_e0 + lVar1) * 2) +
                         (int)(short)iVar11 * (int)*(short *)(*plVar20 + lVar14 * 2) + 0x2000U >>
                        0xe);
          } while (uVar13 != uVar15);
        }
        FUN_009166f8(&local_f0);
      }
      else if (param_4 == 0xb) {
        FUN_00921aac(*(undefined8 *)(param_1 + 0x30),iVar11);
      }
    }
    else {
      FUN_00915b00(param_5);
      param_3 = 0;
    }
  }
  return param_3 & 0xffffffff;
}


// ===== 0091d2b8  FUN_0091d2b8 =====

void FUN_0091d2b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 0091d2d8  FUN_0091d2d8 =====

void FUN_0091d2d8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    uVar1 = param_2[10];
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[10] = uVar1;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x1e);
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 0x1a);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    uVar5 = *(undefined8 *)(param_2 + 0x12);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 0xe) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(undefined8 *)(param_1 + 0x12) = uVar5;
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}


// ===== 0091d3a4  FUN_0091d3a4 =====

void FUN_0091d3a4(long param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if ((*(char *)(param_1 + 0x90) == '\x01') &&
     (pvVar2 = *(void **)(param_1 + 0x30), pvVar2 != (void *)0x0)) {
    pvVar3 = *(void **)(param_1 + 0x38);
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    return;
  }
  return;
}


// ===== 0091d4ac  FUN_0091d4ac =====

undefined4 * FUN_0091d4ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  pvVar2 = *(void **)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_0091d570(param_1 + 10,param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x26) = 0;
  pvVar2 = *(void **)(param_1 + 0x26);
  *(undefined8 *)(param_1 + 0x26) = uVar4;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  plVar3 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}


// ===== 0091d570  FUN_0091d570 =====

void FUN_0091d570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  cVar2 = *(char *)(param_1 + 0x1a);
  if (cVar2 == *(char *)(param_2 + 0x1a)) {
    if (cVar2 != '\0') {
      pvVar4 = *(void **)(param_1 + 2);
      *param_1 = *param_2;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = *(void **)(param_1 + 4);
        uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
        uVar6 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3e) - ((long)pvVar4 - (long)pvVar5)) >> 2;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        do {
          if (pvVar5 == pvVar4) {
            *(void **)(param_1 + 4) = pvVar4;
            operator_delete(pvVar4);
            *(undefined8 *)(param_1 + 2) = 0;
            *(undefined8 *)(param_1 + 4) = 0;
            *(undefined8 *)(param_1 + 6) = 0;
            goto LAB_0091d710;
          }
          pvVar5 = (void *)((long)pvVar5 + -4);
        } while (pvVar5 != (void *)0x0);
LAB_0091d68c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_0091d710:
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 0x16);
      uVar8 = *(undefined8 *)(param_2 + 0x14);
      uVar12 = *(undefined8 *)(param_2 + 10);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar14 = *(undefined8 *)(param_2 + 0xe);
      uVar13 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      *(undefined8 *)(param_1 + 0x16) = uVar9;
      *(undefined8 *)(param_1 + 0x14) = uVar8;
      *(undefined8 *)(param_1 + 10) = uVar12;
      *(undefined8 *)(param_1 + 8) = uVar11;
      *(undefined8 *)(param_1 + 0xe) = uVar14;
      *(undefined8 *)(param_1 + 0xc) = uVar13;
    }
  }
  else if (cVar2 == '\0') {
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 0x16);
    uVar8 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar12 = *(undefined8 *)(param_2 + 10);
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar14 = *(undefined8 *)(param_2 + 0xe);
    uVar13 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x16) = uVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    *(undefined8 *)(param_1 + 10) = uVar12;
    *(undefined8 *)(param_1 + 8) = uVar11;
    *(undefined8 *)(param_1 + 0xe) = uVar14;
    *(undefined8 *)(param_1 + 0xc) = uVar13;
    uVar3 = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1a) = 1;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
  }
  else {
    pvVar4 = *(void **)(param_1 + 2);
    if (pvVar4 != (void *)0x0) {
      pvVar5 = *(void **)(param_1 + 4);
      uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
      uVar6 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3e) - ((long)pvVar4 - (long)pvVar5)) >> 2;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (pvVar5 == pvVar4) {
          *(void **)(param_1 + 4) = pvVar4;
          operator_delete(pvVar4);
          goto LAB_0091d75c;
        }
        pvVar5 = (void *)((long)pvVar5 + -4);
      } while (pvVar5 != (void *)0x0);
      goto LAB_0091d68c;
    }
LAB_0091d75c:
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}


// ===== 0091d788  FUN_0091d788 =====

void FUN_0091d788(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_00d3d950;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = param_1 + 6;
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
  return;
}


// ===== 0091d7cc  FUN_0091d7cc =====

undefined8 FUN_0091d7cc(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  uStack_50 = **(long **)(param_1 + 8) * (long)(int)(*(long **)(param_1 + 8))[1] *
              (long)*(int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    local_58 = (ulong)param_2;
  }
  else {
    uVar1 = param_2 - *(uint *)(param_1 + 0x20);
    bVar2 = *(uint *)(param_1 + 0x20) <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    local_58 = (ulong)uVar1;
    if (!bVar2) {
      local_58 = (ulong)uVar1 | 0xffffffff00000000;
    }
    local_58 = local_58 + *(long *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = local_58;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(uint *)(param_1 + 0x20) = param_2;
  local_48 = CONCAT44(0xaaaaaaaa,param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    plVar7 = *(long **)(param_1 + 0x30);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x30);
    plVar12 = (long *)(param_1 + 0x30);
    plVar4 = plVar7;
    if (plVar7 == (long *)0x0) {
      do {
        plVar5 = (long *)plVar12[2];
        bVar2 = plVar12 == (long *)*plVar5;
        plVar12 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    if ((long)(local_58 + (long)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14))) < plVar5[5])
    {
      return 0;
    }
  }
  plVar12 = (long *)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x30);
    do {
      puVar6 = (ulong *)(plVar7 + 4);
      plVar12 = plVar7;
      if (((long)*puVar6 <= (long)local_58) &&
         (plVar7 = plVar7 + 1, plVar12 = plVar4, local_58 == *puVar6)) goto LAB_0091d900;
      plVar7 = (long *)*plVar7;
      plVar4 = plVar12;
    } while (plVar7 != (long *)0x0);
  }
LAB_0091d908:
  if (plVar12 != *(long **)(param_1 + 0x28)) {
    plVar7 = (long *)*plVar12;
    if ((long *)*plVar12 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar12[2];
        bVar2 = plVar12 == (long *)*plVar4;
        plVar12 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar7;
        plVar7 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if ((plVar4[5] <= (long)local_58) &&
       ((long)(local_58 + (long)param_3) <= plVar4[5] + (long)(int)plVar4[7])) {
      return 0;
    }
  }
  FUN_0091e648(0,param_1 + 0x28,param_1 + 0x28,&local_58,&local_58);
  plVar7 = *(long **)(param_1 + 0x30);
  plVar12 = (long *)(param_1 + 0x30);
  if (plVar7 == (long *)0x0) {
    do {
      plVar4 = (long *)plVar12[2];
      bVar2 = plVar12 == (long *)*plVar4;
      plVar12 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar7;
      plVar7 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
  }
  if (((local_58 != plVar4[5]) || (uStack_50 != plVar4[6])) || ((int)local_48 != (int)plVar4[7])) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  while (lVar3 != 0) {
    plVar7 = (long *)(param_1 + 0x30);
    plVar12 = *(long **)(param_1 + 0x30);
    if (*(long **)(param_1 + 0x30) == (long *)0x0) {
      do {
        plVar4 = (long *)plVar7[2];
        bVar2 = plVar7 == (long *)*plVar4;
        plVar7 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar12;
        plVar12 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar4[5] <= plVar7[5] + (long)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10))) break;
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_0091ddf8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                );
    }
    uVar10 = *(ulong *)(param_1 + 0x60);
    plVar12 = (long *)((*(undefined8 **)(param_1 + 0x48))[uVar10 / 0xaa] + (uVar10 % 0xaa) * 0x18);
    if (((plVar7[5] == *plVar12) && (plVar7[6] == plVar12[1])) &&
       ((int)plVar7[7] == (int)plVar12[2])) {
      if (plVar12 == (long *)0x0) goto LAB_0091de0c;
      *(ulong *)(param_1 + 0x60) = uVar10 + 1;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
      if (0x153 < uVar10 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x48));
        plVar7 = *(long **)(param_1 + 0x28);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 8;
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -0xaa;
      }
    }
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_0091ddf8;
    uVar10 = *(ulong *)(param_1 + 0x90);
    plVar12 = (long *)((*(undefined8 **)(param_1 + 0x78))[uVar10 / 0xaa] + (uVar10 % 0xaa) * 0x18);
    if (((plVar7[5] == *plVar12) && (plVar7[6] == plVar12[1])) &&
       ((int)plVar7[7] == (int)plVar12[2])) {
      if (plVar12 == (long *)0x0) goto LAB_0091de0c;
      *(ulong *)(param_1 + 0x90) = uVar10 + 1;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      if (0x153 < uVar10 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x78));
        plVar7 = *(long **)(param_1 + 0x28);
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -0xaa;
      }
    }
    plVar12 = plVar7;
    plVar4 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar12[2];
        bVar2 = plVar12 != (long *)*plVar5;
        plVar12 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    *(long **)(param_1 + 0x28) = plVar5;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x30),plVar7);
    if (plVar7 == (long *)0xffffffffffffffe0) {
LAB_0091de0c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar7);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  lVar3 = *(long *)(param_1 + 0x68);
  while ((lVar3 != 0 &&
         (uVar10 = (lVar3 + *(long *)(param_1 + 0x60)) - 1,
         plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x48) + (uVar10 / 0xaa) * 8) +
                          (uVar10 % 0xaa) * 0x18),
         (long)(uStack_50 - local_58) <= plVar7[1] - *plVar7))) {
    FUN_0091de34(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  lVar8 = *(long *)(param_1 + 0x98);
  if (lVar8 != 0) {
    do {
      uVar10 = (lVar8 + *(long *)(param_1 + 0x90)) - 1;
      plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + (uVar10 / 0xaa) * 8) +
                       (uVar10 % 0xaa) * 0x18);
      if ((long)(uStack_50 - local_58) < plVar7[1] - *plVar7) break;
      FUN_0091de34(param_1 + 0x70);
      lVar8 = *(long *)(param_1 + 0x98);
    } while (lVar8 != 0);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  lVar9 = *(long *)(param_1 + 0x48);
  lVar11 = *(long *)(param_1 + 0x50);
  lVar8 = 0;
  if (lVar11 != lVar9) {
    lVar8 = (lVar11 - lVar9 >> 3) * 0xaa + -1;
  }
  if (lVar8 == lVar3 + *(long *)(param_1 + 0x60)) {
    FUN_0091e760(param_1 + 0x40);
    lVar9 = *(long *)(param_1 + 0x48);
    lVar11 = *(long *)(param_1 + 0x50);
  }
  if ((lVar9 != lVar11) &&
     (uVar10 = *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x60),
     puVar6 = (ulong *)(*(long *)(lVar9 + (uVar10 / 0xaa) * 8) + (uVar10 % 0xaa) * 0x18),
     puVar6 != (ulong *)0x0)) {
    puVar6[2] = local_48;
    puVar6[1] = uStack_50;
    *puVar6 = local_58;
    lVar8 = *(long *)(param_1 + 0x78);
    lVar9 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    lVar3 = 0;
    if (lVar9 != lVar8) {
      lVar3 = (lVar9 - lVar8 >> 3) * 0xaa + -1;
    }
    if (lVar3 == *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90)) {
      FUN_0091e760(param_1 + 0x70);
      lVar8 = *(long *)(param_1 + 0x78);
      lVar9 = *(long *)(param_1 + 0x80);
    }
    if ((lVar8 != lVar9) &&
       (uVar10 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90),
       puVar6 = (ulong *)(*(long *)(lVar8 + (uVar10 / 0xaa) * 8) + (uVar10 % 0xaa) * 0x18),
       puVar6 != (ulong *)0x0)) {
      puVar6[2] = local_48;
      puVar6[1] = uStack_50;
      *puVar6 = local_58;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
LAB_0091d900:
  do {
    plVar12 = plVar4;
    plVar7 = (long *)*plVar7;
    plVar4 = plVar7;
  } while (plVar7 != (long *)0x0);
  goto LAB_0091d908;
}


// ===== 0091de34  FUN_0091de34 =====

void FUN_0091de34(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  uVar1 = lVar3 + -1 + *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    lVar2 = 0;
    if (lVar4 != lVar5) {
      lVar2 = (lVar4 - lVar5 >> 3) * 0xaa + -1;
    }
    if (0x153 < (lVar2 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar4 + -8));
      lVar3 = *(long *)(param_1 + 0x10) + -8;
      if (lVar3 == 0) goto LAB_0091def0;
      *(long *)(param_1 + 0x10) = lVar3;
    }
    return;
  }
LAB_0091def0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0091df18  FUN_0091df18 =====

void FUN_0091df18(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_28;
  
  puVar8 = (undefined8 *)(param_1 + 0x30);
  local_28 = param_1 + 0x28;
  FUN_0091e5d4(&local_28,*puVar8);
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  *puVar8 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar8;
  if (puVar2 != *(undefined8 **)(param_1 + 0x50)) {
    uVar6 = *(ulong *)(param_1 + 0x60);
    uVar1 = *(long *)(param_1 + 0x68) + uVar6;
    plVar5 = puVar2 + uVar6 / 0xaa;
    lVar7 = *plVar5;
    lVar4 = lVar7 + (uVar6 % 0xaa) * 0x18;
    while (lVar4 != puVar2[uVar1 / 0xaa] + (uVar1 % 0xaa) * 0x18) {
      if (lVar4 == 0) goto LAB_0091e140;
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar7 == 0xff0) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        lVar4 = lVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar4 = (long)*(undefined8 **)(param_1 + 0x50) - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    *(undefined8 **)(param_1 + 0x48) = puVar2;
    lVar4 = *(long *)(param_1 + 0x50) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x55;
LAB_0091e030:
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  else if (uVar1 == 2) {
    uVar3 = 0xaa;
    goto LAB_0091e030;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != *(undefined8 **)(param_1 + 0x80)) {
    uVar6 = *(ulong *)(param_1 + 0x90);
    uVar1 = *(long *)(param_1 + 0x98) + uVar6;
    plVar5 = puVar2 + uVar6 / 0xaa;
    lVar7 = *plVar5;
    lVar4 = lVar7 + (uVar6 % 0xaa) * 0x18;
    while (lVar4 != puVar2[uVar1 / 0xaa] + (uVar1 % 0xaa) * 0x18) {
      if (lVar4 == 0) {
LAB_0091e140:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar7 == 0xff0) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        lVar4 = lVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar4 = (long)*(undefined8 **)(param_1 + 0x80) - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + 8);
    *(undefined8 **)(param_1 + 0x78) = puVar2;
    lVar4 = *(long *)(param_1 + 0x80) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x55;
  }
  else {
    if (uVar1 != 2) goto LAB_0091e118;
    uVar3 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x90) = uVar3;
LAB_0091e118:
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}


// ===== 0091e154  FUN_0091e154 =====

uint FUN_0091e154(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    uVar7 = (ulong)param_2;
    lVar8 = *(long *)(param_1 + 0x68);
  }
  else {
    uVar5 = param_2 - *(uint *)(param_1 + 0x20);
    bVar6 = *(uint *)(param_1 + 0x20) <= param_2 && uVar5 != 0;
    if (uVar5 != 0x80000000) {
      bVar6 = uVar5 != 0xffffffff && (int)(uVar5 + 1) < 0 == SCARRY4(uVar5,1);
    }
    uVar7 = (ulong)uVar5;
    if (!bVar6) {
      uVar7 = (ulong)uVar5 | 0xffffffff00000000;
    }
    uVar7 = uVar7 + *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(param_1 + 0x68);
  }
  if (lVar8 != 0) {
    lVar8 = (long)*(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (lVar8 != 0) {
      iVar1 = (int)((long)uVar7 / lVar8);
    }
    plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x48) + (*(ulong *)(param_1 + 0x60) / 0xaa) * 8)
                     + (*(ulong *)(param_1 + 0x60) % 0xaa) * 0x18);
    iVar2 = 0;
    if (lVar8 != 0) {
      iVar2 = (int)((**(long **)(param_1 + 8) * (long)(int)(*(long **)(param_1 + 8))[1] * lVar8) /
                   lVar8);
    }
    iVar3 = 0;
    if (lVar8 != 0) {
      iVar3 = (int)(plVar9[1] / lVar8);
    }
    iVar4 = 0;
    if (lVar8 != 0) {
      iVar4 = (int)(*plVar9 / lVar8);
    }
    uVar5 = ((iVar2 - iVar1) - iVar3) + iVar4;
    return uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  }
  return 0;
}


// ===== 0091e21c  FUN_0091e21c =====

uint FUN_0091e21c(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    lVar8 = (long)*(int *)(param_1 + 0x14);
    plVar6 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + (*(ulong *)(param_1 + 0x90) / 0xaa) * 8)
                     + (*(ulong *)(param_1 + 0x90) % 0xaa) * 0x18);
    iVar2 = 0;
    if (lVar8 != 0) {
      iVar2 = (int)(*plVar6 / lVar8);
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x48) + (*(ulong *)(param_1 + 0x60) / 0xaa) * 8)
                     + (*(ulong *)(param_1 + 0x60) % 0xaa) * 0x18);
    iVar3 = 0;
    if (lVar8 != 0) {
      iVar3 = (int)(plVar7[1] / lVar8);
    }
    iVar4 = 0;
    if (lVar8 != 0) {
      iVar4 = (int)(plVar6[1] / lVar8);
    }
    iVar5 = 0;
    if (lVar8 != 0) {
      iVar5 = (int)(*plVar7 / lVar8);
    }
    uVar1 = (iVar4 - (iVar3 + iVar2)) + iVar5;
    return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  return 0;
}


// ===== 0091e2b8  FUN_0091e2b8 =====

bool FUN_0091e2b8(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      uVar5 = (ulong)param_2;
      plVar6 = *(long **)(param_1 + 0x30);
    }
    else {
      uVar1 = param_2 - *(uint *)(param_1 + 0x20);
      bVar2 = *(uint *)(param_1 + 0x20) <= param_2 && uVar1 != 0;
      if (uVar1 != 0x80000000) {
        bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
      }
      uVar5 = (ulong)uVar1;
      if (!bVar2) {
        uVar5 = (ulong)uVar1 | 0xffffffff00000000;
      }
      uVar5 = uVar5 + *(long *)(param_1 + 0x18);
      plVar6 = *(long **)(param_1 + 0x30);
    }
    plVar3 = (long *)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar3[2];
        bVar2 = plVar3 == (long *)*plVar4;
        plVar3 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    return uVar5 == plVar4[5];
  }
  return true;
}


// ===== 0091e354  FUN_0091e354 =====

void FUN_0091e354(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3d950;
  FUN_0091e400(param_1 + 0xe);
  FUN_0091e400(param_1 + 8);
  local_8 = param_1 + 5;
  FUN_0091e5d4(&local_8,param_1[6]);
  return;
}


// ===== 0091e3a4  FUN_0091e3a4 =====

void FUN_0091e3a4(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3d950;
  FUN_0091e400(param_1 + 0xe);
  FUN_0091e400(param_1 + 8);
  local_8 = param_1 + 5;
  FUN_0091e5d4(&local_8,param_1[6]);
  operator_delete(param_1);
  return;
}


// ===== 0091e400  FUN_0091e400 =====

void FUN_0091e400(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar5 = param_1[4];
    plVar3 = puVar9 + uVar5 / 0xaa;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0xaa) * 0x18;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0xaa] + ((param_1[5] + uVar5) % 0xaa) * 0x18) {
      if (lVar4 == 0) goto LAB_0091e584;
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar6 == 0xff0) {
        plVar3 = plVar3 + 1;
        lVar6 = *plVar3;
        lVar4 = lVar6;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar1 = 0x55;
  }
  else {
    if (uVar5 != 2) goto LAB_0091e4fc;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_0091e4fc:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar7 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  if ((1 < uVar5) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar5;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_0091e584:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0091e5d4  FUN_0091e5d4 =====

void FUN_0091e5d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0091e5d4(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0091e648  FUN_0091e648 =====

undefined1  [16]
FUN_0091e648(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0091e6b4;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0091e730;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_0091e6b4:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *param_4;
  lVar9 = param_5[1];
  lVar8 = *param_5;
  lVar6 = param_5[2];
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = lVar5;
  plVar2[6] = lVar9;
  plVar2[5] = lVar8;
  plVar2[7] = lVar6;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0091e730:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = plVar2;
  return auVar10;
}


// ===== 0091e760  FUN_0091e760 =====

void FUN_0091e760(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0xaa) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xff0);
      FUN_0091ebd0(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0091f0f4(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xff0);
      FUN_0091ebd0(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_0091ee58(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0091e948(param_1,&local_50);
  return;
}


// ===== 0091e948  FUN_0091e948 =====

void FUN_0091e948(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0091ebb8;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0091ebb8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0091ebd0  FUN_0091ebd0 =====

void FUN_0091ebd0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0091ee40;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0091ee40:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0091ee58  FUN_0091ee58 =====

void FUN_0091ee58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0091f0dc;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_0091f0dc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0091f0f4  FUN_0091f0f4 =====

void FUN_0091f0f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0091f378;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_0091f378:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0091f390  FUN_0091f390 =====

void FUN_0091f390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[4] = 0;
  param_1[5] = param_3;
  *param_1 = &PTR_FUN_00d3d980;
  param_1[1] = param_2;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[6] = param_4;
  return;
}


// ===== 0091f3b4  FUN_0091f3b4 =====

void FUN_0091f3b4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d3d980;
  if (param_1[4] != 0) {
    plVar3 = (long *)param_1[3];
    plVar1 = param_1 + 2;
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[4] = 0;
    if (plVar3 != plVar1) {
      do {
        if (plVar3 + 2 == (long *)0x0) goto LAB_0091f4a0;
        plVar2 = (long *)plVar3[1];
        FUN_0091d3a4(plVar3 + 2);
        if (plVar3 == (long *)0x0) goto LAB_0091f4a0;
        operator_delete(plVar3);
        plVar3 = plVar2;
      } while (plVar2 != plVar1);
      if (param_1[4] != 0) {
        plVar3 = (long *)param_1[3];
        plVar2 = *(long **)(param_1[2] + 8);
        *(long **)(*plVar3 + 8) = plVar2;
        *plVar2 = *plVar3;
        param_1[4] = 0;
        while (plVar3 != plVar1) {
          if (plVar3 + 2 == (long *)0x0) {
LAB_0091f4a0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          plVar2 = (long *)plVar3[1];
          FUN_0091d3a4(plVar3 + 2);
          if (plVar3 == (long *)0x0) goto LAB_0091f4a0;
          operator_delete(plVar3);
          plVar3 = plVar2;
        }
      }
    }
  }
  return;
}


// ===== 0091f4b4  FUN_0091f4b4 =====

void FUN_0091f4b4(void *param_1)

{
  FUN_0091f3b4();
  operator_delete(param_1);
  return;
}


// ===== 0091f4e4  FUN_0091f4e4 =====

void FUN_0091f4e4(long *param_1,ulong param_2)

{
  param_1[1] = param_2;
  if (param_2 < (ulong)param_1[4]) {
    do {
      (**(code **)(*param_1 + 0x50))(param_1);
    } while ((ulong)param_1[1] < (ulong)param_1[4]);
  }
  return;
}


// ===== 0091f53c  FUN_0091f53c =====

void FUN_0091f53c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  for (plVar3 = *(long **)(param_1 + 0x18); plVar3 != (long *)(param_1 + 0x10);
      plVar3 = (long *)plVar3[1]) {
    lVar1 = 0x18;
    if ((int)plVar3[6] < 1) {
      lVar1 = 0x10;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + lVar1))(*(long **)(param_1 + 0x30),1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
    while (plVar3 != (long *)(param_1 + 0x10)) {
      if (plVar3 + 2 == (long *)0x0) {
LAB_0091f610:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar3[1];
      FUN_0091d3a4(plVar3 + 2);
      if (plVar3 == (long *)0x0) goto LAB_0091f610;
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  FUN_00921f14(*(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 0091f624  FUN_0091f624 =====

bool FUN_0091f624(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}


// ===== 0091f638  FUN_0091f638 =====

undefined4 FUN_0091f638(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  
  if ((*(long *)(param_2 + 0x28) == 0) && (*(long *)(param_2 + 2) == 0)) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/packet_buffer.cc",0x2a2,
                   "InsertPacket invalid packet");
    }
    return 4;
  }
  lVar14 = param_1[5];
  pvVar7 = operator_new(0x10);
  FUN_0090d5d0(pvVar7,lVar14);
  pvVar8 = *(void **)(param_2 + 0x26);
  *(void **)(param_2 + 0x26) = pvVar7;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if ((ulong)param_1[4] < (ulong)param_1[1]) {
    uVar13 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/packet_buffer.cc",0x31a,
                   "Packet buffer flushed.");
    }
    uVar13 = 1;
  }
  plVar10 = (long *)param_1[3];
  plVar9 = plVar10;
  if (param_1 + 2 != plVar10) {
    iVar2 = param_2[8];
    plVar11 = param_1 + 2;
    do {
      plVar12 = (long *)*plVar11;
      if ((int)plVar12[2] == *param_2) {
        uVar4 = (uint)*(ushort *)((long)plVar12 + 0x14) - (uint)*(ushort *)(param_2 + 1);
        if (uVar4 == 0) {
          iVar3 = (int)plVar12[6];
          bVar5 = SBORROW4(iVar2,iVar3);
          iVar1 = iVar2 - iVar3;
          if (iVar2 == iVar3) {
            bVar5 = SBORROW4(param_2[9],*(int *)((long)plVar12 + 0x34));
            iVar1 = param_2[9] - *(int *)((long)plVar12 + 0x34);
          }
          if (iVar1 < 0 == bVar5) {
LAB_0091f778:
            lVar14 = 0x18;
            if (iVar2 < 1) {
              lVar14 = 0x10;
            }
            (**(code **)(*(long *)param_1[6] + lVar14))((long *)param_1[6],1);
            return uVar13;
          }
        }
        else if (0x7ffe < (uVar4 & 0xffff)) goto LAB_0091f778;
      }
      else {
        plVar9 = plVar11;
        if (0x7ffffffe < (uint)((int)plVar12[2] - *param_2)) break;
      }
      plVar11 = plVar12;
      plVar9 = plVar10;
    } while (plVar12 != plVar10);
  }
  if ((plVar9 != param_1 + 2) && (*param_2 == (int)plVar9[2])) {
    lVar14 = 0x18;
    if ((int)plVar9[6] < 1) {
      lVar14 = 0x10;
    }
    (**(code **)(*(long *)param_1[6] + lVar14))((long *)param_1[6],1);
    plVar9 = (long *)FUN_0091f8a4(param_1 + 2,plVar9);
  }
  plVar10 = (long *)operator_new(0xb8);
  if (plVar10 != (long *)0x0) {
    *plVar10 = 0;
    plVar10[1] = 0;
    if (plVar10 + 2 != (long *)0x0) {
      FUN_0091d2d8(plVar10 + 2,param_2);
      *(long **)(*plVar9 + 8) = plVar10;
      *plVar10 = *plVar9;
      *plVar9 = (long)plVar10;
      lVar14 = param_1[4];
      plVar10[1] = (long)plVar9;
      param_1[4] = lVar14 + 1;
      return uVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0091f8a4  FUN_0091f8a4 =====

long * FUN_0091f8a4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar1 = (long *)param_2[1];
  *(long **)(*param_2 + 8) = plVar1;
  *plVar1 = *param_2;
  param_1[2] = param_1[2] + -1;
  if ((param_2 + 2 != (long *)0x0) && (FUN_0091d3a4(param_2 + 2), param_2 != (long *)0x0)) {
    operator_delete(param_2);
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0091f938  FUN_0091f938 =====

undefined8 FUN_0091f938(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if ((uVar1 & 1) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar2 = 5;
    }
    else {
      if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:834: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                  );
      }
      uVar2 = 0;
      *param_2 = *(undefined4 *)(param_1[3] + 0x10);
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}


// ===== 0091f9b0  FUN_0091f9b0 =====

undefined8 FUN_0091f9b0(long *param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if ((uVar1 & 1) == 0) {
    if (param_3 == (uint *)0x0) {
      uVar2 = 5;
    }
    else {
      for (plVar3 = (long *)param_1[3]; plVar3 != param_1 + 2; plVar3 = (long *)plVar3[1]) {
        if (param_2 <= *(uint *)(plVar3 + 2)) {
          *param_3 = *(uint *)(plVar3 + 2);
          return 0;
        }
      }
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}


// ===== 0091fa40  FUN_0091fa40 =====

long FUN_0091fa40(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(long *)(param_1 + 0x18) + 0x10;
  }
  return 0;
}


// ===== 0091fa60  FUN_0091fa60 =====

void FUN_0091fa60(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x20))();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    return;
  }
  lVar2 = param_2[4];
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x15] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  if (lVar2 != 0) {
    FUN_0091d2d8(param_1,param_2[3] + 0x10);
    *(undefined1 *)(param_1 + 0x15) = 1;
    FUN_0090ffac(param_2 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
            );
}


// ===== 0091fb04  FUN_0091fb04 =====

undefined8 FUN_0091fb04(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x20))();
  if ((uVar2 & 1) == 0) {
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                );
    }
    lVar1 = 0x18;
    if (*(int *)(param_1[3] + 0x30) < 1) {
      lVar1 = 0x10;
    }
    (**(code **)(*(long *)param_1[6] + lVar1))((long *)param_1[6],1);
    FUN_0090ffac(param_1 + 2);
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


// ===== 0091fb94  FUN_0091fb94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0091fb94(long param_1,uint param_2,int param_3)

{
  long *******ppppppplVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  long *******ppppppplVar5;
  long ******pppppplVar6;
  long lVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******local_78;
  long *******local_70;
  long local_68;
  
  ppppppplVar9 = *(long ********)(param_1 + 0x18);
  ppppppplVar1 = (long *******)(param_1 + 0x10);
  local_78 = (long *******)&local_78;
  local_68 = 0;
  if (ppppppplVar9 != ppppppplVar1) {
    uVar3 = param_2 - param_3;
    local_70 = local_78;
    do {
      uVar2 = *(uint *)(ppppppplVar9 + 2);
      if (param_2 == uVar2) {
LAB_0091fbf4:
        ppppppplVar9 = (long *******)ppppppplVar9[1];
      }
      else {
        if (param_2 - uVar2 != -0x80000000) {
          if (-1 < (int)(param_2 - uVar2)) goto LAB_0091fc28;
          goto LAB_0091fbf4;
        }
        if (param_2 <= uVar2) goto LAB_0091fbf4;
LAB_0091fc28:
        if (param_3 != 0) {
          if (uVar2 - uVar3 == -0x80000000) {
            if (uVar3 < uVar2) goto LAB_0091fc50;
          }
          else if ((uVar2 != uVar3) && (-1 < (int)(uVar2 - uVar3))) goto LAB_0091fc50;
          goto LAB_0091fbf4;
        }
LAB_0091fc50:
        lVar7 = 0x18;
        if (*(int *)(ppppppplVar9 + 6) < 1) {
          lVar7 = 0x10;
        }
        (**(code **)(**(long **)(param_1 + 0x30) + lVar7))(*(long **)(param_1 + 0x30),1);
        for (ppppppplVar10 = (long *******)ppppppplVar9[1]; uVar4 = true,
            ppppppplVar10 != ppppppplVar1; ppppppplVar10 = *(long ********)((long)ppppppplVar10 + 8)
            ) {
          uVar2 = *(uint *)((long)ppppppplVar10 + 0x10);
          if (param_2 == uVar2) {
LAB_0091fd10:
            uVar4 = false;
            break;
          }
          if (param_2 - uVar2 != -0x80000000) {
            if (-1 < (int)(param_2 - uVar2)) goto LAB_0091fcf4;
            goto LAB_0091fd10;
          }
          if (param_2 <= uVar2) goto LAB_0091fd10;
LAB_0091fcf4:
          if (param_3 != 0) {
            if (uVar2 - uVar3 == -0x80000000) {
              if (uVar2 <= uVar3) {
                uVar4 = false;
                break;
              }
            }
            else if ((uVar2 == uVar3) || ((int)(uVar2 - uVar3) < 0)) goto LAB_0091fd10;
          }
          lVar7 = 0x18;
          if (*(int *)((long)ppppppplVar10 + 0x30) < 1) {
            lVar7 = 0x10;
          }
          (**(code **)(**(long **)(param_1 + 0x30) + lVar7))(*(long **)(param_1 + 0x30),1);
        }
        if (ppppppplVar9 != ppppppplVar10) {
          ppppppplVar5 = (long *******)*ppppppplVar10;
          if (&local_78 != (long ********)ppppppplVar1) {
            lVar7 = 1;
            for (ppppppplVar8 = ppppppplVar9; ppppppplVar8 != ppppppplVar5;
                ppppppplVar8 = (long *******)ppppppplVar8[1]) {
              lVar7 = lVar7 + 1;
            }
            local_68 = local_68 + lVar7;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar7;
          }
          pppppplVar6 = ppppppplVar5[1];
          (*ppppppplVar9)[1] = (long *****)pppppplVar6;
          *pppppplVar6 = (long *****)*ppppppplVar9;
          *(long ********)((long)local_78 + 8) = ppppppplVar9;
          *ppppppplVar9 = (long ******)local_78;
          ppppppplVar5[1] = (long ******)&local_78;
          local_78 = ppppppplVar5;
        }
        ppppppplVar9 = ppppppplVar10;
        if (!(bool)uVar4) goto LAB_0091fbf4;
      }
    } while (ppppppplVar9 != ppppppplVar1);
    if (local_68 != 0) {
      pppppplVar6 = local_78[1];
      (*local_70)[1] = (long *****)pppppplVar6;
      *pppppplVar6 = (long *****)*local_70;
      local_68 = 0;
      ppppppplVar1 = local_70;
      while ((long ********)ppppppplVar1 != &local_78) {
        if (ppppppplVar1 + 2 == (long *******)0x0) {
LAB_0091fe38:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        ppppppplVar9 = (long *******)ppppppplVar1[1];
        FUN_0091d3a4(ppppppplVar1 + 2);
        if (ppppppplVar1 == (long *******)0x0) goto LAB_0091fe38;
        operator_delete(ppppppplVar1);
        ppppppplVar1 = ppppppplVar9;
      }
    }
  }
  return;
}


// ===== 0091fe4c  FUN_0091fe4c =====

void FUN_0091fe4c(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0091fe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,param_2,0);
  return;
}


// ===== 0091fe60  FUN_0091fe60 =====

void FUN_0091fe60(long param_1,char param_2)

{
  long ****pppplVar1;
  bool bVar2;
  long ****pppplVar3;
  long lVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ***local_78;
  long ***local_70;
  long local_68;
  
  pppplVar7 = *(long *****)(param_1 + 0x18);
  pppplVar1 = (long ****)(param_1 + 0x10);
  local_68 = 0;
  local_78 = (long ***)&local_78;
  local_70 = (long ***)&local_78;
  if (pppplVar7 != pppplVar1) {
    do {
      if (*(char *)((long)pppplVar7 + 0x16) == param_2) {
        bVar2 = true;
        lVar4 = 0x18;
        if (*(int *)(pppplVar7 + 6) < 1) {
          lVar4 = 0x10;
        }
        (**(code **)(**(long **)(param_1 + 0x30) + lVar4))(*(long **)(param_1 + 0x30),1);
        for (pppplVar8 = (long ****)pppplVar7[1];
            (pppplVar8 != pppplVar1 && (bVar2 = *(char *)((long)pppplVar8 + 0x16) == param_2, bVar2)
            ); pppplVar8 = (long ****)pppplVar8[1]) {
          lVar4 = 0x18;
          if (*(int *)(pppplVar8 + 6) < 1) {
            lVar4 = 0x10;
          }
          (**(code **)(**(long **)(param_1 + 0x30) + lVar4))(*(long **)(param_1 + 0x30),1);
        }
        if (pppplVar7 != pppplVar8) {
          pppplVar3 = (long ****)*pppplVar8;
          if (&local_78 != pppplVar1) {
            lVar4 = 1;
            for (pppplVar6 = pppplVar7; pppplVar6 != pppplVar3; pppplVar6 = (long ****)pppplVar6[1])
            {
              lVar4 = lVar4 + 1;
            }
            local_68 = local_68 + lVar4;
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar4;
          }
          ppplVar5 = pppplVar3[1];
          (*pppplVar7)[1] = (long **)ppplVar5;
          *ppplVar5 = (long **)*pppplVar7;
          ((long ****)local_78)[1] = (long ***)pppplVar7;
          *pppplVar7 = local_78;
          pppplVar3[1] = (long ***)&local_78;
          local_78 = (long ***)pppplVar3;
        }
        pppplVar7 = pppplVar8;
        if (!bVar2) goto LAB_0091feb8;
      }
      else {
LAB_0091feb8:
        pppplVar7 = (long ****)pppplVar7[1];
      }
    } while (pppplVar7 != pppplVar1);
    if (local_68 != 0) {
      ppplVar5 = (long ***)local_78[1];
      (*local_70)[1] = (long *)ppplVar5;
      *ppplVar5 = *local_70;
      local_68 = 0;
      pppplVar1 = (long ****)local_70;
      while (pppplVar1 != &local_78) {
        if (pppplVar1 + 2 == (long ****)0x0) {
LAB_00920040:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppplVar7 = (long ****)pppplVar1[1];
        FUN_0091d3a4(pppplVar1 + 2);
        if (pppplVar1 == (long ****)0x0) goto LAB_00920040;
        operator_delete(pppplVar1);
        pppplVar1 = pppplVar7;
      }
    }
  }
  return;
}


// ===== 00920054  FUN_00920054 =====

undefined8 FUN_00920054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00920060  FUN_00920060 =====

long FUN_00920060(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == param_1 + 0x10) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (*(long **)(lVar3 + 0xb0) == (long *)0x0) {
LAB_009200a4:
        lVar2 = param_2 + lVar2;
      }
      else if ((*(int *)(lVar3 + 0x30) == 0) && (*(int *)(lVar3 + 0x34) == 0)) {
        lVar1 = (**(code **)(**(long **)(lVar3 + 0xb0) + 0x10))();
        if (lVar1 != 0) {
          param_2 = lVar1;
        }
        goto LAB_009200a4;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1 + 0x10);
  }
  return lVar2;
}


// ===== 009200ec  FUN_009200ec =====

long FUN_009200ec(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar4 + 0x10);
    iVar3 = *(int *)(*(long *)(param_1 + 0x18) + 0x10);
    plVar1 = (long *)**(long **)(lVar4 + 0xa8);
    uVar9 = (ulong)(int)plVar1[1];
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = 0xffffffffffffffff / uVar9;
    }
    uVar7 = *plVar1 - (*(long **)(lVar4 + 0xa8))[1];
    lVar8 = uVar7 * uVar9;
    if (uVar6 <= uVar7) {
      lVar8 = -1;
    }
    uVar9 = lVar8 * (param_3 / 1000);
    uVar6 = uVar9;
    if ((((param_4 & 1) == 0) && (uVar6 = param_2, *(long **)(lVar4 + 0xb0) != (long *)0x0)) &&
       (lVar4 = (**(code **)(**(long **)(lVar4 + 0xb0) + 0x10))(), lVar4 != 0)) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0xb0) + 0x10))(),
         *(long *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:842: libc++ Hardening assertion !empty() failed: list::back called on empty list\n"
                  );
      }
      uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0xb0) + 0x18))();
      uVar6 = uVar7;
      if (uVar7 <= uVar9) {
        uVar6 = uVar9;
      }
      if ((uVar5 & 1) == 0) {
        uVar6 = uVar7;
      }
    }
    lVar4 = uVar6 + (uint)(iVar2 - iVar3);
  }
  return lVar4;
}


// ===== 0092021c  FUN_0092021c =====

undefined8 FUN_0092021c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == param_1 + 0x10) {
      return 0;
    }
    if (((*(long **)(lVar2 + 0xb0) != (long *)0x0) &&
        (uVar1 = (**(code **)(**(long **)(lVar2 + 0xb0) + 0x18))(), (uVar1 & 1) != 0)) ||
       (uVar1 = FUN_00914644(param_2,*(undefined1 *)(lVar2 + 0x16)), (uVar1 & 1) != 0)) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return 1;
}


// ===== 00920298  FUN_00920298 =====

undefined8
FUN_00920298(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x168) = param_4;
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_3 / uVar3;
    }
    if (((ulong)((long)*(int *)(param_1 + 0xc) * 0xef) <= uVar1) &&
       (param_4 < uVar1 - *(long *)(param_1 + 0x170))) {
      uVar2 = FUN_00926074();
      return uVar2;
    }
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_2;
  }
  FUN_00915be0(param_5,uVar2);
  return 0xffffffff;
}


// ===== 00920304  FUN_00920304 =====

void FUN_00920304(long param_1,long param_2,undefined2 *param_3,ulong *param_4)

{
  ulong uVar1;
  
  *param_3 = 0;
  uVar1 = param_2 - *(long *)(param_1 + 0x168);
  if (*param_4 <= uVar1) {
    uVar1 = *param_4;
  }
  *param_4 = uVar1;
  return;
}


// ===== 00920328  FUN_00920328 =====

uint FUN_00920328(long param_1,long param_2,long param_3,long param_4,short param_5,uint param_6,
                 undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  uVar2 = (ulong)(*(int *)(param_1 + 0xc) * 0x78);
  if (param_5 < 0x399b) {
    if ((param_6 & 1) != 0) goto LAB_00920394;
    uVar4 = *(ulong *)(param_1 + 0x168);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x168);
    if (((param_6 & 1) != 0) && (uVar2 < uVar4)) {
LAB_00920394:
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = param_2;
      }
      FUN_00915be0(param_8,lVar1,param_3);
      return 2;
    }
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  lVar1 = 0;
  if ((uVar4 + param_4) * *(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_2;
  }
  FUN_00915be0(param_8,lVar1);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009157a8(&local_70,*(undefined8 *)(param_1 + 0x10));
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) * param_4 != 0) {
    lVar1 = param_2 + *(long *)(param_1 + 0x10) * (uVar4 - param_4) * 2;
  }
  FUN_00915be0(&local_70,lVar1);
  FUN_009164c8(param_8,&local_70,param_4);
  lVar3 = *(long *)(param_1 + 0x10) * uVar4;
  param_3 = param_3 - lVar3;
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_2 + lVar3 * 2;
  }
  FUN_00915be0(param_8,lVar1,param_3);
  FUN_00915980(&local_70);
  return (param_6 ^ 0xffffffff) & 1;
}


// ===== 00920470  FUN_00920470 =====

void FUN_00920470(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined2 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_00d3da20;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = param_5;
  *(int *)(puVar1 + 1) = param_2;
  *(int *)((long)puVar1 + 0xc) = param_2 / 8000;
  *(undefined8 *)((long)puVar1 + 0x106) = 0;
  *(undefined8 *)((long)puVar1 + 0xfe) = 0;
  *(undefined8 *)((long)puVar1 + 0x116) = 0;
  *(undefined8 *)((long)puVar1 + 0x10e) = 0;
  *(undefined8 *)((long)puVar1 + 0x126) = 0;
  *(undefined8 *)((long)puVar1 + 0x11e) = 0;
  *(undefined8 *)((long)puVar1 + 0x136) = 0;
  *(undefined8 *)((long)puVar1 + 0x12e) = 0;
  *(undefined8 *)((long)puVar1 + 0x146) = 0;
  *(undefined8 *)((long)puVar1 + 0x13e) = 0;
  *(undefined8 *)((long)puVar1 + 0x156) = 0;
  *(undefined8 *)((long)puVar1 + 0x14e) = 0;
  *(undefined8 *)((long)puVar1 + 0x15c) = 0;
  return;
}


// ===== 00920500  FUN_00920500 =====

void FUN_00920500(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0092050c  FUN_0092050c =====

void FUN_0092050c(void)

{
  return;
}


// ===== 00920514  FUN_00920514 =====

void FUN_00920514(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00920520  FUN_00920520 =====

void FUN_00920520(undefined4 *param_1)

{
  *param_1 = 0x309;
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}


// ===== 00920538  FUN_00920538 =====

void FUN_00920538(uint *param_1,long param_2,undefined2 *param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      uVar1 = *param_1 + (int)(short)param_1[1];
      *param_1 = uVar1;
      *param_3 = *(undefined2 *)(&DAT_00225e8a + (ulong)(uVar1 & 0xff) * 2);
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return;
}


// ===== 00920570  FUN_00920570 =====

void FUN_00920570(long param_1,short param_2)

{
  *(ushort *)(param_1 + 4) = *(short *)(param_1 + 4) + param_2 & 0xff;
  return;
}


// ===== 00920588  FUN_00920588 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00920588(undefined8 param_1,undefined8 *******param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  undefined8 ******ppppppuVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  long lVar12;
  undefined8 ******ppppppuVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 local_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 *******local_a0;
  undefined8 *******pppppppuStack_98;
  long local_90;
  undefined8 ******local_88;
  undefined8 ******local_80;
  undefined8 ******local_78;
  undefined8 ******local_70 [2];
  
  pppppppuVar16 = (undefined8 *******)param_2[1];
  uVar4 = 1;
  do {
    if (pppppppuVar16 == param_2) {
      return uVar4;
    }
    ppppppuVar18 = pppppppuVar16[5];
    ppppppuVar13 = pppppppuVar16[3];
    ppppppuVar8 = (undefined8 ******)0x0;
    lVar12 = 0;
    local_88 = (undefined8 ******)0x0;
    local_80 = (undefined8 ******)0x0;
    local_78 = (undefined8 ******)0x0;
    do {
      if (ppppppuVar13 == (undefined8 ******)0x0) {
        uVar14 = FUN_004022fc();
        if ((uVar14 & 1) == 0) {
          uVar7 = 0x23a;
LAB_009208b4:
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/red_payload_splitter.cc",
                       uVar7,"SplitRed header too short");
        }
LAB_009208c0:
        bVar2 = false;
        goto LAB_00920964;
      }
      pppppppuStack_98 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      cVar3 = *(char *)ppppppuVar18;
      local_a0 = (undefined8 *******)(CONCAT71(0xaaaaaaaaaaaaaa,cVar3) & 0xffffffffffffff7f);
      if (cVar3 < '\0') {
        if (ppppppuVar13 < (undefined8 ******)0x4) {
          uVar14 = FUN_004022fc();
          if ((uVar14 & 1) == 0) {
            uVar7 = 0x2c2;
            goto LAB_009208b4;
          }
          goto LAB_009208c0;
        }
        lVar15 = -4;
        lVar17 = 4;
        iVar11 = *(int *)(pppppppuVar16 + 2) -
                 ((uint)(*(byte *)((long)ppppppuVar18 + 2) >> 2) |
                 (uint)*(byte *)((long)ppppppuVar18 + 1) << 6);
        pppppppuStack_98 =
             (undefined8 *******)
             ((ulong)*(byte *)((long)ppppppuVar18 + 3) |
             ((ulong)*(byte *)((long)ppppppuVar18 + 2) & 3) << 8);
        lVar12 = (long)pppppppuStack_98 + lVar12 + 4;
      }
      else {
        iVar11 = *(int *)(pppppppuVar16 + 2);
        lVar12 = lVar12 + 1;
        lVar15 = -1;
        lVar17 = 1;
        pppppppuStack_98 = (undefined8 *******)((long)pppppppuVar16[3] - lVar12);
      }
      local_a0 = (undefined8 *******)CONCAT44(iVar11,local_a0._0_4_);
      if (pppppppuStack_98 != (undefined8 *******)0x0) {
        local_150 = local_70;
        pppppppuStack_148 = &local_a0;
        local_140 = &local_88;
        local_70[0] = ppppppuVar8;
        if (ppppppuVar8 < local_78) {
          if (ppppppuVar8 == (undefined8 ******)0x0) goto LAB_00920a38;
          local_70[0] = ppppppuVar8 + 2;
          ppppppuVar8[1] = pppppppuStack_98;
          *ppppppuVar8 = local_a0;
        }
        else {
          FUN_00920b44(&local_150);
        }
        local_80 = local_70[0];
        ppppppuVar8 = local_70[0];
      }
      ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + lVar17);
      ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + lVar15);
    } while (cVar3 < '\0');
    if ((ulong)((long)ppppppuVar8 - (long)local_88) < 0x201) {
      local_90 = 0;
      local_a0 = &local_a0;
      pppppppuStack_98 = &local_a0;
      if (ppppppuVar8 != local_88) {
        uVar9 = (ulong)((long)ppppppuVar8 - (long)local_88) >> 4;
        lVar12 = 0;
        uVar14 = 0;
        iVar11 = -1;
        do {
          if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          puVar1 = (undefined1 *)((long)local_88 + lVar12);
          pppppppuVar19 = *(undefined8 ********)(puVar1 + 8);
          if ((undefined8 ******)((long)pppppppuVar16[5] + (long)pppppppuVar16[3]) <
              (undefined8 ******)((long)ppppppuVar18 + (long)pppppppuVar19)) {
            uVar14 = FUN_004022fc();
            if ((uVar14 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/neteq/red_payload_splitter.cc",
                           0x3da,"SplitRed length mismatch");
            }
            uVar4 = 0;
            break;
          }
          pppppppuStack_148 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          local_150 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
          local_138 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          local_140 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          local_130 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0091d2b8(&local_150);
          local_130 = (undefined1 *)
                      CONCAT44(iVar11 + (int)((ulong)((long)local_80 - (long)local_88) >> 4),
                               (undefined4)local_130);
          pppppppuStack_148 = (undefined8 *******)0x0;
          local_150 = (undefined8 ******)
                      CONCAT26(CONCAT11(local_150._7_1_,*puVar1),
                               CONCAT24(*(undefined2 *)((long)pppppppuVar16 + 0x14),
                                        *(undefined4 *)(puVar1 + 4)));
          if (pppppppuVar19 != (undefined8 *******)0x0) {
            if (local_140 < pppppppuVar19) {
              pppppppuVar10 = (undefined8 *******)((long)local_140 + ((ulong)local_140 >> 1));
              pppppppuVar6 = pppppppuVar19;
              if (pppppppuVar19 <= pppppppuVar10) {
                pppppppuVar6 = pppppppuVar10;
              }
              pppppppuVar5 = (undefined8 *******)operator_new__((ulong)pppppppuVar6);
              pppppppuVar10 = local_138;
              bVar2 = local_138 != (undefined8 *******)0x0;
              local_138 = pppppppuVar5;
              if (bVar2) {
                operator_delete__(pppppppuVar10);
                pppppppuVar10 = pppppppuStack_148;
              }
            }
            else {
              pppppppuVar10 = (undefined8 *******)0x0;
              pppppppuVar6 = local_140;
            }
            local_140 = pppppppuVar6;
            memcpy((void *)((long)local_138 + (long)pppppppuVar10),ppppppuVar18,
                   (size_t)pppppppuVar19);
            pppppppuStack_148 = pppppppuVar19;
          }
          pppppppuVar6 = (undefined8 *******)operator_new(0xb8);
          if (pppppppuVar6 == (undefined8 *******)0x0) {
LAB_00920a38:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *pppppppuVar6 = (undefined8 ******)0x0;
          pppppppuVar6[1] = (undefined8 ******)0x0;
          FUN_0091d2d8(pppppppuVar6 + 2,&local_150);
          *pppppppuVar6 = &local_a0;
          pppppppuVar6[1] = pppppppuStack_98;
          *pppppppuStack_98 = pppppppuVar6;
          local_90 = local_90 + 1;
          pppppppuStack_98 = pppppppuVar6;
          FUN_0091d3a4(&local_150);
          uVar14 = uVar14 + 1;
          iVar11 = iVar11 + -1;
          lVar12 = lVar12 + 0x10;
          uVar9 = (long)local_80 - (long)local_88 >> 4;
          ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + (long)pppppppuVar19);
        } while (uVar14 != uVar9);
      }
      pppppppuVar19 = local_a0;
      if ((undefined8 ********)param_2 == &local_a0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:1500: libc++ Hardening assertion this != std::addressof(__c) failed: list::splice(iterator, list) called with this == &list\n"
                  );
      }
      if (local_90 != 0) {
        ppppppuVar18 = local_a0[1];
        (*pppppppuStack_98)[1] = ppppppuVar18;
        *ppppppuVar18 = *pppppppuStack_98;
        (*pppppppuVar16)[1] = pppppppuStack_98;
        *pppppppuStack_98 = *pppppppuVar16;
        *pppppppuVar16 = pppppppuVar19;
        pppppppuVar19[1] = pppppppuVar16;
        param_2[2] = (undefined8 ******)((long)param_2[2] + local_90);
      }
    }
    else {
      uVar14 = FUN_004022fc();
      if ((uVar14 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6643,"../../modules/audio_coding/neteq/red_payload_splitter.cc",0x472,
                     "SplitRed too many blocks: ",(long)local_80 - (long)local_88 >> 4);
      }
      uVar4 = 0;
    }
    pppppppuVar16 = (undefined8 *******)FUN_0091f8a4(param_2,pppppppuVar16);
    bVar2 = true;
LAB_00920964:
    if (local_88 != (undefined8 ******)0x0) {
      uVar9 = (ulong)((long)local_80 + (-0x10 - ((long)local_80 << 0x3c))) >> 4;
      uVar14 = (ulong)(((long)local_88 - (long)local_80 << 0x3c) - ((long)local_88 - (long)local_80)
                      ) >> 4;
      if (uVar9 <= uVar14) {
        uVar14 = uVar9;
      }
      ppppppuVar18 = local_80;
      if ((1 < uVar14) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 0xfU) == 0)) {
        uVar14 = uVar14 & 0xffffffffffffffe;
        ppppppuVar18 = local_80 + uVar14 * -2;
        do {
          uVar14 = uVar14 - 2;
        } while (uVar14 != 0);
      }
      while (ppppppuVar18 != local_88) {
        ppppppuVar18 = ppppppuVar18 + -2;
        if (ppppppuVar18 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (!bVar2) {
      return 0;
    }
  } while( true );
}


// ===== 00920a74  FUN_00920a74 =====

void FUN_00920a74(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != param_2) {
    uVar6 = 0xffffffff;
    do {
      while( true ) {
        bVar1 = *(byte *)(lVar4 + 0x16);
        uVar5 = (uint)bVar1;
        uVar3 = FUN_009146ac(param_3,uVar5);
        if (((uVar3 & 1) != 0) ||
           ((((uVar3 = FUN_00914678(param_3,uVar5), uVar2 = uVar6, (uVar3 & 1) == 0 &&
              (uVar3 = FUN_00914644(param_3,uVar5), (uVar3 & 1) == 0)) &&
             (uVar2 = uVar5, uVar6 != 0xffffffff)) && (uVar2 = uVar6, uVar6 != bVar1)))) break;
        uVar6 = uVar2;
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == param_2) {
          return;
        }
      }
      lVar4 = FUN_0091f8a4(param_2,lVar4);
    } while (lVar4 != param_2);
  }
  return;
}


// ===== 00920b30  FUN_00920b30 =====

void FUN_00920b30(void)

{
  return;
}


// ===== 00920b38  FUN_00920b38 =====

void FUN_00920b38(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00920b44  FUN_00920b44 =====

void FUN_00920b44(undefined8 *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)param_1[2];
  puVar6 = (undefined8 *)(plVar7[1] - *plVar7);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00920c48();
LAB_00920c44:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  puVar8 = (undefined8 *)param_1[1];
  uVar4 = plVar7[2] - *plVar7;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_00920c44;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = *puVar8;
    puVar6[1] = puVar8[1];
    *puVar6 = uVar9;
    __n = plVar7[1] - *plVar7;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*plVar7,__n);
    pvVar3 = (void *)*plVar7;
    *plVar7 = (long)__dest;
    plVar7[1] = (long)(puVar6 + 2);
    plVar7[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(undefined8 **)*param_1 = puVar6 + 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00920c48  FUN_00920c48 =====

void FUN_00920c48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00920c60  FUN_00920c60 =====

void FUN_00920c60(long param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  FUN_0090df68(param_1,100,param_2,(ulong)(double)(int)param_4 & (long)(param_4 << 0x1f) >> 0x3f,
               param_4 >> 0x20 & 1);
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}


// ===== 00920cb4  FUN_00920cb4 =====

void FUN_00920cb4(long param_1,int param_2,uint param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  param_2 = param_2 / 0x14;
  if ((param_3 & 1) == 0) {
    param_2 = 0;
  }
  iVar3 = FUN_0090e4bc();
  if (param_2 < iVar3) {
    FUN_0090e1f0(param_1,param_2);
  }
  uVar6 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar4 = (long)uVar6 >> 2;
  if ((int)uVar4 < 1) {
    iVar3 = 0x14;
  }
  else {
    uVar5 = 0;
    uVar7 = -param_4;
    lVar9 = 0x40000000;
    lVar8 = 0x7fffffffffffffff;
    iVar3 = 0;
    do {
      if (uVar4 == uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      lVar9 = lVar9 - *(int *)(*(long *)(param_1 + 8) + uVar5 * 4);
      lVar1 = lVar9 * (*(int *)(param_1 + 0x40) * 100) +
              (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) * 0x40000000;
      iVar2 = (int)uVar5;
      if (lVar8 <= lVar1) {
        iVar2 = iVar3;
      }
      if (lVar9 == 0) break;
      uVar5 = uVar5 + 1;
      if (lVar8 <= lVar1) {
        lVar1 = lVar8;
      }
      uVar7 = uVar7 + 0x14;
      lVar8 = lVar1;
      iVar3 = iVar2;
    } while ((uVar6 >> 2 & 0x7fffffff) != uVar5);
    iVar3 = iVar2 * 0x14 + 0x14;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}


// ===== 00920dc0  FUN_00920dc0 =====

void FUN_00920dc0(long param_1)

{
  FUN_0090e488();
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}


// ===== 00920df8  FUN_00920df8 =====

void FUN_00920df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3daa8;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00920e28  FUN_00920e28 =====

void FUN_00920e28(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x920e30);
  (*pcVar1)();
}


// ===== 00920e30  FUN_00920e30 =====

void FUN_00920e30(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  __dest = param_1 + 1;
  *param_1 = &PTR_FUN_00d3daa8;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[1] = __dest;
    param_1[2] = param_3;
    param_1[3] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined4 *)((long)param_1 + 0x24) = param_5;
    *param_1 = &PTR_FUN_00d3dad8;
    param_1[5] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00920f48  FUN_00920f48 =====

void FUN_00920f48(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = (long)*(char *)((long)param_1 + 0x1f);
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = param_1[2];
  }
  else {
    puVar2 = param_1 + 1;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
  lVar3 = FUN_006660d0(puVar2,lVar3,1,*(undefined4 *)((long)param_1 + 0x24),0x32);
  if (lVar3 != 0) {
    FUN_00666568(lVar3,uVar1);
  }
  *param_1 = &PTR_FUN_00d3daa8;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00920fd0  FUN_00920fd0 =====

undefined4 FUN_00920fd0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 00920fdc  FUN_00920fdc =====

void FUN_00920fdc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = (long)*(char *)((long)param_1 + 0x1f);
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = param_1[2];
  }
  else {
    puVar2 = param_1 + 1;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
  lVar3 = FUN_006660d0(puVar2,lVar3,1,*(undefined4 *)((long)param_1 + 0x24),0x32);
  if (lVar3 != 0) {
    FUN_00666568(lVar3,uVar1);
  }
  *param_1 = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00921060  FUN_00921060 =====

void FUN_00921060(long param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// ===== 0092106c  FUN_0092106c =====

void FUN_0092106c(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  __dest = param_1 + 1;
  *param_1 = &PTR_FUN_00d3daa8;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[1] = __dest;
    param_1[2] = param_3;
    param_1[3] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined4 *)((long)param_1 + 0x24) = param_5;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = &PTR_FUN_00d3db08;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0092118c  FUN_0092118c =====

void FUN_0092118c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 7) == 0) {
    iVar4 = 0;
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    iVar4 = (int)((double)param_1[6] / (double)*(int *)(param_1 + 7));
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  lVar3 = (long)cVar1;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = param_1[2];
  }
  else {
    puVar2 = param_1 + 1;
  }
  lVar3 = FUN_006660d0(puVar2,lVar3,1,*(undefined4 *)((long)param_1 + 0x24),0x32);
  if (lVar3 != 0) {
    FUN_00666568(lVar3,iVar4);
  }
  *param_1 = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00921234  FUN_00921234 =====

int FUN_00921234(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return (int)(*(double *)(param_1 + 0x30) / (double)*(int *)(param_1 + 0x38));
  }
  return 0;
}


// ===== 0092125c  FUN_0092125c =====

void FUN_0092125c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 7) == 0) {
    iVar4 = 0;
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    iVar4 = (int)((double)param_1[6] / (double)*(int *)(param_1 + 7));
    cVar1 = *(char *)((long)param_1 + 0x1f);
  }
  lVar3 = (long)cVar1;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = param_1[2];
  }
  else {
    puVar2 = param_1 + 1;
  }
  lVar3 = FUN_006660d0(puVar2,lVar3,1,*(undefined4 *)((long)param_1 + 0x24),0x32);
  if (lVar3 != 0) {
    FUN_00666568(lVar3,iVar4);
  }
  *param_1 = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00921300  FUN_00921300 =====

void FUN_00921300(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// ===== 00921310  FUN_00921310 =====

void FUN_00921310(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d3db38;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  FUN_00920e30(param_1 + 0x2c,"WebRTC.Audio.DelayedPacketOutageEventsPerMinute",0x2f,60000,100);
  FUN_0092106c(param_1 + 0x32,"WebRTC.Audio.AverageExcessBufferDelayMs",0x27,60000,1000);
  FUN_00920e30(param_1 + 0x3a,"WebRTC.Audio.JitterBufferFullPerMinute",0x26,60000,100);
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00925908(param_1 + 0x41,"WebRTC.Audio.ExpandRatePercent",0x1e,10,param_2);
  FUN_00925908(param_1 + 0x4b,"WebRTC.Audio.SpeechExpandRatePercent",0x24,10,param_2);
  return;
}


// ===== 0092142c  FUN_0092142c =====

void FUN_0092142c(undefined8 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_00d3db38;
  FUN_00925a48(param_1 + 0x4b);
  FUN_00925a48(param_1 + 0x41);
  lVar4 = (long)*(char *)((long)param_1 + 0x1ef);
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)param_1[0x3b];
    lVar4 = param_1[0x3c];
  }
  else {
    puVar3 = param_1 + 0x3b;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x1fc);
  lVar4 = FUN_006660d0(puVar3,lVar4,1,*(undefined4 *)((long)param_1 + 500),0x32);
  if (lVar4 != 0) {
    FUN_00666568(lVar4,uVar1);
  }
  param_1[0x3a] = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x1ef) < '\0') {
    operator_delete((void *)param_1[0x3b]);
    iVar5 = *(int *)(param_1 + 0x39);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x39);
  }
  if (iVar5 == 0) {
    iVar5 = 0;
    cVar2 = *(char *)((long)param_1 + 0x1af);
  }
  else {
    iVar5 = (int)((double)param_1[0x38] / (double)iVar5);
    cVar2 = *(char *)((long)param_1 + 0x1af);
  }
  lVar4 = (long)cVar2;
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)param_1[0x33];
    lVar4 = param_1[0x34];
  }
  else {
    puVar3 = param_1 + 0x33;
  }
  lVar4 = FUN_006660d0(puVar3,lVar4,1,*(undefined4 *)((long)param_1 + 0x1b4),0x32);
  if (lVar4 != 0) {
    FUN_00666568(lVar4,iVar5);
  }
  param_1[0x32] = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    operator_delete((void *)param_1[0x33]);
    cVar2 = *(char *)((long)param_1 + 0x17f);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x17f);
  }
  lVar4 = (long)cVar2;
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)param_1[0x2d];
    lVar4 = param_1[0x2e];
  }
  else {
    puVar3 = param_1 + 0x2d;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x18c);
  lVar4 = FUN_006660d0(puVar3,lVar4,1,*(undefined4 *)((long)param_1 + 0x184),0x32);
  if (lVar4 != 0) {
    FUN_00666568(lVar4,uVar1);
  }
  param_1[0x2c] = &PTR_FUN_00d3daa8;
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    operator_delete((void *)param_1[0x2d]);
  }
  FUN_009215a0(param_1 + 0x24);
  return;
}


// ===== 009215a0  FUN_009215a0 =====

void FUN_009215a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 10);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x3ff) * 4;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 10] + (param_1[5] + uVar7 & 0x3ff) * 4) {
      if (lVar4 == 0) goto LAB_00921708;
      lVar4 = lVar4 + 4;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x200;
  }
  else {
    if (uVar7 != 2) goto LAB_00921680;
    uVar1 = 0x400;
  }
  param_1[4] = uVar1;
LAB_00921680:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_00921708:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00921758  FUN_00921758 =====

void FUN_00921758(void *param_1)

{
  FUN_0092142c();
  operator_delete(param_1);
  return;
}


// ===== 00921788  FUN_00921788 =====

void FUN_00921788(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (puVar2 != *(undefined8 **)(param_1 + 0x130)) {
    uVar3 = *(ulong *)(param_1 + 0x140);
    uVar1 = *(long *)(param_1 + 0x148) + uVar3;
    plVar6 = puVar2 + (uVar3 >> 10);
    lVar7 = *plVar6;
    lVar5 = lVar7 + (uVar3 & 0x3ff) * 4;
    while (lVar5 != puVar2[uVar1 >> 10] + (uVar1 & 0x3ff) * 4) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar5 = lVar5 + 4;
      if (lVar5 - lVar7 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar7 = *plVar6;
        lVar5 = lVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  lVar5 = (long)*(undefined8 **)(param_1 + 0x130) - (long)puVar2;
  while (uVar1 = lVar5 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x128) + 8);
    *(undefined8 **)(param_1 + 0x128) = puVar2;
    lVar5 = *(long *)(param_1 + 0x130) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar4 = 0x200;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0x400;
  }
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  return;
}


// ===== 009218a0  FUN_009218a0 =====

void FUN_009218a0(long param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


// ===== 009218ac  FUN_009218ac =====

void FUN_009218ac(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x200) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0xe0);
    *(ulong *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + param_2;
    if ((int)param_2 < 0) {
      uVar2 = (ulong)(int)param_2;
    }
    else {
      param_2 = param_2 & 0x7fffffff;
      uVar2 = uVar1;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      *(ulong *)(param_1 + 0x10) = (param_2 - uVar2) + *(long *)(param_1 + 0x10);
    }
    *(ulong *)(param_1 + 0xe0) = uVar1 - uVar2;
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (param_3 & 1);
  }
  return;
}


// ===== 00921910  FUN_00921910 =====

void FUN_00921910(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar3 = (int)param_2;
  if (*(char *)(param_1 + 0x200) == '\x01') {
    uVar4 = *(ulong *)(param_1 + 0xe0);
    *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + param_2;
    if (iVar3 < 0) {
      *(ulong *)(param_1 + 0xe0) = uVar4 - (long)iVar3;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) - (long)iVar3;
    }
    else {
      param_2 = param_2 & 0x7fffffff;
      uVar5 = *(ulong *)(param_1 + 0xe8);
      uVar1 = uVar4;
      if (param_2 <= uVar4) {
        uVar1 = param_2;
      }
      *(ulong *)(param_1 + 0x10) = (param_2 - uVar1) + *(long *)(param_1 + 0x10);
      uVar2 = uVar5;
      if (param_2 <= uVar5) {
        uVar2 = param_2;
      }
      *(ulong *)(param_1 + 0xe0) = uVar4 - uVar1;
      *(ulong *)(param_1 + 0xe8) = uVar5 - uVar2;
      *(ulong *)(param_1 + 0x50) = (param_2 - uVar2) + *(long *)(param_1 + 0x50);
    }
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + (param_3 & 1);
  }
  return;
}


// ===== 009219a4  FUN_009219a4 =====

void FUN_009219a4(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x200) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x100) + (long)(int)param_2;
    uVar2 = *(ulong *)(param_1 + 0xe0);
    uVar3 = 0;
    if (uVar1 <= *(ulong *)(param_1 + 0x100) || -1 < (int)param_2) {
      uVar3 = uVar1;
    }
    *(ulong *)(param_1 + 0x100) = uVar3;
    if ((int)param_2 < 0) {
      *(ulong *)(param_1 + 0xe0) = uVar2 - (long)(int)param_2;
      return;
    }
    uVar3 = (ulong)param_2;
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    *(ulong *)(param_1 + 0xe0) = uVar2 - uVar1;
    *(ulong *)(param_1 + 0x10) = (uVar3 - uVar1) + *(long *)(param_1 + 0x10);
  }
  return;
}


// ===== 00921a0c  FUN_00921a0c =====

void FUN_00921a0c(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0x200) == '\x01') {
    lVar4 = (long)(int)param_2;
    uVar1 = *(ulong *)(param_1 + 0x108) + lVar4;
    uVar3 = *(ulong *)(param_1 + 0xe0);
    uVar5 = 0;
    if (uVar1 <= *(ulong *)(param_1 + 0x108) || -1 < (int)param_2) {
      uVar5 = uVar1;
    }
    *(ulong *)(param_1 + 0x108) = uVar5;
    if ((int)param_2 < 0) {
      *(ulong *)(param_1 + 0xe0) = uVar3 - lVar4;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) - lVar4;
      return;
    }
    uVar5 = (ulong)param_2;
    uVar6 = *(ulong *)(param_1 + 0xe8);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = uVar5;
    }
    *(ulong *)(param_1 + 0x10) = (uVar5 - uVar1) + *(long *)(param_1 + 0x10);
    uVar2 = uVar6;
    if (uVar5 <= uVar6) {
      uVar2 = uVar5;
    }
    *(ulong *)(param_1 + 0xe0) = uVar3 - uVar1;
    *(ulong *)(param_1 + 0xe8) = uVar6 - uVar2;
    *(ulong *)(param_1 + 0x50) = (uVar5 - uVar2) + *(long *)(param_1 + 0x50);
  }
  return;
}


// ===== 00921a9c  FUN_00921a9c =====

void FUN_00921a9c(long param_1)

{
  *(undefined1 *)(param_1 + 0x200) = 1;
  return;
}


// ===== 00921aac  FUN_00921aac =====

void FUN_00921aac(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x200) != '\x01') {
    return;
  }
  uVar1 = 0;
  if ((long)param_2 != 0) {
    uVar1 = (ulong)((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x110)) * 1000) /
            (ulong)(long)param_2;
  }
  if (0x95 < (int)uVar1) {
    *(ulong *)(param_1 + 0x90) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + (int)uVar1,
                  (int)*(undefined8 *)(param_1 + 0x90) + 1);
    lVar2 = DAT_00d804c8;
    if (DAT_00d804c8 == 0) {
      lVar2 = FUN_006660d0("WebRTC.Audio.AudioInterruptionMs",0x20,0x96,5000,0x32);
      FUN_00d0f5e0(0,lVar2,&DAT_00d804c8);
      if (lVar2 == 0) goto LAB_00921b60;
    }
    FUN_00666568(lVar2,uVar1 & 0xffffffff);
  }
LAB_00921b60:
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x10);
  return;
}


// ===== 00921b7c  FUN_00921b7c =====

void FUN_00921b7c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + param_2;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + param_2;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + param_2;
  }
  return;
}


// ===== 00921bb4  FUN_00921bb4 =====

void FUN_00921bb4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + param_2;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + param_2;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + param_2;
  }
  return;
}


// ===== 00921bec  FUN_00921bec =====

void FUN_00921bec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + param_2;
  }
  return;
}


// ===== 00921c0c  FUN_00921c0c =====

void FUN_00921c0c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + param_2;
  return;
}


// ===== 00921c20  FUN_00921c20 =====

void FUN_00921c20(long param_1,long param_2)

{
  *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + param_2;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + param_2;
  return;
}


// ===== 00921c40  FUN_00921c40 =====

void FUN_00921c40(long param_1,long param_2)

{
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + param_2;
  return;
}


// ===== 00921c54  FUN_00921c54 =====

void FUN_00921c54(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x200) != '\x01') {
    return;
  }
  iVar4 = (int)param_2 * 1000;
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = iVar4 / param_3;
  }
  iVar3 = iVar4 - iVar5 * param_3;
  if (iVar3 == 0) {
    iVar4 = *(int *)(param_1 + 0x188) + iVar5;
    *(int *)(param_1 + 0x188) = iVar4;
    if (*(int *)(param_1 + 0x180) <= iVar4) {
      uVar6 = (**(code **)(*(long *)(param_1 + 0x160) + 0x10))(param_1 + 0x160);
      lVar8 = (long)*(char *)(param_1 + 0x17f);
      if (lVar8 < 0) {
        lVar7 = *(long *)(param_1 + 0x168);
        lVar8 = *(long *)(param_1 + 0x170);
      }
      else {
        lVar7 = param_1 + 0x168;
      }
      lVar8 = FUN_006660d0(lVar7,lVar8,1,*(undefined4 *)(param_1 + 0x184),0x32);
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar6);
      }
      (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(param_1 + 0x160);
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x180);
    }
    iVar4 = *(int *)(param_1 + 0x1b8) + iVar5;
    *(int *)(param_1 + 0x1b8) = iVar4;
    if (*(int *)(param_1 + 0x1b0) <= iVar4) {
      uVar6 = (**(code **)(*(long *)(param_1 + 400) + 0x10))(param_1 + 400);
      lVar8 = (long)*(char *)(param_1 + 0x1af);
      if (lVar8 < 0) {
        lVar7 = *(long *)(param_1 + 0x198);
        lVar8 = *(long *)(param_1 + 0x1a0);
      }
      else {
        lVar7 = param_1 + 0x198;
      }
      lVar8 = FUN_006660d0(lVar7,lVar8,1,*(undefined4 *)(param_1 + 0x1b4),0x32);
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar6);
      }
      (**(code **)(*(long *)(param_1 + 400) + 0x18))(param_1 + 400);
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
    }
    iVar5 = *(int *)(param_1 + 0x1f8) + iVar5;
    *(int *)(param_1 + 0x1f8) = iVar5;
    if (*(int *)(param_1 + 0x1f0) <= iVar5) {
      uVar6 = (**(code **)(*(long *)(param_1 + 0x1d0) + 0x10))(param_1 + 0x1d0);
      lVar8 = (long)*(char *)(param_1 + 0x1ef);
      if (lVar8 < 0) {
        lVar7 = *(long *)(param_1 + 0x1d8);
        lVar8 = *(long *)(param_1 + 0x1e0);
      }
      else {
        lVar7 = param_1 + 0x1d8;
      }
      lVar8 = FUN_006660d0(lVar7,lVar8,1,*(undefined4 *)(param_1 + 500),0x32);
      if (lVar8 != 0) {
        FUN_00666568(lVar8,uVar6);
      }
      (**(code **)(*(long *)(param_1 + 0x1d0) + 0x18))(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 0x1f0);
    }
    uVar1 = *(int *)(param_1 + 0x118) + (int)param_2;
    uVar2 = 0;
    if (uVar1 <= (uint)(param_3 * 0x3c)) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0x118) = uVar2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    FUN_00925ab0(param_1 + 0x208,*(undefined8 *)(param_1 + 0x10),param_3);
    lVar8 = 0;
    if (*(ulong *)(param_1 + 0x50) <= *(ulong *)(param_1 + 0x10)) {
      lVar8 = *(ulong *)(param_1 + 0x10) - *(ulong *)(param_1 + 0x50);
    }
    FUN_00925ab0(param_1 + 600,lVar8,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar3,0,iVar4,
               " is not evenly divisible by ",param_3);
}


// ===== 00921ec4  FUN_00921ec4 =====

void FUN_00921ec4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_4 * param_2;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + param_5 * param_2;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3 * param_2;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_2;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + param_6 * param_2;
  return;
}


// ===== 00921f00  FUN_00921f00 =====

void FUN_00921f00(long param_1,int param_2)

{
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + param_2;
  return;
}


// ===== 00921f14  FUN_00921f14 =====

void FUN_00921f14(long param_1)

{
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  return;
}


// ===== 00921f34  FUN_00921f34 =====

void FUN_00921f34(long param_1)

{
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  return;
}


// ===== 00921f48  FUN_00921f48 =====

void FUN_00921f48(long param_1,long param_2)

{
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + param_2;
  return;
}


// ===== 00921f5c  FUN_00921f5c =====

void FUN_00921f5c(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = DAT_00d804d0;
  if (DAT_00d804d0 == 0) {
    lVar2 = FUN_006660d0("WebRTC.Audio.DelayedPacketOutageEventMs",0x27,1,2000,100);
    FUN_00d0f5e0(0,lVar2,&DAT_00d804d0);
    if (lVar2 == 0) goto LAB_00921fe4;
  }
  iVar1 = 0;
  if (param_3 / 1000 != 0) {
    iVar1 = param_2 / (param_3 / 1000);
  }
  FUN_00666568(lVar2,iVar1);
LAB_00921fe4:
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (long)param_2;
  return;
}


// ===== 00922020  FUN_00922020 =====

void FUN_00922020(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x148);
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) + (double)param_2;
  if (lVar4 == 100) {
    uVar5 = *(ulong *)(param_1 + 0x140);
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    if (puVar3[uVar5 >> 10] + (uVar5 & 0x3ff) * 4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar5 = uVar5 + 1;
    lVar4 = 99;
    *(ulong *)(param_1 + 0x140) = uVar5;
    *(undefined8 *)(param_1 + 0x148) = 99;
    if (0x7ff < uVar5) {
      operator_delete((void *)*puVar3);
      lVar4 = *(long *)(param_1 + 0x148);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x128) + 8);
      uVar5 = *(long *)(param_1 + 0x140) - 0x400;
      *(undefined8 **)(param_1 + 0x128) = puVar3;
      *(ulong *)(param_1 + 0x140) = uVar5;
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    uVar5 = *(ulong *)(param_1 + 0x140);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x130);
  lVar2 = 0;
  if (puVar6 != puVar3) {
    lVar2 = ((long)puVar6 - (long)puVar3) * 0x80 + -1;
  }
  if (lVar2 == lVar4 + uVar5) {
    FUN_00924cd8(param_1 + 0x120);
    puVar3 = *(undefined8 **)(param_1 + 0x128);
    puVar6 = *(undefined8 **)(param_1 + 0x130);
  }
  if ((puVar3 != puVar6) &&
     (uVar5 = *(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x140),
     piVar1 = (int *)(puVar3[uVar5 >> 10] + (uVar5 & 0x3ff) * 4), piVar1 != (int *)0x0)) {
    *piVar1 = param_2;
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
    *(long *)(param_1 + 0xc0) = (long)param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00922164  FUN_00922164 =====

void FUN_00922164(long param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  double dVar13;
  
  uVar5 = *(ulong *)(param_1 + 0xf8);
  if (uVar5 != 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x118);
    if (uVar5 < uVar7) {
      uVar6 = uVar5 << 0xe;
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 0xc) = (short)uVar5;
  uVar5 = *(ulong *)(param_1 + 0xf0);
  if (uVar5 != 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x118);
    if (uVar5 < uVar7) {
      uVar6 = uVar5 << 0xe;
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 10) = (short)uVar5;
  uVar5 = *(long *)(param_1 + 0x108) + *(long *)(param_1 + 0x100);
  if (uVar5 != 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x118);
    if (uVar5 < uVar7) {
      uVar6 = uVar5 * 0x4000;
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 6) = (short)uVar5;
  uVar5 = *(ulong *)(param_1 + 0x100);
  if (uVar5 != 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x118);
    if (uVar5 < uVar7) {
      uVar6 = uVar5 << 0xe;
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 8) = (short)uVar5;
  uVar2 = *(uint *)(param_1 + 0x150);
  uVar5 = (ulong)uVar2;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x118);
    if (uVar2 < uVar3) {
      uVar7 = uVar5 << 0xe;
      uVar5 = 0;
      if ((ulong)uVar3 != 0) {
        uVar5 = uVar7 / uVar3;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 0xe) = (short)uVar5;
  uVar5 = *(long *)(param_1 + 0x158) * param_2;
  if (uVar5 != 0) {
    uVar7 = (ulong)(uint)(*(int *)(param_1 + 0x150) + (int)uVar5);
    if (uVar5 < uVar7) {
      uVar6 = uVar5 * 0x4000;
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar6 / uVar7;
      }
    }
    else {
      uVar5 = 0x4000;
    }
  }
  *(short *)(param_3 + 0x10) = (short)uVar5;
  uVar5 = *(ulong *)(param_1 + 0x148);
  if (uVar5 == 0) {
    *(undefined8 *)(param_3 + 0x1c) = 0xffffffffffffffff;
    *(undefined8 *)(param_3 + 0x14) = 0xffffffffffffffff;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x140);
    lVar4 = *(long *)(param_1 + 0x128);
    if (lVar4 == *(long *)(param_1 + 0x130)) {
      lVar8 = 0;
      lVar4 = 0;
    }
    else {
      lVar8 = *(long *)(lVar4 + (uVar7 >> 10) * 8) + (uVar7 & 0x3ff) * 4;
      lVar4 = *(long *)(lVar4 + (uVar7 + uVar5 >> 10) * 8) + (uVar7 + uVar5 & 0x3ff) * 4;
    }
    if (lVar8 != lVar4) {
      FUN_00922528();
      uVar5 = *(ulong *)(param_1 + 0x148);
    }
    uVar7 = uVar5 - 1 >> 1;
    if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                );
    }
    uVar5 = *(long *)(param_1 + 0x140) + (uVar5 >> 1);
    uVar7 = *(long *)(param_1 + 0x140) + uVar7;
    *(int *)(param_3 + 0x18) =
         (*(int *)(*(long *)(*(long *)(param_1 + 0x128) + (uVar5 >> 10) * 8) + (uVar5 & 0x3ff) * 4)
         + *(int *)(*(long *)(*(long *)(param_1 + 0x128) + (uVar7 >> 10) * 8) + (uVar7 & 0x3ff) * 4)
         ) / 2;
    if (*(long *)(param_1 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                );
    }
    *(undefined4 *)(param_3 + 0x1c) =
         *(undefined4 *)
          (*(long *)(*(long *)(param_1 + 0x128) + (*(ulong *)(param_1 + 0x140) >> 10) * 8) +
          (*(ulong *)(param_1 + 0x140) & 0x3ff) * 4);
    if (*(long *)(param_1 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                );
    }
    uVar5 = (*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x140)) - 1;
    *(undefined4 *)(param_3 + 0x20) =
         *(undefined4 *)
          (*(long *)(*(long *)(param_1 + 0x128) + (uVar5 >> 10) * 8) + (uVar5 & 0x3ff) * 4);
    lVar4 = *(long *)(param_1 + 0x128);
    if (lVar4 == *(long *)(param_1 + 0x130)) {
      uVar5 = *(ulong *)(param_1 + 0x148);
      dVar13 = 0.0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x140);
      uVar5 = *(ulong *)(param_1 + 0x148);
      dVar13 = 0.0;
      plVar9 = (long *)(lVar4 + (uVar7 >> 10) * 8);
      piVar1 = (int *)(*(long *)(lVar4 + (uVar5 + uVar7 >> 10) * 8) + (uVar5 + uVar7 & 0x3ff) * 4);
      piVar10 = (int *)(*plVar9 + (uVar7 & 0x3ff) * 4);
      if (piVar10 != piVar1) {
        piVar11 = (int *)*plVar9;
        do {
          piVar12 = piVar10 + 1;
          if ((long)piVar12 - (long)piVar11 == 0x1000) {
            plVar9 = plVar9 + 1;
            piVar12 = (int *)*plVar9;
            piVar11 = piVar12;
          }
          dVar13 = dVar13 + (double)*piVar10;
          piVar10 = piVar12;
        } while (piVar12 != piVar1);
      }
    }
    *(int *)(param_3 + 0x14) = (int)(dVar13 / (double)uVar5);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_00921788(param_1);
  return;
}


// ===== 009224c0  FUN_009224c0 =====

void FUN_009224c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}


// ===== 00922504  FUN_00922504 =====

void FUN_00922504(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  param_1[1] = *(undefined8 *)(param_2 + 0xb0);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[6] = uVar1;
  return;
}


// ===== 00922528  FUN_00922528 =====

void FUN_00922528(undefined8 param_1,int *param_2,long *param_3,int *param_4,undefined8 param_5,
                 long param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long *local_80;
  int *piStack_78;
  undefined1 *local_70;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  if (param_4 == param_2) {
    return;
  }
  param_6 = param_6 + -1;
  do {
    piVar15 = auVar17._8_8_;
    plVar16 = auVar17._0_8_;
    piVar5 = (int *)*param_3;
    piVar7 = (int *)*plVar16;
    lVar12 = (long)piVar15 - (long)piVar7;
    lVar8 = (long)param_4 - (long)piVar5 >> 2;
    uVar11 = lVar12 >> 2;
    uVar14 = (lVar8 + ((long)param_3 - (long)plVar16) * 0x80) - uVar11;
    if (2 < (long)uVar14) {
      if (uVar14 == 3) {
        if ((long)uVar11 < 0) {
          uVar14 = (ulong)~(uint)(0x3fe - uVar11);
          lVar8 = plVar16[-(0x3fe - uVar11 >> 10)];
        }
        else {
          uVar14 = uVar11 + 1;
          lVar8 = plVar16[uVar14 >> 10];
        }
        piVar7 = (int *)(lVar8 + (uVar14 & 0x3ff) * 4);
        if (param_4 == piVar5) {
          param_4 = (int *)(param_3[-1] + 0x1000);
        }
        iVar2 = *piVar7;
        iVar13 = *piVar15;
        iVar4 = param_4[-1];
        if (iVar2 < iVar13) {
          if (iVar4 < iVar2) {
            *piVar15 = iVar4;
            param_4[-1] = iVar13;
            return;
          }
          *piVar15 = iVar2;
          *piVar7 = iVar13;
          if (iVar13 <= param_4[-1]) {
            return;
          }
          *piVar7 = param_4[-1];
          param_4[-1] = iVar13;
          return;
        }
        if (iVar2 <= iVar4) {
          return;
        }
        *piVar7 = iVar4;
        param_4[-1] = iVar2;
        goto LAB_00923130;
      }
      if (uVar14 == 4) {
        if ((long)uVar11 < 0) {
          piVar7 = (int *)(plVar16[-(0x3fe - uVar11 >> 10)] +
                          ((ulong)~(uint)(0x3fe - uVar11) & 0x3ff) * 4);
          if (lVar12 == -4) {
            uVar14 = 1;
            goto LAB_00922fa8;
          }
          uVar14 = (ulong)~(uint)(0x3fd - uVar11);
          lVar8 = plVar16[-(0x3fd - uVar11 >> 10)];
        }
        else {
          piVar7 = (int *)(plVar16[uVar11 + 1 >> 10] + (uVar11 + 1 & 0x3ff) * 4);
          uVar14 = uVar11 + 2;
LAB_00922fa8:
          lVar8 = plVar16[uVar14 >> 10];
        }
        piVar10 = (int *)(lVar8 + (uVar14 & 0x3ff) * 4);
        if (param_4 == piVar5) {
          param_4 = (int *)(param_3[-1] + 0x1000);
        }
        iVar2 = *piVar7;
        iVar13 = *piVar15;
        iVar4 = *piVar10;
        if (iVar2 < iVar13) {
          if (iVar4 < iVar2) {
            *piVar15 = iVar4;
          }
          else {
            *piVar15 = iVar2;
            *piVar7 = iVar13;
            iVar4 = *piVar10;
            if (iVar13 <= iVar4) goto LAB_00923104;
            *piVar7 = iVar4;
          }
          *piVar10 = iVar13;
          iVar4 = iVar13;
        }
        else if (iVar4 < iVar2) {
          *piVar7 = iVar4;
          *piVar10 = iVar2;
          iVar13 = *piVar15;
          iVar4 = iVar2;
          if (*piVar7 < iVar13) {
            *piVar15 = *piVar7;
            *piVar7 = iVar13;
            iVar4 = *piVar10;
          }
        }
LAB_00923104:
        if (iVar4 <= param_4[-1]) {
          return;
        }
        *piVar10 = param_4[-1];
        param_4[-1] = iVar4;
      }
      else {
        if (uVar14 != 5) goto LAB_009225cc;
        if ((long)uVar11 < 0) {
          piVar7 = (int *)(plVar16[-(0x3fe - uVar11 >> 10)] +
                          ((ulong)~(uint)(0x3fe - uVar11) & 0x3ff) * 4);
          if (lVar12 == -4) {
            uVar14 = 1;
            goto LAB_00922ef4;
          }
          piVar10 = (int *)(plVar16[-(0x3fd - uVar11 >> 10)] +
                           ((ulong)~(uint)(0x3fd - uVar11) & 0x3ff) * 4);
          if (0xfffffffffffffffd < uVar11) {
            uVar6 = 1;
            goto LAB_00922f08;
          }
          uVar6 = (ulong)~(uint)(0x3fc - uVar11);
          lVar8 = plVar16[-(0x3fc - uVar11 >> 10)];
        }
        else {
          piVar7 = (int *)(plVar16[uVar11 + 1 >> 10] + (uVar11 + 1 & 0x3ff) * 4);
          uVar14 = uVar11 + 2;
LAB_00922ef4:
          uVar6 = uVar11 + 3;
          piVar10 = (int *)(plVar16[uVar14 >> 10] + (uVar14 & 0x3ff) * 4);
LAB_00922f08:
          lVar8 = plVar16[uVar6 >> 10];
        }
        piVar1 = (int *)(lVar8 + (uVar6 & 0x3ff) * 4);
        if (param_4 == piVar5) {
          param_4 = (int *)(param_3[-1] + 0x1000);
        }
        iVar2 = *piVar7;
        iVar13 = *piVar15;
        iVar4 = *piVar10;
        if (iVar2 < iVar13) {
          if (iVar4 < iVar2) {
            *piVar15 = iVar4;
          }
          else {
            *piVar15 = iVar2;
            *piVar7 = iVar13;
            iVar4 = *piVar10;
            if (iVar13 <= iVar4) goto LAB_00923064;
            *piVar7 = iVar4;
          }
          *piVar10 = iVar13;
          iVar4 = iVar13;
        }
        else if (iVar4 < iVar2) {
          *piVar7 = iVar4;
          *piVar10 = iVar2;
          iVar13 = *piVar15;
          iVar4 = iVar2;
          if (*piVar7 < iVar13) {
            *piVar15 = *piVar7;
            *piVar7 = iVar13;
            iVar4 = *piVar10;
          }
        }
LAB_00923064:
        if (*piVar1 < iVar4) {
          *piVar10 = *piVar1;
          *piVar1 = iVar4;
          iVar2 = *piVar7;
          if (*piVar10 < iVar2) {
            *piVar7 = *piVar10;
            *piVar10 = iVar2;
            iVar2 = *piVar15;
            if (*piVar7 < iVar2) {
              *piVar15 = *piVar7;
              *piVar7 = iVar2;
            }
          }
        }
        iVar2 = *piVar1;
        if (iVar2 <= param_4[-1]) {
          return;
        }
        *piVar1 = param_4[-1];
        param_4[-1] = iVar2;
        iVar2 = *piVar10;
        if (iVar2 <= *piVar1) {
          return;
        }
        *piVar10 = *piVar1;
        *piVar1 = iVar2;
      }
      iVar2 = *piVar7;
      if (iVar2 <= *piVar10) {
        return;
      }
      *piVar7 = *piVar10;
      *piVar10 = iVar2;
LAB_00923130:
      iVar2 = *piVar15;
      if (*piVar7 < iVar2) {
        *piVar15 = *piVar7;
        *piVar7 = iVar2;
      }
      return;
    }
    if (uVar14 < 2) {
      return;
    }
    if (uVar14 == 2) {
      if (param_4 == piVar5) {
        param_4 = (int *)(param_3[-1] + 0x1000);
      }
      iVar2 = *piVar15;
      if (iVar2 <= param_4[-1]) {
        return;
      }
      *piVar15 = param_4[-1];
      param_4[-1] = iVar2;
      return;
    }
LAB_009225cc:
    if ((long)uVar14 < 0x18) {
      if ((param_7 & 1) == 0) {
        FUN_009231d4(plVar16,piVar15,param_3,param_4,param_5);
        return;
      }
      do {
        do {
          plVar16 = auVar17._0_8_;
          piVar5 = (int *)(auVar17._8_8_ + 4);
          if ((long)piVar5 - (long)piVar7 == 0x1000) {
            plVar16 = plVar16 + 1;
            piVar5 = (int *)*plVar16;
            piVar7 = piVar5;
          }
          auVar3._8_8_ = piVar5;
          auVar3._0_8_ = plVar16;
          auVar17._8_8_ = piVar5;
          auVar17._0_8_ = plVar16;
          if (piVar5 == param_4) {
            return;
          }
          plVar9 = plVar16;
          piVar10 = piVar5;
          if (piVar5 == piVar7) {
            plVar9 = plVar16 + -1;
            piVar10 = (int *)(*plVar9 + 0x1000);
          }
          iVar13 = piVar10[-1];
          iVar2 = *piVar5;
          piVar10 = piVar10 + -1;
        } while (iVar13 <= iVar2);
        do {
          piVar7 = piVar10;
          *piVar5 = iVar13;
          if (piVar7 == piVar15) break;
          piVar5 = piVar7;
          if (piVar7 == (int *)*plVar9) {
            plVar9 = plVar9 + -1;
            piVar5 = (int *)(*plVar9 + 0x1000);
          }
          iVar13 = piVar5[-1];
          piVar10 = piVar5 + -1;
          piVar5 = piVar7;
        } while (iVar2 < iVar13);
        *piVar7 = iVar2;
        piVar7 = (int *)*plVar16;
        auVar17 = auVar3;
      } while( true );
    }
    if (param_6 == -1) {
      FUN_00923e3c(plVar16,piVar15,param_3,param_4,param_3,param_4,param_5);
      return;
    }
    uVar6 = uVar14 >> 1;
    uVar11 = uVar11 + uVar6;
    if (uVar14 < 0x81) {
      if ((long)uVar11 < 1) {
        piVar7 = (int *)(plVar16[-(0x3ff - uVar11 >> 10)] +
                        ((ulong)~(uint)(0x3ff - uVar11) & 0x3ff) * 4);
        if (lVar8 < 2) goto LAB_009226f8;
LAB_00922620:
        uVar11 = lVar8 - 1;
        lVar8 = param_3[uVar11 >> 10];
      }
      else {
        piVar7 = (int *)(plVar16[uVar11 >> 10] + (uVar11 & 0x3ff) * 4);
        if (1 < lVar8) goto LAB_00922620;
LAB_009226f8:
        uVar11 = (ulong)~(uint)(0x400U - lVar8);
        lVar8 = param_3[-(0x400U - lVar8 >> 10)];
      }
      iVar2 = *piVar15;
      piVar5 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      iVar13 = *piVar7;
      iVar4 = *piVar5;
      if (iVar2 < iVar13) {
        if (iVar4 < iVar2) {
          *piVar7 = iVar4;
        }
        else {
          *piVar7 = iVar2;
          *piVar15 = iVar13;
          if (iVar13 <= *piVar5) goto joined_r0x00922764;
          *piVar15 = *piVar5;
        }
        *piVar5 = iVar13;
      }
      else if (iVar4 < iVar2) {
        *piVar15 = iVar4;
        *piVar5 = iVar2;
        iVar2 = *piVar7;
        if (*piVar15 < iVar2) {
          *piVar7 = *piVar15;
          *piVar15 = iVar2;
        }
      }
joined_r0x00922764:
      if ((param_7 & 1) == 0) goto LAB_00922b64;
LAB_00922bb8:
      piStack_78 = (int *)&DAT_aaaaaaaaaaaaaaaa;
      local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_009235b4(&local_80,plVar16,piVar15,param_3,param_4,param_5);
      piVar7 = piStack_78;
      plVar9 = local_80;
      if (((ulong)local_70 & 1) == 0) {
LAB_00922ca4:
        FUN_00922528(plVar16,piVar15,plVar9,piVar7,param_5,param_6,param_7 & 1);
        lVar8 = *plVar9;
        param_7 = 0;
      }
      else {
        uVar11 = FUN_00923800(plVar16,piVar15,local_80,piStack_78,param_5);
        lVar8 = (long)piVar7 - *plVar9 >> 2;
        if (lVar8 < 0) {
          uVar14 = (ulong)~(uint)(0x3feU - lVar8);
          lVar8 = (0x3feU - lVar8 >> 10) * -8;
        }
        else {
          uVar14 = lVar8 + 1;
          lVar8 = (uVar14 >> 10) << 3;
        }
        uVar14 = FUN_00923800((long *)((long)plVar9 + lVar8),
                              *(long *)((long)plVar9 + lVar8) + (uVar14 & 0x3ff) * 4,param_3,param_4
                              ,param_5);
        if ((uVar14 & 1) != 0) {
          param_4 = piVar7;
          param_3 = plVar9;
          if ((uVar11 & 1) != 0) {
            return;
          }
          goto LAB_00922ce8;
        }
        if ((uVar11 & 1) == 0) goto LAB_00922ca4;
        lVar8 = *plVar9;
      }
      auVar17._8_8_ = piVar7 + 1;
      auVar17._0_8_ = plVar9;
      if ((long)(piVar7 + 1) - lVar8 == 0x1000) {
        auVar17._8_8_ = plVar9[1];
        auVar17._0_8_ = plVar9 + 1;
      }
    }
    else {
      if ((long)uVar11 < 1) {
        uVar14 = 0x3ff - uVar11;
        uVar11 = (ulong)~(uint)uVar14;
        lVar12 = plVar16[-(uVar14 >> 10)];
      }
      else {
        lVar12 = plVar16[uVar11 >> 10];
      }
      piVar7 = (int *)(lVar12 + (uVar11 & 0x3ff) * 4);
      if (lVar8 < 2) {
        uVar11 = (ulong)~(uint)(0x400U - lVar8);
        lVar8 = param_3[-(0x400U - lVar8 >> 10)];
      }
      else {
        uVar11 = lVar8 - 1;
        lVar8 = param_3[uVar11 >> 10];
      }
      iVar2 = *piVar7;
      piVar5 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      iVar13 = *piVar15;
      iVar4 = *piVar5;
      if (iVar2 < iVar13) {
        if (iVar4 < iVar2) {
          *piVar15 = iVar4;
        }
        else {
          *piVar15 = iVar2;
          *piVar7 = iVar13;
          if (iVar13 <= *piVar5) goto LAB_00922788;
          *piVar7 = *piVar5;
        }
        *piVar5 = iVar13;
      }
      else if (iVar4 < iVar2) {
        *piVar7 = iVar4;
        *piVar5 = iVar2;
        iVar2 = *piVar15;
        if (*piVar7 < iVar2) {
          *piVar15 = *piVar7;
          *piVar7 = iVar2;
        }
      }
LAB_00922788:
      lVar8 = (long)piVar15 - *plVar16 >> 2;
      if (lVar8 < 0) {
        uVar11 = (ulong)~(uint)(0x3feU - lVar8);
        lVar12 = plVar16[-(0x3feU - lVar8 >> 10)];
      }
      else {
        uVar11 = lVar8 + 1;
        lVar12 = plVar16[uVar11 >> 10];
      }
      piVar7 = (int *)(lVar12 + (uVar11 & 0x3ff) * 4);
      uVar11 = lVar8 + (uVar6 - 1);
      if ((long)uVar11 < 1) {
        uVar14 = 0x3ff - uVar11;
        uVar11 = (ulong)~(uint)uVar14;
        lVar8 = plVar16[-(uVar14 >> 10)];
      }
      else {
        lVar8 = plVar16[uVar11 >> 10];
      }
      piVar5 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      lVar8 = (long)param_4 - *param_3 >> 2;
      if (lVar8 < 3) {
        uVar11 = (ulong)~(uint)(0x401U - lVar8);
        lVar8 = param_3[-(0x401U - lVar8 >> 10)];
      }
      else {
        uVar11 = lVar8 - 2;
        lVar8 = param_3[uVar11 >> 10];
      }
      iVar2 = *piVar5;
      piVar10 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      iVar13 = *piVar7;
      iVar4 = *piVar10;
      if (iVar2 < iVar13) {
        if (iVar4 < iVar2) {
          *piVar7 = iVar4;
        }
        else {
          *piVar7 = iVar2;
          *piVar5 = iVar13;
          if (iVar13 <= *piVar10) goto LAB_009228d4;
          *piVar5 = *piVar10;
        }
        *piVar10 = iVar13;
      }
      else if (iVar4 < iVar2) {
        *piVar5 = iVar4;
        *piVar10 = iVar2;
        iVar2 = *piVar7;
        if (*piVar5 < iVar2) {
          *piVar7 = *piVar5;
          *piVar5 = iVar2;
        }
      }
LAB_009228d4:
      lVar8 = (long)piVar15 - *plVar16 >> 2;
      if (lVar8 + 1 < 0 == SCARRY8(lVar8,1)) {
        uVar11 = lVar8 + 2;
        lVar12 = plVar16[uVar11 >> 10];
      }
      else {
        uVar11 = (ulong)~(uint)(0x3fdU - lVar8);
        lVar12 = plVar16[-(0x3fdU - lVar8 >> 10)];
      }
      piVar7 = (int *)(lVar12 + (uVar11 & 0x3ff) * 4);
      uVar11 = lVar8 + uVar6 + 1;
      if ((long)uVar11 < 1) {
        uVar14 = 0x3ff - uVar11;
        uVar11 = (ulong)~(uint)uVar14;
        lVar8 = plVar16[-(uVar14 >> 10)];
      }
      else {
        lVar8 = plVar16[uVar11 >> 10];
      }
      piVar5 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      lVar8 = (long)param_4 - *param_3 >> 2;
      if (lVar8 < 4) {
        uVar11 = (ulong)~(uint)(0x402U - lVar8);
        lVar8 = param_3[-(0x402U - lVar8 >> 10)];
      }
      else {
        uVar11 = lVar8 - 3;
        lVar8 = param_3[uVar11 >> 10];
      }
      iVar2 = *piVar5;
      piVar10 = (int *)(lVar8 + (uVar11 & 0x3ff) * 4);
      iVar13 = *piVar7;
      iVar4 = *piVar10;
      if (iVar2 < iVar13) {
        if (iVar4 < iVar2) {
          *piVar7 = iVar4;
        }
        else {
          *piVar7 = iVar2;
          *piVar5 = iVar13;
          if (iVar13 <= *piVar10) goto LAB_00922a00;
          *piVar5 = *piVar10;
        }
        *piVar10 = iVar13;
      }
      else if (iVar4 < iVar2) {
        *piVar5 = iVar4;
        *piVar10 = iVar2;
        iVar2 = *piVar7;
        if (*piVar5 < iVar2) {
          *piVar7 = *piVar5;
          *piVar5 = iVar2;
        }
      }
LAB_00922a00:
      lVar8 = (long)piVar15 - *plVar16 >> 2;
      uVar11 = lVar8 + (uVar6 - 1);
      if ((long)uVar11 < 1) {
        uVar14 = 0x3ff - uVar11;
        uVar11 = (ulong)~(uint)uVar14;
        lVar12 = plVar16[-(uVar14 >> 10)];
      }
      else {
        lVar12 = plVar16[uVar11 >> 10];
      }
      piVar7 = (int *)(lVar12 + (uVar11 & 0x3ff) * 4);
      uVar11 = lVar8 + uVar6;
      if ((long)uVar11 < 1) {
        uVar14 = 0x3ff - uVar11;
        uVar11 = (ulong)~(uint)uVar14;
        lVar12 = plVar16[-(uVar14 >> 10)];
      }
      else {
        lVar12 = plVar16[uVar11 >> 10];
      }
      uVar14 = lVar8 + uVar6 + 1;
      piVar5 = (int *)(lVar12 + (uVar11 & 0x3ff) * 4);
      if ((long)uVar14 < 1) {
        uVar11 = 0x3ff - uVar14;
        uVar14 = (ulong)~(uint)uVar11;
        lVar8 = plVar16[-(uVar11 >> 10)];
      }
      else {
        lVar8 = plVar16[uVar14 >> 10];
      }
      iVar2 = *piVar5;
      piVar10 = (int *)(lVar8 + (uVar14 & 0x3ff) * 4);
      iVar13 = *piVar7;
      iVar4 = *piVar10;
      if (iVar2 < iVar13) {
        if (iVar4 < iVar2) {
          *piVar7 = iVar4;
        }
        else {
          *piVar7 = iVar2;
          *piVar5 = iVar13;
          if (iVar13 <= *piVar10) goto LAB_00922b14;
          *piVar5 = *piVar10;
        }
        *piVar10 = iVar13;
      }
      else if (iVar4 < iVar2) {
        *piVar5 = iVar4;
        *piVar10 = iVar2;
        iVar2 = *piVar7;
        if (*piVar5 < iVar2) {
          *piVar7 = *piVar5;
          *piVar5 = iVar2;
        }
      }
LAB_00922b14:
      uVar6 = uVar6 + ((long)piVar15 - *plVar16 >> 2);
      if ((long)uVar6 < 1) {
        uVar11 = 0x3ff - uVar6;
        uVar6 = (ulong)~(uint)uVar11;
        lVar8 = plVar16[-(uVar11 >> 10)];
      }
      else {
        lVar8 = plVar16[uVar6 >> 10];
      }
      iVar2 = *piVar15;
      piVar7 = (int *)(lVar8 + (uVar6 & 0x3ff) * 4);
      *piVar15 = *piVar7;
      *piVar7 = iVar2;
      if ((param_7 & 1) != 0) goto LAB_00922bb8;
LAB_00922b64:
      lVar8 = (long)piVar15 - *plVar16 >> 2;
      if (lVar8 < 2) {
        uVar11 = (ulong)~(uint)(0x400U - lVar8);
        lVar8 = plVar16[-(0x400U - lVar8 >> 10)];
      }
      else {
        uVar11 = lVar8 - 1;
        lVar8 = plVar16[uVar11 >> 10];
      }
      if (*(int *)(lVar8 + (uVar11 & 0x3ff) * 4) < *piVar15) goto LAB_00922bb8;
      auVar17 = FUN_00923354(plVar16,piVar15,param_3,param_4,param_5);
      param_7 = 0;
    }
LAB_00922ce8:
    param_6 = param_6 + -1;
    if (param_4 == auVar17._8_8_) {
      return;
    }
  } while( true );
}


// ===== 009231d4  FUN_009231d4 =====

void FUN_009231d4(long *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  if (param_2 == param_4) {
    return;
  }
  lVar4 = (long)param_2 - *param_1 >> 2;
  if (lVar4 < 2) {
    piVar3 = (int *)(param_1[-(0x400U - lVar4 >> 10)] + ((ulong)~(uint)(0x400U - lVar4) & 0x3ff) * 4
                    );
    if (lVar4 < 0) {
      uVar8 = (ulong)~(uint)(0x3feU - lVar4);
      lVar4 = (0x3feU - lVar4 >> 10) * -8;
      goto LAB_00923244;
    }
  }
  else {
    piVar3 = (int *)(param_1[lVar4 - 1U >> 10] + (lVar4 - 1U & 0x3ff) * 4);
  }
  uVar8 = lVar4 + 1;
  lVar4 = (uVar8 >> 10) * 8;
LAB_00923244:
  puVar5 = (undefined8 *)((long)param_1 + lVar4);
  piVar6 = (int *)*puVar5;
  piVar1 = piVar6 + (uVar8 & 0x3ff);
  do {
    if (piVar1 == param_4) {
      return;
    }
    lVar4 = (long)piVar1 - (long)piVar6 >> 2;
    if (lVar4 < 2) {
      uVar8 = (ulong)~(uint)(0x400U - lVar4);
      lVar4 = (0x400U - lVar4 >> 10) * -8;
    }
    else {
      uVar8 = lVar4 - 1;
      lVar4 = (uVar8 >> 10) * 8;
    }
    plVar7 = (long *)((long)puVar5 + lVar4);
    piVar9 = (int *)(*plVar7 + (uVar8 & 0x3ff) * 4);
    iVar2 = *piVar1;
    iVar10 = *piVar9;
    piVar11 = piVar1;
    if (iVar2 < iVar10) {
      do {
        piVar6 = piVar9;
        *piVar11 = iVar10;
        if (piVar6 == piVar3) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar9 = piVar6;
        if (piVar6 == (int *)*plVar7) {
          plVar7 = plVar7 + -1;
          piVar9 = (int *)(*plVar7 + 0x1000);
        }
        iVar10 = piVar9[-1];
        piVar9 = piVar9 + -1;
        piVar11 = piVar6;
      } while (iVar2 < iVar10);
      *piVar6 = iVar2;
      piVar6 = (int *)*puVar5;
    }
    piVar1 = piVar1 + 1;
    if ((long)piVar1 - (long)piVar6 == 0x1000) {
      puVar5 = puVar5 + 1;
      piVar6 = (int *)*puVar5;
      piVar1 = piVar6;
    }
  } while( true );
}


// ===== 00923354  FUN_00923354 =====

void FUN_00923354(long *param_1,int *param_2,long *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)*param_3;
  iVar1 = *param_2;
  lVar3 = (long)param_4 - (long)piVar7 >> 2;
  if (lVar3 < 2) {
    uVar4 = (ulong)~(uint)(0x400U - lVar3);
    lVar3 = param_3[-(0x400U - lVar3 >> 10)];
  }
  else {
    uVar4 = lVar3 - 1;
    lVar3 = param_3[uVar4 >> 10];
  }
  piVar5 = (int *)*param_1;
  piVar6 = param_2;
  if (iVar1 < *(int *)(lVar3 + (uVar4 & 0x3ff) * 4)) {
    do {
      piVar6 = piVar6 + 1;
      if ((long)piVar6 - (long)piVar5 == 0x1000) {
        param_1 = param_1 + 1;
        piVar6 = (int *)*param_1;
        piVar5 = piVar6;
      }
      if (piVar6 == param_4) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
    } while (*piVar6 <= iVar1);
  }
  else {
    do {
      piVar6 = piVar6 + 1;
      if ((long)piVar6 - (long)piVar5 == 0x1000) {
        param_1 = param_1 + 1;
        piVar6 = (int *)*param_1;
        piVar5 = piVar6;
      }
    } while (((param_1 < param_3) || ((param_1 == param_3 && (piVar6 < param_4)))) &&
            (*piVar6 <= iVar1));
  }
  piVar8 = param_4;
  if ((param_1 < param_3) || ((param_1 == param_3 && (piVar6 < param_4)))) {
    do {
      if (piVar8 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      if (piVar8 == piVar7) {
        param_3 = param_3 + -1;
        piVar7 = (int *)*param_3;
        piVar8 = piVar7 + 0x400;
      }
      piVar8 = piVar8 + -1;
    } while (iVar1 < *piVar8);
  }
  do {
    if ((param_3 <= param_1) && ((param_1 != param_3 || (piVar8 <= piVar6)))) {
      lVar3 = (long)piVar6 - (long)piVar5 >> 2;
      if (lVar3 < 2) {
        uVar4 = (ulong)~(uint)(0x400U - lVar3);
        lVar3 = param_1[-(0x400U - lVar3 >> 10)];
      }
      else {
        uVar4 = lVar3 - 1;
        lVar3 = param_1[uVar4 >> 10];
      }
      piVar7 = (int *)(lVar3 + (uVar4 & 0x3ff) * 4);
      if (param_2 != piVar7) {
        *param_2 = *piVar7;
      }
      *piVar7 = iVar1;
      return;
    }
    iVar2 = *piVar6;
    *piVar6 = *piVar8;
    *piVar8 = iVar2;
    piVar5 = (int *)*param_1;
    do {
      piVar6 = piVar6 + 1;
      if ((long)piVar6 - (long)piVar5 == 0x1000) {
        param_1 = param_1 + 1;
        piVar6 = (int *)*param_1;
        piVar5 = piVar6;
      }
      if (piVar6 == param_4) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
    } while (*piVar6 <= iVar1);
    do {
      if (piVar8 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      if (piVar8 == (int *)*param_3) {
        param_3 = param_3 + -1;
        piVar8 = (int *)(*param_3 + 0x1000);
      }
      piVar8 = piVar8 + -1;
    } while (iVar1 < *piVar8);
  } while( true );
}


// ===== 009235b4  FUN_009235b4 =====

void FUN_009235b4(long *param_1,long *param_2,int *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  iVar1 = *param_3;
  piVar3 = (int *)*param_2;
  piVar5 = param_3;
  do {
    piVar5 = piVar5 + 1;
    if ((long)piVar5 - (long)piVar3 == 0x1000) {
      param_2 = param_2 + 1;
      piVar3 = (int *)*param_2;
      piVar5 = piVar3;
    }
    if (piVar5 == param_5) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    iVar6 = *piVar5;
  } while (iVar6 < iVar1);
  lVar7 = (long)piVar5 - (long)piVar3 >> 2;
  if (lVar7 < 2) {
    uVar8 = (ulong)~(uint)(0x400U - lVar7);
    lVar7 = param_2[-(0x400U - lVar7 >> 10)];
  }
  else {
    uVar8 = lVar7 - 1;
    lVar7 = param_2[uVar8 >> 10];
  }
  piVar4 = param_5;
  if (param_3 == (int *)(lVar7 + (uVar8 & 0x3ff) * 4)) {
    do {
      if ((param_4 <= param_2) && ((param_2 != param_4 || (piVar4 <= piVar5)))) break;
      if (piVar4 == (int *)*param_4) {
        param_4 = param_4 + -1;
        piVar4 = (int *)(*param_4 + 0x1000);
      }
      piVar4 = piVar4 + -1;
    } while (iVar1 <= *piVar4);
  }
  else {
    do {
      if (piVar4 == param_3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      if (piVar4 == (int *)*param_4) {
        param_4 = param_4 + -1;
        piVar4 = (int *)(*param_4 + 0x1000);
      }
      piVar4 = piVar4 + -1;
    } while (iVar1 <= *piVar4);
  }
  if (param_2 < param_4) {
    bVar2 = false;
  }
  else {
    bVar2 = param_2 != param_4 || piVar4 <= piVar5;
  }
  do {
    if ((param_4 <= param_2) && ((param_2 != param_4 || (piVar4 <= piVar5)))) {
      lVar7 = (long)piVar5 - (long)piVar3 >> 2;
      if (lVar7 < 2) {
        uVar8 = (ulong)~(uint)(0x400U - lVar7);
        lVar7 = (0x400U - lVar7 >> 10) * -8;
      }
      else {
        uVar8 = lVar7 - 1;
        lVar7 = (uVar8 >> 10) * 8;
      }
      piVar5 = (int *)(*(long *)((long)param_2 + lVar7) + (uVar8 & 0x3ff) * 4);
      if (param_3 != piVar5) {
        *param_3 = *piVar5;
      }
      *piVar5 = iVar1;
      *param_1 = (long)param_2 + lVar7;
      param_1[1] = (long)piVar5;
      *(bool *)(param_1 + 2) = bVar2;
      return;
    }
    *piVar5 = *piVar4;
    *piVar4 = iVar6;
    piVar3 = (int *)*param_2;
    do {
      piVar5 = piVar5 + 1;
      if ((long)piVar5 - (long)piVar3 == 0x1000) {
        param_2 = param_2 + 1;
        piVar3 = (int *)*param_2;
        piVar5 = piVar3;
      }
      if (piVar5 == param_5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      iVar6 = *piVar5;
    } while (iVar6 < iVar1);
    do {
      if (piVar4 == param_3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      if (piVar4 == (int *)*param_4) {
        param_4 = param_4 + -1;
        piVar4 = (int *)(*param_4 + 0x1000);
      }
      piVar4 = piVar4 + -1;
    } while (iVar1 <= *piVar4);
  } while( true );
}


// ===== 00923800  FUN_00923800 =====

bool FUN_00923800(long *param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  
  if (param_4 == param_2) {
    return true;
  }
  piVar4 = (int *)*param_3;
  lVar8 = (long)param_2 - *param_1;
  uVar9 = lVar8 >> 2;
  uVar7 = (((long)param_4 - (long)piVar4 >> 2) + ((long)param_3 - (long)param_1) * 0x80) - uVar9;
  if (2 < (long)uVar7) {
    if (uVar7 == 3) {
      if ((long)uVar9 < 0) {
        uVar7 = (ulong)~(uint)(0x3fe - uVar9);
        lVar8 = param_1[-(0x3fe - uVar9 >> 10)];
      }
      else {
        uVar7 = uVar9 + 1;
        lVar8 = param_1[uVar7 >> 10];
      }
      piVar11 = (int *)(lVar8 + (uVar7 & 0x3ff) * 4);
      if (param_4 == piVar4) {
        param_4 = (int *)(param_3[-1] + 0x1000);
      }
      iVar1 = *piVar11;
      iVar2 = *param_2;
      iVar3 = param_4[-1];
      if (iVar1 < iVar2) {
        if (iVar3 < iVar1) {
          *param_2 = iVar3;
        }
        else {
          *param_2 = iVar1;
          *piVar11 = iVar2;
          if (iVar2 <= param_4[-1]) {
            return true;
          }
          *piVar11 = param_4[-1];
        }
        goto LAB_00923b20;
      }
      if (iVar1 <= iVar3) {
        return true;
      }
      *piVar11 = iVar3;
      param_4[-1] = iVar1;
      goto LAB_00923d90;
    }
    if (uVar7 == 4) {
      if ((long)uVar9 < 0) {
        piVar11 = (int *)(param_1[-(0x3fe - uVar9 >> 10)] +
                         ((ulong)~(uint)(0x3fe - uVar9) & 0x3ff) * 4);
        if (lVar8 == -4) {
          uVar7 = 1;
          goto LAB_00923a94;
        }
        uVar7 = (ulong)~(uint)(0x3fd - uVar9);
        lVar8 = param_1[-(0x3fd - uVar9 >> 10)];
      }
      else {
        piVar11 = (int *)(param_1[uVar9 + 1 >> 10] + (uVar9 + 1 & 0x3ff) * 4);
        uVar7 = uVar9 + 2;
LAB_00923a94:
        lVar8 = param_1[uVar7 >> 10];
      }
      piVar6 = (int *)(lVar8 + (uVar7 & 0x3ff) * 4);
      if (param_4 == piVar4) {
        param_4 = (int *)(param_3[-1] + 0x1000);
      }
      iVar2 = *piVar11;
      iVar1 = *param_2;
      iVar3 = *piVar6;
      if (iVar2 < iVar1) {
        if (iVar3 < iVar2) {
          *param_2 = iVar3;
        }
        else {
          *param_2 = iVar2;
          *piVar11 = iVar1;
          iVar3 = *piVar6;
          if (iVar1 <= iVar3) goto LAB_00923d64;
          *piVar11 = iVar3;
        }
        *piVar6 = iVar1;
        iVar3 = iVar1;
      }
      else if (iVar3 < iVar2) {
        *piVar11 = iVar3;
        *piVar6 = iVar2;
        iVar1 = *param_2;
        iVar3 = iVar2;
        if (*piVar11 < iVar1) {
          *param_2 = *piVar11;
          *piVar11 = iVar1;
          iVar3 = *piVar6;
        }
      }
LAB_00923d64:
      if (iVar3 <= param_4[-1]) {
        return true;
      }
      *piVar6 = param_4[-1];
      param_4[-1] = iVar3;
    }
    else {
      if (uVar7 != 5) goto LAB_009238c0;
      if ((long)uVar9 < 0) {
        piVar11 = (int *)(param_1[-(0x3fe - uVar9 >> 10)] +
                         ((ulong)~(uint)(0x3fe - uVar9) & 0x3ff) * 4);
        if (lVar8 == -4) {
          uVar7 = 1;
          goto LAB_009239e0;
        }
        piVar6 = (int *)(param_1[-(0x3fd - uVar9 >> 10)] +
                        ((ulong)~(uint)(0x3fd - uVar9) & 0x3ff) * 4);
        if (0xfffffffffffffffd < uVar9) {
          uVar10 = 1;
          goto LAB_009239f4;
        }
        uVar10 = (ulong)~(uint)(0x3fc - uVar9);
        lVar8 = param_1[-(0x3fc - uVar9 >> 10)];
      }
      else {
        piVar11 = (int *)(param_1[uVar9 + 1 >> 10] + (uVar9 + 1 & 0x3ff) * 4);
        uVar7 = uVar9 + 2;
LAB_009239e0:
        uVar10 = uVar9 + 3;
        piVar6 = (int *)(param_1[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
LAB_009239f4:
        lVar8 = param_1[uVar10 >> 10];
      }
      piVar14 = (int *)(lVar8 + (uVar10 & 0x3ff) * 4);
      if (param_4 == piVar4) {
        param_4 = (int *)(param_3[-1] + 0x1000);
      }
      iVar2 = *piVar11;
      iVar1 = *param_2;
      iVar3 = *piVar6;
      if (iVar2 < iVar1) {
        if (iVar3 < iVar2) {
          *param_2 = iVar3;
        }
        else {
          *param_2 = iVar2;
          *piVar11 = iVar1;
          iVar3 = *piVar6;
          if (iVar1 <= iVar3) goto LAB_00923cc4;
          *piVar11 = iVar3;
        }
        *piVar6 = iVar1;
        iVar3 = iVar1;
      }
      else if (iVar3 < iVar2) {
        *piVar11 = iVar3;
        *piVar6 = iVar2;
        iVar1 = *param_2;
        iVar3 = iVar2;
        if (*piVar11 < iVar1) {
          *param_2 = *piVar11;
          *piVar11 = iVar1;
          iVar3 = *piVar6;
        }
      }
LAB_00923cc4:
      if (*piVar14 < iVar3) {
        *piVar6 = *piVar14;
        *piVar14 = iVar3;
        iVar2 = *piVar11;
        if (*piVar6 < iVar2) {
          *piVar11 = *piVar6;
          *piVar6 = iVar2;
          iVar2 = *param_2;
          if (*piVar11 < iVar2) {
            *param_2 = *piVar11;
            *piVar11 = iVar2;
          }
        }
      }
      iVar2 = *piVar14;
      if (iVar2 <= param_4[-1]) {
        return true;
      }
      *piVar14 = param_4[-1];
      param_4[-1] = iVar2;
      iVar2 = *piVar6;
      if (iVar2 <= *piVar14) {
        return true;
      }
      *piVar6 = *piVar14;
      *piVar14 = iVar2;
    }
    iVar2 = *piVar11;
    if (iVar2 <= *piVar6) {
      return true;
    }
    *piVar11 = *piVar6;
    *piVar6 = iVar2;
LAB_00923d90:
    iVar2 = *param_2;
    if (iVar2 <= *piVar11) {
      return true;
    }
    *param_2 = *piVar11;
    *piVar11 = iVar2;
    return true;
  }
  if (uVar7 < 2) {
    return true;
  }
  if (uVar7 == 2) {
    if (param_4 == piVar4) {
      param_4 = (int *)(param_3[-1] + 0x1000);
    }
    iVar2 = *param_2;
    if (iVar2 <= param_4[-1]) {
      return true;
    }
    *param_2 = param_4[-1];
LAB_00923b20:
    param_4[-1] = iVar2;
    return true;
  }
LAB_009238c0:
  if (uVar9 == 0xfffffffffffffffe || (long)(uVar9 + 2) < 0 != SCARRY8(uVar9,2)) {
    plVar5 = param_1 + -(0x3fd - uVar9 >> 10);
    piVar4 = (int *)(*plVar5 + ((ulong)~(uint)(0x3fd - uVar9) & 0x3ff) * 4);
    uVar9 = 0x3fe - uVar9;
LAB_00923938:
    uVar7 = (ulong)~(uint)uVar9;
    lVar8 = param_1[-(uVar9 >> 10)];
  }
  else {
    plVar5 = param_1 + (uVar9 + 2 >> 10);
    piVar4 = (int *)(*plVar5 + (uVar9 + 2 & 0x3ff) * 4);
    uVar7 = uVar9 + 1;
    if (uVar9 == 0xffffffffffffffff) {
      uVar9 = 0x3ff;
      goto LAB_00923938;
    }
    lVar8 = param_1[uVar7 >> 10];
  }
  iVar2 = *piVar4;
  piVar11 = (int *)(lVar8 + (uVar7 & 0x3ff) * 4);
  iVar1 = *param_2;
  iVar3 = *piVar11;
  if (iVar3 < iVar1) {
    if (iVar2 < iVar3) {
      *param_2 = iVar2;
    }
    else {
      *param_2 = iVar3;
      *piVar11 = iVar1;
      if (iVar1 <= *piVar4) goto LAB_00923ba8;
      *piVar11 = *piVar4;
    }
    *piVar4 = iVar1;
  }
  else if (iVar2 < iVar3) {
    *piVar11 = iVar2;
    *piVar4 = iVar3;
    iVar2 = *param_2;
    if (*piVar11 < iVar2) {
      *param_2 = *piVar11;
      *piVar11 = iVar2;
    }
  }
LAB_00923ba8:
  lVar8 = (long)piVar4 - *plVar5 >> 2;
  if (lVar8 < 0) {
    uVar7 = (ulong)~(uint)(0x3feU - lVar8);
    lVar8 = (0x3feU - lVar8 >> 10) * -8;
  }
  else {
    uVar7 = lVar8 + 1;
    lVar8 = (uVar7 >> 10) * 8;
  }
  piVar11 = *(int **)((long)plVar5 + lVar8);
  if (piVar11 + (uVar7 & 0x3ff) != param_4) {
    iVar2 = 0;
    plVar13 = (long *)((long)plVar5 + lVar8);
    piVar6 = piVar11 + (uVar7 & 0x3ff);
    do {
      iVar1 = *piVar6;
      iVar3 = *piVar4;
      piVar14 = piVar6;
      if (iVar1 < iVar3) {
        do {
          piVar11 = piVar4;
          *piVar14 = iVar3;
          if (piVar11 == param_2) break;
          piVar4 = piVar11;
          if (piVar11 == (int *)*plVar5) {
            plVar5 = plVar5 + -1;
            piVar4 = (int *)(*plVar5 + 0x1000);
          }
          iVar3 = piVar4[-1];
          piVar4 = piVar4 + -1;
          piVar14 = piVar11;
        } while (iVar1 < iVar3);
        iVar2 = iVar2 + 1;
        *piVar11 = iVar1;
        if (iVar2 == 8) {
          piVar6 = piVar6 + 1;
          if ((long)piVar6 - *plVar13 == 0x1000) {
            piVar6 = (int *)plVar13[1];
          }
          return piVar6 == param_4;
        }
        piVar11 = (int *)*plVar13;
      }
      plVar12 = plVar13;
      piVar14 = piVar6 + 1;
      if ((long)(piVar6 + 1) - (long)piVar11 == 0x1000) {
        plVar12 = plVar13 + 1;
        piVar11 = (int *)*plVar12;
        piVar14 = piVar11;
      }
      plVar5 = plVar13;
      piVar4 = piVar6;
      plVar13 = plVar12;
      piVar6 = piVar14;
    } while (piVar14 != param_4);
  }
  return true;
}


// ===== 00923e3c  FUN_00923e3c =====

undefined1  [16]
FUN_00923e3c(long *param_1,int *param_2,long *param_3,int *param_4,long *param_5,int *param_6,
            undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (param_2 != param_4) {
    piVar4 = (int *)*param_3;
    lVar9 = ((long)param_3 - (long)param_1) * 0x80;
    uVar5 = (lVar9 + ((long)param_4 - (long)piVar4 >> 2)) - ((long)param_2 - *param_1 >> 2);
    if (1 < (long)uVar5) {
      lVar2 = uVar5 + (uVar5 & 1);
      if (lVar2 + -2 < 0 == SCARRY8(lVar2 + -3,1)) {
        lVar6 = (lVar2 + -3) / 2;
        do {
          FUN_00924530(param_1,param_2,param_7,lVar2 + -1,lVar6);
          lVar6 = lVar6 + -1;
        } while (lVar6 != -1);
      }
      FUN_009249ec(param_1,param_2,param_3,param_4,param_7,uVar5);
      piVar4 = (int *)*param_3;
      uVar5 = (lVar9 + ((long)param_4 - (long)piVar4 >> 2)) - ((long)param_2 - *param_1 >> 2);
    }
    param_5 = param_3;
    piVar8 = param_4;
    if (param_4 != param_6) {
      do {
        iVar3 = *piVar8;
        if (iVar3 < *param_2) {
          *piVar8 = *param_2;
          *param_2 = iVar3;
          FUN_00924030(param_1,param_2,param_7,uVar5,0);
          piVar4 = (int *)*param_5;
        }
        piVar7 = piVar8 + 1;
        if ((long)(piVar8 + 1) - (long)piVar4 == 0x1000) {
          param_5 = param_5 + 1;
          piVar4 = (int *)*param_5;
          piVar7 = piVar4;
        }
        piVar8 = piVar7;
      } while (piVar7 != param_6);
      uVar5 = (lVar9 + ((long)param_4 - *param_3 >> 2)) - ((long)param_2 - *param_1 >> 2);
      piVar8 = param_6;
    }
    param_6 = piVar8;
    if (1 < (long)uVar5) {
      do {
        FUN_00924ae0(param_1,param_2,param_3,param_4,param_7,uVar5);
        if (param_4 == (int *)*param_3) {
          param_3 = param_3 + -1;
          param_4 = (int *)(*param_3 + 0x1000);
        }
        param_4 = param_4 + -1;
        bVar1 = 2 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
  }
  auVar10._8_8_ = param_6;
  auVar10._0_8_ = param_5;
  return auVar10;
}


// ===== 00924030  FUN_00924030 =====

void FUN_00924030(long *param_1,int *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_4 < 2) {
    return;
  }
  uVar5 = param_4 - 2U >> 1;
  if ((long)uVar5 < (long)param_5) {
    return;
  }
  lVar6 = *param_1;
  uVar1 = param_5 << 1 | 1;
  uVar9 = param_5 * 2 + 2;
  lVar8 = (long)param_2 - lVar6 >> 2;
  uVar7 = uVar1;
  if ((long)uVar9 < param_4) {
    uVar7 = lVar8 + uVar1;
    if ((long)uVar7 < 1) {
      uVar11 = 0x3ff - uVar7;
      uVar7 = 0x7fe - uVar7;
      if (-1 < (long)uVar11) {
        uVar7 = uVar11;
      }
      uVar12 = uVar11 & 0x3ff;
      if ((long)uVar11 < 1) {
        uVar12 = -(-uVar11 & 0x3ff);
      }
      piVar10 = (int *)(param_1[-((long)uVar7 >> 10)] + (0x3ff - uVar12) * 4);
    }
    else {
      piVar10 = (int *)(param_1[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
    }
    if (uVar9 != 0) {
      uVar7 = lVar8 + uVar9;
      if ((long)uVar7 < 1) {
        uVar11 = 0x3ff - uVar7;
        uVar7 = 0x7fe - uVar7;
        if (-1 < (long)uVar11) {
          uVar7 = uVar11;
        }
        uVar12 = uVar11 & 0x3ff;
        if ((long)uVar11 < 1) {
          uVar12 = -(-uVar11 & 0x3ff);
        }
        piVar3 = (int *)(param_1[-((long)uVar7 >> 10)] + (0x3ff - uVar12) * 4);
      }
      else {
        piVar3 = (int *)(param_1[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
      }
      uVar7 = uVar9;
      if (*piVar3 <= *piVar10) {
        uVar7 = uVar1;
      }
      goto LAB_0092415c;
    }
    if (*param_2 <= *piVar10) {
      uVar7 = 0xffffffffffffffff;
      goto LAB_0092415c;
    }
    uVar7 = 0;
    piVar10 = param_2;
  }
  else {
LAB_0092415c:
    uVar9 = lVar8 + uVar7;
    if ((long)uVar9 < 1) {
      uVar1 = 0x3ff - uVar9;
      uVar9 = 0x7fe - uVar9;
      if (-1 < (long)uVar1) {
        uVar9 = uVar1;
      }
      uVar11 = uVar1 & 0x3ff;
      if ((long)uVar1 < 1) {
        uVar11 = -(-uVar1 & 0x3ff);
      }
      piVar10 = (int *)(param_1[-((long)uVar9 >> 10)] + (0x3ff - uVar11) * 4);
    }
    else {
      piVar10 = (int *)(param_1[uVar9 >> 10] + (uVar9 & 0x3ff) * 4);
    }
  }
  if (param_5 == 0) {
    piVar3 = param_2;
    if (*param_2 <= *piVar10) goto LAB_00924280;
  }
  else {
    uVar9 = param_5 + lVar8;
    if ((long)uVar9 < 1) {
      uVar11 = 0x3ff - uVar9;
      uVar1 = 0x7fe - uVar9;
      if (-1 < (long)uVar11) {
        uVar1 = uVar11;
      }
      uVar12 = uVar11 & 0x3ff;
      if ((long)uVar11 < 1) {
        uVar12 = -(-uVar11 & 0x3ff);
      }
      if (*(int *)(param_1[-((long)uVar1 >> 10)] + (0x3ff - uVar12) * 4) <= *piVar10) {
        uVar1 = 0x3ff - uVar9;
        uVar9 = 0x7fe - uVar9;
        if (-1 < (long)uVar1) {
          uVar9 = uVar1;
        }
        uVar11 = uVar1 & 0x3ff;
        if ((long)uVar1 < 1) {
          uVar11 = -(-uVar1 & 0x3ff);
        }
        piVar3 = (int *)(param_1[-((long)uVar9 >> 10)] + (0x3ff - uVar11) * 4);
        goto LAB_00924280;
      }
    }
    else if (*(int *)(param_1[uVar9 >> 10] + (uVar9 & 0x3ff) * 4) <= *piVar10) {
      piVar3 = (int *)(param_1[uVar9 >> 10] + (uVar9 & 0x3ff) * 4);
LAB_00924280:
      iVar2 = *piVar3;
      do {
        uVar9 = uVar7;
        piVar10 = param_2;
        if (uVar9 != 0) {
          uVar1 = uVar9 + ((long)param_2 - lVar6 >> 2);
          if ((long)uVar1 < 1) {
            uVar7 = 0x3ff - uVar1;
            uVar1 = 0x7fe - uVar1;
            if (-1 < (long)uVar7) {
              uVar1 = uVar7;
            }
            uVar11 = uVar7 & 0x3ff;
            if ((long)uVar7 < 1) {
              uVar11 = -(-uVar7 & 0x3ff);
            }
            piVar10 = (int *)(param_1[-((long)uVar1 >> 10)] + (0x3ff - uVar11) * 4);
          }
          else {
            piVar10 = (int *)(param_1[uVar1 >> 10] + (uVar1 & 0x3ff) * 4);
          }
        }
        piVar3 = param_2;
        if (param_5 != 0) {
          param_5 = param_5 + ((long)param_2 - lVar6 >> 2);
          if ((long)param_5 < 1) {
            uVar7 = 0x3ff - param_5;
            uVar1 = 0x7fe - param_5;
            if (-1 < (long)uVar7) {
              uVar1 = uVar7;
            }
            uVar11 = uVar7 & 0x3ff;
            if ((long)uVar7 < 1) {
              uVar11 = -(-uVar7 & 0x3ff);
            }
            piVar3 = (int *)(param_1[-((long)uVar1 >> 10)] + (0x3ff - uVar11) * 4);
          }
          else {
            piVar3 = (int *)(param_1[param_5 >> 10] + (param_5 & 0x3ff) * 4);
          }
        }
        *piVar3 = *piVar10;
        if ((long)uVar5 < (long)uVar9) break;
        lVar6 = *param_1;
        uVar11 = uVar9 << 1 | 1;
        uVar1 = uVar9 * 2 + 2;
        lVar8 = (long)param_2 - lVar6 >> 2;
        uVar7 = uVar11;
        if ((long)uVar1 < param_4) {
          uVar7 = lVar8 + uVar11;
          if ((long)uVar7 < 1) {
            uVar12 = 0x3ff - uVar7;
            uVar7 = 0x7fe - uVar7;
            if (-1 < (long)uVar12) {
              uVar7 = uVar12;
            }
            uVar4 = uVar12 & 0x3ff;
            if ((long)uVar12 < 1) {
              uVar4 = -(-uVar12 & 0x3ff);
            }
            piVar10 = (int *)(param_1[-((long)uVar7 >> 10)] + (0x3ff - uVar4) * 4);
          }
          else {
            piVar10 = (int *)(param_1[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
          }
          if (uVar1 != 0) {
            uVar7 = lVar8 + uVar1;
            if ((long)uVar7 < 1) {
              uVar12 = 0x3ff - uVar7;
              uVar7 = 0x7fe - uVar7;
              if (-1 < (long)uVar12) {
                uVar7 = uVar12;
              }
              uVar4 = uVar12 & 0x3ff;
              if ((long)uVar12 < 1) {
                uVar4 = -(-uVar12 & 0x3ff);
              }
              piVar3 = (int *)(param_1[-((long)uVar7 >> 10)] + (0x3ff - uVar4) * 4);
            }
            else {
              piVar3 = (int *)(param_1[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
            }
            uVar7 = uVar1;
            if (*piVar3 <= *piVar10) {
              uVar7 = uVar11;
            }
            goto LAB_00924498;
          }
          if (*param_2 <= *piVar10) {
            uVar7 = 0xffffffffffffffff;
            goto LAB_00924498;
          }
          uVar7 = 0;
          piVar10 = param_2;
        }
        else {
LAB_00924498:
          uVar1 = lVar8 + uVar7;
          if ((long)uVar1 < 1) {
            uVar11 = 0x3ff - uVar1;
            uVar1 = 0x7fe - uVar1;
            if (-1 < (long)uVar11) {
              uVar1 = uVar11;
            }
            uVar12 = uVar11 & 0x3ff;
            if ((long)uVar11 < 1) {
              uVar12 = -(-uVar11 & 0x3ff);
            }
            piVar10 = (int *)(param_1[-((long)uVar1 >> 10)] + (0x3ff - uVar12) * 4);
          }
          else {
            piVar10 = (int *)(param_1[uVar1 >> 10] + (uVar1 & 0x3ff) * 4);
          }
        }
        param_5 = uVar9;
      } while (iVar2 <= *piVar10);
      if (uVar9 != 0) {
        uVar9 = uVar9 + ((long)param_2 - *param_1 >> 2);
        if (0 < (long)uVar9) {
          *(int *)(param_1[uVar9 >> 10] + (uVar9 & 0x3ff) * 4) = iVar2;
          return;
        }
        uVar1 = 0x3ff - uVar9;
        uVar5 = 0x7fe - uVar9;
        if (-1 < (long)uVar1) {
          uVar5 = uVar1;
        }
        uVar9 = uVar1 & 0x3ff;
        if ((long)uVar1 < 1) {
          uVar9 = -(-uVar1 & 0x3ff);
        }
        param_2 = (int *)(param_1[-((long)uVar5 >> 10)] + (0x3ff - uVar9) * 4);
      }
      *param_2 = iVar2;
      return;
    }
  }
  return;
}


// ===== 00924530  FUN_00924530 =====

void FUN_00924530(long *param_1,int *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((1 < param_4) && (uVar5 = param_4 - 2U >> 1, (long)param_5 <= (long)uVar5)) {
    lVar6 = *param_1;
    uVar3 = param_5 << 1 | 1;
    lVar7 = (long)param_2 - lVar6 >> 2;
    uVar10 = lVar7 + uVar3;
    if ((long)uVar10 < 1) {
      uVar2 = 0x3ff - uVar10;
      uVar10 = 0x7fe - uVar10;
      if (-1 < (long)uVar2) {
        uVar10 = uVar2;
      }
      uVar11 = uVar2 & 0x3ff;
      if ((long)uVar2 < 1) {
        uVar11 = -(-uVar2 & 0x3ff);
      }
      piVar9 = (int *)(param_1[-((long)uVar10 >> 10)] + (0x3ff - uVar11) * 4);
    }
    else {
      piVar9 = (int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4);
    }
    lVar1 = param_5 * 2 + 2;
    piVar8 = param_2;
    if (lVar1 != 0) {
      uVar10 = lVar7 + lVar1;
      if ((long)uVar10 < 1) {
        uVar2 = 0x3ff - uVar10;
        uVar10 = 0x7fe - uVar10;
        if (-1 < (long)uVar2) {
          uVar10 = uVar2;
        }
        uVar11 = uVar2 & 0x3ff;
        if ((long)uVar2 < 1) {
          uVar11 = -(-uVar2 & 0x3ff);
        }
        piVar8 = (int *)(param_1[-((long)uVar10 >> 10)] + (0x3ff - uVar11) * 4);
      }
      else {
        piVar8 = (int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4);
      }
    }
    if (*piVar9 < *piVar8) {
      uVar3 = uVar3 + 1;
    }
    piVar9 = param_2;
    if (uVar3 != 0) {
      uVar10 = uVar3 + lVar7;
      if ((long)uVar10 < 1) {
        uVar2 = 0x3ff - uVar10;
        uVar10 = 0x7fe - uVar10;
        if (-1 < (long)uVar2) {
          uVar10 = uVar2;
        }
        uVar11 = uVar2 & 0x3ff;
        if ((long)uVar2 < 1) {
          uVar11 = -(-uVar2 & 0x3ff);
        }
        piVar9 = (int *)(param_1[-((long)uVar10 >> 10)] + (0x3ff - uVar11) * 4);
      }
      else {
        piVar9 = (int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4);
      }
    }
    if (param_5 == 0) {
      piVar8 = param_2;
      if (*param_2 <= *piVar9) goto LAB_0092475c;
    }
    else {
      uVar10 = lVar7 + param_5;
      if ((long)uVar10 < 1) {
        uVar11 = 0x3ff - uVar10;
        uVar2 = 0x7fe - uVar10;
        if (-1 < (long)uVar11) {
          uVar2 = uVar11;
        }
        uVar12 = uVar11 & 0x3ff;
        if ((long)uVar11 < 1) {
          uVar12 = -(-uVar11 & 0x3ff);
        }
        if (*(int *)(param_1[-((long)uVar2 >> 10)] + (0x3ff - uVar12) * 4) <= *piVar9) {
          uVar2 = 0x3ff - uVar10;
          uVar10 = 0x7fe - uVar10;
          if (-1 < (long)uVar2) {
            uVar10 = uVar2;
          }
          uVar11 = uVar2 & 0x3ff;
          if ((long)uVar2 < 1) {
            uVar11 = -(-uVar2 & 0x3ff);
          }
          piVar8 = (int *)(param_1[-((long)uVar10 >> 10)] + (0x3ff - uVar11) * 4);
          goto LAB_0092475c;
        }
      }
      else if (*(int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4) <= *piVar9) {
        piVar8 = (int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4);
LAB_0092475c:
        iVar4 = *piVar8;
        do {
          uVar10 = uVar3;
          piVar9 = param_2;
          if (uVar10 != 0) {
            uVar3 = uVar10 + ((long)param_2 - lVar6 >> 2);
            if ((long)uVar3 < 1) {
              uVar2 = 0x3ff - uVar3;
              uVar3 = 0x7fe - uVar3;
              if (-1 < (long)uVar2) {
                uVar3 = uVar2;
              }
              uVar11 = uVar2 & 0x3ff;
              if ((long)uVar2 < 1) {
                uVar11 = -(-uVar2 & 0x3ff);
              }
              piVar9 = (int *)(param_1[-((long)uVar3 >> 10)] + (0x3ff - uVar11) * 4);
            }
            else {
              piVar9 = (int *)(param_1[uVar3 >> 10] + (uVar3 & 0x3ff) * 4);
            }
          }
          piVar8 = param_2;
          if (param_5 != 0) {
            param_5 = param_5 + ((long)param_2 - lVar6 >> 2);
            if ((long)param_5 < 1) {
              uVar2 = 0x3ff - param_5;
              uVar3 = 0x7fe - param_5;
              if (-1 < (long)uVar2) {
                uVar3 = uVar2;
              }
              uVar11 = uVar2 & 0x3ff;
              if ((long)uVar2 < 1) {
                uVar11 = -(-uVar2 & 0x3ff);
              }
              piVar8 = (int *)(param_1[-((long)uVar3 >> 10)] + (0x3ff - uVar11) * 4);
            }
            else {
              piVar8 = (int *)(param_1[param_5 >> 10] + (param_5 & 0x3ff) * 4);
            }
          }
          *piVar8 = *piVar9;
          if ((long)uVar5 < (long)uVar10) break;
          lVar6 = *param_1;
          uVar3 = uVar10 << 1 | 1;
          lVar7 = (long)param_2 - lVar6 >> 2;
          uVar2 = lVar7 + uVar3;
          if ((long)uVar2 < 1) {
            uVar11 = 0x3ff - uVar2;
            uVar2 = 0x7fe - uVar2;
            if (-1 < (long)uVar11) {
              uVar2 = uVar11;
            }
            uVar12 = uVar11 & 0x3ff;
            if ((long)uVar11 < 1) {
              uVar12 = -(-uVar11 & 0x3ff);
            }
            piVar9 = (int *)(param_1[-((long)uVar2 >> 10)] + (0x3ff - uVar12) * 4);
          }
          else {
            piVar9 = (int *)(param_1[uVar2 >> 10] + (uVar2 & 0x3ff) * 4);
          }
          lVar1 = uVar10 * 2 + 2;
          piVar8 = param_2;
          if (lVar1 != 0) {
            uVar2 = lVar7 + lVar1;
            if ((long)uVar2 < 1) {
              uVar11 = 0x3ff - uVar2;
              uVar2 = 0x7fe - uVar2;
              if (-1 < (long)uVar11) {
                uVar2 = uVar11;
              }
              uVar12 = uVar11 & 0x3ff;
              if ((long)uVar11 < 1) {
                uVar12 = -(-uVar11 & 0x3ff);
              }
              piVar8 = (int *)(param_1[-((long)uVar2 >> 10)] + (0x3ff - uVar12) * 4);
            }
            else {
              piVar8 = (int *)(param_1[uVar2 >> 10] + (uVar2 & 0x3ff) * 4);
            }
          }
          if (*piVar9 < *piVar8) {
            uVar3 = uVar3 + 1;
          }
          piVar9 = param_2;
          if (uVar3 != 0) {
            uVar2 = uVar3 + lVar7;
            if ((long)uVar2 < 1) {
              uVar11 = 0x3ff - uVar2;
              uVar2 = 0x7fe - uVar2;
              if (-1 < (long)uVar11) {
                uVar2 = uVar11;
              }
              uVar12 = uVar11 & 0x3ff;
              if ((long)uVar11 < 1) {
                uVar12 = -(-uVar11 & 0x3ff);
              }
              piVar9 = (int *)(param_1[-((long)uVar2 >> 10)] + (0x3ff - uVar12) * 4);
            }
            else {
              piVar9 = (int *)(param_1[uVar2 >> 10] + (uVar2 & 0x3ff) * 4);
            }
          }
          param_5 = uVar10;
        } while (iVar4 <= *piVar9);
        if (uVar10 != 0) {
          uVar10 = uVar10 + ((long)param_2 - *param_1 >> 2);
          if (0 < (long)uVar10) {
            *(int *)(param_1[uVar10 >> 10] + (uVar10 & 0x3ff) * 4) = iVar4;
            return;
          }
          uVar3 = 0x3ff - uVar10;
          uVar5 = 0x7fe - uVar10;
          if (-1 < (long)uVar3) {
            uVar5 = uVar3;
          }
          uVar10 = uVar3 & 0x3ff;
          if ((long)uVar3 < 1) {
            uVar10 = -(-uVar3 & 0x3ff);
          }
          param_2 = (int *)(param_1[-((long)uVar5 >> 10)] + (0x3ff - uVar10) * 4);
        }
        *param_2 = iVar4;
        return;
      }
    }
  }
  return;
}


// ===== 009249ec  FUN_009249ec =====

void FUN_009249ec(long *param_1,int *param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  if (1 < param_6) {
    uVar3 = param_6 - 2U >> 1;
    piVar7 = param_2;
    if (uVar3 != 0) {
      uVar6 = uVar3 + ((long)param_2 - *param_1 >> 2);
      if ((long)uVar6 < 1) {
        uVar5 = 0x3ff - uVar6;
        uVar6 = (ulong)~(uint)uVar5;
        lVar4 = param_1[-(uVar5 >> 10)];
      }
      else {
        lVar4 = param_1[uVar6 >> 10];
      }
      piVar7 = (int *)(lVar4 + (uVar6 & 0x3ff) * 4);
    }
    if (param_4 == *param_3) {
      param_4 = param_3[-1] + 0x1000;
    }
    piVar2 = (int *)(param_4 + -4);
    iVar1 = *piVar2;
    iVar9 = *piVar7;
    if (iVar9 < iVar1) {
      do {
        piVar8 = piVar7;
        *piVar2 = iVar9;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1 >> 1;
        piVar7 = param_2;
        if (uVar3 != 0) {
          uVar6 = uVar3 + ((long)param_2 - *param_1 >> 2);
          if ((long)uVar6 < 1) {
            uVar5 = 0x3ff - uVar6;
            uVar6 = (ulong)~(uint)uVar5;
            lVar4 = param_1[-(uVar5 >> 10)];
          }
          else {
            lVar4 = param_1[uVar6 >> 10];
          }
          piVar7 = (int *)(lVar4 + (uVar6 & 0x3ff) * 4);
        }
        iVar9 = *piVar7;
        piVar2 = piVar8;
      } while (iVar9 < iVar1);
      *piVar8 = iVar1;
    }
  }
  return;
}


// ===== 00924ae0  FUN_00924ae0 =====

void FUN_00924ae0(long *param_1,int *param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_6 < 1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__algorithm/pop_heap.h:40: libc++ Hardening assertion __len > 0 failed: The heap given to pop_heap must be non-empty\n"
              );
  }
  if (param_6 != 1) {
    iVar1 = *param_2;
    uVar6 = 0;
    do {
      piVar5 = param_2;
      if (uVar6 != 0xffffffffffffffff) {
        uVar7 = uVar6 + 1 + ((long)param_2 - *param_1 >> 2);
        if ((long)uVar7 < 1) {
          uVar3 = 0x3ff - uVar7;
          uVar7 = 0x7fe - uVar7;
          if (-1 < (long)uVar3) {
            uVar7 = uVar3;
          }
          param_1 = param_1 + -((long)uVar7 >> 10);
          uVar7 = uVar3 & 0x3ff;
          if ((long)uVar3 < 1) {
            uVar7 = -(-uVar3 & 0x3ff);
          }
          piVar5 = (int *)(*param_1 + (0x3ff - uVar7) * 4);
        }
        else {
          param_1 = param_1 + (uVar7 >> 10);
          piVar5 = (int *)(*param_1 + (uVar7 & 0x3ff) * 4);
        }
      }
      lVar2 = uVar6 * 2;
      uVar6 = uVar6 << 1 | 1;
      uVar7 = lVar2 + 2;
      if ((long)uVar7 < param_6) {
        lVar2 = (long)piVar5 - *param_1 >> 2;
        if (lVar2 < 0) {
          uVar3 = (ulong)~(uint)(0x3feU - lVar2);
          lVar2 = param_1[-(0x3feU - lVar2 >> 10)];
        }
        else {
          uVar3 = lVar2 + 1;
          lVar2 = param_1[uVar3 >> 10];
        }
        if ((*piVar5 < *(int *)(lVar2 + (uVar3 & 0x3ff) * 4)) &&
           (piVar5 = piVar5 + 1, uVar6 = uVar7, (long)piVar5 - *param_1 == 0x1000)) {
          param_1 = param_1 + 1;
          piVar5 = (int *)*param_1;
        }
      }
      *param_2 = *piVar5;
      param_2 = piVar5;
    } while ((long)uVar6 <= (long)(param_6 - 2U >> 1));
    if (param_4 == *param_3) {
      param_4 = param_3[-1] + 0x1000;
    }
    piVar4 = (int *)(param_4 + -4);
    if (piVar5 != piVar4) {
      *piVar5 = *piVar4;
      *piVar4 = iVar1;
      FUN_009249ec();
      return;
    }
    *piVar5 = iVar1;
  }
  return;
}


// ===== 00924cd8  FUN_00924cd8 =====

void FUN_00924cd8(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x400) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0x1000);
      FUN_00925148(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0092566c(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_00925148(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_009253d0(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x400;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00924ec0(param_1,&local_50);
  return;
}


// ===== 00924ec0  FUN_00924ec0 =====

void FUN_00924ec0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00925130;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00925130:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00925148  FUN_00925148 =====

void FUN_00925148(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_009253b8;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_009253b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009253d0  FUN_009253d0 =====

void FUN_009253d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00925654;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00925654:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092566c  FUN_0092566c =====

void FUN_0092566c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_009258f0;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_009258f0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00925908  FUN_00925908 =====

void FUN_00925908(undefined8 *param_1,undefined8 *param_2,ulong param_3,int param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *__dest;
  void *pvVar4;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    *(int *)(param_1 + 3) = param_4;
    param_1[4] = param_5;
    iVar3 = 0;
    if (*(int *)(param_5 + 8) != 0) {
      iVar3 = (param_4 * 1000) / *(int *)(param_5 + 8);
    }
    pvVar4 = operator_new(0x10);
    FUN_0090d5e4(pvVar4,param_5,(long)iVar3);
    param_1[5] = pvVar4;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00925a48  FUN_00925a48 =====

void FUN_00925a48(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0090d62c(pvVar1);
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00925ab0  FUN_00925ab0 =====

void FUN_00925ab0(undefined8 *param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  
  if (((*(char *)(param_1 + 7) == '\x01') && ((ulong)param_1[6] <= param_2)) &&
     (*(int *)(param_1 + 9) == param_3)) {
    param_1[8] = param_2;
    *(int *)(param_1 + 9) = param_3;
  }
  else {
    param_1[8] = param_2;
    *(int *)(param_1 + 9) = param_3;
    param_1[6] = param_2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  puVar4 = *(undefined8 **)param_1[5];
  if ((ulong)((long *)param_1[5])[1] <= (ulong)(*(long *)*puVar4 - puVar4[1])) {
    lVar6 = (long)*(char *)((long)param_1 + 0x17);
    lVar8 = param_1[6];
    param_1[6] = param_2;
    *(undefined1 *)(param_1 + 7) = 1;
    puVar4 = param_1;
    if (lVar6 < 0) {
      lVar6 = param_1[1];
      puVar4 = (undefined8 *)*param_1;
    }
    iVar1 = *(int *)(param_1 + 3);
    lVar6 = thunk_FUN_0066631c(puVar4,lVar6,0x65);
    if (lVar6 != 0) {
      uVar3 = 0;
      if ((long)(iVar1 * param_3) != 0) {
        uVar3 = ((param_2 - lVar8) * 100) / (ulong)(long)(iVar1 * param_3);
      }
      FUN_00666568(lVar6,uVar3);
    }
    lVar6 = param_1[4];
    iVar1 = *(int *)(lVar6 + 8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (*(int *)(param_1 + 3) * 1000) / iVar1;
    }
    pvVar5 = operator_new(0x10);
    FUN_0090d5e4(pvVar5,lVar6,(long)iVar2);
    pvVar7 = (void *)param_1[5];
    param_1[5] = pvVar5;
    if (pvVar7 != (void *)0x0) {
      FUN_0090d62c(pvVar7);
      operator_delete(pvVar7);
      return;
    }
  }
  return;
}


// ===== 00925c04  FUN_00925c04 =====

long FUN_00925c04(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0091601c();
  return lVar1 - *(long *)(param_1 + 0x20);
}


// ===== 00925c34  FUN_00925c34 =====

void FUN_00925c34(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_0091601c(param_2);
  FUN_00915e50(param_1,param_2);
  FUN_00916054(param_1,uVar2);
  lVar1 = 0;
  if (uVar2 <= *(ulong *)(param_1 + 0x20)) {
    lVar1 = *(ulong *)(param_1 + 0x20) - uVar2;
  }
  *(long *)(param_1 + 0x20) = lVar1;
  lVar1 = 0;
  if (uVar2 <= *(ulong *)(param_1 + 0x30)) {
    lVar1 = *(ulong *)(param_1 + 0x30) - uVar2;
  }
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}


// ===== 00925ca8  FUN_00925ca8 =====

void FUN_00925ca8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = FUN_0091601c();
  lVar2 = 0;
  if (*param_2 != 0) {
    lVar2 = param_2[2];
  }
  FUN_00915be0(param_1,lVar2);
  lVar2 = FUN_0091601c(param_1);
  uVar3 = lVar2 - lVar1;
  FUN_00916054(param_1,uVar3);
  lVar2 = 0;
  if (uVar3 <= *(ulong *)(param_1 + 0x20)) {
    lVar2 = *(ulong *)(param_1 + 0x20) - uVar3;
  }
  *(long *)(param_1 + 0x20) = lVar2;
  lVar2 = 0;
  if (uVar3 <= *(ulong *)(param_1 + 0x30)) {
    lVar2 = *(ulong *)(param_1 + 0x30) - uVar3;
  }
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}


// ===== 00925d30  FUN_00925d30 =====

void FUN_00925d30(undefined8 param_1,undefined8 param_2)

{
  FUN_00925d3c(param_1,param_2,0);
  return;
}


// ===== 00925d3c  FUN_00925d3c =====

void FUN_00925d3c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = FUN_0091601c();
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  lVar3 = FUN_0091601c(param_1);
  uVar1 = lVar3 - uVar2;
  if (param_2 <= lVar3 - uVar2) {
    uVar1 = param_2;
  }
  FUN_009160a0(param_1,uVar1);
  lVar3 = FUN_00915b90(param_1);
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_00917110(*(undefined8 *)(*(long *)(param_1 + 8) + uVar5 * 8),uVar1,uVar2);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_00915b90(param_1);
    } while (uVar5 < uVar4);
  }
  if (uVar2 <= *(ulong *)(param_1 + 0x20)) {
    uVar5 = *(ulong *)(param_1 + 0x20) + uVar1;
    uVar4 = FUN_0091601c(param_1);
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    *(ulong *)(param_1 + 0x20) = uVar4;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  if ((uVar5 != 0) && (uVar2 <= uVar5)) {
    uVar2 = FUN_0091601c(param_1);
    if (uVar5 + uVar1 <= uVar2) {
      uVar2 = uVar5 + uVar1;
    }
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return;
}


// ===== 00925e40  FUN_00925e40 =====

void FUN_00925e40(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0091601c();
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}


// ===== 00925e78  FUN_00925e78 =====

void FUN_00925e78(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0091601c();
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x30) = uVar1;
  return;
}


// ===== 00925eb0  FUN_00925eb0 =====

void FUN_00925eb0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0091601c();
  if (param_4 <= uVar2) {
    uVar2 = param_4;
  }
  lVar3 = FUN_0091601c(param_1);
  uVar1 = lVar3 - uVar2;
  if (param_3 <= lVar3 - uVar2) {
    uVar1 = param_3;
  }
  FUN_009163f0(param_1,param_2,uVar1,uVar2);
  return;
}


// ===== 00925f18  FUN_00925f18 =====

void FUN_00925f18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = FUN_0091601c(param_2);
  uVar3 = FUN_0091601c(param_1);
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  lVar4 = FUN_0091601c(param_1);
  uVar1 = lVar4 - uVar3;
  if (uVar2 <= lVar4 - uVar3) {
    uVar1 = uVar2;
  }
  FUN_009163f0(param_1,param_2,uVar1,uVar3);
  return;
}


// ===== 00925f8c  FUN_00925f8c =====

uint FUN_00925f8c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uVar1 = FUN_0091624c(param_1,*(undefined8 *)(param_1 + 0x20),&local_40);
  if ((uVar1 & 1) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_2[1];
  }
  return uVar1 & 1;
}


// ===== 00925fe8  FUN_00925fe8 =====

void FUN_00925fe8(long param_1,int param_2)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_2;
  return;
}


// ===== 00925ffc  FUN_00925ffc =====

void FUN_00925ffc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0091601c();
  FUN_00915b3c(param_1,uVar1);
  uVar1 = FUN_0091601c(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


// ===== 00926044  FUN_00926044 =====

void FUN_00926044(void *param_1)

{
  FUN_00915980();
  operator_delete(param_1);
  return;
}


// ===== 00926074  FUN_00926074 =====

int FUN_00926074(long *param_1,undefined2 *param_2,ulong param_3,uint param_4,undefined8 param_5,
                undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  ushort local_148 [2];
  undefined2 local_144 [2];
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  
  uVar19 = param_1[2];
  lVar17 = (long)(*(int *)((long)param_1 + 0xc) * 0x78);
  if (uVar19 == 1) {
    puVar18 = (undefined2 *)0x0;
    uVar20 = param_3;
    puVar22 = param_2;
  }
  else {
    uVar20 = 0;
    if (uVar19 != 0) {
      uVar20 = param_3 / uVar19;
    }
    puVar18 = (undefined2 *)operator_new__(uVar20 << 1);
    puVar22 = puVar18;
    if (uVar19 <= param_3) {
      uVar14 = 0;
      puVar21 = param_2;
      do {
        uVar5 = *puVar21;
        puVar21 = puVar21 + uVar19;
        puVar18[uVar14] = uVar5;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar20);
    }
  }
  uVar5 = (**(code **)PTR_PTR_FUN_00d51f30)(puVar22,uVar20);
  *(undefined2 *)(param_1 + 4) = uVar5;
  FUN_0091a230(puVar22,uVar20,0x6e,(int)param_1[1],1,(long)param_1 + 0x22);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0091a9ac((long)param_1 + 0x9a,(long)param_1 + 0x86,0x32,0x32,0xffffffff,&local_140);
  uVar7 = (**(code **)PTR_PTR_FUN_00d52068)(&local_140,0x32);
  uVar11 = 0x11 - (int)LZCOUNT(uVar7 ^ uVar7 << 1 | 1);
  uVar13 = 0x11;
  if (uVar7 != 0) {
    uVar13 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  }
  FUN_00654ec0((long)param_1 + 0xfe,0x32,&local_140,uVar13);
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_144[0] = 0xaaaa;
  FUN_0091995c((long)param_1 + 0xfe,0x32,1,*(undefined4 *)((long)param_1 + 0xc),&local_140,local_144
              );
  sVar6 = (short)param_1[4];
  puVar21 = puVar22 + lVar17;
  local_140 = local_140 + (long)*(int *)((long)param_1 + 0xc) * 0x14;
  iVar8 = 0x1f;
  if (sVar6 != 0) {
    iVar8 = 0x20 - (int)LZCOUNT((int)sVar6 * (int)sVar6);
  }
  uVar13 = (uint)local_140;
  iVar9 = 0;
  if (uVar13 != 0) {
    iVar9 = (int)LZCOUNT(uVar13 ^ uVar13 << 1 | 1);
  }
  uVar13 = iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU);
  puVar22 = puVar22 + (lVar17 - (long)local_140);
  iVar8 = FUN_0091b330(puVar22,puVar22,local_140,uVar13);
  iVar9 = FUN_0091b330(puVar21,puVar21,local_140,uVar13);
  iVar10 = FUN_0091b330(puVar22,puVar21,local_140,uVar13);
  puVar15 = local_140;
  if (*(char *)(param_1[3] + 0x18) == '\x01') {
    uVar11 = FUN_0091a994(param_1[3],0);
    uVar3 = 0x10 - (int)LZCOUNT(uVar11 ^ uVar11 << 1 | 1);
    uVar7 = 0x10;
    if (uVar11 != 0) {
      uVar7 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    }
  }
  else {
    uVar11 = 75000;
    uVar7 = 2;
  }
  uVar13 = uVar13 * 2;
  local_148[0] = 0xaaaa;
  uVar19 = (long)iVar9 + (long)iVar8;
  uVar14 = uVar19 + 0xf;
  if (-1 < (long)uVar19) {
    uVar14 = uVar19;
  }
  uVar3 = (int)(uVar14 >> 4) >> (uVar7 & 0x1f);
  uVar16 = 0;
  if (uVar3 != 0) {
    uVar16 = (uint)LZCOUNT(uVar3 ^ uVar3 << 1 | 1);
  }
  uVar4 = uVar13 - uVar16;
  if (uVar4 == 0 || (int)uVar13 < (int)uVar16) {
    uVar4 = 0;
  }
  if ((int)uVar16 <= (int)uVar13) {
    uVar13 = uVar16;
  }
  iVar1 = ((int)uVar11 >> (uVar7 & 0x1f)) * (int)puVar15 >> (uVar4 & 0x1f);
  iVar2 = uVar3 << (ulong)(uVar13 & 0x1f);
  if (iVar1 < iVar2) {
    uVar25 = NEON_cmlt(CONCAT44(iVar8,iVar9),0,4);
    uVar23 = NEON_cmeq(CONCAT44(iVar8,iVar9),0,4);
    uVar25 = NEON_clz(CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((uint)iVar8 >> 0x18),
                               CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((uint)iVar8 >> 0x10),
                                        CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                 (byte)((uint)iVar8 >> 8),
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                          (byte)iVar8,
                                                          CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                   (byte)((uint)iVar9 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar25 >>
                                                                                  0x10) ^
                                                                            (byte)((uint)iVar9 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ (byte)((uint)iVar9 >> 8),
                                                  (byte)uVar25 ^ (byte)iVar9))))))),4);
    uVar25 = NEON_smax(CONCAT44(0x11 - (int)((ulong)uVar25 >> 0x20),0x11 - (int)uVar25),0,4);
    uVar23 = NEON_bsl(uVar23,0x1000000010,uVar25,1);
    iVar24 = (int)((ulong)uVar23 >> 0x20);
    uVar11 = (uint)uVar23;
    uVar13 = (uVar11 + iVar24 & 1) + iVar24;
    uVar12 = FUN_0091b810((int)(short)(iVar8 >> (uVar13 & 0x1f)) *
                          (int)(short)(iVar9 >> (uVar11 & 0x1f)));
    uVar13 = uVar13 + uVar11;
    uVar7 = uVar13 >> 1;
    uVar11 = iVar10 << (ulong)(0xe - uVar7 & 0x1f);
    if (0x1d < uVar13) {
      uVar11 = iVar10 >> (uVar7 - 0xe & 0x1f);
    }
    sVar6 = FUN_0065880c(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU),uVar12);
    uVar13 = (uint)sVar6;
    if (0x3fff < (int)uVar13) {
      uVar13 = 0x4000;
    }
    local_148[0] = (ushort)uVar13;
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,uVar20,local_148,&local_140);
    uVar13 = (uint)local_148[0];
  }
  iVar8 = (**(code **)(*param_1 + 0x18))
                    (param_1,param_2,param_3,local_140,uVar13,iVar1 < iVar2,param_4 & 1,param_5);
  if (iVar8 < 1) {
    puVar15 = (undefined1 *)0x0;
    if ((iVar8 != -1) && (puVar15 = local_140, iVar8 != 0)) goto LAB_00926460;
  }
  else {
    puVar15 = local_140;
    if ((iVar8 != 1) && (puVar15 = (undefined1 *)0x0, iVar8 != 2)) goto LAB_00926460;
  }
  *param_6 = puVar15;
LAB_00926460:
  if (puVar18 != (undefined2 *)0x0) {
    operator_delete__(puVar18);
  }
  return iVar8;
}


// ===== 00926494  FUN_00926494 =====

void FUN_00926494(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


// ===== 009264a0  FUN_009264a0 =====

void FUN_009264a0(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))((int)param_1,*param_2,*(undefined1 *)((long)param_2 + 6))
    ;
    *param_2 = uVar1;
  }
  return;
}


// ===== 009264e4  FUN_009264e4 =====

void FUN_009264e4(long *param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 8); lVar1 != param_2; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*param_1 + 0x18))(param_1,lVar1 + 0x10);
  }
  return;
}


// ===== 00926540  FUN_00926540 =====

uint FUN_00926540(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x40))(*(long **)(param_1 + 0x20),param_3);
  if (lVar3 == 0) {
    return param_2;
  }
  if (*(byte *)(lVar3 + 0x90) - 1 < 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar2 == iVar5) {
      return param_2;
    }
  }
  else {
    plVar4 = (long *)FUN_00913d00(lVar3);
    if (plVar4 == (long *)0x0) {
      if ((*(byte *)(lVar3 + 0x8c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      iVar2 = *(int *)(lVar3 + 0x88);
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0x58))();
    }
    *(int *)(param_1 + 0xc) = iVar2;
    iVar5 = *(int *)(lVar3 + 0x40);
    if (iVar5 == 0) {
      *(int *)(param_1 + 0x10) = iVar2;
      return param_2;
    }
    *(int *)(param_1 + 0x10) = iVar5;
    if (iVar2 == iVar5) {
      return param_2;
    }
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar7 = *(uint *)(param_1 + 0x14);
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar7 = param_2;
    uVar6 = param_2;
  }
  *(uint *)(param_1 + 0x14) = param_2;
  iVar1 = 0;
  if ((long)iVar5 != 0) {
    iVar1 = (int)((long)(((ulong)param_2 - (ulong)uVar7) * (long)iVar2) / (long)iVar5);
  }
  *(uint *)(param_1 + 0x18) = uVar6 + iVar1;
  return uVar6 + iVar1;
}


// ===== 00926654  FUN_00926654 =====

ulong FUN_00926654(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != *(int *)(param_1 + 0x14)) {
      iVar2 = 0;
      if ((long)iVar1 != 0) {
        iVar2 = (int)((long)((uVar3 - *(uint *)(param_1 + 0x18)) * (long)*(int *)(param_1 + 0x14)) /
                     (long)iVar1);
      }
      uVar3 = (ulong)(uint)(*(int *)(param_1 + 0x14) + iVar2);
    }
  }
  return uVar3;
}


// ===== 00926694  FUN_00926694 =====

void FUN_00926694(void)

{
  return;
}


// ===== 0092669c  FUN_0092669c =====

void FUN_0092669c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 009266a8  FUN_009266a8 =====

void FUN_009266a8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5,undefined8 param_6)

{
  *param_1 = param_2;
  FUN_0090df68(param_1 + 1,100,param_4,(ulong)(double)(int)param_5 & (long)(param_5 << 0x1f) >> 0x3f
               ,param_5 >> 0x20 & 1);
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined8 *)((long)param_1 + 0x4c) = param_6;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


// ===== 0092671c  FUN_0092671c =====

void FUN_0092671c(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = param_2;
  if (*(char *)(param_1 + 10) == '\x01') {
    if (param_1[0xb] == 0) {
      uVar8 = *param_1;
      pvVar4 = operator_new(0x10);
      FUN_0090d5d0(pvVar4,uVar8);
      pvVar5 = (void *)param_1[0xb];
      param_1[0xb] = pvVar4;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    if ((*(byte *)(param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uVar7 = *(uint *)(param_1 + 0xc);
    plVar1 = *(long **)param_1[0xb];
    iVar3 = (int)plVar1[1];
    uVar2 = 0;
    if ((long)iVar3 != 0) {
      uVar2 = 0xffffffffffffffff / (ulong)(long)iVar3;
    }
    uVar6 = *plVar1 - ((long *)param_1[0xb])[1];
    iVar3 = iVar3 * (int)uVar6;
    if (uVar2 <= uVar6) {
      iVar3 = -1;
    }
    if (iVar3 <= *(int *)((long)param_1 + 0x4c)) {
      if ((int)uVar7 <= (int)param_2) {
        uVar7 = param_2;
      }
      *(uint *)(param_1 + 0xc) = uVar7;
      return;
    }
    uVar8 = *param_1;
    pvVar4 = operator_new(0x10);
    FUN_0090d5d0(pvVar4,uVar8);
    pvVar5 = (void *)param_1[0xb];
    param_1[0xb] = pvVar4;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    *(uint *)(param_1 + 0xc) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  }
  iVar3 = FUN_0090e4bc(param_1 + 1);
  if ((int)((long)(int)uVar7 / 0x14) < iVar3) {
    FUN_0090e1f0(param_1 + 1,(long)(int)uVar7 / 0x14 & 0xffffffff);
  }
  iVar3 = FUN_0090e3f4(param_1 + 1,*(undefined4 *)(param_1 + 9));
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(int *)((long)param_1 + 100) = iVar3 * 0x14 + 0x14;
  return;
}


// ===== 00926880  FUN_00926880 =====

void FUN_00926880(long param_1)

{
  void *pvVar1;
  
  FUN_0090e488(param_1 + 8);
  pvVar1 = *(void **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}


// ===== 009268d4  FUN_009268d4 =====

void FUN_009268d4(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *param_1 = 0x1e61;
  param_1[0x1d] = 5;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  return;
}


// ===== 00926910  FUN_00926910 =====

void FUN_00926910(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *param_1 = 0x1e61;
  param_1[0x1d] = 5;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  return;
}


// ===== 0092694c  FUN_0092694c =====

void FUN_0092694c(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  if (0xc < param_3) {
    param_3 = 0xd;
  }
  uVar1 = (int)param_3 - 1;
  *(short *)(param_1 + 0x74) = (short)uVar1;
  uVar3 = (uint)*param_2;
  if (0x5c < uVar3) {
    uVar3 = 0x5d;
  }
  *(int *)(param_1 + 4) =
       (*(int *)(&DAT_0022608c + (ulong)uVar3 * 4) >> 1) +
       (*(int *)(&DAT_0022608c + (ulong)uVar3 * 4) >> 3);
  if (uVar1 != 0) {
    if ((uVar1 & 0xffff) == 0xc) {
      *(ushort *)(param_1 + 0xc) = (ushort)param_2[1] << 8;
      *(ushort *)(param_1 + 0xe) = (ushort)param_2[2] << 8;
      *(ushort *)(param_1 + 0x10) = (ushort)param_2[3] << 8;
      *(ushort *)(param_1 + 0x12) = (ushort)param_2[4] << 8;
      *(ushort *)(param_1 + 0x14) = (ushort)param_2[5] << 8;
      *(ushort *)(param_1 + 0x16) = (ushort)param_2[6] << 8;
      *(ushort *)(param_1 + 0x18) = (ushort)param_2[7] << 8;
      *(ushort *)(param_1 + 0x1a) = (ushort)param_2[8] << 8;
      *(ushort *)(param_1 + 0x1c) = (ushort)param_2[9] << 8;
      *(ushort *)(param_1 + 0x1e) = (ushort)param_2[10] << 8;
      *(ushort *)(param_1 + 0x20) = (ushort)param_2[0xb] << 8;
      *(ushort *)(param_1 + 0x22) = (ushort)param_2[0xc] << 8;
      return;
    }
    *(ushort *)(param_1 + 0xc) = (ushort)param_2[1] * 0x100 + -0x7f00;
    if (((uVar1 & 0xffff) != 1) &&
       (*(ushort *)(param_1 + 0xe) = (ushort)param_2[2] * 0x100 + -0x7f00, 2 < (uVar1 & 0xffff))) {
      *(ushort *)(param_1 + 0x10) = (ushort)param_2[3] * 0x100 + -0x7f00;
      if (((uVar1 & 0xffff) != 3) &&
         (*(ushort *)(param_1 + 0x12) = (ushort)param_2[4] * 0x100 + -0x7f00, 4 < (uVar1 & 0xffff)))
      {
        *(ushort *)(param_1 + 0x14) = (ushort)param_2[5] * 0x100 + -0x7f00;
        if (((uVar1 & 0xffff) != 5) &&
           (*(ushort *)(param_1 + 0x16) = (ushort)param_2[6] * 0x100 + -0x7f00, 6 < (uVar1 & 0xffff)
           )) {
          *(ushort *)(param_1 + 0x18) = (ushort)param_2[7] * 0x100 + -0x7f00;
          if (((uVar1 & 0xffff) != 7) &&
             (*(ushort *)(param_1 + 0x1a) = (ushort)param_2[8] * 0x100 + -0x7f00,
             8 < (uVar1 & 0xffff))) {
            *(ushort *)(param_1 + 0x1c) = (ushort)param_2[9] * 0x100 + -0x7f00;
            if (((uVar1 & 0xffff) != 9) &&
               (*(ushort *)(param_1 + 0x1e) = (ushort)param_2[10] * 0x100 + -0x7f00,
               10 < (uVar1 & 0xffff))) {
              *(ushort *)(param_1 + 0x20) = (ushort)param_2[0xb] * 0x100 + -0x7f00;
              if (((uVar1 & 0xffff) != 0xb) &&
                 (*(ushort *)(param_1 + 0x22) = (ushort)param_2[0xc] * 0x100 + -0x7f00,
                 0xc < (uVar1 & 0xffff))) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x926b70);
                (*pcVar2)();
              }
            }
          }
        }
      }
    }
  }
  memset((void *)(param_1 + ((ulong)uVar1 & 0x7fff) * 2 + 0xc),0,((ulong)uVar1 & 0x7fff) * -2 + 0x18
        );
  return;
}


// ===== 00926b70  FUN_00926b70 =====

bool FUN_00926b70(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  uint uVar27;
  undefined8 uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar33;
  uint uVar34;
  short local_a84 [2];
  undefined1 *local_a80;
  undefined6 uStack_a78;
  undefined2 uStack_a72;
  undefined6 uStack_a70;
  short local_a68;
  undefined8 uStack_a66;
  undefined4 uStack_a5e;
  undefined4 local_a5a;
  undefined4 uStack_a56;
  undefined1 *puStack_a52;
  undefined2 auStack_568 [644];
  
  uVar24 = DAT_001f5d10;
  uStack_a70 = 0xaaaaaaaaaaaa;
  uStack_a78 = 0xaaaaaaaaaaaa;
  uStack_a72 = 0xaaaa;
  local_a80 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_3 < 0x281) {
    if ((param_4 & 1) == 0) {
      uVar22 = 0x1999;
      uVar23 = 0x1999;
      uVar19 = 0x666600006666;
      iVar10 = 0x6666;
      iVar21 = 0x6666;
      sVar9 = (short)((uint)*(undefined4 *)(param_1 + 0x76) >> 0x10);
      sVar8 = (short)*(undefined4 *)(param_1 + 0x76);
      uVar24 = DAT_001f58e8;
    }
    else {
      sVar9 = *(short *)(param_1 + 0x76);
      uVar22 = 0x3333;
      uVar23 = 0x3333;
      uVar19 = 0x4ccd00004ccd;
      iVar10 = 0x4ccd;
      iVar21 = 0x4ccd;
      *(short *)(param_1 + 0x78) = sVar9;
      sVar8 = sVar9;
    }
    iVar26 = ((int)((ulong)uVar24 >> 0x20) * (int)sVar9 >> 0xd) + ((int)uVar24 * (int)sVar8 >> 0xd);
    sVar9 = (short)iVar26;
    if (iVar26 != sVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                   "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
    }
    lVar14 = 0;
    psVar16 = (short *)(param_1 + 0x26);
    uVar25 = *(undefined8 *)(param_1 + 0x2e);
    uVar24 = *(undefined8 *)psVar16;
    uVar30 = *(undefined8 *)(param_1 + 0x14);
    uVar28 = *(undefined8 *)(param_1 + 0xc);
    uVar31 = *(undefined8 *)(param_1 + 0x1c);
    uVar32 = *(undefined8 *)(param_1 + 0x36);
    *(short *)(param_1 + 0x78) = sVar9;
    local_a84[0] = 0x1000;
    lVar17 = 1;
    iVar26 = (int)uVar19;
    iVar20 = (int)((ulong)uVar19 >> 0x20);
    local_a68 = 0x1000;
    lVar18 = 2;
    *(int *)(param_1 + 8) = (*(int *)(param_1 + 4) >> 1) + (*(int *)(param_1 + 8) >> 1);
    uVar33 = ((uint)uVar23 * (int)(short)((ulong)uVar30 >> 0x20) >> 0xf) +
             ((uint)(iVar10 * (short)((ulong)uVar25 >> 0x20)) >> 0xf);
    uVar34 = ((uint)uVar23 * (int)(short)((ulong)uVar30 >> 0x30) >> 0xf) +
             ((uint)(iVar21 * (short)((ulong)uVar25 >> 0x30)) >> 0xf);
    uVar27 = ((uint)uVar22 * (int)(short)uVar31 >> 0xf) + ((uint)(iVar26 * (short)uVar32) >> 0xf);
    uVar29 = ((uint)uVar22 * (int)(short)((ulong)uVar31 >> 0x10) >> 0xf) +
             ((uint)(iVar20 * (short)((ulong)uVar32 >> 0x10)) >> 0xf);
    puStack_a52 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_a56 = 0xaaaaaaaa;
    uStack_a5e = 0xaaaaaaaa;
    local_a5a = 0xaaaaaaaa;
    uStack_a66 = &DAT_aaaaaaaaaaaaaaaa;
    *(ulong *)(param_1 + 0x2e) =
         CONCAT26((short)uVar34,
                  CONCAT24((short)uVar33,
                           CONCAT22((short)((uint)uVar22 * (int)(short)((ulong)uVar30 >> 0x10) >>
                                           0xf) +
                                    (short)((uint)(iVar20 * (short)((ulong)uVar25 >> 0x10)) >> 0xf),
                                    (short)((uint)uVar22 * (int)(short)uVar30 >> 0xf) +
                                    (short)((uint)(iVar26 * (short)uVar25) >> 0xf))));
    *(ulong *)psVar16 =
         CONCAT26((short)((uint)uVar23 * (int)(short)((ulong)uVar28 >> 0x30) >> 0xf) +
                  (short)((uint)(iVar21 * (short)((ulong)uVar24 >> 0x30)) >> 0xf),
                  CONCAT24((short)((uint)uVar23 * (int)(short)((ulong)uVar28 >> 0x20) >> 0xf) +
                           (short)((uint)(iVar10 * (short)((ulong)uVar24 >> 0x20)) >> 0xf),
                           CONCAT22((short)((uint)uVar22 * (int)(short)((ulong)uVar28 >> 0x10) >>
                                           0xf) +
                                    (short)((uint)(iVar20 * (short)((ulong)uVar24 >> 0x10)) >> 0xf),
                                    (short)((uint)uVar22 * (int)(short)uVar28 >> 0xf) +
                                    (short)((uint)(iVar26 * (short)uVar24) >> 0xf))));
    sVar9 = *psVar16;
    *(ulong *)(param_1 + 0x36) =
         CONCAT26((short)((uint)uVar23 * (int)(short)((ulong)uVar31 >> 0x30) >> 0xf) +
                  (short)((uint)(iVar21 * (short)((ulong)uVar32 >> 0x30)) >> 0xf),
                  CONCAT24((short)((uint)uVar23 * (int)(short)((ulong)uVar31 >> 0x20) >> 0xf) +
                           (short)((uint)(iVar10 * (short)((ulong)uVar32 >> 0x20)) >> 0xf),
                           CONCAT22((short)uVar29,(short)uVar27)));
    local_a84[1] = (short)((int)sVar9 + 4U >> 3);
    do {
      psVar16 = psVar16 + 1;
      sVar8 = *psVar16;
      lVar17 = lVar17 + 1;
      (&local_a68)[lVar17] = (short)((int)sVar8 + 4U >> 3);
      lVar11 = 2;
      lVar12 = lVar18;
      do {
        psVar1 = (short *)((long)local_a84 + lVar12);
        lVar12 = lVar12 + -2;
        *(short *)((long)&local_a68 + lVar11) =
             *(short *)((long)local_a84 + lVar11) +
             (short)((uint)(sVar8 * 2 * (int)*psVar1 + 0x8000) >> 0x10);
        lVar11 = lVar11 + 2;
      } while (lVar12 != 0);
      memcpy(local_a84,&local_a68,lVar14 * 2 + 6);
      lVar14 = lVar14 + 1;
      lVar18 = lVar18 + 2;
    } while (lVar14 != 0xb);
    memset(auStack_568,0xaa,0x500);
    sVar8 = *(short *)(param_1 + 0x28);
    sVar2 = *(short *)(param_1 + 0x2a);
    sVar3 = *(short *)(param_1 + 0x2c);
    sVar4 = *(short *)(param_1 + 0x2e);
    sVar5 = *(short *)(param_1 + 0x30);
    sVar6 = *(short *)(param_1 + 0x3a);
    sVar7 = *(short *)(param_1 + 0x3c);
    iVar10 = FUN_00927a8c(*(undefined4 *)(param_1 + 8));
    sVar9 = FUN_00927a8c(((int)((int)sVar7 * (int)sVar7 * 2 & 0xffff0000U ^ 0x7fff0000) >> 0x10) *
                         (((int)((int)sVar6 * (int)sVar6 * 2 & 0xffff0000U ^ 0x7fff0000) >> 0x10) *
                          (((int)((-(uVar29 >> 0xf & 1) & 0xfffe0000 | (uVar29 & 0xffff) << 1) *
                                  (int)(short)uVar29 & 0xffff0000 ^ 0x7fff0000) >> 0x10) *
                           (((int)((-(uVar27 >> 0xf & 1) & 0xfffe0000 | (uVar27 & 0xffff) << 1) *
                                   (int)(short)uVar27 & 0xffff0000 ^ 0x7fff0000) >> 0x10) *
                            (((int)((-(uVar34 >> 0xf & 1) & 0xfffe0000 | (uVar34 & 0xffff) << 1) *
                                    (int)(short)uVar34 & 0xffff0000 ^ 0x7fff0000) >> 0x10) *
                             (((int)((-(uVar33 >> 0xf & 1) & 0xfffe0000 | (uVar33 & 0xffff) << 1) *
                                     (int)(short)uVar33 & 0xffff0000 ^ 0x7fff0000) >> 0x10) *
                              (((int)((int)sVar5 * (int)sVar5 * 2 & 0xffff0000U ^ 0x7fff0000) >>
                               0x10) * (((int)((int)sVar4 * (int)sVar4 * 2 & 0xffff0000U ^
                                              0x7fff0000) >> 0x10) *
                                        (((int)((int)sVar3 * (int)sVar3 * 2 & 0xffff0000U ^
                                               0x7fff0000) >> 0x10) *
                                         (((int)((int)sVar2 * (int)sVar2 * 2 & 0xffff0000U ^
                                                0x7fff0000) >> 0x10) *
                                          ((int)(((int)((int)sVar8 * (int)sVar8 * 2 & 0xffff0000U ^
                                                       0x7fff0000) >> 0x10) *
                                                ((int)sVar9 * (int)sVar9 * 2 >> 0x12 ^ 0x1fffU)) >>
                                          0xf) >> 0xf) >> 0xf) >> 0xf) >> 0xf) >> 0xf) >> 0xf) >>
                           0xf) >> 0xf) >> 0xf) >> 0xf);
    uVar27 = (uint)(iVar10 * (short)(sVar9 * 0x40 + (short)((uint)(int)(short)(sVar9 * 0x40) >> 1)))
             >> 0xc;
    *(short *)(param_1 + 0x78) = (short)uVar27;
    if (param_3 != 0) {
      puVar13 = auStack_568;
      uVar15 = param_3;
      do {
        sVar9 = FUN_00927b6c(param_1);
        uVar15 = uVar15 - 1;
        *puVar13 = (short)((uint)(int)sVar9 >> 1);
        puVar13 = puVar13 + 1;
      } while (uVar15 != 0);
      uVar27 = (uint)*(ushort *)(param_1 + 0x78);
    }
    memset(&local_a68,0xaa,0x500);
    FUN_00655154(auStack_568,auStack_568,uVar27,param_3,0xd);
    FUN_00927ba0(local_a84,0xd,auStack_568,param_3,param_1 + 0x40,0xc,param_1 + 0x5a,param_2,
                 &local_a68);
  }
  return param_3 < 0x281;
}


// ===== 00926fe0  FUN_00926fe0 =====

void FUN_00926fe0(long *param_1,undefined4 param_2,undefined2 param_3,uint param_4)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 0xc) = param_3;
  *param_1 = (long)(int)param_4;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0x1e6100000000;
  *(undefined8 *)((long)param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x26) = 0;
  *(undefined8 *)((long)param_1 + 0x1e) = 0;
  if ((int)param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/cng/webrtc_cng.cc",0xdc,"quality > 0",
                 &DAT_001fbedc,param_4,0);
  }
  if (param_4 < 0xd) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_coding/codecs/cng/webrtc_cng.cc",0xdd,"quality <= 12",
               &DAT_001fbedc,param_4,0xc);
}


// ===== 00927080  FUN_00927080 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00927080(ulong *param_1,long param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  bool bVar1;
  char *pcVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  short sVar9;
  int iVar10;
  ulong uVar11;
  void *__dest;
  ulong uVar12;
  undefined1 **ppuVar13;
  char cVar14;
  long lVar15;
  undefined2 *puVar16;
  ulong uVar17;
  short *psVar18;
  short *psVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  void *__src;
  undefined2 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  int iVar30;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined1 auVar31 [16];
  int iVar38;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar39 [16];
  uint uVar43;
  uint6 uVar44;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 auVar45 [16];
  uint uVar49;
  uint6 uVar50;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar51 [16];
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined8 local_af8 [160];
  undefined4 local_5f8;
  uint local_5f4;
  undefined2 local_5f0 [640];
  undefined8 local_f0;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined1 *local_d0 [6];
  undefined4 local_a0;
  undefined1 *puStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined1 *puStack_7e;
  
  puStack_7e = &DAT_aaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaa;
  uStack_88 = 0xaaaa;
  local_86 = 0xaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_de = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaa;
  local_e8 = 0xaaaa;
  local_e6 = 0xaaaa;
  uStack_e4 = 0xaaaa;
  uStack_e2 = 0xaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  if (0x280 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/cng/webrtc_cng.cc",0x106,
                 "num_samples <= kCngMaxOutsizeOrder",&DAT_001fb920,param_3,0x280);
  }
  local_d0[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_d0[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = 0xaaaaaaaa;
  memset(local_5f0,0xaa,0x500);
  local_5f4 = 0xaaaaaaaa;
  local_5f8 = 0xaaaaaaaa;
  memset(local_af8,0xaa,0x500);
  if (param_3 != 0) {
    uVar12 = 0;
    if ((3 < param_3) && (0x1f < (ulong)((long)local_af8 - param_2))) {
      if (param_3 < 0x10) {
        uVar11 = 0;
      }
      else {
        uVar12 = param_3 & 0x3f0;
        puVar20 = local_af8 + 2;
        puVar23 = (undefined8 *)(param_2 + 0x10);
        uVar11 = param_3 & 0x3f0;
        do {
          puVar3 = puVar23 + -1;
          uVar26 = puVar23[-2];
          uVar4 = *puVar23;
          uVar5 = puVar23[1];
          uVar11 = uVar11 - 0x10;
          puVar23 = puVar23 + 4;
          puVar20[-1] = *puVar3;
          puVar20[-2] = uVar26;
          puVar20[1] = uVar5;
          *puVar20 = uVar4;
          puVar20 = puVar20 + 4;
        } while (uVar11 != 0);
        if (param_3 == uVar12) goto LAB_009271d4;
        uVar11 = uVar12;
        if ((param_3 & 0xc) == 0) goto LAB_009271b0;
      }
      uVar12 = param_3 & 0x3fc;
      lVar15 = uVar11 - uVar12;
      puVar20 = (undefined8 *)((long)local_af8 + uVar11 * 2);
      puVar23 = (undefined8 *)(param_2 + uVar11 * 2);
      do {
        lVar15 = lVar15 + 4;
        *puVar20 = *puVar23;
        puVar20 = puVar20 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar15 != 0);
      if (param_3 == uVar12) goto LAB_009271d4;
    }
LAB_009271b0:
    lVar15 = param_3 - uVar12;
    puVar16 = (undefined2 *)(param_2 + uVar12 * 2);
    puVar21 = (undefined2 *)((long)local_af8 + uVar12 * 2);
    do {
      lVar15 = lVar15 + -1;
      *puVar21 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    } while (lVar15 != 0);
  }
LAB_009271d4:
  uVar11 = FUN_006584b8(local_af8,param_3,&local_5f4);
  uVar12 = param_3;
  if (0 < (int)local_5f4) {
    do {
      uVar28 = local_5f4;
      if (local_5f4 >= 6) {
        uVar28 = 6;
      }
      uVar32 = 0;
      if (4 < local_5f4) {
        uVar32 = local_5f4 - 5;
      }
      uVar12 = uVar12 >> (local_5f4 < 6);
      uVar11 = (ulong)(uint)((int)uVar11 << (ulong)(uVar32 & 0x1f));
      bVar1 = 1 < local_5f4;
      local_5f4 = uVar28 - 1;
    } while (bVar1);
  }
  iVar10 = FUN_0065880c(uVar11,uVar12);
  puVar7 = uStack_de;
  puVar6 = local_f0;
  if (iVar10 < 2) {
    uVar12 = *param_1;
    if ((((uVar12 != 0) &&
         (local_f0 = (undefined1 *)((ulong)local_f0 & 0xffffffffffff0000), uVar12 != 1)) &&
        (local_f0 = (undefined1 *)((ulong)puVar6 & 0xffffffff00000000), uVar12 != 2)) &&
       (local_f0 = (undefined1 *)((ulong)puVar6 & 0xffff000000000000), uVar12 != 3)) {
      local_f0 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      if ((((uVar12 != 4) && (local_e8 = 0, uVar12 != 5)) &&
          ((local_e6 = 0, uVar12 != 6 &&
           ((uStack_e4 = 0, uVar12 != 7 && (uStack_e2 = 0, uVar12 != 8)))))) &&
         ((uStack_e0 = 0, uVar12 != 9 &&
          (((uStack_de = (undefined1 *)((ulong)uStack_de & 0xffffffffffff0000), uVar12 != 10 &&
            (uStack_de = (undefined1 *)((ulong)puVar7 & 0xffffffff00000000), uVar12 != 0xb)) &&
           (uStack_de = (undefined1 *)((ulong)puVar7 & 0xffff000000000000), uVar12 != 0xc)))))) {
        uStack_de = (undefined1 *)0x0;
        uStack_de = (undefined1 *)0x0;
        if (uVar12 != 0xd) goto LAB_00927a60;
      }
    }
  }
  else {
    uVar12 = param_3 >> 1;
    FUN_00928448(local_5f0,uVar12);
    if (uVar12 != 0) {
      uVar11 = 0;
      uVar17 = param_3 - 1;
      do {
        if ((uVar11 == 0x280) || (0x27f < uVar17)) goto LAB_00927a60;
        puVar16 = local_5f0 + uVar11;
        uVar11 = uVar11 + 1;
        local_5f0[uVar17] = *puVar16;
        uVar17 = uVar17 - 1;
      } while (uVar12 != uVar11);
    }
    FUN_00919418(local_af8,local_5f0,local_af8,param_3,0xe);
    FUN_009284bc(local_af8,param_3,*param_1,local_d0,&local_5f8);
    if ((int)local_d0[0] == 0) {
      local_d0[0] = (undefined1 *)CONCAT44(local_d0[0]._4_4_,0x7fff);
    }
    uVar12 = *param_1;
    if (uVar12 != 0) {
      ppuVar13 = local_d0;
      uVar11 = 0;
      if (uVar12 < 8) {
        psVar18 = &DAT_00226204;
      }
      else {
        psVar18 = &DAT_00226204;
        if ((ppuVar13 <= (undefined1 **)((long)ppuVar13 + (uVar12 - 1) * 4)) &&
           (uVar12 - 1 >> 0x3e == 0)) {
          uVar11 = uVar12 & 0x7ffffffffffffff8;
          psVar18 = &DAT_00226204 + uVar11;
          uVar17 = uVar12 & 0x7ffffffffffffff8;
          ppuVar13 = (undefined1 **)(*(undefined1 (*) [16])local_d0 + uVar11 * 4);
          psVar19 = &DAT_00226204;
          pauVar24 = (undefined1 (*) [16])local_d0;
          do {
            auVar27 = *pauVar24;
            auVar29 = pauVar24[1];
            uVar17 = uVar17 - 8;
            uVar28 = MP_INT_ABS(auVar27._0_4_);
            uVar32 = MP_INT_ABS(auVar27._4_4_);
            uVar34 = MP_INT_ABS(auVar27._8_4_);
            uVar36 = MP_INT_ABS(auVar27._12_4_);
            uVar43 = MP_INT_ABS(auVar29._0_4_);
            uVar46 = MP_INT_ABS(auVar29._4_4_);
            uVar47 = MP_INT_ABS(auVar29._8_4_);
            uVar48 = MP_INT_ABS(auVar29._12_4_);
            auVar27 = NEON_cmlt(auVar27,0,4);
            auVar29 = NEON_cmlt(auVar29,0,4);
            uVar55 = (uVar28 & 0xffff) * (int)*psVar19;
            uVar56 = (uVar32 & 0xffff) * (int)psVar19[1];
            uVar57 = (uVar34 & 0xffff) * (int)psVar19[2];
            uVar58 = (uVar36 & 0xffff) * (int)psVar19[3];
            uVar49 = (uVar43 & 0xffff) * (int)psVar19[4];
            uVar52 = (uVar46 & 0xffff) * (int)psVar19[5];
            uVar53 = (uVar47 & 0xffff) * (int)psVar19[6];
            uVar54 = (uVar48 & 0xffff) * (int)psVar19[7];
            iVar30 = (uVar28 >> 0x10) * (int)*psVar19 + (uVar55 >> 0x10);
            iVar33 = (uVar32 >> 0x10) * (int)psVar19[1] + (uVar56 >> 0x10);
            iVar35 = (uVar34 >> 0x10) * (int)psVar19[2] + (uVar57 >> 0x10);
            iVar37 = (uVar36 >> 0x10) * (int)psVar19[3] + (uVar58 >> 0x10);
            uVar44 = CONCAT15((char)(uVar56 >> 8),(uint5)(ushort)(((byte)(uVar55 >> 8) & 0x80) << 8)
                             ) & 0x8000ffffffff;
            auVar45[9] = (byte)(uVar57 >> 8) & 0x80;
            auVar45[0xd] = (byte)(uVar58 >> 8) & 0x80;
            iVar38 = (uVar43 >> 0x10) * (int)psVar19[4] + (uVar49 >> 0x10);
            iVar40 = (uVar46 >> 0x10) * (int)psVar19[5] + (uVar52 >> 0x10);
            iVar41 = (uVar47 >> 0x10) * (int)psVar19[6] + (uVar53 >> 0x10);
            iVar42 = (uVar48 >> 0x10) * (int)psVar19[7] + (uVar54 >> 0x10);
            uVar50 = CONCAT15((char)(uVar52 >> 8),(uint5)(ushort)(((byte)(uVar49 >> 8) & 0x80) << 8)
                             ) & 0x8000ffffffff;
            auVar51[9] = (byte)(uVar53 >> 8) & 0x80;
            auVar51[0xd] = (byte)(uVar54 >> 8) & 0x80;
            auVar31._4_4_ = iVar33 * 2;
            auVar31._0_4_ = iVar30 * 2;
            auVar31._8_4_ = iVar35 * 2;
            auVar31._12_4_ = iVar37 * 2;
            auVar39._4_4_ = iVar40 * 2;
            auVar39._0_4_ = iVar38 * 2;
            auVar39._8_4_ = iVar41 * 2;
            auVar39._12_4_ = iVar42 * 2;
            auVar45._0_5_ =
                 (uint5)CONCAT12((char)((uint)iVar30 >> 8),
                                 CONCAT11((char)iVar30,(char)(uVar44 >> 8))) << 8;
            auVar45[5] = (undefined1)(uVar44 >> 0x28);
            auVar45[6] = (char)iVar33;
            auVar45[7] = (char)((uint)iVar33 >> 8);
            auVar45[8] = 0;
            auVar45[10] = (char)iVar35;
            auVar45[0xb] = (char)((uint)iVar35 >> 8);
            auVar45[0xc] = 0;
            auVar45[0xe] = (char)iVar37;
            auVar45[0xf] = (char)((uint)iVar37 >> 8);
            auVar51._0_5_ =
                 (uint5)CONCAT12((char)((uint)iVar38 >> 8),
                                 CONCAT11((char)iVar38,(char)(uVar50 >> 8))) << 8;
            auVar51[5] = (undefined1)(uVar50 >> 0x28);
            auVar51[6] = (char)iVar40;
            auVar51[7] = (char)((uint)iVar40 >> 8);
            auVar51[8] = 0;
            auVar51[10] = (char)iVar41;
            auVar51[0xb] = (char)((uint)iVar41 >> 8);
            auVar51[0xc] = 0;
            auVar51[0xe] = (char)iVar42;
            auVar51[0xf] = (char)((uint)iVar42 >> 8);
            auVar31 = NEON_sri(auVar31,auVar45,0xf,4);
            auVar39 = NEON_sri(auVar39,auVar51,0xf,4);
            auVar45 = NEON_neg(auVar31,4);
            auVar51 = NEON_neg(auVar39,4);
            auVar27 = NEON_bsl(auVar27,auVar45,auVar31,1);
            auVar29 = NEON_bsl(auVar29,auVar51,auVar39,1);
            *(long *)(*pauVar24 + 8) = auVar27._8_8_;
            *(long *)*pauVar24 = auVar27._0_8_;
            *(long *)(pauVar24[1] + 8) = auVar29._8_8_;
            *(long *)pauVar24[1] = auVar29._0_8_;
            psVar19 = psVar19 + 8;
            pauVar24 = pauVar24 + 2;
          } while (uVar17 != 0);
          if (uVar12 == uVar11) goto LAB_0092732c;
        }
      }
      lVar15 = uVar12 - uVar11;
      do {
        uVar32 = *(uint *)ppuVar13;
        uVar28 = -uVar32;
        if (-1 < (int)uVar32) {
          uVar28 = uVar32;
        }
        uVar34 = (uVar28 & 0xffff) * (int)*psVar18;
        iVar30 = (uVar28 >> 0x10) * (int)*psVar18 + (uVar34 >> 0x10);
        uVar28 = iVar30 * 2 & 0xfffe0000U | (uVar34 & 0x8000 | iVar30 * 0x10000) >> 0xf;
        uVar34 = -uVar28;
        if (-1 < (int)uVar32) {
          uVar34 = uVar28;
        }
        lVar15 = lVar15 + -1;
        *(uint *)ppuVar13 = uVar34;
        ppuVar13 = (undefined1 **)((long)ppuVar13 + 4);
        psVar18 = psVar18 + 1;
      } while (lVar15 != 0);
    }
LAB_0092732c:
    sVar9 = FUN_0091aa88(local_d0,&puStack_90,&local_f0);
    if (sVar9 == 0) {
      return 0;
    }
  }
  uVar12 = *param_1;
  if ((param_4 & 1) == 0) {
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        if (uVar11 == 0xd) goto LAB_00927a60;
        lVar15 = uVar11 * 2;
        uVar11 = uVar11 + 1;
        uVar12 = *param_1;
        *(short *)((long)param_1 + lVar15 + 0x14) =
             (short)((uint)(*(short *)((long)&local_f0 + lVar15) * 0x6666) >> 0x10) +
             (short)((uint)(*(short *)((long)param_1 + lVar15 + 0x14) * 0x4ccd) >> 0xf);
      } while (uVar11 < uVar12);
    }
    iVar10 = ((int)param_1[2] >> 1) + (iVar10 >> 2) + ((int)param_1[2] >> 2);
  }
  else if (uVar12 != 0) {
    *(undefined2 *)((long)param_1 + 0x14) = (undefined2)local_f0;
    if (uVar12 != 1) {
      *(undefined2 *)((long)param_1 + 0x16) = local_f0._2_2_;
      if (2 < uVar12) {
        *(undefined2 *)(param_1 + 3) = local_f0._4_2_;
        if (uVar12 != 3) {
          *(undefined2 *)((long)param_1 + 0x1a) = local_f0._6_2_;
          if ((4 < uVar12) && (*(undefined2 *)((long)param_1 + 0x1c) = local_e8, uVar12 != 5)) {
            *(undefined2 *)((long)param_1 + 0x1e) = local_e6;
            if ((6 < uVar12) && (*(undefined2 *)(param_1 + 4) = uStack_e4, uVar12 != 7)) {
              *(undefined2 *)((long)param_1 + 0x22) = uStack_e2;
              if ((8 < uVar12) && (*(undefined2 *)((long)param_1 + 0x24) = uStack_e0, uVar12 != 9))
              {
                *(undefined2 *)((long)param_1 + 0x26) = (undefined2)uStack_de;
                if (10 < uVar12) {
                  *(undefined2 *)(param_1 + 5) = uStack_de._2_2_;
                  if (uVar12 != 0xb) {
                    *(undefined2 *)((long)param_1 + 0x2a) = uStack_de._4_2_;
                    if (0xc < uVar12) {
                      *(undefined2 *)((long)param_1 + 0x2c) = uStack_de._6_2_;
                      if (uVar12 != 0xd) goto LAB_00927a60;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(int *)(param_1 + 2) = iVar10;
  if (iVar10 < 1) {
    iVar10 = 1;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  if (((param_4 & 1) == 0) && (*(short *)((long)param_1 + 0xe) < *(short *)((long)param_1 + 0xc))) {
    lVar15 = 0;
    sVar9 = 0;
    if ((long)(int)param_1[1] != 0) {
      sVar9 = (short)((param_3 * 1000) / (ulong)(long)(int)param_1[1]);
    }
    sVar9 = *(short *)((long)param_1 + 0xe) + sVar9;
    goto LAB_00927a34;
  }
  lVar15 = 0;
  piVar22 = (int *)&DAT_00226090;
  do {
    auVar27._0_4_ = iVar10 - *piVar22;
    auVar27._4_4_ = iVar10 - piVar22[1];
    auVar27._8_4_ = iVar10 - piVar22[2];
    auVar27._12_4_ = iVar10 - piVar22[3];
    auVar27 = NEON_cmgt(auVar27,0,4);
    uVar28 = NEON_umaxv(auVar27,4);
    if ((uVar28 & 1) != 0) {
      uVar25 = NEON_umaxv(CONCAT26(auVar27._12_2_,
                                   CONCAT24(auVar27._8_2_,CONCAT22(auVar27._4_2_,auVar27._0_2_))) &
                          DAT_001f56b0,2);
      cVar14 = '\x05' - ((char)uVar25 + (char)lVar15);
      goto LAB_009275c4;
    }
    lVar15 = lVar15 + -4;
    piVar22 = piVar22 + 4;
  } while (lVar15 != -0x5c);
  cVar14 = '^';
LAB_009275c4:
  lVar15 = uVar12 + 1;
  __n = *param_5;
  uVar11 = param_5[1];
  uVar12 = __n + lVar15;
  if (uVar11 < uVar12) {
    uVar11 = uVar11 + (uVar11 >> 1);
    uVar17 = uVar12;
    if (uVar12 <= uVar11) {
      uVar17 = uVar11;
    }
    __dest = operator_new__(uVar17);
    __src = (void *)param_5[2];
    if (__src == (void *)0x0) {
      param_5[2] = (ulong)__dest;
    }
    else {
      memcpy(__dest,__src,__n);
      param_5[2] = (ulong)__dest;
      operator_delete__(__src);
    }
    param_5[1] = uVar17;
  }
  *param_5 = uVar12;
  pcVar2 = (char *)0x0;
  if (lVar15 != 0) {
    pcVar2 = (char *)(param_5[2] + __n);
  }
  *pcVar2 = cVar14;
  if (*param_1 != 0) {
    if (*param_1 == 0xc) {
      pcVar2[1] = (char)(*(ushort *)((long)param_1 + 0x14) + 0x80 >> 8);
      if (((1 < *param_1) &&
          (pcVar2[2] = (char)(*(ushort *)((long)param_1 + 0x16) + 0x80 >> 8), 2 < *param_1)) &&
         ((((pcVar2[3] = (char)((ushort)param_1[3] + 0x80 >> 8), 3 < *param_1 &&
            ((pcVar2[4] = (char)(*(ushort *)((long)param_1 + 0x1a) + 0x80 >> 8), 4 < *param_1 &&
             (pcVar2[5] = (char)(*(ushort *)((long)param_1 + 0x1c) + 0x80 >> 8), 5 < *param_1)))) &&
           (pcVar2[6] = (char)(*(ushort *)((long)param_1 + 0x1e) + 0x80 >> 8), 6 < *param_1)) &&
          ((((pcVar2[7] = (char)((ushort)param_1[4] + 0x80 >> 8), 7 < *param_1 &&
             (pcVar2[8] = (char)(*(ushort *)((long)param_1 + 0x22) + 0x80 >> 8), 8 < *param_1)) &&
            (pcVar2[9] = (char)(*(ushort *)((long)param_1 + 0x24) + 0x80 >> 8), 9 < *param_1)) &&
           (((pcVar2[10] = (char)(*(ushort *)((long)param_1 + 0x26) + 0x80 >> 8), 10 < *param_1 &&
             (pcVar2[0xb] = (char)((ushort)param_1[5] + 0x80 >> 8), 0xb < *param_1)) &&
            (pcVar2[0xc] = (char)(*(ushort *)((long)param_1 + 0x2a) + 0x80 >> 8), 0xc < *param_1))))
          )))) {
        cVar14 = (char)(*(ushort *)((long)param_1 + 0x2c) + 0x80 >> 8);
LAB_00927a10:
        pcVar2[0xd] = cVar14;
        if (0xd < *param_1) {
LAB_00927a60:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x927a64);
          (*pcVar8)();
        }
      }
    }
    else {
      pcVar2[1] = (char)(*(ushort *)((long)param_1 + 0x14) + 0x80 >> 8) + '\x7f';
      if ((((((1 < *param_1) &&
             (pcVar2[2] = (char)(*(ushort *)((long)param_1 + 0x16) + 0x80 >> 8) + '\x7f',
             2 < *param_1)) &&
            (pcVar2[3] = (char)((ushort)param_1[3] + 0x80 >> 8) + '\x7f', 3 < *param_1)) &&
           ((pcVar2[4] = (char)(*(ushort *)((long)param_1 + 0x1a) + 0x80 >> 8) + '\x7f',
            4 < *param_1 &&
            (pcVar2[5] = (char)(*(ushort *)((long)param_1 + 0x1c) + 0x80 >> 8) + '\x7f',
            5 < *param_1)))) &&
          (pcVar2[6] = (char)(*(ushort *)((long)param_1 + 0x1e) + 0x80 >> 8) + '\x7f', 6 < *param_1)
          ) && (((pcVar2[7] = (char)((ushort)param_1[4] + 0x80 >> 8) + '\x7f', 7 < *param_1 &&
                 (pcVar2[8] = (char)(*(ushort *)((long)param_1 + 0x22) + 0x80 >> 8) + '\x7f',
                 8 < *param_1)) &&
                ((pcVar2[9] = (char)(*(ushort *)((long)param_1 + 0x24) + 0x80 >> 8) + '\x7f',
                 9 < *param_1 &&
                 (((pcVar2[10] = (char)(*(ushort *)((long)param_1 + 0x26) + 0x80 >> 8) + '\x7f',
                   10 < *param_1 &&
                   (pcVar2[0xb] = (char)((ushort)param_1[5] + 0x80 >> 8) + '\x7f', 0xb < *param_1))
                  && (pcVar2[0xc] = (char)(*(ushort *)((long)param_1 + 0x2a) + 0x80 >> 8) + '\x7f',
                     0xc < *param_1)))))))) {
        cVar14 = (char)(*(ushort *)((long)param_1 + 0x2c) + 0x80 >> 8) + '\x7f';
        goto LAB_00927a10;
      }
    }
  }
  *param_5 = uVar12;
  sVar9 = 0;
  if ((long)(int)param_1[1] != 0) {
    sVar9 = (short)((param_3 * 1000) / (ulong)(long)(int)param_1[1]);
  }
LAB_00927a34:
  *(short *)((long)param_1 + 0xe) = sVar9;
  return lVar15;
}


// ===== 00927a8c  FUN_00927a8c =====

ulong FUN_00927a8c(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (int)param_1;
  if (iVar6 < 0) {
    uVar7 = 0x7fffffff;
    if (iVar6 != -0x80000000) {
      uVar7 = -iVar6;
    }
    param_1 = (ulong)uVar7;
  }
  else if (iVar6 == 0) {
    return param_1;
  }
  uVar4 = (int)LZCOUNT((int)param_1) - 1;
  iVar6 = (int)param_1 << (ulong)(uVar4 & 0x1f);
  uVar7 = iVar6 + 0x8000U & 0xffff0000;
  uVar5 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar5 = uVar7;
  }
  iVar1 = (int)uVar5 >> 1;
  if (0x7fff7fff < iVar6) {
    iVar1 = 0x3fff8000;
  }
  iVar6 = iVar1 + -0x40000000 >> 0x10;
  iVar3 = iVar6 * iVar6 * -2;
  iVar2 = iVar3 >> 0x10;
  iVar2 = iVar2 * iVar2 * 2 >> 0x10;
  uVar5 = uVar4 >> 1;
  uVar7 = iVar1 + (iVar3 >> 1) + ((iVar6 * iVar6 * 2 >> 0x10) * iVar6 * 2 >> 1) + iVar2 * -0xa000 +
          (iVar2 * iVar6 * 2 >> 0x10) * 0xe000 + 0x40008000;
  if ((uVar4 & 0xffff) == (uVar5 & 0x7fff) * 2) {
    return (ulong)((((int)uVar7 >> 0x10) * 0xb504 + 0x8000U >> 0xf & 0xfffe) >>
                  (ulong)(uVar5 & 0x1f));
  }
  return (ulong)((uVar7 >> 0x10) >> (ulong)(uVar5 & 0x1f));
}


// ===== 00927b6c  FUN_00927b6c =====

undefined2 FUN_00927b6c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x10dcd + 1;
  *param_1 = uVar1 & 0x7fffffff;
  return *(undefined2 *)(&DAT_0022621c + (ulong)(uVar1 >> 0x17 & 0xff) * 2);
}


// ===== 00927ba0  FUN_00927ba0 =====

ulong FUN_00927ba0(long param_1,ulong param_2,short *param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,undefined2 *param_8,short *param_9)

{
  undefined1 (*pauVar1) [16];
  short *psVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  short *psVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  int iVar43;
  undefined8 uVar42;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar48;
  undefined8 uVar47;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar53;
  undefined8 uVar52;
  int iVar54;
  int iVar55;
  int iVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  undefined8 uVar81;
  
  if (param_4 != 0) {
    lVar5 = param_6 * 2;
    uVar8 = param_2 - 1;
    lVar23 = -0x100000000;
    psVar9 = (short *)(param_5 + lVar5 + -2);
    psVar2 = (short *)(param_7 + lVar5 + -2);
    psVar24 = param_9;
    puVar13 = param_8;
    uVar21 = 0;
    do {
      uVar20 = param_2;
      if (uVar21 < param_2) {
        uVar20 = uVar21 + 1;
      }
      uVar25 = (ulong)(uint)((int)*param_3 << 0xc);
      if (uVar20 < 2) {
        iVar35 = 0;
        psVar6 = (short *)(param_1 + 2);
      }
      else {
        iVar10 = (int)uVar21;
        if (((uVar20 < 5) || (iVar10 + -1 < (iVar10 + -1) - (int)(uVar20 - 2))) ||
           (uVar20 - 2 >> 0x20 != 0)) {
          iVar35 = 0;
          psVar6 = (short *)(param_1 + 2);
          uVar16 = 1;
LAB_00927c94:
          lVar17 = uVar20 - uVar16;
          do {
            iVar10 = iVar10 + -1;
            lVar17 = lVar17 + -1;
            iVar35 = iVar35 - (int)param_9[iVar10] * (int)*psVar6;
            uVar25 = uVar25 - (uint)((int)(short)param_8[iVar10] * (int)*psVar6);
            psVar6 = psVar6 + 1;
          } while (lVar17 != 0);
        }
        else {
          uVar28 = uVar20 - 1;
          if (uVar20 < 0x11) {
            uVar22 = 0;
            iVar35 = 0;
LAB_0092802c:
            iVar37 = 0;
            iVar41 = 0;
            lVar39 = 0;
            uVar19 = uVar28 & 0xfffffffffffffffc;
            lVar40 = 0;
            lVar57 = 0;
            lVar38 = lVar23 - (uVar22 << 0x20);
            psVar6 = (short *)(param_1 + 2 + uVar19 * 2);
            uVar16 = uVar19 | 1;
            iVar36 = 0;
            iVar10 = iVar10 - (int)uVar19;
            lVar17 = uVar22 - uVar19;
            puVar12 = (undefined8 *)(param_1 + 2 + uVar22 * 2);
            do {
              lVar58 = lVar38 >> 0x1f;
              uVar52 = *puVar12;
              lVar17 = lVar17 + 4;
              lVar38 = lVar38 + -0x400000000;
              uVar42 = NEON_rev64(*(undefined8 *)((long)param_8 + lVar58 + -6),2);
              uVar47 = NEON_rev64(*(undefined8 *)((long)param_9 + lVar58 + -6),2);
              sVar29 = (short)((ulong)uVar52 >> 0x10);
              sVar30 = (short)((ulong)uVar52 >> 0x20);
              sVar31 = (short)((ulong)uVar52 >> 0x30);
              iVar35 = iVar35 - (int)(short)uVar47 * (int)(short)uVar52;
              iVar36 = iVar36 - (int)(short)((ulong)uVar47 >> 0x10) * (int)sVar29;
              iVar37 = iVar37 - (int)(short)((ulong)uVar47 >> 0x20) * (int)sVar30;
              iVar41 = iVar41 - (int)(short)((ulong)uVar47 >> 0x30) * (int)sVar31;
              lVar40 = lVar40 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x20) * (int)sVar30);
              lVar57 = lVar57 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x30) * (int)sVar31);
              uVar25 = uVar25 - (uint)((int)(short)uVar42 * (int)(short)uVar52);
              lVar39 = lVar39 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x10) * (int)sVar29);
              puVar12 = puVar12 + 1;
            } while (lVar17 != 0);
            iVar35 = iVar35 + iVar36 + iVar37 + iVar41;
            uVar25 = uVar25 + lVar40 + lVar39 + lVar57;
            if (uVar28 != uVar19) goto LAB_00927c94;
          }
          else {
            lVar38 = 0;
            lVar39 = 0;
            lVar40 = 0;
            iVar35 = 0;
            iVar36 = 0;
            iVar37 = 0;
            iVar41 = 0;
            iVar43 = 0;
            iVar44 = 0;
            iVar45 = 0;
            iVar46 = 0;
            uVar22 = uVar28 & 0xfffffffffffffff0;
            iVar48 = 0;
            iVar49 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            iVar56 = 0;
            uVar16 = uVar28 & 0xfffffffffffffff0;
            lVar57 = 0;
            lVar58 = 0;
            lVar59 = 0;
            lVar60 = 0;
            puVar12 = (undefined8 *)(param_1 + 0x12);
            lVar61 = 0;
            lVar62 = 0;
            lVar65 = 0;
            lVar66 = 0;
            lVar63 = 0;
            lVar64 = 0;
            lVar67 = 0;
            lVar68 = 0;
            lVar17 = lVar23;
            do {
              lVar18 = lVar17 >> 0x1f;
              uVar47 = puVar12[-1];
              uVar42 = puVar12[-2];
              uVar81 = puVar12[1];
              uVar52 = *puVar12;
              uVar16 = uVar16 - 0x10;
              lVar17 = lVar17 + -0x1000000000;
              puVar12 = puVar12 + 4;
              auVar70 = NEON_rev64(*(undefined1 (*) [16])((long)param_8 + lVar18 + -0xe),2);
              auVar69 = NEON_rev64(*(undefined1 (*) [16])((long)param_8 + lVar18 + -0x1e),2);
              auVar72 = NEON_rev64(*(undefined1 (*) [16])((long)param_9 + lVar18 + -0xe),2);
              auVar74 = NEON_rev64(*(undefined1 (*) [16])((long)param_9 + lVar18 + -0x1e),2);
              auVar70 = NEON_ext(auVar70,auVar70,8,1);
              auVar71 = NEON_ext(auVar69,auVar69,8,1);
              auVar73 = NEON_ext(auVar72,auVar72,8,1);
              auVar74 = NEON_ext(auVar74,auVar74,8,1);
              sVar29 = (short)((ulong)uVar47 >> 0x10);
              sVar31 = (short)((ulong)uVar47 >> 0x20);
              sVar33 = (short)((ulong)uVar47 >> 0x30);
              sVar75 = (short)((ulong)uVar42 >> 0x10);
              sVar76 = (short)((ulong)uVar42 >> 0x20);
              sVar77 = (short)((ulong)uVar42 >> 0x30);
              auVar69._0_4_ = (int)auVar70._0_2_ * (int)(short)uVar42;
              auVar69._4_4_ = (int)auVar70._2_2_ * (int)sVar75;
              auVar69._8_4_ = (int)auVar70._4_2_ * (int)sVar76;
              auVar69._12_4_ = (int)auVar70._6_2_ * (int)sVar77;
              sVar30 = (short)((ulong)uVar81 >> 0x10);
              sVar32 = (short)((ulong)uVar81 >> 0x20);
              sVar34 = (short)((ulong)uVar81 >> 0x30);
              sVar78 = (short)((ulong)uVar52 >> 0x10);
              sVar79 = (short)((ulong)uVar52 >> 0x20);
              sVar80 = (short)((ulong)uVar52 >> 0x30);
              auVar72._0_4_ = (int)auVar71._0_2_ * (int)(short)uVar52;
              auVar72._4_4_ = (int)auVar71._2_2_ * (int)sVar78;
              auVar72._8_4_ = (int)auVar71._4_2_ * (int)sVar79;
              auVar72._12_4_ = (int)auVar71._6_2_ * (int)sVar80;
              iVar43 = iVar43 - (int)auVar73._8_2_ * (int)(short)uVar47;
              iVar44 = iVar44 - (int)auVar73._10_2_ * (int)sVar29;
              iVar45 = iVar45 - (int)auVar73._12_2_ * (int)sVar31;
              iVar46 = iVar46 - (int)auVar73._14_2_ * (int)sVar33;
              iVar35 = iVar35 - (int)auVar73._0_2_ * (int)(short)uVar42;
              iVar36 = iVar36 - (int)auVar73._2_2_ * (int)sVar75;
              iVar37 = iVar37 - (int)auVar73._4_2_ * (int)sVar76;
              iVar41 = iVar41 - (int)auVar73._6_2_ * (int)sVar77;
              iVar53 = iVar53 - (int)auVar74._8_2_ * (int)(short)uVar81;
              iVar54 = iVar54 - (int)auVar74._10_2_ * (int)sVar30;
              iVar55 = iVar55 - (int)auVar74._12_2_ * (int)sVar32;
              iVar56 = iVar56 - (int)auVar74._14_2_ * (int)sVar34;
              iVar48 = iVar48 - (int)auVar74._0_2_ * (int)(short)uVar52;
              iVar49 = iVar49 - (int)auVar74._2_2_ * (int)sVar78;
              iVar50 = iVar50 - (int)auVar74._4_2_ * (int)sVar79;
              iVar51 = iVar51 - (int)auVar74._6_2_ * (int)sVar80;
              lVar59 = lVar59 - (ulong)(uint)((int)auVar70._12_2_ * (int)sVar31);
              lVar60 = lVar60 - (ulong)(uint)((int)auVar70._14_2_ * (int)sVar33);
              lVar39 = lVar39 - (ulong)(uint)((int)auVar70._8_2_ * (int)(short)uVar47);
              lVar40 = lVar40 - (ulong)(uint)((int)auVar70._10_2_ * (int)sVar29);
              lVar57 = lVar57 - (auVar69._8_8_ & 0xffffffff);
              lVar58 = lVar58 - (auVar69._8_8_ >> 0x20);
              uVar25 = uVar25 - auVar69._0_4_;
              lVar38 = lVar38 - (ulong)auVar69._4_4_;
              lVar67 = lVar67 - (ulong)(uint)((int)auVar71._12_2_ * (int)sVar32);
              lVar68 = lVar68 - (ulong)(uint)((int)auVar71._14_2_ * (int)sVar34);
              lVar63 = lVar63 - (ulong)(uint)((int)auVar71._8_2_ * (int)(short)uVar81);
              lVar64 = lVar64 - (ulong)(uint)((int)auVar71._10_2_ * (int)sVar30);
              lVar65 = lVar65 - (auVar72._8_8_ & 0xffffffff);
              lVar66 = lVar66 - (auVar72._8_8_ >> 0x20);
              lVar61 = lVar61 - (ulong)auVar72._0_4_;
              lVar62 = lVar62 - (ulong)auVar72._4_4_;
            } while (uVar16 != 0);
            uVar25 = lVar61 + uVar25 + lVar63 + lVar39 + lVar65 + lVar57 + lVar67 + lVar59 +
                     lVar62 + lVar38 + lVar64 + lVar40 + lVar66 + lVar58 + lVar68 + lVar60;
            iVar35 = iVar48 + iVar35 + iVar53 + iVar43 + iVar49 + iVar36 + iVar54 + iVar44 +
                     iVar50 + iVar37 + iVar55 + iVar45 + iVar51 + iVar41 + iVar56 + iVar46;
            if (uVar28 != uVar22) {
              if ((uVar28 & 0xc) == 0) {
                iVar10 = iVar10 - (int)uVar22;
                uVar16 = uVar22 | 1;
                psVar6 = (short *)(param_1 + 2 + uVar22 * 2);
                goto LAB_00927c94;
              }
              goto LAB_0092802c;
            }
          }
        }
        psVar6 = (short *)(param_1 + uVar20 * 2);
      }
      uVar20 = uVar21 + 1;
      if (uVar20 < param_2) {
        uVar21 = param_2 + ~uVar21;
        psVar7 = psVar2;
        psVar11 = psVar9;
        uVar16 = uVar20;
        if (3 < uVar21) {
          if (uVar21 < 0x10) {
            uVar28 = 0;
          }
          else {
            iVar36 = 0;
            iVar37 = 0;
            lVar17 = 0;
            uVar16 = uVar8 & 0xfffffffffffffff0;
            lVar38 = 0;
            lVar39 = 0;
            iVar41 = 0;
            iVar43 = 0;
            iVar44 = 0;
            iVar45 = 0;
            iVar46 = 0;
            iVar48 = 0;
            iVar49 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar53 = 0;
            iVar54 = 0;
            iVar55 = 0;
            uVar28 = uVar21 & 0xfffffffffffffff0;
            lVar40 = 0;
            lVar57 = 0;
            lVar58 = 0;
            lVar59 = 0;
            lVar60 = 0;
            lVar61 = 0;
            iVar10 = 0;
            lVar64 = 0;
            lVar65 = 0;
            psVar7 = psVar6 + 8;
            lVar62 = 0;
            lVar63 = 0;
            lVar66 = 0;
            lVar67 = 0;
            pauVar26 = (undefined1 (*) [16])(param_5 + lVar5 + -0x10);
            pauVar27 = (undefined1 (*) [16])(param_7 + lVar5 + -0x10);
            do {
              uVar16 = uVar16 - 0x10;
              pauVar1 = pauVar27 + -1;
              auVar70 = *pauVar27;
              pauVar27 = pauVar27 + -2;
              uVar47 = *(undefined8 *)(psVar7 + -4);
              uVar42 = *(undefined8 *)(psVar7 + -8);
              uVar81 = *(undefined8 *)(psVar7 + 4);
              uVar52 = *(undefined8 *)psVar7;
              psVar7 = psVar7 + 0x10;
              auVar69 = NEON_rev64(*pauVar26,2);
              auVar71 = NEON_rev64(pauVar26[-1],2);
              pauVar26 = pauVar26 + -2;
              auVar72 = NEON_rev64(auVar70,2);
              auVar73 = NEON_rev64(*pauVar1,2);
              auVar70 = NEON_ext(auVar69,auVar69,8,1);
              auVar69 = NEON_ext(auVar71,auVar71,8,1);
              auVar72 = NEON_ext(auVar72,auVar72,8,1);
              auVar74 = NEON_ext(auVar73,auVar73,8,1);
              sVar29 = (short)((ulong)uVar47 >> 0x10);
              sVar31 = (short)((ulong)uVar47 >> 0x20);
              sVar33 = (short)((ulong)uVar47 >> 0x30);
              sVar75 = (short)((ulong)uVar42 >> 0x10);
              sVar76 = (short)((ulong)uVar42 >> 0x20);
              sVar77 = (short)((ulong)uVar42 >> 0x30);
              auVar71._0_4_ = (int)auVar70._0_2_ * (int)(short)uVar42;
              auVar71._4_4_ = (int)auVar70._2_2_ * (int)sVar75;
              auVar71._8_4_ = (int)auVar70._4_2_ * (int)sVar76;
              auVar71._12_4_ = (int)auVar70._6_2_ * (int)sVar77;
              sVar30 = (short)((ulong)uVar81 >> 0x10);
              sVar32 = (short)((ulong)uVar81 >> 0x20);
              sVar34 = (short)((ulong)uVar81 >> 0x30);
              sVar78 = (short)((ulong)uVar52 >> 0x10);
              sVar79 = (short)((ulong)uVar52 >> 0x20);
              sVar80 = (short)((ulong)uVar52 >> 0x30);
              auVar73._0_4_ = (int)auVar69._0_2_ * (int)(short)uVar52;
              auVar73._4_4_ = (int)auVar69._2_2_ * (int)sVar78;
              auVar73._8_4_ = (int)auVar69._4_2_ * (int)sVar79;
              auVar73._12_4_ = (int)auVar69._6_2_ * (int)sVar80;
              iVar41 = iVar41 - (int)auVar72._8_2_ * (int)(short)uVar47;
              iVar43 = iVar43 - (int)auVar72._10_2_ * (int)sVar29;
              iVar44 = iVar44 - (int)auVar72._12_2_ * (int)sVar31;
              iVar45 = iVar45 - (int)auVar72._14_2_ * (int)sVar33;
              iVar35 = iVar35 - (int)auVar72._0_2_ * (int)(short)uVar42;
              iVar10 = iVar10 - (int)auVar72._2_2_ * (int)sVar75;
              iVar36 = iVar36 - (int)auVar72._4_2_ * (int)sVar76;
              iVar37 = iVar37 - (int)auVar72._6_2_ * (int)sVar77;
              iVar51 = iVar51 - (int)auVar74._8_2_ * (int)(short)uVar81;
              iVar53 = iVar53 - (int)auVar74._10_2_ * (int)sVar30;
              iVar54 = iVar54 - (int)auVar74._12_2_ * (int)sVar32;
              iVar55 = iVar55 - (int)auVar74._14_2_ * (int)sVar34;
              iVar46 = iVar46 - (int)auVar74._0_2_ * (int)(short)uVar52;
              iVar48 = iVar48 - (int)auVar74._2_2_ * (int)sVar78;
              iVar49 = iVar49 - (int)auVar74._4_2_ * (int)sVar79;
              iVar50 = iVar50 - (int)auVar74._6_2_ * (int)sVar80;
              lVar58 = lVar58 - (ulong)(uint)((int)auVar70._12_2_ * (int)sVar31);
              lVar59 = lVar59 - (ulong)(uint)((int)auVar70._14_2_ * (int)sVar33);
              lVar38 = lVar38 - (ulong)(uint)((int)auVar70._8_2_ * (int)(short)uVar47);
              lVar39 = lVar39 - (ulong)(uint)((int)auVar70._10_2_ * (int)sVar29);
              lVar40 = lVar40 - (auVar71._8_8_ & 0xffffffff);
              lVar57 = lVar57 - (auVar71._8_8_ >> 0x20);
              uVar25 = uVar25 - auVar71._0_4_;
              lVar17 = lVar17 - (ulong)auVar71._4_4_;
              lVar66 = lVar66 - (ulong)(uint)((int)auVar69._12_2_ * (int)sVar32);
              lVar67 = lVar67 - (ulong)(uint)((int)auVar69._14_2_ * (int)sVar34);
              lVar62 = lVar62 - (ulong)(uint)((int)auVar69._8_2_ * (int)(short)uVar81);
              lVar63 = lVar63 - (ulong)(uint)((int)auVar69._10_2_ * (int)sVar30);
              lVar64 = lVar64 - (auVar73._8_8_ & 0xffffffff);
              lVar65 = lVar65 - (auVar73._8_8_ >> 0x20);
              lVar60 = lVar60 - (ulong)auVar73._0_4_;
              lVar61 = lVar61 - (ulong)auVar73._4_4_;
            } while (uVar16 != 0);
            iVar35 = iVar46 + iVar35 + iVar51 + iVar41 + iVar48 + iVar10 + iVar53 + iVar43 +
                     iVar49 + iVar36 + iVar54 + iVar44 + iVar50 + iVar37 + iVar55 + iVar45;
            uVar25 = lVar60 + uVar25 + lVar62 + lVar38 + lVar64 + lVar40 + lVar66 + lVar58 +
                     lVar61 + lVar17 + lVar63 + lVar39 + lVar65 + lVar57 + lVar67 + lVar59;
            if (uVar21 == uVar28) goto LAB_00927c30;
            if ((uVar21 & 0xc) == 0) {
              psVar6 = psVar6 + uVar28;
              psVar7 = psVar2 + -uVar28;
              psVar11 = psVar9 + -uVar28;
              uVar16 = uVar20 + uVar28;
              goto LAB_00927ee8;
            }
          }
          iVar36 = 0;
          iVar37 = 0;
          lVar38 = 0;
          uVar22 = uVar21 & 0xfffffffffffffffc;
          lVar39 = 0;
          lVar40 = 0;
          iVar10 = 0;
          lVar17 = uVar28 - (uVar8 & 0xfffffffffffffffc);
          psVar7 = psVar6 + uVar28;
          puVar12 = (undefined8 *)(param_5 + lVar5 + -8 + uVar28 * -2);
          puVar15 = (undefined8 *)(param_7 + lVar5 + -8 + uVar28 * -2);
          do {
            lVar17 = lVar17 + 4;
            uVar42 = NEON_rev64(*puVar12,2);
            uVar52 = *(undefined8 *)psVar7;
            uVar47 = NEON_rev64(*puVar15,2);
            sVar29 = (short)((ulong)uVar52 >> 0x10);
            sVar30 = (short)((ulong)uVar52 >> 0x20);
            sVar31 = (short)((ulong)uVar52 >> 0x30);
            iVar35 = iVar35 - (int)(short)uVar47 * (int)(short)uVar52;
            iVar10 = iVar10 - (int)(short)((ulong)uVar47 >> 0x10) * (int)sVar29;
            iVar36 = iVar36 - (int)(short)((ulong)uVar47 >> 0x20) * (int)sVar30;
            iVar37 = iVar37 - (int)(short)((ulong)uVar47 >> 0x30) * (int)sVar31;
            lVar39 = lVar39 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x20) * (int)sVar30);
            lVar40 = lVar40 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x30) * (int)sVar31);
            uVar25 = uVar25 - (uint)((int)(short)uVar42 * (int)(short)uVar52);
            lVar38 = lVar38 - (ulong)(uint)((int)(short)((ulong)uVar42 >> 0x10) * (int)sVar29);
            psVar7 = psVar7 + 4;
            puVar12 = puVar12 + -1;
            puVar15 = puVar15 + -1;
          } while (lVar17 != 0);
          iVar35 = iVar35 + iVar10 + iVar36 + iVar37;
          uVar25 = uVar25 + lVar39 + lVar38 + lVar40;
          psVar7 = psVar2 + -uVar22;
          psVar11 = psVar9 + -uVar22;
          uVar16 = uVar20 + uVar22;
          psVar6 = psVar6 + uVar22;
          if (uVar21 == uVar22) goto LAB_00927c30;
        }
LAB_00927ee8:
        lVar17 = param_2 - uVar16;
        do {
          lVar17 = lVar17 + -1;
          iVar35 = iVar35 - (int)*psVar7 * (int)*psVar6;
          uVar25 = uVar25 - (uint)((int)*psVar11 * (int)*psVar6);
          psVar7 = psVar7 + -1;
          psVar11 = psVar11 + -1;
          psVar6 = psVar6 + 1;
        } while (lVar17 != 0);
      }
LAB_00927c30:
      lVar23 = lVar23 + 0x100000000;
      uVar8 = uVar8 - 1;
      lVar17 = uVar25 + (uint)(iVar35 >> 0xc);
      uVar21 = lVar17 + 0x800;
      *puVar13 = (short)(uVar21 >> 0xc);
      *psVar24 = (short)lVar17 - ((ushort)uVar21 & 0xf000);
      param_3 = param_3 + 1;
      psVar24 = psVar24 + 1;
      puVar13 = puVar13 + 1;
      uVar21 = uVar20;
    } while (uVar20 != param_4);
  }
  uVar21 = param_6 - param_4;
  if (param_6 < param_4 || uVar21 == 0) {
    FUN_0091bad4(param_8,param_4,param_2 - 1,param_5);
    FUN_0091bad4(param_9,param_4,param_2 - 1,param_7);
    return param_4;
  }
  if (uVar21 < 4) {
LAB_009280fc:
    uVar8 = 0;
LAB_00928100:
    lVar23 = uVar8 << 1;
    uVar8 = uVar8 + param_4;
    do {
      *(undefined2 *)(param_5 + lVar23) = *(undefined2 *)(param_5 + uVar8 * 2);
      lVar5 = uVar8 * 2;
      uVar8 = uVar8 + 1;
      *(undefined2 *)(param_7 + lVar23) = *(undefined2 *)(param_7 + lVar5);
      lVar23 = lVar23 + 2;
    } while (param_6 != uVar8);
  }
  else {
    lVar23 = param_4 * 2;
    lVar5 = (param_6 + ~param_4) * 2;
    uVar8 = 0;
    if (((param_7 + lVar23 + lVar5 < param_7 + lVar23) ||
        (param_5 + lVar23 + lVar5 < param_5 + lVar23)) ||
       ((param_5 + lVar5 < param_5 ||
        ((param_7 + lVar5 < param_7 || ((long)(param_6 + ~param_4) < 0)))))) goto LAB_00928100;
    if ((param_7 - param_5 < 0x20) ||
       ((param_4 * -2 < 0x20 || ((lVar23 + param_7) - param_5 < 0x20)))) goto LAB_009280fc;
    uVar8 = 0;
    if ((param_7 - param_5) + param_4 * -2 < 0x20) goto LAB_00928100;
    if (uVar21 < 0x10) {
      uVar20 = 0;
LAB_00928360:
      uVar8 = uVar21 & 0xfffffffffffffffc;
      lVar17 = uVar20 << 1;
      lVar5 = uVar20 - uVar8;
      do {
        lVar5 = lVar5 + 4;
        *(undefined8 *)(param_5 + lVar17) = *(undefined8 *)(param_5 + lVar23 + lVar17);
        *(undefined8 *)(param_7 + lVar17) = *(undefined8 *)(param_7 + lVar23 + lVar17);
        lVar17 = lVar17 + 8;
      } while (lVar5 != 0);
      if (uVar21 != uVar8) goto LAB_00928100;
    }
    else {
      uVar8 = uVar21 & 0xfffffffffffffff0;
      puVar12 = (undefined8 *)(param_5 + 0x10);
      puVar15 = (undefined8 *)(param_7 + 0x10);
      uVar20 = uVar21 & 0xfffffffffffffff0;
      do {
        puVar14 = (undefined8 *)((long)puVar12 + lVar23);
        uVar20 = uVar20 - 0x10;
        uVar42 = puVar14[-2];
        uVar52 = puVar14[1];
        uVar47 = *puVar14;
        puVar3 = (undefined8 *)((long)puVar15 + lVar23);
        puVar12[-1] = puVar14[-1];
        puVar12[-2] = uVar42;
        puVar12[1] = uVar52;
        *puVar12 = uVar47;
        puVar12 = puVar12 + 4;
        uVar42 = puVar3[-2];
        uVar52 = puVar3[1];
        uVar47 = *puVar3;
        puVar15[-1] = puVar3[-1];
        puVar15[-2] = uVar42;
        puVar15[1] = uVar52;
        *puVar15 = uVar47;
        puVar15 = puVar15 + 4;
      } while (uVar20 != 0);
      if (uVar21 != uVar8) {
        uVar20 = uVar8;
        if ((uVar21 & 0xc) == 0) goto LAB_00928100;
        goto LAB_00928360;
      }
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 < 4) {
    uVar8 = 0;
  }
  else {
    lVar23 = param_4 - 1;
    uVar8 = 0;
    if (((((param_9 <= param_9 + lVar23) && (param_8 <= param_8 + lVar23)) &&
         (uVar20 = param_5 + uVar21 * 2, uVar20 <= uVar20 + lVar23 * 2)) &&
        ((uVar21 = param_7 + uVar21 * 2, uVar21 <= uVar21 + lVar23 * 2 && (-1 < lVar23)))) &&
       (uVar8 = 0, 0x1f < param_7 - param_5)) {
      lVar23 = param_6 * 2;
      if (((0x1f < (lVar23 + param_5) - (long)(param_8 + param_4)) &&
          (0x1f < (param_4 * 2 - (lVar23 + param_5)) + (long)param_9)) &&
         ((0x1f < (lVar23 + param_7) - (long)(param_8 + param_4) &&
          (0x1f < (lVar23 + param_7) - (long)(param_9 + param_4))))) {
        if (param_4 < 0x10) {
          uVar21 = 0;
        }
        else {
          uVar8 = param_4 & 0xfffffffffffffff0;
          lVar23 = lVar23 + param_4 * -2 + 0x10;
          psVar9 = param_9 + 8;
          puVar12 = (undefined8 *)(param_8 + 8);
          puVar14 = (undefined8 *)(param_7 + lVar23);
          puVar15 = (undefined8 *)(param_5 + lVar23);
          uVar21 = param_4 & 0xfffffffffffffff0;
          do {
            puVar3 = puVar12 + -1;
            uVar42 = puVar12[-2];
            uVar52 = puVar12[1];
            uVar47 = *puVar12;
            uVar21 = uVar21 - 0x10;
            puVar12 = puVar12 + 4;
            puVar15[-1] = *puVar3;
            puVar15[-2] = uVar42;
            puVar15[1] = uVar52;
            *puVar15 = uVar47;
            puVar15 = puVar15 + 4;
            psVar2 = psVar9 + -4;
            uVar42 = *(undefined8 *)(psVar9 + -8);
            uVar52 = *(undefined8 *)(psVar9 + 4);
            uVar47 = *(undefined8 *)psVar9;
            psVar9 = psVar9 + 0x10;
            puVar14[-1] = *(undefined8 *)psVar2;
            puVar14[-2] = uVar42;
            puVar14[1] = uVar52;
            *puVar14 = uVar47;
            puVar14 = puVar14 + 4;
          } while (uVar21 != 0);
          if (param_4 == uVar8) {
            return param_4;
          }
          uVar21 = uVar8;
          if ((param_4 & 0xc) == 0) goto LAB_00928138;
        }
        uVar8 = param_4 & 0xfffffffffffffffc;
        lVar23 = uVar21 - uVar8;
        lVar5 = ((uVar21 + param_6) - param_4) * 2;
        psVar9 = param_9 + uVar21;
        puVar12 = (undefined8 *)(param_7 + lVar5);
        puVar15 = (undefined8 *)(param_5 + lVar5);
        puVar14 = (undefined8 *)(param_8 + uVar21);
        do {
          lVar23 = lVar23 + 4;
          *puVar15 = *puVar14;
          *puVar12 = *(undefined8 *)psVar9;
          psVar9 = psVar9 + 4;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar23 != 0);
        if (param_4 == uVar8) {
          return param_4;
        }
      }
    }
  }
LAB_00928138:
  lVar23 = uVar8 - param_4;
  psVar9 = param_9 + uVar8;
  puVar13 = param_8 + uVar8;
  do {
    *(undefined2 *)(param_5 + param_6 * 2 + lVar23 * 2) = *puVar13;
    *(short *)(param_7 + param_6 * 2 + lVar23 * 2) = *psVar9;
    bVar4 = lVar23 != -1;
    lVar23 = lVar23 + 1;
    psVar9 = psVar9 + 1;
    puVar13 = puVar13 + 1;
  } while (bVar4);
  return param_4;
}


// ===== 00928448  FUN_00928448 =====

void FUN_00928448(undefined2 *param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0065880c(0x40000000);
  if (param_2 != 0) {
    iVar3 = -0x200000;
    if (0x200 < param_2) {
      iVar3 = -0x100000;
    }
    do {
      iVar3 = iVar3 + iVar2;
      if (0xff < (uint)(iVar3 >> 0x16)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x9284bc);
        (*pcVar1)();
      }
      param_2 = param_2 - 1;
      *param_1 = *(undefined2 *)(&DAT_0022661c + (ulong)(uint)(iVar3 >> 0x16) * 2);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// ===== 009284bc  FUN_009284bc =====

long FUN_009284bc(long param_1,ulong param_2,ulong param_3,int *param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  uint uVar14;
  long lVar15;
  short *psVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar32;
  undefined8 uVar29;
  int iVar33;
  int iVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  int iVar37;
  undefined8 uVar36;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
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
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  
  sVar4 = (**(code **)PTR_PTR_FUN_00d51f30)();
  if (sVar4 == 0) {
    uVar14 = 0;
    if (param_3 == 0xffffffffffffffff) goto LAB_0092855c;
  }
  else {
    uVar2 = 0x20 - (int)LZCOUNT((int)param_2);
    iVar24 = (int)LZCOUNT((int)sVar4 * (int)sVar4) + -1;
    uVar14 = 0;
    if (iVar24 <= (int)uVar2) {
      uVar14 = (uVar2 & 0xffff) - iVar24;
    }
    if (0xfffffffffffffffe < param_3) goto LAB_0092855c;
  }
  auVar23._4_4_ = uVar14;
  auVar23._0_4_ = uVar14;
  auVar23._8_4_ = uVar14;
  auVar23._12_4_ = uVar14;
  lVar15 = 0;
  uVar19 = 0;
  psVar16 = (short *)(param_1 + 0x40);
  lVar17 = -4;
  uVar18 = 7;
  auVar23 = NEON_neg(auVar23,4);
  lVar20 = param_1;
  uVar21 = param_2;
  do {
    uVar22 = uVar19 + 3;
    uVar9 = param_2;
    if (param_2 <= uVar18) {
      uVar9 = uVar18;
    }
    uVar5 = param_2;
    if (param_2 <= uVar19 + 7) {
      uVar5 = uVar19 + 7;
    }
    if (uVar22 < param_2) {
      uVar5 = (uVar5 - uVar19) - 4;
      if (uVar5 < 0x3c) {
        iVar24 = 0;
        uVar5 = 0;
        lVar7 = uVar19 + 3;
      }
      else {
        auVar31 = ZEXT816(0);
        iVar28 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        uVar6 = (uVar5 >> 2) + 1;
        iVar35 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        uVar10 = uVar6 & 0x7ffffffffffffff0;
        uVar5 = uVar10 * 4;
        uVar9 = (uVar9 + lVar17 >> 2) + 1 & 0x7ffffffffffffff0;
        lVar7 = uVar22 + uVar5;
        psVar8 = (short *)(param_1 + 0x40);
        psVar13 = psVar16;
        do {
          uVar9 = uVar9 - 0x10;
          auVar44._0_4_ = (int)*psVar13 * (int)*psVar8;
          auVar44._4_4_ = (int)psVar13[4] * (int)psVar8[4];
          auVar44._8_4_ = (int)psVar13[8] * (int)psVar8[8];
          auVar44._12_4_ = (int)psVar13[0xc] * (int)psVar8[0xc];
          auVar46._0_4_ = (int)psVar13[0x10] * (int)psVar8[0x10];
          auVar46._4_4_ = (int)psVar13[0x14] * (int)psVar8[0x14];
          auVar46._8_4_ = (int)psVar13[0x18] * (int)psVar8[0x18];
          auVar46._12_4_ = (int)psVar13[0x1c] * (int)psVar8[0x1c];
          auVar49._0_4_ = (int)psVar13[1] * (int)psVar8[1];
          auVar49._4_4_ = (int)psVar13[5] * (int)psVar8[5];
          auVar49._8_4_ = (int)psVar13[9] * (int)psVar8[9];
          auVar49._12_4_ = (int)psVar13[0xd] * (int)psVar8[0xd];
          auVar53._0_4_ = (int)psVar13[-0x10] * (int)psVar8[-0x10];
          auVar53._4_4_ = (int)psVar13[-0xc] * (int)psVar8[-0xc];
          auVar53._8_4_ = (int)psVar13[-8] * (int)psVar8[-8];
          auVar53._12_4_ = (int)psVar13[-4] * (int)psVar8[-4];
          auVar50._0_4_ = (int)psVar13[-0x20] * (int)psVar8[-0x20];
          auVar50._4_4_ = (int)psVar13[-0x1c] * (int)psVar8[-0x1c];
          auVar50._8_4_ = (int)psVar13[-0x18] * (int)psVar8[-0x18];
          auVar50._12_4_ = (int)psVar13[-0x14] * (int)psVar8[-0x14];
          auVar56._0_4_ = (int)psVar13[-0x1f] * (int)psVar8[-0x1f];
          auVar56._4_4_ = (int)psVar13[-0x1b] * (int)psVar8[-0x1b];
          auVar56._8_4_ = (int)psVar13[-0x17] * (int)psVar8[-0x17];
          auVar56._12_4_ = (int)psVar13[-0x13] * (int)psVar8[-0x13];
          auVar57._0_4_ = (int)psVar13[-0xf] * (int)psVar8[-0xf];
          auVar57._4_4_ = (int)psVar13[-0xb] * (int)psVar8[-0xb];
          auVar57._8_4_ = (int)psVar13[-7] * (int)psVar8[-7];
          auVar57._12_4_ = (int)psVar13[-3] * (int)psVar8[-3];
          auVar58._0_4_ = (int)psVar13[-0x1e] * (int)psVar8[-0x1e];
          auVar58._4_4_ = (int)psVar13[-0x1a] * (int)psVar8[-0x1a];
          auVar58._8_4_ = (int)psVar13[-0x16] * (int)psVar8[-0x16];
          auVar58._12_4_ = (int)psVar13[-0x12] * (int)psVar8[-0x12];
          auVar59._0_4_ = (int)psVar13[-0xe] * (int)psVar8[-0xe];
          auVar59._4_4_ = (int)psVar13[-10] * (int)psVar8[-10];
          auVar59._8_4_ = (int)psVar13[-6] * (int)psVar8[-6];
          auVar59._12_4_ = (int)psVar13[-2] * (int)psVar8[-2];
          auVar60._0_4_ = (int)psVar13[0x11] * (int)psVar8[0x11];
          auVar60._4_4_ = (int)psVar13[0x15] * (int)psVar8[0x15];
          auVar60._8_4_ = (int)psVar13[0x19] * (int)psVar8[0x19];
          auVar60._12_4_ = (int)psVar13[0x1d] * (int)psVar8[0x1d];
          auVar61._0_4_ = (int)psVar13[2] * (int)psVar8[2];
          auVar61._4_4_ = (int)psVar13[6] * (int)psVar8[6];
          auVar61._8_4_ = (int)psVar13[10] * (int)psVar8[10];
          auVar61._12_4_ = (int)psVar13[0xe] * (int)psVar8[0xe];
          auVar63._0_4_ = (int)psVar13[0x12] * (int)psVar8[0x12];
          auVar63._4_4_ = (int)psVar13[0x16] * (int)psVar8[0x16];
          auVar63._8_4_ = (int)psVar13[0x1a] * (int)psVar8[0x1a];
          auVar63._12_4_ = (int)psVar13[0x1e] * (int)psVar8[0x1e];
          auVar44 = NEON_sshl(auVar44,auVar23,4);
          auVar46 = NEON_sshl(auVar46,auVar23,4);
          auVar49 = NEON_sshl(auVar49,auVar23,4);
          auVar54 = NEON_sshl(auVar53,auVar23,4);
          auVar53 = NEON_sshl(auVar50,auVar23,4);
          auVar56 = NEON_sshl(auVar56,auVar23,4);
          auVar57 = NEON_sshl(auVar57,auVar23,4);
          auVar59 = NEON_sshl(auVar59,auVar23,4);
          auVar58 = NEON_sshl(auVar58,auVar23,4);
          auVar60 = NEON_sshl(auVar60,auVar23,4);
          auVar63 = NEON_sshl(auVar63,auVar23,4);
          auVar61 = NEON_sshl(auVar61,auVar23,4);
          local_a0 = auVar31._0_4_;
          iStack_9c = auVar31._4_4_;
          iStack_98 = auVar31._8_4_;
          iStack_94 = auVar31._12_4_;
          auVar55._0_4_ = (int)psVar13[-0xd] * (int)psVar8[-0xd];
          auVar55._4_4_ = (int)psVar13[-9] * (int)psVar8[-9];
          auVar55._8_4_ = (int)psVar13[-5] * (int)psVar8[-5];
          auVar55._12_4_ = (int)psVar13[-1] * (int)psVar8[-1];
          auVar62._0_4_ = (int)psVar13[3] * (int)psVar8[3];
          auVar62._4_4_ = (int)psVar13[7] * (int)psVar8[7];
          auVar62._8_4_ = (int)psVar13[0xb] * (int)psVar8[0xb];
          auVar62._12_4_ = (int)psVar13[0xf] * (int)psVar8[0xf];
          auVar31 = NEON_sshl(auVar55,auVar23,4);
          auVar48._4_2_ = (short)((int)psVar13[-0x19] * (int)psVar8[-0x19]);
          auVar48._0_4_ = (int)psVar13[-0x1d] * (int)psVar8[-0x1d];
          auVar48._6_2_ = (short)((uint)((int)psVar13[-0x19] * (int)psVar8[-0x19]) >> 0x10);
          auVar48._8_2_ = (short)((int)psVar13[-0x15] * (int)psVar8[-0x15]);
          auVar48._10_2_ = (short)((uint)((int)psVar13[-0x15] * (int)psVar8[-0x15]) >> 0x10);
          auVar48._12_2_ = (short)((int)psVar13[-0x11] * (int)psVar8[-0x11]);
          auVar48._14_2_ = (short)((uint)((int)psVar13[-0x11] * (int)psVar8[-0x11]) >> 0x10);
          auVar48 = NEON_sshl(auVar48,auVar23,4);
          auVar50 = NEON_sshl(auVar62,auVar23,4);
          auVar52._4_2_ = (short)((int)psVar13[0x17] * (int)psVar8[0x17]);
          auVar52._0_4_ = (int)psVar13[0x13] * (int)psVar8[0x13];
          auVar52._6_2_ = (short)((uint)((int)psVar13[0x17] * (int)psVar8[0x17]) >> 0x10);
          auVar52._8_2_ = (short)((int)psVar13[0x1b] * (int)psVar8[0x1b]);
          auVar52._10_2_ = (short)((uint)((int)psVar13[0x1b] * (int)psVar8[0x1b]) >> 0x10);
          auVar52._12_2_ = (short)((int)psVar13[0x1f] * (int)psVar8[0x1f]);
          auVar52._14_2_ = (short)((uint)((int)psVar13[0x1f] * (int)psVar8[0x1f]) >> 0x10);
          auVar52 = NEON_sshl(auVar52,auVar23,4);
          iVar24 = auVar54._0_4_ + iVar24 + auVar57._0_4_ + auVar59._0_4_ + auVar31._0_4_;
          iVar25 = auVar54._4_4_ + iVar25 + auVar57._4_4_ + auVar59._4_4_ + auVar31._4_4_;
          iVar26 = auVar54._8_4_ + iVar26 + auVar57._8_4_ + auVar59._8_4_ + auVar31._8_4_;
          iVar27 = auVar54._12_4_ + iVar27 + auVar57._12_4_ + auVar59._12_4_ + auVar31._12_4_;
          iVar28 = auVar53._0_4_ + iVar28 + auVar56._0_4_ + auVar58._0_4_ + auVar48._0_4_;
          iVar32 = auVar53._4_4_ + iVar32 + auVar56._4_4_ + auVar58._4_4_ + auVar48._4_4_;
          iVar33 = auVar53._8_4_ + iVar33 + auVar56._8_4_ + auVar58._8_4_ + auVar48._8_4_;
          iVar34 = auVar53._12_4_ + iVar34 + auVar56._12_4_ + auVar58._12_4_ + auVar48._12_4_;
          auVar31._0_4_ = auVar46._0_4_ + local_a0 + auVar60._0_4_ + auVar63._0_4_ + auVar52._0_4_;
          auVar31._4_4_ = auVar46._4_4_ + iStack_9c + auVar60._4_4_ + auVar63._4_4_ + auVar52._4_4_;
          auVar31._8_4_ = auVar46._8_4_ + iStack_98 + auVar60._8_4_ + auVar63._8_4_ + auVar52._8_4_;
          auVar31._12_4_ =
               auVar46._12_4_ + iStack_94 + auVar60._12_4_ + auVar63._12_4_ + auVar52._12_4_;
          iVar35 = auVar44._0_4_ + iVar35 + auVar49._0_4_ + auVar61._0_4_ + auVar50._0_4_;
          iVar37 = auVar44._4_4_ + iVar37 + auVar49._4_4_ + auVar61._4_4_ + auVar50._4_4_;
          iVar38 = auVar44._8_4_ + iVar38 + auVar49._8_4_ + auVar61._8_4_ + auVar50._8_4_;
          iVar39 = auVar44._12_4_ + iVar39 + auVar49._12_4_ + auVar61._12_4_ + auVar50._12_4_;
          psVar8 = psVar8 + 0x40;
          psVar13 = psVar13 + 0x40;
        } while (uVar9 != 0);
        iVar24 = iVar35 + iVar28 + auVar31._0_4_ + iVar24 + iVar37 + iVar32 + auVar31._4_4_ + iVar25
                 + iVar38 + iVar33 + auVar31._8_4_ + iVar26 +
                   iVar39 + iVar34 + auVar31._12_4_ + iVar27;
        if (uVar6 == uVar10) goto LAB_009287f0;
      }
      lVar11 = uVar5 << 1;
      do {
        psVar8 = (short *)(param_1 + lVar11);
        psVar13 = (short *)(lVar20 + lVar11);
        lVar1 = uVar5 * 2;
        uVar5 = uVar5 + 4;
        lVar11 = lVar11 + 8;
        iVar24 = ((int)*psVar13 * (int)*psVar8 >> (uVar14 & 0x1f)) + iVar24 +
                 ((int)*(short *)(lVar20 + lVar1 + 2) * (int)psVar8[1] >> (uVar14 & 0x1f)) +
                 ((int)psVar13[2] * (int)psVar8[2] >> (uVar14 & 0x1f)) +
                 ((int)*(short *)(param_1 + lVar7 * 2) * (int)psVar8[3] >> (uVar14 & 0x1f));
        lVar7 = uVar5 + uVar22;
      } while (uVar19 + uVar5 + 3 < param_2);
    }
    else {
      uVar5 = 0;
      iVar24 = 0;
    }
LAB_009287f0:
    if (uVar5 < param_2 - uVar19) {
      uVar22 = uVar21 - uVar5;
      if (3 < uVar22) {
        if (uVar22 < 0x10) {
          uVar6 = 0;
        }
        else {
          iVar28 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar42 = 0;
          iVar43 = 0;
          uVar6 = uVar22 & 0xfffffffffffffff0;
          uVar9 = uVar22 & 0xfffffffffffffff0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          psVar8 = (short *)(param_1 + uVar5 * 2);
          do {
            psVar13 = (short *)((long)psVar8 + lVar15);
            uVar9 = uVar9 - 0x10;
            auVar45._0_4_ = (int)*psVar13 * (int)*psVar8;
            auVar45._4_4_ = (int)psVar13[1] * (int)psVar8[1];
            auVar45._8_4_ = (int)psVar13[2] * (int)psVar8[2];
            auVar45._12_4_ = (int)psVar13[3] * (int)psVar8[3];
            auVar47._0_4_ = (int)psVar13[0xc] * (int)psVar8[0xc];
            auVar47._4_4_ = (int)psVar13[0xd] * (int)psVar8[0xd];
            auVar47._8_4_ = (int)psVar13[0xe] * (int)psVar8[0xe];
            auVar47._12_4_ = (int)psVar13[0xf] * (int)psVar8[0xf];
            auVar51._0_4_ = (int)psVar13[8] * (int)psVar8[8];
            auVar51._4_4_ = (int)psVar13[9] * (int)psVar8[9];
            auVar51._8_4_ = (int)psVar13[10] * (int)psVar8[10];
            auVar51._12_4_ = (int)psVar13[0xb] * (int)psVar8[0xb];
            auVar54._4_2_ = (short)((int)psVar13[5] * (int)psVar8[5]);
            auVar54._0_4_ = (int)psVar13[4] * (int)psVar8[4];
            auVar54._6_2_ = (short)((uint)((int)psVar13[5] * (int)psVar8[5]) >> 0x10);
            auVar54._8_2_ = (short)((int)psVar13[6] * (int)psVar8[6]);
            auVar54._10_2_ = (short)((uint)((int)psVar13[6] * (int)psVar8[6]) >> 0x10);
            auVar54._12_2_ = (short)((int)psVar13[7] * (int)psVar8[7]);
            auVar54._14_2_ = (short)((uint)((int)psVar13[7] * (int)psVar8[7]) >> 0x10);
            auVar63 = NEON_sshl(auVar54,auVar23,4);
            auVar31 = NEON_sshl(auVar45,auVar23,4);
            auVar48 = NEON_sshl(auVar47,auVar23,4);
            auVar52 = NEON_sshl(auVar51,auVar23,4);
            iVar35 = auVar63._0_4_ + iVar35;
            iVar37 = auVar63._4_4_ + iVar37;
            iVar38 = auVar63._8_4_ + iVar38;
            iVar39 = auVar63._12_4_ + iVar39;
            iVar24 = auVar31._0_4_ + iVar24;
            iVar25 = auVar31._4_4_ + iVar25;
            iVar26 = auVar31._8_4_ + iVar26;
            iVar27 = auVar31._12_4_ + iVar27;
            iVar40 = auVar48._0_4_ + iVar40;
            iVar41 = auVar48._4_4_ + iVar41;
            iVar42 = auVar48._8_4_ + iVar42;
            iVar43 = auVar48._12_4_ + iVar43;
            iVar28 = auVar52._0_4_ + iVar28;
            iVar32 = auVar52._4_4_ + iVar32;
            iVar33 = auVar52._8_4_ + iVar33;
            iVar34 = auVar52._12_4_ + iVar34;
            psVar8 = psVar8 + 0x10;
          } while (uVar9 != 0);
          iVar24 = iVar28 + iVar24 + iVar40 + iVar35 + iVar32 + iVar25 + iVar41 + iVar37 +
                   iVar33 + iVar26 + iVar42 + iVar38 + iVar34 + iVar27 + iVar43 + iVar39;
          if (uVar22 == uVar6) goto LAB_009285b8;
          if ((uVar22 & 0xc) == 0) {
            uVar5 = uVar5 + uVar6;
            goto LAB_009288ec;
          }
        }
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        puVar12 = (undefined8 *)(param_1 + (uVar5 + uVar6) * 2);
        uVar9 = uVar22 & 0xfffffffffffffffc;
        uVar5 = uVar5 + uVar9;
        lVar7 = uVar6 - uVar9;
        do {
          uVar29 = *puVar12;
          uVar36 = *(undefined8 *)((long)puVar12 + lVar15);
          lVar7 = lVar7 + 4;
          puVar12 = puVar12 + 1;
          auVar30._0_4_ = (int)(short)uVar36 * (int)(short)uVar29;
          auVar30._4_4_ = (int)(short)((ulong)uVar36 >> 0x10) * (int)(short)((ulong)uVar29 >> 0x10);
          auVar30._8_4_ = (int)(short)((ulong)uVar36 >> 0x20) * (int)(short)((ulong)uVar29 >> 0x20);
          auVar30._12_4_ = (int)(short)((ulong)uVar36 >> 0x30) * (int)(short)((ulong)uVar29 >> 0x30)
          ;
          auVar31 = NEON_sshl(auVar30,auVar23,4);
          iVar24 = auVar31._0_4_ + iVar24;
          iVar25 = auVar31._4_4_ + iVar25;
          iVar26 = auVar31._8_4_ + iVar26;
          iVar27 = auVar31._12_4_ + iVar27;
        } while (lVar7 != 0);
        iVar24 = iVar24 + iVar25 + iVar26 + iVar27;
        if (uVar22 == uVar9) goto LAB_009285b8;
      }
LAB_009288ec:
      psVar8 = (short *)(param_1 + uVar5 * 2);
      lVar7 = uVar21 - uVar5;
      do {
        sVar4 = *psVar8;
        psVar13 = (short *)((long)psVar8 + lVar15);
        lVar7 = lVar7 + -1;
        psVar8 = psVar8 + 1;
        iVar24 = ((int)*psVar13 * (int)sVar4 >> (uVar14 & 0x1f)) + iVar24;
      } while (lVar7 != 0);
    }
LAB_009285b8:
    bVar3 = uVar19 != param_3;
    uVar19 = uVar19 + 1;
    uVar21 = uVar21 - 1;
    psVar16 = psVar16 + 1;
    uVar18 = uVar18 + 1;
    lVar17 = lVar17 + -1;
    lVar20 = lVar20 + 2;
    lVar15 = lVar15 + 2;
    *param_4 = iVar24;
    param_4 = param_4 + 1;
  } while (bVar3);
LAB_0092855c:
  *param_5 = uVar14;
  return param_3 + 1;
}


// ===== 00928920  FUN_00928920 =====

void FUN_00928920(long param_1)

{
  FUN_005edbb0();
  *(undefined1 *)(param_1 + 0x68) = 1;
  memset((void *)(param_1 + 0x6a),0,0x3c00);
  return;
}


// ===== 0092895c  FUN_0092895c =====

undefined8 FUN_0092895c(long param_1,int param_2,long param_3)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_3d10;
  undefined1 *puStack_3d08;
  undefined1 *puStack_3d00;
  undefined1 *puStack_3cf8;
  undefined1 *local_3cf0;
  undefined1 *puStack_3ce8;
  undefined1 *puStack_3ce0;
  undefined1 *puStack_3cd8;
  undefined1 *local_3cd0;
  undefined1 *puStack_3cc8;
  undefined1 *puStack_3cc0;
  undefined1 *puStack_3cb8;
  long local_3cb0;
  ulong uStack_3ca8;
  undefined1 **local_3ca0;
  ulong uStack_3c98;
  long local_3c90;
  long lStack_3c88;
  long local_3c80;
  long lStack_3c78;
  undefined1 *local_3c70;
  undefined1 *puStack_3c68;
  undefined1 *local_3c60;
  undefined1 *puStack_3c58;
  
  if ((param_2 == -1) || (*(int *)(param_3 + 0x20) == param_2)) {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x28);
    uVar2 = lVar3 * ((ulong)(long)param_2 / 100);
    if (0x1e00 < uVar2) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/acm2/acm_resampler.cc",0x183,
                     "AudioFrame cannot hold resampled data.");
      }
      thunk_FUN_006592d8(param_3);
      FUN_00659340(param_3,param_2);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
      lVar4 = *(long *)(param_3 + 0x18);
      lVar5 = lVar3 * lVar4;
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = param_1 + 0x6a;
      }
      memset(&local_3c70,0xaa,0x3c00);
      local_3ca0 = (undefined1 **)0x0;
      if (uVar2 != 0) {
        local_3ca0 = &local_3c70;
      }
      local_3cb0 = lVar3;
      uStack_3ca8 = (ulong)(long)param_2 / 100;
      uStack_3c98 = uVar2;
      local_3c90 = lVar3;
      lStack_3c88 = lVar4;
      local_3c80 = lVar1;
      lStack_3c78 = lVar5;
      FUN_005eddfc(param_1,&local_3c90,&local_3cb0);
    }
    puStack_3c68 = &DAT_aaaaaaaaaaaaaaaa;
    local_3c70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_3c58 = &DAT_aaaaaaaaaaaaaaaa;
    local_3c60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0065902c(&local_3c70,param_3);
    FUN_00659340(param_3,param_2);
    puStack_3cc8 = &DAT_aaaaaaaaaaaaaaaa;
    local_3cd0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_3cb8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_3cc0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_006591e8(&local_3cd0,param_3,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x28)
                );
    puStack_3ce8 = puStack_3c68;
    local_3cf0 = local_3c70;
    puStack_3cd8 = puStack_3c58;
    puStack_3ce0 = local_3c60;
    puStack_3d08 = puStack_3cc8;
    local_3d10 = local_3cd0;
    puStack_3cf8 = puStack_3cb8;
    puStack_3d00 = puStack_3cc0;
    FUN_005eddfc(param_1,&local_3cf0,&local_3d10);
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  __dest = (void *)0x0;
  if (*(long *)(param_3 + 0x28) * *(long *)(param_3 + 0x18) != 0) {
    __dest = (void *)(param_1 + 0x6a);
  }
  FUN_0065902c(&local_3c70,param_3);
  memcpy(__dest,local_3c60,(long)puStack_3c58 << 1);
  return 1;
}


// ===== 00928b40  FUN_00928b40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00928b40(void)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *local_18;
  
  puVar8 = (undefined8 *)operator_new(0x3e50);
  *puVar8 = &PTR_FUN_00d3dbf0;
  puVar9 = (undefined2 *)operator_new(0x1680);
  puVar1 = puVar9 + 0xb40;
  puVar8[5] = puVar9;
  puVar8[7] = puVar1;
  if ((0x1f < (ulong)-(long)puVar9) && (((ulong)puVar9 & 1) == 0)) {
    uVar12 = (ulong)-(long)puVar9 >> 1;
    if (0xb3e < uVar12) {
      uVar12 = 0xb3f;
    }
    uVar2 = uVar12 + 1 & 0xf;
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    puVar14 = (undefined8 *)(puVar9 + 8);
    lVar13 = (uVar12 + 1) - uVar3;
    puVar9 = puVar9 + lVar13;
    do {
      lVar13 = lVar13 + -0x10;
      puVar14[-1] = 0;
      puVar14[-2] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14 = puVar14 + 4;
    } while (lVar13 != 0);
  }
  do {
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar10 = puVar9 + 1;
    *puVar9 = 0;
    puVar9 = puVar10;
  } while (puVar10 != puVar1);
  puVar8[6] = puVar1;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(puVar8 + 8),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  puVar8[0xf] = 0;
  puVar8[0x10] = 0xd87f3f9fd87f3f9f;
  puVar8[0xe] = 0;
  puVar8[0xd] = 0;
  FUN_005edbb0(puVar8 + 0x11);
  puVar8[0x1e] = DAT_001f5170;
  pcVar11 = (char *)operator_new(0x28);
  puVar8[0x1f] = pcVar11;
  uVar4 = _DAT_001f2a60;
  puVar8[0x21] = _UNK_001f2a68;
  puVar8[0x20] = uVar4;
  uVar7 = s_WebRTC_Audio_TargetBitrateInKbps_001d7710._24_8_;
  uVar6 = s_WebRTC_Audio_TargetBitrateInKbps_001d7710._16_8_;
  uVar5 = s_WebRTC_Audio_TargetBitrateInKbps_001d7710._8_8_;
  uVar4 = s_WebRTC_Audio_TargetBitrateInKbps_001d7710._0_8_;
  if (pcVar11 + 0x20 < pcVar11) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pcVar11 < "ebRTC.Audio.TargetBitrateInKbps") &&
     ("WebRTC.Audio.TargetBitrateInKbps" < pcVar11 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  pcVar11[0x20] = '\0';
  puVar8[0x22] = 0;
  *(undefined8 *)(pcVar11 + 8) = uVar5;
  *(undefined8 *)pcVar11 = uVar4;
  *(undefined8 *)(pcVar11 + 0x18) = uVar7;
  *(undefined8 *)(pcVar11 + 0x10) = uVar6;
  *(undefined1 *)(puVar8 + 0x23) = 0xff;
  FUN_00658c48(puVar8 + 0x24);
  *(undefined1 *)(puVar8 + 0x7b2) = 0;
  *(undefined2 *)(puVar8 + 0x7b0) = 0x100;
  *(undefined1 *)(puVar8 + 0x7b3) = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x7b4),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  *(undefined4 *)(puVar8 + 0x7bd) = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  puVar8[0x7ba] = 0;
  puVar8[0x7b9] = 0;
  puVar8[0x7bc] = 0;
  puVar8[0x7bb] = 0;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)((long)puVar8 + 0x3dec),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  FUN_00666a34((long)puVar8 + 0x3e14);
  *(undefined4 *)((long)puVar8 + 0x3e4c) = 0xffffffff;
  uVar12 = FUN_00417e08();
  if ((uVar12 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/acm2/audio_coding_module.cc",0x6e9,
                 "Created");
  }
  return puVar8;
}


// ===== 00928da4  FUN_00928da4 =====

void FUN_00928da4(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  
  FUN_00666a74(param_1 + 0x3e14);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3dec));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3da0));
  pvVar9 = *(void **)(param_1 + 0x160);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    pvVar10 = *(void **)((long)pvVar9 + 8);
    if (pvVar10 != (void *)0x0) {
      pvVar3 = pvVar10;
      pvVar5 = *(void **)((long)pvVar9 + 0x10);
      if (pvVar10 != *(void **)((long)pvVar9 + 0x10)) {
        do {
          pvVar3 = (void *)((long)pvVar5 + -0x68);
          if (pvVar3 == (void *)0x0) goto LAB_00928f7c;
          pvVar2 = *(void **)((long)pvVar5 + -0x60);
          if (pvVar2 != (void *)0x0) {
            pvVar6 = *(void **)((long)pvVar5 + -0x58);
            uVar8 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
            uVar7 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3e) - ((long)pvVar2 - (long)pvVar6))
                    >> 2;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
              uVar7 = uVar7 & 0x3ffffffffffffffe;
              pvVar6 = (void *)((long)pvVar6 + uVar7 * -4);
              do {
                uVar7 = uVar7 - 2;
              } while (uVar7 != 0);
            }
            while (pvVar6 != pvVar2) {
              pvVar6 = (void *)((long)pvVar6 + -4);
              if (pvVar6 == (void *)0x0) goto LAB_00928f7c;
            }
            *(void **)((long)pvVar5 + -0x58) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar5 = pvVar3;
        } while (pvVar10 != pvVar3);
        pvVar3 = *(void **)((long)pvVar9 + 8);
      }
      *(void **)((long)pvVar9 + 0x10) = pvVar10;
      operator_delete(pvVar3);
    }
    operator_delete(pvVar9);
  }
  plVar4 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(char *)(param_1 + 0x10f) < '\0') {
    operator_delete(*(void **)(param_1 + 0xf8));
  }
  FUN_005edd2c(param_1 + 0x88);
  pvVar9 = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x40));
  pvVar9 = *(void **)(param_1 + 0x28);
  if (pvVar9 == (void *)0x0) {
    return;
  }
  pvVar10 = *(void **)(param_1 + 0x30);
  uVar8 = (ulong)((long)pvVar10 + ((long)pvVar10 << 0x3f) + -2) >> 1;
  uVar7 = (ulong)(((long)pvVar9 - (long)pvVar10 << 0x3f) - ((long)pvVar9 - (long)pvVar10)) >> 1;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)pvVar9 - (uint)pvVar10 | (uint)pvVar10) & 1) == 0)) {
    uVar7 = uVar7 & 0x7ffffffffffffffe;
    pvVar10 = (void *)((long)pvVar10 + uVar7 * -2);
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (pvVar10 == pvVar9) {
      *(void **)(param_1 + 0x30) = pvVar9;
      operator_delete(pvVar9);
      return;
    }
    pvVar10 = (void *)((long)pvVar10 + -2);
  } while (pvVar10 != (void *)0x0);
LAB_00928f7c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00928fc4  FUN_00928fc4 =====

void FUN_00928fc4(void *param_1)

{
  FUN_00928da4();
  operator_delete(param_1);
  return;
}


// ===== 00928ff4  FUN_00928ff4 =====

int FUN_00928ff4(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x40));
  (*param_3)(param_2,param_1 + 0x110);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x40));
  return iVar1;
}


// ===== 00929040  FUN_00929040 =====

int FUN_00929040(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *local_30;
  undefined8 uStack_28;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x3d98) == '\x01') {
    *(undefined1 *)(param_1 + 0x3d98) = 0;
  }
  local_30 = "Reset";
  uStack_28 = 5;
  if (*(long **)(param_1 + 0x110) == (long *)0x0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_0022681c,"../../modules/audio_coding/acm2/audio_coding_module.cc",0x1193,
                   &local_30," failed: No send codec is registered.");
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x40))();
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x40));
  return iVar1;
}


// ===== 009290e4  FUN_009290e4 =====

undefined8 FUN_009290e4(long param_1,undefined8 param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3da0));
  *(undefined8 *)(param_1 + 0x3dc8) = param_2;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3da0));
  return 0;
}


// ===== 00929130  FUN_00929130 =====

undefined4 FUN_00929130(long param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  char **ppcVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 auStack_3cc0 [32];
  char *local_3ca0;
  undefined8 uStack_3c98;
  undefined8 uStack_3c90;
  undefined8 uStack_3c88;
  undefined8 local_3c80;
  undefined8 uStack_3c78;
  undefined8 local_3c70;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x40));
  if (*(long *)(param_2 + 6) == 0) {
    uVar10 = FUN_004249b0(iVar5);
    if ((uVar10 & 1) == 0) {
      pcVar14 = "Cannot Add 10 ms audio, payload length is zero";
      uVar13 = 0xb53;
LAB_009292e4:
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_coding/acm2/audio_coding_module.cc",uVar13,
                   pcVar14);
    }
  }
  else if (param_2[8] < 0x2ee01) {
    if (*(long *)(param_2 + 6) == (long)(param_2[8] / 100)) {
      if ((*(ulong *)(param_2 + 10) < 9) &&
         ((0x156UL >> (*(ulong *)(param_2 + 10) & 0x3f) & 1) != 0)) {
        plVar11 = *(long **)(param_1 + 0x110);
        local_3ca0 = "Add10MsData";
        uStack_3c98 = 0xb;
        if (plVar11 != (long *)0x0) {
          iVar5 = *param_2;
          if ((*(byte *)(param_1 + 0x3d80) & 1) == 0) {
            *(int *)(param_1 + 0x80) = iVar5;
            *(int *)(param_1 + 0x84) = iVar5;
            *(undefined1 *)(param_1 + 0x3d80) = 1;
          }
          else if (iVar5 != *(int *)(param_1 + 0x84)) {
            uVar10 = FUN_004022fc();
            if ((uVar10 & 1) == 0) {
              FUN_00623bb0(&DAT_001f621a,"../../modules/audio_coding/acm2/audio_coding_module.cc",
                           0xd9a,"Unexpected input timestamp: ",*param_2,", expected: ",
                           *(undefined4 *)(param_1 + 0x84));
            }
            iVar5 = *param_2;
            iVar7 = *(int *)(param_1 + 0x84);
            iVar6 = (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
            plVar11 = *(long **)(param_1 + 0x110);
            *(int *)(param_1 + 0x80) =
                 *(int *)(param_1 + 0x80) +
                 (iVar5 - iVar7) * (int)((double)iVar6 / (double)param_2[8]);
            *(int *)(param_1 + 0x84) = *param_2;
          }
          iVar5 = param_2[8];
          iVar7 = (**(code **)(*plVar11 + 0x10))();
          if (*(long *)(param_2 + 10) == 2) {
            lVar12 = (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
            bVar4 = lVar12 == 1;
            iVar6 = *(int *)(param_1 + 0x80);
            if (!bVar4) goto LAB_009293ac;
LAB_009293fc:
            *(int *)(param_1 + 0x120) = iVar6;
            piVar18 = (int *)(param_1 + 0x120);
            *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 6);
            memset(&local_3ca0,0xaa,0x3c00);
            if (bVar4) {
              *(undefined8 *)(param_1 + 0x148) = 1;
              puVar20 = *(undefined1 **)(param_2 + 6);
              uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
              local_a0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
              local_90 = (char **)&DAT_aaaaaaaaaaaaaaaa;
              if (iVar5 == iVar7) {
                FUN_006591e8(&local_a0,param_1 + 0x120,puVar20,1);
                FUN_00929a70(param_2,local_90,puStack_88);
                puVar20 = (undefined1 *)0x0;
                ppcVar21 = (char **)0x0;
                puVar22 = (undefined1 *)0x0;
                puVar23 = (undefined1 *)0x0;
              }
              else {
                ppcVar21 = (char **)0x0;
                if (puVar20 != (undefined1 *)0x0) {
                  ppcVar21 = &local_3ca0;
                }
                FUN_00929a70(param_2,ppcVar21,puVar20);
                puVar22 = (undefined1 *)0x1;
                puVar23 = puVar20;
              }
LAB_009294e4:
              uVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
              FUN_00659340(param_1 + 0x120,uVar8);
              if (iVar5 != iVar7) {
                local_a0 = puVar22;
                uStack_98 = puVar23;
                local_90 = ppcVar21;
                puStack_88 = puVar20;
                FUN_006591e8(auStack_3cc0,param_1 + 0x120,*(undefined8 *)(param_1 + 0x138),
                             *(undefined8 *)(param_1 + 0x148));
                FUN_005eddfc(param_1 + 0x88,&local_a0,auStack_3cc0);
              }
            }
            else {
              *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 10);
              if (iVar5 != iVar7) {
                FUN_0065902c(&local_a0,param_2);
                puVar20 = puStack_88;
                ppcVar21 = local_90;
                puVar22 = local_a0;
                puVar23 = uStack_98;
                goto LAB_009294e4;
              }
              uVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
              FUN_00659340(param_1 + 0x120,uVar8);
            }
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x138);
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + param_2[6];
          }
          else {
            bVar4 = false;
            iVar6 = *(int *)(param_1 + 0x80);
LAB_009293ac:
            if (iVar5 != iVar7) goto LAB_009293fc;
            piVar18 = param_2;
            iVar5 = iVar6;
            if (*(int *)(param_1 + 0x84) != iVar6) {
              piVar18 = (int *)(param_1 + 0x120);
              FUN_00658e5c(param_1 + 0x120,param_2);
              iVar6 = *(int *)(param_1 + 0x80);
              iVar5 = *(int *)(param_1 + 0x84);
              *(int *)(param_1 + 0x120) = iVar6;
            }
            *(int *)(param_1 + 0x84) = iVar5 + param_2[6];
            *(int *)(param_1 + 0x80) = iVar6 + param_2[6];
          }
          lVar12 = (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
          lVar16 = *(long *)(piVar18 + 10);
          *(int *)(param_1 + 8) = *piVar18;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(piVar18 + 6);
          *(long *)(param_1 + 0x20) = lVar12;
          if (lVar16 == lVar12) {
            uVar13 = FUN_00659108(piVar18);
          }
          else {
            FUN_00929b08(piVar18,lVar12,param_1 + 0x28);
            uVar13 = *(undefined8 *)(param_1 + 0x28);
          }
          *(undefined8 *)(param_1 + 0x10) = uVar13;
          uVar19 = *(undefined8 *)(param_2 + 0xf14);
          uVar13 = *(undefined8 *)(param_2 + 0xf16);
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = (char **)&DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00666a9c(&local_a0);
          local_3ca0 = "Process";
          uStack_3c98 = 7;
          if (*(long **)(param_1 + 0x110) == (long *)0x0) {
            uVar10 = FUN_004249b0();
            if ((uVar10 & 1) == 0) {
              FUN_00623bb0(&DAT_0022681c,"../../modules/audio_coding/acm2/audio_coding_module.cc",
                           0x1193,&local_3ca0," failed: No send codec is registered.");
            }
            uVar8 = 0xffffffff;
          }
          else {
            if (*(char *)(param_1 + 0x3d81) == '\x01') {
              iVar7 = *(int *)(param_1 + 8);
              iVar5 = iVar7;
            }
            else {
              iVar7 = *(int *)(param_1 + 8);
              iVar6 = *(int *)(param_1 + 0x3d84);
              iVar5 = *(int *)(param_1 + 0x3d88);
              iVar9 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
              lVar17 = (long)iVar9 * (ulong)(uint)(iVar7 - iVar6);
              iVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
              lVar16 = (long)iVar7;
              lVar12 = 0;
              if (lVar16 != 0) {
                lVar12 = lVar17 / lVar16;
              }
              lVar15 = lVar17 - lVar12 * lVar16;
              if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_00226820,lVar15,0,
                             lVar17," is not evenly divisible by ",lVar16);
              }
              iVar7 = *(int *)(param_1 + 8);
              iVar5 = iVar5 + (int)lVar12;
            }
            *(int *)(param_1 + 0x3d84) = iVar7;
            *(int *)(param_1 + 0x3d88) = iVar5;
            *(undefined1 *)(param_1 + 0x3d81) = 0;
            if ((*(byte *)(param_1 + 0x3d98) & 1) == 0) {
              *(undefined8 *)(param_1 + 0x3d90) = uVar19;
              *(char *)(param_1 + 0x3d98) = (char)uVar13;
            }
            plVar11 = (long *)(param_1 + 0x68);
            *plVar11 = 0;
            lVar12 = *(long *)(param_1 + 0x18) * *(long *)(param_1 + 0x20);
            uVar13 = 0;
            if (lVar12 != 0) {
              uVar13 = *(undefined8 *)(param_1 + 0x10);
            }
            FUN_00666d38(&local_3ca0,*(undefined8 *)(param_1 + 0x110),iVar5,uVar13,lVar12,plVar11);
            FUN_00666c18(&local_a0,&local_3ca0);
            FUN_00666afc(&local_3ca0);
            iVar5 = (**(code **)(**(long **)(param_1 + 0x110) + 0x38))();
            uVar10 = (ulong)(uint)(iVar5 / 1000 + (iVar5 >> 0x1f)) -
                     ((long)iVar5 * 0x10624dd3 >> 0x3f);
            iVar5 = (int)uVar10;
            if ((iVar5 != *(int *)(param_1 + 0xf0)) || (*(int *)(param_1 + 0xf4) != 0)) {
              lVar12 = (long)*(char *)(param_1 + 0x10f);
              *(int *)(param_1 + 0xf0) = iVar5;
              *(undefined4 *)(param_1 + 0xf4) = 0;
              if (lVar12 < 0) {
                lVar16 = *(long *)(param_1 + 0xf8);
                lVar12 = *(long *)(param_1 + 0x100);
              }
              else {
                lVar16 = param_1 + 0xf8;
              }
              lVar12 = FUN_006660d0(lVar16,lVar12,1,100,0x32);
              if (lVar12 != 0) {
                FUN_00666568(lVar12,uVar10 & 0xffffffff);
              }
            }
            if ((*plVar11 == 0) && (((ulong)local_90 & 1) == 0)) {
              uVar8 = 0;
            }
            else {
              uVar1 = *(undefined1 *)(param_1 + 0x118);
              if (local_a0 == (undefined1 *)0x0) {
                *(int *)(param_1 + 0x3de8) = *(int *)(param_1 + 0x3de8) + 1;
              }
              else {
                uVar2 = local_90._4_4_;
                uVar10 = (ulong)local_90._4_4_;
                if (5 < local_90._4_4_) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x92992c);
                  (*pcVar3)();
                }
                lVar12 = param_1 + 0x3dd0;
                *(int *)(lVar12 + uVar10 * 4) =
                     *(int *)(param_1 + 0x3de8) + *(int *)(lVar12 + uVar10 * 4) + 1;
                *(undefined4 *)(param_1 + 0x3de8) = 0;
                iVar5 = *(int *)(lVar12 + uVar10 * 4);
                if (499 < iVar5) {
                  *(int *)(lVar12 + uVar10 * 4) = iVar5 + -500;
                  lVar12 = FUN_0066631c("WebRTC.Audio.Encoder.CodecType",0x1e,6);
                  if (lVar12 != 0) {
                    FUN_00666568(lVar12,uVar2);
                  }
                }
              }
              if ((*plVar11 == 0) && (((ulong)local_90 & 1) != 0)) {
                uVar8 = 0;
                uStack_98 = (undefined1 *)(ulong)CONCAT14(uVar1,(undefined4)uStack_98);
              }
              else {
                uVar8 = 1;
                if (local_90._1_1_ == '\0') {
                  uVar8 = 2;
                }
              }
              pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3da0));
              plVar11 = *(long **)(param_1 + 0x3dc8);
              if (plVar11 != (long *)0x0) {
                if (*(char *)(param_1 + 0x3d98) == '\x01') {
                  uVar13 = *(undefined8 *)(param_1 + 0x3d90);
                }
                else {
                  uVar13 = 0xffffffffffffffff;
                }
                (**(code **)(*plVar11 + 0x10))
                          (plVar11,uVar8,uStack_98._4_4_,(ulong)uStack_98 & 0xffffffff,
                           *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68),uVar13);
              }
              pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3da0));
              if (*(char *)(param_1 + 0x3d98) == '\x01') {
                *(undefined1 *)(param_1 + 0x3d98) = 0;
              }
              *(char *)(param_1 + 0x118) = (char)((ulong)uStack_98 >> 0x20);
              pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3dec));
              (**(code **)(**(long **)(param_1 + 0x110) + 0xd0))(&local_3ca0);
              *(undefined8 *)(param_1 + 0x3e1c) = uStack_3c98;
              *(char **)(param_1 + 0x3e14) = local_3ca0;
              *(undefined8 *)(param_1 + 0x3e2c) = uStack_3c88;
              *(undefined8 *)(param_1 + 0x3e24) = uStack_3c90;
              *(undefined8 *)(param_1 + 0x3e3c) = uStack_3c78;
              *(undefined8 *)(param_1 + 0x3e34) = local_3c80;
              *(undefined8 *)(param_1 + 0x3e44) = local_3c70;
              FUN_00666a74(&local_3ca0);
              uVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x38))();
              *(undefined4 *)(param_1 + 0x3e4c) = uVar8;
              pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3dec));
              uVar8 = *(undefined4 *)(param_1 + 0x68);
            }
          }
          FUN_00666afc(&local_a0);
          goto LAB_009292ec;
        }
        uVar10 = FUN_004249b0();
        if ((uVar10 & 1) == 0) {
          FUN_00623bb0(&DAT_0022681c,"../../modules/audio_coding/acm2/audio_coding_module.cc",0x1193
                       ,&local_3ca0," failed: No send codec is registered.");
        }
      }
      else {
        uVar10 = FUN_004249b0(iVar5);
        if ((uVar10 & 1) == 0) {
          pcVar14 = "Cannot Add 10 ms audio, invalid number of channels.";
          uVar13 = 0xbfb;
          goto LAB_009292e4;
        }
      }
    }
    else {
      uVar10 = FUN_004249b0(iVar5);
      if ((uVar10 & 1) == 0) {
        pcVar14 = "Cannot Add 10 ms audio, input frequency and length doesn\'t match";
        uVar13 = 0xbbb;
        goto LAB_009292e4;
      }
    }
  }
  else {
    uVar10 = FUN_004249b0(iVar5);
    if ((uVar10 & 1) == 0) {
      pcVar14 = "Cannot Add 10 ms audio, input frequency not valid";
      uVar13 = 0xb83;
      goto LAB_009292e4;
    }
  }
  uVar8 = 0xffffffff;
LAB_009292ec:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x40));
  return uVar8;
}


// ===== 0092992c  FUN_0092992c =====

undefined8 FUN_0092992c(long param_1,int param_2)

{
  ulong uVar1;
  char *local_30;
  undefined8 uStack_28;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x40));
  local_30 = "SetPacketLossRate";
  uStack_28 = 0x11;
  if (*(long **)(param_1 + 0x110) == (long *)0x0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_0022681c,"../../modules/audio_coding/acm2/audio_coding_module.cc",0x1193,
                   &local_30," failed: No send codec is registered.");
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x90))((float)param_2 / 100.0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x40));
  return 0;
}


// ===== 009299d8  FUN_009299d8 =====

int FUN_009299d8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x3dec));
  FUN_00666a7c(param_1,param_2 + 0x3e14);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x3dec));
  return iVar1;
}


// ===== 00929a28  FUN_00929a28 =====

undefined4 FUN_00929a28(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3dec));
  uVar1 = *(undefined4 *)(param_1 + 0x3e4c);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3dec));
  return uVar1;
}


// ===== 00929a70  FUN_00929a70 =====

void FUN_00929a70(long param_1,void *param_2)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  short *psVar5;
  
  uVar3 = FUN_0065901c();
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_00659108(param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = 0;
      psVar5 = (short *)(lVar4 + 2);
      do {
        psVar1 = psVar5 + -1;
        sVar2 = *psVar5;
        psVar5 = psVar5 + 2;
        *(short *)((long)param_2 + uVar3 * 2) = (short)((uint)((int)sVar2 + (int)*psVar1) >> 1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_1 + 0x18));
    }
  }
  else {
    __n = *(long *)(param_1 + 0x18) * 2;
    if (0 < (long)__n) {
      memset(param_2,0,__n);
      return;
    }
  }
  return;
}


// ===== 00929b08  FUN_00929b08 =====

void FUN_00929b08(long param_1,ulong param_2,long *param_3)

{
  short *psVar1;
  undefined2 uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(long *)(param_1 + 0x18) * param_2 - (param_3[1] - *param_3 >> 1) != 0) {
    FUN_0091c9d8(param_3);
  }
  uVar4 = FUN_0065901c(param_1);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar5 = FUN_00659108(param_1);
      uVar4 = *(ulong *)(param_1 + 0x28);
      if ((param_2 < 2) || (uVar4 != 1)) {
        if (uVar4 < param_2) {
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar4 = 0;
            lVar6 = 0;
            uVar8 = 0;
            do {
              if (*(long *)(param_1 + 0x28) == 0) {
                uVar11 = 0;
                uVar9 = uVar8;
                uVar10 = param_2;
                if (param_2 != 0) goto LAB_00929cd0;
              }
              else {
                uVar10 = 0;
                do {
                  if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar8 + uVar10) goto LAB_00929dd4;
                  *(undefined2 *)(*param_3 + uVar8 * 2 + uVar10 * 2) =
                       *(undefined2 *)(lVar5 + lVar6 * 2 + uVar10 * 2);
                  uVar10 = uVar10 + 1;
                  uVar11 = *(ulong *)(param_1 + 0x28);
                } while (uVar10 < uVar11);
                lVar6 = lVar6 + uVar10;
                uVar8 = uVar8 + uVar10;
                uVar10 = param_2 - uVar11;
                uVar9 = uVar8;
                if (uVar11 <= param_2 && uVar10 != 0) {
LAB_00929cd0:
                  uVar8 = (param_2 + uVar9) - uVar11;
                  do {
                    if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar9) goto LAB_00929dd4;
                    uVar10 = uVar10 - 1;
                    *(undefined2 *)(*param_3 + uVar9 * 2) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar10 != 0);
                }
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulong *)(param_1 + 0x18));
          }
        }
        else if (uVar4 == 2) {
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar4 = 0;
            psVar7 = (short *)(lVar5 + 2);
            do {
              if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar4) goto LAB_00929dd4;
              psVar1 = psVar7 + -1;
              sVar3 = *psVar7;
              psVar7 = psVar7 + 2;
              *(short *)(*param_3 + uVar4 * 2) = (short)((uint)((int)sVar3 + (int)*psVar1) >> 1);
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulong *)(param_1 + 0x18));
          }
        }
        else {
          uVar8 = *(ulong *)(param_1 + 0x18);
          if (uVar8 != 0) {
            uVar10 = 0;
            lVar6 = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              if (param_2 != 0) {
                uVar11 = param_2 + uVar9;
                uVar8 = param_2;
                do {
                  if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar9) goto LAB_00929dd4;
                  uVar8 = uVar8 - 1;
                  *(undefined2 *)(*param_3 + uVar9 * 2) = *(undefined2 *)(lVar5 + lVar6 * 2);
                  lVar6 = lVar6 + 1;
                  uVar9 = uVar9 + 1;
                } while (uVar8 != 0);
                uVar8 = *(ulong *)(param_1 + 0x18);
              }
              uVar10 = uVar10 + 1;
              lVar6 = (uVar4 - param_2) + lVar6;
              uVar9 = uVar11;
            } while (uVar10 < uVar8);
          }
        }
      }
      else if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = 0;
        uVar8 = 0;
        do {
          if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar8) {
LAB_00929dd4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          uVar2 = *(undefined2 *)(lVar5 + uVar4 * 2);
          *(undefined2 *)(*param_3 + uVar8 * 2) = uVar2;
          if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar8 + 1) goto LAB_00929dd4;
          *(undefined2 *)(*param_3 + (uVar8 + 1) * 2) = uVar2;
          uVar10 = uVar8 + 2;
          if (2 < param_2) {
            uVar10 = param_2 + uVar8;
            uVar8 = uVar8 + 2;
            lVar6 = param_2 - 2;
            do {
              if ((ulong)(param_3[1] - *param_3 >> 1) <= uVar8) goto LAB_00929dd4;
              lVar6 = lVar6 + -1;
              *(undefined2 *)(*param_3 + uVar8 * 2) = 0;
              uVar8 = uVar8 + 1;
            } while (lVar6 != 0);
          }
          uVar4 = uVar4 + 1;
          uVar8 = uVar10;
        } while (uVar4 < *(ulong *)(param_1 + 0x18));
      }
    }
  }
  else {
    __n = param_3[1] - *param_3;
    if (0 < (long)__n) {
      memset((void *)*param_3,0,__n);
      return;
    }
  }
  return;
}


// ===== 00929de8  FUN_00929de8 =====

void FUN_00929de8(long param_1,uint param_2,uint param_3)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  if ((param_2 < 6) && ((0x2fU >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
    *(int *)(param_1 + *(long *)(&DAT_00226828 + (ulong)param_2 * 8)) =
         *(int *)(param_1 + *(long *)(&DAT_00226828 + (ulong)param_2 * 8)) + 1;
  }
  return;
}


// ===== 00929e38  FUN_00929e38 =====

void FUN_00929e38(void)

{
  return;
}


// ===== 00929e40  FUN_00929e40  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 00929ff8  FUN_00929ff8  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 0092a164  FUN_0092a164 =====

void FUN_0092a164(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 == 1) && (1 < *(ulong *)(param_2 + 0x28))) {
    uVar2 = FUN_0065901c(param_2);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_00659108(param_2);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      uVar4 = FUN_006591a0(param_2);
      FUN_005eed34(uVar3,uVar5,uVar1,uVar4);
    }
    *(undefined8 *)(param_2 + 0x28) = 1;
  }
  else if ((param_1 == 2) && (*(ulong *)(param_2 + 0x28) == 4)) {
    FUN_00929e40(param_2);
    return;
  }
  return;
}


// ===== 0092a210  FUN_0092a210 =====

void FUN_0092a210(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  if ((*(long *)(param_2 + 0x28) == 1) && ((ulong)(*(long *)(param_2 + 0x18) * param_1) < 0x1e01)) {
    uVar3 = FUN_0065901c(param_2);
    if ((uVar3 & 1) == 0) {
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_006591e8(&local_40,param_2,*(undefined8 *)(param_2 + 0x18),param_1);
      uVar2 = *(int *)(param_2 + 0x18) - 1;
      if (-1 < (int)uVar2) {
        lVar4 = param_1 * (ulong)uVar2 * 2;
        uVar3 = (ulong)uVar2;
        do {
          lVar5 = lVar4;
          lVar6 = param_1;
          if (param_1 != 0) {
            do {
              lVar6 = lVar6 + -1;
              *(undefined2 *)(local_30 + lVar5) = *(undefined2 *)(local_30 + uVar3 * 2);
              lVar5 = lVar5 + 2;
            } while (lVar6 != 0);
          }
          lVar4 = lVar4 + param_1 * -2;
          bVar1 = 0 < (long)uVar3;
          uVar3 = uVar3 - 1;
        } while (bVar1);
      }
    }
    else {
      *(long *)(param_2 + 0x28) = param_1;
    }
  }
  return;
}


// ===== 0092a2e4  FUN_0092a2e4 =====

void FUN_0092a2e4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (((*(long *)(param_1 + 0x28) == 2) && (uVar2 = FUN_0065901c(), (uVar2 & 1) == 0)) &&
     (lVar3 = FUN_006591a0(param_1), (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) != 0)) {
    uVar2 = 0;
    do {
      lVar4 = uVar2 * 2;
      uVar2 = uVar2 + 2;
      uVar1 = *(uint *)(lVar3 + lVar4);
      *(uint *)(lVar3 + lVar4) = uVar1 >> 0x10 | uVar1 << 0x10;
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x18) << 1));
  }
  return;
}


// ===== 0092a358  FUN_0092a358 =====

void FUN_0092a358(long param_1,uint param_2,uint param_3)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
    return;
  }
  if (((param_2 & 1) != 0) && ((param_3 & 1) != 0)) {
    FUN_006592d8(param_1);
    return;
  }
  uVar2 = FUN_0065901c(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < 0x80) {
    if (uVar2 != 0) {
      fVar8 = 1.0 / (float)uVar2;
      uVar7 = uVar2;
      goto joined_r0x0092a3f8;
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0x80;
  }
  fVar8 = 0.0078125;
joined_r0x0092a3f8:
  if ((param_3 & 1) == 0) {
    fVar9 = 0.0;
    lVar6 = 0;
    uVar2 = uVar7;
  }
  else {
    fVar8 = -fVar8;
    fVar9 = 1.0;
    lVar6 = uVar2 - uVar7;
  }
  lVar3 = FUN_006591a0(param_1);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar5 = 0;
    uVar7 = lVar4 * lVar6;
    fVar1 = fVar9;
    do {
      for (; uVar7 < lVar4 * uVar2; uVar7 = uVar7 + lVar4) {
        *(short *)(lVar3 + uVar7 * 2) =
             (short)(int)((fVar8 + fVar1) * (float)(int)*(short *)(lVar3 + uVar7 * 2));
        fVar1 = fVar8 + fVar1;
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 2;
      uVar7 = lVar4 * lVar6;
      fVar1 = fVar9;
    } while (lVar5 != lVar4);
  }
  return;
}


// ===== 0092a48c  thunk_FUN_006592d8 =====

void thunk_FUN_006592d8(void)

{
  FUN_006592d8();
  return;
}


