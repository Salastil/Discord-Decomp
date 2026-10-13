// ===== 005dabf4  FUN_005dabf4 =====

void FUN_005dabf4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005dabf4(param_1,*param_2);
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


// ===== 005dac68  FUN_005dac68 =====

void FUN_005dac68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005dac68(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe4) {
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


// ===== 005dacdc  FUN_005dacdc =====

ulong FUN_005dacdc(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  ushort local_34 [2];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  uVar5 = (**(code **)(**(long **)(param_1 + 0x170) + 0xc0))();
  *(int *)(param_1 + 0x3f50) = (int)uVar5;
  *(char *)(param_1 + 0x3f54) = (char)((ulong)uVar5 >> 0x20);
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  uVar6 = (ulong)uVar3;
  if (*(char *)(param_1 + 0x3f54) == '\x01') {
    local_34[0] = 0;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x4018) + 0x1c8))
                      (*(long **)(param_1 + 0x4018),local_34);
    uVar2 = local_34[0];
    if ((int)uVar6 != -1) {
      if ((*(byte *)(param_1 + 0x3f54) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      iVar1 = *(int *)(param_1 + 0x3f50);
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 0x170) + 0xd8))(&local_b0);
      if (((((ulong)local_60 & 1) != 0) && (iVar4 = (int)local_88, (int)local_88 != 0)) ||
         (iVar4 = (**(code **)(**(long **)(param_1 + 0x170) + 200))(), ((ulong)local_60 & 1) != 0))
      {
        FUN_006678ac(&local_a0);
      }
      uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
      uVar6 = (ulong)uVar3;
      if (((param_2 & 1) == 0) &&
         ((iVar4 = (int)((ulong)((long)iVar4 * -0x10624dd3) >> 0x20),
          iVar1 = iVar1 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * (uint)uVar2,
          *(char *)(param_1 + 0x3f68) != '\x01' || (*(int *)(param_1 + 0x3f60) != iVar1)))) {
        *(int *)(param_1 + 0x3f60) = iVar1;
        *(undefined8 *)(param_1 + 0x3f58) = param_3;
        *(undefined1 *)(param_1 + 0x3f68) = 1;
      }
      *(uint *)(param_1 + 0x3f70) = (uint)local_34[0];
    }
  }
  return uVar6;
}


// ===== 005dae6c  FUN_005dae6c =====

undefined1  [16]
FUN_005dae6c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  pbVar6 = (byte *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    bVar1 = *pbVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, bVar1 < *(byte *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005daed4;
      }
      if (bVar1 == *(byte *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_005daf38;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_005daed4:
  plVar3 = (long *)operator_new(0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar1 = *pbVar6;
  *(undefined4 *)(plVar3 + 4) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(byte *)((long)plVar3 + 0x1c) = bVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005daf38:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005daf68  FUN_005daf68 =====

undefined4 * FUN_005daf68(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_50;
  undefined4 *local_48;
  long local_40;
  void *local_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar5 < 0x276276276276277) {
    local_50 = 0;
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x6276276276276276;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar7 = 0x276276276276276;
    }
    if (uVar7 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x276276276276276 < uVar7) goto LAB_005db0ec;
      pvVar4 = operator_new(uVar7 * 0x68);
    }
    local_38 = (void *)((long)pvVar4 + uVar7 * 0x68);
    local_48 = (undefined4 *)((long)pvVar4 + lVar8);
    if (local_48 != (undefined4 *)0x0) {
      uVar2 = *param_2;
      *(undefined8 *)(local_48 + 4) = 0;
      *(undefined8 *)(local_48 + 6) = 0;
      *(undefined8 *)(local_48 + 2) = 0;
      *local_48 = uVar2;
      *(undefined8 *)(local_48 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(local_48 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(local_48 + 6) = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)(param_2 + 0xe);
      uVar9 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      uVar13 = *(undefined8 *)(param_2 + 0x12);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar15 = *(undefined8 *)(param_2 + 0x16);
      uVar14 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(local_48 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(local_48 + 8) = uVar11;
      *(undefined8 *)(local_48 + 0xe) = uVar10;
      *(undefined8 *)(local_48 + 0xc) = uVar9;
      uVar3 = *(undefined1 *)(param_2 + 0x18);
      *(undefined8 *)(local_48 + 0x12) = uVar13;
      *(undefined8 *)(local_48 + 0x10) = uVar12;
      *(undefined8 *)(local_48 + 0x16) = uVar15;
      *(undefined8 *)(local_48 + 0x14) = uVar14;
      puVar1 = local_48 + 0x1a;
      *(undefined1 *)(local_48 + 0x18) = uVar3;
      lVar8 = (long)local_48 + (*param_1 - param_1[1]);
      FUN_005db200(param_1,*param_1,param_1[1],lVar8);
      local_50 = *param_1;
      lVar6 = param_1[2];
      *param_1 = lVar8;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)local_38;
      local_48 = (undefined4 *)local_50;
      local_40 = local_50;
      local_38 = (void *)lVar6;
      FUN_005db0f0(&local_50);
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_005da784();
LAB_005db0ec:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 005db0f0  FUN_005db0f0 =====

void FUN_005db0f0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while( true ) {
    lVar3 = lVar2;
    if (lVar1 == lVar3) {
      param_1[2] = lVar3;
      if ((void *)*param_1 == (void *)0x0) {
        return;
      }
      operator_delete((void *)*param_1);
      return;
    }
    lVar2 = lVar3 + -0x68;
    if (lVar2 == 0) break;
    pvVar4 = *(void **)(lVar3 + -0x60);
    if (pvVar4 != (void *)0x0) {
      pvVar5 = *(void **)(lVar3 + -0x58);
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
      while (pvVar5 != pvVar4) {
        pvVar5 = (void *)((long)pvVar5 + -4);
        if (pvVar5 == (void *)0x0) goto LAB_005db1ac;
      }
      *(void **)(lVar3 + -0x58) = pvVar4;
      operator_delete(pvVar4);
    }
  }
LAB_005db1ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005db200  FUN_005db200 =====

void FUN_005db200(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
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
  
  puVar4 = param_2;
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar2 = *puVar4;
      *(undefined8 *)(param_4 + 4) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      *(undefined8 *)(param_4 + 2) = 0;
      *param_4 = uVar2;
      *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar4 + 2);
      *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar4 + 4);
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar4 + 6);
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined1 *)(param_4 + 0x18) = *(undefined1 *)(puVar4 + 0x18);
      uVar10 = *(undefined8 *)(puVar4 + 0x10);
      uVar9 = *(undefined8 *)(puVar4 + 0x16);
      uVar8 = *(undefined8 *)(puVar4 + 0x14);
      uVar12 = *(undefined8 *)(puVar4 + 10);
      uVar11 = *(undefined8 *)(puVar4 + 8);
      uVar14 = *(undefined8 *)(puVar4 + 0xe);
      uVar13 = *(undefined8 *)(puVar4 + 0xc);
      puVar1 = puVar4 + 0x1a;
      *(undefined8 *)(param_4 + 0x12) = *(undefined8 *)(puVar4 + 0x12);
      *(undefined8 *)(param_4 + 0x10) = uVar10;
      *(undefined8 *)(param_4 + 0x16) = uVar9;
      *(undefined8 *)(param_4 + 0x14) = uVar8;
      *(undefined8 *)(param_4 + 10) = uVar12;
      *(undefined8 *)(param_4 + 8) = uVar11;
      *(undefined8 *)(param_4 + 0xe) = uVar14;
      *(undefined8 *)(param_4 + 0xc) = uVar13;
      param_4 = param_4 + 0x1a;
      puVar4 = puVar1;
    } while (puVar1 != param_3);
    do {
      if (param_2 == (undefined4 *)0x0) {
LAB_005db310:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = *(void **)(param_2 + 2);
      if (pvVar3 != (void *)0x0) {
        pvVar5 = *(void **)(param_2 + 4);
        uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
        uVar6 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3e) - ((long)pvVar3 - (long)pvVar5)) >> 2;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)pvVar3 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (pvVar5 != pvVar3) {
          pvVar5 = (void *)((long)pvVar5 + -4);
          if (pvVar5 == (void *)0x0) goto LAB_005db310;
        }
        *(void **)(param_2 + 4) = pvVar3;
        operator_delete(pvVar3);
      }
      param_2 = param_2 + 0x1a;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 005db348  FUN_005db348 =====

void FUN_005db348(undefined8 *param_1)

{
  ulong uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_007ebde8(*param_1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005db37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[5])(param_1 + 2);
    return;
  }
  return;
}


// ===== 005db390  FUN_005db390 =====

void FUN_005db390(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5db42c);
      (*pcVar1)();
    }
    param_2 = (undefined8 *)*param_2;
    if (param_2 != (undefined8 *)0x0) {
      (*(code *)param_2[4])(0,param_2 + 2,param_2 + 2);
      pvVar3 = (void *)*param_2;
      if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
        operator_delete(pvVar3);
      }
      operator_delete(param_2);
      return;
    }
  }
  return;
}


// ===== 005db42c  FUN_005db42c =====

void FUN_005db42c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  lVar3 = *param_1;
  FUN_0087435c(lVar3 + 0x90,param_1 + 1,param_1[2]);
  lVar3 = *(long *)(lVar3 + 0x4158);
  if (lVar3 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    plVar2 = DAT_00d60288;
    if (((DAT_00d60290 & 1) == 0) &&
       (iVar1 = FUN_0054fdd4(&DAT_00d60290), plVar2 = DAT_00d60288, iVar1 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
      plVar2 = DAT_00d60288;
    }
  }
  else {
    plVar2 = (long *)(param_1[1] + 8);
  }
  if (*plVar2 == plVar2[1]) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:443: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  FUN_005dcfec(lVar3,*(undefined4 *)(plVar2[1] + -0x48));
  return;
}


// ===== 005db528  FUN_005db528 =====

void FUN_005db528(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5db5b8);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 8);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        FUN_005da674((long)pvVar4 + 8);
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 005db5b8  FUN_005db5b8 =====

void FUN_005db5b8(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x148));
  uVar1 = (**(code **)(**(long **)(lVar4 + 0x170) + 0x90))();
  iVar2 = (**(code **)(**(long **)(lVar4 + 0x170) + 0x98))(*(long **)(lVar4 + 0x170));
  pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x148));
  lVar3 = DAT_00d64040;
  if (DAT_00d64040 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Audio.TargetJitterBufferDelayMs",0x26,1,1000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d64040);
    if (lVar3 != 0) goto LAB_005db654;
  }
  else {
LAB_005db654:
    FUN_00666568(lVar3,uVar1);
  }
  lVar3 = DAT_00d64048;
  if (DAT_00d64048 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Audio.ReceiverDelayEstimateMs",0x24,1,1000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d64048);
    if (lVar3 != 0) goto LAB_005db6a8;
  }
  else {
LAB_005db6a8:
    FUN_00666568(lVar3,*(int *)(lVar4 + 0x3f70) + iVar2);
  }
  lVar3 = DAT_00d64050;
  if (DAT_00d64050 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Audio.ReceiverJitterBufferDelayMs",0x28,1,1000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d64050);
    if (lVar3 == 0) goto LAB_005db70c;
  }
  FUN_00666568(lVar3,iVar2);
LAB_005db70c:
  lVar3 = DAT_00d64058;
  if (DAT_00d64058 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Audio.ReceiverDeviceDelayMs",0x22,1,1000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d64058);
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_00666568(lVar3,*(undefined4 *)(lVar4 + 0x3f70));
  return;
}


// ===== 005db784  FUN_005db784 =====

int FUN_005db784(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  param_1[1].__data.__lock = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  return iVar1;
}


// ===== 005db7d8  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}


// ===== 005db7e0  FUN_005db7e0 =====

undefined2 FUN_005db7e0(pthread_mutex_t *param_1)

{
  undefined2 uVar1;
  
  pthread_mutex_lock(param_1);
  uVar1 = *(undefined2 *)((long)param_1 + 0x2c);
  pthread_mutex_unlock(param_1);
  return uVar1;
}


// ===== 005db818  FUN_005db818 =====

int FUN_005db818(pthread_mutex_t *param_1)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  param_1[1].__data.__lock = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 005db84c  FUN_005db84c =====

int FUN_005db84c(pthread_mutex_t *param_1)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 005db88c  FUN_005db88c =====

int FUN_005db88c(pthread_mutex_t *param_1)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 005db8cc  FUN_005db8cc =====

undefined4 FUN_005db8cc(double param_1,pthread_mutex_t *param_2,long param_3)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  short sVar5;
  code *pcVar6;
  
  uVar3 = FUN_0065901c(param_3);
  if ((uVar3 & 1) == 0) {
    pcVar6 = *(code **)PTR_PTR_FUN_00d51f30;
    uVar4 = FUN_00659108(param_3);
    uVar2 = (*pcVar6)(uVar4,*(long *)(param_3 + 0x28) * *(long *)(param_3 + 0x18));
  }
  else {
    uVar2 = 0;
  }
  pthread_mutex_lock(param_2);
  sVar1 = (short)uVar2;
  sVar5 = *(short *)(param_2 + 1);
  if (*(short *)(param_2 + 1) < sVar1) {
    *(short *)(param_2 + 1) = sVar1;
    sVar5 = sVar1;
  }
  sVar1 = *(short *)((long)param_2 + 0x2a);
  *(short *)((long)param_2 + 0x2a) = sVar1 + 1;
  if (sVar1 == 10) {
    *(short *)((long)param_2 + 0x2c) = sVar5;
    *(undefined2 *)((long)param_2 + 0x2a) = 0;
    *(short *)(param_2 + 1) = (short)((uint)(int)sVar5 >> 2);
  }
  else {
    sVar5 = *(short *)((long)param_2 + 0x2c);
  }
  *(double *)((long)param_2 + 0x38) = *(double *)((long)param_2 + 0x38) + param_1;
  *(double *)((long)param_2 + 0x30) =
       *(double *)((long)param_2 + 0x30) +
       param_1 * ((double)(int)sVar5 / 32767.0) * ((double)(int)sVar5 / 32767.0);
  pthread_mutex_unlock(param_2);
  return uVar2;
}


// ===== 005db9d0  FUN_005db9d0 =====

void FUN_005db9d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  *param_1 = &PTR_FUN_00d25fc8;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  param_1[3] = param_2[2];
  puVar2 = (undefined8 *)param_2[3];
  param_1[4] = puVar2;
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
    uVar1 = (*pcVar3)(*param_2);
    param_1[1] = uVar1;
  }
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[5] = uVar1;
  param_1[6] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}


// ===== 005dba4c  FUN_005dba4c =====

void FUN_005dba4c(long *param_1)

{
  long *plVar1;
  long *local_8;
  
  plVar1 = (long *)param_1[5];
  local_8 = param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 005dbaac  FUN_005dbaac =====

void FUN_005dbaac(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = &DAT_001fbc50;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  pcVar2 = *(code **)(lVar1 + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 8));
  }
  *(code **)(param_1 + 0x18) = FUN_005dc0a4;
  *(undefined **)(param_1 + 0x20) = &DAT_001fbc50;
  return;
}


// ===== 005dbb24  FUN_005dbb24 =====

void FUN_005dbb24(long param_1,void *param_2,ulong param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_68;
  void *local_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_68 = param_7;
    local_60 = param_2;
    uStack_58 = param_3;
    (**(code **)(param_1 + 0x18))(param_1 + 8,&local_60,param_4,&local_68);
    return;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x1b8);
  FUN_007dc8fc(puVar2,0);
  puVar2[2] = param_3;
  *puVar2 = &PTR_FUN_00d26008;
  puVar2[1] = param_3;
  if (param_3 == 0) {
    puVar2[3] = 0;
  }
  else {
    __dest = operator_new__(param_3);
    puVar2[3] = __dest;
    memcpy(__dest,param_2,param_3);
  }
  FUN_00659a44(puVar2 + 4,param_4);
  cVar1 = *(char *)((long)param_6 + 0x17);
  *(undefined4 *)(puVar2 + 0x32) = param_5;
  if (cVar1 < '\0') {
    FUN_005478d8(puVar2 + 0x33,*param_6,param_6[1]);
  }
  else {
    uVar5 = *param_6;
    uVar3 = param_6[2];
    puVar2[0x34] = param_6[1];
    puVar2[0x33] = uVar5;
    puVar2[0x35] = uVar3;
  }
  puVar2[0x36] = param_7;
                    /* WARNING: Could not recover jumptable at 0x005dbc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
  return;
}


// ===== 005dbc64  FUN_005dbc64 =====

void FUN_005dbc64(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 *local_40;
  undefined8 uStack_38;
  code *local_30;
  code *pcStack_28;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  local_30 = FUN_005dc514;
  pcStack_28 = FUN_005dc4fc;
  local_40 = param_1;
  uStack_38 = param_2;
  (**(code **)(*(long *)param_1[6] + 8))((long *)param_1[6],&local_40,&uStack_41,&uStack_42);
  (*local_30)(0,&local_40,&local_40);
  return;
}


// ===== 005dbcf0  FUN_005dbcf0 =====

void FUN_005dbcf0(undefined8 *param_1)

{
  undefined8 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  local_30 = FUN_005dc5b8;
  pcStack_28 = FUN_005dc5a4;
  local_40[0] = param_1;
  (**(code **)(*(long *)param_1[6] + 8))((long *)param_1[6],local_40,&uStack_1,&uStack_2);
  (*local_30)(0,local_40,local_40);
  return;
}


// ===== 005dbd78  FUN_005dbd78 =====

void FUN_005dbd78(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong extraout_x1;
  undefined1 auVar5 [16];
  undefined1 uStack_1c0;
  undefined1 local_1bf;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined8 local_150;
  undefined1 local_148;
  undefined4 local_147;
  undefined3 uStack_143;
  undefined1 local_140;
  undefined4 local_13f;
  undefined3 uStack_13b;
  byte local_138;
  void *local_f0;
  char cStack_d9;
  void *local_d8;
  char cStack_c1;
  void *local_c0;
  char cStack_a9;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_50 [16];
  undefined8 local_28;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x10) & 1) == 0) {
    auVar5 = (**(code **)(*param_2 + 0x70))(param_2);
    uVar4 = auVar5._0_8_;
    if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      uVar4 = 0x8000000000000000;
    }
    memcpy(&uStack_1c0,&DAT_001fbae0,0x170);
    FUN_006599bc(&uStack_1c0);
    iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
    if (iVar2 == 2) {
      local_1bf = (**(code **)(*param_2 + 0x20))(param_2);
      local_1bc = (**(code **)(*param_2 + 0x40))(param_2);
      local_1b8 = (**(code **)(*param_2 + 0x38))(param_2);
      (**(code **)(*param_2 + 0xa8))(param_2);
      uVar1 = local_150;
      if ((extraout_x1 & 1) != 0) {
        local_147 = 0;
        uStack_143 = 0;
        local_13f = 0;
        uStack_13b = 0;
        if ((local_138 & 1) == 0) {
          local_138 = 1;
        }
        local_150 = 0;
        local_148 = 0;
        local_140 = 0;
        auVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
        if ((auVar5 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_005dc08c();
        }
        uVar1 = auVar5._0_8_;
        if ((local_138 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
      }
      local_150 = uVar1;
      uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
      if ((uVar3 >> 8 & 1) != 0) {
        uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
        if ((uVar3 >> 8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        FUN_00659684(local_50,1,uVar3 & 0xff);
        local_58 = 1;
        local_60 = local_50._0_8_;
      }
    }
    else {
      FUN_00659a6c(&uStack_1c0,param_2 + 4);
    }
    local_50 = (**(code **)(*param_2 + 0x10))(param_2);
    local_28 = uVar4;
    (**(code **)(param_1 + 0x18))(param_1 + 8,local_50,&uStack_1c0,&local_28);
    if (cStack_a9 < '\0') {
      operator_delete(local_c0);
    }
    if (cStack_c1 < '\0') {
      operator_delete(local_d8);
    }
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}


// ===== 005dbfdc  FUN_005dbfdc =====

void FUN_005dbfdc(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x117) < '\0') {
    operator_delete(*(void **)(param_1 + 0x100));
    cVar1 = *(char *)(param_1 + 0xff);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xff);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0xe8));
    cVar1 = *(char *)(param_1 + 0xe7);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe7);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0xd0));
  return;
}


// ===== 005dc064  FUN_005dc064 =====

void FUN_005dc064(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005dc07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 005dc084  FUN_005dc084 =====

void FUN_005dc084(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5dc08c);
  (*pcVar1)();
}


// ===== 005dc08c  FUN_005dc08c =====

void FUN_005dc08c(void)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort("bad_optional_access was thrown in -fno-exceptions mode");
}


// ===== 005dc0a4  FUN_005dc0a4 =====

void FUN_005dc0a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005dc0b4();
}


// ===== 005dc0b4  FUN_005dc0b4 =====

void FUN_005dc0b4(void)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort("bad_function_call was thrown in -fno-exceptions mode");
}


// ===== 005dc0cc  FUN_005dc0cc =====

void FUN_005dc0cc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d26008;
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    operator_delete((void *)param_1[0x33]);
  }
  FUN_005dbfdc(param_1 + 4);
  pvVar1 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 005dc138  FUN_005dc138 =====

void FUN_005dc138(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d26008;
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    operator_delete((void *)param_1[0x33]);
    cVar1 = *(char *)((long)param_1 + 0x137);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x137);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x24]);
    cVar1 = *(char *)((long)param_1 + 0x11f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x11f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x21]);
    cVar1 = *(char *)((long)param_1 + 0x107);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x107);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 005dc1fc  FUN_005dc1fc =====

undefined8 FUN_005dc1fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}


// ===== 005dc214  FUN_005dc214 =====

void FUN_005dc214(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_3 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 < param_3) {
      uVar3 = uVar3 + (uVar3 >> 1);
      uVar1 = param_3;
      if (param_3 <= uVar3) {
        uVar1 = uVar3;
      }
      pvVar2 = operator_new__(uVar1);
      pvVar4 = *(void **)(param_1 + 0x18);
      *(void **)(param_1 + 0x18) = pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        pvVar4 = *(void **)(param_1 + 8);
      }
      *(ulong *)(param_1 + 0x10) = uVar1;
    }
    else {
      pvVar4 = (void *)0x0;
    }
    memcpy((void *)(*(long *)(param_1 + 0x18) + (long)pvVar4),param_2,param_3);
    *(ulong *)(param_1 + 8) = param_3;
  }
  return;
}


// ===== 005dc2b0  FUN_005dc2b0 =====

undefined1 FUN_005dc2b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}


// ===== 005dc2bc  FUN_005dc2bc =====

undefined8 FUN_005dc2bc(void)

{
  return 0;
}


// ===== 005dc2c8  FUN_005dc2c8 =====

void FUN_005dc2c8(void)

{
  return;
}


// ===== 005dc2d0  FUN_005dc2d0 =====

undefined4 FUN_005dc2d0(long param_1)

{
  return *(undefined4 *)(param_1 + 400);
}


// ===== 005dc2dc  FUN_005dc2dc =====

undefined4 FUN_005dc2dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 005dc2e8  FUN_005dc2e8 =====

void FUN_005dc2e8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// ===== 005dc2f4  FUN_005dc2f4 =====

undefined1  [16] FUN_005dc2f4(void)

{
  return ZEXT816(0);
}


// ===== 005dc304  FUN_005dc304 =====

undefined1  [16] FUN_005dc304(void)

{
  return ZEXT816(0);
}


// ===== 005dc314  FUN_005dc314 =====

undefined8 FUN_005dc314(void)

{
  return 1;
}


// ===== 005dc320  FUN_005dc320 =====

void FUN_005dc320(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x1af)) {
    uVar2 = *(undefined8 *)(param_2 + 0x198);
    uVar1 = *(undefined8 *)(param_2 + 0x1a8);
    param_1[1] = *(undefined8 *)(param_2 + 0x1a0);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x198),*(undefined8 *)(param_2 + 0x1a0));
  return;
}


// ===== 005dc350  FUN_005dc350 =====

undefined1  [16] FUN_005dc350(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x1b0);
  uVar1 = uVar2 & 0xffffffffffffff00;
  if (uVar2 == 0x8000000000000000) {
    uVar1 = 0;
  }
  auVar3._0_8_ = uVar1 | uVar2 & 0xff;
  auVar3[8] = uVar2 != 0x8000000000000000;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 005dc374  FUN_005dc374 =====

undefined1  [16] FUN_005dc374(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x90));
    auVar2._0_8_ = (long)(dVar1 * 0.00023283064365386963);
    auVar2._8_8_ = 1;
    return auVar2;
  }
  return ZEXT816(0);
}


// ===== 005dc3b4  FUN_005dc3b4 =====

undefined8 FUN_005dc3b4(void)

{
  return 0;
}


// ===== 005dc3c0  FUN_005dc3c0 =====

void FUN_005dc3c0(void)

{
  return;
}


// ===== 005dc3c8  FUN_005dc3c8 =====

undefined1  [16] FUN_005dc3c8(long param_1)

{
  undefined1 auVar1 [16];
  
  if ((*(char *)(param_1 + 0xa8) == '\x01') && (*(char *)(param_1 + 0xa0) == '\x01')) {
    auVar1._0_8_ = (long)((double)*(long *)(param_1 + 0x98) * 0.00023283064365386963);
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(0);
}


// ===== 005dc414  FUN_005dc414 =====

long FUN_005dc414(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    lVar1 = param_1 + 0x30;
  }
  return lVar1;
}


// ===== 005dc42c  FUN_005dc42c =====

uint FUN_005dc42c(long param_1)

{
  return *(ushort *)(param_1 + 0x22) | 0x10000;
}


// ===== 005dc43c  FUN_005dc43c =====

undefined1  [16] FUN_005dc43c(void)

{
  return ZEXT816(0);
}


// ===== 005dc44c  FUN_005dc44c =====

undefined4 FUN_005dc44c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 0x188) & (uint)*(undefined8 *)(param_1 + 0x180) & 1) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 005dc46c  FUN_005dc46c =====

uint FUN_005dc46c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x188) & 1;
  uVar2 = (uint)*(byte *)(param_1 + 0x184);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2 | uVar1 << 8;
}


// ===== 005dc488  FUN_005dc488 =====

undefined8 FUN_005dc488(void)

{
  return 1;
}


// ===== 005dc494  FUN_005dc494 =====

void FUN_005dc494(long param_1,uint param_2)

{
  undefined1 uVar1;
  undefined8 local_28;
  
  if ((param_2 >> 8 & 1) == 0) {
    uVar1 = 0;
    local_28 = 0;
  }
  else {
    param_2 = param_2 & 0xff;
    uVar1 = 1;
    if (0x7e < param_2) {
      param_2 = 0x7f;
    }
    FUN_00659684(&local_28,1,param_2);
  }
  *(undefined8 *)(param_1 + 0x180) = local_28;
  *(undefined1 *)(param_1 + 0x188) = uVar1;
  return;
}


// ===== 005dc4fc  FUN_005dc4fc =====

void FUN_005dc4fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_005dbd78(*param_1,uVar1);
  return;
}


// ===== 005dc514  FUN_005dc514 =====

void FUN_005dc514(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar3 = *param_2;
    *param_2 = 0;
    *param_3 = lVar3;
    lVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = lVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5dc5a4);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005dc58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 005dc5a4  FUN_005dc5a4 =====

void FUN_005dc5a4(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


// ===== 005dc5b8  FUN_005dc5b8 =====

void FUN_005dc5b8(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar2 = *param_2;
    *param_2 = 0;
    *param_3 = lVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5dc5fc);
    (*pcVar1)();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005dc5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 005dc5fc  FUN_005dc5fc =====

/* WARNING: Removing unreachable block (ram,0x005dc714) */

void FUN_005dc5fc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 ******local_48;
  ulong uStack_40;
  byte bStack_31;
  
  *(undefined4 *)(param_1 + 1) = 0x14;
  *(undefined4 *)(param_1 + 2) = 100;
  *param_1 = 0x3fefdf3b645a1cac;
  puVar7 = param_1 + 3;
  *puVar7 = 0x3ff0000000000000;
  puVar6 = param_1 + 4;
  *puVar6 = 1000000;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)
           FUN_005dc8cc("packet_loss_forget_factor",param_1,"ms_per_loss_percent",param_1 + 1,
                        "never_nack_multiple_times",(undefined2 *)((long)param_1 + 0xc),
                        "require_valid_rtt",(long)param_1 + 0xd,"max_loss_rate",puVar7,"fixed_delay"
                        ,puVar6);
  uVar8 = (undefined4)((ulong)puVar7 >> 0x20);
  (**(code **)(*param_2 + 0x10))(&local_48,param_2,"WebRTC-Audio-NetEqNackTrackerConfig",0x23);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    local_48 = &local_48;
  }
  FUN_006659ac(puVar1,local_48,uStack_40);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) != 0) goto joined_r0x005dc70c;
  if (*(char *)(param_1 + 5) == '\x01') {
    uVar2 = *puVar6;
    if (-1 < (long)uVar2) goto LAB_005dc790;
    uVar5 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  else {
    uVar2 = 0;
LAB_005dc790:
    uVar5 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar5 = uVar5 + 1;
    }
  }
  FUN_00623bb0(*param_1,param_1[3],&DAT_001fbc94,"../../audio/nack_tracker.cc",0x159,
               "Nack tracker config: packet_loss_forget_factor="," ms_per_loss_percent=",
               *(undefined4 *)(param_1 + 1)," never_nack_multiple_times=",
               *(undefined1 *)((long)param_1 + 0xc)," require_valid_rtt=",
               CONCAT44(uVar8,(uint)*(byte *)((long)param_1 + 0xd))," max_loss_rate=",
               " fixed_delay(ms)=",uVar5);
joined_r0x005dc70c:
  if (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar1[1];
      uVar5 = (ulong)((long)pvVar4 + (-0x20 - ((long)pvVar4 << 0x3b))) >> 5;
      uVar2 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3b) - ((long)pvVar3 - (long)pvVar4)) >> 5;
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      if ((1 < uVar2) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 0x1fU) == 0)) {
        uVar2 = uVar2 & 0x7fffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar2 * -0x20);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (pvVar4 != pvVar3) {
        pvVar4 = (void *)((long)pvVar4 + -0x20);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar1[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(puVar1);
  }
  return;
}


// ===== 005dc8cc  FUN_005dc8cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_005dc8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar5 = (undefined8 *)operator_new(0xc0);
  puVar1 = PTR_FUN_00d51f40;
  if (puVar5 != (undefined8 *)0x0) {
    auVar12._0_8_ = (long)puVar5 + _DAT_001f42f0;
    auVar12._8_8_ = (long)puVar5 + _UNK_001f42f8;
    auVar10._0_8_ = (long)puVar5 + _DAT_001f1930;
    auVar10._8_8_ = (long)puVar5 + _UNK_001f1938;
    auVar10 = NEON_cmeq(auVar10,0,8);
    auVar12 = NEON_cmeq(auVar12,0,8);
    auVar11._4_4_ = auVar12._8_4_;
    auVar11._0_4_ = auVar12._0_4_;
    auVar11._8_4_ = auVar10._0_4_;
    auVar11._12_4_ = auVar10._8_4_;
    uVar9 = NEON_umaxv(auVar11,4);
    if (((uVar9 & 1) == 0) && (puVar5 != (undefined8 *)0xffffffffffffff60)) {
      *puVar5 = param_1;
      puVar5[1] = param_2;
      puVar2 = PTR_FUN_00d51f48;
      puVar5[2] = puVar1;
      puVar5[3] = puVar2;
      puVar3 = PTR_FUN_00d51f50;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      puVar4 = PTR_FUN_00d51f58;
      puVar5[6] = puVar3;
      puVar5[7] = puVar4;
      puVar3 = PTR_FUN_00d51f60;
      puVar5[8] = param_5;
      puVar5[9] = param_6;
      puVar4 = PTR_FUN_00d51f68;
      puVar5[0xc] = param_7;
      puVar5[0xd] = param_8;
      puVar5[0xe] = puVar3;
      puVar5[10] = puVar3;
      puVar5[0xb] = puVar4;
      puVar5[0x13] = puVar2;
      puVar5[0xf] = puVar4;
      puVar5[0x10] = param_9;
      puVar5[0x11] = param_10;
      puVar5[0x12] = puVar1;
      puVar1 = PTR_FUN_00d51f70;
      puVar5[0x14] = param_11;
      puVar5[0x15] = param_12;
      puVar2 = PTR_FUN_00d51f78;
      puVar5[0x16] = puVar1;
      puVar5[0x17] = puVar2;
      pvVar6 = operator_new(0x18);
      local_78 = puVar5;
      local_70 = puVar5 + 0x18;
      local_68 = puVar5 + 0x18;
      FUN_0066597c(pvVar6,&local_78);
      if (local_78 != (undefined8 *)0x0) {
        uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                       ((long)local_78 - (long)local_70)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        puVar5 = local_70;
        if ((1 < uVar7) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          puVar5 = local_70 + uVar7 * -4;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (puVar5 != local_78) {
          puVar5 = puVar5 + -4;
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_70 = local_78;
        operator_delete(local_78);
      }
      return pvVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005dcac4  FUN_005dcac4 =====

void FUN_005dcac4(long param_1)

{
  FUN_005dc5fc();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x30;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x48) = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 500;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


// ===== 005dcb1c  FUN_005dcb1c =====

void FUN_005dcb1c(long param_1)

{
  long local_18;
  
  local_18 = param_1 + 0x48;
  FUN_005dd3a4(&local_18,*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 005dcb50  FUN_005dcb50 =====

void FUN_005dcb50(long param_1,int param_2)

{
  undefined8 *puVar1;
  long local_28;
  
  if (*(int *)(param_1 + 0x44) != param_2 / 1000) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    local_28 = param_1 + 0x48;
    FUN_005dd3a4(&local_28,*puVar1);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(int *)(param_1 + 0x44) = param_2 / 1000;
  }
  return;
}


// ===== 005dcbd0  FUN_005dcbd0 =====

void FUN_005dcbd0(long param_1)

{
  undefined8 *puVar1;
  long local_8;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  local_8 = param_1 + 0x48;
  FUN_005dd3a4(&local_8,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x30;
  return;
}


// ===== 005dcc2c  FUN_005dcc2c =====

void FUN_005dcc2c(double *param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ushort local_24 [2];
  
  if (((ulong)param_1[7] & 1) == 0) {
    *(ushort *)(param_1 + 6) = param_2;
    *(undefined4 *)((long)param_1 + 0x34) = param_3;
    *(undefined1 *)(param_1 + 7) = 1;
    if (((ulong)param_1[8] & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0x3c) = param_3;
    }
  }
  else if (*(ushort *)(param_1 + 6) != param_2) {
    local_24[0] = param_2;
    FUN_005dd504(param_1 + 9,local_24);
    uVar1 = *(ushort *)(param_1 + 6);
    uVar2 = (uint)uVar1 - (uint)local_24[0];
    if (uVar2 == 0x8000) {
      if ((uint)local_24[0] < (uint)uVar1) {
        return;
      }
    }
    else if (((uint)uVar1 != (uint)local_24[0]) && ((uVar2 >> 0xf & 1) == 0)) {
      return;
    }
    lVar4 = (long)(*param_1 * 1073741824.0);
    iVar5 = (uint)local_24[0] + ~(uint)uVar1;
    uVar3 = lVar4 * (ulong)*(uint *)(param_1 + 0xd) >> 0x1e;
    *(int *)(param_1 + 0xd) = (int)uVar3;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        uVar2 = ((int)((uVar3 & 0xffffffff) * lVar4 >> 0x1e) - (int)lVar4) + 0x40000000;
        uVar3 = (ulong)uVar2;
      } while (iVar5 != 0);
      *(uint *)(param_1 + 0xd) = uVar2;
    }
    *(int *)((long)param_1 + 0x6c) =
         (int)((double)*(int *)(param_1 + 1) * 100.0 * (double)(uVar3 & 0xffffffff) *
              9.313225746154785e-10);
    FUN_005dcd68(param_1,local_24[0],param_3);
    *(undefined4 *)((long)param_1 + 0x34) = param_3;
    *(ushort *)(param_1 + 6) = local_24[0];
    FUN_005dce8c(param_1);
  }
  return;
}


// ===== 005dcd68  FUN_005dcd68 =====

void FUN_005dcd68(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_58 [4];
  ulong local_50;
  int local_48;
  undefined4 uStack_44;
  
  uVar3 = *(ushort *)(param_1 + 0x30);
  uVar6 = (uint)uVar3;
  uVar2 = param_2 & 0xffff;
  uVar1 = uVar3 + 1;
  uVar4 = uVar2 - (uVar1 & 0xffff);
  if (uVar4 == 0x8000) {
    if (uVar2 <= (uVar1 & 0xffff)) {
      return;
    }
  }
  else {
    if (uVar2 == (uVar1 & 0xffff)) {
      return;
    }
    if ((uVar4 >> 0xf & 1) != 0) {
      return;
    }
  }
  uVar1 = param_2 - uVar3 & 0xffff;
  uVar4 = param_3 - *(int *)(param_1 + 0x34);
  if (uVar1 <= uVar4) {
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = uVar4 / uVar1;
    }
    uVar1 = *(int *)(param_1 + 0x44) * 0x78;
    if (uVar5 == uVar1 ||
        (int)(uVar5 + *(int *)(param_1 + 0x44) * -0x78) < 0 != SBORROW4(uVar5,uVar1)) {
      do {
        uVar6 = uVar6 + 1;
        uVar1 = uVar2 - (uVar6 & 0xffff);
        if (uVar1 == 0x8000) {
          if ((param_2 & 0xffff) <= (uVar6 & 0xffff)) {
            return;
          }
        }
        else {
          if ((param_2 & 0xffff) == (uVar6 & 0xffff)) {
            return;
          }
          if ((uVar1 >> 0xf & 1) != 0) {
            return;
          }
        }
        local_58[0] = (undefined2)uVar6;
        local_48 = *(int *)(param_1 + 0x34) + uVar5 * (uVar6 - *(ushort *)(param_1 + 0x30) & 0xffff)
        ;
        uStack_44 = 0xaaaaaaaa;
        uVar1 = 0;
        if (*(uint *)(param_1 + 0x44) != 0) {
          uVar1 = (uint)(local_48 - *(int *)(param_1 + 0x3c)) / *(uint *)(param_1 + 0x44);
        }
        local_50 = (ulong)uVar1;
        FUN_005dd630(0,param_1 + 0x48,param_1 + 0x50,param_1 + 0x48,param_1 + 0x50,local_58);
      } while( true );
    }
  }
  return;
}


// ===== 005dce8c  FUN_005dce8c =====

void FUN_005dce8c(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar10 = (long *)(param_1 + 0x50);
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
    uVar1 = *(short *)(param_1 + 0x30) + ~*(ushort *)(param_1 + 0x60);
    puVar5 = (undefined8 *)*plVar10;
    do {
      while( true ) {
        puVar11 = puVar5;
        uVar2 = *(ushort *)(puVar11 + 4);
        uVar3 = (uint)uVar2 - (uint)uVar1;
        uVar8 = (uint)uVar2;
        if (uVar3 != 0x8000) break;
        if (uVar8 <= uVar1) goto LAB_005dcf00;
LAB_005dcecc:
        puVar5 = (undefined8 *)*puVar11;
        plVar10 = puVar11;
        if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto joined_r0x005dcf4c;
      }
      if (((uint)uVar2 != (uint)uVar1) && ((uVar3 >> 0xf & 1) == 0)) goto LAB_005dcecc;
LAB_005dcf00:
      uVar3 = uVar1 - uVar8;
      if (uVar3 == 0x8000) {
        if (uVar1 <= uVar8) {
LAB_005dcf34:
          plVar6 = (long *)puVar11[1];
          while (plVar4 = plVar6, plVar4 != (long *)0x0) {
            plVar10 = plVar4;
            plVar6 = (long *)*plVar4;
          }
          break;
        }
      }
      else if ((uVar8 == uVar1) || ((uVar3 >> 0xf & 1) != 0)) goto LAB_005dcf34;
      puVar5 = (undefined8 *)puVar11[1];
    } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
  }
joined_r0x005dcf4c:
  while( true ) {
    if (puVar9 == plVar10) {
      return;
    }
    puVar5 = (undefined8 *)puVar9[1];
    puVar11 = puVar9;
    if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
      do {
        puVar12 = (undefined8 *)puVar11[2];
        bVar7 = puVar11 != (undefined8 *)*puVar12;
        puVar11 = puVar12;
      } while (bVar7);
    }
    else {
      do {
        puVar12 = puVar5;
        puVar5 = (undefined8 *)*puVar12;
      } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x48) == puVar9) {
      *(undefined8 **)(param_1 + 0x48) = puVar12;
    }
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),puVar9);
    if (puVar9 == (undefined8 *)0xffffffffffffffe0) break;
    operator_delete(puVar9);
    puVar9 = puVar12;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005dcfec  FUN_005dcfec =====

void FUN_005dcfec(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(uint *)(param_1 + 0x3c) = param_2;
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar6 = *(undefined8 **)(param_1 + 0x48);
    while (puVar6 != (undefined8 *)(param_1 + 0x50)) {
      uVar1 = *(uint *)(puVar6 + 6);
      if (uVar1 - param_2 == -0x80000000) {
        if (param_2 < uVar1) break;
      }
      else if ((uVar1 != param_2) && (-1 < (int)(uVar1 - param_2))) break;
      puVar2 = (undefined8 *)puVar6[1];
      puVar5 = puVar6;
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar4 = (undefined8 *)puVar5[2];
          bVar3 = puVar5 != (undefined8 *)*puVar4;
          puVar5 = puVar4;
        } while (bVar3);
      }
      else {
        do {
          puVar4 = puVar2;
          puVar2 = (undefined8 *)*puVar4;
        } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_1 + 0x48) == puVar6) {
        *(undefined8 **)(param_1 + 0x48) = puVar4;
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),puVar6);
      if (puVar6 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar6);
      puVar6 = puVar4;
    }
    while (puVar6 != (undefined8 *)(param_1 + 0x50)) {
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x44) != 0) {
        uVar1 = (uint)(*(int *)(puVar6 + 6) - *(int *)(param_1 + 0x3c)) / *(uint *)(param_1 + 0x44);
      }
      puVar6[5] = (ulong)uVar1;
      puVar2 = (undefined8 *)puVar6[1];
      puVar5 = puVar6;
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar5[2];
          bVar3 = puVar5 != (undefined8 *)*puVar6;
          puVar5 = puVar6;
        } while (bVar3);
      }
      else {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
    }
  }
  return;
}


// ===== 005dd16c  FUN_005dd16c =====

void FUN_005dd16c(long param_1,ulong param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/nack_tracker.cc",0xbe,"max_nack_list_size > 0",&DAT_001fbca2,0,0);
  }
  if (param_2 < 0x1f5) {
    *(ulong *)(param_1 + 0x60) = param_2;
    FUN_005dce8c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../audio/nack_tracker.cc",0xc1,"max_nack_list_size <= kNackListSizeLimitLocal",
               &DAT_001fb920,param_2,500);
}


// ===== 005dd1e0  FUN_005dd1e0 =====

void FUN_005dd1e0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
      return;
    }
    param_3 = (long)*(int *)(param_2 + 0x10);
  }
  plVar9 = *(long **)(param_2 + 0x48);
  plVar1 = (long *)(param_2 + 0x50);
  if (plVar9 != plVar1) {
    puVar5 = (undefined2 *)0x0;
    do {
      uVar2 = 0;
      if (*(uint *)(param_2 + 0x44) != 0) {
        uVar2 = (uint)(*(int *)(param_2 + 0x34) - (int)plVar9[6]) / *(uint *)(param_2 + 0x44);
      }
      if (*(char *)(param_2 + 0x28) == '\x01') {
        uVar7 = *(ulong *)(param_2 + 0x20);
        if ((long)uVar7 < 0) {
          uVar8 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
        }
        else {
          uVar8 = uVar7 / 1000;
          if (499 < uVar7 % 1000) {
            uVar8 = uVar8 + 1;
          }
        }
LAB_005dd2e8:
        if ((long)(param_3 + (ulong)uVar2) < (long)uVar8) {
LAB_005dd2f4:
          if (puVar5 < (undefined2 *)param_1[2]) {
            if (puVar5 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar6 = puVar5 + 1;
            *puVar5 = (short)plVar9[4];
          }
          else {
            puVar6 = (undefined2 *)FUN_005dd418(param_1,plVar9 + 4);
          }
          param_1[1] = puVar6;
          puVar5 = puVar6;
        }
      }
      else if (*(uint *)(param_2 + 0x68) <= (uint)(int)(*(double *)(param_2 + 0x18) * 1073741824.0))
      {
        if (plVar9[5] <= param_3) {
          uVar8 = (ulong)*(int *)(param_2 + 0x6c);
          goto LAB_005dd2e8;
        }
        goto LAB_005dd2f4;
      }
      plVar3 = (long *)plVar9[1];
      plVar10 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar10[2];
          bVar4 = plVar10 != (long *)*plVar9;
          plVar10 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar3;
          plVar3 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    } while (plVar9 != plVar1);
  }
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    local_58 = (undefined8 *)(param_2 + 0x48);
    FUN_005dd3a4(&local_58,*(undefined8 *)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(long **)(param_2 + 0x48) = plVar1;
  }
  return;
}


// ===== 005dd3a4  FUN_005dd3a4 =====

void FUN_005dd3a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005dd3a4(param_1,*param_2);
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


// ===== 005dd418  FUN_005dd418 =====

undefined2 * FUN_005dd418(long *param_1,undefined2 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  void *__dest;
  
  puVar6 = (undefined2 *)(param_1[1] - *param_1);
  lVar4 = (long)puVar6 >> 1;
  if (lVar4 == -2 || lVar4 + 2 < 0 != SCARRY8(lVar4,2)) {
                    /* WARNING: Subroutine does not return */
    FUN_005d4754();
  }
  uVar5 = param_1[2] - *param_1;
  uVar1 = uVar5;
  if (uVar5 <= lVar4 + 1U) {
    uVar1 = lVar4 + 1;
  }
  if (0x7ffffffffffffffd < uVar5) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar1 << 1);
    puVar6 = (undefined2 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar1 * 2);
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


// ===== 005dd504  FUN_005dd504 =====

long * FUN_005dd504(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar1 = *param_2;
    plVar11 = plVar6;
    do {
      while( true ) {
        uVar2 = *(ushort *)(plVar11 + 4);
        uVar3 = (uint)uVar2 - (uint)uVar1;
        uVar9 = (uint)uVar1;
        uVar10 = (uint)uVar2;
        if (uVar3 != 0x8000) break;
        if (uVar10 <= uVar9) goto LAB_005dd560;
LAB_005dd530:
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_005dd5b4;
      }
      if (((uint)uVar2 != (uint)uVar1) && ((uVar3 >> 0xf & 1) == 0)) goto LAB_005dd530;
LAB_005dd560:
      if (uVar9 - uVar10 == 0x8000) {
        if (uVar9 <= uVar10) {
LAB_005dd590:
          if (plVar11 != param_1 + 1) {
            plVar7 = plVar11;
            plVar4 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar8 = (long *)plVar7[2];
                bVar5 = plVar7 != (long *)*plVar8;
                plVar7 = plVar8;
              } while (bVar5);
            }
            else {
              do {
                plVar8 = plVar4;
                plVar4 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            if ((long *)*param_1 == plVar11) {
              *param_1 = plVar8;
            }
            param_1[2] = param_1[2] + -1;
            FUN_005d5d48(plVar6,plVar11);
            if (plVar11 != (long *)0xffffffffffffffe0) {
              operator_delete(plVar11);
              return (long *)1;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          break;
        }
      }
      else if ((uVar9 == uVar10) || ((uVar9 - uVar10 >> 0xf & 1) != 0)) goto LAB_005dd590;
      plVar11 = (long *)plVar11[1];
    } while (plVar11 != (long *)0x0);
LAB_005dd5b4:
    plVar6 = (long *)0x0;
  }
  return plVar6;
}


// ===== 005dd630  FUN_005dd630 =====

undefined1  [16]
FUN_005dd630(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined2 *param_6)

{
  undefined2 uVar1;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 *local_28;
  undefined8 *puVar2;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  auVar7 = FUN_005dd720(param_2,param_3,&local_28,param_6);
  puVar2 = auVar7._8_8_;
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x38);
    if ((puVar5 == (undefined8 *)0x0) || (*puVar5 = 0, puVar5 == (undefined8 *)0xffffffffffffffe0))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *param_6;
    uVar6 = *(undefined8 *)(param_6 + 8);
    uVar3 = *(undefined8 *)(param_6 + 4);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined2 *)(puVar5 + 4) = uVar1;
    puVar5[6] = uVar6;
    puVar5[5] = uVar3;
    puVar5[2] = auVar7._0_8_;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar4 = (undefined8 *)*puVar2;
    }
    FUN_005d5b94(param_2[1],puVar4);
    uVar3 = 1;
    param_2[2] = param_2[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = puVar5;
  return auVar7;
}


// ===== 005dd720  FUN_005dd720 =====

undefined1  [16] FUN_005dd720(undefined8 *param_1,long *param_2,long *param_3,ushort *param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  plVar1 = param_1 + 1;
  if (param_2 == plVar1) {
LAB_005dd75c:
    plVar11 = (long *)*param_2;
    plVar9 = param_2;
    if (param_2 != (long *)*param_1) {
      plVar8 = plVar11;
      plVar10 = param_2;
      if (plVar11 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar10[2];
          bVar5 = plVar10 == (long *)*plVar9;
          plVar10 = plVar9;
        } while (bVar5);
      }
      else {
        do {
          plVar9 = plVar8;
          plVar8 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      uVar2 = *(ushort *)(plVar9 + 4);
      uVar3 = *param_4;
      uVar4 = (uint)uVar3 - (uint)uVar2;
      uVar6 = (uint)uVar3;
      if (uVar4 == 0x8000) {
        if (uVar6 <= uVar2) {
LAB_005dd7fc:
          plVar9 = (long *)*plVar1;
          param_3 = plVar1;
joined_r0x005dd800:
          param_2 = param_3;
          if (plVar9 != (long *)0x0) {
            do {
              param_2 = plVar9;
              uVar2 = *(ushort *)(param_2 + 4);
              uVar4 = uVar2 - uVar6;
              uVar7 = (uint)uVar2;
              if (uVar4 == 0x8000) {
                if (uVar6 < uVar7) goto LAB_005dd80c;
              }
              else if ((uVar2 != uVar6) && ((uVar4 >> 0xf & 1) == 0)) goto LAB_005dd80c;
              if (uVar6 - uVar7 == 0x8000) {
                if (uVar6 <= uVar7) break;
              }
              else if ((uVar6 == uVar7) || ((uVar6 - uVar7 >> 0xf & 1) != 0)) break;
              param_3 = param_2 + 1;
              plVar9 = (long *)*param_3;
              if ((long *)*param_3 == (long *)0x0) break;
            } while( true );
          }
          goto LAB_005dd97c;
        }
      }
      else if (((uint)uVar3 == (uint)uVar2) || ((uVar4 >> 0xf & 1) != 0)) goto LAB_005dd7fc;
    }
    param_3 = param_2;
    if (plVar11 != (long *)0x0) {
      param_2 = plVar9;
      param_3 = plVar9 + 1;
    }
    goto LAB_005dd97c;
  }
  uVar2 = *param_4;
  uVar3 = *(ushort *)(param_2 + 4);
  uVar4 = (uint)uVar3 - (uint)uVar2;
  uVar6 = (uint)uVar2;
  uVar7 = (uint)uVar3;
  if (uVar4 == 0x8000) {
    if (uVar6 < uVar7) goto LAB_005dd75c;
  }
  else if (((uint)uVar3 != (uint)uVar2) && ((uVar4 >> 0xf & 1) == 0)) goto LAB_005dd75c;
  if (uVar6 - uVar7 == 0x8000) {
    if (uVar7 < uVar6) {
LAB_005dd884:
      plVar11 = (long *)param_2[1];
      plVar9 = param_2;
      if (plVar11 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar5 = plVar9 != (long *)*plVar8;
          param_3 = param_2 + 1;
          plVar9 = plVar8;
        } while (bVar5);
      }
      else {
        do {
          param_2 = plVar11;
          param_3 = param_2;
          plVar8 = param_2;
          plVar11 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
      if (plVar8 != plVar1) {
        uVar2 = *(ushort *)(plVar8 + 4);
        uVar4 = uVar2 - uVar6;
        if (uVar4 == 0x8000) {
          if (uVar2 <= uVar6) {
LAB_005dd8f8:
            plVar9 = (long *)*plVar1;
            param_3 = plVar1;
joined_r0x005dd8fc:
            param_2 = param_3;
            if (plVar9 != (long *)0x0) {
              do {
                param_2 = plVar9;
                uVar2 = *(ushort *)(param_2 + 4);
                uVar4 = uVar2 - uVar6;
                uVar7 = (uint)uVar2;
                if (uVar4 == 0x8000) {
                  if (uVar6 < uVar7) goto LAB_005dd908;
                }
                else if ((uVar2 != uVar6) && ((uVar4 >> 0xf & 1) == 0)) goto LAB_005dd908;
                if (uVar6 - uVar7 == 0x8000) {
                  if (uVar6 <= uVar7) break;
                }
                else if ((uVar6 == uVar7) || ((uVar6 - uVar7 >> 0xf & 1) != 0)) break;
                param_3 = param_2 + 1;
                plVar9 = (long *)*param_3;
                if ((long *)*param_3 == (long *)0x0) break;
              } while( true );
            }
          }
        }
        else if ((uVar2 == uVar6) || ((uVar4 >> 0xf & 1) != 0)) goto LAB_005dd8f8;
      }
      goto LAB_005dd97c;
    }
  }
  else if ((uVar6 != uVar7) && ((uVar6 - uVar7 >> 0xf & 1) == 0)) goto LAB_005dd884;
  *param_3 = (long)param_2;
LAB_005dd97c:
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = param_2;
  return auVar12;
LAB_005dd80c:
  plVar9 = (long *)*param_2;
  param_3 = param_2;
  goto joined_r0x005dd800;
LAB_005dd908:
  plVar9 = (long *)*param_2;
  param_3 = param_2;
  goto joined_r0x005dd8fc;
}


// ===== 005dd988  FUN_005dd988 =====

void FUN_005dd988(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_3cd0 [32];
  ulong local_3cb0;
  ulong uStack_3ca8;
  ulong uStack_3ca0;
  ulong uStack_3c98;
  ulong local_3c90;
  ulong uStack_3c88;
  undefined1 *local_3c80;
  ulong uStack_3c78;
  ulong local_3c70;
  ulong uStack_3c68;
  ulong uStack_3c60;
  ulong uStack_3c58;
  undefined1 auStack_3c50 [15360];
  
  memset(auStack_3c50,0xaa,0x3c00);
  uVar2 = *(ulong *)(param_4 + 0x28);
  uVar3 = *param_1;
  uVar4 = uVar2;
  if (uVar2 < *param_1) {
    uVar3 = param_1[1];
    uStack_3c68 = param_1[1];
    local_3c70 = *param_1;
    uStack_3c58 = param_1[3];
    uStack_3c60 = param_1[2];
    uVar4 = uVar3 * uVar2;
    puVar1 = (undefined1 *)0x0;
    if (uVar4 != 0) {
      puVar1 = auStack_3c50;
    }
    local_3c90 = uVar2;
    uStack_3c88 = uVar3;
    local_3c80 = puVar1;
    uStack_3c78 = uVar4;
    FUN_00929ff8(&local_3c70,&local_3c90);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = (ulong)puVar1;
    param_1[3] = uVar4;
    uVar4 = *(ulong *)(param_4 + 0x28);
    uVar3 = uVar2;
  }
  uStack_3ca8 = param_1[1];
  local_3cb0 = *param_1;
  uStack_3c98 = param_1[3];
  uStack_3ca0 = param_1[2];
  FUN_006591e8(auStack_3cd0,param_4,*(undefined8 *)(param_4 + 0x18),uVar3);
  FUN_005eddfc(param_3,&local_3cb0,auStack_3cd0);
  if ((*param_1 == 1) && (uVar4 == 2)) {
    FUN_0092a210(2,param_4);
  }
  return;
}


// ===== 005dda88  FUN_005dda88 =====

void FUN_005dda88(char *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *__src;
  undefined8 uVar4;
  size_t __n;
  char *__dest;
  char *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  uVar4 = FUN_006228b0(&local_460,"Call stats: ",0xc);
  uVar4 = FUN_00622a0c(uVar4,param_3);
  FUN_006228b0(uVar4,&DAT_001e49b3,3);
  uVar4 = FUN_006228b0(&local_460,"send_bw_bps: ",0xd);
  uVar4 = FUN_00622910(uVar4,*param_2);
  FUN_006228b0(uVar4,&DAT_001e1644,2);
  uVar4 = FUN_006228b0(&local_460,"recv_bw_bps: ",0xd);
  uVar4 = FUN_00622910(uVar4,param_2[2]);
  FUN_006228b0(uVar4,&DAT_001e1644,2);
  uVar4 = FUN_006228b0(&local_460,"max_pad_bps: ",0xd);
  uVar4 = FUN_00622910(uVar4,param_2[1]);
  FUN_006228b0(uVar4,&DAT_001e1644,2);
  uVar4 = FUN_006228b0(&local_460,"pacer_delay_ms: ",0x10);
  uVar4 = FUN_00622a0c(uVar4,*(undefined8 *)(param_2 + 4));
  FUN_006228b0(uVar4,&DAT_001e1644,2);
  uVar4 = FUN_006228b0(&local_460,"rtt_ms: ",8);
  FUN_00622a0c(uVar4,*(undefined8 *)(param_2 + 6));
  FUN_00622844(&local_460,0x7d);
  __src = local_460;
  if (local_460 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_460);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char *)operator_new(uVar2);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (__dest <= __dest + __n) {
      if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,__src,__n);
      __dest[__n] = '\0';
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 005ddce4  FUN_005ddce4 =====

void * FUN_005ddce4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  FUN_00842320(&local_d0);
  pvVar2 = operator_new(0x900);
  FUN_008bbd6c(pvVar2,&local_d0);
  if ((local_d0 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_d0 + 1), iVar1 == 1)) {
    (**(code **)(*local_d0 + 8))(local_d0);
  }
  pvVar3 = operator_new(0xa10);
  uStack_c0 = param_1[2];
  local_c8 = param_1[1];
  local_d0 = (long *)*param_1;
  uStack_b0 = param_1[4];
  local_b8 = param_1[3];
  local_a0 = *(undefined4 *)(param_1 + 6);
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  local_a8 = param_1[5];
  uStack_3f = *(undefined8 *)((long)param_1 + 0x91);
  local_98 = param_1[7];
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x89) >> 0x38);
  uStack_58 = param_1[0xf];
  local_60 = param_1[0xe];
  uStack_50 = param_1[0x10];
  local_80 = param_1[10];
  uStack_78 = param_1[0xb];
  uStack_48 = (undefined1)param_1[0x11];
  local_47 = (undefined7)((ulong)param_1[0x11] >> 8);
  uStack_68 = param_1[0xd];
  local_70 = param_1[0xc];
  *param_1 = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  FUN_005de66c(pvVar3,&local_d0,pvVar2);
  FUN_008423b8(&local_d0);
  return pvVar3;
}


// ===== 005ddde8  FUN_005ddde8 =====

/* WARNING: Removing unreachable block (ram,0x005de120) */

void FUN_005ddde8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *local_b8 [2];
  char cStack_a1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (*(char *)(param_1 + 0x168) == '\x01') {
    lVar1 = DAT_00d64060;
    if (DAT_00d64060 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.TimeReceivingAudioRtpPacketsInSeconds",0x31,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64060);
      if (lVar1 == 0) goto LAB_005ddf24;
    }
    if (((*(byte *)(param_1 + 0x178) & 1) == 0) || ((*(byte *)(param_1 + 0x168) & 1) == 0))
    goto LAB_005de408;
    lVar4 = *(long *)(param_1 + 0x170);
    uVar2 = 0x7fffffffffffffff;
    if (lVar4 == 0x7fffffffffffffff) {
LAB_005ddea4:
      uVar3 = uVar2 / 1000000;
      if (499999 < uVar2 % 1000000) {
        uVar3 = uVar3 + 1;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x160);
      uVar3 = 0x8000000000000000;
      if ((lVar5 == -0x8000000000000000) ||
         (((lVar4 != -0x8000000000000000 && (lVar5 != 0x7fffffffffffffff)) &&
          (uVar3 = lVar4 - lVar5, uVar2 = uVar3, -1 < (long)uVar3)))) goto LAB_005ddea4;
      uVar3 = -(-uVar3 / 1000000) - (ulong)(500000 < -uVar3 % 1000000);
    }
    FUN_00666568(lVar1,uVar3);
  }
LAB_005ddf24:
  if (*(char *)(param_1 + 0x188) == '\x01') {
    lVar1 = DAT_00d64068;
    if (DAT_00d64068 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.TimeReceivingVideoRtpPacketsInSeconds",0x31,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64068);
      if (lVar1 == 0) goto LAB_005de048;
    }
    if (((*(byte *)(param_1 + 0x198) & 1) == 0) || ((*(byte *)(param_1 + 0x188) & 1) == 0)) {
LAB_005de408:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    lVar4 = *(long *)(param_1 + 400);
    uVar2 = 0x7fffffffffffffff;
    if (lVar4 == 0x7fffffffffffffff) {
LAB_005ddfc8:
      uVar3 = uVar2 / 1000000;
      if (499999 < uVar2 % 1000000) {
        uVar3 = uVar3 + 1;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x180);
      uVar3 = 0x8000000000000000;
      if ((lVar5 == -0x8000000000000000) ||
         (((lVar4 != -0x8000000000000000 && (lVar5 != 0x7fffffffffffffff)) &&
          (uVar3 = lVar4 - lVar5, uVar2 = uVar3, -1 < (long)uVar3)))) goto LAB_005ddfc8;
      uVar3 = -(-uVar3 / 1000000) - (ulong)(500000 < -uVar3 % 1000000);
    }
    FUN_00666568(lVar1,uVar3);
  }
LAB_005de048:
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4404(&local_40,param_1 + 0xb0);
  if (5 < (long)local_40) {
    lVar1 = DAT_00d64070;
    if (DAT_00d64070 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.VideoBitrateReceivedInKbps",0x26,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64070);
      if (lVar1 != 0) goto LAB_005de0b8;
    }
    else {
LAB_005de0b8:
      FUN_00666568(lVar1,(long)((int)local_30 << 3) / 1000);
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_005f41b4(&local_60,&local_40,8);
      FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x1209,
                   "WebRTC.Call.VideoBitrateReceivedInBps, ",&local_60);
    }
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4404(&local_60,param_1 + 0x58);
  if (5 < (long)local_60) {
    lVar1 = DAT_00d64078;
    if (DAT_00d64078 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.AudioBitrateReceivedInKbps",0x26,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64078);
      if (lVar1 != 0) goto LAB_005de1a0;
    }
    else {
LAB_005de1a0:
      FUN_00666568(lVar1,(long)((int)local_50 << 3) / 1000);
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_005f41b4(&local_80,&local_60,8);
      FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x1249,
                   "WebRTC.Call.AudioBitrateReceivedInBps, ",&local_80);
      if (local_70._7_1_ < '\0') {
        operator_delete(local_80);
      }
    }
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4404(&local_80,param_1 + 0x108);
  if (5 < (long)local_80) {
    lVar1 = DAT_00d64080;
    if (DAT_00d64080 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.RtcpBitrateReceivedInBps",0x24,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64080);
      if (lVar1 != 0) goto LAB_005de288;
    }
    else {
LAB_005de288:
      FUN_00666568(lVar1,(int)local_70 << 3);
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_005f41b4(&local_a0,&local_80,8);
      FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x1289,
                   "WebRTC.Call.RtcpBitrateReceivedInBps, ",&local_a0);
      if (local_90._7_1_ < '\0') {
        operator_delete(local_a0);
      }
    }
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4404(&local_a0,param_1);
  if ((long)local_a0 < 6) goto LAB_005de3d4;
  lVar1 = DAT_00d64088;
  if (DAT_00d64088 == 0) {
    lVar1 = FUN_006660d0("WebRTC.Call.BitrateReceivedInKbps",0x21,1,100000,0x32);
    FUN_00d0f5e0(0,lVar1,&DAT_00d64088);
    if (lVar1 != 0) goto LAB_005de35c;
  }
  else {
LAB_005de35c:
    FUN_00666568(lVar1,(long)((int)local_90 << 3) / 1000);
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_005f41b4(local_b8,&local_a0,8);
    FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x12c9,"WebRTC.Call.BitrateReceivedInBps, ",
                 local_b8);
    if (cStack_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
  }
LAB_005de3d4:
  FUN_005f52e4(param_1 + 0x108);
  FUN_005f52e4(param_1 + 0xb0);
  FUN_005f52e4(param_1 + 0x58);
  FUN_005f52e4(param_1);
  return;
}


// ===== 005de41c  FUN_005de41c =====

void FUN_005de41c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *local_78 [2];
  char cStack_61;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (*(char *)(param_1 + 0x19) != '\x01') goto LAB_005de634;
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  if (((lVar1 != 0x7fffffffffffffff) && (lVar3 = param_1[0x18], lVar3 != -0x8000000000000000)) &&
     ((lVar1 == -0x8000000000000000 || ((lVar3 == 0x7fffffffffffffff || (lVar1 - lVar3 < 10000000)))
      ))) goto LAB_005de634;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4440(&local_40,param_1 + 1);
  if (5 < (long)local_40) {
    lVar1 = DAT_00d64090;
    if (DAT_00d64090 == 0) {
      lVar1 = FUN_006660d0("WebRTC.Call.EstimatedSendBitrateInKbps",0x26,1,100000,0x32);
      FUN_00d0f5e0(0,lVar1,&DAT_00d64090);
      if (lVar1 != 0) goto LAB_005de50c;
    }
    else {
LAB_005de50c:
      FUN_00666568(lVar1,(ulong)local_30 & 0xffffffff);
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_005f41a8(&local_60,&local_40);
      FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x13a9,
                   "WebRTC.Call.EstimatedSendBitrateInKbps, ",&local_60);
      if (local_50._7_1_ < '\0') {
        operator_delete(local_60);
      }
    }
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005f4440(&local_60,param_1 + 0xc);
  if ((long)local_60 < 6) goto LAB_005de634;
  lVar1 = DAT_00d64098;
  if (DAT_00d64098 == 0) {
    lVar1 = FUN_006660d0("WebRTC.Call.PacerBitrateInKbps",0x1e,1,100000,0x32);
    FUN_00d0f5e0(0,lVar1,&DAT_00d64098);
    if (lVar1 != 0) goto LAB_005de5d8;
  }
  else {
LAB_005de5d8:
    FUN_00666568(lVar1,(ulong)local_50 & 0xffffffff);
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_005f41a8(local_78,&local_60);
    FUN_00623bb0(&DAT_001f4e90,"../../call/call.cc",0x13e9,"WebRTC.Call.PacerBitrateInKbps, ",
                 local_78);
    if (cStack_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
LAB_005de634:
  FUN_005f52e4(param_1 + 0xc);
  FUN_005f52e4(param_1 + 1);
  return;
}


// ===== 005de66c  FUN_005de66c =====

void FUN_005de66c(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  undefined1 uStack_d1;
  undefined8 *local_d0 [2];
  code *local_c0;
  code *pcStack_b8;
  void *local_b0;
  undefined8 *local_a8 [2];
  code *local_98;
  undefined **local_90;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d260e8;
  param_1[1] = &PTR_FUN_00d26210;
  param_1[3] = &PTR_FUN_00d26270;
  param_1[2] = &PTR_FUN_00d26240;
  lVar6 = *param_2;
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar6 = param_2[3];
  lVar10 = param_2[2];
  lVar8 = param_2[1];
  param_1[8] = param_2[4];
  param_1[7] = lVar6;
  param_1[6] = lVar10;
  param_1[5] = lVar8;
  lVar6 = FUN_005d6490();
  if (lVar6 == 0) {
    FUN_007e03ac();
    lVar6 = FUN_007e0878();
  }
  param_1[9] = lVar6;
  lVar8 = lVar6;
  if (param_2[0xe] != 0) {
    lVar8 = param_2[0xe];
  }
  param_1[10] = lVar8;
  lVar8 = param_2[0xf];
  if (lVar8 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar9 = param_1[6];
    pvVar5 = operator_new(0x48);
    FUN_0094c3ac(pvVar5,uVar9,lVar8,lVar6);
  }
  param_1[0xb] = pvVar5;
  uVar3 = FUN_006534e8();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  pvVar5 = operator_new(0x88);
  FUN_005f1328(pvVar5,param_1[6],param_1[9]);
  param_1[0xd] = pvVar5;
  pvVar5 = operator_new(0x78);
  uVar9 = FUN_008ba324(param_1[5]);
  FUN_008b86a0(pvVar5,param_1 + 3,uVar9);
  param_1[0xe] = pvVar5;
  lVar6 = *param_2;
  *param_2 = 0;
  param_1[0xf] = lVar6;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar10 = param_2[1];
  param_1[0x11] = param_2[2];
  param_1[0x10] = lVar10;
  param_1[0x13] = lVar8;
  param_1[0x12] = lVar6;
  lVar6 = param_2[5];
  *(int *)(param_1 + 0x15) = (int)param_2[6];
  param_1[0x14] = lVar6;
  lVar6 = param_2[7];
  param_2[7] = 0;
  param_1[0x16] = lVar6;
  lVar8 = param_2[9];
  lVar6 = param_2[8];
  param_1[0x19] = param_2[10];
  param_1[0x18] = lVar8;
  param_1[0x17] = lVar6;
  lVar6 = param_2[0xb];
  param_2[0xb] = 0;
  param_1[0x1a] = lVar6;
  lVar8 = param_2[0xd];
  lVar6 = param_2[0xc];
  lVar11 = param_2[0xf];
  lVar10 = param_2[0xe];
  uVar12 = *(undefined8 *)((long)param_2 + 0x91);
  uVar9 = *(undefined8 *)((long)param_2 + 0x89);
  lVar14 = param_2[0x11];
  lVar13 = param_2[0x10];
  param_1[0x23] = 0x100000001;
  *(undefined8 *)((long)param_1 + 0x109) = uVar12;
  *(undefined8 *)((long)param_1 + 0x101) = uVar9;
  param_1[0x20] = lVar14;
  param_1[0x1f] = lVar13;
  param_1[0x1e] = lVar11;
  param_1[0x1d] = lVar10;
  param_1[0x1c] = lVar8;
  param_1[0x1b] = lVar6;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_0094a080(param_1 + 0x25,20000);
  param_1[0x2a] = param_1 + 0x2b;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = param_1 + 0x2e;
  FUN_00898b30(param_1 + 0x30);
  FUN_00898b30(param_1 + 0x4d);
  uVar9 = param_1[6];
  param_1[0x6a] = param_1 + 0x6b;
  param_1[0x74] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = param_1 + 0x6e;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = param_1 + 0x71;
  *(undefined1 *)(param_1 + 0x73) = 1;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = param_1 + 0x78;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = param_1 + 0x7b;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7d] = param_1 + 0x7e;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  FUN_005f4dd0(param_1 + 0x80,uVar9,0,0);
  FUN_005f4dd0(param_1 + 0x8b,uVar9,0,0);
  FUN_005f4dd0(param_1 + 0x96,uVar9,0,0);
  FUN_005f4dd0(param_1 + 0xa1,uVar9,0,0);
  uVar9 = param_1[6];
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = uVar9;
  FUN_005f4b60(param_1 + 0xb5,uVar9,0,1);
  FUN_005f4b60(param_1 + 0xc0,uVar9,0,1);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  uVar9 = (**(code **)(*param_3 + 0x10))(param_3);
  local_78 = FUN_005e2f1c;
  local_70 = &PTR_FUN_00d26288;
  local_88[0] = (undefined8 *)operator_new(0x18);
  local_88[0][1] = 0;
  local_88[0][2] = uVar9;
  *local_88[0] = FUN_008e7b48;
  uVar9 = (**(code **)(*param_3 + 0x10))(param_3);
  local_98 = FUN_005e3054;
  local_90 = &PTR_FUN_00d262a8;
  local_a8[0] = (undefined8 *)operator_new(0x18);
  puVar2 = PTR_FUN_00d51f88;
  local_a8[0][1] = 0;
  local_a8[0][2] = uVar9;
  *local_a8[0] = puVar2;
  FUN_0092cbd4(param_1 + 0xcf,param_1 + 4,local_88,local_a8);
  if ((code *)local_90[1] != (code *)0x0) {
    (*(code *)local_90[1])(local_a8[0]);
  }
  if ((code *)local_70[1] != (code *)0x0) {
    (*(code *)local_70[1])(local_88[0]);
  }
  param_1[0x132] = 0;
  param_1[0x131] = 0;
  uVar9 = FUN_005ed8e4(param_1[5]);
  param_1[0x133] = uVar9;
  pvVar5 = operator_new(0x70);
  FUN_005f369c(pvVar5,param_1[6]);
  param_1[0x134] = pvVar5;
  uVar9 = (**(code **)(*(long *)param_1[6] + 0x10))();
  param_1[0x135] = uVar9;
  FUN_007ebca0(param_1 + 0x136);
  param_1[0x137] = param_3;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  param_1[0x141] = param_3;
  FUN_0090c6b0();
  FUN_005f1a28(param_1[0xd],param_1 + 0xcf);
  local_c0 = FUN_004473ec;
  pcStack_b8 = FUN_005e354c;
  local_d0[0] = param_1 + 0xcf;
  FUN_00841754(&local_b0,param_1[9],local_d0,0,param_1[6],&uStack_d1);
  pvVar5 = local_b0;
  pvVar7 = (void *)param_1[0x131];
  local_b0 = (void *)0x0;
  param_1[0x131] = pvVar5;
  if (pvVar7 != (void *)0x0) {
    iVar4 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar4 == 1) {
      operator_delete(pvVar7);
    }
    pvVar5 = local_b0;
    if ((local_b0 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_b0), iVar4 == 1)) {
      operator_delete(pvVar5);
    }
  }
  (*local_c0)(0,local_d0,local_d0);
  lVar6 = FUN_008ba324(param_1[5]);
  if (lVar6 != 0) {
    local_f0 = FUN_004473ec;
    pcStack_e8 = FUN_005e3558;
    local_100[0] = param_1;
    FUN_00841754(&local_b0,param_1[9],local_100,0,param_1[6],&uStack_d1);
    pvVar5 = local_b0;
    pvVar7 = (void *)param_1[0x132];
    local_b0 = (void *)0x0;
    param_1[0x132] = pvVar5;
    if (pvVar7 != (void *)0x0) {
      iVar4 = FUN_00d0f7a0(0xffffffff,pvVar7);
      if (iVar4 == 1) {
        operator_delete(pvVar7);
      }
      pvVar5 = local_b0;
      if ((local_b0 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_b0), iVar4 == 1)) {
        operator_delete(pvVar5);
      }
    }
    (*local_f0)(0,local_100,local_100);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005dec30  FUN_005dec30 =====

void FUN_005dec30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 extraout_w1;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  long local_38;
  
  if (*(long *)(param_1 + 0x360) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/call.cc",0x2e8,"audio_send_ssrcs_.empty()",&DAT_001f5fa0);
  }
  if (*(long *)(param_1 + 0x378) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/call.cc",0x2e9,"video_send_ssrcs_.empty()",&DAT_001f5fa0);
  }
  if (*(long *)(param_1 + 0x390) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/call.cc",0x2ea,"video_send_streams_.empty()",&DAT_001f5fa0);
  }
  if (*(long *)(param_1 + 0x160) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/call.cc",0x2eb,"audio_receive_streams_.empty()",&DAT_001f5fa0);
  }
  if (*(long *)(param_1 + 0x178) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/call.cc",0x2ec,"video_receive_streams_.empty()",&DAT_001f5fa0);
  }
  FUN_00841cf8(param_1 + 0x988);
  FUN_00841cf8(param_1 + 0x990);
  FUN_005f1ad4(*(undefined8 *)(param_1 + 0x68),param_1 + 0x678);
  uVar2 = (**(code **)(**(long **)(param_1 + 0xa08) + 0x98))();
  *(undefined8 *)(param_1 + 0x660) = uVar2;
  *(undefined1 *)(param_1 + 0x668) = extraout_w1;
  lVar3 = DAT_00d640a0;
  if (DAT_00d640a0 == 0) {
    lVar3 = FUN_006660d0("WebRTC.Call.LifetimeInSeconds",0x1d,1,100000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00d640a0);
    if (lVar3 == 0) goto LAB_005dedc8;
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  uVar7 = 0x7fffffffffffffff;
  if (lVar4 == 0x7fffffffffffffff) {
LAB_005ded48:
    uVar6 = uVar7 / 1000000;
    if (499999 < uVar7 % 1000000) {
      uVar6 = uVar6 + 1;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x9a8);
    uVar6 = 0x8000000000000000;
    if ((lVar8 == -0x8000000000000000) ||
       (((lVar4 != -0x8000000000000000 && (lVar8 != 0x7fffffffffffffff)) &&
        (uVar6 = lVar4 - lVar8, uVar7 = uVar6, -1 < (long)uVar6)))) goto LAB_005ded48;
    uVar6 = -(-uVar6 / 1000000) - (ulong)(500000 < -uVar6 % 1000000);
  }
  FUN_00666568(lVar3,uVar6);
LAB_005dedc8:
  plVar5 = *(long **)(param_1 + 0xa08);
  *(undefined8 *)(param_1 + 0xa08) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(char *)(param_1 + 0xa00) == '\x01') {
    FUN_007b643c(param_1 + 0x9d8);
  }
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x9b0));
  pvVar9 = *(void **)(param_1 + 0x9b0);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x9a0);
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_005f3710(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x998);
  *(undefined8 *)(param_1 + 0x998) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_005ed8a4((long)pvVar9 + 0x38);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x990);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x988);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  FUN_005df0ec(param_1 + 0x678);
  FUN_005de41c(param_1 + 0x5a0);
  FUN_005ddde8(param_1 + 0x400);
  local_38 = param_1 + 1000;
  FUN_005e34d8(&local_38,*(undefined8 *)(param_1 + 0x3f0));
  local_38 = param_1 + 0x3d0;
  FUN_005e3464(&local_38,*(undefined8 *)(param_1 + 0x3d8));
  local_38 = param_1 + 0x3b8;
  FUN_005e3464(&local_38,*(undefined8 *)(param_1 + 0x3c0));
  if (*(long *)(param_1 + 0x3a0) != 0) {
    FUN_005e2490(param_1 + 0x3a0);
    operator_delete(*(void **)(param_1 + 0x3a0));
  }
  local_38 = param_1 + 0x380;
  FUN_005e3360(&local_38,*(undefined8 *)(param_1 + 0x388));
  local_38 = param_1 + 0x368;
  FUN_005e32ec(&local_38,*(undefined8 *)(param_1 + 0x370));
  local_38 = param_1 + 0x350;
  FUN_005e3278(&local_38,*(undefined8 *)(param_1 + 0x358));
  FUN_00898b54(param_1 + 0x268);
  FUN_00898b54(param_1 + 0x180);
  local_38 = param_1 + 0x168;
  FUN_005e3204(&local_38,*(undefined8 *)(param_1 + 0x170));
  local_38 = param_1 + 0x150;
  FUN_005e3190(&local_38,*(undefined8 *)(param_1 + 0x158));
  FUN_0094a098(param_1 + 0x128);
  FUN_008423b8(param_1 + 0x78);
  plVar5 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  pvVar9 = *(void **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_005f1380(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_0094c3ec(pvVar9);
    operator_delete(pvVar9);
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if ((plVar5 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), iVar1 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return;
}


// ===== 005df0ec  FUN_005df0ec =====

ulong FUN_005df0ec(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *local_28;
  
  puVar1 = PTR_DAT_00d51f90;
  plVar4 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x5b));
  local_28 = param_1 + 0x53;
  param_1[0x2b] = (long)(PTR_DAT_00d51f98 + 0x10);
  FUN_005e239c(&local_28,param_1[0x54]);
  FUN_006634ac(param_1 + 0x48);
  FUN_006634ac(param_1 + 0x3f);
  FUN_006634ac(param_1 + 0x36);
  if (*(code **)(param_1[0x35] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x35] + 8))(param_1[0x32]);
  }
  plVar4 = (long *)param_1[0x2c];
  if ((plVar4 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar2 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  FUN_00932f14(param_1 + 0x15);
  param_1[6] = (long)(PTR_DAT_00d51fa0 + 0x10);
  uVar3 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
  uVar5 = (ulong)uVar3;
  if (*(code **)(param_1[10] + 8) != (code *)0x0) {
    uVar5 = (**(code **)(param_1[10] + 8))(param_1[7]);
  }
  plVar4 = (long *)param_1[1];
  if ((plVar4 != (long *)0x0) && (uVar5 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), (int)uVar5 == 1)) {
    uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  }
  return uVar5;
}


// ===== 005df224  FUN_005df224 =====

void FUN_005df224(long param_1)

{
  FUN_005dec30(param_1 + -8);
  return;
}


// ===== 005df230  FUN_005df230 =====

void FUN_005df230(long param_1)

{
  FUN_005dec30(param_1 + -0x10);
  return;
}


// ===== 005df23c  FUN_005df23c =====

void FUN_005df23c(long param_1)

{
  FUN_005dec30(param_1 + -0x18);
  return;
}


// ===== 005df248  FUN_005df248 =====

void FUN_005df248(void *param_1)

{
  FUN_005dec30();
  operator_delete(param_1);
  return;
}


// ===== 005df278  FUN_005df278 =====

void FUN_005df278(long param_1)

{
  FUN_005dec30((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005df2ac  FUN_005df2ac =====

void FUN_005df2ac(long param_1)

{
  FUN_005dec30((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 005df2e0  FUN_005df2e0 =====

void FUN_005df2e0(long param_1)

{
  FUN_005dec30((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 005df314  FUN_005df314 =====

void FUN_005df314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005df324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa08) + 0xc0))();
  return;
}


// ===== 005df328  FUN_005df328 =====

undefined8 FUN_005df328(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa08);
}


// ===== 005df334  FUN_005df334 =====

long FUN_005df334(long param_1)

{
  return param_1 + 8;
}


// ===== 005df340  FUN_005df340 =====

void * FUN_005df340(long param_1,uint *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  char **local_60;
  char *local_58;
  char *pcStack_50;
  undefined1 uStack_41;
  uint *local_28;
  
  if (((DAT_00d640b0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d640b0), iVar1 != 0)) {
    DAT_00d640a8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d640b0);
  }
  local_60 = (char **)0x0;
  pcStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640a8 != '\0') {
    FUN_0066d348(0x42,DAT_00d640a8,"Call::CreateAudioSendStream",0,0,0,0,0,0);
    local_58 = DAT_00d640a8;
    pcStack_50 = "Call::CreateAudioSendStream";
    local_60 = &local_58;
  }
  if ((*(byte *)(param_1 + 0x9c0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x9c0) = 1;
    FUN_005f1618(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(**(long **)(param_1 + 0xa08) + 0x70))(*(long **)(param_1 + 0xa08),param_1 + 0x10);
    (**(code **)(**(long **)(param_1 + 0xa08) + 0xe0))();
  }
  plVar4 = *(long **)(param_1 + 0x3c0);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = -0x5555555555555600;
  uStack_68 = 0xaaaaaaaaaaaaaa00;
  if (plVar4 != (long *)0x0) {
    do {
      while (*(uint *)(plVar4 + 4) <= *param_2) {
        if (*param_2 == *(uint *)(plVar4 + 4)) {
          if (plVar4 != (long *)(param_1 + 0x3c0)) {
            local_70 = (undefined1 *)plVar4[9];
            puStack_78 = (undefined1 *)plVar4[8];
            puStack_80 = (undefined1 *)plVar4[7];
            puStack_88 = (undefined1 *)plVar4[6];
            local_90 = plVar4[5];
            uStack_68 = 0xaaaaaaaaaaaaaa01;
          }
          goto LAB_005df47c;
        }
        plVar4 = (long *)plVar4[1];
        if (plVar4 == (long *)0x0) goto LAB_005df47c;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_005df47c:
  pvVar2 = operator_new(0x358);
  FUN_005e41dc(pvVar2,param_1 + 0x20,param_2,param_1 + 0xb0,*(undefined8 *)(param_1 + 0xa08),
               *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),&local_90);
  local_28 = param_2;
  lVar3 = FUN_005e35a0(0,param_1 + 0x350,param_1 + 0x350,&DAT_001f94c3,&local_28,&uStack_41);
  *(void **)(lVar3 + 0x28) = pvVar2;
  FUN_005df55c(param_1);
  if ((local_60 != (char **)0x0) && (**local_60 != '\0')) {
    FUN_0066d348(0x45,*local_60,local_60[1],0,0,0,0,0,0);
  }
  return pvVar2;
}


// ===== 005df55c  FUN_005df55c =====

void FUN_005df55c(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  
  if (*(long *)(param_1 + 0x360) == 0) {
    bVar1 = *(long *)(param_1 + 0x160) != 0;
    bVar2 = bVar1;
    if (*(long *)(param_1 + 0x378) == 0) goto LAB_005df59c;
LAB_005df5a4:
    bVar2 = *(int *)(param_1 + 0x11c) == 0;
    if ((*(int *)(param_1 + 0x11c) != 0) && (bVar1)) {
LAB_005df5bc:
      bVar2 = *(int *)(param_1 + 0x118) == 0;
    }
  }
  else {
    bVar1 = true;
    bVar2 = true;
    if (*(long *)(param_1 + 0x378) != 0) goto LAB_005df5a4;
LAB_005df59c:
    bVar1 = bVar2;
    if (*(long *)(param_1 + 0x178) != 0) goto LAB_005df5a4;
    if (bVar1) goto LAB_005df5bc;
    bVar2 = false;
  }
  if ((bool)*(char *)(param_1 + 0x120) == bVar2) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) != 0) goto LAB_005df654;
    puVar6 = &UNK_001c2440;
    if (bVar2 == false) {
      puVar6 = &UNK_001a62af;
    }
    pcVar5 = "UpdateAggregateNetworkState: aggregate_state remains at ";
    uVar4 = 0x25f0;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) != 0) goto LAB_005df654;
    puVar6 = &UNK_001c2440;
    if (bVar2 == false) {
      puVar6 = &UNK_001a62af;
    }
    pcVar5 = "UpdateAggregateNetworkState: aggregate_state change to ";
    uVar4 = 0x25d1;
  }
  FUN_00623bb0(&DAT_001f4ed3,"../../call/call.cc",uVar4,pcVar5,puVar6);
LAB_005df654:
  *(bool *)(param_1 + 0x120) = bVar2;
                    /* WARNING: Could not recover jumptable at 0x005df674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa08) + 0x80))(*(long **)(param_1 + 0xa08),bVar2);
  return;
}


// ===== 005df684  FUN_005df684 =====

void FUN_005df684(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  uint local_64;
  char **local_60;
  char *local_58;
  char *pcStack_50;
  undefined1 uStack_41;
  uint *local_28;
  
  if (((DAT_00d640c0 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d640c0), iVar3 != 0)) {
    DAT_00d640b8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d640c0);
  }
  local_60 = (char **)0x0;
  pcStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640b8 != '\0') {
    FUN_0066d348(0x42,DAT_00d640b8,"Call::DestroyAudioSendStream",0,0,0,0,0,0);
    local_58 = DAT_00d640b8;
    pcStack_50 = "Call::DestroyAudioSendStream";
    local_60 = &local_58;
  }
  (**(code **)(*param_2 + 0x30))(param_2);
  puVar4 = (uint *)(**(code **)(*param_2 + 0x18))(param_2);
  local_64 = *puVar4;
  FUN_005e6bdc(&local_90,param_2);
  local_28 = &local_64;
  lVar5 = FUN_005e36a8(0,param_1 + 0x3b8,param_1 + 0x3b8,&DAT_001f94c3,&local_28,&uStack_41);
  *(undefined1 *)(lVar5 + 0x48) = local_70;
  *(undefined8 *)(lVar5 + 0x40) = uStack_78;
  *(undefined8 *)(lVar5 + 0x38) = uStack_80;
  *(undefined8 *)(lVar5 + 0x30) = uStack_88;
  *(undefined8 *)(lVar5 + 0x28) = local_90;
  plVar6 = *(long **)(param_1 + 0x358);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6;
    do {
      while (local_64 < *(uint *)(plVar9 + 4)) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_005df830;
      }
      if (local_64 == *(uint *)(plVar9 + 4)) {
        if (plVar9 != (long *)(param_1 + 0x358)) {
          plVar7 = plVar9;
          plVar1 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar7[2];
              bVar2 = plVar7 != (long *)*plVar8;
              plVar7 = plVar8;
            } while (bVar2);
          }
          else {
            do {
              plVar8 = plVar1;
              plVar1 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x350) == plVar9) {
            *(long **)(param_1 + 0x350) = plVar8;
          }
          *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x360) + -1;
          FUN_005d5d48(plVar6,plVar9);
          if (plVar9 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          operator_delete(plVar9);
        }
        break;
      }
      plVar9 = (long *)plVar9[1];
    } while (plVar9 != (long *)0x0);
  }
LAB_005df830:
  FUN_005df55c(param_1);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if ((local_60 != (char **)0x0) && (**local_60 != '\0')) {
    FUN_0066d348(0x45,*local_60,local_60[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005df8e4  FUN_005df8e4 =====

void * FUN_005df8e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 uVar6;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  void *local_28;
  
  if (((DAT_00d640d0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d640d0), iVar2 != 0)) {
    DAT_00d640c8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d640d0);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640c8 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d640c8,"Call::CreateAudioReceiveStream",0,0,0,0,0,0);
    local_50 = DAT_00d640c8;
    pcStack_48 = "Call::CreateAudioReceiveStream";
  }
  if ((*(byte *)(param_1 + 0x9c0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x9c0) = 1;
    FUN_005f1618(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(**(long **)(param_1 + 0xa08) + 0x70))(*(long **)(param_1 + 0xa08),param_1 + 0x10);
    (**(code **)(**(long **)(param_1 + 0xa08) + 0xe0))();
  }
  plVar5 = *(long **)(param_1 + 0x40);
  puVar3 = (undefined8 *)operator_new(0x68);
  FUN_006cd4d4();
  uVar6 = NEON_rev64(*param_2,4);
  *puVar3 = uVar6;
  pvVar4 = operator_new(0x18);
  FUN_006cd300(pvVar4,puVar3);
  (**(code **)(*plVar5 + 0x28))(plVar5,pvVar4);
  pvVar4 = operator_new(0x110);
  uVar6 = (**(code **)(**(long **)(param_1 + 0xa08) + 0x10))(*(long **)(param_1 + 0xa08));
  FUN_005d360c(pvVar4,param_1 + 0x20,uVar6,*(undefined8 *)(param_1 + 0xe0),param_2,param_1 + 0xb0);
  local_28 = pvVar4;
  FUN_005e37c0(0,param_1 + 0x150,param_1 + 0x150,&local_28);
  FUN_005d3b30(local_28,param_1 + 0x180);
  uVar1 = param_2[8];
  puVar3 = (undefined8 *)param_2[7];
  if (-1 < (char)*(byte *)((long)param_2 + 0x4f)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x4f);
    puVar3 = param_2 + 7;
  }
  FUN_005dfb10(param_1,puVar3,uVar1);
  FUN_005df55c(param_1);
  pvVar4 = local_28;
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return pvVar4;
}


// ===== 005dfb10  FUN_005dfb10 =====

void FUN_005dfb10(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if (param_3 != 0) {
    plVar11 = *(long **)(param_1 + 0x150);
    while (plVar11 != (long *)(param_1 + 0x158)) {
      lVar9 = plVar11[4];
      puVar8 = (undefined8 *)FUN_005d45c0(lVar9);
      bVar4 = *(byte *)((long)puVar8 + 0x17);
      sVar1 = puVar8[1];
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (param_3 == sVar1) {
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < (char)bVar4) {
          puVar2 = puVar8;
        }
        iVar7 = memcmp(param_2,puVar2,param_3);
        if (iVar7 == 0) goto LAB_005dfbc4;
      }
      plVar5 = (long *)plVar11[1];
      plVar12 = plVar11;
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar12[2];
          bVar6 = plVar12 != (long *)*plVar11;
          plVar12 = plVar11;
        } while (bVar6);
      }
      else {
        do {
          plVar11 = plVar5;
          plVar5 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
    }
  }
  lVar9 = 0;
LAB_005dfbc4:
  if (*(long **)(param_1 + 0x168) != (long *)(param_1 + 0x170)) {
    lVar13 = 0;
    plVar11 = *(long **)(param_1 + 0x168);
    do {
      lVar10 = plVar11[4];
      puVar8 = (undefined8 *)FUN_005f6990(lVar10);
      bVar4 = *(byte *)((long)puVar8 + 0x17);
      sVar1 = puVar8[1];
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (param_3 == sVar1) {
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < (char)bVar4) {
          puVar2 = puVar8;
        }
        iVar7 = memcmp(param_2,puVar2,param_3);
        if (iVar7 != 0) goto LAB_005dfc2c;
        bVar6 = lVar13 != 0;
        lVar13 = lVar13 + 1;
        lVar3 = lVar9 + 0x10;
        if (lVar9 == 0 || bVar6) {
          lVar3 = 0;
        }
        FUN_005f69b4(lVar10,lVar3);
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_005dfc64;
LAB_005dfc34:
        do {
          plVar12 = plVar5;
          plVar5 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      else {
LAB_005dfc2c:
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] != (long *)0x0) goto LAB_005dfc34;
LAB_005dfc64:
        do {
          plVar12 = (long *)plVar11[2];
          bVar6 = plVar11 != (long *)*plVar12;
          plVar11 = plVar12;
        } while (bVar6);
      }
      plVar11 = plVar12;
    } while (plVar12 != (long *)(param_1 + 0x170));
  }
  return;
}


// ===== 005dfc98  FUN_005dfc98 =====

void FUN_005dfc98(long param_1,void *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d640e0 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d640e0), iVar5 != 0)) {
    DAT_00d640d8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d640e0);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640d8 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d640d8,"Call::DestroyAudioReceiveStream",0,0,0,0,0,0);
    local_50 = DAT_00d640d8;
    pcStack_48 = "Call::DestroyAudioReceiveStream";
  }
  FUN_005d3b98(param_2);
  FUN_0092ca28(param_1 + 0x678,*(undefined4 *)((long)param_2 + 0x40));
  plVar6 = *(long **)(param_1 + 0x158);
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6;
    do {
      while ((void *)plVar10[4] <= param_2) {
        if (param_2 <= (void *)plVar10[4]) {
          if (plVar10 != (long *)(param_1 + 0x158)) {
            plVar8 = plVar10;
            plVar3 = (long *)plVar10[1];
            if ((long *)plVar10[1] == (long *)0x0) {
              do {
                plVar9 = (long *)plVar8[2];
                bVar4 = plVar8 != (long *)*plVar9;
                plVar8 = plVar9;
              } while (bVar4);
            }
            else {
              do {
                plVar9 = plVar3;
                plVar3 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x150) == plVar10) {
              *(long **)(param_1 + 0x150) = plVar9;
            }
            *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
            FUN_005d5d48(plVar6,plVar10);
            if (plVar10 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            operator_delete(plVar10);
          }
          goto LAB_005dfde8;
        }
        plVar10 = (long *)plVar10[1];
        if (plVar10 == (long *)0x0) goto LAB_005dfde8;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
LAB_005dfde8:
  puVar7 = (undefined8 *)FUN_005d45c0(param_2);
  uVar1 = puVar7[1];
  puVar2 = (undefined8 *)*puVar7;
  if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar7 + 0x17);
    puVar2 = puVar7;
  }
  FUN_005dfb10(param_1,puVar2,uVar1);
  FUN_005df55c(param_1);
  if (param_2 != (void *)0x0) {
    FUN_005d38c0(param_2);
    operator_delete(param_2);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005dfec8  FUN_005dfec8 =====

void * FUN_005dfec8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  long lVar10;
  undefined4 *__dest;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 *puVar20;
  ulong in_stack_fffffffffffffc80;
  undefined1 *puVar22;
  undefined4 local_31c;
  undefined1 auStack_318 [424];
  void *local_170;
  char **local_168;
  char *local_160;
  char *pcStack_158;
  undefined1 uStack_149;
  undefined4 *local_148;
  undefined1 auStack_140 [208];
  long local_70;
  undefined4 *puVar21;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (((DAT_00d640f0 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00d640f0), iVar7 != 0)) {
    DAT_00d640e8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d640f0);
  }
  local_168 = (char **)0x0;
  pcStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640e8 != '\0') {
    FUN_0066d348(0x42,DAT_00d640e8,"Call::CreateVideoSendStream",0,0,0,0,0,
                 in_stack_fffffffffffffc80 & 0xffffffffffffff00);
    local_160 = DAT_00d640e8;
    pcStack_158 = "Call::CreateVideoSendStream";
    local_168 = &local_160;
  }
  if ((*(byte *)(param_1 + 0x9c0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x9c0) = 1;
    FUN_005f1618(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(**(long **)(param_1 + 0xa08) + 0x70))(*(long **)(param_1 + 0xa08),param_1 + 0x10);
    (**(code **)(**(long **)(param_1 + 0xa08) + 0xe0))();
  }
  FUN_005f3964(*(undefined8 *)(param_1 + 0x9a0),param_2);
  if (param_2[1] != *param_2) {
    uVar15 = 0;
    do {
      plVar18 = *(long **)(param_1 + 0x40);
      puVar8 = (undefined4 *)operator_new(0x68);
      FUN_006cd4d4();
      if ((ulong)(param_2[1] - *param_2 >> 2) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      lVar10 = param_2[0x1d];
      lVar11 = param_2[0x1e];
      *puVar8 = *(undefined4 *)(*param_2 + uVar15 * 4);
      if (uVar15 < (ulong)(lVar11 - lVar10 >> 2)) {
        puVar8[2] = *(undefined4 *)(lVar10 + uVar15 * 4);
      }
      puVar8[0x12] = (int)param_2[9];
      if ((long *)(puVar8 + 0xc) != param_2 + 0xc) {
        FUN_005e2544(puVar8 + 0xc,param_2[0xc],param_2[0xd],param_2[0xd] - param_2[0xc] >> 5);
      }
      uVar19 = *(ulong *)(puVar8 + 0x16);
      if (uVar19 < *(ulong *)(puVar8 + 0x18)) {
        if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar1 = param_2[0x10];
        plVar6 = (long *)param_2[0xf];
        if (-1 < (char)*(byte *)((long)param_2 + 0x8f)) {
          uVar1 = (ulong)*(byte *)((long)param_2 + 0x8f);
          plVar6 = param_2 + 0xf;
        }
        FUN_006cd614(uVar19,plVar6,uVar1,(int)param_2[0x12],(int)param_2[0x20]);
        lVar10 = uVar19 + 0x20;
      }
      else {
        lVar10 = FUN_005e28bc(puVar8 + 0x14,param_2 + 0xf,param_2 + 0x12,param_2 + 0x20);
      }
      *(long *)(puVar8 + 0x16) = lVar10;
      pvVar9 = operator_new(0x18);
      FUN_0092c908(pvVar9,puVar8);
      (**(code **)(*plVar18 + 0x28))(plVar18,pvVar9);
      pvVar9 = (void *)*param_2;
      uVar15 = uVar15 + 1;
      uVar19 = param_2[1] - (long)pvVar9;
    } while (uVar15 < (ulong)((long)uVar19 >> 2));
    if ((void *)param_2[1] != pvVar9) {
      if ((long)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = (undefined4 *)operator_new(uVar19);
      puVar8 = (undefined4 *)((long)__dest + uVar19);
      memcpy(__dest,pvVar9,uVar19);
      goto LAB_005e0110;
    }
  }
  __dest = (undefined4 *)0x0;
  puVar8 = (undefined4 *)0x0;
LAB_005e0110:
  pvVar9 = operator_new(0x8e0);
  uVar13 = *(undefined8 *)(param_1 + 0xa08);
  uVar12 = *(undefined8 *)(param_1 + 0xf8);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x9a0);
  FUN_00848970(auStack_318,param_2);
  FUN_008495b4(auStack_140,param_3);
  puVar22 = auStack_318;
  FUN_0060d7f4(pvVar9,param_1 + 0x20,uVar4,uVar2,uVar13,uVar12,uVar3,uVar16,puVar22,auStack_140,
               param_1 + 0x3d0,param_1 + 1000,param_4,0);
  FUN_0084966c(auStack_140);
  FUN_00848a78(auStack_318);
  lVar10 = (long)__dest - (long)puVar8;
  local_170 = pvVar9;
  if (lVar10 != 0) {
    puVar20 = __dest;
    do {
      puVar21 = puVar20 + 1;
      local_31c = *puVar20;
      local_148 = &local_31c;
      lVar11 = FUN_005e38c8(0,param_1 + 0x368,param_1 + 0x368,&DAT_001f94c3,&local_148,&uStack_149);
      *(void **)(lVar11 + 0x28) = pvVar9;
      puVar20 = puVar21;
    } while (puVar21 != puVar8);
  }
  FUN_005e39d0(0,param_1 + 0x380,param_1 + 0x380,&local_170);
  *(undefined1 *)(param_1 + 0x398) = 0;
  puVar17 = *(undefined8 **)(param_1 + 0x3a8);
  for (puVar14 = *(undefined8 **)(param_1 + 0x3a0); puVar14 != puVar17; puVar14 = puVar14 + 1) {
    FUN_005e0378(*puVar14,local_170);
  }
  FUN_005df55c(param_1);
  pvVar9 = local_170;
  if (__dest != (undefined4 *)0x0) {
    uVar15 = (ulong)((lVar10 << 0x3e) - lVar10) >> 2;
    uVar19 = (ulong)((long)puVar8 + (-4 - ((long)puVar8 << 0x3e))) >> 2;
    if (uVar19 <= uVar15) {
      uVar15 = uVar19;
    }
    if (1 < uVar15) {
      uVar15 = uVar15 & 0x3ffffffffffffffe;
      puVar8 = puVar8 + -uVar15;
      do {
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
    }
    while (puVar8 != __dest) {
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(__dest);
  }
  if ((local_168 != (char **)0x0) && (**local_168 != '\0')) {
    FUN_0066d348(0x45,*local_168,local_168[1],0,0,0,0,0,(ulong)puVar22 & 0xffffffffffffff00);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return pvVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005e0378  FUN_005e0378 =====

void FUN_005e0378(long param_1,long *param_2)

{
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00978fac(&local_28);
  local_30 = local_28;
  if (local_28 != (long *)0x0) {
    (**(code **)*local_28)();
  }
  (**(code **)(*param_2 + 0x18))(param_2,&local_30);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_38 = local_28;
  local_40 = param_2;
  if (local_28 != (long *)0x0) {
    (**(code **)*local_28)();
  }
  FUN_005e2b70(0,param_1 + 0x58,param_1 + 0x58,&local_40);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 005e044c  FUN_005e044c =====

undefined8 FUN_005e044c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 auStack_2c0 [424];
  undefined1 auStack_118 [208];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/call.cc",0x1d59,"External FEC Controller will be used."
                  );
    }
    plVar3 = *(long **)(param_1 + 0xc0);
    if (plVar3 != (long *)0x0) {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x20);
      goto LAB_005e04e4;
    }
  }
  pvVar4 = operator_new(0x78);
  FUN_00933fa0(pvVar4,param_1 + 0x20);
LAB_005e04e4:
  FUN_00848970(auStack_2c0,param_2);
  FUN_008495b4(auStack_118,param_3);
  uVar5 = FUN_005dfec8(param_1,auStack_2c0,auStack_118,pvVar4);
  FUN_0084966c(auStack_118);
  FUN_00848a78(auStack_2c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005e0558  FUN_005e0558 =====

void FUN_005e0558(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  char **local_70;
  char *pcStack_68;
  char *pcStack_60;
  undefined1 uStack_51;
  undefined8 ***local_38;
  
  if (((DAT_00d64100 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d64100), iVar5 != 0)) {
    DAT_00d640f8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64100);
  }
  local_70 = (char **)0x0;
  pcStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d640f8 != '\0') {
    FUN_0066d348(0x42,DAT_00d640f8,"Call::DestroyVideoSendStream",0,0,0,0,0,0);
    pcStack_68 = DAT_00d640f8;
    pcStack_60 = "Call::DestroyVideoSendStream";
    local_70 = &pcStack_68;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x368);
  plVar1 = param_2;
  while (puVar11 != (undefined8 *)(param_1 + 0x370)) {
    plVar17 = (long *)puVar11[5];
    puVar7 = (undefined8 *)puVar11[1];
    if (plVar17 == param_2) {
      puVar10 = puVar7;
      puVar15 = puVar11;
      if (puVar7 == (undefined8 *)0x0) {
        do {
          puVar16 = (undefined8 *)puVar15[2];
          bVar4 = puVar15 != (undefined8 *)*puVar16;
          puVar7 = puVar11;
          puVar15 = puVar16;
        } while (bVar4);
        do {
          puVar10 = (undefined8 *)puVar7[2];
          bVar4 = puVar7 != (undefined8 *)*puVar10;
          puVar7 = puVar10;
        } while (bVar4);
      }
      else {
        do {
          puVar16 = puVar10;
          puVar10 = (undefined8 *)*puVar16;
        } while ((undefined8 *)*puVar16 != (undefined8 *)0x0);
        do {
          puVar10 = puVar7;
          puVar7 = (undefined8 *)*puVar10;
        } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_1 + 0x368) == puVar11) {
        *(undefined8 **)(param_1 + 0x368) = puVar10;
      }
      *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x378) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x370),puVar11);
      if (puVar11 == (undefined8 *)0xffffffffffffffe0) goto LAB_005e09a4;
      operator_delete(puVar11);
      puVar11 = puVar16;
      plVar1 = plVar17;
    }
    else {
      puVar10 = puVar11;
      if (puVar7 == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar10[2];
          bVar4 = puVar10 != (undefined8 *)*puVar11;
          puVar10 = puVar11;
        } while (bVar4);
      }
      else {
        do {
          puVar11 = puVar7;
          puVar7 = (undefined8 *)*puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x3a8);
  for (puVar11 = *(undefined8 **)(param_1 + 0x3a0); puVar11 != puVar7; puVar11 = puVar11 + 1) {
    FUN_005e09e8(*puVar11,plVar1);
  }
  plVar17 = *(long **)(param_1 + 0x388);
  if (plVar17 != (long *)0x0) {
    plVar12 = plVar17;
    do {
      while (plVar1 < (long *)plVar12[4]) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_005e07bc;
      }
      if (plVar1 <= (long *)plVar12[4]) {
        if (plVar12 != (long *)(param_1 + 0x388)) {
          plVar8 = plVar12;
          plVar3 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar8[2];
              bVar4 = plVar8 != (long *)*plVar9;
              plVar8 = plVar9;
            } while (bVar4);
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x380) == plVar12) {
            *(long **)(param_1 + 0x380) = plVar9;
          }
          *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + -1;
          FUN_005d5d48(plVar17,plVar12);
          if (plVar12 == (long *)0xffffffffffffffe0) {
LAB_005e09a4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          operator_delete(plVar12);
        }
        break;
      }
      plVar12 = (long *)plVar12[1];
    } while (plVar12 != (long *)0x0);
  }
LAB_005e07bc:
  if (*(long *)(param_1 + 0x390) == 0) {
    *(undefined1 *)(param_1 + 0x398) = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_98 = (undefined8 *)0x0;
  local_a0 = &local_98;
  local_88 = &local_80;
  FUN_0060ed58(plVar1,&local_88,&local_a0);
  puVar11 = local_88;
  while (ppuVar14 = local_a0, puVar11 != &local_80) {
    local_38 = (undefined8 ***)(puVar11 + 4);
    lVar6 = FUN_005e36a8(0,param_1 + 0x3d0,param_1 + 0x3d0,&DAT_001f94c3,&local_38,&uStack_51);
    uVar19 = puVar11[8];
    uVar18 = puVar11[7];
    uVar21 = puVar11[6];
    uVar20 = puVar11[5];
    *(undefined1 *)(lVar6 + 0x48) = *(undefined1 *)(puVar11 + 9);
    *(undefined8 *)(lVar6 + 0x40) = uVar19;
    *(undefined8 *)(lVar6 + 0x38) = uVar18;
    *(undefined8 *)(lVar6 + 0x30) = uVar21;
    *(undefined8 *)(lVar6 + 0x28) = uVar20;
    puVar7 = (undefined8 *)puVar11[1];
    puVar10 = puVar11;
    if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
      do {
        puVar11 = (undefined8 *)puVar10[2];
        bVar4 = puVar10 != (undefined8 *)*puVar11;
        puVar10 = puVar11;
      } while (bVar4);
    }
    else {
      do {
        puVar11 = puVar7;
        puVar7 = (undefined8 *)*puVar11;
      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
    }
  }
  while (ppuVar14 != &local_98) {
    local_38 = (undefined8 ***)(ppuVar14 + 4);
    lVar6 = FUN_005e3ad8(0,param_1 + 1000,param_1 + 1000,&DAT_001f94c3,&local_38,&uStack_51);
    puVar7 = ppuVar14[6];
    puVar11 = ppuVar14[5];
    *(undefined8 **)(lVar6 + 0x38) = ppuVar14[7];
    *(undefined8 **)(lVar6 + 0x30) = puVar7;
    *(undefined8 **)(lVar6 + 0x28) = puVar11;
    ppuVar2 = (undefined8 **)ppuVar14[1];
    ppuVar13 = ppuVar14;
    if ((undefined8 **)ppuVar14[1] == (undefined8 **)0x0) {
      do {
        ppuVar14 = (undefined8 **)ppuVar13[2];
        bVar4 = ppuVar13 != (undefined8 **)*ppuVar14;
        ppuVar13 = ppuVar14;
      } while (bVar4);
    }
    else {
      do {
        ppuVar14 = ppuVar2;
        ppuVar2 = (undefined8 **)*ppuVar14;
      } while ((undefined8 **)*ppuVar14 != (undefined8 **)0x0);
    }
  }
  FUN_005df55c(param_1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1);
  }
  local_38 = &local_a0;
  FUN_005e34d8(&local_38,local_98);
  local_a0 = &local_88;
  FUN_005e3464(&local_a0,local_80);
  if ((local_70 != (char **)0x0) && (**local_70 != '\0')) {
    FUN_0066d348(0x45,*local_70,local_70[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005e09e8  FUN_005e09e8 =====

void FUN_005e09e8(long param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *local_18;
  
  plVar4 = (long *)(param_1 + 0x60);
  for (plVar2 = (long *)*plVar4; plVar5 = plVar4, plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while ((ulong)plVar2[4] <= param_2) {
      plVar5 = plVar2;
      if ((param_2 <= (ulong)plVar2[4]) ||
         (plVar2 = (long *)plVar2[1], plVar5 = plVar4, plVar2 == (long *)0x0)) goto LAB_005e0a3c;
    }
  }
LAB_005e0a3c:
  local_18 = (long *)plVar5[5];
  if (local_18 != (long *)0x0) {
    (**(code **)*local_18)();
  }
  FUN_0097911c(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  plVar2 = plVar5;
  plVar4 = (long *)plVar5[1];
  if ((long *)plVar5[1] == (long *)0x0) {
    do {
      plVar3 = (long *)plVar2[2];
      bVar1 = plVar2 != (long *)*plVar3;
      plVar2 = plVar3;
    } while (bVar1);
  }
  else {
    do {
      plVar3 = plVar4;
      plVar4 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if (*(long **)(param_1 + 0x58) == plVar5) {
    *(long **)(param_1 + 0x58) = plVar3;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
  FUN_005d5d48(*(undefined8 *)(param_1 + 0x60),plVar5);
  if (plVar5 != (long *)0xffffffffffffffe0) {
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 8))();
    }
    operator_delete(plVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005e0b18  FUN_005e0b18 =====

void * FUN_005e0b18(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong in_stack_fffffffffffffe80;
  ulong uVar20;
  undefined1 auStack_170 [248];
  char **local_78;
  char *local_70;
  char *pcStack_68;
  void *local_48;
  
  if (((DAT_00d64110 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d64110), iVar6 != 0)) {
    DAT_00d64108 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64110);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64108 != '\0') {
    FUN_0066d348(0x42,DAT_00d64108,"Call::CreateVideoReceiveStream",0,0,0,0,0,
                 in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    local_70 = DAT_00d64108;
    pcStack_68 = "Call::CreateVideoReceiveStream";
    local_78 = &local_70;
  }
  if ((*(byte *)(param_1 + 0x9c0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x9c0) = 1;
    FUN_005f1618(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(**(long **)(param_1 + 0xa08) + 0x70))(*(long **)(param_1 + 0xa08),param_1 + 0x10);
    (**(code **)(**(long **)(param_1 + 0xa08) + 0xe0))();
  }
  plVar17 = *(long **)(param_1 + 0x40);
  puVar7 = (undefined8 *)operator_new(0x68);
  FUN_006cd4d4();
  puVar18 = (undefined8 *)*param_2;
  puVar12 = (undefined8 *)param_2[1];
  uVar13 = *(undefined4 *)((long)param_2 + 0x2c);
  uVar19 = NEON_rev64(param_2[4],4);
  *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(puVar7 + 9) = uVar13;
  *puVar7 = uVar19;
  if (puVar18 != puVar12) {
    do {
      plVar14 = (long *)param_2[10];
      while (plVar14 != param_2 + 0xb) {
        if ((int)plVar14[4] == *(int *)(puVar18 + 0xc)) {
          if ((undefined4 *)((long)plVar14 + 0x1c) != (undefined4 *)0x0) {
            uVar13 = *(undefined4 *)((long)plVar14 + 0x1c);
            goto LAB_005e0c90;
          }
          break;
        }
        plVar15 = plVar14;
        plVar4 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar15[2];
            bVar5 = plVar15 != (long *)*plVar14;
            plVar15 = plVar14;
          } while (bVar5);
        }
        else {
          do {
            plVar14 = plVar4;
            plVar4 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
      uVar13 = 0;
LAB_005e0c90:
      uVar20 = puVar7[0xb];
      local_48 = (void *)CONCAT44(local_48._4_4_,uVar13);
      if (uVar20 < (ulong)puVar7[0xc]) {
        if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar1 = puVar18[1];
        puVar3 = (undefined8 *)*puVar18;
        if (-1 < (char)*(byte *)((long)puVar18 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar18 + 0x17);
          puVar3 = puVar18;
        }
        FUN_006cd614(uVar20,puVar3,uVar1);
        lVar8 = uVar20 + 0x20;
      }
      else {
        lVar8 = FUN_005e2c7c(puVar7 + 10,puVar18,puVar18 + 0xc,&local_48);
      }
      puVar18 = puVar18 + 0xd;
      puVar7[0xb] = lVar8;
    } while (puVar18 != puVar12);
  }
  pvVar9 = operator_new(0x18);
  FUN_0092c840(pvVar9,puVar7);
  (**(code **)(*plVar17 + 0x28))(plVar17,pvVar9);
  pvVar9 = operator_new(0x11d0);
  uVar13 = *(undefined4 *)(param_1 + 0x60);
  uVar10 = (**(code **)(**(long **)(param_1 + 0xa08) + 0x10))(*(long **)(param_1 + 0xa08));
  FUN_00846884(auStack_170,param_2);
  uVar19 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  pvVar11 = operator_new(0x150);
  FUN_00946f28(pvVar11,uVar2,uVar19);
  uVar20 = param_1 + 0x128;
  FUN_005f5c38(pvVar9,param_1 + 0x20,param_1,uVar13,uVar10,auStack_170,uVar16,pvVar11,uVar20,
               *(undefined8 *)(param_1 + 0x58));
  FUN_00846ac4(auStack_170);
  local_48 = pvVar9;
  FUN_005f6870(pvVar9,param_1 + 0x268);
  FUN_005e3be8(0,param_1 + 0x168,param_1 + 0x168,&local_48);
  puVar12 = (undefined8 *)FUN_005f6990(local_48);
  uVar1 = puVar12[1];
  puVar18 = (undefined8 *)*puVar12;
  if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar12 + 0x17);
    puVar18 = puVar12;
  }
  FUN_005dfb10(param_1,puVar18,uVar1);
  FUN_005f699c(local_48,*(undefined4 *)(param_1 + 0x11c));
  FUN_005df55c(param_1);
  pvVar9 = local_48;
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,uVar20 & 0xffffffffffffff00);
  }
  return pvVar9;
}


// ===== 005e0eac  FUN_005e0eac =====

void FUN_005e0eac(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d64120 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d64120), iVar5 != 0)) {
    DAT_00d64118 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64120);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64118 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d64118,"Call::DestroyVideoReceiveStream",0,0,0,0,0,0);
    local_50 = DAT_00d64118;
    pcStack_48 = "Call::DestroyVideoReceiveStream";
  }
  FUN_005f6938(param_2);
  plVar6 = *(long **)(param_1 + 0x170);
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6;
    do {
      while ((long *)plVar10[4] <= param_2) {
        if (param_2 <= (long *)plVar10[4]) {
          if (plVar10 != (long *)(param_1 + 0x170)) {
            plVar8 = plVar10;
            plVar3 = (long *)plVar10[1];
            if ((long *)plVar10[1] == (long *)0x0) {
              do {
                plVar9 = (long *)plVar8[2];
                bVar4 = plVar8 != (long *)*plVar9;
                plVar8 = plVar9;
              } while (bVar4);
            }
            else {
              do {
                plVar9 = plVar3;
                plVar3 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x168) == plVar10) {
              *(long **)(param_1 + 0x168) = plVar9;
            }
            *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + -1;
            FUN_005d5d48(plVar6,plVar10);
            if (plVar10 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            operator_delete(plVar10);
          }
          goto LAB_005e0ff0;
        }
        plVar10 = (long *)plVar10[1];
        if (plVar10 == (long *)0x0) goto LAB_005e0ff0;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
LAB_005e0ff0:
  puVar7 = (undefined8 *)FUN_005f6990(param_2);
  uVar1 = puVar7[1];
  puVar2 = (undefined8 *)*puVar7;
  if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar7 + 0x17);
    puVar2 = puVar7;
  }
  FUN_005dfb10(param_1,puVar2,uVar1);
  FUN_0092ca28(param_1 + 0x678,(int)param_2[0x15]);
  FUN_005df55c(param_1);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005e10d8  FUN_005e10d8 =====

void * FUN_005e10d8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined1 auStack_90 [56];
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d64130 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d64130), iVar2 != 0)) {
    DAT_00d64128 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64130);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64128 != '\0') {
    FUN_0066d348(0x42,DAT_00d64128,"Call::CreateFlexfecReceiveStream",0,0,0,0,0,0);
    local_50 = DAT_00d64128;
    pcStack_48 = "Call::CreateFlexfecReceiveStream";
    local_58 = &local_50;
  }
  pvVar3 = operator_new(0x60);
  FUN_00842468(auStack_90,param_2);
  lVar1 = 0;
  if (param_1 + 0x268 != 0) {
    lVar1 = param_1 + 0x270;
  }
  FUN_005ed1b0(pvVar3,param_1 + 0x20,auStack_90,lVar1,*(undefined8 *)(param_1 + 0x68));
  FUN_008424f8(auStack_90);
  FUN_005ed5a0(pvVar3,param_1 + 0x268);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return pvVar3;
}


// ===== 005e123c  FUN_005e123c =====

void FUN_005e123c(long param_1,long *param_2)

{
  int iVar1;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d64140 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d64140), iVar1 != 0)) {
    DAT_00d64138 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64140);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64138 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d64138,"Call::DestroyFlexfecReceiveStream",0,0,0,0,0,0);
    local_50 = DAT_00d64138;
    pcStack_48 = "Call::DestroyFlexfecReceiveStream";
  }
  FUN_005ed610(param_2);
  FUN_0092ca28(param_1 + 0x678,(int)param_2[7]);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005e1378  FUN_005e1378 =====

void FUN_005e1378(long param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *local_40;
  long *local_38;
  
  pvVar3 = operator_new(0x70);
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    (**(code **)*plVar4)(plVar4);
    local_38 = plVar4;
    (**(code **)*plVar4)(plVar4);
  }
  FUN_00978da8(pvVar3,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(undefined8 *)((long)pvVar3 + 0x68) = 0;
  *(undefined8 *)((long)pvVar3 + 0x60) = 0;
  *(undefined8 **)((long)pvVar3 + 0x58) = (undefined8 *)((long)pvVar3 + 0x60);
  FUN_00978f18(pvVar3);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x3a8);
  local_40 = pvVar3;
  if (puVar5 < *(undefined8 **)(param_1 + 0x3b0)) {
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_40 = (void *)0x0;
    puVar6 = puVar5 + 1;
    *puVar5 = pvVar3;
  }
  else {
    puVar6 = (undefined8 *)FUN_005e2e0c(param_1 + 0x3a0,&local_40);
  }
  pvVar3 = local_40;
  *(undefined8 **)(param_1 + 0x3a8) = puVar6;
  local_40 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    FUN_00978f64(pvVar3);
    local_38 = (long *)((long)pvVar3 + 0x58);
    FUN_005e33d4(&local_38,*(undefined8 *)((long)pvVar3 + 0x60));
    FUN_00978e20(pvVar3);
    operator_delete(pvVar3);
    puVar6 = *(undefined8 **)(param_1 + 0x3a8);
  }
  if (*(undefined8 **)(param_1 + 0x3a0) == puVar6) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  plVar4 = *(long **)(param_1 + 0x380);
  while (plVar4 != (long *)(param_1 + 0x388)) {
    FUN_005e0378(puVar6[-1],plVar4[4]);
    plVar1 = (long *)plVar4[1];
    plVar7 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar7[2];
        bVar2 = plVar7 != (long *)*plVar4;
        plVar7 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 005e1538  FUN_005e1538 =====

void FUN_005e1538(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  *param_1 = 0;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  cVar1 = *(char *)(param_2 + 0x120);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (cVar1 == '\x01') {
    uVar3 = (**(code **)(**(long **)(param_2 + 0xa08) + 0x90))();
  }
  else {
    uVar3 = 0;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  param_1[2] = uVar3;
  uVar3 = FUN_005f1c98(uVar5);
  param_1[3] = uVar3;
  uVar2 = FUN_0092ca70(param_2 + 0x678);
  *(undefined4 *)(param_1 + 1) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x674);
  lVar6 = **(long **)(param_2 + 0xa08);
  *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x670);
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  uVar4 = (**(code **)(lVar6 + 0xf8))();
  if ((uVar4 & 0xff00000000) != 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[4] = (long)(int)uVar4;
  }
  FUN_0092d03c(&local_40,param_2 + 0x678);
  lVar6 = **(long **)(param_2 + 0xa08);
  param_1[7] = uStack_38;
  param_1[6] = local_40;
  param_1[8] = local_30;
  (**(code **)(lVar6 + 0x100))(&local_40);
  param_1[10] = uStack_38;
  param_1[9] = local_40;
  param_1[0xb] = local_30;
  return;
}


// ===== 005e1648  FUN_005e1648 =====

void FUN_005e1648(long param_1,undefined4 param_2)

{
  FUN_0092ce98(param_1 + 0x678);
                    /* WARNING: Could not recover jumptable at 0x005e1684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa08) + 0xf0))(*(long **)(param_1 + 0xa08),param_2);
  return;
}


// ===== 005e1688  FUN_005e1688 =====

ulong FUN_005e1688(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xa08) + 0xf8))();
  return uVar1 & 0xffffffffff;
}


// ===== 005e16b4  FUN_005e16b4 =====

ulong FUN_005e16b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xa08) + 0x108))();
  return uVar1 & 0xffffffffff;
}


// ===== 005e16e0  FUN_005e16e0 =====

undefined8 FUN_005e16e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 005e16ec  FUN_005e16ec =====

undefined8 FUN_005e16ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 005e16f8  FUN_005e16f8 =====

void FUN_005e16f8(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  plVar3 = *(long **)(param_1 + 0x48);
  if (*(long **)(param_1 + 0x50) == plVar3) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x118) = param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0x11c) = param_3;
    }
    FUN_005df55c(param_1);
    plVar3 = *(long **)(param_1 + 0x168);
    while (plVar3 != (long *)(param_1 + 0x170)) {
      FUN_005f699c(plVar3[4],*(undefined4 *)(param_1 + 0x11c));
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = plVar4 != (long *)*plVar3;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x9b0);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar5;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_005e3cf0;
    local_60[0][2] = param_1;
    *(int *)(local_60[0] + 3) = param_2;
    *(undefined4 *)((long)local_60[0] + 0x1c) = param_3;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar3 + 8))(plVar3,local_60,&uStack_21,&uStack_22);
    (*local_50)(0,local_60,local_60);
  }
  return;
}


// ===== 005e1830  FUN_005e1830 =====

void FUN_005e1830(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x9b0);
  plVar1 = *(long **)(param_1 + 0x48);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_005e3d84;
  local_50[0][2] = param_1;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005e18f0  FUN_005e18f0 =====

void FUN_005e18f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_005d45a4(param_2,param_3);
  return;
}


// ===== 005e1900  FUN_005e1900 =====

void FUN_005e1900(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_005f69c0(param_2,param_3);
  return;
}


// ===== 005e1910  FUN_005e1910 =====

void FUN_005e1910(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_005ed6f0(param_2,param_3);
  return;
}


// ===== 005e1920  FUN_005e1920 =====

void FUN_005e1920(undefined8 param_1,undefined8 param_2,void *param_3,undefined1 *param_4)

{
  undefined1 **__s2;
  undefined1 *__n;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puVar2 = (undefined8 *)FUN_005d45c0(param_2);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    FUN_005478d8(&local_60,*puVar2,puVar2[1]);
  }
  else {
    local_50 = (undefined1 *)puVar2[2];
    puStack_58 = (undefined1 *)puVar2[1];
    local_60 = (undefined1 *)*puVar2;
  }
  FUN_005d448c(param_2,param_3,param_4);
  __s2 = (undefined1 **)local_60;
  __n = puStack_58;
  if (-1 < (long)local_50) {
    __s2 = &local_60;
    __n = (undefined1 *)((ulong)local_50 >> 0x38);
  }
  if ((param_4 != __n) || (iVar1 = memcmp(param_3,__s2,(size_t)__n), iVar1 != 0)) {
    FUN_005dfb10(param_1,__s2,__n);
  }
  FUN_005dfb10(param_1,param_3,param_4);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 005e1a24  FUN_005e1a24 =====

void FUN_005e1a24(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x9c8);
  if (*(char *)(param_1 + 0xa00) == '\x01') {
    if (((*plVar1 != -1) && (*plVar1 == *param_2)) && (*(long *)(param_1 + 0x9d0) == param_2[1])) {
      return;
    }
    lVar9 = param_2[3];
    lVar8 = param_2[2];
    lVar5 = param_2[5];
    lVar4 = param_2[4];
    lVar7 = param_2[1];
    lVar6 = *param_2;
    *(long *)(param_1 + 0x9f8) = param_2[6];
    *(long *)(param_1 + 0x9e0) = lVar9;
    *(long *)(param_1 + 0x9d8) = lVar8;
    *(long *)(param_1 + 0x9f0) = lVar5;
    *(long *)(param_1 + 0x9e8) = lVar4;
    *(long *)(param_1 + 0x9d0) = lVar7;
    *plVar1 = lVar6;
  }
  else {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar4 = *param_2;
    *(long *)(param_1 + 0x9d0) = param_2[1];
    *plVar1 = lVar4;
    FUN_007b6424(param_1 + 0x9d8,param_2 + 2);
    *(undefined1 *)(param_1 + 0xa00) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x9a0);
  lVar4 = *param_2;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  FUN_005f3c28(uVar3,(int)lVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x005e1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa08) + 0xa8))(*(long **)(param_1 + 0xa08),param_2);
  return;
}


// ===== 005e1b28  FUN_005e1b28 =====

void FUN_005e1b28(long param_1)

{
  FUN_008b8854(*(undefined8 *)(param_1 + 0x70));
  return;
}


// ===== 005e1b34  FUN_005e1b34 =====

void FUN_005e1b34(long param_1)

{
  FUN_008b8854(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 005e1b40  FUN_005e1b40 =====

void FUN_005e1b40(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_2 + 6);
  FUN_0092d05c(param_1 + 0x678,uVar1);
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  FUN_008b8860(*(undefined8 *)(param_1 + 0x70),&local_70);
  *(uint *)(param_1 + 0x670) = uVar1;
  if ((uVar1 == 0) || (*(char *)(param_1 + 0x398) == '\x01')) {
    FUN_005f47e4(param_1 + 0x5a8);
    FUN_005f47e4(param_1 + 0x600);
  }
  else {
    thunk_FUN_005f48d0(param_1 + 0x5a8,(ulong)uVar1 / 1000);
    if (uVar1 <= *(uint *)(param_1 + 0x658)) {
      uVar1 = *(uint *)(param_1 + 0x658);
    }
    thunk_FUN_005f48d0(param_1 + 0x600,(ulong)uVar1 / 1000);
  }
  return;
}


// ===== 005e1c00  FUN_005e1c00 =====

void FUN_005e1c00(long param_1)

{
  FUN_005e1b40(param_1 + -0x10);
  return;
}


// ===== 005e1c0c  FUN_005e1c0c =====

void FUN_005e1c0c(long param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_30 = param_2[2];
  (**(code **)(**(long **)(param_1 + 0x9b8) + 0x48))(*(long **)(param_1 + 0x9b8),&local_40);
  *(int *)(param_1 + 0x658) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_2 + 2);
  return;
}


// ===== 005e1c70  FUN_005e1c70 =====

void FUN_005e1c70(long param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  local_30 = param_2[2];
  (**(code **)(**(long **)(param_1 + 0x9a0) + 0x48))(*(long **)(param_1 + 0x9a0),&local_40);
  *(int *)(param_1 + 0x640) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 2);
  return;
}


// ===== 005e1cd4  FUN_005e1cd4 =====

void FUN_005e1cd4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00d64150 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d64150), iVar6 != 0)) {
    DAT_00d64148 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64150);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64148 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00d64148,"Call::DeliverRtcp",0,0,0,0,0,0);
    local_60 = DAT_00d64148;
    pcStack_58 = "Call::DeliverRtcp";
  }
  uVar10 = param_2[2];
  uVar7 = FUN_005f44b0(param_1 + 0x400);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_005f48d0(param_1 + 0x400,uVar10 & 0xffffffff);
    thunk_FUN_005f48d0(param_1 + 0x508,uVar10 & 0xffffffff);
  }
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x10) + param_2[1];
  }
  lVar11 = param_2[2];
  plVar13 = *(long **)(param_1 + 0x168);
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = lVar9;
  }
  if (plVar13 == (long *)(param_1 + 0x170)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      uVar5 = FUN_005f69a8(plVar13[4],lVar2,lVar11);
      plVar3 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar4 = plVar14 != (long *)*plVar13;
          plVar14 = plVar13;
        } while (bVar4);
      }
      else {
        do {
          plVar13 = plVar3;
          plVar3 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      uVar12 = uVar5 | uVar12;
    } while (plVar13 != (long *)(param_1 + 0x170));
  }
  plVar13 = *(long **)(param_1 + 0x150);
  if (plVar13 != (long *)(param_1 + 0x158)) {
    do {
      FUN_005d4478(plVar13[4],lVar2,lVar11);
      plVar3 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar4 = plVar14 != (long *)*plVar13;
          plVar14 = plVar13;
        } while (bVar4);
      }
      else {
        do {
          plVar13 = plVar3;
          plVar3 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
    } while (plVar13 != (long *)(param_1 + 0x158));
    uVar12 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x380);
  if (plVar13 != (long *)(param_1 + 0x388)) {
    do {
      lVar9 = *param_2;
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x10) + param_2[1];
      }
      lVar1 = 0;
      if (param_2[2] != 0) {
        lVar1 = lVar9;
      }
      FUN_0060f1fc(plVar13[4],lVar1);
      plVar3 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar4 = plVar14 != (long *)*plVar13;
          plVar14 = plVar13;
        } while (bVar4);
      }
      else {
        do {
          plVar13 = plVar3;
          plVar3 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
    } while (plVar13 != (long *)(param_1 + 0x388));
    plVar13 = *(long **)(param_1 + 0x350);
    goto LAB_005e1fe8;
  }
  plVar13 = *(long **)(param_1 + 0x350);
  if (plVar13 == (long *)(param_1 + 0x358)) {
    if ((uVar12 & 1) == 0) goto joined_r0x005e1f94;
  }
  else {
    do {
      FUN_005e668c(plVar13[5],lVar2,lVar11);
      plVar3 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar4 = plVar14 != (long *)*plVar13;
          plVar14 = plVar13;
        } while (bVar4);
      }
      else {
        do {
          plVar13 = plVar3;
          plVar3 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
LAB_005e1fe8:
    } while (plVar13 != (long *)(param_1 + 0x358));
  }
  plVar13 = *(long **)(param_1 + 0x40);
  pvVar8 = operator_new(0x28);
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x10) + param_2[1];
  }
  lVar2 = 0;
  if (param_2[2] != 0) {
    lVar2 = lVar9;
  }
  FUN_0088999c(pvVar8,lVar2);
  (**(code **)(*plVar13 + 0x28))(plVar13,pvVar8);
joined_r0x005e1f94:
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005e2030  FUN_005e2030 =====

void FUN_005e2030(long param_1)

{
  FUN_005e1cd4(param_1 + -8);
  return;
}


// ===== 005e203c  FUN_005e203c =====

void FUN_005e203c(long param_1,uint param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_34;
  
  lVar11 = *(long *)(param_1 + 0x998);
  uVar10 = *(undefined8 *)(param_3 + 0x70);
  if (lVar11 != 0) {
    uVar2 = FUN_00625ae8();
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30));
    uVar10 = FUN_005ed9d8(lVar11,uVar10,uVar2,uVar3);
    *(undefined8 *)(param_3 + 0x70) = uVar10;
  }
  local_58 = *(undefined8 *)(param_3 + 0x18);
  local_68 = 0x8000000000000000;
  local_34 = 0xaaaaaaaa;
  uStack_60 = uVar10;
  auVar12 = FUN_007dba34(param_3,5);
  if ((auVar12._8_8_ != 0) &&
     (uVar4 = FUN_007d8d58(auVar12._0_8_,auVar12._8_8_,&local_34), (uVar4 & 1) != 0)) {
    local_68 = (ulong)local_34 * 1000000 >> 0x12;
  }
  (**(code **)(**(long **)(param_1 + 0xa08) + 0xb0))(*(long **)(param_1 + 0xa08),&local_68);
  FUN_0092cf3c(param_1 + 0x678,param_3,param_2);
  if (param_2 < 2) {
    lVar11 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    iVar9 = -1;
    if ((lVar11 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_3 + 0x70), lVar6 != -0x8000000000000000)) {
      iVar9 = 0;
      if (lVar6 != 0x7fffffffffffffff && lVar11 != -0x8000000000000000) {
        iVar9 = (int)lVar11 - (int)lVar6;
      }
    }
    lVar11 = DAT_00d64158;
    if (DAT_00d64158 == 0) {
      lVar11 = FUN_006660d0("WebRTC.TimeFromNetworkToDeliverRtpPacketUs",0x2a,1,100000,0x32);
      FUN_00d0f5e0(0,lVar11,&DAT_00d64158);
      if (lVar11 != 0) goto LAB_005e2208;
    }
    else {
LAB_005e2208:
      FUN_00666568(lVar11,iVar9);
    }
    lVar11 = 0x180;
    if (param_2 != 0) {
      lVar11 = 0x268;
    }
    uVar4 = FUN_00898cb4(param_1 + lVar11,param_3);
    if ((uVar4 & 1) == 0) {
      uVar4 = (**(code **)(param_4 + 0x18))(param_4,param_3);
      if ((uVar4 & 1) == 0) goto LAB_005e2128;
      uVar4 = FUN_00898cb4(param_1 + lVar11,param_3);
      if ((uVar4 & 1) == 0) {
        plVar8 = *(long **)(param_1 + 0x40);
        pvVar5 = operator_new(0x88);
        FUN_00889b64(pvVar5,param_3,0);
        (**(code **)(*plVar8 + 0x28))(plVar8,pvVar5);
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) != 0) {
          return;
        }
        FUN_00623bb0(&DAT_001f6220,"../../call/call.cc",0x2cd1,"Failed to demux packet ",
                     *(undefined4 *)(param_3 + 0xc));
        return;
      }
    }
    bVar1 = *(byte *)(param_3 + 2);
    uVar10 = *(undefined8 *)(param_3 + 0x70);
    iVar9 = *(int *)(param_3 + 0x18) + *(int *)(param_3 + 0x10);
    thunk_FUN_005f48d0(param_1 + 0x400,iVar9 + (uint)bVar1);
    if (param_2 == 0) {
      thunk_FUN_005f48d0(param_1 + 0x458,iVar9 + (uint)bVar1);
      if ((*(byte *)(param_1 + 0x568) & 1) == 0) {
        if (param_1 == -0x560) goto LAB_005e237c;
        *(undefined8 *)(param_1 + 0x560) = uVar10;
        *(undefined1 *)(param_1 + 0x568) = 1;
      }
      puVar7 = (undefined8 *)(param_1 + 0x570);
      if (*(char *)(param_1 + 0x578) != '\x01') {
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x570) = uVar10;
          *(undefined1 *)(param_1 + 0x578) = 1;
          return;
        }
        goto LAB_005e237c;
      }
    }
    else {
      thunk_FUN_005f48d0(param_1 + 0x4b0,iVar9 + (uint)bVar1);
      if ((*(byte *)(param_1 + 0x588) & 1) == 0) {
        if (param_1 == -0x580) goto LAB_005e237c;
        *(undefined8 *)(param_1 + 0x580) = uVar10;
        *(undefined1 *)(param_1 + 0x588) = 1;
      }
      puVar7 = (undefined8 *)(param_1 + 0x590);
      if (*(char *)(param_1 + 0x598) != '\x01') {
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x590) = uVar10;
          *(undefined1 *)(param_1 + 0x598) = 1;
          return;
        }
LAB_005e237c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
    }
    *puVar7 = uVar10;
  }
  else {
LAB_005e2128:
    plVar8 = *(long **)(param_1 + 0x40);
    pvVar5 = operator_new(0x88);
    FUN_00889b64(pvVar5,param_3,0);
    (**(code **)(*plVar8 + 0x28))(plVar8,pvVar5);
  }
  return;
}


// ===== 005e2390  FUN_005e2390 =====

void FUN_005e2390(long param_1)

{
  FUN_005e203c(param_1 + -8);
  return;
}


// ===== 005e239c  FUN_005e239c =====

void FUN_005e239c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e239c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_005e247c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[8];
      puVar5 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)param_2[9];
        uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
        uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
          uVar3 = uVar3 & 0xffffffffffffffe;
          pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar2 != pvVar1) {
          pvVar2 = (void *)((long)pvVar2 + -0x10);
          if (pvVar2 == (void *)0x0) goto LAB_005e247c;
        }
        param_2[9] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


// ===== 005e2490  FUN_005e2490 =====

void FUN_005e2490(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  long local_38;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while( true ) {
    if (param_2 == puVar1) {
      *(undefined8 **)(param_1 + 8) = param_2;
      return;
    }
    puVar1 = puVar1 + -1;
    if (puVar1 == (undefined8 *)0x0) break;
    pvVar2 = (void *)*puVar1;
    *puVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00978f64(pvVar2);
      local_38 = (long)pvVar2 + 0x58;
      FUN_005e33d4(&local_38,*(undefined8 *)((long)pvVar2 + 0x60));
      FUN_00978e20(pvVar2);
      operator_delete(pvVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005e2544  FUN_005e2544 =====

void FUN_005e2544(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar10 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar10 - (long)puVar11) >> 5) < param_4) {
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)param_1[1];
      puVar8 = puVar11;
      if (puVar11 != puVar12) {
        do {
          puVar12 = puVar12 + -4;
          if (puVar12 == (undefined8 *)0x0) goto LAB_005e288c;
          FUN_00668f8c(puVar12);
        } while (puVar12 != puVar11);
        puVar8 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar11;
      operator_delete(puVar8);
      uVar10 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3b == 0) {
      uVar3 = (long)uVar10 >> 4;
      if ((ulong)((long)uVar10 >> 4) <= param_4) {
        uVar3 = param_4;
      }
      if (0x7fffffffffffffdf < uVar10) {
        uVar3 = 0x7ffffffffffffff;
      }
      if (uVar3 >> 0x3b == 0) {
        puVar11 = (undefined8 *)operator_new(uVar3 * 0x20);
        *param_1 = puVar11;
        param_1[1] = puVar11;
        param_1[2] = puVar11 + uVar3 * 4;
        if (param_2 != param_3) {
          do {
            if (puVar11 == (undefined8 *)0x0) goto LAB_005e2878;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              FUN_005478d8(puVar11,*param_2,param_2[1]);
            }
            else {
              uVar15 = *param_2;
              uVar9 = param_2[2];
              puVar11[1] = param_2[1];
              *puVar11 = uVar15;
              puVar11[2] = uVar9;
            }
            puVar12 = param_2 + 3;
            uVar6 = *(undefined1 *)((long)param_2 + 0x1c);
            param_2 = param_2 + 4;
            *(undefined4 *)(puVar11 + 3) = *(undefined4 *)puVar12;
            *(undefined1 *)((long)puVar11 + 0x1c) = uVar6;
            puVar11 = puVar11 + 4;
          } while (param_2 != param_3);
        }
        goto LAB_005e2808;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_005e28a4();
  }
  puVar12 = (undefined8 *)param_1[1];
  lVar14 = (long)puVar12 - (long)puVar11;
  if ((ulong)(lVar14 >> 5) < param_4) {
    puVar8 = param_2;
    puVar2 = puVar12;
    if (puVar12 != puVar11) {
      lVar13 = 0;
      puVar8 = (undefined8 *)((long)param_2 + lVar14);
      do {
        puVar12 = (undefined8 *)((long)puVar11 + lVar13);
        puVar2 = (undefined8 *)((long)param_2 + lVar13);
        if (param_2 != puVar11) {
          bVar5 = *(byte *)((long)puVar2 + 0x17);
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            uVar10 = ((long *)((long)param_2 + lVar13))[1];
            puVar7 = *(undefined8 **)((long)param_2 + lVar13);
            if (-1 < (char)bVar5) {
              uVar10 = (ulong)bVar5;
              puVar7 = puVar2;
            }
            FUN_00547f08((long)puVar11 + lVar13,puVar7,uVar10);
          }
          else if ((char)bVar5 < '\0') {
            FUN_00547fc0((long)puVar11 + lVar13,*(undefined8 *)((long)param_2 + lVar13),
                         ((undefined8 *)((long)param_2 + lVar13))[1]);
          }
          else {
            uVar15 = puVar2[1];
            uVar9 = *puVar2;
            puVar12[2] = puVar2[2];
            puVar12[1] = uVar15;
            *puVar12 = uVar9;
          }
        }
        uVar4 = *(undefined4 *)(puVar2 + 3);
        lVar13 = lVar13 + 0x20;
        *(undefined1 *)((long)puVar12 + 0x1c) = *(undefined1 *)((long)puVar2 + 0x1c);
        *(undefined4 *)(puVar12 + 3) = uVar4;
      } while (lVar14 != lVar13);
      puVar12 = (undefined8 *)param_1[1];
      puVar2 = puVar12;
    }
    while( true ) {
      if (puVar8 == param_3) {
        param_1[1] = puVar12;
        return;
      }
      if (puVar2 == (undefined8 *)0x0) break;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        FUN_005478d8(puVar2,*puVar8,puVar8[1]);
      }
      else {
        uVar15 = puVar8[1];
        uVar9 = *puVar8;
        puVar2[2] = puVar8[2];
        puVar2[1] = uVar15;
        *puVar2 = uVar9;
      }
      uVar4 = *(undefined4 *)(puVar8 + 3);
      puVar12 = puVar12 + 4;
      *(undefined1 *)((long)puVar2 + 0x1c) = *(undefined1 *)((long)puVar8 + 0x1c);
      *(undefined4 *)(puVar2 + 3) = uVar4;
      puVar8 = puVar8 + 4;
      puVar2 = puVar2 + 4;
    }
LAB_005e2878:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (param_2 == param_3) {
    if (puVar11 == puVar12) goto LAB_005e2808;
  }
  else {
    do {
      if (param_2 != puVar11) {
        bVar5 = *(byte *)((long)param_2 + 0x17);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          uVar10 = param_2[1];
          puVar12 = (undefined8 *)*param_2;
          if (-1 < (char)bVar5) {
            uVar10 = (ulong)bVar5;
            puVar12 = param_2;
          }
          FUN_00547f08(puVar11,puVar12,uVar10);
        }
        else if ((char)bVar5 < '\0') {
          FUN_00547fc0(puVar11,*param_2,param_2[1]);
        }
        else {
          uVar15 = param_2[1];
          uVar9 = *param_2;
          puVar11[2] = param_2[2];
          puVar11[1] = uVar15;
          *puVar11 = uVar9;
        }
      }
      puVar1 = (undefined1 *)((long)param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 3);
      param_2 = param_2 + 4;
      *(undefined1 *)((long)puVar11 + 0x1c) = *puVar1;
      *(undefined4 *)(puVar11 + 3) = uVar4;
      puVar11 = puVar11 + 4;
    } while (param_2 != param_3);
    puVar12 = (undefined8 *)param_1[1];
    if (puVar11 == puVar12) goto LAB_005e2808;
  }
  do {
    puVar12 = puVar12 + -4;
    if (puVar12 == (undefined8 *)0x0) {
LAB_005e288c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_00668f8c(puVar12);
  } while (puVar12 != puVar11);
LAB_005e2808:
  param_1[1] = puVar11;
  return;
}


// ===== 005e28a4  FUN_005e28a4 =====

void FUN_005e28a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005e28bc  FUN_005e28bc =====

long FUN_005e28bc(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  lVar8 = param_1[1] - *param_1;
  uVar2 = (lVar8 >> 5) + 1;
  if (uVar2 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    local_60 = (void *)0x0;
    uVar6 = (long)uVar5 >> 4;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3b != 0) goto LAB_005e2a48;
      local_60 = operator_new(uVar6 << 5);
    }
    local_48 = (void *)((long)local_60 + uVar6 * 0x20);
    puVar3 = (undefined8 *)((long)local_60 + lVar8);
    local_58 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    FUN_006cd614(puVar3,puVar4,uVar2,*param_3,*param_4);
    local_50 = puVar3 + 4;
    FUN_005e2a4c(param_1,&local_60);
    puVar4 = local_58;
    lVar8 = param_1[1];
    puVar3 = local_50;
    while( true ) {
      if (puVar4 == puVar3) {
        if (local_60 != (void *)0x0) {
          local_50 = puVar3;
          operator_delete(local_60);
        }
        return lVar8;
      }
      puVar7 = puVar3 + -4;
      if (puVar7 == (undefined8 *)0x0) break;
      pcVar1 = (char *)((long)puVar3 + -9);
      puVar3 = puVar7;
      if (*pcVar1 < '\0') {
        operator_delete((void *)*puVar7);
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_005e2b58();
LAB_005e2a48:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 005e2a4c  FUN_005e2a4c =====

void FUN_005e2a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar3));
  puVar4 = puVar9;
  puVar6 = puVar2;
  if (puVar3 != puVar9) {
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = puVar4[1];
      uVar5 = *puVar4;
      puVar6[2] = puVar4[2];
      puVar6[1] = uVar7;
      *puVar6 = uVar5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar1 = puVar4 + 4;
      puVar6[3] = puVar4[3];
      puVar4 = puVar1;
      puVar6 = puVar6 + 4;
    } while (puVar1 != puVar3);
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        operator_delete((void *)*puVar9);
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar3);
  }
  param_2[1] = puVar2;
  uVar5 = *param_1;
  uVar8 = param_1[2];
  param_1[1] = uVar5;
  uVar10 = param_2[1];
  uVar7 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar10;
  param_1[2] = uVar7;
  param_2[2] = uVar5;
  param_2[3] = uVar8;
  *param_2 = uVar5;
  param_2[1] = uVar5;
  return;
}


// ===== 005e2b58  FUN_005e2b58 =====

void FUN_005e2b58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005e2b70  FUN_005e2b70 =====

undefined1  [16] FUN_005e2b70(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005e2bdc;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_005e2c4c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_005e2bdc:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  param_4[1] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[5] = uVar7;
  plVar2[4] = uVar6;
  plVar2[2] = (long)plVar3;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e2c4c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 005e2c7c  FUN_005e2c7c =====

long FUN_005e2c7c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  lVar8 = param_1[1] - *param_1;
  uVar2 = (lVar8 >> 5) + 1;
  if (uVar2 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    local_60 = (void *)0x0;
    uVar6 = (long)uVar5 >> 4;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3b != 0) goto LAB_005e2e08;
      local_60 = operator_new(uVar6 << 5);
    }
    local_48 = (void *)((long)local_60 + uVar6 * 0x20);
    puVar3 = (undefined8 *)((long)local_60 + lVar8);
    local_58 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    FUN_006cd614(puVar3,puVar4,uVar2,*param_3,*param_4);
    local_50 = puVar3 + 4;
    FUN_005e2a4c(param_1,&local_60);
    puVar4 = local_58;
    lVar8 = param_1[1];
    puVar3 = local_50;
    while( true ) {
      if (puVar4 == puVar3) {
        if (local_60 != (void *)0x0) {
          local_50 = puVar3;
          operator_delete(local_60);
        }
        return lVar8;
      }
      puVar7 = puVar3 + -4;
      if (puVar7 == (undefined8 *)0x0) break;
      pcVar1 = (char *)((long)puVar3 + -9);
      puVar3 = puVar7;
      if (*pcVar1 < '\0') {
        operator_delete((void *)*puVar7);
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_005e2b58();
LAB_005e2e08:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 005e2e0c  FUN_005e2e0c =====

undefined8 * FUN_005e2e0c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_005e2f04();
LAB_005e2f00:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_005e2f00;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005e2f04  FUN_005e2f04 =====

void FUN_005e2f04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005e2f1c  FUN_005e2f1c =====

void FUN_005e2f1c(long *param_1,undefined8 param_2)

{
  FUN_005e2f30(*param_1,*param_1 + 0x10,param_2);
  return;
}


// ===== 005e2f30  FUN_005e2f30 =====

void FUN_005e2f30(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_40;
  long *plStack_38;
  undefined8 local_30;
  
  pcVar3 = (code *)*param_1;
  plVar4 = (long *)(*param_2 + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar4);
  }
  plStack_38 = (long *)param_3[1];
  local_40 = (long *)*param_3;
  local_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  (*pcVar3)(plVar4,&local_40);
  plVar1 = local_40;
  plVar4 = plStack_38;
  if (local_40 != (long *)0x0) {
    while (plVar1 != plVar4) {
      plVar4 = plVar4 + -1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plStack_38 = plVar1;
    operator_delete(local_40);
  }
  return;
}


// ===== 005e3004  FUN_005e3004 =====

void FUN_005e3004(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 005e3040  FUN_005e3040 =====

void FUN_005e3040(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 005e3054  FUN_005e3054 =====

void FUN_005e3054(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  param_1 = (long *)*param_1;
  pcVar2 = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  pvStack_28 = (void *)param_3[1];
  local_30 = (void *)*param_3;
  local_20 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  (*pcVar2)(plVar1,param_2,&local_30);
  if (local_30 != (void *)0x0) {
    uVar5 = (ulong)((long)pvStack_28 + (-4 - ((long)pvStack_28 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)local_30 - (long)pvStack_28 << 0x3e) -
                   ((long)local_30 - (long)pvStack_28)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar3 = pvStack_28;
    if ((1 < uVar4) && ((((int)local_30 - (int)pvStack_28 | -(int)pvStack_28) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvStack_28 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != local_30) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_28 = local_30;
    operator_delete(local_30);
  }
  return;
}


// ===== 005e3140  FUN_005e3140 =====

void FUN_005e3140(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 005e317c  FUN_005e317c =====

void FUN_005e317c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 005e3190  FUN_005e3190 =====

void FUN_005e3190(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e3190(param_1,*param_2);
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


// ===== 005e3204  FUN_005e3204 =====

void FUN_005e3204(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e3204(param_1,*param_2);
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


// ===== 005e3278  FUN_005e3278 =====

void FUN_005e3278(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e3278(param_1,*param_2);
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


// ===== 005e32ec  FUN_005e32ec =====

void FUN_005e32ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e32ec(param_1,*param_2);
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


// ===== 005e3360  FUN_005e3360 =====

void FUN_005e3360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e3360(param_1,*param_2);
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


// ===== 005e33d4  FUN_005e33d4 =====

void FUN_005e33d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e33d4(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 005e3464  FUN_005e3464 =====

void FUN_005e3464(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e3464(param_1,*param_2);
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


// ===== 005e34d8  FUN_005e34d8 =====

void FUN_005e34d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005e34d8(param_1,*param_2);
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


// ===== 005e354c  FUN_005e354c =====

void FUN_005e354c(undefined8 *param_1)

{
  FUN_0092d06c(*param_1);
  return;
}


// ===== 005e3558  FUN_005e3558 =====

undefined8 FUN_005e3558(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(*param_1 + 0x70) != 0) {
    uVar2 = FUN_008b9f1c();
    uVar1 = 25000;
    if ((uVar2 & 1) == 0) {
      uVar1 = 300000;
    }
    return uVar1;
  }
  return 25000;
}


// ===== 005e35a0  FUN_005e35a0 =====

undefined1  [16]
FUN_005e35a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005e3608;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_005e3678;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_005e3608:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3678:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005e36a8  FUN_005e36a8 =====

undefined1  [16]
FUN_005e36a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  
  puVar7 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005e3710;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_005e3790;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_005e3710:
  plVar3 = (long *)operator_new(0x50);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar7;
  plVar3[9] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = -0x8000000000000000;
  plVar3[7] = -0x8000000000000000;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3790:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005e37c0  FUN_005e37c0 =====

undefined1  [16] FUN_005e37c0(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005e382c;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_005e3898;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_005e382c:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3898:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 005e38c8  FUN_005e38c8 =====

undefined1  [16]
FUN_005e38c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005e3930;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_005e39a0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_005e3930:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e39a0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005e39d0  FUN_005e39d0 =====

undefined1  [16] FUN_005e39d0(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005e3a3c;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_005e3aa8;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_005e3a3c:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3aa8:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 005e3ad8  FUN_005e3ad8 =====

undefined1  [16]
FUN_005e3ad8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  
  puVar7 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005e3b40;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_005e3bb8;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_005e3b40:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar7;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = 0xffff;
  *(uint *)(plVar3 + 4) = uVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3bb8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 005e3be8  FUN_005e3be8 =====

undefined1  [16] FUN_005e3be8(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005e3c54;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_005e3cc0;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_005e3c54:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_005e3cc0:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 005e3cf0  FUN_005e3cf0 =====

void FUN_005e3cf0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *param_1;
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(lVar3 + 0x118) = *(undefined4 *)((long)param_1 + 0xc);
  }
  else {
    *(undefined4 *)(lVar3 + 0x11c) = *(undefined4 *)((long)param_1 + 0xc);
  }
  FUN_005df55c(lVar3);
  plVar4 = *(long **)(lVar3 + 0x168);
  while (plVar4 != (long *)(lVar3 + 0x170)) {
    FUN_005f699c(plVar4[4],*(undefined4 *)(lVar3 + 0x11c));
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 005e3d84  FUN_005e3d84 =====

void FUN_005e3d84(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + 0x350);
  while (plVar4 != (long *)(lVar3 + 0x358)) {
    FUN_005e6b34(plVar4[5],(int)param_1[1]);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}


// ===== 005e3e0c  FUN_005e3e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_005e3e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 auVar10 [12];
  
  puVar5 = (undefined8 *)operator_new(0xa0);
  puVar1 = PTR_FUN_00d51fa8;
  if (puVar5 != (undefined8 *)0x0) {
    auVar12._0_8_ = (long)puVar5 + _DAT_001f42f0;
    auVar12._8_8_ = (long)puVar5 + _UNK_001f42f8;
    auVar11._0_8_ = (long)puVar5 + _DAT_001f1930;
    auVar11._8_8_ = (long)puVar5 + _UNK_001f1938;
    auVar11 = NEON_cmeq(auVar11,0,8);
    auVar13 = NEON_cmeq(auVar12,0,8);
    uVar9 = (uint)(auVar13[0] & DAT_001f3250);
    auVar10._0_8_ =
         CONCAT17(auVar13[0xb] & UNK_001f3257,(uint7)CONCAT14(auVar13[8] & UNK_001f3254,uVar9));
    auVar10[8] = auVar11[0] & UNK_001f3258;
    auVar10[9] = auVar11[1] & UNK_001f3259;
    auVar10[10] = auVar11[2] & UNK_001f325a;
    auVar10[0xb] = auVar11[3] & UNK_001f325b;
    auVar13[0xc] = auVar11[8] & UNK_001f325c;
    auVar13._0_12_ = auVar10;
    auVar13[0xd] = auVar11[9] & UNK_001f325d;
    auVar13[0xe] = auVar11[10] & UNK_001f325e;
    auVar13[0xf] = auVar11[0xb] & UNK_001f325f;
    if ((uVar9 + (int)((ulong)auVar10._0_8_ >> 0x20) + auVar10._8_4_ + auVar13._12_4_ & 0xf) == 0) {
      *puVar5 = param_1;
      puVar5[1] = param_2;
      puVar2 = PTR_FUN_00d51fb0;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      puVar5[2] = puVar1;
      puVar5[3] = puVar2;
      puVar5[6] = puVar1;
      puVar5[7] = puVar2;
      puVar3 = PTR_FUN_00d51fb8;
      puVar5[8] = param_5;
      puVar5[9] = param_6;
      puVar4 = PTR_FUN_00d51fc0;
      puVar5[0xe] = puVar1;
      puVar5[0xc] = param_7;
      puVar5[0xd] = param_8;
      puVar5[10] = puVar3;
      puVar5[0xb] = puVar4;
      puVar5[0xf] = puVar2;
      puVar1 = PTR_FUN_00d51fc8;
      puVar5[0x10] = param_9;
      puVar5[0x11] = param_10;
      puVar2 = PTR_FUN_00d51fd0;
      puVar5[0x12] = puVar1;
      puVar5[0x13] = puVar2;
      pvVar6 = operator_new(0x18);
      local_78 = puVar5;
      local_70 = puVar5 + 0x14;
      local_68 = puVar5 + 0x14;
      FUN_0066597c(pvVar6,&local_78);
      if (local_78 != (undefined8 *)0x0) {
        uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
        uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                       ((long)local_78 - (long)local_70)) >> 5;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        puVar5 = local_70;
        if ((1 < uVar7) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
          uVar7 = uVar7 & 0x7fffffffffffffe;
          puVar5 = local_70 + uVar7 * -4;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (puVar5 != local_78) {
          puVar5 = puVar5 + -4;
          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_70 = local_78;
        operator_delete(local_78);
      }
      return pvVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005e3ff4  FUN_005e3ff4 =====

void FUN_005e3ff4(undefined1 *param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 ******local_48;
  ulong uStack_40;
  byte bStack_31;
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x18] = 0;
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = 0;
  param_1[0x30] = 0;
  param_1[0x40] = 0;
  param_1[0x10] = 0;
  param_1[0x28] = 0;
  param_1[0x38] = 0;
  puVar2 = (undefined8 *)
           FUN_005e3e0c(&DAT_001b6c38,param_1,&DAT_001e4381,param_1 + 0x10,"prio_rate",plVar7,
                        "prio_rate_raw",param_1 + 0x28,"rate_prio",param_1 + 0x38);
  (**(code **)(*param_2 + 0x10))(&local_48,param_2,"WebRTC-Audio-Allocation",0x17);
  pppppppuVar1 = (undefined8 *******)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppppppuVar1 = &local_48;
  }
  FUN_006659ac(puVar2,pppppppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  if (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar5 = (void *)puVar2[1];
      uVar6 = (ulong)((long)pvVar5 + (-0x20 - ((long)pvVar5 << 0x3b))) >> 5;
      uVar4 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3b) - ((long)pvVar3 - (long)pvVar5)) >> 5;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      if ((1 < uVar4) && ((((int)pvVar3 - (int)pvVar5 | -(int)pvVar5) & 0x1fU) == 0)) {
        uVar4 = uVar4 & 0x7fffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar4 * -0x20);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar5 != pvVar3) {
        pvVar5 = (void *)((long)pvVar5 + -0x20);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar2[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
  }
  if (((param_1[0x30] == '\x01') && (*plVar7 != 0)) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../audio/audio_send_stream.cc",0x39a,
                 "\'priority_bitrate\' and \'_raw\' are mutually exclusive but both were configured."
                );
  }
  return;
}


// ===== 005e41dc  FUN_005e41dc =====

void FUN_005e41dc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_68;
  
  uVar4 = *(undefined8 *)(param_3 + 0x62);
  local_68 = *(long **)(param_3 + 100);
  uVar5 = *(undefined8 *)(param_3 + 0x26);
  uVar3 = *(undefined1 *)(param_3 + 0x14);
  uVar1 = param_3[0x24];
  uVar2 = *param_3;
  if (local_68 != (long *)0x0) {
    (**(code **)*local_68)();
  }
  uVar4 = FUN_005e7a48(param_2,uVar5,param_7,uVar4,param_3 + 0x5a,uVar3,uVar1,uVar2,&local_68,
                       param_5);
  FUN_005e42c8(param_1,param_2,param_3,param_4,param_5,param_6,param_8,uVar4);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  return;
}


// ===== 005e42c8  FUN_005e42c8 =====

void FUN_005e42c8(undefined8 *param_1,long *param_2,undefined4 *param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long *****ppppplVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  long ****local_78;
  ulong local_70;
  byte bStack_61;
  
  *param_1 = &PTR_FUN_00d262d8;
  param_1[1] = &PTR_FUN_00d26350;
  lVar6 = *param_2;
  param_1[2] = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar6 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  param_1[6] = param_2[4];
  param_1[5] = lVar6;
  param_1[4] = lVar8;
  param_1[3] = lVar7;
  FUN_00660fac(param_1 + 8);
  (**(code **)(*(long *)param_1[3] + 0x10))
            (&local_78,(long *)param_1[3],"WebRTC-Audio-ABWENoTWCC",0x17);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_78;
    if (-1 < (char)bStack_61) {
      ppppplVar1 = &local_78;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)(param_1 + 10) = bVar2;
  *(bool *)((long)param_1 + 0x51) = bVar2;
  (**(code **)(*(long *)param_1[3] + 0x10))
            (&local_78,(long *)param_1[3],"WebRTC-Audio-AlrProbing",0x17);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 8) {
    bVar2 = true;
  }
  else {
    ppppplVar1 = (long *****)local_78;
    if (-1 < (char)bStack_61) {
      ppppplVar1 = &local_78;
    }
    bVar2 = *ppppplVar1 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)((long)param_1 + 0x52) = bVar2;
  FUN_005e3ff4(param_1 + 0xb,param_1[3]);
  FUN_00842718(param_1 + 0x14,0);
  puVar3 = (undefined8 *)*param_4;
  param_1[0x47] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  param_1[0x48] = param_8;
  (**(code **)(*(long *)param_1[3] + 0x10))
            (&local_78,(long *)param_1[3],"WebRTC-Audio-LegacyOverhead",0x1b);
  uVar5 = local_70;
  if (-1 < (char)bStack_61) {
    uVar5 = (ulong)bStack_61;
  }
  if (uVar5 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_78;
    if (-1 < (char)bStack_61) {
      ppppplVar1 = &local_78;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)(param_1 + 0x49) = bVar2;
  (**(code **)(*(long *)param_1[3] + 0x10))
            (&local_78,(long *)param_1[3],"WebRTC-Audio-PriorityBitrate",0x1c);
  if (-1 < (char)bStack_61) {
    local_70 = (ulong)bStack_61;
  }
  if (local_70 < 8) {
    bVar2 = true;
  }
  else {
    ppppplVar1 = (long *****)local_78;
    if (-1 < (char)bStack_61) {
      ppppplVar1 = &local_78;
    }
    bVar2 = *ppppplVar1 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  *(bool *)((long)param_1 + 0x249) = bVar2;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  local_78 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_78);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x25c),(pthread_mutexattr_t *)&local_78);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_78);
  FUN_005db784(param_1 + 0x51);
  param_1[0x59] = param_6;
  param_1[0x5a] = param_5;
  uVar4 = (**(code **)(*(long *)param_1[0x48] + 0xa8))();
  param_1[0x5b] = uVar4;
  uVar11 = param_7[3];
  uVar10 = param_7[2];
  uVar9 = param_7[5];
  uVar4 = param_7[4];
  uVar13 = param_7[1];
  uVar12 = *param_7;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x5d] = uVar13;
  param_1[0x5c] = uVar12;
  param_1[0x5f] = uVar11;
  param_1[0x5e] = uVar10;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x61] = uVar9;
  param_1[0x60] = uVar4;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0x559,"AudioSendStream: ",*param_3
                );
  }
  local_90 = FUN_00433984;
  uStack_88 = 0;
  FUN_005e46c4(param_1,param_3,1,auStack_a0);
  (*local_90)(0,auStack_a0,auStack_a0);
  return;
}


// ===== 005e46c4  FUN_005e46c4 =====

/* WARNING: Removing unreachable block (ram,0x005e4738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e46c4(ulong param_1,int *param_2,ulong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *__s1;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  byte bVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  void *pvVar18;
  long lVar19;
  size_t sVar20;
  long lVar21;
  long *plVar22;
  size_t sVar23;
  long *plVar24;
  uint uVar25;
  size_t sVar26;
  byte bVar27;
  long lVar28;
  undefined1 auStack_170 [8];
  void *local_168;
  char cStack_151;
  undefined1 auStack_148 [8];
  void *local_140;
  char cStack_129;
  undefined4 local_120 [2];
  char *local_118;
  undefined8 local_110;
  long lStack_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fa;
  undefined1 auStack_f8 [8];
  void *local_f0;
  char cStack_d9;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  undefined8 local_b0;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 *puStack_9c;
  long *local_90;
  long *local_88;
  ulong *local_80;
  ulong local_78 [3];
  
  uVar16 = FUN_00417e08();
  if ((uVar16 & 1) == 0) {
    FUN_008428ec(&local_b0,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../audio/audio_send_stream.cc",0x749,
                 "AudioSendStream::ConfigureStream: ",&local_b0);
  }
  plVar22 = *(long **)(param_1 + 0x30);
  piVar1 = (int *)(param_1 + 0xa0);
  if ((((param_3 & 1) == 0) && (piVar1 != (int *)0x0)) && (*param_2 == *piVar1)) {
    lVar19 = *(long *)(param_2 + 0x16);
    lVar6 = *(long *)(param_2 + 0x18);
    lVar21 = *(long *)(param_1 + 0xf8);
    if (lVar6 - lVar19 != *(long *)(param_1 + 0x100) - lVar21) goto LAB_005e48a0;
    if (lVar19 != lVar6) {
      lVar28 = 0;
      do {
        puVar2 = (undefined8 *)(lVar19 + lVar28);
        puVar3 = (undefined8 *)(lVar21 + lVar28);
        bVar27 = *(byte *)((long)puVar2 + 0x17);
        bVar7 = *(byte *)((long)puVar3 + 0x17);
        sVar20 = puVar2[1];
        if (-1 < (char)bVar27) {
          sVar20 = (ulong)bVar27;
        }
        sVar26 = puVar3[1];
        if (-1 < (char)bVar7) {
          sVar26 = (ulong)bVar7;
        }
        if (sVar20 != sVar26) goto LAB_005e48a0;
        __s1 = (undefined8 *)*puVar2;
        if (-1 < (char)bVar27) {
          __s1 = puVar2;
        }
        puVar2 = (undefined8 *)*puVar3;
        if (-1 < (char)bVar7) {
          puVar2 = puVar3;
        }
        iVar14 = memcmp(__s1,puVar2,sVar20);
        if (iVar14 != 0) goto LAB_005e48a0;
        if ((*(int *)(lVar19 + lVar28 + 0x18) != *(int *)(lVar21 + lVar28 + 0x18)) ||
           (*(char *)(lVar19 + lVar28 + 0x1c) != *(char *)(lVar21 + lVar28 + 0x1c)))
        goto LAB_005e48a0;
        lVar28 = lVar28 + 0x20;
      } while (lVar19 + lVar28 != lVar6);
    }
    if ((char)param_2[0x50] == '\x01') {
      if (*(char *)(param_1 + 0x1e0) != '\0') {
        bVar27 = *(byte *)((long)param_2 + 0xf7);
        bVar7 = *(byte *)(param_1 + 0x197);
        sVar20 = *(size_t *)(param_2 + 0x3a);
        if (-1 < (char)bVar27) {
          sVar20 = (ulong)bVar27;
        }
        sVar26 = *(size_t *)(param_1 + 0x188);
        if (-1 < (char)bVar7) {
          sVar26 = (ulong)bVar7;
        }
        if (sVar20 == sVar26) {
          piVar17 = *(int **)(param_2 + 0x38);
          if (-1 < (char)bVar27) {
            piVar17 = param_2 + 0x38;
          }
          pvVar18 = *(void **)(param_1 + 0x180);
          if (-1 < (char)bVar7) {
            pvVar18 = (void *)(param_1 + 0x180);
          }
          iVar14 = memcmp(piVar17,pvVar18,sVar20);
          if ((iVar14 == 0) && (param_2[0x36] == *(int *)(param_1 + 0x178))) goto LAB_005e4954;
        }
      }
      goto LAB_005e48a0;
    }
    if (*(char *)(param_1 + 0x1e0) != '\0') goto LAB_005e48a0;
  }
  else {
LAB_005e48a0:
    piVar17 = (int *)operator_new(0x68);
    FUN_006cd4d4();
    *piVar17 = *param_2;
    if (piVar17 + 0xc != param_2 + 0x16) {
      FUN_005e2544();
    }
    if ((char)param_2[0x50] == '\x01') {
      uVar16 = *(ulong *)(piVar17 + 0x16);
      local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffff00000000);
      if (uVar16 < *(ulong *)(piVar17 + 0x18)) {
        if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar4 = *(ulong *)(param_2 + 0x3a);
        piVar8 = *(int **)(param_2 + 0x38);
        if (-1 < (char)*(byte *)((long)param_2 + 0xf7)) {
          uVar4 = (ulong)*(byte *)((long)param_2 + 0xf7);
          piVar8 = param_2 + 0x38;
        }
        FUN_006cd614(uVar16,piVar8,uVar4,param_2[0x36],0);
        lVar19 = uVar16 + 0x20;
      }
      else {
        lVar19 = FUN_005e2c7c(piVar17 + 0x14,param_2 + 0x38,param_2 + 0x36,&local_b0);
      }
      *(long *)(piVar17 + 0x16) = lVar19;
    }
    pvVar18 = operator_new(0x18);
    FUN_006cd3c8(pvVar18,piVar17);
    (**(code **)(*plVar22 + 0x28))(plVar22,pvVar18);
  }
LAB_005e4954:
  if (((param_3 & 1) != 0) && ((*(byte *)(param_1 + 0x308) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0xa8))(*(long **)(param_1 + 0x2d8),param_1 + 0x2e0);
  }
  if ((param_3 & 1) == 0) {
    bVar7 = *(byte *)(param_1 + 0x127);
    bVar27 = *(byte *)((long)param_2 + 0x87);
    sVar23 = (size_t)bVar27;
    sVar26 = *(size_t *)(param_2 + 0x1e);
    sVar20 = *(size_t *)(param_1 + 0x118);
    if (-1 < (char)bVar7) {
      sVar20 = (ulong)bVar7;
    }
    sVar5 = sVar26;
    if (-1 < (char)bVar27) {
      sVar5 = sVar23;
    }
    if (sVar20 != sVar5) goto LAB_005e49e4;
    pvVar18 = *(void **)(param_1 + 0x110);
    if (-1 < (char)bVar7) {
      pvVar18 = (void *)(param_1 + 0x110);
    }
    piVar17 = *(int **)(param_2 + 0x1c);
    if (-1 < (char)bVar27) {
      piVar17 = param_2 + 0x1c;
    }
    iVar14 = memcmp(pvVar18,piVar17,sVar20);
    if (iVar14 != 0) goto LAB_005e49e4;
LAB_005e4a18:
    plVar22 = *(long **)(param_2 + 0x62);
    if (plVar22 != *(long **)(param_1 + 0x228)) goto LAB_005e4a28;
LAB_005e4a74:
    plVar22 = *(long **)(param_2 + 100);
    if (plVar22 != *(long **)(param_1 + 0x230)) goto LAB_005e4a84;
LAB_005e4ae0:
    if ((char)param_2[0x14] != *(char *)(param_1 + 0xf0)) {
      (**(code **)(**(long **)(param_1 + 0x2d8) + 0x60))();
    }
    sVar20 = *(long *)(param_2 + 0x10) - (long)*(void **)(param_2 + 0xe);
    if ((sVar20 != *(long *)(param_1 + 0xe0) - (long)*(void **)(param_1 + 0xd8)) ||
       (iVar14 = memcmp(*(void **)(param_2 + 0xe),*(void **)(param_1 + 0xd8),sVar20), iVar14 != 0))
    goto LAB_005e4b20;
  }
  else {
    bVar27 = *(byte *)((long)param_2 + 0x87);
    sVar23 = (size_t)bVar27;
    sVar26 = *(size_t *)(param_2 + 0x1e);
LAB_005e49e4:
    piVar17 = *(int **)(param_2 + 0x1c);
    if (-1 < (char)bVar27) {
      sVar26 = sVar23;
      piVar17 = param_2 + 0x1c;
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0x38))(*(long **)(param_1 + 0x240),piVar17,sVar26);
    if ((param_3 & 1) == 0) goto LAB_005e4a18;
    plVar22 = *(long **)(param_2 + 0x62);
LAB_005e4a28:
    plVar24 = *(long **)(param_1 + 0x240);
    local_88 = plVar22;
    if (plVar22 != (long *)0x0) {
      (**(code **)*plVar22)();
    }
    (**(code **)(*plVar24 + 0xc0))(plVar24,&local_88);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    if ((param_3 & 1) == 0) goto LAB_005e4a74;
    plVar22 = *(long **)(param_2 + 100);
LAB_005e4a84:
    plVar24 = *(long **)(param_1 + 0x240);
    local_90 = plVar22;
    if (plVar22 != (long *)0x0) {
      (**(code **)*plVar22)();
    }
    (**(code **)(*plVar24 + 200))(plVar24,&local_90);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 8))();
    }
    if ((param_3 & 1) == 0) goto LAB_005e4ae0;
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x60))
              (*(long **)(param_1 + 0x2d8),(char)param_2[0x14]);
LAB_005e4b20:
    lVar21 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe);
    lVar19 = 0;
    if (lVar21 != 0) {
      lVar19 = *(long *)(param_2 + 0xe);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0x98))
              (*(long **)(param_1 + 0x240),lVar19,lVar21 >> 2);
  }
  puStack_9c = &DAT_aaaaaaaaaaaaaaaa;
  iStack_a0 = -0x55555556;
  iStack_a8 = -0x55555556;
  iStack_a4 = -0x55555556;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005e526c(&local_b0,param_1 + 0xf8);
  puStack_bc = &DAT_aaaaaaaaaaaaaaaa;
  iStack_c0 = -0x55555556;
  local_c8 = -0x55555556;
  local_c4 = -0x55555556;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005e526c(&local_d0,param_2 + 0x16);
  if ((param_3 & 1) == 0) {
    if ((int)local_d0 != (int)local_b0) {
      (**(code **)(**(long **)(param_1 + 0x240) + 0x40))
                (*(long **)(param_1 + 0x240),(int)local_d0 != 0);
    }
    iVar14 = local_d0._4_4_;
    if (local_d0._4_4_ != local_b0._4_4_) goto LAB_005e4bd0;
LAB_005e4c1c:
    iVar14 = local_c4;
    if ((local_c4 != iStack_a4) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
      (**(code **)(**(long **)(param_1 + 0x240) + 0x50))();
      goto LAB_005e4c44;
    }
LAB_005e4ccc:
    iVar14 = iStack_c0;
    if (iStack_c0 != iStack_a0) goto LAB_005e4d40;
    sVar23 = (size_t)*(byte *)((long)param_2 + 0x37);
    bVar27 = *(byte *)(param_1 + 0xd7);
    sVar26 = *(size_t *)(param_2 + 10);
    uVar25 = (uint)(char)*(byte *)((long)param_2 + 0x37);
    sVar20 = sVar26;
    if (-1 < (int)uVar25) {
      sVar20 = sVar23;
    }
    sVar5 = *(size_t *)(param_1 + 200);
    if (-1 < (char)bVar27) {
      sVar5 = (ulong)bVar27;
    }
    if (sVar20 != sVar5) {
      bVar13 = false;
      if (iStack_c0 == 0) goto LAB_005e4dc8;
LAB_005e4d5c:
      if (bVar13) goto LAB_005e4dc8;
      goto LAB_005e4d60;
    }
    piVar17 = *(int **)(param_2 + 8);
    if (-1 < (int)uVar25) {
      piVar17 = param_2 + 8;
    }
    puVar2 = (undefined8 *)*(void **)(param_1 + 0xc0);
    if (-1 < (char)bVar27) {
      puVar2 = (undefined8 *)(param_1 + 0xc0);
    }
    iVar15 = memcmp(piVar17,puVar2,sVar20);
    bVar13 = iVar15 == 0;
    if (iVar14 != 0) goto LAB_005e4d5c;
LAB_005e4dc8:
    if (local_c8 == iStack_a8) goto LAB_005e4e18;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x240) + 0x40))
              (*(long **)(param_1 + 0x240),(int)local_d0 != 0);
    iVar14 = local_d0._4_4_;
LAB_005e4bd0:
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x70))
              (*(long **)(param_1 + 0x2d8),
               "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",0x3a);
    if (iVar14 != 0) {
      (**(code **)(**(long **)(param_1 + 0x2d8) + 0x68))
                (*(long **)(param_1 + 0x2d8),
                 "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",0x3a,iVar14);
    }
    iVar14 = local_c4;
    if ((param_3 & 1) == 0) goto LAB_005e4c1c;
LAB_005e4c44:
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x70))
              (*(long **)(param_1 + 0x2d8),
               "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",0x49);
    if ((((*(byte *)(param_1 + 0x50) & 1) == 0) && (iVar14 != 0)) &&
       ((**(code **)(**(long **)(param_1 + 0x2d8) + 0x68))
                  (*(long **)(param_1 + 0x2d8),
                   "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",0x49,
                   iVar14), *(char *)(param_1 + 0x52) == '\x01')) {
      (**(code **)(**(long **)(param_1 + 0x2d0) + 0xa0))(*(long **)(param_1 + 0x2d0),1);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0x48))
              (*(long **)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x2d0));
    if ((param_3 & 1) == 0) goto LAB_005e4ccc;
LAB_005e4d40:
    if (iStack_c0 != 0) {
      sVar23 = (size_t)*(byte *)((long)param_2 + 0x37);
      sVar26 = *(size_t *)(param_2 + 10);
      uVar25 = (uint)*(byte *)((long)param_2 + 0x37);
      iVar14 = iStack_c0;
LAB_005e4d60:
      if ((uVar25 & 0x80) == 0) {
        sVar26 = sVar23;
      }
      if (sVar26 != 0) {
        (**(code **)(**(long **)(param_1 + 0x2d8) + 0x68))
                  (*(long **)(param_1 + 0x2d8),"urn:ietf:params:rtp-hdrext:sdes:mid",0x23,iVar14);
        uVar16 = *(ulong *)(param_2 + 10);
        piVar17 = *(int **)(param_2 + 8);
        if (-1 < (char)*(byte *)((long)param_2 + 0x37)) {
          uVar16 = (ulong)*(byte *)((long)param_2 + 0x37);
          piVar17 = param_2 + 8;
        }
        (**(code **)(**(long **)(param_1 + 0x2d8) + 0xd8))
                  (*(long **)(param_1 + 0x2d8),piVar17,uVar16);
      }
    }
    if ((param_3 & 1) == 0) goto LAB_005e4dc8;
  }
  iVar14 = local_c8;
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0x70))
            (*(long **)(param_1 + 0x2d8),
             "http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time",0x3d);
  if (iVar14 != 0) {
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x68))
              (*(long **)(param_1 + 0x2d8),
               "http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time",0x3d,iVar14);
  }
LAB_005e4e18:
  uVar16 = FUN_005e5730(param_1,param_2);
  if ((uVar16 & 1) == 0) {
    uVar16 = FUN_004249b0();
    if ((uVar16 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../audio/audio_send_stream.cc",0xa63,
                   "Failed to set up send codec state.");
    }
    local_120[0] = 10;
    local_118 = (char *)operator_new(0x28);
    uVar12 = s_Failed_to_set_up_send_codec_stat_001ae305._24_8_;
    uVar11 = s_Failed_to_set_up_send_codec_stat_001ae305._16_8_;
    uVar10 = s_Failed_to_set_up_send_codec_stat_001ae305._8_8_;
    uVar9 = s_Failed_to_set_up_send_codec_stat_001ae305._0_8_;
    lStack_108 = _UNK_001f25e8;
    local_110 = _DAT_001f25e0;
    if (local_118 + 0x22 < local_118) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((local_118 < "ailed to set up send codec state.") &&
       ("Failed to set up send codec state." < local_118 + 0x22)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    local_118[0x20] = 'e';
    local_118[0x21] = '.';
    local_118[0x22] = '\0';
    *(undefined8 *)(local_118 + 8) = uVar10;
    *(undefined8 *)local_118 = uVar9;
    *(undefined8 *)(local_118 + 0x18) = uVar12;
    *(undefined8 *)(local_118 + 0x10) = uVar11;
    local_100 = 0;
    local_fc = 0;
    local_fa = 0;
    FUN_0088a3f0(auStack_f8,param_4,local_120);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
    if (lStack_108 < 0) {
      operator_delete(local_118);
    }
  }
  lVar21 = *(long *)(param_1 + 0x310);
  lVar19 = (**(code **)(**(long **)(param_1 + 0x2d8) + 0x1b0))();
  local_78[0] = lVar19 + lVar21;
  if (*(ulong *)(param_1 + 0x318) != local_78[0]) {
    *(ulong *)(param_1 + 0x318) = local_78[0];
    local_80 = local_78;
    (**(code **)(**(long **)(param_1 + 0x240) + 0x30))
              (*(long **)(param_1 + 0x240),&local_80,FUN_005e7740);
    if (*(char *)(param_1 + 800) == '\x01') {
      FUN_005e5e3c(param_1);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0xd8))
              (*(long **)(param_1 + 0x240),local_78[0] & 0xffffffff);
  }
  local_78[0] = param_1;
  (**(code **)(**(long **)(param_1 + 0x240) + 0x30))
            (*(long **)(param_1 + 0x240),local_78,FUN_005e7638);
  if (*(char *)(param_1 + 600) == '\x01') {
    FUN_005e5910(param_1,param_2);
  }
  FUN_005e5af0(piVar1,param_2);
  FUN_005ecd48(auStack_170);
  FUN_0088a3f0(auStack_148,param_4,auStack_170);
  if (cStack_129 < '\0') {
    operator_delete(local_140);
  }
  if (cStack_151 < '\0') {
    operator_delete(local_168);
  }
  return;
}


// ===== 005e5088  FUN_005e5088 =====

void FUN_005e5088(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0x5c9,"~AudioSendStream: ",
                 *(undefined4 *)(param_1 + 0xa0));
  }
  (**(code **)(**(long **)(param_1 + 0x240) + 0x50))();
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x288));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x25c));
  plVar3 = *(long **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long **)(param_1 + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x238) + 8))();
  }
  FUN_008427b0(param_1 + 0xa0);
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x005e5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 005e5164  FUN_005e5164 =====

void FUN_005e5164(long param_1)

{
  FUN_005e5088(param_1 + -8);
  return;
}


// ===== 005e5170  FUN_005e5170 =====

void FUN_005e5170(void *param_1)

{
  FUN_005e5088();
  operator_delete(param_1);
  return;
}


// ===== 005e51a0  FUN_005e51a0 =====

void FUN_005e51a0(long param_1)

{
  FUN_005e5088((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005e51d4  FUN_005e51d4 =====

long FUN_005e51d4(long param_1)

{
  return param_1 + 0xa0;
}


// ===== 005e51e0  FUN_005e51e0 =====

void FUN_005e51e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  (**(code **)(param_3 + 0x10))(1,param_3,auStack_50);
  uStack_38 = *(undefined8 *)(param_3 + 0x18);
  local_40 = *(code **)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  FUN_005e46c4(param_1,param_2,0,auStack_50);
  (*local_40)(0,auStack_50,auStack_50);
  return;
}


// ===== 005e526c  FUN_005e526c =====

void FUN_005e526c(undefined4 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  *(undefined1 **)(param_1 + 3) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 1) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 5) = &DAT_aaaaaaaaaaaaaaaa;
  if (puVar12 == puVar1) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar3 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    do {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        lVar4 = puVar12[1];
        if (lVar4 < 0x36) {
          if (lVar4 == 0x23) {
            plVar5 = (long *)*puVar12;
            if ((((*plVar5 == 0x667465693a6e7275 && plVar5[1] == 0x3a736d617261703a) &&
                 plVar5[2] == 0x657264682d707472) && plVar5[3] == 0x3a736564733a7478) &&
                *(long *)((long)plVar5 + 0x1b) == 0x64696d3a73656473) {
              uVar10 = *(undefined4 *)(puVar12 + 3);
            }
          }
          else if (lVar4 == 0x2b) {
            plVar5 = (long *)*puVar12;
            if (((((*plVar5 == 0x667465693a6e7275 && plVar5[1] == 0x3a736d617261703a) &&
                  plVar5[2] == 0x657264682d707472) && plVar5[3] == 0x2d637273733a7478) &&
                plVar5[4] == 0x656c2d6f69647561) &&
                *(long *)((long)plVar5 + 0x23) == 0x6c6576656c2d6f69) {
              uVar6 = *(undefined4 *)(puVar12 + 3);
            }
          }
          else if ((lVar4 == 0x2d) &&
                  (plVar5 = (long *)*puVar12,
                  ((((*plVar5 == 0x667465693a6e7275 && plVar5[1] == 0x3a736d617261703a) &&
                    plVar5[2] == 0x657264682d707472) && plVar5[3] == 0x3a736564733a7478) &&
                  plVar5[4] == 0x657274732d707472) &&
                  *(long *)((long)plVar5 + 0x25) == 0x64692d6d61657274)) {
            uVar11 = *(undefined4 *)(puVar12 + 3);
          }
        }
        else if (lVar4 < 0x3d) {
          if (lVar4 == 0x36) {
            plVar5 = (long *)*puVar12;
            if ((((((*plVar5 == 0x667465693a6e7275 && plVar5[1] == 0x3a736d617261703a) &&
                   plVar5[2] == 0x657264682d707472) && plVar5[3] == 0x3a736564733a7478) &&
                 plVar5[4] == 0x6465726961706572) && plVar5[5] == 0x7274732d7074722d) &&
                *(long *)((long)plVar5 + 0x2e) == 0x64692d6d61657274) {
              uVar3 = *(undefined4 *)(puVar12 + 3);
            }
          }
          else if ((lVar4 == 0x3a) &&
                  (plVar5 = (long *)*puVar12,
                  ((((((*plVar5 == 0x772f2f3a70747468 && plVar5[1] == 0x74726265772e7777) &&
                      plVar5[2] == 0x78652f67726f2e63) && plVar5[3] == 0x746e656d69726570) &&
                    plVar5[4] == 0x64682d7074722f73) && plVar5[5] == 0x7362612f74786572) &&
                  plVar5[6] == 0x69742d646e65732d) && (short)plVar5[7] == 0x656d)) {
            uVar7 = *(undefined4 *)(puVar12 + 3);
          }
        }
        else if (lVar4 == 0x3d) {
          plVar5 = (long *)*puVar12;
          if (((((((*plVar5 == 0x772f2f3a70747468 && plVar5[1] == 0x74726265772e7777) &&
                  plVar5[2] == 0x78652f67726f2e63) && plVar5[3] == 0x746e656d69726570) &&
                plVar5[4] == 0x64682d7074722f73) && plVar5[5] == 0x7362612f74786572) &&
              plVar5[6] == 0x657275747061632d) &&
              *(long *)((long)plVar5 + 0x35) == 0x656d69742d657275) {
            uVar9 = *(undefined4 *)(puVar12 + 3);
          }
        }
        else if ((lVar4 == 0x49) &&
                (iVar2 = memcmp((void *)*puVar12,
                                "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01"
                                ,0x49), iVar2 == 0)) {
          uVar8 = *(undefined4 *)(puVar12 + 3);
        }
      }
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar1);
  }
  param_1[5] = uVar11;
  param_1[6] = uVar3;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  param_1[1] = uVar7;
  param_1[2] = uVar9;
  *param_1 = uVar6;
  return;
}


// ===== 005e5730  FUN_005e5730 =====

undefined8 FUN_005e5730(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_18;
  
  if (*(char *)(param_2 + 0x140) != '\x01') {
    return 1;
  }
  if ((*(char *)(param_1 + 0x1e0) != '\0') &&
     (uVar5 = FUN_00843498(param_2 + 0xd8,param_1 + 0x178), (uVar5 & 1) != 0)) {
    bVar2 = *(byte *)(param_1 + 0x170);
    if ((bVar2 & *(byte *)(param_2 + 0xd0)) == 0) {
      if (*(byte *)(param_2 + 0xd0) == bVar2) {
        return 1;
      }
    }
    else {
      if ((bVar2 & 1) == 0) goto LAB_005e58fc;
      bVar2 = *(byte *)(param_2 + 0xcf);
      bVar3 = *(byte *)(param_1 + 0x16f);
      __n = *(size_t *)(param_2 + 0xc0);
      if (-1 < (char)bVar2) {
        __n = (ulong)bVar2;
      }
      sVar1 = *(size_t *)(param_1 + 0x160);
      if (-1 < (char)bVar3) {
        sVar1 = (ulong)bVar3;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 *)*(void **)(param_2 + 0xb8);
        if (-1 < (char)bVar2) {
          __s1 = (undefined8 *)(param_2 + 0xb8);
        }
        __s2 = (undefined8 *)*(void **)(param_1 + 0x158);
        if (-1 < (char)bVar3) {
          __s2 = (undefined8 *)(param_1 + 0x158);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) {
          return 1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
LAB_005e58e8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar5 = FUN_00667a08(param_2 + 0xe0,param_1 + 0x180);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(param_2 + 0x140) & 1) == 0) || ((*(byte *)(param_1 + 0x1e0) & 1) == 0))
      goto LAB_005e58e8;
      if (*(int *)(param_2 + 0xd8) == *(int *)(param_1 + 0x178)) {
        bVar2 = *(byte *)(param_1 + 0x1d0);
        if ((bVar2 & *(byte *)(param_2 + 0x130)) == 0) {
          if (*(byte *)(param_2 + 0x130) == bVar2) {
LAB_005e5854:
            if (*(char *)(param_2 + 0x138) == '\x01') {
              uVar5 = FUN_005e6f14(param_2 + 0x134,param_1 + 0x1d4);
              if ((uVar5 & 1) != 0) {
                local_18 = param_2 + 0x134;
                (**(code **)(**(long **)(param_1 + 0x240) + 0x30))
                          (*(long **)(param_1 + 0x240),&local_18,FUN_005e7760);
              }
            }
            FUN_005e6f6c(param_1,param_2);
            FUN_005e709c(param_1,param_2);
            return 1;
          }
        }
        else {
          if ((bVar2 & 1) == 0) {
LAB_005e58fc:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(param_2 + 300) == *(int *)(param_1 + 0x1cc)) goto LAB_005e5854;
        }
      }
    }
  }
  uVar6 = FUN_005e6bf0(param_1,param_2);
  return uVar6;
}


// ===== 005e5910  FUN_005e5910 =====

void FUN_005e5910(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_4c [12];
  int local_40;
  
  iVar2 = *(int *)(param_2 + 0xa0);
  if (((*(int *)(param_1 + 0x140) == iVar2) &&
      (*(int *)(param_1 + 0x144) == *(int *)(param_2 + 0xa4))) &&
     (*(double *)(param_1 + 0x148) == *(double *)(param_2 + 0xa8))) {
    FUN_005e526c(auStack_4c,param_1 + 0xf8);
    iVar5 = local_40;
    FUN_005e526c(auStack_4c,param_2 + 0x58);
    if (iVar5 == local_40) {
      bVar3 = *(byte *)(param_2 + 0xd0);
      if ((bVar3 & *(byte *)(param_1 + 0x170)) == 0) {
        if (*(byte *)(param_1 + 0x170) == bVar3) {
          return;
        }
      }
      else {
        if ((bVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        bVar3 = *(byte *)(param_1 + 0x16f);
        bVar4 = *(byte *)(param_2 + 0xcf);
        __n = *(size_t *)(param_1 + 0x160);
        if (-1 < (char)bVar3) {
          __n = (ulong)bVar3;
        }
        sVar1 = *(size_t *)(param_2 + 0xc0);
        if (-1 < (char)bVar4) {
          sVar1 = (ulong)bVar4;
        }
        if (__n == sVar1) {
          __s1 = (undefined8 *)*(void **)(param_1 + 0x158);
          if (-1 < (char)bVar3) {
            __s1 = (undefined8 *)(param_1 + 0x158);
          }
          __s2 = (undefined8 *)*(void **)(param_2 + 0xb8);
          if (-1 < (char)bVar4) {
            __s2 = (undefined8 *)(param_2 + 0xb8);
          }
          iVar5 = memcmp(__s1,__s2,__n);
          if (iVar5 == 0) {
            return;
          }
        }
      }
    }
  }
  if (((iVar2 == -1) || ((*(byte *)(param_2 + 0xb0) & 1) != 0)) ||
     ((*(int *)(param_2 + 0xa4) == -1 || ((*(byte *)(param_2 + 0xb1) & 1) == 0)))) {
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0xd0))(*(long **)(param_1 + 0x2d0),0);
    *(undefined1 *)(param_1 + 800) = 0;
    (**(code **)(**(long **)(param_1 + 0x2c8) + 8))(*(long **)(param_1 + 0x2c8),param_1 + 8);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0xd0))(*(long **)(param_1 + 0x2d0),1);
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0xd8))();
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0xa8);
    FUN_005e5e3c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x005e5ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0x130))(*(long **)(param_1 + 0x2d8),uVar6);
  return;
}


// ===== 005e5af0  FUN_005e5af0 =====

long FUN_005e5af0(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_005e7184();
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  uVar9 = *(undefined8 *)(param_2 + 0xa8);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined2 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  *(undefined2 *)(param_1 + 0xb0) = uVar5;
  FUN_005e7520(param_1 + 0xb8,param_2 + 0xb8);
  cVar3 = *(char *)(param_1 + 0x140);
  if (cVar3 == *(char *)(param_2 + 0x140)) {
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
      FUN_006678fc(param_1 + 0xe0,param_2 + 0xe0);
      uVar7 = *(undefined8 *)(param_2 + 0x120);
      uVar9 = *(undefined8 *)(param_2 + 0x131);
      uVar8 = *(undefined8 *)(param_2 + 0x129);
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
      *(undefined8 *)(param_1 + 0x120) = uVar7;
      *(undefined8 *)(param_1 + 0x131) = uVar9;
      *(undefined8 *)(param_1 + 0x129) = uVar8;
      puVar6 = *(undefined8 **)(param_2 + 0x148);
      goto joined_r0x005e5c44;
    }
  }
  else {
    if (cVar3 == '\0') {
      if (param_1 == -0xd8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
      FUN_00667388(param_1 + 0xe0,param_2 + 0xe0);
      uVar9 = *(undefined8 *)(param_2 + 0x128);
      uVar8 = *(undefined8 *)(param_2 + 0x120);
      uVar7 = *(undefined8 *)(param_2 + 0x129);
      *(undefined8 *)(param_1 + 0x131) = *(undefined8 *)(param_2 + 0x131);
      *(undefined8 *)(param_1 + 0x129) = uVar7;
      *(undefined8 *)(param_1 + 0x128) = uVar9;
      *(undefined8 *)(param_1 + 0x120) = uVar8;
      *(undefined1 *)(param_1 + 0x140) = 1;
      puVar6 = *(undefined8 **)(param_2 + 0x148);
      goto joined_r0x005e5c44;
    }
    FUN_0084348c(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  puVar6 = *(undefined8 **)(param_2 + 0x148);
joined_r0x005e5c44:
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(undefined8 **)(param_1 + 0x148) = puVar6;
  if (param_1 == param_2) {
    uVar2 = *(undefined4 *)(param_2 + 0x168);
    *(undefined1 *)(param_1 + 0x16c) = *(undefined1 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x168) = uVar2;
    puVar6 = *(undefined8 **)(param_2 + 0x188);
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x167);
    if (*(char *)(param_1 + 0x167) < '\0') {
      uVar1 = *(ulong *)(param_2 + 0x158);
      puVar6 = *(undefined8 **)(param_2 + 0x150);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
        puVar6 = (undefined8 *)(param_2 + 0x150);
      }
      FUN_00547f08(param_1 + 0x150,puVar6,uVar1);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(param_1 + 0x150,*(undefined8 *)(param_2 + 0x150),*(undefined8 *)(param_2 + 0x158)
                  );
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x158);
      uVar7 = *(undefined8 *)(param_2 + 0x150);
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(param_1 + 0x158) = uVar8;
      *(undefined8 *)(param_1 + 0x150) = uVar7;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x168);
    *(undefined1 *)(param_1 + 0x16c) = *(undefined1 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x168) = uVar2;
    FUN_005d4868(param_1 + 0x170,*(long *)(param_2 + 0x170),*(long *)(param_2 + 0x178),
                 *(long *)(param_2 + 0x178) - *(long *)(param_2 + 0x170) >> 1);
    puVar6 = *(undefined8 **)(param_2 + 0x188);
  }
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
  }
  *(undefined8 **)(param_1 + 0x188) = puVar6;
  puVar6 = *(undefined8 **)(param_2 + 400);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 8))();
  }
  *(undefined8 **)(param_1 + 400) = puVar6;
  return param_1;
}


// ===== 005e5d28  FUN_005e5d28 =====

void FUN_005e5d28(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 600) & 1) != 0) {
    return;
  }
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0xb69,"AudioSendStream::Start: ",
                 *(undefined4 *)(param_1 + 0xa0));
  }
  if (((((*(byte *)(param_1 + 0x150) & 1) == 0) && (*(int *)(param_1 + 0x140) != -1)) &&
      (*(int *)(param_1 + 0x144) != -1)) &&
     (((*(byte *)(param_1 + 0x50) & 1) != 0 || (*(char *)(param_1 + 0x151) == '\x01')))) {
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0xd0))(*(long **)(param_1 + 0x2d0),1);
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0xd8))();
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x130))(*(long **)(param_1 + 0x2d8),1);
    FUN_005e5e3c(param_1);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x130))(*(long **)(param_1 + 0x2d8),0);
  }
  (**(code **)(**(long **)(param_1 + 0x240) + 0xb0))();
  *(undefined1 *)(param_1 + 600) = 1;
  FUN_005d5000(*(undefined8 *)(param_1 + 0x238),param_1,*(undefined4 *)(param_1 + 0x24c),
               *(undefined8 *)(param_1 + 0x250));
  return;
}


// ===== 005e5e3c  FUN_005e5e3c =====

void FUN_005e5e3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined4 local_68;
  long local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005e6804(&local_40);
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x248) == '\x01') {
    local_60 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) && (local_60 = lVar2, lVar2 != -0x8000000000000000)) {
      local_60 = lVar2 + 20000;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x338) & 1) == 0) goto LAB_005e5f78;
    local_60 = 0x7fffffffffffffff;
    if (lVar2 != 0x7fffffffffffffff) {
      lVar1 = 0;
      if (*(long *)(param_1 + 0x330) != 0) {
        lVar1 = (*(long *)(param_1 + 0x318) * 8000000) / *(long *)(param_1 + 0x330);
      }
      if (lVar1 != 0x7fffffffffffffff) {
        local_60 = -0x8000000000000000;
        if (lVar1 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
          local_60 = lVar1 + lVar2;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    local_60 = *(long *)(param_1 + 0x80);
  }
  if (((ulong)local_30 & 1) != 0) {
    local_70 = CONCAT44((int)puStack_38,(int)local_40);
    if (*(char *)(param_1 + 0x249) == '\0') {
      local_60 = 0;
    }
    lVar2 = 0x90;
    if (*(char *)(param_1 + 0x98) == '\0') {
      lVar2 = 0x148;
    }
    local_68 = 0;
    local_48 = 0;
    local_50 = *(undefined8 *)(param_1 + lVar2);
    local_58 = 1;
    local_44 = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x2c8))
              (*(undefined8 **)(param_1 + 0x2c8),param_1 + 8,&local_70);
    *(undefined1 *)(param_1 + 800) = 1;
    return;
  }
LAB_005e5f78:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 005e5f8c  FUN_005e5f8c =====

void FUN_005e5f8c(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 600) == '\x01') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0xc21,"AudioSendStream::Stop: ",
                   *(undefined4 *)(param_1 + 0xa0));
    }
    *(undefined1 *)(param_1 + 800) = 0;
    (**(code **)(**(long **)(param_1 + 0x2c8) + 8))(*(long **)(param_1 + 0x2c8),param_1 + 8);
    (**(code **)(**(long **)(param_1 + 0x240) + 0xb8))();
    *(undefined1 *)(param_1 + 600) = 0;
    FUN_005d5310(*(undefined8 *)(param_1 + 0x238),param_1);
    return;
  }
  return;
}


// ===== 005e6024  FUN_005e6024 =====

void FUN_005e6024(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00660fb8(&local_50,param_1 + 0x40);
  uVar2 = FUN_00661028(&local_50);
  if ((uVar2 & 1) == 0) {
    if (((DAT_00d64168 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d64168), iVar1 != 0)) {
      DAT_00d64160 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d64168);
    }
    local_68 = (char **)0x0;
    pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00d64160 != '\0') {
      local_68 = &local_60;
      FUN_0066d348(0x42,DAT_00d64160,"AudioSendStream::SendAudioData",0,0,0,0,0,0);
      local_60 = DAT_00d64160;
      pcStack_58 = "AudioSendStream::SendAudioData";
    }
    iVar1 = *(int *)(param_2 + 0x20);
    dVar3 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x18));
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x25c));
    FUN_005db8cc(dVar3 / (double)iVar1,param_1 + 0x288,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x25c));
    (**(code **)(**(long **)(param_1 + 0x240) + 0xa0))(*(long **)(param_1 + 0x240),param_2);
    if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
      FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
    }
    FUN_0066103c(&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../audio/audio_send_stream.cc",0x18c,"!race_checker396.RaceDetected()",
               &DAT_001f5fa0);
}


// ===== 005e61d0  FUN_005e61d0 =====

void FUN_005e61d0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(**(long **)(param_1 + 0x240) + 0x70))();
                    /* WARNING: Could not recover jumptable at 0x005e6224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x240) + 0x78))(*(long **)(param_1 + 0x240),param_4,param_5);
  return;
}


// ===== 005e6228  FUN_005e6228 =====

void FUN_005e6228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e6238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x240) + 0x90))();
  return;
}


// ===== 005e623c  FUN_005e623c =====

void FUN_005e623c(undefined8 param_1)

{
  FUN_005e6248(param_1,1);
  return;
}


// ===== 005e6248  FUN_005e6248 =====

void FUN_005e6248(int *param_1,long param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  
  memcpy(param_1,&DAT_001fbd00,0x168);
  FUN_008425a8(param_1);
  plVar6 = *(long **)(param_2 + 0x240);
  *param_1 = *(int *)(param_2 + 0xa0);
  iVar5 = (**(code **)(*plVar6 + 0x88))();
  plVar6 = *(long **)(param_2 + 0x240);
  *(long *)(param_1 + 0x50) = (long)iVar5;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar6 + 0x18))(&local_b0);
  *(undefined1 **)(param_1 + 4) = puStack_a0;
  *(undefined1 **)(param_1 + 2) = puStack_a8;
  *(undefined1 **)(param_1 + 6) = local_98;
  *(undefined1 **)(param_1 + 8) = local_90;
  *(undefined1 **)(param_1 + 0xc) = puStack_80;
  *(undefined1 **)(param_1 + 10) = puStack_88;
  *(undefined1 **)(param_1 + 0x4e) = puStack_50;
  *(undefined1 **)(param_1 + 0x4c) = local_58;
  if (-1 < (long)local_b0) {
    uVar8 = (ulong)(499 < (ulong)local_b0 % 1000);
    if ((ulong)local_b0 / 1000 != 0 || uVar8 != 0) {
      *(ulong *)(param_1 + 0x1a) = (ulong)local_b0 / 1000 + uVar8;
    }
  }
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    piVar1 = (int *)(param_2 + 0x180);
    if (param_1 + 0x10 != piVar1) {
      bVar2 = *(byte *)(param_2 + 0x197);
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        uVar8 = *(ulong *)(param_2 + 0x188);
        piVar3 = *(int **)(param_2 + 0x180);
        if (-1 < (char)bVar2) {
          uVar8 = (ulong)bVar2;
          piVar3 = piVar1;
        }
        FUN_00547f08(param_1 + 0x10,piVar3,uVar8);
      }
      else if ((char)bVar2 < '\0') {
        FUN_00547fc0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x180),
                     *(undefined8 *)(param_2 + 0x188));
      }
      else {
        uVar12 = *(undefined8 *)piVar1;
        uVar9 = *(undefined8 *)(param_2 + 400);
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x188);
        *(undefined8 *)(param_1 + 0x10) = uVar12;
        *(undefined8 *)(param_1 + 0x14) = uVar9;
      }
    }
    iVar5 = *(int *)(param_2 + 0x178);
    plVar6 = *(long **)(param_2 + 0x240);
    *(undefined1 *)(param_1 + 0x17) = 1;
    param_1[0x16] = iVar5;
    (**(code **)(*plVar6 + 0x58))(&local_120);
    if (local_120 != pvStack_118) {
      pvVar7 = local_120;
      do {
        if (*(int *)((long)pvVar7 + 4) == *param_1) {
          iVar5 = *(int *)(param_2 + 0x198);
          param_1[0xe] = *(int *)((long)pvVar7 + 0xc);
          param_1[0xf] = (int)((float)*(byte *)((long)pvVar7 + 8) / 256.0);
          if (0 < iVar5) {
            uVar8 = FUN_007cccb8(pvVar7);
            iVar5 = (int)(uVar8 / 1000);
            if (499 < uVar8 % 1000) {
              iVar5 = iVar5 + 1;
            }
            if ((uVar8 & 0x8000000000000000) != 0) {
              iVar5 = -(int)(-uVar8 / 1000) - (uint)(500 < -uVar8 % 1000);
            }
            param_1[0x18] = iVar5;
          }
          break;
        }
        pvVar7 = (void *)((long)pvVar7 + 0x40);
      } while (pvVar7 != pvStack_118);
    }
    if (local_120 != (void *)0x0) {
      uVar11 = (ulong)((long)pvStack_118 + (-0x40 - ((long)pvStack_118 << 0x3a))) >> 6;
      uVar8 = (ulong)(((long)local_120 - (long)pvStack_118 << 0x3a) -
                     ((long)local_120 - (long)pvStack_118)) >> 6;
      if (uVar11 <= uVar8) {
        uVar8 = uVar11;
      }
      if ((1 < uVar8) && ((((int)local_120 - (int)pvStack_118 | -(int)pvStack_118) & 0x3fU) == 0)) {
        uVar8 = uVar8 & 0x3fffffffffffffe;
        pvStack_118 = (void *)((long)pvStack_118 + uVar8 * -0x40);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (pvStack_118 == local_120) {
          pvStack_118 = local_120;
          operator_delete(local_120);
          goto LAB_005e6508;
        }
        pvStack_118 = (void *)((long)pvStack_118 + -0x40);
      } while (pvStack_118 != (void *)0x0);
      goto LAB_005e6630;
    }
  }
LAB_005e6508:
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x25c));
  uVar4 = FUN_005db7e0(param_2 + 0x288);
  *(undefined2 *)(param_1 + 0x1c) = uVar4;
  uVar9 = FUN_005db84c(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x1e) = uVar9;
  uVar9 = FUN_005db88c(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x25c));
  (**(code **)(**(long **)(param_2 + 0x240) + 0x60))(&local_120);
  *(void **)(param_1 + 0x24) = pvStack_118;
  *(void **)(param_1 + 0x22) = local_120;
  *(undefined8 *)(param_1 + 0x28) = uStack_108;
  *(undefined8 *)(param_1 + 0x26) = local_110;
  *(undefined8 *)(param_1 + 0x2c) = uStack_f8;
  *(undefined8 *)(param_1 + 0x2a) = local_100;
  *(undefined8 *)(param_1 + 0x2e) = local_f0;
  FUN_00666a74(&local_120);
  plVar6 = (long *)(**(code **)(**(long **)(param_2 + 0x238) + 0x20))();
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x100))(&local_120,plVar6,param_3 & 1);
    *(undefined8 *)(param_1 + 0x42) = uStack_d8;
    *(undefined8 *)(param_1 + 0x40) = local_e0;
    *(undefined8 *)(param_1 + 0x46) = uStack_c8;
    *(undefined8 *)(param_1 + 0x44) = uStack_d0;
    *(undefined8 *)(param_1 + 0x4a) = uStack_b8;
    *(undefined8 *)(param_1 + 0x48) = local_c0;
    *(void **)(param_1 + 0x32) = pvStack_118;
    *(void **)(param_1 + 0x30) = local_120;
    *(undefined8 *)(param_1 + 0x36) = uStack_108;
    *(undefined8 *)(param_1 + 0x34) = local_110;
    *(undefined8 *)(param_1 + 0x3a) = uStack_f8;
    *(undefined8 *)(param_1 + 0x38) = local_100;
    *(undefined8 *)(param_1 + 0x3e) = uStack_e8;
    *(undefined8 *)(param_1 + 0x3c) = local_f0;
    FUN_0065f0c8(&local_120);
  }
  pvVar7 = *(void **)(param_1 + 0x52);
  if (pvVar7 == (void *)0x0) {
LAB_005e6654:
    *(undefined1 **)(param_1 + 0x54) = local_70;
    *(undefined1 **)(param_1 + 0x52) = puStack_78;
    *(undefined1 **)(param_1 + 0x56) = puStack_68;
    param_1[0x58] = (int)local_60;
    return;
  }
  pvVar10 = *(void **)(param_1 + 0x54);
  uVar11 = (ulong)((long)pvVar10 + (-0x40 - ((long)pvVar10 << 0x3a))) >> 6;
  uVar8 = (ulong)(((long)pvVar7 - (long)pvVar10 << 0x3a) - ((long)pvVar7 - (long)pvVar10)) >> 6;
  if (uVar11 <= uVar8) {
    uVar8 = uVar11;
  }
  if ((1 < uVar8) && ((((int)pvVar7 - (int)pvVar10 | -(int)pvVar10) & 0x3fU) == 0)) {
    uVar8 = uVar8 & 0x3fffffffffffffe;
    pvVar10 = (void *)((long)pvVar10 + uVar8 * -0x40);
    do {
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
  }
  do {
    if (pvVar10 == pvVar7) {
      *(void **)(param_1 + 0x54) = pvVar7;
      operator_delete(pvVar7);
      goto LAB_005e6654;
    }
    pvVar10 = (void *)((long)pvVar10 + -0x40);
  } while (pvVar10 != (void *)0x0);
LAB_005e6630:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005e668c  FUN_005e668c =====

void FUN_005e668c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong *local_30;
  ulong local_28;
  
  (**(code **)(**(long **)(param_1 + 0x240) + 0x10))();
  lVar2 = *(long *)(param_1 + 0x310);
  lVar1 = (**(code **)(**(long **)(param_1 + 0x2d8) + 0x1b0))();
  local_28 = lVar1 + lVar2;
  if (*(ulong *)(param_1 + 0x318) != local_28) {
    *(ulong *)(param_1 + 0x318) = local_28;
    local_30 = &local_28;
    (**(code **)(**(long **)(param_1 + 0x240) + 0x30))
              (*(long **)(param_1 + 0x240),&local_30,FUN_005e7740);
    if (*(char *)(param_1 + 800) == '\x01') {
      FUN_005e5e3c(param_1);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0xd8))
              (*(long **)(param_1 + 0x240),local_28 & 0xffffffff);
  }
  return;
}


// ===== 005e6740  FUN_005e6740 =====

undefined8 FUN_005e6740(long param_1,undefined1 **param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005e6804(&local_50);
  if (((ulong)local_40 & 1) != 0) {
    if ((long)puStack_48 < (long)local_50) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                );
    }
    ppuVar1 = (undefined1 **)((ulong)&local_50 | 8);
    if ((long)*param_2 <= (long)puStack_48) {
      ppuVar1 = param_2;
    }
    ppuVar2 = &local_50;
    if ((long)local_50 <= (long)*param_2) {
      ppuVar2 = ppuVar1;
    }
    *param_2 = *ppuVar2;
  }
  puStack_78 = param_2[1];
  local_80 = *param_2;
  puStack_68 = param_2[3];
  puStack_70 = param_2[2];
  local_60 = param_2[4];
  (**(code **)(**(long **)(param_1 + 0x240) + 0x80))(*(long **)(param_1 + 0x240),&local_80);
  return 0;
}


// ===== 005e6804  FUN_005e6804 =====

void FUN_005e6804(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_39;
  char *local_38;
  undefined8 uStack_30;
  undefined1 *local_28;
  
  uVar5 = (ulong)*(uint *)(param_2 + 0x140);
  if (((int)*(uint *)(param_2 + 0x140) < 0) ||
     (uVar4 = (ulong)*(uint *)(param_2 + 0x144), (int)*(uint *)(param_2 + 0x144) < 0)) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      local_28 = &uStack_39;
      local_38 = "../../audio/audio_send_stream.cc";
      uStack_30 = 0x1b02;
      FUN_00623bb0(&DAT_001f4ea6,"../../audio/audio_send_stream.cc",0x1b02,
                   "Config is invalid: min_bitrate_bps=",*(undefined4 *)(param_2 + 0x140),
                   "; max_bitrate_bps=",*(undefined4 *)(param_2 + 0x144),
                   "; both expected greater or equal to 0");
    }
  }
  else {
    if (*(char *)(param_2 + 0x60) == '\x01') {
      uVar5 = *(ulong *)(param_2 + 0x58);
    }
    if (*(char *)(param_2 + 0x70) == '\x01') {
      uVar4 = *(ulong *)(param_2 + 0x68);
    }
    if (*(char *)(param_2 + 0x350) == '\x01') {
      uVar5 = *(ulong *)(param_2 + 0x340);
      uVar4 = *(ulong *)(param_2 + 0x348);
    }
    if ((long)uVar5 <= (long)uVar4) {
      if (*(char *)(param_2 + 0x248) == '\x01') {
        uVar1 = uVar5;
        if (uVar5 != 0x8000000000000000) {
          uVar1 = uVar5 + 0x1a0a;
        }
        uVar6 = uVar5;
        if (uVar5 != 0x7fffffffffffffff) {
          uVar6 = uVar1;
        }
        uVar5 = 0x7fffffffffffffff;
        if ((uVar4 != 0x7fffffffffffffff) && (uVar5 = uVar4, uVar4 != 0x8000000000000000)) {
          uVar5 = uVar4 + 0x1a0a;
        }
      }
      else {
        if ((*(byte *)(param_2 + 0x338) & 1) == 0) {
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../audio/audio_send_stream.cc",0x1c3a,
                         "frame_length_range_ is not set");
          }
          goto LAB_005e68f0;
        }
        lVar7 = *(long *)(param_2 + 0x318) * 8000000;
        if (uVar5 == 0x7fffffffffffffff) {
          uVar6 = 0x7fffffffffffffff;
        }
        else {
          lVar2 = 0;
          if (*(long *)(param_2 + 0x330) != 0) {
            lVar2 = lVar7 / *(long *)(param_2 + 0x330);
          }
          uVar6 = 0x7fffffffffffffff;
          if (lVar2 != 0x7fffffffffffffff) {
            uVar6 = 0x8000000000000000;
            if (lVar2 != -0x8000000000000000 && uVar5 != 0x8000000000000000) {
              uVar6 = lVar2 + uVar5;
            }
          }
        }
        uVar5 = 0x7fffffffffffffff;
        if (uVar4 != 0x7fffffffffffffff) {
          lVar2 = 0;
          if (*(long *)(param_2 + 0x328) != 0) {
            lVar2 = lVar7 / *(long *)(param_2 + 0x328);
          }
          if (lVar2 != 0x7fffffffffffffff) {
            uVar5 = 0x8000000000000000;
            if (lVar2 != -0x8000000000000000 && uVar4 != 0x8000000000000000) {
              uVar5 = lVar2 + uVar4;
            }
          }
        }
      }
      uVar3 = 1;
      *param_1 = uVar6;
      param_1[1] = uVar5;
      goto LAB_005e68f8;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ed3,"../../audio/audio_send_stream.cc",0x1bca,
                   "TargetAudioBitrateConstraints::max is less than ",
                   "TargetAudioBitrateConstraints::min");
    }
  }
LAB_005e68f0:
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_005e68f8:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 005e6a14  FUN_005e6a14 =====

undefined8 FUN_005e6a14(long param_1,undefined1 **param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005e6804(&local_50,param_1 + -8);
  if (((ulong)local_40 & 1) != 0) {
    if ((long)puStack_48 < (long)local_50) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                );
    }
    ppuVar1 = (undefined1 **)((ulong)&local_50 | 8);
    if ((long)*param_2 <= (long)puStack_48) {
      ppuVar1 = param_2;
    }
    ppuVar2 = &local_50;
    if ((long)local_50 <= (long)*param_2) {
      ppuVar2 = ppuVar1;
    }
    *param_2 = *ppuVar2;
  }
  puStack_78 = param_2[1];
  local_80 = *param_2;
  puStack_68 = param_2[3];
  puStack_70 = param_2[2];
  local_60 = param_2[4];
  (**(code **)(**(long **)(param_1 + 0x238) + 0x80))(*(long **)(param_1 + 0x238),&local_80);
  return 0;
}


// ===== 005e6adc  FUN_005e6adc =====

void FUN_005e6adc(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x240) + 0xd0))();
  return;
}


// ===== 005e6b08  FUN_005e6b08 =====

void FUN_005e6b08(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x238) + 0xd0))();
  return;
}


// ===== 005e6b34  FUN_005e6b34 =====

void FUN_005e6b34(long param_1,int param_2)

{
  long lVar1;
  ulong *local_30;
  ulong local_28;
  
  *(long *)(param_1 + 0x310) = (long)param_2;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x2d8) + 0x1b0))();
  local_28 = lVar1 + param_2;
  if (*(ulong *)(param_1 + 0x318) != local_28) {
    *(ulong *)(param_1 + 0x318) = local_28;
    local_30 = &local_28;
    (**(code **)(**(long **)(param_1 + 0x240) + 0x30))
              (*(long **)(param_1 + 0x240),&local_30,FUN_005e7740);
    if (*(char *)(param_1 + 800) == '\x01') {
      FUN_005e5e3c(param_1);
    }
    (**(code **)(**(long **)(param_1 + 0x240) + 0xd8))
              (*(long **)(param_1 + 0x240),local_28 & 0xffffffff);
  }
  return;
}


// ===== 005e6bdc  FUN_005e6bdc =====

void FUN_005e6bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e6bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0xb8))();
  return;
}


// ===== 005e6bf0  FUN_005e6bf0 =====

bool FUN_005e6bf0(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 *local_b0;
  long *plStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined4 local_58 [2];
  undefined1 local_50;
  undefined1 local_48;
  
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_005e6eec;
  local_58[0] = param_2[0x36];
  local_50 = 0;
  local_48 = 0;
  plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x52) + 0x30))
                             (*(long **)(param_2 + 0x52),param_1 + 0x10,param_2 + 0x38,local_58);
  if (plVar3 == (long *)0x0) goto LAB_005e6ec8;
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    (**(code **)(*plVar3 + 0xa0))(plVar3,param_2[0x4d]);
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    uVar4 = *(ulong *)(param_2 + 0x30);
    puVar1 = *(undefined8 **)(param_2 + 0x2e);
    if (-1 < (char)*(byte *)((long)param_2 + 0xcf)) {
      uVar4 = (ulong)*(byte *)((long)param_2 + 0xcf);
      puVar1 = (undefined8 *)(param_2 + 0x2e);
    }
    uVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,puVar1,uVar4);
    uVar5 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        uVar2 = *param_2;
        pcVar8 = "Failed to enable Audio network adaptor on SSRC ";
        uVar7 = 0x1369;
        goto LAB_005e6d04;
      }
    }
    else if ((uVar5 & 1) == 0) {
      uVar2 = *param_2;
      pcVar8 = "Audio network adaptor enabled on SSRC ";
      uVar7 = 0x1351;
LAB_005e6d04:
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",uVar7,pcVar8,uVar2);
    }
  }
  plVar6 = plVar3;
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0092a494(&local_a0);
    local_a0 = (undefined1 *)(**(code **)(*plVar3 + 0x18))(plVar3);
    if ((*(byte *)(param_2 + 0x4a) & 1) == 0) goto LAB_005e6eec;
    puStack_98 = (undefined1 *)CONCAT44(puStack_98._4_4_,param_2[0x49]);
    if (local_90 != (long *)0x0) {
      lVar9 = *local_90;
      local_90 = plVar3;
      (**(code **)(lVar9 + 8))();
      plVar6 = local_90;
    }
    local_90 = plVar6;
    puStack_88 = (undefined1 *)((ulong)puStack_88 & 0xffffffff00000000);
    plVar6 = (long *)FUN_0092a4ec(&local_a0);
    if ((*(byte *)(param_2 + 0x4a) & 1) == 0) goto LAB_005e6eec;
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_005e6f00;
    (**(code **)(**(long **)(param_1 + 0x240) + 0x68))
              (*(long **)(param_1 + 0x240),param_2[0x49],param_2[0x3e]);
    FUN_0092a4c8(&local_a0);
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00667388(&local_a0,param_2 + 0x38);
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    plStack_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0092b35c(&local_b0);
    if ((*(byte *)(param_2 + 0x4c) & 1) == 0) {
LAB_005e6eec:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,param_2[0x4b]);
    if (plStack_a8 != (long *)0x0) {
      lVar9 = *plStack_a8;
      plStack_a8 = plVar6;
      (**(code **)(lVar9 + 8))();
      plVar6 = plStack_a8;
    }
    plStack_a8 = plVar6;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    plVar6 = (long *)operator_new(0x50);
    FUN_0092b38c(plVar6,&local_b0,uVar7);
    FUN_00547bf8(&local_a0,PTR_DAT_00d51fd8);
    FUN_0092b368(&local_b0);
  }
  if (*(long *)(param_1 + 0x318) != 0) {
    (**(code **)(*plVar6 + 0xc0))(plVar6);
  }
  uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  *(undefined8 *)(param_1 + 0x250) = uVar7;
  if (*(char *)(param_1 + 600) == '\x01') {
    FUN_005d5000(*(undefined8 *)(param_1 + 0x238),param_1,uVar2,uVar7);
  }
  if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x240) + 0x20))
              (*(long **)(param_1 + 0x240),param_2[0x36],&local_a0,plVar6);
    FUN_006678ac(&local_a0);
LAB_005e6ec8:
    return plVar3 != (long *)0x0;
  }
LAB_005e6f00:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 005e6f14  FUN_005e6f14 =====

bool FUN_005e6f14(int *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_1 + 1) != bVar1;
  if ((bVar1 & *(byte *)(param_1 + 1)) != 0) {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar2 = *param_1 != *param_2;
  }
  return bVar2;
}


// ===== 005e6f6c  FUN_005e6f6c =====

void FUN_005e6f6c(long param_1,undefined4 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long local_40;
  undefined4 *puStack_38;
  
  bVar2 = *(byte *)(param_2 + 0x34);
  bVar3 = *(byte *)(param_1 + 0x170);
  if ((bVar3 & bVar2) == 0) {
    if (bVar2 == bVar3) {
      return;
    }
  }
  else {
    if ((bVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar3 = *(byte *)((long)param_2 + 0xcf);
    bVar4 = *(byte *)(param_1 + 0x16f);
    __n = *(size_t *)(param_2 + 0x30);
    if (-1 < (char)bVar3) {
      __n = (ulong)bVar3;
    }
    sVar1 = *(size_t *)(param_1 + 0x160);
    if (-1 < (char)bVar4) {
      sVar1 = (ulong)bVar4;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_2 + 0x2e);
      if (-1 < (char)bVar3) {
        __s1 = (undefined8 *)(param_2 + 0x2e);
      }
      __s2 = (undefined8 *)*(void **)(param_1 + 0x158);
      if (-1 < (char)bVar4) {
        __s2 = (undefined8 *)(param_1 + 0x158);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x240);
  if (bVar2 == 0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,FUN_005e78bc);
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0x16e1,
                   "Audio network adaptor disabled on SSRC ",*param_2);
    }
  }
  else {
    local_40 = param_1;
    puStack_38 = param_2;
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,FUN_005e77a8);
  }
  return;
}


// ===== 005e709c  FUN_005e709c =====

void FUN_005e709c(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long local_28;
  
  if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  bVar1 = *(byte *)(param_2 + 0x128);
  bVar2 = *(byte *)(param_1 + 0x1c8);
  if ((bVar2 & bVar1) == 0) {
    if (bVar1 == bVar2) {
      return;
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(int *)(param_2 + 0x124) == *(int *)(param_1 + 0x1c4)) {
      return;
    }
  }
  if (bVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x240) + 0x68))
              (*(long **)(param_1 + 0x240),*(undefined4 *)(param_2 + 0x124),
               *(undefined4 *)(param_2 + 0xf8));
  }
  local_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x240) + 0x28))
            (*(long **)(param_1 + 0x240),&local_28,FUN_005e78d0);
  return;
}


// ===== 005e7184  FUN_005e7184 =====

undefined4 * FUN_005e7184(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  }
  else {
    bVar2 = *(byte *)((long)param_2 + 0x1f);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar1 = *(ulong *)(param_2 + 4);
      puVar3 = *(undefined8 **)(param_2 + 2);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = (undefined8 *)(param_2 + 2);
      }
      FUN_00547f08(puVar4,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar4,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar5 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar6;
      *puVar4 = uVar5;
    }
    bVar2 = *(byte *)((long)param_2 + 0x37);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      uVar1 = *(ulong *)(param_2 + 10);
      puVar4 = *(undefined8 **)(param_2 + 8);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar4 = (undefined8 *)(param_2 + 8);
      }
      FUN_00547f08(param_1 + 8,puVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 10);
      uVar5 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = uVar6;
      *(undefined8 *)(param_1 + 8) = uVar5;
    }
    FUN_005e72f8(param_1 + 0xe,*(long *)(param_2 + 0xe),*(long *)(param_2 + 0x10),
                 *(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe) >> 2);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    FUN_005e2544(param_1 + 0x16,*(long *)(param_2 + 0x16),*(long *)(param_2 + 0x18),
                 *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x16) >> 5);
    bVar2 = *(byte *)((long)param_2 + 0x87);
    if (*(char *)((long)param_1 + 0x87) < '\0') {
      uVar1 = *(ulong *)(param_2 + 0x1e);
      puVar4 = *(undefined8 **)(param_2 + 0x1c);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar4 = (undefined8 *)(param_2 + 0x1c);
      }
      FUN_00547f08(param_1 + 0x1c,puVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x1e));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x1e);
      uVar5 = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x1e) = uVar6;
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
    }
  }
  param_1[0x22] = param_2[0x22];
  return param_1;
}


// ===== 005e72f8  FUN_005e72f8 =====

void FUN_005e72f8(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 2) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_005e749c:
      if (param_4 >> 0x3e == 0) {
        uVar5 = (long)uVar2 >> 1;
        if ((ulong)((long)uVar2 >> 1) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffffb < uVar2) {
          uVar5 = 0x3fffffffffffffff;
        }
        if (uVar5 >> 0x3e == 0) {
          pvVar6 = operator_new(uVar5 * 4);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 4);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_005e74f8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3e) - ((long)pvVar6 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_005e749c;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 2) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_005e74f8:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3e) - lVar4) >> 2;
    uVar5 = (lVar1 - (lVar1 << 0x3e)) - 4U >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -4;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005e7520  FUN_005e7520 =====

void FUN_005e7520(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == *(char *)(param_2 + 3)) {
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      bVar3 = *(byte *)((long)param_2 + 0x17);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uVar1 = param_2[1];
        puVar4 = (undefined8 *)*param_2;
        if (-1 < (char)bVar3) {
          uVar1 = (ulong)bVar3;
          puVar4 = param_2;
        }
        FUN_00547f08(param_1,puVar4,uVar1);
        return;
      }
      if ((char)bVar3 < '\0') {
        FUN_00547fc0(param_1,*param_2,param_2[1]);
        return;
      }
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar5;
    }
  }
  else if (cVar2 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(param_1,*param_2,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar5;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


// ===== 005e7638  FUN_005e7638 =====

void FUN_005e7638(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  
  if (param_2 != (long *)0x0) {
    lVar2 = *param_1;
    (**(code **)(*param_2 + 0xd8))(&local_38,param_2);
    cVar1 = *(char *)(lVar2 + 0x338);
    if (cVar1 == local_28) {
      if (cVar1 != '\0') {
        *(undefined8 *)(lVar2 + 0x328) = local_38;
        *(undefined8 *)(lVar2 + 0x330) = uStack_30;
      }
    }
    else if (cVar1 == '\0') {
      if ((undefined8 *)(lVar2 + 0x328) == (undefined8 *)0x0) goto LAB_005e772c;
      *(undefined1 *)(lVar2 + 0x338) = 1;
      *(undefined8 *)(lVar2 + 0x330) = uStack_30;
      *(undefined8 *)(lVar2 + 0x328) = local_38;
    }
    else {
      *(undefined1 *)(lVar2 + 0x338) = 0;
    }
    (**(code **)(*param_2 + 0xe0))(&local_38,param_2);
    cVar1 = *(char *)(lVar2 + 0x350);
    if (cVar1 == local_28) {
      if (cVar1 != '\0') {
        *(undefined8 *)(lVar2 + 0x340) = local_38;
        *(undefined8 *)(lVar2 + 0x348) = uStack_30;
      }
    }
    else if (cVar1 == '\0') {
      if ((undefined8 *)(lVar2 + 0x340) == (undefined8 *)0x0) {
LAB_005e772c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(lVar2 + 0x350) = 1;
      *(undefined8 *)(lVar2 + 0x348) = uStack_30;
      *(undefined8 *)(lVar2 + 0x340) = local_38;
    }
    else {
      *(undefined1 *)(lVar2 + 0x350) = 0;
    }
  }
  return;
}


// ===== 005e7740  FUN_005e7740 =====

void FUN_005e7740(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005e775c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xc0))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 005e7760  FUN_005e7760 =====

void FUN_005e7760(undefined8 *param_1,long *param_2)

{
  if ((*(byte *)((undefined4 *)*param_1 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e7784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_2,*(undefined4 *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 005e77a8  FUN_005e77a8 =====

void FUN_005e77a8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  if ((*(byte *)(lVar5 + 0xd0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  lVar4 = (long)*(char *)(lVar5 + 0xcf);
  if (lVar4 < 0) {
    lVar3 = *(long *)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar5 + 0xc0);
  }
  else {
    lVar3 = lVar5 + 0xb8;
  }
  lVar5 = *param_1;
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,lVar3,lVar4);
  uVar2 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0x16a9,
                   "Failed to enable Audio network adaptor on SSRC ",*(undefined4 *)param_1[1]);
      return;
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_send_stream.cc",0x1679,
                   "Audio network adaptor enabled on SSRC ",*(undefined4 *)param_1[1]);
    }
    if (*(long *)(lVar5 + 0x318) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e7854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xc0))(param_2);
      return;
    }
  }
  return;
}


// ===== 005e78bc  FUN_005e78bc =====

void FUN_005e78bc(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005e78cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2);
  return;
}


// ===== 005e78d0  FUN_005e78d0 =====

void FUN_005e78d0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 *local_60;
  undefined1 *puStack_58;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  plVar3 = (long *)*param_2;
  *param_2 = 0;
  auVar4 = (**(code **)(*plVar3 + 0x78))(plVar3);
  plVar2 = plVar3;
  if (auVar4._8_8_ != 0) {
    plVar2 = (long *)*auVar4._0_8_;
    *auVar4._0_8_ = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if ((*(byte *)(*param_1 + 0x140) & 1) == 0) {
LAB_005e7a20:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (*(char *)(*param_1 + 0x128) == '\x01') {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0092a494(&local_60);
    if (local_50 != (long *)0x0) {
      lVar1 = *local_50;
      local_50 = plVar2;
      (**(code **)(lVar1 + 8))();
      plVar2 = local_50;
    }
    local_50 = plVar2;
    local_60 = (undefined1 *)(**(code **)(*local_50 + 0x18))(local_50);
    lVar1 = *param_1;
    if ((*(byte *)(lVar1 + 0x140) & 1) == 0) goto LAB_005e7a20;
    if ((*(byte *)(lVar1 + 0x128) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    puStack_48 = (undefined1 *)((ulong)puStack_48 & 0xffffffff00000000);
    puStack_58 = (undefined1 *)CONCAT44(puStack_58._4_4_,*(undefined4 *)(lVar1 + 0x124));
    lVar1 = FUN_0092a4ec(&local_60);
    plVar2 = (long *)*param_2;
    *param_2 = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    FUN_0092a4c8(&local_60);
  }
  else {
    plVar3 = (long *)*param_2;
    *param_2 = (long)plVar2;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e7a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


// ===== 005e7a48  FUN_005e7a48 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long *******
FUN_005e7a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long ******param_4,
            undefined4 *param_5,byte param_6,undefined4 param_7,undefined4 param_8,
            undefined8 *param_9,long *param_10)

{
  int *******pppppppiVar1;
  undefined1 *puVar2;
  long *******ppppppplVar3;
  void *__src;
  long lVar4;
  undefined1 uVar5;
  ulong __n;
  long lVar6;
  bool bVar7;
  int iVar8;
  long *******ppppppplVar9;
  undefined8 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined4 uVar13;
  long *plVar14;
  long *******ppppppplVar15;
  long ******pppppplVar16;
  int *******local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *******ppppppplStack_148;
  undefined8 uStack_140;
  long *******local_138;
  long ******pppppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *******local_110;
  long ******pppppplStack_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long *local_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  byte bStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long *local_a0;
  long *******local_98;
  undefined1 *local_90;
  code *local_88;
  undefined *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  ppppppplVar9 = (long *******)operator_new(0x280);
  ppppppplVar9[1] = (long ******)&PTR_FUN_00d26490;
  ppppppplVar9[2] = (long ******)&PTR_FUN_00d264c0;
  plVar14 = (long *)*param_9;
  ppppppplVar9[3] = (long ******)&PTR_FUN_00d264e8;
  *param_9 = 0;
  ppppppplVar9[4] = (long ******)&PTR_FUN_00d26510;
  pppppplVar11 = (long ******)*param_1;
  *ppppppplVar9 = (long ******)&PTR_FUN_00d26380;
  ppppppplVar9[5] = pppppplVar11;
  if (pppppplVar11 != (long ******)0x0) {
    FUN_00d0f740(1,pppppplVar11 + 1);
  }
  pppppplVar11 = (long ******)param_1[1];
  pppppplVar16 = (long ******)param_1[4];
  pppppplVar12 = (long ******)param_1[3];
  ppppppplVar9[7] = (long ******)param_1[2];
  ppppppplVar9[6] = pppppplVar11;
  ppppppplVar9[9] = pppppplVar16;
  ppppppplVar9[8] = pppppplVar12;
  pppppplVar11 = (long ******)FUN_005d6490();
  ppppppplVar9[10] = pppppplVar11;
  FUN_007ebca0(ppppppplVar9 + 0xb);
  FUN_00660fac(ppppppplVar9 + 0xc);
  local_190 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(ppppppplVar9 + 0xe),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  ppppppplVar15 = ppppppplVar9 + 0x14;
  *ppppppplVar15 = (long ******)0x0;
  *(undefined4 *)(ppppppplVar9 + 0x13) = param_8;
  *(undefined1 *)((long)ppppppplVar9 + 0x9c) = 0;
  *(undefined1 *)(ppppppplVar9 + 0x18) = 0;
  *(undefined1 *)(ppppppplVar9 + 0x19) = 0;
  ppppppplVar9[0x15] = (long ******)0x0;
  ppppppplVar9[0x16] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar9 + 0x17) = 0;
  ppppppplVar9[0x1b] = (long ******)0x0;
  ppppppplVar9[0x1a] = (long ******)0x0;
  ppppppplVar9[0x1d] = (long ******)0x0;
  ppppppplVar9[0x1c] = (long ******)0x0;
  ppppppplVar9[0x1f] = (long ******)0x0;
  ppppppplVar9[0x1e] = (long ******)0x0;
  ppppppplVar9[0x21] = (long ******)0x0;
  ppppppplVar9[0x20] = (long ******)0x0;
  FUN_0092c2a4(ppppppplVar9 + 0x22);
  *(undefined2 *)(ppppppplVar9 + 0x27) = 0;
  ppppppplVar9[0x28] = (long ******)0x0;
  pppppplVar11 = (long ******)operator_new(0x38);
  *pppppplVar11 = (long *****)&PTR_FUN_00d26538;
  local_190 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(pppppplVar11 + 1),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  pppppplVar11[6] = (long *****)0x0;
  ppppppplVar9[0x29] = pppppplVar11;
  pppppplVar11 = (long ******)operator_new(0xa0);
  FUN_00889d1c(pppppplVar11,ppppppplVar9[7],1000);
  ppppppplVar9[0x2a] = pppppplVar11;
  *(undefined2 *)(ppppppplVar9 + 0x2b) = 0;
  *(undefined1 *)((long)ppppppplVar9 + 0x15a) = 1;
  ppppppplVar9[0x2c] = param_4;
  if (param_4 != (long ******)0x0) {
    (*(code *)**param_4)(param_4);
  }
  uVar13 = *param_5;
  uVar5 = *(undefined1 *)(param_5 + 1);
  ppppppplVar9[0x2f] = (long ******)0x0;
  ppppppplVar9[0x30] = (long ******)0x0;
  ppppppplVar9[0x2e] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar9 + 0x2d) = uVar13;
  __src = *(void **)(param_5 + 2);
  lVar4 = *(long *)(param_5 + 4);
  *(undefined1 *)((long)ppppppplVar9 + 0x16c) = uVar5;
  __n = lVar4 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    pppppplVar11 = (long ******)operator_new(__n);
    ppppppplVar9[0x2e] = pppppplVar11;
    ppppppplVar9[0x2f] = pppppplVar11;
    ppppppplVar9[0x30] = (long ******)((long)pppppplVar11 + __n);
    memcpy(pppppplVar11,__src,__n);
    ppppppplVar9[0x2f] = (long ******)((long)pppppplVar11 + __n);
  }
  ppppppplVar9[0x31] = (long ******)0x0;
  local_190 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(ppppppplVar9 + 0x32),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  ppppppplVar9[0x37] = (long ******)0x0;
  ppppppplVar9[0x38] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar9 + 0x39) = 0;
  pppppplVar11 = ppppppplVar9[8];
  (*(code *)(*ppppppplVar9[6])[2])
            (&local_190,ppppppplVar9[6],"WebRTC-MediaTaskQueuePriorities",0x1f);
  uVar13 = 0;
  if (-1 < (char)local_180._7_1_) {
    uStack_188 = (ulong)local_180._7_1_;
  }
  if (6 < uStack_188) {
    pppppppiVar1 = local_190;
    if (-1 < (char)local_180._7_1_) {
      pppppppiVar1 = (int *******)&local_190;
    }
    uVar13 = 0;
    if (*(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62) {
      uVar13 = 3;
    }
  }
  if ((char)local_180._7_1_ < '\0') {
    operator_delete(local_190);
  }
  pppppplVar11 = (long ******)
                 (*(code *)(*pppppplVar11)[2])(pppppplVar11,"AudioEncoderQueue",0x11,uVar13);
  ppppppplVar9[0x3a] = pppppplVar11;
  FUN_00667494(ppppppplVar9 + 0x3b,"x-unknown",9,0,0);
  local_190 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(ppppppplVar9 + 0x43),(pthread_mutexattr_t *)&local_190);
  iVar8 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  ppppppplVar9[0x4a] = (long ******)0x0;
  pppppplVar12 = _UNK_001f3b38;
  pppppplVar11 = ram0x001f3b30;
  *(undefined1 *)(ppppppplVar9 + 0x4b) = 0;
  *(undefined1 *)(ppppppplVar9 + 0x4c) = 0;
  ppppppplVar9[0x49] = pppppplVar12;
  ppppppplVar9[0x48] = pppppplVar11;
  ppppppplVar9[0x4d] = (long ******)0x0;
  ppppppplVar9[0x4f] = (long ******)0x0;
  ppppppplVar9[0x4e] = (long ******)0x0;
  pppppplVar11 = (long ******)FUN_00928b40(iVar8);
  pppppplVar12 = ppppppplVar9[0x16];
  ppppppplVar9[0x16] = pppppplVar11;
  if (pppppplVar12 != (long ******)0x0) {
    (*(code *)(*pppppplVar12)[1])(pppppplVar12);
  }
  uStack_dd = 0xaa;
  local_dc = 0;
  local_d8 = 0xaaaaaa00aaaaaa00;
  local_d0 = 0xaaaaaaaaaaaa0000;
  uStack_f8 = 0;
  uStack_f4 = 0xaaaaaa00;
  uStack_100 = 0;
  local_fb = 0;
  pppppplStack_108 = (long ******)0x0;
  uStack_e0 = 0;
  bStack_df = 0;
  uStack_de = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_e1 = 0;
  local_c0 = 0;
  local_b8 = 0;
  pvStack_c8 = (void *)0x0;
  local_b0 = 0xaaaaaaaaaaaaaa00;
  local_190 = (int *******)0xaaaaaaaaaaaa00aa;
  pppppplStack_130 = (long ******)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  ppppppplStack_148 = (long *******)0x0;
  local_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_138 = ppppppplVar9 + 3;
  local_110 = ppppppplVar9 + 4;
  uStack_168 = (**(code **)(*param_10 + 0x88))(param_10);
  local_190 = (int *******)CONCAT71(local_190._1_7_,1);
  pppppplStack_130 = ppppppplVar9[0x29];
  local_180 = param_2;
  local_150 = param_3;
  (*(code *)(*ppppppplVar9[6])[2])(&local_98,ppppppplVar9[6],"WebRTC-DisableRtxRateLimiter",0x1c);
  bVar7 = false;
  puVar2 = local_90;
  if (-1 < (long)local_88) {
    puVar2 = (undefined1 *)((ulong)local_88 >> 0x38);
  }
  if ((undefined1 *)0x7 < puVar2) {
    ppppppplVar3 = local_98;
    if (-1 < (long)local_88) {
      ppppppplVar3 = (long *******)&local_98;
    }
    bVar7 = *ppppppplVar3 == (long ******)0x64656c6261736944;
  }
  if ((long)local_88 < 0) {
    operator_delete(local_98);
  }
  if (bVar7) {
    pppppplStack_108 = ppppppplVar9[0x2a];
  }
  ppppppplStack_148 = ppppppplVar9 + 2;
  uStack_f8 = param_7;
  bStack_df = param_6 & 1;
  local_dc = param_8;
  pppppplVar11 = (long ******)operator_new(0x560);
  FUN_00863e98(pppppplVar11,ppppppplVar9 + 5,&local_190);
  pppppplVar12 = *ppppppplVar15;
  *ppppppplVar15 = pppppplVar11;
  if (pppppplVar12 != (long ******)0x0) {
    FUN_0086425c(pppppplVar12);
    operator_delete(pppppplVar12);
    pppppplVar11 = *ppppppplVar15;
  }
  FUN_008649d8(pppppplVar11,0);
  pppppplVar12 = ppppppplVar9[7];
  uVar10 = FUN_00865b68(ppppppplVar9[0x14]);
  pppppplVar11 = (long ******)operator_new(0x118);
  FUN_0086a7c4(pppppplVar11,pppppplVar12,uVar10);
  pppppplVar12 = ppppppplVar9[0x15];
  ppppppplVar9[0x15] = pppppplVar11;
  if (pppppplVar12 != (long ******)0x0) {
    FUN_0086a894(pppppplVar12);
    operator_delete(pppppplVar12);
  }
  FUN_00864f38(ppppppplVar9[0x14],1);
  (*(code *)(*ppppppplVar9[0x16])[4])(ppppppplVar9[0x16],ppppppplVar9 + 1);
  if (plVar14 != (long *)0x0) {
    pppppplVar11 = (long ******)operator_new(0x68);
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = FUN_005e9de4;
    local_80 = &DAT_001fbe68;
    local_a0 = plVar14;
    local_98 = ppppppplVar9;
    FUN_005ebddc(pppppplVar11,&local_98,&local_a0,ppppppplVar9[10]);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 8))();
    }
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98);
    }
    *(undefined4 *)((long)pppppplVar11 + 100) = 0;
    *pppppplVar11 = (long *****)&PTR_FUN_00d26568;
    if (pppppplVar11 != (long ******)0x0) {
      FUN_00d0f740(1,(long)pppppplVar11 + 100);
    }
    pppppplVar12 = ppppppplVar9[0x31];
    ppppppplVar9[0x31] = pppppplVar11;
    if (pppppplVar12 != (long ******)0x0) {
      (*(code *)(*pppppplVar12)[1])();
      pppppplVar11 = ppppppplVar9[0x31];
    }
    FUN_005ebe88(pppppplVar11);
  }
  if (local_b8 < 0) {
    operator_delete(pvStack_c8);
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppppppplVar9;
}


// ===== 005e810c  FUN_005e810c =====

void FUN_005e810c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uStack_a1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 uStack_41;
  long *local_40;
  undefined1 **ppuStack_38;
  code *local_30;
  code *pcStack_28;
  
  *param_1 = (long)&PTR_FUN_00d26380;
  param_1[1] = (long)&PTR_FUN_00d26490;
  param_1[2] = (long)&PTR_FUN_00d264c0;
  param_1[3] = (long)&PTR_FUN_00d264e8;
  param_1[4] = (long)&PTR_FUN_00d26510;
  puStack_4c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaa;
  local_54 = 0xaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_a0);
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_005ea3cc;
  local_40 = param_1;
  ppuStack_38 = &local_a0;
  (**(code **)(*(long *)param_1[0x3a] + 8))((long *)param_1[0x3a],&local_40,&uStack_41,&uStack_a1);
  (*local_30)(0,&local_40,&local_40);
  FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
  (**(code **)(*param_1 + 0xb8))(param_1);
  (**(code **)(*(long *)param_1[0x16] + 0x20))((long *)param_1[0x16],0);
  puVar2 = (undefined8 *)param_1[0x3a];
  param_1[0x3a] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  FUN_0066f2b0(&local_a0);
  pvVar3 = (void *)param_1[0x4d];
  if (pvVar3 == (void *)0x0) {
LAB_005e8288:
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x43));
    FUN_006678ac(param_1 + 0x3b);
    puVar2 = (undefined8 *)param_1[0x3a];
    param_1[0x3a] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x32));
    if ((long *)param_1[0x31] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x31] + 8))();
    }
    pvVar3 = (void *)param_1[0x2e];
    if (pvVar3 == (void *)0x0) {
LAB_005e8354:
      if ((long *)param_1[0x2c] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x2c] + 8))();
      }
      pvVar3 = (void *)param_1[0x2a];
      param_1[0x2a] = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_00889d94(pvVar3);
        operator_delete(pvVar3);
      }
      plVar4 = (long *)param_1[0x29];
      param_1[0x29] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      FUN_0092c2c0(param_1 + 0x22);
      FUN_005ea21c(param_1 + 0x1a);
      plVar4 = (long *)param_1[0x16];
      param_1[0x16] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pvVar3 = (void *)param_1[0x15];
      param_1[0x15] = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_0086a894(pvVar3);
        operator_delete(pvVar3);
      }
      pvVar3 = (void *)param_1[0x14];
      param_1[0x14] = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_0086425c(pvVar3);
        operator_delete(pvVar3);
      }
      pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe));
      FUN_007ebdcc(param_1[0xb]);
      pvVar3 = (void *)param_1[0xb];
      if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
        operator_delete(pvVar3);
      }
      plVar4 = (long *)param_1[5];
      if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      return;
    }
    pvVar5 = (void *)param_1[0x2f];
    uVar7 = (ulong)((long)pvVar5 + ((long)pvVar5 << 0x3f) + -2) >> 1;
    uVar6 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3f) - ((long)pvVar3 - (long)pvVar5)) >> 1;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar3 - (uint)pvVar5 | (uint)pvVar5) & 1) == 0)) {
      uVar6 = uVar6 & 0x7ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -2);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (pvVar5 == pvVar3) {
        param_1[0x2f] = (long)pvVar3;
        operator_delete(pvVar3);
        goto LAB_005e8354;
      }
      pvVar5 = (void *)((long)pvVar5 + -2);
    } while (pvVar5 != (void *)0x0);
  }
  else {
    pvVar5 = (void *)param_1[0x4e];
    uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
    uVar6 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3e) - ((long)pvVar3 - (long)pvVar5)) >> 2;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar3 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
      uVar6 = uVar6 & 0x3ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (pvVar5 == pvVar3) {
        param_1[0x4e] = (long)pvVar3;
        operator_delete(pvVar3);
        goto LAB_005e8288;
      }
      pvVar5 = (void *)((long)pvVar5 + -4);
    } while (pvVar5 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005e8480  FUN_005e8480 =====

void FUN_005e8480(void *param_1)

{
  FUN_005e810c();
  operator_delete(param_1);
  return;
}


// ===== 005e84b0  FUN_005e84b0 =====

void FUN_005e84b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  FUN_00864454(*(undefined8 *)(param_1 + 0xa0),uVar1);
  auVar6 = FUN_00864f50(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = auVar6._0_8_;
  if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    uVar3 = uVar2;
    if ((long)uVar2 < 0x7531) {
      uVar3 = 30000;
    }
    if (999999 < (long)uVar3) {
      uVar3 = 1000000;
    }
    uVar4 = uVar3 * 0x418938 >> 0x20;
    if (499 < (uint)((int)uVar3 + (int)(uVar3 * 0x418938 >> 0x20) * -1000)) {
      uVar4 = uVar4 + 1;
    }
    FUN_00889ef4(*(undefined8 *)(param_1 + 0x150),uVar4);
    if ((long)uVar2 < 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    else {
      uVar3 = uVar2 / 1000;
      if (499 < uVar2 % 1000) {
        uVar3 = uVar3 + 1;
      }
    }
    plVar5 = *(long **)(param_1 + 0x1d0);
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = param_1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_005ea4bc;
    local_50[0][2] = uVar3;
    local_40 = FUN_005ea43c;
    pcStack_38 = FUN_005ea41c;
    (**(code **)(*plVar5 + 8))(plVar5,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 005e8620  FUN_005e8620 =====

int FUN_005e8620(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  auVar3 = FUN_00864f50(uVar2);
  uVar2 = auVar3._0_8_;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ccda0(&local_e0);
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ccda0(&local_190);
  FUN_00865094(*(undefined8 *)(param_2 + 0xa0),&local_e0,&local_190);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  param_1[1] = local_180 + (long)local_d0;
  param_1[5] = puStack_a8;
  param_1[6] = puStack_88;
  param_1[2] = puStack_d8 + (long)puStack_c8 + (long)(puStack_178 + (long)puStack_188);
  param_1[3] = local_98;
  param_1[4] = CONCAT44((int)puStack_168 + (int)puStack_b8,(int)local_170 + (int)local_c0);
  FUN_008650a4(&local_1b0,uVar2);
  param_1[8] = uStack_1a8;
  param_1[7] = local_1b0;
  param_1[9] = local_1a0;
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 400));
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x1b8);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 400));
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x100);
  param_1[0xc] = uVar2;
  return iVar1;
}


// ===== 005e875c  FUN_005e875c =====

void FUN_005e875c(long param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long **local_50;
  long *local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
  FUN_00864460(uVar3,param_2,uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
  uVar3 = (**(code **)(*param_4 + 0x18))(param_4);
  FUN_0086a8cc(uVar4,"audio",5,param_2,uVar2,uVar3,0);
  FUN_006678fc(param_1 + 0x1d8,param_3);
  local_50 = &local_48;
  local_48 = param_4;
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
            (*(long **)(param_1 + 0xb0),&local_50,FUN_005ea4d8);
  plVar1 = local_48;
  local_48 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}


// ===== 005e885c  FUN_005e885c =====

void FUN_005e885c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))();
  return;
}


// ===== 005e8870  FUN_005e8870 =====

void FUN_005e8870(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
  (**(code **)(*param_1 + 0x28))(param_1,&local_20,FUN_005ea504);
  return;
}


// ===== 005e88ac  FUN_005e88ac =====

void FUN_005e88ac(long param_1,char *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *__n;
  ulong uVar2;
  char **__dest;
  size_t sVar3;
  undefined8 uVar4;
  char **__s;
  char *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  
  __dest = &local_60;
  __s = &local_60;
  __n = param_3;
  if ((undefined1 *)0xfe < param_3) {
    __n = (undefined1 *)0xff;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_3 < (undefined1 *)0x17) {
    local_50 = (undefined1 *)CONCAT17((char)__n,0xaaaaaaaaaaaaaa);
  }
  else {
    uVar1 = ((ulong)__n & 0xf8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (char **)operator_new(uVar2);
    local_50 = (undefined1 *)(uVar2 | 0x8000000000000000);
    local_60 = (char *)__dest;
    puStack_58 = __n;
  }
  if ((char *)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_2) && (param_2 < (char *)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_2,(size_t)__n);
  *(char *)((long)__dest + (long)__n) = '\0';
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  if (((long)local_50 < 0) && (__s = (char **)local_60, local_60 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
              );
  }
  sVar3 = strlen((char *)__s);
  FUN_00864f44(uVar4,__s,sVar3);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 005e89fc  FUN_005e89fc =====

void FUN_005e89fc(long param_1,uint param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0x158) = param_2;
  if ((param_2 & 1) != 0) {
    FUN_00865210(*(undefined8 *)(param_1 + 0xa0),"urn:ietf:params:rtp-hdrext:ssrc-audio-level",0x2b,
                 param_3);
    return;
  }
  FUN_00865258(*(undefined8 *)(param_1 + 0xa0),"urn:ietf:params:rtp-hdrext:ssrc-audio-level",0x2b);
  return;
}


// ===== 005e8a34  FUN_005e8a34 =====

void FUN_005e8a34(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  lVar3 = *(long *)(param_1 + 0x148);
  pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 8));
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 8));
  FUN_00865698(*(undefined8 *)(param_1 + 0xa0),1,600);
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  return;
}


// ===== 005e8ab8  FUN_005e8ab8 =====

int FUN_005e8ab8(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00865698(*(undefined8 *)(param_1 + 0xa0),0,600);
  lVar2 = *(long *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 8));
  *(undefined8 *)(lVar2 + 0x30) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 8));
  return iVar1;
}


// ===== 005e8b04  FUN_005e8b04 =====

void FUN_005e8b04(long param_1)

{
  FUN_008650a4(*(undefined8 *)(param_1 + 0xa0));
  return;
}


// ===== 005e8b10  FUN_005e8b10 =====

void FUN_005e8b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e8b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))();
  return;
}


// ===== 005e8b24  FUN_005e8b24 =====

void FUN_005e8b24(long param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00864460(*(undefined8 *)(param_1 + 0xa0));
  FUN_0086a8cc(*(undefined8 *)(param_1 + 0xa8),&DAT_0019d1fe,2,param_2,param_3,1,0);
  return;
}


// ===== 005e8b80  FUN_005e8b80 =====

void FUN_005e8b80(long param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00864460(*(undefined8 *)(param_1 + 0xa0));
  FUN_0086a8cc(*(undefined8 *)(param_1 + 0xa8),"telephone-event",0xf,param_2,param_3,0,0);
  return;
}


// ===== 005e8bdc  FUN_005e8bdc =====

bool FUN_005e8bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    iVar1 = FUN_0086b2d8(*(undefined8 *)(param_1 + 0xa8),param_2,param_3,10);
    return iVar1 == 0;
  }
  return false;
}


// ===== 005e8c20  FUN_005e8c20 =====

void FUN_005e8c20(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar2 = param_2[4];
  puVar1 = (undefined8 *)operator_new(0x28);
  plVar3 = *(long **)(param_1 + 0x1d0);
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[4] = uVar2;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = param_1;
  local_60[0][4] = (long)FUN_005ea56c;
  local_60[0][5] = (long)FUN_005ea520;
  local_60[0][2] = (long)puVar1;
  local_60[0][3] = 0x28;
  local_50 = FUN_005ea43c;
  pcStack_48 = FUN_005ea41c;
  (**(code **)(*plVar3 + 8))(plVar3,local_60,&uStack_21,&uStack_22);
  (*local_50)(0,local_60,local_60);
  FUN_00889ebc(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)param_2);
  return;
}


// ===== 005e8d0c  FUN_005e8d0c =====

void FUN_005e8d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e8d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
  return;
}


// ===== 005e8d20  FUN_005e8d20 =====

int FUN_005e8d20(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x138) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 005e8d58  FUN_005e8d58 =====

void FUN_005e8d58(long param_1,undefined4 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  uVar1 = param_3;
  if (0xe < param_3) {
    uVar1 = 0xf;
  }
  if (param_3 == 0) {
    puVar5 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar4 = uVar1 * 4;
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    puVar2 = (undefined4 *)operator_new(uVar4);
    puVar5 = puVar2 + uVar1;
    puVar6 = puVar2;
    do {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar4 = uVar4 - 4;
      puVar7 = puVar6 + 1;
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar7;
    } while (uVar4 != 0);
  }
  plVar3 = *(long **)(param_1 + 0x1d0);
  local_60[0] = (long *)operator_new(0x20);
  *local_60[0] = param_1;
  local_60[0][1] = (long)puVar2;
  local_60[0][2] = (long)puVar7;
  local_60[0][3] = (long)puVar5;
  local_50 = FUN_005ea5cc;
  pcStack_48 = FUN_005ea59c;
  (**(code **)(*plVar3 + 8))(plVar3,local_60,&uStack_61,&uStack_62);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 005e8e5c  FUN_005e8e5c =====

void FUN_005e8e5c(long param_1,int *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 uStack_91;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  int *local_60;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  local_60 = param_2;
  if (((DAT_00d64178 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d64178), iVar4 != 0)) {
    DAT_00d64170 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64178);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64170 != '\0') {
    FUN_0066d348(0x42,DAT_00d64170,"ChannelSend::ProcessAndEncodeAudio",0,0,0,0,0,0);
    local_70 = DAT_00d64170;
    pcStack_68 = "ChannelSend::ProcessAndEncodeAudio";
    local_78 = &local_70;
  }
  piVar3 = local_60;
  if (*(char *)(param_1 + 0x159) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0x15a);
    if ((((*pbVar1 & 1) != 0) &&
        (pbVar1[0] = 0, pbVar1[1] = 0, pbVar1[2] = 0, pbVar1[3] = 0,
        *(char *)(param_1 + 200) == '\x01')) && ((local_60[0xf16] & 1U) != 0)) {
      uVar6 = *(ulong *)(local_60 + 6);
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = (ulong)(((*(long *)(local_60 + 0xf14) - *(long *)(param_1 + 0xc0)) *
                        (long)local_60[8]) / 1000) / uVar6;
      }
      lVar5 = (uVar2 - 1) * uVar6;
      *(uint *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + ((uint)lVar5 & ((uint)(lVar5 >> 0x3f) ^ 0xffffffff));
    }
    iVar4 = *(int *)(param_1 + 0xb8);
    *local_60 = iVar4;
    *(int *)(param_1 + 0xb8) = iVar4 + local_60[6];
    uVar7 = *(undefined8 *)(local_60 + 0xf16);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(local_60 + 0xf14);
    *(char *)(param_1 + 200) = (char)uVar7;
    lStack_88 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    plVar8 = *(long **)(param_1 + 0x1d0);
    local_60 = (int *)0x0;
    local_90 = param_1;
    local_50[0] = (long *)operator_new(0x18);
    local_80 = 0;
    local_50[0][2] = (long)piVar3;
    local_50[0][1] = lStack_88;
    *local_50[0] = local_90;
    local_40 = FUN_005eaab4;
    pcStack_38 = FUN_005ea6bc;
    (**(code **)(*plVar8 + 8))(plVar8,local_50,&uStack_51,&uStack_91);
    (*local_40)(0,local_50,local_50);
    FUN_005d6c5c(&local_80);
  }
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  FUN_005d6c5c(&local_60);
  return;
}


// ===== 005e90b0  FUN_005e90b0 =====

undefined8 FUN_005e90b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}


// ===== 005e90bc  FUN_005e90bc =====

void FUN_005e90bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x9c) = 1;
  FUN_008e6200(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0),0);
  FUN_008649d8(*(undefined8 *)(param_1 + 0xa0),1);
  FUN_00864960(*(undefined8 *)(param_1 + 0xa0),1);
  *(undefined4 *)(param_1 + 0x15a) = 1;
  *(undefined4 *)(param_1 + 0x159) = 1;
  return;
}


// ===== 005e9120  FUN_005e9120 =====

void FUN_005e9120(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 uStack_a1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 uStack_41;
  long local_40;
  undefined1 **ppuStack_38;
  code *local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x159) = 0;
    puStack_4c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = 0xaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaa;
    local_54 = 0xaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0066f1ac(&local_a0);
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_005eb838;
    local_40 = param_1;
    ppuStack_38 = &local_a0;
    (**(code **)(**(long **)(param_1 + 0x1d0) + 8))
              (*(long **)(param_1 + 0x1d0),&local_40,&uStack_41,&uStack_a1);
    (*local_30)(0,&local_40,&local_40);
    FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
    FUN_00864960(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_008649d8(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_008e697c(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0xa0));
    plVar2 = *(long **)(param_1 + 0x148);
    uVar1 = FUN_008562a4(*(long *)(param_1 + 0xa0) + 0x50);
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
    FUN_0066f2b0(&local_a0);
  }
  return;
}


// ===== 005e9234  FUN_005e9234 =====

void FUN_005e9234(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e9258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005e9260  FUN_005e9260 =====

void FUN_005e9260(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  long local_30;
  long lStack_28;
  code *local_20;
  code *pcStack_18;
  
  lStack_28 = *param_2;
  if (lStack_28 != 0) {
    plVar1 = *(long **)(param_1 + 0x1d0);
    *param_2 = 0;
    local_20 = FUN_005eba48;
    pcStack_18 = FUN_005eb948;
    local_30 = param_1;
    (**(code **)(*plVar1 + 8))(plVar1,&local_30,&uStack_31,&uStack_32);
    (*local_20)(0,&local_30,&local_30);
  }
  return;
}


// ===== 005e92dc  FUN_005e92dc =====

undefined1  [16] FUN_005e92dc(long param_1)

{
  unkuint9 Var1;
  undefined1 auVar2 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x218));
  Var1 = *(unkuint9 *)(param_1 + 600);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x218));
  auVar2._9_7_ = 0;
  auVar2._0_9_ = Var1;
  return auVar2;
}


// ===== 005e9328  FUN_005e9328 =====

int FUN_005e9328(long param_1,int param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x218));
  *(long *)(param_1 + 0x248) = (long)param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x218));
  return iVar1;
}


// ===== 005e9364  FUN_005e9364 =====

ulong FUN_005e9364(ulong param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 == *(int *)(param_1 + 0x98)) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 400));
    uVar3 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x1c0) = param_3[1];
    *(undefined8 *)(param_1 + 0x1b8) = uVar3;
    *(undefined4 *)(param_1 + 0x1c8) = uVar1;
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 400));
    return (ulong)uVar2;
  }
  return param_1;
}


// ===== 005e93c0  FUN_005e93c0 =====

void FUN_005e93c0(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_2 + 8);
  plVar2 = *(long **)(param_1 + 0x1d0);
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = param_1;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_005eba94;
  *(float *)(local_50[0] + 2) = (float)bVar1 / 256.0;
  local_40 = FUN_005ea43c;
  pcStack_38 = FUN_005ea41c;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_21,&uStack_22);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005e946c  FUN_005e946c =====

void FUN_005e946c(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x159) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1d0);
    local_60 = (long *)operator_new(0x18);
    *local_60 = param_1;
    *(undefined4 *)(local_60 + 1) = param_2;
    local_60[2] = param_3;
    uStack_58 = 0x18;
    local_50 = FUN_005ea56c;
    pcStack_48 = FUN_005ebaac;
    (**(code **)(*plVar1 + 8))(plVar1,&local_60,&uStack_21,&uStack_22);
    (*local_50)(0,&local_60,&local_60);
  }
  return;
}


// ===== 005e9528  FUN_005e9528 =====

undefined8
FUN_005e9528(long param_1,undefined4 param_2,undefined4 param_3,int param_4,void *param_5,
            ulong param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char ***__src;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  size_t __n;
  char ****ppppcVar10;
  void *__dest;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *__src_00;
  void *local_4c8;
  char ***local_4a8;
  ulong uStack_4a0;
  undefined8 local_498;
  char ***local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  long *local_470 [2];
  code *local_460;
  code *pcStack_458;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  bVar5 = *(char *)(param_1 + 0x158) != '\x01';
  if (bVar5) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_0092c678(param_1 + 0x110);
    uVar8 = uVar8 & 0xffffffff;
  }
  bVar5 = !bVar5;
  if (*(long *)(param_1 + 0x188) == 0) {
    if (param_6 == 0) {
      local_4c8 = (void *)0x0;
    }
    else {
      local_4c8 = operator_new__(param_6);
      memcpy(local_4c8,param_5,param_6);
    }
    __src_00 = *(void **)(param_1 + 0x268);
    uVar1 = *(long *)(param_1 + 0x270) - (long)__src_00;
    if (uVar1 == 0) {
      lVar13 = 0;
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(uVar1);
      lVar13 = (long)__dest + uVar1;
      memcpy(__dest,__src_00,uVar1);
    }
    plVar3 = *(long **)(param_1 + 0x50);
    lVar12 = *(long *)(param_1 + 0x58);
    if (lVar12 != 0) {
      FUN_00d0f740(1,lVar12);
    }
    plVar11 = (long *)operator_new(0x58);
    *plVar11 = param_1;
    *(undefined4 *)(plVar11 + 1) = param_2;
    *(char *)((long)plVar11 + 0xc) = (char)param_3;
    plVar11[3] = param_6;
    plVar11[4] = param_6;
    *(int *)(plVar11 + 2) = param_4;
    plVar11[5] = (long)local_4c8;
    plVar11[6] = param_7;
    plVar11[7] = (long)__dest;
    plVar11[8] = lVar13;
    plVar11[9] = lVar13;
    *(ushort *)(plVar11 + 10) = (ushort)uVar8 & 0xff | (ushort)bVar5 << 8;
    local_470[0] = (long *)operator_new(0x30);
    *local_470[0] = lVar12;
    local_470[0][4] = (long)FUN_005ebcdc;
    local_470[0][5] = (long)FUN_005ebc78;
    local_470[0][2] = (long)plVar11;
    local_460 = FUN_005db390;
    pcStack_458 = FUN_005db348;
    (**(code **)(*plVar3 + 8))(plVar3,local_470,&local_490,&local_4a8);
    (*local_460)(0,local_470,local_470);
  }
  else {
    memset(local_470,0xaa,0x400);
    local_480 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
    local_490 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_490,local_470,0x400);
    FUN_00667e40(&local_4a8,0);
    uVar1 = uStack_4a0;
    ppppcVar10 = (char ****)local_4a8;
    if (-1 < (long)local_498) {
      uVar1 = local_498 >> 0x38;
      ppppcVar10 = &local_4a8;
    }
    uVar9 = FUN_006228b0(&local_490,ppppcVar10,uVar1);
    uVar9 = FUN_006228b0(uVar9,&DAT_001c7bbb,1);
    lVar13 = (long)*(char *)(param_1 + 0x1ef);
    if (lVar13 < 0) {
      lVar12 = *(long *)(param_1 + 0x1d8);
      lVar13 = *(long *)(param_1 + 0x1e0);
    }
    else {
      lVar12 = param_1 + 0x1d8;
    }
    FUN_006228b0(uVar9,lVar12,lVar13);
    if ((long)local_498 < 0) {
      operator_delete(local_4a8);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x188);
    iVar6 = FUN_00864478(*(undefined8 *)(param_1 + 0xa0));
    uVar7 = FUN_008562a4(*(long *)(param_1 + 0xa0) + 0x50);
    __src = local_490;
    if ((char ****)local_490 == (char ****)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    __n = strlen((char *)local_490);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      local_498 = CONCAT17((char)__n,(undefined7)local_498);
      ppppcVar10 = &local_4a8;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      ppppcVar10 = (char ****)operator_new(uVar2);
      local_498 = uVar2 | 0x8000000000000000;
      local_4a8 = (char ***)ppppcVar10;
      uStack_4a0 = __n;
    }
    if ((char ****)((long)ppppcVar10 + __n) < ppppcVar10) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((ppppcVar10 <= __src) && (__src < (char ****)((long)ppppcVar10 + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(ppppcVar10,__src,__n);
    *(undefined1 *)((long)ppppcVar10 + __n) = 0;
    FUN_005ebf6c(uVar9,param_2,param_3,iVar6 + param_4,param_5,param_6,param_7,uVar7,&local_4a8,
                 uVar8 & 0xff | (ulong)bVar5 << 8,param_1 + 0x268);
    if ((long)local_498 < 0) {
      operator_delete(local_4a8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005e9960  FUN_005e9960 =====

void FUN_005e9960(long param_1)

{
  FUN_005e810c(param_1 + -8);
  return;
}


// ===== 005e996c  FUN_005e996c =====

void FUN_005e996c(long param_1)

{
  FUN_005e810c((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005e99a0  FUN_005e99a0 =====

undefined8 FUN_005e99a0(long param_1)

{
  FUN_005e9528(param_1 + -8);
  return 0;
}


// ===== 005e99c4  FUN_005e99c4 =====

undefined8 FUN_005e99c4(void)

{
  return 0xffffffff;
}


// ===== 005e99d0  FUN_005e99d0 =====

void FUN_005e99d0(long param_1)

{
  FUN_005e810c(param_1 + -0x10);
  return;
}


// ===== 005e99dc  FUN_005e99dc =====

void FUN_005e99dc(long param_1)

{
  FUN_005e810c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 005e9a10  FUN_005e9a10 =====

ulong FUN_005e9a10(ulong param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 == *(int *)(param_1 + 0x88)) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x180));
    uVar3 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x1b0) = param_3[1];
    *(undefined8 *)(param_1 + 0x1a8) = uVar3;
    *(undefined4 *)(param_1 + 0x1b8) = uVar1;
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x180));
    return (ulong)uVar2;
  }
  return param_1;
}


// ===== 005e9a6c  FUN_005e9a6c =====

void FUN_005e9a6c(long param_1)

{
  FUN_005e810c(param_1 + -0x18);
  return;
}


// ===== 005e9a78  FUN_005e9a78 =====

void FUN_005e9a78(long param_1)

{
  FUN_005e810c((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 005e9aac  FUN_005e9aac =====

void FUN_005e9aac(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_2 + 8);
  plVar2 = *(long **)(param_1 + 0x1b8);
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = param_1 + -0x18;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_005eba94;
  *(float *)(local_50[0] + 2) = (float)bVar1 / 256.0;
  local_40 = FUN_005ea43c;
  pcStack_38 = FUN_005ea41c;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_21,&uStack_22);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 005e9b58  FUN_005e9b58 =====

void FUN_005e9b58(long param_1)

{
  FUN_005e810c(param_1 + -0x20);
  return;
}


// ===== 005e9b64  FUN_005e9b64 =====

void FUN_005e9b64(long param_1)

{
  FUN_005e810c((void *)(param_1 + -0x20));
  operator_delete((void *)(param_1 + -0x20));
  return;
}


// ===== 005e9b98  FUN_005e9b98 =====

void FUN_005e9b98(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x139) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x1b0);
    local_60 = (long *)operator_new(0x18);
    *local_60 = param_1 + -0x20;
    *(undefined4 *)(local_60 + 1) = param_2;
    local_60[2] = param_3;
    uStack_58 = 0x18;
    local_50 = FUN_005ea56c;
    pcStack_48 = FUN_005ebaac;
    (**(code **)(*plVar1 + 8))(plVar1,&local_60,&uStack_21,&uStack_22);
    (*local_50)(0,&local_60,&local_60);
  }
  return;
}


// ===== 005e9c54  FUN_005e9c54 =====

int FUN_005e9c54(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d26538;
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 005e9c68  FUN_005e9c68 =====

void FUN_005e9c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d26538;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 005e9ca4  FUN_005e9ca4 =====

int FUN_005e9ca4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    puStack_48 = (undefined8 *)param_2[1];
    local_50 = (undefined8 *)*param_2;
    local_40 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_50);
    puVar1 = local_50;
    puVar5 = puStack_48;
    if (local_50 != (undefined8 *)0x0) {
      while (puVar1 != puVar5) {
        puVar5 = puVar5 + -1;
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar4 = (void *)*puVar5;
        *puVar5 = 0;
        if (pvVar4 != (void *)0x0) {
          FUN_007dc854(pvVar4);
          operator_delete(pvVar4);
        }
      }
      puStack_48 = puVar1;
      operator_delete(local_50);
    }
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}


// ===== 005e9d98  FUN_005e9d98 =====

int FUN_005e9d98(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 005e9de4  FUN_005e9de4 =====

void FUN_005e9de4(long *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  iVar3 = FUN_00864478(*(undefined8 *)(lVar4 + 0xa0));
  FUN_005e9e7c(lVar4,param_2,param_3,param_4 - iVar3,uVar1,uVar2,param_6);
  return;
}


// ===== 005e9e7c  FUN_005e9e7c =====

int FUN_005e9e7c(long param_1,undefined4 param_2,uint param_3,int param_4,void *param_5,
                ulong param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10
                ,uint param_11)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  void *__src;
  void *pvVar10;
  undefined8 local_b0;
  void *pvStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_6 == 0) {
LAB_005e9f04:
    __src = (void *)0x0;
LAB_005e9fb4:
    uVar9 = FUN_00864a64(*(undefined8 *)(param_1 + 0xa0),param_4,param_7,param_3 & 0xff,0);
    if ((uVar9 & 1) != 0) {
      local_b0 = CONCAT44(0xaaaaaaaa,param_2);
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_98 = CONCAT44(0xaaaaaaaa,param_3) & 0xffffffff000000ff;
      pvStack_a8 = param_5;
      local_a0 = param_6;
      iVar6 = FUN_00864478(*(undefined8 *)(param_1 + 0xa0));
      puVar4 = local_80;
      puVar3 = puStack_88;
      local_90 = (undefined1 *)((ulong)local_90 & 0xffffffffffffff00);
      puStack_88 = (undefined1 *)((ulong)puStack_88 & 0xffffffffffffff00);
      local_98 = CONCAT44(iVar6 + param_4,(undefined4)local_98);
      local_80._0_4_ = (uint)local_80 & 0xffffff00;
      local_80._5_3_ = SUB83(puVar4,5);
      local_80._0_5_ = (uint5)(uint)local_80;
      local_78 = param_9;
      uStack_70 = param_10;
      if (0 < param_7) {
        local_90 = (undefined1 *)(param_7 * 1000);
        puStack_88 = (undefined1 *)CONCAT71(SUB87(puVar3,1),1);
      }
      if ((*(char *)(param_1 + 0x158) == '\x01') && ((param_11 >> 8 & 1) != 0)) {
        local_80 = (undefined1 *)(CONCAT44(local_80._4_4_,param_11) & 0xffffffff000000ff);
        local_80._0_5_ = CONCAT14(1,(uint)local_80);
      }
      uVar7 = FUN_0086aa38(*(undefined8 *)(param_1 + 0xa8),&local_b0);
      iVar6 = (uVar7 & 1) - 1;
      goto joined_r0x005ea07c;
    }
  }
  else {
    plVar8 = *(long **)(param_1 + 0x160);
    if (plVar8 == (long *)0x0) {
      if ((*(byte *)(param_1 + 0x16c) & 1) != 0) {
        return -1;
      }
      goto LAB_005e9f04;
    }
    uVar9 = (**(code **)(*plVar8 + 0x28))(plVar8,0,param_6);
    if (uVar9 == 0) {
      __src = (void *)0x0;
    }
    else {
      __src = operator_new__(uVar9);
    }
    plVar8 = *(long **)(param_1 + 0x160);
    local_b0 = 0;
    uVar5 = FUN_008562a4(*(long *)(param_1 + 0xa0) + 0x50);
    pvVar10 = (void *)0x0;
    if (uVar9 != 0) {
      pvVar10 = __src;
    }
    iVar6 = (**(code **)(*plVar8 + 0x20))
                      (plVar8,0,uVar5,0,0,param_5,param_6,param_8,pvVar10,uVar9,&local_b0);
    param_6 = local_b0;
    if (iVar6 == 0) {
      pvVar10 = __src;
      if (uVar9 < local_b0) {
        uVar1 = uVar9 + (uVar9 >> 1);
        uVar2 = local_b0;
        if (local_b0 <= uVar1) {
          uVar2 = uVar1;
        }
        pvVar10 = operator_new__(uVar2);
        if (__src != (void *)0x0) {
          memcpy(pvVar10,__src,uVar9);
          operator_delete__(__src);
        }
      }
      __src = pvVar10;
      param_5 = (void *)0x0;
      if (param_6 != 0) {
        param_5 = __src;
      }
      goto LAB_005e9fb4;
    }
  }
  iVar6 = -1;
joined_r0x005ea07c:
  if (__src != (void *)0x0) {
    operator_delete__(__src);
  }
  return iVar6;
}


// ===== 005ea0bc  FUN_005ea0bc =====

void FUN_005ea0bc(long param_1)

{
  FUN_00d0f740(1,param_1 + 100);
  return;
}


// ===== 005ea0e0  FUN_005ea0e0 =====

bool FUN_005ea0e0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 100);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005ea138  FUN_005ea138 =====

int FUN_005ea138(long *param_1)

{
  int iVar1;
  
  *param_1 = (long)(PTR_DAT_00d51f38 + 0x10);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 005ea198  FUN_005ea198 =====

void FUN_005ea198(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51f38 + 0x10);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 005ea204  FUN_005ea204 =====

bool FUN_005ea204(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 100) == 1;
}


// ===== 005ea21c  FUN_005ea21c =====

void FUN_005ea21c(undefined8 *param_1)

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
    plVar3 = puVar9 + (uVar7 >> 8);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10) {
      if (lVar4 == 0) goto LAB_005ea37c;
      lVar4 = lVar4 + 0x10;
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
    uVar1 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_005ea2f4;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_005ea2f4:
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
LAB_005ea37c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ea3cc  FUN_005ea3cc =====

void FUN_005ea3cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x188) != 0) {
    FUN_005ebee8();
    if (*(long **)(lVar1 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x188) + 8))();
    }
    *(undefined8 *)(lVar1 + 0x188) = 0;
  }
  FUN_0066f2dc(param_1[1]);
  return;
}


// ===== 005ea41c  FUN_005ea41c =====

void FUN_005ea41c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x005ea438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,(undefined8 *)*param_1 + 2,FUN_005ea4b0);
  return;
}


// ===== 005ea43c  FUN_005ea43c =====

void FUN_005ea43c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5ea4b0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x20))(0,(long)pvVar2 + 0x10,(long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 005ea4b0  FUN_005ea4b0 =====

void FUN_005ea4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005ea4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))();
  return;
}


// ===== 005ea4bc  FUN_005ea4bc =====

void FUN_005ea4bc(undefined4 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005ea4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xb8))(param_2,*param_1);
  return;
}


// ===== 005ea4d8  FUN_005ea4d8 =====

void FUN_005ea4d8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  plVar1 = (long *)*param_2;
  *param_2 = lVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ea4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005ea504  FUN_005ea504 =====

void FUN_005ea504(undefined8 *param_1,long *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005ea518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[1])(*param_1);
    return;
  }
  return;
}


// ===== 005ea520  FUN_005ea520 =====

void FUN_005ea520(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  local_20 = puVar1[4];
  (**(code **)(*param_2 + 0xb0))(param_2,&local_40);
  return;
}


// ===== 005ea56c  FUN_005ea56c =====

void FUN_005ea56c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    uVar2 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    return;
  }
  if ((param_1 & 0xff) == 0) {
    operator_delete((void *)*param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5ea59c);
  (*pcVar1)();
}


// ===== 005ea59c  FUN_005ea59c =====

void FUN_005ea59c(long *param_1)

{
  if ((long *)(*(long *)*param_1 + 0x268) != (long *)*param_1 + 1) {
    FUN_005e72f8();
    return;
  }
  return;
}


// ===== 005ea5cc  FUN_005ea5cc =====

void FUN_005ea5cc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5ea6bc);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar6 + 8);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 0x10);
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
        *(void **)((long)pvVar6 + 0x10) = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 005ea6bc  FUN_005ea6bc =====

undefined8 * FUN_005ea6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int local_24;
  
  plVar15 = (long *)*param_1;
  lVar14 = *plVar15;
  if (*(char *)(lVar14 + 0x159) != '\x01') {
    return param_1;
  }
  iVar3 = *(int *)plVar15[2];
  local_24 = FUN_00864478(*(undefined8 *)(lVar14 + 0xa0));
  local_24 = local_24 + iVar3;
  FUN_005eab1c(lVar14 + 0xd0,&local_24,plVar15 + 1);
  do {
    uVar7 = *(ulong *)(lVar14 + 0xf8);
    if (uVar7 < 0xc9) {
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                  );
      }
      uVar9 = *(ulong *)(lVar14 + 0xf0);
      puVar8 = *(undefined8 **)(lVar14 + 0xd8);
      lVar12 = plVar15[1];
      uVar11 = uVar9 & 0xff;
      lVar10 = puVar8[uVar9 >> 8];
      if (((lVar12 != 0x7fffffffffffffff) &&
          (lVar13 = *(long *)(lVar10 + (uVar9 & 0xff) * 0x10 + 8), lVar13 != -0x8000000000000000))
         && ((lVar12 == -0x8000000000000000 ||
             ((lVar13 == 0x7fffffffffffffff || (lVar12 - lVar13 < 0x1e8481)))))) {
        lVar10 = (**(code **)(**(long **)(lVar14 + 0x38) + 0x10))();
        lVar12 = plVar15[1];
        uVar7 = 0x7fffffffffffffff;
        if ((lVar12 != 0x7fffffffffffffff) && (lVar10 != -0x8000000000000000)) {
          uVar7 = 0x8000000000000000;
          if (lVar10 != 0x7fffffffffffffff && lVar12 != -0x8000000000000000) {
            uVar7 = lVar12 - lVar10;
          }
        }
        lVar10 = DAT_00d64180;
        if (DAT_00d64180 == 0) {
          lVar10 = FUN_006660d0("WebRTC.Audio.EncodingTaskQueueLatencyMs",0x27,1,10000,0x32);
          FUN_00d0f5e0(0,lVar10,&DAT_00d64180);
          if (lVar10 == 0) goto LAB_005ea8c4;
        }
        uVar9 = uVar7 / 1000;
        if (499 < uVar7 % 1000) {
          uVar9 = uVar9 + 1;
        }
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar9 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
        }
        FUN_00666568(lVar10,uVar9);
LAB_005ea8c4:
        pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x70));
        cVar4 = *(char *)(lVar14 + 0x138);
        pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x70));
        FUN_0092a358(plVar15[2],*(undefined1 *)(lVar14 + 0x139),cVar4);
        if (*(char *)(lVar14 + 0x158) == '\x01') {
          uVar7 = *(long *)(plVar15[2] + 0x28) * *(long *)(plVar15[2] + 0x18);
          if (0x3c00 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../audio/channel_send.cc",0x3cd,
                         "length <= AudioFrame::kMaxDataSizeBytes",&DAT_001fb920,uVar7,0x3c00);
          }
          if ((cVar4 == '\0') || (*(char *)(lVar14 + 0x139) != '\x01')) {
            uVar6 = FUN_00659108();
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6;
            }
            FUN_0092c2c8(lVar14 + 0x110,uVar1,uVar7);
          }
          else {
            FUN_0092c630(lVar14 + 0x110,uVar7);
          }
        }
        *(char *)(lVar14 + 0x139) = cVar4;
        uVar5 = (**(code **)(**(long **)(lVar14 + 0xb0) + 0x28))
                          (*(long **)(lVar14 + 0xb0),plVar15[2]);
        pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x218));
        if ((int)uVar5 < 0) {
          *(undefined8 *)(lVar14 + 0x250) = 0;
          *(undefined8 *)(lVar14 + 0x240) = 0;
          if (*(char *)(lVar14 + 0x260) == '\x01') {
            *(undefined1 *)(lVar14 + 0x260) = 0;
          }
        }
        else {
          lVar12 = *(long *)(lVar14 + 0x240);
          lVar10 = lVar12;
          if (lVar12 != -0x8000000000000000) {
            lVar10 = lVar12 + 10000;
          }
          if (lVar12 != 0x7fffffffffffffff) {
            lVar12 = lVar10;
          }
          *(long *)(lVar14 + 0x240) = lVar12;
          if (uVar5 != 0) {
            lVar13 = *(long *)(lVar14 + 0x248);
            lVar10 = 0;
            if (lVar13 != -0x8000000000000000) {
              lVar10 = (lVar13 + (ulong)uVar5) * 8000000;
            }
            lVar2 = -8000000;
            if (lVar13 != 0x7fffffffffffffff) {
              lVar2 = lVar10;
            }
            lVar13 = *(long *)(lVar14 + 0x250);
            lVar10 = 0;
            if (lVar12 != 0) {
              lVar10 = lVar2 / lVar12;
            }
            if (*(char *)(lVar14 + 0x260) == '\x01') {
              lVar12 = lVar10;
              if (lVar10 <= lVar13) {
                lVar12 = lVar13;
              }
              *(long *)(lVar14 + 600) = lVar12;
            }
            else {
              if ((long *)(lVar14 + 600) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              lVar12 = lVar10;
              if (lVar10 <= lVar13) {
                lVar12 = lVar13;
              }
              *(undefined1 *)(lVar14 + 0x260) = 1;
              *(long *)(lVar14 + 600) = lVar12;
            }
            *(long *)(lVar14 + 0x250) = lVar10;
            *(undefined8 *)(lVar14 + 0x240) = 0;
          }
        }
        uVar5 = pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x218));
        return (undefined8 *)(ulong)uVar5;
      }
    }
    else {
      uVar9 = *(ulong *)(lVar14 + 0xf0);
      puVar8 = *(undefined8 **)(lVar14 + 0xd8);
      uVar11 = uVar9 & 0xff;
      lVar10 = puVar8[uVar9 >> 8];
    }
    if (lVar10 + uVar11 * 0x10 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    *(ulong *)(lVar14 + 0xf0) = uVar9 + 1;
    *(ulong *)(lVar14 + 0xf8) = uVar7 - 1;
    if (0x1ff < uVar9 + 1) {
      operator_delete((void *)*puVar8);
      *(long *)(lVar14 + 0xd8) = *(long *)(lVar14 + 0xd8) + 8;
      *(long *)(lVar14 + 0xf0) = *(long *)(lVar14 + 0xf0) + -0x100;
    }
  } while( true );
}


// ===== 005eaab4  FUN_005eaab4 =====

void FUN_005eaab4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5eab1c);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_005d6c5c((long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 005eab1c  FUN_005eab1c =====

long FUN_005eab1c(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar6) {
    lVar5 = (lVar4 - lVar6) * 0x20 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_005eac08(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar6 != lVar4) &&
     (uVar2 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar1 = (undefined4 *)(*(long *)(lVar6 + (uVar2 >> 8) * 8) + (uVar2 & 0xff) * 0x10),
     puVar1 != (undefined4 *)0x0)) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = *param_3;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar2 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar3 = (long *)(*(long *)(param_1 + 8) + (uVar2 >> 8) * 8);
    lVar6 = *plVar3;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar6 + (uVar2 & 0xff) * 0x10;
    }
    if (lVar5 == lVar6) {
      lVar5 = plVar3[-1] + 0x1000;
    }
    return lVar5 + -0x10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005eac08  FUN_005eac08 =====

void FUN_005eac08(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x100) {
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
      FUN_005eb078(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_005eb59c(&local_50,lVar5);
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
      FUN_005eb078(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_005eb300(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_005eadf0(param_1,&local_50);
  return;
}


// ===== 005eadf0  FUN_005eadf0 =====

void FUN_005eadf0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_005eb060;
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
LAB_005eb060:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005eb078  FUN_005eb078 =====

void FUN_005eb078(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_005eb2e8;
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
LAB_005eb2e8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005eb300  FUN_005eb300 =====

void FUN_005eb300(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_005eb584;
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
LAB_005eb584:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005eb59c  FUN_005eb59c =====

void FUN_005eb59c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_005eb820;
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
LAB_005eb820:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005eb838  FUN_005eb838 =====

void FUN_005eb838(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *param_1;
  (**(code **)(**(long **)(lVar8 + 0xb0) + 0x18))();
  puVar2 = *(undefined8 **)(lVar8 + 0xd8);
  if (puVar2 != *(undefined8 **)(lVar8 + 0xe0)) {
    uVar7 = *(ulong *)(lVar8 + 0xf0);
    uVar1 = *(long *)(lVar8 + 0xf8) + uVar7;
    plVar5 = puVar2 + (uVar7 >> 8);
    lVar6 = *plVar5;
    lVar4 = lVar6 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar2[uVar1 >> 8] + (uVar1 & 0xff) * 0x10) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar6 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar6 = *plVar5;
        lVar4 = lVar6;
      }
    }
  }
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  lVar4 = (long)*(undefined8 **)(lVar8 + 0xe0) - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0xd8) + 8);
    *(undefined8 **)(lVar8 + 0xd8) = puVar2;
    lVar4 = *(long *)(lVar8 + 0xe0) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar1 != 2) goto LAB_005eb920;
    uVar3 = 0x100;
  }
  *(undefined8 *)(lVar8 + 0xf0) = uVar3;
LAB_005eb920:
  FUN_0066f2dc(param_1[1]);
  return;
}


// ===== 005eb948  FUN_005eb948 =====

void FUN_005eb948(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *local_60;
  long local_58;
  undefined1 *puStack_50;
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = *param_1;
  plVar4 = (long *)param_1[1];
  param_1[1] = 0;
  puVar3 = (undefined8 *)operator_new(0x68);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = FUN_005e9de4;
  local_40 = &DAT_001fbe68;
  local_60 = plVar4;
  local_58 = lVar1;
  FUN_005ebddc(puVar3,&local_58,&local_60,*(undefined8 *)(lVar1 + 0x50));
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  if (*(code **)(local_40 + 8) != (code *)0x0) {
    (**(code **)(local_40 + 8))(local_58);
  }
  *(undefined4 *)((long)puVar3 + 100) = 0;
  *puVar3 = &PTR_FUN_00d26568;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar3 + 100);
  }
  plVar4 = *(long **)(lVar1 + 0x188);
  *(undefined8 **)(lVar1 + 0x188) = puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    puVar3 = *(undefined8 **)(lVar1 + 0x188);
  }
  FUN_005ebe88(puVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005eba48  FUN_005eba48 =====

void FUN_005eba48(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5eba94);
    (*pcVar1)();
  }
  if ((long *)param_2[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005eba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[1] + 8))();
    return;
  }
  return;
}


// ===== 005eba94  FUN_005eba94 =====

void FUN_005eba94(undefined4 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005ebaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x90))(*param_1,param_2);
  return;
}


// ===== 005ebaac  FUN_005ebaac =====

void FUN_005ebaac(undefined8 *param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_1;
  lVar6 = *plVar10;
  lVar8 = *(long *)(lVar6 + 0xf8);
  if (lVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0xd8);
    uVar9 = *(ulong *)(lVar6 + 0xf0);
    do {
      piVar1 = (int *)(puVar7[uVar9 >> 8] + (uVar9 & 0xff) * 0x10);
      if (-1 < *piVar1 - (int)plVar10[1]) {
        if (*piVar1 != (int)plVar10[1]) {
          return;
        }
        lVar3 = plVar10[2];
        if ((lVar3 == 0x7fffffffffffffff) ||
           (lVar5 = *(long *)(piVar1 + 2), lVar5 == -0x8000000000000000)) {
          uVar4 = 0x7fffffffffffffff;
LAB_005ebb8c:
          uVar2 = uVar4 / 1000;
          if (499 < uVar4 % 1000) {
            uVar2 = uVar2 + 1;
          }
        }
        else {
          if ((lVar3 == -0x8000000000000000) || (lVar5 == 0x7fffffffffffffff)) {
            uVar4 = 0x8000000000000000;
          }
          else {
            uVar4 = lVar3 - lVar5;
            if (-1 < (long)uVar4) goto LAB_005ebb8c;
          }
          uVar2 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
        }
        FUN_00d0f7d0(uVar2,lVar6 + 0x100);
        FUN_00d0f7d0(1,lVar6 + 0x108);
        if (puVar7[uVar9 >> 8] + (uVar9 & 0xff) * 0x10 != 0) {
          *(ulong *)(lVar6 + 0xf0) = uVar9 + 1;
          *(long *)(lVar6 + 0xf8) = lVar8 + -1;
          if (uVar9 + 1 < 0x200) {
            return;
          }
          operator_delete((void *)*puVar7);
          *(long *)(lVar6 + 0xd8) = *(long *)(lVar6 + 0xd8) + 8;
          *(long *)(lVar6 + 0xf0) = *(long *)(lVar6 + 0xf0) + -0x100;
          return;
        }
LAB_005ebc64:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (piVar1 == (int *)0x0) goto LAB_005ebc64;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + -1;
      *(ulong *)(lVar6 + 0xf0) = uVar9;
      *(long *)(lVar6 + 0xf8) = lVar8;
      if (0x1ff < uVar9) {
        operator_delete((void *)*puVar7);
        lVar8 = *(long *)(lVar6 + 0xf8);
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0xd8) + 8);
        uVar9 = *(long *)(lVar6 + 0xf0) - 0x100;
        *(undefined8 **)(lVar6 + 0xd8) = puVar7;
        *(ulong *)(lVar6 + 0xf0) = uVar9;
      }
    } while (lVar8 != 0);
  }
  return;
}


// ===== 005ebc78  FUN_005ebc78 =====

void FUN_005ebc78(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x7;
  
  param_1 = (undefined8 *)*param_1;
  lVar3 = param_1[8] - param_1[7];
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_1[7];
  }
  uVar2 = 0;
  if (param_1[3] != 0) {
    uVar2 = param_1[5];
  }
  FUN_005e9e7c(*param_1,*(undefined4 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 0xc),
               *(undefined4 *)(param_1 + 2),uVar2,param_1[3],param_1[6],in_x7,lVar1,lVar3 >> 2,
               *(undefined2 *)(param_1 + 10));
  return;
}


// ===== 005ebcdc  FUN_005ebcdc =====

void FUN_005ebcdc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5ebddc);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar6 + 0x38);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 0x40);
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
        *(void **)((long)pvVar6 + 0x40) = pvVar2;
        operator_delete(pvVar2);
      }
      pvVar2 = *(void **)((long)pvVar6 + 0x28);
      *(undefined8 *)((long)pvVar6 + 0x28) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 005ebddc  FUN_005ebddc =====

ulong FUN_005ebddc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d265b0;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_38);
  uVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  uVar2 = (ulong)uVar1;
  uVar5 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = uVar5;
  param_1[8] = param_2[2];
  puVar3 = (undefined8 *)param_2[3];
  param_1[9] = puVar3;
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
    uVar2 = (*pcVar4)(*param_2);
    param_1[6] = uVar2;
  }
  uVar5 = *param_3;
  *param_3 = 0;
  param_1[10] = uVar5;
  param_1[0xb] = param_4;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return uVar2;
}


// ===== 005ebe88  FUN_005ebe88 =====

void FUN_005ebe88(long *param_1)

{
  long *plVar1;
  long *local_8;
  
  plVar1 = (long *)param_1[10];
  local_8 = param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 005ebee8  FUN_005ebee8 =====

int FUN_005ebee8(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  (**(code **)(**(long **)(param_1 + 0x50) + 0x38))();
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 8))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_001fbc50;
  pcVar3 = *(code **)(lVar2 + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(undefined8 *)(param_1 + 0x30));
  }
  *(code **)(param_1 + 0x40) = FUN_005ec7bc;
  *(undefined **)(param_1 + 0x48) = &DAT_001fbc50;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 005ebf6c  FUN_005ebf6c =====

ulong FUN_005ebf6c(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  void *param_5,ulong param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 *param_9,undefined2 param_10,undefined8 *param_11)

{
  uint uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 *local_80;
  undefined8 *puStack_78;
  code *local_70;
  code *pcStack_68;
  
  puVar2 = (undefined8 *)operator_new(0x80);
  pvVar3 = (void *)*param_11;
  uVar4 = param_11[1] - (long)pvVar3;
  if (uVar4 == 0) {
    lVar6 = 0;
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar4);
    lVar6 = (long)__dest + uVar4;
    memcpy(__dest,pvVar3,uVar4);
  }
  FUN_007dc8fc(puVar2,0);
  *(undefined4 *)(puVar2 + 1) = param_2;
  *puVar2 = &PTR_FUN_00d265f0;
  *(undefined1 *)((long)puVar2 + 0xc) = param_3;
  *(undefined4 *)(puVar2 + 2) = param_4;
  puVar2[3] = param_6;
  puVar2[4] = param_6;
  if (param_6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = operator_new__(param_6);
    memcpy(pvVar3,param_5,param_6);
  }
  puVar2[9] = __dest;
  puVar2[10] = lVar6;
  puVar2[0xb] = lVar6;
  puVar2[5] = pvVar3;
  puVar2[6] = param_7;
  puVar2[7] = 1;
  *(undefined4 *)(puVar2 + 8) = param_8;
  if (*(char *)((long)param_9 + 0x17) < '\0') {
    FUN_005478d8(puVar2 + 0xc,*param_9,param_9[1]);
  }
  else {
    uVar7 = *param_9;
    uVar5 = param_9[2];
    puVar2[0xd] = param_9[1];
    puVar2[0xc] = uVar7;
    puVar2[0xe] = uVar5;
  }
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined2 *)((long)puVar2 + 0x7c) = param_10;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    local_70 = FUN_005ecc10;
    pcStack_68 = FUN_005ecbf8;
    local_80 = param_1;
    puStack_78 = puVar2;
    (**(code **)(*(long *)param_1[0xb] + 8))((long *)param_1[0xb],&local_80,&uStack_81,&uStack_82);
    (*local_70)(0,&local_80,&local_80);
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
    return (ulong)uVar1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
                    /* WARNING: Could not recover jumptable at 0x005ec17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)param_1[10] + 0x20))((long *)param_1[10],puVar2);
  return uVar4;
}


// ===== 005ec184  FUN_005ec184 =====

ulong FUN_005ec184(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 *local_40;
  long *plStack_38;
  code *local_30;
  code *pcStack_28;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  if ((*(byte *)(param_1[9] + 0x10) & 1) == 0) {
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    local_30 = FUN_005eccb8;
    pcStack_28 = FUN_005ecca0;
    local_40 = param_1;
    plStack_38 = param_2;
    (**(code **)(*(long *)param_1[0xb] + 8))((long *)param_1[0xb],&local_40,&uStack_41,&uStack_42);
    (*local_30)(0,&local_40,&local_40);
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  }
  else {
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ec1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
      return uVar2;
    }
  }
  return (ulong)uVar1;
}


// ===== 005ec258  FUN_005ec258 =====

int FUN_005ec258(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x60) = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 005ec290  FUN_005ec290 =====

ulong FUN_005ec290(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong extraout_x1;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 local_84 [2];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((*(byte *)(*(long *)(param_1 + 0x48) + 0x10) & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
    if (uVar1 != 2) {
      uVar1 = (uint)(uVar1 == 1);
    }
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x40))(param_2);
    auVar6 = (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0xa8))(param_2);
    if ((extraout_x1 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      auVar7 = (**(code **)(*param_2 + 0xa8))(param_2);
      uVar5 = auVar7._0_8_;
      if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
    }
    auVar7 = (**(code **)(*param_2 + 0x98))(param_2);
    local_84[0] = (**(code **)(*param_2 + 0xb8))(param_2);
    local_70 = auVar6;
    local_80 = auVar7;
    (**(code **)(param_1 + 0x40))(param_1 + 0x30,uVar1,uVar2,uVar3,local_70,uVar5,local_80,local_84)
    ;
  }
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  uVar4 = (ulong)uVar1;
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
  }
  return uVar4;
}


// ===== 005ec414  FUN_005ec414 =====

void FUN_005ec414(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5ec41c);
  (*pcVar1)();
}


// ===== 005ec41c  FUN_005ec41c =====

void FUN_005ec41c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *__dest;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar7 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((long)(uVar7 - (long)__dest) >> 2) < param_4) {
    if (__dest == (void *)0x0) {
LAB_005ec69c:
      if (param_4 >> 0x3e == 0) {
        uVar10 = (long)uVar7 >> 1;
        if ((ulong)((long)uVar7 >> 1) <= param_4) {
          uVar10 = param_4;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar10 = 0x3fffffffffffffff;
        }
        if (uVar10 >> 0x3e == 0) {
          puVar2 = (undefined4 *)operator_new(uVar10 * 4);
          *param_1 = puVar2;
          param_1[1] = puVar2;
          param_1[2] = puVar2 + uVar10;
          if (param_2 != param_3) {
            uVar10 = (ulong)((long)param_3 + (-4 - (long)param_2)) >> 2;
            uVar7 = (ulong)-(long)puVar2 >> 2;
            if (uVar10 <= (ulong)-(long)puVar2 >> 2) {
              uVar7 = uVar10;
            }
            puVar3 = puVar2;
            if ((0xb < uVar7) && ((((int)param_3 - (int)param_2 | -(int)puVar2) & 3U) == 0)) {
              puVar12 = (undefined8 *)(puVar2 + 4);
              uVar10 = uVar7 + 1 & 7;
              puVar5 = (undefined8 *)(param_2 + 4);
              uVar11 = 8;
              if (uVar10 != 0) {
                uVar11 = uVar10;
              }
              lVar6 = (uVar7 + 1) - uVar11;
              param_2 = param_2 + lVar6;
              puVar3 = puVar2 + lVar6;
              do {
                puVar1 = puVar5 + -1;
                uVar16 = puVar5[-2];
                uVar18 = puVar5[1];
                uVar17 = *puVar5;
                lVar6 = lVar6 + -8;
                puVar5 = puVar5 + 4;
                puVar12[-1] = *puVar1;
                puVar12[-2] = uVar16;
                puVar12[1] = uVar18;
                *puVar12 = uVar17;
                puVar12 = puVar12 + 4;
              } while (lVar6 != 0);
            }
            do {
              if (puVar3 == (undefined4 *)0x0) {
LAB_005ec7a4:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar4 = param_2 + 1;
              puVar2 = puVar3 + 1;
              *puVar3 = *param_2;
              puVar3 = puVar2;
              param_2 = puVar4;
            } while (puVar4 != param_3);
          }
          param_1[1] = puVar2;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    pvVar8 = (void *)param_1[1];
    uVar10 = (ulong)((long)pvVar8 + (-4 - ((long)pvVar8 << 0x3e))) >> 2;
    uVar7 = (ulong)(((long)__dest - (long)pvVar8 << 0x3e) - ((long)__dest - (long)pvVar8)) >> 2;
    if (uVar10 <= uVar7) {
      uVar7 = uVar10;
    }
    if ((1 < uVar7) && ((((int)__dest - (int)pvVar8 | -(int)pvVar8) & 3U) == 0)) {
      uVar7 = uVar7 & 0x3ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar7 * -4);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar8 == __dest) {
        param_1[1] = __dest;
        operator_delete(__dest);
        uVar7 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_005ec69c;
      }
      pvVar8 = (void *)((long)pvVar8 + -4);
    } while (pvVar8 != (void *)0x0);
  }
  else {
    lVar15 = param_1[1];
    lVar6 = lVar15 - (long)__dest;
    if ((ulong)(lVar6 >> 2) < param_4) {
      puVar3 = (undefined4 *)((long)param_2 + lVar6);
      memmove(__dest,param_2,lVar15 - (long)__dest);
      puVar2 = (undefined4 *)param_1[1];
      if (puVar3 != param_3) {
        uVar10 = (((long)__dest + (long)param_3) - (lVar15 + (long)param_2)) - 4;
        uVar11 = uVar10 >> 2;
        uVar7 = (ulong)-(long)puVar2 >> 2;
        if (uVar11 <= (ulong)-(long)puVar2 >> 2) {
          uVar7 = uVar11;
        }
        puVar4 = puVar2;
        puVar9 = puVar2;
        if (0x33 < uVar7) {
          uVar13 = (ulong)-(long)puVar2 >> 2;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((((((uint)uVar10 | (uint)-(long)puVar2) & 3) == 0) && (puVar2 <= puVar2 + uVar13)) &&
              (puVar3 <= puVar3 + uVar13)) &&
             (0x1f < (ulong)(((long)__dest + (long)puVar2) - (lVar15 + (long)param_2)))) {
            uVar10 = uVar7 + 1 & 7;
            uVar11 = 8;
            if (uVar10 != 0) {
              uVar11 = uVar10;
            }
            lVar15 = (uVar7 + 1) - uVar11;
            puVar12 = (undefined8 *)((long)param_2 + lVar6 + 0x10);
            puVar3 = puVar3 + lVar15;
            puVar4 = puVar2 + lVar15;
            puVar5 = (undefined8 *)(puVar2 + 4);
            do {
              puVar1 = puVar12 + -1;
              uVar16 = puVar12[-2];
              uVar18 = puVar12[1];
              uVar17 = *puVar12;
              lVar15 = lVar15 + -8;
              puVar12 = puVar12 + 4;
              puVar5[-1] = *puVar1;
              puVar5[-2] = uVar16;
              puVar5[1] = uVar18;
              *puVar5 = uVar17;
              puVar5 = puVar5 + 4;
              puVar9 = puVar4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar9 == (undefined4 *)0x0) goto LAB_005ec7a4;
          puVar14 = puVar3 + 1;
          puVar2 = puVar4 + 1;
          *puVar9 = *puVar3;
          puVar4 = puVar2;
          puVar9 = puVar9 + 1;
          puVar3 = puVar14;
        } while (puVar14 != param_3);
      }
      param_1[1] = puVar2;
      return;
    }
    memmove(__dest,param_2,(long)param_3 - (long)param_2);
    lVar6 = param_1[1];
    lVar15 = ((long)__dest + (long)param_3) - (lVar6 + (long)param_2);
    uVar7 = (ulong)((lVar15 << 0x3e) - lVar15) >> 2;
    uVar10 = (lVar6 - (lVar6 << 0x3e)) - 4U >> 2;
    if (uVar10 <= uVar7) {
      uVar7 = uVar10;
    }
    lVar15 = (long)__dest + ((long)param_3 - (long)param_2);
    if ((1 < uVar7) &&
       (((((int)__dest + (int)param_3) - ((int)lVar6 + (int)param_2) | -(int)lVar6) & 3U) == 0)) {
      uVar7 = uVar7 & 0x3ffffffffffffffe;
      lVar6 = lVar6 + uVar7 * -4;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (lVar6 == lVar15) {
        param_1[1] = lVar15;
        return;
      }
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005ec7bc  FUN_005ec7bc =====

void FUN_005ec7bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005dc0b4();
}


// ===== 005ec7cc  FUN_005ec7cc =====

void FUN_005ec7cc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d265f0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    pvVar1 = (void *)param_1[9];
  }
  else {
    pvVar1 = (void *)param_1[9];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[10];
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
    param_1[10] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 005ec8cc  FUN_005ec8cc =====

void FUN_005ec8cc(void *param_1)

{
  FUN_005ec7cc();
  operator_delete(param_1);
  return;
}


// ===== 005ec8fc  FUN_005ec8fc =====

undefined8 FUN_005ec8fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar1;
}


// ===== 005ec914  FUN_005ec914 =====

void FUN_005ec914(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_3 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (uVar3 < param_3) {
      uVar3 = uVar3 + (uVar3 >> 1);
      uVar1 = param_3;
      if (param_3 <= uVar3) {
        uVar1 = uVar3;
      }
      pvVar2 = operator_new__(uVar1);
      pvVar4 = *(void **)(param_1 + 0x28);
      *(void **)(param_1 + 0x28) = pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        pvVar4 = *(void **)(param_1 + 0x18);
      }
      *(ulong *)(param_1 + 0x20) = uVar1;
    }
    else {
      pvVar4 = (void *)0x0;
    }
    memcpy((void *)(*(long *)(param_1 + 0x28) + (long)pvVar4),param_2,param_3);
    *(ulong *)(param_1 + 0x18) = param_3;
  }
  return;
}


// ===== 005ec9b0  FUN_005ec9b0 =====

undefined1 FUN_005ec9b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


// ===== 005ec9bc  FUN_005ec9bc =====

undefined8 FUN_005ec9bc(void)

{
  return 1;
}


// ===== 005ec9c8  FUN_005ec9c8 =====

void FUN_005ec9c8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}


// ===== 005ec9d4  FUN_005ec9d4 =====

undefined4 FUN_005ec9d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 005ec9e0  FUN_005ec9e0 =====

undefined4 FUN_005ec9e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 005ec9ec  FUN_005ec9ec =====

void FUN_005ec9ec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 005ec9f8  FUN_005ec9f8 =====

undefined8 FUN_005ec9f8(void)

{
  return 2;
}


// ===== 005eca04  FUN_005eca04 =====

void FUN_005eca04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x77)) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    param_1[1] = *(undefined8 *)(param_2 + 0x68);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
  return;
}


// ===== 005eca30  FUN_005eca30 =====

undefined1  [16] FUN_005eca30(void)

{
  return ZEXT816(0);
}


// ===== 005eca40  FUN_005eca40 =====

undefined1  [16] FUN_005eca40(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    auVar1._0_8_ = *(long *)(param_1 + 0x30) * 1000;
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(0);
}


// ===== 005eca70  FUN_005eca70 =====

undefined8 FUN_005eca70(void)

{
  return 1;
}


// ===== 005eca7c  FUN_005eca7c =====

void FUN_005eca7c(long param_1,ulong param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
    cVar3 = '\0';
  }
  else {
    if ((long)param_2 < 0) {
      uVar2 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
    }
    else {
      uVar2 = param_2 / 1000;
      if (499 < param_2 % 1000) {
        uVar2 = uVar2 + 1;
      }
    }
    cVar3 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == cVar3) {
    if (cVar1 != '\0') {
      *(ulong *)(param_1 + 0x30) = uVar2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x38) = 0;
      return;
    }
    if ((ulong *)(param_1 + 0x30) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_1 + 0x30) = uVar2;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}


// ===== 005ecb58  FUN_005ecb58 =====

undefined1  [16] FUN_005ecb58(void)

{
  return ZEXT816(0);
}


// ===== 005ecb68  FUN_005ecb68 =====

undefined1  [16] FUN_005ecb68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
  auVar3._8_8_ = lVar2 >> 2;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  auVar3._0_8_ = lVar1;
  return auVar3;
}


// ===== 005ecb80  FUN_005ecb80 =====

undefined4 FUN_005ecb80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}


// ===== 005ecb8c  FUN_005ecb8c =====

undefined1  [16] FUN_005ecb8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}


// ===== 005ecb9c  FUN_005ecb9c =====

uint FUN_005ecb9c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 2) {
    uVar1 = (uint)(uVar1 == 1);
  }
  return uVar1;
}


// ===== 005ecbb8  FUN_005ecbb8 =====

undefined2 FUN_005ecbb8(long param_1)

{
  return *(undefined2 *)(param_1 + 0x7c);
}


// ===== 005ecbc4  FUN_005ecbc4 =====

undefined8 FUN_005ecbc4(void)

{
  return 1;
}


// ===== 005ecbd0  FUN_005ecbd0 =====

void FUN_005ecbd0(long param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = 0x7f;
  if ((~param_2 & 0x180) != 0) {
    uVar1 = param_2 & 0xff;
  }
  *(ushort *)(param_1 + 0x7c) = param_2 & 0x100 | uVar1;
  return;
}


// ===== 005ecbf8  FUN_005ecbf8 =====

void FUN_005ecbf8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_005ec290(*param_1,uVar1);
  return;
}


// ===== 005ecc10  FUN_005ecc10 =====

void FUN_005ecc10(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar3 = *param_2;
    *param_2 = 0;
    *param_3 = lVar3;
    lVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = lVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5ecca0);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ecc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 005ecca0  FUN_005ecca0 =====

void FUN_005ecca0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_005ec290(*param_1,uVar1);
  return;
}


// ===== 005eccb8  FUN_005eccb8 =====

void FUN_005eccb8(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar3 = *param_2;
    *param_2 = 0;
    *param_3 = lVar3;
    lVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = lVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x5ecd48);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ecd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 005ecd48  FUN_005ecd48 =====

void FUN_005ecd48(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 005ecd5c  FUN_005ecd5c =====

undefined8 * FUN_005ecd5c(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}


// ===== 005ecd78  FUN_005ecd78 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005ecd78(long param_1,undefined8 *******param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    pppppppuVar4 = &local_58;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar3 = 0x19;
    if (uVar1 != 0x18) {
      uVar3 = uVar1;
    }
    pppppppuVar4 = (undefined8 *******)operator_new(uVar3);
    local_48 = uVar3 | 0x8000000000000000;
    local_58 = pppppppuVar4;
    uStack_50 = param_3;
  }
  if (pppppppuVar4 <= (undefined8 *******)((long)pppppppuVar4 + param_3)) {
    if ((pppppppuVar4 <= param_2) && (param_2 < (undefined8 *******)((long)pppppppuVar4 + param_3)))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pppppppuVar4,param_2,param_3);
    pppppppuVar2 = (undefined8 *******)(param_1 + 8);
    *(undefined1 *)((long)pppppppuVar4 + param_3) = 0;
    if ((undefined8 ********)pppppppuVar2 != &local_58) {
      if (*(char *)(param_1 + 0x1f) < '\0') {
        uVar1 = uStack_50;
        pppppppuVar4 = local_58;
        if (-1 < (long)local_48) {
          uVar1 = local_48 >> 0x38;
          pppppppuVar4 = &local_58;
        }
        FUN_00547f08(pppppppuVar2,pppppppuVar4,uVar1);
      }
      else if ((long)local_48 < 0) {
        FUN_00547fc0(pppppppuVar2,local_58,uStack_50);
      }
      else {
        *(ulong *)(param_1 + 0x10) = uStack_50;
        *pppppppuVar2 = local_58;
        *(ulong *)(param_1 + 0x18) = local_48;
      }
    }
    if ((long)local_48 < 0) {
      operator_delete(local_58);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 005eceec  FUN_005eceec =====

undefined1  [16] FUN_005eceec(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0xd) {
    return *(undefined1 (*) [16])(&PTR_DAT_00d266c0 + (ulong)param_1 * 2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x5ecf10);
  (*pcVar1)();
}


// ===== 005ecf10  FUN_005ecf10 =====

void FUN_005ecf10(char *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  char *__src;
  undefined8 uVar3;
  size_t __n;
  char *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  uVar3 = FUN_006228b0(&local_460,"{payload_type: ",0xf);
  FUN_00622910(uVar3,*param_2);
  uVar3 = FUN_006228b0(&local_460,", remote_ssrc: ",0xf);
  FUN_006229f8(uVar3,param_2[1]);
  uVar3 = FUN_006228b0(&local_460,", local_ssrc: ",0xe);
  FUN_006229f8(uVar3,param_2[2]);
  FUN_006228b0(&local_460,", protected_media_ssrcs: [",0x1a);
  lVar4 = *(long *)(param_2 + 4);
  uVar6 = *(long *)(param_2 + 6) - lVar4 >> 2;
  if (uVar6 < 2) {
    uVar5 = 0;
    if (lVar4 == *(long *)(param_2 + 6)) goto LAB_005ed058;
  }
  else {
    uVar5 = 0;
    do {
      uVar3 = FUN_006229f8(&local_460,*(undefined4 *)(lVar4 + uVar5 * 4));
      FUN_006228b0(uVar3,&DAT_001e1644,2);
      lVar4 = *(long *)(param_2 + 4);
      uVar6 = *(long *)(param_2 + 6) - lVar4 >> 2;
      uVar1 = uVar5 + 2;
      uVar5 = uVar5 + 1;
    } while (uVar1 < uVar6);
    if (lVar4 == *(long *)(param_2 + 6)) goto LAB_005ed058;
  }
  if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  FUN_006229f8(&local_460,*(undefined4 *)(lVar4 + uVar5 * 4));
LAB_005ed058:
  FUN_006228b0(&local_460,&DAT_001b0cbb,1);
  __src = local_460;
  if (local_460 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(local_460);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    param_1[0x17] = (char)__n;
    __dest = param_1;
  }
  else {
    uVar6 = (__n & 0x7ffffffffffffff8) + 8;
    uVar5 = 0x19;
    if (uVar6 != 0x18) {
      uVar5 = uVar6;
    }
    __dest = (char *)operator_new(uVar5);
    *(char **)param_1 = __dest;
    *(size_t *)(param_1 + 8) = __n;
    *(ulong *)(param_1 + 0x10) = uVar5 | 0x8000000000000000;
  }
  if (__dest + __n < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,__n);
  __dest[__n] = '\0';
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005ed180  FUN_005ed180 =====

bool FUN_005ed180(int *param_1)

{
  if ((-1 < *param_1) && (param_1[1] != 0)) {
    return *(long *)(param_1 + 6) - *(long *)(param_1 + 4) == 4;
  }
  return false;
}


// ===== 005ed1b0  FUN_005ed1b0 =====

void FUN_005ed1b0(undefined8 *param_1,long *param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined2 local_148;
  undefined6 uStack_146;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  long *local_a8;
  undefined7 uStack_a0;
  undefined4 local_99;
  int local_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  undefined1 local_68;
  
  *param_1 = &PTR_FUN_00d26790;
  param_1[1] = &PTR_FUN_00d267d8;
  lVar6 = *param_2;
  param_1[2] = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar6 = param_2[3];
  lVar9 = param_2[2];
  lVar8 = param_2[1];
  param_1[6] = param_2[4];
  param_1[5] = lVar6;
  param_1[4] = lVar9;
  param_1[3] = lVar8;
  *(int *)(param_1 + 7) = param_3[1];
  iVar2 = *param_3;
  *(int *)((long)param_1 + 0x3c) = iVar2;
  if (iVar2 < 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      pcVar5 = 
      "Invalid FlexFEC payload type given. This FlexfecReceiveStream will therefore be useless.";
      uVar4 = 0x232;
LAB_005ed2f4:
      FUN_00623bb0(&DAT_001f4e98,"../../call/flexfec_receive_stream_impl.cc",uVar4,pcVar5);
    }
  }
  else {
    iVar2 = param_3[1];
    if (iVar2 == 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        pcVar5 = "Invalid FlexFEC SSRC given. This FlexfecReceiveStream will therefore be useless.";
        uVar4 = 0x272;
        goto LAB_005ed2f4;
      }
    }
    else {
      puVar1 = *(undefined4 **)(param_3 + 4);
      if (puVar1 == *(undefined4 **)(param_3 + 6)) {
        uVar3 = FUN_004022fc();
        if ((uVar3 & 1) == 0) {
          pcVar5 = 
          "No protected media SSRC supplied. This FlexfecReceiveStream will therefore be useless.";
          uVar4 = 0x2a2;
          goto LAB_005ed2f4;
        }
      }
      else {
        if ((ulong)((long)*(undefined4 **)(param_3 + 6) - (long)puVar1) < 5) {
          lVar6 = param_2[2];
          pvVar7 = operator_new(0x68);
          FUN_0084b344(pvVar7,lVar6,iVar2,*puVar1,param_4);
          goto LAB_005ed2fc;
        }
        uVar3 = FUN_004022fc();
        if ((uVar3 & 1) == 0) {
          pcVar5 = 
          "The supplied FlexfecConfig contained multiple protected media streams, but our implementation currently only supports protecting a single media stream. To avoid confusion, disabling FlexFEC completely."
          ;
          uVar4 = 0x2da;
          goto LAB_005ed2f4;
        }
      }
    }
  }
  pvVar7 = (void *)0x0;
LAB_005ed2fc:
  param_1[8] = pvVar7;
  local_140 = FUN_00851b98(param_2[2]);
  param_1[9] = local_140;
  local_148 = 0x100;
  local_138 = *(long *)(param_3 + 0xc);
  local_110 = 0;
  local_94 = param_3[2];
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  local_a8 = (long *)0x0;
  uStack_a0 = 0;
  local_99 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = (void *)0x0;
  local_68 = 0;
  uStack_108 = param_5;
  pvVar7 = operator_new(0x560);
  FUN_00863e98(pvVar7,param_2,&local_148);
  param_1[10] = pvVar7;
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  param_1[0xb] = 0;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_005ecf10(&local_148,param_3);
    FUN_00623bb0(&DAT_001f4e90,"../../call/flexfec_receive_stream_impl.cc",0x3f1,
                 "FlexfecReceiveStreamImpl: ",&local_148);
    if (local_138 < 0) {
      operator_delete((void *)CONCAT62(uStack_146,local_148));
    }
  }
  FUN_00864f38(param_1[10],param_3[10]);
  return;
}


// ===== 005ed454  FUN_005ed454 =====

void FUN_005ed454(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00d26790;
  param_1[1] = &PTR_FUN_00d267d8;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar3 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0086425c(pvVar3);
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar3 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0084b3ac(pvVar3);
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x005ed51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 005ed530  FUN_005ed530 =====

void FUN_005ed530(long param_1)

{
  FUN_005ed454(param_1 + -8);
  return;
}


// ===== 005ed53c  FUN_005ed53c =====

void FUN_005ed53c(void *param_1)

{
  FUN_005ed454();
  operator_delete(param_1);
  return;
}


// ===== 005ed56c  FUN_005ed56c =====

void FUN_005ed56c(long param_1)

{
  FUN_005ed454((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005ed5a0  FUN_005ed5a0 =====

void FUN_005ed5a0(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x38),param_1);
    plVar2 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ed5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


// ===== 005ed610  FUN_005ed610 =====

void FUN_005ed610(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ed62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005ed634  FUN_005ed634 =====

void FUN_005ed634(long param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  pvVar1 = operator_new(0x88);
  FUN_00889b64(pvVar1,param_2,0);
  (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (FUN_0084b4a0(*(long *)(param_1 + 0x40),param_2),
     *(int *)(param_2 + 0xc) == *(int *)(param_1 + 0x38))) {
    plVar2 = (long *)(*(long *)(param_1 + 0x48) + 8);
                    /* WARNING: Could not recover jumptable at 0x005ed6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    return;
  }
  return;
}


// ===== 005ed6d8  FUN_005ed6d8 =====

void FUN_005ed6d8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}


// ===== 005ed6e4  FUN_005ed6e4 =====

undefined4 FUN_005ed6e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// ===== 005ed6f0  FUN_005ed6f0 =====

void FUN_005ed6f0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0086467c(*(undefined8 *)(param_1 + 0x50));
  if (param_2 == iVar1) {
    return;
  }
  FUN_00865824(*(undefined8 *)(param_1 + 0x50),param_2);
  return;
}


// ===== 005ed740  FUN_005ed740 =====

void FUN_005ed740(long param_1)

{
  FUN_00864f38(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 005ed74c  FUN_005ed74c =====

undefined8 FUN_005ed74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


// ===== 005ed758  FUN_005ed758 =====

void FUN_005ed758(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 ***local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  FUN_00661054(param_1,"maxrep",6);
  *param_1 = &PTR_FUN_00d267f8;
  param_1[8] = "nt read_session_ticket";
  FUN_00661054(param_1 + 9,"stall",5);
  param_1[9] = &PTR_FUN_00d267f8;
  param_1[0x11] = 5000;
  FUN_00661054(param_1 + 0x12,&DAT_001cace5,3);
  param_1[0x12] = &PTR_FUN_00d267f8;
  param_1[0x1a] = 1000;
  FUN_00661054(param_1 + 0x1b,"maxstall",8);
  param_1[0x1b] = &PTR_FUN_00d267f8;
  param_1[0x23] = 5000000;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_60,param_2,"WebRTC-Bwe-ReceiveTimeFix",0x19);
  puVar1 = puStack_58;
  ppppuVar2 = (undefined8 ****)local_60;
  if (-1 < (long)local_50) {
    puVar1 = (undefined1 *)((ulong)local_50 >> 0x38);
    ppppuVar2 = &local_60;
  }
  local_80 = param_1;
  puStack_78 = param_1 + 9;
  local_70 = param_1 + 0x12;
  puStack_68 = param_1 + 0x1b;
  FUN_00661cc0(&local_80,4,ppppuVar2,puVar1);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 005ed8a4  FUN_005ed8a4 =====

void FUN_005ed8a4(long param_1)

{
  FUN_006634ac(param_1 + 0xd8);
  FUN_006634ac(param_1 + 0x90);
  FUN_006634ac(param_1 + 0x48);
  FUN_006634ac(param_1);
  return;
}


// ===== 005ed8e4  FUN_005ed8e4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_005ed8e4(long *param_1)

{
  int *******pppppppiVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *******local_38;
  ulong local_30;
  byte bStack_21;
  
  (**(code **)(*param_1 + 0x10))(&local_38,param_1,"WebRTC-Bwe-ReceiveTimeFix",0x19);
  if (-1 < (char)bStack_21) {
    local_30 = (ulong)bStack_21;
  }
  if (local_30 < 7) {
    bVar2 = false;
  }
  else {
    pppppppiVar1 = local_38;
    if (-1 < (char)bStack_21) {
      pppppppiVar1 = (int *******)&local_38;
    }
    bVar2 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  if (bVar2) {
    puVar3 = (undefined8 *)operator_new(0x158);
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0xffffffffffffffff;
    *puVar3 = 0xffffffffffffffff;
    puVar3[3] = 0xffffffffffffffff;
    puVar3[2] = 0xffffffffffffffff;
    FUN_005ed758(puVar3 + 7,param_1);
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 005ed9d8  FUN_005ed9d8 =====

void FUN_005ed9d8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_1[0x18];
  lVar2 = param_3 - param_2;
  if ((param_1[4] < lVar3) && (param_1[0x2a] <= lVar2)) {
    lVar2 = param_1[0x2a];
  }
  lVar6 = param_1[1];
  if ((lVar2 < 0) && (lVar6 == -1)) {
    param_1[5] = lVar2;
    lVar2 = param_4;
    goto LAB_005edae8;
  }
  lVar2 = param_4 - lVar2;
  if (lVar6 < 1) goto LAB_005edae8;
  lVar1 = param_3 - param_1[2];
  lVar6 = param_2 - lVar6;
  lVar7 = lVar3;
  if (-1 < lVar1) {
    lVar7 = lVar1;
  }
  lVar7 = lVar7 + param_1[4];
  lVar5 = param_1[5];
  param_1[4] = lVar7;
  if ((lVar6 < 0) && (lVar7 < lVar3)) {
    lVar5 = lVar5 - lVar6;
    param_1[5] = lVar5;
  }
  lVar7 = param_1[0x21];
  if ((((lVar6 < 0) || (lVar1 <= lVar7 + lVar6)) || (param_3 < param_2)) ||
     (param_4 - param_1[3] <= lVar7 + lVar1)) {
    lVar4 = 0;
    if ((lVar3 < param_4 - param_1[3]) ||
       (lVar6 < 0 && (lVar1 != -1 && lVar1 + 1 < 0 == SCARRY8(lVar1,1)))) goto LAB_005edaa8;
  }
  else {
    lVar4 = 1;
LAB_005edaa8:
    param_1[6] = lVar4;
  }
  if (((param_3 < param_2) || (lVar2 = lVar5 + lVar2, lVar2 + lVar7 < *param_1)) ||
     (param_1[6] != 0)) {
    lVar2 = lVar6;
    if (param_1[0xf] <= lVar6) {
      lVar2 = param_1[0xf];
    }
    if (lVar6 < 1) {
      lVar2 = 0;
    }
    lVar2 = lVar2 + *param_1;
  }
LAB_005edae8:
  *param_1 = lVar2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  return;
}


// ===== 005edaf4  FUN_005edaf4 =====

void FUN_005edaf4(void *param_1)

{
  FUN_006634ac();
  operator_delete(param_1);
  return;
}


// ===== 005edb24  FUN_005edb24 =====

bool FUN_005edb24(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_2 + 3) != '\x01') {
    return false;
  }
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  puVar2 = param_2;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*param_2;
    lVar3 = param_2[1];
  }
  auVar4 = FUN_00663dfc(puVar2,lVar3);
  bVar1 = (auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0;
  if (bVar1) {
    *(long *)(param_1 + 0x40) = auVar4._0_8_;
  }
  return bVar1;
}


// ===== 005edb90  FUN_005edb90 =====

void FUN_005edb90(void)

{
  return;
}


// ===== 005edb98  FUN_005edb98 =====

void FUN_005edb98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005edbb0  FUN_005edbb0 =====

void FUN_005edbb0(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  return;
}


// ===== 005edbd8  FUN_005edbd8 =====

void FUN_005edbd8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (((param_2 != param_1[3]) || (param_3 != param_1[7])) || (param_4 != param_1[2])) {
    lVar3 = param_4 * param_2;
    uVar5 = lVar3 * 2;
    if (lVar3 == -1 || lVar3 + 1 < 0 != SCARRY8(lVar3,1)) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar1 = operator_new__(uVar5);
    pvVar4 = (void *)*param_1;
    *param_1 = pvVar1;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    lVar3 = param_4 * param_3;
    uVar5 = lVar3 * 2;
    if (lVar3 == -1 || lVar3 + 1 < 0 != SCARRY8(lVar3,1)) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar1 = operator_new__(uVar5);
    pvVar4 = (void *)param_1[1];
    param_1[1] = pvVar1;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      pvVar1 = (void *)param_1[1];
    }
    param_1[8] = pvVar1;
    param_1[2] = param_4;
    param_1[3] = param_2;
    param_1[4] = *param_1;
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[6] = param_4;
    param_1[7] = param_3;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_005ee000(param_1 + 10,param_4);
    if (param_4 != 0) {
      uVar5 = 0;
      do {
        pvVar1 = operator_new(0x40);
        FUN_005ee570(pvVar1,param_2,param_3);
        lVar3 = param_1[10];
        if ((ulong)(param_1[0xb] - lVar3 >> 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar2 = *(long **)(lVar3 + uVar5 * 8);
        *(void **)(lVar3 + uVar5 * 8) = pvVar1;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        uVar5 = uVar5 + 1;
      } while (param_4 != uVar5);
    }
  }
  return;
}


// ===== 005edd2c  FUN_005edd2c =====

void FUN_005edd2c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[0xb];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[10];
    }
    param_1[0xb] = plVar4;
    operator_delete(plVar1);
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete__(pvVar2);
  return;
}


// ===== 005eddfc  FUN_005eddfc =====

void FUN_005eddfc(long param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  ulong uVar11;
  
  FUN_005edbd8(param_1,param_2[1],*(undefined8 *)(param_3 + 8),*param_2);
  lVar6 = param_2[1];
  if (lVar6 == *(long *)(param_3 + 8)) {
    memcpy(*(void **)(param_3 + 0x10),(void *)param_2[2],param_2[3] << 1);
    return;
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        lVar5 = *(long *)(param_1 + 0x18);
        puVar10 = (undefined2 *)(*(long *)(param_1 + 0x20) + lVar5 * lVar9 * 2);
      }
      else {
        if (*(char *)(param_1 + 0x28) != '\0') goto LAB_005edffc;
        lVar5 = *(long *)(param_1 + 0x18);
        puVar10 = *(undefined2 **)(*(long *)(param_1 + 0x20) + lVar9 * 8);
      }
      lVar1 = lVar6;
      puVar3 = (undefined2 *)0x0;
      lVar4 = lVar8;
      if (lVar5 != 0) {
        puVar3 = puVar10;
      }
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined2 *)(param_2[2] + lVar4);
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + lVar7 * 2;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 2;
    } while (lVar9 != lVar7);
  }
  lVar6 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != lVar6) {
    uVar11 = 0;
    do {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        lVar9 = *(long *)(param_1 + 0x18);
        lVar7 = *(long *)(param_1 + 0x20) + lVar9 * uVar11 * 2;
      }
      else {
        if (*(char *)(param_1 + 0x28) != '\0') goto LAB_005edffc;
        lVar9 = *(long *)(param_1 + 0x18);
        lVar7 = *(long *)(*(long *)(param_1 + 0x20) + uVar11 * 8);
      }
      lVar8 = 0;
      if (lVar9 != 0) {
        lVar8 = lVar7;
      }
      if (*(char *)(param_1 + 0x48) == '\x01') {
        lVar5 = *(long *)(param_1 + 0x38);
        lVar7 = *(long *)(param_1 + 0x40) + lVar5 * uVar11 * 2;
      }
      else {
        if (*(char *)(param_1 + 0x48) != '\0') goto LAB_005edffc;
        lVar5 = *(long *)(param_1 + 0x38);
        lVar7 = *(long *)(*(long *)(param_1 + 0x40) + uVar11 * 8);
      }
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = lVar7;
      }
      FUN_005ee6b0(*(undefined8 *)(lVar6 + uVar11 * 8),lVar8,lVar9,lVar1);
      lVar6 = *(long *)(param_1 + 0x50);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x58) - lVar6 >> 3));
  }
  bVar2 = *(byte *)(param_1 + 0x48);
  if (bVar2 < 2) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      lVar8 = *(long *)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar9 = 0;
      lVar7 = 0;
      do {
        lVar1 = lVar8;
        lVar4 = lVar9;
        if (bVar2 == 0) {
          puVar10 = *(undefined2 **)(lVar5 + lVar7 * 8);
        }
        else {
          puVar10 = (undefined2 *)(lVar5 + lVar7 * lVar8 * 2);
        }
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          *(undefined2 *)(*(long *)(param_3 + 0x10) + lVar4) = *puVar10;
          lVar4 = lVar4 + lVar6 * 2;
          puVar10 = puVar10 + 1;
        }
        lVar7 = lVar7 + 1;
        lVar9 = lVar9 + 2;
      } while (lVar7 != lVar6);
    }
    return;
  }
LAB_005edffc:
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 005ee000  FUN_005ee000 =====

void FUN_005ee000(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  size_t __n;
  ulong uVar9;
  void *__dest;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  __src = (void *)*param_1;
  plVar10 = (long *)param_1[1];
  __n = (long)plVar10 - (long)__src;
  uVar12 = (long)__n >> 3;
  uVar7 = param_2 - uVar12;
  if (param_2 < uVar12 || uVar7 == 0) {
    if (param_2 < uVar12) {
      plVar11 = (long *)((long)__src + param_2 * 8);
      while (plVar11 != plVar10) {
        plVar10 = plVar10 + -1;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar4 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      param_1[1] = plVar11;
    }
  }
  else {
    uVar9 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar9 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar9 >> 2;
        if ((ulong)((long)uVar9 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar3 = operator_new(uVar1 * 8);
          if (uVar7 * 8 == 0) {
            puVar13 = (undefined8 *)((long)pvVar3 + __n);
          }
          else {
            puVar13 = (undefined8 *)((long)pvVar3 + uVar7 * 8 + __n);
            uVar7 = (ulong)((long)__src + (-(long)pvVar3 - (long)plVar10)) >> 3;
            uVar9 = (param_2 * 8 - __n) - 8 >> 3;
            if (uVar9 <= uVar7) {
              uVar7 = uVar9;
            }
            if (uVar7 < 8) {
              puVar5 = (undefined8 *)((long)pvVar3 + __n);
            }
            else {
              puVar5 = (undefined8 *)((long)pvVar3 + __n);
              if ((((int)__src - (int)plVar10) - (int)pvVar3 & 7U) == 0) {
                uVar9 = uVar7 + 1 & 3;
                uVar2 = 4;
                if (uVar9 != 0) {
                  uVar2 = uVar9;
                }
                lVar6 = (uVar7 + 1) - uVar2;
                puVar8 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar5 = (undefined8 *)((long)pvVar3 + lVar6 * 8 + __n);
                do {
                  lVar6 = lVar6 + -4;
                  puVar8[-1] = 0;
                  puVar8[-2] = 0;
                  puVar8[1] = 0;
                  *puVar8 = 0;
                  puVar8 = puVar8 + 4;
                } while (lVar6 != 0);
              }
            }
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_005ee270;
              puVar8 = puVar5 + 1;
              *puVar5 = 0;
              puVar5 = puVar8;
            } while (puVar8 != puVar13);
          }
          __dest = (void *)((long)pvVar3 + uVar12 * -8 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar13;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_005ee540();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    plVar11 = plVar10;
    if ((uVar7 & 0x1fffffffffffffff) != 0) {
      plVar11 = plVar10 + uVar7;
      uVar12 = (param_2 * 8 - __n) - 8 >> 3;
      uVar7 = (ulong)-(long)plVar10 >> 3;
      if (uVar12 <= (ulong)-(long)plVar10 >> 3) {
        uVar7 = uVar12;
      }
      if ((5 < uVar7) && ((-(int)plVar10 & 7U) == 0)) {
        uVar12 = uVar7 + 1 & 3;
        uVar9 = 4;
        if (uVar12 != 0) {
          uVar9 = uVar12;
        }
        plVar4 = plVar10 + 2;
        lVar6 = (uVar7 + 1) - uVar9;
        plVar10 = plVar10 + lVar6;
        do {
          lVar6 = lVar6 + -4;
          plVar4[-1] = 0;
          plVar4[-2] = 0;
          plVar4[1] = 0;
          *plVar4 = 0;
          plVar4 = plVar4 + 4;
        } while (lVar6 != 0);
      }
      do {
        if (plVar10 == (long *)0x0) {
LAB_005ee270:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar4 = plVar10 + 1;
        *plVar10 = 0;
        plVar10 = plVar4;
      } while (plVar4 != plVar11);
    }
    param_1[1] = plVar11;
  }
  return;
}


// ===== 005ee2a0  FUN_005ee2a0 =====

void FUN_005ee2a0(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  FUN_005ee2c8();
  return;
}


// ===== 005ee2c8  FUN_005ee2c8 =====

void FUN_005ee2c8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  
  if (((param_2 != param_1[3]) || (param_3 != param_1[7])) || (param_4 != param_1[2])) {
    uVar4 = param_4 * param_2 * 4;
    if (param_4 * param_2 >> 0x3e != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar4);
    pvVar5 = (void *)*param_1;
    *param_1 = pvVar2;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    uVar4 = param_4 * param_3 * 4;
    if (param_4 * param_3 >> 0x3e != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar4);
    pvVar5 = (void *)param_1[1];
    param_1[1] = pvVar2;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      pvVar2 = (void *)param_1[1];
    }
    param_1[8] = pvVar2;
    param_1[2] = param_4;
    param_1[3] = param_2;
    param_1[4] = *param_1;
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[6] = param_4;
    param_1[7] = param_3;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_005ee000(param_1 + 10,param_4);
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        pvVar2 = operator_new(0x40);
        FUN_005ee570(pvVar2,param_2,param_3);
        lVar1 = param_1[10];
        if ((ulong)(param_1[0xb] - lVar1 >> 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar3 = *(long **)(lVar1 + uVar4 * 8);
        *(void **)(lVar1 + uVar4 * 8) = pvVar2;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        uVar4 = uVar4 + 1;
      } while (param_4 != uVar4);
    }
  }
  return;
}


// ===== 005ee424  FUN_005ee424 =====

void FUN_005ee424(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[0xb];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[10];
    }
    param_1[0xb] = plVar4;
    operator_delete(plVar1);
  }
  pvVar2 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete__(pvVar2);
  return;
}


// ===== 005ee4f4  FUN_005ee4f4 =====

void FUN_005ee4f4(long param_1,void *param_2,long param_3,void *param_4,long param_5)

{
  if (param_3 == param_5) {
    memcpy(param_4,param_2,param_3 << 2);
    return;
  }
  if (*(undefined8 **)(param_1 + 0x58) != *(undefined8 **)(param_1 + 0x50)) {
    FUN_005ee748(**(undefined8 **)(param_1 + 0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 005ee540  FUN_005ee540 =====

void FUN_005ee540(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005ee558  FUN_005ee558 =====

void FUN_005ee558(void)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort("bad_variant_access was thrown in -fno-exceptions mode");
}


// ===== 005ee570  FUN_005ee570 =====

void FUN_005ee570(undefined8 *param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d26828;
  pvVar1 = operator_new(0x90);
  FUN_005eee1c((double)param_2 / (double)param_3,pvVar1,param_2,param_1);
  param_1[1] = pvVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  return;
}


// ===== 005ee5ec  FUN_005ee5ec =====

void FUN_005ee5ec(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d26828;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005ee63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


// ===== 005ee650  FUN_005ee650 =====

void FUN_005ee650(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d26828;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005ee6b0  FUN_005ee6b0 =====

undefined8 FUN_005ee6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (pvVar1 == (void *)0x0) {
    uVar2 = uVar3 << 2;
    if (uVar3 >> 0x3e != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar1 = operator_new__(uVar2);
    *(void **)(param_1 + 0x10) = pvVar1;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_005ee748(param_1,0,param_3,pvVar1,uVar3);
  FUN_005eea0c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 005ee748  FUN_005ee748 =====

undefined8
FUN_005ee748(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (param_3 != *(long *)(lVar3 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/resampler/push_sinc_resampler.cc",0x36,
                 "source_length == resampler_->request_frames()",&DAT_001fb920,param_3);
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= param_5) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(long *)(param_1 + 0x38) = param_3;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = FUN_005ef318(lVar3);
      FUN_005ef180(lVar3,uVar1,param_4);
      lVar3 = *(long *)(param_1 + 8);
      uVar2 = *(ulong *)(param_1 + 0x28);
    }
    FUN_005ef180(lVar3,uVar2,param_4);
    *(undefined8 *)(param_1 + 0x18) = 0;
    return *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/resampler/push_sinc_resampler.cc",0x37,
               "destination_capacity >= destination_frames_",&DAT_001fb920);
}


// ===== 005ee828  FUN_005ee828 =====

void FUN_005ee828(long param_1,long param_2,void *param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) == param_2) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      memset(param_3,0,param_2 << 2);
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    else {
      if (*(void **)(param_1 + 0x18) == (void *)0x0) {
        if (param_2 != 0) {
          lVar1 = 0;
          do {
            *(float *)((long)param_3 + lVar1 * 4) =
                 (float)(int)*(short *)(*(long *)(param_1 + 0x20) + lVar1 * 2);
            lVar1 = lVar1 + 1;
          } while (param_2 != lVar1);
        }
      }
      else {
        memcpy(param_3,*(void **)(param_1 + 0x18),param_2 << 2);
      }
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) - param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/resampler/push_sinc_resampler.cc",0x55,
               "source_available_ == frames",&DAT_001fb920,*(long *)(param_1 + 0x38),param_2);
}


// ===== 005ee8f4  FUN_005ee8f4 =====

void FUN_005ee8f4(ulong param_1,ulong param_2,ulong param_3)

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
  float *pfVar19;
  ulong uVar20;
  undefined8 *puVar21;
  short *psVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if (param_2 == 0) {
    return;
  }
  if (3 < param_2) {
    uVar20 = param_2 - 1;
    uVar17 = 0;
    if (((param_1 + uVar20 * 2 < param_1) || (param_3 + uVar20 * 4 < param_3)) ||
       (uVar20 >> 0x3e != 0)) goto LAB_005ee908;
    if ((param_1 + param_2 * 2 <= param_3) || (param_3 + param_2 * 4 <= param_1)) {
      if (param_2 < 0x10) {
        uVar20 = 0;
      }
      else {
        uVar17 = param_2 & 0x7ffffffffffffff0;
        psVar22 = (short *)(param_1 + 0x10);
        uVar20 = param_2 & 0x7ffffffffffffff0;
        puVar21 = (undefined8 *)(param_3 + 0x20);
        do {
          psVar1 = psVar22 + -8;
          psVar2 = psVar22 + -7;
          psVar3 = psVar22 + -6;
          psVar4 = psVar22 + -5;
          psVar5 = psVar22 + -4;
          psVar6 = psVar22 + -3;
          psVar7 = psVar22 + -2;
          psVar8 = psVar22 + -1;
          sVar9 = *psVar22;
          psVar10 = psVar22 + 1;
          psVar11 = psVar22 + 2;
          psVar12 = psVar22 + 3;
          psVar13 = psVar22 + 4;
          psVar14 = psVar22 + 5;
          psVar15 = psVar22 + 6;
          psVar16 = psVar22 + 7;
          uVar20 = uVar20 - 0x10;
          psVar22 = psVar22 + 0x10;
          auVar28._0_4_ = (int)*psVar5;
          auVar28._4_4_ = (int)*psVar6;
          auVar28._8_4_ = (int)*psVar7;
          auVar28._12_4_ = (int)*psVar8;
          auVar26._0_4_ = (int)*psVar1;
          auVar26._4_4_ = (int)*psVar2;
          auVar26._8_4_ = (int)*psVar3;
          auVar26._12_4_ = (int)*psVar4;
          auVar29._0_4_ = (int)*psVar13;
          auVar29._4_4_ = (int)*psVar14;
          auVar29._8_4_ = (int)*psVar15;
          auVar29._12_4_ = (int)*psVar16;
          auVar27._0_4_ = (int)sVar9;
          auVar27._4_4_ = (int)*psVar10;
          auVar27._8_4_ = (int)*psVar11;
          auVar27._12_4_ = (int)*psVar12;
          auVar28 = NEON_scvtf(auVar28,4);
          auVar26 = NEON_scvtf(auVar26,4);
          auVar29 = NEON_scvtf(auVar29,4);
          auVar27 = NEON_scvtf(auVar27,4);
          puVar21[-3] = auVar26._8_8_;
          puVar21[-4] = auVar26._0_8_;
          puVar21[-1] = auVar28._8_8_;
          puVar21[-2] = auVar28._0_8_;
          puVar21[1] = auVar27._8_8_;
          *puVar21 = auVar27._0_8_;
          puVar21[3] = auVar29._8_8_;
          puVar21[2] = auVar29._0_8_;
          puVar21 = puVar21 + 8;
        } while (uVar20 != 0);
        if (param_2 == uVar17) {
          return;
        }
        uVar20 = uVar17;
        if ((param_2 & 0xc) == 0) goto LAB_005ee908;
      }
      uVar17 = param_2 & 0x7ffffffffffffffc;
      lVar18 = uVar20 - uVar17;
      puVar21 = (undefined8 *)(param_3 + uVar20 * 4);
      puVar23 = (undefined8 *)(param_1 + uVar20 * 2);
      do {
        uVar24 = *puVar23;
        lVar18 = lVar18 + 4;
        auVar25._0_4_ = (int)(short)uVar24;
        auVar25._4_4_ = (int)(short)((ulong)uVar24 >> 0x10);
        auVar25._8_4_ = (int)(short)((ulong)uVar24 >> 0x20);
        auVar25._12_4_ = (int)(short)((ulong)uVar24 >> 0x30);
        auVar26 = NEON_scvtf(auVar25,4);
        puVar21[1] = auVar26._8_8_;
        *puVar21 = auVar26._0_8_;
        puVar21 = puVar21 + 2;
        puVar23 = puVar23 + 1;
      } while (lVar18 != 0);
      if (param_2 == uVar17) {
        return;
      }
      goto LAB_005ee908;
    }
  }
  uVar17 = 0;
LAB_005ee908:
  lVar18 = param_2 - uVar17;
  pfVar19 = (float *)(param_3 + uVar17 * 4);
  psVar22 = (short *)(param_1 + uVar17 * 2);
  do {
    lVar18 = lVar18 + -1;
    *pfVar19 = (float)(int)*psVar22;
    pfVar19 = pfVar19 + 1;
    psVar22 = psVar22 + 1;
  } while (lVar18 != 0);
  return;
}


// ===== 005eea0c  FUN_005eea0c =====

void FUN_005eea0c(undefined1 (*param_1) [16],ulong param_2,undefined2 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (param_2 == 0) {
    return;
  }
  if (0xf < param_2) {
    uVar7 = 0;
    if (((param_3 + (param_2 - 1) < param_3) ||
        ((undefined1 (*) [16])(param_1[-1] + param_2 * 4 + 0xc) < param_1)) ||
       (param_2 - 1 >> 0x3e != 0)) goto LAB_005eea20;
    if ((*param_1 + param_2 * 4 <= param_3) || ((undefined1 (*) [16])(param_3 + param_2) <= param_1)
       ) {
      uVar7 = param_2 & 0x7ffffffffffffff8;
      uVar12 = param_2 & 0x7ffffffffffffff8;
      pauVar10 = param_1;
      puVar9 = param_3;
      do {
        uVar12 = uVar12 - 8;
        auVar2._8_4_ = 0x46fffe00;
        auVar2._0_8_ = 0x46fffe0046fffe00;
        auVar2._12_4_ = 0x46fffe00;
        auVar18 = NEON_fcmgt(pauVar10[1],auVar2,4);
        auVar3._8_4_ = 0x46fffe00;
        auVar3._0_8_ = 0x46fffe0046fffe00;
        auVar3._12_4_ = 0x46fffe00;
        auVar16 = NEON_fcmgt(*pauVar10,auVar3,4);
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar14 = NEON_bit(*pauVar10,auVar4,auVar16,1);
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar17 = NEON_bit(pauVar10[1],auVar5,auVar18,1);
        auVar18._8_4_ = 0xc7000000;
        auVar18._0_8_ = 0xc7000000c7000000;
        auVar18._12_4_ = 0xc7000000;
        auVar19 = NEON_fcmgt(auVar18,auVar17,4);
        auVar16._8_4_ = 0xc7000000;
        auVar16._0_8_ = 0xc7000000c7000000;
        auVar16._12_4_ = 0xc7000000;
        auVar18 = NEON_fcmgt(auVar16,auVar14,4);
        auVar21._8_4_ = 0xc7000000;
        auVar21._0_8_ = 0xc7000000c7000000;
        auVar21._12_4_ = 0xc7000000;
        auVar18 = NEON_bit(auVar14,auVar21,auVar18,1);
        auVar14._8_4_ = 0xc7000000;
        auVar14._0_8_ = 0xc7000000c7000000;
        auVar14._12_4_ = 0xc7000000;
        auVar16 = NEON_bit(auVar17,auVar14,auVar19,1);
        auVar20._8_8_ = 0x7fffffff7fffffff;
        auVar20._0_8_ = 0x7fffffff7fffffff;
        auVar22._8_8_ = 0x7fffffff7fffffff;
        auVar22._0_8_ = 0x7fffffff7fffffff;
        auVar17._8_4_ = 0x3f000000;
        auVar17._0_8_ = 0x3f0000003f000000;
        auVar17._12_4_ = 0x3f000000;
        auVar21 = NEON_bsl(auVar20,auVar17,auVar16,1);
        auVar19._8_4_ = 0x3f000000;
        auVar19._0_8_ = 0x3f0000003f000000;
        auVar19._12_4_ = 0x3f000000;
        auVar14 = NEON_bsl(auVar22,auVar19,auVar18,1);
        puVar9[8] = (short)(int)(auVar16._0_4_ + auVar21._0_4_);
        puVar9[9] = (short)(int)(auVar16._4_4_ + auVar21._4_4_);
        puVar9[10] = (short)(int)(auVar16._8_4_ + auVar21._8_4_);
        puVar9[0xb] = (short)(int)(auVar16._12_4_ + auVar21._12_4_);
        *puVar9 = (short)(int)(auVar18._0_4_ + auVar14._0_4_);
        puVar9[1] = (short)(int)(auVar18._4_4_ + auVar14._4_4_);
        puVar9[2] = (short)(int)(auVar18._8_4_ + auVar14._8_4_);
        puVar9[3] = (short)(int)(auVar18._12_4_ + auVar14._12_4_);
        pauVar10 = pauVar10 + 2;
        puVar9 = puVar9 + 8;
      } while (uVar12 != 0);
      if (param_2 == uVar7) {
        return;
      }
      goto LAB_005eea20;
    }
  }
  uVar7 = 0;
LAB_005eea20:
  lVar8 = param_2 - uVar7;
  puVar9 = param_3 + uVar7;
  pfVar11 = (float *)(*param_1 + uVar7 * 4);
  do {
    fVar13 = *pfVar11;
    auVar15._8_8_ = 0x7fffffff7fffffff;
    auVar15._0_8_ = 0x7fffffff7fffffff;
    fVar6 = 32767.0;
    if (fVar13 == 32767.0 || fVar13 < 32767.0 != NAN(fVar13)) {
      fVar6 = fVar13;
    }
    auVar18 = ZEXT816(0xc7000000);
    if (-32768.0 <= fVar6) {
      auVar18 = ZEXT416((uint)fVar6);
    }
    lVar8 = lVar8 + -1;
    auVar1._12_4_ = 0;
    auVar1._0_12_ = ZEXT812(0x3f000000);
    auVar16 = NEON_bsl(auVar15,auVar1,auVar18,1);
    *puVar9 = (short)(int)(auVar18._0_4_ + auVar16._0_4_);
    puVar9 = puVar9 + 1;
    pfVar11 = pfVar11 + 1;
  } while (lVar8 != 0);
  return;
}


// ===== 005eeb44  FUN_005eeb44 =====

void FUN_005eeb44(ulong param_1,ulong param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xc) {
      uVar2 = 0;
    }
    else {
      lVar3 = (param_2 - 1) * 4;
      uVar2 = 0;
      if ((((param_3 <= param_3 + lVar3) && (param_1 <= param_1 + lVar3)) &&
          (param_2 - 1 >> 0x3e == 0)) && (0x1f < param_3 - param_1)) {
        auVar8 = NEON_fmov(0x3f800000,4);
        auVar9 = NEON_fmov(0xbf800000,4);
        uVar2 = param_2 & 0x7ffffffffffffff8;
        pfVar4 = (float *)(param_3 + 0x10);
        pauVar6 = (undefined1 (*) [16])(param_1 + 0x10);
        uVar7 = param_2 & 0x7ffffffffffffff8;
        do {
          pauVar1 = pauVar6 + -1;
          auVar13 = *pauVar6;
          uVar7 = uVar7 - 8;
          pauVar6 = pauVar6 + 2;
          auVar12 = NEON_fcmgt(*pauVar1,auVar8,4);
          auVar14 = NEON_fcmgt(auVar13,auVar8,4);
          auVar12 = NEON_bit(*pauVar1,auVar8,auVar12,1);
          auVar14 = NEON_bit(auVar13,auVar8,auVar14,1);
          auVar13 = NEON_fcmgt(auVar9,auVar12,4);
          auVar15 = NEON_fcmgt(auVar9,auVar14,4);
          auVar13 = NEON_bit(auVar12,auVar9,auVar13,1);
          auVar12 = NEON_bit(auVar14,auVar9,auVar15,1);
          *pfVar4 = auVar13._8_4_ * 32768.0;
          pfVar4[1] = auVar13._12_4_ * 32768.0;
          pfVar4[-4] = auVar13._0_4_ * 32768.0;
          pfVar4[-3] = auVar13._4_4_ * 32768.0;
          pfVar4[4] = auVar12._8_4_ * 32768.0;
          pfVar4[5] = auVar12._12_4_ * 32768.0;
          *pfVar4 = auVar12._0_4_ * 32768.0;
          pfVar4[1] = auVar12._4_4_ * 32768.0;
          pfVar4 = pfVar4 + 8;
        } while (uVar7 != 0);
        if (param_2 == uVar2) {
          return;
        }
      }
    }
    lVar3 = param_2 - uVar2;
    pfVar4 = (float *)(param_3 + uVar2 * 4);
    pfVar5 = (float *)(param_1 + uVar2 * 4);
    do {
      fVar10 = *pfVar5;
      fVar11 = 1.0;
      if (fVar10 == 1.0 || fVar10 < 1.0 != NAN(fVar10)) {
        fVar11 = fVar10;
      }
      fVar10 = -1.0;
      if (-1.0 <= fVar11) {
        fVar10 = fVar11;
      }
      lVar3 = lVar3 + -1;
      *pfVar4 = fVar10 * 32768.0;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 005eec3c  FUN_005eec3c =====

void FUN_005eec3c(ulong param_1,ulong param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xc) {
      uVar6 = 0;
    }
    else {
      lVar7 = (param_2 - 1) * 4;
      uVar6 = 0;
      if ((((param_3 <= param_3 + lVar7) && (param_1 <= param_1 + lVar7)) &&
          (param_2 - 1 >> 0x3e == 0)) && (0x1f < param_3 - param_1)) {
        uVar6 = param_2 & 0x7ffffffffffffff8;
        pfVar8 = (float *)(param_3 + 0x10);
        pauVar10 = (undefined1 (*) [16])(param_1 + 0x10);
        uVar11 = param_2 & 0x7ffffffffffffff8;
        do {
          pauVar1 = pauVar10 + -1;
          auVar2 = *pauVar10;
          uVar11 = uVar11 - 8;
          pauVar10 = pauVar10 + 2;
          auVar14._8_4_ = 0x47000000;
          auVar14._0_8_ = 0x4700000047000000;
          auVar14._12_4_ = 0x47000000;
          auVar14 = NEON_fcmgt(*pauVar1,auVar14,4);
          auVar16._8_4_ = 0x47000000;
          auVar16._0_8_ = 0x4700000047000000;
          auVar16._12_4_ = 0x47000000;
          auVar16 = NEON_fcmgt(auVar2,auVar16,4);
          auVar15._8_4_ = 0x47000000;
          auVar15._0_8_ = 0x4700000047000000;
          auVar15._12_4_ = 0x47000000;
          auVar14 = NEON_bit(*pauVar1,auVar15,auVar14,1);
          auVar17._8_4_ = 0x47000000;
          auVar17._0_8_ = 0x4700000047000000;
          auVar17._12_4_ = 0x47000000;
          auVar16 = NEON_bit(auVar2,auVar17,auVar16,1);
          auVar2._8_4_ = 0xc7000000;
          auVar2._0_8_ = 0xc7000000c7000000;
          auVar2._12_4_ = 0xc7000000;
          auVar15 = NEON_fcmgt(auVar2,auVar14,4);
          auVar3._8_4_ = 0xc7000000;
          auVar3._0_8_ = 0xc7000000c7000000;
          auVar3._12_4_ = 0xc7000000;
          auVar17 = NEON_fcmgt(auVar3,auVar16,4);
          auVar4._8_4_ = 0xc7000000;
          auVar4._0_8_ = 0xc7000000c7000000;
          auVar4._12_4_ = 0xc7000000;
          auVar14 = NEON_bit(auVar14,auVar4,auVar15,1);
          auVar5._8_4_ = 0xc7000000;
          auVar5._0_8_ = 0xc7000000c7000000;
          auVar5._12_4_ = 0xc7000000;
          auVar16 = NEON_bit(auVar16,auVar5,auVar17,1);
          *pfVar8 = auVar14._8_4_ * 3.0517578e-05;
          pfVar8[1] = auVar14._12_4_ * 3.0517578e-05;
          pfVar8[-4] = auVar14._0_4_ * 3.0517578e-05;
          pfVar8[-3] = auVar14._4_4_ * 3.0517578e-05;
          pfVar8[4] = auVar16._8_4_ * 3.0517578e-05;
          pfVar8[5] = auVar16._12_4_ * 3.0517578e-05;
          *pfVar8 = auVar16._0_4_ * 3.0517578e-05;
          pfVar8[1] = auVar16._4_4_ * 3.0517578e-05;
          pfVar8 = pfVar8 + 8;
        } while (uVar11 != 0);
        if (param_2 == uVar6) {
          return;
        }
      }
    }
    lVar7 = param_2 - uVar6;
    pfVar8 = (float *)(param_3 + uVar6 * 4);
    pfVar9 = (float *)(param_1 + uVar6 * 4);
    do {
      fVar12 = *pfVar9;
      fVar13 = 32768.0;
      if (fVar12 == 32768.0 || fVar12 < 32768.0 != NAN(fVar12)) {
        fVar13 = fVar12;
      }
      fVar12 = -32768.0;
      if (-32768.0 <= fVar13) {
        fVar12 = fVar13;
      }
      lVar7 = lVar7 + -1;
      *pfVar8 = fVar12 * 3.0517578e-05;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    } while (lVar7 != 0);
  }
  return;
}


// ===== 005eed34  FUN_005eed34 =====

void FUN_005eed34(short *param_1,long param_2,int param_3,undefined2 *param_4)

{
  short *psVar1;
  undefined2 uVar2;
  long lVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar3 = (long)param_3;
  psVar1 = param_1 + param_2 * lVar3;
  if (param_1 < psVar1) {
    do {
      psVar4 = param_1 + 1;
      iVar8 = (int)*param_1;
      if (psVar4 < param_1 + lVar3) {
        psVar5 = param_1 + lVar3;
        if (param_1 + lVar3 <= param_1 + 2) {
          psVar5 = param_1 + 2;
        }
        uVar6 = (long)psVar5 + (-3 - (long)param_1);
        psVar5 = psVar4;
        iVar9 = (int)*param_1;
        if (0x1d < uVar6) {
          iVar10 = 0;
          iVar11 = 0;
          iVar12 = 0;
          iVar13 = 0;
          iVar14 = 0;
          iVar15 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          psVar5 = param_1 + 9;
          uVar6 = (uVar6 >> 1) + 1;
          uVar7 = uVar6 & 0xfffffffffffffff0;
          iVar9 = 0;
          psVar4 = psVar4 + (uVar6 & 0xfffffffffffffff0);
          do {
            uVar25 = *(undefined8 *)(psVar5 + -4);
            uVar24 = *(undefined8 *)(psVar5 + -8);
            uVar27 = *(undefined8 *)(psVar5 + 4);
            uVar26 = *(undefined8 *)psVar5;
            uVar7 = uVar7 - 0x10;
            psVar5 = psVar5 + 0x10;
            iVar16 = iVar16 + (short)uVar25;
            iVar17 = iVar17 + (short)((ulong)uVar25 >> 0x10);
            iVar18 = iVar18 + (short)((ulong)uVar25 >> 0x20);
            iVar19 = iVar19 + (short)((ulong)uVar25 >> 0x30);
            iVar8 = iVar8 + (short)uVar24;
            iVar9 = iVar9 + (short)((ulong)uVar24 >> 0x10);
            iVar10 = iVar10 + (short)((ulong)uVar24 >> 0x20);
            iVar11 = iVar11 + (short)((ulong)uVar24 >> 0x30);
            iVar20 = iVar20 + (short)uVar27;
            iVar21 = iVar21 + (short)((ulong)uVar27 >> 0x10);
            iVar22 = iVar22 + (short)((ulong)uVar27 >> 0x20);
            iVar23 = iVar23 + (short)((ulong)uVar27 >> 0x30);
            iVar12 = iVar12 + (short)uVar26;
            iVar13 = iVar13 + (short)((ulong)uVar26 >> 0x10);
            iVar14 = iVar14 + (short)((ulong)uVar26 >> 0x20);
            iVar15 = iVar15 + (short)((ulong)uVar26 >> 0x30);
          } while (uVar7 != 0);
          iVar8 = iVar12 + iVar8 + iVar20 + iVar16 + iVar13 + iVar9 + iVar21 + iVar17 +
                  iVar14 + iVar10 + iVar22 + iVar18 + iVar15 + iVar11 + iVar23 + iVar19;
          psVar5 = psVar4;
          iVar9 = iVar8;
          if (uVar6 == (uVar6 & 0xfffffffffffffff0)) goto LAB_005eed58;
        }
        do {
          psVar4 = psVar5 + 1;
          iVar8 = iVar9 + *psVar5;
          psVar5 = psVar4;
          iVar9 = iVar8;
        } while (psVar4 < param_1 + lVar3);
      }
LAB_005eed58:
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = (undefined2)(iVar8 / param_3);
      }
      *param_4 = uVar2;
      param_4 = param_4 + 1;
      param_1 = psVar4;
    } while (psVar4 < psVar1);
  }
  return;
}


// ===== 005eee1c  FUN_005eee1c =====

void FUN_005eee1c(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  void *__s;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  
  *param_2 = &PTR_FUN_00d26850;
  param_2[1] = param_1;
  param_2[4] = param_4;
  param_2[5] = param_3;
  param_2[7] = param_3 + 0x20;
  uVar8 = FUN_00658ba0(0x1080,0x20);
  param_2[8] = uVar8;
  uVar8 = FUN_00658ba0(0x1080,0x20);
  param_2[9] = uVar8;
  uVar8 = FUN_00658ba0(0x1080,0x20);
  param_2[10] = uVar8;
  __s = (void *)FUN_00658ba0(param_2[7] << 2,0x20);
  puVar6 = PTR_FUN_00d51fe8;
  param_2[0xe] = __s;
  param_2[0xf] = (long)__s + 0x40;
  param_2[2] = 0;
  param_2[0xb] = __s;
  param_2[0xc] = puVar6;
  *(undefined1 *)(param_2 + 3) = 0;
  memset(__s,0,param_2[7] << 2);
  lVar10 = param_2[0xb] + 0x40 + param_2[5] * 4;
  param_2[0xd] = param_2[0xb] + 0x40;
  lVar9 = lVar10 + -0x40;
  param_2[0x10] = lVar10 + -0x80;
  param_2[0x11] = lVar9;
  param_2[6] = lVar9 - param_2[0xf] >> 2;
  memset((void *)param_2[8],0,0x1080);
  memset((void *)param_2[9],0,0x1080);
  memset((void *)param_2[10],0,0x1080);
  dVar5 = DAT_001f5cd8;
  dVar4 = DAT_001f5bf8;
  dVar3 = DAT_001f5520;
  dVar2 = DAT_001f5008;
  dVar1 = DAT_001f4fe8;
  dVar13 = (double)param_2[1];
  dVar14 = DAT_001f5000;
  if (dVar13 != 1.0 && dVar13 < 1.0 == NAN(dVar13)) {
    dVar14 = (1.0 / dVar13) * DAT_001f5000;
  }
  lVar10 = 0;
  uVar11 = 0;
  do {
    lVar9 = -0x20;
    lVar12 = lVar10;
    do {
      dVar16 = (double)(((float)(lVar9 + 0x20) - (float)uVar11 / 32.0) * 0.03125);
      fVar17 = (float)((double)((float)((int)lVar9 + 0x10) - (float)uVar11 / 32.0) * dVar1);
      *(float *)(param_2[9] + lVar12) = fVar17;
      dVar13 = cos(dVar16 * dVar5);
      dVar16 = cos(dVar16 * dVar4);
      fVar15 = (float)(dVar16 * dVar2 + dVar13 * -0.5 + dVar3);
      *(float *)(param_2[10] + lVar12) = fVar15;
      dVar13 = dVar14;
      if (fVar17 != 0.0) {
        dVar13 = sin(dVar14 * (double)fVar17);
        dVar13 = dVar13 / (double)fVar17;
      }
      bVar7 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      *(float *)(param_2[8] + lVar12) = (float)(dVar13 * (double)fVar15);
      lVar12 = lVar12 + 4;
    } while (bVar7);
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + 0x80;
  } while (uVar11 != 0x21);
  return;
}


// ===== 005ef08c  FUN_005ef08c =====

void FUN_005ef08c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00d26850;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
    return;
  }
  return;
}


// ===== 005ef108  FUN_005ef108 =====

void FUN_005ef108(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00d26850;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    FUN_00658c34();
  }
  operator_delete(param_1);
  return;
}


// ===== 005ef180  FUN_005ef180 =====

void FUN_005ef180(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x18) & 1) != 0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x68));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  dVar21 = *(double *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x40);
  do {
    dVar16 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    dVar13 = *(double *)(param_1 + 0x10);
    iVar4 = (int)((dVar16 - dVar13) / dVar21);
    if (0 < iVar4) {
      iVar4 = iVar4 + 1;
      puVar9 = param_3;
      do {
        dVar16 = dVar13 - (double)(int)dVar13;
        iVar6 = (int)(dVar16 * 32.0);
        lVar3 = lVar10 + (long)iVar6 * 0x80;
        uVar11 = (**(code **)(param_1 + 0x60))
                           (dVar16 * 32.0 - (double)iVar6,
                            *(long *)(param_1 + 0x70) + (long)(int)dVar13 * 4,lVar3,lVar3 + 0x80);
        param_3 = puVar9 + 1;
        *puVar9 = uVar11;
        param_2 = param_2 + -1;
        dVar13 = dVar21 + *(double *)(param_1 + 0x10);
        *(double *)(param_1 + 0x10) = dVar13;
        if (param_2 == 0) {
          return;
        }
        iVar4 = iVar4 + -1;
        puVar9 = param_3;
      } while (1 < iVar4);
      dVar16 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    }
    puVar5 = *(undefined8 **)(param_1 + 0x80);
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    *(double *)(param_1 + 0x10) = dVar13 - dVar16;
    uVar15 = puVar5[0xc];
    uVar14 = puVar5[0xf];
    uVar12 = puVar5[0xe];
    uVar20 = puVar5[9];
    uVar19 = puVar5[8];
    uVar18 = puVar5[0xb];
    uVar17 = puVar5[10];
    puVar7[0xd] = puVar5[0xd];
    puVar7[0xc] = uVar15;
    puVar7[0xf] = uVar14;
    puVar7[0xe] = uVar12;
    puVar7[9] = uVar20;
    puVar7[8] = uVar19;
    puVar7[0xb] = uVar18;
    puVar7[10] = uVar17;
    uVar15 = puVar5[4];
    uVar14 = puVar5[7];
    uVar12 = puVar5[6];
    uVar18 = puVar5[1];
    uVar17 = *puVar5;
    uVar20 = puVar5[3];
    uVar19 = puVar5[2];
    puVar7[5] = puVar5[5];
    puVar7[4] = uVar15;
    puVar7[7] = uVar14;
    puVar7[6] = uVar12;
    puVar7[1] = uVar18;
    *puVar7 = uVar17;
    puVar7[3] = uVar20;
    puVar7[2] = uVar19;
    lVar2 = *(long *)(param_1 + 0x68);
    lVar3 = lVar2;
    if (lVar2 == *(long *)(param_1 + 0x78)) {
      lVar3 = *(long *)(param_1 + 0x58) + 0x80;
      lVar1 = lVar3 + *(long *)(param_1 + 0x28) * 4;
      *(long *)(param_1 + 0x68) = lVar3;
      lVar8 = lVar1 + -0x40;
      *(long *)(param_1 + 0x80) = lVar1 + -0x80;
      *(long *)(param_1 + 0x88) = lVar8;
      *(long *)(param_1 + 0x30) = lVar8 - lVar2 >> 2;
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
              (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x28),lVar3);
  } while( true );
}


// ===== 005ef318  FUN_005ef318 =====

long FUN_005ef318(long param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
  return (long)(dVar1 / *(double *)(param_1 + 8));
}


// ===== 005ef334  FUN_005ef334 =====

undefined8 * FUN_005ef334(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined **local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined1 *local_18;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  FUN_0065a4a8(&local_48,param_1,param_2);
  *puVar1 = &PTR_FUN_00d26870;
  FUN_0065a6d0(puVar1 + 6,&local_48);
  FUN_0065a730(&local_48);
  if (puVar1[6] != 0) {
    local_48 = &PTR_FUN_00d268e0;
    local_38 = 0;
    local_18 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = puVar1 + 6;
    uVar2 = FUN_005f01a8(&local_48,puVar1 + 2,puVar1 + 1,puVar1 + 3,&local_18,puVar1 + 4,puVar1 + 7)
    ;
    if (((uVar2 & 1) != 0) && (puVar1[5] = puVar1[4], (*(uint *)(puVar1 + 3) & 0xfffffffd) == 1)) {
      return puVar1;
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0065a730(puVar1 + 6);
    FUN_0065a730(puVar1 + 6);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 005ef430  FUN_005ef430 =====

void FUN_005ef430(long param_1)

{
  FUN_0065a7a0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  return;
}


// ===== 005ef468  FUN_005ef468 =====

long FUN_005ef468(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  float fVar19;
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
  float local_4088 [4098];
  ulong local_78;
  
  local_78 = param_2;
  if (param_2 == 0) {
    local_78 = 0;
  }
  else {
    puVar17 = (ulong *)(param_1 + 0x28);
    uVar11 = *puVar17;
    lVar16 = 0;
    do {
      uVar9 = local_78;
      if (uVar11 == 0) break;
      puVar3 = &local_78;
      if (0xfff < local_78) {
        puVar3 = (ulong *)&UNK_001f5ce0;
      }
      puVar4 = puVar17;
      if (*puVar3 <= uVar11) {
        puVar4 = puVar3;
      }
      uVar18 = *puVar4;
      if (*(int *)(param_1 + 0x18) == 3) {
        memset(local_4088,0xff,0x4000);
        uVar10 = FUN_0065a7f4(param_1 + 0x30,local_4088,uVar18 << 2);
        uVar11 = uVar10 >> 2;
        auVar7._8_4_ = 0x46fffe00;
        auVar7._0_8_ = 0x46fffe0046fffe00;
        auVar6._8_4_ = 0x46fffe00;
        auVar6._0_8_ = 0x46fffe0046fffe00;
        auVar27._8_4_ = 0x46fffe00;
        auVar27._0_8_ = 0x46fffe0046fffe00;
        auVar23._8_4_ = 0x46fffe00;
        auVar23._0_8_ = 0x46fffe0046fffe00;
        if (uVar11 != 0) {
          puVar1 = (undefined8 *)(param_3 + lVar16 * 2);
          if (uVar10 < 0x24) {
            uVar12 = 0;
          }
          else {
            uVar13 = uVar11 - 1;
            if (0xfff < uVar13) {
              uVar13 = 0x1000;
            }
            uVar2 = uVar13 + 1 & 7;
            uVar12 = 8;
            if (uVar2 != 0) {
              uVar12 = uVar2;
            }
            uVar12 = (uVar13 + 1) - uVar12;
            pfVar14 = local_4088;
            puVar15 = puVar1;
            uVar13 = uVar12;
            do {
              uVar13 = uVar13 - 8;
              auVar24._0_4_ = *pfVar14 * 32768.0;
              auVar24._4_4_ = pfVar14[1] * 32768.0;
              auVar24._8_4_ = pfVar14[2] * 32768.0;
              auVar24._12_4_ = pfVar14[3] * 32768.0;
              auVar20._0_4_ = pfVar14[4] * 32768.0;
              auVar20._4_4_ = pfVar14[5] * 32768.0;
              auVar20._8_4_ = pfVar14[6] * 32768.0;
              auVar20._12_4_ = pfVar14[7] * 32768.0;
              auVar23._12_4_ = 0x46fffe00;
              auVar28 = NEON_fcmgt(auVar20,auVar23,4);
              auVar27._12_4_ = 0x46fffe00;
              auVar31 = NEON_fcmgt(auVar24,auVar27,4);
              auVar6._12_4_ = 0x46fffe00;
              auVar25 = NEON_bit(auVar24,auVar6,auVar31,1);
              auVar7._12_4_ = 0x46fffe00;
              auVar21 = NEON_bit(auVar20,auVar7,auVar28,1);
              auVar28._8_4_ = 0xc7000000;
              auVar28._0_8_ = 0xc7000000c7000000;
              auVar28._12_4_ = 0xc7000000;
              auVar28 = NEON_fcmgt(auVar28,auVar21,4);
              auVar31._8_4_ = 0xc7000000;
              auVar31._0_8_ = 0xc7000000c7000000;
              auVar31._12_4_ = 0xc7000000;
              auVar31 = NEON_fcmgt(auVar31,auVar25,4);
              auVar30._8_4_ = 0xc7000000;
              auVar30._0_8_ = 0xc7000000c7000000;
              auVar30._12_4_ = 0xc7000000;
              auVar31 = NEON_bit(auVar25,auVar30,auVar31,1);
              auVar25._8_4_ = 0xc7000000;
              auVar25._0_8_ = 0xc7000000c7000000;
              auVar25._12_4_ = 0xc7000000;
              auVar28 = NEON_bit(auVar21,auVar25,auVar28,1);
              auVar29._8_8_ = 0x7fffffff7fffffff;
              auVar29._0_8_ = 0x7fffffff7fffffff;
              auVar32._8_8_ = 0x7fffffff7fffffff;
              auVar32._0_8_ = 0x7fffffff7fffffff;
              auVar21._8_4_ = 0x3f000000;
              auVar21._0_8_ = 0x3f0000003f000000;
              auVar21._12_4_ = 0x3f000000;
              auVar30 = NEON_bsl(auVar29,auVar21,auVar28,1);
              auVar5._8_4_ = 0x3f000000;
              auVar5._0_8_ = 0x3f0000003f000000;
              auVar5._12_4_ = 0x3f000000;
              auVar25 = NEON_bsl(auVar32,auVar5,auVar31,1);
              auVar22._0_8_ =
                   CONCAT26((short)(int)(auVar31._12_4_ + auVar25._12_4_),
                            CONCAT24((short)(int)(auVar31._8_4_ + auVar25._8_4_),
                                     CONCAT22((short)(int)(auVar31._4_4_ + auVar25._4_4_),
                                              (short)(int)(auVar31._0_4_ + auVar25._0_4_))));
              auVar22._8_2_ = (short)(int)(auVar28._0_4_ + auVar30._0_4_);
              auVar22._10_2_ = (short)(int)(auVar28._4_4_ + auVar30._4_4_);
              auVar22._12_2_ = (short)(int)(auVar28._8_4_ + auVar30._8_4_);
              auVar22._14_2_ = (short)(int)(auVar28._12_4_ + auVar30._12_4_);
              puVar15[1] = auVar22._8_8_;
              *puVar15 = auVar22._0_8_;
              pfVar14 = pfVar14 + 8;
              puVar15 = puVar15 + 2;
            } while (uVar13 != 0);
          }
          do {
            if (uVar12 == 0x1000) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                        );
            }
            auVar26._8_8_ = 0x7fffffff7fffffff;
            auVar26._0_8_ = 0x7fffffff7fffffff;
            fVar19 = local_4088[uVar12] * 32768.0;
            fVar8 = 32767.0;
            if (fVar19 == 32767.0 || fVar19 < 32767.0 != NAN(fVar19)) {
              fVar8 = fVar19;
            }
            auVar23 = ZEXT816(0xc7000000);
            if (-32768.0 <= fVar8) {
              auVar23 = ZEXT416((uint)fVar8);
            }
            auVar27 = NEON_bsl(auVar26,ZEXT816(0x3f000000),auVar23,1);
            *(short *)((long)puVar1 + uVar12 * 2) = (short)(int)(auVar23._0_4_ + auVar27._0_4_);
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
      }
      else {
        uVar10 = FUN_0065a7f4(param_1 + 0x30,param_3 + lVar16 * 2,uVar18 << 1);
        uVar11 = uVar10 >> 1;
      }
      if (uVar11 != 0) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar10 / uVar11;
        }
        if (uVar10 != uVar13 * uVar11) {
          return -1;
        }
      }
      if ((uVar11 != uVar18) && (uVar18 = FUN_0065a808(param_1 + 0x30), (uVar18 & 1) == 0)) {
        return -1;
      }
      local_78 = uVar9 - uVar11;
      lVar16 = uVar11 + lVar16;
      uVar11 = *puVar17 - uVar11;
      *puVar17 = uVar11;
    } while (local_78 != 0);
  }
  return param_2 - local_78;
}


// ===== 005ef6e0  FUN_005ef6e0 =====

void FUN_005ef6e0(long param_1)

{
  FUN_0065a730(param_1 + 0x30);
  return;
}


// ===== 005ef6ec  FUN_005ef6ec =====

undefined8 *
FUN_005ef6ec(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5
            )

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [8];
  
  puVar2 = (undefined8 *)operator_new(0x30);
  FUN_0065a69c(auStack_48,param_1,param_2,0);
  *puVar2 = &PTR_FUN_00d268a8;
  uVar5 = 3;
  if (param_5 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)(puVar2 + 1) = param_3;
  puVar2[2] = param_4;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = uVar5;
  FUN_0065a6d0(puVar2 + 5,auStack_48);
  FUN_0065a730(auStack_48);
  if ((puVar2[5] != 0) &&
     (uVar3 = FUN_005efdb0(puVar2[2],*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar2 + 4),
                           puVar2[3]), (uVar3 & 1) != 0)) {
    iVar1 = *(int *)(puVar2 + 4);
    if (iVar1 == 1) {
      uVar4 = 0x2c;
    }
    else {
      if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../common_audio/wav_header.h",0x32,
                     "format == WavFormat::kWavFormatIeeeFloat",&DAT_001fbedc,iVar1,3);
      }
      uVar4 = 0x3a;
    }
    uVar3 = FUN_0065a830(puVar2 + 5,&DAT_001fbea2,uVar4);
    if ((uVar3 & 1) != 0) {
      return puVar2;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_005efbc8(puVar2);
    operator_delete(puVar2);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}


// ===== 005ef824  FUN_005ef824 =====

undefined8 FUN_005ef824(long param_1,long param_2,ulong param_3)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  ulong uVar23;
  undefined8 *puVar24;
  short *psVar25;
  long lVar26;
  ulong uVar27;
  short *psVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_4068 [8];
  float afStack_4048 [4090];
  
  if (param_3 != 0) {
    uVar27 = 0;
    psVar28 = (short *)(param_2 + 0x10);
    lVar29 = param_2;
    uVar30 = param_3;
    do {
      uVar21 = param_3 - uVar27;
      iVar3 = *(int *)(param_1 + 0x20);
      uVar19 = uVar30;
      if (uVar30 < 2) {
        uVar19 = 1;
      }
      if (0xfff < uVar19) {
        uVar19 = 0x1000;
      }
      if (0xfff < uVar21) {
        uVar21 = 0x1000;
      }
      if (iVar3 == 3) {
        memset(local_4068,0xff,0x4000);
        if (uVar30 < 4) {
          uVar20 = 0;
LAB_005ef9ac:
          do {
            local_4068[uVar20] = (float)(int)*(short *)(lVar29 + uVar20 * 2) / 32768.0;
            uVar20 = uVar20 + 1;
LAB_005ef9bc:
          } while (uVar19 != uVar20);
        }
        else {
          if (uVar30 < 0x10) {
            uVar20 = 0;
LAB_005ef95c:
            pfVar22 = local_4068 + uVar20;
            lVar2 = uVar20 * 2;
            lVar26 = uVar20 - (uVar19 & 0x1ffc);
            uVar20 = uVar19 & 0x1ffc;
            puVar24 = (undefined8 *)(lVar29 + lVar2);
            do {
              uVar31 = *puVar24;
              lVar26 = lVar26 + 4;
              auVar33._0_4_ = (int)(short)uVar31;
              auVar33._4_4_ = (int)(short)((ulong)uVar31 >> 0x10);
              auVar33._8_4_ = (int)(short)((ulong)uVar31 >> 0x20);
              auVar33._12_4_ = (int)(short)((ulong)uVar31 >> 0x30);
              auVar34 = NEON_scvtf(auVar33,4);
              auVar35._0_8_ = CONCAT44(auVar34._4_4_ * 3.0517578e-05,auVar34._0_4_ * 3.0517578e-05);
              auVar35._8_4_ = auVar34._8_4_ * 3.0517578e-05;
              auVar35._12_4_ = auVar34._12_4_ * 3.0517578e-05;
              *(long *)(pfVar22 + 2) = auVar35._8_8_;
              *(undefined8 *)pfVar22 = auVar35._0_8_;
              pfVar22 = pfVar22 + 4;
              puVar24 = puVar24 + 1;
              if (lVar26 == 0) goto LAB_005ef9bc;
            } while( true );
          }
          uVar23 = uVar19 & 0x1ff0;
          uVar20 = uVar19 & 0x1ff0;
          psVar25 = psVar28;
          pfVar22 = afStack_4048;
          do {
            psVar1 = psVar25 + -8;
            psVar4 = psVar25 + -7;
            psVar5 = psVar25 + -6;
            psVar6 = psVar25 + -5;
            psVar7 = psVar25 + -4;
            psVar8 = psVar25 + -3;
            psVar9 = psVar25 + -2;
            psVar10 = psVar25 + -1;
            sVar11 = *psVar25;
            psVar12 = psVar25 + 1;
            psVar13 = psVar25 + 2;
            psVar14 = psVar25 + 3;
            psVar15 = psVar25 + 4;
            psVar16 = psVar25 + 5;
            psVar17 = psVar25 + 6;
            psVar18 = psVar25 + 7;
            uVar23 = uVar23 - 0x10;
            psVar25 = psVar25 + 0x10;
            auVar37._0_4_ = (int)*psVar7;
            auVar37._4_4_ = (int)*psVar8;
            auVar37._8_4_ = (int)*psVar9;
            auVar37._12_4_ = (int)*psVar10;
            auVar34._0_4_ = (int)*psVar1;
            auVar34._4_4_ = (int)*psVar4;
            auVar34._8_4_ = (int)*psVar5;
            auVar34._12_4_ = (int)*psVar6;
            auVar38._0_4_ = (int)*psVar15;
            auVar38._4_4_ = (int)*psVar16;
            auVar38._8_4_ = (int)*psVar17;
            auVar38._12_4_ = (int)*psVar18;
            auVar36._0_4_ = (int)sVar11;
            auVar36._4_4_ = (int)*psVar12;
            auVar36._8_4_ = (int)*psVar13;
            auVar36._12_4_ = (int)*psVar14;
            auVar37 = NEON_scvtf(auVar37,4);
            auVar34 = NEON_scvtf(auVar34,4);
            auVar38 = NEON_scvtf(auVar38,4);
            auVar36 = NEON_scvtf(auVar36,4);
            auVar32._0_8_ = CONCAT44(auVar34._4_4_ * 3.0517578e-05,auVar34._0_4_ * 3.0517578e-05);
            auVar32._8_4_ = auVar34._8_4_ * 3.0517578e-05;
            auVar32._12_4_ = auVar34._12_4_ * 3.0517578e-05;
            *(long *)(pfVar22 + -6) = auVar32._8_8_;
            *(undefined8 *)(pfVar22 + -8) = auVar32._0_8_;
            *pfVar22 = auVar37._8_4_ * 3.0517578e-05;
            pfVar22[1] = auVar37._12_4_ * 3.0517578e-05;
            pfVar22[-4] = auVar37._0_4_ * 3.0517578e-05;
            pfVar22[-3] = auVar37._4_4_ * 3.0517578e-05;
            pfVar22[4] = auVar36._8_4_ * 3.0517578e-05;
            pfVar22[5] = auVar36._12_4_ * 3.0517578e-05;
            *pfVar22 = auVar36._0_4_ * 3.0517578e-05;
            pfVar22[1] = auVar36._4_4_ * 3.0517578e-05;
            pfVar22[8] = auVar38._8_4_ * 3.0517578e-05;
            pfVar22[9] = auVar38._12_4_ * 3.0517578e-05;
            pfVar22[4] = auVar38._0_4_ * 3.0517578e-05;
            pfVar22[5] = auVar38._4_4_ * 3.0517578e-05;
            pfVar22 = pfVar22 + 0x10;
          } while (uVar23 != 0);
          if (uVar19 != uVar20) {
            if ((uVar19 & 0xc) != 0) goto LAB_005ef95c;
            goto LAB_005ef9ac;
          }
        }
        uVar19 = FUN_0065a830(param_1 + 0x28,local_4068,uVar21 << 2);
      }
      else {
        if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../common_audio/wav_file.cc",0x11f,
                       "format_ == WavFormat::kWavFormatIeeeFloat",&DAT_001fbedc,iVar3,3);
        }
        uVar19 = FUN_0065a830(param_1 + 0x28,param_2 + uVar27 * 2,uVar21 << 1);
      }
      if ((uVar19 & 1) == 0) {
        return 0;
      }
      uVar19 = *(ulong *)(param_1 + 0x18);
      lVar2 = uVar19 + uVar21;
      *(long *)(param_1 + 0x18) = lVar2;
      if (CARRY8(uVar19,uVar21)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../common_audio/wav_file.cc",300,
                     "num_samples_written_ >= num_samples_to_write",&DAT_001fb920,lVar2,uVar21);
      }
      uVar27 = uVar27 + 0x1000;
      uVar30 = uVar30 - 0x1000;
      psVar28 = psVar28 + 0x1000;
      lVar29 = lVar29 + 0x2000;
    } while (uVar27 < param_3);
  }
  return 1;
}


// ===== 005efa64  FUN_005efa64 =====

uint FUN_005efa64(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined2 uStack_58;
  undefined6 local_56;
  undefined2 uStack_50;
  undefined1 *puStack_4e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)(param_1 + 0x28);
  if (*plVar5 == 0) {
    uVar2 = 1;
  }
  else {
    uVar4 = FUN_0065a7a0(plVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4e = &DAT_aaaaaaaaaaaaaaaa;
      uStack_50 = 0xaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_58 = 0xaaaa;
      local_56 = 0xaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_005eff44(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),&local_80,
                   &local_88);
      uVar2 = FUN_0065a830(plVar5,&local_80,local_88);
    }
    uVar3 = FUN_0065a730(plVar5);
    uVar2 = uVar2 & uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


