// ===== 00401180  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00d19390);
  return;
}


// ===== 00401190  FUN_00401190 =====

void FUN_00401190(void)

{
  return;
}


// ===== 00401198  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00d0f340();
  return;
}


// ===== 004011a0  FUN_004011a0 =====

void FUN_004011a0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 004011b4  FUN_004011b4 =====

void FUN_004011b4(undefined8 param_1)

{
  __cxa_atexit(FUN_004011a0,param_1,&PTR_LOOP_00d19390);
  return;
}


// ===== 004011d4  FUN_004011d4 =====

void FUN_004011d4(void)

{
  __register_atfork();
  return;
}


// ===== 004011e4  FUN_004011e4 =====

void FUN_004011e4(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_004a22d8();
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  }
  puVar1 = (undefined8 *)operator_new(0x80);
  puVar1[9] = 0;
  puVar1[0xb] = param_3;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  lVar2 = *param_2;
  *puVar1 = &PTR_FUN_00d193a8;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *(undefined8 **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00401278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x70))(param_2,puVar1);
  return;
}


// ===== 0040127c  FUN_0040127c =====

void FUN_0040127c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  local_40 = param_2;
  if (param_2 != 0) {
    lVar1 = lVar3 + 8;
    FUN_005467a4(lVar1);
    FUN_00401ae0(lVar3 + 0x30,&local_40,&local_40);
    FUN_005467c8(lVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004012f4  FUN_004012f4 =====

void FUN_004012f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar1 = lVar3 + 8;
  local_40 = param_2;
  FUN_005467a4(lVar1);
  FUN_00401f14(lVar3 + 0x30,&local_40);
  FUN_005467c8(lVar1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00401364  FUN_00401364 =====

void FUN_00401364(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_004a22dc(param_1);
  return;
}


// ===== 0040139c  FUN_0040139c =====

void FUN_0040139c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_724;
  undefined1 auStack_720 [1768];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
    lVar2 = FUN_005183d8();
    if (*(ulong *)(lVar3 + 0x20) <= (ulong)((lVar2 - *(long *)(lVar3 + 0x18)) / 1000000) / 10) {
      *(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar3 + 0x20) + 1;
      memset(auStack_720,0,0x6e4);
      local_724 = 0;
      (**(code **)**(undefined8 **)(lVar3 + 0x30))
                (*(undefined8 **)(lVar3 + 0x30),auStack_720,0x1b9,4,2,0xac44,0,0,0,0,&local_724);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00401488  FUN_00401488 =====

void FUN_00401488(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    FUN_005156ac(&local_50,param_2,param_1);
    lVar2 = *(long *)(param_1 + 8);
    if (&local_50 == (undefined ***)param_1) {
      local_50 = &PTR_FUN_00d193e8;
      if (lVar2 != 0) {
        FUN_005ce374(lVar2,PTR_free_00d51ac0);
      }
    }
    else {
      if (lVar2 != 0) {
        FUN_005ce374(lVar2,PTR_free_00d51ac0);
      }
      *(undefined8 *)(param_1 + 8) = local_48;
      *(undefined4 *)(param_1 + 0x10) = local_40;
    }
    uVar3 = FUN_005183d8();
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_00515708(param_1,FUN_0040139c,5,5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00401558  FUN_00401558 =====

void FUN_00401558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d193e8;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
    param_1[1] = 0;
  }
  return;
}


// ===== 00401598  FUN_00401598 =====

void FUN_00401598(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00515738();
    if (*(long *)(param_1 + 8) != 0) {
      FUN_005ce374(*(long *)(param_1 + 8),PTR_free_00d51ac0);
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}


// ===== 004015d8  FUN_004015d8 =====

void FUN_004015d8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x78) = param_2;
  return;
}


// ===== 004015e4  FUN_004015e4 =====

void FUN_004015e4(long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 byte param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_005467a4(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    do {
      uVar4 = (**(code **)(*(long *)plVar7[2] + 0x10))();
      if ((uVar4 & 1) != 0) {
        (**(code **)(*(long *)plVar7[2] + 0x18))((long *)plVar7[2],param_2,param_3,param_6,param_5);
        bVar3 = true;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  FUN_005467c8(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x78);
  if ((!bVar3) && (iVar5 != 1)) {
    param_2 = *(long *)(param_1 + 0x60);
    uVar4 = param_4 * param_3 * param_5;
    uVar6 = *(long *)(param_1 + 0x68) - param_2;
    lVar1 = uVar4 - uVar6;
    if (uVar6 <= uVar4 && lVar1 != 0) {
      local_6c[0] = 0;
      FUN_00401890((long *)(param_1 + 0x60),lVar1,local_6c);
      param_2 = *(long *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x78);
    }
  }
  FUN_00459fa8(*(undefined8 *)(param_1 + 0x58),iVar5,param_2,param_3,param_4,param_5,param_6,param_7
               ,param_8,param_9,param_10 & 1,param_11);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00401768  FUN_00401768 =====

void FUN_00401768(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00401788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}


// ===== 0040178c  FUN_0040178c =====

void FUN_0040178c(long param_1)

{
  FUN_0045a56c(*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 0040179c  FUN_0040179c =====

void FUN_0040179c(long param_1)

{
  FUN_0045a968(*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 004017a4  FUN_004017a4 =====

void FUN_004017a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_00d193a8;
  FUN_005467a4(puVar1);
  if (param_1[9] != 0) {
    puVar2 = (undefined8 *)param_1[8];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar5;
    }
    lVar3 = param_1[7];
    param_1[8] = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(param_1[6] + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    param_1[9] = 0;
  }
  FUN_005467c8(puVar1);
  pvVar5 = (void *)param_1[0xc];
  if (pvVar5 != (void *)0x0) {
    param_1[0xd] = pvVar5;
    operator_delete(pvVar5);
  }
  puVar2 = (undefined8 *)param_1[8];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar5;
  }
  pvVar5 = (void *)param_1[6];
  param_1[6] = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  FUN_00546ab0(puVar1);
  return;
}


// ===== 0040186c  FUN_0040186c =====

void FUN_0040186c(void *param_1)

{
  FUN_004017a4();
  operator_delete(param_1);
  return;
}


// ===== 00401890  FUN_00401890 =====

void FUN_00401890(long *param_1,ulong param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *__src;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  
  puVar9 = (undefined1 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar9) < param_2) {
    lVar13 = *param_1;
    lVar12 = (long)puVar9 - lVar13;
    uVar1 = lVar12 + param_2;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = param_1[2] - lVar13;
    uVar6 = uVar4 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = operator_new(uVar6);
    }
    uVar7 = param_2 - 1;
    uVar4 = lVar13 - (long)((long)pvVar3 + (long)puVar9);
    puVar11 = (undefined1 *)((long)pvVar3 + lVar12);
    uVar1 = uVar4;
    if (uVar7 <= uVar4) {
      uVar1 = uVar7;
    }
    uVar1 = uVar1 + 1;
    puVar10 = puVar11;
    if (0x20 < uVar1) {
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((param_3 + 1 <= puVar11) ||
         ((undefined1 *)((long)pvVar3 + (long)(puVar9 + (uVar4 - lVar13) + 1)) <= param_3)) {
        uVar4 = 0x20;
        if ((uVar1 & 0x1f) != 0) {
          uVar4 = uVar1 & 0x1f;
        }
        uVar2 = *param_3;
        lVar13 = uVar1 - uVar4;
        puVar10 = puVar11 + lVar13;
        puVar8 = (undefined8 *)((long)pvVar3 + lVar12 + 0x10);
        do {
          puVar8[-1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
          puVar8[-2] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
          puVar8[1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
          *puVar8 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
          puVar8 = puVar8 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
    }
    do {
      if (puVar10 == (undefined1 *)0x0) {
LAB_00401aa8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar5 = puVar10 + 1;
      *puVar10 = *param_3;
      puVar10 = puVar5;
    } while (puVar5 != puVar11 + param_2);
    __src = (void *)*param_1;
    memmove(puVar11 + ((long)__src - (long)puVar9),__src,(long)puVar9 - (long)__src);
    *param_1 = (long)(puVar11 + ((long)__src - (long)puVar9));
    param_1[1] = (long)(puVar11 + param_2);
    param_1[2] = (long)pvVar3 + uVar6;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar11 = puVar9;
    if (param_2 != 0) {
      uVar6 = param_2 - 1;
      puVar11 = puVar9 + param_2;
      uVar1 = uVar6;
      if ((ulong)-(long)puVar9 < uVar6) {
        uVar1 = -(long)puVar9;
      }
      uVar1 = uVar1 + 1;
      if (0x20 < uVar1) {
        if ((ulong)-(long)puVar9 < uVar6) {
          uVar6 = -(long)puVar9;
        }
        if ((param_3 + 1 <= puVar9) || (puVar9 + uVar6 + 1 <= param_3)) {
          uVar6 = 0x20;
          if ((uVar1 & 0x1f) != 0) {
            uVar6 = uVar1 & 0x1f;
          }
          uVar2 = *param_3;
          lVar12 = uVar1 - uVar6;
          puVar8 = (undefined8 *)(puVar9 + 0x10);
          puVar9 = puVar9 + lVar12;
          do {
            puVar8[-1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            puVar8[-2] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            puVar8[1] = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            *puVar8 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,
                                                  CONCAT12(uVar2,CONCAT11(uVar2,uVar2)))))));
            puVar8 = puVar8 + 4;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != 0);
        }
      }
      do {
        if (puVar9 == (undefined1 *)0x0) goto LAB_00401aa8;
        puVar10 = puVar9 + 1;
        *puVar9 = *param_3;
        puVar9 = puVar10;
      } while (puVar10 != puVar11);
    }
    param_1[1] = (long)puVar11;
  }
  return;
}


// ===== 00401ad4  FUN_00401ad4 =====

void FUN_00401ad4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00401ae0  FUN_00401ae0 =====

undefined1  [16] FUN_00401ae0(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00401bd8;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_00401bd8;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_00401da0;
    }
  }
LAB_00401bd8:
  plVar9 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  lVar5 = *param_3;
  *plVar9 = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar5;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_00401cec:
      FUN_00401db8(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00401cd8:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_00401cd8;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_00401cec;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_00401d8c;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_00401d8c:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00401da0:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 00401db8  FUN_00401db8 =====

void FUN_00401db8(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_2 - 1;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_2 - 1;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*param_1 + uVar8 * 8) == 0) {
              *(long **)(*param_1 + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*param_1 + uVar8 * 8);
              **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00401f14  FUN_00401f14 =====

void FUN_00401f14(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_00402058(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_00402014;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_00402014:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 00402058  FUN_00402058 =====

void FUN_00402058(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00402124;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00402124;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00402124:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 0040218c  FUN_0040218c =====

void FUN_0040218c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d193e8;
  if (param_1[1] != 0) {
    FUN_005ce374(param_1[1],PTR_free_00d51ac0);
  }
  operator_delete(param_1);
  return;
}


// ===== 004021cc  FUN_004021cc =====

void * FUN_004021cc(int param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 == 2) {
    pvVar4 = operator_new(0x20);
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00402360(pvVar4,param_2 + 0x70,param_3,param_4);
  }
  else if (param_1 == 1) {
    pvVar4 = operator_new(0x1da8);
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_0040250c(pvVar4,param_2,param_3,param_4);
  }
  else {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/audio_mode.cpp",0xa2,
                   "Unknown audio input mode ",param_1,", enabling neither VAD nor PTT");
    }
    pvVar4 = (void *)0x0;
  }
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      FUN_005466cc(param_4);
    }
  }
  return pvVar4;
}


// ===== 004022fc  FUN_004022fc =====

void FUN_004022fc(void)

{
  FUN_00623b7c(2);
  return;
}


// ===== 00402304  FUN_00402304 =====

bool FUN_00402304(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048a080(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  return iVar1 == 1;
}


// ===== 0040232c  FUN_0040232c =====

bool FUN_0040232c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048a080(*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x18) + 500);
  return iVar1 == 1;
}


// ===== 00402358  FUN_00402358 =====

void FUN_00402358(long param_1)

{
  FUN_0048a070(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00402360  FUN_00402360 =====

void FUN_00402360(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = &PTR_FUN_00d19408;
  if ((char)uVar1 != '\0') {
    param_1[3] = (ulong)*param_2;
  }
  return;
}


// ===== 0040238c  FUN_0040238c =====

void FUN_0040238c(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x78) != '\0') && (*(char *)(param_2 + 0x74) != '\0')) {
    *(ulong *)(param_1 + 0x18) = (ulong)*(uint *)(param_2 + 0x70);
  }
  return;
}


// ===== 004023ac  FUN_004023ac =====

void FUN_004023ac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


// ===== 004023b8  FUN_004023b8 =====

void FUN_004023b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0048a0ec(*(undefined8 *)(param_1 + 8));
  FUN_004df1ec(auStack_50,uVar2);
  local_58 = "pttActiveCount";
  uVar3 = FUN_004e148c(param_2,&local_58);
  FUN_004dfa04(uVar3,auStack_50);
  FUN_004df880(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402438  FUN_00402438 =====

void FUN_00402438(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d19408;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 0040249c  FUN_0040249c =====

void FUN_0040249c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d19408;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00402500  FUN_00402500 =====

void FUN_00402500(void)

{
  return;
}


// ===== 00402504  FUN_00402504 =====

void FUN_00402504(void)

{
  return;
}


// ===== 00402508  FUN_00402508 =====

void FUN_00402508(void)

{
  return;
}


// ===== 0040250c  FUN_0040250c =====

void FUN_0040250c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  *param_1 = &PTR_FUN_00d19470;
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  param_1[3] = param_2[2];
  pcVar6 = *(code **)param_2[3];
  param_1[4] = (undefined8 *)param_2[3];
  if (pcVar6 != (code *)0x0) {
    uVar5 = (*pcVar6)(*param_2);
    param_1[1] = uVar5;
  }
  uVar5 = param_2[5];
  uVar2 = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 7);
  param_1[6] = uVar5;
  uVar3 = *(undefined1 *)((long)param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 7) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar2 = *(undefined1 *)((long)param_2 + 0x44);
  *(undefined1 *)((long)param_1 + 0x44) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 9);
  uVar3 = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 9) = uVar7;
  *(undefined1 *)((long)param_1 + 0x4c) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 10) = uVar1;
  uVar4 = *(undefined1 *)((long)param_2 + 0x51);
  *(undefined1 *)((long)param_1 + 0x54) = uVar3;
  uVar3 = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  uVar1 = *(undefined4 *)((long)param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0x59) = uVar4;
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)((long)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((long)param_1 + 100) = uVar1;
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar7;
  FUN_0049279c(param_1 + 0xe,param_2);
  param_1[0x3af] = param_3;
  uVar1 = 0xc2480000;
  if (*(int *)(param_1 + 10) < 0) {
    uVar1 = *(undefined4 *)(param_1 + 9);
  }
  param_1[0x3b0] = param_4;
  *(undefined4 *)(param_1 + 0x3b1) = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b3] = 0;
  *(undefined4 *)(param_1 + 0x3b1) = uVar1;
  param_1[0x3b3] = (long)*(int *)(param_1 + 8) * 10000000;
  if (*(char *)(param_1 + 0xd) != '\0') {
    param_1[0x3b4] = (ulong)*(uint *)((long)param_1 + 100);
  }
  return;
}


// ===== 00402670  FUN_00402670 =====

void FUN_00402670(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 0x68) != '\0') {
    FUN_00489c90(param_1 + 8);
    FUN_004927c8(param_1 + 0x70,param_2);
    uVar1 = 0xc2480000;
    if (*(int *)(param_1 + 0x50) < 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x1d88) = uVar1;
    *(long *)(param_1 + 0x1d98) = (long)*(int *)(param_1 + 0x40) * 10000000;
    if (*(char *)(param_1 + 0x68) != '\0') {
      *(ulong *)(param_1 + 0x1da0) = (ulong)*(uint *)(param_1 + 100);
    }
  }
  return;
}


// ===== 00402700  FUN_00402700 =====

void FUN_00402700(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_00402980;
    param_2[3] = &DAT_001f1910;
  }
  FUN_00492978(param_1 + 0x70,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00402790  FUN_00402790 =====

undefined8 FUN_00402790(void)

{
  return 1;
}


// ===== 00402798  FUN_00402798 =====

void FUN_00402798(long param_1)

{
  FUN_0048a070(*(undefined8 *)(param_1 + 0x1d78));
  return;
}


// ===== 004027a0  FUN_004027a0 =====

void FUN_004027a0(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00492a00(param_1 + 0x70);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x1d88);
  if (*(float *)(param_1 + 0x104) < fVar2 == (NAN(*(float *)(param_1 + 0x104)) || NAN(fVar2))) {
    uVar1 = FUN_005183d8();
    *(undefined8 *)(param_1 + 0x1d90) = uVar1;
  }
  return;
}


// ===== 004027f0  FUN_004027f0 =====

ulong FUN_004027f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0048a080(*(undefined8 *)(param_1 + 0x1d78),*(undefined8 *)(param_1 + 0x1da0));
  if ((int)uVar1 != 1) {
    if (((int)uVar1 != 2) && (lVar3 = *(long *)(param_1 + 0x1d90), lVar3 != 0)) {
      lVar2 = FUN_005183d8();
      return (ulong)((ulong)(lVar2 - lVar3) < *(ulong *)(param_1 + 0x1d98));
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00402864  FUN_00402864 =====

void FUN_00402864(long param_1)

{
  FUN_00492dac(param_1 + 0x70);
  return;
}


// ===== 0040286c  FUN_0040286c =====

void FUN_0040286c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[0x3b0];
  *param_1 = &PTR_FUN_00d19470;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_004928ec(param_1 + 0xe);
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004028e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 004028f0  FUN_004028f0 =====

void FUN_004028f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[0x3b0];
  *param_1 = &PTR_FUN_00d19470;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_004928ec(param_1 + 0xe);
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00402970  FUN_00402970 =====

void FUN_00402970(void)

{
  return;
}


// ===== 00402974  FUN_00402974 =====

void FUN_00402974(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040297c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


// ===== 00402980  FUN_00402980 =====

void FUN_00402980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040298c  FUN_0040298c =====

void FUN_0040298c(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00402998  FUN_00402998 =====

void FUN_00402998(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_00d194d8;
  param_1[1] = 0;
  uVar3 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar3;
  param_1[5] = param_2[2];
  lVar2 = *(long *)(param_2[3] + 8);
  param_1[6] = param_2[3];
  if (lVar2 != 0) {
    param_2[2] = FUN_00402ab4;
    param_2[3] = &DAT_001f1910;
  }
  uVar1 = FUN_0044ea04(param_3);
  FUN_00623970(param_1,uVar1);
  return;
}


// ===== 00402a04  FUN_00402a04 =====

void FUN_00402a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d194d8;
  FUN_00623a50();
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00402a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[6] + 8))(param_1[3]);
    return;
  }
  return;
}


// ===== 00402a4c  FUN_00402a4c =====

void FUN_00402a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d194d8;
  FUN_00623a50();
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00402a90  FUN_00402a90 =====

void FUN_00402a90(long param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00402aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1 + 0x18,param_2,param_3 + 1);
  return;
}


// ===== 00402aa4  FUN_00402aa4 =====

void FUN_00402aa4(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00402ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,1);
  return;
}


// ===== 00402ab4  FUN_00402ab4 =====

void FUN_00402ab4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00402ac0  Discord::Discord =====

/* WARNING: Removing unreachable block (ram,0x00402ee8) */
/* WARNING: Removing unreachable block (ram,0x00402f38) */
/* Discord::Discord(DiscordConfig) */

void __thiscall Discord::Discord(Discord *this,undefined8 *param_2)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  void *pvVar24;
  long *plVar25;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 local_169;
  undefined7 uStack_168;
  undefined7 local_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  code *local_150;
  undefined *local_148;
  Discord *local_140;
  undefined8 uStack_138;
  code *local_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 local_120;
  char cStack_119;
  void *local_118;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  char cStack_101;
  undefined8 local_100;
  undefined1 local_f8;
  void *local_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined1 local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar14 = operator_new(0x20);
  FUN_00476b1c();
  *(void **)(this + 0x10) = pvVar14;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  pvVar14 = operator_new(0x80);
  local_130 = FUN_0040df64;
  uStack_128 = 0x1f1910;
  uStack_121 = 0;
  local_160 = SUB87(this,0);
  uStack_159 = (undefined1)((ulong)this >> 0x38);
  local_150 = FUN_0040df70;
  local_148 = &DAT_001f4e50;
  FUN_00513ef0(pvVar14,"Voice",&local_140,&local_160);
  if (*(code **)(local_148 + 8) != (code *)0x0) {
    (**(code **)(local_148 + 8))(CONCAT17(uStack_159,local_160));
  }
  pcVar17 = *(code **)(CONCAT17(uStack_121,uStack_128) + 8);
  if (pcVar17 != (code *)0x0) {
    (*pcVar17)(local_140);
  }
  puVar15 = (undefined8 *)operator_new(0x20);
  plVar25 = *(long **)(this + 8);
  puVar15[2] = 0;
  puVar15[3] = pvVar14;
  *(void **)this = pvVar14;
  *(undefined8 **)(this + 8) = puVar15;
  *puVar15 = &PTR_FUN_00d19530;
  puVar15[1] = 0;
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 1;
    do {
      lVar19 = *plVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      FUN_005466cc(plVar25);
    }
  }
  pcVar17 = (code *)param_2[1];
  uVar23 = param_2[0xf];
  uVar21 = *param_2;
  local_160 = (undefined7)param_2[2];
  uStack_159 = (undefined1)*(undefined8 *)((long)param_2 + 0x17);
  uStack_158 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x17) >> 8);
  lVar19 = *(long *)this;
  pvVar14 = (void *)param_2[4];
  uVar18 = param_2[5];
  uStack_168 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x2f) >> 8);
  uVar20 = param_2[7];
  uVar6 = *(undefined1 *)(param_2 + 0xc);
  local_169 = (undefined1)((ulong)uVar18 >> 0x38);
  uVar7 = *(undefined1 *)(param_2 + 8);
  pvVar2 = (void *)param_2[0xd];
  pvVar24 = (void *)param_2[0xe];
  param_2[1] = 0;
  param_2[2] = 0;
  cVar11 = *(char *)((long)param_2 + 0x1f);
  pvVar3 = (void *)param_2[9];
  uVar4 = param_2[10];
  param_2[3] = 0;
  param_2[4] = 0;
  cVar9 = *(char *)((long)param_2 + 0x37);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  cVar10 = *(char *)((long)param_2 + 0x5f);
  param_2[0xb] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined2 *)((long)param_2 + 0x84);
  uStack_178 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x57) >> 8);
  lVar22 = *(long *)(lVar19 + 0x58);
  local_179 = (undefined1)((ulong)uVar4 >> 0x38);
  if (lVar22 == 0) {
    if (pvVar2 != (void *)0x0) {
      for (; pvVar24 != pvVar2; pvVar24 = (void *)((long)pvVar24 + -0x18)) {
      }
      operator_delete(pvVar2);
    }
    if (cVar10 < '\0') {
      operator_delete(pvVar3);
    }
    if (cVar9 < '\0') {
      operator_delete(pvVar14);
    }
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x78);
    if (lVar19 == 0) {
      puVar15 = (undefined8 *)operator_new(0x98);
      puVar15[4] = CONCAT17(uStack_159,local_160);
      *puVar15 = &PTR_FUN_00d19590;
      puVar15[1] = this;
      puVar15[2] = uVar21;
      puVar15[3] = pcVar17;
      puVar15[6] = pvVar14;
      puVar15[7] = uVar18;
      uVar18 = param_2[7];
      *(ulong *)((long)puVar15 + 0x27) = CONCAT71(uStack_158,uStack_159);
      *(ulong *)((long)puVar15 + 0x67) = CONCAT71(uStack_178,local_179);
      puVar15[9] = uVar18;
      *(ulong *)((long)puVar15 + 0x3f) = CONCAT71(uStack_168,local_169);
      uVar7 = *(undefined1 *)(param_2 + 8);
      *(char *)((long)puVar15 + 0x2f) = cVar11;
      puVar15[0xb] = pvVar3;
      puVar15[0xc] = uVar4;
      *(undefined1 *)(puVar15 + 10) = uVar7;
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      *(char *)((long)puVar15 + 0x47) = cVar9;
      *(char *)((long)puVar15 + 0x6f) = cVar10;
      puVar15[0xf] = pvVar2;
      puVar15[0x10] = pvVar24;
      puVar15[0x11] = uVar23;
      *(undefined1 *)(puVar15 + 0xe) = uVar6;
      uVar8 = *(undefined2 *)((long)param_2 + 0x84);
      *(undefined4 *)(puVar15 + 0x12) = uVar5;
      *(undefined2 *)((long)puVar15 + 0x94) = uVar8;
      FUN_00512cf8(lVar22,puVar15);
      goto LAB_00403058;
    }
    uVar16 = FUN_005ce36c();
    uStack_128 = local_160;
    uStack_121 = uStack_159;
    local_120 = uStack_158;
    uStack_110 = (undefined7)uVar18;
    uStack_109 = local_169;
    uStack_108 = uStack_168;
    uStack_e8 = (undefined7)uVar4;
    local_a0 = CONCAT17(7,(undefined7)local_a0);
    uStack_e1 = local_179;
    uStack_e0 = uStack_178;
    local_140 = this;
    uStack_138 = uVar21;
    local_130 = pcVar17;
    cStack_119 = cVar11;
    local_118 = pvVar14;
    cStack_101 = cVar9;
    local_100 = uVar20;
    local_f8 = uVar7;
    local_f0 = pvVar3;
    cStack_d9 = cVar10;
    local_d8 = uVar6;
    local_d0 = pvVar2;
    local_c8 = pvVar24;
    local_c0 = uVar23;
    local_b8 = uVar5;
    local_b4 = uVar8;
    if ((&local_b0 < "iscord") && ("Discord" < (char *)((long)&local_b0 + 7U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_b0 = (void *)0x64726f63736944;
    local_88 = FUN_0040e7ec;
    local_80 = &DAT_001f4e70;
    local_98 = lVar19;
    local_78 = uVar16;
    puVar15 = (undefined8 *)operator_new(0xd8);
    puVar15[0xf] = pvVar2;
    puVar15[0x10] = pvVar24;
    *puVar15 = &PTR_FUN_00d19568;
    puVar15[1] = this;
    puVar15[4] = CONCAT17(uStack_121,uStack_128);
    puVar15[3] = local_130;
    puVar15[2] = uVar21;
    puVar15[5] = CONCAT17(cStack_119,local_120);
    puVar15[7] = CONCAT17(uStack_109,uStack_110);
    puVar15[6] = local_118;
    puVar15[0x1a] = uVar16;
    *(undefined1 *)(puVar15 + 10) = uVar7;
    puVar15[8] = CONCAT17(cStack_101,uStack_108);
    puVar15[9] = uVar20;
    puVar15[0xc] = CONCAT17(uStack_e1,uStack_e8);
    puVar15[0xb] = local_f0;
    puVar15[0xd] = CONCAT17(cStack_d9,uStack_e0);
    *(undefined4 *)(puVar15 + 0x12) = uVar5;
    puVar15[0x14] = uStack_a8;
    puVar15[0x13] = local_b0;
    *(undefined1 *)(puVar15 + 0xe) = uVar6;
    puVar15[0x15] = local_a0;
    puVar15[0x17] = uStack_90;
    puVar15[0x16] = local_98;
    puVar15[0x11] = uVar23;
    local_130 = (code *)0x0;
    uStack_128 = 0;
    uStack_121 = 0;
    local_120 = 0;
    cStack_119 = '\0';
    *(undefined2 *)((long)puVar15 + 0x94) = uVar8;
    local_118 = (void *)0x0;
    uStack_110 = 0;
    uStack_109 = 0;
    uStack_108 = 0;
    cStack_101 = '\0';
    local_f0 = (void *)0x0;
    uStack_e8 = 0;
    uStack_e1 = 0;
    puVar15[0x18] = FUN_0040e7ec;
    puVar15[0x19] = &DAT_001f4e70;
    uStack_e0 = 0;
    cStack_d9 = '\0';
    local_d0 = (void *)0x0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    FUN_00512cf8(lVar22,puVar15);
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98);
    }
    if (local_a0 < 0) {
      operator_delete(local_b0);
    }
    if (local_d0 != (void *)0x0) {
      for (; local_c8 != local_d0; local_c8 = (void *)((long)local_c8 + -0x18)) {
      }
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
    pcVar17 = local_130;
    cVar11 = cStack_119;
    if (cStack_101 < '\0') {
      operator_delete(local_118);
      pcVar17 = local_130;
      cVar11 = cStack_119;
    }
  }
  if (cVar11 < '\0') {
    operator_delete(pcVar17);
  }
LAB_00403058:
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004030b4  Discord::~Discord =====

/* Discord::~Discord() */

void __thiscall Discord::~Discord(Discord *this)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  FUN_005144ec(*(undefined8 *)this);
  plVar6 = *(long **)(this + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  pvVar3 = *(void **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  FUN_00546ab0(this + 0x40);
  plVar6 = *(long **)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)(this + 0x30);
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      } while (plVar7 != plVar6);
      plVar4 = *(long **)(this + 0x28);
    }
    *(long **)(this + 0x30) = plVar6;
    operator_delete(plVar4);
  }
  pvVar3 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0047808c(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar3 != (void *)0x0) {
    plVar6 = *(long **)((long)pvVar3 + 8);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    operator_delete(pvVar3);
  }
  lVar5 = *(long *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar5 != 0) {
    FUN_0040ded0();
  }
  plVar6 = *(long **)(this + 8);
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 00403240  Discord::Connect =====

/* Discord::Connect(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, discord::BridgeConnectionOptions const&,
   std::__Cr::function<void (discord::ConnectionInfo const&, std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&)>, std::__Cr::function<void
   (unsigned int)>, std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, short const*, unsigned long,
   int, unsigned long, unsigned int, bool&, float)>, std::__Cr::function<void (short*, unsigned
   long, int, unsigned long)>) */

undefined1  [16] __thiscall
Discord::Connect(Discord *this,undefined8 *param_1,undefined8 param_2,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 ***__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 ***__dest;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 **local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  long *local_190;
  undefined1 auStack_188 [152];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  plVar7 = (long *)operator_new(0x88);
  plVar7[0xd] = 0;
  *plVar7 = (long)&PTR_FUN_00d195b8;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar9 = plVar7 + 3;
  plVar7[4] = 0;
  *plVar9 = 0;
  plVar7[0x10] = (long)this;
  *(undefined4 *)(plVar7 + 0xe) = 8;
  plVar10 = plVar7 + 1;
  plVar7[2] = 0;
  *plVar10 = 0;
  local_190 = plVar7;
  FUN_005467a4(plVar9);
  if ((*(uint *)(plVar7 + 0xe) >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = *plVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(uint *)(plVar7 + 0xe) = *(uint *)(plVar7 + 0xe) | 2;
  FUN_005467c8(plVar9);
  do {
    lVar8 = *plVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  uVar2 = *(undefined8 *)this;
  lVar8 = *(long *)(this + 8);
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_1;
    uVar3 = param_1[1];
    if (uVar3 < 0x17) {
      __dest = &local_1b0;
      local_1a0 = CONCAT17((char)uVar3,(undefined7)local_1a0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 ***)operator_new(uVar1);
      local_1a0 = uVar1 | 0x8000000000000000;
      local_1b0 = __dest;
      uStack_1a8 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_1a8 = param_1[1];
    local_1b0 = (undefined8 **)*param_1;
    local_1a0 = param_1[2];
  }
  FUN_004035a4(auStack_188,param_2);
  local_80 = param_4[2];
  local_78 = param_4[3];
  uStack_88 = param_4[1];
  local_90 = *param_4;
  if (*(long *)(local_78 + 8) != 0) {
    param_4[2] = FUN_0040ea94;
    param_4[3] = &DAT_001f1910;
  }
  local_a0 = param_5[2];
  local_98 = param_5[3];
  uStack_a8 = param_5[1];
  local_b0 = *param_5;
  if (*(long *)(local_98 + 8) != 0) {
    param_5[2] = FUN_0040eaa0;
    param_5[3] = &DAT_001f1910;
  }
  local_c0 = param_6[2];
  local_b8 = param_6[3];
  uStack_c8 = param_6[1];
  local_d0 = *param_6;
  if (*(long *)(local_b8 + 8) != 0) {
    param_6[2] = FUN_0040eaac;
    param_6[3] = &DAT_001f1910;
  }
  local_e0 = param_7[2];
  local_d8 = param_7[3];
  uStack_e8 = param_7[1];
  local_f0 = *param_7;
  if (*(long *)(local_d8 + 8) != 0) {
    param_7[2] = FUN_0040eab8;
    param_7[3] = &DAT_001f1910;
  }
  auVar11 = FUN_00498b44(uVar2,lVar8,&local_1b0,auStack_188,&local_90,&local_190,&local_b0,&local_d0
                         ,&local_f0);
  if (*(code **)(local_d8 + 8) != (code *)0x0) {
    (**(code **)(local_d8 + 8))(local_f0);
  }
  if (*(code **)(local_b8 + 8) != (code *)0x0) {
    (**(code **)(local_b8 + 8))(local_d0);
  }
  if (*(code **)(local_98 + 8) != (code *)0x0) {
    (**(code **)(local_98 + 8))(local_b0);
  }
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90);
  }
  FUN_004037cc(auStack_188);
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if (local_190 != (long *)0x0) {
    plVar7 = local_190 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_190 + 0x10))();
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004035a4  FUN_004035a4 =====

void FUN_004035a4(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 2);
    uVar3 = *(ulong *)(param_2 + 4);
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 2) = puVar5;
      *(ulong *)(param_1 + 4) = uVar3;
      *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar5 + uVar3 + 1)))
    goto LAB_00403798;
    memmove(puVar5,puVar2,uVar3 + 1);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *puVar5 = uVar6;
  }
  uVar4 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined2 *)(param_1 + 8) = uVar4;
  FUN_0040d7e4(param_1 + 10,param_2 + 10);
  FUN_0040d960(param_1 + 0x12,param_2 + 0x12);
  puVar5 = (undefined8 *)(param_1 + 0x1a);
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 0x1a);
    uVar3 = *(ulong *)(param_2 + 0x1c);
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x7f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 0x1a) = puVar5;
      *(ulong *)(param_1 + 0x1c) = uVar3;
      *(ulong *)(param_1 + 0x1e) = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar5 + uVar3 + 1)))
    goto LAB_00403798;
    memmove(puVar5,puVar2,uVar3 + 1);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x1c);
    uVar6 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
    *puVar5 = uVar6;
  }
  puVar5 = (undefined8 *)(param_1 + 0x20);
  if (-1 < *(char *)((long)param_2 + 0x97)) {
    uVar7 = *(undefined8 *)(param_2 + 0x22);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar7;
    *puVar5 = uVar6;
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = *(ulong *)(param_2 + 0x22);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x97) = (char)uVar3;
  }
  else {
    if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar3 | 0xf) + 1;
    puVar5 = (undefined8 *)operator_new(uVar1);
    *(undefined8 **)(param_1 + 0x20) = puVar5;
    *(ulong *)(param_1 + 0x22) = uVar3;
    *(ulong *)(param_1 + 0x24) = uVar1 | 0x8000000000000000;
  }
  if ((puVar2 < puVar5) || ((undefined8 *)((long)puVar5 + uVar3 + 1) <= puVar2)) {
    memmove(puVar5,puVar2,uVar3 + 1);
    return;
  }
LAB_00403798:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004037cc  FUN_004037cc =====

/* WARNING: Removing unreachable block (ram,0x00403864) */
/* WARNING: Removing unreachable block (ram,0x004038b0) */

void FUN_004037cc(long param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
    cVar1 = *(char *)(param_1 + 0x7f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x7f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
    pvVar4 = *(void **)(param_1 + 0x48);
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x48);
  }
  if (pvVar4 == (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x28);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x50);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x48);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x48);
    }
    *(void **)(param_1 + 0x50) = pvVar4;
    operator_delete(pvVar2);
    pvVar4 = *(void **)(param_1 + 0x28);
  }
  if (pvVar4 == (void *)0x0) {
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x30);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x28);
    }
    *(void **)(param_1 + 0x30) = pvVar4;
    operator_delete(pvVar2);
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 004038e4  Discord::ConnectToLog =====

/* Discord::ConnectToLog(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, std::__Cr::function<void (discord::ConnectionInfo const&,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >
   const&)>) */

undefined1  [16] __thiscall
Discord::ConnectToLog(Discord *this,undefined8 *param_1,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined1 **__dest;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  __dest = &local_a0;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar7 = (long *)operator_new(0x88);
  plVar7[0xd] = 0;
  *plVar7 = (long)&PTR_FUN_00d195e8;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar9 = plVar7 + 3;
  plVar7[4] = 0;
  *plVar9 = 0;
  plVar7[0x10] = (long)this;
  *(undefined4 *)(plVar7 + 0xe) = 8;
  plVar10 = plVar7 + 1;
  plVar7[2] = 0;
  *plVar10 = 0;
  local_88 = plVar7;
  FUN_005467a4(plVar9);
  if ((*(uint *)(plVar7 + 0xe) >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = *plVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(uint *)(plVar7 + 0xe) = *(uint *)(plVar7 + 0xe) | 2;
  FUN_005467c8(plVar9);
  do {
    lVar8 = *plVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  uVar2 = *(undefined8 *)this;
  lVar8 = *(long *)(this + 8);
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined1 *)*param_1;
    uVar3 = param_1[1];
    if (uVar3 < 0x17) {
      local_90 = CONCAT17((char)uVar3,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = (undefined1 *)__dest;
      uStack_98 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_98 = param_1[1];
    local_a0 = (undefined1 *)*param_1;
    local_90 = param_1[2];
  }
  local_70 = param_3[2];
  local_68 = param_3[3];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  if (*(long *)(local_68 + 8) != 0) {
    param_3[2] = FUN_0040ea94;
    param_3[3] = &DAT_001f1910;
  }
  auVar11 = FUN_00499724(uVar2,lVar8,&local_a0,&local_80,&local_88);
  if (*(code **)(local_68 + 8) != (code *)0x0) {
    (**(code **)(local_68 + 8))(local_80);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (local_88 != (long *)0x0) {
    plVar7 = local_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403b58  Discord::SetIdleJitterBufferFlush =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetIdleJitterBufferFlush(bool) */

void __thiscall Discord::SetIdleJitterBufferFlush(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d19640;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetIdleJitterBufferFlush_001a5b31._16_8_;
    uVar2 = s_SetIdleJitterBufferFlush_001a5b31._8_8_;
    uVar1 = s_SetIdleJitterBufferFlush_001a5b31._0_8_;
    if ((pcVar5 < "etIdleJitterBufferFlush") && ("SetIdleJitterBufferFlush" < pcVar5 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar5[0x18] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar2;
    *(undefined8 *)pcVar5 = uVar1;
    *(undefined8 *)(pcVar5 + 0x10) = uVar3;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar6 + 2) = param_1;
    uVar2 = _UNK_001f3238;
    uVar1 = _DAT_001f3230;
    *puVar6 = &PTR_FUN_00d19618;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar2;
    puVar6[4] = uVar1;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 00403c88  Discord::EnableBuiltInAEC =====

/* Discord::EnableBuiltInAEC(bool) */

void __thiscall Discord::EnableBuiltInAEC(Discord *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined7 uStack_8f;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d19730;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00403e38;
    }
    uVar2 = FUN_005ce36c();
    local_78 = CONCAT17(0x10,(undefined7)local_78);
    if ((&local_88 < (void **)0x1cffc1) && ("EnableBuiltInAEC" < &local_78)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_78 = local_78 & 0xffffffffffffff00;
    acStack_80[0] = s_EnableBuiltInAEC_001cffc0[8];
    acStack_80[1] = s_EnableBuiltInAEC_001cffc0[9];
    acStack_80[2] = s_EnableBuiltInAEC_001cffc0[10];
    acStack_80[3] = s_EnableBuiltInAEC_001cffc0[0xb];
    acStack_80[4] = s_EnableBuiltInAEC_001cffc0[0xc];
    acStack_80[5] = s_EnableBuiltInAEC_001cffc0[0xd];
    acStack_80[6] = s_EnableBuiltInAEC_001cffc0[0xe];
    acStack_80[7] = s_EnableBuiltInAEC_001cffc0[0xf];
    local_88 = (void *)s_EnableBuiltInAEC_001cffc0._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT71(uStack_8f,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d19708;
    puVar3[4] = acStack_80;
    puVar3[3] = local_88;
    puVar3[5] = local_78;
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if ((long)local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00403e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403e3c  Discord::SetEchoCancellation =====

/* Discord::SetEchoCancellation(bool) */

void __thiscall Discord::SetEchoCancellation(Discord *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined7 uStack_8f;
  void *local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  uint uStack_75;
  char cStack_71;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d19780;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00403ff8;
    }
    uVar2 = FUN_005ce36c();
    cStack_71 = 0x13;
    if ((&local_88 < (void **)0x1c1c87) && ("SetEchoCancellation" < &uStack_75)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uStack_75 = uStack_75 & 0xffffff00;
    uStack_80 = (undefined7)s_SetEchoCancellation_001c1c86._8_8_;
    uStack_79._0_1_ = SUB81(s_SetEchoCancellation_001c1c86._8_8_,7);
    uStack_79._1_3_ = 0x6e6f69;
    local_88 = (void *)s_SetEchoCancellation_001c1c86._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT71(uStack_8f,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d19758;
    puVar3[4] = CONCAT17((char)uStack_79,uStack_80);
    puVar3[3] = local_88;
    puVar3[5] = CONCAT17(cStack_71,CONCAT43(uStack_75,uStack_79._1_3_));
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_75 = 0;
    cStack_71 = '\0';
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (cStack_71 < '\0') {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00403ff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00403ffc  Discord::SetEchoCancellationPreEcho =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetEchoCancellationPreEcho(bool) */

void __thiscall Discord::SetEchoCancellationPreEcho(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d197d0;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x20);
    uVar4 = s_SetEchoCancellationPreEcho_001cd638._18_8_;
    uVar3 = s_SetEchoCancellationPreEcho_001cd638._0_8_;
    if ((pcVar6 < "etEchoCancellationPreEcho") && ("SetEchoCancellationPreEcho" < pcVar6 + 0x1a)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT62(s_SetEchoCancellationPreEcho_001cd638._10_6_,
                     s_SetEchoCancellationPreEcho_001cd638._8_2_);
    uVar2 = CONCAT26(s_SetEchoCancellationPreEcho_001cd638._16_2_,
                     s_SetEchoCancellationPreEcho_001cd638._10_6_);
    pcVar6[0x1a] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar1;
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0x12) = uVar4;
    *(undefined8 *)(pcVar6 + 10) = uVar2;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar4 = _UNK_001f1e68;
    uVar3 = _DAT_001f1e60;
    *puVar7 = &PTR_FUN_00d197a8;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar4;
    puVar7[4] = uVar3;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 0040412c  Discord::SetEchoReferenceMode =====

/* Discord::SetEchoReferenceMode(discord::media::EchoReferenceMode) */

void Discord::SetEchoReferenceMode(void)

{
  return;
}


// ===== 00404130  Discord::SetEchoCancellation =====

/* Discord::SetEchoCancellation(int) */

void __thiscall Discord::SetEchoCancellation(Discord *this,int param_1)

{
  SetEchoCancellation(this,param_1 != -1);
  return;
}


// ===== 0040413c  Discord::SetNoiseSuppression =====

/* Discord::SetNoiseSuppression(bool) */

void __thiscall Discord::SetNoiseSuppression(Discord *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined7 uStack_8f;
  void *local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  uint uStack_75;
  char cStack_71;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d19820;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_004042f8;
    }
    uVar2 = FUN_005ce36c();
    cStack_71 = 0x13;
    if ((&local_88 < (void **)0x1d8969) && ("SetNoiseSuppression" < &uStack_75)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uStack_75 = uStack_75 & 0xffffff00;
    uStack_80 = (undefined7)s_SetNoiseSuppression_001d8968._8_8_;
    uStack_79._0_1_ = SUB81(s_SetNoiseSuppression_001d8968._8_8_,7);
    uStack_79._1_3_ = 0x6e6f69;
    local_88 = (void *)s_SetNoiseSuppression_001d8968._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT71(uStack_8f,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d197f8;
    puVar3[4] = CONCAT17((char)uStack_79,uStack_80);
    puVar3[3] = local_88;
    puVar3[5] = CONCAT17(cStack_71,CONCAT43(uStack_75,uStack_79._1_3_));
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_75 = 0;
    cStack_71 = '\0';
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (cStack_71 < '\0') {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004042f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004042fc  Discord::SetNoiseSuppression =====

/* Discord::SetNoiseSuppression(int) */

void __thiscall Discord::SetNoiseSuppression(Discord *this,int param_1)

{
  SetNoiseSuppression(this,param_1 != -1);
  return;
}


// ===== 00404308  Discord::SetAutomaticGainControlConfig =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetAutomaticGainControlConfig(discord::media::GainControllerConfig) */

void __thiscall Discord::SetAutomaticGainControlConfig(Discord *this,Discord *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  Discord *pDVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  uVar12 = *(undefined8 *)param_2;
  uVar14 = *(undefined8 *)(param_2 + 0x14);
  uVar13 = *(undefined8 *)(param_2 + 0xc);
  lVar10 = *(long *)(*(long *)this + 0x58);
  uStack_68 = (undefined4)*(undefined8 *)(param_2 + 8);
  uStack_64 = (undefined4)uVar13;
  if (lVar10 == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar9) {
      return;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)this + 0x78);
    if (lVar11 == 0) {
      pDVar8 = (Discord *)operator_new(0x30);
      uVar12 = *(undefined8 *)param_2;
      uVar14 = *(undefined8 *)(param_2 + 0x14);
      uVar13 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(pDVar8 + 0x18) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(pDVar8 + 0x10) = uVar12;
      *(undefined ***)pDVar8 = &PTR_FUN_00d19870;
      *(Discord **)(pDVar8 + 8) = this;
      *(undefined8 *)(pDVar8 + 0x24) = uVar14;
      *(undefined8 *)(pDVar8 + 0x1c) = uVar13;
    }
    else {
      uVar6 = FUN_005ce36c();
      pcVar7 = (char *)operator_new(0x20);
      uVar5 = s_SetAutomaticGainControlConfig_001de33f._21_8_;
      uVar4 = s_SetAutomaticGainControlConfig_001de33f._0_8_;
      if ((pcVar7 < "etAutomaticGainControlConfig") &&
         ("SetAutomaticGainControlConfig" < pcVar7 + 0x1d)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = CONCAT35(s_SetAutomaticGainControlConfig_001de33f._13_3_,
                       s_SetAutomaticGainControlConfig_001de33f._8_5_);
      uVar3 = CONCAT53(s_SetAutomaticGainControlConfig_001de33f._16_5_,
                       s_SetAutomaticGainControlConfig_001de33f._13_3_);
      pcVar7[0x1d] = '\0';
      *(undefined8 *)(pcVar7 + 8) = uVar2;
      *(undefined8 *)pcVar7 = uVar4;
      *(undefined8 *)(pcVar7 + 0x15) = uVar5;
      *(undefined8 *)(pcVar7 + 0xd) = uVar3;
      pDVar8 = (Discord *)operator_new(0x70);
      *(char **)(pDVar8 + 0x30) = pcVar7;
      *(ulong *)(pDVar8 + 0x18) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(pDVar8 + 0x10) = uVar12;
      *(undefined ***)pDVar8 = &PTR_FUN_00d19848;
      *(Discord **)(pDVar8 + 8) = this;
      *(long *)(pDVar8 + 0x48) = lVar11;
      *(undefined8 *)(pDVar8 + 0x24) = uVar14;
      *(undefined8 *)(pDVar8 + 0x1c) = uVar13;
      uVar13 = _UNK_001f3af8;
      uVar12 = _DAT_001f3af0;
      *(undefined8 *)(pDVar8 + 0x68) = uVar6;
      *(undefined8 *)(pDVar8 + 0x40) = uVar13;
      *(undefined8 *)(pDVar8 + 0x38) = uVar12;
      *(code **)(pDVar8 + 0x58) = FUN_0040e7ec;
      *(undefined **)(pDVar8 + 0x60) = &DAT_001f4e70;
    }
    this = pDVar8;
    param_2 = pDVar8;
    if (*(long *)(lVar1 + 0x28) == lVar9) {
      FUN_00512cf8(lVar10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this,param_2);
}


// ===== 0040449c  Discord::SetAutomaticGainControl =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetAutomaticGainControl(bool) */

void __thiscall Discord::SetAutomaticGainControl(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d198c0;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetAutomaticGainControl_001ab20f._0_8_;
    if ((pcVar5 < "etAutomaticGainControl") && ("SetAutomaticGainControl" < pcVar5 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetAutomaticGainControl_001ab20f[0xf],
                     s_SetAutomaticGainControl_001ab20f._8_7_);
    uVar2 = CONCAT71(s_SetAutomaticGainControl_001ab20f._16_7_,
                     s_SetAutomaticGainControl_001ab20f[0xf]);
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar1;
    *(undefined8 *)pcVar5 = uVar3;
    *(undefined8 *)(pcVar5 + 0xf) = uVar2;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar6 + 2) = param_1;
    uVar1 = _UNK_001f3b08;
    uVar3 = _DAT_001f3b00;
    *puVar6 = &PTR_FUN_00d19898;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar1;
    puVar6[4] = uVar3;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 004045cc  Discord::SetAutomaticGainControl =====

/* Discord::SetAutomaticGainControl(int) */

void __thiscall Discord::SetAutomaticGainControl(Discord *this,int param_1)

{
  SetAutomaticGainControl(this,param_1 != -1);
  return;
}


// ===== 004045d8  Discord::SetNoiseCancellation =====

/* Discord::SetNoiseCancellation(bool) */

void __thiscall Discord::SetNoiseCancellation(Discord *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined7 uStack_8f;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d19910;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_00404794;
    }
    uVar3 = FUN_005ce36c();
    local_78 = CONCAT17(0x14,(undefined7)local_78);
    if ((&local_88 < (void **)0x1e9d8e) && ("SetNoiseCancellation" < (char *)((long)&local_78 + 4U))
       ) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)local_78 >> 0x20;
    local_78 = CONCAT44((uint)uVar2 & 0xffffff00,0x6e6f6974);
    acStack_80[0] = s_SetNoiseCancellation_001e9d8d[8];
    acStack_80[1] = s_SetNoiseCancellation_001e9d8d[9];
    acStack_80[2] = s_SetNoiseCancellation_001e9d8d[10];
    acStack_80[3] = s_SetNoiseCancellation_001e9d8d[0xb];
    acStack_80[4] = s_SetNoiseCancellation_001e9d8d[0xc];
    acStack_80[5] = s_SetNoiseCancellation_001e9d8d[0xd];
    acStack_80[6] = s_SetNoiseCancellation_001e9d8d[0xe];
    acStack_80[7] = s_SetNoiseCancellation_001e9d8d[0xf];
    local_88 = (void *)s_SetNoiseCancellation_001e9d8d._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar6;
    local_50 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT71(uStack_8f,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d198e8;
    puVar4[4] = acStack_80;
    puVar4[3] = local_88;
    puVar4[5] = local_78;
    puVar4[7] = uStack_68;
    puVar4[6] = local_70;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00404794:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00404798  Discord::GetNoiseCancellationStats =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetNoiseCancellationStats(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall Discord::GetNoiseCancellationStats(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  uVar2 = param_2[2];
  puVar15 = (undefined8 *)param_2[3];
  lVar11 = *(long *)this;
  if (puVar15[1] != 0) {
    param_2[2] = FUN_00410008;
    param_2[3] = &DAT_001f1910;
  }
  lVar14 = *(long *)(lVar11 + 0x58);
  uVar13 = *param_2;
  if (lVar14 != 0) {
    lVar11 = *(long *)(lVar11 + 0x78);
    uVar16 = param_2[1];
    if (lVar11 == 0) {
      puVar10 = (undefined8 *)operator_new(0x30);
      puVar10[2] = uVar13;
      puVar10[3] = uVar16;
      puVar10[4] = uVar2;
      lVar11 = puVar15[1];
      *puVar10 = &PTR_FUN_00d19960;
      puVar10[1] = this;
      puVar10[5] = puVar15;
      if (lVar11 != 0) {
        puVar15 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar14,puVar10);
      UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
      goto joined_r0x004048c0;
    }
    uVar7 = FUN_005ce36c();
    puVar10 = puVar15;
    if (puVar15[1] != 0) {
      puVar10 = &DAT_001f1910;
    }
    pcVar8 = (char *)operator_new(0x20);
    uVar6 = s_GetNoiseCancellationStats_001e705f._17_8_;
    uVar5 = s_GetNoiseCancellationStats_001e705f._0_8_;
    if ((pcVar8 < "etNoiseCancellationStats") && ("GetNoiseCancellationStats" < pcVar8 + 0x19)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar3 = CONCAT71(s_GetNoiseCancellationStats_001e705f._9_7_,
                     s_GetNoiseCancellationStats_001e705f[8]);
    uVar4 = CONCAT17(s_GetNoiseCancellationStats_001e705f[0x10],
                     s_GetNoiseCancellationStats_001e705f._9_7_);
    pcVar8[0x19] = '\0';
    *(undefined8 *)(pcVar8 + 8) = uVar3;
    *(undefined8 *)pcVar8 = uVar5;
    *(undefined8 *)(pcVar8 + 0x11) = uVar6;
    *(undefined8 *)(pcVar8 + 9) = uVar4;
    puVar9 = (undefined8 *)operator_new(0x70);
    puVar9[2] = uVar13;
    puVar9[3] = uVar16;
    puVar9[4] = uVar2;
    puVar9[5] = puVar15;
    uVar16 = _UNK_001f2cf8;
    uVar2 = _DAT_001f2cf0;
    lVar12 = puVar15[1];
    puVar9[6] = pcVar8;
    *puVar9 = &PTR_FUN_00d19938;
    puVar9[1] = this;
    puVar9[8] = uVar16;
    puVar9[7] = uVar2;
    puVar9[9] = lVar11;
    puVar1 = puVar15;
    if (lVar12 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar9[0xb] = FUN_0040e7ec;
    puVar9[0xc] = &DAT_001f4e70;
    puVar9[0xd] = uVar7;
    FUN_00512cf8(lVar14,puVar9);
    puVar15 = puVar10;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar13);
      UNRECOVERED_JUMPTABLE = (code *)puVar10[1];
      goto joined_r0x004048c0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
joined_r0x004048c0:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_GetNoiseCancellationStats_001e705f[0] = (char)s_GetNoiseCancellationStats_001e705f._0_8_;
    s_GetNoiseCancellationStats_001e705f[1] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,1);
    s_GetNoiseCancellationStats_001e705f[2] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,2);
    s_GetNoiseCancellationStats_001e705f[3] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,3);
    s_GetNoiseCancellationStats_001e705f[4] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,4);
    s_GetNoiseCancellationStats_001e705f[5] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,5);
    s_GetNoiseCancellationStats_001e705f[6] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,6);
    s_GetNoiseCancellationStats_001e705f[7] = SUB81(s_GetNoiseCancellationStats_001e705f._0_8_,7);
    s_GetNoiseCancellationStats_001e705f[9] = (char)s_GetNoiseCancellationStats_001e705f._9_7_;
    s_GetNoiseCancellationStats_001e705f[10] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,1);
    s_GetNoiseCancellationStats_001e705f[0xb] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,2);
    s_GetNoiseCancellationStats_001e705f[0xc] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,3);
    s_GetNoiseCancellationStats_001e705f[0xd] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,4);
    s_GetNoiseCancellationStats_001e705f[0xe] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,5);
    s_GetNoiseCancellationStats_001e705f[0xf] = SUB71(s_GetNoiseCancellationStats_001e705f._9_7_,6);
    s_GetNoiseCancellationStats_001e705f[0x11] = (char)s_GetNoiseCancellationStats_001e705f._17_8_;
    s_GetNoiseCancellationStats_001e705f[0x12] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,1);
    s_GetNoiseCancellationStats_001e705f[0x13] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,2);
    s_GetNoiseCancellationStats_001e705f[0x14] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,3);
    s_GetNoiseCancellationStats_001e705f[0x15] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,4);
    s_GetNoiseCancellationStats_001e705f[0x16] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,5);
    s_GetNoiseCancellationStats_001e705f[0x17] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,6);
    s_GetNoiseCancellationStats_001e705f[0x18] =
         SUB81(s_GetNoiseCancellationStats_001e705f._17_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004048f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar13);
  return;
}


// ===== 00404980  Discord::SetNoiseCancellationEnableStats =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetNoiseCancellationEnableStats(bool) */

void __thiscall Discord::SetNoiseCancellationEnableStats(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d199b0;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x20);
    uVar4 = s_SetNoiseCancellationEnableStats_001e1434._23_8_;
    uVar3 = s_SetNoiseCancellationEnableStats_001e1434._0_8_;
    if ((pcVar6 < "etNoiseCancellationEnableStats") &&
       ("SetNoiseCancellationEnableStats" < pcVar6 + 0x1f)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetNoiseCancellationEnableStats_001e1434[0xf],
                     s_SetNoiseCancellationEnableStats_001e1434._8_7_);
    uVar2 = CONCAT71(s_SetNoiseCancellationEnableStats_001e1434._16_7_,
                     s_SetNoiseCancellationEnableStats_001e1434[0xf]);
    pcVar6[0x1f] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar1;
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0x17) = uVar4;
    *(undefined8 *)(pcVar6 + 0xf) = uVar2;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar4 = _UNK_001f40d8;
    uVar3 = _DAT_001f40d0;
    *puVar7 = &PTR_FUN_00d19988;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar4;
    puVar7[4] = uVar3;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 00404ab0  Discord::SetNoiseCancellationDuringProcessing =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetNoiseCancellationDuringProcessing(bool) */

void __thiscall Discord::SetNoiseCancellationDuringProcessing(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d19a00;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x30);
    uVar4 = s_SetNoiseCancellationDuringProces_001b330b._24_8_;
    uVar3 = s_SetNoiseCancellationDuringProces_001b330b._16_8_;
    uVar2 = s_SetNoiseCancellationDuringProces_001b330b._8_8_;
    uVar1 = s_SetNoiseCancellationDuringProces_001b330b._0_8_;
    if ((pcVar6 < "etNoiseCancellationDuringProcessing") &&
       ("SetNoiseCancellationDuringProcessing" < pcVar6 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar6[0x24] = '\0';
    pcVar6[0x20] = 's';
    pcVar6[0x21] = 'i';
    pcVar6[0x22] = 'n';
    pcVar6[0x23] = 'g';
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
    *(undefined8 *)(pcVar6 + 0x18) = uVar4;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar2 = _UNK_001f2568;
    uVar1 = _DAT_001f2560;
    *puVar7 = &PTR_FUN_00d199d8;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar2;
    puVar7[4] = uVar1;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 00404be4  Discord::SetSkipNoiseCancellationIfMuted =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetSkipNoiseCancellationIfMuted(bool) */

void __thiscall Discord::SetSkipNoiseCancellationIfMuted(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d19a50;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x20);
    uVar4 = s_SetSkipNoiseCancellationIfMuted_001c4baa._23_8_;
    uVar3 = s_SetSkipNoiseCancellationIfMuted_001c4baa._0_8_;
    if ((pcVar6 < "etSkipNoiseCancellationIfMuted") &&
       ("SetSkipNoiseCancellationIfMuted" < pcVar6 + 0x1f)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetSkipNoiseCancellationIfMuted_001c4baa[0xf],
                     s_SetSkipNoiseCancellationIfMuted_001c4baa._8_7_);
    uVar2 = CONCAT71(s_SetSkipNoiseCancellationIfMuted_001c4baa._16_7_,
                     s_SetSkipNoiseCancellationIfMuted_001c4baa[0xf]);
    pcVar6[0x1f] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar1;
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0x17) = uVar4;
    *(undefined8 *)(pcVar6 + 0xf) = uVar2;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar4 = _UNK_001f40d8;
    uVar3 = _DAT_001f40d0;
    *puVar7 = &PTR_FUN_00d19a28;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar4;
    puVar7[4] = uVar3;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 00404d14  Discord::SetDeviceChangeCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetDeviceChangeCallback(std::__Cr::function<void
   (std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&,
   std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&,
   std::__Cr::vector<discord::media::VideoInputDeviceDescription,
   std::__Cr::allocator<discord::media::VideoInputDeviceDescription> > const&)>) */

void __thiscall Discord::SetDeviceChangeCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  uVar2 = param_2[2];
  puVar14 = (undefined8 *)param_2[3];
  lVar10 = *(long *)this;
  if (puVar14[1] != 0) {
    param_2[2] = FUN_00410828;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar15 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar15;
      puVar9[4] = uVar2;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d19aa0;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x00404e3c;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_SetDeviceChangeCallback_001c1c9a._0_8_;
    if ((pcVar7 < "etDeviceChangeCallback") && ("SetDeviceChangeCallback" < pcVar7 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar3 = CONCAT17(s_SetDeviceChangeCallback_001c1c9a[0xf],
                     s_SetDeviceChangeCallback_001c1c9a._8_7_);
    uVar4 = CONCAT71(s_SetDeviceChangeCallback_001c1c9a._16_7_,
                     s_SetDeviceChangeCallback_001c1c9a[0xf]);
    pcVar7[0x17] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar3;
    *(undefined8 *)pcVar7 = uVar5;
    *(undefined8 *)(pcVar7 + 0xf) = uVar4;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar15;
    puVar8[4] = uVar2;
    puVar8[5] = puVar14;
    uVar15 = _UNK_001f3b08;
    uVar2 = _DAT_001f3b00;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d19a78;
    puVar8[1] = this;
    puVar8[8] = uVar15;
    puVar8[7] = uVar2;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x00404e3c;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x00404e3c:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetDeviceChangeCallback_001c1c9a[0] = (char)s_SetDeviceChangeCallback_001c1c9a._0_8_;
    s_SetDeviceChangeCallback_001c1c9a[1] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,1);
    s_SetDeviceChangeCallback_001c1c9a[2] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,2);
    s_SetDeviceChangeCallback_001c1c9a[3] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,3);
    s_SetDeviceChangeCallback_001c1c9a[4] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,4);
    s_SetDeviceChangeCallback_001c1c9a[5] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,5);
    s_SetDeviceChangeCallback_001c1c9a[6] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,6);
    s_SetDeviceChangeCallback_001c1c9a[7] = SUB81(s_SetDeviceChangeCallback_001c1c9a._0_8_,7);
    s_SetDeviceChangeCallback_001c1c9a[8] = (char)s_SetDeviceChangeCallback_001c1c9a._8_7_;
    s_SetDeviceChangeCallback_001c1c9a[9] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,1);
    s_SetDeviceChangeCallback_001c1c9a[10] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,2);
    s_SetDeviceChangeCallback_001c1c9a[0xb] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,3);
    s_SetDeviceChangeCallback_001c1c9a[0xc] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,4);
    s_SetDeviceChangeCallback_001c1c9a[0xd] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,5);
    s_SetDeviceChangeCallback_001c1c9a[0xe] = SUB71(s_SetDeviceChangeCallback_001c1c9a._8_7_,6);
    s_SetDeviceChangeCallback_001c1c9a[0x10] = (char)s_SetDeviceChangeCallback_001c1c9a._16_7_;
    s_SetDeviceChangeCallback_001c1c9a[0x11] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,1);
    s_SetDeviceChangeCallback_001c1c9a[0x12] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,2);
    s_SetDeviceChangeCallback_001c1c9a[0x13] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,3);
    s_SetDeviceChangeCallback_001c1c9a[0x14] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,4);
    s_SetDeviceChangeCallback_001c1c9a[0x15] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,5);
    s_SetDeviceChangeCallback_001c1c9a[0x16] = SUB71(s_SetDeviceChangeCallback_001c1c9a._16_7_,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00404e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 00404efc  Discord::GetDevices =====

/* Discord::GetDevices(std::__Cr::function<void
   (std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&,
   std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&,
   std::__Cr::vector<discord::media::VideoInputDeviceDescription,
   std::__Cr::allocator<discord::media::VideoInputDeviceDescription> > const&)>) */

void __thiscall Discord::GetDevices(Discord *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_004050c4;
  lVar9 = *(long *)this;
  uVar13 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00410828;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 == 0) {
LAB_004050b4:
    pcVar10 = (code *)puVar8[1];
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar14 = param_2[1];
    if (lVar9 != 0) {
      uVar6 = FUN_005ce36c();
      local_98 = CONCAT17(10,(undefined7)local_98);
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1de35e) && ("GetDevices" < (char *)((long)&uStack_a0 + 2U))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)uStack_a0 >> 0x10;
      uStack_a0 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x7365);
      local_a8 = (void *)s_GetDevices_001de35d._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar9;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x70);
      uVar5 = local_98;
      uVar4 = uStack_a0;
      pvVar3 = local_a8;
      puVar7[4] = uVar13;
      puVar7[5] = local_b0;
      puVar7[3] = uVar14;
      puVar7[2] = uVar11;
      *puVar7 = &PTR_FUN_00d19ac8;
      puVar7[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar7[8] = uVar5;
      puVar7[7] = uVar4;
      puVar7[6] = pvVar3;
      puVar7[0xd] = uVar6;
      puVar7[10] = uStack_88;
      puVar7[9] = local_90;
      puVar7[0xb] = FUN_0040e7ec;
      puVar7[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar11);
      }
      goto LAB_004050b4;
    }
    puVar8 = (undefined8 *)operator_new(0x30);
    puVar8[2] = uVar11;
    puVar8[3] = uVar14;
    puVar8[4] = uVar13;
    puVar8[5] = local_b0;
    *puVar8 = &PTR_FUN_00d19b10;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar8);
    pcVar10 = (code *)local_b0[1];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
LAB_004050c4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00405160  Discord::GetRecordingDevices =====

/* Discord::GetRecordingDevices(std::__Cr::function<void
   (std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&)>) */

void __thiscall Discord::GetRecordingDevices(Discord *this,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_b0;
  void *local_a8;
  undefined7 uStack_a0;
  undefined4 uStack_99;
  uint uStack_95;
  char cStack_91;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_0040532c;
  lVar6 = *(long *)this;
  uVar10 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00411738;
    param_2[3] = &DAT_001f1910;
  }
  lVar9 = *(long *)(lVar6 + 0x58);
  uVar8 = *param_2;
  puVar5 = local_b0;
  if (lVar9 == 0) {
LAB_0040531c:
    pcVar7 = (code *)puVar5[1];
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x78);
    uVar11 = param_2[1];
    if (lVar6 != 0) {
      uVar3 = FUN_005ce36c();
      cStack_91 = 0x13;
      if (local_b0[1] != 0) {
        puVar5 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1ca490) && ("GetRecordingDevices" < &uStack_95)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uStack_95 = uStack_95 & 0xffffff00;
      uStack_a0 = (undefined7)s_GetRecordingDevices_001ca48f._8_8_;
      uStack_99._0_1_ = SUB81(s_GetRecordingDevices_001ca48f._8_8_,7);
      uStack_99._1_3_ = 0x736563;
      local_a8 = (void *)s_GetRecordingDevices_001ca48f._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar6;
      local_70 = uVar3;
      puVar4 = (undefined8 *)operator_new(0x70);
      pvVar2 = local_a8;
      puVar4[4] = uVar10;
      puVar4[5] = local_b0;
      puVar4[3] = uVar11;
      puVar4[2] = uVar8;
      *puVar4 = &PTR_FUN_00d19b38;
      puVar4[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uVar11 = CONCAT17(cStack_91,CONCAT43(uStack_95,uStack_99._1_3_));
      uVar10 = CONCAT17((char)uStack_99,uStack_a0);
      uStack_a0 = 0;
      uStack_99 = 0;
      uStack_95 = 0;
      cStack_91 = '\0';
      local_a8 = (void *)0x0;
      puVar4[8] = uVar11;
      puVar4[7] = uVar10;
      puVar4[6] = pvVar2;
      puVar4[0xd] = uVar3;
      puVar4[10] = uStack_88;
      puVar4[9] = local_90;
      puVar4[0xb] = FUN_0040e7ec;
      puVar4[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar9);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (cStack_91 < '\0') {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar8);
      }
      goto LAB_0040531c;
    }
    puVar5 = (undefined8 *)operator_new(0x30);
    puVar5[2] = uVar8;
    puVar5[3] = uVar11;
    puVar5[4] = uVar10;
    puVar5[5] = local_b0;
    *puVar5 = &PTR_FUN_00d19b80;
    puVar5[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar9,puVar5);
    pcVar7 = (code *)local_b0[1];
  }
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(uVar8);
  }
LAB_0040532c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004053c8  Discord::GetCurrentRecordingDevice =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetCurrentRecordingDevice(std::__Cr::function<void
   (discord::media::AudioDeviceDescription const&)>) */

void __thiscall Discord::GetCurrentRecordingDevice(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_00411c74;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d19bf0;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x00405590;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_GetCurrentRecordingDevice_0019c9ad._17_8_;
    uVar4 = s_GetCurrentRecordingDevice_0019c9ad._0_8_;
    if ((pcVar7 < "etCurrentRecordingDevice") && ("GetCurrentRecordingDevice" < pcVar7 + 0x19)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,
                     s_GetCurrentRecordingDevice_0019c9ad[8]);
    uVar3 = CONCAT17(s_GetCurrentRecordingDevice_0019c9ad[0x10],
                     s_GetCurrentRecordingDevice_0019c9ad._9_7_);
    pcVar7[0x19] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar4;
    *(undefined8 *)(pcVar7 + 0x11) = uVar5;
    *(undefined8 *)(pcVar7 + 9) = uVar3;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f2cf8;
    uVar15 = _DAT_001f2cf0;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d19ba8;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x00405590;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x00405590:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_GetCurrentRecordingDevice_0019c9ad[0x11] = (char)s_GetCurrentRecordingDevice_0019c9ad._17_8_;
    s_GetCurrentRecordingDevice_0019c9ad[0x12] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,1);
    s_GetCurrentRecordingDevice_0019c9ad[0x13] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,2);
    s_GetCurrentRecordingDevice_0019c9ad[0x14] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,3);
    s_GetCurrentRecordingDevice_0019c9ad[0x15] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,4);
    s_GetCurrentRecordingDevice_0019c9ad[0x16] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,5);
    s_GetCurrentRecordingDevice_0019c9ad[0x17] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,6);
    s_GetCurrentRecordingDevice_0019c9ad[0x18] =
         SUB81(s_GetCurrentRecordingDevice_0019c9ad._17_8_,7);
    s_GetCurrentRecordingDevice_0019c9ad[9] = (char)s_GetCurrentRecordingDevice_0019c9ad._9_7_;
    s_GetCurrentRecordingDevice_0019c9ad[10] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,1);
    s_GetCurrentRecordingDevice_0019c9ad[0xb] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,2);
    s_GetCurrentRecordingDevice_0019c9ad[0xc] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,3);
    s_GetCurrentRecordingDevice_0019c9ad[0xd] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,4);
    s_GetCurrentRecordingDevice_0019c9ad[0xe] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,5);
    s_GetCurrentRecordingDevice_0019c9ad[0xf] = SUB71(s_GetCurrentRecordingDevice_0019c9ad._9_7_,6);
    s_GetCurrentRecordingDevice_0019c9ad[0] = (char)s_GetCurrentRecordingDevice_0019c9ad._0_8_;
    s_GetCurrentRecordingDevice_0019c9ad[1] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,1);
    s_GetCurrentRecordingDevice_0019c9ad[2] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,2);
    s_GetCurrentRecordingDevice_0019c9ad[3] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,3);
    s_GetCurrentRecordingDevice_0019c9ad[4] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,4);
    s_GetCurrentRecordingDevice_0019c9ad[5] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,5);
    s_GetCurrentRecordingDevice_0019c9ad[6] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,6);
    s_GetCurrentRecordingDevice_0019c9ad[7] = SUB81(s_GetCurrentRecordingDevice_0019c9ad._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00405550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 004055c0  Discord::SetRecordingDevice =====

/* WARNING: Removing unreachable block (ram,0x00405720) */
/* WARNING: Removing unreachable block (ram,0x004057c4) */
/* Discord::SetRecordingDevice(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::SetRecordingDevice(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined7 local_a0;
  void *local_98;
  char acStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  uVar8 = *(undefined8 *)((long)param_2 + 0xf);
  cVar2 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar9 = *(long *)(lVar7 + 0x58);
  local_c8 = (undefined7)uVar5;
  uStack_c1 = (undefined1)uVar8;
  if (lVar9 == 0) {
    if (cVar2 < '\0') {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_00405820;
    }
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x78);
    if (lVar7 == 0) {
      puVar6 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar6 + 0x27) = cVar2;
      *puVar6 = &PTR_FUN_00d19c40;
      puVar6[1] = this;
      puVar6[2] = pvVar1;
      puVar6[3] = CONCAT17(uStack_c1,local_c8);
      *(undefined8 *)((long)puVar6 + 0x1f) = uVar8;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00512cf8(lVar9,puVar6);
        return;
      }
      goto LAB_00405820;
    }
    uVar5 = FUN_005ce36c();
    local_a0 = (undefined7)((ulong)uVar8 >> 8);
    local_88 = CONCAT17(0x12,(undefined7)local_88);
    if ((&local_98 < (void **)0x1c4bcb) && ("SetRecordingDevice" < (char *)((long)&local_88 + 2U)))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = (ulong)local_88 >> 0x10;
    local_88 = CONCAT62((uint6)uVar4 & 0xffffffffff00,0x6563);
    acStack_90[0] = s_SetRecordingDevice_001c4bca[8];
    acStack_90[1] = s_SetRecordingDevice_001c4bca[9];
    acStack_90[2] = s_SetRecordingDevice_001c4bca[10];
    acStack_90[3] = s_SetRecordingDevice_001c4bca[0xb];
    acStack_90[4] = s_SetRecordingDevice_001c4bca[0xc];
    acStack_90[5] = s_SetRecordingDevice_001c4bca[0xd];
    acStack_90[6] = s_SetRecordingDevice_001c4bca[0xe];
    acStack_90[7] = s_SetRecordingDevice_001c4bca[0xf];
    local_98 = (void *)s_SetRecordingDevice_001c4bca._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar7;
    local_60 = uVar5;
    puVar6 = (undefined8 *)operator_new(0x68);
    puVar6[10] = FUN_0040e7ec;
    puVar6[0xb] = &DAT_001f4e70;
    puVar6[3] = CONCAT17(uStack_c1,local_c8);
    puVar6[2] = pvVar1;
    *puVar6 = &PTR_FUN_00d19c18;
    puVar6[1] = this;
    puVar6[4] = CONCAT17(cVar2,local_a0);
    puVar6[6] = acStack_90;
    puVar6[5] = local_98;
    puVar6[7] = local_88;
    puVar6[0xc] = uVar5;
    puVar6[9] = uStack_78;
    puVar6[8] = local_80;
    local_98 = (void *)0x0;
    acStack_90[0] = '\0';
    acStack_90[1] = '\0';
    acStack_90[2] = '\0';
    acStack_90[3] = '\0';
    acStack_90[4] = '\0';
    acStack_90[5] = '\0';
    acStack_90[6] = '\0';
    acStack_90[7] = '\0';
    local_88 = 0;
    FUN_00512cf8(lVar9,puVar6);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00405820:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00405824  Discord::SetRecordingDevice =====

/* Discord::SetRecordingDevice(int) */

void __thiscall Discord::SetRecordingDevice(Discord *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_8c;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(int *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d19c90;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_004059dc;
    }
    uVar3 = FUN_005ce36c();
    local_78 = CONCAT17(0x12,(undefined7)local_78);
    if ((&local_88 < (void **)0x1c4bcb) && ("SetRecordingDevice" < (char *)((long)&local_78 + 2U)))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)local_78 >> 0x10;
    local_78 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x6563);
    acStack_80[0] = s_SetRecordingDevice_001c4bca[8];
    acStack_80[1] = s_SetRecordingDevice_001c4bca[9];
    acStack_80[2] = s_SetRecordingDevice_001c4bca[10];
    acStack_80[3] = s_SetRecordingDevice_001c4bca[0xb];
    acStack_80[4] = s_SetRecordingDevice_001c4bca[0xc];
    acStack_80[5] = s_SetRecordingDevice_001c4bca[0xd];
    acStack_80[6] = s_SetRecordingDevice_001c4bca[0xe];
    acStack_80[7] = s_SetRecordingDevice_001c4bca[0xf];
    local_88 = (void *)s_SetRecordingDevice_001c4bca._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar6;
    local_50 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT44(uStack_8c,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d19c68;
    puVar4[4] = acStack_80;
    puVar4[3] = local_88;
    puVar4[5] = local_78;
    puVar4[7] = uStack_68;
    puVar4[6] = local_70;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004059dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004059e0  Discord::GetPlayoutDevices =====

/* Discord::GetPlayoutDevices(std::__Cr::function<void
   (std::__Cr::vector<discord::media::AudioDeviceDescription,
   std::__Cr::allocator<discord::media::AudioDeviceDescription> > const&)>) */

void __thiscall Discord::GetPlayoutDevices(Discord *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_00405ba8;
  lVar9 = *(long *)this;
  uVar13 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00411738;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 == 0) {
LAB_00405b98:
    pcVar10 = (code *)puVar8[1];
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar14 = param_2[1];
    if (lVar9 != 0) {
      uVar6 = FUN_005ce36c();
      local_98 = CONCAT17(0x11,(undefined7)local_98);
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1e1455) && ("GetPlayoutDevices" < (char *)((long)&local_98 + 1U)))
      {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)local_98 >> 8;
      local_98 = CONCAT71((uint7)uVar2 & 0xffffffffffff00,0x73);
      uStack_a0._0_1_ = s_GetPlayoutDevices_001e1454[8];
      uStack_a0._1_1_ = s_GetPlayoutDevices_001e1454[9];
      uStack_a0._2_1_ = s_GetPlayoutDevices_001e1454[10];
      uStack_a0._3_1_ = s_GetPlayoutDevices_001e1454[0xb];
      uStack_a0._4_1_ = s_GetPlayoutDevices_001e1454[0xc];
      uStack_a0._5_1_ = s_GetPlayoutDevices_001e1454[0xd];
      uStack_a0._6_1_ = s_GetPlayoutDevices_001e1454[0xe];
      uStack_a0._7_1_ = s_GetPlayoutDevices_001e1454[0xf];
      local_a8 = (void *)s_GetPlayoutDevices_001e1454._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar9;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x70);
      uVar5 = local_98;
      uVar4 = uStack_a0;
      pvVar3 = local_a8;
      puVar7[4] = uVar13;
      puVar7[5] = local_b0;
      puVar7[3] = uVar14;
      puVar7[2] = uVar11;
      *puVar7 = &PTR_FUN_00d19cb8;
      puVar7[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar7[8] = uVar5;
      puVar7[7] = uVar4;
      puVar7[6] = pvVar3;
      puVar7[0xd] = uVar6;
      puVar7[10] = uStack_88;
      puVar7[9] = local_90;
      puVar7[0xb] = FUN_0040e7ec;
      puVar7[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar11);
      }
      goto LAB_00405b98;
    }
    puVar8 = (undefined8 *)operator_new(0x30);
    puVar8[2] = uVar11;
    puVar8[3] = uVar14;
    puVar8[4] = uVar13;
    puVar8[5] = local_b0;
    *puVar8 = &PTR_FUN_00d19d00;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar8);
    pcVar10 = (code *)local_b0[1];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
LAB_00405ba8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00405c44  Discord::GetCurrentPlayoutDevice =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetCurrentPlayoutDevice(std::__Cr::function<void (discord::media::AudioDeviceDescription
   const&)>) */

void __thiscall Discord::GetCurrentPlayoutDevice(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar13 = (undefined8 *)param_2[3];
  if (*(char *)(puVar13 + 2) != '\0') {
    return;
  }
  lVar9 = *(long *)this;
  uVar14 = param_2[2];
  if (puVar13[1] != 0) {
    param_2[2] = FUN_00411c74;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  if (lVar12 != 0) {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar15 = param_2[1];
    if (lVar9 == 0) {
      puVar8 = (undefined8 *)operator_new(0x30);
      puVar8[2] = uVar11;
      puVar8[3] = uVar15;
      puVar8[4] = uVar14;
      lVar9 = puVar13[1];
      *puVar8 = &PTR_FUN_00d19d50;
      puVar8[1] = this;
      puVar8[5] = puVar13;
      if (lVar9 != 0) {
        puVar13 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar12,puVar8);
      UNRECOVERED_JUMPTABLE = (code *)puVar13[1];
      goto joined_r0x00405e0c;
    }
    uVar5 = FUN_005ce36c();
    puVar8 = puVar13;
    if (puVar13[1] != 0) {
      puVar8 = &DAT_001f1910;
    }
    pcVar6 = (char *)operator_new(0x20);
    uVar4 = s_GetCurrentPlayoutDevice_001e414d._0_8_;
    if ((pcVar6 < "etCurrentPlayoutDevice") && ("GetCurrentPlayoutDevice" < pcVar6 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT17(s_GetCurrentPlayoutDevice_001e414d[0xf],
                     s_GetCurrentPlayoutDevice_001e414d._8_7_);
    uVar3 = CONCAT71(s_GetCurrentPlayoutDevice_001e414d._16_7_,
                     s_GetCurrentPlayoutDevice_001e414d[0xf]);
    pcVar6[0x17] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar4;
    *(undefined8 *)(pcVar6 + 0xf) = uVar3;
    puVar7 = (undefined8 *)operator_new(0x70);
    puVar7[2] = uVar11;
    puVar7[3] = uVar15;
    puVar7[4] = uVar14;
    puVar7[5] = puVar13;
    uVar15 = _UNK_001f3b08;
    uVar14 = _DAT_001f3b00;
    lVar10 = puVar13[1];
    puVar7[6] = pcVar6;
    *puVar7 = &PTR_FUN_00d19d28;
    puVar7[1] = this;
    puVar7[8] = uVar15;
    puVar7[7] = uVar14;
    puVar7[9] = lVar9;
    puVar1 = puVar13;
    if (lVar10 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar7[0xb] = FUN_0040e7ec;
    puVar7[0xc] = &DAT_001f4e70;
    puVar7[0xd] = uVar5;
    FUN_00512cf8(lVar12,puVar7);
    puVar13 = puVar8;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar8[1];
      goto joined_r0x00405e0c;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar13[1];
joined_r0x00405e0c:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_GetCurrentPlayoutDevice_001e414d[0x10] = (char)s_GetCurrentPlayoutDevice_001e414d._16_7_;
    s_GetCurrentPlayoutDevice_001e414d[0x11] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,1);
    s_GetCurrentPlayoutDevice_001e414d[0x12] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,2);
    s_GetCurrentPlayoutDevice_001e414d[0x13] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,3);
    s_GetCurrentPlayoutDevice_001e414d[0x14] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,4);
    s_GetCurrentPlayoutDevice_001e414d[0x15] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,5);
    s_GetCurrentPlayoutDevice_001e414d[0x16] = SUB71(s_GetCurrentPlayoutDevice_001e414d._16_7_,6);
    s_GetCurrentPlayoutDevice_001e414d[8] = (char)s_GetCurrentPlayoutDevice_001e414d._8_7_;
    s_GetCurrentPlayoutDevice_001e414d[9] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,1);
    s_GetCurrentPlayoutDevice_001e414d[10] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,2);
    s_GetCurrentPlayoutDevice_001e414d[0xb] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,3);
    s_GetCurrentPlayoutDevice_001e414d[0xc] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,4);
    s_GetCurrentPlayoutDevice_001e414d[0xd] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,5);
    s_GetCurrentPlayoutDevice_001e414d[0xe] = SUB71(s_GetCurrentPlayoutDevice_001e414d._8_7_,6);
    s_GetCurrentPlayoutDevice_001e414d[0] = (char)s_GetCurrentPlayoutDevice_001e414d._0_8_;
    s_GetCurrentPlayoutDevice_001e414d[1] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,1);
    s_GetCurrentPlayoutDevice_001e414d[2] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,2);
    s_GetCurrentPlayoutDevice_001e414d[3] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,3);
    s_GetCurrentPlayoutDevice_001e414d[4] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,4);
    s_GetCurrentPlayoutDevice_001e414d[5] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,5);
    s_GetCurrentPlayoutDevice_001e414d[6] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,6);
    s_GetCurrentPlayoutDevice_001e414d[7] = SUB81(s_GetCurrentPlayoutDevice_001e414d._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00405dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar11);
  return;
}


// ===== 00405e3c  Discord::SetPlayoutDevice =====

/* WARNING: Removing unreachable block (ram,0x00405f94) */
/* WARNING: Removing unreachable block (ram,0x00406038) */
/* Discord::SetPlayoutDevice(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::SetPlayoutDevice(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined7 local_a0;
  void *local_98;
  char acStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar4 = param_2[1];
  *param_2 = 0;
  uVar7 = *(undefined8 *)((long)param_2 + 0xf);
  cVar2 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar8 = *(long *)(lVar6 + 0x58);
  local_c8 = (undefined7)uVar4;
  uStack_c1 = (undefined1)uVar7;
  if (lVar8 == 0) {
    if (cVar2 < '\0') {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_00406094;
    }
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x78);
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar5 + 0x27) = cVar2;
      *puVar5 = &PTR_FUN_00d19da0;
      puVar5[1] = this;
      puVar5[2] = pvVar1;
      puVar5[3] = CONCAT17(uStack_c1,local_c8);
      *(undefined8 *)((long)puVar5 + 0x1f) = uVar7;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00512cf8(lVar8,puVar5);
        return;
      }
      goto LAB_00406094;
    }
    uVar4 = FUN_005ce36c();
    local_a0 = (undefined7)((ulong)uVar7 >> 8);
    local_88 = CONCAT17(0x10,(undefined7)local_88);
    if ((&local_98 < (void **)0x1ef37f) && ("SetPlayoutDevice" < &local_88)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_88 = local_88 & 0xffffffffffffff00;
    acStack_90[0] = s_SetPlayoutDevice_001ef37e[8];
    acStack_90[1] = s_SetPlayoutDevice_001ef37e[9];
    acStack_90[2] = s_SetPlayoutDevice_001ef37e[10];
    acStack_90[3] = s_SetPlayoutDevice_001ef37e[0xb];
    acStack_90[4] = s_SetPlayoutDevice_001ef37e[0xc];
    acStack_90[5] = s_SetPlayoutDevice_001ef37e[0xd];
    acStack_90[6] = s_SetPlayoutDevice_001ef37e[0xe];
    acStack_90[7] = s_SetPlayoutDevice_001ef37e[0xf];
    local_98 = (void *)s_SetPlayoutDevice_001ef37e._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar6;
    local_60 = uVar4;
    puVar5 = (undefined8 *)operator_new(0x68);
    puVar5[10] = FUN_0040e7ec;
    puVar5[0xb] = &DAT_001f4e70;
    puVar5[3] = CONCAT17(uStack_c1,local_c8);
    puVar5[2] = pvVar1;
    *puVar5 = &PTR_FUN_00d19d78;
    puVar5[1] = this;
    puVar5[4] = CONCAT17(cVar2,local_a0);
    puVar5[6] = acStack_90;
    puVar5[5] = local_98;
    puVar5[7] = local_88;
    puVar5[0xc] = uVar4;
    puVar5[9] = uStack_78;
    puVar5[8] = local_80;
    local_98 = (void *)0x0;
    acStack_90[0] = '\0';
    acStack_90[1] = '\0';
    acStack_90[2] = '\0';
    acStack_90[3] = '\0';
    acStack_90[4] = '\0';
    acStack_90[5] = '\0';
    acStack_90[6] = '\0';
    acStack_90[7] = '\0';
    local_88 = 0;
    FUN_00512cf8(lVar8,puVar5);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if ((long)local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00406094:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406098  Discord::SetPlayoutDevice =====

/* Discord::SetPlayoutDevice(int) */

void __thiscall Discord::SetPlayoutDevice(Discord *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_8c;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(int *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d19df0;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00406248;
    }
    uVar2 = FUN_005ce36c();
    local_78 = CONCAT17(0x10,(undefined7)local_78);
    if ((&local_88 < (void **)0x1ef37f) && ("SetPlayoutDevice" < &local_78)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_78 = local_78 & 0xffffffffffffff00;
    acStack_80[0] = s_SetPlayoutDevice_001ef37e[8];
    acStack_80[1] = s_SetPlayoutDevice_001ef37e[9];
    acStack_80[2] = s_SetPlayoutDevice_001ef37e[10];
    acStack_80[3] = s_SetPlayoutDevice_001ef37e[0xb];
    acStack_80[4] = s_SetPlayoutDevice_001ef37e[0xc];
    acStack_80[5] = s_SetPlayoutDevice_001ef37e[0xd];
    acStack_80[6] = s_SetPlayoutDevice_001ef37e[0xe];
    acStack_80[7] = s_SetPlayoutDevice_001ef37e[0xf];
    local_88 = (void *)s_SetPlayoutDevice_001ef37e._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT44(uStack_8c,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d19dc8;
    puVar3[4] = acStack_80;
    puVar3[3] = local_88;
    puVar3[5] = local_78;
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if ((long)local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00406248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040624c  Discord::GetVideoInputDevices =====

/* Discord::GetVideoInputDevices(std::__Cr::function<void
   (std::__Cr::vector<discord::media::VideoInputDeviceDescription,
   std::__Cr::allocator<discord::media::VideoInputDeviceDescription> > const&)>) */

void __thiscall Discord::GetVideoInputDevices(Discord *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_00406418;
  lVar9 = *(long *)this;
  uVar13 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00413504;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 == 0) {
LAB_00406408:
    pcVar10 = (code *)puVar8[1];
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar14 = param_2[1];
    if (lVar9 != 0) {
      uVar6 = FUN_005ce36c();
      local_98 = CONCAT17(0x14,(undefined7)local_98);
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x19f915) &&
         ("GetVideoInputDevices" < (char *)((long)&local_98 + 4U))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)local_98 >> 0x20;
      local_98 = CONCAT44((uint)uVar2 & 0xffffff00,0x73656369);
      uStack_a0._0_1_ = s_GetVideoInputDevices_0019f914[8];
      uStack_a0._1_1_ = s_GetVideoInputDevices_0019f914[9];
      uStack_a0._2_1_ = s_GetVideoInputDevices_0019f914[10];
      uStack_a0._3_1_ = s_GetVideoInputDevices_0019f914[0xb];
      uStack_a0._4_1_ = s_GetVideoInputDevices_0019f914[0xc];
      uStack_a0._5_1_ = s_GetVideoInputDevices_0019f914[0xd];
      uStack_a0._6_1_ = s_GetVideoInputDevices_0019f914[0xe];
      uStack_a0._7_1_ = s_GetVideoInputDevices_0019f914[0xf];
      local_a8 = (void *)s_GetVideoInputDevices_0019f914._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar9;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x70);
      uVar5 = local_98;
      uVar4 = uStack_a0;
      pvVar3 = local_a8;
      puVar7[4] = uVar13;
      puVar7[5] = local_b0;
      puVar7[3] = uVar14;
      puVar7[2] = uVar11;
      *puVar7 = &PTR_FUN_00d19e18;
      puVar7[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar7[8] = uVar5;
      puVar7[7] = uVar4;
      puVar7[6] = pvVar3;
      puVar7[0xd] = uVar6;
      puVar7[10] = uStack_88;
      puVar7[9] = local_90;
      puVar7[0xb] = FUN_0040e7ec;
      puVar7[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar11);
      }
      goto LAB_00406408;
    }
    puVar8 = (undefined8 *)operator_new(0x30);
    puVar8[2] = uVar11;
    puVar8[3] = uVar14;
    puVar8[4] = uVar13;
    puVar8[5] = local_b0;
    *puVar8 = &PTR_FUN_00d19e40;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar8);
    pcVar10 = (code *)local_b0[1];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
LAB_00406418:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004064b4  Discord::SetVideoInputDevice =====

/* Discord::SetVideoInputDevice(int) */

void __thiscall Discord::SetVideoInputDevice(Discord *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_8c;
  void *local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  uint uStack_75;
  char cStack_71;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(int *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d19e90;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00406670;
    }
    uVar2 = FUN_005ce36c();
    cStack_71 = 0x13;
    if ((&local_88 < (void **)0x1d5d09) && ("SetVideoInputDevice" < &uStack_75)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uStack_75 = uStack_75 & 0xffffff00;
    uStack_80 = (undefined7)s_SetVideoInputDevice_001d5d08._8_8_;
    uStack_79._0_1_ = SUB81(s_SetVideoInputDevice_001d5d08._8_8_,7);
    uStack_79._1_3_ = 0x656369;
    local_88 = (void *)s_SetVideoInputDevice_001d5d08._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT44(uStack_8c,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d19e68;
    puVar3[4] = CONCAT17((char)uStack_79,uStack_80);
    puVar3[3] = local_88;
    puVar3[5] = CONCAT17(cStack_71,CONCAT43(uStack_75,uStack_79._1_3_));
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_75 = 0;
    cStack_71 = '\0';
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (cStack_71 < '\0') {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00406670:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406674  Discord::SetVideoInputDevice =====

/* WARNING: Removing unreachable block (ram,0x004067d8) */
/* WARNING: Removing unreachable block (ram,0x0040687c) */
/* Discord::SetVideoInputDevice(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::SetVideoInputDevice(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined7 local_a0;
  void *local_98;
  undefined7 uStack_90;
  undefined4 uStack_89;
  uint uStack_85;
  char cStack_81;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar4 = param_2[1];
  *param_2 = 0;
  uVar7 = *(undefined8 *)((long)param_2 + 0xf);
  cVar2 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar8 = *(long *)(lVar6 + 0x58);
  local_c8 = (undefined7)uVar4;
  uStack_c1 = (undefined1)uVar7;
  if (lVar8 == 0) {
    if (cVar2 < '\0') {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_004068d8;
    }
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x78);
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar5 + 0x27) = cVar2;
      *puVar5 = &PTR_FUN_00d19ee0;
      puVar5[1] = this;
      puVar5[2] = pvVar1;
      puVar5[3] = CONCAT17(uStack_c1,local_c8);
      *(undefined8 *)((long)puVar5 + 0x1f) = uVar7;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00512cf8(lVar8,puVar5);
        return;
      }
      goto LAB_004068d8;
    }
    uVar4 = FUN_005ce36c();
    local_a0 = (undefined7)((ulong)uVar7 >> 8);
    cStack_81 = 0x13;
    if ((&local_98 < (void **)0x1d5d09) && ("SetVideoInputDevice" < &uStack_85)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uStack_85 = uStack_85 & 0xffffff00;
    uStack_90 = (undefined7)s_SetVideoInputDevice_001d5d08._8_8_;
    uStack_89._0_1_ = SUB81(s_SetVideoInputDevice_001d5d08._8_8_,7);
    uStack_89._1_3_ = 0x656369;
    local_98 = (void *)s_SetVideoInputDevice_001d5d08._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar6;
    local_60 = uVar4;
    puVar5 = (undefined8 *)operator_new(0x68);
    puVar5[10] = FUN_0040e7ec;
    puVar5[0xb] = &DAT_001f4e70;
    puVar5[3] = CONCAT17(uStack_c1,local_c8);
    puVar5[2] = pvVar1;
    *puVar5 = &PTR_FUN_00d19eb8;
    puVar5[1] = this;
    puVar5[4] = CONCAT17(cVar2,local_a0);
    puVar5[6] = CONCAT17((char)uStack_89,uStack_90);
    puVar5[5] = local_98;
    puVar5[7] = CONCAT17(cStack_81,CONCAT43(uStack_85,uStack_89._1_3_));
    puVar5[0xc] = uVar4;
    puVar5[9] = uStack_78;
    puVar5[8] = local_80;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_85 = 0;
    cStack_81 = '\0';
    FUN_00512cf8(lVar8,puVar5);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (cStack_81 < '\0') {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_004068d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004068dc  Discord::SetVideoOutputSink =====

/* WARNING: Removing unreachable block (ram,0x00406ae8) */
/* Discord::SetVideoOutputSink(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::function<bool (discord::media::VideoFrameI420 const&)>)
    */

void __thiscall Discord::SetVideoOutputSink(Discord *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  void *pvVar16;
  uint uVar17;
  undefined7 local_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined8 *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)this;
  uVar12 = *(undefined8 *)((long)param_2 + 0xf);
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar17 = (uint)bVar2;
  pvVar16 = (void *)*param_2;
  uVar15 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3[2];
  local_b8 = (undefined8 *)param_3[3];
  local_100 = (undefined7)uVar15;
  uStack_f9 = (undefined1)uVar12;
  uStack_f8 = (undefined7)((ulong)uVar12 >> 8);
  if (local_b8[1] != 0) {
    param_3[2] = FUN_00413c90;
    param_3[3] = &DAT_001f1910;
  }
  lVar14 = *(long *)(lVar10 + 0x58);
  uVar15 = *param_3;
  puVar9 = local_b8;
  if (lVar14 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar13 = param_3[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x48);
      *(byte *)((long)puVar9 + 0x27) = bVar2;
      puVar9[5] = uVar15;
      puVar9[6] = uVar13;
      *puVar9 = &PTR_FUN_00d19f30;
      puVar9[1] = this;
      puVar9[2] = pvVar16;
      puVar9[3] = CONCAT17(uStack_f9,local_100);
      puVar9[7] = uVar1;
      puVar9[8] = local_b8;
      *(undefined8 *)((long)puVar9 + 0x1f) = uVar12;
      if (local_b8[1] != 0) {
        local_b8 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar14,puVar9);
      uVar17 = 0;
      pvVar16 = (void *)0x0;
      pcVar11 = (code *)local_b8[1];
      goto joined_r0x00406b00;
    }
    uVar12 = FUN_005ce36c();
    local_a0 = CONCAT17(0x12,(undefined7)local_a0);
    if (local_b8[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    if ((&local_b0 < (void **)0x1bee0f) && ("SetVideoOutputSink" < (char *)((long)&local_a0 + 2U)))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = (ulong)local_a0 >> 0x10;
    local_a0 = CONCAT62((uint6)uVar4 & 0xffffffffff00,0x6b6e);
    uStack_a8._0_1_ = s_SetVideoOutputSink_001bee0e[8];
    uStack_a8._1_1_ = s_SetVideoOutputSink_001bee0e[9];
    uStack_a8._2_1_ = s_SetVideoOutputSink_001bee0e[10];
    uStack_a8._3_1_ = s_SetVideoOutputSink_001bee0e[0xb];
    uStack_a8._4_1_ = s_SetVideoOutputSink_001bee0e[0xc];
    uStack_a8._5_1_ = s_SetVideoOutputSink_001bee0e[0xd];
    uStack_a8._6_1_ = s_SetVideoOutputSink_001bee0e[0xe];
    uStack_a8._7_1_ = s_SetVideoOutputSink_001bee0e[0xf];
    local_b0 = (void *)s_SetVideoOutputSink_001bee0e._0_8_;
    local_88 = FUN_0040e7ec;
    local_80 = &DAT_001f4e70;
    local_98 = lVar10;
    local_78 = uVar12;
    puVar8 = (undefined8 *)operator_new(0x88);
    uVar7 = local_a0;
    uVar6 = uStack_a8;
    pvVar5 = local_b0;
    puVar8[3] = CONCAT17(uStack_f9,local_100);
    puVar8[2] = pvVar16;
    *puVar8 = &PTR_FUN_00d19f08;
    puVar8[1] = this;
    puVar8[4] = CONCAT17(bVar2,uStack_f8);
    puVar8[6] = uVar13;
    puVar8[5] = uVar15;
    puVar8[7] = uVar1;
    puVar8[8] = local_b8;
    if (local_b8[1] != 0) {
      local_b8 = &DAT_001f1910;
    }
    uStack_a8 = 0;
    local_a0 = 0;
    local_b0 = (void *)0x0;
    puVar8[0xb] = uVar7;
    puVar8[10] = uVar6;
    puVar8[9] = pvVar5;
    puVar8[0x10] = uVar12;
    puVar8[0xd] = uStack_90;
    puVar8[0xc] = local_98;
    puVar8[0xe] = FUN_0040e7ec;
    puVar8[0xf] = &DAT_001f4e70;
    FUN_00512cf8(lVar14);
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98);
    }
    if (local_a0 < 0) {
      operator_delete(local_b0);
    }
    if ((code *)local_b8[1] != (code *)0x0) {
      (*(code *)local_b8[1])(uVar15);
    }
    uVar17 = 0;
    pvVar16 = (void *)0x0;
  }
  pcVar11 = (code *)puVar9[1];
joined_r0x00406b00:
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar15);
  }
  if (uVar17 >> 7 != 0) {
    operator_delete(pvVar16);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00406bd8  Discord::AddDirectVideoOutputSink =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::AddDirectVideoOutputSink(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::AddDirectVideoOutputSink(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined7 local_78;
  undefined1 uStack_71;
  
  lVar4 = tpidr_el0;
  lVar10 = *(long *)(lVar4 + 0x28);
  lVar11 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  uVar12 = *(undefined8 *)((long)param_2 + 0xf);
  cVar3 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar13 = *(long *)(lVar11 + 0x58);
  local_78 = (undefined7)uVar2;
  uStack_71 = (undefined1)uVar12;
  if (lVar13 == 0) {
    if (cVar3 < '\0') {
      if (*(long *)(lVar4 + 0x28) == lVar10) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_00406dd0;
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x78);
    if (lVar11 == 0) {
      puVar9 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar9 + 0x27) = cVar3;
      *puVar9 = &PTR_FUN_00d19f80;
      puVar9[1] = this;
      puVar9[2] = pvVar1;
      puVar9[3] = CONCAT17(uStack_71,local_78);
      *(undefined8 *)((long)puVar9 + 0x1f) = uVar12;
      if (*(long *)(lVar4 + 0x28) == lVar10) {
        FUN_00512cf8(lVar13,puVar9);
        return;
      }
      goto LAB_00406dd0;
    }
    uVar7 = FUN_005ce36c();
    pcVar8 = (char *)operator_new(0x20);
    uVar6 = s_AddDirectVideoOutputSink_001ec8a8._16_8_;
    uVar5 = s_AddDirectVideoOutputSink_001ec8a8._8_8_;
    uVar2 = s_AddDirectVideoOutputSink_001ec8a8._0_8_;
    if ((pcVar8 < "ddDirectVideoOutputSink") && ("AddDirectVideoOutputSink" < pcVar8 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar8[0x18] = '\0';
    *(undefined8 *)(pcVar8 + 8) = uVar5;
    *(undefined8 *)pcVar8 = uVar2;
    *(undefined8 *)(pcVar8 + 0x10) = uVar6;
    puVar9 = (undefined8 *)operator_new(0x68);
    *(char *)((long)puVar9 + 0x27) = cVar3;
    *puVar9 = &PTR_FUN_00d19f58;
    puVar9[1] = this;
    puVar9[2] = pvVar1;
    puVar9[3] = CONCAT17(uStack_71,local_78);
    *(undefined8 *)((long)puVar9 + 0x1f) = uVar12;
    uVar12 = _UNK_001f3238;
    uVar2 = _DAT_001f3230;
    puVar9[5] = pcVar8;
    puVar9[8] = lVar11;
    puVar9[7] = uVar12;
    puVar9[6] = uVar2;
    puVar9[10] = FUN_0040e7ec;
    puVar9[0xb] = &DAT_001f4e70;
    puVar9[0xc] = uVar7;
    FUN_00512cf8(lVar13,puVar9);
  }
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return;
  }
LAB_00406dd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406dd4  Discord::RemoveDirectVideoOutputSink =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::RemoveDirectVideoOutputSink(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::RemoveDirectVideoOutputSink(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined7 local_78;
  undefined1 uStack_71;
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  uVar13 = *(undefined8 *)((long)param_2 + 0xf);
  cVar3 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar14 = *(long *)(lVar12 + 0x58);
  local_78 = (undefined7)uVar2;
  uStack_71 = (undefined1)uVar13;
  if (lVar14 == 0) {
    if (cVar3 < '\0') {
      if (*(long *)(lVar4 + 0x28) == lVar11) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_00406fcc;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x78);
    if (lVar12 == 0) {
      puVar10 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar10 + 0x27) = cVar3;
      *puVar10 = &PTR_FUN_00d19fd0;
      puVar10[1] = this;
      puVar10[2] = pvVar1;
      puVar10[3] = CONCAT17(uStack_71,local_78);
      *(undefined8 *)((long)puVar10 + 0x1f) = uVar13;
      if (*(long *)(lVar4 + 0x28) == lVar11) {
        FUN_00512cf8(lVar14,puVar10);
        return;
      }
      goto LAB_00406fcc;
    }
    uVar8 = FUN_005ce36c();
    pcVar9 = (char *)operator_new(0x20);
    uVar7 = s_RemoveDirectVideoOutputSink_001d897c._19_8_;
    uVar2 = s_RemoveDirectVideoOutputSink_001d897c._0_8_;
    if ((pcVar9 < "emoveDirectVideoOutputSink") && ("RemoveDirectVideoOutputSink" < pcVar9 + 0x1b))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar5 = CONCAT53(s_RemoveDirectVideoOutputSink_001d897c._11_5_,
                     s_RemoveDirectVideoOutputSink_001d897c._8_3_);
    uVar6 = CONCAT35(s_RemoveDirectVideoOutputSink_001d897c._16_3_,
                     s_RemoveDirectVideoOutputSink_001d897c._11_5_);
    pcVar9[0x1b] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar5;
    *(undefined8 *)pcVar9 = uVar2;
    *(undefined8 *)(pcVar9 + 0x13) = uVar7;
    *(undefined8 *)(pcVar9 + 0xb) = uVar6;
    puVar10 = (undefined8 *)operator_new(0x68);
    *(char *)((long)puVar10 + 0x27) = cVar3;
    *puVar10 = &PTR_FUN_00d19fa8;
    puVar10[1] = this;
    puVar10[2] = pvVar1;
    puVar10[3] = CONCAT17(uStack_71,local_78);
    *(undefined8 *)((long)puVar10 + 0x1f) = uVar13;
    uVar13 = _UNK_001f1e78;
    uVar2 = _DAT_001f1e70;
    puVar10[5] = pcVar9;
    puVar10[8] = lVar12;
    puVar10[7] = uVar13;
    puVar10[6] = uVar2;
    puVar10[10] = FUN_0040e7ec;
    puVar10[0xb] = &DAT_001f4e70;
    puVar10[0xc] = uVar8;
    FUN_00512cf8(lVar14,puVar10);
  }
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    return;
  }
LAB_00406fcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00406fd0  Discord::SignalVideoOutputSinkReady =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SignalVideoOutputSinkReady(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::SignalVideoOutputSinkReady(Discord *this,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined7 local_78;
  undefined1 uStack_71;
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)this;
  pvVar1 = (void *)*param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  uVar13 = *(undefined8 *)((long)param_2 + 0xf);
  cVar3 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  lVar14 = *(long *)(lVar12 + 0x58);
  local_78 = (undefined7)uVar2;
  uStack_71 = (undefined1)uVar13;
  if (lVar14 == 0) {
    if (cVar3 < '\0') {
      if (*(long *)(lVar4 + 0x28) == lVar11) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_004071c8;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x78);
    if (lVar12 == 0) {
      puVar10 = (undefined8 *)operator_new(0x28);
      *(char *)((long)puVar10 + 0x27) = cVar3;
      *puVar10 = &PTR_FUN_00d1a020;
      puVar10[1] = this;
      puVar10[2] = pvVar1;
      puVar10[3] = CONCAT17(uStack_71,local_78);
      *(undefined8 *)((long)puVar10 + 0x1f) = uVar13;
      if (*(long *)(lVar4 + 0x28) == lVar11) {
        FUN_00512cf8(lVar14,puVar10);
        return;
      }
      goto LAB_004071c8;
    }
    uVar8 = FUN_005ce36c();
    pcVar9 = (char *)operator_new(0x20);
    uVar7 = s_SignalVideoOutputSinkReady_001cffd1._18_8_;
    uVar2 = s_SignalVideoOutputSinkReady_001cffd1._0_8_;
    if ((pcVar9 < "ignalVideoOutputSinkReady") && ("SignalVideoOutputSinkReady" < pcVar9 + 0x1a)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar5 = CONCAT62(s_SignalVideoOutputSinkReady_001cffd1._10_6_,
                     s_SignalVideoOutputSinkReady_001cffd1._8_2_);
    uVar6 = CONCAT26(s_SignalVideoOutputSinkReady_001cffd1._16_2_,
                     s_SignalVideoOutputSinkReady_001cffd1._10_6_);
    pcVar9[0x1a] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar5;
    *(undefined8 *)pcVar9 = uVar2;
    *(undefined8 *)(pcVar9 + 0x12) = uVar7;
    *(undefined8 *)(pcVar9 + 10) = uVar6;
    puVar10 = (undefined8 *)operator_new(0x68);
    *(char *)((long)puVar10 + 0x27) = cVar3;
    *puVar10 = &PTR_FUN_00d19ff8;
    puVar10[1] = this;
    puVar10[2] = pvVar1;
    puVar10[3] = CONCAT17(uStack_71,local_78);
    *(undefined8 *)((long)puVar10 + 0x1f) = uVar13;
    uVar13 = _UNK_001f1e68;
    uVar2 = _DAT_001f1e60;
    puVar10[5] = pcVar9;
    puVar10[8] = lVar12;
    puVar10[7] = uVar13;
    puVar10[6] = uVar2;
    puVar10[10] = FUN_0040e7ec;
    puVar10[0xb] = &DAT_001f4e70;
    puVar10[0xc] = uVar8;
    FUN_00512cf8(lVar14,puVar10);
  }
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    return;
  }
LAB_004071c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004071cc  Discord::SetAudioInputBypassSystemProcessing =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetAudioInputBypassSystemProcessing(bool) */

void __thiscall Discord::SetAudioInputBypassSystemProcessing(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d1a250;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x30);
    uVar4 = s_SetAudioInputBypassSystemProcess_0019c9c7._24_8_;
    uVar3 = s_SetAudioInputBypassSystemProcess_0019c9c7._16_8_;
    uVar2 = s_SetAudioInputBypassSystemProcess_0019c9c7._8_8_;
    uVar1 = s_SetAudioInputBypassSystemProcess_0019c9c7._0_8_;
    if ((pcVar6 < "etAudioInputBypassSystemProcessing") &&
       ("SetAudioInputBypassSystemProcessing" < pcVar6 + 0x23)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar6[0x23] = '\0';
    pcVar6[0x1f] = 's';
    pcVar6[0x20] = 'i';
    pcVar6[0x21] = 'n';
    pcVar6[0x22] = 'g';
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
    *(undefined8 *)(pcVar6 + 0x18) = uVar4;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar2 = _UNK_001f3528;
    uVar1 = _DAT_001f3520;
    *puVar7 = &PTR_FUN_00d1a228;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar2;
    puVar7[4] = uVar1;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 00407300  Discord::SetSystemMicrophoneModeChangeCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetSystemMicrophoneModeChangeCallback(std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall Discord::SetSystemMicrophoneModeChangeCallback(Discord *this,undefined8 *param_2)

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
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  
  uVar2 = param_2[2];
  puVar17 = (undefined8 *)param_2[3];
  uVar9 = *param_2;
  uVar3 = param_2[1];
  lVar16 = *(long *)this;
  if ((code *)*puVar17 != (code *)0x0) {
    uVar9 = (*(code *)*puVar17)(uVar9);
  }
  lVar15 = *(long *)(lVar16 + 0x58);
  if (lVar15 != 0) {
    lVar16 = *(long *)(lVar16 + 0x78);
    if (lVar16 == 0) {
      puVar13 = (undefined8 *)operator_new(0x30);
      puVar13[2] = uVar9;
      puVar13[3] = uVar3;
      puVar13[4] = uVar2;
      lVar16 = puVar17[1];
      *puVar13 = &PTR_FUN_00d1a2a0;
      puVar13[1] = this;
      puVar13[5] = puVar17;
      if (lVar16 != 0) {
        puVar17 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar15,puVar13);
      UNRECOVERED_JUMPTABLE = (code *)puVar17[1];
      goto joined_r0x00407424;
    }
    uVar10 = FUN_005ce36c();
    puVar13 = puVar17;
    if (puVar17[1] != 0) {
      puVar13 = &DAT_001f1910;
    }
    pcVar11 = (char *)operator_new(0x30);
    uVar8 = s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_;
    uVar7 = s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_;
    uVar6 = s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_;
    if ((pcVar11 < "etSystemMicrophoneModeChangeCallback") &&
       ("SetSystemMicrophoneModeChangeCallback" < pcVar11 + 0x25)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = CONCAT35(s_SetSystemMicrophoneModeChangeCal_001b06b9._29_3_,
                     s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_);
    pcVar11[0x25] = '\0';
    uVar5 = CONCAT53(s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_,
                     s_SetSystemMicrophoneModeChangeCal_001b06b9._29_3_);
    *(undefined8 *)(pcVar11 + 8) = uVar7;
    *(undefined8 *)pcVar11 = uVar6;
    *(undefined8 *)(pcVar11 + 0x18) = uVar4;
    *(undefined8 *)(pcVar11 + 0x10) = uVar8;
    *(undefined8 *)(pcVar11 + 0x1d) = uVar5;
    puVar12 = (undefined8 *)operator_new(0x70);
    puVar12[2] = uVar9;
    puVar12[3] = uVar3;
    puVar12[4] = uVar2;
    puVar12[5] = puVar17;
    uVar3 = _UNK_001f2eb8;
    uVar2 = _DAT_001f2eb0;
    puVar12[0xd] = uVar10;
    lVar14 = puVar17[1];
    puVar12[6] = pcVar11;
    *puVar12 = &PTR_FUN_00d1a278;
    puVar12[1] = this;
    puVar12[8] = uVar3;
    puVar12[7] = uVar2;
    puVar12[9] = lVar16;
    puVar1 = puVar17;
    if (lVar14 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar12[0xb] = FUN_0040e7ec;
    puVar12[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar15,puVar12);
    puVar17 = puVar13;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar13[1];
      goto joined_r0x00407424;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar17[1];
joined_r0x00407424:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[1] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[2] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[3] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,3);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[4] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,4);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[5] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,5);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[6] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,6);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[7] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._0_8_,7);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[8] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[9] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[10] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0xb] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,3);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0xc] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,4);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0xd] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,5);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0xe] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,6);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0xf] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._8_8_,7);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x10] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x11] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x12] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x13] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,3);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x14] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,4);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x15] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,5);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x16] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,6);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x17] =
         SUB81(s_SetSystemMicrophoneModeChangeCal_001b06b9._16_8_,7);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x18] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x19] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1a] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1b] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_,3);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1c] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._24_5_,4);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1d] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._29_3_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1e] =
         SUB31(s_SetSystemMicrophoneModeChangeCal_001b06b9._29_3_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x1f] =
         SUB31(s_SetSystemMicrophoneModeChangeCal_001b06b9._29_3_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x20] =
         (char)s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_;
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x21] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_,1);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x22] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_,2);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x23] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_,3);
    s_SetSystemMicrophoneModeChangeCal_001b06b9[0x24] =
         SUB51(s_SetSystemMicrophoneModeChangeCal_001b06b9._32_5_,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00407454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar9);
  return;
}


// ===== 004074e4  Discord::GetSystemMicrophoneMode =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetSystemMicrophoneMode(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall Discord::GetSystemMicrophoneMode(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  uVar2 = param_2[2];
  puVar15 = (undefined8 *)param_2[3];
  uVar7 = *param_2;
  uVar3 = param_2[1];
  lVar14 = *(long *)this;
  if ((code *)*puVar15 != (code *)0x0) {
    uVar7 = (*(code *)*puVar15)(uVar7);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x30);
      puVar11[2] = uVar7;
      puVar11[3] = uVar3;
      puVar11[4] = uVar2;
      lVar14 = puVar15[1];
      *puVar11 = &PTR_FUN_00d1a2f0;
      puVar11[1] = this;
      puVar11[5] = puVar15;
      if (lVar14 != 0) {
        puVar15 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
      goto joined_r0x00407608;
    }
    uVar8 = FUN_005ce36c();
    puVar11 = puVar15;
    if (puVar15[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    pcVar9 = (char *)operator_new(0x20);
    uVar6 = s_GetSystemMicrophoneMode_001b3330._0_8_;
    if ((pcVar9 < "etSystemMicrophoneMode") && ("GetSystemMicrophoneMode" < pcVar9 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = CONCAT17(s_GetSystemMicrophoneMode_001b3330[0xf],
                     s_GetSystemMicrophoneMode_001b3330._8_7_);
    uVar5 = CONCAT71(s_GetSystemMicrophoneMode_001b3330._16_7_,
                     s_GetSystemMicrophoneMode_001b3330[0xf]);
    pcVar9[0x17] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    *(undefined8 *)pcVar9 = uVar6;
    *(undefined8 *)(pcVar9 + 0xf) = uVar5;
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar10[2] = uVar7;
    puVar10[3] = uVar3;
    puVar10[4] = uVar2;
    puVar10[5] = puVar15;
    uVar3 = _UNK_001f3b08;
    uVar2 = _DAT_001f3b00;
    puVar10[0xd] = uVar8;
    lVar12 = puVar15[1];
    puVar10[6] = pcVar9;
    *puVar10 = &PTR_FUN_00d1a2c8;
    puVar10[1] = this;
    puVar10[8] = uVar3;
    puVar10[7] = uVar2;
    puVar10[9] = lVar14;
    puVar1 = puVar15;
    if (lVar12 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar13,puVar10);
    puVar15 = puVar11;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar7);
      UNRECOVERED_JUMPTABLE = (code *)puVar11[1];
      goto joined_r0x00407608;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
joined_r0x00407608:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_GetSystemMicrophoneMode_001b3330[0] = (char)s_GetSystemMicrophoneMode_001b3330._0_8_;
    s_GetSystemMicrophoneMode_001b3330[1] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,1);
    s_GetSystemMicrophoneMode_001b3330[2] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,2);
    s_GetSystemMicrophoneMode_001b3330[3] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,3);
    s_GetSystemMicrophoneMode_001b3330[4] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,4);
    s_GetSystemMicrophoneMode_001b3330[5] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,5);
    s_GetSystemMicrophoneMode_001b3330[6] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,6);
    s_GetSystemMicrophoneMode_001b3330[7] = SUB81(s_GetSystemMicrophoneMode_001b3330._0_8_,7);
    s_GetSystemMicrophoneMode_001b3330[8] = (char)s_GetSystemMicrophoneMode_001b3330._8_7_;
    s_GetSystemMicrophoneMode_001b3330[9] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,1);
    s_GetSystemMicrophoneMode_001b3330[10] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,2);
    s_GetSystemMicrophoneMode_001b3330[0xb] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,3);
    s_GetSystemMicrophoneMode_001b3330[0xc] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,4);
    s_GetSystemMicrophoneMode_001b3330[0xd] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,5);
    s_GetSystemMicrophoneMode_001b3330[0xe] = SUB71(s_GetSystemMicrophoneMode_001b3330._8_7_,6);
    s_GetSystemMicrophoneMode_001b3330[0x10] = (char)s_GetSystemMicrophoneMode_001b3330._16_7_;
    s_GetSystemMicrophoneMode_001b3330[0x11] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,1);
    s_GetSystemMicrophoneMode_001b3330[0x12] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,2);
    s_GetSystemMicrophoneMode_001b3330[0x13] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,3);
    s_GetSystemMicrophoneMode_001b3330[0x14] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,4);
    s_GetSystemMicrophoneMode_001b3330[0x15] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,5);
    s_GetSystemMicrophoneMode_001b3330[0x16] = SUB71(s_GetSystemMicrophoneMode_001b3330._16_7_,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00407638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar7);
  return;
}


// ===== 004076c8  Discord::GetDeviceOSVolume =====

/* Discord::GetDeviceOSVolume(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::function<void (std::__Cr::optional<float>)>) */

void __thiscall Discord::GetDeviceOSVolume(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) == '\0') {
    local_30 = 0;
    (**(code **)(param_3 + 0x10))(param_3,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00407728  Discord::GetDeviceOSMuted =====

/* Discord::GetDeviceOSMuted(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::function<void (std::__Cr::optional<bool>)>) */

void __thiscall Discord::GetDeviceOSMuted(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined2 local_30 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) == '\0') {
    local_30[0] = 0;
    (**(code **)(param_3 + 0x10))(param_3,local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00407788  Discord::SetDeviceHardwareMutedChangeCallback =====

/* Discord::SetDeviceHardwareMutedChangeCallback(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, std::__Cr::function<void
   (std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >,
   std::__Cr::optional<bool>)>) */

void Discord::SetDeviceHardwareMutedChangeCallback(void)

{
  return;
}


// ===== 0040778c  Discord::GetDeviceAudioEffects =====

/* WARNING: Removing unreachable block (ram,0x00407830) */
/* WARNING: Removing unreachable block (ram,0x0040787c) */
/* Discord::GetDeviceAudioEffects(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::function<void
   (std::__Cr::optional<discord::DeviceAudioEffectsResult>)>) */

void __thiscall Discord::GetDeviceAudioEffects(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_70;
  undefined7 uStack_6f;
  long local_68;
  void *local_58;
  void *local_50;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x18) + 0x10) == '\0') {
    local_70 = 0;
    local_40 = '\0';
    (**(code **)(param_3 + 0x10))(param_3,&local_70);
    if (local_40 != '\0') {
      if (local_58 != (void *)0x0) {
        for (; local_50 != local_58; local_50 = (void *)((long)local_50 + -0x18)) {
        }
        local_50 = local_58;
        operator_delete(local_58);
      }
      lVar2 = CONCAT71(uStack_6f,local_70);
      if (lVar2 != 0) {
        for (; local_68 != lVar2; local_68 = local_68 + -0x18) {
        }
        local_68 = lVar2;
        operator_delete((void *)CONCAT71(uStack_6f,local_70));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040789c  Discord::ShowSystemCaptureConfigurationUI =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::ShowSystemCaptureConfigurationUI(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >) */

void __thiscall Discord::ShowSystemCaptureConfigurationUI(Discord *this,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  Discord *pDVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  Discord *local_90;
  undefined8 *puStack_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  byte local_71;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)((ulong)&local_90 | 8);
  lVar14 = *(long *)this;
  local_90 = this;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar10 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_71 = (byte)uVar2;
      puVar7 = puVar13;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      local_71 = (byte)(uVar1 >> 0x38) | 0x80;
      local_80 = (undefined7)uVar2;
      uStack_79 = (undefined1)(uVar2 >> 0x38);
      uStack_78 = (undefined7)uVar1;
      puStack_88 = puVar7;
    }
    if ((puVar7 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar7 + uVar2 + 1)))
    goto LAB_00407aac;
    memmove(puVar7,puVar10,uVar2 + 1);
    lVar12 = *(long *)(lVar14 + 0x58);
  }
  else {
    uVar15 = *param_2;
    uVar11 = param_2[2];
    puVar13[1] = param_2[1];
    *puVar13 = uVar15;
    puVar13[2] = uVar11;
    lVar12 = *(long *)(lVar14 + 0x58);
  }
  if (lVar12 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar10 = (undefined8 *)operator_new(0x28);
      uVar16 = puVar13[1];
      uVar15 = *puVar13;
      uVar11 = puVar13[2];
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar10[3] = uVar16;
      puVar10[2] = uVar15;
      *puVar10 = &PTR_FUN_00d1a340;
      puVar10[1] = this;
      puVar10[4] = uVar11;
      puVar13[2] = 0;
    }
    else {
      uVar8 = FUN_005ce36c();
      bVar6 = local_71;
      puVar7 = puStack_88;
      pDVar5 = local_90;
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      local_68 = local_80;
      uStack_61 = uStack_79;
      uStack_60 = uStack_78;
      pcVar9 = (char *)operator_new(0x30);
      uVar4 = s_ShowSystemCaptureConfigurationUI_0019c9eb._24_8_;
      uVar16 = s_ShowSystemCaptureConfigurationUI_0019c9eb._16_8_;
      uVar15 = s_ShowSystemCaptureConfigurationUI_0019c9eb._8_8_;
      uVar11 = s_ShowSystemCaptureConfigurationUI_0019c9eb._0_8_;
      if ((pcVar9 < "howSystemCaptureConfigurationUI") &&
         ("ShowSystemCaptureConfigurationUI" < pcVar9 + 0x20)) {
LAB_00407aac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      pcVar9[0x20] = '\0';
      *(undefined8 *)(pcVar9 + 8) = uVar15;
      *(undefined8 *)pcVar9 = uVar11;
      *(undefined8 *)(pcVar9 + 0x18) = uVar4;
      *(undefined8 *)(pcVar9 + 0x10) = uVar16;
      puVar10 = (undefined8 *)operator_new(0x68);
      *(byte *)((long)puVar10 + 0x27) = bVar6;
      *puVar10 = &PTR_FUN_00d1a318;
      puVar10[3] = CONCAT17(uStack_61,local_68);
      puVar10[2] = puVar7;
      puVar10[1] = pDVar5;
      uVar15 = _UNK_001f2178;
      uVar11 = _DAT_001f2170;
      *(ulong *)((long)puVar10 + 0x1f) = CONCAT71(uStack_60,uStack_61);
      puVar10[5] = pcVar9;
      puVar10[7] = uVar15;
      puVar10[6] = uVar11;
      puVar10[8] = lVar14;
      puVar10[10] = FUN_0040e7ec;
      puVar10[0xb] = &DAT_001f4e70;
      puVar10[0xc] = uVar8;
    }
    FUN_00512cf8(lVar12,puVar10);
  }
  if ((char)local_71 < '\0') {
    operator_delete(puStack_88);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00407adc  Discord::SetMicVolume =====

/* Discord::SetMicVolume(float) */

void __thiscall Discord::SetMicVolume(Discord *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_9c;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(float *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d1a390;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_00407ca4;
    }
    uVar3 = FUN_005ce36c();
    local_88 = CONCAT17(0xc,(undefined7)local_88);
    if ((&local_98 < (void **)0x1bee22) && ("SetMicVolume" < (char *)((long)&uStack_90 + 4U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)uStack_90 >> 0x20;
    uStack_90 = CONCAT44((uint)uVar2 & 0xffffff00,0x656d756c);
    local_98 = (void *)s_SetMicVolume_001bee21._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar6;
    local_60 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT44(uStack_9c,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d1a368;
    puVar4[4] = uStack_90;
    puVar4[3] = local_98;
    puVar4[5] = local_88;
    puVar4[7] = uStack_78;
    puVar4[6] = local_80;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00407ca4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00407ca8  Discord::SetSpeakerVolume =====

/* Discord::SetSpeakerVolume(float) */

void __thiscall Discord::SetSpeakerVolume(Discord *this,float param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_9c;
  void *local_98;
  char acStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(float *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d1a3e0;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00407e64;
    }
    uVar2 = FUN_005ce36c();
    local_88 = CONCAT17(0x10,(undefined7)local_88);
    if ((&local_98 < (void **)0x1ca4a4) && ("SetSpeakerVolume" < &local_88)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_88 = local_88 & 0xffffffffffffff00;
    acStack_90[0] = s_SetSpeakerVolume_001ca4a3[8];
    acStack_90[1] = s_SetSpeakerVolume_001ca4a3[9];
    acStack_90[2] = s_SetSpeakerVolume_001ca4a3[10];
    acStack_90[3] = s_SetSpeakerVolume_001ca4a3[0xb];
    acStack_90[4] = s_SetSpeakerVolume_001ca4a3[0xc];
    acStack_90[5] = s_SetSpeakerVolume_001ca4a3[0xd];
    acStack_90[6] = s_SetSpeakerVolume_001ca4a3[0xe];
    acStack_90[7] = s_SetSpeakerVolume_001ca4a3[0xf];
    local_98 = (void *)s_SetSpeakerVolume_001ca4a3._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar5;
    local_60 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT44(uStack_9c,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d1a3b8;
    puVar3[4] = acStack_90;
    puVar3[3] = local_98;
    puVar3[5] = local_88;
    puVar3[7] = uStack_78;
    puVar3[6] = local_80;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_98 = (void *)0x0;
    acStack_90[0] = '\0';
    acStack_90[1] = '\0';
    acStack_90[2] = '\0';
    acStack_90[3] = '\0';
    acStack_90[4] = '\0';
    acStack_90[5] = '\0';
    acStack_90[6] = '\0';
    acStack_90[7] = '\0';
    local_88 = 0;
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if ((long)local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00407e64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00407e68  Discord::SetNoAudioInputThreshold =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetNoAudioInputThreshold(float) */

void __thiscall Discord::SetNoAudioInputThreshold(Discord *this,float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(float *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d1a430;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetNoAudioInputThreshold_001a5b4a._16_8_;
    uVar2 = s_SetNoAudioInputThreshold_001a5b4a._8_8_;
    uVar1 = s_SetNoAudioInputThreshold_001a5b4a._0_8_;
    if ((pcVar5 < "etNoAudioInputThreshold") && ("SetNoAudioInputThreshold" < pcVar5 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar5[0x18] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar2;
    *(undefined8 *)pcVar5 = uVar1;
    *(undefined8 *)(pcVar5 + 0x10) = uVar3;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(float *)(puVar6 + 2) = param_1;
    uVar2 = _UNK_001f3238;
    uVar1 = _DAT_001f3230;
    *puVar6 = &PTR_FUN_00d1a408;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar2;
    puVar6[4] = uVar1;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 00407fa4  Discord::SetVoiceSampleRateCap =====

/* Discord::SetVoiceSampleRateCap(unsigned int) */

void __thiscall Discord::SetVoiceSampleRateCap(Discord *this,uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_8c;
  void *local_88;
  char acStack_80 [16];
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(uint *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d1a480;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_0040815c;
    }
    uVar2 = FUN_005ce36c();
    acStack_80[0xf] = 0x15;
    if ((&local_88 < (void **)0x1ab228) && ("SetVoiceSampleRateCap" < acStack_80 + 0xd)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    acStack_80[0xd] = 0;
    acStack_80[0] = s_SetVoiceSampleRateCap_001ab227[8];
    acStack_80[1] = s_SetVoiceSampleRateCap_001ab227[9];
    acStack_80[2] = s_SetVoiceSampleRateCap_001ab227[10];
    acStack_80[3] = s_SetVoiceSampleRateCap_001ab227[0xb];
    acStack_80[4] = s_SetVoiceSampleRateCap_001ab227[0xc];
    local_88 = (void *)s_SetVoiceSampleRateCap_001ab227._0_8_;
    acStack_80[5] = s_SetVoiceSampleRateCap_001ab227[0xd];
    acStack_80[6] = s_SetVoiceSampleRateCap_001ab227[0xe];
    acStack_80[7] = s_SetVoiceSampleRateCap_001ab227[0xf];
    acStack_80[8] = s_SetVoiceSampleRateCap_001ab227[0x10];
    acStack_80[9] = s_SetVoiceSampleRateCap_001ab227[0x11];
    acStack_80[10] = s_SetVoiceSampleRateCap_001ab227[0x12];
    acStack_80[0xb] = s_SetVoiceSampleRateCap_001ab227[0x13];
    acStack_80[0xc] = s_SetVoiceSampleRateCap_001ab227[0x14];
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT44(uStack_8c,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d1a458;
    puVar3[4] = CONCAT35(acStack_80._5_3_,acStack_80._0_5_);
    puVar3[3] = local_88;
    puVar3[5] = CONCAT17(acStack_80[0xf],
                         CONCAT16(acStack_80[0xe],CONCAT15(acStack_80[0xd],acStack_80._8_5_)));
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = 0;
    acStack_80[0xe] = 0;
    acStack_80[0xf] = '\0';
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (acStack_80[0xf] < '\0') {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0040815c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408160  Discord::SetVoiceChannelCountCap =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetVoiceChannelCountCap(unsigned int) */

void __thiscall Discord::SetVoiceChannelCountCap(Discord *this,uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(uint *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d1a4d0;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetVoiceChannelCountCap_001cd653._0_8_;
    if ((pcVar5 < "etVoiceChannelCountCap") && ("SetVoiceChannelCountCap" < pcVar5 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetVoiceChannelCountCap_001cd653[0xf],
                     s_SetVoiceChannelCountCap_001cd653._8_7_);
    uVar2 = CONCAT71(s_SetVoiceChannelCountCap_001cd653._16_7_,
                     s_SetVoiceChannelCountCap_001cd653[0xf]);
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar1;
    *(undefined8 *)pcVar5 = uVar3;
    *(undefined8 *)(pcVar5 + 0xf) = uVar2;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(uint *)(puVar6 + 2) = param_1;
    uVar1 = _UNK_001f3b08;
    uVar3 = _DAT_001f3b00;
    *puVar6 = &PTR_FUN_00d1a4a8;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar1;
    puVar6[4] = uVar3;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 00408290  Discord::SetNoAudioInputCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetNoAudioInputCallback(std::__Cr::function<void (bool)>) */

void __thiscall Discord::SetNoAudioInputCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  uVar2 = param_2[2];
  puVar15 = (undefined8 *)param_2[3];
  uVar7 = *param_2;
  uVar3 = param_2[1];
  lVar14 = *(long *)this;
  if ((code *)*puVar15 != (code *)0x0) {
    uVar7 = (*(code *)*puVar15)(uVar7);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x30);
      puVar11[2] = uVar7;
      puVar11[3] = uVar3;
      puVar11[4] = uVar2;
      lVar14 = puVar15[1];
      *puVar11 = &PTR_FUN_00d1a520;
      puVar11[1] = this;
      puVar11[5] = puVar15;
      if (lVar14 != 0) {
        puVar15 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
      goto joined_r0x004083b4;
    }
    uVar8 = FUN_005ce36c();
    puVar11 = puVar15;
    if (puVar15[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    pcVar9 = (char *)operator_new(0x20);
    uVar6 = s_SetNoAudioInputCallback_0019f929._0_8_;
    if ((pcVar9 < "etNoAudioInputCallback") && ("SetNoAudioInputCallback" < pcVar9 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = CONCAT17(s_SetNoAudioInputCallback_0019f929[0xf],
                     s_SetNoAudioInputCallback_0019f929._8_7_);
    uVar5 = CONCAT71(s_SetNoAudioInputCallback_0019f929._16_7_,
                     s_SetNoAudioInputCallback_0019f929[0xf]);
    pcVar9[0x17] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    *(undefined8 *)pcVar9 = uVar6;
    *(undefined8 *)(pcVar9 + 0xf) = uVar5;
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar10[2] = uVar7;
    puVar10[3] = uVar3;
    puVar10[4] = uVar2;
    puVar10[5] = puVar15;
    uVar3 = _UNK_001f3b08;
    uVar2 = _DAT_001f3b00;
    puVar10[0xd] = uVar8;
    lVar12 = puVar15[1];
    puVar10[6] = pcVar9;
    *puVar10 = &PTR_FUN_00d1a4f8;
    puVar10[1] = this;
    puVar10[8] = uVar3;
    puVar10[7] = uVar2;
    puVar10[9] = lVar14;
    puVar1 = puVar15;
    if (lVar12 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar13,puVar10);
    puVar15 = puVar11;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar7);
      UNRECOVERED_JUMPTABLE = (code *)puVar11[1];
      goto joined_r0x004083b4;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
joined_r0x004083b4:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetNoAudioInputCallback_0019f929[0] = (char)s_SetNoAudioInputCallback_0019f929._0_8_;
    s_SetNoAudioInputCallback_0019f929[1] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,1);
    s_SetNoAudioInputCallback_0019f929[2] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,2);
    s_SetNoAudioInputCallback_0019f929[3] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,3);
    s_SetNoAudioInputCallback_0019f929[4] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,4);
    s_SetNoAudioInputCallback_0019f929[5] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,5);
    s_SetNoAudioInputCallback_0019f929[6] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,6);
    s_SetNoAudioInputCallback_0019f929[7] = SUB81(s_SetNoAudioInputCallback_0019f929._0_8_,7);
    s_SetNoAudioInputCallback_0019f929[8] = (char)s_SetNoAudioInputCallback_0019f929._8_7_;
    s_SetNoAudioInputCallback_0019f929[9] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,1);
    s_SetNoAudioInputCallback_0019f929[10] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,2);
    s_SetNoAudioInputCallback_0019f929[0xb] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,3);
    s_SetNoAudioInputCallback_0019f929[0xc] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,4);
    s_SetNoAudioInputCallback_0019f929[0xd] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,5);
    s_SetNoAudioInputCallback_0019f929[0xe] = SUB71(s_SetNoAudioInputCallback_0019f929._8_7_,6);
    s_SetNoAudioInputCallback_0019f929[0x10] = (char)s_SetNoAudioInputCallback_0019f929._16_7_;
    s_SetNoAudioInputCallback_0019f929[0x11] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,1);
    s_SetNoAudioInputCallback_0019f929[0x12] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,2);
    s_SetNoAudioInputCallback_0019f929[0x13] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,3);
    s_SetNoAudioInputCallback_0019f929[0x14] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,4);
    s_SetNoAudioInputCallback_0019f929[0x15] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,5);
    s_SetNoAudioInputCallback_0019f929[0x16] = SUB71(s_SetNoAudioInputCallback_0019f929._16_7_,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004083e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar7);
  return;
}


// ===== 00408474  Discord::SetLocalVoiceLevelChangedCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetLocalVoiceLevelChangedCallback(std::__Cr::function<void (float, unsigned int)>
   const&) */

void __thiscall Discord::SetLocalVoiceLevelChangedCallback(Discord *this,function *param_1)

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
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  long lVar14;
  
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar7 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar14 = *(long *)this;
  if ((code *)*puVar1 != (code *)0x0) {
    uVar7 = (*(code *)*puVar1)(uVar7);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x30);
      puVar11[2] = uVar7;
      puVar11[3] = uVar2;
      puVar11[4] = uVar12;
      UNRECOVERED_JUMPTABLE = (code *)*puVar1;
      puVar11[5] = puVar1;
      *puVar11 = &PTR_FUN_00d1a570;
      puVar11[1] = this;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar12 = (*UNRECOVERED_JUMPTABLE)(uVar7);
        puVar11[2] = uVar12;
      }
      FUN_00512cf8(lVar13,puVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar1[1];
      goto joined_r0x0040861c;
    }
    uVar8 = FUN_005ce36c();
    uVar9 = uVar7;
    if ((code *)*puVar1 != (code *)0x0) {
      uVar9 = (*(code *)*puVar1)(uVar7);
    }
    pcVar10 = (char *)operator_new(0x30);
    uVar6 = s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_;
    uVar5 = s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_;
    uVar4 = s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_;
    uVar3 = s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_;
    if ((pcVar10 < "etLocalVoiceLevelChangedCallback") &&
       ("SetLocalVoiceLevelChangedCallback" < pcVar10 + 0x21)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar10[0x20] = 'k';
    pcVar10[0x21] = '\0';
    *(undefined8 *)(pcVar10 + 8) = uVar4;
    *(undefined8 *)pcVar10 = uVar3;
    *(undefined8 *)(pcVar10 + 0x18) = uVar6;
    *(undefined8 *)(pcVar10 + 0x10) = uVar5;
    puVar11 = (undefined8 *)operator_new(0x70);
    puVar11[2] = uVar9;
    puVar11[3] = uVar2;
    puVar11[4] = uVar12;
    UNRECOVERED_JUMPTABLE = (code *)*puVar1;
    puVar11[5] = puVar1;
    *puVar11 = &PTR_FUN_00d1a548;
    puVar11[1] = this;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar12 = (*UNRECOVERED_JUMPTABLE)(uVar9);
      puVar11[2] = uVar12;
    }
    uVar2 = _UNK_001f48b8;
    uVar12 = _DAT_001f48b0;
    puVar11[6] = pcVar10;
    puVar11[9] = lVar14;
    puVar11[0xb] = FUN_0040e7ec;
    puVar11[0xc] = &DAT_001f4e70;
    puVar11[8] = uVar2;
    puVar11[7] = uVar12;
    puVar11[0xd] = uVar8;
    FUN_00512cf8(lVar13,puVar11);
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar9);
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar1[1];
joined_r0x0040861c:
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004085d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar7);
    return;
  }
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0] =
       (char)s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_;
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[1] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,1);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[2] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,2);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[3] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,3);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[4] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,4);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[5] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,5);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[6] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,6);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[7] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._0_8_,7);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[8] =
       (char)s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_;
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[9] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,1);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[10] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,2);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0xb] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,3);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0xc] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,4);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0xd] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,5);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0xe] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,6);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0xf] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._8_8_,7);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x10] =
       (char)s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_;
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x11] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,1);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x12] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,2);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x13] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,3);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x14] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,4);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x15] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,5);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x16] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,6);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x17] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._16_8_,7);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x18] =
       (char)s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_;
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x19] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,1);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1a] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,2);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1b] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,3);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1c] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,4);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1d] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,5);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1e] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,6);
  s_SetLocalVoiceLevelChangedCallbac_001ef38f[0x1f] =
       SUB81(s_SetLocalVoiceLevelChangedCallbac_001ef38f._24_8_,7);
  return;
}


// ===== 00408668  Discord::SetDuckingPreference =====

/* Discord::SetDuckingPreference(bool) */

void __thiscall Discord::SetDuckingPreference(Discord *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined7 uStack_8f;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d1a5c0;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_00408824;
    }
    uVar3 = FUN_005ce36c();
    local_78 = CONCAT17(0x14,(undefined7)local_78);
    if ((&local_88 < (void **)0x1bc233) && ("SetDuckingPreference" < (char *)((long)&local_78 + 4U))
       ) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)local_78 >> 0x20;
    local_78 = CONCAT44((uint)uVar2 & 0xffffff00,0x65636e65);
    acStack_80[0] = s_SetDuckingPreference_001bc232[8];
    acStack_80[1] = s_SetDuckingPreference_001bc232[9];
    acStack_80[2] = s_SetDuckingPreference_001bc232[10];
    acStack_80[3] = s_SetDuckingPreference_001bc232[0xb];
    acStack_80[4] = s_SetDuckingPreference_001bc232[0xc];
    acStack_80[5] = s_SetDuckingPreference_001bc232[0xd];
    acStack_80[6] = s_SetDuckingPreference_001bc232[0xe];
    acStack_80[7] = s_SetDuckingPreference_001bc232[0xf];
    local_88 = (void *)s_SetDuckingPreference_001bc232._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar6;
    local_50 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT71(uStack_8f,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d1a598;
    puVar4[4] = acStack_80;
    puVar4[3] = local_88;
    puVar4[5] = local_78;
    puVar4[7] = uStack_68;
    puVar4[6] = local_70;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00408824:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408828  Discord::GetCodecCapabilities =====

/* Discord::GetCodecCapabilities(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&)>) const */

void __thiscall Discord::GetCodecCapabilities(Discord *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2[2];
  local_b0 = (undefined8 *)param_2[3];
  lVar10 = *(long *)this;
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00417780;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  puVar9 = local_b0;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar14 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar14;
      puVar9[4] = uVar1;
      puVar9[5] = local_b0;
      *puVar9 = &PTR_FUN_00d1a610;
      puVar9[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      pcVar11 = (code *)local_b0[1];
      goto joined_r0x004089e0;
    }
    uVar7 = FUN_005ce36c();
    if (local_b0[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    local_98 = CONCAT17(0x14,(undefined7)local_98);
    if ((&local_a8 < (void **)0x1a2ccc) && ("GetCodecCapabilities" < (char *)((long)&local_98 + 4U))
       ) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar3 = (ulong)local_98 >> 0x20;
    local_98 = CONCAT44((uint)uVar3 & 0xffffff00,0x73656974);
    uStack_a0._0_1_ = s_GetCodecCapabilities_001a2ccb[8];
    uStack_a0._1_1_ = s_GetCodecCapabilities_001a2ccb[9];
    uStack_a0._2_1_ = s_GetCodecCapabilities_001a2ccb[10];
    uStack_a0._3_1_ = s_GetCodecCapabilities_001a2ccb[0xb];
    uStack_a0._4_1_ = s_GetCodecCapabilities_001a2ccb[0xc];
    uStack_a0._5_1_ = s_GetCodecCapabilities_001a2ccb[0xd];
    uStack_a0._6_1_ = s_GetCodecCapabilities_001a2ccb[0xe];
    uStack_a0._7_1_ = s_GetCodecCapabilities_001a2ccb[0xf];
    local_a8 = (void *)s_GetCodecCapabilities_001a2ccb._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar10;
    local_70 = uVar7;
    puVar8 = (undefined8 *)operator_new(0x70);
    uVar6 = local_98;
    uVar5 = uStack_a0;
    pvVar4 = local_a8;
    puVar8[4] = uVar1;
    puVar8[5] = local_b0;
    puVar8[3] = uVar14;
    puVar8[2] = uVar12;
    *puVar8 = &PTR_FUN_00d1a5e8;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    uStack_a0 = 0;
    local_98 = 0;
    local_a8 = (void *)0x0;
    puVar8[8] = uVar6;
    puVar8[7] = uVar5;
    puVar8[6] = pvVar4;
    puVar8[0xd] = uVar7;
    puVar8[10] = uStack_88;
    puVar8[9] = local_90;
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar13);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
    if ((code *)local_b0[1] != (code *)0x0) {
      (*(code *)local_b0[1])(uVar12);
    }
  }
  pcVar11 = (code *)puVar9[1];
joined_r0x004089e0:
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar12);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408a88  Discord::GetCodecSurvey =====

/* Discord::GetCodecSurvey(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&)>) const */

void __thiscall Discord::GetCodecSurvey(Discord *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *local_b0;
  undefined6 local_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  char cStack_9a;
  undefined1 uStack_99;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2[2];
  local_b0 = (undefined8 *)param_2[3];
  lVar7 = *(long *)this;
  if (local_b0[1] != 0) {
    param_2[2] = FUN_00417780;
    param_2[3] = &DAT_001f1910;
  }
  lVar10 = *(long *)(lVar7 + 0x58);
  uVar9 = *param_2;
  puVar6 = local_b0;
  if (lVar10 != 0) {
    lVar7 = *(long *)(lVar7 + 0x78);
    uVar11 = param_2[1];
    if (lVar7 == 0) {
      puVar6 = (undefined8 *)operator_new(0x30);
      puVar6[2] = uVar9;
      puVar6[3] = uVar11;
      puVar6[4] = uVar1;
      puVar6[5] = local_b0;
      *puVar6 = &PTR_FUN_00d1a680;
      puVar6[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar10,puVar6);
      pcVar8 = (code *)local_b0[1];
      goto joined_r0x00408c3c;
    }
    uVar4 = FUN_005ce36c();
    if (local_b0[1] != 0) {
      puVar6 = &DAT_001f1910;
    }
    local_98 = CONCAT17(0xe,(undefined7)local_98);
    if ((&local_a8 < "etCodecSurvey") && ("GetCodecSurvey" < &cStack_9a)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    cStack_9a = '\0';
    local_a8._0_1_ = s_GetCodecSurvey_001d8998[0];
    local_a8._1_1_ = s_GetCodecSurvey_001d8998[1];
    local_a8._2_1_ = s_GetCodecSurvey_001d8998[2];
    local_a8._3_1_ = s_GetCodecSurvey_001d8998[3];
    local_a8._4_1_ = s_GetCodecSurvey_001d8998[4];
    local_a8._5_1_ = s_GetCodecSurvey_001d8998[5];
    uStack_a2._0_1_ = s_GetCodecSurvey_001d8998[6];
    uStack_a2._1_1_ = s_GetCodecSurvey_001d8998[7];
    uStack_a0._0_1_ = s_GetCodecSurvey_001d8998[8];
    uStack_a0._1_1_ = s_GetCodecSurvey_001d8998[9];
    uStack_a0._2_1_ = s_GetCodecSurvey_001d8998[10];
    uStack_a0._3_1_ = s_GetCodecSurvey_001d8998[0xb];
    uStack_a0._4_1_ = s_GetCodecSurvey_001d8998[0xc];
    uStack_a0._5_1_ = s_GetCodecSurvey_001d8998[0xd];
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar7;
    local_70 = uVar4;
    puVar5 = (undefined8 *)operator_new(0x70);
    uVar3 = local_98;
    puVar5[4] = uVar1;
    puVar5[5] = local_b0;
    puVar5[3] = uVar11;
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_00d1a638;
    puVar5[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    uVar11 = CONCAT17(uStack_99,CONCAT16(cStack_9a,uStack_a0));
    uVar1 = CONCAT26(uStack_a2,local_a8);
    uStack_a0 = 0;
    cStack_9a = '\0';
    uStack_99 = 0;
    local_98 = 0;
    local_a8 = 0;
    uStack_a2 = 0;
    puVar5[8] = uVar3;
    puVar5[7] = uVar11;
    puVar5[6] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[10] = uStack_88;
    puVar5[9] = local_90;
    puVar5[0xb] = FUN_0040e7ec;
    puVar5[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar10);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete((void *)CONCAT26(uStack_a2,local_a8));
    }
    if ((code *)local_b0[1] != (code *)0x0) {
      (*(code *)local_b0[1])(uVar9);
    }
  }
  pcVar8 = (code *)puVar6[1];
joined_r0x00408c3c:
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar9);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408ce4  Discord::SetAudioMixerOptions =====

/* Discord::SetAudioMixerOptions(discord::media::AudioMixerOptions) */

void __thiscall Discord::SetAudioMixerOptions(Discord *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 uStack_8f;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 2);
  lVar6 = *(long *)(*(long *)this + 0x58);
  if (lVar6 != 0) {
    lVar7 = *(long *)(*(long *)this + 0x78);
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)operator_new(0x28);
      uVar8 = *param_2;
      uVar1 = *(undefined1 *)(param_2 + 2);
      puVar5[3] = param_2[1];
      puVar5[2] = uVar8;
      *puVar5 = &PTR_FUN_00d1a6d0;
      puVar5[1] = this;
      *(undefined1 *)(puVar5 + 4) = uVar1;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        FUN_00512cf8(lVar6,puVar5);
        return;
      }
      goto LAB_00408ed0;
    }
    uVar4 = FUN_005ce36c();
    local_78 = CONCAT17(0x14,(undefined7)local_78);
    if ((&local_88 < (void **)0x1ab23e) && ("SetAudioMixerOptions" < (char *)((long)&local_78 + 4U))
       ) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar3 = (ulong)local_78 >> 0x20;
    local_78 = CONCAT44((uint)uVar3 & 0xffffff00,0x736e6f69);
    acStack_80[0] = s_SetAudioMixerOptions_001ab23d[8];
    acStack_80[1] = s_SetAudioMixerOptions_001ab23d[9];
    acStack_80[2] = s_SetAudioMixerOptions_001ab23d[10];
    acStack_80[3] = s_SetAudioMixerOptions_001ab23d[0xb];
    acStack_80[4] = s_SetAudioMixerOptions_001ab23d[0xc];
    acStack_80[5] = s_SetAudioMixerOptions_001ab23d[0xd];
    acStack_80[6] = s_SetAudioMixerOptions_001ab23d[0xe];
    acStack_80[7] = s_SetAudioMixerOptions_001ab23d[0xf];
    local_88 = (void *)s_SetAudioMixerOptions_001ab23d._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar7;
    local_50 = uVar4;
    puVar5 = (undefined8 *)operator_new(0x68);
    puVar5[2] = uVar8;
    puVar5[1] = this;
    puVar5[4] = CONCAT71(uStack_8f,uVar1);
    puVar5[3] = uVar9;
    *puVar5 = &PTR_FUN_00d1a6a8;
    puVar5[6] = acStack_80;
    puVar5[5] = local_88;
    puVar5[7] = local_78;
    puVar5[10] = FUN_0040e7ec;
    puVar5[0xb] = &DAT_001f4e70;
    puVar5[9] = uStack_68;
    puVar5[8] = local_70;
    puVar5[0xc] = uVar4;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar6,puVar5);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00408ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00408ed4  Discord::GetAudioSubsystem =====

/* Discord::GetAudioSubsystem(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&)>) */

void __thiscall Discord::GetAudioSubsystem(Discord *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_00409098;
  uVar7 = *param_2;
  uVar1 = param_2[1];
  lVar13 = *(long *)this;
  uVar14 = param_2[2];
  if ((code *)*local_b0 != (code *)0x0) {
    uVar7 = (*(code *)*local_b0)(uVar7);
  }
  lVar12 = *(long *)(lVar13 + 0x58);
  puVar10 = local_b0;
  if (lVar12 == 0) {
LAB_00409088:
    pcVar11 = (code *)puVar10[1];
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x78);
    if (lVar13 != 0) {
      uVar8 = FUN_005ce36c();
      if (local_b0[1] != 0) {
        puVar10 = &DAT_001f1910;
      }
      local_98 = CONCAT17(0x11,(undefined7)local_98);
      if ((&local_a8 < (void **)0x1e4166) && ("GetAudioSubsystem" < (char *)((long)&local_98 + 1U)))
      {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar3 = (ulong)local_98 >> 8;
      local_98 = CONCAT71((uint7)uVar3 & 0xffffffffffff00,0x6d);
      uStack_a0._0_1_ = s_GetAudioSubsystem_001e4165[8];
      uStack_a0._1_1_ = s_GetAudioSubsystem_001e4165[9];
      uStack_a0._2_1_ = s_GetAudioSubsystem_001e4165[10];
      uStack_a0._3_1_ = s_GetAudioSubsystem_001e4165[0xb];
      uStack_a0._4_1_ = s_GetAudioSubsystem_001e4165[0xc];
      uStack_a0._5_1_ = s_GetAudioSubsystem_001e4165[0xd];
      uStack_a0._6_1_ = s_GetAudioSubsystem_001e4165[0xe];
      uStack_a0._7_1_ = s_GetAudioSubsystem_001e4165[0xf];
      local_a8 = (void *)s_GetAudioSubsystem_001e4165._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar13;
      local_70 = uVar8;
      puVar9 = (undefined8 *)operator_new(0x70);
      uVar6 = local_98;
      uVar5 = uStack_a0;
      pvVar4 = local_a8;
      puVar9[4] = uVar14;
      puVar9[5] = local_b0;
      puVar9[3] = uVar1;
      puVar9[2] = uVar7;
      *puVar9 = &PTR_FUN_00d1a6f8;
      puVar9[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar9[8] = uVar6;
      puVar9[7] = uVar5;
      puVar9[6] = pvVar4;
      puVar9[0xd] = uVar8;
      puVar9[10] = uStack_88;
      puVar9[9] = local_90;
      puVar9[0xb] = FUN_0040e7ec;
      puVar9[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar7);
      }
      goto LAB_00409088;
    }
    puVar10 = (undefined8 *)operator_new(0x30);
    puVar10[2] = uVar7;
    puVar10[3] = uVar1;
    puVar10[4] = uVar14;
    puVar10[5] = local_b0;
    *puVar10 = &PTR_FUN_00d1a720;
    puVar10[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar10);
    pcVar11 = (code *)local_b0[1];
  }
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar7);
  }
LAB_00409098:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040913c  Discord::GetScreenPreviews =====

/* Discord::GetScreenPreviews(unsigned long, unsigned long, std::__Cr::function<void
   (std::__Cr::vector<discord::media::SourcePreview,
   std::__Cr::allocator<discord::media::SourcePreview> > const&)>) */

void __thiscall
Discord::GetScreenPreviews(Discord *this,undefined8 param_1,undefined8 param_2,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != 0) {
    local_50 = param_4[2];
    local_48 = (undefined8 *)param_4[3];
    uStack_58 = param_4[1];
    local_60 = *param_4;
    if ((code *)*local_48 != (code *)0x0) {
      local_60 = (*(code *)*local_48)(*param_4);
    }
    FUN_00476cf8(lVar2,param_1,param_2,&local_60);
    if ((code *)local_48[1] != (code *)0x0) {
      (*(code *)local_48[1])(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004091e4  Discord::GetWindowPreviews =====

/* Discord::GetWindowPreviews(unsigned long, unsigned long, std::__Cr::function<void
   (std::__Cr::vector<discord::media::SourcePreview,
   std::__Cr::allocator<discord::media::SourcePreview> > const&)>) */

void __thiscall
Discord::GetWindowPreviews(Discord *this,undefined8 param_1,undefined8 param_2,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != 0) {
    local_50 = param_4[2];
    local_48 = (undefined8 *)param_4[3];
    uStack_58 = param_4[1];
    local_60 = *param_4;
    if ((code *)*local_48 != (code *)0x0) {
      local_60 = (*(code *)*local_48)(*param_4);
    }
    FUN_00476f70(lVar2,param_1,param_2,&local_60);
    if ((code *)local_48[1] != (code *)0x0) {
      (*(code *)local_48[1])(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040928c  Discord::GetSingleWindowPreview =====

/* Discord::GetSingleWindowPreview(unsigned long, unsigned long, unsigned long,
   std::__Cr::function<void (std::__Cr::vector<discord::media::SourcePreview,
   std::__Cr::allocator<discord::media::SourcePreview> > const&)>) */

void __thiscall
Discord::GetSingleWindowPreview
          (Discord *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != 0) {
    local_60 = param_5[2];
    local_58 = (undefined8 *)param_5[3];
    uStack_68 = param_5[1];
    local_70 = *param_5;
    if ((code *)*local_58 != (code *)0x0) {
      local_70 = (*(code *)*local_58)(*param_5);
    }
    FUN_004771e8(lVar2,param_1,param_2,param_3,&local_70);
    if ((code *)local_58[1] != (code *)0x0) {
      (*(code *)local_58[1])(local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00409344  Discord::SetPreviewsUseWgc =====

/* Discord::SetPreviewsUseWgc(bool) */

void __thiscall Discord::SetPreviewsUseWgc(Discord *this,bool param_1)

{
  if (*(long *)(this + 0x10) != 0) {
    FUN_00477470(*(long *)(this + 0x10),param_1);
    return;
  }
  return;
}


// ===== 00409358  Discord::SetKeepAliveChannel =====

/* Discord::SetKeepAliveChannel(bool) */

void __thiscall Discord::SetKeepAliveChannel(Discord *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined7 uStack_8f;
  void *local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  uint uStack_75;
  char cStack_71;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(*(long *)this + 0x58);
  if (lVar4 != 0) {
    lVar5 = *(long *)(*(long *)this + 0x78);
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar3 + 2) = param_1;
      *puVar3 = &PTR_FUN_00d1a770;
      puVar3[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar4,puVar3);
        return;
      }
      goto LAB_00409514;
    }
    uVar2 = FUN_005ce36c();
    cStack_71 = 0x13;
    if ((&local_88 < (void **)0x1cd66c) && ("SetKeepAliveChannel" < &uStack_75)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uStack_75 = uStack_75 & 0xffffff00;
    uStack_80 = (undefined7)s_SetKeepAliveChannel_001cd66b._8_8_;
    uStack_79._0_1_ = SUB81(s_SetKeepAliveChannel_001cd66b._8_8_,7);
    uStack_79._1_3_ = 0x6c656e;
    local_88 = (void *)s_SetKeepAliveChannel_001cd66b._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar5;
    local_50 = uVar2;
    puVar3 = (undefined8 *)operator_new(0x58);
    puVar3[2] = CONCAT71(uStack_8f,param_1);
    puVar3[1] = this;
    *puVar3 = &PTR_FUN_00d1a748;
    puVar3[4] = CONCAT17((char)uStack_79,uStack_80);
    puVar3[3] = local_88;
    puVar3[5] = CONCAT17(cStack_71,CONCAT43(uStack_75,uStack_79._1_3_));
    puVar3[7] = uStack_68;
    puVar3[6] = local_70;
    puVar3[8] = FUN_0040e7ec;
    puVar3[9] = &DAT_001f4e70;
    puVar3[10] = uVar2;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_75 = 0;
    cStack_71 = '\0';
    FUN_00512cf8(lVar4,puVar3);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (cStack_71 < '\0') {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00409514:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00409518  Discord::UpdateAudioSession =====

/* WARNING: Type propagation algorithm not settling */
/* Discord::UpdateAudioSession(bool, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, bool) */

void __thiscall
Discord::UpdateAudioSession(Discord *this,undefined1 param_1,undefined8 *param_3,byte param_4)

{
  ulong uVar1;
  undefined8 *******__src;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 *******__dest;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *******local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  byte local_d0;
  Discord *local_c8;
  undefined1 local_c0;
  undefined8 *******local_b8;
  ulong uStack_b0;
  ulong local_a8;
  byte local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __dest = &local_e8;
  lVar8 = *(long *)this;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_d8 = CONCAT17((char)uVar2,(undefined7)local_d8);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_d8 = uVar1 | 0x8000000000000000;
      local_e8 = __dest;
      uStack_e0 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar2 + 1)))
    goto LAB_004097bc;
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_e0 = param_3[1];
    local_e8 = (undefined8 *******)*param_3;
    local_d8 = param_3[2];
  }
  param_4 = param_4 & 1;
  lVar7 = *(long *)(lVar8 + 0x58);
  local_d0 = param_4;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x78);
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)operator_new(0x38);
      *(byte *)(puVar6 + 6) = param_4;
      *puVar6 = &PTR_FUN_00d1a7c0;
      puVar6[1] = this;
      *(undefined1 *)(puVar6 + 2) = param_1;
      puVar6[4] = uStack_e0;
      puVar6[3] = local_e8;
      puVar6[5] = local_d8;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_00512cf8(lVar7,puVar6);
    }
    else {
      uVar5 = FUN_005ce36c();
      bVar4 = local_d0;
      local_a8 = local_d8;
      uStack_b0 = uStack_e0;
      local_b8 = local_e8;
      local_d8 = 0;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_88 = CONCAT17(0x12,(undefined7)local_88);
      local_a0 = local_d0;
      local_c8 = this;
      local_c0 = param_1;
      if ((&local_98 < (void **)0x1ad9d7) && ("UpdateAudioSession" < (char *)((long)&local_88 + 2U))
         ) {
LAB_004097bc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)local_88 >> 0x10;
      local_88 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x6e6f);
      uStack_90._0_1_ = s_UpdateAudioSession_001ad9d6[8];
      uStack_90._1_1_ = s_UpdateAudioSession_001ad9d6[9];
      uStack_90._2_1_ = s_UpdateAudioSession_001ad9d6[10];
      uStack_90._3_1_ = s_UpdateAudioSession_001ad9d6[0xb];
      uStack_90._4_1_ = s_UpdateAudioSession_001ad9d6[0xc];
      uStack_90._5_1_ = s_UpdateAudioSession_001ad9d6[0xd];
      uStack_90._6_1_ = s_UpdateAudioSession_001ad9d6[0xe];
      uStack_90._7_1_ = s_UpdateAudioSession_001ad9d6[0xf];
      local_98 = (void *)s_UpdateAudioSession_001ad9d6._0_8_;
      local_70 = FUN_0040e7ec;
      local_68 = &DAT_001f4e70;
      local_80 = lVar8;
      local_60 = uVar5;
      puVar6 = (undefined8 *)operator_new(0x78);
      *(byte *)(puVar6 + 6) = bVar4;
      *puVar6 = &PTR_FUN_00d1a798;
      puVar6[1] = this;
      puVar6[4] = uStack_b0;
      puVar6[3] = local_b8;
      *(undefined1 *)(puVar6 + 2) = param_1;
      puVar6[5] = local_a8;
      puVar6[8] = uStack_90;
      puVar6[7] = local_98;
      puVar6[0xc] = FUN_0040e7ec;
      puVar6[0xd] = &DAT_001f4e70;
      puVar6[9] = local_88;
      puVar6[0xb] = uStack_78;
      puVar6[10] = local_80;
      puVar6[0xe] = uVar5;
      local_b8 = (undefined8 *******)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_98 = (void *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_00512cf8(lVar7,puVar6);
      if (*(code **)(local_68 + 8) != (code *)0x0) {
        (**(code **)(local_68 + 8))(local_80);
      }
      if (local_88 < 0) {
        operator_delete(local_98);
      }
      if ((long)local_a8 < 0) {
        operator_delete(local_b8);
      }
    }
  }
  if ((long)local_d8 < 0) {
    operator_delete(local_e8);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004097ec  Discord::NotifyCallKitCallStateChanged =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::NotifyCallKitCallStateChanged(bool) */

void __thiscall Discord::NotifyCallKitCallStateChanged(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(*(long *)this + 0x58);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)this + 0x78);
  if (lVar9 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d1a810;
    puVar7[1] = this;
  }
  else {
    uVar5 = FUN_005ce36c();
    pcVar6 = (char *)operator_new(0x20);
    uVar4 = s_NotifyCallKitCallStateChanged_001c4bdd._21_8_;
    uVar3 = s_NotifyCallKitCallStateChanged_001c4bdd._0_8_;
    if ((pcVar6 < "otifyCallKitCallStateChanged") &&
       ("NotifyCallKitCallStateChanged" < pcVar6 + 0x1d)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT35(s_NotifyCallKitCallStateChanged_001c4bdd._13_3_,
                     s_NotifyCallKitCallStateChanged_001c4bdd._8_5_);
    uVar2 = CONCAT53(s_NotifyCallKitCallStateChanged_001c4bdd._16_5_,
                     s_NotifyCallKitCallStateChanged_001c4bdd._13_3_);
    pcVar6[0x1d] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar1;
    *(undefined8 *)pcVar6 = uVar3;
    *(undefined8 *)(pcVar6 + 0x15) = uVar4;
    *(undefined8 *)(pcVar6 + 0xd) = uVar2;
    puVar7 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar7 + 2) = param_1;
    uVar4 = _UNK_001f3af8;
    uVar3 = _DAT_001f3af0;
    *puVar7 = &PTR_FUN_00d1a7e8;
    puVar7[1] = this;
    puVar7[3] = pcVar6;
    puVar7[6] = lVar9;
    puVar7[5] = uVar4;
    puVar7[4] = uVar3;
    puVar7[8] = FUN_0040e7ec;
    puVar7[9] = &DAT_001f4e70;
    puVar7[10] = uVar5;
  }
  FUN_00512cf8(lVar8,puVar7);
  return;
}


// ===== 0040991c  Discord::SetLoopback =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Discord::SetLoopback(bool, std::__Cr::function<void (float, unsigned int)> const&) */

void __thiscall Discord::SetLoopback(Discord *this,bool param_1,function *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined7 local_a8;
  undefined4 uStack_a1;
  char cStack_9d;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar5 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar12 = *(long *)this;
  if ((code *)*puVar1 != (code *)0x0) {
    uVar5 = (*(code *)*puVar1)(uVar5);
  }
  lVar11 = *(long *)(lVar12 + 0x58);
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x78);
    if (lVar12 == 0) {
      puVar9 = (undefined8 *)operator_new(0x38);
      *(bool *)(puVar9 + 2) = param_1;
      puVar9[3] = uVar5;
      puVar9[4] = uVar2;
      *puVar9 = &PTR_FUN_00d1a860;
      puVar9[1] = this;
      puVar9[5] = uVar8;
      puVar9[6] = puVar1;
      if ((code *)*puVar1 != (code *)0x0) {
        uVar8 = (*(code *)*puVar1)(uVar5);
        puVar9[3] = uVar8;
      }
      FUN_00512cf8(lVar11,puVar9);
      pcVar10 = (code *)puVar1[1];
      goto joined_r0x00409b10;
    }
    local_70 = FUN_005ce36c();
    uVar6 = uVar5;
    if ((code *)*puVar1 != (code *)0x0) {
      uVar6 = (*(code *)*puVar1)(uVar5);
    }
    local_98 = CONCAT17(0xb,(undefined7)local_98);
    if ((&local_a8 < "etLoopback") && ("SetLoopback" < &cStack_9d)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_a8 = (undefined7)s_SetLoopback_001c4bfb._0_8_;
    uStack_a1._0_1_ = SUB81(s_SetLoopback_001c4bfb._0_8_,7);
    uStack_a1 = CONCAT31(0x6b6361,(char)uStack_a1);
    cStack_9d = '\0';
    local_80 = FUN_0040e7ec;
    local_78 = (undefined8 *)&DAT_001f4e70;
    local_90 = lVar12;
    puVar7 = (undefined8 *)operator_new(0x78);
    puVar7[5] = uVar8;
    puVar7[6] = puVar1;
    *(bool *)(puVar7 + 2) = param_1;
    *puVar7 = &PTR_FUN_00d1a838;
    puVar7[1] = this;
    puVar7[4] = uVar2;
    puVar7[3] = uVar6;
    puVar9 = (undefined8 *)&DAT_001f4e70;
    pcVar10 = FUN_0040e7ec;
    if ((code *)*puVar1 != (code *)0x0) {
      uVar8 = (*(code *)*puVar1)(uVar6);
      puVar7[3] = uVar8;
      puVar9 = local_78;
      pcVar10 = local_80;
    }
    uVar4 = local_98;
    puVar7[0xc] = pcVar10;
    puVar7[0xd] = puVar9;
    uVar2 = CONCAT44(uStack_9c,CONCAT13(cStack_9d,uStack_a1._1_3_));
    uVar8 = CONCAT17((char)uStack_a1,local_a8);
    local_a8 = 0;
    uStack_a1 = 0;
    cStack_9d = '\0';
    uStack_9c = 0;
    local_98 = 0;
    puVar7[8] = uVar2;
    puVar7[7] = uVar8;
    puVar7[9] = uVar4;
    puVar7[0xb] = uStack_88;
    puVar7[10] = local_90;
    if (puVar9[1] != 0) {
      local_80 = FUN_0040e33c;
      local_78 = &DAT_001f1910;
    }
    puVar7[0xe] = local_70;
    FUN_00512cf8(lVar11,puVar7);
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    if (local_98 < 0) {
      operator_delete((void *)CONCAT17((char)uStack_a1,local_a8));
    }
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar6);
    }
  }
  pcVar10 = (code *)puVar1[1];
joined_r0x00409b10:
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00409bc8  FUN_00409bc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409bc8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  
  uVar15 = param_2[2];
  puVar19 = (undefined8 *)param_2[3];
  uVar9 = *param_2;
  uVar3 = param_2[1];
  lVar21 = *param_1;
  if ((code *)*puVar19 != (code *)0x0) {
    uVar9 = (*(code *)*puVar19)(uVar9);
  }
  uVar2 = param_3[2];
  puVar4 = (undefined8 *)param_3[3];
  uVar10 = *param_3;
  uVar5 = param_3[1];
  if ((code *)*puVar4 != (code *)0x0) {
    uVar10 = (*(code *)*puVar4)(uVar10);
  }
  lVar20 = *(long *)(lVar21 + 0x58);
  if (lVar20 != 0) {
    lVar21 = *(long *)(lVar21 + 0x78);
    puVar1 = puVar19;
    if (lVar21 == 0) {
      puVar16 = (undefined8 *)operator_new(0x50);
      puVar16[2] = uVar9;
      puVar16[3] = uVar3;
      puVar16[4] = uVar15;
      lVar21 = puVar19[1];
      puVar16[6] = uVar10;
      puVar16[7] = uVar5;
      puVar16[8] = uVar2;
      pcVar18 = (code *)*puVar4;
      *puVar16 = &PTR_FUN_00d1a8b0;
      puVar16[1] = param_1;
      if (lVar21 != 0) {
        puVar1 = &DAT_001f1910;
      }
      puVar16[5] = puVar19;
      puVar16[9] = puVar4;
      if (pcVar18 != (code *)0x0) {
        uVar15 = (*pcVar18)(uVar10);
        puVar16[6] = uVar15;
      }
      FUN_00512cf8(lVar20,puVar16);
      pcVar18 = (code *)puVar4[1];
      goto joined_r0x00409d94;
    }
    uVar11 = FUN_005ce36c();
    if (puVar19[1] != 0) {
      puVar1 = &DAT_001f1910;
    }
    uVar12 = uVar10;
    if ((code *)*puVar4 != (code *)0x0) {
      uVar12 = (*(code *)*puVar4)(uVar10);
    }
    pcVar13 = (char *)operator_new(0x20);
    uVar8 = s_StartLocalAudioRecording_001cd67f._16_8_;
    uVar7 = s_StartLocalAudioRecording_001cd67f._8_8_;
    uVar6 = s_StartLocalAudioRecording_001cd67f._0_8_;
    if ((pcVar13 < "tartLocalAudioRecording") && ("StartLocalAudioRecording" < pcVar13 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar13[0x18] = '\0';
    *(undefined8 *)(pcVar13 + 8) = uVar7;
    *(undefined8 *)pcVar13 = uVar6;
    *(undefined8 *)(pcVar13 + 0x10) = uVar8;
    puVar14 = (undefined8 *)operator_new(0x90);
    puVar14[5] = puVar19;
    puVar14[2] = uVar9;
    puVar14[3] = uVar3;
    *puVar14 = &PTR_FUN_00d1a888;
    puVar14[1] = param_1;
    puVar14[9] = puVar4;
    puVar14[4] = uVar15;
    lVar17 = puVar19[1];
    puVar14[6] = uVar12;
    puVar14[7] = uVar5;
    puVar14[8] = uVar2;
    puVar16 = puVar19;
    if (lVar17 != 0) {
      puVar16 = &DAT_001f1910;
    }
    if ((code *)*puVar4 != (code *)0x0) {
      uVar15 = (*(code *)*puVar4)(uVar12);
      puVar14[6] = uVar15;
    }
    uVar3 = _UNK_001f3238;
    uVar15 = _DAT_001f3230;
    puVar14[10] = pcVar13;
    puVar14[0xd] = lVar21;
    puVar14[0xf] = FUN_0040e7ec;
    puVar14[0x10] = &DAT_001f4e70;
    puVar14[0xc] = uVar3;
    puVar14[0xb] = uVar15;
    puVar14[0x11] = uVar11;
    FUN_00512cf8(lVar20,puVar14);
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(uVar12);
    }
    puVar19 = puVar1;
    if ((code *)puVar16[1] != (code *)0x0) {
      (*(code *)puVar16[1])(uVar9);
      pcVar18 = (code *)puVar4[1];
      goto joined_r0x00409d94;
    }
  }
  pcVar18 = (code *)puVar4[1];
  puVar1 = puVar19;
joined_r0x00409d94:
  if (pcVar18 != (code *)0x0) {
    (*pcVar18)(uVar10);
  }
  if ((code *)puVar1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00409dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[1])(uVar9);
    return;
  }
  return;
}


// ===== 00409e88  FUN_00409e88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e88(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  uVar2 = param_2[2];
  puVar15 = (undefined8 *)param_2[3];
  uVar7 = *param_2;
  uVar3 = param_2[1];
  lVar14 = *param_1;
  if ((code *)*puVar15 != (code *)0x0) {
    uVar7 = (*(code *)*puVar15)(uVar7);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x30);
      puVar11[2] = uVar7;
      puVar11[3] = uVar3;
      puVar11[4] = uVar2;
      lVar14 = puVar15[1];
      *puVar11 = &PTR_FUN_00d1a900;
      puVar11[1] = param_1;
      puVar11[5] = puVar15;
      if (lVar14 != 0) {
        puVar15 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
      goto joined_r0x00409fac;
    }
    uVar8 = FUN_005ce36c();
    puVar11 = puVar15;
    if (puVar15[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    pcVar9 = (char *)operator_new(0x20);
    uVar6 = s_StopLocalAudioRecording_001d89a7._0_8_;
    if ((pcVar9 < "topLocalAudioRecording") && ("StopLocalAudioRecording" < pcVar9 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = CONCAT17(s_StopLocalAudioRecording_001d89a7[0xf],
                     s_StopLocalAudioRecording_001d89a7._8_7_);
    uVar5 = CONCAT71(s_StopLocalAudioRecording_001d89a7._16_7_,
                     s_StopLocalAudioRecording_001d89a7[0xf]);
    pcVar9[0x17] = '\0';
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    *(undefined8 *)pcVar9 = uVar6;
    *(undefined8 *)(pcVar9 + 0xf) = uVar5;
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar10[2] = uVar7;
    puVar10[3] = uVar3;
    puVar10[4] = uVar2;
    puVar10[5] = puVar15;
    uVar3 = _UNK_001f3b08;
    uVar2 = _DAT_001f3b00;
    puVar10[0xd] = uVar8;
    lVar12 = puVar15[1];
    puVar10[6] = pcVar9;
    *puVar10 = &PTR_FUN_00d1a8d8;
    puVar10[1] = param_1;
    puVar10[8] = uVar3;
    puVar10[7] = uVar2;
    puVar10[9] = lVar14;
    puVar1 = puVar15;
    if (lVar12 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar13,puVar10);
    puVar15 = puVar11;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar7);
      UNRECOVERED_JUMPTABLE = (code *)puVar11[1];
      goto joined_r0x00409fac;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar15[1];
joined_r0x00409fac:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_StopLocalAudioRecording_001d89a7[0] = (char)s_StopLocalAudioRecording_001d89a7._0_8_;
    s_StopLocalAudioRecording_001d89a7[1] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,1);
    s_StopLocalAudioRecording_001d89a7[2] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,2);
    s_StopLocalAudioRecording_001d89a7[3] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,3);
    s_StopLocalAudioRecording_001d89a7[4] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,4);
    s_StopLocalAudioRecording_001d89a7[5] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,5);
    s_StopLocalAudioRecording_001d89a7[6] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,6);
    s_StopLocalAudioRecording_001d89a7[7] = SUB81(s_StopLocalAudioRecording_001d89a7._0_8_,7);
    s_StopLocalAudioRecording_001d89a7[8] = (char)s_StopLocalAudioRecording_001d89a7._8_7_;
    s_StopLocalAudioRecording_001d89a7[9] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,1);
    s_StopLocalAudioRecording_001d89a7[10] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,2);
    s_StopLocalAudioRecording_001d89a7[0xb] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,3);
    s_StopLocalAudioRecording_001d89a7[0xc] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,4);
    s_StopLocalAudioRecording_001d89a7[0xd] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,5);
    s_StopLocalAudioRecording_001d89a7[0xe] = SUB71(s_StopLocalAudioRecording_001d89a7._8_7_,6);
    s_StopLocalAudioRecording_001d89a7[0x10] = (char)s_StopLocalAudioRecording_001d89a7._16_7_;
    s_StopLocalAudioRecording_001d89a7[0x11] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,1);
    s_StopLocalAudioRecording_001d89a7[0x12] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,2);
    s_StopLocalAudioRecording_001d89a7[0x13] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,3);
    s_StopLocalAudioRecording_001d89a7[0x14] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,4);
    s_StopLocalAudioRecording_001d89a7[0x15] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,5);
    s_StopLocalAudioRecording_001d89a7[0x16] = SUB71(s_StopLocalAudioRecording_001d89a7._16_7_,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00409fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar7);
  return;
}


// ===== 0040a06c  Discord::PingVoiceThread =====

/* Discord::PingVoiceThread(std::__Cr::function<void ()>) */

void __thiscall Discord::PingVoiceThread(Discord *this,undefined8 param_2)

{
  FUN_0040a080(*(undefined8 *)this,param_2,"PingVoiceThread",0xf);
  return;
}


// ===== 0040a080  FUN_0040a080 =====

void FUN_0040a080(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_b8 [2];
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      puVar5 = (undefined8 *)operator_new(0x28);
      uVar1 = param_2[2];
      lVar2 = param_2[3];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      *puVar5 = &PTR_FUN_00d1b0a0;
      puVar5[2] = uVar8;
      puVar5[1] = uVar7;
      puVar5[3] = uVar1;
      puVar5[4] = lVar2;
      if (*(long *)(lVar2 + 8) != 0) {
        param_2[2] = FUN_0040dec4;
        param_2[3] = &DAT_001f1910;
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        FUN_00512cf8(lVar6,puVar5);
        return;
      }
      goto LAB_0040a248;
    }
    local_a8 = FUN_0040e7ec;
    local_a0 = &DAT_001f4e70;
    local_b8[0] = *(long *)(param_1 + 0x78);
    FUN_0041977c(&local_98,param_1,param_2,param_3,param_4,local_b8);
    puVar5 = (undefined8 *)operator_new(0x68);
    lVar2 = local_68;
    uVar1 = uStack_70;
    pvVar4 = local_78;
    *puVar5 = &PTR_FUN_00d1b078;
    puVar5[2] = uStack_90;
    puVar5[1] = local_98;
    puVar5[3] = local_88;
    puVar5[4] = local_80;
    if (local_80[1] != 0) {
      local_88 = FUN_0040dec4;
      local_80 = &DAT_001f1910;
    }
    uStack_70 = 0;
    local_68 = 0;
    local_78 = (void *)0x0;
    puVar5[7] = lVar2;
    puVar5[6] = uVar1;
    puVar5[5] = pvVar4;
    puVar5[9] = uStack_58;
    puVar5[8] = local_60;
    puVar5[10] = local_50;
    puVar5[0xb] = local_48;
    if (local_48[1] != 0) {
      local_50 = FUN_0040e33c;
      local_48 = &DAT_001f1910;
    }
    puVar5[0xc] = local_40;
    FUN_00512cf8(lVar6);
    if ((code *)local_48[1] != (code *)0x0) {
      (*(code *)local_48[1])(local_60);
    }
    if (local_68 < 0) {
      operator_delete(local_78);
    }
    if ((code *)local_80[1] != (code *)0x0) {
      (*(code *)local_80[1])(local_98);
    }
    if (*(code **)(local_a0 + 8) != (code *)0x0) {
      (**(code **)(local_a0 + 8))(local_b8[0]);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0040a248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040a24c  Discord::WriteConsoleLog =====

/* Discord::WriteConsoleLog(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&) */

Discord * __thiscall
Discord::WriteConsoleLog(Discord *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *__s1;
  int iVar2;
  uint uVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  __s1 = *(basic_string **)param_1;
  if (-1 < (char)param_1[0x17]) {
    uVar1 = (ulong)(byte)param_1[0x17];
    __s1 = param_1;
  }
  if (__s1 == (basic_string *)0x0 && uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if (uVar1 == 5) {
    iVar2 = memcmp(__s1,"trace",5);
    if (iVar2 != 0) {
      if (*(int *)__s1 == 0x75626564 && __s1[4] == (basic_string)0x67) {
        uVar5 = 0;
      }
      else {
        uVar3 = memcmp(__s1,"error",5);
        if (uVar3 != 0) {
          return (Discord *)(ulong)uVar3;
        }
        uVar5 = 3;
      }
      goto LAB_0040a354;
    }
  }
  else if (uVar1 == 4) {
    uVar3 = memcmp(__s1,&DAT_001bc247,4);
    if (uVar3 != 0) {
      if (*(int *)__s1 != 0x6e726177) {
        return (Discord *)(ulong)uVar3;
      }
      uVar5 = 2;
      goto LAB_0040a354;
    }
  }
  else if ((uVar1 != 3) || (*(short *)__s1 != 0x6f6c || __s1[2] != (basic_string)0x67)) {
    return this;
  }
  uVar5 = 1;
LAB_0040a354:
  pDVar4 = (Discord *)FUN_00623bb0(&DAT_001f4e90,&DAT_001b3348,uVar5,"JS console: ",param_2);
  return pDVar4;
}


// ===== 0040a3b8  Discord::AddLogCallback =====

/* Discord::AddLogCallback(std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, int)>, int) */

void __thiscall Discord::AddLogCallback(Discord *this,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = param_2[3];
  if (*(char *)(lVar4 + 0x10) == '\0') {
    local_78 = operator_new(0x38);
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = param_2[2];
    if (*(long *)(lVar4 + 8) != 0) {
      param_2[2] = FUN_00402ab4;
      param_2[3] = &DAT_001f1910;
    }
    local_58 = lVar4;
    FUN_00402998(local_78,&local_70,param_3);
    puVar1 = *(undefined8 **)(this + 0x30);
    if (puVar1 < *(undefined8 **)(this + 0x38)) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      puVar3 = puVar1 + 1;
      *puVar1 = local_78;
      *(undefined8 **)(this + 0x30) = puVar3;
    }
    else {
      FUN_0040db24(this + 0x28,&local_78);
      puVar3 = *(undefined8 **)(this + 0x30);
    }
    if (*(undefined8 **)(this + 0x28) == puVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040a50c  Discord::SetAudioDeviceModuleErrorCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetAudioDeviceModuleErrorCallback(std::__Cr::function<void (int,
   std::__Cr::basic_string<char, std::__Cr::char_traits<char>, std::__Cr::allocator<char> >)>) */

void __thiscall Discord::SetAudioDeviceModuleErrorCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_00419a50;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1a950;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040a6d0;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x30);
    uVar5 = s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_;
    uVar4 = s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_;
    uVar3 = s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_;
    uVar2 = s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_;
    if ((pcVar7 < "etAudioDeviceModuleErrorCallback") &&
       ("SetAudioDeviceModuleErrorCallback" < pcVar7 + 0x21)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar7[0x20] = 'k';
    pcVar7[0x21] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar3;
    *(undefined8 *)pcVar7 = uVar2;
    *(undefined8 *)(pcVar7 + 0x18) = uVar5;
    *(undefined8 *)(pcVar7 + 0x10) = uVar4;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f48b8;
    uVar15 = _DAT_001f48b0;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1a928;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040a6d0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040a6d0:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x18] =
         (char)s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_;
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x19] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,1);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1a] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,2);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1b] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,3);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1c] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,4);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1d] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,5);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1e] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,6);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x1f] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._24_8_,7);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x10] =
         (char)s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_;
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x11] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,1);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x12] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,2);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x13] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,3);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x14] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,4);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x15] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,5);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x16] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,6);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0x17] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._16_8_,7);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[8] =
         (char)s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_;
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[9] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,1);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[10] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,2);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0xb] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,3);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0xc] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,4);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0xd] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,5);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0xe] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,6);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0xf] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._8_8_,7);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[0] =
         (char)s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_;
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[1] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,1);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[2] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,2);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[3] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,3);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[4] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,4);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[5] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,5);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[6] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,6);
    s_SetAudioDeviceModuleErrorCallbac_001ec8c1[7] =
         SUB81(s_SetAudioDeviceModuleErrorCallbac_001ec8c1._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040a700  Discord::SetVoiceProcessingErrorCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetVoiceProcessingErrorCallback(std::__Cr::function<void (discord::VoiceProcessingError,
   discord::VoiceProcessingErrorDetails)>) */

void __thiscall Discord::SetVoiceProcessingErrorCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_00402980;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1a9a0;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040a8c8;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_SetVoiceProcessingErrorCallback_0019f941._23_8_;
    uVar4 = s_SetVoiceProcessingErrorCallback_0019f941._0_8_;
    if ((pcVar7 < "etVoiceProcessingErrorCallback") &&
       ("SetVoiceProcessingErrorCallback" < pcVar7 + 0x1f)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT17(s_SetVoiceProcessingErrorCallback_0019f941[0xf],
                     s_SetVoiceProcessingErrorCallback_0019f941._8_7_);
    uVar3 = CONCAT71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,
                     s_SetVoiceProcessingErrorCallback_0019f941[0xf]);
    pcVar7[0x1f] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar4;
    *(undefined8 *)(pcVar7 + 0x17) = uVar5;
    *(undefined8 *)(pcVar7 + 0xf) = uVar3;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f40d8;
    uVar15 = _DAT_001f40d0;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1a978;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040a8c8;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040a8c8:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetVoiceProcessingErrorCallback_0019f941[0x17] =
         (char)s_SetVoiceProcessingErrorCallback_0019f941._23_8_;
    s_SetVoiceProcessingErrorCallback_0019f941[0x18] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,1);
    s_SetVoiceProcessingErrorCallback_0019f941[0x19] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,2);
    s_SetVoiceProcessingErrorCallback_0019f941[0x1a] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,3);
    s_SetVoiceProcessingErrorCallback_0019f941[0x1b] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,4);
    s_SetVoiceProcessingErrorCallback_0019f941[0x1c] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,5);
    s_SetVoiceProcessingErrorCallback_0019f941[0x1d] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,6);
    s_SetVoiceProcessingErrorCallback_0019f941[0x1e] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._23_8_,7);
    s_SetVoiceProcessingErrorCallback_0019f941[0x10] =
         (char)s_SetVoiceProcessingErrorCallback_0019f941._16_7_;
    s_SetVoiceProcessingErrorCallback_0019f941[0x11] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,1);
    s_SetVoiceProcessingErrorCallback_0019f941[0x12] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,2);
    s_SetVoiceProcessingErrorCallback_0019f941[0x13] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,3);
    s_SetVoiceProcessingErrorCallback_0019f941[0x14] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,4);
    s_SetVoiceProcessingErrorCallback_0019f941[0x15] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,5);
    s_SetVoiceProcessingErrorCallback_0019f941[0x16] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._16_7_,6);
    s_SetVoiceProcessingErrorCallback_0019f941[8] =
         (char)s_SetVoiceProcessingErrorCallback_0019f941._8_7_;
    s_SetVoiceProcessingErrorCallback_0019f941[9] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,1);
    s_SetVoiceProcessingErrorCallback_0019f941[10] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,2);
    s_SetVoiceProcessingErrorCallback_0019f941[0xb] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,3);
    s_SetVoiceProcessingErrorCallback_0019f941[0xc] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,4);
    s_SetVoiceProcessingErrorCallback_0019f941[0xd] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,5);
    s_SetVoiceProcessingErrorCallback_0019f941[0xe] =
         SUB71(s_SetVoiceProcessingErrorCallback_0019f941._8_7_,6);
    s_SetVoiceProcessingErrorCallback_0019f941[0] =
         (char)s_SetVoiceProcessingErrorCallback_0019f941._0_8_;
    s_SetVoiceProcessingErrorCallback_0019f941[1] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,1);
    s_SetVoiceProcessingErrorCallback_0019f941[2] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,2);
    s_SetVoiceProcessingErrorCallback_0019f941[3] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,3);
    s_SetVoiceProcessingErrorCallback_0019f941[4] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,4);
    s_SetVoiceProcessingErrorCallback_0019f941[5] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,5);
    s_SetVoiceProcessingErrorCallback_0019f941[6] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,6);
    s_SetVoiceProcessingErrorCallback_0019f941[7] =
         SUB81(s_SetVoiceProcessingErrorCallback_0019f941._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040a8f8  Discord::SetSpatialAudioStatusCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetSpatialAudioStatusCallback(std::__Cr::function<void (discord::SpatialAudioStatus)>)
    */

void __thiscall Discord::SetSpatialAudioStatusCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_0041a0c4;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1a9f0;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040aac0;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_SetSpatialAudioStatusCallback_001ef3b1._21_8_;
    uVar4 = s_SetSpatialAudioStatusCallback_001ef3b1._0_8_;
    if ((pcVar7 < "etSpatialAudioStatusCallback") &&
       ("SetSpatialAudioStatusCallback" < pcVar7 + 0x1d)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT35(s_SetSpatialAudioStatusCallback_001ef3b1._13_3_,
                     s_SetSpatialAudioStatusCallback_001ef3b1._8_5_);
    uVar3 = CONCAT53(s_SetSpatialAudioStatusCallback_001ef3b1._16_5_,
                     s_SetSpatialAudioStatusCallback_001ef3b1._13_3_);
    pcVar7[0x1d] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar4;
    *(undefined8 *)(pcVar7 + 0x15) = uVar5;
    *(undefined8 *)(pcVar7 + 0xd) = uVar3;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f3af8;
    uVar15 = _DAT_001f3af0;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1a9c8;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040aac0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040aac0:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetSpatialAudioStatusCallback_001ef3b1[0x15] =
         (char)s_SetSpatialAudioStatusCallback_001ef3b1._21_8_;
    s_SetSpatialAudioStatusCallback_001ef3b1[0x16] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,1);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x17] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,2);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x18] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,3);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x19] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,4);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x1a] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,5);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x1b] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,6);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x1c] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._21_8_,7);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x10] =
         (char)s_SetSpatialAudioStatusCallback_001ef3b1._16_5_;
    s_SetSpatialAudioStatusCallback_001ef3b1[0x11] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._16_5_,1);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x12] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._16_5_,2);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x13] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._16_5_,3);
    s_SetSpatialAudioStatusCallback_001ef3b1[0x14] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._16_5_,4);
    s_SetSpatialAudioStatusCallback_001ef3b1[0xd] =
         (char)s_SetSpatialAudioStatusCallback_001ef3b1._13_3_;
    s_SetSpatialAudioStatusCallback_001ef3b1[0xe] =
         SUB31(s_SetSpatialAudioStatusCallback_001ef3b1._13_3_,1);
    s_SetSpatialAudioStatusCallback_001ef3b1[0xf] =
         SUB31(s_SetSpatialAudioStatusCallback_001ef3b1._13_3_,2);
    s_SetSpatialAudioStatusCallback_001ef3b1[8] =
         (char)s_SetSpatialAudioStatusCallback_001ef3b1._8_5_;
    s_SetSpatialAudioStatusCallback_001ef3b1[9] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._8_5_,1);
    s_SetSpatialAudioStatusCallback_001ef3b1[10] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._8_5_,2);
    s_SetSpatialAudioStatusCallback_001ef3b1[0xb] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._8_5_,3);
    s_SetSpatialAudioStatusCallback_001ef3b1[0xc] =
         SUB51(s_SetSpatialAudioStatusCallback_001ef3b1._8_5_,4);
    s_SetSpatialAudioStatusCallback_001ef3b1[0] =
         (char)s_SetSpatialAudioStatusCallback_001ef3b1._0_8_;
    s_SetSpatialAudioStatusCallback_001ef3b1[1] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,1);
    s_SetSpatialAudioStatusCallback_001ef3b1[2] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,2);
    s_SetSpatialAudioStatusCallback_001ef3b1[3] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,3);
    s_SetSpatialAudioStatusCallback_001ef3b1[4] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,4);
    s_SetSpatialAudioStatusCallback_001ef3b1[5] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,5);
    s_SetSpatialAudioStatusCallback_001ef3b1[6] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,6);
    s_SetSpatialAudioStatusCallback_001ef3b1[7] =
         SUB81(s_SetSpatialAudioStatusCallback_001ef3b1._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040aa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040aaf0  Discord::SetVideoFilterErrorCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetVideoFilterErrorCallback(std::__Cr::function<void (discord::VideoFilterError,
   discord::VideoFilterTarget)>) */

void __thiscall Discord::SetVideoFilterErrorCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_0041a404;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1aa40;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040acb8;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_SetVideoFilterErrorCallback_001c1cb2._19_8_;
    uVar4 = s_SetVideoFilterErrorCallback_001c1cb2._0_8_;
    if ((pcVar7 < "etVideoFilterErrorCallback") && ("SetVideoFilterErrorCallback" < pcVar7 + 0x1b))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT53(s_SetVideoFilterErrorCallback_001c1cb2._11_5_,
                     s_SetVideoFilterErrorCallback_001c1cb2._8_3_);
    uVar3 = CONCAT35(s_SetVideoFilterErrorCallback_001c1cb2._16_3_,
                     s_SetVideoFilterErrorCallback_001c1cb2._11_5_);
    pcVar7[0x1b] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar4;
    *(undefined8 *)(pcVar7 + 0x13) = uVar5;
    *(undefined8 *)(pcVar7 + 0xb) = uVar3;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f1e78;
    uVar15 = _DAT_001f1e70;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1aa18;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040acb8;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040acb8:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetVideoFilterErrorCallback_001c1cb2[0x13] =
         (char)s_SetVideoFilterErrorCallback_001c1cb2._19_8_;
    s_SetVideoFilterErrorCallback_001c1cb2[0x14] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,1);
    s_SetVideoFilterErrorCallback_001c1cb2[0x15] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,2);
    s_SetVideoFilterErrorCallback_001c1cb2[0x16] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,3);
    s_SetVideoFilterErrorCallback_001c1cb2[0x17] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,4);
    s_SetVideoFilterErrorCallback_001c1cb2[0x18] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,5);
    s_SetVideoFilterErrorCallback_001c1cb2[0x19] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,6);
    s_SetVideoFilterErrorCallback_001c1cb2[0x1a] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._19_8_,7);
    s_SetVideoFilterErrorCallback_001c1cb2[0x10] =
         (char)s_SetVideoFilterErrorCallback_001c1cb2._16_3_;
    s_SetVideoFilterErrorCallback_001c1cb2[0x11] =
         SUB31(s_SetVideoFilterErrorCallback_001c1cb2._16_3_,1);
    s_SetVideoFilterErrorCallback_001c1cb2[0x12] =
         SUB31(s_SetVideoFilterErrorCallback_001c1cb2._16_3_,2);
    s_SetVideoFilterErrorCallback_001c1cb2[0xb] =
         (char)s_SetVideoFilterErrorCallback_001c1cb2._11_5_;
    s_SetVideoFilterErrorCallback_001c1cb2[0xc] =
         SUB51(s_SetVideoFilterErrorCallback_001c1cb2._11_5_,1);
    s_SetVideoFilterErrorCallback_001c1cb2[0xd] =
         SUB51(s_SetVideoFilterErrorCallback_001c1cb2._11_5_,2);
    s_SetVideoFilterErrorCallback_001c1cb2[0xe] =
         SUB51(s_SetVideoFilterErrorCallback_001c1cb2._11_5_,3);
    s_SetVideoFilterErrorCallback_001c1cb2[0xf] =
         SUB51(s_SetVideoFilterErrorCallback_001c1cb2._11_5_,4);
    s_SetVideoFilterErrorCallback_001c1cb2[8] = (char)s_SetVideoFilterErrorCallback_001c1cb2._8_3_;
    s_SetVideoFilterErrorCallback_001c1cb2[9] =
         SUB31(s_SetVideoFilterErrorCallback_001c1cb2._8_3_,1);
    s_SetVideoFilterErrorCallback_001c1cb2[10] =
         SUB31(s_SetVideoFilterErrorCallback_001c1cb2._8_3_,2);
    s_SetVideoFilterErrorCallback_001c1cb2[0] = (char)s_SetVideoFilterErrorCallback_001c1cb2._0_8_;
    s_SetVideoFilterErrorCallback_001c1cb2[1] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,1);
    s_SetVideoFilterErrorCallback_001c1cb2[2] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,2);
    s_SetVideoFilterErrorCallback_001c1cb2[3] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,3);
    s_SetVideoFilterErrorCallback_001c1cb2[4] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,4);
    s_SetVideoFilterErrorCallback_001c1cb2[5] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,5);
    s_SetVideoFilterErrorCallback_001c1cb2[6] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,6);
    s_SetVideoFilterErrorCallback_001c1cb2[7] =
         SUB81(s_SetVideoFilterErrorCallback_001c1cb2._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040ace8  Discord::WriteAudioDebugState =====

/* Discord::WriteAudioDebugState() */

void Discord::WriteAudioDebugState(void)

{
  return;
}


// ===== 0040acec  Discord::SetAecDump =====

/* Discord::SetAecDump(bool) */

void __thiscall Discord::SetAecDump(Discord *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined7 uStack_8f;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d1aa90;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_0040aea4;
    }
    uVar3 = FUN_005ce36c();
    local_78 = CONCAT17(10,(undefined7)local_78);
    if ((&local_88 < (void **)0x1db37f) && ("SetAecDump" < (char *)((long)&uStack_80 + 2U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)uStack_80 >> 0x10;
    uStack_80 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x706d);
    local_88 = (void *)s_SetAecDump_001db37e._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar6;
    local_50 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT71(uStack_8f,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d1aa68;
    puVar4[4] = uStack_80;
    puVar4[3] = local_88;
    puVar4[5] = local_78;
    puVar4[7] = uStack_68;
    puVar4[6] = local_70;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0040aea4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040aea8  Discord::StartRecordingRawSamples =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::StartRecordingRawSamples(std::__Cr::function<void (std::__Cr::vector<short,
   std::__Cr::allocator<short> >, unsigned long, int)>) */

void __thiscall Discord::StartRecordingRawSamples(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  uVar2 = param_2[2];
  puVar14 = (undefined8 *)param_2[3];
  lVar10 = *(long *)this;
  if (puVar14[1] != 0) {
    param_2[2] = FUN_0041a918;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar15 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar15;
      puVar9[4] = uVar2;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1aae0;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040afd0;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_StartRecordingRawSamples_001cffec._16_8_;
    uVar4 = s_StartRecordingRawSamples_001cffec._8_8_;
    uVar3 = s_StartRecordingRawSamples_001cffec._0_8_;
    if ((pcVar7 < "tartRecordingRawSamples") && ("StartRecordingRawSamples" < pcVar7 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar7[0x18] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar4;
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0x10) = uVar5;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar15;
    puVar8[4] = uVar2;
    puVar8[5] = puVar14;
    uVar15 = _UNK_001f3238;
    uVar2 = _DAT_001f3230;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1aab8;
    puVar8[1] = this;
    puVar8[8] = uVar15;
    puVar8[7] = uVar2;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040afd0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040afd0:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_StartRecordingRawSamples_001cffec[0] = (char)s_StartRecordingRawSamples_001cffec._0_8_;
    s_StartRecordingRawSamples_001cffec[1] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,1);
    s_StartRecordingRawSamples_001cffec[2] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,2);
    s_StartRecordingRawSamples_001cffec[3] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,3);
    s_StartRecordingRawSamples_001cffec[4] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,4);
    s_StartRecordingRawSamples_001cffec[5] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,5);
    s_StartRecordingRawSamples_001cffec[6] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,6);
    s_StartRecordingRawSamples_001cffec[7] = SUB81(s_StartRecordingRawSamples_001cffec._0_8_,7);
    s_StartRecordingRawSamples_001cffec[8] = (char)s_StartRecordingRawSamples_001cffec._8_8_;
    s_StartRecordingRawSamples_001cffec[9] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,1);
    s_StartRecordingRawSamples_001cffec[10] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,2);
    s_StartRecordingRawSamples_001cffec[0xb] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,3);
    s_StartRecordingRawSamples_001cffec[0xc] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,4);
    s_StartRecordingRawSamples_001cffec[0xd] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,5);
    s_StartRecordingRawSamples_001cffec[0xe] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,6);
    s_StartRecordingRawSamples_001cffec[0xf] = SUB81(s_StartRecordingRawSamples_001cffec._8_8_,7);
    s_StartRecordingRawSamples_001cffec[0x10] = (char)s_StartRecordingRawSamples_001cffec._16_8_;
    s_StartRecordingRawSamples_001cffec[0x11] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,1);
    s_StartRecordingRawSamples_001cffec[0x12] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,2);
    s_StartRecordingRawSamples_001cffec[0x13] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,3);
    s_StartRecordingRawSamples_001cffec[0x14] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,4);
    s_StartRecordingRawSamples_001cffec[0x15] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,5);
    s_StartRecordingRawSamples_001cffec[0x16] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,6);
    s_StartRecordingRawSamples_001cffec[0x17] = SUB81(s_StartRecordingRawSamples_001cffec._16_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040b004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040b090  Discord::StopRecordingRawSamples =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::StopRecordingRawSamples() */

void __thiscall Discord::StopRecordingRawSamples(Discord *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x10);
    *puVar6 = &PTR_FUN_00d1ab30;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_StopRecordingRawSamples_001cd698._0_8_;
    if ((pcVar5 < "topRecordingRawSamples") && ("StopRecordingRawSamples" < pcVar5 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_StopRecordingRawSamples_001cd698[0xf],
                     s_StopRecordingRawSamples_001cd698._8_7_);
    uVar2 = CONCAT71(s_StopRecordingRawSamples_001cd698._16_7_,
                     s_StopRecordingRawSamples_001cd698[0xf]);
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar1;
    *(undefined8 *)pcVar5 = uVar3;
    *(undefined8 *)(pcVar5 + 0xf) = uVar2;
    puVar6 = (undefined8 *)operator_new(0x50);
    puVar6[2] = pcVar5;
    uVar1 = _UNK_001f3b08;
    uVar3 = _DAT_001f3b00;
    *puVar6 = &PTR_FUN_00d1ab08;
    puVar6[1] = this;
    puVar6[5] = lVar8;
    puVar6[4] = uVar1;
    puVar6[3] = uVar3;
    puVar6[7] = FUN_0040e7ec;
    puVar6[8] = &DAT_001f4e70;
    puVar6[9] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 0040b1b4  Discord::ProcessBatchAudioFiles =====

/* WARNING: Type propagation algorithm not settling */
/* Discord::ProcessBatchAudioFiles(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const&, std::__Cr::function<void (std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&, int, int, bool)>,
   std::__Cr::function<void (int, int)>) */

void __thiscall
Discord::ProcessBatchAudioFiles
          (Discord *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_4,
          undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  Discord *local_198;
  undefined8 *******local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 *******local_178;
  ulong uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_128;
  undefined1 auStack_120 [8];
  void *local_118;
  char local_101;
  void *local_100;
  char local_e9;
  undefined8 local_e8;
  long local_d0;
  undefined8 local_c8;
  long local_b0;
  void *local_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  char cStack_92;
  char cStack_91;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar11 = *(long *)this;
  pppppppuVar7 = &local_190;
  local_198 = this;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    pppppppuVar2 = (undefined8 *******)*param_1;
    uVar3 = param_1[1];
    if (uVar3 < 0x17) {
      local_180 = CONCAT17((char)uVar3,(undefined7)local_180);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppppuVar7 = (undefined8 *******)operator_new(uVar1);
      local_180 = uVar1 | 0x8000000000000000;
      local_190 = pppppppuVar7;
      uStack_188 = uVar3;
    }
    if ((pppppppuVar7 <= pppppppuVar2) &&
       (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar7 + uVar3 + 1))) goto LAB_0040b570;
    memmove(pppppppuVar7,pppppppuVar2,uVar3 + 1);
  }
  else {
    uStack_188 = param_1[1];
    local_190 = (undefined8 *******)*param_1;
    local_180 = param_1[2];
  }
  pppppppuVar7 = &local_178;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    pppppppuVar2 = (undefined8 *******)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_168 = CONCAT17((char)uVar3,(undefined7)local_168);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      pppppppuVar7 = (undefined8 *******)operator_new(uVar1);
      local_168 = uVar1 | 0x8000000000000000;
      local_178 = pppppppuVar7;
      uStack_170 = uVar3;
    }
    if ((pppppppuVar7 <= pppppppuVar2) &&
       (pppppppuVar2 < (undefined8 *******)((long)pppppppuVar7 + uVar3 + 1))) goto LAB_0040b570;
    memmove(pppppppuVar7,pppppppuVar2,uVar3 + 1);
  }
  else {
    uStack_170 = param_2[1];
    local_178 = (undefined8 *******)*param_2;
    local_168 = param_2[2];
  }
  local_150 = param_4[2];
  local_148 = param_4[3];
  uStack_158 = param_4[1];
  local_160 = *param_4;
  if (*(long *)(local_148 + 8) != 0) {
    param_4[2] = FUN_0041ae1c;
    param_4[3] = &DAT_001f1910;
  }
  local_130 = param_5[2];
  local_128 = param_5[3];
  uStack_138 = param_5[1];
  local_140 = *param_5;
  if (*(long *)(local_128 + 8) != 0) {
    param_5[2] = FUN_0041ae28;
    param_5[3] = &DAT_001f1910;
  }
  lVar10 = *(long *)(lVar11 + 0x58);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x78);
    if (lVar11 == 0) {
      puVar9 = (undefined8 *)operator_new(0x80);
      *puVar9 = &PTR_FUN_00d1ab80;
      FUN_0041afd4(puVar9 + 1,&local_198);
      FUN_00512cf8(lVar10,puVar9);
    }
    else {
      uVar8 = FUN_005ce36c();
      FUN_0041afd4(auStack_120,&local_198);
      cStack_91 = '\x16';
      if ((&local_a8 < (void **)0x1db38a) && ("ProcessBatchAudioFiles" < &cStack_92)) {
LAB_0040b570:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      cStack_92 = '\0';
      uStack_a0._0_1_ = s_ProcessBatchAudioFiles_001db389[8];
      uStack_a0._1_1_ = s_ProcessBatchAudioFiles_001db389[9];
      uStack_a0._2_1_ = s_ProcessBatchAudioFiles_001db389[10];
      uStack_a0._3_1_ = s_ProcessBatchAudioFiles_001db389[0xb];
      uStack_a0._4_1_ = s_ProcessBatchAudioFiles_001db389[0xc];
      uStack_a0._5_1_ = s_ProcessBatchAudioFiles_001db389[0xd];
      local_a8 = (void *)s_ProcessBatchAudioFiles_001db389._0_8_;
      uStack_9a._0_1_ = s_ProcessBatchAudioFiles_001db389[0xe];
      uStack_9a._1_1_ = s_ProcessBatchAudioFiles_001db389[0xf];
      uStack_98._0_1_ = s_ProcessBatchAudioFiles_001db389[0x10];
      uStack_98._1_1_ = s_ProcessBatchAudioFiles_001db389[0x11];
      uStack_98._2_1_ = s_ProcessBatchAudioFiles_001db389[0x12];
      uStack_98._3_1_ = s_ProcessBatchAudioFiles_001db389[0x13];
      uStack_98._4_1_ = s_ProcessBatchAudioFiles_001db389[0x14];
      uStack_98._5_1_ = s_ProcessBatchAudioFiles_001db389[0x15];
      local_80 = FUN_0040e7ec;
      local_78 = (undefined8 *)&DAT_001f4e70;
      local_90 = lVar11;
      local_70 = uVar8;
      puVar9 = (undefined8 *)operator_new(0xc0);
      *puVar9 = &PTR_FUN_00d1ab58;
      FUN_0041afd4(puVar9 + 1,auStack_120);
      pvVar6 = local_a8;
      uVar5 = CONCAT17(cStack_91,CONCAT16(cStack_92,uStack_98));
      uVar8 = CONCAT26(uStack_9a,uStack_a0);
      uStack_a0 = 0;
      uStack_9a = 0;
      uStack_98 = 0;
      cStack_92 = '\0';
      cStack_91 = '\0';
      local_a8 = (void *)0x0;
      puVar9[0x12] = uVar5;
      puVar9[0x11] = uVar8;
      puVar9[0x10] = pvVar6;
      puVar9[0x14] = uStack_88;
      puVar9[0x13] = local_90;
      puVar9[0x15] = local_80;
      puVar9[0x16] = local_78;
      if (local_78[1] != 0) {
        local_80 = FUN_0040e33c;
        local_78 = &DAT_001f1910;
      }
      puVar9[0x17] = local_70;
      FUN_00512cf8(lVar10,puVar9);
      if ((code *)local_78[1] != (code *)0x0) {
        (*(code *)local_78[1])(local_90);
      }
      if (cStack_91 < '\0') {
        operator_delete(local_a8);
      }
      if (*(code **)(local_b0 + 8) != (code *)0x0) {
        (**(code **)(local_b0 + 8))(local_c8);
      }
      if (*(code **)(local_d0 + 8) != (code *)0x0) {
        (**(code **)(local_d0 + 8))(local_e8);
      }
      if (local_e9 < '\0') {
        operator_delete(local_100);
      }
      if (local_101 < '\0') {
        operator_delete(local_118);
      }
    }
  }
  if (*(code **)(local_128 + 8) != (code *)0x0) {
    (**(code **)(local_128 + 8))(local_140);
  }
  if (*(code **)(local_148 + 8) != (code *)0x0) {
    (**(code **)(local_148 + 8))(local_160);
  }
  if ((long)local_168 < 0) {
    operator_delete(local_178);
  }
  if ((long)local_180 < 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040b5a4  Discord::CancelBatchAudioProcessing =====

/* Discord::CancelBatchAudioProcessing() */

void __thiscall Discord::CancelBatchAudioProcessing(Discord *this)

{
  FUN_005467a4(this + 0x40);
  if (*(long *)(this + 0x68) != 0) {
    FUN_004b1d70();
  }
  FUN_005467c8(this + 0x40);
  return;
}


// ===== 0040b5dc  Discord::RankRtcRegions =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Discord::RankRtcRegions(std::__Cr::vector<discord::RtcRegionWithIps,
   std::__Cr::allocator<discord::RtcRegionWithIps> >, std::__Cr::function<void
   (std::__Cr::vector<std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::allocator<std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > > >)>) */

void __thiscall Discord::RankRtcRegions(Discord *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined8 *puStack_f8;
  Discord *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 *local_b8;
  undefined6 local_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  char cStack_a2;
  undefined1 uStack_a1;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_3[3] + 0x10) != '\0') goto LAB_0040b834;
  lVar7 = *(long *)this;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uVar11 = *param_2;
  *param_2 = 0;
  pcVar8 = (code *)param_3[2];
  puVar10 = (undefined8 *)param_3[3];
  uStack_108 = param_3[1];
  local_110 = *param_3;
  if (puVar10[1] != 0) {
    param_3[2] = FUN_0041b428;
    param_3[3] = &DAT_001f1910;
  }
  lVar9 = *(long *)(lVar7 + 0x58);
  puVar6 = puVar10;
  local_128 = uVar11;
  local_120 = uVar1;
  local_118 = uVar2;
  local_100 = pcVar8;
  puStack_f8 = puVar10;
  if (lVar9 == 0) {
LAB_0040b81c:
    pcVar8 = (code *)puVar6[1];
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x78);
    if (lVar7 != 0) {
      uVar4 = FUN_005ce36c();
      local_120 = 0;
      local_118 = 0;
      local_128 = 0;
      uStack_c8 = uStack_108;
      local_d0 = local_110;
      if (puVar10[1] != 0) {
        puVar6 = &DAT_001f1910;
        local_100 = FUN_0041b428;
        puStack_f8 = &DAT_001f1910;
      }
      local_a0 = CONCAT17(0xe,(undefined7)local_a0);
      local_f0 = this;
      local_e8 = uVar11;
      local_e0 = uVar1;
      local_d8 = uVar2;
      local_c0 = pcVar8;
      local_b8 = puVar10;
      if ((&local_b0 < "ankRtcRegions") && ("RankRtcRegions" < &cStack_a2)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      cStack_a2 = '\0';
      local_b0._0_1_ = s_RankRtcRegions_001e4177[0];
      local_b0._1_1_ = s_RankRtcRegions_001e4177[1];
      local_b0._2_1_ = s_RankRtcRegions_001e4177[2];
      local_b0._3_1_ = s_RankRtcRegions_001e4177[3];
      local_b0._4_1_ = s_RankRtcRegions_001e4177[4];
      local_b0._5_1_ = s_RankRtcRegions_001e4177[5];
      uStack_aa._0_1_ = s_RankRtcRegions_001e4177[6];
      uStack_aa._1_1_ = s_RankRtcRegions_001e4177[7];
      uStack_a8._0_1_ = s_RankRtcRegions_001e4177[8];
      uStack_a8._1_1_ = s_RankRtcRegions_001e4177[9];
      uStack_a8._2_1_ = s_RankRtcRegions_001e4177[10];
      uStack_a8._3_1_ = s_RankRtcRegions_001e4177[0xb];
      uStack_a8._4_1_ = s_RankRtcRegions_001e4177[0xc];
      uStack_a8._5_1_ = s_RankRtcRegions_001e4177[0xd];
      local_88 = FUN_0040e7ec;
      local_80 = &DAT_001f4e70;
      local_98 = lVar7;
      local_78 = uVar4;
      puVar5 = (undefined8 *)operator_new(0x88);
      uVar12 = local_a0;
      local_e0 = 0;
      local_d8 = 0;
      puVar5[2] = uVar11;
      puVar5[3] = uVar1;
      *puVar5 = &PTR_FUN_00d1aba8;
      puVar5[1] = this;
      puVar5[4] = uVar2;
      local_e8 = 0;
      puVar5[7] = pcVar8;
      puVar5[8] = puVar10;
      puVar5[6] = uStack_108;
      puVar5[5] = local_110;
      if (puVar10[1] != 0) {
        local_c0 = FUN_0041b428;
        local_b8 = &DAT_001f1910;
      }
      uVar2 = CONCAT17(uStack_a1,CONCAT16(cStack_a2,uStack_a8));
      uVar1 = CONCAT26(uStack_aa,local_b0);
      uStack_a8 = 0;
      cStack_a2 = '\0';
      uStack_a1 = 0;
      local_a0 = 0;
      local_b0 = 0;
      uStack_aa = 0;
      puVar5[0xb] = uVar12;
      puVar5[10] = uVar2;
      puVar5[9] = uVar1;
      puVar5[0xe] = FUN_0040e7ec;
      puVar5[0xf] = &DAT_001f4e70;
      puVar5[0xd] = uStack_90;
      puVar5[0xc] = local_98;
      puVar5[0x10] = uVar4;
      FUN_00512cf8(lVar9);
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98);
      }
      if (local_a0 < 0) {
        operator_delete((void *)CONCAT26(uStack_aa,local_b0));
      }
      if ((code *)local_b8[1] != (code *)0x0) {
        (*(code *)local_b8[1])(local_d0);
      }
      FUN_0040dcf8(&local_e8);
      goto LAB_0040b81c;
    }
    puVar6 = (undefined8 *)operator_new(0x48);
    uVar12 = param_3[1];
    uVar4 = *param_3;
    local_120 = 0;
    local_118 = 0;
    puVar6[2] = uVar11;
    puVar6[3] = uVar1;
    *puVar6 = &PTR_FUN_00d1abf0;
    puVar6[1] = this;
    puVar6[4] = uVar2;
    local_128 = 0;
    puVar6[6] = uVar12;
    puVar6[5] = uVar4;
    puVar6[7] = pcVar8;
    puVar6[8] = puVar10;
    if (puVar10[1] != 0) {
      puVar10 = &DAT_001f1910;
      local_100 = FUN_0041b428;
      puStack_f8 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar9,puVar6);
    pcVar8 = (code *)puVar10[1];
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(local_110);
  }
  FUN_0040dcf8(&local_128);
LAB_0040b834:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040b8f4  Discord::SetAudioInputInitializationCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetAudioInputInitializationCallback(std::__Cr::function<void
   (discord::media::AudioInputInitializationInfo const&)>) */

void __thiscall Discord::SetAudioInputInitializationCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_0041bca0;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1ac40;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040bac0;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x30);
    uVar5 = s_SetAudioInputInitializationCallb_001c4c07._24_8_;
    uVar4 = s_SetAudioInputInitializationCallb_001c4c07._16_8_;
    uVar3 = s_SetAudioInputInitializationCallb_001c4c07._8_8_;
    uVar2 = s_SetAudioInputInitializationCallb_001c4c07._0_8_;
    if ((pcVar7 < "etAudioInputInitializationCallback") &&
       ("SetAudioInputInitializationCallback" < pcVar7 + 0x23)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar7[0x23] = '\0';
    pcVar7[0x1f] = 'b';
    pcVar7[0x20] = 'a';
    pcVar7[0x21] = 'c';
    pcVar7[0x22] = 'k';
    *(undefined8 *)(pcVar7 + 8) = uVar3;
    *(undefined8 *)pcVar7 = uVar2;
    *(undefined8 *)(pcVar7 + 0x18) = uVar5;
    *(undefined8 *)(pcVar7 + 0x10) = uVar4;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f3528;
    uVar15 = _DAT_001f3520;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1ac18;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040bac0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040bac0:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetAudioInputInitializationCallb_001c4c07[0x18] =
         (char)s_SetAudioInputInitializationCallb_001c4c07._24_8_;
    s_SetAudioInputInitializationCallb_001c4c07[0x19] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,1);
    s_SetAudioInputInitializationCallb_001c4c07[0x1a] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,2);
    s_SetAudioInputInitializationCallb_001c4c07[0x1b] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,3);
    s_SetAudioInputInitializationCallb_001c4c07[0x1c] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,4);
    s_SetAudioInputInitializationCallb_001c4c07[0x1d] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,5);
    s_SetAudioInputInitializationCallb_001c4c07[0x1e] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,6);
    s_SetAudioInputInitializationCallb_001c4c07[0x1f] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._24_8_,7);
    s_SetAudioInputInitializationCallb_001c4c07[0x10] =
         (char)s_SetAudioInputInitializationCallb_001c4c07._16_8_;
    s_SetAudioInputInitializationCallb_001c4c07[0x11] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,1);
    s_SetAudioInputInitializationCallb_001c4c07[0x12] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,2);
    s_SetAudioInputInitializationCallb_001c4c07[0x13] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,3);
    s_SetAudioInputInitializationCallb_001c4c07[0x14] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,4);
    s_SetAudioInputInitializationCallb_001c4c07[0x15] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,5);
    s_SetAudioInputInitializationCallb_001c4c07[0x16] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,6);
    s_SetAudioInputInitializationCallb_001c4c07[0x17] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._16_8_,7);
    s_SetAudioInputInitializationCallb_001c4c07[8] =
         (char)s_SetAudioInputInitializationCallb_001c4c07._8_8_;
    s_SetAudioInputInitializationCallb_001c4c07[9] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,1);
    s_SetAudioInputInitializationCallb_001c4c07[10] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,2);
    s_SetAudioInputInitializationCallb_001c4c07[0xb] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,3);
    s_SetAudioInputInitializationCallb_001c4c07[0xc] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,4);
    s_SetAudioInputInitializationCallb_001c4c07[0xd] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,5);
    s_SetAudioInputInitializationCallb_001c4c07[0xe] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,6);
    s_SetAudioInputInitializationCallb_001c4c07[0xf] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._8_8_,7);
    s_SetAudioInputInitializationCallb_001c4c07[0] =
         (char)s_SetAudioInputInitializationCallb_001c4c07._0_8_;
    s_SetAudioInputInitializationCallb_001c4c07[1] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,1);
    s_SetAudioInputInitializationCallb_001c4c07[2] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,2);
    s_SetAudioInputInitializationCallb_001c4c07[3] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,3);
    s_SetAudioInputInitializationCallb_001c4c07[4] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,4);
    s_SetAudioInputInitializationCallb_001c4c07[5] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,5);
    s_SetAudioInputInitializationCallb_001c4c07[6] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,6);
    s_SetAudioInputInitializationCallb_001c4c07[7] =
         SUB81(s_SetAudioInputInitializationCallb_001c4c07._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040baf0  Discord::SetVideoInputInitializationCallback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetVideoInputInitializationCallback(std::__Cr::function<void
   (discord::media::VideoInputInitializationInfo const&)>) */

void __thiscall Discord::SetVideoInputInitializationCallback(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar14 = (undefined8 *)param_2[3];
  if (*(char *)(puVar14 + 2) != '\0') {
    return;
  }
  lVar10 = *(long *)this;
  uVar15 = param_2[2];
  if (puVar14[1] != 0) {
    param_2[2] = FUN_0041bfe0;
    param_2[3] = &DAT_001f1910;
  }
  lVar13 = *(long *)(lVar10 + 0x58);
  uVar12 = *param_2;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    uVar16 = param_2[1];
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar9[2] = uVar12;
      puVar9[3] = uVar16;
      puVar9[4] = uVar15;
      lVar10 = puVar14[1];
      *puVar9 = &PTR_FUN_00d1ac90;
      puVar9[1] = this;
      puVar9[5] = puVar14;
      if (lVar10 != 0) {
        puVar14 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar9);
      UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
      goto joined_r0x0040bcbc;
    }
    uVar6 = FUN_005ce36c();
    puVar9 = puVar14;
    if (puVar14[1] != 0) {
      puVar9 = &DAT_001f1910;
    }
    pcVar7 = (char *)operator_new(0x30);
    uVar5 = s_SetVideoInputInitializationCallb_001d0005._24_8_;
    uVar4 = s_SetVideoInputInitializationCallb_001d0005._16_8_;
    uVar3 = s_SetVideoInputInitializationCallb_001d0005._8_8_;
    uVar2 = s_SetVideoInputInitializationCallb_001d0005._0_8_;
    if ((pcVar7 < "etVideoInputInitializationCallback") &&
       ("SetVideoInputInitializationCallback" < pcVar7 + 0x23)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar7[0x23] = '\0';
    pcVar7[0x1f] = 'b';
    pcVar7[0x20] = 'a';
    pcVar7[0x21] = 'c';
    pcVar7[0x22] = 'k';
    *(undefined8 *)(pcVar7 + 8) = uVar3;
    *(undefined8 *)pcVar7 = uVar2;
    *(undefined8 *)(pcVar7 + 0x18) = uVar5;
    *(undefined8 *)(pcVar7 + 0x10) = uVar4;
    puVar8 = (undefined8 *)operator_new(0x70);
    puVar8[2] = uVar12;
    puVar8[3] = uVar16;
    puVar8[4] = uVar15;
    puVar8[5] = puVar14;
    uVar16 = _UNK_001f3528;
    uVar15 = _DAT_001f3520;
    lVar11 = puVar14[1];
    puVar8[6] = pcVar7;
    *puVar8 = &PTR_FUN_00d1ac68;
    puVar8[1] = this;
    puVar8[8] = uVar16;
    puVar8[7] = uVar15;
    puVar8[9] = lVar10;
    puVar1 = puVar14;
    if (lVar11 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar8[0xb] = FUN_0040e7ec;
    puVar8[0xc] = &DAT_001f4e70;
    puVar8[0xd] = uVar6;
    FUN_00512cf8(lVar13,puVar8);
    puVar14 = puVar9;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar12);
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      goto joined_r0x0040bcbc;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar14[1];
joined_r0x0040bcbc:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_SetVideoInputInitializationCallb_001d0005[0x18] =
         (char)s_SetVideoInputInitializationCallb_001d0005._24_8_;
    s_SetVideoInputInitializationCallb_001d0005[0x19] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,1);
    s_SetVideoInputInitializationCallb_001d0005[0x1a] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,2);
    s_SetVideoInputInitializationCallb_001d0005[0x1b] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,3);
    s_SetVideoInputInitializationCallb_001d0005[0x1c] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,4);
    s_SetVideoInputInitializationCallb_001d0005[0x1d] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,5);
    s_SetVideoInputInitializationCallb_001d0005[0x1e] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,6);
    s_SetVideoInputInitializationCallb_001d0005[0x1f] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._24_8_,7);
    s_SetVideoInputInitializationCallb_001d0005[0x10] =
         (char)s_SetVideoInputInitializationCallb_001d0005._16_8_;
    s_SetVideoInputInitializationCallb_001d0005[0x11] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,1);
    s_SetVideoInputInitializationCallb_001d0005[0x12] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,2);
    s_SetVideoInputInitializationCallb_001d0005[0x13] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,3);
    s_SetVideoInputInitializationCallb_001d0005[0x14] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,4);
    s_SetVideoInputInitializationCallb_001d0005[0x15] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,5);
    s_SetVideoInputInitializationCallb_001d0005[0x16] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,6);
    s_SetVideoInputInitializationCallb_001d0005[0x17] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._16_8_,7);
    s_SetVideoInputInitializationCallb_001d0005[8] =
         (char)s_SetVideoInputInitializationCallb_001d0005._8_8_;
    s_SetVideoInputInitializationCallb_001d0005[9] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,1);
    s_SetVideoInputInitializationCallb_001d0005[10] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,2);
    s_SetVideoInputInitializationCallb_001d0005[0xb] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,3);
    s_SetVideoInputInitializationCallb_001d0005[0xc] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,4);
    s_SetVideoInputInitializationCallb_001d0005[0xd] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,5);
    s_SetVideoInputInitializationCallb_001d0005[0xe] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,6);
    s_SetVideoInputInitializationCallb_001d0005[0xf] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._8_8_,7);
    s_SetVideoInputInitializationCallb_001d0005[0] =
         (char)s_SetVideoInputInitializationCallb_001d0005._0_8_;
    s_SetVideoInputInitializationCallb_001d0005[1] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,1);
    s_SetVideoInputInitializationCallb_001d0005[2] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,2);
    s_SetVideoInputInitializationCallb_001d0005[3] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,3);
    s_SetVideoInputInitializationCallb_001d0005[4] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,4);
    s_SetVideoInputInitializationCallb_001d0005[5] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,5);
    s_SetVideoInputInitializationCallb_001d0005[6] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,6);
    s_SetVideoInputInitializationCallb_001d0005[7] =
         SUB81(s_SetVideoInputInitializationCallb_001d0005._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12);
  return;
}


// ===== 0040bcec  Discord::SetNativeDesktopVideoSourcePickerActive =====

/* Discord::SetNativeDesktopVideoSourcePickerActive(bool) */

undefined8 Discord::SetNativeDesktopVideoSourcePickerActive(bool param_1)

{
  return 0;
}


// ===== 0040bcf4  Discord::PresentNativeDesktopVideoSourcePicker =====

/* Discord::PresentNativeDesktopVideoSourcePicker(std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > const&) */

undefined8 Discord::PresentNativeDesktopVideoSourcePicker(basic_string *param_1)

{
  return 0;
}


// ===== 0040bcfc  Discord::ReleaseNativeDesktopVideoSourcePickerStream =====

/* Discord::ReleaseNativeDesktopVideoSourcePickerStream() */

undefined8 Discord::ReleaseNativeDesktopVideoSourcePickerStream(void)

{
  return 0;
}


// ===== 0040bd04  Discord::SetNativeScreenSharePickerCallbacks =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetNativeScreenSharePickerCallbacks(std::__Cr::function<void (bool,
   discord::Optional<discord::media::CaptureContent>)>, std::__Cr::function<void (bool)>,
   std::__Cr::function<void (std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >)>) */

void __thiscall
Discord::SetNativeScreenSharePickerCallbacks
          (Discord *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  
  puVar26 = (undefined8 *)param_2[3];
  if (((*(char *)(puVar26 + 2) == '\0') &&
      (puVar25 = (undefined8 *)param_3[3], *(char *)(puVar25 + 2) == '\0')) &&
     (*(char *)(param_4[3] + 0x10) == '\0')) {
    lVar15 = *(long *)this;
    uVar19 = param_2[2];
    if (puVar26[1] != 0) {
      param_2[3] = &DAT_001f1910;
      param_2[2] = FUN_0041c320;
      puVar25 = (undefined8 *)param_3[3];
    }
    uVar1 = *param_2;
    uVar4 = param_2[1];
    uVar20 = param_3[2];
    if (puVar25[1] != 0) {
      param_3[2] = FUN_0041c32c;
      param_3[3] = &DAT_001f1910;
    }
    uVar2 = param_4[2];
    puVar5 = (undefined8 *)param_4[3];
    uVar3 = *param_3;
    uVar6 = param_3[1];
    if (puVar5[1] != 0) {
      param_4[2] = FUN_00410008;
      param_4[3] = &DAT_001f1910;
    }
    lVar24 = *(long *)(lVar15 + 0x58);
    uVar16 = *param_4;
    puVar14 = puVar26;
    puVar22 = puVar25;
    puVar23 = puVar5;
    if (lVar24 != 0) {
      uVar21 = param_4[1];
      lVar15 = *(long *)(lVar15 + 0x78);
      if (lVar15 == 0) {
        puVar14 = (undefined8 *)operator_new(0x70);
        puVar14[2] = uVar1;
        puVar14[3] = uVar4;
        *puVar14 = &PTR_FUN_00d1ace0;
        puVar14[1] = this;
        puVar14[5] = puVar26;
        puVar14[9] = puVar25;
        puVar14[0xd] = puVar5;
        puVar14[4] = uVar19;
        lVar15 = puVar26[1];
        puVar14[6] = uVar3;
        puVar14[7] = uVar6;
        puVar14[8] = uVar20;
        lVar17 = puVar25[1];
        puVar14[10] = uVar16;
        puVar14[0xb] = uVar21;
        if (lVar15 != 0) {
          puVar26 = &DAT_001f1910;
        }
        puVar14[0xc] = uVar2;
        if (lVar17 != 0) {
          puVar25 = &DAT_001f1910;
        }
        if (puVar5[1] != 0) {
          puVar5 = &DAT_001f1910;
        }
        FUN_00512cf8(lVar24,puVar14);
        puVar14 = puVar26;
        puVar22 = puVar25;
        puVar23 = puVar5;
      }
      else {
        uVar11 = FUN_005ce36c();
        if (puVar26[1] != 0) {
          puVar14 = &DAT_001f1910;
        }
        if (puVar25[1] != 0) {
          puVar22 = &DAT_001f1910;
        }
        if (puVar5[1] != 0) {
          puVar23 = &DAT_001f1910;
        }
        pcVar12 = (char *)operator_new(0x30);
        uVar10 = s_SetNativeScreenSharePickerCallba_001a2ce0._24_8_;
        uVar9 = s_SetNativeScreenSharePickerCallba_001a2ce0._16_8_;
        uVar8 = s_SetNativeScreenSharePickerCallba_001a2ce0._8_8_;
        uVar7 = s_SetNativeScreenSharePickerCallba_001a2ce0._0_8_;
        if ((pcVar12 < "etNativeScreenSharePickerCallbacks") &&
           ("SetNativeScreenSharePickerCallbacks" < pcVar12 + 0x23)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        pcVar12[0x23] = '\0';
        pcVar12[0x1f] = 'a';
        pcVar12[0x20] = 'c';
        pcVar12[0x21] = 'k';
        pcVar12[0x22] = 's';
        *(undefined8 *)(pcVar12 + 8) = uVar8;
        *(undefined8 *)pcVar12 = uVar7;
        *(undefined8 *)(pcVar12 + 0x18) = uVar10;
        *(undefined8 *)(pcVar12 + 0x10) = uVar9;
        puVar13 = (undefined8 *)operator_new(0xb0);
        *puVar13 = &PTR_FUN_00d1acb8;
        puVar13[1] = this;
        uVar8 = _UNK_001f3528;
        uVar7 = _DAT_001f3520;
        puVar13[2] = uVar1;
        puVar13[3] = uVar4;
        puVar13[4] = uVar19;
        puVar13[5] = puVar26;
        lVar17 = puVar26[1];
        puVar13[6] = uVar3;
        puVar13[7] = uVar6;
        puVar13[8] = uVar20;
        puVar13[9] = puVar25;
        lVar18 = puVar25[1];
        puVar13[0xc] = uVar2;
        if (lVar17 != 0) {
          puVar26 = &DAT_001f1910;
        }
        puVar13[10] = uVar16;
        puVar13[0xb] = uVar21;
        lVar17 = puVar5[1];
        if (lVar18 != 0) {
          puVar25 = &DAT_001f1910;
        }
        puVar13[0xd] = puVar5;
        puVar13[0xe] = pcVar12;
        puVar13[0x10] = uVar8;
        puVar13[0xf] = uVar7;
        puVar13[0x11] = lVar15;
        if (lVar17 != 0) {
          puVar5 = &DAT_001f1910;
        }
        puVar13[0x13] = FUN_0040e7ec;
        puVar13[0x14] = &DAT_001f4e70;
        puVar13[0x15] = uVar11;
        FUN_00512cf8(lVar24,puVar13);
        if ((code *)puVar5[1] != (code *)0x0) {
          (*(code *)puVar5[1])(uVar16);
        }
        if ((code *)puVar25[1] != (code *)0x0) {
          (*(code *)puVar25[1])(uVar3);
        }
        if ((code *)puVar26[1] != (code *)0x0) {
          (*(code *)puVar26[1])(uVar1);
        }
      }
    }
    if ((code *)puVar23[1] != (code *)0x0) {
      (*(code *)puVar23[1])(uVar16);
    }
    if ((code *)puVar22[1] != (code *)0x0) {
      (*(code *)puVar22[1])(uVar3);
    }
    if ((code *)puVar14[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040c02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar14[1])(uVar1);
      return;
    }
  }
  return;
}


// ===== 0040c058  Discord::SetAudioInputEnabled =====

/* Discord::SetAudioInputEnabled(bool) */

void __thiscall Discord::SetAudioInputEnabled(Discord *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined7 uStack_8f;
  void *local_88;
  char acStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)this + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)this + 0x78);
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      *(bool *)(puVar4 + 2) = param_1;
      *puVar4 = &PTR_FUN_00d1ad30;
      puVar4[1] = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00512cf8(lVar5,puVar4);
        return;
      }
      goto LAB_0040c214;
    }
    uVar3 = FUN_005ce36c();
    local_78 = CONCAT17(0x14,(undefined7)local_78);
    if ((&local_88 < (void **)0x19ca0d) && ("SetAudioInputEnabled" < (char *)((long)&local_78 + 4U))
       ) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = (ulong)local_78 >> 0x20;
    local_78 = CONCAT44((uint)uVar2 & 0xffffff00,0x64656c62);
    acStack_80[0] = s_SetAudioInputEnabled_0019ca0c[8];
    acStack_80[1] = s_SetAudioInputEnabled_0019ca0c[9];
    acStack_80[2] = s_SetAudioInputEnabled_0019ca0c[10];
    acStack_80[3] = s_SetAudioInputEnabled_0019ca0c[0xb];
    acStack_80[4] = s_SetAudioInputEnabled_0019ca0c[0xc];
    acStack_80[5] = s_SetAudioInputEnabled_0019ca0c[0xd];
    acStack_80[6] = s_SetAudioInputEnabled_0019ca0c[0xe];
    acStack_80[7] = s_SetAudioInputEnabled_0019ca0c[0xf];
    local_88 = (void *)s_SetAudioInputEnabled_0019ca0c._0_8_;
    local_60 = FUN_0040e7ec;
    local_58 = &DAT_001f4e70;
    local_70 = lVar6;
    local_50 = uVar3;
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar4[2] = CONCAT71(uStack_8f,param_1);
    puVar4[1] = this;
    *puVar4 = &PTR_FUN_00d1ad08;
    puVar4[4] = acStack_80;
    puVar4[3] = local_88;
    puVar4[5] = local_78;
    puVar4[7] = uStack_68;
    puVar4[6] = local_70;
    puVar4[8] = FUN_0040e7ec;
    puVar4[9] = &DAT_001f4e70;
    puVar4[10] = uVar3;
    local_88 = (void *)0x0;
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    local_78 = 0;
    FUN_00512cf8(lVar5,puVar4);
    if (*(code **)(local_58 + 8) != (code *)0x0) {
      (**(code **)(local_58 + 8))(local_70);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0040c214:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040c218  Discord::SetSidechainCompression =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetSidechainCompression(bool) */

void __thiscall Discord::SetSidechainCompression(Discord *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(bool *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d1ad80;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetSidechainCompression_001de368._0_8_;
    if ((pcVar5 < "etSidechainCompression") && ("SetSidechainCompression" < pcVar5 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetSidechainCompression_001de368[0xf],
                     s_SetSidechainCompression_001de368._8_7_);
    uVar2 = CONCAT71(s_SetSidechainCompression_001de368._16_7_,
                     s_SetSidechainCompression_001de368[0xf]);
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar1;
    *(undefined8 *)pcVar5 = uVar3;
    *(undefined8 *)(pcVar5 + 0xf) = uVar2;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(bool *)(puVar6 + 2) = param_1;
    uVar1 = _UNK_001f3b08;
    uVar3 = _DAT_001f3b00;
    *puVar6 = &PTR_FUN_00d1ad58;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar1;
    puVar6[4] = uVar3;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 0040c348  Discord::ApplySidechainCompressionSettings =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::ApplySidechainCompressionSettings(discord::SidechainCompressionSettings) */

void __thiscall Discord::ApplySidechainCompressionSettings(Discord *this,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  lVar12 = *(long *)this;
  uVar16 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_2 + 1) = 0;
  uVar17 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_2 + 3) = 0;
  uVar15 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_2 + 5) = 0;
  uVar14 = param_2[6];
  lVar13 = *(long *)(lVar12 + 0x58);
  uVar4 = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_2 + 7) = 0;
  if (lVar13 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x78);
  if (lVar12 == 0) {
    puVar11 = (undefined8 *)operator_new(0x30);
    *(undefined4 *)(puVar11 + 2) = uVar16;
    *(undefined1 *)((long)puVar11 + 0x14) = uVar1;
    *(undefined4 *)(puVar11 + 3) = uVar17;
    *puVar11 = &PTR_FUN_00d1add0;
    puVar11[1] = this;
    *(undefined1 *)((long)puVar11 + 0x1c) = uVar2;
    *(undefined4 *)(puVar11 + 4) = uVar15;
    *(undefined1 *)((long)puVar11 + 0x24) = uVar3;
    *(undefined4 *)(puVar11 + 5) = uVar14;
    *(undefined1 *)((long)puVar11 + 0x2c) = uVar4;
  }
  else {
    uVar9 = FUN_005ce36c();
    pcVar10 = (char *)operator_new(0x30);
    uVar8 = s_ApplySidechainCompressionSetting_001de380._24_8_;
    uVar7 = s_ApplySidechainCompressionSetting_001de380._16_8_;
    uVar6 = s_ApplySidechainCompressionSetting_001de380._8_8_;
    uVar5 = s_ApplySidechainCompressionSetting_001de380._0_8_;
    if ((pcVar10 < "pplySidechainCompressionSettings") &&
       ("ApplySidechainCompressionSettings" < pcVar10 + 0x21)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pcVar10[0x20] = 's';
    pcVar10[0x21] = '\0';
    *(undefined8 *)(pcVar10 + 8) = uVar6;
    *(undefined8 *)pcVar10 = uVar5;
    *(undefined8 *)(pcVar10 + 0x18) = uVar8;
    *(undefined8 *)(pcVar10 + 0x10) = uVar7;
    puVar11 = (undefined8 *)operator_new(0x70);
    *(undefined4 *)(puVar11 + 2) = uVar16;
    uVar6 = _UNK_001f48b8;
    uVar5 = _DAT_001f48b0;
    *puVar11 = &PTR_FUN_00d1ada8;
    puVar11[1] = this;
    *(undefined1 *)((long)puVar11 + 0x14) = uVar1;
    *(undefined4 *)(puVar11 + 3) = uVar17;
    *(undefined1 *)((long)puVar11 + 0x1c) = uVar2;
    *(undefined4 *)(puVar11 + 4) = uVar15;
    *(undefined1 *)((long)puVar11 + 0x24) = uVar3;
    *(undefined4 *)(puVar11 + 5) = uVar14;
    *(undefined1 *)((long)puVar11 + 0x2c) = uVar4;
    puVar11[6] = pcVar10;
    puVar11[8] = uVar6;
    puVar11[7] = uVar5;
    puVar11[9] = lVar12;
    puVar11[0xb] = FUN_0040e7ec;
    puVar11[0xc] = &DAT_001f4e70;
    puVar11[0xd] = uVar9;
  }
  FUN_00512cf8(lVar13,puVar11);
  return;
}


// ===== 0040c508  Discord::UpdateFieldTrial =====

/* WARNING: Removing unreachable block (ram,0x0040c6b8) */
/* WARNING: Removing unreachable block (ram,0x0040c75c) */
/* WARNING: Removing unreachable block (ram,0x0040c74c) */
/* Discord::UpdateFieldTrial(std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >) */

void __thiscall Discord::UpdateFieldTrial(Discord *this,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined7 local_100;
  undefined1 uStack_f9;
  undefined7 local_f0;
  undefined1 uStack_e9;
  undefined7 local_c8;
  undefined7 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)this;
  uVar10 = *(undefined8 *)((long)param_2 + 0xf);
  cVar4 = *(char *)((long)param_2 + 0x17);
  pvVar1 = (void *)*param_2;
  uVar7 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  pvVar2 = (void *)*param_3;
  uVar3 = param_3[1];
  *param_3 = 0;
  uVar11 = *(undefined8 *)((long)param_3 + 0xf);
  local_f0 = (undefined7)uVar7;
  cVar5 = *(char *)((long)param_3 + 0x17);
  param_3[1] = 0;
  param_3[2] = 0;
  lVar12 = *(long *)(lVar9 + 0x58);
  uStack_e9 = (undefined1)uVar10;
  local_100 = (undefined7)uVar3;
  uStack_f9 = (undefined1)uVar11;
  if (lVar12 == 0) {
    if (cVar5 < '\0') {
      operator_delete(pvVar2);
    }
    if (cVar4 < '\0') {
      if (*(long *)(lVar6 + 0x28) == local_68) {
        operator_delete(pvVar1);
        return;
      }
      goto LAB_0040c800;
    }
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    if (lVar9 == 0) {
      puVar8 = (undefined8 *)operator_new(0x40);
      *(char *)((long)puVar8 + 0x27) = cVar4;
      *(char *)((long)puVar8 + 0x3f) = cVar5;
      *puVar8 = &PTR_FUN_00d1ae20;
      puVar8[1] = this;
      puVar8[2] = pvVar1;
      puVar8[3] = CONCAT17(uStack_e9,local_f0);
      *(undefined8 *)((long)puVar8 + 0x1f) = uVar10;
      puVar8[5] = pvVar2;
      puVar8[6] = CONCAT17(uStack_f9,local_100);
      *(undefined8 *)((long)puVar8 + 0x37) = uVar11;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        FUN_00512cf8(lVar12,puVar8);
        return;
      }
      goto LAB_0040c800;
    }
    uVar7 = FUN_005ce36c();
    local_c8 = (undefined7)((ulong)uVar10 >> 8);
    uStack_b0 = (undefined7)((ulong)uVar11 >> 8);
    local_98 = CONCAT17(0x10,(undefined7)local_98);
    if ((&local_a8 < (void **)0x1e9da3) && ("UpdateFieldTrial" < &local_98)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_98 = local_98 & 0xffffffffffffff00;
    uStack_a0._0_1_ = s_UpdateFieldTrial_001e9da2[8];
    uStack_a0._1_1_ = s_UpdateFieldTrial_001e9da2[9];
    uStack_a0._2_1_ = s_UpdateFieldTrial_001e9da2[10];
    uStack_a0._3_1_ = s_UpdateFieldTrial_001e9da2[0xb];
    uStack_a0._4_1_ = s_UpdateFieldTrial_001e9da2[0xc];
    uStack_a0._5_1_ = s_UpdateFieldTrial_001e9da2[0xd];
    uStack_a0._6_1_ = s_UpdateFieldTrial_001e9da2[0xe];
    uStack_a0._7_1_ = s_UpdateFieldTrial_001e9da2[0xf];
    local_a8 = (void *)s_UpdateFieldTrial_001e9da2._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar9;
    local_70 = uVar7;
    puVar8 = (undefined8 *)operator_new(0x80);
    puVar8[0xd] = FUN_0040e7ec;
    puVar8[0xe] = &DAT_001f4e70;
    puVar8[3] = CONCAT17(uStack_e9,local_f0);
    puVar8[2] = pvVar1;
    *puVar8 = &PTR_FUN_00d1adf8;
    puVar8[1] = this;
    puVar8[4] = CONCAT17(cVar4,local_c8);
    puVar8[6] = CONCAT17(uStack_f9,local_100);
    puVar8[5] = pvVar2;
    puVar8[7] = CONCAT17(cVar5,uStack_b0);
    puVar8[0xf] = uVar7;
    puVar8[9] = uStack_a0;
    puVar8[8] = local_a8;
    puVar8[10] = local_98;
    puVar8[0xc] = uStack_88;
    puVar8[0xb] = local_90;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_00512cf8(lVar12,puVar8);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if ((long)local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_0040c800:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040c804  Discord::ApplyMediaFilterSettings =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::ApplyMediaFilterSettings(std::__Cr::map<std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> >, discord::FilterSettings,
   std::__Cr::less<std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > >,
   std::__Cr::allocator<std::__Cr::pair<std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> > const, discord::FilterSettings> > >, std::__Cr::function<void ()>)
    */

void __thiscall Discord::ApplyMediaFilterSettings(Discord *this,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Discord *pDVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  Discord *local_130;
  long *plStack_128;
  long local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined8 *local_f8;
  Discord *local_f0;
  long *local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 *local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar9 = (undefined8 *)param_3[3];
  if (*(char *)(puVar9 + 2) == '\0') {
    lVar12 = *(long *)this;
    plVar10 = (long *)*param_2;
    plVar14 = param_2 + 1;
    local_120 = *plVar14;
    lStack_118 = param_2[2];
    plStack_128 = &local_120;
    if (lStack_118 != 0) {
      *(long **)(local_120 + 0x10) = &local_120;
      *param_2 = (long)plVar14;
      *plVar14 = 0;
      param_2[2] = 0;
      puVar9 = (undefined8 *)param_3[3];
      plStack_128 = plVar10;
    }
    uStack_108 = param_3[1];
    local_110 = *param_3;
    local_100 = (code *)param_3[2];
    local_130 = this;
    local_f8 = puVar9;
    if ((code *)*puVar9 != (code *)0x0) {
      local_110 = (*(code *)*puVar9)(*param_3);
    }
    lVar11 = *(long *)(lVar12 + 0x58);
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x78);
      if (lVar12 == 0) {
        puVar9 = (undefined8 *)operator_new(0x48);
        *puVar9 = &PTR_FUN_00d1ae70;
        puVar9[2] = plStack_128;
        puVar9[1] = local_130;
        plVar14 = puVar9 + 3;
        *plVar14 = local_120;
        puVar9[4] = lStack_118;
        if (lStack_118 == 0) {
          puVar9[2] = plVar14;
        }
        else {
          *(long **)(local_120 + 0x10) = plVar14;
          local_120 = 0;
          lStack_118 = 0;
          plStack_128 = &local_120;
        }
        puVar9[6] = uStack_108;
        puVar9[5] = local_110;
        puVar9[7] = local_100;
        puVar9[8] = local_f8;
        if (local_f8[1] != 0) {
          local_100 = FUN_0040dec4;
          local_f8 = &DAT_001f1910;
        }
        FUN_00512cf8(lVar11);
      }
      else {
        uVar7 = FUN_005ce36c();
        puVar9 = local_f8;
        pcVar13 = local_100;
        pDVar5 = local_130;
        local_f0 = local_130;
        local_e0 = local_120;
        lStack_d8 = lStack_118;
        plVar14 = &local_e0;
        if (lStack_118 != 0) {
          *(long **)(local_120 + 0x10) = &local_e0;
          local_120 = 0;
          lStack_118 = 0;
          plVar14 = plStack_128;
          plStack_128 = &local_120;
        }
        uStack_c8 = uStack_108;
        local_d0 = local_110;
        local_c0 = local_100;
        local_b8 = local_f8;
        if (local_f8[1] != 0) {
          local_100 = FUN_0040dec4;
          local_f8 = &DAT_001f1910;
        }
        local_e8 = plVar14;
        local_b0 = (char *)operator_new(0x20);
        uVar3 = s_ApplyMediaFilterSettings_0019f961._8_8_;
        uVar2 = s_ApplyMediaFilterSettings_0019f961._0_8_;
        lStack_a0 = _UNK_001f3238;
        uStack_a8 = _DAT_001f3230;
        if ((local_b0 < "pplyMediaFilterSettings") && ("ApplyMediaFilterSettings" < local_b0 + 0x18)
           ) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        local_b0[0x18] = '\0';
        uVar4 = s_ApplyMediaFilterSettings_0019f961._16_8_;
        *(undefined8 *)(local_b0 + 8) = uVar3;
        *(undefined8 *)local_b0 = uVar2;
        *(undefined8 *)(local_b0 + 0x10) = uVar4;
        local_88 = FUN_0040e7ec;
        local_80 = &DAT_001f4e70;
        local_98 = lVar12;
        local_78 = uVar7;
        puVar8 = (undefined8 *)operator_new(0x88);
        lVar12 = lStack_a0;
        uVar2 = uStack_a8;
        pcVar6 = local_b0;
        puVar8[2] = plVar14;
        *puVar8 = &PTR_FUN_00d1ae48;
        puVar8[1] = pDVar5;
        plVar14 = puVar8 + 3;
        *plVar14 = local_e0;
        puVar8[4] = lStack_d8;
        if (lStack_d8 == 0) {
          puVar8[2] = plVar14;
        }
        else {
          *(long **)(local_e0 + 0x10) = plVar14;
          local_e0 = 0;
          lStack_d8 = 0;
          pcVar13 = local_c0;
          local_e8 = &local_e0;
        }
        puVar8[7] = pcVar13;
        puVar8[8] = puVar9;
        puVar8[6] = uStack_c8;
        puVar8[5] = local_d0;
        if (puVar9[1] != 0) {
          local_c0 = FUN_0040dec4;
          local_b8 = &DAT_001f1910;
        }
        local_b0 = (char *)0x0;
        uStack_a8 = 0;
        lStack_a0 = 0;
        puVar8[10] = uVar2;
        puVar8[9] = pcVar6;
        puVar8[0xb] = lVar12;
        puVar8[0x10] = uVar7;
        puVar8[0xd] = uStack_90;
        puVar8[0xc] = local_98;
        puVar8[0xe] = local_88;
        puVar8[0xf] = &DAT_001f4e70;
        FUN_00512cf8(lVar11);
        if (*(code **)(local_80 + 8) != (code *)0x0) {
          (**(code **)(local_80 + 8))(local_98);
        }
        if (lStack_a0 < 0) {
          operator_delete(local_b0);
        }
        if ((code *)local_b8[1] != (code *)0x0) {
          (*(code *)local_b8[1])(local_d0);
        }
        FUN_0040ddcc(&local_e8,local_e0);
      }
    }
    if ((code *)local_f8[1] != (code *)0x0) {
      (*(code *)local_f8[1])(local_110);
    }
    FUN_0040ddcc((ulong)&local_130 | 8,local_120);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0040cb94  Discord::SetMaxSyncDelayOverride =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::SetMaxSyncDelayOverride(int) */

void __thiscall Discord::SetMaxSyncDelayOverride(Discord *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*(long *)this + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)this + 0x78);
  if (lVar8 == 0) {
    puVar6 = (undefined8 *)operator_new(0x18);
    *(int *)(puVar6 + 2) = param_1;
    *puVar6 = &PTR_FUN_00d1aec0;
    puVar6[1] = this;
  }
  else {
    uVar4 = FUN_005ce36c();
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_SetMaxSyncDelayOverride_001bc24c._0_8_;
    if ((pcVar5 < "etMaxSyncDelayOverride") && ("SetMaxSyncDelayOverride" < pcVar5 + 0x17)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar1 = CONCAT17(s_SetMaxSyncDelayOverride_001bc24c[0xf],
                     s_SetMaxSyncDelayOverride_001bc24c._8_7_);
    uVar2 = CONCAT71(s_SetMaxSyncDelayOverride_001bc24c._16_7_,
                     s_SetMaxSyncDelayOverride_001bc24c[0xf]);
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar1;
    *(undefined8 *)pcVar5 = uVar3;
    *(undefined8 *)(pcVar5 + 0xf) = uVar2;
    puVar6 = (undefined8 *)operator_new(0x58);
    *(int *)(puVar6 + 2) = param_1;
    uVar1 = _UNK_001f3b08;
    uVar3 = _DAT_001f3b00;
    *puVar6 = &PTR_FUN_00d1ae98;
    puVar6[1] = this;
    puVar6[3] = pcVar5;
    puVar6[6] = lVar8;
    puVar6[5] = uVar1;
    puVar6[4] = uVar3;
    puVar6[8] = FUN_0040e7ec;
    puVar6[9] = &DAT_001f4e70;
    puVar6[10] = uVar4;
  }
  FUN_00512cf8(lVar7,puVar6);
  return;
}


// ===== 0040ccc4  Discord::AcquireAudioEngine =====

/* Discord::AcquireAudioEngine(std::__Cr::function<void ()>) */

void __thiscall Discord::AcquireAudioEngine(Discord *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_0040ce8c;
  lVar9 = *(long *)this;
  uVar13 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_0040dec4;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 == 0) {
LAB_0040ce7c:
    pcVar10 = (code *)puVar8[1];
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar14 = param_2[1];
    if (lVar9 != 0) {
      uVar6 = FUN_005ce36c();
      local_98 = CONCAT17(0x12,(undefined7)local_98);
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1ec8e4) && ("AcquireAudioEngine" < (char *)((long)&local_98 + 2U))
         ) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)local_98 >> 0x10;
      local_98 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x656e);
      uStack_a0._0_1_ = s_AcquireAudioEngine_001ec8e3[8];
      uStack_a0._1_1_ = s_AcquireAudioEngine_001ec8e3[9];
      uStack_a0._2_1_ = s_AcquireAudioEngine_001ec8e3[10];
      uStack_a0._3_1_ = s_AcquireAudioEngine_001ec8e3[0xb];
      uStack_a0._4_1_ = s_AcquireAudioEngine_001ec8e3[0xc];
      uStack_a0._5_1_ = s_AcquireAudioEngine_001ec8e3[0xd];
      uStack_a0._6_1_ = s_AcquireAudioEngine_001ec8e3[0xe];
      uStack_a0._7_1_ = s_AcquireAudioEngine_001ec8e3[0xf];
      local_a8 = (void *)s_AcquireAudioEngine_001ec8e3._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar9;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x70);
      uVar5 = local_98;
      uVar4 = uStack_a0;
      pvVar3 = local_a8;
      puVar7[4] = uVar13;
      puVar7[5] = local_b0;
      puVar7[3] = uVar14;
      puVar7[2] = uVar11;
      *puVar7 = &PTR_FUN_00d1aee8;
      puVar7[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar7[8] = uVar5;
      puVar7[7] = uVar4;
      puVar7[6] = pvVar3;
      puVar7[0xd] = uVar6;
      puVar7[10] = uStack_88;
      puVar7[9] = local_90;
      puVar7[0xb] = FUN_0040e7ec;
      puVar7[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar11);
      }
      goto LAB_0040ce7c;
    }
    puVar8 = (undefined8 *)operator_new(0x30);
    puVar8[2] = uVar11;
    puVar8[3] = uVar14;
    puVar8[4] = uVar13;
    puVar8[5] = local_b0;
    *puVar8 = &PTR_FUN_00d1af10;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar8);
    pcVar10 = (code *)local_b0[1];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
LAB_0040ce8c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040cf28  Discord::ReleaseAudioEngine =====

/* Discord::ReleaseAudioEngine(std::__Cr::function<void ()>) */

void __thiscall Discord::ReleaseAudioEngine(Discord *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = (undefined8 *)param_2[3];
  if (*(char *)(local_b0 + 2) != '\0') goto LAB_0040d0f0;
  lVar9 = *(long *)this;
  uVar13 = param_2[2];
  if (local_b0[1] != 0) {
    param_2[2] = FUN_0040dec4;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 == 0) {
LAB_0040d0e0:
    pcVar10 = (code *)puVar8[1];
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar14 = param_2[1];
    if (lVar9 != 0) {
      uVar6 = FUN_005ce36c();
      local_98 = CONCAT17(0x12,(undefined7)local_98);
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1d5d1d) && ("ReleaseAudioEngine" < (char *)((long)&local_98 + 2U))
         ) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = (ulong)local_98 >> 0x10;
      local_98 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x656e);
      uStack_a0._0_1_ = s_ReleaseAudioEngine_001d5d1c[8];
      uStack_a0._1_1_ = s_ReleaseAudioEngine_001d5d1c[9];
      uStack_a0._2_1_ = s_ReleaseAudioEngine_001d5d1c[10];
      uStack_a0._3_1_ = s_ReleaseAudioEngine_001d5d1c[0xb];
      uStack_a0._4_1_ = s_ReleaseAudioEngine_001d5d1c[0xc];
      uStack_a0._5_1_ = s_ReleaseAudioEngine_001d5d1c[0xd];
      uStack_a0._6_1_ = s_ReleaseAudioEngine_001d5d1c[0xe];
      uStack_a0._7_1_ = s_ReleaseAudioEngine_001d5d1c[0xf];
      local_a8 = (void *)s_ReleaseAudioEngine_001d5d1c._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar9;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x70);
      uVar5 = local_98;
      uVar4 = uStack_a0;
      pvVar3 = local_a8;
      puVar7[4] = uVar13;
      puVar7[5] = local_b0;
      puVar7[3] = uVar14;
      puVar7[2] = uVar11;
      *puVar7 = &PTR_FUN_00d1af38;
      puVar7[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = (void *)0x0;
      puVar7[8] = uVar5;
      puVar7[7] = uVar4;
      puVar7[6] = pvVar3;
      puVar7[0xd] = uVar6;
      puVar7[10] = uStack_88;
      puVar7[9] = local_90;
      puVar7[0xb] = FUN_0040e7ec;
      puVar7[0xc] = &DAT_001f4e70;
      FUN_00512cf8(lVar12);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar11);
      }
      goto LAB_0040d0e0;
    }
    puVar8 = (undefined8 *)operator_new(0x30);
    puVar8[2] = uVar11;
    puVar8[3] = uVar14;
    puVar8[4] = uVar13;
    puVar8[5] = local_b0;
    *puVar8 = &PTR_FUN_00d1af60;
    puVar8[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar12,puVar8);
    pcVar10 = (code *)local_b0[1];
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
LAB_0040d0f0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040d18c  Discord::SetVoiceThreadPriority =====

/* Discord::SetVoiceThreadPriority(int) */

void Discord::SetVoiceThreadPriority(int param_1)

{
  FUN_00514570(*(undefined8 *)(ulong)(uint)param_1);
  return;
}


// ===== 0040d194  Discord::SetNativeThreadsPriority =====

/* Discord::SetNativeThreadsPriority(int) */

int Discord::SetNativeThreadsPriority(int param_1)

{
  return param_1;
}


// ===== 0040d198  Discord::SetHasFullbandPerformance =====

/* Discord::SetHasFullbandPerformance(bool) */

void __thiscall Discord::SetHasFullbandPerformance(Discord *this,bool param_1)

{
  DAT_00d60204 = param_1;
  return;
}


// ===== 0040d1a8  Discord::GetSupportedBandwidthEstimationExperiments =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetSupportedBandwidthEstimationExperiments(std::__Cr::function<void
   (std::__Cr::vector<std::__Cr::basic_string<char, std::__Cr::char_traits<char>,
   std::__Cr::allocator<char> >, std::__Cr::allocator<std::__Cr::basic_string<char,
   std::__Cr::char_traits<char>, std::__Cr::allocator<char> > > > const&)>) const */

void __thiscall
Discord::GetSupportedBandwidthEstimationExperiments(Discord *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar16 = (undefined8 *)param_2[3];
  if (*(char *)(puVar16 + 2) != '\0') {
    return;
  }
  lVar12 = *(long *)this;
  uVar17 = param_2[2];
  if (puVar16[1] != 0) {
    param_2[2] = FUN_0041e67c;
    param_2[3] = &DAT_001f1910;
  }
  lVar15 = *(long *)(lVar12 + 0x58);
  uVar14 = *param_2;
  if (lVar15 != 0) {
    lVar12 = *(long *)(lVar12 + 0x78);
    uVar18 = param_2[1];
    if (lVar12 == 0) {
      puVar11 = (undefined8 *)operator_new(0x30);
      puVar11[2] = uVar14;
      puVar11[3] = uVar18;
      puVar11[4] = uVar17;
      lVar12 = puVar16[1];
      *puVar11 = &PTR_FUN_00d1afb0;
      puVar11[1] = this;
      puVar11[5] = puVar16;
      if (lVar12 != 0) {
        puVar16 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar15,puVar11);
      UNRECOVERED_JUMPTABLE = (code *)puVar16[1];
      goto joined_r0x0040d370;
    }
    uVar8 = FUN_005ce36c();
    puVar11 = puVar16;
    if (puVar16[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    pcVar9 = (char *)operator_new(0x30);
    uVar6 = s_GetSupportedBandwidthEstimationE_001b6364._16_8_;
    uVar5 = s_GetSupportedBandwidthEstimationE_001b6364._8_8_;
    uVar4 = s_GetSupportedBandwidthEstimationE_001b6364._0_8_;
    if ((pcVar9 < "etSupportedBandwidthEstimationExperiments") &&
       ("GetSupportedBandwidthEstimationExperiments" < pcVar9 + 0x2a)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT62(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,
                     s_GetSupportedBandwidthEstimationE_001b6364._24_2_);
    pcVar9[0x2a] = '\0';
    uVar7 = s_GetSupportedBandwidthEstimationE_001b6364._34_8_;
    uVar3 = CONCAT26(s_GetSupportedBandwidthEstimationE_001b6364._32_2_,
                     s_GetSupportedBandwidthEstimationE_001b6364._26_6_);
    *(undefined8 *)(pcVar9 + 8) = uVar5;
    *(undefined8 *)pcVar9 = uVar4;
    *(undefined8 *)(pcVar9 + 0x18) = uVar2;
    *(undefined8 *)(pcVar9 + 0x10) = uVar6;
    *(undefined8 *)(pcVar9 + 0x22) = uVar7;
    *(undefined8 *)(pcVar9 + 0x1a) = uVar3;
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar10[2] = uVar14;
    puVar10[3] = uVar18;
    puVar10[4] = uVar17;
    puVar10[5] = puVar16;
    uVar18 = _UNK_001f4478;
    uVar17 = _DAT_001f4470;
    lVar13 = puVar16[1];
    puVar10[6] = pcVar9;
    *puVar10 = &PTR_FUN_00d1af88;
    puVar10[1] = this;
    puVar10[8] = uVar18;
    puVar10[7] = uVar17;
    puVar10[9] = lVar12;
    puVar1 = puVar16;
    if (lVar13 != 0) {
      puVar1 = &DAT_001f1910;
    }
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    puVar10[0xd] = uVar8;
    FUN_00512cf8(lVar15,puVar10);
    puVar16 = puVar11;
    if ((code *)puVar1[1] != (code *)0x0) {
      (*(code *)puVar1[1])(uVar14);
      UNRECOVERED_JUMPTABLE = (code *)puVar11[1];
      goto joined_r0x0040d370;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)puVar16[1];
joined_r0x0040d370:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    s_GetSupportedBandwidthEstimationE_001b6364[0x22] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._34_8_;
    s_GetSupportedBandwidthEstimationE_001b6364[0x23] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[0x24] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,2);
    s_GetSupportedBandwidthEstimationE_001b6364[0x25] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,3);
    s_GetSupportedBandwidthEstimationE_001b6364[0x26] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,4);
    s_GetSupportedBandwidthEstimationE_001b6364[0x27] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,5);
    s_GetSupportedBandwidthEstimationE_001b6364[0x28] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,6);
    s_GetSupportedBandwidthEstimationE_001b6364[0x29] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._34_8_,7);
    s_GetSupportedBandwidthEstimationE_001b6364[0x20] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._32_2_;
    s_GetSupportedBandwidthEstimationE_001b6364[0x21] =
         SUB21(s_GetSupportedBandwidthEstimationE_001b6364._32_2_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[0x1a] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._26_6_;
    s_GetSupportedBandwidthEstimationE_001b6364[0x1b] =
         SUB61(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[0x1c] =
         SUB61(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,2);
    s_GetSupportedBandwidthEstimationE_001b6364[0x1d] =
         SUB61(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,3);
    s_GetSupportedBandwidthEstimationE_001b6364[0x1e] =
         SUB61(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,4);
    s_GetSupportedBandwidthEstimationE_001b6364[0x1f] =
         SUB61(s_GetSupportedBandwidthEstimationE_001b6364._26_6_,5);
    s_GetSupportedBandwidthEstimationE_001b6364[0x18] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._24_2_;
    s_GetSupportedBandwidthEstimationE_001b6364[0x19] =
         SUB21(s_GetSupportedBandwidthEstimationE_001b6364._24_2_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[0x10] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._16_8_;
    s_GetSupportedBandwidthEstimationE_001b6364[0x11] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[0x12] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,2);
    s_GetSupportedBandwidthEstimationE_001b6364[0x13] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,3);
    s_GetSupportedBandwidthEstimationE_001b6364[0x14] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,4);
    s_GetSupportedBandwidthEstimationE_001b6364[0x15] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,5);
    s_GetSupportedBandwidthEstimationE_001b6364[0x16] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,6);
    s_GetSupportedBandwidthEstimationE_001b6364[0x17] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._16_8_,7);
    s_GetSupportedBandwidthEstimationE_001b6364[8] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._8_8_;
    s_GetSupportedBandwidthEstimationE_001b6364[9] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[10] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,2);
    s_GetSupportedBandwidthEstimationE_001b6364[0xb] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,3);
    s_GetSupportedBandwidthEstimationE_001b6364[0xc] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,4);
    s_GetSupportedBandwidthEstimationE_001b6364[0xd] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,5);
    s_GetSupportedBandwidthEstimationE_001b6364[0xe] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,6);
    s_GetSupportedBandwidthEstimationE_001b6364[0xf] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._8_8_,7);
    s_GetSupportedBandwidthEstimationE_001b6364[0] =
         (char)s_GetSupportedBandwidthEstimationE_001b6364._0_8_;
    s_GetSupportedBandwidthEstimationE_001b6364[1] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,1);
    s_GetSupportedBandwidthEstimationE_001b6364[2] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,2);
    s_GetSupportedBandwidthEstimationE_001b6364[3] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,3);
    s_GetSupportedBandwidthEstimationE_001b6364[4] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,4);
    s_GetSupportedBandwidthEstimationE_001b6364[5] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,5);
    s_GetSupportedBandwidthEstimationE_001b6364[6] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,6);
    s_GetSupportedBandwidthEstimationE_001b6364[7] =
         SUB81(s_GetSupportedBandwidthEstimationE_001b6364._0_8_,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar14);
  return;
}


// ===== 0040d3a0  Discord::GetMLSTransientPrivateKey =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Discord::GetMLSTransientPrivateKey(int) */

void Discord::GetMLSTransientPrivateKey(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *in_x8;
  long lVar8;
  long lVar9;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined8 *local_b0;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *puStack_88;
  undefined8 *local_80;
  char *local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  
  local_c0 = (long *)(ulong)(uint)param_1;
  lVar1 = tpidr_el0;
  puStack_b8 = local_a4;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar8 = *local_c0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  lVar9 = *(long *)(lVar8 + 0x58);
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar8 + 0x78);
    if (lVar8 == 0) {
      FUN_00520194(&local_90);
      puVar7 = (undefined8 *)operator_new(0x18);
      puVar7[2] = &local_90;
      *puVar7 = &PTR_FUN_00d1b000;
      puVar7[1] = &local_c0;
      FUN_00512cf8(lVar9,puVar7);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      local_b0 = in_x8;
      uVar6 = FUN_005ce36c();
      puStack_88 = puStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
      local_78 = (char *)operator_new(0x20);
      uVar4 = s_GetMLSTransientPrivateKey_001b3349._0_8_;
      lStack_68 = _UNK_001f2cf8;
      local_70 = _DAT_001f2cf0;
      if ((local_78 < "etMLSTransientPrivateKey") && ("GetMLSTransientPrivateKey" < local_78 + 0x19)
         ) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = CONCAT71(s_GetMLSTransientPrivateKey_001b3349._9_7_,
                       s_GetMLSTransientPrivateKey_001b3349[8]);
      local_78[0x19] = '\0';
      uVar5 = s_GetMLSTransientPrivateKey_001b3349._17_8_;
      uVar3 = CONCAT17(s_GetMLSTransientPrivateKey_001b3349[0x10],
                       s_GetMLSTransientPrivateKey_001b3349._9_7_);
      *(undefined8 *)(local_78 + 8) = uVar2;
      *(undefined8 *)local_78 = uVar4;
      *(undefined8 *)(local_78 + 0x11) = uVar5;
      *(undefined8 *)(local_78 + 9) = uVar3;
      local_50 = FUN_0040e7ec;
      local_48 = &DAT_001f4e70;
      local_60 = lVar8;
      local_40 = uVar6;
      FUN_00520194(&local_98);
      puVar7 = (undefined8 *)operator_new(0x18);
      puVar7[2] = &local_98;
      *puVar7 = &PTR_FUN_00d1afd8;
      puVar7[1] = &local_90;
      FUN_00512cf8(lVar9,puVar7);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_48 + 8) != (code *)0x0) {
        (**(code **)(local_48 + 8))(local_60);
      }
      if (lStack_68 < 0) {
        operator_delete(local_78);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040d590  Discord::PollQueueMetrics =====

/* Discord::PollQueueMetrics(std::__Cr::function<void (discord::uv::QueueMetrics)>) */

void __thiscall Discord::PollQueueMetrics(Discord *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2[2];
  local_b0 = (undefined8 *)param_2[3];
  lVar9 = *(long *)this;
  if (local_b0[1] != 0) {
    param_2[2] = FUN_0041eb94;
    param_2[3] = &DAT_001f1910;
  }
  lVar12 = *(long *)(lVar9 + 0x58);
  uVar11 = *param_2;
  puVar8 = local_b0;
  if (lVar12 != 0) {
    lVar9 = *(long *)(lVar9 + 0x78);
    uVar13 = param_2[1];
    if (lVar9 == 0) {
      puVar8 = (undefined8 *)operator_new(0x30);
      puVar8[2] = uVar11;
      puVar8[3] = uVar13;
      puVar8[4] = uVar1;
      puVar8[5] = local_b0;
      *puVar8 = &PTR_FUN_00d1b050;
      puVar8[1] = this;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar12,puVar8);
      pcVar10 = (code *)local_b0[1];
      goto joined_r0x0040d73c;
    }
    uVar6 = FUN_005ce36c();
    if (local_b0[1] != 0) {
      puVar8 = &DAT_001f1910;
    }
    local_98 = CONCAT17(0x10,(undefined7)local_98);
    if ((&local_a8 < (void **)0x1ec8f7) && ("PollQueueMetrics" < &local_98)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_98 = local_98 & 0xffffffffffffff00;
    uStack_a0._0_1_ = s_PollQueueMetrics_001ec8f6[8];
    uStack_a0._1_1_ = s_PollQueueMetrics_001ec8f6[9];
    uStack_a0._2_1_ = s_PollQueueMetrics_001ec8f6[10];
    uStack_a0._3_1_ = s_PollQueueMetrics_001ec8f6[0xb];
    uStack_a0._4_1_ = s_PollQueueMetrics_001ec8f6[0xc];
    uStack_a0._5_1_ = s_PollQueueMetrics_001ec8f6[0xd];
    uStack_a0._6_1_ = s_PollQueueMetrics_001ec8f6[0xe];
    uStack_a0._7_1_ = s_PollQueueMetrics_001ec8f6[0xf];
    local_a8 = (void *)s_PollQueueMetrics_001ec8f6._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar9;
    local_70 = uVar6;
    puVar7 = (undefined8 *)operator_new(0x70);
    uVar5 = local_98;
    uVar4 = uStack_a0;
    pvVar3 = local_a8;
    puVar7[4] = uVar1;
    puVar7[5] = local_b0;
    puVar7[3] = uVar13;
    puVar7[2] = uVar11;
    *puVar7 = &PTR_FUN_00d1b028;
    puVar7[1] = this;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    uStack_a0 = 0;
    local_98 = 0;
    local_a8 = (void *)0x0;
    puVar7[8] = uVar5;
    puVar7[7] = uVar4;
    puVar7[6] = pvVar3;
    puVar7[0xd] = uVar6;
    puVar7[10] = uStack_88;
    puVar7[9] = local_90;
    puVar7[0xb] = FUN_0040e7ec;
    puVar7[0xc] = &DAT_001f4e70;
    FUN_00512cf8(lVar12);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if ((long)local_98 < 0) {
      operator_delete(local_a8);
    }
    if ((code *)local_b0[1] != (code *)0x0) {
      (*(code *)local_b0[1])(uVar11);
    }
  }
  pcVar10 = (code *)puVar8[1];
joined_r0x0040d73c:
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(uVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040d7e4  FUN_0040d7e4 =====

void FUN_0040d7e4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *__dest;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar5 = param_2[1] - *param_2;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar5);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + ((long)uVar5 >> 3) * 8);
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar3 != lVar4) {
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar7);
        __dest = (undefined8 *)((long)pvVar6 + lVar7);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar2;
          uVar5 = puVar2[1];
          if (uVar5 < 0x17) {
            *(char *)((long)pvVar6 + lVar7 + 0x17) = (char)uVar5;
          }
          else {
            if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar5 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            puVar2 = (undefined8 *)((long)pvVar6 + lVar7);
            puVar2[1] = uVar5;
            puVar2[2] = uVar1 | 0x8000000000000000;
            *puVar2 = __dest;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar5 + 1);
        }
        else {
          uVar9 = puVar2[1];
          uVar8 = *puVar2;
          __dest[2] = puVar2[2];
          __dest[1] = uVar9;
          *__dest = uVar8;
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar3 + lVar7 != lVar4);
      pvVar6 = (void *)((long)pvVar6 + lVar7);
    }
    param_1[1] = pvVar6;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  return;
}


// ===== 0040d960  FUN_0040d960 =====

void FUN_0040d960(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *__dest;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *__src;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar7 = param_2[1] - *param_2;
  if (uVar7 != 0) {
    if (0x38e38e38e38e38e < (ulong)(((long)uVar7 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar7);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + ((long)uVar7 >> 3) * 8);
    puVar4 = (undefined4 *)*param_2;
    puVar5 = (undefined4 *)param_2[1];
    if (puVar4 != puVar5) {
      lVar9 = 0;
      do {
        puVar2 = (undefined4 *)((long)puVar4 + lVar9);
        puVar3 = (undefined4 *)((long)pvVar6 + lVar9);
        puVar8 = (undefined8 *)(puVar3 + 2);
        *puVar3 = *puVar2;
        if (*(char *)((long)puVar2 + 0x1f) < '\0') {
          uVar7 = *(ulong *)(puVar2 + 4);
          __src = *(undefined8 **)(puVar2 + 2);
          if (uVar7 < 0x17) {
            *(char *)((long)pvVar6 + lVar9 + 0x1f) = (char)uVar7;
            __dest = puVar8;
          }
          else {
            if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar7 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            *puVar8 = __dest;
            *(ulong *)((long)pvVar6 + lVar9 + 0x10) = uVar7;
            *(ulong *)((long)pvVar6 + lVar9 + 0x18) = uVar1 | 0x8000000000000000;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar7 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar7 + 1);
        }
        else {
          uVar11 = *(undefined8 *)(puVar2 + 4);
          uVar10 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          *(undefined8 *)(puVar3 + 4) = uVar11;
          *puVar8 = uVar10;
        }
        uVar13 = *(undefined8 *)(puVar2 + 10);
        uVar12 = *(undefined8 *)(puVar2 + 8);
        uVar11 = *(undefined8 *)(puVar2 + 0xe);
        uVar10 = *(undefined8 *)(puVar2 + 0xc);
        lVar9 = lVar9 + 0x48;
        *(undefined8 *)((long)puVar3 + 0x3d) = *(undefined8 *)((long)puVar2 + 0x3d);
        *(undefined8 *)(puVar3 + 10) = uVar13;
        *(undefined8 *)(puVar3 + 8) = uVar12;
        *(undefined8 *)(puVar3 + 0xe) = uVar11;
        *(undefined8 *)(puVar3 + 0xc) = uVar10;
      } while (puVar2 + 0x12 != puVar5);
      pvVar6 = (void *)((long)pvVar6 + lVar9);
    }
    param_1[1] = pvVar6;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  return;
}


// ===== 0040db24  FUN_0040db24 =====

void FUN_0040db24(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  plVar11 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  lVar12 = (long)plVar10 - (long)plVar11 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_1[2] - (long)plVar11 >> 2;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)plVar11) {
    uVar4 = 0x1fffffffffffffff;
  }
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar4 * 8);
  plVar3 = (long *)((long)pvVar2 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar2 + uVar4 * 8);
  plVar5 = plVar3 + 1;
  *plVar3 = *param_2;
  if ((long)plVar10 - (long)plVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar5;
    param_1[2] = (ulong)pvVar1;
    goto joined_r0x0040dcac;
  }
  uVar6 = ((long)plVar10 - (long)plVar11) - 8;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar10 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (((long)plVar10 - (long)plVar11) - (uVar6 & 0xfffffffffffffff8)) + -8
               ) < plVar10)))) {
LAB_0040dc38:
    do {
      plVar10 = plVar10 + -1;
      lVar12 = *plVar10;
      *plVar10 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar12;
    } while (plVar10 != plVar11);
  }
  else {
    uVar6 = (uVar6 >> 3) + 1;
    plVar8 = plVar10 + -2;
    uVar7 = uVar6 & 0x3ffffffffffffffc;
    plVar9 = (long *)((long)pvVar2 + lVar12 * 8 + -0x10);
    plVar3 = plVar3 + -uVar7;
    plVar10 = plVar10 + -uVar7;
    uVar4 = uVar7;
    do {
      lVar15 = plVar8[-1];
      lVar14 = plVar8[-2];
      lVar13 = plVar8[1];
      lVar12 = *plVar8;
      plVar8[-1] = 0;
      plVar8[-2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8 = plVar8 + -4;
      uVar4 = uVar4 - 4;
      plVar9[-1] = lVar15;
      plVar9[-2] = lVar14;
      plVar9[1] = lVar13;
      *plVar9 = lVar12;
      plVar9 = plVar9 + -4;
    } while (uVar4 != 0);
    if (uVar6 != uVar7) goto LAB_0040dc38;
  }
  plVar10 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar5;
  param_1[2] = (ulong)pvVar1;
  while (plVar11 != plVar10) {
    plVar11 = plVar11 + -1;
    plVar3 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
joined_r0x0040dcac:
  if (plVar10 == (long *)0x0) {
    return;
  }
  operator_delete(plVar10);
  return;
}


// ===== 0040dcf8  FUN_0040dcf8 =====

/* WARNING: Removing unreachable block (ram,0x0040dd70) */
/* WARNING: Removing unreachable block (ram,0x0040dd90) */

void FUN_0040dcf8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar5 = pvVar3;
    pvVar4 = (void *)param_1[1];
    if ((void *)param_1[1] != pvVar3) {
      do {
        pvVar6 = *(void **)((long)pvVar4 + -0x18);
        pvVar5 = (void *)((long)pvVar4 + -0x30);
        if (pvVar6 != (void *)0x0) {
          pvVar2 = *(void **)((long)pvVar4 + -0x10);
          pvVar1 = pvVar6;
          if (pvVar2 != pvVar6) {
            do {
              pvVar2 = (void *)((long)pvVar2 + -0x18);
            } while (pvVar2 != pvVar6);
            pvVar1 = *(void **)((long)pvVar4 + -0x18);
          }
          *(void **)((long)pvVar4 + -0x10) = pvVar6;
          operator_delete(pvVar1);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar3);
      pvVar5 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar5);
    return;
  }
  return;
}


// ===== 0040ddcc  FUN_0040ddcc =====

void FUN_0040ddcc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0040ddcc(param_1,*param_2);
    FUN_0040ddcc(param_1,param_2[1]);
    FUN_0040de14(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 0040de14  FUN_0040de14 =====

void FUN_0040de14(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  pvVar2 = (void *)param_1[0x13];
  if (pvVar2 != (void *)0x0) {
    param_1[0x14] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xd];
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0040dec4  FUN_0040dec4 =====

void FUN_0040dec4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040ded0  FUN_0040ded0 =====

void FUN_0040ded0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_2[3];
    param_2[3] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_00d193e8;
      if (puVar1[1] != 0) {
        FUN_005ce374(puVar1[1],PTR_free_00d51ac0);
      }
      operator_delete(puVar1);
    }
    pvVar2 = (void *)param_2[2];
    param_2[2] = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_004c1498(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)*param_2;
    *param_2 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00514454(pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 0040df64  FUN_0040df64 =====

void FUN_0040df64(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040df70  FUN_0040df70 =====

void FUN_0040df70(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  pvVar4 = *(void **)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0047808c(pvVar4);
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  if (pvVar4 != (void *)0x0) {
    plVar6 = *(long **)((long)pvVar4 + 8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 0040dffc  FUN_0040dffc =====

void FUN_0040dffc(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0040e020  FUN_0040e020 =====

void FUN_0040e020(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *__arg;
  void *pvVar5;
  pthread_t pStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar5 = *(void **)(param_1 + 0x18);
  uVar3 = FUN_00514534(pvVar5);
  if ((uVar3 & 1) == 0) {
    FUN_00514454(pvVar5);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(pvVar5);
      return;
    }
  }
  else {
    pvVar4 = operator_new(8);
    FUN_0054a384();
    __arg = (undefined8 *)operator_new(0x10);
    *__arg = pvVar4;
    __arg[1] = pvVar5;
    iVar2 = pthread_create(&pStack_40,(pthread_attr_t *)0x0,FUN_0040e100,__arg);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054a0b0(iVar2,"thread constructor failed");
    }
    FUN_0054a1b8(&pStack_40);
    FUN_0054a158(&pStack_40);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040e0fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040e100  FUN_0040e100 =====

undefined8 FUN_0040e100(undefined8 *param_1)

{
  pthread_key_t __key;
  pthread_key_t *ppVar1;
  void *pvVar2;
  void *__pointer;
  
  ppVar1 = (pthread_key_t *)FUN_0054a21c();
  __key = *ppVar1;
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar2 = pthread_getspecific(__key);
  if (pvVar2 == (void *)0x0) {
    pthread_setspecific(*ppVar1,__pointer);
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != (void *)0x0) {
      FUN_00514454(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0054a3b8(pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
             "get() == nullptr","Attempting to overwrite thread local data");
}


// ===== 0040e1b4  FUN_0040e1b4 =====

/* WARNING: Removing unreachable block (ram,0x0040e250) */

void FUN_0040e1b4(long param_1)

{
  char cVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  
  pcVar3 = *(code **)(*(long *)(param_1 + 0xc0) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    operator_delete(*(void **)(param_1 + 0x90));
    pvVar5 = *(void **)(param_1 + 0x70);
  }
  else {
    pvVar5 = *(void **)(param_1 + 0x70);
  }
  if (pvVar5 == (void *)0x0) {
    cVar1 = *(char *)(param_1 + 0x67);
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x78);
    pvVar2 = pvVar5;
    if (pvVar4 != pvVar5) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
      } while (pvVar4 != pvVar5);
      pvVar2 = *(void **)(param_1 + 0x70);
    }
    *(void **)(param_1 + 0x78) = pvVar5;
    operator_delete(pvVar2);
    cVar1 = *(char *)(param_1 + 0x67);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x28));
    cVar1 = *(char *)(param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0040e2a4  FUN_0040e2a4 =====

void FUN_0040e2a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19568;
  FUN_0040e1b4(param_1 + 1);
  return;
}


// ===== 0040e2b4  FUN_0040e2b4 =====

void FUN_0040e2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19568;
  FUN_0040e1b4(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 0040e2e4  FUN_0040e2e4 =====

void FUN_0040e2e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0040e348(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040e338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc0))
            (param_1 + 0xb0,param_1 + 0x98,*(undefined8 *)(param_1 + 0xd0),uVar1,uVar2);
  return;
}


// ===== 0040e33c  FUN_0040e33c =====

void FUN_0040e33c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040e348  FUN_0040e348 =====

/* WARNING: Removing unreachable block (ram,0x0040e42c) */

void FUN_0040e348(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  MediaEngine *pMVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_c0 [8];
  void *local_b8;
  char local_a1;
  void *local_a0;
  char local_89;
  void *local_78;
  char local_61;
  void *local_58;
  void *local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  puVar10 = (undefined8 *)*param_1;
  FUN_0040e4b0(auStack_c0,param_1 + 1);
  pMVar6 = (MediaEngine *)operator_new(0x10);
  uVar2 = *puVar10;
  lVar7 = puVar10[1];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  discord::MediaEngine::MediaEngine(pMVar6,uVar2,lVar7,auStack_c0);
  pvVar8 = (void *)puVar10[3];
  puVar10[3] = pMVar6;
  if (pvVar8 != (void *)0x0) {
    plVar9 = *(long **)((long)pvVar8 + 8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_005466cc(plVar9);
      }
    }
    operator_delete(pvVar8);
  }
  if (local_58 != (void *)0x0) {
    for (; local_50 != local_58; local_50 = (void *)((long)local_50 + -0x18)) {
    }
    local_50 = local_58;
    operator_delete(local_58);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040e4b0  FUN_0040e4b0 =====

void FUN_0040e4b0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *__src;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar6 = param_1 + 1;
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar8 = (undefined8 *)param_2[1];
    uVar5 = param_2[2];
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar5;
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      param_1[1] = puVar6;
      param_1[2] = uVar5;
      param_1[3] = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar8) && (puVar8 < (undefined8 *)((long)puVar6 + uVar5 + 1)))
    goto LAB_0040e7b0;
    memmove(puVar6,puVar8,uVar5 + 1);
  }
  else {
    uVar11 = param_2[2];
    uVar10 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar11;
    *puVar6 = uVar10;
  }
  puVar6 = param_1 + 4;
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar8 = (undefined8 *)param_2[4];
    uVar5 = param_2[5];
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar5;
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      param_1[4] = puVar6;
      param_1[5] = uVar5;
      param_1[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar8) && (puVar8 < (undefined8 *)((long)puVar6 + uVar5 + 1)))
    goto LAB_0040e7b0;
    memmove(puVar6,puVar8,uVar5 + 1);
  }
  else {
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar11;
    *puVar6 = uVar10;
  }
  puVar6 = param_1 + 9;
  uVar4 = *(undefined1 *)(param_2 + 8);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = uVar4;
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    puVar8 = (undefined8 *)param_2[9];
    uVar5 = param_2[10];
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x5f) = (char)uVar5;
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      param_1[9] = puVar6;
      param_1[10] = uVar5;
      param_1[0xb] = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar8) && (puVar8 < (undefined8 *)((long)puVar6 + uVar5 + 1))) {
LAB_0040e7b0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar6,puVar8,uVar5 + 1);
  }
  else {
    uVar11 = param_2[10];
    uVar10 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar11;
    *puVar6 = uVar10;
  }
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  lVar2 = param_2[0xd];
  lVar3 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xc) = uVar4;
  uVar5 = lVar3 - lVar2;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar7 = operator_new(uVar5);
    param_1[0xd] = pvVar7;
    param_1[0xe] = pvVar7;
    param_1[0xf] = (void *)((long)pvVar7 + ((long)uVar5 >> 3) * 8);
    lVar2 = param_2[0xd];
    lVar3 = param_2[0xe];
    if (lVar2 != lVar3) {
      lVar9 = 0;
      do {
        puVar6 = (undefined8 *)(lVar2 + lVar9);
        puVar8 = (undefined8 *)((long)pvVar7 + lVar9);
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar6;
          uVar5 = puVar6[1];
          if (uVar5 < 0x17) {
            *(char *)((long)pvVar7 + lVar9 + 0x17) = (char)uVar5;
          }
          else {
            if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar5 | 0xf) + 1;
            puVar8 = (undefined8 *)operator_new(uVar1);
            puVar6 = (undefined8 *)((long)pvVar7 + lVar9);
            puVar6[1] = uVar5;
            puVar6[2] = uVar1 | 0x8000000000000000;
            *puVar6 = puVar8;
          }
          if ((puVar8 <= __src) && (__src < (undefined8 *)((long)puVar8 + uVar5 + 1)))
          goto LAB_0040e7b0;
          memmove(puVar8,__src,uVar5 + 1);
        }
        else {
          uVar11 = puVar6[1];
          uVar10 = *puVar6;
          puVar8[2] = puVar6[2];
          puVar8[1] = uVar11;
          *puVar8 = uVar10;
        }
        lVar9 = lVar9 + 0x18;
      } while (lVar2 + lVar9 != lVar3);
      pvVar7 = (void *)((long)pvVar7 + lVar9);
    }
    param_1[0xe] = pvVar7;
  }
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x82) = *(undefined4 *)((long)param_2 + 0x82);
  return;
}


// ===== 0040e7ec  FUN_0040e7ec =====

void FUN_0040e7ec(undefined8 *param_1)

{
  FUN_005133d0(*param_1);
  return;
}


// ===== 0040e7f4  FUN_0040e7f4 =====

/* WARNING: Removing unreachable block (ram,0x0040e848) */

void FUN_0040e7f4(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0xf];
  *param_1 = &PTR_FUN_00d19590;
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x10];
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[0xf];
    }
    param_1[0x10] = pvVar4;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    return;
  }
  return;
}


// ===== 0040e8bc  FUN_0040e8bc =====

/* WARNING: Removing unreachable block (ram,0x0040e910) */

void FUN_0040e8bc(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0xf];
  *param_1 = &PTR_FUN_00d19590;
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x10];
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[0xf];
    }
    param_1[0x10] = pvVar4;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040e980  FUN_0040e980 =====

void FUN_0040e980(long param_1)

{
  FUN_0040e348(param_1 + 8);
  return;
}


// ===== 0040e988  FUN_0040e988 =====

void FUN_0040e988(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 0040e994  FUN_0040e994 =====

void FUN_0040e994(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51ad8 + 0x10);
  FUN_005184d4(param_1 + 8);
  FUN_00546ab0(param_1 + 3);
  FUN_00518508(param_1 + 2);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0040e9e8  FUN_0040e9e8 =====

void FUN_0040e9e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
  FUN_005467a4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    local_50 = 0;
    FUN_00518508(&local_50);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x78) = uVar2;
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 5;
      FUN_00518478(param_1 + 0x40);
      FUN_005467c8(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0040ea94  FUN_0040ea94 =====

void FUN_0040ea94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040eaa0  FUN_0040eaa0 =====

void FUN_0040eaa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040eaac  FUN_0040eaac =====

void FUN_0040eaac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040eab8  FUN_0040eab8 =====

void FUN_0040eab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0040eac4  FUN_0040eac4 =====

void FUN_0040eac4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51ad8 + 0x10);
  FUN_005184d4(param_1 + 8);
  FUN_00546ab0(param_1 + 3);
  FUN_00518508(param_1 + 2);
  FUN_005466c0(param_1);
  return;
}


// ===== 0040eb10  FUN_0040eb10 =====

void FUN_0040eb10(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51ad8 + 0x10);
  FUN_005184d4(param_1 + 8);
  FUN_00546ab0(param_1 + 3);
  FUN_00518508(param_1 + 2);
  FUN_005466c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0040eb64  FUN_0040eb64 =====

void FUN_0040eb64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
  FUN_005467a4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    local_50 = 0;
    FUN_00518508(&local_50);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x78) = uVar2;
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 5;
      FUN_00518478(param_1 + 0x40);
      FUN_005467c8(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0040ec10  FUN_0040ec10 =====

void FUN_0040ec10(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19618;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040ec64  FUN_0040ec64 =====

void FUN_0040ec64(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19618;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040ecb4  FUN_0040ecb4 =====

void FUN_0040ecb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar7 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)(lVar7 + 0x388) = *(undefined1 *)(param_1 + 0x10);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)(lVar7 + 0x388) = *(undefined1 *)(param_1 + 0x10);
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040ed60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar5);
  return;
}


// ===== 0040ed64  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040ed68  FUN_0040ed68 =====

void FUN_0040ed68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar5 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) {
    *(undefined1 *)(lVar5 + 0x388) = *(undefined1 *)(param_1 + 0x10);
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)(lVar5 + 0x388) = *(undefined1 *)(param_1 + 0x10);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
      return;
    }
  }
  return;
}


// ===== 0040ede8  FUN_0040ede8 =====

void FUN_0040ede8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d19668;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040ee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0040ee50  FUN_0040ee50 =====

void FUN_0040ee50(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d19668;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040eeb4  FUN_0040eeb4 =====

void FUN_0040eeb4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ecd0(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x30));
  (**(code **)(param_1 + 0x20))(param_1 + 0x10,1,*(undefined1 *)(param_1 + 0x30));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar5,uVar6);
  return;
}


// ===== 0040ef70  FUN_0040ef70 =====

void FUN_0040ef70(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19690;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0040ef94  FUN_0040ef94 =====

void FUN_0040ef94(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19690;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040efd4  FUN_0040efd4 =====

void FUN_0040efd4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ecd0(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0040f060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1 + 0x10,1,*(undefined1 *)(param_1 + 0x30));
  return;
}


// ===== 0040f064  FUN_0040f064 =====

void FUN_0040f064(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d196b8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040f0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0040f0cc  FUN_0040f0cc =====

void FUN_0040f0cc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d196b8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f130  FUN_0040f130 =====

void FUN_0040f130(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ecf4(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x30),
               *(undefined1 *)(param_1 + 0x31));
  (**(code **)(param_1 + 0x20))(param_1 + 0x10,*(undefined1 *)(param_1 + 0x30),1,1);
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar5,uVar6);
  return;
}


// ===== 0040f1f4  FUN_0040f1f4 =====

void FUN_0040f1f4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d196e0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0040f218  FUN_0040f218 =====

void FUN_0040f218(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d196e0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f258  FUN_0040f258 =====

void FUN_0040f258(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ecf4(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x30),
               *(undefined1 *)(param_1 + 0x31));
                    /* WARNING: Could not recover jumptable at 0x0040f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1 + 0x10,*(undefined1 *)(param_1 + 0x30),1,1);
  return;
}


// ===== 0040f2f0  FUN_0040f2f0 =====

void FUN_0040f2f0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19708;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040f344  FUN_0040f344 =====

void FUN_0040f344(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19708;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f394  FUN_0040f394 =====

void FUN_0040f394(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ecd0(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040f438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040f43c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040f440  FUN_0040f440 =====

void FUN_0040f440(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ecd0(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0040f4bc  FUN_0040f4bc =====

void FUN_0040f4bc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19758;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040f510  FUN_0040f510 =====

void FUN_0040f510(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19758;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f560  FUN_0040f560 =====

void FUN_0040f560(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ecf4(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10),0);
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040f60c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040f610  FUN_0040f610 =====

void FUN_0040f610(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ecf4(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10),0);
  return;
}


// ===== 0040f690  FUN_0040f690 =====

void FUN_0040f690(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d197a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040f6e4  FUN_0040f6e4 =====

void FUN_0040f6e4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d197a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f734  FUN_0040f734 =====

void FUN_0040f734(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ed84(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040f7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040f7dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040f7e0  FUN_0040f7e0 =====

void FUN_0040f7e0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ed84(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0040f85c  FUN_0040f85c =====

void FUN_0040f85c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d197f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040f8b0  FUN_0040f8b0 =====

void FUN_0040f8b0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d197f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040f900  FUN_0040f900 =====

void FUN_0040f900(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042f09c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040f9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040f9a8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040f9ac  FUN_0040f9ac =====

void FUN_0040f9ac(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042f09c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0040fa28  FUN_0040fa28 =====

void FUN_0040fa28(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19848;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (-1 < *(char *)((long)param_1 + 0x47)) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}


// ===== 0040fa7c  FUN_0040fa7c =====

void FUN_0040fa7c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19848;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040facc  FUN_0040facc =====

void FUN_0040facc(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar8;
  plVar8 = (long *)plVar8[1];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
    }
  }
  local_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_5c = *(undefined8 *)(param_1 + 0x24);
  uStack_68 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_64 = (undefined4)*(undefined8 *)(param_1 + 0x1c);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  FUN_0042ef3c(*(undefined8 *)(lVar2 + 0x360),&local_70);
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040fbb4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040fbb8  FUN_0040fbb8 =====

void FUN_0040fbb8(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  local_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_4c = *(undefined8 *)(param_1 + 0x24);
  uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_54 = (undefined4)*(undefined8 *)(param_1 + 0x1c);
  uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  FUN_0042ef3c(*(undefined8 *)(lVar2 + 0x360),&local_60);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0040fc70  FUN_0040fc70 =====

void FUN_0040fc70(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19898;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040fcc4  FUN_0040fcc4 =====

void FUN_0040fcc4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19898;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040fd14  FUN_0040fd14 =====

void FUN_0040fd14(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ee5c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040fdbc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040fdc0  FUN_0040fdc0 =====

void FUN_0040fdc0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ee5c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0040fe3c  FUN_0040fe3c =====

void FUN_0040fe3c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d198e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0040fe90  FUN_0040fe90 =====

void FUN_0040fe90(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d198e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0040fee0  FUN_0040fee0 =====

void FUN_0040fee0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042f02c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0040ff84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0040ff88  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0040ff8c  FUN_0040ff8c =====

void FUN_0040ff8c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042f02c(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 00410008  FUN_00410008 =====

void FUN_00410008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00410014  FUN_00410014 =====

void FUN_00410014(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19938;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041007c  FUN_0041007c =====

void FUN_0041007c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19938;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004100e0  FUN_004100e0 =====

void FUN_004100e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00410138(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00410134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 00410138  FUN_00410138 =====

void FUN_00410138(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  void *local_a0 [2];
  char local_89;
  undefined **local_88;
  void *local_80;
  char local_69;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  lVar2 = **(long **)(*param_1 + 0x18);
  plVar3 = (long *)(*(long **)(*param_1 + 0x18))[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  FUN_004df134(auStack_60,0);
  FUN_004e36c8(&local_88);
  FUN_0042f064(*(undefined8 *)(lVar2 + 0x360),auStack_60);
  FUN_004e36e0(local_a0,&local_88,auStack_60);
  (*(code *)param_1[3])(param_1 + 1,local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  local_88 = &PTR_FUN_00d1f540;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  FUN_004e36c0(&local_88);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00410258  FUN_00410258 =====

void FUN_00410258(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19960;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00410274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041027c  FUN_0041027c =====

void FUN_0041027c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19960;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004102bc  FUN_004102bc =====

void FUN_004102bc(long param_1)

{
  FUN_00410138(param_1 + 8);
  return;
}


// ===== 004102c4  FUN_004102c4 =====

void FUN_004102c4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19988;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00410318  FUN_00410318 =====

void FUN_00410318(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19988;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410368  FUN_00410368 =====

void FUN_00410368(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042f074(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041040c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00410410  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00410414  FUN_00410414 =====

void FUN_00410414(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042f074(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 00410490  FUN_00410490 =====

void FUN_00410490(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d199d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004104e4  FUN_004104e4 =====

void FUN_004104e4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d199d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410534  FUN_00410534 =====

void FUN_00410534(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042f088(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004105d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 004105dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004105e0  FUN_004105e0 =====

void FUN_004105e0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042f088(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0041065c  FUN_0041065c =====

void FUN_0041065c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19a28;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004106b0  FUN_004106b0 =====

void FUN_004106b0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19a28;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410700  FUN_00410700 =====

void FUN_00410700(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042f048(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004107a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 004107a8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004107ac  FUN_004107ac =====

void FUN_004107ac(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042f048(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 00410828  FUN_00410828 =====

void FUN_00410828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00410834  FUN_00410834 =====

void FUN_00410834(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19a78;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041089c  FUN_0041089c =====

void FUN_0041089c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19a78;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410900  FUN_00410900 =====

void FUN_00410900(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(long *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(local_48 + 8) != 0) {
    *(code **)(param_1 + 0x20) = FUN_00410828;
    *(undefined8 **)(param_1 + 0x28) = &DAT_001f1910;
  }
  FUN_00450a98(uVar7,&local_60);
  if (*(code **)(local_48 + 8) != (code *)0x0) {
    (**(code **)(local_48 + 8))(local_60);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00410a14  FUN_00410a14 =====

void FUN_00410a14(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19aa0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00410a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00410a38  FUN_00410a38 =====

void FUN_00410a38(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19aa0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410a78  FUN_00410a78 =====

void FUN_00410a78(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_40 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(long *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(local_38 + 8) != 0) {
    *(code **)(param_1 + 0x20) = FUN_00410828;
    *(undefined8 **)(param_1 + 0x28) = &DAT_001f1910;
  }
  FUN_00450a98(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00410b5c  FUN_00410b5c =====

void FUN_00410b5c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19ac8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00410bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00410bc4  FUN_00410bc4 =====

void FUN_00410bc4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19ac8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00410c28  FUN_00410c28 =====

void FUN_00410c28(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  lVar10 = *(long *)(param_1 + 8);
  puVar8 = *(undefined8 **)(lVar10 + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar8 != (code *)0x0) {
    lVar9 = (*(code *)*puVar8)(lVar9);
  }
  local_68 = FUN_00410d9c;
  local_60 = &PTR_FUN_00d19ae0;
  local_78[0] = (long *)operator_new(0x28);
  *local_78[0] = lVar10;
  local_78[0][1] = lVar9;
  local_78[0][4] = (long)puVar8;
  local_78[0][3] = lVar12;
  local_78[0][2] = lVar11;
  if (puVar8[1] != 0) {
    puVar8 = &DAT_001f1910;
  }
  FUN_0044f284(uVar7,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar8[1] != (code *)0x0) {
    (*(code *)puVar8[1])(lVar9);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00410d9c  FUN_00410d9c =====

/* WARNING: Removing unreachable block (ram,0x00410f64) */
/* WARNING: Removing unreachable block (ram,0x00410f78) */

void FUN_00410d9c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  void *local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar11 = (long *)*param_1;
  lVar10 = *plVar11;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_70 = (void *)0x0;
  lVar9 = **(long **)(lVar10 + 0x18);
  plVar2 = (long *)(*(long **)(lVar10 + 0x18))[1];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (&local_70 != (void **)(lVar9 + 0x1948)) {
    FUN_00410fc0(&local_70,*(undefined8 *)(lVar9 + 0x1948),*(undefined8 *)(lVar9 + 0x1950));
  }
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      lVar9 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar8 = **(undefined8 **)(lVar10 + 0x18);
  plVar2 = (long *)(*(undefined8 **)(lVar10 + 0x18))[1];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar7 = FUN_0044f264(uVar8);
  uVar8 = **(undefined8 **)(lVar10 + 0x18);
  plVar3 = (long *)(*(undefined8 **)(lVar10 + 0x18))[1];
  if (plVar3 == (long *)0x0) {
    uVar8 = FUN_0044f274(uVar8);
    (*(code *)plVar11[3])(plVar11 + 1,uVar7,uVar8,&local_70);
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = FUN_0044f274(uVar8);
    (*(code *)plVar11[3])(plVar11 + 1,uVar7,uVar8,&local_70);
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2 + 1;
    do {
      lVar9 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  if (local_70 != (void *)0x0) {
    for (; local_68 != local_70; local_68 = (void *)((long)local_68 + -0x38)) {
    }
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00410fc0  FUN_00410fc0 =====

/* WARNING: Removing unreachable block (ram,0x00411218) */
/* WARNING: Removing unreachable block (ram,0x0041104c) */
/* WARNING: Removing unreachable block (ram,0x00411060) */
/* WARNING: Removing unreachable block (ram,0x0041122c) */

void FUN_00410fc0(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  
  lVar4 = param_1[2];
  pvVar8 = (void *)*param_1;
  lVar5 = param_3 - param_2 >> 3;
  lVar7 = lVar4 - (long)pvVar8 >> 3;
  uVar10 = lVar5 * 0x6db6db6db6db6db7;
  if (uVar10 < (ulong)(lVar7 * 0x6db6db6db6db6db7) || uVar10 + lVar7 * -0x6db6db6db6db6db7 == 0) {
    lVar7 = param_1[1] - (long)pvVar8 >> 3;
    lVar4 = param_2 + (param_1[1] - (long)pvVar8);
    lVar5 = lVar4;
    if (uVar10 < (ulong)(lVar7 * 0x6db6db6db6db6db7) || uVar10 + lVar7 * -0x6db6db6db6db6db7 == 0) {
      lVar5 = param_3;
    }
    pvVar3 = pvVar8;
    if (lVar5 != param_2) {
      do {
        FUN_00411268(pvVar8,param_2);
        FUN_00411268((long)pvVar8 + 0x18,param_2 + 0x18);
        puVar2 = (undefined8 *)(param_2 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        param_2 = param_2 + 0x38;
        *(undefined8 *)((long)pvVar8 + 0x30) = *puVar2;
        pvVar8 = (void *)((long)pvVar8 + 0x38);
      } while (param_2 != lVar5);
    }
    pvVar8 = (void *)param_1[1];
    if (uVar10 < (ulong)(lVar7 * 0x6db6db6db6db6db7) || uVar10 + lVar7 * -0x6db6db6db6db6db7 == 0) {
      for (; pvVar8 != pvVar3; pvVar8 = (void *)((long)pvVar8 + -0x38)) {
      }
      param_1[1] = pvVar3;
    }
    else {
      while (lVar5 != param_3) {
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        FUN_00411394(pvVar8,lVar4);
        *(undefined4 *)((long)pvVar8 + 0x34) = *(undefined4 *)(lVar4 + 0x34);
        pvVar8 = (void *)((long)pvVar8 + 0x38);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar4;
      }
      param_1[1] = pvVar8;
    }
  }
  else {
    if (pvVar8 != (void *)0x0) {
      pvVar9 = (void *)param_1[1];
      pvVar3 = pvVar8;
      if (pvVar9 != pvVar8) {
        do {
          pvVar9 = (void *)((long)pvVar9 + -0x38);
        } while (pvVar9 != pvVar8);
        pvVar3 = (void *)*param_1;
      }
      param_1[1] = pvVar8;
      operator_delete(pvVar3);
      lVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x492492492492492 < uVar10) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = (lVar4 >> 3) * -0x2492492492492492;
    if (uVar6 < uVar10 || uVar6 + lVar5 * -0x6db6db6db6db6db7 == 0) {
      uVar6 = uVar10;
    }
    if (0x249249249249248 < (ulong)((lVar4 >> 3) * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    if (0x492492492492492 < uVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar6 * 0x38);
    *param_1 = pvVar8;
    param_1[1] = pvVar8;
    param_1[2] = (void *)((long)pvVar8 + uVar6 * 0x38);
    if (param_2 != param_3) {
      do {
        FUN_00411394(pvVar8,param_2);
        puVar1 = (undefined4 *)(param_2 + 0x34);
        param_2 = param_2 + 0x38;
        *(undefined4 *)((long)pvVar8 + 0x34) = *puVar1;
        pvVar8 = (void *)((long)pvVar8 + 0x38);
      } while (param_2 != param_3);
    }
    param_1[1] = pvVar8;
  }
  return;
}


// ===== 00411268  FUN_00411268 =====

undefined8 * FUN_00411268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *__src;
  ulong __n;
  byte bVar2;
  undefined8 *__dest;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  bVar2 = *(byte *)((long)param_2 + 0x17);
  if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
    __n = param_2[1];
    __src = (undefined8 *)*param_2;
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
      __src = param_2;
    }
    uVar6 = param_1[2] & 0x7fffffffffffffff;
    if (uVar6 <= __n) {
      uVar5 = param_1[1];
      lVar3 = uVar6 - 1;
      lVar4 = (__n - uVar6) + 1;
      goto LAB_00411350;
    }
    __dest = (undefined8 *)*param_1;
    param_1[1] = __n;
    puVar1 = (undefined8 *)((long)__dest + __n);
    if ((__dest <= __src) && (__src < puVar1)) goto LAB_0041136c;
  }
  else {
    if (-1 < (char)bVar2) {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar8;
      *param_1 = uVar7;
      return param_1;
    }
    __src = (undefined8 *)*param_2;
    __n = param_2[1];
    lVar4 = __n - 0x16;
    if (0x15 < __n && lVar4 != 0) {
      uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
      lVar3 = 0x16;
LAB_00411350:
      FUN_00547540(param_1,lVar3,lVar4,uVar5,0,uVar5);
      return param_1;
    }
    puVar1 = (undefined8 *)((long)param_1 + __n);
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
    if ((param_1 <= __src) && (__src < puVar1)) {
LAB_0041136c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
  }
  if (__n != 0) {
    memmove(__dest,__src,__n);
  }
  *(undefined1 *)puVar1 = 0;
  return param_1;
}


// ===== 00411394  FUN_00411394 =====

void FUN_00411394(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar4 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      puVar3 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar3 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar3;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((puVar3 <= puVar4) && (puVar4 < (undefined8 *)((long)puVar3 + uVar2 + 1)))
    goto LAB_004114d0;
    memmove(puVar3,puVar4,uVar2 + 1);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  puVar4 = param_1 + 3;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    puVar3 = (undefined8 *)param_2[3];
    uVar2 = param_2[4];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x2f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      param_1[3] = puVar4;
      param_1[4] = uVar2;
      param_1[5] = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + uVar2 + 1))) {
LAB_004114d0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar4,puVar3,uVar2 + 1);
  }
  else {
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    *puVar4 = uVar5;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return;
}


// ===== 00411500  FUN_00411500 =====

undefined8 * FUN_00411500(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 00411560  FUN_00411560 =====

void FUN_00411560(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 00411594  FUN_00411594 =====

void FUN_00411594(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19b10;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004115b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 004115b8  FUN_004115b8 =====

void FUN_004115b8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19b10;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004115f8  FUN_004115f8 =====

void FUN_004115f8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)(param_1 + 8);
  puVar7 = *(undefined8 **)(lVar9 + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar7 != (code *)0x0) {
    lVar8 = (*(code *)*puVar7)(lVar8);
  }
  local_58 = FUN_00410d9c;
  local_50 = &PTR_FUN_00d19ae0;
  local_68[0] = (long *)operator_new(0x28);
  *local_68[0] = lVar9;
  local_68[0][1] = lVar8;
  local_68[0][4] = (long)puVar7;
  local_68[0][3] = lVar11;
  local_68[0][2] = lVar10;
  if (puVar7[1] != 0) {
    puVar7 = &DAT_001f1910;
  }
  FUN_0044f284(uVar2,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar7[1] != (code *)0x0) {
    (*(code *)puVar7[1])(lVar8);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00411738  FUN_00411738 =====

void FUN_00411738(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00411744  FUN_00411744 =====

void FUN_00411744(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19b38;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 004117ac  FUN_004117ac =====

void FUN_004117ac(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19b38;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00411810  FUN_00411810 =====

void FUN_00411810(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  lVar10 = *(long *)(param_1 + 8);
  puVar8 = *(undefined8 **)(lVar10 + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar8 != (code *)0x0) {
    lVar9 = (*(code *)*puVar8)(lVar9);
  }
  local_68 = FUN_00411984;
  local_60 = &PTR_FUN_00d19b50;
  local_78[0] = (long *)operator_new(0x28);
  *local_78[0] = lVar10;
  local_78[0][1] = lVar9;
  local_78[0][4] = (long)puVar8;
  local_78[0][3] = lVar12;
  local_78[0][2] = lVar11;
  if (puVar8[1] != 0) {
    puVar8 = &DAT_001f1910;
  }
  FUN_0044f284(uVar7,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar8[1] != (code *)0x0) {
    (*(code *)puVar8[1])(lVar9);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00411984  FUN_00411984 =====

void FUN_00411984(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  uVar5 = **(undefined8 **)(*plVar7 + 0x18);
  plVar2 = (long *)(*(undefined8 **)(*plVar7 + 0x18))[1];
  if (plVar2 == (long *)0x0) {
    uVar5 = FUN_0044f264(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00411a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar7[3])(plVar7 + 1,uVar5);
    return;
  }
  plVar1 = plVar2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_0044f264(uVar5);
  (*(code *)plVar7[3])(plVar7 + 1,uVar5);
  do {
    lVar6 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_005466cc(plVar2);
  return;
}


// ===== 00411a3c  FUN_00411a3c =====

undefined8 * FUN_00411a3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 00411a9c  FUN_00411a9c =====

void FUN_00411a9c(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 00411ad0  FUN_00411ad0 =====

void FUN_00411ad0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19b80;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00411aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00411af4  FUN_00411af4 =====

void FUN_00411af4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19b80;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00411b34  FUN_00411b34 =====

void FUN_00411b34(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)(param_1 + 8);
  puVar7 = *(undefined8 **)(lVar9 + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar7 != (code *)0x0) {
    lVar8 = (*(code *)*puVar7)(lVar8);
  }
  local_58 = FUN_00411984;
  local_50 = &PTR_FUN_00d19b50;
  local_68[0] = (long *)operator_new(0x28);
  *local_68[0] = lVar9;
  local_68[0][1] = lVar8;
  local_68[0][4] = (long)puVar7;
  local_68[0][3] = lVar11;
  local_68[0][2] = lVar10;
  if (puVar7[1] != 0) {
    puVar7 = &DAT_001f1910;
  }
  FUN_0044f284(uVar2,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar7[1] != (code *)0x0) {
    (*(code *)puVar7[1])(lVar8);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00411c74  FUN_00411c74 =====

void FUN_00411c74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00411c80  FUN_00411c80 =====

void FUN_00411c80(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19ba8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00411cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00411ce8  FUN_00411ce8 =====

void FUN_00411ce8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19ba8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00411d4c  FUN_00411d4c =====

void FUN_00411d4c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  lVar10 = *(long *)(param_1 + 8);
  puVar8 = *(undefined8 **)(lVar10 + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar8 != (code *)0x0) {
    lVar9 = (*(code *)*puVar8)(lVar9);
  }
  local_68 = FUN_00411ec0;
  local_60 = &PTR_FUN_00d19bc0;
  local_78[0] = (long *)operator_new(0x28);
  *local_78[0] = lVar10;
  local_78[0][1] = lVar9;
  local_78[0][4] = (long)puVar8;
  local_78[0][3] = lVar12;
  local_78[0][2] = lVar11;
  if (puVar8[1] != 0) {
    puVar8 = &DAT_001f1910;
  }
  FUN_0044f284(uVar7,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar8[1] != (code *)0x0) {
    (*(code *)puVar8[1])(lVar9);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00411ec0  FUN_00411ec0 =====

void FUN_00411ec0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_140 [248];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  plVar8 = (long *)*param_1;
  uVar2 = **(undefined8 **)(*plVar8 + 0x18);
  plVar3 = (long *)(*(undefined8 **)(*plVar8 + 0x18))[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044f26c(auStack_140,uVar2);
    (*(code *)plVar8[3])(plVar8 + 1,auStack_140);
    FUN_00411fac(auStack_140);
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0044f26c(auStack_140,uVar2);
    (*(code *)plVar8[3])(plVar8 + 1,auStack_140);
    FUN_00411fac(auStack_140);
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00411fac  FUN_00411fac =====

void FUN_00411fac(undefined8 *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x1e) != '\0') && (*(char *)((long)param_1 + 0xef) < '\0')) {
    operator_delete((void *)param_1[0x1b]);
  }
  if ((*(char *)(param_1 + 0x1a) != '\0') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    operator_delete((void *)param_1[0x17]);
  }
  if ((*(char *)(param_1 + 0x16) != '\0') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    operator_delete((void *)param_1[0x13]);
  }
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)((long)param_1 + 0x8f) < '\0')) {
    operator_delete((void *)param_1[0xf]);
  }
  if ((*(char *)(param_1 + 0xe) != '\0') && (*(char *)((long)param_1 + 0x6f) < '\0')) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(char *)(param_1 + 10) != '\0') && (*(char *)((long)param_1 + 0x4f) < '\0')) {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00412088  FUN_00412088 =====

undefined8 * FUN_00412088(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 004120e8  FUN_004120e8 =====

void FUN_004120e8(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0041211c  FUN_0041211c =====

void FUN_0041211c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19bf0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00412140  FUN_00412140 =====

void FUN_00412140(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19bf0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412180  FUN_00412180 =====

void FUN_00412180(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)(param_1 + 8);
  puVar7 = *(undefined8 **)(lVar9 + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar7 != (code *)0x0) {
    lVar8 = (*(code *)*puVar7)(lVar8);
  }
  local_58 = FUN_00411ec0;
  local_50 = &PTR_FUN_00d19bc0;
  local_68[0] = (long *)operator_new(0x28);
  *local_68[0] = lVar9;
  local_68[0][1] = lVar8;
  local_68[0][4] = (long)puVar7;
  local_68[0][3] = lVar11;
  local_68[0][2] = lVar10;
  if (puVar7[1] != 0) {
    puVar7 = &DAT_001f1910;
  }
  FUN_0044f284(uVar2,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar7[1] != (code *)0x0) {
    (*(code *)puVar7[1])(lVar8);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004122c0  FUN_004122c0 =====

void FUN_004122c0(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19c18;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041232c  FUN_0041232c =====

void FUN_0041232c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19c18;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412398  FUN_00412398 =====

void FUN_00412398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_004123f0(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004123ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 004123f0  FUN_004123f0 =====

void FUN_004123f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_0044ec18(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00412560  FUN_00412560 =====

void FUN_00412560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19c40;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00412580  FUN_00412580 =====

void FUN_00412580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19c40;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004125bc  FUN_004125bc =====

void FUN_004125bc(long param_1)

{
  FUN_004123f0(param_1 + 8);
  return;
}


// ===== 004125c4  FUN_004125c4 =====

void FUN_004125c4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19c68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00412618  FUN_00412618 =====

void FUN_00412618(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19c68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412668  FUN_00412668 =====

void FUN_00412668(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044ea24(uVar6,*(undefined4 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044ea24(uVar6,*(undefined4 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00412714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00412718  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041271c  FUN_0041271c =====

void FUN_0041271c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044ea24(uVar2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044ea24(uVar2,*(undefined4 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 004127ac  FUN_004127ac =====

void FUN_004127ac(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19cb8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00412814  FUN_00412814 =====

void FUN_00412814(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19cb8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412878  FUN_00412878 =====

void FUN_00412878(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  lVar10 = *(long *)(param_1 + 8);
  puVar8 = *(undefined8 **)(lVar10 + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar8 != (code *)0x0) {
    lVar9 = (*(code *)*puVar8)(lVar9);
  }
  local_68 = FUN_004129ec;
  local_60 = &PTR_FUN_00d19cd0;
  local_78[0] = (long *)operator_new(0x28);
  *local_78[0] = lVar10;
  local_78[0][1] = lVar9;
  local_78[0][4] = (long)puVar8;
  local_78[0][3] = lVar12;
  local_78[0][2] = lVar11;
  if (puVar8[1] != 0) {
    puVar8 = &DAT_001f1910;
  }
  FUN_0044f284(uVar7,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar8[1] != (code *)0x0) {
    (*(code *)puVar8[1])(lVar9);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004129ec  FUN_004129ec =====

void FUN_004129ec(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  uVar5 = **(undefined8 **)(*plVar7 + 0x18);
  plVar2 = (long *)(*(undefined8 **)(*plVar7 + 0x18))[1];
  if (plVar2 == (long *)0x0) {
    uVar5 = FUN_0044f274(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00412a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar7[3])(plVar7 + 1,uVar5);
    return;
  }
  plVar1 = plVar2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_0044f274(uVar5);
  (*(code *)plVar7[3])(plVar7 + 1,uVar5);
  do {
    lVar6 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_005466cc(plVar2);
  return;
}


// ===== 00412aa4  FUN_00412aa4 =====

undefined8 * FUN_00412aa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 00412b04  FUN_00412b04 =====

void FUN_00412b04(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 00412b38  FUN_00412b38 =====

void FUN_00412b38(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19d00;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00412b5c  FUN_00412b5c =====

void FUN_00412b5c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19d00;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412b9c  FUN_00412b9c =====

void FUN_00412b9c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)(param_1 + 8);
  puVar7 = *(undefined8 **)(lVar9 + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((code *)*puVar7 != (code *)0x0) {
    lVar8 = (*(code *)*puVar7)(lVar8);
  }
  local_58 = FUN_004129ec;
  local_50 = &PTR_FUN_00d19cd0;
  local_68[0] = (long *)operator_new(0x28);
  *local_68[0] = lVar9;
  local_68[0][1] = lVar8;
  local_68[0][4] = (long)puVar7;
  local_68[0][3] = lVar11;
  local_68[0][2] = lVar10;
  if (puVar7[1] != 0) {
    puVar7 = &DAT_001f1910;
  }
  FUN_0044f284(uVar2,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if ((code *)puVar7[1] != (code *)0x0) {
    (*(code *)puVar7[1])(lVar8);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00412cdc  FUN_00412cdc =====

void FUN_00412cdc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19d28;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00412d44  FUN_00412d44 =====

void FUN_00412d44(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19d28;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412da8  FUN_00412da8 =====

void FUN_00412da8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_150 [248];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044f27c(auStack_150,uVar7);
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,auStack_150);
    FUN_00411fac(auStack_150);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044f27c(auStack_150,uVar7);
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,auStack_150);
    FUN_00411fac(auStack_150);
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00412ec4  FUN_00412ec4 =====

void FUN_00412ec4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19d50;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00412ee8  FUN_00412ee8 =====

void FUN_00412ee8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19d50;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00412f28  FUN_00412f28 =====

void FUN_00412f28(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_140 [248];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044f27c(auStack_140,uVar2);
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,auStack_140);
    FUN_00411fac(auStack_140);
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0044f27c(auStack_140,uVar2);
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,auStack_140);
    FUN_00411fac(auStack_140);
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00413014  FUN_00413014 =====

void FUN_00413014(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19d78;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00413080  FUN_00413080 =====

void FUN_00413080(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19d78;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004130ec  FUN_004130ec =====

void FUN_004130ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00413144(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00413140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 00413144  FUN_00413144 =====

void FUN_00413144(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_0044ef60(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004132b4  FUN_004132b4 =====

void FUN_004132b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19da0;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004132d4  FUN_004132d4 =====

void FUN_004132d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19da0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413310  FUN_00413310 =====

void FUN_00413310(long param_1)

{
  FUN_00413144(param_1 + 8);
  return;
}


// ===== 00413318  FUN_00413318 =====

void FUN_00413318(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19dc8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041336c  FUN_0041336c =====

void FUN_0041336c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19dc8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004133bc  FUN_004133bc =====

void FUN_004133bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044ed6c(uVar6,*(undefined4 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044ed6c(uVar6,*(undefined4 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00413468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0041346c  FUN_0041346c =====

void FUN_0041346c(void)

{
  return;
}


// ===== 00413470  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00413474  FUN_00413474 =====

void FUN_00413474(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044ed6c(uVar2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044ed6c(uVar2,*(undefined4 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00413504  FUN_00413504 =====

void FUN_00413504(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00413510  FUN_00413510 =====

void FUN_00413510(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19e18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00413568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00413578  FUN_00413578 =====

void FUN_00413578(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d19e18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004135dc  FUN_004135dc =====

void FUN_004135dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar7 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 == (long *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,lVar7 + 0x1948);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,lVar7 + 0x1948);
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar4,uVar5);
  return;
}


// ===== 004136a0  FUN_004136a0 =====

void FUN_004136a0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19e40;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004136bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 004136c4  FUN_004136c4 =====

void FUN_004136c4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d19e40;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413704  FUN_00413704 =====

void FUN_00413704(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar4 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00413780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,lVar4 + 0x1948);
    return;
  }
  plVar1 = plVar5 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(param_1 + 0x20))(param_1 + 0x10,lVar4 + 0x1948);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  FUN_005466cc(plVar5);
  return;
}


// ===== 004137a4  FUN_004137a4 =====

void FUN_004137a4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19e68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004137f8  FUN_004137f8 =====

void FUN_004137f8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d19e68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413848  FUN_00413848 =====

void FUN_00413848(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00451578(uVar6,*(undefined4 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00451578(uVar6,*(undefined4 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004138f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 004138f8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004138fc  FUN_004138fc =====

void FUN_004138fc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00451578(uVar2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00451578(uVar2,*(undefined4 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 0041398c  FUN_0041398c =====

void FUN_0041398c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19eb8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004139f8  FUN_004139f8 =====

void FUN_004139f8(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19eb8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413a64  FUN_00413a64 =====

void FUN_00413a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00413abc(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00413ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 00413abc  FUN_00413abc =====

void FUN_00413abc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_00451798(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00413c2c  FUN_00413c2c =====

void FUN_00413c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19ee0;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00413c4c  FUN_00413c4c =====

void FUN_00413c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19ee0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413c88  FUN_00413c88 =====

void FUN_00413c88(long param_1)

{
  FUN_00413abc(param_1 + 8);
  return;
}


// ===== 00413c90  FUN_00413c90 =====

void FUN_00413c90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00413c9c  FUN_00413c9c =====

void FUN_00413c9c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d19f08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00413d14  FUN_00413d14 =====

void FUN_00413d14(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d19f08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00413d88  FUN_00413d88 =====

void FUN_00413d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00413de0(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00413ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x70))
            (param_1 + 0x60,param_1 + 0x48,*(undefined8 *)(param_1 + 0x80),uVar1,uVar2);
  return;
}


// ===== 00413de0  FUN_00413de0 =====

void FUN_00413de0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 *local_68;
  long local_58;
  
  __dest = &local_a0;
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_90 = CONCAT17((char)uVar5,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_90 = uVar2 | 0x8000000000000000;
      local_a0 = (undefined1 *)__dest;
      uStack_98 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_98 = param_1[2];
    local_a0 = (undefined1 *)param_1[1];
    local_90 = param_1[3];
  }
  local_70 = param_1[6];
  local_68 = (undefined8 *)param_1[7];
  lStack_78 = param_1[5];
  local_80 = param_1[4];
  if ((code *)*local_68 != (code *)0x0) {
    local_80 = (*(code *)*local_68)(param_1[4]);
  }
  FUN_00452010(uVar3,&local_a0,&local_80);
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00413fa0  FUN_00413fa0 =====

void FUN_00413fa0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d19f30;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00413ff4  FUN_00413ff4 =====

void FUN_00413ff4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d19f30;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414044  FUN_00414044 =====

void FUN_00414044(long param_1)

{
  FUN_00413de0(param_1 + 8);
  return;
}


// ===== 0041404c  FUN_0041404c =====

void FUN_0041404c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19f58;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004140b8  FUN_004140b8 =====

void FUN_004140b8(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19f58;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414124  FUN_00414124 =====

void FUN_00414124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041417c(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00414178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 0041417c  FUN_0041417c =====

void FUN_0041417c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_004523f4(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004142ec  FUN_004142ec =====

void FUN_004142ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19f80;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041430c  FUN_0041430c =====

void FUN_0041430c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19f80;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414348  FUN_00414348 =====

void FUN_00414348(long param_1)

{
  FUN_0041417c(param_1 + 8);
  return;
}


// ===== 00414350  FUN_00414350 =====

void FUN_00414350(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19fa8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004143bc  FUN_004143bc =====

void FUN_004143bc(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19fa8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414428  FUN_00414428 =====

void FUN_00414428(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00414480(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 00414480  FUN_00414480 =====

void FUN_00414480(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_004523f8(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004145f0  FUN_004145f0 =====

void FUN_004145f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19fd0;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00414610  FUN_00414610 =====

void FUN_00414610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d19fd0;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041464c  FUN_0041464c =====

void FUN_0041464c(long param_1)

{
  FUN_00414480(param_1 + 8);
  return;
}


// ===== 00414654  FUN_00414654 =====

void FUN_00414654(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19ff8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004146c0  FUN_004146c0 =====

void FUN_004146c0(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d19ff8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041472c  FUN_0041472c =====

void FUN_0041472c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00451418(uVar6,param_1 + 0x10);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00451418(uVar6,param_1 + 0x10);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004147d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  return;
}


