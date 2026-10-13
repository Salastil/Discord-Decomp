// ===== 00adee98  FUN_00adee98 =====

void FUN_00adee98(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  iVar3 = 1;
  if (param_3 == '\0') {
    iVar3 = 2;
  }
  iVar1 = FUN_00d0f6b0(iVar3,param_1 + 0x220);
  if (iVar1 != iVar3) {
    plVar2 = (long *)FUN_007e06bc();
    plVar4 = *(long **)(param_1 + 0x218);
    if (plVar2 == plVar4) {
      FUN_00adef98(param_1);
      return;
    }
    lVar5 = *(long *)(param_1 + 600);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar5;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00adf5e8;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 00adef98  FUN_00adef98 =====

void FUN_00adef98(long param_1)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long lVar4;
  long ****pppplVar5;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  local_38 = 0;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  if (lVar4 != param_1 + 0x18) {
    do {
      ppplVar3 = local_48;
      pppplVar1 = (long ****)operator_new(0x18);
      if ((pppplVar1 == (long ****)0x0) || (pppplVar1 == (long ****)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      ppplVar2 = *(long ****)(lVar4 + 0x10);
      *pppplVar1 = ppplVar3;
      pppplVar1[1] = (long ***)&local_48;
      pppplVar1[2] = ppplVar2;
      ppplVar3[1] = (long **)pppplVar1;
      local_38 = local_38 + 1;
      lVar4 = *(long *)(lVar4 + 8);
      local_48 = (long ***)pppplVar1;
    } while (lVar4 != param_1 + 0x18);
    for (pppplVar1 = (long ****)local_40; pppplVar1 != &local_48;
        pppplVar1 = (long ****)pppplVar1[1]) {
      (*(code *)**pppplVar1[2])();
    }
    if (local_38 != 0) {
      ppplVar3 = ((long ****)local_48)[1];
      (*local_40)[1] = (long *)ppplVar3;
      *ppplVar3 = *local_40;
      local_38 = 0;
      pppplVar1 = (long ****)local_40;
      while (pppplVar1 != &local_48) {
        if ((pppplVar1 == (long ****)0xfffffffffffffff0) || (pppplVar1 == (long ****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppplVar5 = (long ****)pppplVar1[1];
        operator_delete(pppplVar1);
        pppplVar1 = pppplVar5;
      }
    }
  }
  return;
}


// ===== 00adf0d4  FUN_00adf0d4 =====

undefined8 FUN_00adf0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}


// ===== 00adf0e4  FUN_00adf0e4 =====

undefined8 FUN_00adf0e4(void)

{
  return 0;
}


// ===== 00adf0f0  FUN_00adf0f0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00adf0f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,long param_7)

{
  long lVar1;
  undefined1 auVar2 [8];
  undefined1 auVar3 [8];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_d0;
  undefined1 *local_c8;
  uint local_c0;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  lVar1 = param_7 / 1000;
  local_b0 = param_1;
  if (*(char *)(param_2 + 0x250) == '\x01') {
    uVar8 = FUN_006258f0();
    param_7 = FUN_0099c718(param_2 + 0x228,lVar1,uVar8);
    param_7 = param_7 * 1000;
  }
  local_94 = 0;
  local_98 = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0 = (undefined1  [8])0x0;
  if ((param_6 * -0x5b05b05b + 0x2d82d80U >> 2 | param_6 * 0x40000000) < 0x16c16c1) {
    local_c8 = local_a8;
    local_d0 = (undefined8 *)(local_a8 + 4);
    puVar10 = &local_94;
    puVar11 = &local_98;
    puVar12 = (undefined8 *)((long)local_a0 + 4);
    puVar13 = (undefined8 *)local_a0;
    uVar9 = param_4;
  }
  else {
    local_c8 = local_a8 + 4;
    local_d0 = (undefined8 *)local_a8;
    puVar10 = &local_98;
    puVar11 = &local_94;
    puVar12 = (undefined8 *)local_a0;
    puVar13 = (undefined8 *)((long)local_a0 + 4);
    uVar9 = param_5;
    param_5 = param_4;
  }
  uVar7 = FUN_00adfb60(param_2,uVar9,param_5,lVar1,puVar10,puVar11,puVar12,puVar13);
  uVar6 = local_94;
  uVar5 = local_98;
  auVar3 = local_a0;
  auVar2 = local_a8;
  uVar9 = local_a8._4_4_;
  uVar4 = local_a0._4_4_;
  uVar8 = FUN_00adaed8(param_3,"org/webrtc/NativeAndroidVideoTrackSource",&DAT_00db9e20);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_d0;
  FUN_00ad8360(&local_90,param_3,uVar8,"createFrameAdaptationParameters",
               "(IIIIIIJZ)Lorg/webrtc/VideoProcessor$FrameAdaptationParameters;",&DAT_00db9e18);
  local_c0 = (uVar7 ^ 0xffffffff) & 1;
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,uVar5);
  local_c8 = (undefined1 *)param_7;
  uVar8 = FUN_004aecec(param_3,uVar8,local_70,uVar9,(ulong)auVar2 & 0xffffffff,uVar4,
                       (ulong)auVar3 & 0xffffffff,uVar6);
  *local_b0 = uVar8;
  local_b0[1] = param_3;
  FUN_00ad843c(&local_90);
  return;
}


// ===== 00adf2e0  FUN_00adf2e0 =====

void FUN_00adf2e0(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_1e0 [200];
  long *local_118 [28];
  long *local_38;
  
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae9bec(&local_38,param_2,param_5);
  uVar2 = FUN_00adf9cc(param_1);
  if ((param_3 != 0) && ((uVar2 & 1) != 0)) {
    (**(code **)(*local_38 + 0x40))(local_118);
    plVar1 = local_38;
    local_38 = local_118[0];
    local_118[0] = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      if (local_118[0] != (long *)0x0) {
        (**(code **)(*local_118[0] + 8))();
      }
    }
  }
  FUN_007beb5c(auStack_1e0);
  uVar3 = FUN_007bed3c(auStack_1e0,&local_38);
  uVar3 = FUN_007bedd8(uVar3,param_3);
  FUN_007beda8(uVar3,param_4 / 1000);
  FUN_007bebfc(local_118);
  FUN_00adf858(param_1,local_118);
  FUN_007bf020(local_118);
  FUN_007bebac(auStack_1e0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


// ===== 00adf400  FUN_00adf400 =====

undefined8 FUN_00adf400(void)

{
  return 0;
}


// ===== 00adf40c  FUN_00adf40c =====

void FUN_00adf40c(void)

{
  return;
}


// ===== 00adf414  FUN_00adf414 =====

void FUN_00adf414(void)

{
  return;
}


// ===== 00adf41c  FUN_00adf41c =====

void FUN_00adf41c(void)

{
  return;
}


// ===== 00adf424  FUN_00adf424 =====

void FUN_00adf424(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x18);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00adf494  FUN_00adf494 =====

void FUN_00adf494(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  while( true ) {
    if (lVar1 == param_1 + 0x18) {
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  FUN_00adf5f4(param_1 + 0x18,lVar1);
  return;
}


// ===== 00adf4cc  FUN_00adf4cc =====

void FUN_00adf4cc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x10);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00adf53c  FUN_00adf53c =====

void FUN_00adf53c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)(param_1 + 0x10)) {
    plVar1 = (long *)plVar2[1];
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    if ((plVar2 != (long *)0xfffffffffffffff0) && (plVar2 != (long *)0x0)) {
      operator_delete(plVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00adf5e8  FUN_00adf5e8 =====

void FUN_00adf5e8(undefined8 *param_1)

{
  FUN_00adef98(*param_1);
  return;
}


// ===== 00adf5f4  FUN_00adf5f4 =====

long * FUN_00adf5f4(long *param_1,long *param_2)

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
  if ((param_2 != (long *)0xfffffffffffffff0) && (param_2 != (long *)0x0)) {
    operator_delete(param_2);
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00adf67c  FUN_00adf67c =====

void FUN_00adf67c(undefined8 *param_1)

{
  undefined1 *local_8;
  
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d41ed8;
  param_1[1] = &PTR_FUN_00d41f78;
  param_1[2] = &PTR_FUN_00d41fa8;
  param_1[3] = param_1 + 3;
  FUN_0089e1a4(param_1 + 6);
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x23),(pthread_mutexattr_t *)&local_8);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_00adfeb8(param_1 + 0x2a);
  return;
}


// ===== 00adf6fc  FUN_00adf6fc =====

void FUN_00adf6fc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d41ed8;
  param_1[1] = &PTR_FUN_00d41f78;
  param_1[2] = &PTR_FUN_00d41fa8;
  FUN_00adff34(param_1 + 0x2a);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x23));
  FUN_0089e310(param_1 + 6);
  *param_1 = &PTR_FUN_00d41fe0;
  param_1[1] = &PTR_FUN_00d42070;
  param_1[2] = &PTR_FUN_00d420a0;
  if (param_1[5] != 0) {
    plVar1 = (long *)param_1[4];
    plVar2 = *(long **)(param_1[3] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[5] = 0;
    while (plVar1 != param_1 + 3) {
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


// ===== 00adf7d0  FUN_00adf7d0 =====

void FUN_00adf7d0(long param_1)

{
  FUN_00adf6fc(param_1 + -8);
  return;
}


// ===== 00adf7dc  FUN_00adf7dc =====

void FUN_00adf7dc(long param_1)

{
  FUN_00adf6fc(param_1 + -0x10);
  return;
}


// ===== 00adf7e8  FUN_00adf7e8 =====

void FUN_00adf7e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadf7f0);
  (*pcVar1)();
}


// ===== 00adf7f0  FUN_00adf7f0 =====

void FUN_00adf7f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadf7f8);
  (*pcVar1)();
}


// ===== 00adf7f8  FUN_00adf7f8 =====

void FUN_00adf7f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadf800);
  (*pcVar1)();
}


// ===== 00adf800  FUN_00adf800 =====

char FUN_00adf800(long param_1,undefined8 *param_2)

{
  char cVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  cVar1 = *(char *)(param_1 + 0x148);
  if (cVar1 == '\x01') {
    *param_2 = *(undefined8 *)(param_1 + 0x140);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  return cVar1;
}


// ===== 00adf858  FUN_00adf858 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adf858(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *local_38;
  
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_007bf464(&local_38,param_2);
  FUN_00ae0554(&local_120,param_1 + 0x150);
  cVar1 = (char)local_120;
  FUN_007bfb14(&local_120);
  if (((cVar1 == '\x01') && (*(int *)(param_2 + 0x48) != 0)) &&
     (iVar2 = (**(code **)(*local_38 + 0x28))(), iVar2 == 1)) {
    uStack_58 = _UNK_002531a8;
    local_60 = _DAT_002531a0;
    uStack_48 = _UNK_002531b8;
    uStack_50 = _DAT_002531b0;
    uStack_98 = _UNK_00253168;
    local_a0 = _DAT_00253160;
    uStack_88 = _UNK_00253178;
    uStack_90 = _DAT_00253170;
    uStack_78 = _UNK_00253188;
    local_80 = _DAT_00253180;
    uStack_68 = _UNK_00253198;
    uStack_70 = _DAT_00253190;
    uStack_d8 = _UNK_00253128;
    local_e0 = _DAT_00253120;
    uStack_c8 = _UNK_00253138;
    uStack_d0 = _DAT_00253130;
    uStack_b8 = _UNK_00253148;
    local_c0 = _DAT_00253140;
    uStack_a8 = _UNK_00253158;
    uStack_b0 = _DAT_00253150;
    uStack_118 = _UNK_002530e8;
    local_120 = _DAT_002530e0;
    uStack_108 = _UNK_002530f8;
    uStack_110 = _DAT_002530f0;
    uStack_f8 = _UNK_00253108;
    local_100 = _DAT_00253100;
    uStack_e8 = _UNK_00253118;
    uStack_f0 = _DAT_00253110;
    FUN_007bf070(&local_120,param_2);
    uVar3 = (**(code **)(*local_38 + 0x48))();
    FUN_007bd12c(&local_130,uVar3,*(undefined4 *)(param_2 + 0x48));
    local_128 = local_130;
    local_130 = (long *)0x0;
    FUN_007bf484(&local_120,&local_128);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 8))();
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 8))();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
    FUN_00ae0594(param_1 + 0x150,&local_120);
    FUN_007bf020(&local_120);
  }
  else {
    FUN_00ae0594(param_1 + 0x150,param_2);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


// ===== 00adf9cc  FUN_00adf9cc =====

undefined1 FUN_00adf9cc(long param_1)

{
  undefined1 local_60 [64];
  
  FUN_00ae0554(local_60,param_1 + 0x150);
  FUN_007bfb14(local_60);
  return local_60[0];
}


// ===== 00adfa10  FUN_00adfa10 =====

void FUN_00adfa10(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00ae00d4(param_1 + 0x150);
  FUN_00ae0554(auStack_60,param_1 + 0x150);
  FUN_0089f83c(param_1 + 0x30,auStack_60);
  FUN_007bfb14(auStack_60);
  return;
}


// ===== 00adfa64  FUN_00adfa64 =====

void FUN_00adfa64(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00ae00d4(param_1 + 0x140);
  FUN_00ae0554(auStack_60,param_1 + 0x140);
  FUN_0089f83c(param_1 + 0x20,auStack_60);
  FUN_007bfb14(auStack_60);
  return;
}


// ===== 00adfab8  FUN_00adfab8 =====

void FUN_00adfab8(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00ae04c8(param_1 + 0x150);
  FUN_00ae0554(auStack_60,param_1 + 0x150);
  FUN_0089f83c(param_1 + 0x30,auStack_60);
  FUN_007bfb14(auStack_60);
  return;
}


// ===== 00adfb0c  FUN_00adfb0c =====

void FUN_00adfb0c(long param_1)

{
  undefined1 auStack_60 [64];
  
  FUN_00ae04c8(param_1 + 0x140);
  FUN_00ae0554(auStack_60,param_1 + 0x140);
  FUN_0089f83c(param_1 + 0x20,auStack_60);
  FUN_007bfb14(auStack_60);
  return;
}


// ===== 00adfb60  FUN_00adfb60 =====

undefined8
FUN_00adfb60(long param_1,int param_2,int param_3,long param_4,undefined8 param_5,undefined8 param_6
            ,int *param_7,int *param_8,int *param_9,int *param_10)

{
  ulong uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x148) == '\x01') {
    *(undefined8 *)(param_1 + 0x140) = CONCAT44(param_3,param_2);
  }
  else {
    if ((undefined8 *)(param_1 + 0x140) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(ulong *)(param_1 + 0x140) = CONCAT44(param_3,param_2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x118));
  uVar1 = FUN_00ae0510(param_1 + 0x150);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0089e398(param_1 + 0x30,param_2,param_3,param_4 * 1000,param_7,param_8,param_5,
                         param_6);
    if ((uVar1 & 1) != 0) {
      *param_9 = (param_2 - *param_7) / 2;
      *param_10 = (param_3 - *param_8) / 2;
      return 1;
    }
    FUN_00ae08ac(param_1 + 0x150);
  }
  return 0;
}


// ===== 00adfc94  FUN_00adfc94 =====

void FUN_00adfc94(long param_1)

{
  FUN_00ae0964(param_1 + 0x150);
  return;
}


// ===== 00adfca0  FUN_00adfca0 =====

void FUN_00adfca0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d41fe0;
  param_1[1] = &PTR_FUN_00d42070;
  param_1[2] = &PTR_FUN_00d420a0;
  if (param_1[5] != 0) {
    plVar1 = (long *)param_1[4];
    plVar2 = *(long **)(param_1[3] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[5] = 0;
    while (plVar1 != param_1 + 3) {
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


// ===== 00adfd48  FUN_00adfd48 =====

void FUN_00adfd48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadfd50);
  (*pcVar1)();
}


// ===== 00adfd50  FUN_00adfd50 =====

void FUN_00adfd50(void)

{
  return;
}


// ===== 00adfd58  FUN_00adfd58 =====

void FUN_00adfd58(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d41fe0;
  *param_1 = &PTR_FUN_00d42070;
  param_1[1] = &PTR_FUN_00d420a0;
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


// ===== 00adfe00  FUN_00adfe00 =====

void FUN_00adfe00(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadfe08);
  (*pcVar1)();
}


// ===== 00adfe08  FUN_00adfe08 =====

void FUN_00adfe08(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-2] = &PTR_FUN_00d41fe0;
  param_1[-1] = &PTR_FUN_00d42070;
  *param_1 = &PTR_FUN_00d420a0;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    plVar2 = *(long **)(param_1[1] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[3] = 0;
    while (plVar1 != param_1 + 1) {
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


// ===== 00adfeb0  FUN_00adfeb0 =====

void FUN_00adfeb0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xadfeb8);
  (*pcVar1)();
}


// ===== 00adfeb8  FUN_00adfeb8 =====

void FUN_00adfeb8(undefined8 *param_1)

{
  undefined1 *local_8;
  
  FUN_00ae0ad4();
  *param_1 = &PTR_FUN_00d420d8;
  param_1[4] = &PTR_FUN_00d42120;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 5),(pthread_mutexattr_t *)&local_8);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  FUN_007bfa40(param_1 + 10);
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00adff34  FUN_00adff34 =====

void FUN_00adff34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d420d8;
  param_1[4] = &PTR_FUN_00d42120;
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  FUN_007bfb14(param_1 + 10);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  FUN_00ae0aec(param_1);
  return;
}


// ===== 00adff94  FUN_00adff94 =====

void FUN_00adff94(undefined8 *param_1)

{
  param_1[-4] = &PTR_FUN_00d420d8;
  *param_1 = &PTR_FUN_00d42120;
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  FUN_007bfb14(param_1 + 6);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  FUN_00ae0aec(param_1 + -4);
  return;
}


// ===== 00adfff8  FUN_00adfff8 =====

void FUN_00adfff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d420d8;
  param_1[4] = &PTR_FUN_00d42120;
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  FUN_007bfb14(param_1 + 10);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  FUN_00ae0aec(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00ae0064  FUN_00ae0064 =====

void FUN_00ae0064(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_00d420d8;
  *param_1 = &PTR_FUN_00d42120;
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  FUN_007bfb14(param_1 + 6);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  FUN_00ae0aec(puVar1);
  operator_delete(puVar1);
  return;
}


// ===== 00ae00d4  FUN_00ae00d4 =====

int FUN_00ae00d4(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  lVar2 = FUN_00ae0d70(param_1,param_2);
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        uVar5 = 0xbff0000000000000;
        uVar4 = 0xbff0000000000000;
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          uVar4 = *(undefined8 *)(param_1 + 0xa0);
        }
        if (*(char *)(param_1 + 0xb8) == '\x01') {
          uVar5 = *(undefined8 *)(param_1 + 0xb0);
        }
        FUN_00623bb0(uVar4,uVar5,&DAT_002532a0,"../../media/base/video_broadcaster.cc",0x169,
                     "AddOrUpdateSink"," forwarding stored constraints min_fps "," max_fps ");
      }
      if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa0);
    }
  }
  FUN_00ae0c2c(param_1,param_2,param_3);
  FUN_00ae01f8(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar1;
}


// ===== 00ae01f8  FUN_00ae01f8 =====

void FUN_00ae01f8(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  int local_30;
  undefined4 uStack_2c;
  uint local_28;
  byte local_24;
  undefined1 uStack_23;
  undefined1 local_22;
  undefined1 uStack_21;
  
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = 0xaaaaaaaa;
  local_24 = 0xaa;
  uStack_23 = 0xaa;
  local_22 = 0xaa;
  uStack_21 = 0xaa;
  local_30 = -0x55555556;
  uStack_2c = -0x55555556;
  FUN_007bfa40(&local_60);
  puVar10 = local_60;
  lVar16 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffffff00);
  uVar13 = (ulong)local_60;
  local_50 = (undefined1 *)CONCAT44(1,(int)local_50);
  local_22 = 1;
  local_24 = 0;
  uStack_23 = 0;
  lVar18 = lVar16;
  if (lVar16 != lVar2) {
    do {
      if ((*(char *)(lVar18 + 0x44) == '\x01') && ((*(byte *)(lVar18 + 0x40) & 1) != 0)) {
        bVar17 = true;
        goto LAB_00ae0278;
      }
      lVar18 = lVar18 + 0x48;
    } while (lVar18 != lVar2);
    bVar17 = false;
LAB_00ae0278:
    local_60._4_4_ = SUB84(puVar10,4);
    bVar19 = 0;
    uVar12 = 1;
    iVar20 = local_60._4_4_;
    iVar21 = (int)local_50;
    local_60 = (undefined1 *)uVar13;
    do {
      bVar5 = *(byte *)(lVar16 + 0x44);
      if (((bVar5 & 1) != 0) || (!bVar17 && (*(byte *)(lVar16 + 0x40) & 1) == 0)) {
        if (*(char *)(lVar16 + 8) == '\x01') {
          local_60 = (undefined1 *)CONCAT71(local_60._1_7_,1);
        }
        iVar3 = *(int *)(lVar16 + 0xc);
        if (iVar3 < iVar20) {
          local_60 = (undefined1 *)CONCAT44(iVar3,(undefined4)local_60);
          iVar20 = iVar3;
        }
        if ((*(char *)(lVar16 + 0x14) == '\x01') &&
           ((uStack_58._4_1_ != '\x01' || (*(int *)(lVar16 + 0x10) < (int)uStack_58)))) {
          uVar6 = *(undefined1 *)(lVar16 + 0x14);
          *(undefined4 *)((ulong)&local_60 | 8) = *(undefined4 *)(lVar16 + 0x10);
          *(undefined1 *)((undefined4 *)((ulong)&local_60 | 8) + 1) = uVar6;
        }
        iVar3 = *(int *)(lVar16 + 0x18);
        if (iVar3 < iVar21) {
          local_50 = (undefined1 *)CONCAT44(local_50._4_4_,iVar3);
          iVar21 = iVar3;
        }
        uVar13 = 0;
        uVar11 = (uint)uVar12;
        if ((uVar11 != 0) && (uVar4 = *(uint *)(lVar16 + 0x1c), uVar4 != 0)) {
          uVar1 = -uVar11;
          if (-1 < (int)uVar11) {
            uVar1 = uVar11;
          }
          uVar11 = -uVar4;
          if (-1 < (int)uVar4) {
            uVar11 = uVar4;
          }
          uVar4 = uVar1;
          if (uVar11 <= uVar1) {
            uVar4 = uVar11;
          }
          uVar7 = uVar1;
          if (uVar1 <= uVar11) {
            uVar7 = uVar11;
          }
          uVar15 = 0;
          if (uVar4 != 0) {
            uVar15 = uVar7 / uVar4;
          }
          uVar7 = uVar7 - uVar15 * uVar4;
          if (uVar7 != 0) {
            uVar15 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
            uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
            uVar14 = uVar7 >> (ulong)((uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) & 0x1f);
            uVar15 = uVar4;
            do {
              uVar8 = (uVar15 & 0xaaaaaaaa) >> 1 | (uVar15 & 0x55555555) << 1;
              uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
              uVar8 = uVar15 >> (ulong)((uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10) & 0x1f);
              uVar9 = uVar14 - uVar8;
              uVar15 = -uVar9;
              if (uVar8 <= uVar14 && uVar9 != 0) {
                uVar15 = uVar9;
              }
              if (uVar8 <= uVar14) {
                uVar14 = uVar8;
              }
            } while (uVar15 != 0);
            uVar4 = ((uVar7 | uVar4) & 0xaaaaaaaa) >> 1 | ((uVar7 | uVar4) & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar4 = uVar14 << (ulong)((uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10) & 0x1f);
          }
          iVar3 = 0;
          if (uVar4 != 0) {
            iVar3 = (int)uVar1 / (int)uVar4;
          }
          uVar13 = (long)iVar3 * (long)(int)uVar11;
          if (uVar13 - (long)(int)uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__numeric/gcd_lcm.h:110: libc++ Hardening assertion !__overflow failed: Overflow in lcm\n"
                      );
          }
        }
        local_50 = (undefined1 *)CONCAT44((int)uVar13,(int)local_50);
        if (*(char *)(lVar16 + 0x40) == '\x01') {
          if ((local_28 & 1) == 0) {
            local_30 = (int)*(undefined8 *)(lVar16 + 0x38);
            uStack_2c = (int)((ulong)*(undefined8 *)(lVar16 + 0x38) >> 0x20);
            local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(lVar16 + 0x40));
          }
          else {
            if (local_30 <= *(int *)(lVar16 + 0x38)) {
              local_30 = *(int *)(lVar16 + 0x38);
            }
            if ((*(byte *)(lVar16 + 0x40) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
            if (uStack_2c <= *(int *)(lVar16 + 0x3c)) {
              uStack_2c = *(int *)(lVar16 + 0x3c);
            }
          }
        }
        else if (bVar5 != 0) {
          uStack_23 = 1;
        }
        local_24 = bVar19 | bVar5;
        uVar12 = uVar13 & 0xffffffff;
        bVar19 = local_24;
      }
      lVar16 = lVar16 + 0x48;
    } while (lVar16 != lVar2);
  }
  if ((((ulong)uStack_58 & 0x100000000) != 0) && (local_60._4_4_ <= (int)uStack_58)) {
    uStack_58._0_5_ = CONCAT14(1,local_60._4_4_);
  }
  *(undefined1 **)(param_1 + 0x58) = uStack_58;
  *(undefined1 **)(param_1 + 0x50) = local_60;
  *(undefined1 **)(param_1 + 0x60) = local_50;
  if ((undefined8 *)(param_1 + 0x50) != &local_60) {
    FUN_00967758(param_1 + 0x68,local_48,local_40,(long)local_40 - (long)local_48 >> 3);
  }
  *(ulong *)(param_1 + 0x80) = CONCAT44(uStack_2c,local_30);
  *(ulong *)(param_1 + 0x87) =
       CONCAT17(local_22,CONCAT16(uStack_23,CONCAT15(local_24,CONCAT41(local_28,uStack_2c._3_1_))));
  FUN_007bfb14(&local_60);
  return;
}


// ===== 00ae04c8  FUN_00ae04c8 =====

int FUN_00ae04c8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  FUN_00ae0dac(param_1,param_2);
  FUN_00ae01f8(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar1;
}


// ===== 00ae0510  FUN_00ae0510 =====

bool FUN_00ae0510(long param_1)

{
  long lVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return lVar1 != lVar2;
}


// ===== 00ae0554  FUN_00ae0554 =====

int FUN_00ae0554(undefined8 param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x28));
  FUN_007bfa80(param_1,param_2 + 0x50);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x28));
  return iVar1;
}


// ===== 00ae0594  FUN_00ae0594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ae0594(long param_1,undefined2 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined1 auStack_218 [200];
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
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  uVar6 = (ulong)uVar2;
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 == puVar1) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
    do {
      if ((*(char *)(puVar9 + 1) == '\x01') && (*(int *)(param_2 + 0x24) != 0)) {
        uVar6 = FUN_0044075c(uVar6);
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../media/base/video_broadcaster.cc",0x290,
                       "Discarding frame with unexpected rotation.");
        }
        uVar6 = (**(code **)(*(long *)*puVar9 + 0x18))();
        bVar8 = 1;
      }
      else {
        if (*(char *)((long)puVar9 + 9) == '\x01') {
          uStack_88 = _UNK_00253288;
          local_90 = _DAT_00253280;
          uStack_78 = _UNK_00253298;
          uStack_80 = _DAT_00253290;
          uStack_c8 = _UNK_00253248;
          local_d0 = _DAT_00253240;
          uStack_b8 = _UNK_00253258;
          uStack_c0 = _DAT_00253250;
          uStack_a8 = _UNK_00253268;
          local_b0 = _DAT_00253260;
          uStack_98 = _UNK_00253278;
          local_a0 = _DAT_00253270;
          uStack_108 = _UNK_00253208;
          local_110 = _DAT_00253200;
          uStack_f8 = _UNK_00253218;
          uStack_100 = _DAT_00253210;
          uStack_e8 = _UNK_00253228;
          local_f0 = _DAT_00253220;
          uStack_d8 = _UNK_00253238;
          uStack_e0 = _DAT_00253230;
          uStack_148 = _UNK_002531c8;
          local_150 = _DAT_002531c0;
          uStack_138 = _UNK_002531d8;
          uStack_140 = _DAT_002531d0;
          uStack_128 = _UNK_002531e8;
          local_130 = _DAT_002531e0;
          uStack_118 = _UNK_002531f8;
          uStack_120 = _DAT_002531f0;
          FUN_007beb5c(auStack_218);
          uVar3 = FUN_007bf3cc(param_2);
          uVar4 = FUN_007bf3e8(param_2);
          uVar7 = FUN_00ae07d0(param_1,uVar3,uVar4);
          uVar7 = FUN_007bed3c(auStack_218,uVar7);
          uVar7 = FUN_007bedd8(uVar7,*(undefined4 *)(param_2 + 0x24));
          uVar7 = FUN_007beda8(uVar7,*(undefined8 *)(param_2 + 0x10));
          FUN_007beed8(uVar7,*param_2);
          FUN_007bebfc(&local_150);
          FUN_007bebac(auStack_218);
        }
        else {
          if (((*(byte *)(param_1 + 0x98) & 1) != 0) || ((*(byte *)(param_2 + 0x58) & 1) == 0)) {
            uVar6 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,param_2);
            goto LAB_00ae060c;
          }
          uStack_88 = _UNK_00253288;
          local_90 = _DAT_00253280;
          uStack_78 = _UNK_00253298;
          uStack_80 = _DAT_00253290;
          uStack_c8 = _UNK_00253248;
          local_d0 = _DAT_00253240;
          uStack_b8 = _UNK_00253258;
          uStack_c0 = _DAT_00253250;
          uStack_a8 = _UNK_00253268;
          local_b0 = _DAT_00253260;
          uStack_98 = _UNK_00253278;
          local_a0 = _DAT_00253270;
          uStack_108 = _UNK_00253208;
          local_110 = _DAT_00253200;
          uStack_f8 = _UNK_00253218;
          uStack_100 = _DAT_00253210;
          uStack_e8 = _UNK_00253228;
          local_f0 = _DAT_00253220;
          uStack_d8 = _UNK_00253238;
          uStack_e0 = _DAT_00253230;
          uStack_148 = _UNK_002531c8;
          local_150 = _DAT_002531c0;
          uStack_138 = _UNK_002531d8;
          uStack_140 = _DAT_002531d0;
          uStack_128 = _UNK_002531e8;
          local_130 = _DAT_002531e0;
          uStack_118 = _UNK_002531f8;
          uStack_120 = _DAT_002531f0;
          FUN_007bf070(&local_150,param_2);
          if ((local_a0 & 1) != 0) {
            local_a0 = local_a0 & 0xffffffffffffff00;
          }
        }
        (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,&local_150);
        uVar6 = FUN_007bf020(&local_150);
      }
LAB_00ae060c:
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar1);
    bVar8 = bVar8 ^ 1;
  }
  *(byte *)(param_1 + 0x98) = bVar8;
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar5;
}


// ===== 00ae07d0  FUN_00ae07d0 =====

long * FUN_00ae07d0(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *local_18;
  
  plVar3 = (long *)(param_1 + 0x90);
  if ((((long *)*plVar3 == (long *)0x0) ||
      (iVar2 = (**(code **)(*(long *)*plVar3 + 0x30))(), iVar2 != param_2)) ||
     (iVar2 = (**(code **)(*(long *)*plVar3 + 0x38))(), iVar2 != param_3)) {
    local_18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_007bcfd8(&local_18,param_2,param_3);
    FUN_007bd6f0(local_18);
    plVar1 = local_18;
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)(local_18);
    }
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
    *plVar3 = (long)plVar1;
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return plVar3;
}


// ===== 00ae08a0  FUN_00ae08a0 =====

void FUN_00ae08a0(long param_1)

{
  FUN_00ae0594(param_1 + -0x20);
  return;
}


// ===== 00ae08ac  FUN_00ae08ac =====

int FUN_00ae08ac(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 != puVar1; puVar3 = puVar3 + 9) {
    (**(code **)(*(long *)*puVar3 + 0x18))();
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar2;
}


// ===== 00ae0908  FUN_00ae0908 =====

int FUN_00ae0908(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar1 = *(undefined8 **)(param_1 + -0x10);
  for (puVar3 = *(undefined8 **)(param_1 + -0x18); puVar3 != puVar1; puVar3 = puVar3 + 9) {
    (**(code **)(*(long *)*puVar3 + 0x18))();
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}


// ===== 00ae0964  FUN_00ae0964 =====

int FUN_00ae0964(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uStack_79;
  char *local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  char *pcStack_60;
  char **local_58;
  char *local_50;
  char **ppcStack_48;
  undefined8 local_40;
  char **ppcStack_38;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  uVar3 = FUN_00417e08(iVar2);
  if ((uVar3 & 1) == 0) {
    local_68 = &uStack_79;
    local_78 = "../../media/base/video_broadcaster.cc";
    uStack_70 = 0x3b9;
    pcStack_60 = "ProcessConstraints";
    local_58 = &local_78;
    local_40 = *param_2;
    uVar6 = param_2[2];
    if (*(char *)(param_2 + 1) == '\0') {
      local_40 = 0xbff0000000000000;
    }
    ppcStack_38 = &local_50;
    if (*(char *)(param_2 + 3) == '\0') {
      uVar6 = 0xbff0000000000000;
    }
    ppcStack_48 = &pcStack_60;
    local_50 = " min_fps ";
    FUN_00623bb0(local_40,uVar6,&DAT_002532a7,"../../media/base/video_broadcaster.cc",0x3b9,
                 "ProcessConstraints"," min_fps "," max_fps "," broadcasting to ",
                 (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x71c71c71c71c71c7,
                 " sinks.");
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar5 = param_2[3];
    uVar6 = param_2[2];
  }
  else {
    if ((undefined8 *)(param_1 + 0xa0) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar5 = param_2[3];
    uVar6 = param_2[2];
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar4 = *(undefined8 **)(param_1 + 8); puVar4 != puVar1; puVar4 = puVar4 + 9) {
    (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,param_2);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar2;
}


// ===== 00ae0ad4  FUN_00ae0ad4 =====

void FUN_00ae0ad4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d42158;
  param_1[1] = 0;
  return;
}


// ===== 00ae0aec  FUN_00ae0aec =====

void FUN_00ae0aec(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d42158;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = (void *)param_1[2];
  if (pvVar3 != (void *)param_1[2]) {
    do {
      pvVar1 = (void *)((long)pvVar2 + -0x48);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007bfb14((long)pvVar2 + -0x40);
      pvVar2 = pvVar1;
    } while (pvVar1 != pvVar3);
    pvVar1 = (void *)param_1[1];
  }
  param_1[2] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00ae0b90  FUN_00ae0b90 =====

void FUN_00ae0b90(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d42158;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = (void *)param_1[2];
    if (pvVar3 != (void *)param_1[2]) {
      do {
        pvVar1 = (void *)((long)pvVar2 + -0x48);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007bfb14((long)pvVar2 + -0x40);
        pvVar2 = pvVar1;
      } while (pvVar1 != pvVar3);
      pvVar1 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00ae0c2c  FUN_00ae0c2c =====

void FUN_00ae0c2c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_c8 [64];
  long local_88;
  undefined1 auStack_80 [64];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar3 == plVar1) {
LAB_00ae0c80:
    if ((plVar3 != plVar1) && (plVar3 != (long *)0x0)) {
      lVar4 = param_3[1];
      lVar2 = *param_3;
      plVar3[3] = param_3[2];
      plVar3[2] = lVar4;
      plVar3[1] = lVar2;
      if (plVar3 + 1 != param_3) {
        FUN_00967758(plVar3 + 4,param_3[3],param_3[4],param_3[4] - param_3[3] >> 3);
      }
      lVar2 = param_3[6];
      *(undefined8 *)((long)plVar3 + 0x3f) = *(undefined8 *)((long)param_3 + 0x37);
      plVar3[7] = lVar2;
      return;
    }
  }
  else {
    do {
      if (*plVar3 == param_2) goto LAB_00ae0c80;
      plVar3 = plVar3 + 9;
    } while (plVar3 != plVar1);
  }
  FUN_007bfa80(auStack_c8,param_3);
  local_88 = param_2;
  FUN_007bfa80(auStack_80,auStack_c8);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 < *(long **)(param_1 + 0x18)) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar1 = plVar3 + 9;
    *plVar3 = local_88;
    FUN_007bfa80(plVar3 + 1,auStack_80);
  }
  else {
    plVar1 = (long *)FUN_00ae1234((long *)(param_1 + 8),&local_88);
  }
  *(long **)(param_1 + 0x10) = plVar1;
  FUN_007bfb14(auStack_80);
  FUN_007bfb14(auStack_c8);
  return;
}


// ===== 00ae0d70  FUN_00ae0d70 =====

long * FUN_00ae0d70(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar3 != plVar2) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 9;
      if (plVar3 == plVar2) {
        return (long *)0x0;
      }
    }
  }
  plVar1 = (long *)0x0;
  if (plVar3 != plVar2) {
    plVar1 = plVar3;
  }
  return plVar1;
}


// ===== 00ae0dac  FUN_00ae0dac =====

void FUN_00ae0dac(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar2 == plVar4) {
LAB_00ae0dfc:
    plVar3 = plVar2;
    if ((plVar2 != plVar4) && (plVar5 = plVar2 + 9, plVar5 != plVar4)) {
      do {
        if (*plVar5 != param_2) {
          *plVar2 = *plVar5;
          lVar6 = plVar5[2];
          lVar1 = plVar5[1];
          plVar2[3] = plVar5[3];
          plVar2[2] = lVar6;
          plVar2[1] = lVar1;
          if (plVar5 != plVar2) {
            FUN_00967758(plVar2 + 4,plVar5[4],plVar5[5],plVar5[5] - plVar5[4] >> 3);
          }
          lVar1 = plVar5[7];
          *(undefined8 *)((long)plVar2 + 0x3f) = *(undefined8 *)((long)plVar5 + 0x3f);
          plVar2[7] = lVar1;
          plVar2 = plVar2 + 9;
        }
        plVar5 = plVar5 + 9;
      } while (plVar5 != plVar4);
      plVar4 = *(long **)(param_1 + 0x10);
      plVar3 = plVar2;
    }
  }
  else {
    do {
      if (*plVar2 == param_2) goto LAB_00ae0dfc;
      plVar2 = plVar2 + 9;
      plVar3 = plVar4;
    } while (plVar2 != plVar4);
  }
  FUN_00ae14d4((long *)(param_1 + 8),plVar3,plVar4);
  return;
}


// ===== 00ae0e9c  FUN_00ae0e9c =====

void FUN_00ae0e9c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d42190;
  param_1[1] = 0;
  return;
}


// ===== 00ae0eb4  FUN_00ae0eb4 =====

void FUN_00ae0eb4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d42190;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = (void *)param_1[2];
  if (pvVar3 != (void *)param_1[2]) {
    do {
      pvVar1 = (void *)((long)pvVar2 + -0x48);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007bfb14((long)pvVar2 + -0x40);
      pvVar2 = pvVar1;
    } while (pvVar1 != pvVar3);
    pvVar1 = (void *)param_1[1];
  }
  param_1[2] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00ae0f58  FUN_00ae0f58 =====

void FUN_00ae0f58(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d42190;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = (void *)param_1[2];
    if (pvVar3 != (void *)param_1[2]) {
      do {
        pvVar1 = (void *)((long)pvVar2 + -0x48);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007bfb14((long)pvVar2 + -0x40);
        pvVar2 = pvVar1;
      } while (pvVar1 != pvVar3);
      pvVar1 = (void *)param_1[1];
    }
    param_1[2] = pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00ae0ff4  FUN_00ae0ff4 =====

void FUN_00ae0ff4(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_c8 [64];
  long local_88;
  undefined1 auStack_80 [64];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar3 == plVar1) {
LAB_00ae1048:
    if ((plVar3 != plVar1) && (plVar3 != (long *)0x0)) {
      lVar4 = param_3[1];
      lVar2 = *param_3;
      plVar3[3] = param_3[2];
      plVar3[2] = lVar4;
      plVar3[1] = lVar2;
      if (plVar3 + 1 != param_3) {
        FUN_00967758(plVar3 + 4,param_3[3],param_3[4],param_3[4] - param_3[3] >> 3);
      }
      lVar2 = param_3[6];
      *(undefined8 *)((long)plVar3 + 0x3f) = *(undefined8 *)((long)param_3 + 0x37);
      plVar3[7] = lVar2;
      return;
    }
  }
  else {
    do {
      if (*plVar3 == param_2) goto LAB_00ae1048;
      plVar3 = plVar3 + 9;
    } while (plVar3 != plVar1);
  }
  FUN_007bfa80(auStack_c8,param_3);
  local_88 = param_2;
  FUN_007bfa80(auStack_80,auStack_c8);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 < *(long **)(param_1 + 0x18)) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar1 = plVar3 + 9;
    *plVar3 = local_88;
    FUN_007bfa80(plVar3 + 1,auStack_80);
  }
  else {
    plVar1 = (long *)FUN_00ae15f8((long *)(param_1 + 8),&local_88);
  }
  *(long **)(param_1 + 0x10) = plVar1;
  FUN_007bfb14(auStack_80);
  FUN_007bfb14(auStack_c8);
  return;
}


// ===== 00ae1138  FUN_00ae1138 =====

void FUN_00ae1138(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar2 == plVar4) {
LAB_00ae1188:
    plVar3 = plVar2;
    if ((plVar2 != plVar4) && (plVar5 = plVar2 + 9, plVar5 != plVar4)) {
      do {
        if (*plVar5 != param_2) {
          *plVar2 = *plVar5;
          lVar6 = plVar5[2];
          lVar1 = plVar5[1];
          plVar2[3] = plVar5[3];
          plVar2[2] = lVar6;
          plVar2[1] = lVar1;
          if (plVar5 != plVar2) {
            FUN_00967758(plVar2 + 4,plVar5[4],plVar5[5],plVar5[5] - plVar5[4] >> 3);
          }
          lVar1 = plVar5[7];
          *(undefined8 *)((long)plVar2 + 0x3f) = *(undefined8 *)((long)plVar5 + 0x3f);
          plVar2[7] = lVar1;
          plVar2 = plVar2 + 9;
        }
        plVar5 = plVar5 + 9;
      } while (plVar5 != plVar4);
      plVar4 = *(long **)(param_1 + 0x10);
      plVar3 = plVar2;
    }
  }
  else {
    do {
      if (*plVar2 == param_2) goto LAB_00ae1188;
      plVar2 = plVar2 + 9;
      plVar3 = plVar4;
    } while (plVar2 != plVar4);
  }
  FUN_00ae1898((long *)(param_1 + 8),plVar3,plVar4);
  return;
}


// ===== 00ae1228  FUN_00ae1228 =====

long FUN_00ae1228(long param_1)

{
  return param_1 + 8;
}


// ===== 00ae1234  FUN_00ae1234 =====

long FUN_00ae1234(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar2 = (lVar5 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar2 < 0x38e38e38e38e38f) {
    local_50 = (void *)0x0;
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
      uVar4 = uVar2;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar4 = 0x38e38e38e38e38e;
    }
    if (uVar4 != 0) {
      if (0x38e38e38e38e38e < uVar4) goto LAB_00ae13c0;
      local_50 = operator_new(uVar4 * 0x48);
    }
    local_38 = (void *)((long)local_50 + uVar4 * 0x48);
    local_48 = (undefined8 *)((long)local_50 + lVar5);
    if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar6 = local_48 + 9;
    *local_48 = *param_2;
    FUN_007bfa80(local_48 + 1,param_2 + 1);
    local_40 = puVar6;
    FUN_00ae13c4(param_1,&local_50);
    puVar1 = local_48;
    lVar5 = param_1[1];
    puVar6 = local_40;
    while( true ) {
      if (puVar1 == puVar6) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar6;
          operator_delete(local_50);
        }
        return lVar5;
      }
      if (puVar6 + -9 == (undefined8 *)0x0) break;
      FUN_007bfb14(puVar6 + -8);
      puVar6 = puVar6 + -9;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ae14bc();
LAB_00ae13c0:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ae13c4  FUN_00ae13c4 =====

void FUN_00ae13c4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar5 = puVar1;
  if (puVar2 != puVar8) {
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = puVar3 + 9;
      *puVar5 = *puVar3;
      FUN_007bfa80(puVar5 + 1,puVar3 + 1);
      puVar3 = puVar9;
      puVar5 = puVar5 + 9;
    } while (puVar9 != puVar2);
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007bfb14(puVar8 + 1);
      puVar8 = puVar8 + 9;
    } while (puVar8 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar4 = *param_1;
  lVar7 = param_1[2];
  param_1[1] = lVar4;
  lVar10 = param_2[1];
  lVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar10;
  param_1[2] = lVar6;
  param_2[2] = lVar4;
  param_2[3] = lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar4;
  return;
}


// ===== 00ae14bc  FUN_00ae14bc =====

void FUN_00ae14bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ae14d4  FUN_00ae14d4 =====

long * FUN_00ae14d4(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  plVar4 = *(long **)(param_1 + 8);
  plVar5 = param_2;
  if (param_3 == plVar4) {
    if (param_2 == plVar4) goto LAB_00ae15a0;
  }
  else {
    param_3 = param_3 + 5;
    do {
      *plVar5 = param_3[-5];
      lVar6 = param_3[-3];
      lVar3 = param_3[-4];
      plVar5[3] = param_3[-2];
      plVar5[2] = lVar6;
      plVar5[1] = lVar3;
      if (plVar5 != param_3 + -5) {
        FUN_00967758(plVar5 + 4,param_3[-1],*param_3,*param_3 - param_3[-1] >> 3);
      }
      puVar1 = (undefined8 *)((long)param_3 + 0x17);
      lVar3 = param_3[2];
      plVar2 = param_3 + 4;
      param_3 = param_3 + 9;
      *(undefined8 *)((long)plVar5 + 0x3f) = *puVar1;
      plVar5[7] = lVar3;
      plVar5 = plVar5 + 9;
    } while (plVar2 != plVar4);
    plVar4 = *(long **)(param_1 + 8);
    if (plVar5 == *(long **)(param_1 + 8)) goto LAB_00ae15a0;
  }
  do {
    plVar2 = plVar4 + -9;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_007bfb14(plVar4 + -8);
    plVar4 = plVar2;
  } while (plVar2 != plVar5);
LAB_00ae15a0:
  *(long **)(param_1 + 8) = plVar5;
  return param_2;
}


// ===== 00ae15f8  FUN_00ae15f8 =====

long FUN_00ae15f8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar2 = (lVar5 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar2 < 0x38e38e38e38e38f) {
    local_50 = (void *)0x0;
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
      uVar4 = uVar2;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar4 = 0x38e38e38e38e38e;
    }
    if (uVar4 != 0) {
      if (0x38e38e38e38e38e < uVar4) goto LAB_00ae1784;
      local_50 = operator_new(uVar4 * 0x48);
    }
    local_38 = (void *)((long)local_50 + uVar4 * 0x48);
    local_48 = (undefined8 *)((long)local_50 + lVar5);
    if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar6 = local_48 + 9;
    *local_48 = *param_2;
    FUN_007bfa80(local_48 + 1,param_2 + 1);
    local_40 = puVar6;
    FUN_00ae1788(param_1,&local_50);
    puVar1 = local_48;
    lVar5 = param_1[1];
    puVar6 = local_40;
    while( true ) {
      if (puVar1 == puVar6) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar6;
          operator_delete(local_50);
        }
        return lVar5;
      }
      if (puVar6 + -9 == (undefined8 *)0x0) break;
      FUN_007bfb14(puVar6 + -8);
      puVar6 = puVar6 + -9;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ae1880();
LAB_00ae1784:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ae1788  FUN_00ae1788 =====

void FUN_00ae1788(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar5 = puVar1;
  if (puVar2 != puVar8) {
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = puVar3 + 9;
      *puVar5 = *puVar3;
      FUN_007bfa80(puVar5 + 1,puVar3 + 1);
      puVar3 = puVar9;
      puVar5 = puVar5 + 9;
    } while (puVar9 != puVar2);
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007bfb14(puVar8 + 1);
      puVar8 = puVar8 + 9;
    } while (puVar8 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar4 = *param_1;
  lVar7 = param_1[2];
  param_1[1] = lVar4;
  lVar10 = param_2[1];
  lVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar10;
  param_1[2] = lVar6;
  param_2[2] = lVar4;
  param_2[3] = lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar4;
  return;
}


// ===== 00ae1880  FUN_00ae1880 =====

void FUN_00ae1880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ae1898  FUN_00ae1898 =====

long * FUN_00ae1898(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  plVar4 = *(long **)(param_1 + 8);
  plVar5 = param_2;
  if (param_3 == plVar4) {
    if (param_2 == plVar4) goto LAB_00ae1964;
  }
  else {
    param_3 = param_3 + 5;
    do {
      *plVar5 = param_3[-5];
      lVar6 = param_3[-3];
      lVar3 = param_3[-4];
      plVar5[3] = param_3[-2];
      plVar5[2] = lVar6;
      plVar5[1] = lVar3;
      if (plVar5 != param_3 + -5) {
        FUN_00967758(plVar5 + 4,param_3[-1],*param_3,*param_3 - param_3[-1] >> 3);
      }
      puVar1 = (undefined8 *)((long)param_3 + 0x17);
      lVar3 = param_3[2];
      plVar2 = param_3 + 4;
      param_3 = param_3 + 9;
      *(undefined8 *)((long)plVar5 + 0x3f) = *puVar1;
      plVar5[7] = lVar3;
      plVar5 = plVar5 + 9;
    } while (plVar2 != plVar4);
    plVar4 = *(long **)(param_1 + 8);
    if (plVar5 == *(long **)(param_1 + 8)) goto LAB_00ae1964;
  }
  do {
    plVar2 = plVar4 + -9;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_007bfb14(plVar4 + -8);
    plVar4 = plVar2;
  } while (plVar2 != plVar5);
LAB_00ae1964:
  *(long **)(param_1 + 8) = plVar5;
  return param_2;
}


// ===== 00ae19bc  Java_org_webrtc_H264Utils_nativeIsSameH264Profile =====

uint Java_org_webrtc_H264Utils_nativeIsSameH264Profile
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined1 **local_18;
  
  local_70 = param_4;
  uStack_68 = param_3;
  FUN_00adc6fc(auStack_48,param_1,&uStack_68);
  FUN_00adc6fc(&local_60,param_1,&local_70);
  uVar1 = FUN_007b6824(auStack_48,&local_60);
  local_18 = &local_60;
  FUN_0060b2cc(&local_18,local_58);
  local_60 = auStack_48;
  FUN_0060b2cc(&local_60,local_40);
  return uVar1 & 1;
}


// ===== 00ae1a4c  Java_org_webrtc_JavaI420Buffer_nativeCropAndScaleI420 =====

void Java_org_webrtc_JavaI420Buffer_nativeCropAndScaleI420
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
               int param_6,undefined8 param_7,int param_8,int param_9,int param_10,
               undefined4 param_11,undefined4 param_12,undefined8 param_13,undefined8 param_14,
               undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  lVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  lVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_7);
  (**(code **)(*param_1 + 0x730))(param_1,param_13);
  (**(code **)(*param_1 + 0x730))(param_1,param_15);
  (**(code **)(*param_1 + 0x730))(param_1,param_17);
  FUN_007c5514(lVar1 + (param_9 + param_10 * param_4),param_4,
               lVar2 + (param_9 / 2 + (param_10 / 2) * param_6),param_6,
               lVar3 + (param_9 / 2 + (param_10 / 2) * param_8),param_8,param_11,param_12);
  return;
}


// ===== 00ae1bec  Java_org_webrtc_NV12Buffer_nativeCropAndScale =====

void Java_org_webrtc_NV12Buffer_nativeCropAndScale
               (long *param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10,
               undefined8 param_11,int param_12,int param_13,undefined8 param_14,undefined4 param_15
               ,undefined8 param_16,undefined4 param_17,undefined8 param_18,undefined4 param_19)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  
  iVar1 = (param_5 + 1) / 2;
  iVar2 = (param_6 + 1) / 2;
  iVar3 = iVar1 * iVar2 * 2;
  lVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_9);
  uVar5 = (**(code **)(*param_1 + 0x730))(param_1,param_14);
  uVar6 = (**(code **)(*param_1 + 0x730))(param_1,param_16);
  uVar7 = (**(code **)(*param_1 + 0x730))(param_1,param_18);
  if (iVar3 == 0) {
    puVar8 = (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x0;
  }
  else {
    uVar14 = (ulong)iVar3;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    puVar8 = (undefined1 *)operator_new(uVar14);
    uVar9 = uVar14 - 1;
    puVar15 = puVar8 + uVar14;
    if ((ulong)-(long)puVar8 < uVar9) {
      uVar9 = -(long)puVar8;
    }
    uVar9 = uVar9 + 1;
    puVar10 = puVar8;
    if (0x20 < uVar9) {
      uVar14 = 0x20;
      if ((uVar9 & 0x1f) != 0) {
        uVar14 = uVar9 & 0x1f;
      }
      puVar13 = (undefined8 *)(puVar8 + 0x10);
      lVar12 = uVar9 - uVar14;
      puVar10 = puVar8 + lVar12;
      do {
        lVar12 = lVar12 + -0x20;
        puVar13[-1] = 0;
        puVar13[-2] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13 = puVar13 + 4;
      } while (lVar12 != 0);
    }
    do {
      if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar11 = puVar10 + 1;
      *puVar10 = 0;
      puVar10 = puVar11;
    } while (puVar11 != puVar15);
  }
  FUN_007c07b0(lVar4 + param_13 * param_12 +
               (long)(int)((param_3 - (param_3 >> 0x1f) & 0xfffffffeU) + param_12 * (param_4 / 2)),
               param_12,puVar8,iVar1,puVar8 + iVar2 * iVar1,iVar1,iVar1,iVar2);
  FUN_007c5514(lVar4 + (param_3 + param_12 * param_4),param_12,puVar8,iVar1,puVar8 + iVar2 * iVar1,
               iVar1,param_5,param_6,uVar5,param_15,uVar6,param_17,uVar7,param_19,param_7,param_8,3)
  ;
  if (puVar8 == (undefined1 *)0x0) {
    return;
  }
  if (puVar15 + -1 < puVar15 + -(long)puVar8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  operator_delete(puVar8);
  return;
}


// ===== 00ae1ea0  Java_org_webrtc_NV21Buffer_nativeCropAndScale =====

void Java_org_webrtc_NV21Buffer_nativeCropAndScale
               (long *param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
               int param_10,int param_11,undefined8 param_12,undefined4 param_13,undefined8 param_14
               ,undefined4 param_15,undefined8 param_16,undefined4 param_17)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 local_6c [12];
  
  local_6c[0] = 0xaa;
  lVar1 = (**(code **)(*param_1 + 0x5c0))(param_1,param_9,local_6c);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_12);
  uVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_14);
  uVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_16);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae2048(&local_90);
  FUN_00ae20b0(&local_90,lVar1 + (param_3 + param_10 * param_4),param_10,
               lVar1 + param_11 * param_10 +
               (long)(int)((param_3 - (param_3 >> 0x1f) & 0xfffffffeU) + param_10 * (param_4 / 2)),
               param_10,param_5,param_6,uVar2,param_13,uVar4,param_17,uVar3,param_15,param_7,param_8
              );
  (**(code **)(*param_1 + 0x600))(param_1,param_9,lVar1,2);
  FUN_00ae2058(&local_90);
  return;
}


// ===== 00ae2048  FUN_00ae2048 =====

void FUN_00ae2048(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00ae2058  FUN_00ae2058 =====

void FUN_00ae2058(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[1] - (long)pvVar1) <= param_1[1] - 1) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ae20b0  FUN_00ae20b0 =====

void FUN_00ae20b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined8 param_8,undefined4 param_9,
                 undefined8 param_10,undefined4 param_11,undefined8 param_12,undefined4 param_13,
                 int param_14,int param_15)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulong __n;
  
  if ((param_6 == param_14) && (param_7 == param_15)) {
    pvVar5 = (void *)*param_1;
    if ((ulong)(param_1[1] - (long)pvVar5) <= param_1[1] - 1) {
      param_1[1] = pvVar5;
      if ((void *)param_1[2] != pvVar5) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      FUN_007bfef4(param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  iVar2 = (param_6 + 1) / 2;
  iVar3 = (param_7 + 1) / 2;
  iVar4 = iVar3 * iVar2;
  FUN_004efbd8(param_1,(long)(iVar4 * 2));
  pvVar6 = (void *)*param_1;
  __n = (long)param_1[1] - (long)pvVar6;
  pvVar5 = pvVar6;
  if (__n < (ulong)(param_1[2] - (long)pvVar6)) {
    if ((void *)param_1[1] == pvVar6) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = operator_new(__n);
    }
    memcpy(pvVar5,pvVar6,__n);
    pvVar6 = (void *)*param_1;
    *param_1 = pvVar5;
    param_1[1] = (long)pvVar5 + __n;
    param_1[2] = (long)pvVar5 + __n;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      pvVar5 = (void *)*param_1;
    }
  }
  lVar1 = (long)pvVar5 + (long)iVar4;
  FUN_007c07b0(param_4,param_5,pvVar5,iVar2,lVar1,iVar2,iVar2,iVar3);
  FUN_007c5514(param_2,param_3,pvVar5,iVar2,lVar1,iVar2,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,3);
  return;
}


// ===== 00ae2348  Java_org_webrtc_TimestampAligner_nativeCreateTimestampAligner =====

void Java_org_webrtc_TimestampAligner_nativeCreateTimestampAligner(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_0099c6f4();
  FUN_00adde38(pvVar1);
  return;
}


// ===== 00ae237c  Java_org_webrtc_TimestampAligner_nativeReleaseTimestampAligner =====

void Java_org_webrtc_TimestampAligner_nativeReleaseTimestampAligner
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
    FUN_0099c710(param_3);
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 00ae23bc  Java_org_webrtc_TimestampAligner_nativeRtcTimeNanos =====

void Java_org_webrtc_TimestampAligner_nativeRtcTimeNanos(void)

{
  FUN_0062587c();
  return;
}


// ===== 00ae23c4  Java_org_webrtc_TimestampAligner_nativeTranslateTimestamp =====

long Java_org_webrtc_TimestampAligner_nativeTranslateTimestamp
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_006258f0();
  lVar2 = FUN_0099c718(param_3,param_4 / 1000,uVar1);
  return lVar2 * 1000;
}


// ===== 00ae2420  FUN_00ae2420 =====

void FUN_00ae2420(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88 [2];
  char cStack_71;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 **local_28;
  
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/VideoCodecInfo",&DAT_00db9e30);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = auStack_b0;
  FUN_00ad8450(&local_70,param_2,uVar1,"getName","()Ljava/lang/String;",&DAT_00db9e28);
  local_98 = FUN_004a41b4(param_2,*param_3,local_50);
  local_90 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00adc4e0(local_88,param_2,&local_98);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/VideoCodecInfo",&DAT_00db9e30);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = auStack_b0;
  FUN_00ad8450(&local_70,param_2,uVar1,"getParams","()Ljava/util/Map;",&DAT_00db9e38);
  local_a8 = FUN_004a41b4(param_2,*param_3,local_50);
  local_a0 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00adc6fc(&local_70,param_2,&local_a8);
  FUN_007b68d8(param_1,local_88,&local_70);
  local_28 = &local_70;
  FUN_0060b2cc(&local_28,puStack_68);
  FUN_00ada608(&local_a8,local_a0);
  if (cStack_71 < '\0') {
    operator_delete(local_88[0]);
  }
  FUN_00ada608(&local_98,local_90);
  return;
}


// ===== 00ae25b4  FUN_00ae25b4 =====

void FUN_00ae25b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae26a8(&local_70,param_2,param_3 + 0x18);
  FUN_00adcf00(&local_80,param_2,param_3);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/VideoCodecInfo",&DAT_00db9e30);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,param_2,uVar1,"<init>","(Ljava/lang/String;Ljava/util/Map;)V",&DAT_00db9e40
              );
  uVar1 = FUN_004b8418(param_2,uVar1,local_40,local_80,local_70);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_80,local_78);
  FUN_00ada608(&local_70,puStack_68);
  return;
}


// ===== 00ae26a8  FUN_00ae26a8 =====

void FUN_00ae26a8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addcb4(&local_60,param_2);
  plVar3 = (long *)*param_3;
  while (plVar3 != param_3 + 1) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adcf00(&local_90,param_2,plVar3 + 4);
    FUN_00adcf00(&local_a0,param_2,plVar3 + 7);
    local_80 = local_90;
    puStack_70 = local_a0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)local_88;
    local_68 = (undefined1 *)uStack_98;
    FUN_00ada608(&local_a0,uStack_98);
    FUN_00ada608(&local_90,local_88);
    FUN_00addd74(&local_60,&local_80,&puStack_70);
    FUN_00ada608(&puStack_70,local_68);
    FUN_00ada608(&local_80,puStack_78);
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
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addd64(&local_60);
  return;
}


// ===== 00ae27e0  Java_org_webrtc_VideoDecoderFallback_nativeCreate =====

void Java_org_webrtc_VideoDecoderFallback_nativeCreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_18;
  
  local_38 = param_5;
  local_18 = param_4;
  uVar1 = FUN_00ae46a4(param_1,&local_18);
  uVar2 = FUN_00ae46a4(param_1,&local_38,param_3);
  FUN_00ae2850(param_3,uVar1,uVar2);
  FUN_00adde38();
  return;
}


// ===== 00ae2850  FUN_00ae2850 =====

/* WARNING: Removing unreachable block (ram,0x00ae2a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00ae2850(long param_1,long *param_2,long *param_3)

{
  int ****ppppiVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_c0;
  ulong uStack_b8;
  byte bStack_a9;
  int ***local_a0;
  ulong local_98;
  byte bStack_89;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar4 = (undefined8 *)operator_new(0x70);
  *puVar4 = &PTR_FUN_00d421c8;
  plVar5 = *(long **)(param_1 + 8);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = param_3;
  (**(code **)(*plVar5 + 0x10))(&local_a0,plVar5,"WebRTC-Video-ForcedSwDecoderFallback",0x24);
  bVar3 = false;
  if (-1 < (char)bStack_89) {
    local_98 = (ulong)bStack_89;
  }
  if (6 < local_98) {
    ppppiVar1 = (int ****)local_a0;
    if (-1 < (char)bStack_89) {
      ppppiVar1 = &local_a0;
    }
    bVar3 = *(int *)ppppiVar1 == 0x62616e45 && *(int *)((long)ppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_89 < '\0') {
    operator_delete(local_a0);
  }
  *(bool *)(puVar4 + 3) = bVar3;
  uVar8 = _UNK_001f1d08;
  uVar7 = _DAT_001f1d00;
  *(undefined1 *)((long)puVar4 + 0x1c) = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  *(undefined8 *)((long)puVar4 + 0x2c) = uVar8;
  *(undefined8 *)((long)puVar4 + 0x24) = uVar7;
  puVar4[7] = param_2;
  (**(code **)(*param_2 + 0x38))(&local_a0,param_2);
  puVar6 = (undefined8 *)FUN_00547cac(&local_a0," (fallback from: ",0x11);
  uStack_78 = puVar6[1];
  local_80 = (void *)*puVar6;
  local_70 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  (**(code **)(*param_3 + 0x38))(&local_c0,param_3);
  ppuVar2 = (undefined1 **)local_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    ppuVar2 = &local_c0;
  }
  puVar6 = (undefined8 *)FUN_00547cac(&local_80,ppuVar2,uStack_b8);
  uStack_58 = puVar6[1];
  local_60 = *puVar6;
  local_50 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = (undefined8 *)FUN_00547cac(&local_60,&DAT_001ca519,1);
  uVar8 = *puVar6;
  uVar7 = puVar6[2];
  puVar4[9] = puVar6[1];
  puVar4[8] = uVar8;
  puVar4[10] = uVar7;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_a9 < '\0') {
    operator_delete(local_c0);
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  if ((char)bStack_89 < '\0') {
    operator_delete(local_a0);
  }
  puVar4[0xb] = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  puVar4[0xd] = 0;
  return puVar4;
}


// ===== 00ae2aa0  FUN_00ae2aa0 =====

void FUN_00ae2aa0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x57) < '\0') {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ae2b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00ae2b18  FUN_00ae2b18 =====

void FUN_00ae2b18(void *param_1)

{
  long *plVar1;
  
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete(*(void **)((long)param_1 + 0x40));
  }
  plVar1 = *(long **)((long)param_1 + 0x38);
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)((long)param_1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00ae2b8c  FUN_00ae2b8c =====

undefined8 FUN_00ae2b8c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x2c) = param_2[2];
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/video_codecs/video_decoder_software_fallback_wrapper.cc"
                   ,0x351,"Forced software decoder fallback enabled.");
    }
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),param_1 + 0x1c);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      if (*(long *)(param_1 + 0x58) != 0) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      }
      return 1;
    }
  }
  uVar2 = FUN_00ae3038(param_1);
  return uVar2;
}


// ===== 00ae2c48  FUN_00ae2c48 =====

int FUN_00ae2c48(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00db9e80 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00db9e80), iVar1 != 0)) {
    DAT_00db9e78 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00db9e80);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00db9e78 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00db9e78,"VideoDecoderSoftwareFallbackWrapper::Decode",0,0,0,0,0,0);
    local_50 = DAT_00db9e78;
    pcStack_48 = "VideoDecoderSoftwareFallbackWrapper::Decode";
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = -7;
    goto joined_r0x00ae2d58;
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
LAB_00ae2d40:
      iVar1 = -1;
      goto joined_r0x00ae2d58;
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                      (*(long **)(param_1 + 0x10),param_2,param_3);
    if (iVar1 != -0xd) {
      if (iVar1 != -1) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        goto joined_r0x00ae2d58;
      }
      uVar2 = *(ulong *)(param_1 + 0x68);
      if (*(int *)(param_2 + 0x18) == 3) {
        uVar2 = uVar2 + 1;
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      if (uVar2 < 4) goto LAB_00ae2d40;
    }
    uVar2 = FUN_00ae3038(param_1);
    if ((uVar2 & 1) == 0) goto joined_r0x00ae2d58;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                    (*(long **)(param_1 + 0x38),param_2,param_3);
joined_r0x00ae2d58:
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return iVar1;
}


// ===== 00ae2e2c  FUN_00ae2e2c =====

void FUN_00ae2e2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  lVar1 = 0x38;
  if (*(int *)(param_1 + 8) != 2) {
    lVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00ae2e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + lVar1) + 0x28))(*(long **)(param_1 + lVar1));
  return;
}


// ===== 00ae2e5c  FUN_00ae2e5c =====

ulong FUN_00ae2e5c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../api/video_codecs/video_decoder_software_fallback_wrapper.cc",0x789,
                     "Releasing software fallback decoder.");
      }
      plVar3 = *(long **)(param_1 + 0x38);
    }
    else {
      if (uVar1 != 1) {
        uVar2 = 0xffffffff;
        goto LAB_00ae2ed0;
      }
      plVar3 = *(long **)(param_1 + 0x10);
    }
    uVar2 = (**(code **)(*plVar3 + 0x30))();
  }
LAB_00ae2ed0:
  *(undefined4 *)(param_1 + 8) = 0;
  return uVar2;
}


// ===== 00ae2ee4  FUN_00ae2ee4 =====

void FUN_00ae2ee4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = 0x38;
  if (*(int *)(param_2 + 8) != 2) {
    lVar2 = 0x10;
  }
  plVar6 = *(long **)(param_2 + lVar2);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar6 + 0x38))(param_1);
  if ((*(int *)(param_2 + 8) == 2) && (puVar1 = (undefined8 *)(param_2 + 0x40), param_1 != puVar1))
  {
    bVar4 = *(byte *)(param_2 + 0x57);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar3 = *(ulong *)(param_2 + 0x48);
      puVar5 = *(undefined8 **)(param_2 + 0x40);
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
        puVar5 = puVar1;
      }
      FUN_00547f08(param_1,puVar5,uVar3);
      return;
    }
    if ((char)bVar4 < '\0') {
      FUN_00547fc0(param_1,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
      return;
    }
    uVar8 = *puVar1;
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    param_1[1] = *(undefined8 *)(param_2 + 0x48);
    *param_1 = uVar8;
    param_1[2] = uVar7;
  }
  return;
}


// ===== 00ae2fb8  FUN_00ae2fb8 =====

undefined8 * FUN_00ae2fb8(long param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 8) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00ae2fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    return puVar1;
  }
  if (-1 < *(char *)(param_1 + 0x57)) {
    return (undefined8 *)(param_1 + 0x40);
  }
  return *(undefined8 **)(param_1 + 0x40);
}


// ===== 00ae2ff0  FUN_00ae2ff0 =====

void FUN_00ae2ff0(long param_1,undefined8 param_2)

{
  (**(code **)(**(long **)(param_1 + 0x38) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00ae3034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 00ae3038  FUN_00ae3038 =====

uint FUN_00ae3038(long param_1)

{
  undefined8 ***pppuVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 **local_68;
  ulong uStack_60;
  byte bStack_51;
  undefined8 **local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 uStack_11;
  
  uVar5 = FUN_004022fc();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../api/video_codecs/video_decoder_software_fallback_wrapper.cc",
                 0x42a,"Decoder falling back to software decoding.");
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                    (*(long **)(param_1 + 0x38),param_1 + 0x1c);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/video_codecs/video_decoder_software_fallback_wrapper.cc"
                   ,0x43b,"Failed to initialize software-decoder fallback.");
    }
    goto LAB_00ae352c;
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_50,"WebRTC.Video.HardwareDecodedFramesBetweenSoftwareFallbacks.");
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 < 3) {
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        lVar6 = DAT_00db9e50;
        if (DAT_00db9e50 == 0) {
          pppuVar1 = (undefined8 ***)local_50;
          if (-1 < (long)local_40._7_1_) {
            pppuVar1 = &local_50;
          }
          puVar2 = puStack_48;
          if (-1 < (long)local_40) {
            puVar2 = (undefined1 *)(long)local_40._7_1_;
          }
          FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,&DAT_0019b94f,3);
          pppuVar1 = (undefined8 ***)local_68;
          if (-1 < (char)bStack_51) {
            uStack_60 = (ulong)bStack_51;
            pppuVar1 = &local_68;
          }
          lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
          if ((char)bStack_51 < '\0') {
            operator_delete(local_68);
          }
          puVar7 = &DAT_00db9e50;
          goto LAB_00ae34bc;
        }
      }
      else {
        if (iVar3 != 2) goto LAB_00ae34d8;
        lVar6 = DAT_00db9e58;
        if (DAT_00db9e58 == 0) {
          pppuVar1 = (undefined8 ***)local_50;
          if (-1 < (long)local_40._7_1_) {
            pppuVar1 = &local_50;
          }
          puVar2 = puStack_48;
          if (-1 < (long)local_40) {
            puVar2 = (undefined1 *)(long)local_40._7_1_;
          }
          FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,&DAT_001a9ffc,3);
          pppuVar1 = (undefined8 ***)local_68;
          if (-1 < (char)bStack_51) {
            uStack_60 = (ulong)bStack_51;
            pppuVar1 = &local_68;
          }
          lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
          if ((char)bStack_51 < '\0') {
            operator_delete(local_68);
          }
          puVar7 = &DAT_00db9e58;
          goto LAB_00ae34bc;
        }
      }
      goto LAB_00ae34cc;
    }
    lVar6 = DAT_00db9e48;
    if (DAT_00db9e48 != 0) goto LAB_00ae34cc;
    pppuVar1 = (undefined8 ***)local_50;
    if (-1 < (long)local_40._7_1_) {
      pppuVar1 = &local_50;
    }
    puVar2 = puStack_48;
    if (-1 < (long)local_40) {
      puVar2 = (undefined1 *)(long)local_40._7_1_;
    }
    FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,"Generic",7);
    pppuVar1 = (undefined8 ***)local_68;
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
      pppuVar1 = &local_68;
    }
    lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
    if ((char)bStack_51 < '\0') {
      operator_delete(local_68);
    }
    puVar7 = &DAT_00db9e48;
LAB_00ae34bc:
    FUN_00d0f5e0(0,lVar6,puVar7);
    if (lVar6 != 0) goto LAB_00ae34cc;
  }
  else {
    if (iVar3 == 3) {
      lVar6 = DAT_00db9e60;
      if (DAT_00db9e60 == 0) {
        pppuVar1 = (undefined8 ***)local_50;
        if (-1 < (long)local_40._7_1_) {
          pppuVar1 = &local_50;
        }
        puVar2 = puStack_48;
        if (-1 < (long)local_40) {
          puVar2 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,&DAT_001bb2ae,3);
        pppuVar1 = (undefined8 ***)local_68;
        if (-1 < (char)bStack_51) {
          uStack_60 = (ulong)bStack_51;
          pppuVar1 = &local_68;
        }
        lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
        if ((char)bStack_51 < '\0') {
          operator_delete(local_68);
        }
        puVar7 = &DAT_00db9e60;
        goto LAB_00ae34bc;
      }
    }
    else if (iVar3 == 4) {
      lVar6 = DAT_00db9e68;
      if (DAT_00db9e68 == 0) {
        pppuVar1 = (undefined8 ***)local_50;
        if (-1 < (long)local_40._7_1_) {
          pppuVar1 = &local_50;
        }
        puVar2 = puStack_48;
        if (-1 < (long)local_40) {
          puVar2 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,&DAT_001c4e95,4);
        pppuVar1 = (undefined8 ***)local_68;
        if (-1 < (char)bStack_51) {
          uStack_60 = (ulong)bStack_51;
          pppuVar1 = &local_68;
        }
        lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
        if ((char)bStack_51 < '\0') {
          operator_delete(local_68);
        }
        puVar7 = &DAT_00db9e68;
        goto LAB_00ae34bc;
      }
    }
    else {
      if (iVar3 != 5) goto LAB_00ae34d8;
      lVar6 = DAT_00db9e70;
      if (DAT_00db9e70 == 0) {
        pppuVar1 = (undefined8 ***)local_50;
        if (-1 < (long)local_40._7_1_) {
          pppuVar1 = &local_50;
        }
        puVar2 = puStack_48;
        if (-1 < (long)local_40) {
          puVar2 = (undefined1 *)(long)local_40._7_1_;
        }
        FUN_005ff514(&local_68,&uStack_11,pppuVar1,puVar2,&DAT_001db567,4);
        pppuVar1 = (undefined8 ***)local_68;
        if (-1 < (char)bStack_51) {
          uStack_60 = (ulong)bStack_51;
          pppuVar1 = &local_68;
        }
        lVar6 = FUN_006660d0(pppuVar1,uStack_60,1,100000,0x32);
        if ((char)bStack_51 < '\0') {
          operator_delete(local_68);
        }
        puVar7 = &DAT_00db9e70;
        goto LAB_00ae34bc;
      }
    }
LAB_00ae34cc:
    FUN_00666568(lVar6,*(undefined4 *)(param_1 + 0x60));
  }
LAB_00ae34d8:
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  if (*(int *)(param_1 + 8) == 1) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  }
  *(undefined4 *)(param_1 + 8) = 2;
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  }
LAB_00ae352c:
  return uVar4 & 1;
}


// ===== 00ae3548  Java_org_webrtc_VideoDecoderWrapper_nativeOnDecodedFrame =====

void Java_org_webrtc_VideoDecoderWrapper_nativeOnDecodedFrame
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_6;
  uStack_20 = param_5;
  local_18 = param_4;
  FUN_00ae4480(param_3,param_1,&local_18,&uStack_20,&local_28);
  return;
}


// ===== 00ae358c  FUN_00ae358c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ae358c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  *param_1 = &PTR_FUN_00d42228;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoDecoder",&DAT_00db9e90);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,param_2,uVar3,"getImplementationName","()Ljava/lang/String;",&DAT_00db9e88)
  ;
  local_70 = FUN_004a41b4(param_2,*param_3,local_40);
  local_68 = param_2;
  FUN_00ad843c(&local_60);
  FUN_00adc4e0(param_1 + 2,param_2,&local_70);
  FUN_00ada608(&local_70,local_68);
  FUN_00660fac(param_1 + 6);
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = _UNK_001f1d08;
  uVar3 = _DAT_001f1d00;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = uVar1;
  param_1[9] = uVar3;
  FUN_00967980(param_1 + 0xc);
  FUN_0087f7a4(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x26) = 1;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_60);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x134),(pthread_mutexattr_t *)&local_60);
  iVar2 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_60);
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  return iVar2;
}


// ===== 00ae36d4  FUN_00ae36d4 =====

void FUN_00ae36d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42228;
  FUN_00ae3740(param_1 + 0x2c);
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x134));
  FUN_0087f7dc(param_1 + 0x19);
  FUN_009679ac(param_1 + 0xc);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00ae3740  FUN_00ae3740 =====

void FUN_00ae3740(undefined8 *param_1)

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
    plVar3 = puVar9 + (uVar7 >> 7);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x7f) * 0x20;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 7] + (param_1[5] + uVar7 & 0x7f) * 0x20) {
      if (lVar4 == 0) goto LAB_00ae38a8;
      lVar4 = lVar4 + 0x20;
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
    uVar1 = 0x40;
  }
  else {
    if (uVar7 != 2) goto LAB_00ae3820;
    uVar1 = 0x80;
  }
  param_1[4] = uVar1;
LAB_00ae3820:
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
LAB_00ae38a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ae38f8  FUN_00ae38f8 =====

void FUN_00ae38f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42228;
  FUN_00ae3740(param_1 + 0x2c);
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x134));
  FUN_0087f7dc(param_1 + 0x19);
  FUN_009679ac(param_1 + 0xc);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00ae3970  FUN_00ae3970 =====

void FUN_00ae3970(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ad9fc4();
  uVar3 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  FUN_00ae39b4(param_1,uVar1);
  return;
}


// ===== 00ae39b4  FUN_00ae39b4 =====

bool FUN_00ae39b4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoDecoder$Settings",&DAT_00db9ea0);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar5,"<init>","(III)V",&DAT_00db9e98);
  uVar5 = FUN_004b8418(param_2,uVar5,local_50,uVar3,uVar1,uVar2);
  local_80 = uVar5;
  local_78 = param_2;
  FUN_00ad843c(&local_70);
  uVar6 = FUN_00adde38(param_1);
  uVar7 = FUN_00adaed8(param_2,"org/webrtc/VideoDecoderWrapper",&DAT_00db9eb0);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8360(&local_70,param_2,uVar7,"createDecoderCallback",
               "(J)Lorg/webrtc/VideoDecoder$Callback;",&DAT_00db9ea8);
  uVar6 = FUN_004aecec(param_2,uVar7,local_50,uVar6);
  local_90 = uVar6;
  local_88 = param_2;
  FUN_00ad843c(&local_70);
  uVar7 = FUN_00adaed8(param_2,"org/webrtc/VideoDecoder",&DAT_00db9e90);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar7,"initDecode",
               "(Lorg/webrtc/VideoDecoder$Settings;Lorg/webrtc/VideoDecoder$Callback;)Lorg/webrtc/VideoCodecStatus;"
               ,&DAT_00db9eb8);
  local_a0 = FUN_004a41b4(param_2,*(undefined8 *)(param_1 + 8),local_50,uVar5,uVar6);
  local_98 = param_2;
  FUN_00ad843c(&local_70);
  iVar4 = FUN_00ae53a0(param_2,&local_a0);
  FUN_00ada608(&local_a0,local_98);
  uVar8 = FUN_00417e08();
  if ((uVar8 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/video_decoder_wrapper.cc",0x2e1,
                 "initDecode: ",iVar4);
  }
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  *(undefined4 *)(param_1 + 0x130) = 1;
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_80,local_78);
  return iVar4 == 0;
}


// ===== 00ae3c04  FUN_00ae3c04 =====

undefined4 FUN_00ae3c04(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort uVar12;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  ulong local_1f0;
  uint local_168;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    memcpy(auStack_200,&DAT_002532d0,0x180);
    FUN_007bc958(auStack_200,param_2);
    uVar11 = (ulong)(local_168 >> 1) / 0x2d;
    local_1f0 = uVar11;
    if (*(char *)(param_1 + 0x130) == '\x01') {
      uVar4 = FUN_00ae3e6c(param_1,auStack_200);
      uVar12 = (ushort)uVar4;
      uVar4 = (uVar4 & 0xffff) >> 8;
    }
    else {
      uVar4 = 0;
      uVar12 = 0;
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x134));
    lVar9 = *(long *)(param_1 + 0x168);
    lVar10 = *(long *)(param_1 + 0x170);
    lVar3 = 0;
    if (lVar10 != lVar9) {
      lVar3 = (lVar10 - lVar9) * 0x10 + -1;
    }
    if (lVar3 == *(long *)(param_1 + 0x188) + *(long *)(param_1 + 0x180)) {
      FUN_00ae4770(param_1 + 0x160);
      lVar9 = *(long *)(param_1 + 0x168);
      lVar10 = *(long *)(param_1 + 0x170);
    }
    if ((lVar9 == lVar10) ||
       (uVar1 = *(long *)(param_1 + 0x188) + *(long *)(param_1 + 0x180),
       plVar2 = (long *)(*(long *)(lVar9 + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20),
       plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(uint *)(plVar2 + 1) = local_168;
    *(undefined4 *)((long)plVar2 + 0xc) = 0xaaaaaaaa;
    plVar2[2] = local_1f8;
    *(ushort *)(plVar2 + 3) = uVar12 & 0xff | (ushort)(uVar4 << 8);
    *plVar2 = uVar11 * 1000000;
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 1;
    iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x134));
    uVar7 = FUN_00ad9fc4(iVar5);
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    local_210 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ae5440(&local_210,uVar7,auStack_200);
    local_220 = 0;
    local_218 = 0;
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    local_230 = &DAT_aaaaaaaaaaaaaaaa;
    uVar8 = FUN_00adaed8(uVar7,"org/webrtc/VideoDecoder",&DAT_00db9e90);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_230;
    FUN_00ad8450(&local_80,uVar7,uVar8,"decode",
                 "(Lorg/webrtc/EncodedImage;Lorg/webrtc/VideoDecoder$DecodeInfo;)Lorg/webrtc/VideoCodecStatus;"
                 ,&DAT_00db9ec0);
    local_230 = (undefined1 *)FUN_004a41b4(uVar7,*(undefined8 *)(param_1 + 8),local_60,local_210,0);
    puStack_228 = (undefined1 *)uVar7;
    FUN_00ad843c(&local_80);
    uVar6 = FUN_00ae3fe0(param_1,uVar7,&local_230,"decode");
    FUN_00ada608(&local_230,puStack_228);
    FUN_00ada608(&local_220,local_218);
    FUN_00ada608(&local_210,puStack_208);
    FUN_007bca94(auStack_200);
  }
  else {
    uVar6 = 0xfffffff3;
  }
  return uVar6;
}


// ===== 00ae3e6c  FUN_00ae3e6c =====

uint FUN_00ae3e6c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  
  local_28 = *(uint *)(param_2 + 0x24);
  if (local_28 == 0xffffffff) {
    iVar2 = *(int *)(param_1 + 0x54);
    local_28 = 0;
    if (iVar2 < 4) {
      if (iVar2 == 1) {
        plVar3 = *(long **)(param_2 + 0x88);
        local_24 = 0xaaaaaaaa;
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        }
        uVar4 = FUN_008a3e00(plVar3,*(undefined8 *)(param_2 + 0x90),&local_24);
        local_28 = local_24 & 0xff;
        if ((uVar4 & 1) == 0) {
          local_28 = 0;
        }
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
          goto LAB_00ae3e90;
        }
      }
      else {
        uVar5 = 0;
        if (iVar2 != 2) goto LAB_00ae3e90;
        plVar3 = *(long **)(param_2 + 0x88);
        local_28 = 0xaaaaaaaa;
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        }
        uVar4 = FUN_00975fac(plVar3,*(undefined8 *)(param_2 + 0x90),&local_28);
        if ((uVar4 & 1) == 0) {
          local_28 = 0;
          uVar5 = 0;
          goto LAB_00ae3e90;
        }
      }
    }
    else {
      if (iVar2 == 4) {
        plVar3 = *(long **)(param_2 + 0x88);
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        }
        plVar1 = (long *)0x0;
        if (*(long *)(param_2 + 0x90) != 0) {
          plVar1 = plVar3;
        }
        FUN_00968204(param_1 + 0x60,plVar1);
        uVar4 = FUN_00968360(param_1 + 0x60);
      }
      else {
        uVar5 = 0;
        if (iVar2 != 5) goto LAB_00ae3e90;
        plVar3 = *(long **)(param_2 + 0x88);
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        }
        plVar1 = (long *)0x0;
        if (*(long *)(param_2 + 0x90) != 0) {
          plVar1 = plVar3;
        }
        FUN_008830e4(param_1 + 200,plVar1);
        uVar4 = FUN_00883240(param_1 + 200);
      }
      local_28 = 0;
      if ((uVar4 & 0xff00000000) == 0) {
        uVar5 = 0;
        goto LAB_00ae3e90;
      }
      local_28 = (uint)uVar4;
    }
  }
  uVar5 = 0x100;
LAB_00ae3e90:
  return uVar5 | local_28 & 0xff;
}


// ===== 00ae3fe0  FUN_00ae3fe0 =====

int FUN_00ae3fe0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_00ae53a0(param_2,param_3);
  if (-1 < iVar1) {
    return iVar1;
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_00215736,"../../sdk/android/src/jni/video_decoder_wrapper.cc",0x762,param_4,
                 &DAT_001c4dc3,iVar1);
  }
  if ((iVar1 == -7) || (iVar1 == -0xd)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return -0xd;
    }
    pcVar4 = "Java decoder requested software fallback.";
    uVar3 = 0x77a;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((iVar1 == 0) && (uVar2 = FUN_00ae39b4(param_1,param_2), (uVar2 & 1) != 0)) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/video_decoder_wrapper.cc",0x7aa,
                     "Reset Java decoder.");
        return -1;
      }
      return -1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return -0xd;
    }
    pcVar4 = "Unable to reset Java decoder.";
    uVar3 = 0x7ca;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/video_decoder_wrapper.cc",uVar3,pcVar4);
  return -0xd;
}


// ===== 00ae411c  FUN_00ae411c =====

undefined8 FUN_00ae411c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  return 0;
}


// ===== 00ae4130  FUN_00ae4130 =====

undefined4 FUN_00ae4130(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar4 = FUN_00ad9fc4();
  uVar5 = FUN_00adaed8(uVar4,"org/webrtc/VideoDecoder",&DAT_00db9e90);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_50,uVar4,uVar5,"release","()Lorg/webrtc/VideoCodecStatus;",&DAT_00db9ec8);
  local_60 = FUN_004a41b4(uVar4,*(undefined8 *)(param_1 + 8),local_30);
  local_58 = uVar4;
  FUN_00ad843c(&local_50);
  uVar3 = FUN_00ae53a0(uVar4,&local_60);
  FUN_00ada608(&local_60,local_58);
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/video_decoder_wrapper.cc",0x4b9,
                 "release: ",uVar3);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x134));
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  if (puVar1 != *(undefined8 **)(param_1 + 0x170)) {
    uVar2 = *(ulong *)(param_1 + 0x180);
    uVar6 = *(long *)(param_1 + 0x188) + uVar2;
    plVar8 = puVar1 + (uVar2 >> 7);
    lVar9 = *plVar8;
    lVar7 = lVar9 + (uVar2 & 0x7f) * 0x20;
    while (lVar7 != puVar1[uVar6 >> 7] + (uVar6 & 0x7f) * 0x20) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar7 = lVar7 + 0x20;
      if (lVar7 - lVar9 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar9 = *plVar8;
        lVar7 = lVar9;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  lVar7 = (long)*(undefined8 **)(param_1 + 0x170) - (long)puVar1;
  while (uVar6 = lVar7 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x168) + 8);
    *(undefined8 **)(param_1 + 0x168) = puVar1;
    lVar7 = *(long *)(param_1 + 0x170) - (long)puVar1;
  }
  if (uVar6 == 1) {
    uVar4 = 0x40;
  }
  else {
    if (uVar6 != 2) goto LAB_00ae42dc;
    uVar4 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x180) = uVar4;
LAB_00ae42dc:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x134));
  *(undefined1 *)(param_1 + 0x58) = 0;
  return uVar3;
}


// ===== 00ae4314  FUN_00ae4314 =====

undefined8 * FUN_00ae4314(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return (undefined8 *)(param_1 + 0x10);
  }
  return *(undefined8 **)(param_1 + 0x10);
}


// ===== 00ae4330  FUN_00ae4330 =====

void FUN_00ae4330(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1 != (undefined8 *)(param_2 + 0x10)) {
    if (*(char *)(param_2 + 0x27) < '\0') {
      FUN_00547fc0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      param_1[1] = *(undefined8 *)(param_2 + 0x18);
      *param_1 = uVar2;
      param_1[2] = uVar1;
    }
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 00ae43a0  FUN_00ae43a0 =====

void FUN_00ae43a0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  long *plStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  plVar2 = (long *)FUN_00ad9fc4();
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar3 = (**(code **)(*plVar2 + 0x538))(plVar2,plVar1);
  local_70 = uVar3;
  plStack_68 = plVar2;
  uVar4 = FUN_00adaed8(plVar2,"org/webrtc/VideoDecoder",&DAT_00db9e90);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,plVar2,uVar4,"setStreamId","(Ljava/lang/String;)V",&DAT_00db9ed0);
  FUN_004c2120(plVar2,*(undefined8 *)(param_1 + 8),local_40,uVar3);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,plVar2);
  return;
}


// ===== 00ae4480  FUN_00ae4480 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00ae4480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long local_138;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = FUN_00ae9b4c(param_2,param_3);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x134));
  while( true ) {
    if (*(long *)(param_1 + 0x188) == 0) {
      uVar8 = FUN_004022fc();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6276,"../../sdk/android/src/jni/video_decoder_wrapper.cc",0x61a,
                     "Java decoder produced an unexpected frame: ",lVar5);
      }
      uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x134));
      return (ulong)uVar4;
    }
    uVar8 = *(ulong *)(param_1 + 0x180);
    plVar1 = (long *)((*(undefined8 **)(param_1 + 0x168))[uVar8 >> 7] + (uVar8 & 0x7f) * 0x20);
    if (plVar1 == (long *)0x0) break;
    lVar10 = *plVar1;
    lVar3 = plVar1[1];
    lVar9 = plVar1[2];
    uVar2 = *(ushort *)(plVar1 + 3);
    *(ulong *)(param_1 + 0x180) = uVar8 + 1;
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + -1;
    if (0xff < uVar8 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 0x168));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 8;
      *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + -0x80;
    }
    if (lVar10 == lVar5) {
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x134));
      uStack_88 = _UNK_00253518;
      local_90 = _DAT_00253510;
      uStack_78 = _UNK_00253528;
      uStack_80 = _DAT_00253520;
      uStack_c8 = _UNK_002534d8;
      local_d0 = _DAT_002534d0;
      uStack_b8 = _UNK_002534e8;
      uStack_c0 = _DAT_002534e0;
      uStack_a8 = _UNK_002534f8;
      local_b0 = _DAT_002534f0;
      uStack_98 = _UNK_00253508;
      uStack_a0 = _DAT_00253500;
      uStack_108 = _UNK_00253498;
      local_110 = _DAT_00253490;
      uStack_f8 = _UNK_002534a8;
      uStack_100 = _DAT_002534a0;
      uStack_e8 = _UNK_002534b8;
      local_f0 = _DAT_002534b0;
      uStack_d8 = _UNK_002534c8;
      uStack_e0 = _DAT_002534c0;
      uStack_148 = _UNK_00253458;
      local_150 = _DAT_00253450;
      local_138 = _UNK_00253468;
      uStack_140 = _DAT_00253460;
      uStack_128 = _UNK_00253478;
      local_130 = _DAT_00253470;
      uStack_118 = _UNK_00253488;
      uStack_120 = _DAT_00253480;
      FUN_00ae9e98(&local_150,param_2,param_3,(int)lVar3);
      local_138 = lVar9;
      uVar8 = FUN_00adc418(param_2,param_4);
      uVar6 = FUN_00adc418(param_2,param_5);
      uVar7 = (uint)(uVar6 >> 0x20);
      uVar4 = (uint)uVar6 & 0xff | uVar7 << 8;
      *(uint *)(param_1 + 0x130) = (uVar7 ^ 0xffffffff) & 1;
      if ((uVar6 >> 0x20 & 1) == 0) {
        uVar4 = (uint)uVar2;
      }
      (**(code **)(**(long **)(param_1 + 0x128) + 0x20))
                (*(long **)(param_1 + 0x128),&local_150,uVar8 & 0xffffffffff | 0xaaaaaa0000000000,
                 uVar4 & 0xffff);
      uVar8 = FUN_007bf020(&local_150);
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ae46a4  FUN_00ae46a4 =====

void * FUN_00ae46a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/VideoDecoder",&DAT_00db9e90);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_1,uVar1,"createNative",&DAT_001a4f3c,&DAT_00db9ed8);
  pvVar2 = (void *)FUN_00ad87a4(param_1,*param_2,local_40,param_3);
  FUN_00ad843c(&local_60);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(400);
    FUN_00ae358c(pvVar2,param_1,param_2);
  }
  return pvVar2;
}


// ===== 00ae4770  FUN_00ae4770 =====

void FUN_00ae4770(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x80) {
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
      FUN_00ae4be0(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00ae5104(&local_50,lVar5);
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
      FUN_00ae4be0(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00ae4e68(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x80;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00ae4958(param_1,&local_50);
  return;
}


// ===== 00ae4958  FUN_00ae4958 =====

void FUN_00ae4958(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ae4bc8;
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
LAB_00ae4bc8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae4be0  FUN_00ae4be0 =====

void FUN_00ae4be0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ae4e50;
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
LAB_00ae4e50:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae4e68  FUN_00ae4e68 =====

void FUN_00ae4e68(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ae50ec;
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
LAB_00ae50ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae5104  FUN_00ae5104 =====

void FUN_00ae5104(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ae5388;
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
LAB_00ae5388:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae53a0  FUN_00ae53a0 =====

undefined4 FUN_00ae53a0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/VideoCodecStatus",&DAT_00db9ee8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar2,"getNumber",&DAT_001bb71e,&DAT_00db9ee0);
  uVar1 = FUN_004c1718(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return uVar1;
}


// ===== 00ae5440  FUN_00ae5440 =====

void FUN_00ae5440(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(long **)(param_3 + 0x22) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_3 + 0x22) + 0x20))();
  }
  FUN_00ad9c24(&local_90,param_2,uVar4,*(undefined8 *)(param_3 + 0x24));
  uVar2 = param_3[6];
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage$FrameType",&DAT_00db9f08);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_d0;
  FUN_00ad8360(&local_80,param_2,uVar4,"fromNativeIndex","(I)Lorg/webrtc/EncodedImage$FrameType;",
               &DAT_00db9ef0);
  uVar4 = FUN_004aecec(param_2,uVar4,local_60,uVar2);
  local_a0 = uVar4;
  local_98 = param_2;
  FUN_00ad843c(&local_80);
  local_b0 = (undefined1 *)0x0;
  local_a8 = (undefined1 *)0x0;
  if (param_3[9] != -1) {
    FUN_00adcd04(&local_80,param_2);
    local_a8 = puStack_78;
    FUN_00ada608(&local_b0);
    local_b0 = local_80;
    local_80 = (undefined1 *)0x0;
    FUN_00ada608(&local_80,puStack_78);
  }
  lVar6 = *(long *)(param_3 + 4);
  uVar3 = param_3[7];
  uVar2 = *param_3;
  uVar1 = param_3[1];
  local_b8 = 0;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_d0;
  FUN_00ad8450(&local_80,param_2,uVar5,"<init>",
               "(Ljava/nio/ByteBuffer;Ljava/lang/Runnable;IIJLorg/webrtc/EncodedImage$FrameType;ILjava/lang/Integer;)V"
               ,&DAT_00db9ef8);
  local_c0 = local_b0;
  local_d0 = uVar4;
  local_c8 = uVar3;
  uVar4 = FUN_004b8418(param_2,uVar5,local_60,local_90,0,uVar2,uVar1,lVar6 * 1000000);
  *param_1 = uVar4;
  param_1[1] = param_2;
  FUN_00ad843c(&local_80);
  FUN_00ada650(&local_b8);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  FUN_00ada608(&local_90,puStack_88);
  return;
}


// ===== 00ae5664  FUN_00ae5664 =====

void FUN_00ae5664(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined4 *puVar7;
  
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage$FrameType",&DAT_00db9f08);
  uVar3 = (**(code **)(*param_2 + 0x560))(param_2,(ulong)(param_3[1] - *param_3) >> 2,uVar3,0);
  puVar6 = (undefined4 *)*param_3;
  puVar1 = (undefined4 *)param_3[1];
  *param_1 = uVar3;
  param_1[1] = param_2;
  if (puVar6 != puVar1) {
    iVar5 = 0;
    do {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage$FrameType",&DAT_00db9f08);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = (undefined1 *)&local_a0;
      FUN_00ad8360(&local_90,param_2,uVar4,"fromNativeIndex",
                   "(I)Lorg/webrtc/EncodedImage$FrameType;",&DAT_00db9ef0);
      local_a0 = FUN_004aecec(param_2,uVar4,local_70,uVar2);
      local_98 = param_2;
      FUN_00ad843c(&local_90);
      (**(code **)(*param_2 + 0x570))(param_2,uVar3,iVar5,local_a0);
      FUN_00ada608(&local_a0,local_98);
      iVar5 = iVar5 + 1;
      puVar6 = puVar7;
    } while (puVar7 != puVar1);
  }
  return;
}


// ===== 00ae57c4  FUN_00ae57c4 =====

void FUN_00ae57c4(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  long *plStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getBuffer","()Ljava/nio/ByteBuffer;",&DAT_00db9f10);
  uVar2 = FUN_004a41b4(param_2,*param_3,local_60);
  local_90 = uVar2;
  plStack_88 = param_2;
  FUN_00ad843c(&local_80);
  lVar3 = (**(code **)(*param_2 + 0x730))(param_2,uVar2);
  lVar4 = (**(code **)(*param_2 + 0x738))(param_2,uVar2);
  memcpy(param_1,&DAT_002535a8,0x180);
  FUN_007bc7a4(param_1);
  plVar5 = (long *)operator_new(0x28);
  *plVar5 = (long)&PTR_FUN_00d422d0;
  FUN_00ae5d64(plVar5 + 1,param_2,param_3);
  plVar5[2] = lVar3;
  plVar5[3] = lVar4;
  *plVar5 = (long)&PTR_FUN_00d42288;
  *(undefined4 *)(plVar5 + 4) = 0;
  if (plVar5 != (long *)0x0) {
    FUN_00d0f740(1,plVar5 + 4);
    FUN_00d0f740(1,plVar5 + 4);
  }
  if (*(long **)(param_1 + 0x22) == (long *)0x0) {
    ppuVar7 = &PTR_FUN_00d42288;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x22) + 8))();
    ppuVar7 = (undefined **)*plVar5;
  }
  *(long **)(param_1 + 0x22) = plVar5;
  uVar2 = (*(code *)ppuVar7[5])(plVar5);
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getEncodedWidth",&DAT_001bb71e,&DAT_00db9f18);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  *param_1 = uVar1;
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getEncodedHeight",&DAT_001bb71e,&DAT_00db9f20);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  param_1[1] = uVar1;
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getRotation",&DAT_001bb71e,&DAT_00db9f28);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  param_1[7] = uVar1;
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getQp","()Ljava/lang/Integer;",&DAT_00db9f30);
  local_a0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_98 = param_2;
  FUN_00ad843c(&local_80);
  uVar6 = FUN_00adc418(param_2,&local_a0);
  uVar1 = (undefined4)uVar6;
  if ((uVar6 & 0x100000000) == 0) {
    uVar1 = 0xffffffff;
  }
  param_1[9] = uVar1;
  FUN_00ada608(&local_a0,local_98);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_2,uVar2,"getFrameType",&DAT_001bb71e,&DAT_00db9f38);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  param_1[6] = uVar1;
  FUN_00ada608(&local_90,param_2);
  return;
}


// ===== 00ae5bc0  FUN_00ae5bc0 =====

undefined8 FUN_00ae5bc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/EncodedImage",&DAT_00db9f00);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"getCaptureTimeNs",&DAT_001a78d2,&DAT_00db9f40);
  uVar1 = FUN_00ad87a4(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return uVar1;
}


// ===== 00ae5c60  FUN_00ae5c60 =====

void FUN_00ae5c60(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00ae5c84  FUN_00ae5c84 =====

bool FUN_00ae5c84(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00ae5cdc  FUN_00ae5cdc =====

void FUN_00ae5cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d422d0;
  FUN_00ae5e6c(param_1 + 1);
  return;
}


// ===== 00ae5cf0  FUN_00ae5cf0 =====

void FUN_00ae5cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d422d0;
  FUN_00ae5e6c(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00ae5d2c  FUN_00ae5d2c =====

undefined8 FUN_00ae5d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00ae5d38  FUN_00ae5d38 =====

undefined8 FUN_00ae5d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00ae5d44  FUN_00ae5d44 =====

bool FUN_00ae5d44(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00ae5d5c  FUN_00ae5d5c =====

void FUN_00ae5d5c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xae5d64);
  (*pcVar1)();
}


// ===== 00ae5d64  FUN_00ae5d64 =====

void FUN_00ae5d64(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RefCounted",&DAT_00db9f50);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_2,uVar2,"retain",&DAT_001ebb20,&DAT_00db9f48);
  FUN_004c2120(param_2,*param_3,local_40);
  FUN_00ad843c(&local_60);
  cVar1 = (**(code **)(*param_2 + 0x720))(param_2);
  if (cVar1 == '\0') {
    uVar2 = *param_3;
    *param_1 = 0;
    FUN_00ada590(param_1,param_2,uVar2);
    return;
  }
  FUN_00adbb80(&local_60,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/scoped_java_ref_counted.cc",0x20,"!jni->ExceptionCheck()",
               &DAT_00252f37,&local_60,"Unexpected java exception from java JavaRefCounted.retain()"
              );
}


// ===== 00ae5e6c  FUN_00ae5e6c =====

void FUN_00ae5e6c(long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (*param_1 != 0) {
    plVar2 = (long *)thunk_FUN_00ad9fc4();
    uVar3 = FUN_00adaed8(plVar2,"org/webrtc/RefCounted",&DAT_00db9f50);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,plVar2,uVar3,"release",&DAT_001ebb20,&DAT_00db9f58);
    FUN_004c2120(plVar2,*param_1,local_30);
    FUN_00ad843c(&local_50);
    cVar1 = (**(code **)(*plVar2 + 0x720))(plVar2);
    if (cVar1 != '\0') {
      FUN_00adbb80(&local_50,plVar2);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/src/jni/scoped_java_ref_counted.cc",0x29,
                   "!jni->ExceptionCheck()",&DAT_00252f37,&local_50,
                   "Unexpected java exception from java RefCounted.release()");
    }
  }
  FUN_00ada650(param_1);
  return;
}


// ===== 00ae5f68  thunk_FUN_00ad9fc4 =====

void thunk_FUN_00ad9fc4(void)

{
  FUN_00ad9fc4();
  return;
}


// ===== 00ae5f70  Java_org_webrtc_VideoEncoderFallback_nativeCreate =====

void Java_org_webrtc_VideoEncoderFallback_nativeCreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_18;
  
  local_38 = param_5;
  local_18 = param_4;
  uVar1 = FUN_00ae83fc(param_1,&local_18);
  uVar2 = FUN_00ae83fc(param_1,&local_38,param_3);
  FUN_009d76c0(param_3,uVar1,uVar2,0);
  FUN_00adde38();
  return;
}


// ===== 00ae5fe4  Java_org_webrtc_VideoEncoderWrapper_nativeOnEncodedFrame =====

void Java_org_webrtc_VideoEncoderWrapper_nativeOnEncodedFrame
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_4;
  FUN_00ae7b28(param_3,param_1,&local_18);
  return;
}


// ===== 00ae601c  FUN_00ae601c =====

void FUN_00ae601c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined1 *local_30;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_00d42310;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  FUN_00adb510(&local_30,param_2,&DAT_001e6427);
  param_1[2] = 0;
  FUN_00ada590(param_1 + 2,0,local_30);
  FUN_00ada608(&local_30,local_28);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_30);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),(pthread_mutexattr_t *)&local_30);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_30);
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_007b861c(param_1 + 0x11);
  FUN_007b94b0(param_1 + 0xbd);
  FUN_00967980(param_1 + 0xdf);
  FUN_0087f7a4(param_1 + 0xec);
  puVar1 = PTR_DAT_00d52f78;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0xf9) = 0x101;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0xf8] = puVar1 + 0x10;
  FUN_00ae6118(param_1,param_2);
  return;
}


// ===== 00ae6118  FUN_00ae6118 =====

void FUN_00ae6118(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
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
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x5fd) = 1;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = (undefined1 *)&local_180;
  FUN_00ad8450(&local_170,param_2,uVar5,"getImplementationName","()Ljava/lang/String;",&DAT_00db9fa0
              );
  local_180 = FUN_004a41b4(param_2,*(undefined8 *)(param_1 + 8),local_150);
  local_178 = param_2;
  FUN_00ad843c(&local_170);
  FUN_00adc4e0(&local_170,param_2,&local_180);
  if (*(char *)(param_1 + 0x617) < '\0') {
    operator_delete(*(void **)(param_1 + 0x600));
  }
  puVar2 = local_160;
  local_160 = (undefined1 *)((ulong)local_160 & 0xffffffffffffff);
  *(undefined1 **)(param_1 + 0x608) = puStack_168;
  *(undefined1 **)(param_1 + 0x600) = local_170;
  *(undefined1 **)(param_1 + 0x610) = puVar2;
  local_170 = (undefined1 *)((ulong)local_170 & 0xffffffffffffff00);
  FUN_00ada608(&local_180,local_178);
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = (undefined1 *)&local_180;
  FUN_00ad8450(&local_170,param_2,uVar5,"isHardwareEncoder",&DAT_001be1bc,&DAT_00db9fa8);
  cVar4 = FUN_004c17b4(param_2,*(undefined8 *)(param_1 + 8),local_150);
  FUN_00ad843c(&local_170);
  *(bool *)(param_1 + 0x619) = cVar4 != '\0';
  FUN_00ae6b30(&local_170,param_1,param_2);
  *(undefined1 **)(param_1 + 0x5f0) = puStack_168;
  *(undefined1 **)(param_1 + 0x5e8) = local_170;
  FUN_007b94a8(&local_170);
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = (undefined1 *)&local_180;
  FUN_00ad8450(&local_170,param_2,uVar5,"getResolutionBitrateLimits",
               "()[Lorg/webrtc/VideoEncoder$ResolutionBitrateLimits;",&DAT_00db9fb0);
  local_180 = FUN_004a41b4(param_2,*(undefined8 *)(param_1 + 8),local_150);
  local_178 = param_2;
  FUN_00ad843c(&local_170);
  FUN_00ae6e30(&local_170,param_2,&local_180);
  pvVar6 = *(void **)(param_1 + 0x698);
  if (pvVar6 != (void *)0x0) {
    pvVar7 = *(void **)(param_1 + 0x6a0);
    uVar9 = (ulong)((long)pvVar7 + (-0x10 - ((long)pvVar7 << 0x3c))) >> 4;
    uVar8 = (ulong)(((long)pvVar6 - (long)pvVar7 << 0x3c) - ((long)pvVar6 - (long)pvVar7)) >> 4;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)pvVar6 - (int)pvVar7 | -(int)pvVar7) & 0xfU) == 0)) {
      uVar8 = uVar8 & 0xffffffffffffffe;
      pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x10);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (pvVar7 != pvVar6) {
      pvVar7 = (void *)((long)pvVar7 + -0x10);
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x6a0) = pvVar6;
    operator_delete(pvVar6);
  }
  puVar3 = local_160;
  puVar2 = puStack_168;
  puStack_168 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x6a0) = puVar2;
  *(undefined1 **)(param_1 + 0x698) = local_170;
  *(undefined1 **)(param_1 + 0x6a8) = puVar3;
  local_170 = (undefined1 *)0x0;
  FUN_00ada608(&local_180,param_2);
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae70e8(&local_170,param_1,param_2);
  *(undefined4 *)(param_1 + 0x5f8) = (undefined4)local_160;
  *(undefined1 *)(param_1 + 0x5fc) = local_160._4_1_;
  FUN_007b9754(&local_170);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ae6470  FUN_00ae6470 =====

void FUN_00ae6470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42310;
  FUN_008b5678(param_1 + 0xf8);
  FUN_0087f7dc(param_1 + 0xec);
  FUN_009679ac(param_1 + 0xdf);
  FUN_007b9754(param_1 + 0xbd);
  FUN_008a03f4(param_1 + 0x11);
  FUN_00ae64e8(param_1 + 8);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  FUN_00ada650(param_1 + 2);
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00ae64e8  FUN_00ae64e8 =====

void FUN_00ae64e8(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_00ae6648;
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
    if (uVar7 != 2) goto LAB_00ae65c0;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_00ae65c0:
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
LAB_00ae6648:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ae6698  FUN_00ae6698 =====

void FUN_00ae6698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42310;
  FUN_008b5678(param_1 + 0xf8);
  FUN_0087f7dc(param_1 + 0xec);
  FUN_009679ac(param_1 + 0xdf);
  FUN_007b9754(param_1 + 0xbd);
  FUN_008a03f4(param_1 + 0x11);
  FUN_00ae64e8(param_1 + 8);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  FUN_00ada650(param_1 + 2);
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00ae671c  FUN_00ae671c =====

void FUN_00ae671c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00ad9fc4();
  FUN_0095d0a0(param_1 + 0x88,param_2);
  if (*(char *)(param_1 + 0x81) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = *param_3;
  }
  else {
    if ((undefined1 *)(param_1 + 0x80) == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x81) = 1;
    *(undefined1 *)(param_1 + 0x80) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_00ae67bc(param_1,uVar2);
  return;
}


// ===== 00ae67bc  FUN_00ae67bc =====

int FUN_00ae67bc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint local_f0 [2];
  undefined4 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  local_d8 = 1;
  if (*(int *)(param_1 + 0x88) == 2) {
    lVar9 = FUN_007b8c98();
    local_d8 = (ulong)*(byte *)(lVar9 + 9);
    *(undefined8 *)(param_1 + 2000) = 1;
    *(undefined1 *)(param_1 + 0x8d7) = 1;
    *(undefined1 *)(param_1 + 0x9d6) = 1;
    *(undefined1 *)(param_1 + 0xad5) = 1;
    *(undefined1 *)(param_1 + 0x7d8) = 0;
    *(undefined8 *)(param_1 + 0xdd8) = 0;
  }
  else if (*(int *)(param_1 + 0x88) == 1) {
    lVar9 = FUN_007b8c80();
    local_d8 = (ulong)*(byte *)(lVar9 + 2);
  }
  if ((*(byte *)(param_1 + 0x81) & 1) != 0) {
    uVar4 = *(undefined1 *)(param_1 + 0x80);
    uVar10 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$Capabilities",&DAT_00db9f68);
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = (undefined1 *)local_f0;
    FUN_00ad8450(&local_90,param_2,uVar10,"<init>",&DAT_001e74ea,&DAT_00db9f60);
    uVar10 = FUN_004b8418(param_2,uVar10,local_70,uVar4);
    local_a0 = uVar10;
    local_98 = param_2;
    FUN_00ad843c(&local_90);
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    uVar6 = *(undefined2 *)(param_1 + 0x8c);
    uVar7 = *(undefined2 *)(param_1 + 0x8e);
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    bVar5 = *(byte *)(param_1 + 0xa8);
    uVar11 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$Settings",&DAT_00db9f78);
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = (undefined1 *)local_f0;
    FUN_00ad8450(&local_90,param_2,uVar11,"<init>",
                 "(IIIIIIZLorg/webrtc/VideoEncoder$Capabilities;)V",&DAT_00db9f70);
    local_e8 = (undefined4)local_d8;
    local_f0[0] = (uint)bVar5;
    local_e0 = uVar10;
    uVar10 = FUN_004b8418(param_2,uVar11,local_70,uVar1,uVar6,uVar7,uVar2,uVar3);
    local_b0 = uVar10;
    local_a8 = param_2;
    FUN_00ad843c(&local_90);
    uVar11 = FUN_00adde38(param_1);
    uVar12 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoderWrapper",&DAT_00db9f88);
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = (undefined1 *)local_f0;
    FUN_00ad8360(&local_90,param_2,uVar12,"createEncoderCallback",
                 "(J)Lorg/webrtc/VideoEncoder$Callback;",&DAT_00db9f80);
    uVar11 = FUN_004aecec(param_2,uVar12,local_70,uVar11);
    local_c0 = uVar11;
    local_b8 = param_2;
    FUN_00ad843c(&local_90);
    uVar12 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder",&DAT_00db9f98);
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = (undefined1 *)local_f0;
    FUN_00ad8450(&local_90,param_2,uVar12,"initEncode",
                 "(Lorg/webrtc/VideoEncoder$Settings;Lorg/webrtc/VideoEncoder$Callback;)Lorg/webrtc/VideoCodecStatus;"
                 ,&DAT_00db9f90);
    local_d0 = FUN_004a41b4(param_2,*(undefined8 *)(param_1 + 8),local_70,uVar10,uVar11);
    local_c8 = param_2;
    FUN_00ad843c(&local_90);
    iVar8 = FUN_00ae53a0(param_2,&local_d0);
    FUN_00ada608(&local_d0,local_c8);
    uVar13 = FUN_00417e08();
    if ((uVar13 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/video_encoder_wrapper.cc",0x379,
                   "initEncode: ",iVar8);
    }
    FUN_00ae6118(param_1,param_2);
    if (iVar8 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    FUN_00ada608(&local_c0,local_b8);
    FUN_00ada608(&local_b0,local_a8);
    FUN_00ada608(&local_a0,local_98);
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00ae6b30  FUN_00ae6b30 =====

void FUN_00ae6b30(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  uVar3 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_80,param_3,uVar3,"getScalingSettings",
               "()Lorg/webrtc/VideoEncoder$ScalingSettings;",&DAT_00db9fe0);
  uVar3 = FUN_004a41b4(param_3,*(undefined8 *)(param_2 + 8),local_60);
  local_90 = uVar3;
  uStack_88 = param_3;
  FUN_00ad843c(&local_80);
  uVar4 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoderWrapper",&DAT_00db9f88);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8360(&local_80,param_3,uVar4,"getScalingSettingsOn",
               "(Lorg/webrtc/VideoEncoder$ScalingSettings;)Z",&DAT_00db9fe8);
  cVar2 = FUN_00ae84c8(param_3,uVar4,local_60,uVar3);
  FUN_00ad843c(&local_80);
  if (cVar2 == '\0') {
LAB_00ae6dc4:
    FUN_007b945c(param_1,0);
    goto LAB_00ae6e04;
  }
  uVar4 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoderWrapper",&DAT_00db9f88);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8360(&local_80,param_3,uVar4,"getScalingSettingsLow",
               "(Lorg/webrtc/VideoEncoder$ScalingSettings;)Ljava/lang/Integer;",&DAT_00db9ff0);
  local_a0 = FUN_004aecec(param_3,uVar4,local_60,uVar3);
  local_98 = param_3;
  FUN_00ad843c(&local_80);
  uVar5 = FUN_00adc418(param_3,&local_a0);
  FUN_00ada608(&local_a0,local_98);
  uVar4 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoderWrapper",&DAT_00db9f88);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_a0;
  FUN_00ad8360(&local_80,param_3,uVar4,"getScalingSettingsHigh",
               "(Lorg/webrtc/VideoEncoder$ScalingSettings;)Ljava/lang/Integer;",&DAT_00db9ff8);
  local_a0 = FUN_004aecec(param_3,uVar4,local_60,uVar3);
  local_98 = param_3;
  FUN_00ad843c(&local_80);
  uVar6 = FUN_00adc418(param_3,&local_a0);
  FUN_00ada608(&local_a0,local_98);
  if (((uVar5 >> 0x20 & 1) == 0) || ((uVar6 >> 0x20 & 1) == 0)) {
    iVar1 = *(int *)(param_2 + 0x88);
    uVar7 = (uint)uVar5;
    if (iVar1 - 4U < 2) {
      if ((uVar5 & 0x100000000) == 0) {
        uVar7 = 0x18;
      }
      uVar8 = 0x25;
    }
    else {
      if (iVar1 == 2) {
        uVar5 = 0x60;
        uVar6 = 0xb9;
        goto LAB_00ae6e00;
      }
      if (iVar1 != 1) goto LAB_00ae6dc4;
      if ((uVar5 & 0x100000000) == 0) {
        uVar7 = 0x1d;
      }
      uVar8 = 0x5f;
    }
    uVar5 = (ulong)uVar7;
    uVar7 = (uint)uVar6;
    if ((uVar6 & 0x100000000) == 0) {
      uVar7 = uVar8;
    }
    uVar6 = (ulong)uVar7;
  }
  else {
    uVar5 = uVar5 & 0xffffffff;
    uVar6 = uVar6 & 0xffffffff;
  }
LAB_00ae6e00:
  FUN_007b9474(param_1,uVar5,uVar6);
LAB_00ae6e04:
  FUN_00ada608(&local_90,param_3);
  return;
}


// ===== 00ae6e30  FUN_00ae6e30 =====

void FUN_00ae6e30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_b0 [4];
  int local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  param_1[2] = 0;
  local_a8 = param_3;
  local_ac = (**(code **)(lVar8 + 0x558))(param_2,*param_3);
  if (0 < local_ac) {
    iVar9 = 0;
    do {
      plStack_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = (undefined1 *)(**(code **)(*param_2 + 0x568))(param_2,*local_a8,iVar9);
      plStack_98 = param_2;
      uVar6 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$ResolutionBitrateLimits",&DAT_00dba050);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_88 = auStack_b0;
      FUN_00ad8450(&local_90,param_2,uVar6,"getFrameSizePixels",&DAT_001bb71e,&DAT_00dba048);
      uVar2 = FUN_004c1718(param_2,local_a0,local_70);
      FUN_00ad843c(&local_90);
      uVar6 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$ResolutionBitrateLimits",&DAT_00dba050);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_88 = auStack_b0;
      FUN_00ad8450(&local_90,param_2,uVar6,"getMinStartBitrateBps",&DAT_001bb71e,&DAT_00dba058);
      uVar3 = FUN_004c1718(param_2,local_a0,local_70);
      FUN_00ad843c(&local_90);
      uVar6 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$ResolutionBitrateLimits",&DAT_00dba050);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_88 = auStack_b0;
      FUN_00ad8450(&local_90,param_2,uVar6,"getMinBitrateBps",&DAT_001bb71e,&DAT_00dba060);
      uVar4 = FUN_004c1718(param_2,local_a0,local_70);
      FUN_00ad843c(&local_90);
      uVar6 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoder$ResolutionBitrateLimits",&DAT_00dba050);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_88 = auStack_b0;
      FUN_00ad8450(&local_90,param_2,uVar6,"getMaxBitrateBps",&DAT_001bb71e,&DAT_00dba068);
      uVar5 = FUN_004c1718(param_2,local_a0,local_70);
      FUN_00ad843c(&local_90);
      puVar1 = (undefined8 *)param_1[1];
      local_90 = (undefined1 *)CONCAT44(uVar3,uVar2);
      uStack_88 = (undefined1 *)CONCAT44(uVar5,uVar4);
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar7 = puVar1 + 2;
        puVar1[1] = uStack_88;
        *puVar1 = local_90;
      }
      else {
        puVar7 = (undefined8 *)FUN_0097088c(param_1,&local_90);
      }
      param_1[1] = puVar7;
      FUN_00ada608(&local_a0,plStack_98);
      iVar9 = iVar9 + 1;
    } while (local_ac != iVar9);
  }
  return;
}


// ===== 00ae70e8  FUN_00ae70e8 =====

void FUN_00ae70e8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar3 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_70,param_3,uVar3,"getEncoderInfo","()Lorg/webrtc/VideoEncoder$EncoderInfo;",
               &DAT_00dba000);
  uVar3 = FUN_004a41b4(param_3,*(undefined8 *)(param_2 + 8),local_50);
  local_80 = uVar3;
  uStack_78 = param_3;
  FUN_00ad843c(&local_70);
  uVar4 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoder$EncoderInfo",&DAT_00dba010);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_70,param_3,uVar4,"getRequestedResolutionAlignment",&DAT_001bb71e,&DAT_00dba008
              );
  uVar2 = FUN_004c1718(param_3,uVar3,local_50);
  FUN_00ad843c(&local_70);
  uVar4 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoder$EncoderInfo",&DAT_00dba010);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_70,param_3,uVar4,"getApplyAlignmentToAllSimulcastLayers",&DAT_001be1bc,
               &DAT_00dba018);
  cVar1 = FUN_004c17b4(param_3,uVar3,local_50);
  FUN_00ad843c(&local_70);
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
  param_1[0x17] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x16] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x19] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x18] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1b] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1d] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1c] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1f] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x1e] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x21] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x20] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b94b0(param_1);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(bool *)((long)param_1 + 0x14) = cVar1 != '\0';
  FUN_00ada608(&local_80,param_3);
  return;
}


// ===== 00ae72cc  FUN_00ae72cc =====

undefined8 FUN_00ae72cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return 0;
}


// ===== 00ae72e0  FUN_00ae72e0 =====

undefined4 FUN_00ae72e0(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = FUN_00ad9fc4();
  uVar4 = FUN_00adaed8(uVar3,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_50,uVar3,uVar4,"release","()Lorg/webrtc/VideoCodecStatus;",&DAT_00db9fb8);
  local_60 = FUN_004a41b4(uVar3,*(undefined8 *)(param_1 + 8),local_30);
  local_58 = uVar3;
  FUN_00ad843c(&local_50);
  uVar2 = FUN_00ae53a0(uVar3,&local_60);
  FUN_00ada608(&local_60,local_58);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/video_encoder_wrapper.cc",0x4d9,
                 "release: ",uVar2);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != *(undefined8 **)(param_1 + 0x50)) {
    uVar9 = *(ulong *)(param_1 + 0x60);
    uVar5 = *(long *)(param_1 + 0x68) + uVar9;
    plVar7 = puVar1 + (uVar9 >> 8);
    lVar8 = *plVar7;
    lVar6 = lVar8 + (uVar9 & 0xff) * 0x10;
    while (lVar6 != puVar1[uVar5 >> 8] + (uVar5 & 0xff) * 0x10) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar6 = lVar6 + 0x10;
      if (lVar6 - lVar8 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar8 = *plVar7;
        lVar6 = lVar8;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar6 = (long)*(undefined8 **)(param_1 + 0x50) - (long)puVar1;
  while (uVar5 = lVar6 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    *(undefined8 **)(param_1 + 0x48) = puVar1;
    lVar6 = *(long *)(param_1 + 0x50) - (long)puVar1;
  }
  if (uVar5 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar5 != 2) goto LAB_00ae747c;
    uVar3 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x60) = uVar3;
LAB_00ae747c:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x78) = 0;
  return uVar2;
}


// ===== 00ae74b4  FUN_00ae74b4 =====

undefined4 FUN_00ae74b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  undefined4 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    puVar4 = (undefined4 *)FUN_00ad9fc4();
    local_80 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    if (param_3 == 0) {
      local_70 = (undefined4 *)operator_new(4);
      local_60 = local_70 + 1;
      if (local_70 == (undefined4 *)0x0) goto LAB_00ae7830;
      *local_70 = 4;
      puStack_68 = local_60;
      FUN_00ae5664(&local_90,puVar4,&local_70);
      local_78 = local_88;
      FUN_00ada608(&local_80);
      local_80 = local_90;
      local_90 = (undefined4 *)0x0;
      FUN_00ada608(&local_90,local_88);
      if (local_70 != (undefined4 *)0x0) {
        uVar10 = (ulong)((long)puStack_68 + (-4 - ((long)puStack_68 << 0x3e))) >> 2;
        uVar9 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3e) -
                       ((long)local_70 - (long)puStack_68)) >> 2;
        if (uVar10 <= uVar9) {
          uVar9 = uVar10;
        }
        puVar6 = puStack_68;
        if ((1 < uVar9) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 3U) == 0)) {
          uVar9 = uVar9 & 0x3ffffffffffffffe;
          puVar6 = puStack_68 + -uVar9;
          do {
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        while (puVar6 != local_70) {
          puVar6 = puVar6 + -1;
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puStack_68 = local_70;
        operator_delete(local_70);
      }
    }
    else {
      FUN_00ae5664(&local_70,puVar4,param_3);
      local_78 = puStack_68;
      FUN_00ada608(&local_80);
      local_80 = local_70;
      local_70 = (undefined4 *)0x0;
      FUN_00ada608(&local_70,puStack_68);
    }
    uVar5 = FUN_00adaed8(puVar4,"org/webrtc/VideoEncoder$EncodeInfo",&DAT_00db9fc8);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = (undefined4 *)&local_b0;
    FUN_00ad8450(&local_70,puVar4,uVar5,"<init>","([Lorg/webrtc/EncodedImage$FrameType;)V",
                 &DAT_00db9fc0);
    puVar6 = (undefined4 *)FUN_004b8418(puVar4,uVar5,local_50,local_80);
    local_90 = puVar6;
    local_88 = puVar4;
    FUN_00ad843c(&local_70);
    lVar11 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
    lVar7 = *(long *)(param_1 + 0x48);
    lVar8 = *(long *)(param_1 + 0x50);
    lVar2 = 0;
    if (lVar8 != lVar7) {
      lVar2 = (lVar8 - lVar7) * 0x20 + -1;
    }
    if (lVar2 == *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x60)) {
      FUN_00ae87cc(param_1 + 0x40);
      lVar7 = *(long *)(param_1 + 0x48);
      lVar8 = *(long *)(param_1 + 0x50);
    }
    if ((lVar7 == lVar8) ||
       (uVar9 = *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x60),
       plVar1 = (long *)(*(long *)(lVar7 + (uVar9 >> 8) * 8) + (uVar9 & 0xff) * 0x10),
       plVar1 == (long *)0x0)) {
LAB_00ae7830:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar1 = lVar11 * 1000;
    *(undefined4 *)(plVar1 + 1) = uVar3;
    *(undefined4 *)((long)plVar1 + 0xc) = 0xaaaaaaaa;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00aea0b8(&local_a0,puVar4,param_2);
    uVar5 = FUN_00adaed8(puVar4,"org/webrtc/VideoEncoder",&DAT_00db9f98);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = (undefined4 *)&local_b0;
    FUN_00ad8450(&local_70,puVar4,uVar5,"encode",
                 "(Lorg/webrtc/VideoFrame;Lorg/webrtc/VideoEncoder$EncodeInfo;)Lorg/webrtc/VideoCodecStatus;"
                 ,&DAT_00db9fd0);
    local_b0 = FUN_004a41b4(puVar4,*(undefined8 *)(param_1 + 8),local_50,local_a0,puVar6);
    local_a8 = puVar4;
    FUN_00ad843c(&local_70);
    FUN_00aea33c(puVar4,&local_a0);
    uVar3 = FUN_00ae7844(param_1,puVar4,&local_b0,"encode");
    FUN_00ada608(&local_b0,local_a8);
    FUN_00ada608(&local_a0,puStack_98);
    FUN_00ada608(&local_90,puVar4);
    FUN_00ada608(&local_80,local_78);
  }
  else {
    uVar3 = 0xfffffff3;
  }
  return uVar3;
}


// ===== 00ae7844  FUN_00ae7844 =====

int FUN_00ae7844(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_00ae53a0(param_2,param_3);
  if (-1 < iVar1) {
    return iVar1;
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_00215736,"../../sdk/android/src/jni/video_encoder_wrapper.cc",0xafa,param_4,
                 &DAT_001c4dc3,iVar1);
  }
  if ((iVar1 == -7) || (iVar1 == -0xd)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return -0xd;
    }
    pcVar4 = "Java encoder requested software fallback.";
    uVar3 = 0xb12;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_00ae67bc(param_1,param_2), iVar1 == 0)) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/video_encoder_wrapper.cc",0xb4a,
                     "Reset Java encoder.");
        return -1;
      }
      return -1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return -0xd;
    }
    pcVar4 = "Unable to reset Java encoder.";
    uVar3 = 0xb6a;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/video_encoder_wrapper.cc",uVar3,pcVar4);
  return -0xd;
}


// ===== 00ae7980  FUN_00ae7980 =====

void FUN_00ae7980(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar1 = FUN_00ad9fc4();
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae8264(&local_80,param_1,uVar1,param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoEncoder$RateControlParameters",&DAT_00dba038);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_70,uVar1,uVar2,"<init>","(Lorg/webrtc/VideoEncoder$BitrateAllocation;D)V",
               &DAT_00dba030);
  uVar2 = FUN_004b8418(uVar3,uVar1,uVar2,local_50,local_80);
  local_90 = uVar2;
  uStack_88 = uVar1;
  FUN_00ad843c(&local_70);
  FUN_00ada608(&local_80,puStack_78);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_70,uVar1,uVar3,"setRates",
               "(Lorg/webrtc/VideoEncoder$RateControlParameters;)Lorg/webrtc/VideoCodecStatus;",
               &DAT_00db9fd8);
  local_80 = (undefined1 *)FUN_004a41b4(uVar1,*(undefined8 *)(param_1 + 8),local_50,uVar2);
  puStack_78 = (undefined1 *)uVar1;
  FUN_00ad843c(&local_70);
  FUN_00ae7844(param_1,uVar1,&local_80,"setRates");
  FUN_00ada608(&local_80,puStack_78);
  FUN_00ada608(&local_90,uVar1);
  return;
}


// ===== 00ae7b18  FUN_00ae7b18 =====

void FUN_00ae7b18(undefined8 param_1,long param_2)

{
  FUN_007b9554(param_1,param_2 + 0x5e8);
  return;
}


// ===== 00ae7b28  FUN_00ae7b28 =====

void FUN_00ae7b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_b50 [16];
  long local_b40;
  int local_b2c;
  undefined4 local_ab8;
  undefined1 auStack_9d0 [136];
  long *local_948;
  long local_940;
  undefined1 auStack_850 [2056];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  memcpy(auStack_9d0,&DAT_00253778,0x180);
  FUN_00ae57c4(auStack_9d0,param_2,param_3);
  lVar3 = FUN_00ae5bc0(param_2,param_3);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x60);
    do {
      plVar4 = (long *)(puVar5[uVar7 >> 8] + (uVar7 & 0xff) * 0x10);
      if (lVar3 <= *plVar4) {
        if (*plVar4 == lVar3) {
          if (plVar4 == (long *)0x0) {
LAB_00ae7d88:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          uVar1 = (undefined4)plVar4[1];
          *(ulong *)(param_1 + 0x60) = uVar7 + 1;
          *(long *)(param_1 + 0x68) = lVar6 + -1;
          if (0x1ff < uVar7 + 1) {
            operator_delete((void *)*puVar5);
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 8;
            *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -0x100;
          }
          pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
          memcpy(auStack_b50,&DAT_00253778,0x180);
          FUN_007bc958(auStack_b50,auStack_9d0);
          local_b40 = lVar3 / 1000000;
          local_ab8 = uVar1;
          if (local_b2c < 0) {
            if (local_948 != (long *)0x0) {
              local_948 = (long *)(**(code **)(*local_948 + 0x20))();
            }
            plVar4 = (long *)0x0;
            if (local_940 != 0) {
              plVar4 = local_948;
            }
            local_b2c = FUN_00ae7da0(param_1,plVar4);
          }
          memcpy(auStack_850,&DAT_002538f8,0x808);
          FUN_00ae7e84(auStack_850,param_1,auStack_9d0);
          plVar4 = *(long **)(param_1 + 0x70);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,auStack_b50,auStack_850);
          }
          FUN_00850704(auStack_850);
          FUN_007bca94(auStack_b50);
          goto LAB_00ae7d54;
        }
        break;
      }
      if (plVar4 == (long *)0x0) goto LAB_00ae7d88;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + -1;
      *(ulong *)(param_1 + 0x60) = uVar7;
      *(long *)(param_1 + 0x68) = lVar6;
      if (0x1ff < uVar7) {
        operator_delete((void *)*puVar5);
        lVar6 = *(long *)(param_1 + 0x68);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
        uVar7 = *(long *)(param_1 + 0x60) - 0x100;
        *(undefined8 **)(param_1 + 0x48) = puVar5;
        *(ulong *)(param_1 + 0x60) = uVar7;
      }
    } while (lVar6 != 0);
  }
  uVar7 = FUN_004022fc();
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6276,"../../sdk/android/src/jni/video_encoder_wrapper.cc",0x9ca,
                 "Java encoder produced an unexpected frame with timestamp: ",lVar3);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
LAB_00ae7d54:
  FUN_007bca94(auStack_9d0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ae7da0  FUN_00ae7da0 =====

ulong FUN_00ae7da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  local_4 = 0xaaaaaaaa;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      uVar2 = FUN_008a3e00(param_2,param_3,&local_4);
    }
    else {
      if (iVar1 != 2) {
        return 0xffffffff;
      }
      uVar2 = FUN_00975fac(param_2,param_3,&local_4);
    }
    if ((uVar2 & 1) != 0) {
      return (ulong)local_4;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_00968204(param_1 + 0x6f8,param_2,param_3);
      uVar2 = FUN_00968360(param_1 + 0x6f8);
    }
    else {
      if (iVar1 != 5) {
        return 0xffffffff;
      }
      FUN_008830e4(param_1 + 0x760,param_2,param_3);
      uVar2 = FUN_00883240(param_1 + 0x760);
    }
    if ((uVar2 & 0x180000000) == 0x100000000) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


// ===== 00ae7e84  FUN_00ae7e84 =====

void FUN_00ae7e84(int *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined8 local_128;
  int local_120;
  ulong local_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  iVar3 = *(int *)(param_3 + 3);
  memcpy(param_1,&DAT_002538f8,0x808);
  FUN_0085052c(param_1);
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008b5934(&local_140,param_2 + 0x7c0,iVar3 == 3);
  if (puStack_138 == local_140) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  FUN_008b5a0c(&local_128,param_2 + 0x7c0);
  if ((char)param_1[0x1ce] == '\x01') {
    FUN_00ae8548();
  }
  else {
    FUN_00850ac0(param_1 + 0x19a,&local_128);
    *(undefined1 *)(param_1 + 0x1ce) = 1;
  }
  FUN_00850c20(&local_128);
  if (iVar3 == 3) {
    FUN_008b56b8(&local_128,param_2 + 0x7c0);
    uVar13 = local_e8;
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      *(undefined8 *)(param_1 + 0x1d0) = local_128;
      param_1[0x1d2] = local_120;
      *(ulong *)(param_1 + 0x1d4) = local_118;
      local_118 = 0;
      local_e8 = 0;
      *(undefined8 *)(param_1 + 0x1de) = local_f0;
      *(undefined8 *)(param_1 + 0x1d8) = uStack_108;
      *(void **)(param_1 + 0x1d6) = local_110;
      *(undefined8 *)(param_1 + 0x1dc) = uStack_f8;
      *(undefined8 *)(param_1 + 0x1da) = uStack_100;
      *(ulong *)(param_1 + 0x1e0) = uVar13;
      *(undefined8 *)(param_1 + 0x1e4) = uStack_d8;
      *(void **)(param_1 + 0x1e2) = local_e0;
      *(undefined8 *)(param_1 + 0x1e8) = uStack_c8;
      *(undefined8 *)(param_1 + 0x1e6) = uStack_d0;
      *(undefined8 *)(param_1 + 0x1ee) = local_b0;
      *(undefined8 *)(param_1 + 0x1ec) = uStack_b8;
      *(void **)(param_1 + 0x1ea) = local_c0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_c0 = (void *)0x0;
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
    else {
      FUN_00ae8618(param_1 + 0x1d0,&local_128);
      if (local_c0 != (void *)0x0) {
        FUN_00ae8714(&local_c0);
        operator_delete(local_c0);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    if ((local_118 & 1) != 0) {
      operator_delete(local_110);
    }
    local_128 = *param_3;
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    FUN_009e0d54(param_1 + 0x1e0,&local_128,1);
  }
  puVar10 = local_140;
  iVar4 = *(int *)(param_2 + 0x88);
  *param_1 = iVar4;
  if (iVar4 == 2) {
    if (iVar3 == 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(ulong *)(param_2 + 0xdd8);
    }
    uVar12 = *(ulong *)(param_2 + 2000);
    *(undefined2 *)((long)param_1 + 0xd) = 0x1ff;
    cVar7 = '\0';
    if (uVar12 != 0) {
      cVar7 = (char)(uVar13 / uVar12);
    }
    *(ulong *)(param_2 + 0xdd8) = uVar13 + 1;
    *(undefined1 *)((long)param_1 + 10) = 0;
    *(bool *)((long)param_1 + 0xb) = iVar3 == 3;
    *(undefined1 *)((long)param_1 + 0xf) = 0;
    param_1[6] = 1;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(bool *)((long)param_1 + 9) = iVar3 != 3;
    *(char *)(param_1 + 4) = (char)uVar13 - cVar7 * (char)uVar12;
    if (iVar3 == 3) {
      *(undefined1 *)(param_1 + 10) = 1;
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((long)param_3 + 4);
      *(ulong *)(param_1 + 0x14) = uVar12;
      *(short *)((long)param_1 + 0x2a) = (short)uVar1;
      *(short *)((long)param_1 + 0x3a) = (short)uVar2;
      lVar15 = 0xad7;
      lVar14 = 0x7d8;
      do {
        if (lVar14 == 0x8d7) {
LAB_00ae8194:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(0x5512,0xae8198);
          (*pcVar11)();
        }
        puVar17 = (undefined1 *)(param_2 + lVar14);
        uVar5 = puVar17[0xff];
        bVar6 = puVar17[0x1fe];
        pbVar16 = (byte *)((long)param_1 + lVar14 + -0x582);
        *(undefined1 *)((long)param_1 + lVar14 + -0x780) = *puVar17;
        *(undefined1 *)((long)param_1 + lVar14 + -0x681) = uVar5;
        *pbVar16 = bVar6;
        if (bVar6 != 0) {
          *(undefined1 *)((long)param_1 + lVar15 + -0x782) = *(undefined1 *)(param_2 + lVar15 + -2);
          if (bVar6 != 1) {
            *(undefined1 *)((long)param_1 + lVar15 + -0x781) =
                 *(undefined1 *)(param_2 + lVar15 + -1);
            bVar6 = *pbVar16;
            if ((2 < bVar6) &&
               (*(undefined1 *)((long)param_1 + lVar15 + -0x780) = *(undefined1 *)(param_2 + lVar15)
               , bVar6 != 3)) goto LAB_00ae8194;
          }
          uVar12 = *(ulong *)(param_1 + 0x14);
        }
        lVar15 = lVar15 + 3;
        uVar13 = lVar14 - 0x7d7;
        lVar14 = lVar14 + 1;
      } while (uVar13 < uVar12);
    }
  }
  else if (iVar4 == 1) {
    param_1[2] = -0xff0100;
  }
  puVar17 = puStack_138;
  if (local_140 != (undefined1 *)0x0) {
    while (puVar9 = puVar17, puVar10 != puVar9) {
      puVar17 = puVar9 + -0x58;
      if (puVar17 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar9[-0x48] & 1) != 0) {
        operator_delete(*(void **)(puVar9 + -0x40));
      }
    }
    puStack_138 = puVar10;
    operator_delete(local_140);
  }
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ae8264  FUN_00ae8264 =====

void FUN_00ae8264(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar2 = (**(code **)(*param_3 + 0x560))(param_3,5,*(undefined8 *)(param_2 + 0x10),0);
  uVar4 = 0;
  local_80 = uVar2;
  plStack_78 = param_3;
  do {
    uStack_68 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uVar1 = FUN_007cc028(param_4,uVar4,0);
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,uVar1);
    uVar1 = FUN_007cc028(param_4,uVar4,1);
    local_70 = (undefined1 *)CONCAT44(uVar1,(undefined4)local_70);
    uVar1 = FUN_007cc028(param_4,uVar4,2);
    uStack_68 = (undefined1 **)CONCAT44(uStack_68._4_4_,uVar1);
    uVar1 = FUN_007cc028(param_4,uVar4,3);
    uStack_68 = (undefined1 **)CONCAT44(uVar1,(undefined4)uStack_68);
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00add298(&local_90,param_3,&local_70,4);
    (**(code **)(*param_3 + 0x570))(param_3,uVar2,uVar4 & 0xffffffff,local_90);
    FUN_00ada608(&local_90,puStack_88);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 5);
  uVar3 = FUN_00adaed8(param_3,"org/webrtc/VideoEncoder$BitrateAllocation",&DAT_00dba028);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = &local_90;
  FUN_00ad8450(&local_70,param_3,uVar3,"<init>","([[I)V",&DAT_00dba020);
  uVar2 = FUN_004b8418(param_3,uVar3,local_50,uVar2);
  *param_1 = uVar2;
  param_1[1] = param_3;
  FUN_00ad843c(&local_70);
  FUN_00ada608(&local_80,param_3);
  return;
}


// ===== 00ae83fc  FUN_00ae83fc =====

void * FUN_00ae83fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/VideoEncoder",&DAT_00db9f98);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_1,uVar1,"createNative",&DAT_001a4f3c,&DAT_00dba040);
  pvVar2 = (void *)FUN_00ad87a4(param_1,*param_2,local_40,param_3);
  FUN_00ad843c(&local_60);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0xde0);
    FUN_00ae601c(pvVar2,param_1,param_2);
  }
  return pvVar2;
}


// ===== 00ae84c8  FUN_00ae84c8 =====

void FUN_00ae84c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  
  ppuStack_48 = &local_50;
  puStack_40 = auStack_80;
  uStack_38 = 0xffffff80ffffffd8;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x3b0))();
  return;
}


// ===== 00ae8548  FUN_00ae8548 =====

undefined8 * FUN_00ae8548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if ((param_2[1] & 1) != 0) {
      puVar1 = (undefined8 *)param_2[2];
    }
    FUN_0060adc4(param_1 + 1,puVar1,(long)(param_2[1] << 1) >> 2);
    puVar1 = param_2 + 8;
    if ((param_2[7] & 1) != 0) {
      puVar1 = (undefined8 *)param_2[8];
    }
    FUN_007d51b0(param_1 + 7,puVar1,(long)(param_2[7] << 1) >> 2);
    puVar1 = param_2 + 0xb;
    if ((param_2[10] & 1) != 0) {
      puVar1 = (undefined8 *)param_2[0xb];
    }
    FUN_007d51b0(param_1 + 10,puVar1,(long)(param_2[10] << 1) >> 2);
    puVar1 = param_2 + 0xe;
    if ((param_2[0xd] & 1) != 0) {
      puVar1 = (undefined8 *)param_2[0xe];
    }
    FUN_008ad1a4(param_1 + 0xd,puVar1,(long)(param_2[0xd] << 2) >> 3);
  }
  FUN_009858ac(param_1 + 0x16,param_2 + 0x16);
  param_1[0x19] = param_2[0x19];
  return param_1;
}


// ===== 00ae8618  FUN_00ae8618 =====

void FUN_00ae8618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  if (param_1 != param_2) {
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      operator_delete((void *)param_1[3]);
    }
    param_1[2] = param_2[2];
    uVar3 = param_2[6];
    uVar1 = param_2[5];
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[5] = uVar1;
    param_1[4] = uVar5;
    param_1[3] = uVar4;
    param_2[2] = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      operator_delete((void *)param_1[9]);
    }
    param_1[8] = param_2[8];
    uVar1 = param_2[0xb];
    uVar4 = param_2[10];
    uVar3 = param_2[9];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[10] = uVar4;
    param_1[9] = uVar3;
    param_2[8] = 0;
  }
  plVar2 = param_1 + 0xd;
  if (*plVar2 != 0) {
    FUN_00ae8714(plVar2);
    operator_delete((void *)param_1[0xd]);
    *plVar2 = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}


// ===== 00ae8714  FUN_00ae8714 =====

void FUN_00ae8714(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  do {
    do {
      while( true ) {
        lVar3 = lVar2;
        if (lVar1 == lVar3) {
          param_1[1] = lVar1;
          return;
        }
        lVar2 = lVar3 + -0x68;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((*(byte *)(lVar3 + -0x18) & 1) == 0) break;
        operator_delete(*(void **)(lVar3 + -0x10));
        if ((*(byte *)(lVar3 + -0x30) & 1) != 0) goto LAB_00ae8794;
LAB_00ae8774:
        if ((*(byte *)(lVar3 + -0x60) & 1) != 0) goto LAB_00ae87a8;
      }
      if ((*(byte *)(lVar3 + -0x30) & 1) == 0) goto LAB_00ae8774;
LAB_00ae8794:
      operator_delete(*(void **)(lVar3 + -0x28));
    } while ((*(byte *)(lVar3 + -0x60) & 1) == 0);
LAB_00ae87a8:
    operator_delete(*(void **)(lVar3 + -0x58));
  } while( true );
}


// ===== 00ae87cc  FUN_00ae87cc =====

void FUN_00ae87cc(long *param_1)

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
      FUN_00ae8c3c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00ae9160(&local_50,lVar5);
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
      FUN_00ae8c3c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00ae8ec4(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00ae89b4(param_1,&local_50);
  return;
}


// ===== 00ae89b4  FUN_00ae89b4 =====

void FUN_00ae89b4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ae8c24;
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
LAB_00ae8c24:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae8c3c  FUN_00ae8c3c =====

void FUN_00ae8c3c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ae8eac;
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
LAB_00ae8eac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae8ec4  FUN_00ae8ec4 =====

void FUN_00ae8ec4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ae9148;
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
LAB_00ae9148:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae9160  FUN_00ae9160 =====

void FUN_00ae9160(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ae93e4;
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
LAB_00ae93e4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ae93fc  Java_org_webrtc_VideoTrack_nativeAddSink =====

void Java_org_webrtc_VideoTrack_nativeAddSink
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined1 auStack_60 [64];
  
  FUN_007bfa40(auStack_60);
  (**(code **)(*param_3 + 0x48))(param_3,param_4,auStack_60);
  FUN_007bfb14(auStack_60);
  return;
}


// ===== 00ae9454  Java_org_webrtc_VideoTrack_nativeFreeSink =====

void Java_org_webrtc_VideoTrack_nativeFreeSink(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ae9468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 00ae9470  Java_org_webrtc_VideoTrack_nativeRemoveSink =====

void Java_org_webrtc_VideoTrack_nativeRemoveSink
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00ae9484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x50))(param_3,param_4);
  return;
}


// ===== 00ae9488  Java_org_webrtc_VideoTrack_nativeWrapSink =====

void Java_org_webrtc_VideoTrack_nativeWrapSink
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_28;
  
  local_28 = param_3;
  pvVar1 = operator_new(0x10);
  FUN_00ae94d8(pvVar1,param_1,&local_28);
  FUN_00adde38(pvVar1);
  return;
}


// ===== 00ae94d8  FUN_00ae94d8 =====

void FUN_00ae94d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d42388;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00ae94f4  FUN_00ae94f4 =====

void FUN_00ae94f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42388;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00ae9508  FUN_00ae9508 =====

void FUN_00ae9508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42388;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00ae9544  FUN_00ae9544 =====

void FUN_00ae9544(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = thunk_FUN_00ad9fc4();
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00aea0b8(&local_70,uVar1,param_2);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoSink",&DAT_00dba078);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onFrame","(Lorg/webrtc/VideoFrame;)V",&DAT_00dba070);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  FUN_00ad843c(&local_60);
  FUN_00aea33c(uVar1,&local_70);
  FUN_00ada608(&local_70,puStack_68);
  return;
}


// ===== 00ae9620  Java_org_webrtc_YuvHelper_nativeABGRToI420 =====

void Java_org_webrtc_YuvHelper_nativeABGRToI420
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  uVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_7);
  uVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_9);
  FUN_007c0054(uVar1,param_4,uVar2,param_6,uVar3,param_8,uVar4,param_10);
  return;
}


// ===== 00ae9710  Java_org_webrtc_YuvHelper_nativeCopyPlane =====

void Java_org_webrtc_YuvHelper_nativeCopyPlane
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  FUN_007c069c(uVar1,param_4,uVar2,param_6,param_7,param_8);
  return;
}


// ===== 00ae97a0  Java_org_webrtc_YuvHelper_nativeI420Copy =====

void Java_org_webrtc_YuvHelper_nativeI420Copy
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  uVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_7);
  uVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_9);
  (**(code **)(*param_1 + 0x730))(param_1,param_11);
  (**(code **)(*param_1 + 0x730))(param_1,param_13);
  FUN_007bfbd4(uVar1,param_4,uVar2,param_6,uVar3,param_8,uVar4,param_10);
  return;
}


// ===== 00ae98e0  Java_org_webrtc_YuvHelper_nativeI420Rotate =====

void Java_org_webrtc_YuvHelper_nativeI420Rotate
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  uVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_7);
  uVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_9);
  (**(code **)(*param_1 + 0x730))(param_1,param_11);
  (**(code **)(*param_1 + 0x730))(param_1,param_13);
  FUN_007c0ea8(uVar1,param_4,uVar2,param_6,uVar3,param_8,uVar4,param_10);
  return;
}


// ===== 00ae9a30  Java_org_webrtc_YuvHelper_nativeI420ToNV12 =====

void Java_org_webrtc_YuvHelper_nativeI420ToNV12
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_5);
  uVar3 = (**(code **)(*param_1 + 0x730))(param_1,param_7);
  uVar4 = (**(code **)(*param_1 + 0x730))(param_1,param_9);
  (**(code **)(*param_1 + 0x730))(param_1,param_11);
  FUN_007c04e4(uVar1,param_4,uVar2,param_6,uVar3,param_8,uVar4,param_10);
  return;
}


// ===== 00ae9b4c  FUN_00ae9b4c =====

undefined8 FUN_00ae9b4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/VideoFrame",&DAT_00dba088);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"getTimestampNs",&DAT_001a78d2,&DAT_00dba080);
  uVar1 = FUN_00ad87a4(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return uVar1;
}


// ===== 00ae9bec  FUN_00ae9bec =====

void FUN_00ae9bec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_80,param_2,uVar4,"getBufferType",&DAT_001bb71e,&DAT_00dba090);
  iVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  if (iVar1 == 0) {
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_80;
    FUN_00ad8450(&local_80,param_2,uVar4,"retain",&DAT_001ebb20,&DAT_00dba110);
    FUN_004c2120(param_2,*param_3,local_60);
    FUN_00ad843c(&local_80);
    FUN_00aea9f0(&local_80,param_2,param_3);
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_80;
    FUN_00ad8450(&local_80,param_2,uVar4,"getWidth",&DAT_001bb71e,&DAT_00dba0a0);
    uVar2 = FUN_004c1718(param_2,*param_3,local_60);
    FUN_00ad843c(&local_80);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_80;
    FUN_00ad8450(&local_80,param_2,uVar4,"getHeight",&DAT_001bb71e,&DAT_00dba0a8);
    uVar3 = FUN_004c1718(param_2,*param_3,local_60);
    FUN_00ad843c(&local_80);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_80;
    FUN_00ad8450(&local_80,param_2,uVar4,"retain",&DAT_001ebb20,&DAT_00dba110);
    FUN_004c2120(param_2,*param_3,local_60);
    FUN_00ad843c(&local_80);
    FUN_00aea3d4(&local_80,param_2,uVar2,uVar3,param_3);
  }
  *param_1 = local_80;
  return;
}


// ===== 00ae9e98  FUN_00ae9e98 =====

void FUN_00ae9e98(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame",&DAT_00dba088);
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = (undefined1 *)&local_130;
  FUN_00ad8450(&local_130,param_2,uVar2,"getBuffer","()Lorg/webrtc/VideoFrame$Buffer;",&DAT_00dba100
              );
  local_60 = FUN_004a41b4(param_2,*param_3,local_110);
  uStack_58 = param_2;
  FUN_00ad843c(&local_130);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame",&DAT_00dba088);
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = (undefined1 *)&local_130;
  FUN_00ad8450(&local_130,param_2,uVar2,"getRotation",&DAT_001bb71e,&DAT_00dba108);
  uVar1 = FUN_004c1718(param_2,*param_3,local_110);
  FUN_00ad843c(&local_130);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame",&DAT_00dba088);
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = (undefined1 *)&local_130;
  FUN_00ad8450(&local_130,param_2,uVar2,"getTimestampNs",&DAT_001a78d2,&DAT_00dba080);
  lVar3 = FUN_00ad87a4(param_2,*param_3,local_110);
  FUN_00ad843c(&local_130);
  local_68 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00ae9bec(&local_68,param_2,&local_60);
  FUN_007beb5c(&local_130);
  uVar2 = FUN_007bed3c(&local_130,&local_68);
  uVar2 = FUN_007bedb4(uVar2,param_4);
  uVar2 = FUN_007bed94(uVar2,lVar3 / 1000000);
  FUN_007bedd8(uVar2,uVar1);
  FUN_007bebfc(param_1);
  FUN_007bebac(&local_130);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  FUN_00ada608(&local_60,param_2);
  return;
}


// ===== 00aea0b8  FUN_00aea0b8 =====

void FUN_00aea0b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_007bf464(&local_28,param_3);
  iVar2 = (**(code **)(*local_28 + 0x28))();
  if (iVar2 == 0) {
    local_80 = 0;
    local_78 = 0;
    local_78 = FUN_00ada514(&local_80,0,local_28[2]);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = auStack_90;
    FUN_00ad8450(&local_70,param_2,uVar3,"retain",&DAT_001ebb20,&DAT_00dba110);
    FUN_004c2120(param_2,local_80,local_50);
    FUN_00ad843c(&local_70);
    lVar4 = *(long *)(param_3 + 0x20);
    uVar1 = *(undefined4 *)(param_3 + 0x48);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame",&DAT_00dba088);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = auStack_90;
    FUN_00ad8450(&local_70,param_2,uVar3,"<init>","(Lorg/webrtc/VideoFrame$Buffer;IJ)V",
                 &DAT_00dba118);
    uVar3 = FUN_004b8418(param_2,uVar3,local_50,local_80,uVar1,lVar4 * 1000);
    *param_1 = uVar3;
    param_1[1] = param_2;
    FUN_00ad843c(&local_70);
    FUN_00ada608(&local_80,local_78);
  }
  else {
    (**(code **)(*local_28 + 0x40))(&local_88);
    FUN_00aeafa8(&local_80,param_2,&local_88);
    lVar4 = *(long *)(param_3 + 0x20);
    uVar1 = *(undefined4 *)(param_3 + 0x48);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame",&DAT_00dba088);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = auStack_90;
    FUN_00ad8450(&local_70,param_2,uVar3,"<init>","(Lorg/webrtc/VideoFrame$Buffer;IJ)V",
                 &DAT_00dba118);
    uVar3 = FUN_004b8418(param_2,uVar3,local_50,local_80,uVar1,lVar4 * 1000);
    *param_1 = uVar3;
    param_1[1] = param_2;
    FUN_00ad843c(&local_70);
    FUN_00ada608(&local_80,local_78);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00aea33c  FUN_00aea33c =====

void FUN_00aea33c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/VideoFrame",&DAT_00dba088);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"release",&DAT_001ebb20,&DAT_00dba120);
  FUN_004c2120(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return;
}


// ===== 00aea3d4  FUN_00aea3d4 =====

void FUN_00aea3d4(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  uVar5 = *param_5;
  *puVar2 = &PTR_FUN_00d42488;
  *(undefined4 *)(puVar2 + 1) = param_3;
  *(undefined4 *)((long)puVar2 + 0xc) = param_4;
  puVar2[2] = 0;
  FUN_00ada590(puVar2 + 2,param_2,uVar5);
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar5,"getDataY","()Ljava/nio/ByteBuffer;",&DAT_00dba0b0);
  uVar5 = FUN_004a41b4(param_2,*param_5,local_70);
  local_a0 = uVar5;
  local_98 = param_2;
  FUN_00ad843c(&local_90);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar3,"getDataU","()Ljava/nio/ByteBuffer;",&DAT_00dba0c0);
  uVar3 = FUN_004a41b4(param_2,*param_5,local_70);
  local_b0 = uVar3;
  plStack_a8 = param_2;
  FUN_00ad843c(&local_90);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getDataV","()Ljava/nio/ByteBuffer;",&DAT_00dba0c8);
  uVar4 = FUN_004a41b4(param_2,*param_5,local_70);
  local_c0 = uVar4;
  plStack_b8 = param_2;
  FUN_00ad843c(&local_90);
  uVar5 = (**(code **)(*param_2 + 0x730))(param_2,uVar5);
  lVar6 = *param_2;
  puVar2[3] = uVar5;
  uVar5 = (**(code **)(lVar6 + 0x730))(param_2,uVar3);
  lVar6 = *param_2;
  puVar2[4] = uVar5;
  uVar5 = (**(code **)(lVar6 + 0x730))(param_2,uVar4);
  puVar2[5] = uVar5;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar5,"getStrideY",&DAT_001bb71e,&DAT_00dba0d0);
  uVar1 = FUN_004c1718(param_2,*param_5,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)(puVar2 + 6) = uVar1;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar5,"getStrideU",&DAT_001bb71e,&DAT_00dba0d8);
  uVar1 = FUN_004c1718(param_2,*param_5,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$I420Buffer",&DAT_00dba0b8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_90,param_2,uVar5,"getStrideV",&DAT_001bb71e,&DAT_00dba0e0);
  uVar1 = FUN_004c1718(param_2,*param_5,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)(puVar2 + 7) = uVar1;
  FUN_00ada608(&local_c0,param_2);
  FUN_00ada608(&local_b0,param_2);
  FUN_00ada608(&local_a0,local_98);
  *(undefined4 *)((long)puVar2 + 0x3c) = 0;
  *puVar2 = &PTR_FUN_00d423c0;
  *param_1 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 0x3c);
  }
  return;
}


// ===== 00aea77c  FUN_00aea77c =====

void FUN_00aea77c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x3c);
  return;
}


// ===== 00aea7a0  FUN_00aea7a0 =====

bool FUN_00aea7a0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x3c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00aea7f8  FUN_00aea7f8 =====

void FUN_00aea7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  *param_1 = &PTR_FUN_00d42488;
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar1,uVar2,"release",&DAT_001ebb20,&DAT_00dba0e8);
  FUN_004c2120(uVar1,param_1[2],local_30);
  FUN_00ad843c(&local_50);
  FUN_00ada650(param_1 + 2);
  return;
}


// ===== 00aea8a8  FUN_00aea8a8 =====

void FUN_00aea8a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  *param_1 = &PTR_FUN_00d42488;
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar2,"release",&DAT_001ebb20,&DAT_00dba0e8);
  FUN_004c2120(uVar1,param_1[2],local_40);
  FUN_00ad843c(&local_60);
  FUN_00ada650(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00aea970  FUN_00aea970 =====

undefined4 FUN_00aea970(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00aea97c  FUN_00aea97c =====

undefined4 FUN_00aea97c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 00aea988  FUN_00aea988 =====

undefined4 FUN_00aea988(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 00aea994  FUN_00aea994 =====

undefined4 FUN_00aea994(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}


// ===== 00aea9a0  FUN_00aea9a0 =====

undefined4 FUN_00aea9a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 00aea9ac  FUN_00aea9ac =====

undefined8 FUN_00aea9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00aea9b8  FUN_00aea9b8 =====

undefined8 FUN_00aea9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00aea9c4  FUN_00aea9c4 =====

undefined8 FUN_00aea9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00aea9d0  FUN_00aea9d0 =====

bool FUN_00aea9d0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x3c) == 1;
}


// ===== 00aea9e8  FUN_00aea9e8 =====

void FUN_00aea9e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xaea9f0);
  (*pcVar1)();
}


// ===== 00aea9f0  FUN_00aea9f0 =====

void FUN_00aea9f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = &PTR_FUN_00d425d0;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_80,param_2,uVar3,"getWidth",&DAT_001bb71e,&DAT_00dba0a0);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  *(undefined4 *)(puVar2 + 1) = uVar1;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_80,param_2,uVar3,"getHeight",&DAT_001bb71e,&DAT_00dba0a8);
  uVar1 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  uVar3 = *param_3;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  puVar2[2] = 0;
  FUN_00ada590(puVar2 + 2,param_2,uVar3);
  *(undefined4 *)(puVar2 + 3) = 0;
  *puVar2 = &PTR_FUN_00d42548;
  *param_1 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 3);
  }
  return;
}


// ===== 00aeab74  FUN_00aeab74 =====

void FUN_00aeab74(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x18);
  return;
}


// ===== 00aeab98  FUN_00aeab98 =====

bool FUN_00aeab98(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 3);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00aeabf0  FUN_00aeabf0 =====

void FUN_00aeabf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  *param_1 = &PTR_FUN_00d425d0;
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar1,uVar2,"release",&DAT_001ebb20,&DAT_00dba0e8);
  FUN_004c2120(uVar1,param_1[2],local_30);
  FUN_00ad843c(&local_50);
  FUN_00ada650(param_1 + 2);
  return;
}


// ===== 00aeaca0  FUN_00aeaca0 =====

void FUN_00aeaca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  *param_1 = &PTR_FUN_00d425d0;
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar2,"release",&DAT_001ebb20,&DAT_00dba0e8);
  FUN_004c2120(uVar1,param_1[2],local_40);
  FUN_00ad843c(&local_60);
  FUN_00ada650(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00aead68  FUN_00aead68 =====

undefined8 FUN_00aead68(void)

{
  return 0;
}


// ===== 00aead74  FUN_00aead74 =====

undefined4 FUN_00aead74(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ===== 00aead80  FUN_00aead80 =====

undefined4 FUN_00aead80(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 00aead8c  FUN_00aead8c =====

void FUN_00aead8c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"toI420","()Lorg/webrtc/VideoFrame$I420Buffer;",&DAT_00dba0f0);
  lVar3 = FUN_004a41b4(uVar1,*(undefined8 *)(param_2 + 0x10),local_40);
  local_70 = lVar3;
  uStack_68 = uVar1;
  FUN_00ad843c(&local_60);
  if (lVar3 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    FUN_00aea3d4(&local_60,uVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 &local_70);
    puVar4 = local_60;
  }
  *param_1 = puVar4;
  FUN_00ada608(&local_70,uVar1);
  return;
}


// ===== 00aeae70  FUN_00aeae70 =====

void FUN_00aeae70(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_b0 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoFrame$Buffer",&DAT_00dba098);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)local_b0;
  FUN_00ad8450(&local_90,uVar1,uVar2,"cropAndScale","(IIIIII)Lorg/webrtc/VideoFrame$Buffer;",
               &DAT_00dba0f8);
  local_b0[0] = param_8;
  local_a0 = FUN_004a41b4(uVar1,*(undefined8 *)(param_2 + 0x10),local_70,param_3,param_4,param_5,
                          param_6,param_7);
  uStack_98 = uVar1;
  FUN_00ad843c(&local_90);
  FUN_00aea9f0(&local_90,uVar1,&local_a0);
  *param_1 = local_90;
  FUN_00ada608(&local_a0,uVar1);
  return;
}


// ===== 00aeaf88  FUN_00aeaf88 =====

bool FUN_00aeaf88(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 00aeafa0  FUN_00aeafa0 =====

void FUN_00aeafa0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xaeafa8);
  (*pcVar1)();
}


// ===== 00aeafa8  FUN_00aeafa8 =====

void FUN_00aeafa8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_e0 [2];
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
  iVar1 = (**(code **)(*(long *)*param_3 + 0x80))((long *)*param_3);
  iVar2 = (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3);
  FUN_00ad9c24(&local_a0,param_2,uVar8,(long)(iVar2 * iVar1));
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar8 = (**(code **)(*(long *)*param_3 + 0xa0))();
  iVar1 = (**(code **)(*(long *)*param_3 + 0x88))((long *)*param_3);
  iVar2 = FUN_007bf72c(*param_3);
  FUN_00ad9c24(&local_b0,param_2,uVar8,(long)(iVar2 * iVar1));
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar8 = (**(code **)(*(long *)*param_3 + 0xa8))();
  iVar1 = (**(code **)(*(long *)*param_3 + 0x90))((long *)*param_3);
  iVar2 = FUN_007bf72c(*param_3);
  FUN_00ad9c24(&local_c0,param_2,uVar8,(long)(iVar2 * iVar1));
  uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
  uVar4 = (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3);
  uVar5 = (**(code **)(*(long *)*param_3 + 0x80))((long *)*param_3);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x88))((long *)*param_3);
  uVar7 = (**(code **)(*(long *)*param_3 + 0x90))((long *)*param_3);
  uVar8 = FUN_00adde38(*param_3);
  uVar9 = FUN_00adaed8(param_2,"org/webrtc/WrappedNativeI420Buffer",&DAT_00dba130);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)local_e0;
  FUN_00ad8450(&local_90,param_2,uVar9,"<init>",
               "(IILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;IJ)V",
               &DAT_00dba128);
  local_d8 = local_c0;
  local_e0[0] = uVar6;
  local_d0 = uVar7;
  local_c8 = uVar8;
  uVar8 = FUN_004b8418(param_2,uVar9,local_70,uVar3,uVar4,local_a0,uVar5,local_b0);
  *param_1 = uVar8;
  param_1[1] = param_2;
  FUN_00ad843c(&local_90);
  FUN_00ada608(&local_c0,puStack_b8);
  FUN_00ada608(&local_b0,puStack_a8);
  FUN_00ada608(&local_a0,puStack_98);
  return;
}


// ===== 00aeb250  Java_org_webrtc_LibvpxVp9Decoder_nativeCreateDecoder =====

void Java_org_webrtc_LibvpxVp9Decoder_nativeCreateDecoder(void)

{
  FUN_00a3cc9c();
  FUN_00adde38();
  return;
}


// ===== 00aeb26c  Java_org_webrtc_LibvpxVp9Decoder_nativeIsSupported =====

bool Java_org_webrtc_LibvpxVp9Decoder_nativeIsSupported(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_48;
  void *local_40;
  
  FUN_00a3cc40(&local_48,0);
  pvVar3 = local_40;
  pvVar2 = local_48;
  if (local_48 != (void *)0x0) {
    while (pvVar2 != local_40) {
      pvVar1 = (void *)((long)local_40 + -0x60);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007b6d78(pvVar1);
      local_40 = pvVar1;
    }
    local_40 = pvVar2;
    operator_delete(local_48);
  }
  return pvVar2 != pvVar3;
}


// ===== 00aeb308  Java_org_webrtc_LibvpxVp9Encoder_nativeCreate =====

void Java_org_webrtc_LibvpxVp9Encoder_nativeCreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00a3cc60(param_3,0);
  FUN_00adde38();
  return;
}


// ===== 00aeb32c  Java_org_webrtc_LibvpxVp9Encoder_nativeIsSupported =====

bool Java_org_webrtc_LibvpxVp9Encoder_nativeIsSupported(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_48;
  void *local_40;
  
  FUN_00a3cc40(&local_48,0);
  pvVar3 = local_40;
  pvVar2 = local_48;
  if (local_48 != (void *)0x0) {
    while (pvVar2 != local_40) {
      pvVar1 = (void *)((long)local_40 + -0x60);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007b6d78(pvVar1);
      local_40 = pvVar1;
    }
    local_40 = pvVar2;
    operator_delete(local_48);
  }
  return pvVar2 != pvVar3;
}


// ===== 00aeb3c8  Java_org_webrtc_Environment_nativeCreate =====

void Java_org_webrtc_Environment_nativeCreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *****ppppplVar1;
  long ****pppplVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 local_58;
  long ****local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_58 = param_3;
  uVar4 = FUN_00adc1a8(param_1,&local_58);
  if ((uVar4 & 1) == 0) {
    FUN_00adc4e0(&local_50,param_1,&local_58);
    pvVar6 = operator_new(0x38);
    ppppplVar1 = (long *****)local_50;
    if (-1 < local_40) {
      uStack_48 = (ulong)local_40._7_1_;
      ppppplVar1 = &local_50;
    }
    FUN_00aeb7ac(pvVar6,ppppplVar1,uStack_48);
    if ((char)local_40._7_1_ < '\0') {
      operator_delete(local_50);
    }
  }
  else {
    pvVar6 = (void *)0x0;
  }
  pvVar5 = operator_new(0x28);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = (long ****)0x0;
  uStack_38 = 0;
  local_40 = 0;
  FUN_008b5e88(&local_50,pvVar6);
  FUN_008b60e8(pvVar5,&local_50);
  pppplVar2 = local_50;
  if ((local_50 != (long ****)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_50 + 1), iVar3 == 1)) {
    (*(code *)(*pppplVar2)[1])(pppplVar2);
  }
  FUN_00adde38(pvVar5);
  return;
}


// ===== 00aeb4c4  Java_org_webrtc_Environment_nativeFree =====

void Java_org_webrtc_Environment_nativeFree
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    plVar2 = (long *)*param_3;
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 00aeb528  FUN_00aeb528 =====

undefined8 FUN_00aeb528(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *__s;
  undefined *puVar6;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  void *local_80 [2];
  char cStack_69;
  void *local_68;
  char cStack_51;
  
  if (param_2 != (undefined *)0x0) {
    do {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      pvVar2 = memchr(param_1,0x2f,(size_t)param_2);
      puVar6 = (undefined *)0x0;
      __s = param_1;
      puVar3 = &DAT_001b3348;
      if ((pvVar2 != (void *)0x0) &&
         (puVar5 = (undefined *)((long)pvVar2 - (long)param_1),
         puVar5 != (undefined *)0xffffffffffffffff)) {
        if (param_2 <= puVar5) goto LAB_00aeb6c0;
        param_2 = param_2 + -(long)(puVar5 + 1);
        __s = param_1 + (long)(puVar5 + 1);
        puVar3 = param_1;
        puVar6 = puVar5;
      }
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = puVar3;
      puStack_88 = puVar6;
      puVar3 = (undefined *)memchr(__s,0x2f,(size_t)param_2);
      if (puVar3 == (undefined *)0x0) {
        return 0;
      }
      puVar5 = puVar3 + -(long)__s;
      if (puVar5 == (undefined *)0xffffffffffffffff) {
        return 0;
      }
      if (param_2 <= puVar5) {
LAB_00aeb6c0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:436: libc++ Hardening assertion __n <= size() failed: remove_prefix() can\'t remove more than size()\n"
                  );
      }
      if ((puVar6 == (undefined *)0x0) || (puVar3 == __s)) {
        return 0;
      }
      local_a0 = __s;
      puStack_98 = puVar5;
      FUN_00aeba2c(local_80,&local_90,&local_a0);
      lVar4 = FUN_00aebba0(param_3,local_80,local_80);
      if (cStack_51 < '\0') {
        operator_delete(local_68);
      }
      if (cStack_69 < '\0') {
        operator_delete(local_80[0]);
      }
      puVar3 = (undefined *)(long)*(char *)(lVar4 + 0x2f);
      if ((long)puVar3 < 0) {
        pvVar2 = *(void **)(lVar4 + 0x18);
        puVar3 = *(undefined **)(lVar4 + 0x20);
      }
      else {
        pvVar2 = (void *)(lVar4 + 0x18);
      }
      if (puStack_98 != puVar3) {
        return 0;
      }
      iVar1 = memcmp(local_a0,pvVar2,(size_t)puStack_98);
      if (iVar1 != 0) {
        return 0;
      }
      param_2 = param_2 + -(long)(puVar5 + 1);
      param_1 = __s + (long)(puVar5 + 1);
    } while (param_2 != (undefined *)0x0);
  }
  return 1;
}


// ===== 00aeb6d4  FUN_00aeb6d4 =====

/* WARNING: Removing unreachable block (ram,0x00aeb730) */
/* WARNING: Removing unreachable block (ram,0x00aeb74c) */

void FUN_00aeb6d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar3;
  if (puVar3 != (undefined8 *)param_1[1]) {
    puVar2 = (undefined8 *)param_1[1] + -3;
    do {
      puVar1 = puVar2 + -3;
      if (puVar2 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        operator_delete((void *)*puVar2);
      }
      puVar2 = puVar2 + -6;
    } while (puVar1 != puVar3);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar2);
  return;
}


// ===== 00aeb7ac  FUN_00aeb7ac =====

void FUN_00aeb7ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d42650;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = FUN_00aeb528(param_2,param_3);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/field_trials.cc",0x45,"Parse(s, key_value_map_)",&DAT_001f5fa0);
}


// ===== 00aeb814  FUN_00aeb814 =====

void FUN_00aeb814(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_3;
  uStack_28 = param_4;
  auVar4 = FUN_00aec8bc(param_2 + 0x20,&local_30);
  lVar1 = auVar4._0_8_;
  if ((lVar1 == auVar4._8_8_) || (*(long *)(param_2 + 0x28) == lVar1)) {
    FUN_005d3510(param_1,&DAT_001b3348);
  }
  else if (*(char *)(lVar1 + 0x2f) < '\0') {
    FUN_005478d8(param_1,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    param_1[2] = *(undefined8 *)(lVar1 + 0x28);
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  return;
}


// ===== 00aeb8a4  FUN_00aeb8a4 =====

/* WARNING: Removing unreachable block (ram,0x00aeb914) */

void FUN_00aeb8a4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d42650;
  FUN_00aeb6d4(param_1 + 4);
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3c510;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[2];
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    } while (pvVar2 != pvVar3);
    pvVar1 = (void *)param_1[1];
  }
  param_1[2] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00aeb974  FUN_00aeb974 =====

void FUN_00aeb974(void *param_1)

{
  FUN_00aeb8a4();
  operator_delete(param_1);
  return;
}


// ===== 00aeb9a4  FUN_00aeb9a4 =====

long * FUN_00aeb9a4(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  *plVar1 = (long)(PTR_DAT_00d53030 + 0x10);
  FUN_00843ef4(plVar1 + 1,param_1 + 1);
  *plVar1 = (long)&PTR_FUN_00d42650;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[6] = 0;
  if (plVar1 != param_1) {
    FUN_00aec400();
  }
  return plVar1;
}


// ===== 00aeba2c  FUN_00aeba2c =====

void FUN_00aeba2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar4 = param_2[1];
  if (uVar4 < 0x7ffffffffffffff7) {
    param_2 = (undefined8 *)*param_2;
    if (uVar4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
      puVar3 = param_1;
    }
    else {
      uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined8 *)operator_new(uVar2);
      *param_1 = puVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if ((undefined8 *)((long)puVar3 + uVar4) < puVar3) {
LAB_00aebb74:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || ((undefined8 *)((long)puVar3 + uVar4) <= param_2)) {
      memmove(puVar3,param_2,uVar4);
      *(undefined1 *)((long)puVar3 + uVar4) = 0;
      uVar4 = param_3[1];
      if (0x7ffffffffffffff6 < uVar4) goto LAB_00aebb9c;
      param_3 = (undefined8 *)*param_3;
      if (uVar4 < 0x17) {
        puVar3 = param_1 + 3;
        *(char *)((long)param_1 + 0x2f) = (char)uVar4;
      }
      else {
        uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined8 *)operator_new(uVar2);
        param_1[3] = puVar3;
        param_1[4] = uVar4;
        param_1[5] = uVar2 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar3 + uVar4) < puVar3) goto LAB_00aebb74;
      if ((param_3 < puVar3) || ((undefined8 *)((long)puVar3 + uVar4) <= param_3)) {
        memmove(puVar3,param_3,uVar4);
        *(undefined1 *)((long)puVar3 + uVar4) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00aebb9c:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00aebba0  FUN_00aebba0 =====

undefined1  [16] FUN_00aebba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *__s1;
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  puVar8 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar4 - (long)puVar8;
  if (lVar5 != 0) {
    uVar11 = (lVar5 >> 4) * -0x5555555555555555;
    puVar2 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      uVar12 = uVar11 >> 1;
      puVar10 = puVar8 + uVar12 * 6;
      __s1 = (undefined8 *)*puVar10;
      uVar6 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        __s1 = puVar10;
        uVar6 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
      sVar3 = uVar1;
      if (uVar6 <= uVar1) {
        sVar3 = uVar6;
      }
      iVar7 = memcmp(__s1,puVar2,sVar3);
      if (iVar7 == 0) {
        if (uVar6 < uVar1) goto LAB_00aebc08;
      }
      else if (iVar7 < 0) {
LAB_00aebc08:
        puVar8 = puVar10 + 6;
        uVar12 = uVar11 + ~uVar12;
      }
      uVar11 = uVar12;
    } while (uVar11 != 0);
  }
  if (puVar8 != puVar4) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar2 = (undefined8 *)*puVar8;
    uVar11 = puVar8[1];
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      puVar2 = puVar8;
      uVar11 = (ulong)*(byte *)((long)puVar8 + 0x17);
    }
    sVar3 = uVar11;
    if (uVar1 <= uVar11) {
      sVar3 = uVar1;
    }
    iVar7 = memcmp(puVar4,puVar2,sVar3);
    if (iVar7 == 0) {
      if (uVar11 <= uVar1) goto LAB_00aebcd0;
    }
    else if (-1 < iVar7) {
LAB_00aebcd0:
      uVar9 = 0;
      goto LAB_00aebcd4;
    }
  }
  puVar8 = (undefined8 *)FUN_00aebcfc(param_1,puVar8,param_3);
  uVar9 = 1;
LAB_00aebcd4:
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = puVar8;
  return auVar13;
}


// ===== 00aebcfc  FUN_00aebcfc =====

undefined8 * FUN_00aebcfc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__dest;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar9 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar12 = param_3[1];
      uVar11 = *param_3;
      puVar1[2] = param_3[2];
      puVar1[1] = uVar12;
      *puVar1 = uVar11;
      uVar12 = param_3[4];
      uVar11 = param_3[3];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      puVar1[5] = param_3[5];
      puVar1[4] = uVar12;
      puVar1[3] = uVar11;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[3] = 0;
      param_1[1] = (long)(puVar1 + 6);
    }
    else {
      uVar11 = *param_3;
      uVar3 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      uVar12 = param_3[2];
      uVar4 = param_3[3];
      param_3[2] = 0;
      param_3[3] = 0;
      uVar2 = param_3[4];
      uVar5 = param_3[5];
      param_3[4] = 0;
      param_3[5] = 0;
      FUN_00aebf38(param_1,param_2,param_1[1],param_2 + 6);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        operator_delete((void *)*param_2);
      }
      *param_2 = uVar11;
      param_2[1] = uVar3;
      param_2[2] = uVar12;
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        operator_delete((void *)param_2[3]);
      }
      param_2[3] = uVar4;
      param_2[4] = uVar2;
      param_2[5] = uVar5;
    }
  }
  else {
    lVar10 = *param_1;
    uVar7 = ((long)puVar1 - lVar10 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar7) {
      FUN_00aec3e8();
LAB_00aebf34:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_80 = (void *)0x0;
    lVar6 = param_1[2] - lVar10 >> 4;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    if (uVar8 != 0) {
      if (0x555555555555555 < uVar8) goto LAB_00aebf34;
      local_80 = operator_new(uVar8 * 0x30);
    }
    pvStack_68 = (void *)((long)local_80 + uVar8 * 0x30);
    local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar10));
    local_70 = local_78;
    FUN_00aec098(&local_80,param_3);
    puVar9 = local_78;
    memcpy(local_70,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_78 - __n);
    local_70 = (undefined8 *)((long)local_70 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_80 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_68;
    param_1[1] = (long)local_70;
    local_78 = (undefined8 *)local_80;
    local_70 = (undefined8 *)local_80;
    pvStack_68 = (void *)lVar10;
    FUN_00aec314(&local_80);
  }
  return puVar9;
}


// ===== 00aebf38  FUN_00aebf38 =====

/* WARNING: Removing unreachable block (ram,0x00aec008) */
/* WARNING: Removing unreachable block (ram,0x00aec04c) */

void FUN_00aebf38(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)((long)puVar4 + (param_2 - (long)param_4));
  puVar3 = puVar4;
  puVar1 = puVar2;
  while( true ) {
    if (param_3 <= puVar1) {
      *(undefined8 **)(param_1 + 8) = puVar3;
      if (puVar4 != param_4) {
        lVar6 = 0;
        do {
          puVar3 = (undefined8 *)((long)puVar2 + lVar6 + -0x30);
          uVar8 = *(undefined8 *)((long)puVar2 + lVar6 + -0x28);
          uVar7 = *puVar3;
          *(undefined8 *)((long)puVar4 + lVar6 + -0x20) =
               *(undefined8 *)((long)puVar2 + lVar6 + -0x20);
          *(undefined8 *)((long)puVar4 + lVar6 + -0x28) = uVar8;
          *(undefined8 *)((long)puVar4 + lVar6 + -0x30) = uVar7;
          *(undefined1 *)((long)puVar2 + lVar6 + -0x19) = 0;
          *(undefined1 *)puVar3 = 0;
          lVar5 = lVar6 + -0x30;
          uVar8 = *(undefined8 *)((long)puVar2 + lVar6 + -0x10);
          uVar7 = *(undefined8 *)((long)puVar2 + lVar6 + -0x18);
          *(undefined8 *)((long)puVar4 + lVar6 + -8) = *(undefined8 *)((long)puVar2 + lVar6 + -8);
          *(undefined8 *)((long)puVar4 + lVar6 + -0x10) = uVar8;
          *(undefined8 *)((long)puVar4 + lVar6 + -0x18) = uVar7;
          *(undefined1 *)((long)puVar2 + lVar6 + -1) = 0;
          *(undefined1 *)((long)puVar2 + lVar6 + -0x18) = 0;
          lVar6 = lVar5;
        } while ((long)param_4 - (long)puVar4 != lVar5);
      }
      return;
    }
    if (puVar3 == (undefined8 *)0x0) break;
    uVar8 = puVar1[1];
    uVar7 = *puVar1;
    puVar3[2] = puVar1[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    uVar8 = puVar1[4];
    uVar7 = puVar1[3];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar3[5] = puVar1[5];
    puVar3[4] = uVar8;
    puVar3[3] = uVar7;
    puVar3 = puVar3 + 6;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00aec098  FUN_00aec098 =====

void FUN_00aec098(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *local_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar11 = (undefined8 *)param_1[3];
  puVar8 = (undefined8 *)param_1[2];
  if (puVar11 == puVar8) {
    puVar7 = (undefined8 *)param_1[1];
    puVar13 = (undefined1 *)*param_1;
    if ((long)puVar7 - (long)puVar13 == 0) {
      uVar4 = ((long)puVar11 - (long)puVar13 >> 4) * 0x5555555555555556;
      puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (puVar8 == puVar7) {
        uVar4 = 1;
      }
      if (0x555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar4 * 0x30);
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x30);
      puVar6 = puVar5;
      puVar10 = puVar8;
      if ((long)puVar8 - (long)puVar7 != 0) {
        puVar6 = (undefined8 *)((long)puVar5 + ((long)puVar8 - (long)puVar7));
        puVar11 = puVar5;
        do {
          if (puVar11 == (undefined8 *)0x0) goto LAB_00aec2fc;
          uVar12 = puVar7[1];
          uVar9 = *puVar7;
          puVar11[2] = puVar7[2];
          puVar11[1] = uVar12;
          *puVar11 = uVar9;
          uVar12 = puVar7[4];
          uVar9 = puVar7[3];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar11[5] = puVar7[5];
          puVar11[4] = uVar12;
          puVar11[3] = uVar9;
          puVar11 = puVar11 + 6;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[3] = 0;
          puVar7 = puVar7 + 6;
        } while (puVar11 != puVar6);
        puVar7 = (undefined8 *)param_1[1];
        puVar13 = (undefined1 *)*param_1;
        puVar11 = (undefined8 *)param_1[3];
        puVar10 = (undefined8 *)param_1[2];
      }
      *param_1 = pvVar2;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar4 * 0x30);
      local_70 = puVar13;
      puStack_68 = puVar7;
      puStack_60 = puVar10;
      puStack_58 = puVar11;
      FUN_00aec314(&local_70);
    }
    else {
      lVar3 = (((long)puVar7 - (long)puVar13 >> 4) * -0x5555555555555555 + 1) / 2;
      if (puVar7 == puVar8) {
        puVar8 = puVar7 + lVar3 * -6;
      }
      else {
        do {
          puVar11 = puVar7 + lVar3 * -6;
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            operator_delete((void *)*puVar11);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
          }
          uVar12 = puVar7[1];
          uVar9 = *puVar7;
          puVar11[2] = puVar7[2];
          cVar1 = *(char *)((long)puVar11 + 0x2f);
          puVar11[1] = uVar12;
          *puVar11 = uVar9;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          *(undefined1 *)puVar7 = 0;
          if (cVar1 < '\0') {
            operator_delete((void *)puVar11[3]);
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
          }
          uVar12 = puVar7[4];
          uVar9 = puVar7[3];
          puVar11[5] = puVar7[5];
          puVar11[4] = uVar12;
          puVar11[3] = uVar9;
          *(undefined1 *)((long)puVar7 + 0x2f) = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
          puVar7 = puVar7 + 6;
        } while (puVar7 != puVar8);
        puVar8 = puVar7 + lVar3 * -6;
        puVar7 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar7 + lVar3 * -6;
      param_1[2] = puVar8;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar12 = param_2[1];
    uVar9 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar12;
    *puVar8 = uVar9;
    uVar12 = param_2[4];
    uVar9 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar8[5] = param_2[5];
    puVar8[4] = uVar12;
    puVar8[3] = uVar9;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    param_1[2] = puVar8 + 6;
    return;
  }
LAB_00aec2fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00aec314  FUN_00aec314 =====

/* WARNING: Removing unreachable block (ram,0x00aec364) */
/* WARNING: Removing unreachable block (ram,0x00aec380) */

void FUN_00aec314(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar1 != puVar3) {
    puVar2 = puVar3 + -3;
    do {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        operator_delete((void *)*puVar3);
      }
      puVar2 = puVar3 + -6;
    } while (puVar3 + -3 != puVar1);
    puVar3 = puVar3 + -3;
  }
  param_1[2] = puVar3;
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00aec3e8  FUN_00aec3e8 =====

void FUN_00aec3e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00aec400  FUN_00aec400 =====

/* WARNING: Removing unreachable block (ram,0x00aec76c) */
/* WARNING: Removing unreachable block (ram,0x00aec788) */
/* WARNING: Removing unreachable block (ram,0x00aec680) */
/* WARNING: Removing unreachable block (ram,0x00aec69c) */

void FUN_00aec400(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((param_1[2] - (long)puVar9 >> 4) * -0x5555555555555555)) {
    puVar7 = (undefined8 *)param_1[1];
    lVar4 = (long)puVar7 - (long)puVar9;
    if ((ulong)((lVar4 >> 4) * -0x5555555555555555) < param_4) {
      lVar8 = param_2;
      if (puVar7 != puVar9) {
        lVar8 = param_2 + lVar4;
        do {
          FUN_00aec7e4(puVar9,param_2);
          lVar4 = lVar4 + -0x30;
          param_2 = param_2 + 0x30;
          puVar9 = puVar9 + 6;
        } while (lVar4 != 0);
        puVar7 = (undefined8 *)param_1[1];
      }
      if (lVar8 != param_3) {
        lVar4 = 0;
        do {
          puVar9 = (undefined8 *)((long)puVar7 + lVar4);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00aec6e4;
          puVar3 = (undefined8 *)(lVar8 + lVar4);
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            FUN_005478d8(puVar9,*(undefined8 *)(lVar8 + lVar4),((undefined8 *)(lVar8 + lVar4))[1]);
          }
          else {
            uVar10 = puVar3[1];
            uVar5 = *puVar3;
            puVar9[2] = puVar3[2];
            puVar9[1] = uVar10;
            *puVar9 = uVar5;
          }
          lVar1 = lVar8 + lVar4;
          if (*(char *)(lVar1 + 0x2f) < '\0') {
            FUN_005478d8((long)puVar7 + lVar4 + 0x18,*(undefined8 *)(lVar1 + 0x18),
                         *(undefined8 *)(lVar1 + 0x20));
          }
          else {
            uVar10 = *(undefined8 *)(lVar1 + 0x20);
            uVar5 = *(undefined8 *)(lVar1 + 0x18);
            *(undefined8 *)((long)puVar7 + lVar4 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)((long)puVar7 + lVar4 + 0x20) = uVar10;
            *(undefined8 *)((long)puVar7 + lVar4 + 0x18) = uVar5;
          }
          lVar4 = lVar4 + 0x30;
        } while (lVar8 + lVar4 != param_3);
        puVar7 = (undefined8 *)((long)puVar7 + lVar4);
      }
      param_1[1] = (long)puVar7;
      return;
    }
    if (param_2 != param_3) {
      do {
        FUN_00aec7e4(puVar9,param_2);
        param_2 = param_2 + 0x30;
        puVar9 = puVar9 + 6;
      } while (param_2 != param_3);
      puVar7 = (undefined8 *)param_1[1];
    }
    if (puVar9 != puVar7) {
      puVar7 = puVar7 + -3;
      do {
        puVar3 = puVar7 + -3;
        if (puVar7 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          operator_delete((void *)*puVar7);
        }
        puVar7 = puVar7 + -6;
      } while (puVar3 != puVar9);
    }
LAB_00aec6b0:
    param_1[1] = (long)puVar9;
    return;
  }
  FUN_00aec710(param_1);
  if (param_4 < 0x555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    if (uVar6 < 0x555555555555556) {
      puVar9 = (undefined8 *)operator_new(uVar6 * 0x30);
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)(puVar9 + uVar6 * 6);
      if (param_2 != param_3) {
        lVar4 = 0;
        do {
          puVar7 = (undefined8 *)((long)puVar9 + lVar4);
          if (puVar7 == (undefined8 *)0x0) {
LAB_00aec6e4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar3 = (undefined8 *)(param_2 + lVar4);
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            FUN_005478d8(puVar7,*(undefined8 *)(param_2 + lVar4),
                         ((undefined8 *)(param_2 + lVar4))[1]);
          }
          else {
            uVar10 = *puVar3;
            uVar5 = puVar3[2];
            puVar7[1] = puVar3[1];
            *puVar7 = uVar10;
            puVar7[2] = uVar5;
          }
          lVar8 = param_2 + lVar4;
          if (*(char *)(lVar8 + 0x2f) < '\0') {
            FUN_005478d8((long)puVar9 + lVar4 + 0x18,*(undefined8 *)(lVar8 + 0x18),
                         *(undefined8 *)(lVar8 + 0x20));
          }
          else {
            uVar10 = *(undefined8 *)(lVar8 + 0x18);
            uVar5 = *(undefined8 *)(lVar8 + 0x28);
            *(undefined8 *)((long)puVar9 + lVar4 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
            *(undefined8 *)((long)puVar9 + lVar4 + 0x18) = uVar10;
            *(undefined8 *)((long)puVar9 + lVar4 + 0x28) = uVar5;
          }
          lVar4 = lVar4 + 0x30;
        } while (param_2 + lVar4 != param_3);
        puVar9 = (undefined8 *)((long)puVar9 + lVar4);
      }
      goto LAB_00aec6b0;
    }
  }
  puVar9 = (undefined8 *)FUN_00aec3e8();
  puVar7 = (undefined8 *)*puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    puVar3 = puVar7;
    if (puVar7 != (undefined8 *)puVar9[1]) {
      puVar3 = (undefined8 *)puVar9[1] + -3;
      do {
        puVar2 = puVar3 + -3;
        if (puVar3 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar3 = puVar3 + -6;
      } while (puVar2 != puVar7);
      puVar3 = (undefined8 *)*puVar9;
    }
    puVar9[1] = puVar7;
    operator_delete(puVar3);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
  }
  return;
}


// ===== 00aec710  FUN_00aec710 =====

/* WARNING: Removing unreachable block (ram,0x00aec76c) */
/* WARNING: Removing unreachable block (ram,0x00aec788) */

void FUN_00aec710(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
    if (puVar3 != (undefined8 *)param_1[1]) {
      puVar2 = (undefined8 *)param_1[1] + -3;
      do {
        puVar1 = puVar2 + -3;
        if (puVar2 == (undefined8 *)0x18) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          operator_delete((void *)*puVar2);
        }
        puVar2 = puVar2 + -6;
      } while (puVar1 != puVar3);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar3;
    operator_delete(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 00aec7e4  FUN_00aec7e4 =====

undefined8 * FUN_00aec7e4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_00547f08(param_1,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
    bVar2 = *(byte *)((long)param_2 + 0x2f);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      uVar1 = param_2[4];
      puVar3 = (undefined8 *)param_2[3];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 3;
      }
      FUN_00547f08(param_1 + 3,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 3,param_2[3],param_2[4]);
    }
    else {
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[3] = uVar4;
    }
  }
  return param_1;
}


// ===== 00aec8bc  FUN_00aec8bc =====

undefined1  [16] FUN_00aec8bc(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *__s1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar4 = (long)puVar2 - (long)puVar8;
  if (lVar4 != 0) {
    __s1 = (void *)*param_2;
    uVar3 = param_2[1];
    uVar9 = (lVar4 >> 4) * -0x5555555555555555;
    do {
      uVar10 = uVar9 >> 1;
      puVar11 = puVar8 + uVar10 * 6;
      puVar7 = (undefined8 *)*puVar11;
      uVar5 = puVar11[1];
      if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
        puVar7 = puVar11;
        uVar5 = (ulong)*(byte *)((long)puVar11 + 0x17);
      }
      sVar1 = uVar5;
      if (uVar3 <= uVar5) {
        sVar1 = uVar3;
      }
      iVar6 = memcmp(__s1,puVar7,sVar1);
      if (iVar6 == 0) {
        if (uVar5 < uVar3) goto LAB_00aec908;
      }
      else if (0 < iVar6) {
LAB_00aec908:
        puVar8 = puVar11 + 6;
        uVar10 = uVar9 + ~uVar10;
      }
      uVar9 = uVar10;
    } while (uVar9 != 0);
  }
  puVar7 = puVar8;
  if (puVar8 != puVar2) {
    uVar3 = param_2[1];
    puVar2 = (undefined8 *)*puVar8;
    uVar9 = puVar8[1];
    if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
      puVar2 = puVar8;
      uVar9 = (ulong)*(byte *)((long)puVar8 + 0x17);
    }
    sVar1 = uVar9;
    if (uVar3 <= uVar9) {
      sVar1 = uVar3;
    }
    iVar6 = memcmp((void *)*param_2,puVar2,sVar1);
    if (iVar6 == 0) {
      if (uVar3 < uVar9) goto LAB_00aec9b4;
    }
    else if (iVar6 < 0) goto LAB_00aec9b4;
    puVar7 = puVar8 + 6;
  }
LAB_00aec9b4:
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar8;
  return auVar12;
}


// ===== 00aec9d8  Java_org_webrtc_audio_JavaAudioDeviceModule_nativeCreateAudioDeviceModule =====

undefined8
Java_org_webrtc_audio_JavaAudioDeviceModule_nativeCreateAudioDeviceModule
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
          undefined4 param_9,char param_10,char param_11)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = 0xaaaaaaaa00000000;
  uStack_58 = 0;
  local_80 = 0xaaaaaaaa00000000;
  local_50 = 0;
  uStack_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_a8 = param_6;
  uStack_a0 = param_5;
  local_98 = param_4;
  uStack_90 = param_3;
  FUN_00aecc74(param_1,&uStack_90,&local_98,param_8,param_9,param_10 != '\0',param_11 != '\0',
               &local_60,&local_80);
  pvVar2 = operator_new(0x98);
  FUN_00aee100(pvVar2,param_1,param_7,&local_60,0x96,&uStack_a0);
  pvVar3 = operator_new(0x90);
  FUN_00aef3dc(pvVar3,param_1,param_7,&local_80,&local_a8);
  FUN_00aed00c(&local_88,param_7,5,param_10 != '\0',param_11 != '\0',0x96,pvVar2,pvVar3);
  plVar1 = local_88;
  local_88 = (long *)0x0;
  uVar4 = FUN_00adde38(plVar1);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 8))(local_88);
  }
  return uVar4;
}


// ===== 00aecb14  FUN_00aecb14 =====

void FUN_00aecb14(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8360(&local_60,param_2,uVar1,"getAudioManager",
               "(Landroid/content/Context;)Landroid/media/AudioManager;",&DAT_00dba138);
  uVar1 = FUN_004aecec(param_2,uVar1,local_40,*param_3);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  return;
}


// ===== 00aecbc4  FUN_00aecbc4 =====

undefined4 FUN_00aecbc4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8360(&local_60,param_1,uVar2,"getSampleRate","(Landroid/media/AudioManager;)I",
               &DAT_00dba148);
  uVar1 = FUN_00ad83bc(param_1,uVar2,local_40,*param_2);
  FUN_00ad843c(&local_60);
  return uVar1;
}


// ===== 00aecc74  FUN_00aecc74 =====

void FUN_00aecc74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5
                 ,ulong param_6,ulong param_7,int *param_8,int *param_9)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  uVar5 = 1;
  if ((param_7 & 1) != 0) {
    uVar5 = 2;
  }
  uVar6 = 1;
  if ((param_6 & 1) != 0) {
    uVar6 = 2;
  }
  local_98 = (ulong)uVar6;
  uVar4 = FUN_00adaed8(param_1,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = auStack_a0;
  FUN_00ad8360(&local_90,param_1,uVar4,"getOutputBufferSize",
               "(Landroid/content/Context;Landroid/media/AudioManager;II)I",&DAT_00dba150);
  iVar2 = FUN_00ad83bc(param_1,uVar4,local_70,*param_2,*param_3,param_5,(ulong)uVar5);
  FUN_00ad843c(&local_90);
  uVar4 = FUN_00adaed8(param_1,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = auStack_a0;
  FUN_00ad8360(&local_90,param_1,uVar4,"getInputBufferSize",
               "(Landroid/content/Context;Landroid/media/AudioManager;II)I",&DAT_00dba158);
  uVar1 = local_98;
  iVar3 = FUN_00ad83bc(param_1,uVar4,local_70,*param_2,*param_3,param_4,local_98 & 0xffffffff);
  FUN_00ad843c(&local_90);
  *param_9 = param_5;
  *(ulong *)(param_9 + 2) = (ulong)uVar5;
  *(long *)(param_9 + 4) = (long)iVar2;
  *(long *)(param_9 + 6) = (long)(param_5 / 100);
  *param_8 = param_4;
  *(ulong *)(param_8 + 2) = uVar1;
  *(long *)(param_8 + 4) = (long)iVar3;
  *(long *)(param_8 + 6) = (long)(param_4 / 100);
  if (0 < param_4) {
    if ((0 < *param_9) && (*(long *)(param_9 + 2) != 0)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x289,
                 "output_parameters->is_valid()",&DAT_001f5fa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x288,
               "input_parameters->is_valid()",&DAT_001f5fa0);
}


// ===== 00aecea4  FUN_00aecea4 =====

bool FUN_00aecea4(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8360(&local_60,param_1,uVar2,"isLowLatencyInputSupported","(Landroid/content/Context;)Z",
               &DAT_00dba160);
  cVar1 = FUN_00ae84c8(param_1,uVar2,local_40,*param_2);
  FUN_00ad843c(&local_60);
  return cVar1 != '\0';
}


// ===== 00aecf58  FUN_00aecf58 =====

bool FUN_00aecf58(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/audio/WebRtcAudioManager",&DAT_00dba140);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8360(&local_60,param_1,uVar2,"isLowLatencyOutputSupported","(Landroid/content/Context;)Z",
               &DAT_00dba168);
  cVar1 = FUN_00ae84c8(param_1,uVar2,local_40,*param_2);
  FUN_00ad843c(&local_60);
  return cVar1 != '\0';
}


// ===== 00aed00c  FUN_00aed00c =====

void FUN_00aed00c(undefined8 *param_1,long *param_2,undefined4 param_3,byte param_4,byte param_5,
                 undefined2 param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  lVar2 = *param_2;
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[2];
  lVar2 = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  *(undefined4 *)(puVar1 + 7) = param_3;
  *(byte *)((long)puVar1 + 0x3c) = param_4 & 1;
  puVar1[4] = lVar3;
  puVar1[3] = lVar2;
  puVar1[6] = lVar5;
  puVar1[5] = lVar4;
  *(byte *)((long)puVar1 + 0x3d) = param_5 & 1;
  *(undefined2 *)((long)puVar1 + 0x3e) = param_6;
  puVar1[8] = param_7;
  puVar1[9] = param_8;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  if (param_7 != 0) {
    if (param_8 != 0) {
      *(undefined4 *)((long)puVar1 + 0x5c) = 0;
      *puVar1 = &PTR_FUN_00d42688;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d0f740(1,(long)puVar1 + 0x5c);
      }
      *param_1 = puVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x51,"output_",
                 &DAT_001f5fa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x50,"input_",
               &DAT_001f5fa0);
}


// ===== 00aed128  FUN_00aed128 =====

void FUN_00aed128(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x5c);
  return;
}


// ===== 00aed14c  FUN_00aed14c =====

bool FUN_00aed14c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x5c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00aed1a4  FUN_00aed1a4 =====

void FUN_00aed1a4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d428b0;
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
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00aed240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00aed254  FUN_00aed254 =====

void FUN_00aed254(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d428b0;
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
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00aed300  FUN_00aed300 =====

undefined8 FUN_00aed300(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  return 0;
}


// ===== 00aed314  FUN_00aed314 =====

void FUN_00aed314(long param_1)

{
  FUN_0099b30c(*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 00aed320  FUN_00aed320 =====

undefined8 FUN_00aed320(long param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  pvVar3 = operator_new(400);
  FUN_0099b0c0(pvVar3,param_1 + 0x10,0);
  plVar4 = *(long **)(param_1 + 0x50);
  *(void **)(param_1 + 0x50) = pvVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    pvVar3 = *(void **)(param_1 + 0x50);
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),pvVar3);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x48))
            (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50));
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
      if (iVar2 == 0) {
        uVar7 = 0;
        bVar1 = true;
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
        bVar1 = false;
        uVar7 = 2;
      }
    }
    else {
      bVar1 = false;
      uVar7 = 1;
    }
    lVar5 = FUN_0066631c("WebRTC.Audio.InitializationResult",0x21,4);
    if (lVar5 != 0) {
      FUN_00666568(lVar5,uVar7);
    }
    if (!bVar1) {
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_device_module.cc",
                     0x3d3,"Audio device initialization failed.");
      }
      return 0xffffffff;
    }
  }
  return 0;
}


// ===== 00aed464  FUN_00aed464 =====

uint FUN_00aed464(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))(*(long **)(param_1 + 0x48));
    plVar3 = *(long **)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x58) = 0;
    uVar2 = uVar2 | uVar1;
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00aed4ec  FUN_00aed4ec =====

undefined1 FUN_00aed4ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}


// ===== 00aed4f8  FUN_00aed4f8 =====

undefined8 FUN_00aed4f8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x4a9
                 ,"output: ",1);
  }
  return 1;
}


// ===== 00aed540  FUN_00aed540 =====

undefined8 FUN_00aed540(void)

{
  return 1;
}


// ===== 00aed54c  FUN_00aed54c =====

void FUN_00aed54c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aed55c  FUN_00aed55c =====

void FUN_00aed55c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aed56c  FUN_00aed56c =====

undefined8 FUN_00aed56c(void)

{
  return 0;
}


// ===== 00aed578  FUN_00aed578 =====

void FUN_00aed578(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aed588  FUN_00aed588 =====

undefined8 FUN_00aed588(void)

{
  return 0xffffffff;
}


// ===== 00aed594  FUN_00aed594 =====

undefined8 FUN_00aed594(void)

{
  return 0;
}


// ===== 00aed5a0  FUN_00aed5a0 =====

void FUN_00aed5a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aed5b0  FUN_00aed5b0 =====

undefined8 FUN_00aed5b0(void)

{
  return 0xffffffff;
}


// ===== 00aed5bc  FUN_00aed5bc =====

undefined8 FUN_00aed5bc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}


// ===== 00aed5d0  FUN_00aed5d0 =====

int FUN_00aed5d0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xa8))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[9] + 0x20))();
      lVar3 = FUN_0066631c("WebRTC.Audio.InitPlayoutSuccess",0x1f,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,iVar1 == 0);
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed65c  FUN_00aed65c =====

void FUN_00aed65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aed66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
  return;
}


// ===== 00aed670  FUN_00aed670 =====

undefined8 FUN_00aed670(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}


// ===== 00aed684  FUN_00aed684 =====

int FUN_00aed684(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xc0))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[8] + 0x20))();
      lVar3 = FUN_0066631c("WebRTC.Audio.InitRecordingSuccess",0x21,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,iVar1 == 0);
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed710  FUN_00aed710 =====

void FUN_00aed710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aed720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
  return;
}


// ===== 00aed724  FUN_00aed724 =====

int FUN_00aed724(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xd8))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[9] + 0x30))();
      lVar3 = FUN_0066631c("WebRTC.Audio.StartPlayoutSuccess",0x20,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,iVar1 == 0);
      }
      if (iVar1 == 0) {
        FUN_0099b378(param_1[10]);
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed7bc  FUN_00aed7bc =====

int FUN_00aed7bc(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xd8))();
    if ((uVar2 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_device_module.cc",
                     0x8a1,"StopPlayout");
      }
      FUN_0099b5f4(param_1[10]);
      iVar1 = (**(code **)(*(long *)param_1[9] + 0x38))();
      lVar3 = FUN_0066631c("WebRTC.Audio.StopPlayoutSuccess",0x1f,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,iVar1 == 0);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed878  FUN_00aed878 =====

void FUN_00aed878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aed888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x40))();
  return;
}


// ===== 00aed88c  FUN_00aed88c =====

int FUN_00aed88c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xf0))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[8] + 0x30))();
      lVar3 = FUN_0066631c("WebRTC.Audio.StartRecordingSuccess",0x22,2);
      if (lVar3 != 0) {
        FUN_00666568(lVar3,iVar1 == 0);
      }
      if (iVar1 == 0) {
        FUN_0099b4b4(param_1[10]);
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed924  FUN_00aed924 =====

int FUN_00aed924(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_0099b71c(*(undefined8 *)(param_1 + 0x50));
    iVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
    lVar2 = FUN_0066631c("WebRTC.Audio.StopRecordingSuccess",0x21,2);
    if (lVar2 != 0) {
      FUN_00666568(lVar2,iVar1 == 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 00aed9a0  FUN_00aed9a0 =====

void FUN_00aed9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aed9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x40))();
  return;
}


// ===== 00aed9b4  FUN_00aed9b4 =====

int FUN_00aed9b4(long param_1)

{
  return -(*(byte *)(param_1 + 0x58) ^ 1);
}


// ===== 00aed9c8  FUN_00aed9c8 =====

undefined1 FUN_00aed9c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}


// ===== 00aed9d4  FUN_00aed9d4 =====

int FUN_00aed9d4(long param_1)

{
  return -(*(byte *)(param_1 + 0x58) ^ 1);
}


// ===== 00aed9e8  FUN_00aed9e8 =====

undefined1 FUN_00aed9e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}


// ===== 00aed9f4  FUN_00aed9f4 =====

undefined8 FUN_00aed9f4(long param_1,byte *param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    bVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x48))();
    *param_2 = bVar1 & 1;
    return 0;
  }
  return 0xffffffff;
}


// ===== 00aeda50  FUN_00aeda50 =====

undefined8 FUN_00aeda50(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00aeda6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x50))();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00aeda78  FUN_00aeda78 =====

undefined8 FUN_00aeda78(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x58))();
    if ((uVar1 >> 0x20 & 1) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *param_2 = (int)uVar1;
    }
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00aedadc  FUN_00aedadc =====

undefined8 FUN_00aedadc(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x60))();
    if ((uVar1 >> 0x20 & 1) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *param_2 = (int)uVar1;
    }
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00aedb40  FUN_00aedb40 =====

undefined8 FUN_00aedb40(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x68))();
    if ((uVar1 >> 0x20 & 1) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *param_2 = (int)uVar1;
    }
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00aedba4  FUN_00aedba4 =====

undefined8 FUN_00aedba4(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return 0xffffffff;
}


// ===== 00aedbb4  FUN_00aedbb4 =====

void FUN_00aedbb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedbc4  FUN_00aedbc4 =====

void FUN_00aedbc4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedbd4  FUN_00aedbd4 =====

void FUN_00aedbd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedbe4  FUN_00aedbe4 =====

void FUN_00aedbe4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedbf4  FUN_00aedbf4 =====

void FUN_00aedbf4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc04  FUN_00aedc04 =====

void FUN_00aedc04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc14  FUN_00aedc14 =====

void FUN_00aedc14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc24  FUN_00aedc24 =====

void FUN_00aedc24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc34  FUN_00aedc34 =====

void FUN_00aedc34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc44  FUN_00aedc44 =====

void FUN_00aedc44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aedc54  FUN_00aedc54 =====

undefined8 FUN_00aedc54(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x3c);
  return 0;
}


// ===== 00aedc68  FUN_00aedc68 =====

undefined8 FUN_00aedc68(long param_1,byte param_2)

{
  ulong uVar1;
  
  if (*(byte *)(param_1 + 0x3c) == (param_2 & 1)) {
    return 0;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_device_module.cc",0xe9a
                 ,"changing stereo playout not supported");
  }
  return 0xffffffff;
}


// ===== 00aedcc8  FUN_00aedcc8 =====

undefined8 FUN_00aedcc8(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x3c);
  return 0;
}


// ===== 00aedcdc  FUN_00aedcdc =====

undefined8 FUN_00aedcdc(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x3d);
  return 0;
}


// ===== 00aedcf0  FUN_00aedcf0 =====

undefined8 FUN_00aedcf0(long param_1,byte param_2)

{
  ulong uVar1;
  
  if (*(byte *)(param_1 + 0x3d) == (param_2 & 1)) {
    return 0;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_device_module.cc",0xf72
                 ,"changing stereo recording not supported");
  }
  return 0xffffffff;
}


// ===== 00aedd50  FUN_00aedd50 =====

undefined8 FUN_00aedd50(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x3d);
  return 0;
}


// ===== 00aedd64  FUN_00aedd64 =====

undefined8 FUN_00aedd64(long param_1,ushort *param_2)

{
  *param_2 = *(ushort *)(param_1 + 0x3e) >> 1;
  return 0;
}


// ===== 00aedd7c  FUN_00aedd7c =====

undefined8 FUN_00aedd7c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00aedd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))();
    return uVar1;
  }
  return 0;
}


// ===== 00aedda4  FUN_00aedda4 =====

undefined8 FUN_00aedda4(void)

{
  return 0;
}


// ===== 00aeddb0  FUN_00aeddb0 =====

undefined8 FUN_00aeddb0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00aeddcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x58))();
    return uVar1;
  }
  return 0;
}


// ===== 00aeddd8  FUN_00aeddd8 =====

undefined8 FUN_00aeddd8(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0xb] != '\x01') {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x1d0))();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aede28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[8] + 0x60))((long *)param_1[8],param_2 & 1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x230,
               "BuiltInAECIsAvailable()",&DAT_001fbee0,"HW AEC is not available");
}


// ===== 00aede68  FUN_00aede68 =====

void FUN_00aede68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00aede78  FUN_00aede78 =====

undefined8 FUN_00aede78(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0xb] != '\x01') {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x1e0))();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aedec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[8] + 0x68))((long *)param_1[8],param_2 & 1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_device_module.cc",0x240,
               "BuiltInNSIsAvailable()",&DAT_001fbee0,"HW NS is not available");
}


// ===== 00aedf08  FUN_00aedf08 =====

undefined8 FUN_00aedf08(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00aedf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00aedf30  FUN_00aedf30 =====

void FUN_00aedf30(undefined1 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aedf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x48) + 0x80))();
    return;
  }
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 00aedf58  FUN_00aedf58 =====

bool FUN_00aedf58(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x5c) == 1;
}


// ===== 00aedf70  FUN_00aedf70 =====

void FUN_00aedf70(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xaedf78);
  (*pcVar1)();
}


// ===== 00aedf78  Java_org_webrtc_audio_WebRtcAudioRecord_nativeCacheDirectBufferAddress =====

void Java_org_webrtc_audio_WebRtcAudioRecord_nativeCacheDirectBufferAddress
               (long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x7c9,
                 "OnCacheDirectBufferAddress");
  }
  uVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_4);
  *(undefined8 *)(param_3 + 0x70) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x738))(param_1,param_4);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6276,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x7f1,
                 "direct buffer capacity: ",uVar2);
  }
  *(undefined8 *)(param_3 + 0x78) = uVar2;
  return;
}


// ===== 00aee034  Java_org_webrtc_audio_WebRtcAudioRecord_nativeDataIsRecorded =====

void Java_org_webrtc_audio_WebRtcAudioRecord_nativeDataIsRecorded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00aef148(param_3);
  return;
}


// ===== 00aee040  FUN_00aee040 =====

void FUN_00aee040(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,param_2,uVar1,"<init>",
               "(Landroid/content/Context;Landroid/media/AudioManager;)V",&DAT_00dba170);
  uVar1 = FUN_004b8418(param_2,uVar1,local_50,*param_3,*param_4);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_70);
  return;
}


// ===== 00aee100  FUN_00aee100 =====

void FUN_00aee100(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  *param_1 = &PTR_FUN_00d42ad0;
  lVar4 = *param_3;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_3[4];
  lVar4 = param_3[3];
  lVar8 = param_3[2];
  lVar6 = param_3[1];
  param_1[8] = 0;
  param_1[3] = lVar8;
  param_1[2] = lVar6;
  param_1[5] = lVar5;
  param_1[4] = lVar4;
  param_1[7] = 0;
  FUN_00ada590(param_1 + 8,param_2,*param_6);
  uVar9 = param_4[1];
  uVar7 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined4 *)(param_1 + 0xd) = param_5;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar9;
  param_1[9] = uVar7;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x299,
                 &DAT_001b5801);
  }
  uVar2 = FUN_00adde38(param_1);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_80,param_2,uVar3,"setNativeAudioRecord",&DAT_001cf399,&DAT_00dba180);
  FUN_004c2120(param_2,param_1[8],local_60,uVar2);
  FUN_00ad843c(&local_80);
  return;
}


// ===== 00aee268  FUN_00aee268 =====

void FUN_00aee268(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_00d42ad0;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x2f1,
                 &DAT_0019bdc0);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00ada650(param_1 + 8);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00aee2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00aee310  FUN_00aee310 =====

void FUN_00aee310(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_00d42ad0;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x2f1,
                 &DAT_0019bdc0);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00ada650(param_1 + 8);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00aee3b4  FUN_00aee3b4 =====

undefined8 FUN_00aee3b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x321,
                 &DAT_001ca4e9);
  }
  uVar2 = FUN_00ad9fc4();
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return 0;
}


// ===== 00aee410  FUN_00aee410 =====

undefined8 FUN_00aee410(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x359,
                 "Terminate");
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  return 0;
}


// ===== 00aee470  FUN_00aee470 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00aee470(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x399,
                 "InitRecording");
  }
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    local_a8 = *(long *)(param_1 + 8);
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    if (local_a8 != 0) {
      FUN_00d0f740(1,local_a8 + 8);
    }
    plStack_98 = *(long **)(param_1 + 0x18);
    local_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = *(undefined8 *)(param_1 + 0x20);
    local_80 = (char *)operator_new(0x28);
    uVar3 = s_WebRTC_Audio_InitRecordingDurati_001b27ca._24_8_;
    uVar2 = s_WebRTC_Audio_InitRecordingDurati_001b27ca._16_8_;
    uVar8 = s_WebRTC_Audio_InitRecordingDurati_001b27ca._8_8_;
    uVar6 = s_WebRTC_Audio_InitRecordingDurati_001b27ca._0_8_;
    uStack_70 = _UNK_001f2ca8;
    local_78 = _DAT_001f2ca0;
    if (local_80 + 0x24 < local_80) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((local_80 < "ebRTC.Audio.InitRecordingDurationMs") &&
       ("WebRTC.Audio.InitRecordingDurationMs" < local_80 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    local_80[0x24] = '\0';
    local_80[0x20] = 'o';
    local_80[0x21] = 'n';
    local_80[0x22] = 'M';
    local_80[0x23] = 's';
    *(undefined8 *)(local_80 + 8) = uVar8;
    *(undefined8 *)local_80 = uVar6;
    *(undefined8 *)(local_80 + 0x18) = uVar3;
    *(undefined8 *)(local_80 + 0x10) = uVar2;
    local_68 = (undefined1 *)(**(code **)(*plStack_98 + 0x10))(plStack_98);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = FUN_00adaed8(uVar8,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = auStack_b0;
    FUN_00ad8450(&local_60,uVar8,uVar6,"initRecording","(II)I",&DAT_00dba188);
    uVar4 = FUN_004c1718(uVar8,*(undefined8 *)(param_1 + 0x40),local_40,uVar7,uVar1);
    FUN_00ad843c(&local_60);
    if ((int)uVar4 < 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",
                     0x413,"InitRecording failed");
      }
      uVar7 = 0xffffffff;
    }
    else {
      *(ulong *)(param_1 + 0x80) = (ulong)uVar4;
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6643,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",
                     0x431,"frames_per_buffer: ",*(undefined8 *)(param_1 + 0x80));
      }
      if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x50) * *(long *)(param_1 + 0x80) * 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x89,
                     "direct_buffer_capacity_in_bytes_ == frames_per_buffer_ * bytes_per_frame",
                     &DAT_001fb920,*(long *)(param_1 + 0x78));
      }
      if (*(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x60)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x8a,
                     "frames_per_buffer_ == audio_parameters_.frames_per_10ms_buffer()",
                     &DAT_001fb920);
      }
      uVar7 = 0;
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
    FUN_00aee70c(&local_a8);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


// ===== 00aee70c  FUN_00aee70c =====

void FUN_00aee70c(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))();
  lVar7 = param_1[8];
  uVar5 = 0x7fffffffffffffff;
  if ((lVar3 == 0x7fffffffffffffff || lVar7 == -0x8000000000000000) ||
     ((uVar5 = 0x8000000000000000, lVar3 != -0x8000000000000000 && lVar7 != 0x7fffffffffffffff &&
      (uVar5 = lVar3 - lVar7, -1 < (long)uVar5)))) {
    uVar6 = uVar5 / 1000;
    if (499 < uVar5 % 1000) {
      uVar6 = uVar6 + 1;
    }
  }
  else {
    uVar6 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  lVar3 = DAT_00dba190;
  if (DAT_00dba190 == 0) {
    lVar3 = (long)*(char *)((long)param_1 + 0x3f);
    if (lVar3 < 0) {
      plVar4 = (long *)param_1[5];
      lVar3 = param_1[6];
    }
    else {
      plVar4 = param_1 + 5;
    }
    lVar3 = FUN_006660d0(plVar4,lVar3,1,1000,0x32);
    FUN_00d0f5e0(0,lVar3,&DAT_00dba190);
    if (lVar3 == 0) goto LAB_00aee824;
  }
  FUN_00666568(lVar3,uVar6 & 0xffffffff);
LAB_00aee824:
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_0025431f,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x191,
                 param_1 + 5,&DAT_001c4dc3,uVar6);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
    param_1 = (long *)*param_1;
  }
  else {
    param_1 = (long *)*param_1;
  }
  if ((param_1 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,param_1 + 1), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00aee8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}


// ===== 00aee8d0  FUN_00aee8d0 =====

undefined1 FUN_00aee8d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}


// ===== 00aee8dc  FUN_00aee8dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00aee8dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x4a1,
                 "StartRecording");
  }
  if (((*(byte *)(param_1 + 0x89) & 1) == 0) && (*(char *)(param_1 + 0x88) == '\x01')) {
    local_98 = *(long *)(param_1 + 8);
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    if (local_98 != 0) {
      FUN_00d0f740(1,local_98 + 8);
    }
    plStack_88 = *(long **)(param_1 + 0x18);
    local_90 = *(undefined8 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    local_70 = (char *)operator_new(0x28);
    uVar3 = s_WebRTC_Audio_StartRecordingDurat_001c3f54._16_8_;
    uVar8 = s_WebRTC_Audio_StartRecordingDurat_001c3f54._8_8_;
    uVar6 = s_WebRTC_Audio_StartRecordingDurat_001c3f54._0_8_;
    uStack_60 = _UNK_001f1ab8;
    local_68 = _DAT_001f1ab0;
    if (local_70 + 0x25 < local_70) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((local_70 < "ebRTC.Audio.StartRecordingDurationMs") &&
       ("WebRTC.Audio.StartRecordingDurationMs" < local_70 + 0x25)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar1 = CONCAT35(s_WebRTC_Audio_StartRecordingDurat_001c3f54._29_3_,
                     s_WebRTC_Audio_StartRecordingDurat_001c3f54._24_5_);
    uVar2 = CONCAT53(s_WebRTC_Audio_StartRecordingDurat_001c3f54._32_5_,
                     s_WebRTC_Audio_StartRecordingDurat_001c3f54._29_3_);
    local_70[0x25] = '\0';
    *(undefined8 *)(local_70 + 8) = uVar8;
    *(undefined8 *)local_70 = uVar6;
    *(undefined8 *)(local_70 + 0x18) = uVar1;
    *(undefined8 *)(local_70 + 0x10) = uVar3;
    *(undefined8 *)(local_70 + 0x1d) = uVar2;
    local_58 = (undefined1 *)(**(code **)(*plStack_88 + 0x10))(plStack_88);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = FUN_00adaed8(uVar8,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = auStack_a0;
    FUN_00ad8450(&local_50,uVar8,uVar6,"startRecording",&DAT_001be1bc,&DAT_00dba198);
    cVar4 = FUN_004c17b4(uVar8,*(undefined8 *)(param_1 + 0x40),local_30);
    FUN_00ad843c(&local_50);
    if (cVar4 == '\0') {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",
                     0x513,"StartRecording failed");
      }
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    FUN_00aee70c(&local_98);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


// ===== 00aeeac4  FUN_00aeeac4 =====

undefined8 FUN_00aeeac4(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x551,
                 "StopRecording");
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x89) == '\x01')) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_00adaed8(uVar5,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,uVar5,uVar3,"isAudioConfigVerified",&DAT_001be1bc,&DAT_00dba1a0);
    cVar1 = FUN_004c17b4(uVar5,*(undefined8 *)(param_1 + 0x40),local_30);
    FUN_00ad843c(&local_50);
    if (cVar1 != '\0') {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = FUN_00adaed8(uVar5,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = (undefined1 *)&local_50;
      FUN_00ad8450(&local_50,uVar5,uVar3,"isAudioSourceMatchingRecordingSession",&DAT_001be1bc,
                   &DAT_00dba1a8);
      cVar1 = FUN_004c17b4(uVar5,*(undefined8 *)(param_1 + 0x40),local_30);
      FUN_00ad843c(&local_50);
      lVar4 = FUN_0066631c("WebRTC.Audio.SourceMatchesRecordingSession",0x2a,2);
      if (lVar4 != 0) {
        FUN_00666568(lVar4,cVar1 != '\0');
      }
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",
                     0x5b9,"HISTOGRAM(WebRTC.Audio.SourceMatchesRecordingSession): ",cVar1 != '\0');
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_00adaed8(uVar5,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,uVar5,uVar3,"stopRecording",&DAT_001be1bc,&DAT_00dba1b0);
    cVar1 = FUN_004c17b4(uVar5,*(undefined8 *)(param_1 + 0x40),local_30);
    FUN_00ad843c(&local_50);
    if (cVar1 == '\0') {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",
                     0x5e3,"StopRecording failed");
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
      *(undefined2 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00aeed34  FUN_00aeed34 =====

undefined1 FUN_00aeed34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}


// ===== 00aeed40  FUN_00aeed40 =====

void FUN_00aeed40(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x671,
                 "AttachAudioBuffer");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x691,
                 "SetRecordingSampleRate(",uVar1,&DAT_001ca519);
  }
  FUN_0099b8a4(*(undefined8 *)(param_1 + 0x90),uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x6a9,
                 "SetRecordingChannels(",uVar3,&DAT_001ca519);
  }
  FUN_0099b994(*(undefined8 *)(param_1 + 0x90),uVar3);
  return;
}


// ===== 00aeee20  FUN_00aeee20 =====

bool FUN_00aeee20(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = FUN_00adaed8(uVar3,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar3,uVar2,"isAcousticEchoCancelerSupported",&DAT_001be1bc,&DAT_00dba1b8);
  cVar1 = FUN_004c17b4(uVar3,*(undefined8 *)(param_1 + 0x40),local_30);
  FUN_00ad843c(&local_50);
  return cVar1 != '\0';
}


// ===== 00aeeec8  FUN_00aeeec8 =====

bool FUN_00aeeec8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = FUN_00adaed8(uVar3,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar3,uVar2,"isNoiseSuppressorSupported",&DAT_001be1bc,&DAT_00dba1c0);
  cVar1 = FUN_004c17b4(uVar3,*(undefined8 *)(param_1 + 0x40),local_30);
  FUN_00ad843c(&local_50);
  return cVar1 != '\0';
}


// ===== 00aeef70  FUN_00aeef70 =====

int FUN_00aeef70(long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x731,
                 "EnableBuiltInAEC(",param_2 & 1,&DAT_001ca519);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = FUN_00adaed8(uVar4,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar4,uVar3,"enableBuiltInAEC",&DAT_001be26d,&DAT_00dba1c8);
  cVar1 = FUN_004c17b4(uVar4,*(undefined8 *)(param_1 + 0x40),local_40,param_2 & 1);
  FUN_00ad843c(&local_60);
  return -(uint)(cVar1 == '\0');
}


// ===== 00aef05c  FUN_00aef05c =====

int FUN_00aef05c(long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",0x771,
                 "EnableBuiltInNS(",param_2 & 1,&DAT_001ca519);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = FUN_00adaed8(uVar4,"org/webrtc/audio/WebRtcAudioRecord",&DAT_00dba178);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar4,uVar3,"enableBuiltInNS",&DAT_001be26d,&DAT_00dba1d0);
  cVar1 = FUN_004c17b4(uVar4,*(undefined8 *)(param_1 + 0x40),local_40,param_2 & 1);
  FUN_00ad843c(&local_60);
  return -(uint)(cVar1 == '\0');
}


// ===== 00aef148  FUN_00aef148 =====

void FUN_00aef148(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 in_x4;
  
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 == (long *)0x0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) != 0) {
      return;
    }
    pcVar5 = "AttachAudioBuffer has not been called";
    uVar4 = 0x853;
  }
  else {
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),in_x4,1);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x20))
              (*(long **)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x68),0);
    iVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
    if ((iVar1 != -1) || (uVar3 = FUN_00417e08(), (uVar3 & 1) != 0)) {
      return;
    }
    pcVar5 = "AudioDeviceBuffer::DeliverRecordedData failed";
    uVar4 = 0x8a1;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_record_jni.cc",uVar4,
               pcVar5);
  return;
}


// ===== 00aef21c  Java_org_webrtc_audio_WebRtcAudioTrack_nativeCacheDirectBufferAddress =====

void Java_org_webrtc_audio_WebRtcAudioTrack_nativeCacheDirectBufferAddress
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_4;
  FUN_00af01f4(param_3,param_1,&local_18);
  return;
}


// ===== 00aef254  Java_org_webrtc_audio_WebRtcAudioTrack_nativeGetPlayoutData =====

void Java_org_webrtc_audio_WebRtcAudioTrack_nativeGetPlayoutData
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  plVar2 = *(long **)(param_3 + 0x88);
  if (plVar2 == (long *)0x0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      pcVar5 = "AttachAudioBuffer has not been called";
      uVar4 = 0x843;
      goto LAB_00aef304;
    }
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined8 *)(param_3 + 0x78));
    if (0 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00aef2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_3 + 0x88) + 0x38))
                (*(long **)(param_3 + 0x88),*(undefined8 *)(param_3 + 0x68));
      return;
    }
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      pcVar5 = "AudioDeviceBuffer::RequestPlayoutData failed";
      uVar4 = 0x873;
LAB_00aef304:
      FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",uVar4,
                   pcVar5);
      return;
    }
  }
  return;
}


// ===== 00aef314  FUN_00aef314 =====

void FUN_00aef314(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  undefined8 uVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,param_2,uVar1,"<init>",
               "(Landroid/content/Context;Landroid/media/AudioManager;Z)V",&DAT_00dba1f0);
  uVar1 = FUN_004b8418(param_2,uVar1,local_50,*param_3,*param_4,param_5 & 1);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_70);
  return;
}


// ===== 00aef3dc  FUN_00aef3dc =====

void FUN_00aef3dc(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  *param_1 = &PTR_FUN_00d42b50;
  lVar4 = *param_3;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_3[4];
  lVar4 = param_3[3];
  lVar8 = param_3[2];
  lVar6 = param_3[1];
  param_1[8] = 0;
  param_1[3] = lVar8;
  param_1[2] = lVar6;
  param_1[5] = lVar5;
  param_1[4] = lVar4;
  param_1[7] = 0;
  FUN_00ada590(param_1 + 8,param_2,*param_5);
  uVar9 = param_4[1];
  uVar7 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar9;
  param_1[9] = uVar7;
  *(undefined2 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x1d1,
                 &DAT_001b5801);
  }
  uVar2 = FUN_00adde38(param_1);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,param_2,uVar3,"setNativeAudioTrack",&DAT_001cf399,&DAT_00dba200);
  FUN_004c2120(param_2,param_1[8],local_50,uVar2);
  FUN_00ad843c(&local_70);
  return;
}


// ===== 00aef534  FUN_00aef534 =====

void FUN_00aef534(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_00d42b50;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x229,
                 &DAT_0019bdc0);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00ada650(param_1 + 8);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00aef5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00aef5dc  FUN_00aef5dc =====

void FUN_00aef5dc(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_00d42b50;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x229,
                 &DAT_0019bdc0);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00ada650(param_1 + 8);
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00aef680  FUN_00aef680 =====

undefined8 FUN_00aef680(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x259,
                 &DAT_001ca4e9);
  }
  uVar2 = FUN_00ad9fc4();
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return 0;
}


// ===== 00aef6dc  FUN_00aef6dc =====

undefined8 FUN_00aef6dc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x291,
                 "Terminate");
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  return 0;
}


// ===== 00aef73c  FUN_00aef73c =====

undefined8 FUN_00aef73c(long param_1)

{
  int iVar1;
  char **__nptr;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  char *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x2d1,
                 "InitPlayout");
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (&local_70,*(long **)(param_1 + 0x10),"WebRTC-AudioDevicePlayoutBufferSizeFactor",0x29);
  __nptr = (char **)local_70;
  if (-1 < (long)local_60) {
    __nptr = &local_70;
  }
  dVar10 = strtod((char *)__nptr,(char **)0x0);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  dVar11 = 1.0;
  if (dVar10 != 0.0) {
    dVar11 = dVar10;
  }
  uVar7 = FUN_00adaed8(uVar9,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,uVar9,uVar7,"initPlayout","(IID)I",&DAT_00dba208);
  iVar5 = FUN_004c1718(dVar11,uVar9,*(undefined8 *)(param_1 + 0x40),local_50,uVar2,uVar3);
  FUN_00ad843c(&local_70);
  if (iVar5 < 0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x363,
                   "InitPlayout failed");
    }
    return 0xffffffff;
  }
  iVar1 = 48000;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  lVar8 = DAT_00dba1d8;
  if (DAT_00dba1d8 == 0) {
    lVar8 = FUN_006660d0("WebRTC.Audio.AndroidNativeRequestedAudioBufferSizeMs",0x34,0,1000,100);
    FUN_00d0f5e0(0,lVar8,&DAT_00dba1d8);
    if (lVar8 != 0) goto LAB_00aef8dc;
  }
  else {
LAB_00aef8dc:
    iVar4 = 0;
    if (iVar1 << 1 != 0) {
      iVar4 = (iVar5 * 1000) / (iVar1 << 1);
    }
    FUN_00666568(lVar8,iVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = FUN_00adaed8(uVar7,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,uVar7,uVar9,"getBufferSizeInFrames",&DAT_001bb71e,&DAT_00dba210);
  iVar5 = FUN_004c1718(uVar7,*(undefined8 *)(param_1 + 0x40),local_50);
  FUN_00ad843c(&local_70);
  if (-1 < iVar5) {
    lVar8 = DAT_00dba1e0;
    if (DAT_00dba1e0 == 0) {
      lVar8 = FUN_006660d0("WebRTC.Audio.AndroidNativeAudioBufferSizeMs",0x2b,0,1000,100);
      FUN_00d0f5e0(0,lVar8,&DAT_00dba1e0);
      if (lVar8 == 0) goto LAB_00aef9c8;
    }
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = (iVar5 * 1000) / iVar1;
    }
    FUN_00666568(lVar8,iVar4);
  }
LAB_00aef9c8:
  *(undefined1 *)(param_1 + 0x80) = 1;
  return 0;
}


// ===== 00aefa20  FUN_00aefa20 =====

undefined1 FUN_00aefa20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}


// ===== 00aefa2c  FUN_00aefa2c =====

undefined8 FUN_00aefa2c(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x461,
                 "StartPlayout");
  }
  if (((*(byte *)(param_1 + 0x81) & 1) == 0) && (*(char *)(param_1 + 0x80) == '\x01')) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_00adaed8(uVar4,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,uVar4,uVar3,"startPlayout",&DAT_001be1bc,&DAT_00dba218);
    cVar1 = FUN_004c17b4(uVar4,*(undefined8 *)(param_1 + 0x40),local_30);
    FUN_00ad843c(&local_50);
    if (cVar1 == '\0') {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x4c3
                     ,"StartPlayout failed");
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00aefb58  FUN_00aefb58 =====

undefined8 FUN_00aefb58(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x501,
                 "StopPlayout");
  }
  if ((*(char *)(param_1 + 0x80) != '\x01') || (*(char *)(param_1 + 0x81) != '\x01')) {
    return 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_00adaed8(uVar9,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,uVar9,uVar7,"getBufferSizeInFrames",&DAT_001bb71e,&DAT_00dba210);
  iVar4 = FUN_004c1718(uVar9,*(undefined8 *)(param_1 + 0x40),local_50);
  FUN_00ad843c(&local_70);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_00adaed8(uVar9,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,uVar9,uVar7,"getInitialBufferSizeInFrames",&DAT_001bb71e,&DAT_00dba220);
  iVar5 = FUN_004c1718(uVar9,*(undefined8 *)(param_1 + 0x40),local_50);
  FUN_00ad843c(&local_70);
  iVar1 = *(int *)(param_1 + 0x48);
  lVar8 = DAT_00dba1e8;
  if (DAT_00dba1e8 == 0) {
    lVar8 = FUN_006660d0("WebRTC.Audio.AndroidNativeAudioBufferSizeDifferenceFromInitialMs",0x40,
                         0xfffffe0c,100,100);
    FUN_00d0f5e0(0,lVar8,&DAT_00dba1e8);
    if (lVar8 == 0) goto LAB_00aefd04;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = ((iVar4 - iVar5) * 1000) / iVar1;
  }
  FUN_00666568(lVar8,iVar2);
LAB_00aefd04:
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_00adaed8(uVar9,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_70,uVar9,uVar7,"stopPlayout",&DAT_001be1bc,&DAT_00dba228);
  cVar3 = FUN_004c17b4(uVar9,*(undefined8 *)(param_1 + 0x40),local_50);
  FUN_00ad843c(&local_70);
  if (cVar3 == '\0') {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x593,
                   "StopPlayout failed");
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return uVar7;
}


// ===== 00aefde4  FUN_00aefde4 =====

undefined1 FUN_00aefde4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}


// ===== 00aefdf0  FUN_00aefdf0 =====

undefined8 FUN_00aefdf0(void)

{
  return 1;
}


// ===== 00aefdfc  FUN_00aefdfc =====

int FUN_00aefdfc(long param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x639,
                 "SetSpeakerVolume(",param_2,&DAT_001ca519);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = FUN_00adaed8(uVar4,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar4,uVar3,"setStreamVolume",&DAT_001aa496,&DAT_00dba230);
  cVar1 = FUN_004c17b4(uVar4,*(undefined8 *)(param_1 + 0x40),local_40,param_2);
  FUN_00ad843c(&local_60);
  return -(uint)(cVar1 == '\0');
}


// ===== 00aefee8  FUN_00aefee8 =====

ulong FUN_00aefee8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_00adaed8(uVar3,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar3,uVar1,"getStreamMaxVolume",&DAT_001bb71e,&DAT_00dba238);
  uVar2 = FUN_004c1718(uVar3,*(undefined8 *)(param_1 + 0x40),local_30);
  FUN_00ad843c(&local_50);
  return uVar2 & 0xffffffff | 0x100000000;
}


// ===== 00aeff90  FUN_00aeff90 =====

undefined8 FUN_00aeff90(void)

{
  return 0x100000000;
}


// ===== 00aeff9c  FUN_00aeff9c =====

ulong FUN_00aeff9c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_00adaed8(uVar4,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar4,uVar1,"getStreamVolume",&DAT_001bb71e,&DAT_00dba240);
  uVar2 = FUN_004c1718(uVar4,*(undefined8 *)(param_1 + 0x40),local_30);
  FUN_00ad843c(&local_50);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x6e9,
                 "SpeakerVolume: ",uVar2 & 0xffffffff);
  }
  return uVar2 & 0xffffffff | 0x100000000;
}


// ===== 00af0070  FUN_00af0070 =====

undefined4 FUN_00af0070(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = FUN_00adaed8(uVar3,"org/webrtc/audio/WebRtcAudioTrack",&DAT_00dba1f8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar3,uVar2,"GetPlayoutUnderrunCount",&DAT_001bb71e,&DAT_00dba248);
  uVar1 = FUN_004c1718(uVar3,*(undefined8 *)(param_1 + 0x40),local_30);
  FUN_00ad843c(&local_50);
  return uVar1;
}


// ===== 00af0114  FUN_00af0114 =====

void FUN_00af0114(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x739,
                 "AttachAudioBuffer");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x88) = param_2;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x759,
                 "SetPlayoutSampleRate(",uVar1,&DAT_001ca519);
  }
  FUN_0099b90c(*(undefined8 *)(param_1 + 0x88),uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x771,
                 "SetPlayoutChannels(",uVar3,&DAT_001ca519);
  }
  FUN_0099b9fc(*(undefined8 *)(param_1 + 0x88),uVar3);
  return;
}


// ===== 00af01f4  FUN_00af01f4 =====

void FUN_00af01f4(long param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x7a9,
                 "OnCacheDirectBufferAddress");
  }
  uVar2 = (**(code **)(*param_2 + 0x730))(param_2,*param_3);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x738))(param_2,*param_3);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6276,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x7d1,
                 "direct buffer capacity: ",uVar1);
  }
  uVar4 = *(long *)(param_1 + 0x50) << 1;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar1 / uVar4;
  }
  *(ulong *)(param_1 + 0x70) = uVar1;
  *(ulong *)(param_1 + 0x78) = uVar3;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f6643,"../../sdk/android/src/jni/audio_device/audio_track_jni.cc",0x7f1,
               "frames_per_buffer: ",*(undefined8 *)(param_1 + 0x78));
  return;
}


// ===== 00af02f8  FUN_00af02f8 =====

void FUN_00af02f8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 00af0308  Java_org_webrtc_AudioTrack_nativeSetVolume =====

void Java_org_webrtc_AudioTrack_nativeSetVolume
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_4 + 0x48))(param_4);
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)();
    (**(code **)(*plVar1 + 0x30))(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00af0374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00af0394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000000000 + 0x30))(param_1);
  return;
}


// ===== 00af0398  Java_org_webrtc_CallSessionFileRotatingLogSink_nativeAddSink =====

long * Java_org_webrtc_CallSessionFileRotatingLogSink_nativeAddSink
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined8 **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  local_58 = param_3;
  FUN_00adc4e0(&local_50,param_1,&local_58);
  plVar3 = (long *)operator_new(0x20);
  puVar1 = puStack_48;
  pppuVar2 = (undefined8 ***)local_50;
  if (-1 < (long)local_40) {
    puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
    pppuVar2 = &local_50;
  }
  FUN_005f126c(plVar3,pppuVar2,puVar1,(long)param_4);
  uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00623b7c(2);
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,
                   "../../sdk/android/src/jni/pc/call_session_file_rotating_log_sink.cc",0x132,
                   "Failed to init CallSessionFileRotatingLogSink for path ",&local_50);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  else {
    FUN_00623970(plVar3,param_5);
    plVar3 = (long *)FUN_00adde38(plVar3);
  }
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  return plVar3;
}


// ===== 00af04b0  Java_org_webrtc_CallSessionFileRotatingLogSink_nativeDeleteSink =====

void Java_org_webrtc_CallSessionFileRotatingLogSink_nativeDeleteSink
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_00623a50(param_3);
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af04e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 00af04fc  Java_org_webrtc_CallSessionFileRotatingLogSink_nativeGetLogData =====

/* WARNING: Removing unreachable block (ram,0x00af0640) */

undefined8
Java_org_webrtc_CallSessionFileRotatingLogSink_nativeGetLogData
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined4 uVar3;
  size_t __size;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *local_90;
  long *plStack_88;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 ***local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  plStack_88 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = param_3;
  FUN_00adc4e0(&local_50,param_1,&local_78);
  puVar1 = puStack_48;
  ppppuVar2 = (undefined8 ****)local_50;
  if (-1 < (long)local_40) {
    puVar1 = (undefined1 *)((ulong)local_40 >> 0x38);
    ppppuVar2 = &local_50;
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ad3248(&local_70,ppppuVar2,puVar1);
  __size = FUN_00ad2fe8(&local_70);
  if (__size == 0) {
    uVar6 = FUN_00623b7c(2);
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,
                   "../../sdk/android/src/jni/pc/call_session_file_rotating_log_sink.cc",0x202,
                   "CallSessionFileRotatingStream returns 0 size for path ",&local_50);
    }
    uVar5 = (**(code **)(*param_1 + 0x580))(param_1,0);
    plStack_88 = param_1;
  }
  else {
    pvVar4 = malloc(__size);
    uVar3 = FUN_00ad3184(&local_70,pvVar4,__size);
    uVar5 = (**(code **)(*param_1 + 0x580))(param_1,uVar3);
    plStack_88 = param_1;
    (**(code **)(*param_1 + 0x680))(param_1,uVar5,0,uVar3,pvVar4);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  FUN_00ad2f38(&local_70);
  local_90 = (undefined1 *)0x0;
  FUN_00ada608(&local_90,param_1);
  return uVar5;
}


// ===== 00af067c  Java_org_webrtc_DataChannel_nativeBufferedAmount =====

long Java_org_webrtc_DataChannel_nativeBufferedAmount(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar2 = (long *)FUN_00ad87a4(param_1,param_2,local_30);
  FUN_00ad843c(&local_50);
  lVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (-1 < lVar3) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/pc/data_channel.cc",0x93,
               "buffered_amount <= std::numeric_limits<int64_t>::max()",&DAT_0025435d,lVar3,
               0x7fffffffffffffff,"buffered_amount overflowed jlong!");
}


// ===== 00af0760  Java_org_webrtc_DataChannel_nativeClose =====

void Java_org_webrtc_DataChannel_nativeClose(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar2 = (long *)FUN_00ad87a4(param_1,param_2,local_30);
  FUN_00ad843c(&local_50);
  (**(code **)(*plVar2 + 0xb0))(plVar2);
  return;
}


// ===== 00af080c  Java_org_webrtc_DataChannel_nativeId =====

void Java_org_webrtc_DataChannel_nativeId(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar2 = (long *)FUN_00ad87a4(param_1,param_2,local_30);
  FUN_00ad843c(&local_50);
  (**(code **)(*plVar2 + 0x68))(plVar2);
  return;
}


// ===== 00af08b8  Java_org_webrtc_DataChannel_nativeLabel =====

undefined1 * Java_org_webrtc_DataChannel_nativeLabel(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_50,param_1,uVar2,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar3 = (long *)FUN_00ad87a4(param_1,param_2,local_30);
  FUN_00ad843c(&local_50);
  (**(code **)(*plVar3 + 0x30))(&local_50,plVar3);
  FUN_00adcf00(&local_60,param_1,&local_50);
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  puVar1 = local_60;
  local_60 = (undefined1 *)0x0;
  FUN_00ada608(&local_60,puStack_58);
  return puVar1;
}


// ===== 00af09ac  Java_org_webrtc_DataChannel_nativeRegisterObserver =====

void Java_org_webrtc_DataChannel_nativeRegisterObserver
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d42be8;
  puVar1[1] = 0;
  FUN_00ada590(puVar1 + 1,param_1,param_3);
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_1,uVar2,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar3 = (long *)FUN_00ad87a4(param_1,param_2,local_40);
  FUN_00ad843c(&local_60);
  (**(code **)(*plVar3 + 0x20))(plVar3,puVar1);
  FUN_00adde38(puVar1);
  return;
}


// ===== 00af0a9c  Java_org_webrtc_DataChannel_nativeSend =====

uint Java_org_webrtc_DataChannel_nativeSend
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 *__src;
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  size_t __n;
  undefined8 local_a0;
  long local_98 [3];
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = param_3;
  FUN_00add324(&local_80,param_1,&local_a0);
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_60,param_1,uVar2,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar3 = (long *)FUN_00ad87a4(param_1,param_2,local_40);
  FUN_00ad843c(&local_60);
  __src = local_80;
  __n = (long)puStack_78 - (long)local_80;
  FUN_007b54d0(local_98,__n,__n);
  if (local_98[0] != 0) {
    memcpy(*(void **)(local_98[0] + 0x10),__src,__n);
    local_98[1] = 0;
    local_98[2] = __n;
  }
  FUN_007b53e4(&local_60,local_98);
  local_48 = (undefined1 *)CONCAT71(local_48._1_7_,param_4 != '\0');
  uVar1 = (**(code **)(*plVar3 + 0xb8))(plVar3,&local_60);
  FUN_007b5554(&local_60);
  FUN_007b5554(local_98);
  if (local_80 != (undefined1 *)0x0) {
    if (puStack_78 + -1 < puStack_78 + -(long)local_80) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_78 = local_80;
    operator_delete(local_80);
  }
  return uVar1 & 1;
}


// ===== 00af0c1c  Java_org_webrtc_DataChannel_nativeState =====

undefined8 Java_org_webrtc_DataChannel_nativeState(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,param_1,uVar2,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar3 = (long *)FUN_00ad87a4(param_1,param_2,local_40);
  FUN_00ad843c(&local_60);
  uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3);
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/DataChannel$State",&DAT_00dba298);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8360(&local_60,param_1,uVar2,"fromNativeIndex","(I)Lorg/webrtc/DataChannel$State;",
               &DAT_00dba290);
  uVar2 = FUN_004aecec(param_1,uVar2,local_40,uVar1);
  local_68 = param_1;
  FUN_00ad843c(&local_60);
  local_70 = 0;
  FUN_00ada608(&local_70,param_1);
  return uVar2;
}


// ===== 00af0d64  Java_org_webrtc_DataChannel_nativeUnregisterObserver =====

void Java_org_webrtc_DataChannel_nativeUnregisterObserver
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/DataChannel",&DAT_00dba258);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_1,uVar1,"getNativeDataChannel",&DAT_001a78d2,&DAT_00dba250);
  plVar2 = (long *)FUN_00ad87a4(param_1,param_2,local_40);
  FUN_00ad843c(&local_60);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  return;
}


// ===== 00af0e30  FUN_00af0e30 =====

void FUN_00af0e30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getOrdered",&DAT_001be1bc,&DAT_00dba2a0);
  cVar2 = FUN_004c17b4(param_2,*param_3,local_70);
  FUN_00ad843c(&local_90);
  *(bool *)((long)param_1 + 1) = cVar2 != '\0';
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getMaxRetransmitTimeMs",&DAT_001bb71e,&DAT_00dba2b0);
  uVar3 = FUN_004c1718(param_2,*param_3,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)((long)param_1 + 4) = uVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getMaxRetransmits",&DAT_001bb71e,&DAT_00dba2b8);
  uVar3 = FUN_004c1718(param_2,*param_3,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getProtocol","()Ljava/lang/String;",&DAT_00dba2c0);
  local_a0 = FUN_004a41b4(param_2,*param_3,local_70);
  local_98 = param_2;
  FUN_00ad843c(&local_90);
  FUN_00adc4e0(&local_90,param_2,&local_a0);
  puVar1 = local_80;
  local_80 = (undefined1 *)((ulong)local_80 & 0xffffffffffffff);
  param_1[4] = puStack_88;
  param_1[3] = local_90;
  param_1[5] = puVar1;
  local_90 = (undefined1 *)((ulong)local_90 & 0xffffffffffffff00);
  FUN_00ada608(&local_a0,local_98);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getNegotiated",&DAT_001be1bc,&DAT_00dba2c8);
  cVar2 = FUN_004c17b4(param_2,*param_3,local_70);
  FUN_00ad843c(&local_90);
  *(bool *)(param_1 + 6) = cVar2 != '\0';
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/DataChannel$Init",&DAT_00dba2a8);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_90,param_2,uVar4,"getId",&DAT_001bb71e,&DAT_00dba2d0);
  uVar3 = FUN_004c1718(param_2,*param_3,local_70);
  FUN_00ad843c(&local_90);
  *(undefined4 *)((long)param_1 + 0x34) = uVar3;
  return;
}


// ===== 00af1178  FUN_00af1178 =====

void FUN_00af1178(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_3 = 0;
    uVar1 = FUN_00adde38();
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/DataChannel",&DAT_00dba258);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_60;
    FUN_00ad8450(&local_60,param_2,uVar2,"<init>",&DAT_001cf399,&DAT_00dba2d8);
    uVar1 = FUN_004b8418(param_2,uVar2,local_40,uVar1);
    *param_1 = uVar1;
    param_1[1] = param_2;
    FUN_00ad843c(&local_60);
  }
  return;
}


// ===== 00af1244  FUN_00af1244 =====

void FUN_00af1244(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/DataChannel$Observer",&DAT_00dba268);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar1,uVar2,"onStateChange",&DAT_001ebb20,&DAT_00dba260);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_30);
  FUN_00ad843c(&local_50);
  return;
}


// ===== 00af12e0  FUN_00af12e0 =====

void FUN_00af12e0(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*param_2 + 0x10) + param_2[1];
  }
  FUN_00ad9c24(&local_70,uVar1,lVar4,param_2[2]);
  lVar4 = param_2[3];
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/DataChannel$Buffer",&DAT_00dba278);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,uVar1,uVar2,"<init>","(Ljava/nio/ByteBuffer;Z)V",&DAT_00dba270);
  uVar2 = FUN_004b8418(uVar1,uVar2,local_40,local_70,(char)lVar4);
  local_80 = uVar2;
  uStack_78 = uVar1;
  FUN_00ad843c(&local_60);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/DataChannel$Observer",&DAT_00dba268);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,uVar1,uVar3,"onMessage","(Lorg/webrtc/DataChannel$Buffer;)V",&DAT_00dba280)
  ;
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,uVar2);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_80,uVar1);
  FUN_00ada608(&local_70,puStack_68);
  return;
}


// ===== 00af1460  FUN_00af1460 =====

void FUN_00af1460(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/DataChannel$Observer",&DAT_00dba268);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onBufferedAmountChange",&DAT_001cf399,&DAT_00dba288);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,param_2);
  FUN_00ad843c(&local_60);
  return;
}


// ===== 00af150c  FUN_00af150c =====

undefined8 FUN_00af150c(void)

{
  return 0;
}


// ===== 00af1518  FUN_00af1518 =====

void FUN_00af1518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42be8;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00af152c  FUN_00af152c =====

void FUN_00af152c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d42be8;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00af1568  Java_org_webrtc_DtmfSender_nativeCanInsertDtmf =====

uint Java_org_webrtc_DtmfSender_nativeCanInsertDtmf
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  return uVar1 & 1;
}


// ===== 00af1594  Java_org_webrtc_DtmfSender_nativeDuration =====

void Java_org_webrtc_DtmfSender_nativeDuration(undefined8 param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00af15a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x50))(param_3);
  return;
}


// ===== 00af15a8  Java_org_webrtc_DtmfSender_nativeInsertDtmf =====

uint Java_org_webrtc_DtmfSender_nativeInsertDtmf
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  void *local_48 [2];
  char cStack_31;
  undefined8 local_18;
  
  local_18 = param_4;
  FUN_00adc4e0(local_48,param_1,&local_18);
  uVar1 = (**(code **)(*param_3 + 0x38))(param_3,local_48,param_5,param_6);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar1 & 1;
}


// ===== 00af1630  Java_org_webrtc_DtmfSender_nativeInterToneGap =====

void Java_org_webrtc_DtmfSender_nativeInterToneGap
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00af1640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x58))(param_3);
  return;
}


// ===== 00af1644  Java_org_webrtc_DtmfSender_nativeTones =====

undefined1 *
Java_org_webrtc_DtmfSender_nativeTones(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  void *local_38 [2];
  char cStack_21;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x48))(local_38,param_3);
  FUN_00adcf00(&local_50,param_1,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  puVar1 = local_50;
  local_50 = (undefined1 *)0x0;
  FUN_00ada608(&local_50,puStack_48);
  return puVar1;
}


// ===== 00af16c8  Java_org_webrtc_MediaSource_nativeGetState =====

undefined8
Java_org_webrtc_MediaSource_nativeGetState(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/MediaSource$State",&DAT_00dba2e8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8360(&local_60,param_1,uVar2,"fromNativeIndex","(I)Lorg/webrtc/MediaSource$State;",
               &DAT_00dba2e0);
  uVar2 = FUN_004aecec(param_1,uVar2,local_40,uVar1);
  local_68 = param_1;
  FUN_00ad843c(&local_60);
  local_70 = 0;
  FUN_00ada608(&local_70,param_1);
  return uVar2;
}


// ===== 00af17a0  Java_org_webrtc_MediaStream_nativeAddAudioTrackToNativeStream =====

uint Java_org_webrtc_MediaStream_nativeAddAudioTrackToNativeStream
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00af1810  Java_org_webrtc_MediaStream_nativeAddVideoTrackToNativeStream =====

uint Java_org_webrtc_MediaStream_nativeAddVideoTrackToNativeStream
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  uVar1 = (**(code **)(*param_3 + 0x50))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00af1880  Java_org_webrtc_MediaStream_nativeGetId =====

undefined1 *
Java_org_webrtc_MediaStream_nativeGetId(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  void *local_38 [2];
  char cStack_21;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x20))(local_38,param_3);
  FUN_00adcf00(&local_50,param_1,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  puVar1 = local_50;
  local_50 = (undefined1 *)0x0;
  FUN_00ada608(&local_50,puStack_48);
  return puVar1;
}


// ===== 00af1904  Java_org_webrtc_MediaStream_nativeRemoveAudioTrack =====

uint Java_org_webrtc_MediaStream_nativeRemoveAudioTrack
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  uVar1 = (**(code **)(*param_3 + 0x58))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00af1974  Java_org_webrtc_MediaStream_nativeRemoveVideoTrack =====

uint Java_org_webrtc_MediaStream_nativeRemoveVideoTrack
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  uVar1 = (**(code **)(*param_3 + 0x60))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1 & 1;
}


// ===== 00af19e4  FUN_00af19e4 =====

void FUN_00af19e4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined1 auStack_150 [8];
  long local_148;
  undefined8 *local_140;
  long *local_138;
  long *local_130;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 *local_f0 [2];
  code *local_e0;
  undefined *local_d8;
  undefined8 *local_d0 [2];
  code *local_c0;
  undefined *local_b8;
  undefined8 *local_b0 [2];
  code *local_a0;
  undefined *local_98;
  undefined8 *local_90 [2];
  code *local_80;
  undefined *local_78;
  long local_70;
  
  local_148 = tpidr_el0;
  local_70 = *(long *)(local_148 + 0x28);
  uVar3 = FUN_00adde38(*param_3);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/MediaStream",&DAT_00dba320);
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = auStack_150;
  FUN_00ad8450(&local_120,param_2,uVar4,"<init>",&DAT_001cf399,&DAT_00dba2f0);
  plVar5 = (long *)FUN_004b8418(param_2,uVar4,local_100,uVar3);
  local_138 = plVar5;
  local_130 = param_2;
  FUN_00ad843c(&local_120);
  *param_1 = 0;
  FUN_00ada590(param_1,param_2,plVar5);
  FUN_00ada608(&local_138,param_2);
  param_1[1] = 0;
  pvVar6 = operator_new(0xc0);
  local_80 = FUN_00af2148;
  local_78 = &DAT_00254410;
  local_98 = &DAT_00254430;
  local_a0 = FUN_00af2154;
  local_c0 = FUN_00af222c;
  local_b8 = &DAT_00254450;
  local_e0 = FUN_00af2238;
  local_d8 = &DAT_00254470;
  local_f0[0] = param_1;
  local_d0[0] = param_1;
  local_b0[0] = param_1;
  local_90[0] = param_1;
  FUN_00af2310(pvVar6,*param_3,local_90,local_b0,local_d0,local_f0);
  plVar5 = (long *)param_1[1];
  param_1[1] = pvVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(code **)(local_d8 + 8) != (code *)0x0) {
    (**(code **)(local_d8 + 8))(local_f0[0]);
  }
  if (*(code **)(local_b8 + 8) != (code *)0x0) {
    (**(code **)(local_b8 + 8))(local_d0[0]);
  }
  if (*(code **)(local_98 + 8) != (code *)0x0) {
    (**(code **)(local_98 + 8))(local_b0[0]);
  }
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90[0]);
  }
  (**(code **)(*(long *)*param_3 + 0x28))(&local_138);
  plVar2 = local_130;
  plVar1 = local_138;
  for (plVar5 = local_138; local_140 = param_3, local_138 = plVar1, plVar5 != plVar2;
      plVar5 = plVar5 + 1) {
    puVar7 = (undefined8 *)*plVar5;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
    }
    uVar3 = FUN_00adde38(puVar7);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/MediaStream",&DAT_00dba320);
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = auStack_150;
    FUN_00ad8450(&local_120,param_2,uVar4,"addNativeAudioTrack",&DAT_001cf399,&DAT_00dba2f8);
    FUN_004c2120(param_2,*param_1,local_100,uVar3);
    FUN_00ad843c(&local_120);
    param_3 = local_140;
    plVar1 = local_138;
  }
  plVar5 = local_130;
  if (plVar1 != (long *)0x0) {
    while (plVar1 != plVar5) {
      plVar5 = plVar5 + -1;
      if (plVar5 == (long *)0x0) goto LAB_00af1e70;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
    }
    local_130 = plVar1;
    operator_delete(local_138);
  }
  (**(code **)(*(long *)*param_3 + 0x30))(&local_138);
  plVar2 = local_130;
  plVar1 = local_138;
  for (plVar5 = local_138; local_138 = plVar1, plVar5 != plVar2; plVar5 = plVar5 + 1) {
    puVar7 = (undefined8 *)*plVar5;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
    }
    uVar3 = FUN_00adde38(puVar7);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/MediaStream",&DAT_00dba320);
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = auStack_150;
    FUN_00ad8450(&local_120,param_2,uVar4,"addNativeVideoTrack",&DAT_001cf399,&DAT_00dba300);
    FUN_004c2120(param_2,*param_1,local_100,uVar3);
    FUN_00ad843c(&local_120);
    param_3 = local_140;
    plVar1 = local_138;
  }
  plVar5 = local_130;
  if (plVar1 != (long *)0x0) {
    while (plVar1 != plVar5) {
      plVar5 = plVar5 + -1;
      if (plVar5 == (long *)0x0) {
LAB_00af1e70:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
    }
    local_130 = plVar1;
    operator_delete(local_138);
  }
  *param_3 = 0;
  if (*(long *)(local_148 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00af1e88  FUN_00af1e88 =====

void FUN_00af1e88(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00ad9fc4();
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/MediaStream",&DAT_00dba320);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,uVar1,uVar3,"dispose",&DAT_001ebb20,&DAT_00dba308);
  FUN_004c2120(uVar1,*param_1,local_30);
  FUN_00ad843c(&local_50);
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_00ada650(param_1);
  return;
}


// ===== 00af1f60  FUN_00af1f60 =====

void FUN_00af1f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_18;
  
  uVar1 = FUN_00ad9fc4();
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ad9cb4(&local_18,uVar1);
  (**(code **)*param_2)(param_2);
  uVar2 = FUN_00adde38(param_2);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/MediaStream",&DAT_00dba320);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar3,"addNativeAudioTrack",&DAT_001cf399,&DAT_00dba2f8);
  FUN_004c2120(uVar1,*param_1,local_40,uVar2);
  FUN_00ad843c(&local_60);
  FUN_00ad9d10(&local_18);
  return;
}


// ===== 00af2048  FUN_00af2048 =====

void FUN_00af2048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_18;
  
  uVar1 = FUN_00ad9fc4();
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ad9cb4(&local_18,uVar1);
  (**(code **)*param_2)(param_2);
  uVar2 = FUN_00adde38(param_2);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/MediaStream",&DAT_00dba320);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar3,"addNativeVideoTrack",&DAT_001cf399,&DAT_00dba300);
  FUN_004c2120(uVar1,*param_1,local_40,uVar2);
  FUN_00ad843c(&local_60);
  FUN_00ad9d10(&local_18);
  return;
}


// ===== 00af2130  FUN_00af2130 =====

void FUN_00af2130(undefined8 param_1)

{
  FUN_00adaed8(param_1,"org/webrtc/MediaStream",&DAT_00dba320);
  return;
}


// ===== 00af2148  FUN_00af2148 =====

void FUN_00af2148(undefined8 *param_1)

{
  FUN_00af1f60(*param_1);
  return;
}


// ===== 00af2154  FUN_00af2154 =====

void FUN_00af2154(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_18;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_00ad9fc4();
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ad9cb4(&local_18,uVar1);
  uVar2 = FUN_00adde38(param_2);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/MediaStream",&DAT_00dba320);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar3,"removeAudioTrack",&DAT_001cf399,&DAT_00dba310);
  FUN_004c2120(uVar1,*param_1,local_40,uVar2);
  FUN_00ad843c(&local_60);
  FUN_00ad9d10(&local_18);
  return;
}


// ===== 00af222c  FUN_00af222c =====

void FUN_00af222c(undefined8 *param_1)

{
  FUN_00af2048(*param_1);
  return;
}


// ===== 00af2238  FUN_00af2238 =====

void FUN_00af2238(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_18;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_00ad9fc4();
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ad9cb4(&local_18,uVar1);
  uVar2 = FUN_00adde38(param_2);
  uVar3 = FUN_00adaed8(uVar1,"org/webrtc/MediaStream",&DAT_00dba320);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,uVar1,uVar3,"removeVideoTrack",&DAT_001cf399,&DAT_00dba318);
  FUN_004c2120(uVar1,*param_1,local_40,uVar2);
  FUN_00ad843c(&local_60);
  FUN_00ad9d10(&local_18);
  return;
}


// ===== 00af2310  FUN_00af2310 =====

void FUN_00af2310(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d42c28;
  param_1[1] = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  (**(code **)(*param_2 + 0x28))(param_1 + 2,param_2);
  (**(code **)(*param_2 + 0x30))(param_1 + 5,param_2);
  uVar2 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar2;
  param_1[10] = param_3[2];
  lVar1 = param_3[3];
  param_1[0xb] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  uVar2 = *param_4;
  param_1[0xd] = param_4[1];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_4[2];
  lVar1 = param_4[3];
  param_1[0xf] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_4[2] = 0;
    param_4[3] = &DAT_001fbc50;
  }
  uVar2 = *param_5;
  param_1[0x11] = param_5[1];
  param_1[0x10] = uVar2;
  param_1[0x12] = param_5[2];
  lVar1 = param_5[3];
  param_1[0x13] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_5[2] = 0;
    param_5[3] = &DAT_001fbc50;
  }
  uVar2 = *param_6;
  param_1[0x15] = param_6[1];
  param_1[0x14] = uVar2;
  param_1[0x16] = param_6[2];
  lVar1 = param_6[3];
  param_1[0x17] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_6[2] = 0;
    param_6[3] = &DAT_001fbc50;
  }
                    /* WARNING: Could not recover jumptable at 0x00af2444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1[1] + 8))((undefined8 *)(param_1[1] + 8),param_1);
  return;
}


// ===== 00af2448  FUN_00af2448 =====

void FUN_00af2448(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d42c28;
  (**(code **)(*(long *)(param_1[1] + 8) + 8))((long *)(param_1[1] + 8),param_1);
  if (*(code **)(param_1[0x17] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x17] + 8))(param_1[0x14]);
  }
  if (*(code **)(param_1[0x13] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x13] + 8))(param_1[0x10]);
  }
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  if (*(code **)(param_1[0xb] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xb] + 8))(param_1[8]);
  }
  plVar3 = (long *)param_1[5];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[6];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) goto LAB_00af25c0;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[5];
    }
    param_1[6] = plVar3;
    operator_delete(plVar1);
  }
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[3];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
LAB_00af25c0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)param_1[2];
    }
    param_1[3] = plVar3;
    operator_delete(plVar1);
  }
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00af25a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 8))();
  return;
}


