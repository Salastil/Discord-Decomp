// ===== 008c9c14  FUN_008c9c14 =====

void FUN_008c9c14(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_007dc854(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 008c9c60  FUN_008c9c60 =====

undefined1  [16]
FUN_008c9c60(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c9cc8;
      }
      if (*param_2 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_008c9d6c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_008c9cc8:
  plVar3 = (long *)operator_new(0x90);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(undefined4 *)*param_4;
  plVar3[0x11] = 0;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  FUN_008d4828(plVar3 + 5,&lsda_exception_table_002625a0);
  plVar3[0x11] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar4);
  uVar5 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_008c9d6c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c9d9c  FUN_008c9d9c =====

undefined1  [16]
FUN_008c9d9c(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c9e04;
      }
      if (*param_2 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_008c9ea8;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_008c9e04:
  plVar3 = (long *)operator_new(0x90);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(undefined4 *)*param_4;
  plVar3[0x11] = 0;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x10] = 0;
  plVar3[0xf] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  FUN_008d4828(plVar3 + 5,&lsda_exception_table_002625a0);
  plVar3[0x11] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar4);
  uVar5 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_008c9ea8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c9ed8  FUN_008c9ed8 =====

void FUN_008c9ed8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 *param_5,long *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d3ca00;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  param_1[6] = param_2;
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[7] = uVar1;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0xb] = param_5[2];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uVar1 = (**(code **)(*param_6 + 0x10))(param_6,"VideoFrameTransformerQueue",0x1a,param_7);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xc] = uVar1;
  return;
}


// ===== 008c9fb0  FUN_008c9fb0 =====

void FUN_008c9fb0(long *param_1)

{
  long *plVar1;
  long *local_28;
  
  plVar1 = (long *)param_1[7];
  local_28 = param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_28,(int)param_1[8]);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 008ca024  FUN_008ca024 =====

undefined8
FUN_008ca024(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  void *local_890;
  void *local_888;
  void *local_880;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 uStack_86c;
  undefined8 local_868;
  undefined1 auStack_860 [2032];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_874 = param_4;
  local_870 = param_3;
  uStack_86c = param_2;
  local_868 = param_7;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
    plVar13 = *(long **)(param_1 + 0x38);
    uVar5 = FUN_008ca2bc(param_5,param_6,&uStack_86c,&local_870,&local_874,&local_868,param_1 + 0x40
                         ,param_8,param_1 + 0x48);
    uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,uVar5);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x30);
    uVar5 = FUN_007bcaf8(param_5);
    plVar13 = *(long **)(param_5 + 0x88);
    if (plVar13 != (long *)0x0) {
      (**(code **)*plVar13)(plVar13);
    }
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13);
    lVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
    uVar9 = *(undefined8 *)(param_5 + 0x90);
    FUN_007dd000(auStack_860,param_6);
    pvVar10 = (void *)*param_8;
    local_890 = (void *)0x0;
    local_888 = (void *)0x0;
    local_880 = (void *)0x0;
    uVar11 = param_8[1] - (long)pvVar10;
    if (uVar11 != 0) {
      if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_890 = operator_new(uVar11);
      pvVar1 = (void *)((long)local_890 + uVar11);
      local_880 = pvVar1;
      memcpy(local_890,pvVar10,uVar11);
      local_888 = pvVar1;
    }
    uVar2 = 0;
    if (lVar7 != 0) {
      uVar2 = uVar6;
    }
    (**(code **)*puVar8)
              (puVar8,param_2,param_3,param_4,uVar5,uVar2,lVar7,uVar9,auStack_860,param_7,&local_890
              );
    if (local_890 != (void *)0x0) {
      uVar12 = (ulong)((long)local_888 + (-4 - ((long)local_888 << 0x3e))) >> 2;
      uVar11 = (ulong)(((long)local_890 - (long)local_888 << 0x3e) -
                      ((long)local_890 - (long)local_888)) >> 2;
      if (uVar12 <= uVar11) {
        uVar11 = uVar12;
      }
      pvVar10 = local_888;
      if ((1 < uVar11) && ((((int)local_890 - (int)local_888 | -(int)local_888) & 3U) == 0)) {
        uVar11 = uVar11 & 0x3ffffffffffffffe;
        pvVar10 = (void *)((long)local_888 + uVar11 * -4);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      while (pvVar10 != local_890) {
        pvVar10 = (void *)((long)pvVar10 + -4);
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_888 = local_890;
      operator_delete(local_890);
    }
    FUN_007dd190(auStack_860);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
    uVar11 = (ulong)uVar4;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


// ===== 008ca2bc  FUN_008ca2bc =====

undefined8 *
FUN_008ca2bc(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
            undefined8 *param_9)

{
  void *__src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong __n;
  undefined8 *puVar6;
  void *__dest;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar6 = (undefined8 *)operator_new(0x870);
  __src = (void *)*param_8;
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  uVar10 = *param_6;
  __n = param_8[1] - (long)__src;
  uVar4 = *param_7;
  if (__n == 0) {
    __dest = (void *)0x0;
    lVar9 = 0;
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(__n);
    lVar9 = (long)__dest + __n;
    memcpy(__dest,__src,__n);
  }
  if (*(char *)((long)param_9 + 0x17) < '\0') {
    FUN_005478d8(&local_80,*param_9,param_9[1]);
  }
  else {
    uStack_78 = param_9[1];
    local_80 = *param_9;
    local_70 = param_9[2];
  }
  FUN_007dc8e8(puVar6,0);
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  *puVar6 = &PTR_FUN_00d3ca60;
  puVar6[1] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)();
  }
  puVar6[2] = *(undefined8 *)(param_1 + 0x90);
  FUN_007dd000(puVar6 + 3,param_2);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  *(char *)((long)puVar6 + 0x80c) = (char)uVar1;
  *(undefined4 *)(puVar6 + 0x102) = uVar2;
  *(undefined4 *)(puVar6 + 0x101) = uVar5;
  *(undefined4 *)((long)puVar6 + 0x814) = uVar3;
  uVar8 = FUN_007bcaf8(param_1);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  puVar6[0x106] = uVar10;
  puVar6[0x105] = uVar12;
  puVar6[0x104] = uVar11;
  *(undefined4 *)(puVar6 + 0x107) = uVar4;
  puVar6[0x103] = uVar8;
  puVar6[0x108] = __dest;
  puVar6[0x109] = lVar9;
  puVar6[0x10a] = lVar9;
  puVar6[0x10c] = uStack_78;
  puVar6[0x10b] = local_80;
  puVar6[0x10d] = local_70;
  return puVar6;
}


// ===== 008ca448  FUN_008ca448 =====

ulong FUN_008ca448(undefined8 *param_1,long *param_2)

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
  if (param_1[6] == 0) {
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008ca514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
      return uVar2;
    }
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    local_30 = FUN_008cb360;
    pcStack_28 = FUN_008cb348;
    local_40 = param_1;
    plStack_38 = param_2;
    (**(code **)(*(long *)param_1[0xc] + 8))((long *)param_1[0xc],&local_40,&uStack_41,&uStack_42);
    (*local_30)(0,&local_40,&local_40);
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  }
  return (ulong)uVar1;
}


// ===== 008ca518  FUN_008ca518 =====

int FUN_008ca518(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x68) = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 008ca550  FUN_008ca550 =====

void FUN_008ca550(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  void *local_17a8;
  void *local_17a0;
  void *local_1790;
  void *local_1788;
  undefined1 uStack_1771;
  undefined1 auStack_1770 [2032];
  undefined1 auStack_f80 [40];
  byte local_f58;
  void *local_f50;
  byte local_f28;
  void *local_f20;
  undefined1 auStack_ef0 [1640];
  byte local_888;
  void *local_878;
  void *local_870;
  undefined1 auStack_860 [2032];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_008caa68:
    uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
    uVar9 = (ulong)uVar7;
    if (param_2 != (long *)0x0) {
      uVar9 = (**(code **)(*param_2 + 8))(param_2);
    }
    if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
    return;
  }
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  if (iVar4 == 2) {
    (**(code **)(*param_2 + 0x78))(param_2);
    if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender_video_frame_transformer_delegate.cc",
                   0xec,"transformed_video_frame->CaptureTime().has_value()",&DAT_001f5fa0);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x30);
    uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar2 = param_2[0x102];
    uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
    auVar14 = (**(code **)(*param_2 + 0x78))(param_2);
    if ((auVar14 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    auVar15 = (**(code **)(*param_2 + 0x10))(param_2);
    lVar13 = param_2[2];
    FUN_007dd000(auStack_860,param_2 + 3);
    lVar11 = param_2[0x106];
    (**(code **)(*param_2 + 0xa8))(auStack_f80,param_2);
    FUN_007de2f8(&local_1790,auStack_f80);
    (**(code **)*puVar12)
              (puVar12,uVar3,(int)lVar2,uVar5,auVar14._0_8_,auVar15._0_8_,auVar15._8_8_,lVar13,
               auStack_860,lVar11,&local_1790);
    if (local_1790 == (void *)0x0) {
LAB_008ca8f8:
      if (local_878 == (void *)0x0) {
LAB_008caa00:
        if ((ulong)local_888 != 0xff) {
          (*(code *)(&PTR_FUN_00d3ca30)[local_888])(&uStack_1771,auStack_ef0);
        }
        local_888 = 0xff;
        if ((local_f28 & 1) != 0) {
          operator_delete(local_f20);
        }
        if ((local_f58 & 1) != 0) {
          operator_delete(local_f50);
        }
        FUN_007dd190(auStack_860);
        goto LAB_008caa68;
      }
      uVar10 = (ulong)((long)local_870 + (-4 - ((long)local_870 << 0x3e))) >> 2;
      uVar9 = (ulong)(((long)local_878 - (long)local_870 << 0x3e) -
                     ((long)local_878 - (long)local_870)) >> 2;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((1 < uVar9) && ((((int)local_878 - (int)local_870 | -(int)local_870) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        local_870 = (void *)((long)local_870 + uVar9 * -4);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (local_870 == local_878) {
          local_870 = local_878;
          operator_delete(local_878);
          goto LAB_008caa00;
        }
        local_870 = (void *)((long)local_870 + -4);
      } while (local_870 != (void *)0x0);
    }
    else {
      uVar10 = (ulong)((long)local_1788 + (-4 - ((long)local_1788 << 0x3e))) >> 2;
      uVar9 = (ulong)(((long)local_1790 - (long)local_1788 << 0x3e) -
                     ((long)local_1790 - (long)local_1788)) >> 2;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      pvVar8 = local_1788;
      if ((1 < uVar9) && ((((int)local_1790 - (int)local_1788 | -(int)local_1788) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        pvVar8 = (void *)((long)local_1788 + uVar9 * -4);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar8 == local_1790) {
          local_1788 = local_1790;
          operator_delete(local_1790);
          goto LAB_008ca8f8;
        }
        pvVar8 = (void *)((long)pvVar8 + -4);
      } while (pvVar8 != (void *)0x0);
    }
  }
  else {
    memset(auStack_f80,0xaa,0x720);
    (**(code **)(*param_2 + 0xa8))(auStack_f80,param_2);
    puVar12 = *(undefined8 **)(param_1 + 0x30);
    uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar5 = FUN_007de22c(auStack_f80);
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    auVar14 = (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_007dcae0(auStack_1770,auStack_f80);
    FUN_007de2f8(&local_17a8,auStack_f80);
    (**(code **)*puVar12)
              (puVar12,uVar3,uVar5,uVar6,0x8000000000000000,auVar14._0_8_,auVar14._8_8_,
               extraout_x1_00,auStack_1770,10000,&local_17a8);
    if (local_17a8 == (void *)0x0) {
LAB_008ca86c:
      FUN_007dd190(auStack_1770);
      if (local_878 == (void *)0x0) {
LAB_008ca98c:
        if ((ulong)local_888 != 0xff) {
          (*(code *)(&PTR_FUN_00d3ca30)[local_888])(&uStack_1771,auStack_ef0);
        }
        local_888 = 0xff;
        if ((local_f28 & 1) != 0) {
          operator_delete(local_f20);
        }
        if ((local_f58 & 1) != 0) {
          operator_delete(local_f50);
        }
        goto LAB_008caa68;
      }
      uVar10 = (ulong)((long)local_870 + (-4 - ((long)local_870 << 0x3e))) >> 2;
      uVar9 = (ulong)(((long)local_878 - (long)local_870 << 0x3e) -
                     ((long)local_878 - (long)local_870)) >> 2;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((1 < uVar9) && ((((int)local_878 - (int)local_870 | -(int)local_870) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        local_870 = (void *)((long)local_870 + uVar9 * -4);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (local_870 == local_878) {
          local_870 = local_878;
          operator_delete(local_878);
          goto LAB_008ca98c;
        }
        local_870 = (void *)((long)local_870 + -4);
      } while (local_870 != (void *)0x0);
    }
    else {
      uVar10 = (ulong)((long)local_17a0 + (-4 - ((long)local_17a0 << 0x3e))) >> 2;
      uVar9 = (ulong)(((long)local_17a8 - (long)local_17a0 << 0x3e) -
                     ((long)local_17a8 - (long)local_17a0)) >> 2;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      pvVar8 = local_17a0;
      if ((1 < uVar9) && ((((int)local_17a8 - (int)local_17a0 | -(int)local_17a0) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        pvVar8 = (void *)((long)local_17a0 + uVar9 * -4);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pvVar8 == local_17a8) {
          local_17a0 = local_17a8;
          operator_delete(local_17a8);
          goto LAB_008ca86c;
        }
        pvVar8 = (void *)((long)pvVar8 + -4);
      } while (pvVar8 != (void *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008caaf4  FUN_008caaf4 =====

int FUN_008caaf4(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender_video_frame_transformer_delegate.cc",0x10b,
               "sender_",&DAT_001f5fa0);
}


// ===== 008cab60  FUN_008cab60 =====

void FUN_008cab60(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_138;
  undefined1 local_134;
  ulong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [26];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender_video_frame_transformer_delegate.cc",
                 0x112,"sender_",&DAT_001f5fa0);
  }
  local_138 = *param_2;
  local_134 = *(undefined1 *)(param_2 + 1);
  uVar6 = *(ulong *)(param_2 + 2);
  local_130 = 0;
  if ((uVar6 & 1) == 0) {
    if (uVar6 != 0) {
      uVar6 = uVar6 >> 1;
      puVar9 = auStack_118;
      puVar8 = (undefined8 *)(param_2 + 4);
      uVar7 = (long)&local_130 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
      do {
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar11 = puVar8[1];
        uVar10 = *puVar8;
        uVar13 = puVar8[3];
        uVar12 = puVar8[2];
        uVar6 = uVar6 - 1;
        uVar1 = *(undefined4 *)(puVar8 + 6);
        puVar8[1] = 0;
        uVar7 = uVar7 - 1;
        puVar9[-1] = uVar11;
        puVar9[-2] = uVar10;
        puVar9[1] = uVar13;
        *puVar9 = uVar12;
        uVar11 = puVar8[5];
        uVar10 = puVar8[4];
        *(undefined4 *)(puVar9 + 4) = uVar1;
        uVar2 = *(undefined1 *)((long)puVar8 + 0x34);
        puVar8 = puVar8 + 7;
        puVar9[3] = uVar11;
        puVar9[2] = uVar10;
        *(undefined1 *)((long)puVar9 + 0x24) = uVar2;
        puVar9 = puVar9 + 7;
      } while (uVar6 != 0);
      uVar6 = *(ulong *)(param_2 + 2) & 0xfffffffffffffffe;
    }
  }
  else {
    local_128 = *(undefined8 *)(param_2 + 4);
    uStack_120 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 2) = 0;
  }
  local_130 = uVar6;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_138);
  if (local_130 != 0) {
    FUN_008c4c88(&local_130);
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


// ===== 008cace8  FUN_008cace8 =====

int FUN_008cace8(long param_1)

{
  int iVar1;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))
            (*(long **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 008cad48  FUN_008cad48 =====

void FUN_008cad48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8cad50);
  (*pcVar1)();
}


// ===== 008cad50  FUN_008cad50 =====

void FUN_008cad50(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d3ca60;
  if (*(char *)((long)param_1 + 0x86f) < '\0') {
    operator_delete((void *)param_1[0x10b]);
    pvVar1 = (void *)param_1[0x108];
  }
  else {
    pvVar1 = (void *)param_1[0x108];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x109];
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
    param_1[0x109] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_007dd190(param_1 + 3);
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008cae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 008cae5c  FUN_008cae5c =====

void FUN_008cae5c(void *param_1)

{
  FUN_008cad50();
  operator_delete(param_1);
  return;
}


// ===== 008cae8c  FUN_008cae8c =====

undefined1  [16] FUN_008cae8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar2;
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}


// ===== 008caee0  FUN_008caee0 =====

void FUN_008caee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *local_8;
  
  FUN_007bc67c(&local_8,param_2,param_3);
  plVar1 = local_8;
  plVar2 = *(long **)(param_1 + 8);
  local_8 = (long *)0x0;
  *(long **)(param_1 + 8) = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  return;
}


// ===== 008caf48  FUN_008caf48 =====

undefined1 FUN_008caf48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80c);
}


// ===== 008caf54  FUN_008caf54 =====

undefined4 FUN_008caf54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x838);
}


// ===== 008caf60  FUN_008caf60 =====

undefined4 FUN_008caf60(long param_1)

{
  return *(undefined4 *)(param_1 + 0x814);
}


// ===== 008caf6c  FUN_008caf6c =====

void FUN_008caf6c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x814) = param_2;
  return;
}


// ===== 008caf78  FUN_008caf78 =====

undefined1  [16] FUN_008caf78(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x820);
}


// ===== 008caf8c  FUN_008caf8c =====

undefined1  [16] FUN_008caf8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x820);
}


// ===== 008cafa0  FUN_008cafa0 =====

undefined8 FUN_008cafa0(void)

{
  return 2;
}


// ===== 008cafac  FUN_008cafac =====

void FUN_008cafac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  char *__s;
  size_t sVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 uStack_31;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_50,"video/");
  __s = (char *)FUN_007b8c54(*(undefined4 *)(param_2 + 0x810));
  if (__s != (char *)0x0) {
    ppuVar1 = (undefined1 **)local_50;
    if (-1 < (long)local_40._7_1_) {
      ppuVar1 = &local_50;
    }
    puVar2 = puStack_48;
    if (-1 < (long)local_40) {
      puVar2 = (undefined1 *)(long)local_40._7_1_;
    }
    sVar3 = strlen(__s);
    FUN_005ff514(param_1,&uStack_31,ppuVar1,puVar2,__s,sVar3);
    if ((long)local_40 < 0) {
      operator_delete(local_50);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 008cb078  FUN_008cb078 =====

undefined1  [16] FUN_008cb078(void)

{
  return ZEXT816(0);
}


// ===== 008cb088  FUN_008cb088 =====

undefined1  [16] FUN_008cb088(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x818);
  auVar1._8_8_ = 1;
  return auVar1;
}


// ===== 008cb098  FUN_008cb098 =====

undefined1  [16] FUN_008cb098(void)

{
  return ZEXT816(0);
}


// ===== 008cb0a8  FUN_008cb0a8 =====

bool FUN_008cb0a8(long param_1)

{
  return *(int *)(param_1 + 0x808) == 3;
}


// ===== 008cb0bc  FUN_008cb0bc =====

void FUN_008cb0bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x86f) < '\0') {
    FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x858),*(undefined8 *)(param_2 + 0x860));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x858);
    uVar1 = *(undefined8 *)(param_2 + 0x868);
    param_1[1] = *(undefined8 *)(param_2 + 0x860);
    *param_1 = uVar2;
    param_1[2] = uVar1;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 008cb118  FUN_008cb118 =====

void FUN_008cb118(void *param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  void *local_48;
  void *local_40;
  void *local_38;
  
  memset(param_1,0xaa,0x720);
  FUN_007dd2d8(param_1,param_2 + 0x18);
  FUN_007de2ec(param_1,*(undefined4 *)(param_2 + 0x838));
  pvVar4 = *(void **)(param_2 + 0x840);
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  uVar2 = *(long *)(param_2 + 0x848) - (long)pvVar4;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    local_48 = operator_new(uVar2);
    pvVar1 = (void *)((long)local_48 + uVar2);
    local_38 = pvVar1;
    memcpy(local_48,pvVar4,uVar2);
    local_40 = pvVar1;
  }
  FUN_007de368(param_1,&local_48);
  if (local_48 != (void *)0x0) {
    uVar3 = (ulong)((long)local_40 + (-4 - ((long)local_40 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_48 - (long)local_40 << 0x3e) - ((long)local_48 - (long)local_40))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar4 = local_40;
    if ((1 < uVar2) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar4 = (void *)((long)local_40 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar4 != local_48) {
      pvVar4 = (void *)((long)pvVar4 + -4);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}


// ===== 008cb258  FUN_008cb258 =====

void FUN_008cb258(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_007dcb7c(param_1 + 0x18);
  uVar1 = FUN_007de2e0(param_2);
  *(undefined4 *)(param_1 + 0x838) = uVar1;
  FUN_007de2f8(&local_40,param_2);
  pvVar2 = *(void **)(param_1 + 0x840);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x848);
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
    *(void **)(param_1 + 0x848) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x848) = uStack_38;
  *(undefined8 *)(param_1 + 0x840) = local_40;
  *(undefined8 *)(param_1 + 0x850) = local_30;
  return;
}


// ===== 008cb348  FUN_008cb348 =====

void FUN_008cb348(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_008ca550(*param_1,uVar1);
  return;
}


// ===== 008cb360  FUN_008cb360 =====

void FUN_008cb360(uint param_1,long *param_2,long *param_3)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8cb3f0);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008cb3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 008cb3f0  FUN_008cb3f0 =====

/* WARNING: Removing unreachable block (ram,0x008cb4ec) */
/* WARNING: Removing unreachable block (ram,0x008cb524) */
/* WARNING: Removing unreachable block (ram,0x008cb55c) */
/* WARNING: Removing unreachable block (ram,0x008cb544) */

undefined8 FUN_008cb3f0(byte *param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ushort *puVar13;
  uint *puVar14;
  ulong *puVar15;
  ulong local_70;
  undefined4 local_68;
  
  uVar7 = *(ulong *)(param_3 + 2);
  if (uVar7 < 2) {
    *param_1 = 0;
  }
  else {
    puVar14 = (uint *)(param_3 + 4);
    puVar11 = puVar14;
    if ((uVar7 & 1) != 0) {
      puVar11 = *(uint **)puVar14;
    }
    local_70 = 0xaaaaaaaa;
    local_68 = 0xaaaaaa01;
    if ((uVar7 >> 1) * 0x38 == 0) {
      local_70 = 0;
    }
    else {
      uVar6 = 0;
      puVar10 = puVar11 + (uVar7 >> 1) * 0xe;
      do {
        uVar2 = *puVar11;
        if (3 < uVar2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8cb71c);
          (*pcVar4)();
        }
        puVar1 = puVar11 + 1;
        puVar11 = puVar11 + 0xe;
        if ((int)uVar6 <= (int)uVar2) {
          uVar6 = uVar2;
        }
        *(byte *)(((ulong)&local_70 | 4) + (ulong)uVar2) =
             *(byte *)(((ulong)&local_70 | 4) + (ulong)uVar2) | (byte)(1 << (ulong)(*puVar1 & 0x1f))
        ;
      } while (puVar11 != puVar10);
      local_70 = (ulong)uVar6;
    }
    bVar3 = (byte)(*param_3 << 6) | (byte)((int)local_70 << 4);
    *param_1 = bVar3;
    *param_1 = bVar3;
    param_1 = param_1 + 1;
    *param_1 = 0;
    puVar10 = *(uint **)(param_3 + 4);
    uVar12 = *(ulong *)(param_3 + 2) >> 1;
    uVar7 = *(ulong *)(param_3 + 2) & 1;
    puVar11 = puVar14;
    if (uVar7 != 0) {
      puVar11 = puVar10;
    }
    lVar9 = uVar12 * 0x38;
    if (lVar9 != 0) {
      uVar6 = 0;
      uVar7 = 8;
      puVar11 = puVar11 + 2;
      do {
        if ((int)uVar7 == 0) {
          uVar6 = 0;
          param_1 = param_1 + 1;
          *param_1 = 0;
          uVar7 = 6;
        }
        else {
          uVar7 = (ulong)((int)uVar7 - 2);
        }
        lVar9 = lVar9 + -0x38;
        uVar6 = uVar6 | (*puVar11 >> 1) - 1 << (uVar7 & 0x3f);
        *param_1 = (byte)uVar6;
        puVar11 = puVar11 + 0xe;
      } while (lVar9 != 0);
      puVar10 = *(uint **)(param_3 + 4);
      uVar12 = *(ulong *)(param_3 + 2) >> 1;
      uVar7 = *(ulong *)(param_3 + 2) & 1;
    }
    puVar13 = (ushort *)(param_1 + 1);
    puVar11 = puVar14;
    if (uVar7 != 0) {
      puVar11 = puVar10;
    }
    if (uVar12 * 0x38 != 0) {
      puVar10 = puVar11 + uVar12 * 0xe;
      do {
        puVar15 = (ulong *)(puVar11 + 4);
        if ((*(ulong *)(puVar11 + 2) & 1) != 0) {
          puVar15 = (ulong *)*puVar15;
        }
        uVar12 = *(ulong *)(puVar11 + 2) & 0x3ffffffffffffffe;
        uVar7 = uVar12 << 2;
        while (uVar12 != 0) {
          uVar8 = *puVar15;
          uVar12 = uVar8 / 1000;
          if (499 < uVar8 % 1000) {
            uVar12 = uVar12 + 1;
          }
          if ((uVar8 & 0x8000000000000000) != 0) {
            uVar12 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
          }
          iVar5 = FUN_00879890(uVar12,puVar13);
          puVar13 = (ushort *)((long)puVar13 + (long)iVar5);
          uVar7 = uVar7 - 8;
          puVar15 = puVar15 + 1;
          uVar12 = uVar7;
        }
        puVar11 = puVar11 + 0xe;
      } while (puVar11 != puVar10);
    }
    if ((*(byte *)(param_3 + 1) & 1) != 0) {
      if ((*(ulong *)(param_3 + 2) & 1) != 0) {
        puVar14 = *(uint **)(param_3 + 4);
      }
      lVar9 = (*(ulong *)(param_3 + 2) >> 1) * 0x38;
      if (lVar9 != 0) {
        puVar11 = puVar14 + 0xd;
        do {
          lVar9 = lVar9 + -0x38;
          uVar6 = (ushort)puVar11[-1] - 1;
          *puVar13 = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
          uVar6 = *(ushort *)((long)puVar11 + -2) - 1;
          puVar13[1] = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
          *(byte *)(puVar13 + 2) = (byte)*puVar11;
          puVar13 = (ushort *)((long)puVar13 + 5);
          puVar11 = puVar11 + 0xe;
        } while (lVar9 != 0);
      }
    }
  }
  return 1;
}


// ===== 008cb71c  FUN_008cb71c =====

/* WARNING: Removing unreachable block (ram,0x008cb814) */

long FUN_008cb71c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  ulong *puVar12;
  ulong local_60;
  undefined4 local_58;
  
  uVar8 = *(ulong *)(param_1 + 8);
  lVar10 = 1;
  if (1 < uVar8) {
    uVar5 = uVar8 >> 1;
    puVar11 = (uint *)(param_1 + 0x10);
    if ((uVar8 & 1) != 0) {
      puVar11 = *(uint **)(param_1 + 0x10);
    }
    local_60 = 0xaaaaaaaa;
    local_58 = 0xaaaaaa01;
    if (uVar5 * 0x38 == 0) {
      local_60 = 0;
    }
    else {
      uVar7 = 0;
      puVar9 = puVar11;
      do {
        uVar2 = *puVar9;
        if (3 < uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x8cb928);
          (*pcVar3)();
        }
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 0xe;
        if ((int)uVar7 <= (int)uVar2) {
          uVar7 = uVar2;
        }
        *(byte *)(((ulong)&local_60 | 4) + (ulong)uVar2) =
             *(byte *)(((ulong)&local_60 | 4) + (ulong)uVar2) | (byte)(1 << (ulong)(*puVar1 & 0x1f))
        ;
      } while (puVar9 != puVar11 + uVar5 * 0xe);
      local_60 = (ulong)uVar7;
    }
    lVar10 = (uVar5 + 3 >> 2) + 1;
    if (uVar5 * 0x38 != 0) {
      puVar9 = puVar11 + uVar5 * 0xe;
      do {
        puVar12 = (ulong *)(puVar11 + 4);
        if ((*(ulong *)(puVar11 + 2) & 1) != 0) {
          puVar12 = (ulong *)*puVar12;
        }
        uVar5 = *(ulong *)(puVar11 + 2) & 0x3ffffffffffffffe;
        uVar8 = uVar5 << 2;
        while (uVar5 != 0) {
          uVar6 = *puVar12;
          uVar5 = uVar6 / 1000;
          if (499 < uVar6 % 1000) {
            uVar5 = uVar5 + 1;
          }
          if ((uVar6 & 0x8000000000000000) != 0) {
            uVar5 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
          }
          iVar4 = FUN_00879860(uVar5);
          lVar10 = lVar10 + iVar4;
          uVar8 = uVar8 - 8;
          puVar12 = puVar12 + 1;
          uVar5 = uVar8;
        }
        puVar11 = puVar11 + 0xe;
      } while (puVar11 != puVar9);
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      lVar10 = (*(ulong *)(param_1 + 8) >> 1) * 5 + lVar10;
    }
  }
  return lVar10;
}


// ===== 008cb928  FUN_008cb928 =====

ulong * FUN_008cb928(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar8 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar6 = 8;
  }
  else {
    uVar6 = param_1[2] << 1;
    if (0x492492492492492 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar8 = (ulong *)param_1[1];
  }
  uVar7 = uVar9 >> 1;
  puVar1 = (ulong *)operator_new(uVar6 * 0x38);
  puVar5 = puVar1 + uVar7 * 7;
  if (puVar5 == (ulong *)0x0) {
LAB_008cba88:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar5[6] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar2 = puVar1;
  uVar3 = uVar7;
  puVar4 = puVar8;
  if (uVar7 != 0) {
    do {
      if (puVar2 == (ulong *)0x0) goto LAB_008cba88;
      uVar3 = uVar3 - 1;
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      uVar11 = puVar4[2];
      uVar10 = puVar4[5];
      uVar9 = puVar4[4];
      puVar2[3] = puVar4[3];
      puVar2[2] = uVar11;
      puVar2[5] = uVar10;
      puVar2[4] = uVar9;
      uVar9 = puVar4[6];
      puVar4[1] = 0;
      *(undefined1 *)((long)puVar2 + 0x34) = *(undefined1 *)((long)puVar4 + 0x34);
      *(int *)(puVar2 + 6) = (int)uVar9;
      puVar2 = puVar2 + 7;
      puVar4 = puVar4 + 7;
    } while (uVar3 != 0);
    puVar8 = puVar8 + uVar7 * 7;
    do {
      if (puVar8 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar8[-6] & 1) != 0) {
        operator_delete((void *)puVar8[-5]);
      }
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + -7;
    } while (uVar7 != 0);
    uVar9 = *param_1;
  }
  if ((uVar9 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = (ulong)puVar1;
  param_1[2] = uVar6;
  *param_1 = (uVar9 | 1) + 2;
  return puVar5;
}


// ===== 008cbab4  FUN_008cbab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cbab4(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  uint local_c0;
  byte bStack_bc;
  undefined3 uStack_bb;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  void *local_a0;
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
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_2 & 0x7f;
  if ((((byte)param_2[1] & 1) == 0) && (uVar4 == 0)) {
    uVar4 = (int)*param_2 >> 7;
    bVar3 = true;
  }
  else {
    bVar3 = uVar4 == 0;
  }
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_78 = _UNK_00224c00;
  local_80 = _DAT_00224bf8;
  uStack_68 = _UNK_00224c10;
  uStack_70 = _DAT_00224c08;
  uStack_bb = (undefined3)((ulong)_DAT_00224bb8 >> 0x28);
  _local_c0 = CONCAT14(((byte)param_2[1] ^ 1) & bVar3,uVar4);
  uStack_58 = _UNK_00224c20;
  local_60 = _DAT_00224c18;
  uStack_48 = _UNK_00224c30;
  uStack_50 = _DAT_00224c28;
  lVar1 = *(long *)(param_2 + 6);
  uStack_98 = _UNK_00224be0;
  local_a0 = _DAT_00224bd8;
  uStack_88 = _UNK_00224bf0;
  uStack_90 = _DAT_00224be8;
  if (lVar1 != *(long *)(param_2 + 8)) {
    uStack_b8 = *(undefined8 *)(param_2 + 2);
    uStack_b0 = *(undefined8 *)(param_2 + 4);
    FUN_008cbe34(&local_a8,lVar1,*(long *)(param_2 + 8) - lVar1 >> 3);
  }
  uStack_108 = _UNK_00224c88;
  local_110 = _DAT_00224c80;
  uStack_f8 = _UNK_00224c98;
  uStack_100 = _DAT_00224c90;
  uStack_e8 = _UNK_00224ca8;
  local_f0 = _DAT_00224ca0;
  uStack_d8 = _UNK_00224cb8;
  local_e0 = _DAT_00224cb0;
  local_c8 = _UNK_00224cc8;
  local_d0 = _DAT_00224cc0;
  uStack_148 = _UNK_00224c48;
  local_150 = _DAT_00224c40;
  local_138 = _UNK_00224c58;
  local_140 = _DAT_00224c50;
  uStack_128 = _UNK_00224c68;
  local_130 = _DAT_00224c60;
  uStack_118 = _UNK_00224c78;
  uStack_120 = _DAT_00224c70;
  FUN_008cbc84(&local_150,&local_c0);
  if ((local_c8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  param_1[3] = 0;
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[2] = local_140;
  if (1 < local_138) {
    if ((local_138 & 1) == 0) {
      param_1[3] = local_138;
      param_1[0xd] = uStack_e8;
      param_1[0xc] = local_f0;
      param_1[0xf] = uStack_d8;
      param_1[0xe] = local_e0;
      param_1[0x10] = local_d0;
      param_1[5] = uStack_128;
      param_1[4] = local_130;
      param_1[7] = uStack_118;
      param_1[6] = uStack_120;
      param_1[9] = uStack_108;
      param_1[8] = local_110;
      param_1[0xb] = uStack_f8;
      param_1[10] = uStack_100;
    }
    else {
      FUN_008cbd2c(param_1 + 3,&local_138);
      if ((char)local_c8 != '\x01') goto LAB_008cbc30;
    }
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_130);
  }
LAB_008cbc30:
  if ((local_a8 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cbc84  FUN_008cbc84 =====

void FUN_008cbc84(undefined1 *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  
  if ((((*param_2 < 0x80) && (dVar7 = *(double *)(param_2 + 2), 0.0 <= dVar7)) &&
      (dVar7 == 40.0 || dVar7 < 40.0 != NAN(dVar7))) &&
     (((param_2[4] < 0x10 && (param_2[5] < 0x10)) && (uVar6 = *(ulong *)(param_2 + 6), uVar6 < 0x1c)
      ))) {
    pdVar5 = (double *)(param_2 + 8);
    if ((uVar6 & 1) != 0) {
      pdVar5 = (double *)*pdVar5;
    }
    uVar1 = (uVar6 & 0x1e) << 2;
    uVar6 = uVar6 & 0x1e;
    while( true ) {
      if (uVar6 == 0) {
        FUN_008cbdb4(param_1,0);
        return;
      }
      dVar7 = *pdVar5;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (0.0 <= dVar7) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar7)) {
          bVar2 = dVar7 < 255.0;
          bVar3 = dVar7 == 255.0;
          bVar4 = false;
        }
      }
      if (!bVar3 && bVar2 == bVar4) break;
      uVar1 = uVar1 - 8;
      pdVar5 = pdVar5 + 1;
      uVar6 = uVar1;
    }
  }
  *param_1 = 0;
  param_1[0x88] = 0;
  return;
}


// ===== 008cbd2c  FUN_008cbd2c =====

void FUN_008cbd2c(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8cbdb0);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 0x1b) {
      uVar2 = 0x1a;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 008cbdb4  FUN_008cbdb4 =====

void FUN_008cbdb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = 0;
  uVar1 = param_3[3];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[3] = uVar1;
      uVar4 = param_3[8];
      uVar3 = param_3[0xb];
      uVar2 = param_3[10];
      uVar6 = param_3[5];
      uVar5 = param_3[4];
      uVar8 = param_3[7];
      uVar7 = param_3[6];
      param_1[9] = param_3[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar3;
      param_1[10] = uVar2;
      param_1[5] = uVar6;
      param_1[4] = uVar5;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
      uVar5 = param_3[0xd];
      uVar4 = param_3[0xc];
      uVar3 = param_3[0xf];
      uVar2 = param_3[0xe];
      param_1[0x10] = param_3[0x10];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar3;
      param_1[0xe] = uVar2;
    }
    else {
      FUN_008cbd2c();
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}


// ===== 008cbe34  FUN_008cbe34 =====

void FUN_008cbe34(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar8 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 0xd;
    if (0xd < param_3) goto LAB_008cbec4;
LAB_008cbe70:
    uVar7 = *param_1 >> 1;
    puVar3 = puVar8 + uVar7;
    bVar2 = uVar7 <= param_3;
    uVar6 = param_3;
    if (bVar2) {
      uVar6 = uVar7;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar7;
    }
    if (!bVar2 || param_3 - uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    if (uVar6 != 0) {
      if (uVar6 < 0x18) {
LAB_008cbe98:
        uVar13 = 0;
      }
      else {
        uVar10 = uVar6 - 1;
        if ((((puVar8 + uVar10 < puVar8) || (param_2 + uVar10 < param_2)) || (uVar10 >> 0x3d != 0))
           || ((ulong)((long)puVar8 - (long)param_2) < 0x20)) goto LAB_008cbe98;
        uVar13 = uVar6 & 0x3ffffffffffffffc;
        puVar12 = param_2 + 2;
        puVar11 = puVar8 + 2;
        param_2 = param_2 + uVar13;
        uVar10 = uVar6 & 0x3ffffffffffffffc;
        do {
          puVar1 = puVar12 + -1;
          uVar14 = puVar12[-2];
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar13) goto LAB_008cbef0;
      }
      lVar9 = uVar6 - uVar13;
      puVar8 = puVar8 + uVar13;
      puVar12 = param_2;
      do {
        param_2 = puVar12 + 1;
        lVar9 = lVar9 + -1;
        *puVar8 = *puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = param_2;
      } while (lVar9 != 0);
    }
LAB_008cbef0:
    if (param_3 <= uVar7) {
      uVar7 = *param_1;
      goto LAB_008cbff4;
    }
    uVar6 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    if (param_3 <= uVar6) goto LAB_008cbe70;
LAB_008cbec4:
    uVar6 = uVar6 * 2;
    if (uVar6 < param_3 || uVar6 - param_3 == 0) {
      uVar6 = param_3;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar6 << 3);
    uVar4 = param_3;
    puVar8 = puVar3;
  }
  uVar10 = uVar4 - 1;
  uVar7 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar7 = uVar10;
  }
  if (uVar7 < 0x1e) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar13 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    if ((((-(long)puVar3 & 7U) == 0) && (puVar3 <= puVar3 + uVar13)) &&
       ((param_2 <= param_2 + uVar13 && (0x1f < (ulong)((long)puVar3 - (long)param_2))))) {
      puVar12 = puVar3 + 2;
      uVar10 = uVar7 + 1 & 3;
      uVar13 = 4;
      if (uVar10 != 0) {
        uVar13 = uVar10;
      }
      puVar11 = param_2 + 2;
      lVar9 = (uVar7 + 1) - uVar13;
      param_2 = param_2 + lVar9;
      lVar5 = lVar9;
      do {
        puVar1 = puVar11 + -1;
        uVar7 = puVar11[-2];
        uVar13 = puVar11[1];
        uVar10 = *puVar11;
        lVar5 = lVar5 + -4;
        puVar11 = puVar11 + 4;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar7;
        puVar12[1] = uVar13;
        *puVar12 = uVar10;
        puVar12 = puVar12 + 4;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar9;
  puVar3 = puVar3 + lVar9;
  do {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  } while (lVar5 != 0);
  uVar7 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar6;
  }
LAB_008cbff4:
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 008cc09c  FUN_008cc09c =====

void FUN_008cc09c(ulong *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6,long param_7,ulong param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((int)param_8 == 0) {
    if ((((int)param_1[1] != (int)param_4) && ((param_4 & 0xffffffff) != 0xffffffff)) &&
       (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/active_decode_targets_helper.cc",
                   0x272,
                   "No chains are configured, but some decode targets might be inactive. Unsupported."
                  );
    }
    param_1[1] = param_4;
  }
  else {
    uVar2 = (ulong)(0xffffffff >> (ulong)(-(int)param_3 & 0x1f));
    if ((param_5 & 1) == 0) {
      uVar4 = 0;
      uVar3 = 0;
      do {
        if (*(int *)(param_7 + uVar4 * 4) == (int)param_6 - (int)param_1[3]) {
          if (0x1f < uVar4) goto LAB_008cc254;
          uVar3 = 1L << (uVar4 & 0x3f) | uVar3;
        }
        uVar4 = uVar4 + 1;
      } while (param_8 != uVar4);
      uVar4 = (ulong)(uint)param_1[1];
      uVar3 = *param_1 & (uVar3 ^ 0xffffffff);
    }
    else {
      uVar3 = (ulong)*(uint *)((long)param_1 + 4) << 0x20;
      param_1[1] = uVar2;
      param_1[2] = (ulong)(0xffffffff >> (ulong)(-(int)param_8 & 0x1f));
      uVar4 = uVar2;
    }
    param_4 = param_4 & uVar2;
    *param_1 = uVar3;
    param_1[3] = param_6;
    if (param_4 != uVar4) {
      param_1[1] = param_4;
      if (param_4 == 0) {
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_00224cd0,"../../modules/rtp_rtcp/source/active_decode_targets_helper.cc"
                       ,0x38b,"It is invalid to produce a frame (",param_6,
                       ") while there are no active decode targets");
          return;
        }
      }
      else {
        if (param_3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar4 = 0;
          uVar2 = 0;
          do {
            if ((0x1f < uVar4) || ((param_4 >> (uVar4 & 0x3f) & 1) != 0)) {
              uVar1 = *(uint *)(param_2 + uVar4 * 4);
              if (0x1f < uVar1) {
LAB_008cc254:
                    /* WARNING: Subroutine does not return */
                FUN_005f55a8("bitset set argument out of range");
              }
              uVar2 = 1L << ((ulong)uVar1 & 0x3f) | uVar2;
            }
            uVar4 = uVar4 + 1;
          } while (param_3 != uVar4);
        }
        param_1[2] = uVar2;
        *param_1 = uVar2;
      }
    }
  }
  return;
}


// ===== 008cc260  FUN_008cc260 =====

void * FUN_008cc260(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  void *pvVar1;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      pvVar1 = operator_new(0x48);
      FUN_008cf400(pvVar1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (param_1 == 1) {
      pvVar1 = operator_new(0x48);
      FUN_008cf564(pvVar1,param_2,param_3,param_4,param_5);
    }
    else {
      if (*(char *)(param_6 + 0x790) != '\x03') goto LAB_008cc408;
      pvVar1 = operator_new(0x80);
      FUN_008d08cc(pvVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_6 + 0x148));
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      pvVar1 = operator_new(0x80);
      FUN_008cc620(pvVar1,param_2,param_3,param_4,param_5);
    }
    else {
      if (*(char *)(param_6 + 0x790) != '\x01') {
LAB_008cc408:
                    /* WARNING: Subroutine does not return */
        FUN_005ee558();
      }
      pvVar1 = operator_new(0x50);
      FUN_008d2a5c(pvVar1,param_2,param_3,param_4,param_5,param_6 + 0x128);
    }
  }
  else if (param_1 == 5) {
    if (*(char *)(param_6 + 0x790) != '\x02') goto LAB_008cc408;
    pvVar1 = operator_new(0x6a8);
    FUN_008cf8fc(pvVar1,param_2,param_3,param_4,param_5,param_6 + 0x128);
  }
  else {
    pvVar1 = operator_new(0x50);
    FUN_008d33c0(pvVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_6 + 0x98),
                 *(undefined1 *)(param_6 + 0xa7));
  }
  return pvVar1;
}


// ===== 008cc40c  FUN_008cc40c =====

void FUN_008cc40c(undefined8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_44;
  
  iVar4 = param_3[3];
  iVar10 = *param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar10 < iVar4 + param_2) {
    if ((0 < iVar10 - param_3[1]) && (0 < iVar10 - param_3[2])) {
      iVar4 = param_3[1] + param_2 + param_3[2];
      uVar6 = 0;
      if (iVar10 != 0) {
        uVar6 = (iVar10 + iVar4 + -1) / iVar10;
      }
      uVar1 = 2;
      if (uVar6 != 1) {
        uVar1 = uVar6;
      }
      if ((int)uVar1 <= param_2) {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d348c();
        }
        piVar7 = (int *)operator_new((ulong)uVar1 * 4);
        *param_1 = piVar7;
        param_1[1] = piVar7;
        param_1[2] = piVar7 + uVar1;
        if (0 < param_2) {
          iVar10 = 0;
          if (uVar1 != 0) {
            iVar10 = iVar4 / (int)uVar1;
          }
          local_44 = iVar10 - param_3[1];
          if (iVar10 <= param_3[1] + 1) {
            local_44 = 1;
          }
          iVar5 = local_44;
          if (param_2 <= local_44) {
            iVar5 = param_2;
          }
          iVar9 = param_2 + -1;
          if (uVar1 != 2 || local_44 < param_2) {
            iVar9 = iVar5;
          }
          if ((param_2 < local_44) || (uVar1 == 2 && local_44 >= param_2)) {
            local_44 = iVar9;
          }
          if (piVar7 < (int *)param_1[2]) {
            if (piVar7 == (int *)0x0) goto LAB_008cc5f8;
            piVar8 = piVar7 + 1;
            *piVar7 = iVar9;
          }
          else {
            piVar8 = (int *)FUN_006d13b4(param_1,&local_44);
          }
          param_1[1] = piVar8;
          param_2 = param_2 - local_44;
          if (0 < param_2) {
            iVar5 = iVar10 * uVar1;
            iVar9 = uVar1 - 3;
            do {
              if ((iVar5 - iVar4) + iVar9 == -2) {
                iVar10 = iVar10 + 1;
              }
              iVar2 = iVar10;
              if (param_2 <= iVar10) {
                iVar2 = param_2;
              }
              iVar3 = param_2 + -1;
              if (iVar9 != 0 || iVar10 < param_2) {
                iVar3 = iVar2;
              }
              if ((param_2 < iVar10) || (local_44 = iVar10, iVar9 == 0 && iVar10 >= param_2)) {
                local_44 = iVar3;
              }
              if (piVar8 < (int *)param_1[2]) {
                if (piVar8 == (int *)0x0) goto LAB_008cc5f8;
                piVar7 = piVar8 + 1;
                *piVar8 = iVar3;
              }
              else {
                piVar7 = (int *)FUN_006d13b4(param_1,&local_44);
              }
              iVar9 = iVar9 + -1;
              param_1[1] = piVar7;
              param_2 = param_2 - local_44;
              piVar8 = piVar7;
            } while (0 < param_2);
          }
        }
      }
    }
  }
  else {
    piVar7 = (int *)operator_new(4);
    if (piVar7 == (int *)0x0) {
LAB_008cc5f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = piVar7;
    *piVar7 = param_2;
    param_1[1] = piVar7 + 1;
    param_1[2] = piVar7 + 1;
  }
  return;
}


// ===== 008cc620  FUN_008cc620 =====

void FUN_008cc620(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  void *local_68;
  void *local_60;
  
  *param_1 = &PTR_FUN_00d3cb28;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  param_1[0xf] = 0;
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
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_0087b4ac(&local_68,param_2,param_3);
  pvVar4 = local_60;
  for (pvVar2 = local_68; pvVar2 != pvVar4; pvVar2 = (void *)((long)pvVar2 + 0x18)) {
    uVar16 = *(ulong *)((long)pvVar2 + 0x10);
    if (uVar16 < 2) {
      puVar11 = (undefined8 *)param_1[2];
      if (puVar11 == (undefined8 *)param_1[3]) goto LAB_008cc7b0;
      uVar16 = param_1[5];
      plVar13 = puVar11 + (uVar16 >> 8);
      lVar14 = *plVar13;
      lVar8 = lVar14 + (uVar16 & 0xff) * 0x10;
      goto LAB_008cc788;
    }
    uVar12 = *(ulong *)((long)pvVar2 + 8);
    uVar15 = param_3 - uVar12;
    if ((param_3 < uVar12) ||
       ((uVar16 != 0xffffffffffffffff && (bVar1 = uVar15 < uVar16, uVar15 = uVar16, bVar1)))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x8cca04);
      (*pcVar5)();
    }
    lVar14 = param_1[2];
    lVar10 = param_1[3];
    lVar8 = 0;
    if (lVar10 != lVar14) {
      lVar8 = (lVar10 - lVar14) * 0x20 + -1;
    }
    lVar3 = 0;
    if (uVar15 != 0) {
      lVar3 = uVar12 + param_2;
    }
    if (lVar8 == param_1[6] + param_1[5]) {
      FUN_008cdba0(param_1 + 1);
      lVar14 = param_1[2];
      lVar10 = param_1[3];
    }
    if ((lVar14 == lVar10) ||
       (plVar13 = (long *)(*(long *)(lVar14 + ((ulong)(param_1[6] + param_1[5]) >> 8) * 8) +
                          (param_1[6] + param_1[5] & 0xff) * 0x10), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar13 = lVar3;
    plVar13[1] = uVar15;
    param_1[6] = param_1[6] + 1;
  }
  bVar1 = true;
  goto joined_r0x008cc8bc;
LAB_008cc788:
  if (lVar8 != puVar11[param_1[6] + uVar16 >> 8] + (param_1[6] + uVar16 & 0xff) * 0x10) {
    if (lVar8 == 0) goto LAB_008cc934;
    lVar8 = lVar8 + 0x10;
    if (lVar8 - lVar14 == 0x1000) {
      plVar13 = plVar13 + 1;
      lVar14 = *plVar13;
      lVar8 = lVar14;
    }
    goto LAB_008cc788;
  }
LAB_008cc7b0:
  param_1[6] = 0;
  lVar8 = (long)param_1[3] - (long)puVar11;
  while (uVar16 = lVar8 >> 3, 2 < uVar16) {
    operator_delete((void *)*puVar11);
    puVar11 = (undefined8 *)(param_1[2] + 8);
    param_1[2] = puVar11;
    lVar8 = param_1[3] - (long)puVar11;
  }
  if (uVar16 == 1) {
    uVar7 = 0x80;
LAB_008cc808:
    param_1[5] = uVar7;
  }
  else if (uVar16 == 2) {
    uVar7 = 0x100;
    goto LAB_008cc808;
  }
  bVar1 = false;
joined_r0x008cc8bc:
  if (local_68 != (void *)0x0) {
    uVar16 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
    uVar15 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
    if (uVar15 <= uVar16) {
      uVar16 = uVar15;
    }
    if ((1 < uVar16) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
      uVar16 = uVar16 & 0x1ffffffffffffffe;
      local_60 = (void *)((long)local_60 + uVar16 * -0x18);
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
    }
    do {
      if (local_60 == local_68) {
        operator_delete(local_68);
        goto joined_r0x008cc9dc;
      }
      local_60 = (void *)((long)local_60 + -0x18);
    } while (local_60 != (void *)0x0);
LAB_008cc934:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
joined_r0x008cc9dc:
  if ((bVar1) && (uVar16 = param_1[6], uVar16 != 0)) {
    uVar15 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xd);
      if (uVar16 == 1) {
        iVar9 = *(int *)((long)param_1 + 0x74);
LAB_008cc874:
        iVar6 = iVar6 - iVar9;
      }
      else {
        if (uVar15 == 0) {
          iVar9 = *(int *)((long)param_1 + 0x6c);
          goto LAB_008cc874;
        }
        if (uVar15 + 1 == uVar16) {
          iVar9 = *(int *)(param_1 + 0xe);
          goto LAB_008cc874;
        }
      }
      if (iVar6 < *(int *)(*(long *)(param_1[2] + (param_1[5] + uVar15 >> 8) * 8) +
                           (param_1[5] + uVar15 & 0xff) * 0x10 + 8)) {
        uVar16 = FUN_008ccc5c(param_1,uVar15);
        if ((uVar16 & 1) == 0) {
          lVar8 = param_1[0xc];
          param_1[0xf] = 0;
          if (lVar8 == 0) {
            return;
          }
          puVar11 = (undefined8 *)param_1[8];
          uVar16 = param_1[0xb];
          while (puVar11[uVar16 / 0xaa] + (uVar16 % 0xaa) * 0x18 != 0) {
            uVar16 = uVar16 + 1;
            lVar8 = lVar8 + -1;
            param_1[0xb] = uVar16;
            param_1[0xc] = lVar8;
            if (0x153 < uVar16) {
              operator_delete((void *)*puVar11);
              puVar11 = (undefined8 *)(param_1[8] + 8);
              lVar8 = param_1[0xc];
              param_1[8] = puVar11;
              uVar16 = param_1[0xb] - 0xaa;
              param_1[0xb] = uVar16;
            }
            if (lVar8 == 0) {
              return;
            }
          }
          goto LAB_008cc934;
        }
        uVar15 = uVar15 + 1;
      }
      else {
        iVar6 = FUN_008ccfb0(param_1,uVar15);
        uVar15 = (ulong)iVar6;
      }
      uVar16 = param_1[6];
    } while (uVar15 < uVar16);
  }
  return;
}


// ===== 008cca18  FUN_008cca18 =====

void FUN_008cca18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cb28;
  FUN_008cd9cc(param_1 + 7);
  FUN_008cca54(param_1 + 1);
  return;
}


// ===== 008cca54  FUN_008cca54 =====

void FUN_008cca54(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_008ccbb4;
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
    if (uVar7 != 2) goto LAB_008ccb2c;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_008ccb2c:
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
LAB_008ccbb4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008ccc04  FUN_008ccc04 =====

void FUN_008ccc04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cb28;
  FUN_008cd9cc(param_1 + 7);
  FUN_008cca54(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 008ccc50  FUN_008ccc50 =====

undefined8 FUN_008ccc50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 008ccc5c  FUN_008ccc5c =====

bool FUN_008ccc5c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar10 = *(ulong *)(param_1 + 0x30);
  if (uVar10 <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  uStack_68 = *(ulong *)(param_1 + 0x70);
  uVar1 = *(long *)(param_1 + 0x28) + param_2;
  plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10
                    );
  puVar3 = (ushort *)*plVar12;
  uVar1 = plVar12[1];
  local_70._0_4_ = (int)*(undefined8 *)(param_1 + 0x68);
  uVar5 = (int)local_70 - 3;
  local_70 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20),uVar5);
  if (uVar10 == 1) {
LAB_008ccce8:
    if (param_2 == uVar10 - 1) goto LAB_008cccf4;
  }
  else {
    if (param_2 == uVar10 - 1) {
      uVar14 = *(undefined4 *)(param_1 + 0x70);
LAB_008ccce0:
      uStack_68 = CONCAT44(uVar14,(undefined4)uStack_68);
      local_70 = (ulong)uVar5;
      goto LAB_008ccce8;
    }
    if (param_2 != 0) {
      uVar14 = 0;
      goto LAB_008ccce0;
    }
    uStack_68 = CONCAT44(*(undefined4 *)(param_1 + 0x6c),(undefined4)uStack_68);
    if (uVar10 == 1) goto LAB_008cccf4;
  }
  uStack_68 = uStack_68 & 0xffffffff00000000;
LAB_008cccf4:
  lVar17 = uVar1 - 2;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008cc40c(&local_90,uVar1 - 2,&local_70);
  puVar7 = puStack_88;
  puVar6 = local_90;
  if (local_90 != puStack_88) {
    uVar15 = (long)puStack_88 - (long)local_90 >> 2;
    uVar10 = 0;
    iVar20 = 2;
    do {
      uVar5 = *(uint *)(local_90 + uVar10 * 4);
      uVar18 = (ulong)uVar5;
      if ((int)uVar5 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0x7e,"packet_length > 0"
                     ,&DAT_001fbedc,uVar5,0);
      }
      uVar19 = (ulong)iVar20;
      if ((uVar1 < uVar19) || (uVar1 - uVar19 < uVar18)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x8ccefc);
        (*pcVar8)();
      }
      lVar11 = *(long *)(param_1 + 0x40);
      lVar16 = *(long *)(param_1 + 0x48);
      uVar4 = *puVar3;
      lVar2 = 0;
      if (lVar16 - lVar11 != 0) {
        lVar2 = (lVar16 - lVar11 >> 3) * 0xaa + -1;
      }
      bVar9 = uVar10 == uVar15 - 1;
      if (lVar2 == *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) {
        FUN_008ce7d0(param_1 + 0x38);
        lVar11 = *(long *)(param_1 + 0x40);
        lVar16 = *(long *)(param_1 + 0x48);
      }
      if ((lVar11 == lVar16) ||
         (uVar15 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58),
         plVar12 = (long *)(*(long *)(lVar11 + (uVar15 / 0xaa) * 8) + (uVar15 % 0xaa) * 0x18),
         plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(bool *)(plVar12 + 2) = uVar10 == 0;
      uVar10 = uVar10 + 1;
      *plVar12 = (long)puVar3 + uVar19;
      plVar12[1] = uVar18;
      iVar20 = uVar5 + iVar20;
      *(bool *)((long)plVar12 + 0x11) = bVar9;
      lVar17 = lVar17 - uVar18;
      *(undefined1 *)((long)plVar12 + 0x12) = 0;
      *(ushort *)((long)plVar12 + 0x14) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
      uVar15 = (long)puStack_88 - (long)local_90 >> 2;
    } while (uVar10 < uVar15);
    *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar15;
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0x89,"payload_left == 0",
                   &DAT_001fbca2,lVar17,0);
    }
  }
  if (local_90 != (undefined1 *)0x0) {
    uVar10 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3e) -
                    ((long)local_90 - (long)puStack_88)) >> 2;
    if ((ulong)(puStack_88 + (-4 - ((long)puStack_88 << 0x3e))) >> 2 <= uVar10) {
      uVar10 = (ulong)(puStack_88 + (-4 - ((long)puStack_88 << 0x3e))) >> 2;
    }
    puVar13 = puStack_88;
    if ((1 < uVar10) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 3U) == 0)) {
      uVar10 = uVar10 & 0x3ffffffffffffffe;
      puVar13 = puStack_88 + uVar10 * -4;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar13 != local_90) {
      puVar13 = puVar13 + -4;
      if (puVar13 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_88 = local_90;
    operator_delete(local_90);
  }
  return puVar6 != puVar7;
}


// ===== 008ccfb0  FUN_008ccfb0 =====

ulong FUN_008ccfb0(long param_1,ulong param_2)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 <= param_2) {
LAB_008cd200:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  uVar12 = (ulong)*(int *)(param_1 + 0x68);
  uVar13 = *(long *)(param_1 + 0x28) + param_2;
  puVar6 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x10) + (uVar13 >> 8) * 8) + (uVar13 & 0xff) * 0x10);
  uVar13 = puVar6[1];
  if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0x94,
                 "payload_size_left >= fragment.size()",&DAT_001fb920,uVar12,uVar13);
  }
  puVar14 = (ushort *)*puVar6;
  lVar7 = 0;
  iVar10 = 0;
  uVar11 = param_2 + 1;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  uVar2 = *puVar14;
  do {
    uVar9 = uVar11 - 1;
    uVar1 = uVar13 + lVar7;
    if ((param_2 == 0) && (uVar9 == uVar3 - 1)) {
      lVar7 = (long)*(int *)(param_1 + 0x74);
LAB_008cd08c:
      uVar4 = uVar1 + lVar7;
    }
    else {
      if (param_2 == 0) {
        lVar7 = (long)*(int *)(param_1 + 0x6c);
        goto LAB_008cd08c;
      }
      uVar4 = uVar1;
      if (uVar9 == uVar3 - 1) {
        lVar7 = (long)*(int *)(param_1 + 0x70);
        goto LAB_008cd08c;
      }
    }
    if (uVar12 < uVar4) {
LAB_008cd18c:
      if (iVar10 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0xc1,
                     "aggregated_fragments > 0",&DAT_001fbedc,iVar10,0);
      }
      if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                  );
      }
      uVar3 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
      *(undefined1 *)
       (*(long *)(*(long *)(param_1 + 0x40) + (uVar3 / 0xaa) * 8) + (uVar3 % 0xaa) * 0x18 + 0x11) =
           1;
      return uVar9 & 0xffffffff;
    }
    if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0xa7,"fragment.size() > 0"
                   ,&DAT_001fbca2,0,0);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(param_1 + 0x48);
    lVar7 = 0;
    if (lVar8 - lVar5 != 0) {
      lVar7 = (lVar8 - lVar5 >> 3) * 0xaa + -1;
    }
    if (lVar7 == *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) {
      FUN_008ce7d0(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar8 = *(long *)(param_1 + 0x48);
    }
    if ((lVar5 == lVar8) ||
       (uVar3 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58),
       puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar3 / 0xaa) * 8) + (uVar3 % 0xaa) * 0x18),
       puVar6 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar6 = puVar14;
    puVar6[1] = uVar13;
    uVar12 = uVar12 - uVar1;
    *(bool *)(puVar6 + 2) = iVar10 == 0;
    *(undefined2 *)((long)puVar6 + 0x11) = 0x100;
    *(ushort *)((long)puVar6 + 0x14) = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
    uVar3 = *(ulong *)(param_1 + 0x30);
    lVar7 = 6;
    if (iVar10 != 0) {
      lVar7 = 2;
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    if (uVar11 == uVar3) {
      iVar10 = iVar10 + 1;
      uVar9 = uVar11;
      goto LAB_008cd18c;
    }
    if (uVar3 <= uVar11) goto LAB_008cd200;
    iVar10 = iVar10 + 1;
    uVar13 = uVar11 + *(long *)(param_1 + 0x28);
    uVar11 = uVar11 + 1;
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x10) + (uVar13 >> 8) * 8) + (uVar13 & 0xff) * 0x10);
    puVar14 = (ushort *)*puVar6;
    uVar13 = puVar6[1];
  } while( true );
}


// ===== 008cd2b4  FUN_008cd2b4 =====

bool FUN_008cd2b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0xaa) * 8) +
             (*(ulong *)(param_1 + 0x58) % 0xaa) * 0x18);
    if (((*(byte *)(puVar1 + 2) & 1) == 0) || ((*(byte *)((long)puVar1 + 0x11) & 1) == 0)) {
      if ((*(byte *)((long)puVar1 + 0x12) & 1) == 0) {
        FUN_008cd7cc(param_1,param_2);
      }
      else {
        FUN_008cd47c(param_1,param_2);
      }
    }
    else {
      FUN_007db7a0(param_2,*puVar1,puVar1[1]);
      if (*(long *)(param_1 + 0x60) == 0) {
LAB_008cd454:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar2 = *(ulong *)(param_1 + 0x58);
      if ((*(undefined8 **)(param_1 + 0x40))[uVar2 / 0xaa] + (uVar2 % 0xaa) * 0x18 == 0) {
LAB_008cd468:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(ulong *)(param_1 + 0x58) = uVar2 + 1;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
      if (0x153 < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x40));
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 8;
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -0xaa;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_008cd454;
      uVar2 = *(ulong *)(param_1 + 0x28);
      if ((*(undefined8 **)(param_1 + 0x10))[uVar2 >> 8] + (uVar2 & 0xff) * 0x10 == 0)
      goto LAB_008cd468;
      *(ulong *)(param_1 + 0x28) = uVar2 + 1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      if (0x1ff < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 8;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x100;
      }
    }
    FUN_007da930(param_2,*(long *)(param_1 + 0x60) == 0);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
  }
  return lVar3 != 0;
}


// ===== 008cd47c  FUN_008cd47c =====

void FUN_008cd47c(long param_1,long param_2)

{
  byte *__src;
  size_t __n;
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  
  lVar4 = *(long *)(param_2 + 0x58);
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 8) - *(long *)(param_2 + 0x60);
  }
  uVar2 = (lVar4 - (ulong)*(byte *)(param_2 + 2)) -
          (*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18));
  if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0xe1,
                 "payload_capacity >= kH265PayloadHeaderSizeBytes",&DAT_001fb920,uVar2,2);
  }
  pbVar1 = (byte *)FUN_007db6a0(param_2,uVar2);
  if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0xe3,"buffer",&DAT_001f5fa0)
    ;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
LAB_008cd754:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
              );
  }
  puVar5 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0xaa) * 8) +
           (*(ulong *)(param_1 + 0x58) % 0xaa) * 0x18);
  if ((*(byte *)(puVar5 + 2) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0xe5,
                 "packet->first_fragment",&DAT_001f5fa0);
  }
  bVar6 = *(byte *)((long)puVar5 + 0x11);
  if (*(char *)((long)puVar5 + 0x12) == '\x01') {
    iVar3 = 2;
    uVar7 = 0x7f;
    bVar9 = 7;
    do {
      __src = (byte *)*puVar5;
      __n = puVar5[1];
      bVar10 = __src[1] & 7;
      uVar8 = (uint)(__src[1] >> 3) | (*__src & 1) << 5;
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      if (bVar9 <= bVar10) {
        bVar10 = bVar9;
      }
      *(ushort *)(pbVar1 + iVar3) =
           (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
      memcpy(pbVar1 + (iVar3 + 2),__src,__n);
      if (*(long *)(param_1 + 0x60) == 0) {
LAB_008cd72c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar2 = *(ulong *)(param_1 + 0x58);
      if ((*(undefined8 **)(param_1 + 0x40))[uVar2 / 0xaa] + (uVar2 % 0xaa) * 0x18 == 0) {
LAB_008cd740:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(ulong *)(param_1 + 0x58) = uVar2 + 1;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
      if (0x153 < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x40));
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 8;
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -0xaa;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_008cd72c;
      uVar2 = *(ulong *)(param_1 + 0x28);
      if ((*(undefined8 **)(param_1 + 0x10))[uVar2 >> 8] + (uVar2 & 0xff) * 0x10 == 0)
      goto LAB_008cd740;
      *(ulong *)(param_1 + 0x28) = uVar2 + 1;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      if (0x1ff < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 8;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x100;
      }
      iVar3 = iVar3 + 2 + (uint)__n;
      if ((bVar6 & 1) != 0) {
        pbVar1[1] = bVar10 | (byte)(uVar8 << 3);
        *pbVar1 = (byte)(uVar8 >> 5) | 0x60;
        goto LAB_008cd700;
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_008cd754;
      puVar5 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0xaa) * 8) +
               (*(ulong *)(param_1 + 0x58) % 0xaa) * 0x18);
      bVar6 = *(byte *)((long)puVar5 + 0x11);
      uVar7 = uVar8;
      bVar9 = bVar10;
    } while ((*(byte *)((long)puVar5 + 0x12) & 1) != 0);
  }
  else {
    iVar3 = 2;
    uVar8 = 0x7f;
    bVar10 = 7;
  }
  pbVar1[1] = bVar10 + (char)uVar8 * '\b';
  *pbVar1 = (byte)(uVar8 >> 5) | 0x60;
  if ((bVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0x111,"is_last_fragment",
                 &DAT_001f5fa0);
  }
LAB_008cd700:
  FUN_007db738(param_2,(long)iVar3);
  return;
}


// ===== 008cd7cc  FUN_008cd7cc =====

void FUN_008cd7cc(long param_1,undefined8 param_2)

{
  void *__src;
  size_t __n;
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
              );
  }
  puVar7 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0xaa) * 8) +
           (*(ulong *)(param_1 + 0x58) % 0xaa) * 0x18);
  __src = (void *)*puVar7;
  __n = puVar7[1];
  uVar3 = *(undefined2 *)((long)puVar7 + 0x14);
  cVar1 = *(char *)(puVar7 + 2);
  cVar2 = *(char *)((long)puVar7 + 0x11);
  pbVar5 = (byte *)FUN_007db6a0(param_2,__n + 3);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_packetizer_h265.cc",0x13c,"buffer",&DAT_001f5fa0
                );
  }
  bVar4 = (byte)((ushort)uVar3 >> 8);
  pbVar5[1] = (byte)uVar3;
  *pbVar5 = bVar4 & 0x83 | 0x62;
  pbVar5[2] = cVar1 << 7 | cVar2 << 6 | bVar4 >> 1 & 0x3f;
  memcpy(pbVar5 + 3,__src,__n);
  if (*(char *)((long)puVar7 + 0x11) == '\x01') {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_008cd970;
    uVar6 = *(ulong *)(param_1 + 0x28);
    if ((*(undefined8 **)(param_1 + 0x10))[uVar6 >> 8] + (uVar6 & 0xff) * 0x10 == 0)
    goto LAB_008cd984;
    *(ulong *)(param_1 + 0x28) = uVar6 + 1;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    if (0x1ff < uVar6 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 0x10));
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 8;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x100;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x58);
    if ((*(undefined8 **)(param_1 + 0x40))[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18 != 0) {
      *(ulong *)(param_1 + 0x58) = uVar6 + 1;
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
      if (0x153 < uVar6 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x40));
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 8;
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -0xaa;
      }
      return;
    }
LAB_008cd984:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_008cd970:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
            );
}


// ===== 008cd9cc  FUN_008cd9cc =====

void FUN_008cd9cc(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_008cdb50;
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
    if (uVar5 != 2) goto LAB_008cdac8;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_008cdac8:
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
LAB_008cdb50:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008cdba0  FUN_008cdba0 =====

void FUN_008cdba0(long *param_1)

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
      FUN_008ce010(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008ce534(&local_50,lVar5);
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
      FUN_008ce010(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_008ce298(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008cdd88(param_1,&local_50);
  return;
}


// ===== 008cdd88  FUN_008cdd88 =====

void FUN_008cdd88(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008cdff8;
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
LAB_008cdff8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ce010  FUN_008ce010 =====

void FUN_008ce010(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008ce280;
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
LAB_008ce280:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ce298  FUN_008ce298 =====

void FUN_008ce298(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008ce51c;
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
LAB_008ce51c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ce534  FUN_008ce534 =====

void FUN_008ce534(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008ce7b8;
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
LAB_008ce7b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ce7d0  FUN_008ce7d0 =====

void FUN_008ce7d0(long *param_1)

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
      FUN_008cec40(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008cf164(&local_50,lVar5);
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
      FUN_008cec40(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_008ceec8(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008ce9b8(param_1,&local_50);
  return;
}


// ===== 008ce9b8  FUN_008ce9b8 =====

void FUN_008ce9b8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008cec28;
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
LAB_008cec28:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008cec40  FUN_008cec40 =====

void FUN_008cec40(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008ceeb0;
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
LAB_008ceeb0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ceec8  FUN_008ceec8 =====

void FUN_008ceec8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008cf14c;
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
LAB_008cf14c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008cf164  FUN_008cf164 =====

void FUN_008cf164(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008cf3e8;
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
LAB_008cf3e8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008cf400  FUN_008cf400 =====

void FUN_008cf400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined2 uVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = &PTR_FUN_00d3cb58;
  param_1[2] = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  bVar3 = 2;
  if (*(int *)(param_6 + 0x98) == 3) {
    bVar3 = 3;
  }
  *(byte *)(param_1 + 1) = bVar3;
  if (*(char *)(param_6 + 0x790) == '\x04') {
    uVar1 = *(undefined2 *)(param_6 + 0x128);
    *(byte *)(param_1 + 1) = bVar3 | 4;
    *(char *)((long)param_1 + 10) = (char)uVar1;
    param_1[2] = 3;
    *(byte *)((long)param_1 + 9) = (byte)((ushort)uVar1 >> 8) & 0x7f;
    iVar4 = -3;
  }
  else {
    iVar4 = -1;
  }
  _local_30 = CONCAT44((int)((ulong)param_4 >> 0x20),iVar4 + (int)param_4);
  uStack_28 = param_5;
  FUN_008cc40c(&local_50,param_3,&local_30);
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    pvVar5 = (void *)param_1[6];
    uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
    uVar6 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3e) - ((long)pvVar2 - (long)pvVar5)) >> 2;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar2 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
      uVar6 = uVar6 & 0x3ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (pvVar5 != pvVar2) {
      pvVar5 = (void *)((long)pvVar5 + -4);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[6] = pvVar2;
    operator_delete(pvVar2);
  }
  param_1[6] = uStack_48;
  param_1[5] = local_50;
  param_1[7] = local_40;
  param_1[8] = local_50;
  return;
}


// ===== 008cf564  FUN_008cf564 =====

void FUN_008cf564(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_00d3cb58;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  local_30 = param_4;
  uStack_28 = param_5;
  FUN_008cc40c(&local_50,(int)param_3,&local_30);
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
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
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  param_1[6] = uStack_48;
  param_1[5] = local_50;
  param_1[7] = local_40;
  param_1[8] = local_50;
  return;
}


// ===== 008cf668  FUN_008cf668 =====

void FUN_008cf668(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d3cb58;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[6];
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
      param_1[6] = pvVar1;
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


// ===== 008cf71c  FUN_008cf71c =====

void FUN_008cf71c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d3cb58;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
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
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 008cf7e4  FUN_008cf7e4 =====

long FUN_008cf7e4(long param_1)

{
  return *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x40) >> 2;
}


// ===== 008cf7fc  FUN_008cf7fc =====

bool FUN_008cf7fc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  void *__dest;
  long lVar3;
  ulong __n;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x30);
  piVar5 = *(int **)(param_1 + 0x40);
  if (piVar5 != piVar4) {
    __n = (ulong)*piVar5;
    __dest = (void *)FUN_007db6a0(param_2,*(long *)(param_1 + 0x10) + __n);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_video_generic.cc",0x41,"out_ptr",
                   &DAT_001f5fa0);
    }
    if (*(size_t *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      memcpy(__dest,(void *)(param_1 + 8),*(size_t *)(param_1 + 0x10));
      lVar3 = *(long *)(param_1 + 0x10);
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
    }
    memcpy((void *)((long)__dest + lVar3),*(void **)(param_1 + 0x18),__n);
    lVar3 = *(ulong *)(param_1 + 0x20) - __n;
    if (*(ulong *)(param_1 + 0x20) < __n) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x8cf8dc);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x18) + __n;
    }
    *(long *)(param_1 + 0x18) = lVar1;
    *(long *)(param_1 + 0x20) = lVar3;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 4;
    FUN_007da930(param_2,lVar3 == 0);
  }
  return piVar5 != piVar4;
}


// ===== 008cf8fc  FUN_008cf8fc =====

void FUN_008cf8fc(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,void *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  void *pvVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  int iVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  
  *param_1 = &PTR_FUN_00d3cb88;
  local_48 = param_5;
  if (8 < *(ulong *)((long)param_6 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x122,
                 "original_header.num_spatial_layers <= kMaxVp9NumberOfSpatialLayers",&DAT_001fb920,
                 *(ulong *)((long)param_6 + 0x20),8);
  }
  memcpy(param_1 + 1,param_6,0x668);
  if (*(long *)((long)param_6 + 0x28) == 0) {
    uVar7 = (uint)*(byte *)((long)param_1 + 0x15);
  }
  else {
    uVar14 = param_1[5];
    uVar8 = param_1[6];
    if (uVar8 < uVar14) {
      uVar11 = uVar8;
      if (uVar8 < 9) {
        uVar11 = 8;
      }
      lVar13 = uVar8 * 2 + 0x4a;
      do {
        if ((uVar11 == uVar8) || (7 < uVar8 - param_1[6])) goto LAB_008cfc38;
        *(undefined2 *)((long)param_1 + uVar8 * 2 + param_1[6] * -2 + 0x3a) =
             *(undefined2 *)((long)param_1 + lVar13 + -0x10);
        if (7 < uVar8 - param_1[6]) goto LAB_008cfc38;
        puVar9 = (undefined2 *)((long)param_1 + lVar13);
        lVar13 = lVar13 + 2;
        lVar1 = uVar8 * 2;
        uVar8 = uVar8 + 1;
        *(undefined2 *)((long)param_1 + lVar1 + param_1[6] * -2 + 0x4a) = *puVar9;
        uVar14 = param_1[5];
      } while (uVar8 < uVar14);
      uVar8 = param_1[6];
    }
    uVar11 = uVar14 - uVar8;
    if (uVar11 < uVar14) {
      puVar9 = (undefined2 *)((long)param_1 + uVar14 * 2 + uVar8 * -2 + 0x4a);
      do {
        if (7 < uVar11) {
LAB_008cfc38:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8cfc3c);
          (*pcVar4)();
        }
        puVar9[-8] = 0;
        uVar11 = uVar11 + 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar11 < (ulong)param_1[5]);
      uVar8 = param_1[6];
      uVar11 = param_1[5] - uVar8;
    }
    param_1[5] = uVar11;
    param_1[6] = 0;
    uVar7 = (uint)*(byte *)((long)param_1 + 0x15) - (int)uVar8;
    *(char *)((long)param_1 + 0x15) = (char)uVar7;
  }
  uVar6 = 0;
  if ((*(char *)(param_1 + 1) == '\x01') && (*(char *)((long)param_1 + 9) != '\0')) {
    bVar3 = *(byte *)((long)param_1 + 0x19);
    uVar6 = (uint)bVar3;
    if (bVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x62,"hdr.num_ref_pics > 0U",
                   &DAT_00224cd5,0,0);
    }
    if (3 < bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",99,
                   "hdr.num_ref_pics <= kMaxVp9RefPics",&DAT_00224cd9,bVar3,3);
    }
  }
  iVar16 = 2;
  if (*(short *)(param_1 + 2) != 0x7f) {
    iVar16 = 3;
  }
  if (*(short *)((long)param_1 + 0xe) == -1) {
    iVar16 = 1;
  }
  iVar12 = 1;
  if (*(char *)((long)param_1 + 9) == '\0') {
    iVar12 = 2;
  }
  local_50 = 0;
  if ((*(byte *)((long)param_1 + 0x14) & uVar7) != 0xff) {
    local_50 = iVar12;
  }
  local_50 = local_50 + iVar16 + uVar6;
  *(int *)(param_1 + 0xce) = local_50;
  if (*(char *)((long)param_1 + 0xc) == '\x01') {
    uVar8 = param_1[5];
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x7f,
                   "hdr.num_spatial_layers > 0U",&DAT_00214eb8,0,0);
    }
    if (8 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x80,
                   "hdr.num_spatial_layers <= kMaxVp9NumberOfSpatialLayers",&DAT_001fb920,uVar8,8);
    }
    uVar14 = param_1[0xc];
    if (0xff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x81,
                   "hdr.gof.num_frames_in_gof <= kMaxVp9FramesInGof",&DAT_001fb920,uVar14,0xff);
    }
    lVar13 = 1;
    if (*(char *)(param_1 + 7) != '\0') {
      lVar13 = uVar8 * 4 + 1;
    }
    uVar8 = uVar14;
    if (uVar14 != 0) {
      uVar8 = uVar14 + 1;
    }
    lVar13 = uVar8 + lVar13;
    iVar16 = (int)lVar13;
    if (uVar14 != 0) {
      pbVar15 = (byte *)((long)param_1 + 0x266);
      do {
        bVar3 = *pbVar15;
        if (3 < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x8c,
                       "hdr.gof.num_ref_pics[i] <= kMaxVp9RefPics",&DAT_00224cd9,bVar3,3);
        }
        lVar13 = lVar13 + (ulong)bVar3;
        iVar16 = (int)lVar13;
        uVar14 = uVar14 - 1;
        pbVar15 = pbVar15 + 1;
      } while (uVar14 != 0);
    }
  }
  else {
    iVar16 = 0;
  }
  param_1[0xcf] = param_2;
  puVar2 = param_1 + 0xd1;
  *(int *)((long)param_1 + 0x674) = iVar16;
  param_1[0xd0] = param_3;
  param_1[0xd2] = 0;
  *puVar2 = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x13d,
                 "hdr_.first_active_layer == 0",&DAT_001fbca2,param_1[6],0);
  }
  local_50 = (int)param_4 - local_50;
  iStack_4c = (int)((ulong)param_4 >> 0x20) + iVar16;
  local_48 = CONCAT44((int)((ulong)param_5 >> 0x20) + iVar16,(undefined4)local_48);
  if (param_3 == 0) {
    local_70 = 0;
  }
  else {
    FUN_008cc40c(&local_70,param_3 & 0xffffffff,&local_50);
    pvVar5 = (void *)*puVar2;
    if (pvVar5 != (void *)0x0) {
      pvVar10 = (void *)param_1[0xd2];
      uVar14 = (ulong)((long)pvVar10 + (-4 - ((long)pvVar10 << 0x3e))) >> 2;
      uVar8 = (ulong)(((long)pvVar5 - (long)pvVar10 << 0x3e) - ((long)pvVar5 - (long)pvVar10)) >> 2;
      if (uVar14 <= uVar8) {
        uVar8 = uVar14;
      }
      if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar10 | -(int)pvVar10) & 3U) == 0)) {
        uVar8 = uVar8 & 0x3ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar8 * -4);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (pvVar10 != pvVar5) {
        pvVar10 = (void *)((long)pvVar10 + -4);
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[0xd2] = pvVar5;
      operator_delete(pvVar5);
    }
    param_1[0xd3] = local_60;
    param_1[0xd2] = uStack_68;
    *puVar2 = local_70;
  }
  param_1[0xd4] = local_70;
  return;
}


// ===== 008cfd68  FUN_008cfd68 =====

void FUN_008cfd68(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0xd1];
  *param_1 = &PTR_FUN_00d3cb88;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[0xd2];
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
      param_1[0xd2] = pvVar1;
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


// ===== 008cfe1c  FUN_008cfe1c =====

void FUN_008cfe1c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0xd1];
  *param_1 = &PTR_FUN_00d3cb88;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xd2];
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
    param_1[0xd2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 008cfee4  FUN_008cfee4 =====

long FUN_008cfee4(long param_1)

{
  return *(long *)(param_1 + 0x690) - *(long *)(param_1 + 0x6a0) >> 2;
}


// ===== 008cfefc  FUN_008cfefc =====

undefined8 FUN_008cfefc(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong __n;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  piVar8 = *(int **)(param_1 + 0x690);
  piVar7 = *(int **)(param_1 + 0x6a0);
  if (piVar7 != piVar8) {
    piVar10 = *(int **)(param_1 + 0x688);
    iVar11 = *(int *)(param_1 + 0x670);
    piVar9 = piVar7 + 1;
    iVar2 = *piVar7;
    __n = (ulong)iVar2;
    *(int **)(param_1 + 0x6a0) = piVar9;
    if (piVar7 == piVar10) {
      iVar11 = *(int *)(param_1 + 0x674) + iVar11;
    }
    lVar4 = FUN_007db6a0(param_2,(long)(iVar11 + iVar2));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x15e,"buffer",&DAT_001f5fa0);
    }
    lVar1 = 0;
    if (iVar11 != 0) {
      lVar1 = lVar4;
    }
    uVar5 = FUN_008d0078(param_1,piVar7 == piVar10,piVar9 == piVar8,lVar1,(long)iVar11);
    if ((uVar5 & 1) != 0) {
      memcpy((void *)(lVar4 + iVar11),*(void **)(param_1 + 0x678),__n);
      lVar4 = *(ulong *)(param_1 + 0x680) - __n;
      if (*(ulong *)(param_1 + 0x680) < __n) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x8d0038);
        (*pcVar3)();
      }
      *(long *)(param_1 + 0x680) = lVar4;
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = *(long *)(param_1 + 0x678) + __n;
      }
      *(long *)(param_1 + 0x678) = lVar1;
      if ((*(long *)(param_1 + 0x28) - 1U <= (ulong)*(byte *)(param_1 + 0x15)) &&
         ((*(byte *)(param_1 + 0x668) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0x169,
                     "hdr_.spatial_idx < hdr_.num_spatial_layers - 1 || hdr_.end_of_picture",
                     &DAT_001f5fa0);
      }
      if (piVar9 == piVar8) {
        bVar6 = *(byte *)(param_1 + 0x668);
      }
      else {
        bVar6 = 0;
      }
      FUN_007da930(param_2,bVar6 & 1);
      return 1;
    }
  }
  return 0;
}


// ===== 008d0078  FUN_008d0078 =====

undefined8
FUN_008d0078(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  pbVar10 = (byte *)(param_1 + 8);
  bVar1 = *pbVar10;
  sVar5 = *(short *)(param_1 + 0xe);
  bVar2 = *(byte *)(param_1 + 9);
  bVar3 = *(byte *)(param_1 + 0xc);
  bVar6 = (*(byte *)(param_1 + 0x15) & *(byte *)(param_1 + 0x14)) != 0xff;
  uVar4 = *(undefined1 *)(param_1 + 0xd);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d76d8(&local_80,param_4,param_5);
  uVar7 = FUN_007d785c(&local_80,sVar5 != -1,1);
  if ((((((uVar7 & 1) != 0) && (uVar7 = FUN_007d785c(&local_80,bVar1,1), (uVar7 & 1) != 0)) &&
       (uVar7 = FUN_007d785c(&local_80,bVar6,1), (uVar7 & 1) != 0)) &&
      ((uVar7 = FUN_007d785c(&local_80,bVar2,1), (uVar7 & 1) != 0 &&
       (uVar7 = FUN_007d785c(&local_80,param_2 & 1,1), (uVar7 & 1) != 0)))) &&
     (uVar7 = FUN_007d785c(&local_80,param_3 & 1,1), (uVar7 & 1) != 0)) {
    param_2 = param_2 & bVar3;
    uVar7 = FUN_007d785c(&local_80,param_2 & 1,1);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_007d785c(&local_80,uVar4,1), (uVar7 & 1) != 0)) {
      if ((sVar5 == -1) || (uVar7 = FUN_008d02d8(pbVar10,&local_80), (uVar7 & 1) != 0)) {
        if ((bVar6) && (uVar7 = FUN_008d0368(pbVar10,&local_80), (uVar7 & 1) == 0)) {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          pcVar9 = "Failed writing VP9 layer info.";
          uVar8 = 0xd7b;
        }
        else if (((bVar2 & bVar1) == 0) ||
                (uVar7 = FUN_008d0428(pbVar10,&local_80), (uVar7 & 1) != 0)) {
          if (((param_2 & 1) == 0) || (uVar7 = FUN_008d052c(pbVar10,&local_80), (uVar7 & 1) != 0)) {
            local_90 = 0;
            uStack_88 = 0;
            FUN_007d7704(&local_80,&uStack_88,&local_90);
            return 1;
          }
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          pcVar9 = "Failed writing VP9 SS data.";
          uVar8 = 0xdbb;
        }
        else {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          pcVar9 = "Failed writing VP9 ref indices.";
          uVar8 = 0xd9b;
        }
      }
      else {
        uVar7 = FUN_004249b0();
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        pcVar9 = "Failed writing VP9 picture id.";
        uVar8 = 0xd5b;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_format_vp9.cc",uVar8,pcVar9);
    }
  }
  return 0;
}


// ===== 008d02d8  FUN_008d02d8 =====

undefined8 FUN_008d02d8(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  bVar1 = *(short *)(param_1 + 6) != -1;
  bVar2 = *(short *)(param_1 + 8) != 0x7f;
  uVar3 = FUN_007d785c(param_2,bVar1 && bVar2,1);
  if ((uVar3 & 1) != 0) {
    uVar4 = 0xf;
    if (!bVar1 || !bVar2) {
      uVar4 = 7;
    }
    uVar4 = FUN_007d785c(param_2,(long)*(short *)(param_1 + 6),uVar4);
    return uVar4;
  }
  return 0;
}


// ===== 008d0368  FUN_008d0368 =====

undefined8 FUN_008d0368(long param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  cVar1 = '\0';
  if (*(char *)(param_1 + 0xc) != -1) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  uVar3 = FUN_007d785c(param_2,cVar1,3);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0xe),1), (uVar3 & 1) != 0)) {
    cVar1 = '\0';
    if (*(char *)(param_1 + 0xd) != -1) {
      cVar1 = *(char *)(param_1 + 0xd);
    }
    uVar3 = FUN_007d785c(param_2,cVar1,3);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0xf),1), (uVar3 & 1) != 0)) {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        return 1;
      }
      sVar2 = 0;
      if (*(short *)(param_1 + 10) != -1) {
        sVar2 = *(short *)(param_1 + 10);
      }
      uVar4 = FUN_007d77b4(param_2,sVar2);
      return uVar4;
    }
  }
  return 0;
}


// ===== 008d0428  FUN_008d0428 =====

undefined8 FUN_008d0428(long param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  
  if ((((*(short *)(param_1 + 6) == -1) ||
       (bVar1 = *(byte *)(param_1 + 0x11), bVar1 - 4 < 0xfffffffd)) ||
      (uVar3 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0x12),7), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN_007d785c(param_2,bVar1 != 1,1), (uVar3 & 1) == 0)) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x11);
  if (1 < bVar1) {
    uVar3 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0x13),7);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar3 = FUN_007d785c(param_2,bVar1 != 2,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (2 < bVar1) {
      uVar3 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0x14),7);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar3 = FUN_007d785c(param_2,bVar1 != 3,1);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (3 < *(byte *)(param_1 + 0x11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x8d052c);
        (*pcVar2)();
      }
    }
  }
  return 1;
}


// ===== 008d052c  FUN_008d052c =====

undefined8 FUN_008d052c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0xf9,
                 "vp9.num_spatial_layers > 0U",&DAT_00214eb8,0,0);
  }
  if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0xfa,
                 "vp9.num_spatial_layers <= kMaxVp9NumberOfSpatialLayers",&DAT_001fb920,uVar4,8);
  }
  uVar5 = *(ulong *)(param_1 + 0x58);
  if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp9.cc",0xfb,
                 "vp9.gof.num_frames_in_gof <= kMaxVp9FramesInGof",&DAT_001fb920,uVar5,0xff);
  }
  uVar4 = FUN_007d785c(param_2,uVar4 - 1,3);
  if (((((uVar4 & 1) == 0) ||
       (uVar4 = FUN_007d785c(param_2,*(undefined1 *)(param_1 + 0x30),1), (uVar4 & 1) == 0)) ||
      (uVar4 = FUN_007d785c(param_2,uVar5 != 0,1), (uVar4 & 1) == 0)) ||
     (uVar4 = FUN_007d785c(param_2,0,3), (uVar4 & 1) == 0)) {
LAB_008d0838:
    uVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
      uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x32));
      if (((uVar4 & 1) == 0) ||
         (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x42)), (uVar4 & 1) == 0))
      goto LAB_008d0838;
      if (1 < *(ulong *)(param_1 + 0x20)) {
        uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x34));
        if (((uVar4 & 1) == 0) ||
           (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x44)), (uVar4 & 1) == 0))
        goto LAB_008d0838;
        if (2 < *(ulong *)(param_1 + 0x20)) {
          uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x36));
          if (((uVar4 & 1) == 0) ||
             (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x46)), (uVar4 & 1) == 0))
          goto LAB_008d0838;
          if (3 < *(ulong *)(param_1 + 0x20)) {
            uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x38));
            if (((uVar4 & 1) == 0) ||
               (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x48)), (uVar4 & 1) == 0))
            goto LAB_008d0838;
            if (4 < *(ulong *)(param_1 + 0x20)) {
              uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x3a));
              if (((uVar4 & 1) == 0) ||
                 (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x4a)), (uVar4 & 1) == 0))
              goto LAB_008d0838;
              if (5 < *(ulong *)(param_1 + 0x20)) {
                uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x3c));
                if (((uVar4 & 1) == 0) ||
                   (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x4c)), (uVar4 & 1) == 0)
                   ) goto LAB_008d0838;
                if (6 < *(ulong *)(param_1 + 0x20)) {
                  uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x3e));
                  if (((uVar4 & 1) == 0) ||
                     (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x4e)),
                     (uVar4 & 1) == 0)) goto LAB_008d0838;
                  if (7 < *(ulong *)(param_1 + 0x20)) {
                    uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x40));
                    if (((uVar4 & 1) == 0) ||
                       (uVar4 = FUN_007d7930(param_2,*(undefined2 *)(param_1 + 0x50)),
                       (uVar4 & 1) == 0)) goto LAB_008d0838;
                    if (8 < *(ulong *)(param_1 + 0x20)) {
LAB_008d0834:
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x8d0838);
                      (*pcVar1)();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (uVar5 != 0) {
      uVar4 = FUN_007d77b4(param_2);
      if ((uVar4 & 1) == 0) goto LAB_008d0838;
      lVar3 = *(long *)(param_1 + 0x58);
    }
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      puVar6 = (undefined1 *)(param_1 + 0x35f);
      lVar3 = 0x25e;
      puVar7 = (undefined1 *)(param_1 + 0x15f);
      do {
        if (lVar3 == 0x35d) goto LAB_008d0834;
        uVar4 = FUN_007d785c(param_2,puVar7[-0xff],3);
        if ((uVar4 & 1) == 0) goto LAB_008d0838;
        uVar4 = FUN_007d785c(param_2,*puVar7,1);
        if ((((uVar4 & 1) == 0) || (uVar4 = FUN_007d785c(param_2,puVar7[0xff],2), (uVar4 & 1) == 0))
           || (uVar4 = FUN_007d785c(param_2,0,2), (uVar4 & 1) == 0)) goto LAB_008d0838;
        if (puVar7[0xff] != '\0') {
          uVar4 = FUN_007d77b4(param_2,puVar6[-2]);
          if ((uVar4 & 1) == 0) goto LAB_008d0838;
          if (1 < (byte)puVar7[0xff]) {
            uVar4 = FUN_007d77b4(param_2,puVar6[-1]);
            if ((uVar4 & 1) == 0) goto LAB_008d0838;
            if (2 < (byte)puVar7[0xff]) {
              uVar4 = FUN_007d77b4(param_2,*puVar6);
              if ((uVar4 & 1) == 0) goto LAB_008d0838;
              if (3 < (byte)puVar7[0xff]) goto LAB_008d0834;
            }
          }
        }
        uVar4 = lVar3 - 0x25d;
        lVar3 = lVar3 + 1;
        puVar6 = puVar6 + 3;
        uVar2 = 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 < *(ulong *)(param_1 + 0x58));
    }
  }
  return uVar2;
}


// ===== 008d08cc  FUN_008d08cc =====

void FUN_008d08cc(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *local_68;
  void *local_60;
  
  *param_1 = &PTR_FUN_00d3cbb8;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[0xf] = 0;
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
  if (1 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x2a,
                 "packetization_mode == H264PacketizationMode::NonInterleaved || packetization_mode == H264PacketizationMode::SingleNalUnit"
                 ,&DAT_001f5fa0);
  }
  FUN_0087b4ac(&local_68,param_2,param_3);
  pvVar4 = local_60;
  for (pvVar2 = local_68; pvVar2 != pvVar4; pvVar2 = (void *)((long)pvVar2 + 0x18)) {
    uVar9 = *(ulong *)((long)pvVar2 + 8);
    uVar10 = param_3 - uVar9;
    if ((param_3 < uVar9) ||
       ((uVar13 = *(ulong *)((long)pvVar2 + 0x10), uVar13 != 0xffffffffffffffff &&
        (bVar1 = uVar10 < uVar13, uVar10 = uVar13, bVar1)))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x8d0bac);
      (*pcVar5)();
    }
    lVar6 = param_1[5];
    lVar11 = param_1[6];
    lVar8 = 0;
    if (lVar11 != lVar6) {
      lVar8 = (lVar11 - lVar6) * 0x20 + -1;
    }
    lVar3 = 0;
    if (uVar10 != 0) {
      lVar3 = uVar9 + param_2;
    }
    if (lVar8 == param_1[9] + param_1[8]) {
      FUN_008cdba0(param_1 + 4);
      lVar6 = param_1[5];
      lVar11 = param_1[6];
    }
    if ((lVar6 == lVar11) ||
       (plVar7 = (long *)(*(long *)(lVar6 + ((ulong)(param_1[9] + param_1[8]) >> 8) * 8) +
                         (param_1[9] + param_1[8] & 0xff) * 0x10), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *plVar7 = lVar3;
    plVar7[1] = uVar10;
    param_1[9] = param_1[9] + 1;
  }
  if (local_68 != (void *)0x0) {
    uVar10 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
    uVar9 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
    if (uVar9 <= uVar10) {
      uVar10 = uVar9;
    }
    if ((1 < uVar10) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
      uVar10 = uVar10 & 0x1ffffffffffffffe;
      local_60 = (void *)((long)local_60 + uVar10 * -0x18);
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    do {
      if (local_60 == local_68) {
        operator_delete(local_68);
        goto LAB_008d0a98;
      }
      local_60 = (void *)((long)local_60 + -0x18);
    } while (local_60 != (void *)0x0);
LAB_008d0a70:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_008d0a98:
  lVar8 = param_1[5];
  if (lVar8 != param_1[6]) {
    uVar10 = param_1[8];
    plVar7 = (long *)(lVar8 + (uVar10 >> 8) * 8);
    lVar11 = *plVar7;
    lVar6 = lVar11 + (uVar10 & 0xff) * 0x10;
    while (lVar6 != *(long *)(lVar8 + (param_1[9] + uVar10 >> 8) * 8) +
                    (param_1[9] + uVar10 & 0xff) * 0x10) {
      if (*(long *)(lVar6 + 8) == 0) goto LAB_008d0b04;
      lVar6 = lVar6 + 0x10;
      if (lVar6 - lVar11 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar11 = *plVar7;
        lVar6 = lVar11;
      }
    }
  }
  uVar10 = FUN_008d0be0(param_1,param_6);
  if ((uVar10 & 1) == 0) {
LAB_008d0b04:
    lVar8 = param_1[0xf];
    param_1[3] = 0;
    if (lVar8 != 0) {
      puVar12 = (undefined8 *)param_1[0xb];
      uVar10 = param_1[0xe];
      do {
        if (puVar12[uVar10 / 0xaa] + (uVar10 % 0xaa) * 0x18 == 0) goto LAB_008d0a70;
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + -1;
        param_1[0xe] = uVar10;
        param_1[0xf] = lVar8;
        if (0x153 < uVar10) {
          operator_delete((void *)*puVar12);
          puVar12 = (undefined8 *)(param_1[0xb] + 8);
          lVar8 = param_1[0xf];
          param_1[0xb] = puVar12;
          uVar10 = param_1[0xe] - 0xaa;
          param_1[0xe] = uVar10;
        }
      } while (lVar8 != 0);
    }
  }
  return;
}


// ===== 008d0be0  FUN_008d0be0 =====

undefined8 FUN_008d0be0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x48);
  if (uVar3 == 0) {
    return 1;
  }
  uVar4 = 0;
  do {
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (uVar3 == 1) {
        iVar2 = *(int *)(param_1 + 0x14);
LAB_008d0c78:
        iVar1 = iVar1 - iVar2;
      }
      else {
        if (uVar4 == 0) {
          iVar2 = *(int *)(param_1 + 0xc);
          goto LAB_008d0c78;
        }
        if (uVar4 + 1 == uVar3) {
          iVar2 = *(int *)(param_1 + 0x10);
          goto LAB_008d0c78;
        }
      }
      uVar3 = *(long *)(param_1 + 0x40) + uVar4;
      if (iVar1 < *(int *)(*(long *)(*(long *)(param_1 + 0x28) + (uVar3 >> 8) * 8) +
                           (uVar3 & 0xff) * 0x10 + 8)) {
        uVar3 = FUN_008d0f78(param_1,uVar4);
        goto joined_r0x008d0cac;
      }
      uVar4 = FUN_008d12c8(param_1,uVar4);
    }
    else if (param_2 == 1) {
      uVar3 = FUN_008d0d74(param_1,uVar4);
joined_r0x008d0cac:
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    }
    uVar3 = *(ulong *)(param_1 + 0x48);
    if (uVar3 <= uVar4) {
      return 1;
    }
  } while( true );
}


// ===== 008d0ce0  FUN_008d0ce0 =====

void FUN_008d0ce0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cbb8;
  FUN_008d1c58(param_1 + 10);
  FUN_008cca54(param_1 + 4);
  return;
}


// ===== 008d0d1c  FUN_008d0d1c =====

void FUN_008d0d1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cbb8;
  FUN_008d1c58(param_1 + 10);
  FUN_008cca54(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 008d0d68  FUN_008d0d68 =====

undefined8 FUN_008d0d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 008d0d74  FUN_008d0d74 =====

bool FUN_008d0d74(long param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  char *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  char *local_50;
  char **ppcStack_48;
  undefined1 uStack_21;
  
  uVar3 = *(ulong *)(param_1 + 0x48);
  uVar8 = (ulong)*(int *)(param_1 + 8);
  if (uVar3 == 1) {
    lVar6 = (long)*(int *)(param_1 + 0x14);
  }
  else if (param_2 == 0) {
    lVar6 = (long)*(int *)(param_1 + 0xc);
  }
  else {
    if (param_2 + 1 != uVar3) goto LAB_008d0dcc;
    lVar6 = (long)*(int *)(param_1 + 0x10);
  }
  uVar8 = uVar8 - lVar6;
LAB_008d0dcc:
  if (uVar3 <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  param_2 = *(long *)(param_1 + 0x40) + param_2;
  puVar5 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x28) + (param_2 >> 8) * 8) + (param_2 & 0xff) * 0x10);
  uVar3 = puVar5[1];
  if (uVar8 < uVar3) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      local_58 = &uStack_21;
      local_68 = "../../modules/rtp_rtcp/source/rtp_format_h264.cc";
      uStack_60 = 0x693;
      ppcStack_48 = &local_68;
      local_50 = 
      "Failed to fit a fragment to packet in SingleNalu packetization mode. Payload size left ";
      FUN_00623bb0(&DAT_00224cdd,"../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x693,
                   "Failed to fit a fragment to packet in SingleNalu packetization mode. Payload size left "
                   ,uVar8,", fragment length ",uVar3,", packet capacity ",
                   *(undefined4 *)(param_1 + 8));
    }
  }
  else {
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0xd9,"!fragment.empty()",
                   &DAT_001f5fa0);
    }
    lVar4 = *(long *)(param_1 + 0x58);
    lVar7 = *(long *)(param_1 + 0x60);
    puVar9 = (undefined1 *)*puVar5;
    uVar1 = *puVar9;
    lVar6 = 0;
    if (lVar7 != lVar4) {
      lVar6 = (lVar7 - lVar4 >> 3) * 0xaa + -1;
    }
    if (lVar6 == *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70)) {
      FUN_008d1e2c(param_1 + 0x50);
      lVar4 = *(long *)(param_1 + 0x58);
      lVar7 = *(long *)(param_1 + 0x60);
    }
    if ((lVar4 == lVar7) ||
       (uVar2 = *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70),
       puVar5 = (undefined8 *)(*(long *)(lVar4 + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18),
       puVar5 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar5 = puVar9;
    puVar5[1] = uVar3;
    *(undefined2 *)(puVar5 + 2) = 0x101;
    *(undefined1 *)((long)puVar5 + 0x12) = 0;
    *(undefined1 *)((long)puVar5 + 0x13) = uVar1;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  return uVar3 <= uVar8;
}


// ===== 008d0f78  FUN_008d0f78 =====

bool FUN_008d0f78(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = *(ulong *)(param_1 + 0x48);
  if (uVar9 <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  uStack_68 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(long *)(param_1 + 0x40) + param_2;
  plVar11 = (long *)(*(long *)(*(long *)(param_1 + 0x28) + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10
                    );
  puVar12 = (undefined1 *)*plVar11;
  uVar1 = plVar11[1];
  local_70._0_4_ = (int)*(undefined8 *)(param_1 + 8);
  uVar4 = (int)local_70 - 2;
  local_70 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),uVar4);
  if (uVar9 == 1) {
LAB_008d1004:
    if (param_2 == uVar9 - 1) goto LAB_008d1010;
  }
  else {
    if (param_2 == uVar9 - 1) {
      uVar13 = *(undefined4 *)(param_1 + 0x10);
LAB_008d0ffc:
      uStack_68 = CONCAT44(uVar13,(undefined4)uStack_68);
      local_70 = (ulong)uVar4;
      goto LAB_008d1004;
    }
    if (param_2 != 0) {
      uVar13 = 0;
      goto LAB_008d0ffc;
    }
    uStack_68 = CONCAT44(*(undefined4 *)(param_1 + 0xc),(undefined4)uStack_68);
    if (uVar9 == 1) goto LAB_008d1010;
  }
  uStack_68 = uStack_68 & 0xffffffff00000000;
LAB_008d1010:
  lVar16 = uVar1 - 1;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008cc40c(&local_90,uVar1 - 1,&local_70);
  puVar6 = puStack_88;
  puVar5 = local_90;
  if (local_90 != puStack_88) {
    uVar14 = (long)puStack_88 - (long)local_90 >> 2;
    uVar9 = 0;
    iVar19 = 1;
    do {
      uVar4 = *(uint *)(local_90 + uVar9 * 4);
      uVar17 = (ulong)uVar4;
      if ((int)uVar4 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x88,"packet_length > 0",
                     &DAT_001fbedc,uVar4,0);
      }
      uVar18 = (ulong)iVar19;
      if ((uVar1 < uVar18) || (uVar1 - uVar18 < uVar17)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x8d1214);
        (*pcVar7)();
      }
      lVar10 = *(long *)(param_1 + 0x58);
      lVar15 = *(long *)(param_1 + 0x60);
      uVar3 = *puVar12;
      lVar2 = 0;
      if (lVar15 - lVar10 != 0) {
        lVar2 = (lVar15 - lVar10 >> 3) * 0xaa + -1;
      }
      bVar8 = uVar9 == uVar14 - 1;
      if (lVar2 == *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70)) {
        FUN_008d1e2c(param_1 + 0x50);
        lVar10 = *(long *)(param_1 + 0x58);
        lVar15 = *(long *)(param_1 + 0x60);
      }
      if ((lVar10 == lVar15) ||
         (uVar14 = *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70),
         plVar11 = (long *)(*(long *)(lVar10 + (uVar14 / 0xaa) * 8) + (uVar14 % 0xaa) * 0x18),
         plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(bool *)(plVar11 + 2) = uVar9 == 0;
      uVar9 = uVar9 + 1;
      *plVar11 = (long)(puVar12 + uVar18);
      plVar11[1] = uVar17;
      iVar19 = uVar4 + iVar19;
      lVar16 = lVar16 - uVar17;
      *(bool *)((long)plVar11 + 0x11) = bVar8;
      *(undefined1 *)((long)plVar11 + 0x12) = 0;
      *(undefined1 *)((long)plVar11 + 0x13) = uVar3;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
      uVar14 = (long)puStack_88 - (long)local_90 >> 2;
    } while (uVar9 < uVar14);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar14;
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x91,"0 == payload_left",
                   &DAT_00224cd9,0,lVar16);
    }
  }
  if (local_90 != (undefined1 *)0x0) {
    uVar9 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3e) -
                   ((long)local_90 - (long)puStack_88)) >> 2;
    if ((ulong)(puStack_88 + (-4 - ((long)puStack_88 << 0x3e))) >> 2 <= uVar9) {
      uVar9 = (ulong)(puStack_88 + (-4 - ((long)puStack_88 << 0x3e))) >> 2;
    }
    puVar12 = puStack_88;
    if ((1 < uVar9) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      puVar12 = puStack_88 + uVar9 * -4;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    while (puVar12 != local_90) {
      puVar12 = puVar12 + -4;
      if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_88 = local_90;
    operator_delete(local_90);
  }
  return puVar5 != puVar6;
}


// ===== 008d12c8  FUN_008d12c8 =====

ulong FUN_008d12c8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  
  uVar3 = *(ulong *)(param_1 + 0x48);
  if (uVar3 <= param_2) {
LAB_008d1514:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  uVar12 = (ulong)*(int *)(param_1 + 8);
  uVar13 = *(long *)(param_1 + 0x40) + param_2;
  puVar6 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x28) + (uVar13 >> 8) * 8) + (uVar13 & 0xff) * 0x10);
  uVar13 = puVar6[1];
  if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x9b,
                 "payload_size_left >= fragment.size()",&DAT_001fb920,uVar12,uVar13);
  }
  puVar14 = (undefined1 *)*puVar6;
  lVar7 = 0;
  iVar11 = 0;
  uVar10 = param_2 + 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  do {
    uVar9 = uVar10 - 1;
    uVar1 = uVar13 + lVar7;
    if ((param_2 == 0) && (uVar9 == uVar3 - 1)) {
      lVar7 = (long)*(int *)(param_1 + 0x14);
LAB_008d139c:
      uVar4 = uVar1 + lVar7;
    }
    else {
      if (param_2 == 0) {
        lVar7 = (long)*(int *)(param_1 + 0xc);
        goto LAB_008d139c;
      }
      uVar4 = uVar1;
      if (uVar9 == uVar3 - 1) {
        lVar7 = (long)*(int *)(param_1 + 0x10);
        goto LAB_008d139c;
      }
    }
    if (uVar12 < uVar4) {
LAB_008d14a0:
      if (iVar11 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0xc2,
                     "aggregated_fragments > 0",&DAT_001fbedc,iVar11,0);
      }
      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                  );
      }
      uVar3 = (*(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70)) - 1;
      *(undefined1 *)
       (*(long *)(*(long *)(param_1 + 0x58) + (uVar3 / 0xaa) * 8) + (uVar3 % 0xaa) * 0x18 + 0x11) =
           1;
      return uVar9;
    }
    if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0xad,"fragment.size() > 0",
                   &DAT_001fbca2,0,0);
    }
    lVar5 = *(long *)(param_1 + 0x58);
    lVar8 = *(long *)(param_1 + 0x60);
    uVar2 = *puVar14;
    lVar7 = 0;
    if (lVar8 - lVar5 != 0) {
      lVar7 = (lVar8 - lVar5 >> 3) * 0xaa + -1;
    }
    if (lVar7 == *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70)) {
      FUN_008d1e2c(param_1 + 0x50);
      lVar5 = *(long *)(param_1 + 0x58);
      lVar8 = *(long *)(param_1 + 0x60);
    }
    if ((lVar5 == lVar8) ||
       (uVar3 = *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x70),
       puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar3 / 0xaa) * 8) + (uVar3 % 0xaa) * 0x18),
       puVar6 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar6 = puVar14;
    puVar6[1] = uVar13;
    uVar12 = uVar12 - uVar1;
    *(bool *)(puVar6 + 2) = iVar11 == 0;
    *(undefined2 *)((long)puVar6 + 0x11) = 0x100;
    *(undefined1 *)((long)puVar6 + 0x13) = uVar2;
    uVar3 = *(ulong *)(param_1 + 0x48);
    lVar7 = 5;
    if (iVar11 != 0) {
      lVar7 = 2;
    }
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    if (uVar10 == uVar3) {
      iVar11 = iVar11 + 1;
      uVar9 = uVar10;
      goto LAB_008d14a0;
    }
    if (uVar3 <= uVar10) goto LAB_008d1514;
    iVar11 = iVar11 + 1;
    uVar13 = uVar10 + *(long *)(param_1 + 0x40);
    uVar10 = uVar10 + 1;
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x28) + (uVar13 >> 8) * 8) + (uVar13 & 0xff) * 0x10);
    puVar14 = (undefined1 *)*puVar6;
    uVar13 = puVar6[1];
  } while( true );
}


// ===== 008d15c8  FUN_008d15c8 =====

bool FUN_008d15c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x58) + (*(ulong *)(param_1 + 0x70) / 0xaa) * 8) +
             (*(ulong *)(param_1 + 0x70) % 0xaa) * 0x18);
    if (((*(byte *)(puVar1 + 2) & 1) == 0) || ((*(byte *)((long)puVar1 + 0x11) & 1) == 0)) {
      if ((*(byte *)((long)puVar1 + 0x12) & 1) == 0) {
        FUN_008d1a90(param_1,param_2);
      }
      else {
        FUN_008d1790(param_1,param_2);
      }
    }
    else {
      FUN_007db7a0(param_2,*puVar1,puVar1[1]);
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_008d1768:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar2 = *(ulong *)(param_1 + 0x70);
      if ((*(undefined8 **)(param_1 + 0x58))[uVar2 / 0xaa] + (uVar2 % 0xaa) * 0x18 == 0) {
LAB_008d177c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(ulong *)(param_1 + 0x70) = uVar2 + 1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
      if (0x153 < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x58));
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -0xaa;
      }
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_008d1768;
      uVar2 = *(ulong *)(param_1 + 0x40);
      if ((*(undefined8 **)(param_1 + 0x28))[uVar2 >> 8] + (uVar2 & 0xff) * 0x10 == 0)
      goto LAB_008d177c;
      *(ulong *)(param_1 + 0x40) = uVar2 + 1;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      if (0x1ff < uVar2 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x28));
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x100;
      }
    }
    FUN_007da930(param_2,*(long *)(param_1 + 0x78) == 0);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  }
  return lVar3 != 0;
}


// ===== 008d1790  FUN_008d1790 =====

void FUN_008d1790(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  void *__src;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 8) - *(long *)(param_2 + 0x60);
  }
  uVar1 = lVar3 - (*(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) +
                  (ulong)*(byte *)(param_2 + 2));
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0xf9,
                 "payload_capacity >= kNalHeaderSize",&DAT_001fb920,0,1);
  }
  pbVar2 = (byte *)FUN_007db6a0(param_2,uVar1);
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_008d19ec:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
              );
  }
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x58) + (*(ulong *)(param_1 + 0x70) / 0xaa) * 8) +
           (*(ulong *)(param_1 + 0x70) % 0xaa) * 0x18);
  if ((*(byte *)(puVar4 + 2) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0xfd,"packet->first_fragment",
                 &DAT_001f5fa0);
  }
  *pbVar2 = *(byte *)((long)puVar4 + 0x13) & 0xe0 | 0x18;
  bVar7 = *(byte *)((long)puVar4 + 0x11);
  if (*(char *)((long)puVar4 + 0x12) == '\x01') {
    uVar5 = 1;
    do {
      __n = puVar4[1];
      uVar6 = __n + uVar5 + 2;
      if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x105,
                     "index + kLengthFieldSize + fragment.size() <= payload_capacity",&DAT_001fb920,
                     uVar6,uVar1);
      }
      __src = (void *)*puVar4;
      *(ushort *)(pbVar2 + uVar5) =
           (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
      memcpy(pbVar2 + uVar5 + 2,__src,__n);
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_008d19c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar5 = *(ulong *)(param_1 + 0x70);
      if ((*(undefined8 **)(param_1 + 0x58))[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18 == 0) {
LAB_008d19d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(ulong *)(param_1 + 0x70) = uVar5 + 1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
      if (0x153 < uVar5 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x58));
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -0xaa;
      }
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_008d19c4;
      uVar5 = *(ulong *)(param_1 + 0x40);
      if ((*(undefined8 **)(param_1 + 0x28))[uVar5 >> 8] + (uVar5 & 0xff) * 0x10 == 0)
      goto LAB_008d19d8;
      *(ulong *)(param_1 + 0x40) = uVar5 + 1;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      if (0x1ff < uVar5 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x28));
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x100;
      }
      if ((bVar7 & 1) != 0) goto LAB_008d199c;
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_008d19ec;
      puVar4 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x58) + (*(ulong *)(param_1 + 0x70) / 0xaa) * 8) +
               (*(ulong *)(param_1 + 0x70) % 0xaa) * 0x18);
      bVar7 = *(byte *)((long)puVar4 + 0x11);
      uVar5 = uVar6;
    } while ((*(byte *)((long)puVar4 + 0x12) & 1) != 0);
  }
  else {
    uVar6 = 1;
  }
  if ((bVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_h264.cc",0x113,"is_last_fragment",
                 &DAT_001f5fa0);
  }
LAB_008d199c:
  FUN_007db738(param_2,uVar6);
  return;
}


// ===== 008d1a90  FUN_008d1a90 =====

void FUN_008d1a90(long param_1,undefined8 param_2)

{
  void *__src;
  size_t __n;
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
              );
  }
  puVar6 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x58) + (*(ulong *)(param_1 + 0x70) / 0xaa) * 8) +
           (*(ulong *)(param_1 + 0x70) % 0xaa) * 0x18);
  bVar1 = *(byte *)((long)puVar6 + 0x13);
  cVar2 = *(char *)(puVar6 + 2);
  cVar3 = *(char *)((long)puVar6 + 0x11);
  __src = (void *)*puVar6;
  __n = puVar6[1];
  pbVar4 = (byte *)FUN_007db6a0(param_2,__n + 2);
  *pbVar4 = bVar1 & 0xe0 | 0x1c;
  pbVar4[1] = bVar1 & 0x1f | cVar2 << 7 | cVar3 << 6;
  memcpy(pbVar4 + 2,__src,__n);
  if (*(char *)((long)puVar6 + 0x11) == '\x01') {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_008d1c1c;
    uVar5 = *(ulong *)(param_1 + 0x40);
    if ((*(undefined8 **)(param_1 + 0x28))[uVar5 >> 8] + (uVar5 & 0xff) * 0x10 == 0)
    goto LAB_008d1c30;
    *(ulong *)(param_1 + 0x40) = uVar5 + 1;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    if (0x1ff < uVar5 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 0x28));
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x100;
    }
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x70);
    if ((*(undefined8 **)(param_1 + 0x58))[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18 != 0) {
      *(ulong *)(param_1 + 0x70) = uVar5 + 1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
      if (0x153 < uVar5 + 1) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x58));
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -0xaa;
      }
      return;
    }
LAB_008d1c30:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_008d1c1c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
            );
}


// ===== 008d1c58  FUN_008d1c58 =====

void FUN_008d1c58(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_008d1ddc;
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
    if (uVar5 != 2) goto LAB_008d1d54;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_008d1d54:
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
LAB_008d1ddc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008d1e2c  FUN_008d1e2c =====

void FUN_008d1e2c(long *param_1)

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
      FUN_008d229c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008d27c0(&local_50,lVar5);
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
      FUN_008d229c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_008d2524(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008d2014(param_1,&local_50);
  return;
}


// ===== 008d2014  FUN_008d2014 =====

void FUN_008d2014(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008d2284;
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
LAB_008d2284:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d229c  FUN_008d229c =====

void FUN_008d229c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008d250c;
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
LAB_008d250c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d2524  FUN_008d2524 =====

void FUN_008d2524(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008d27a8;
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
LAB_008d27a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d27c0  FUN_008d27c0 =====

void FUN_008d27c0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008d2a44;
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
LAB_008d2a44:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d2a5c  FUN_008d2a5c =====

void FUN_008d2a5c(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_00d3cbe8;
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_008d2ba4(param_1 + 1,param_6);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[9] = 0;
  param_1[8] = 0;
  local_50 = CONCAT44(local_50._4_4_,(int)param_4 - (int)((ulong)param_1[1] >> 1));
  if (param_3 == 0) {
    local_70 = 0;
  }
  else {
    FUN_008cc40c(&local_70,param_3 & 0xffffffff,&local_50);
    pvVar1 = (void *)param_1[6];
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)param_1[7];
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
      param_1[7] = pvVar1;
      operator_delete(pvVar1);
    }
    param_1[8] = local_60;
    param_1[7] = uStack_68;
    param_1[6] = local_70;
  }
  param_1[9] = local_70;
  return;
}


// ===== 008d2ba4  FUN_008d2ba4 =====

void FUN_008d2ba4(ulong *param_1,char *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  byte local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  sVar9 = *(short *)(param_2 + 2);
  sVar10 = *(short *)(param_2 + 4);
  cVar7 = param_2[6];
  iVar6 = *(int *)(param_2 + 8);
  bVar3 = 0;
  if (sVar9 != -1) {
    bVar3 = 0x80;
  }
  if (sVar10 != -1) {
    bVar3 = bVar3 | 0x40;
  }
  puVar13 = param_1 + 1;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  *puVar13 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  bVar4 = bVar3 | 0x20;
  if (cVar7 == -1) {
    bVar4 = bVar3;
  }
  bVar3 = bVar4 | 0x10;
  if (iVar6 == -1) {
    bVar3 = bVar4;
  }
  cVar8 = *param_2;
  bVar4 = 0;
  if (bVar3 != 0) {
    bVar4 = 0x80;
  }
  *param_1 = 2;
  *(byte *)puVar13 = bVar4 | cVar8 << 5 | 0x10;
  if (bVar3 != 0) {
    *(byte *)((long)param_1 + 9) = bVar3;
    *param_1 = 4;
    if (sVar9 != -1) {
      uVar11 = *param_1;
      local_44[0] = (undefined1)sVar9;
      *(byte *)((long)param_1 + 10) = (byte)((ushort)sVar9 >> 8) | 0x80;
      uVar12 = uVar11 + 2 >> 1;
      *param_1 = uVar11 + 2;
      if (((uVar11 & 1) == 0) && (uVar12 == 0x10)) {
        FUN_008d3260(param_1,local_44);
      }
      else {
        puVar5 = puVar13;
        if ((uVar11 & 1) != 0) {
          puVar5 = (ulong *)*puVar13;
        }
        puVar1 = (undefined1 *)((long)puVar5 + uVar12);
        if (puVar1 == (undefined1 *)0x0) goto LAB_008d2dc0;
        *puVar1 = local_44[0];
        *param_1 = *param_1 + 2;
      }
    }
    if (sVar10 != -1) {
      uVar12 = *param_1;
      uVar11 = 0x10;
      if ((uVar12 & 1) != 0) {
        uVar11 = param_1[2];
      }
      local_48[0] = (undefined1)*(undefined2 *)(param_2 + 4);
      if (uVar12 >> 1 == uVar11) {
        FUN_008d3260(param_1,local_48);
      }
      else {
        puVar5 = puVar13;
        if ((uVar12 & 1) != 0) {
          puVar5 = (ulong *)*puVar13;
        }
        puVar1 = (undefined1 *)((long)puVar5 + (uVar12 >> 1));
        if (puVar1 == (undefined1 *)0x0) goto LAB_008d2dc0;
        *puVar1 = local_48[0];
        *param_1 = *param_1 + 2;
      }
    }
    if ((cVar7 != -1) || (iVar6 != -1)) {
      local_4c[0] = 0;
      if ((cVar7 != -1) && (local_4c[0] = param_2[6] << 6, param_2[7] == '\x01')) {
        local_4c[0] = local_4c[0] | 0x20;
      }
      if (iVar6 != -1) {
        local_4c[0] = param_2[8] & 0x1fU | local_4c[0];
      }
      uVar12 = *param_1;
      uVar11 = 0x10;
      if ((uVar12 & 1) != 0) {
        uVar11 = param_1[2];
      }
      if (uVar12 >> 1 == uVar11) {
        FUN_008d3100(param_1,local_4c);
      }
      else {
        if ((uVar12 & 1) != 0) {
          puVar13 = (ulong *)*puVar13;
        }
        pbVar2 = (byte *)((long)puVar13 + (uVar12 >> 1));
        if (pbVar2 == (byte *)0x0) {
LAB_008d2dc0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *pbVar2 = local_4c[0];
        *param_1 = *param_1 + 2;
      }
    }
  }
  return;
}


// ===== 008d2e0c  FUN_008d2e0c =====

void FUN_008d2e0c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00d3cbe8;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[7];
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
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 008d2ee8  FUN_008d2ee8 =====

void FUN_008d2ee8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00d3cbe8;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[7];
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
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 008d2fc0  FUN_008d2fc0 =====

long FUN_008d2fc0(long param_1)

{
  return *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x48) >> 2;
}


// ===== 008d2fd8  FUN_008d2fd8 =====

bool FUN_008d2fd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  void *__dest;
  void *__src;
  ulong __n;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  
  piVar4 = *(int **)(param_1 + 0x38);
  piVar5 = *(int **)(param_1 + 0x48);
  if (piVar5 == piVar4) {
LAB_008d30b8:
    return piVar5 != piVar4;
  }
  __n = (ulong)*piVar5;
  *(int **)(param_1 + 0x48) = piVar5 + 1;
  __dest = (void *)FUN_007db6a0(param_2,__n + (*(ulong *)(param_1 + 8) >> 1));
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_format_vp8.cc",0x57,"buffer",&DAT_001f5fa0);
  }
  pbVar6 = (byte *)(param_1 + 0x10);
  __src = (void *)(param_1 + 0x10);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    __src = *(void **)pbVar6;
  }
  memcpy(__dest,__src,*(ulong *)(param_1 + 8) >> 1);
  memcpy((void *)((long)__dest + (*(ulong *)(param_1 + 8) >> 1)),*(void **)(param_1 + 0x20),__n);
  lVar2 = *(ulong *)(param_1 + 0x28) - __n;
  if (__n <= *(ulong *)(param_1 + 0x28)) {
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_1 + 0x20) + __n;
    }
    *(long *)(param_1 + 0x20) = lVar1;
    *(long *)(param_1 + 0x28) = lVar2;
    if (1 < *(ulong *)(param_1 + 8)) {
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        pbVar6 = *(byte **)pbVar6;
      }
      *pbVar6 = *pbVar6 & 0xef;
      FUN_007da930(param_2,*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x38));
      goto LAB_008d30b8;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x8d30e0);
  (*pcVar3)();
}


// ===== 008d3100  FUN_008d3100 =====

undefined1 * FUN_008d3100(ulong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar12 = 0x20;
  }
  else {
    puVar14 = (ulong *)param_1[1];
    uVar12 = param_1[2] << 1;
  }
  uVar15 = uVar13 >> 1;
  pvVar3 = operator_new(uVar12);
  puVar1 = (undefined1 *)((long)pvVar3 + uVar15);
  if (puVar1 == (undefined1 *)0x0) {
LAB_008d324c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar15 != 0) {
    uVar7 = -(long)pvVar3;
    uVar10 = uVar15 - 1;
    uVar16 = uVar10;
    if (uVar7 < uVar10) {
      uVar16 = -(long)pvVar3;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < 0x21) {
      lVar4 = 0;
    }
    else {
      if (uVar10 <= uVar7) {
        uVar7 = uVar10;
      }
      lVar4 = 0;
      if ((puVar14 <= (ulong *)((long)puVar14 + uVar7)) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar14))) {
        puVar11 = puVar14 + 2;
        uVar7 = 0x20;
        if ((uVar16 & 0x1f) != 0) {
          uVar7 = uVar16 & 0x1f;
        }
        puVar8 = (ulong *)((long)pvVar3 + 0x10);
        lVar4 = uVar16 - uVar7;
        puVar14 = (ulong *)((long)puVar14 + lVar4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar11 + -1;
          uVar16 = puVar11[-2];
          uVar10 = puVar11[1];
          uVar7 = *puVar11;
          lVar5 = lVar5 + -0x20;
          puVar11 = puVar11 + 4;
          puVar8[-1] = *puVar2;
          puVar8[-2] = uVar16;
          puVar8[1] = uVar10;
          *puVar8 = uVar7;
          puVar8 = puVar8 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar15 - lVar4;
    lVar9 = -((long)pvVar3 + lVar4);
    puVar6 = (undefined1 *)((long)pvVar3 + lVar4);
    do {
      if (lVar9 == 0) goto LAB_008d324c;
      lVar5 = lVar5 + -1;
      lVar9 = lVar9 + -1;
      *puVar6 = (char)*puVar14;
      puVar6 = puVar6 + 1;
      puVar14 = (ulong *)((long)puVar14 + 1);
    } while (lVar5 != 0);
  }
  if ((uVar13 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar12;
  *param_1 = (uVar13 | 1) + 2;
  return puVar1;
}


// ===== 008d3260  FUN_008d3260 =====

undefined1 * FUN_008d3260(ulong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar12 = 0x20;
  }
  else {
    puVar14 = (ulong *)param_1[1];
    uVar12 = param_1[2] << 1;
  }
  uVar15 = uVar13 >> 1;
  pvVar3 = operator_new(uVar12);
  puVar1 = (undefined1 *)((long)pvVar3 + uVar15);
  if (puVar1 == (undefined1 *)0x0) {
LAB_008d33ac:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar15 != 0) {
    uVar7 = -(long)pvVar3;
    uVar10 = uVar15 - 1;
    uVar16 = uVar10;
    if (uVar7 < uVar10) {
      uVar16 = -(long)pvVar3;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < 0x21) {
      lVar4 = 0;
    }
    else {
      if (uVar10 <= uVar7) {
        uVar7 = uVar10;
      }
      lVar4 = 0;
      if ((puVar14 <= (ulong *)((long)puVar14 + uVar7)) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar14))) {
        puVar11 = puVar14 + 2;
        uVar7 = 0x20;
        if ((uVar16 & 0x1f) != 0) {
          uVar7 = uVar16 & 0x1f;
        }
        puVar8 = (ulong *)((long)pvVar3 + 0x10);
        lVar4 = uVar16 - uVar7;
        puVar14 = (ulong *)((long)puVar14 + lVar4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar11 + -1;
          uVar16 = puVar11[-2];
          uVar10 = puVar11[1];
          uVar7 = *puVar11;
          lVar5 = lVar5 + -0x20;
          puVar11 = puVar11 + 4;
          puVar8[-1] = *puVar2;
          puVar8[-2] = uVar16;
          puVar8[1] = uVar10;
          *puVar8 = uVar7;
          puVar8 = puVar8 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar15 - lVar4;
    lVar9 = -((long)pvVar3 + lVar4);
    puVar6 = (undefined1 *)((long)pvVar3 + lVar4);
    do {
      if (lVar9 == 0) goto LAB_008d33ac;
      lVar5 = lVar5 + -1;
      lVar9 = lVar9 + -1;
      *puVar6 = (char)*puVar14;
      puVar6 = puVar6 + 1;
      puVar14 = (ulong *)((long)puVar14 + 1);
    } while (lVar5 != 0);
  }
  if ((uVar13 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar12;
  *param_1 = (uVar13 | 1) + 2;
  return puVar1;
}


// ===== 008d33c0  FUN_008d33c0 =====

void FUN_008d33c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00d3cc18;
  *(undefined4 *)(param_1 + 1) = param_6;
  FUN_008d3440(param_1 + 2,param_2,param_3);
  lVar2 = param_1[3] - param_1[2];
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1[2];
  }
  FUN_008d3694(param_1 + 5,lVar1,lVar2 >> 5,param_4,param_5);
  *(undefined1 *)(param_1 + 8) = param_7;
  param_1[9] = 0;
  return;
}


// ===== 008d3440  FUN_008d3440 =====

void FUN_008d3440(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  ulong local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  ulong local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  
  local_40 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00879324(&local_70,param_2,param_3);
  puVar4 = (undefined8 *)0x0;
  if (puStack_58 != local_60) {
    do {
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = (undefined1 *)0x0;
      local_80 = 0;
      FUN_0087934c(&local_70,&local_90);
      local_78._0_4_ = 1;
      if (((byte)local_90 >> 2 & 1) != 0) {
        if (puStack_58 == local_60) goto LAB_008d35b4;
        FUN_0087934c(&local_70,(ulong)&local_90 | 1);
        local_78._0_4_ = (int)local_78 + 1;
      }
      if (((byte)local_90 >> 1 & 1) == 0) {
        puVar3 = local_70 + (long)local_60;
        local_80 = (long)puStack_58 - (long)local_60;
      }
      else {
        local_98 = 0;
        uVar2 = FUN_00879450(&local_70,&local_98);
        if (((uVar2 & 1) == 0) || ((ulong)((long)puStack_58 - (long)local_60) < local_98)) {
LAB_008d35b4:
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          if (local_50 == (undefined8 *)0x0) {
            return;
          }
          uVar5 = (ulong)((long)puStack_48 + (-0x20 - ((long)puStack_48 << 0x3b))) >> 5;
          uVar2 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3b) -
                         ((long)local_50 - (long)puStack_48)) >> 5;
          if (uVar5 <= uVar2) {
            uVar2 = uVar5;
          }
          puVar4 = puStack_48;
          if ((1 < uVar2) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 0x1fU) == 0))
          {
            uVar2 = uVar2 & 0x7fffffffffffffe;
            puVar4 = puStack_48 + uVar2 * -4;
            do {
              uVar2 = uVar2 - 2;
            } while (uVar2 != 0);
          }
          do {
            if (puVar4 == local_50) {
              puStack_48 = local_50;
              operator_delete(local_50);
              return;
            }
            puVar4 = puVar4 + -4;
          } while (puVar4 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar3 = local_70 + (long)local_60;
        local_80 = local_98;
      }
      puStack_88 = (undefined1 *)0x0;
      if (local_80 != 0) {
        puStack_88 = puVar3;
      }
      FUN_0087972c(&local_70);
      uVar1 = (byte)local_90 >> 3 & 0xf;
      local_78 = (undefined1 *)CONCAT44(local_78._4_4_,(int)local_78 + (int)local_80);
      if ((0xf < uVar1) || ((0x8104U >> (ulong)uVar1 & 1) == 0)) {
        if (puStack_48 < local_40) {
          if (puStack_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puStack_48[1] = puStack_88;
          *puStack_48 = local_90;
          puStack_48[3] = local_78;
          puStack_48[2] = local_80;
          puStack_48 = puStack_48 + 4;
        }
        else {
          puStack_48 = (undefined8 *)FUN_008d44c4(&local_50,&local_90);
        }
      }
    } while (puStack_58 != local_60);
    puStack_a8 = puStack_48;
    local_b0 = local_50;
    puVar4 = local_40;
  }
  param_1[2] = puVar4;
  param_1[1] = puStack_a8;
  *param_1 = local_b0;
  return;
}


// ===== 008d3694  FUN_008d3694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d3694(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int *piVar9;
  void *pvVar10;
  undefined1 *puVar11;
  void *pvVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  int iVar53;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  int iVar62;
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar67;
  int iVar68;
  int iVar72;
  int iVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [12];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008d3ae8(&local_60);
  lVar14 = (long)puStack_58 - (long)local_60 >> 2;
  uVar15 = lVar14 * -0x3333333333333333;
  lVar4 = uVar15 - 1;
  if (uVar15 == 0 || lVar4 == 0) {
LAB_008d36f8:
    *param_1 = (long)local_60;
    param_1[1] = (long)puStack_58;
    param_1[2] = (long)local_50;
  }
  else {
    if (local_60 != puStack_58) {
      uVar17 = ((long)puStack_58 - (long)local_60) * 0xccccccccccccccd - 4;
      uVar16 = (uint)(param_4 >> 0x20);
      iVar13 = (int)param_4;
      if (uVar17 < 0x20) {
        lVar18 = 0;
        uVar17 = 0;
        puVar11 = local_60;
      }
      else {
        lVar33 = 0;
        lVar34 = 0;
        lVar35 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar38 = 0;
        uVar17 = (uVar17 >> 2) + 1;
        lVar39 = 0;
        lVar40 = 0;
        uVar21 = (undefined1)lVar4;
        uVar22 = (undefined1)((ulong)lVar4 >> 8);
        uVar23 = (undefined1)((ulong)lVar4 >> 0x10);
        uVar24 = (undefined1)((ulong)lVar4 >> 0x18);
        uVar25 = (undefined1)((ulong)lVar4 >> 0x20);
        uVar26 = (undefined1)((ulong)lVar4 >> 0x28);
        uVar27 = (undefined1)((ulong)lVar4 >> 0x30);
        uVar28 = (undefined1)((ulong)lVar4 >> 0x38);
        uVar5 = uVar17 & 7;
        uVar3 = 8;
        if (uVar5 != 0) {
          uVar3 = uVar5;
        }
        lVar18 = uVar17 - uVar3;
        puVar11 = local_60 + lVar18 * 0x14;
        piVar19 = (int *)(local_60 + 0x60);
        lVar20 = lVar18;
        lVar41 = _DAT_001f3b10;
        lVar42 = _UNK_001f3b18;
        lVar43 = _DAT_001f1d00;
        lVar44 = _UNK_001f1d08;
        do {
          auVar47._0_8_ = lVar43 + 4;
          auVar47._8_8_ = lVar44 + 4;
          auVar56._0_8_ = lVar41 + 4;
          auVar56._8_8_ = lVar42 + 4;
          auVar48[8] = uVar21;
          auVar48._0_8_ = lVar4;
          auVar48[9] = uVar22;
          auVar48[10] = uVar23;
          auVar48[0xb] = uVar24;
          auVar48[0xc] = uVar25;
          auVar48[0xd] = uVar26;
          auVar48[0xe] = uVar27;
          auVar48[0xf] = uVar28;
          auVar79._8_8_ = lVar44;
          auVar79._0_8_ = lVar43;
          auVar63 = NEON_cmeq(auVar79,auVar48,8);
          auVar57[8] = uVar21;
          auVar57._0_8_ = lVar4;
          auVar57[9] = uVar22;
          auVar57[10] = uVar23;
          auVar57[0xb] = uVar24;
          auVar57[0xc] = uVar25;
          auVar57[0xd] = uVar26;
          auVar57[0xe] = uVar27;
          auVar57[0xf] = uVar28;
          auVar75._8_8_ = lVar42;
          auVar75._0_8_ = lVar41;
          auVar69 = NEON_cmeq(auVar75,auVar57,8);
          auVar7._8_8_ = lVar44;
          auVar7._0_8_ = lVar43;
          auVar79 = NEON_cmeq(auVar7,0,8);
          lVar20 = lVar20 + -8;
          auVar70[8] = uVar21;
          auVar70._0_8_ = lVar4;
          auVar70[9] = uVar22;
          auVar70[10] = uVar23;
          auVar70[0xb] = uVar24;
          auVar70[0xc] = uVar25;
          auVar70[0xd] = uVar26;
          auVar70[0xe] = uVar27;
          auVar70[0xf] = uVar28;
          auVar75 = NEON_cmeq(auVar56,auVar70,8);
          auVar77[8] = uVar21;
          auVar77._0_8_ = lVar4;
          auVar77[9] = uVar22;
          auVar77[10] = uVar23;
          auVar77[0xb] = uVar24;
          auVar77[0xc] = uVar25;
          auVar77[0xd] = uVar26;
          auVar77[0xe] = uVar27;
          auVar77[0xf] = uVar28;
          auVar77 = NEON_cmeq(auVar47,auVar77,8);
          auVar57 = NEON_cmeq(auVar56,0,8);
          auVar6._8_8_ = lVar42;
          auVar6._0_8_ = lVar41;
          auVar70 = NEON_cmeq(auVar6,0,8);
          auVar48 = NEON_cmeq(auVar47,0,8);
          auVar78._0_4_ = *piVar19;
          auVar71._4_4_ = auVar79._8_4_;
          auVar71._0_4_ = auVar79._0_4_;
          auVar71._8_4_ = auVar70._0_4_;
          auVar71._12_4_ = auVar70._8_4_;
          auVar49._0_4_ = auVar48._0_4_;
          auVar49._4_4_ = auVar48._8_4_;
          auVar49._8_4_ = auVar57._0_4_;
          auVar49._12_4_ = auVar57._8_4_;
          bVar29 = (byte)param_5;
          auVar58[0] = auVar63[0] & bVar29;
          bVar30 = (byte)((ulong)param_5 >> 8);
          auVar58[1] = auVar63[1] & bVar30;
          bVar31 = (byte)((ulong)param_5 >> 0x10);
          auVar58[2] = auVar63[2] & bVar31;
          bVar32 = (byte)((ulong)param_5 >> 0x18);
          auVar58[3] = auVar63[3] & bVar32;
          auVar58[4] = auVar63[8] & bVar29;
          auVar58[5] = auVar63[9] & bVar30;
          auVar58[6] = auVar63[10] & bVar31;
          auVar58[7] = auVar63[0xb] & bVar32;
          auVar58[8] = auVar69[0] & bVar29;
          auVar58[9] = auVar69[1] & bVar30;
          auVar58[10] = auVar69[2] & bVar31;
          auVar58[0xb] = auVar69[3] & bVar32;
          auVar58[0xc] = auVar69[8] & bVar29;
          auVar58[0xd] = auVar69[9] & bVar30;
          auVar58[0xe] = auVar69[10] & bVar31;
          auVar58[0xf] = auVar69[0xb] & bVar32;
          auVar78._4_4_ = piVar19[5];
          auVar64[0] = auVar77[0] & bVar29;
          auVar64[1] = auVar77[1] & bVar30;
          auVar64[2] = auVar77[2] & bVar31;
          auVar64[3] = auVar77[3] & bVar32;
          auVar64[4] = auVar77[8] & bVar29;
          auVar64[5] = auVar77[9] & bVar30;
          auVar64[6] = auVar77[10] & bVar31;
          auVar64[7] = auVar77[0xb] & bVar32;
          auVar64[8] = auVar75[0] & bVar29;
          auVar64[9] = auVar75[1] & bVar30;
          auVar64[10] = auVar75[2] & bVar31;
          auVar64[0xb] = auVar75[3] & bVar32;
          auVar64[0xc] = auVar75[8] & bVar29;
          auVar64[0xd] = auVar75[9] & bVar30;
          auVar64[0xe] = auVar75[10] & bVar31;
          auVar64[0xf] = auVar75[0xb] & bVar32;
          auVar76._0_4_ = piVar19[-0x14];
          auVar63._4_4_ = uVar16;
          auVar63._0_4_ = uVar16;
          auVar63._8_4_ = uVar16;
          auVar63._12_4_ = uVar16;
          auVar57 = NEON_bit(auVar58,auVar63,auVar71,1);
          auVar78._8_4_ = piVar19[10];
          auVar76._4_4_ = piVar19[-0xf];
          auVar69._4_4_ = uVar16;
          auVar69._0_4_ = uVar16;
          auVar69._8_4_ = uVar16;
          auVar69._12_4_ = uVar16;
          auVar48 = NEON_bsl(auVar49,auVar69,auVar64,1);
          auVar78._12_4_ = piVar19[0xf];
          auVar76._8_4_ = piVar19[-10];
          iVar53 = CONCAT13(~auVar57[3],CONCAT12(~auVar57[2],CONCAT11(~auVar57[1],~auVar57[0])));
          auVar54._0_8_ =
               CONCAT17(~auVar57[7],
                        CONCAT16(~auVar57[6],CONCAT15(~auVar57[5],CONCAT14(~auVar57[4],iVar53))));
          auVar54[8] = ~auVar57[8];
          auVar54[9] = ~auVar57[9];
          auVar54[10] = ~auVar57[10];
          auVar54[0xb] = ~auVar57[0xb];
          auVar59[0xc] = ~auVar57[0xc];
          auVar59._0_12_ = auVar54;
          auVar59[0xd] = ~auVar57[0xd];
          auVar59[0xe] = ~auVar57[0xe];
          auVar59[0xf] = ~auVar57[0xf];
          piVar9 = piVar19 + -5;
          piVar19 = piVar19 + 0x28;
          iVar62 = CONCAT13(~auVar48[3],CONCAT12(~auVar48[2],CONCAT11(~auVar48[1],~auVar48[0])));
          auVar45._0_8_ =
               CONCAT17(~auVar48[7],
                        CONCAT16(~auVar48[6],CONCAT15(~auVar48[5],CONCAT14(~auVar48[4],iVar62))));
          auVar45[8] = ~auVar48[8];
          auVar45[9] = ~auVar48[9];
          auVar45[10] = ~auVar48[10];
          auVar45[0xb] = ~auVar48[0xb];
          auVar50[0xc] = ~auVar48[0xc];
          auVar50._0_12_ = auVar45;
          auVar50[0xd] = ~auVar48[0xd];
          auVar50[0xe] = ~auVar48[0xe];
          auVar50[0xf] = ~auVar48[0xf];
          auVar76._12_4_ = *piVar9;
          auVar60._0_4_ = iVar13 + iVar53;
          auVar60._4_4_ = iVar13 + (int)((ulong)auVar54._0_8_ >> 0x20);
          auVar60._8_4_ = iVar13 + auVar54._8_4_;
          auVar60._12_4_ = iVar13 + auVar59._12_4_;
          auVar51._0_4_ = iVar13 + iVar62;
          auVar51._4_4_ = iVar13 + (int)((ulong)auVar45._0_8_ >> 0x20);
          auVar51._8_4_ = iVar13 + auVar45._8_4_;
          auVar51._12_4_ = iVar13 + auVar50._12_4_;
          iVar62 = auVar60._0_4_ - auVar76._0_4_;
          iVar65 = auVar60._4_4_ - auVar76._4_4_;
          iVar66 = auVar60._8_4_ - auVar76._8_4_;
          iVar67 = auVar60._12_4_ - auVar76._12_4_;
          auVar57 = NEON_cmge(auVar60,auVar76,4);
          iVar68 = auVar51._0_4_ - auVar78._0_4_;
          iVar72 = auVar51._4_4_ - auVar78._4_4_;
          iVar73 = auVar51._8_4_ - auVar78._8_4_;
          iVar74 = auVar51._12_4_ - auVar78._12_4_;
          auVar48 = NEON_cmge(auVar51,auVar78,4);
          iVar53 = CONCAT13(auVar57[3] & (byte)((uint)iVar62 >> 0x18),
                            CONCAT12(auVar57[2] & (byte)((uint)iVar62 >> 0x10),
                                     CONCAT11(auVar57[1] & (byte)((uint)iVar62 >> 8),
                                              auVar57[0] & (byte)iVar62)));
          auVar55._0_8_ =
               CONCAT17(auVar57[7] & (byte)((uint)iVar65 >> 0x18),
                        CONCAT16(auVar57[6] & (byte)((uint)iVar65 >> 0x10),
                                 CONCAT15(auVar57[5] & (byte)((uint)iVar65 >> 8),
                                          CONCAT14(auVar57[4] & (byte)iVar65,iVar53))));
          auVar55[8] = auVar57[8] & (byte)iVar66;
          auVar55[9] = auVar57[9] & (byte)((uint)iVar66 >> 8);
          auVar55[10] = auVar57[10] & (byte)((uint)iVar66 >> 0x10);
          auVar55[0xb] = auVar57[0xb] & (byte)((uint)iVar66 >> 0x18);
          auVar61[0xc] = auVar57[0xc] & (byte)iVar67;
          auVar61._0_12_ = auVar55;
          auVar61[0xd] = auVar57[0xd] & (byte)((uint)iVar67 >> 8);
          auVar61[0xe] = auVar57[0xe] & (byte)((uint)iVar67 >> 0x10);
          auVar61[0xf] = auVar57[0xf] & (byte)((uint)iVar67 >> 0x18);
          iVar62 = CONCAT13(auVar48[3] & (byte)((uint)iVar68 >> 0x18),
                            CONCAT12(auVar48[2] & (byte)((uint)iVar68 >> 0x10),
                                     CONCAT11(auVar48[1] & (byte)((uint)iVar68 >> 8),
                                              auVar48[0] & (byte)iVar68)));
          auVar46._0_8_ =
               CONCAT17(auVar48[7] & (byte)((uint)iVar72 >> 0x18),
                        CONCAT16(auVar48[6] & (byte)((uint)iVar72 >> 0x10),
                                 CONCAT15(auVar48[5] & (byte)((uint)iVar72 >> 8),
                                          CONCAT14(auVar48[4] & (byte)iVar72,iVar62))));
          auVar46[8] = auVar48[8] & (byte)iVar73;
          auVar46[9] = auVar48[9] & (byte)((uint)iVar73 >> 8);
          auVar46[10] = auVar48[10] & (byte)((uint)iVar73 >> 0x10);
          auVar46[0xb] = auVar48[0xb] & (byte)((uint)iVar73 >> 0x18);
          auVar52[0xc] = auVar48[0xc] & (byte)iVar74;
          auVar52._0_12_ = auVar46;
          auVar52[0xd] = auVar48[0xd] & (byte)((uint)iVar74 >> 8);
          auVar52[0xe] = auVar48[0xe] & (byte)((uint)iVar74 >> 0x10);
          auVar52[0xf] = auVar48[0xf] & (byte)((uint)iVar74 >> 0x18);
          lVar37 = lVar37 + auVar55._8_4_;
          lVar38 = lVar38 + auVar61._12_4_;
          lVar35 = lVar35 + iVar53;
          lVar36 = lVar36 + (int)((ulong)auVar55._0_8_ >> 0x20);
          lVar41 = lVar41 + 8;
          lVar42 = lVar42 + 8;
          lVar43 = lVar43 + 8;
          lVar44 = lVar44 + 8;
          lVar33 = lVar33 + auVar46._8_4_;
          lVar34 = lVar34 + auVar52._12_4_;
          lVar39 = lVar39 + iVar62;
          lVar40 = lVar40 + (int)((ulong)auVar46._0_8_ >> 0x20);
        } while (lVar20 != 0);
        uVar17 = lVar39 + lVar35 + lVar33 + lVar37 + lVar40 + lVar36 + lVar34 + lVar38;
      }
      do {
        piVar19 = (int *)(puVar11 + 0x10);
        puVar11 = puVar11 + 0x14;
        uVar1 = (uint)param_5;
        if (lVar4 != lVar18) {
          uVar1 = 0;
        }
        bVar8 = lVar18 != 0;
        lVar18 = lVar18 + 1;
        uVar2 = uVar16;
        if (bVar8) {
          uVar2 = uVar1;
        }
        iVar62 = 0;
        if (*piVar19 <= (int)(~uVar2 + iVar13)) {
          iVar62 = (~uVar2 + iVar13) - *piVar19;
        }
        uVar17 = uVar17 + (long)iVar62;
      } while (puVar11 != puStack_58);
      if ((ulong)(lVar14 * 2) < uVar17) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar17 / uVar15;
        }
        uVar15 = (param_4 - uVar5) - 0xffffffff;
        iVar13 = (int)uVar15;
        if ((int)(iVar13 - (uint)param_5) < 3 || (int)(iVar13 - uVar16) < 3) goto LAB_008d36f8;
        param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
        *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
        param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
        FUN_008d3ae8(param_1,param_2,param_3,uVar15 & 0xffffffff | param_4 & 0xffffffff00000000,
                     param_5);
        if (param_1[1] - *param_1 == (long)puStack_58 - (long)local_60) {
          if (local_60 == (undefined1 *)0x0) {
            return;
          }
          uVar15 = (ulong)(((long)local_60 - (long)puStack_58) * 0x3333333333333333) >> 2;
          uVar17 = (long)puStack_58 * -0x3333333333333333 - 4U >> 2;
          if (uVar17 <= uVar15) {
            uVar15 = uVar17;
          }
          puVar11 = puStack_58;
          if ((1 < uVar15) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 3U) == 0)) {
            uVar15 = uVar15 & 0x3ffffffffffffffe;
            puVar11 = puStack_58 + uVar15 * -0x14;
            do {
              uVar15 = uVar15 - 2;
            } while (uVar15 != 0);
          }
          do {
            if (puVar11 == local_60) {
              puStack_58 = local_60;
              operator_delete(local_60);
              return;
            }
            puVar11 = puVar11 + -0x14;
          } while (puVar11 != (undefined1 *)0x0);
LAB_008d3a84:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        uVar15 = FUN_004022fc();
        if ((uVar15 & 1) == 0) {
          FUN_00623bb0(&DAT_001fd8a8,"../../modules/rtp_rtcp/source/rtp_packetizer_av1.cc",0xaba,
                       "AV1 even distribution caused a regression in number of packets from ",
                       ((long)puStack_58 - (long)local_60 >> 2) * -0x3333333333333333,&DAT_0019fec4,
                       (param_1[1] - *param_1 >> 2) * -0x3333333333333333);
        }
        pvVar10 = (void *)*param_1;
        if (pvVar10 != (void *)0x0) {
          pvVar12 = (void *)param_1[1];
          uVar15 = (ulong)(((long)pvVar10 - (long)pvVar12) * 0x3333333333333333) >> 2;
          uVar17 = (long)pvVar12 * -0x3333333333333333 - 4U >> 2;
          if (uVar17 <= uVar15) {
            uVar15 = uVar17;
          }
          if ((1 < uVar15) && ((((int)pvVar10 - (int)pvVar12 | -(int)pvVar12) & 3U) == 0)) {
            uVar15 = uVar15 & 0x3ffffffffffffffe;
            pvVar12 = (void *)((long)pvVar12 + uVar15 * -0x14);
            do {
              uVar15 = uVar15 - 2;
            } while (uVar15 != 0);
          }
          do {
            if (pvVar12 == pvVar10) {
              param_1[1] = (long)pvVar10;
              operator_delete(pvVar10);
              goto LAB_008d3abc;
            }
            pvVar12 = (void *)((long)pvVar12 + -0x14);
          } while (pvVar12 != (void *)0x0);
          goto LAB_008d3a84;
        }
      }
    }
LAB_008d3abc:
    param_1[1] = (long)puStack_58;
    *param_1 = (long)local_60;
    param_1[2] = (long)local_50;
  }
  return;
}


// ===== 008d3ae8  FUN_008d3ae8 =====

void FUN_008d3ae8(long *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong local_70;
  undefined4 local_64;
  
  iVar9 = (int)((ulong)param_4 >> 0x20);
  iVar8 = (int)param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((param_3 != 0) && (iVar13 = (int)param_5, 2 < iVar8 - iVar13)) && (2 < iVar8 - iVar9)) {
    iVar8 = iVar8 + -1;
    local_64 = 0;
    lVar5 = FUN_008d45d0(param_1,&local_64);
    iVar11 = iVar8 - iVar9;
    param_1[1] = lVar5;
    local_70 = 0;
    do {
      uVar2 = local_70;
      puVar6 = (undefined4 *)param_1[1];
      if ((undefined4 *)*param_1 == puVar6) goto LAB_008d3ef4;
      iVar3 = 0;
      if ((puVar6[-1] != 0) && ((int)puVar6[-4] < 4)) {
        iVar3 = FUN_00879860((long)(int)puVar6[-2]);
        puVar6 = (undefined4 *)param_1[1];
        if ((undefined4 *)*param_1 == puVar6) goto LAB_008d3ef4;
      }
      iVar14 = 1;
      if (2 < (int)puVar6[-4]) {
        iVar14 = 2;
      }
      if (iVar11 < iVar14 + iVar3) {
        if (puVar6 < (undefined4 *)param_1[2]) {
          if (puVar6 == (undefined4 *)0x0) goto LAB_008d3f08;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[4] = 0;
          *puVar6 = (int)local_70;
          puVar6 = puVar6 + 5;
        }
        else {
          puVar6 = (undefined4 *)FUN_008d4708(param_1,&local_70);
        }
        param_1[1] = (long)puVar6;
        if ((undefined4 *)*param_1 == puVar6) goto LAB_008d3ef4;
        iVar3 = 0;
        iVar11 = iVar8;
      }
      lVar5 = param_2 + uVar2 * 0x20;
      iVar14 = puVar6[-4] + 1;
      puVar6[-1] = puVar6[-1] + iVar3;
      puVar6[-4] = iVar14;
      iVar12 = *(int *)(lVar5 + 0x18);
      if (3 < iVar14) {
        iVar4 = FUN_00879860((long)iVar12);
        iVar12 = iVar4 + iVar12;
      }
      iVar11 = iVar11 - iVar3;
      iVar4 = iVar11;
      if (uVar2 == param_3 - 1) {
        if (param_1[1] - *param_1 == 0x14) {
          iVar4 = (iVar9 - (int)((ulong)param_5 >> 0x20)) + iVar11;
          goto LAB_008d3cac;
        }
        if (iVar12 <= iVar11 - iVar13) goto LAB_008d3b8c;
LAB_008d3cb4:
        if (3 < iVar14) {
          if (iVar11 < 2) {
            iVar11 = 0;
          }
          else {
            iVar12 = 0;
            uVar10 = 7;
            do {
              uVar1 = uVar10 & 0x1f;
              iVar12 = iVar12 + 1;
              uVar10 = uVar10 + 7;
            } while ((1 << (ulong)uVar1) + iVar12 <= iVar11);
            iVar11 = iVar11 - iVar12;
          }
        }
        iVar12 = *(int *)(lVar5 + 0x18) + -1;
        if (iVar12 <= iVar11) {
          iVar11 = iVar12;
        }
        if (iVar11 == 0) {
          puVar6[-4] = puVar6[-4] + -1;
          puVar6[-1] = puVar6[-1] - iVar3;
        }
        else {
          puVar6[-1] = puVar6[-1] + iVar11;
          if (3 < iVar14) {
            iVar3 = FUN_00879860((long)iVar11);
            puVar6[-1] = puVar6[-1] + iVar3;
          }
          puVar6[-2] = iVar11;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
        if (iVar11 + iVar8 < iVar3) {
          do {
            puVar6 = (undefined4 *)param_1[1];
            if (puVar6 < (undefined4 *)param_1[2]) {
              if (puVar6 == (undefined4 *)0x0) goto LAB_008d3f08;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar7 = puVar6 + 5;
              puVar6[4] = 0;
              *puVar6 = (int)local_70;
            }
            else {
              puVar7 = (undefined4 *)FUN_008d4708(param_1,&local_70);
            }
            param_1[1] = (long)puVar7;
            if ((undefined4 *)*param_1 == puVar7) goto LAB_008d3ef4;
            puVar7[-4] = 1;
            puVar7[-3] = iVar11;
            iVar11 = iVar11 + iVar8;
            puVar7[-2] = iVar8;
            puVar7[-1] = iVar8;
            iVar3 = *(int *)(lVar5 + 0x18);
          } while (iVar8 + iVar11 < iVar3);
        }
        iVar3 = iVar3 - iVar11;
        if ((uVar2 == param_3 - 1) && (iVar8 - iVar13 < iVar3)) {
          iVar14 = (iVar3 + iVar13) / 2;
          puVar6 = (undefined4 *)param_1[1];
          if (iVar3 + -1 <= iVar14) {
            iVar14 = iVar3 + -1;
          }
          if (puVar6 < (undefined4 *)param_1[2]) {
            if (puVar6 == (undefined4 *)0x0) goto LAB_008d3f08;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar7 = puVar6 + 5;
            puVar6[4] = 0;
            *puVar6 = (int)local_70;
          }
          else {
            puVar7 = (undefined4 *)FUN_008d4708(param_1,&local_70);
          }
          param_1[1] = (long)puVar7;
          if ((undefined4 *)*param_1 == puVar7) goto LAB_008d3ef4;
          puVar7[-4] = 1;
          puVar7[-3] = iVar11;
          iVar3 = iVar3 - iVar14;
          iVar11 = iVar14 + iVar11;
          puVar7[-2] = iVar14;
          puVar7[-1] = iVar14;
        }
        puVar6 = (undefined4 *)param_1[1];
        if (puVar6 < (undefined4 *)param_1[2]) {
          if (puVar6 == (undefined4 *)0x0) {
LAB_008d3f08:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar7 = puVar6 + 5;
          puVar6[4] = 0;
          *puVar6 = (int)local_70;
        }
        else {
          puVar7 = (undefined4 *)FUN_008d4708(param_1,&local_70);
        }
        param_1[1] = (long)puVar7;
        if ((undefined4 *)*param_1 == puVar7) {
LAB_008d3ef4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        puVar7[-4] = 1;
        puVar7[-3] = iVar11;
        iVar11 = iVar8 - iVar3;
        puVar7[-2] = iVar3;
        puVar7[-1] = iVar3;
      }
      else {
LAB_008d3cac:
        if (iVar4 < iVar12) goto LAB_008d3cb4;
LAB_008d3b8c:
        iVar11 = iVar11 - iVar12;
        puVar6[-2] = *(undefined4 *)(lVar5 + 0x18);
        puVar6[-1] = puVar6[-1] + iVar12;
      }
      local_70 = local_70 + 1;
    } while (local_70 < param_3);
  }
  return;
}


// ===== 008d3f1c  FUN_008d3f1c =====

uint FUN_008d3f1c(long param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar6 = *(ulong *)(param_1 + 0x48);
  if (uVar6 < (ulong)((*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) *
                     -0x3333333333333333)) {
    piVar7 = (int *)(*(long *)(param_1 + 0x28) + uVar6 * 0x14);
    iVar2 = piVar7[1];
    pbVar3 = *(byte **)(param_1 + 0x10);
    uVar8 = (ulong)(iVar2 + *piVar7 + -1);
    if (uVar8 < (ulong)((long)*(byte **)(param_1 + 0x18) - (long)pbVar3 >> 5)) {
      iVar1 = piVar7[2];
      if (iVar2 != 1) {
        iVar1 = 0;
      }
      uVar9 = 0xffffff80;
      if (piVar7[2] < 1) {
        uVar9 = 0;
      }
      uVar4 = iVar2 << 4;
      uVar5 = uVar9 | 0x40;
      if (*(int *)(pbVar3 + uVar8 * 0x20 + 0x18) <= iVar1 + piVar7[3]) {
        uVar5 = uVar9;
      }
      if (3 < iVar2) {
        uVar4 = 0;
      }
      uVar5 = uVar5 | uVar4;
      uVar9 = uVar5;
      if ((uVar6 == 0) && (*(int *)(param_1 + 8) == 3)) {
        if (pbVar3 == *(byte **)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:435: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
                    );
        }
        uVar9 = uVar5 | 8;
        if ((*pbVar3 & 0x78) != 8) {
          uVar9 = uVar5;
        }
      }
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008d4018  FUN_008d4018 =====

bool FUN_008d4018(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  
  uVar14 = *(ulong *)(param_1 + 0x48);
  uVar13 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) * -0x3333333333333333;
  if (uVar13 <= uVar14) goto LAB_008d42c0;
  piVar15 = (int *)(*(long *)(param_1 + 0x28) + uVar14 * 0x14);
  puVar4 = (undefined1 *)FUN_007db6a0(param_2,(long)(piVar15[4] + 1));
  uVar2 = FUN_008d3f1c(param_1);
  pbVar8 = puVar4 + 1;
  *puVar4 = uVar2;
  iVar3 = piVar15[1];
  iVar11 = piVar15[2];
  iVar7 = iVar3 + -1;
  if (0 < iVar7) {
    if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 5) <= (ulong)(long)*piVar15
       ) goto LAB_008d4300;
    pbVar10 = (byte *)(*(long *)(param_1 + 0x10) + (long)*piVar15 * 0x20);
    iVar3 = FUN_00879890((long)(*(int *)(pbVar10 + 0x18) - iVar11),pbVar8);
    pbVar8 = pbVar8 + iVar3;
    if (iVar11 == 0) {
      *pbVar8 = *pbVar10 & 0xfd;
      bVar5 = *pbVar10;
      pbVar8 = pbVar8 + 1;
joined_r0x008d42f8:
      pbVar9 = pbVar8;
      if ((bVar5 >> 2 & 1) != 0) {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = pbVar10[1];
      }
    }
    else {
      pbVar9 = pbVar8;
      if (iVar11 < 2) {
        bVar5 = *pbVar10;
        goto joined_r0x008d42f8;
      }
    }
    iVar3 = -2;
    if ((*pbVar10 & 4) == 0) {
      iVar3 = -1;
    }
    uVar6 = (ulong)(iVar3 + iVar11 & (iVar3 + iVar11 >> 0x1f ^ 0xffffffffU));
    sVar12 = *(long *)(pbVar10 + 0x10) - uVar6;
    if ((*(long *)(pbVar10 + 0x10) != 0) && (sVar12 != 0)) {
      memcpy(pbVar9,(void *)(*(long *)(pbVar10 + 8) + uVar6),sVar12);
    }
    iVar3 = piVar15[1];
    pbVar8 = pbVar9 + sVar12;
    iVar7 = iVar3 + -1;
    if (1 < iVar7) {
      iVar11 = 1;
      do {
        if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 5) <=
            (ulong)(long)(iVar11 + *piVar15)) goto LAB_008d4300;
        pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + (long)(iVar11 + *piVar15) * 0x20);
        iVar3 = FUN_00879890((long)*(int *)(pbVar9 + 0x18),pbVar8);
        pbVar8 = pbVar8 + iVar3;
        pbVar10 = pbVar8 + 1;
        *pbVar8 = *pbVar9 & 0xfd;
        if ((*pbVar9 >> 2 & 1) != 0) {
          pbVar10 = pbVar8 + 2;
          pbVar8[1] = pbVar9[1];
        }
        sVar12 = *(size_t *)(pbVar9 + 0x10);
        if (sVar12 != 0) {
          memcpy(pbVar10,*(void **)(pbVar9 + 8),sVar12);
        }
        iVar3 = piVar15[1];
        iVar11 = iVar11 + 1;
        pbVar8 = pbVar10 + sVar12;
        iVar7 = iVar3 + -1;
      } while (iVar11 < iVar7);
    }
    iVar11 = 0;
  }
  if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 5) <=
      (ulong)(long)(iVar7 + *piVar15)) {
LAB_008d4300:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  pbVar10 = (byte *)(*(long *)(param_1 + 0x10) + (long)(iVar7 + *piVar15) * 0x20);
  iVar7 = piVar15[3];
  if (3 < iVar3) {
    iVar3 = FUN_00879890((long)iVar7,pbVar8);
    pbVar8 = pbVar8 + iVar3;
  }
  if ((iVar11 == 0) && (0 < iVar7)) {
    *pbVar8 = *pbVar10 & 0xfd;
    pbVar9 = pbVar8 + 1;
    iVar7 = iVar7 + -1;
LAB_008d4234:
    pbVar8 = pbVar9;
    if (((*pbVar10 >> 2 & 1) != 0) && (0 < iVar7)) {
      pbVar8 = pbVar9 + 1;
      *pbVar9 = pbVar10[1];
      iVar7 = iVar7 + -1;
    }
  }
  else {
    pbVar9 = pbVar8;
    if (iVar11 < 2) goto LAB_008d4234;
  }
  iVar3 = -2;
  if ((*pbVar10 & 4) == 0) {
    iVar3 = -1;
  }
  memcpy(pbVar8,(void *)(*(long *)(pbVar10 + 8) +
                        (ulong)(iVar3 + iVar11 & (iVar3 + iVar11 >> 0x1f ^ 0xffffffffU))),
         (long)iVar7);
  lVar1 = *(long *)(param_1 + 0x48) + 1;
  *(long *)(param_1 + 0x48) = lVar1;
  if (lVar1 == (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) * -0x3333333333333333) {
    bVar5 = *(byte *)(param_1 + 0x40);
  }
  else {
    bVar5 = 0;
  }
  FUN_007da930(param_2,bVar5 & 1);
LAB_008d42c0:
  return uVar14 < uVar13;
}


// ===== 008d4314  FUN_008d4314 =====

void FUN_008d4314(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d3cc18;
  if (pvVar1 == (void *)0x0) {
LAB_008d43c0:
    pvVar1 = (void *)param_1[2];
    if (pvVar1 == (void *)0x0) {
      return;
    }
    pvVar2 = (void *)param_1[3];
    uVar4 = (ulong)((long)pvVar2 + (-0x20 - ((long)pvVar2 << 0x3b))) >> 5;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3b) - ((long)pvVar1 - (long)pvVar2)) >> 5;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x1fU) == 0)) {
      uVar3 = uVar3 & 0x7fffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x20);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[3] = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x20);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = (void *)param_1[6];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x3333333333333333) >> 2;
    uVar4 = (long)pvVar2 * -0x3333333333333333 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x14);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[6] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_008d43c0;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x14);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008d446c  FUN_008d446c =====

void FUN_008d446c(void *param_1)

{
  FUN_008d4314();
  operator_delete(param_1);
  return;
}


// ===== 008d449c  FUN_008d449c =====

long FUN_008d449c(long param_1)

{
  return (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 2) * -0x3333333333333333 -
         *(long *)(param_1 + 0x48);
}


// ===== 008d44c4  FUN_008d44c4 =====

undefined8 * FUN_008d44c4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_008d45b8();
LAB_008d45b4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 4;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar5 = 0x7ffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3b != 0) goto LAB_008d45b4;
    pvVar2 = operator_new(uVar5 << 5);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    puVar6[1] = param_2[1];
    *puVar6 = uVar9;
    puVar6[3] = uVar8;
    puVar6[2] = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 4);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x20);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d45b8  FUN_008d45b8 =====

void FUN_008d45b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008d45d0  FUN_008d45d0 =====

undefined4 * FUN_008d45d0(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  void *__dest;
  
  puVar7 = (undefined4 *)(param_1[1] - *param_1);
  uVar4 = ((long)puVar7 >> 2) * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar4) {
    FUN_008d46f0();
LAB_008d46ec:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar5 = param_1[2] - *param_1 >> 2;
  uVar6 = lVar5 * -0x6666666666666666;
  if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
    uVar6 = uVar4;
  }
  if (0x666666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar6 = 0xccccccccccccccc;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xccccccccccccccc < uVar6) goto LAB_008d46ec;
    pvVar2 = operator_new(uVar6 * 0x14);
    puVar7 = (undefined4 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    *puVar7 = uVar1;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 5);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 0x14);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 5;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d46f0  FUN_008d46f0 =====

void FUN_008d46f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008d4708  FUN_008d4708 =====

undefined4 * FUN_008d4708(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  void *__dest;
  
  puVar7 = (undefined4 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar7 >> 2) * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar3) {
    FUN_008d46f0();
LAB_008d4824:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar5 = param_1[2] - *param_1 >> 2;
  uVar6 = lVar5 * -0x6666666666666666;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
    uVar6 = uVar3;
  }
  if (0x666666666666665 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar6 = 0xccccccccccccccc;
  }
  if (uVar6 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xccccccccccccccc < uVar6) goto LAB_008d4824;
    pvVar1 = operator_new(uVar6 * 0x14);
    puVar7 = (undefined4 *)((long)pvVar1 + (long)puVar7);
  }
  if (puVar7 != (undefined4 *)0x0) {
    uVar4 = *param_2;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    *puVar7 = (int)uVar4;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 5);
    param_1[2] = (long)((long)pvVar1 + uVar6 * 0x14);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar7 + 5;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d4828  FUN_008d4828 =====

void FUN_008d4828(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  FUN_007de7c4(0x49742400,param_1,uVar1);
  return;
}


// ===== 008d4894  FUN_008d4894 =====

undefined1  [16] FUN_008d4894(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar2 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  auVar3 = FUN_007df10c(param_1,uVar2);
  uVar1 = auVar3._0_8_;
  if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  auVar3._8_8_ = auVar3._8_8_ & 1;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


// ===== 008d4914  FUN_008d4914 =====

void FUN_008d4914(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 / 1000;
  if (499 < param_3 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_3 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
  }
  FUN_007dec4c(param_1,param_2,uVar1);
  return;
}


// ===== 008d4974  FUN_008d4974 =====

void FUN_008d4974(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6,ulong param_7,undefined8 *param_8,
                 undefined8 param_9,undefined8 param_10,undefined2 *param_11)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *__dest;
  ulong uVar8;
  undefined4 uVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *local_78 [2];
  char cStack_61;
  
  *param_1 = &PTR_FUN_00d3cc48;
  lVar13 = *param_2;
  param_1[1] = lVar13;
  if (lVar13 != 0) {
    FUN_00d0f740(1,lVar13 + 8);
  }
  lVar13 = param_2[1];
  lVar15 = param_2[4];
  lVar14 = param_2[3];
  param_1[3] = param_2[2];
  param_1[2] = lVar13;
  param_1[5] = lVar15;
  param_1[4] = lVar14;
  uVar7 = (**(code **)(*(long *)param_1[3] + 0x10))();
  FUN_00889c98(param_1 + 6,uVar7);
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[7] = 0x8000000000000000;
  if (param_11 == (undefined2 *)0x0) {
    uVar8 = param_1[6] ^ (ulong)param_1[6] >> 0xc;
    uVar8 = uVar8 ^ uVar8 << 0x19;
    uVar8 = uVar8 ^ uVar8 >> 0x1b;
    iVar6 = (int)uVar8 * 0x4f6cdd1d;
    param_1[6] = uVar8;
  }
  else {
    iVar6 = *(int *)(param_11 + 2);
  }
  *(int *)((long)param_1 + 0x44) = iVar6;
  *(undefined4 *)(param_1 + 9) = param_4;
  *(undefined4 *)((long)param_1 + 0x4c) = param_5;
  if (0x7ffffffffffffff6 < param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_7 < 0x17) {
    __dest = param_1 + 10;
    *(char *)((long)param_1 + 0x67) = (char)param_7;
  }
  else {
    uVar8 = (param_7 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar8 != 0x18) {
      uVar1 = uVar8;
    }
    __dest = (undefined8 *)operator_new(uVar1);
    param_1[10] = __dest;
    param_1[0xb] = param_7;
    param_1[0xc] = uVar1 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)__dest + param_7) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_6) && (param_6 < (undefined8 *)((long)__dest + param_7))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_6,param_7);
  *(undefined1 *)((long)__dest + param_7) = 0;
  if (param_11 == (undefined2 *)0x0) {
    uVar5 = FUN_00889ce0(param_1 + 6,1,0x7fff);
  }
  else {
    uVar5 = *param_11;
  }
  *(undefined2 *)(param_1 + 0xd) = uVar5;
  uVar7 = FUN_0084bf00(param_4,param_5);
  FUN_008c55e0(param_1 + 0xe,param_1 + 1,uVar7);
  *(undefined1 **)((long)param_1 + 0x29f) = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x53] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x52] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d87d8(param_1 + 0x52);
  plVar2 = (long *)*param_8;
  plVar3 = (long *)param_8[1];
  do {
    if (plVar2 == plVar3) {
      iVar6 = FUN_00863de8(param_9,param_10,param_1 + 0x52);
      local_78[0] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[0x55] = (long)iVar6;
      pthread_mutexattr_init((pthread_mutexattr_t *)local_78);
      pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x56),(pthread_mutexattr_t *)local_78);
      pthread_mutexattr_destroy((pthread_mutexattr_t *)local_78);
      FUN_008531f8(param_1 + 0x5b,1000000);
      return;
    }
    cVar4 = *(char *)((long)plVar2 + 0x17);
    if (cVar4 < '\0') {
      plVar10 = (long *)*plVar2;
      if (plVar2[1] == 0x49) goto LAB_008d4bd8;
LAB_008d4be8:
      if (cVar4 < '\0') {
        plVar10 = (long *)*plVar2;
        if (plVar2[1] == 0x3a) goto LAB_008d4c0c;
      }
      else {
        plVar10 = plVar2;
        if (cVar4 == ':') {
LAB_008d4c0c:
          if (((((((*plVar10 == 0x772f2f3a70747468 && plVar10[1] == 0x74726265772e7777) &&
                  plVar10[2] == 0x78652f67726f2e63) && plVar10[3] == 0x746e656d69726570) &&
                plVar10[4] == 0x64682d7074722f73) && plVar10[5] == 0x7362612f74786572) &&
              plVar10[6] == 0x69742d646e65732d) && (short)plVar10[7] == 0x656d) {
            uVar9 = (undefined4)plVar2[3];
            uVar7 = 5;
            pcVar11 = "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time";
            uVar12 = 0x3a;
            goto LAB_008d4ba0;
          }
        }
      }
      if (cVar4 < '\0') {
        plVar10 = (long *)*plVar2;
        if (plVar2[1] == 0x22) goto LAB_008d4cc8;
      }
      else {
        plVar10 = plVar2;
        if (cVar4 == '\"') {
LAB_008d4cc8:
          if ((((*plVar10 == 0x667465693a6e7275 && plVar10[1] == 0x3a736d617261703a) &&
               plVar10[2] == 0x657264682d707472) && plVar10[3] == 0x7366666f743a7478) &&
              (short)plVar10[4] == 0x7465) {
            uVar9 = (undefined4)plVar2[3];
            uVar7 = 1;
            pcVar11 = "urn:ietf:params:rtp-hdrext:toffset";
            uVar12 = 0x22;
            goto LAB_008d4ba0;
          }
        }
      }
      if (cVar4 < '\0') {
        plVar10 = (long *)*plVar2;
        if (plVar2[1] == 0x23) goto LAB_008d4d20;
      }
      else {
        plVar10 = plVar2;
        if (cVar4 == '#') {
LAB_008d4d20:
          if ((((*plVar10 == 0x667465693a6e7275 && plVar10[1] == 0x3a736d617261703a) &&
               plVar10[2] == 0x657264682d707472) && plVar10[3] == 0x3a736564733a7478) &&
              *(long *)((long)plVar10 + 0x1b) == 0x64696d3a73656473) {
            uVar9 = (undefined4)plVar2[3];
            uVar7 = 0x10;
            pcVar11 = "urn:ietf:params:rtp-hdrext:sdes:mid";
            uVar12 = 0x23;
            goto LAB_008d4ba0;
          }
        }
      }
      uVar8 = FUN_00417e08();
      if ((uVar8 & 1) == 0) {
        FUN_006699d4(local_78,plVar2);
        FUN_00623bb0(&DAT_001f4eff,"../../modules/rtp_rtcp/source/flexfec_sender.cc",0x251,
                     "FlexfecSender only supports RTP header extensions for BWE and MID, so the extension "
                     ,local_78," will not be used.");
        if (cStack_61 < '\0') {
          operator_delete(local_78[0]);
        }
      }
    }
    else {
      plVar10 = plVar2;
      if (cVar4 != 'I') goto LAB_008d4be8;
LAB_008d4bd8:
      iVar6 = memcmp("http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",
                     plVar10,0x49);
      if (iVar6 != 0) goto LAB_008d4be8;
      uVar9 = (undefined4)plVar2[3];
      uVar7 = 8;
      pcVar11 = "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01";
      uVar12 = 0x49;
LAB_008d4ba0:
      FUN_007d8978(param_1 + 0x52,uVar9,uVar7,pcVar11,uVar12);
    }
    plVar2 = plVar2 + 4;
  } while( true );
}


// ===== 008d4eac  FUN_008d4eac =====

void FUN_008d4eac(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3cc48;
  FUN_007de938(param_1 + 0x5b);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x56));
  FUN_008c56c4(param_1 + 0xe);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
    plVar2 = (long *)param_1[1];
  }
  else {
    plVar2 = (long *)param_1[1];
  }
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008d4f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008d4f50  FUN_008d4f50 =====

void FUN_008d4f50(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3cc48;
  FUN_007de938(param_1 + 0x5b);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x56));
  FUN_008c56c4(param_1 + 0xe);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 008d4fe4  FUN_008d4fe4 =====

void FUN_008d4fe4(long param_1)

{
  FUN_008c581c(param_1 + 0x70);
  return;
}


// ===== 008d4ff0  FUN_008d4ff0 =====

void FUN_008d4ff0(long param_1)

{
  FUN_008c5898(param_1 + 0x70);
  return;
}


// ===== 008d4ffc  FUN_008d4ffc =====

long FUN_008d4ffc(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  long local_80;
  char **ppcStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00660fb8(&local_70,param_2 + 0xa8);
  uVar4 = FUN_00661028(&local_70);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/flexfec_sender.cc",0x8a,
                 "!race_checker138.RaceDetected()",&DAT_001f5fa0);
  }
  uVar4 = *(ulong *)(param_2 + 0x1c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar4 != 0) {
    if (uVar4 >> 0x3d != 0) {
      lVar13 = FUN_0086a414();
      return *(long *)(lVar13 + 0x2a8) + 0x20;
    }
    pvVar5 = operator_new(uVar4 * 8);
    *param_1 = (long)pvVar5;
    param_1[1] = (long)pvVar5;
    param_1[2] = (long)((long)pvVar5 + uVar4 * 8);
  }
  lVar13 = *(long *)(param_2 + 0x1b8);
  if (lVar13 == param_2 + 0x1b0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      lVar14 = *(long *)(lVar13 + 0x10);
      local_a8 = &DAT_aaaaaaaaaaaaaaaa;
      pcVar6 = (char *)operator_new(0xd0);
      FUN_007dc674(pcVar6,param_2 + 0x290);
      local_a8 = pcVar6;
      FUN_007dc8a8(pcVar6,3);
      local_a8[0xa8] = '\0';
      FUN_007da930(local_a8,0);
      FUN_007daa40(local_a8,*(undefined4 *)(param_2 + 0x40));
      *(short *)(param_2 + 0x68) = *(short *)(param_2 + 0x68) + 1;
      FUN_007daabc(local_a8);
      pcVar6 = local_a8;
      iVar2 = *(int *)(param_2 + 0x44);
      uVar4 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
      iVar9 = (int)(uVar4 / 1000);
      if (499 < uVar4 % 1000) {
        iVar9 = iVar9 + 1;
      }
      if ((uVar4 & 0x8000000000000000) != 0) {
        iVar9 = -(int)(-uVar4 / 1000) - (uint)(500 < -uVar4 % 1000);
      }
      FUN_007dab68(pcVar6,iVar2 + iVar9 * 0x5a);
      pcVar6 = local_a8;
      uVar7 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
      *(undefined8 *)(pcVar6 + 0x70) = uVar7;
      FUN_007dabd4(local_a8,*(undefined4 *)(param_2 + 0x48));
      auVar15 = FUN_007dbacc(local_a8,5,3);
      if (auVar15._8_8_ != 0) {
        *(undefined1 *)(auVar15._0_8_ + 1) = 0;
        *auVar15._0_8_ = 0;
      }
      auVar15 = FUN_007dbacc(local_a8,1,3);
      if (auVar15._8_8_ != 0) {
        *(undefined1 *)(auVar15._0_8_ + 1) = 0;
        *auVar15._0_8_ = 0;
      }
      auVar15 = FUN_007dbacc(local_a8,8,2);
      if (auVar15._8_8_ != 0) {
        *auVar15._0_8_ = 0;
      }
      lVar10 = (long)*(char *)(param_2 + 0x67);
      lVar11 = lVar10;
      if (lVar10 < 0) {
        lVar11 = *(long *)(param_2 + 0x58);
      }
      if (lVar11 != 0) {
        lVar11 = *(long *)(param_2 + 0x58);
        if (-1 < *(char *)(param_2 + 0x67)) {
          lVar11 = lVar10;
        }
        auVar15 = FUN_007dbacc(local_a8,0x10,lVar11);
        if (auVar15._8_8_ != 0) {
          uVar4 = *(ulong *)(param_2 + 0x58);
          lVar11 = *(long *)(param_2 + 0x50);
          if (-1 < (char)*(byte *)(param_2 + 0x67)) {
            uVar4 = (ulong)*(byte *)(param_2 + 0x67);
            lVar11 = param_2 + 0x50;
          }
          FUN_007d9944(auVar15._0_8_,auVar15._8_8_,lVar11,uVar4);
        }
      }
      lVar11 = *(long *)(lVar14 + 8);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x10) + *(long *)(lVar14 + 0x10);
      }
      lVar10 = 0;
      if (*(long *)(lVar14 + 0x18) != 0) {
        lVar10 = lVar11;
      }
      FUN_007db7a0(local_a8,lVar10);
      pcVar6 = local_a8;
      puVar1 = (undefined8 *)param_1[1];
      lVar14 = *(long *)(local_a8 + 0x10);
      lVar11 = *(long *)(local_a8 + 0x18);
      bVar3 = local_a8[2];
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_a8 = (char *)0x0;
        puVar8 = puVar1 + 1;
        *puVar1 = pcVar6;
      }
      else {
        puVar8 = (undefined8 *)FUN_0086a31c(param_1,&local_a8);
      }
      pcVar6 = local_a8;
      param_1[1] = (long)puVar8;
      local_a8 = (char *)0x0;
      if (pcVar6 != (char *)0x0) {
        FUN_007dc854(pcVar6);
        operator_delete(pcVar6);
      }
      lVar13 = *(long *)(lVar13 + 8);
      lVar12 = lVar14 + lVar12 + lVar11 + (ulong)bVar3;
    } while (lVar13 != param_2 + 0x1b0);
    if (*param_1 != param_1[1]) {
      FUN_008c5b20(param_2 + 0x70);
    }
  }
  lVar13 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
  if ((*param_1 != param_1[1]) &&
     (((lVar13 == 0x7fffffffffffffff ||
       (lVar14 = *(long *)(param_2 + 0x38), lVar14 == -0x8000000000000000)) ||
      ((lVar13 != -0x8000000000000000 &&
       ((lVar14 != 0x7fffffffffffffff && (10000000 < lVar13 - lVar14)))))))) {
    uVar4 = FUN_0044075c();
    if ((uVar4 & 1) == 0) {
      local_a8 = "../../modules/rtp_rtcp/source/flexfec_sender.cc";
      uStack_a0 = 0x5c8;
      local_98 = &uStack_a9;
      ppcStack_88 = &local_a8;
      local_90 = "Generated ";
      local_80 = param_1[1] - *param_1 >> 3;
      ppcStack_78 = &local_90;
      FUN_00623bb0(&DAT_00224ce5,"../../modules/rtp_rtcp/source/flexfec_sender.cc",0x5c8,
                   "Generated ",local_80," FlexFEC packets with payload type: ",
                   *(undefined4 *)(param_2 + 0x40)," and SSRC: ",*(undefined4 *)(param_2 + 0x48),
                   &DAT_001ea377);
    }
    *(long *)(param_2 + 0x38) = lVar13;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x2b0));
  FUN_008532e0(param_2 + 0x2d8,lVar12,lVar13);
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x2b0));
  lVar13 = FUN_0066103c(&local_70);
  return lVar13;
}


// ===== 008d5460  FUN_008d5460 =====

long FUN_008d5460(long param_1)

{
  return *(long *)(param_1 + 0x2a8) + 0x20;
}


// ===== 008d5470  FUN_008d5470 =====

undefined8 FUN_008d5470(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2b0));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  auVar2 = FUN_00853260(param_1 + 0x2d8,uVar1);
  uVar1 = auVar2._0_8_;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2b0));
  return uVar1;
}


// ===== 008d54cc  FUN_008d54cc =====

void FUN_008d54cc(undefined2 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_001f5460;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[1] = 0xaaaa;
  uVar2 = *(undefined2 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 0x21) = 0x1aaaaaaaaaaaaaa;
  *(undefined8 *)(param_1 + 0xc) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  return;
}


// ===== 008d5514  FUN_008d5514 =====

undefined8 FUN_008d5514(void)

{
  return 0;
}


// ===== 008d5520  FUN_008d5520 =====

ulong FUN_008d5520(long param_1)

{
  return (ulong)*(uint *)(param_1 + 0x48) | 0x100000000;
}


// ===== 008d5530  FUN_008d5530 =====

void FUN_008d5530(undefined8 *param_1,long param_2,undefined4 param_3,undefined2 *param_4)

{
  int *****pppppiVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int ****local_68;
  ulong local_60;
  byte bStack_51;
  
  *param_1 = 0;
  param_1[0x1d] = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = param_3;
  *(undefined2 *)(param_1 + 0x75) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x3aa) = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_68,*(long **)(param_2 + 8),"WebRTC-GenericPictureId",0x17);
  bVar2 = false;
  uVar4 = local_60;
  if (-1 < (char)bStack_51) {
    uVar4 = (ulong)bStack_51;
  }
  if (6 < uVar4) {
    pppppiVar1 = (int *****)local_68;
    if (-1 < (char)bStack_51) {
      pppppiVar1 = &local_68;
    }
    bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)(param_1 + 0x78) = bVar2;
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_68,*(long **)(param_2 + 8),"WebRTC-GenericCodecDependencyDescriptor",0x27);
  if (-1 < (char)bStack_51) {
    local_60 = (ulong)bStack_51;
  }
  if (local_60 < 7) {
    bVar2 = false;
  }
  else {
    pppppiVar1 = (int *****)local_68;
    if (-1 < (char)bStack_51) {
      pppppiVar1 = &local_68;
    }
    bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)((long)param_1 + 0x3c1) = bVar2;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x26] = 0xffffffffffffffff;
  param_1[0x29] = 0xffffffffffffffff;
  param_1[0x28] = 0xffffffffffffffff;
  param_1[0x2b] = 0xffffffffffffffff;
  param_1[0x2a] = 0xffffffffffffffff;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x2f] = 0xffffffffffffffff;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x31] = 0xffffffffffffffff;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  param_1[0x37] = 0xffffffffffffffff;
  param_1[0x36] = 0xffffffffffffffff;
  param_1[0x39] = 0xffffffffffffffff;
  param_1[0x38] = 0xffffffffffffffff;
  param_1[0x3b] = 0xffffffffffffffff;
  param_1[0x3a] = 0xffffffffffffffff;
  param_1[0x3d] = 0xffffffffffffffff;
  param_1[0x3c] = 0xffffffffffffffff;
  param_1[0x3f] = 0xffffffffffffffff;
  param_1[0x3e] = 0xffffffffffffffff;
  param_1[0x41] = 0xffffffffffffffff;
  param_1[0x40] = 0xffffffffffffffff;
  param_1[0x43] = 0xffffffffffffffff;
  param_1[0x42] = 0xffffffffffffffff;
  param_1[0x45] = 0xffffffffffffffff;
  param_1[0x44] = 0xffffffffffffffff;
  param_1[0x47] = 0xffffffffffffffff;
  param_1[0x46] = 0xffffffffffffffff;
  param_1[0x49] = 0xffffffffffffffff;
  param_1[0x48] = 0xffffffffffffffff;
  param_1[0x4b] = 0xffffffffffffffff;
  param_1[0x4a] = 0xffffffffffffffff;
  param_1[0x4d] = 0xffffffffffffffff;
  param_1[0x4c] = 0xffffffffffffffff;
  param_1[0x4f] = 0xffffffffffffffff;
  param_1[0x4e] = 0xffffffffffffffff;
  param_1[0x51] = 0xffffffffffffffff;
  param_1[0x50] = 0xffffffffffffffff;
  param_1[0x53] = 0xffffffffffffffff;
  param_1[0x52] = 0xffffffffffffffff;
  param_1[0x55] = 0xffffffffffffffff;
  param_1[0x54] = 0xffffffffffffffff;
  param_1[0x57] = 0xffffffffffffffff;
  param_1[0x56] = 0xffffffffffffffff;
  param_1[0x59] = 0xffffffffffffffff;
  param_1[0x58] = 0xffffffffffffffff;
  param_1[0x5b] = 0xffffffffffffffff;
  param_1[0x5a] = 0xffffffffffffffff;
  param_1[0x5d] = 0xffffffffffffffff;
  param_1[0x5c] = 0xffffffffffffffff;
  param_1[0x5f] = 0xffffffffffffffff;
  param_1[0x5e] = 0xffffffffffffffff;
  param_1[0x61] = 0xffffffffffffffff;
  param_1[0x60] = 0xffffffffffffffff;
  param_1[99] = 0xffffffffffffffff;
  param_1[0x62] = 0xffffffffffffffff;
  param_1[0x65] = 0xffffffffffffffff;
  param_1[100] = 0xffffffffffffffff;
  param_1[0x73] = 0xffffffffffffffff;
  param_1[0x6c] = 0xffffffffffffffff;
  param_1[0x6b] = 0xffffffffffffffff;
  param_1[0x6e] = 0xffffffffffffffff;
  param_1[0x6d] = 0xffffffffffffffff;
  param_1[0x70] = 0xffffffffffffffff;
  param_1[0x6f] = 0xffffffffffffffff;
  param_1[0x72] = 0xffffffffffffffff;
  param_1[0x71] = 0xffffffffffffffff;
  param_1[0x6a] = 0xffffffffffffffff;
  param_1[0x69] = 0xffffffffffffffff;
  local_68 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))();
  FUN_00889c98(&local_68,uVar3);
  if (param_4 == (undefined2 *)0x0) {
    uVar4 = (ulong)local_68 ^ (ulong)local_68 >> 0xc;
    uVar4 = uVar4 ^ uVar4 << 0x19;
    uVar4 = uVar4 ^ uVar4 >> 0x1b;
    uVar5 = uVar4 ^ uVar4 >> 0xc;
    uVar5 = uVar5 ^ uVar5 << 0x19;
    uVar5 = uVar5 ^ uVar5 >> 0x1b;
    *(ushort *)(param_1 + 0x75) = (short)uVar4 * 0x5d1d & 0x7fff;
    uVar4 = uVar5 ^ uVar5 >> 0xc;
    *(char *)((long)param_1 + 0x3aa) = (char)uVar5 * '\x1d';
    uVar4 = (ulong)(((uint)((uVar4 ^ uVar4 << 0x19) >> 0x1b) ^ (uint)uVar4) * 0xdd1d) & 0xffff;
  }
  else {
    *(undefined2 *)(param_1 + 0x75) = *param_4;
    *(undefined1 *)((long)param_1 + 0x3aa) = *(undefined1 *)(param_4 + 1);
    uVar4 = *(ulong *)(param_4 + 8);
  }
  param_1[0x77] = uVar4;
  return;
}


// ===== 008d57ac  FUN_008d57ac =====

void FUN_008d57ac(undefined8 *param_1,ulong *param_2)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = 0;
  if (1 < *param_2) {
    FUN_008d8524(param_1,param_2);
  }
  param_1[0x1d] = 0;
  uVar3 = param_2[0x1d];
  if (1 < uVar3) {
    if ((uVar3 & 1) == 0) {
      param_1[0x1d] = uVar3;
      uVar7 = param_2[0x22];
      uVar4 = param_2[0x25];
      uVar3 = param_2[0x24];
      uVar9 = param_2[0x1f];
      uVar8 = param_2[0x1e];
      uVar11 = param_2[0x21];
      uVar10 = param_2[0x20];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar7;
      param_1[0x25] = uVar4;
      param_1[0x24] = uVar3;
      param_1[0x1f] = uVar9;
      param_1[0x1e] = uVar8;
      param_1[0x21] = uVar11;
      param_1[0x20] = uVar10;
    }
    else {
      FUN_008d86c4();
    }
  }
  memcpy(param_1 + 0x26,param_2 + 0x26,0x200);
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  pvVar5 = (void *)param_2[0x66];
  uVar3 = param_2[0x67] - (long)pvVar5;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
      plVar2 = (long *)FUN_008d874c();
      pvVar5 = (void *)plVar2[0x66];
      if (pvVar5 != (void *)0x0) {
        pvVar1 = (void *)plVar2[0x67];
        uVar4 = (ulong)((long)pvVar1 + (-0x40 - ((long)pvVar1 << 0x3a))) >> 6;
        uVar3 = (ulong)(((long)pvVar5 - (long)pvVar1 << 0x3a) - ((long)pvVar5 - (long)pvVar1)) >> 6;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)pvVar5 - (int)pvVar1 | -(int)pvVar1) & 0x3fU) == 0)) {
          uVar3 = uVar3 & 0x3fffffffffffffe;
          pvVar1 = (void *)((long)pvVar1 + uVar3 * -0x40);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar1 != pvVar5) {
          pvVar1 = (void *)((long)pvVar1 + -0x40);
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        plVar2[0x67] = (long)pvVar5;
        operator_delete(pvVar5);
      }
      if ((*(byte *)(plVar2 + 0x1d) & 1) != 0) {
        operator_delete((void *)plVar2[0x1e]);
      }
      if (*plVar2 != 0) {
        FUN_008d8764(plVar2);
        return;
      }
      return;
    }
    pvVar1 = operator_new(uVar3);
    param_1[0x66] = pvVar1;
    param_1[0x67] = pvVar1;
    param_1[0x68] = (long)pvVar1 + uVar3;
    memcpy(pvVar1,pvVar5,uVar3);
    param_1[0x67] = (long)pvVar1 + uVar3;
  }
  uVar7 = param_2[0x6d];
  uVar4 = param_2[0x70];
  uVar3 = param_2[0x6f];
  uVar9 = param_2[0x6a];
  uVar8 = param_2[0x69];
  uVar11 = param_2[0x6c];
  uVar10 = param_2[0x6b];
  param_1[0x6e] = param_2[0x6e];
  param_1[0x6d] = uVar7;
  param_1[0x70] = uVar4;
  param_1[0x6f] = uVar3;
  param_1[0x6a] = uVar9;
  param_1[0x69] = uVar8;
  param_1[0x6c] = uVar11;
  param_1[0x6b] = uVar10;
  uVar10 = param_2[0x74];
  uVar9 = param_2[0x73];
  uVar4 = param_2[0x76];
  uVar3 = param_2[0x75];
  uVar6 = *(undefined8 *)((long)param_2 + 0x3b2);
  uVar8 = param_2[0x72];
  uVar7 = param_2[0x71];
  *(undefined8 *)((long)param_1 + 0x3ba) = *(undefined8 *)((long)param_2 + 0x3ba);
  *(undefined8 *)((long)param_1 + 0x3b2) = uVar6;
  param_1[0x74] = uVar10;
  param_1[0x73] = uVar9;
  param_1[0x76] = uVar4;
  param_1[0x75] = uVar3;
  param_1[0x72] = uVar8;
  param_1[0x71] = uVar7;
  return;
}


// ===== 008d58c4  FUN_008d58c4 =====

void FUN_008d58c4(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x66];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x67];
    uVar4 = (ulong)((long)pvVar2 + (-0x40 - ((long)pvVar2 << 0x3a))) >> 6;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3a) - ((long)pvVar1 - (long)pvVar2)) >> 6;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0x3fU) == 0)) {
      uVar3 = uVar3 & 0x3fffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x40);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x40);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x67] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  if (*param_1 != 0) {
    FUN_008d8764(param_1);
    return;
  }
  return;
}


// ===== 008d59a8  FUN_008d59a8 =====

void FUN_008d59a8(void *param_1,long param_2,undefined4 *param_3,int *param_4,long param_5,
                 ulong param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  code *pcVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 local_98 [68];
  undefined1 local_54;
  
  if ((param_6 & 1) == 0) {
    param_5 = *(long *)(param_2 + 0x3b8);
    *(long *)(param_2 + 0x3b8) = param_5 + 1;
  }
  memcpy(param_1,&DAT_00224cf0,0x7f0);
  FUN_007dcfa0(param_1);
  if (param_4 != (int *)0x0) {
    iVar7 = param_4[0x198];
    uVar17 = *(ulong *)(param_3 + 0x2e);
    *(int *)((long)param_1 + 0xac) = *param_4;
    *(char *)((long)param_1 + 0xa7) = (char)iVar7;
    FUN_0084fc00((long)param_1 + 0x7b8,param_4 + 500);
    iVar7 = *param_4;
    uVar13 = (undefined1)uVar17;
    if (3 < iVar7) {
      if (iVar7 == 4) {
        if ((ulong)*(byte *)((long)param_1 + 0x790) != 0xff) {
          (*(code *)(&PTR_FUN_00d3cc98)[*(byte *)((long)param_1 + 0x790)])
                    (local_98,(long)param_1 + 0x128);
        }
        *(undefined8 *)((long)param_1 + 0x148) = 0;
        *(undefined1 *)((long)param_1 + 0x790) = 3;
        *(int *)((long)param_1 + 0x148) = param_4[2];
        *(undefined8 *)((long)param_1 + 0x130) = 0;
        *(undefined8 *)((long)param_1 + 0x128) = 0;
        *(undefined8 *)((long)param_1 + 0x140) = 0;
        *(undefined8 *)((long)param_1 + 0x138) = 0;
      }
      else if (iVar7 == 5) {
        if ((uVar17 >> 0x20 & 1) == 0) {
          uVar13 = 0;
        }
        *(undefined1 *)((long)param_1 + 0xa8) = uVar13;
      }
      goto LAB_008d5d98;
    }
    if (iVar7 == 1) {
      if ((ulong)*(byte *)((long)param_1 + 0x790) != 0xff) {
        (*(code *)(&PTR_FUN_00d3cc98)[*(byte *)((long)param_1 + 0x790)])
                  (local_98,(long)param_1 + 0x128);
      }
      *(undefined8 *)((long)param_1 + 0x128) = 0;
      *(undefined8 *)((long)param_1 + 0x130) = 0;
      *(undefined1 *)((long)param_1 + 0x790) = 1;
      *(undefined4 *)((long)param_1 + 0x138) = 0;
      *(undefined4 *)((long)param_1 + 0x12a) = 0xffffffff;
      iVar7 = param_4[2];
      uVar9 = *(undefined2 *)((long)param_4 + 9);
      *(undefined1 *)((long)param_1 + 0x138) = 0;
      *(char *)((long)param_1 + 0x128) = (char)iVar7;
      cVar4 = *(char *)((long)param_4 + 0xb);
      *(undefined2 *)((long)param_1 + 0x12e) = uVar9;
      *(int *)((long)param_1 + 0x130) = (int)cVar4;
      goto LAB_008d5d98;
    }
    if (iVar7 != 2) goto LAB_008d5d98;
    if ((ulong)*(byte *)((long)param_1 + 0x790) != 0xff) {
      (*(code *)(&PTR_FUN_00d3cc98)[*(byte *)((long)param_1 + 0x790)])
                (local_98,(long)param_1 + 0x128);
    }
    memset((void *)((long)param_1 + 0x138),0,0x658);
    uVar9 = *(undefined2 *)((long)param_4 + 0xe);
    *(undefined1 *)((long)param_1 + 0x790) = 2;
    cVar4 = *(char *)((long)param_4 + 0xb);
    *(undefined4 *)((long)param_1 + 0x12e) = 0x7fffffff;
    uVar6 = *(undefined2 *)((long)param_4 + 9);
    *(undefined2 *)((long)param_1 + 0x132) = 0xffff;
    *(undefined1 *)((long)param_1 + 0x788) = 1;
    iVar7 = param_4[3];
    *(undefined4 *)((long)param_1 + 0x128) = 0;
    *(undefined2 *)((long)param_1 + 300) = 0;
    *(undefined2 *)((long)param_1 + 0x128) = uVar6;
    uVar5 = *(undefined1 *)((long)param_4 + 0xd);
    *(char *)((long)param_1 + 0x12d) = (char)iVar7;
    *(undefined2 *)((long)param_1 + 0x136) = uVar9;
    uVar16 = *(ulong *)(param_4 + 6);
    uVar10 = *(undefined8 *)(param_4 + 8);
    *(undefined1 *)((long)param_1 + 0x134) = uVar5;
    iVar7 = param_4[4];
    *(char *)((long)param_1 + 300) = cVar4;
    *(char *)((long)param_1 + 0x138) = (char)iVar7;
    *(ulong *)((long)param_1 + 0x148) = uVar16;
    *(undefined8 *)((long)param_1 + 0x150) = uVar10;
    if (((uint)(1 < uVar16) & (uint)(uVar17 >> 0x20)) == 0) {
      uVar13 = 0xff;
    }
    *(undefined1 *)((long)param_1 + 0x135) = uVar13;
    if (cVar4 == '\x01') {
      iVar7 = param_4[10];
      *(char *)((long)param_1 + 0x158) = (char)iVar7;
      if (((char)iVar7 == '\x01') && (uVar16 != 0)) {
        uVar9 = *(undefined2 *)((long)param_4 + 0x3a);
        *(undefined2 *)((long)param_1 + 0x15a) = *(undefined2 *)((long)param_4 + 0x2a);
        *(undefined2 *)((long)param_1 + 0x16a) = uVar9;
        if (1 < uVar16) {
          iVar7 = param_4[0xf];
          *(short *)((long)param_1 + 0x15c) = (short)param_4[0xb];
          *(short *)((long)param_1 + 0x16c) = (short)iVar7;
          if (uVar16 != 2) {
            uVar9 = *(undefined2 *)((long)param_4 + 0x3e);
            *(undefined2 *)((long)param_1 + 0x15e) = *(undefined2 *)((long)param_4 + 0x2e);
            *(undefined2 *)((long)param_1 + 0x16e) = uVar9;
            if (3 < uVar16) {
              iVar7 = param_4[0x10];
              *(short *)((long)param_1 + 0x160) = (short)param_4[0xc];
              *(short *)((long)param_1 + 0x170) = (short)iVar7;
              if (uVar16 != 4) {
                uVar9 = *(undefined2 *)((long)param_4 + 0x42);
                *(undefined2 *)((long)param_1 + 0x162) = *(undefined2 *)((long)param_4 + 0x32);
                *(undefined2 *)((long)param_1 + 0x172) = uVar9;
                if (5 < uVar16) {
                  iVar7 = param_4[0x11];
                  *(short *)((long)param_1 + 0x164) = (short)param_4[0xd];
                  *(short *)((long)param_1 + 0x174) = (short)iVar7;
                  if (uVar16 != 6) {
                    uVar9 = *(undefined2 *)((long)param_4 + 0x46);
                    *(undefined2 *)((long)param_1 + 0x166) = *(undefined2 *)((long)param_4 + 0x36);
                    *(undefined2 *)((long)param_1 + 0x176) = uVar9;
                    if (7 < uVar16) {
                      iVar7 = param_4[0x12];
                      *(short *)((long)param_1 + 0x168) = (short)param_4[0xe];
                      *(short *)((long)param_1 + 0x178) = (short)iVar7;
                      if (uVar16 != 8) goto LAB_008d5c84;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar17 = *(ulong *)(param_4 + 0x14);
      *(ulong *)((long)param_1 + 0x180) = uVar17;
      if (uVar17 != 0) {
        lVar11 = 0x487;
        lVar15 = 0x157;
        do {
          if (lVar11 == 0x784) goto LAB_008d5c84;
          puVar1 = (undefined1 *)((long)param_4 + lVar15);
          uVar13 = *puVar1;
          cVar4 = puVar1[0xff];
          *(undefined1 *)((long)param_1 + lVar15 + 0x31) = puVar1[-0xff];
          *(undefined1 *)((long)param_1 + lVar15 + 0x130) = uVar13;
          *(char *)((long)param_1 + lVar15 + 0x22f) = cVar4;
          if (cVar4 != '\0') {
            *(undefined1 *)((long)param_1 + lVar11 + -2) =
                 *(undefined1 *)((long)param_4 + lVar11 + -0x132);
            if (cVar4 != '\x01') {
              *(undefined1 *)((long)param_1 + lVar11 + -1) =
                   *(undefined1 *)((long)param_4 + lVar11 + -0x131);
              bVar14 = *(byte *)((long)param_1 + lVar15 + 0x22f);
              if ((2 < bVar14) &&
                 (*(undefined1 *)((long)param_1 + lVar11) =
                       *(undefined1 *)((long)param_4 + lVar11 + -0x130), bVar14 != 3))
              goto LAB_008d5c84;
            }
            uVar17 = *(ulong *)((long)param_1 + 0x180);
          }
          lVar11 = lVar11 + 3;
          uVar16 = lVar15 - 0x156;
          lVar15 = lVar15 + 1;
        } while (uVar16 < uVar17);
      }
    }
    bVar14 = *(byte *)(param_4 + 0x196);
    *(byte *)((long)param_1 + 0x139) = bVar14;
    if ((bVar14 != 0) &&
       (*(undefined1 *)((long)param_1 + 0x13a) = *(undefined1 *)((long)param_4 + 0x659), bVar14 != 1
       )) {
      *(undefined1 *)((long)param_1 + 0x13b) = *(undefined1 *)((long)param_4 + 0x65a);
      if ((2 < bVar14) &&
         (*(undefined1 *)((long)param_1 + 0x13c) = *(undefined1 *)((long)param_4 + 0x65b),
         bVar14 != 3)) {
LAB_008d5c84:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x8d5c88);
        (*pcVar8)();
      }
    }
    *(char *)((long)param_1 + 0x788) = (char)param_4[0x198];
  }
LAB_008d5d98:
  uVar2 = param_3[7];
  uVar17 = *(ulong *)(param_3 + 0x27);
  uVar12 = *(undefined8 *)(param_3 + 0x1e);
  uVar10 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x98) = param_3[6];
  uVar13 = *(undefined1 *)(param_3 + 8);
  *(undefined4 *)((long)param_1 + 0xa0) = uVar2;
  uVar5 = *(undefined1 *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + 0xa4) = uVar13;
  uVar13 = 0;
  if ((uVar17 & 0x100000000) != 0) {
    uVar13 = (undefined1)uVar17;
  }
  *(undefined1 *)((long)param_1 + 0xa8) = uVar13;
  cVar4 = *(char *)(param_3 + 0x49);
  *(undefined1 *)((long)param_1 + 0xc0) = uVar5;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *(undefined8 *)((long)param_1 + 0xb8) = uVar12;
  *(undefined8 *)((long)param_1 + 0xb0) = uVar10;
  *(short *)((long)param_1 + 0x9c) = (short)uVar2;
  *(short *)((long)param_1 + 0x9e) = (short)uVar3;
  if (cVar4 != '\x01') {
    local_98[0] = 0;
  }
  else {
    FUN_00659adc(local_98,param_3 + 0x38);
  }
  local_54 = cVar4 == '\x01';
  cVar4 = *(char *)((long)param_1 + 0x11c);
  if (cVar4 == local_54) {
    if (cVar4 != '\0') {
      FUN_00659b1c((long)param_1 + 0xd8,local_98);
    }
  }
  else if (cVar4 == '\0') {
    FUN_00659afc((long)param_1 + 0xd8,local_98);
    *(undefined1 *)((long)param_1 + 0x11c) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x11c) = 0;
  }
  uVar2 = param_3[0x4a];
  bVar14 = *(byte *)(param_3 + 10);
  *(short *)((long)param_1 + 0x120) = (short)uVar2;
  *(char *)((long)param_1 + 0x122) = (char)((uint)uVar2 >> 0x10);
  if (bVar14 - 1 < 0xfe) {
    uVar9 = FUN_00659d84(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 0xc));
    uVar12 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 0xe);
    *(undefined2 *)((long)param_1 + 200) = uVar9;
    uVar9 = FUN_00659d84(uVar12,uVar10);
    uVar13 = *(undefined1 *)(param_3 + 10);
    *(undefined2 *)((long)param_1 + 0xca) = uVar9;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
  }
  else {
    uVar13 = 0xff;
  }
  iVar7 = param_3[6];
  *(undefined1 *)((long)param_1 + 0xd4) = uVar13;
  if ((param_4 == (int *)0x0) || (*param_4 != 2)) {
    bVar14 = 1;
  }
  else {
    bVar14 = *(byte *)(param_4 + 2);
  }
  FUN_008d5f0c(param_2,param_1,bVar14 & 1);
  FUN_008d6064(param_2,param_4,param_5,iVar7 == 3,param_1);
  return;
}


// ===== 008d5f0c  FUN_008d5f0c =====

void FUN_008d5f0c(long param_1,long param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 uStack_11;
  
  if ((param_3 & 1) != 0) {
    *(ushort *)(param_1 + 0x3a8) = *(short *)(param_1 + 0x3a8) + 1U & 0x7fff;
  }
  iVar2 = *(int *)(param_2 + 0xac);
  if (iVar2 == 1) {
    if (*(char *)(param_2 + 0x790) != '\x01') goto LAB_008d6060;
    *(undefined2 *)(param_2 + 0x12a) = *(undefined2 *)(param_1 + 0x3a8);
    if (*(char *)(param_2 + 0x12e) == '\0') {
      bVar3 = *(char *)(param_1 + 0x3aa) + 1;
      *(byte *)(param_1 + 0x3aa) = bVar3;
      iVar2 = *(int *)(param_2 + 0xac);
    }
    else {
      if (*(char *)(param_2 + 0x12e) == -1) goto LAB_008d5fe0;
      bVar3 = *(byte *)(param_1 + 0x3aa);
      iVar2 = 1;
    }
    *(ushort *)(param_2 + 300) = (ushort)bVar3;
  }
  if (iVar2 == 2) {
    if (*(char *)(param_2 + 0x790) != '\x02') {
LAB_008d6060:
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    *(undefined2 *)(param_2 + 0x12e) = *(undefined2 *)(param_1 + 0x3a8);
    if ((*(byte *)(param_2 + 0x134) != 0xff) || (*(char *)(param_2 + 0x135) != -1)) {
      bVar3 = *(byte *)(param_1 + 0x3aa);
      if (((param_3 & 1) != 0) && (*(byte *)(param_2 + 0x134) - 0xff < 0xffffff02)) {
        bVar3 = bVar3 + 1;
        *(byte *)(param_1 + 0x3aa) = bVar3;
      }
      *(ushort *)(param_2 + 0x132) = (ushort)bVar3;
    }
  }
LAB_008d5fe0:
  if ((*(char *)(param_1 + 0x3c0) == '\x01') && (*(int *)(param_2 + 0xac) == 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x3a8);
    if ((ulong)*(byte *)(param_2 + 0x790) != 0xff) {
      (*(code *)(&PTR_FUN_00d3cc98)[*(byte *)(param_2 + 0x790)])(&uStack_11,param_2 + 0x128);
    }
    *(undefined1 *)(param_2 + 0x790) = 0xff;
    if (param_2 == -0x128) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined2 *)(param_2 + 0x128) = uVar1;
    *(undefined1 *)(param_2 + 0x790) = 4;
  }
  return;
}


// ===== 008d6064  FUN_008d6064 =====

void FUN_008d6064(long param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_d8 [144];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((param_2 == 0) || (*(char *)(param_2 + 0x738) != '\x01')) ||
     (*(ulong *)(param_2 + 0x6d0) < 2)) {
    iVar1 = *(int *)(param_5 + 0xac);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
          FUN_008d6484(param_1,param_3,param_4 & 1,param_5);
          return;
        }
        goto LAB_008d629c;
      }
      if ((iVar1 == 1) && (param_2 != 0)) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
          FUN_008d6678(param_1,param_2 + 8,param_3,param_4 & 1,param_5);
          return;
        }
        goto LAB_008d629c;
      }
    }
    else if (iVar1 == 2) {
      if (param_2 != 0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
          FUN_008d6908(param_1,param_2,param_3,param_5);
          return;
        }
        goto LAB_008d629c;
      }
    }
    else if ((iVar1 == 4) && (param_2 != 0)) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
        FUN_008d71bc(param_1,param_2 + 8,param_3,param_4 & 1,param_5);
        return;
      }
      goto LAB_008d629c;
    }
  }
  else {
    if ((param_4 & 1) != 0) {
      FUN_0090b354(param_1 + 0xe8,param_2 + 0x718);
      if ((*(byte *)(param_2 + 0x738) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
    }
    FUN_008d62c8(auStack_d8,param_1,param_2 + 0x668,param_3);
    if (*(char *)(param_5 + 0x90) == '\x01') {
      FUN_008d8828(param_5,auStack_d8);
    }
    else {
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007dc984(param_5,auStack_d8);
      *(undefined1 *)(param_5 + 0x90) = 1;
    }
    FUN_007dca64(auStack_d8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_008d629c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008d62a0  FUN_008d62a0 =====

undefined4 FUN_008d62a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3a4);
}


// ===== 008d62ac  FUN_008d62ac =====

void FUN_008d62ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x3b0);
  uVar1 = *(undefined8 *)(param_2 + 0x3a8);
  param_1[2] = *(undefined8 *)(param_2 + 0x3b8);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}


// ===== 008d62c8  FUN_008d62c8 =====

void FUN_008d62c8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  pbVar5 = (byte *)(param_1 + 8);
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)pbVar5 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007dc964(param_1);
  lVar3 = param_3[0xe];
  uVar4 = param_3[0xd];
  *param_1 = param_4;
  plVar1 = param_3 + 0xe;
  if ((uVar4 & 1) != 0) {
    plVar1 = (long *)lVar3;
  }
  lVar3 = 0;
  if (uVar4 >> 1 != 0) {
    lVar3 = (long)plVar1;
  }
  FUN_0090ba2c(&local_88,param_2,param_4,lVar3);
  if (pbVar5 == &local_88) {
    if ((local_88 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    if ((*pbVar5 & 1) != 0) {
      operator_delete((void *)param_1[9]);
    }
    param_1[8] = CONCAT71(uStack_87,local_88);
    param_1[10] = uStack_78;
    param_1[9] = local_80;
    param_1[0xc] = uStack_68;
    param_1[0xb] = uStack_70;
    param_1[0xd] = local_60;
  }
  FUN_0090b51c(&local_88,param_2 + 0xe8,param_4,param_3 + 0x16);
  if ((byte *)(param_1 + 0xe) == &local_88) {
    if ((local_88 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
      operator_delete((void *)param_1[0xf]);
    }
    param_1[0xe] = CONCAT71(uStack_87,local_88);
    param_1[0x10] = uStack_78;
    param_1[0xf] = local_80;
  }
  param_1[1] = *param_3;
  if (param_1 + 2 != param_3 + 1) {
    plVar1 = param_3 + 2;
    if ((param_3[1] & 1) != 0) {
      plVar1 = (long *)param_3[2];
    }
    FUN_0060adc4(param_1 + 2,plVar1,(long)(param_3[1] << 1) >> 2);
  }
  param_1[0x11] = param_3[0x19];
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008d6484  FUN_008d6484 =====

void FUN_008d6484(long param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int local_3c;
  ulong local_38;
  
  if (*(char *)(param_4 + 0x12) == '\x01') {
    FUN_007dca64(param_4);
    *(undefined1 *)(param_4 + 0x12) = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    FUN_007dc964(param_4);
    *(undefined1 *)(param_4 + 0x12) = 1;
    puVar3 = param_4 + 2;
    *param_4 = param_2;
    local_38 = CONCAT44(local_38._4_4_,2);
    if ((*puVar3 & 1) == 0) {
      puVar6 = param_4 + 3;
      uVar7 = 10;
    }
    else {
      puVar6 = (undefined8 *)param_4[3];
      uVar7 = param_4[4];
    }
    uVar4 = *puVar3 >> 1;
    if (uVar4 == uVar7) {
      FUN_008ad380(puVar3,&local_38);
    }
    else {
      puVar1 = (undefined4 *)((long)puVar6 + uVar4 * 4);
      if (puVar1 == (undefined4 *)0x0) goto LAB_008d6640;
      *puVar1 = 2;
      *puVar3 = *puVar3 + 2;
    }
    if ((param_3 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x130);
      puVar3 = param_4 + 0xe;
      local_3c = (int)param_2 - (int)uVar7;
      if ((*puVar3 & 1) == 0) {
        puVar6 = param_4 + 0xf;
        uVar4 = 4;
      }
      else {
        puVar6 = (undefined8 *)param_4[0xf];
        uVar4 = param_4[0x10];
      }
      uVar5 = *puVar3 >> 1;
      local_38 = uVar7;
      if (uVar5 == uVar4) {
        FUN_007d577c(puVar3,&local_3c);
      }
      else {
        piVar2 = (int *)((long)puVar6 + uVar5 * 4);
        if (piVar2 == (int *)0x0) goto LAB_008d6640;
        *piVar2 = local_3c;
        *puVar3 = *puVar3 + 2;
      }
      puVar3 = param_4 + 8;
      if ((*puVar3 & 1) == 0) {
        puVar6 = param_4 + 9;
        uVar4 = 5;
      }
      else {
        puVar6 = (undefined8 *)param_4[9];
        uVar4 = param_4[10];
      }
      uVar5 = *puVar3 >> 1;
      if (uVar5 == uVar4) {
        FUN_008d9300(puVar3,&local_38);
      }
      else {
        if (puVar6 + uVar5 == (ulong *)0x0) goto LAB_008d6640;
        puVar6[uVar5] = uVar7;
        *puVar3 = *puVar3 + 2;
      }
    }
    else {
      local_38 = local_38 & 0xffffffff00000000;
      puVar3 = param_4 + 0xe;
      if ((*puVar3 & 1) == 0) {
        puVar6 = param_4 + 0xf;
        uVar7 = 4;
      }
      else {
        puVar6 = (undefined8 *)param_4[0xf];
        uVar7 = param_4[0x10];
      }
      uVar4 = *puVar3 >> 1;
      if (uVar4 == uVar7) {
        FUN_007d577c(puVar3,&local_38);
      }
      else {
        puVar1 = (undefined4 *)((long)puVar6 + uVar4 * 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_008d6640;
        *puVar1 = 0;
        *puVar3 = *puVar3 + 2;
      }
      *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x138) = 0xffffffffffffffff;
    }
    *(undefined8 *)(param_1 + 0x130) = param_2;
    return;
  }
LAB_008d6640:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008d6678  FUN_008d6678 =====

void FUN_008d6678(long param_1,long param_2,undefined8 param_3,uint param_4,undefined8 *param_5)

{
  size_t __n;
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *__s;
  undefined8 *puVar7;
  int local_44;
  
  if (*(char *)(param_5 + 0xf2) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  bVar2 = *(byte *)((long)param_5 + 0x12e);
  uVar1 = 0;
  if (bVar2 != 0xff) {
    uVar1 = (uint)bVar2;
  }
  if (7 < uVar1) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_payload_params.cc",0x10aa,
                   "Temporal and/or spatial index is too high to be used with generic frame descriptor."
                  );
      return;
    }
    return;
  }
  if (*(char *)(param_5 + 0x12) == '\x01') {
    FUN_007dca64(param_5);
    *(undefined1 *)(param_5 + 0x12) = 0;
  }
  if (param_5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_007dc964(param_5);
  *param_5 = param_3;
  *(undefined1 *)(param_5 + 0x12) = 1;
  *(undefined4 *)(param_5 + 1) = 0;
  *(uint *)((long)param_5 + 0xc) = uVar1;
  FUN_007d54c8(param_5 + 2,0,4);
  uVar4 = param_5[2];
  puVar7 = param_5 + 3;
  __s = param_5 + 3;
  if ((uVar4 & 1) != 0) {
    __s = (undefined8 *)*puVar7;
  }
  if (uVar1 != 0) {
    __n = (ulong)((uint)bVar2 - (uint)(bVar2 != 0)) * 4 + 4;
    memset(__s,0,__n);
    uVar4 = param_5[2];
    __s = (undefined8 *)((long)__s + __n);
  }
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)*puVar7;
  }
  uVar5 = (long)puVar7 + ((uVar4 >> 1) * 4 - (long)__s);
  uVar4 = (long)uVar5 >> 2;
  if (0 < (long)uVar4) {
    if (7 < uVar4) {
      puVar7 = __s + 2;
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      do {
        uVar6 = uVar6 - 8;
        puVar7[-1] = 0x200000002;
        puVar7[-2] = 0x200000002;
        puVar7[1] = 0x200000002;
        *puVar7 = 0x200000002;
        puVar7 = puVar7 + 4;
      } while (uVar6 != 0);
      bVar3 = uVar4 == (uVar4 & 0x7ffffffffffffff8);
      __s = (undefined8 *)((long)__s + (uVar4 & 0x7ffffffffffffff8) * 4);
      uVar4 = uVar5 >> 2 & 7;
      if (bVar3) goto LAB_008d684c;
    }
    *(undefined4 *)__s = 2;
    if ((1 < uVar4) && (*(undefined4 *)((long)__s + 4) = 2, uVar4 != 2)) {
      *(undefined4 *)(__s + 1) = 2;
      if ((3 < uVar4) &&
         (((*(undefined4 *)((long)__s + 0xc) = 2, uVar4 != 4 &&
           (*(undefined4 *)(__s + 2) = 2, 5 < uVar4)) &&
          (*(undefined4 *)((long)__s + 0x14) = 2, uVar4 == 7)))) {
        *(undefined4 *)(__s + 3) = 2;
      }
    }
  }
LAB_008d684c:
  if (*(char *)(param_2 + 4) == '\x01') {
    FUN_008d7d6c(param_1,param_2,param_3,param_4 & 1,0,param_5);
  }
  else {
    FUN_008d80ec(param_1);
  }
  if (((param_4 & 1) == 0) && (-1 < *(long *)(param_1 + 0x348))) {
    local_44 = (int)param_3 - (int)*(long *)(param_1 + 0x348);
  }
  else {
    local_44 = 0;
  }
  FUN_007d51b0(param_5 + 0xe,&local_44,1);
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x348) = param_3;
  }
  return;
}


// ===== 008d6908  FUN_008d6908 =====

/* WARNING: Removing unreachable block (ram,0x008d6a00) */
/* WARNING: Removing unreachable block (ram,0x008d6a08) */

void FUN_008d6908(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 uStack_b9;
  char *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  char *local_a0;
  char **ppcStack_98;
  ulong local_90;
  char **ppcStack_88;
  char *local_80;
  ulong *puStack_78;
  ulong local_70;
  char **ppcStack_68;
  
  if ((char)param_4[0xf2] != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  iVar4 = (int)param_4[0x29];
  uVar2 = 0;
  if (*(byte *)((long)param_4 + 0x135) != 0xff) {
    uVar2 = (uint)*(byte *)((long)param_4 + 0x135);
  }
  uVar15 = (ulong)uVar2;
  iVar6 = iVar4 + -1;
  uVar3 = 0;
  if (*(byte *)((long)param_4 + 0x134) != 0xff) {
    uVar3 = (uint)*(byte *)((long)param_4 + 0x134);
  }
  uVar16 = (uint)param_4[0x2a];
  if ((((uVar3 < 4) && ((int)uVar16 <= (int)uVar2)) && (iVar6 < 3)) && ((int)uVar2 <= iVar6)) {
    if ((char)param_4[0x12] == '\x01') {
      FUN_007dca64(param_4);
      *(undefined1 *)(param_4 + 0x12) = 0;
    }
    if (param_4 == (long *)0x0) {
LAB_008d7168:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007dc964(param_4);
    *param_4 = param_3;
    *(undefined1 *)(param_4 + 0x12) = 1;
    *(uint *)(param_4 + 1) = uVar2;
    *(uint *)((long)param_4 + 0xc) = uVar3;
    FUN_00850e90(param_4 + 2,0xc);
    uVar19 = 0;
    plVar8 = param_4 + 3;
    do {
      uVar17 = 0;
      if ((uVar2 <= uVar19) && (uVar3 == 0)) {
        if (uVar2 == uVar19) {
          uVar17 = 2;
        }
        else if ((*(byte *)((long)param_4 + 0x12d) & 1) == 0) {
          uVar17 = 2;
          if ((char)param_4[0x25] != '\0') {
            uVar17 = 3;
          }
        }
        else {
          uVar17 = 0;
        }
      }
      uVar12 = param_4[2];
      local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar17);
      uVar13 = 10;
      if ((uVar12 & 1) != 0) {
        uVar13 = param_4[4];
      }
      if (uVar12 >> 1 == uVar13) {
        FUN_00851004(param_4 + 2,&local_b8);
      }
      else {
        plVar10 = plVar8;
        if ((uVar12 & 1) != 0) {
          plVar10 = (long *)*plVar8;
        }
        puVar1 = (undefined4 *)((long)plVar10 + (uVar12 >> 1) * 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_008d7168;
        *puVar1 = uVar17;
        param_4[2] = param_4[2] + 2;
      }
      uVar18 = 2;
      uVar17 = 0;
      if ((uVar2 <= uVar19) && (uVar3 < 2)) {
        if (uVar2 == uVar19) {
          uVar17 = 2;
          if ((uVar3 != 1) && ((*(byte *)((long)param_4 + 0x136) & 1) == 0)) {
LAB_008d6ab0:
            uVar17 = uVar18;
            if ((char)param_4[0x25] != '\0') {
              uVar17 = 3;
            }
          }
        }
        else {
          if ((*(byte *)((long)param_4 + 0x12d) & 1) == 0) goto LAB_008d6ab0;
          uVar17 = 0;
        }
      }
      uVar12 = param_4[2];
      local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar17);
      uVar13 = 10;
      if ((uVar12 & 1) != 0) {
        uVar13 = param_4[4];
      }
      if (uVar12 >> 1 == uVar13) {
        FUN_00851004(param_4 + 2,&local_b8);
      }
      else {
        plVar10 = plVar8;
        if ((uVar12 & 1) != 0) {
          plVar10 = (long *)*plVar8;
        }
        puVar1 = (undefined4 *)((long)plVar10 + (uVar12 >> 1) * 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_008d7168;
        *puVar1 = uVar17;
        param_4[2] = param_4[2] + 2;
      }
      uVar17 = 0;
      if ((uVar2 <= uVar19) && (uVar3 < 3)) {
        if (uVar2 == uVar19) {
          uVar17 = 2;
          if ((uVar3 != 2) && ((*(byte *)((long)param_4 + 0x136) & 1) == 0)) {
LAB_008d6b44:
            uVar17 = uVar18;
            if ((char)param_4[0x25] != '\0') {
              uVar17 = 3;
            }
          }
        }
        else {
          if ((*(byte *)((long)param_4 + 0x12d) & 1) == 0) goto LAB_008d6b44;
          uVar17 = 0;
        }
      }
      uVar12 = param_4[2];
      local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar17);
      uVar13 = 10;
      if ((uVar12 & 1) != 0) {
        uVar13 = param_4[4];
      }
      if (uVar12 >> 1 == uVar13) {
        FUN_00851004(param_4 + 2,&local_b8);
      }
      else {
        plVar10 = plVar8;
        if ((uVar12 & 1) != 0) {
          plVar10 = (long *)*plVar8;
        }
        puVar1 = (undefined4 *)((long)plVar10 + (uVar12 >> 1) * 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_008d7168;
        *puVar1 = uVar17;
        param_4[2] = param_4[2] + 2;
      }
      uVar17 = 0;
      if ((uVar2 <= uVar19) && (uVar3 < 4)) {
        if (uVar2 == uVar19) {
          uVar17 = 2;
          if ((uVar3 != 3) && ((*(byte *)((long)param_4 + 0x136) & 1) == 0)) {
LAB_008d6bd8:
            uVar17 = uVar18;
            if ((char)param_4[0x25] != '\0') {
              uVar17 = 3;
            }
          }
        }
        else {
          if ((*(byte *)((long)param_4 + 0x12d) & 1) == 0) goto LAB_008d6bd8;
          uVar17 = 0;
        }
      }
      uVar12 = param_4[2];
      local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar17);
      uVar13 = 10;
      if ((uVar12 & 1) != 0) {
        uVar13 = param_4[4];
      }
      if (uVar12 >> 1 == uVar13) {
        FUN_00851004(param_4 + 2,&local_b8);
      }
      else {
        plVar10 = plVar8;
        if ((uVar12 & 1) != 0) {
          plVar10 = (long *)*plVar8;
        }
        puVar1 = (undefined4 *)((long)plVar10 + (uVar12 >> 1) * 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_008d7168;
        *puVar1 = uVar17;
        param_4[2] = param_4[2] + 2;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 3);
    if (*(long *)(param_1 + 0x330) == *(long *)(param_1 + 0x338)) {
      FUN_008d8344(param_1 + 0x330,0x80);
    }
    if (*(char *)((long)param_4 + 0x129) == '\x01') {
      if ((*(char *)((long)param_4 + 0x137) == '\x01') && (uVar2 != 0)) {
        sVar5 = *(short *)((long)param_4 + 0x12e);
        uVar13 = (ulong)(short)(sVar5 - (sVar5 + ((byte)(sVar5 >> 0xf) & 0x7f) & 0xff80));
        if ((ulong)(*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 6) <= uVar13)
        goto LAB_008d7194;
        if (8 < uVar2) goto LAB_008d717c;
        uVar9 = param_4[8];
        uVar12 = 5;
        if ((uVar9 & 1) != 0) {
          uVar12 = param_4[10];
        }
        if (uVar9 >> 1 == uVar12) {
          FUN_008d9300(param_4 + 8);
        }
        else {
          plVar8 = param_4 + 9;
          if ((uVar9 & 1) != 0) {
            plVar8 = (long *)param_4[9];
          }
          if (plVar8 + (uVar9 >> 1) == (undefined8 *)0x0) goto LAB_008d7168;
          plVar8[uVar9 >> 1] =
               *(undefined8 *)(*(long *)(param_1 + 0x330) + uVar13 * 0x40 + (ulong)uVar2 * 8 + -8);
          param_4[8] = param_4[8] + 2;
        }
      }
      if (((char)param_4[0x25] == '\x01') && (*(char *)((long)param_4 + 0x139) != '\0')) {
        uVar13 = 0;
        do {
          if (uVar13 == 3) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x8d71b8);
            (*pcVar7)();
          }
          uVar12 = (ulong)((uint)*(ushort *)((long)param_4 + 0x12e) -
                           (uint)*(byte *)((long)param_4 + uVar13 + 0x13a) & 0x7f);
          if ((ulong)(*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 6) <= uVar12)
          goto LAB_008d7194;
          if (7 < uVar2) goto LAB_008d717c;
          uVar14 = param_4[8];
          uVar9 = 5;
          if ((uVar14 & 1) != 0) {
            uVar9 = param_4[10];
          }
          if (uVar14 >> 1 == uVar9) {
            FUN_008d9300(param_4 + 8);
          }
          else {
            plVar8 = param_4 + 9;
            if ((uVar14 & 1) != 0) {
              plVar8 = (long *)param_4[9];
            }
            if (plVar8 + (uVar14 >> 1) == (undefined8 *)0x0) goto LAB_008d7168;
            plVar8[uVar14 >> 1] =
                 *(undefined8 *)(*(long *)(param_1 + 0x330) + uVar12 * 0x40 + uVar15 * 8);
            param_4[8] = param_4[8] + 2;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(byte *)((long)param_4 + 0x139));
      }
      sVar5 = *(short *)((long)param_4 + 0x12e);
      uVar13 = (ulong)(short)(sVar5 - (sVar5 + ((byte)(sVar5 >> 0xf) & 0x7f) & 0xff80));
      if ((ulong)(*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 6) <= uVar13) {
LAB_008d7194:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (7 < uVar2) goto LAB_008d717c;
      *(long *)(*(long *)(param_1 + 0x330) + uVar13 * 0x40 + uVar15 * 8) = param_3;
    }
    else {
      if (uVar3 != 0 || uVar2 != 0) {
        if ((char)param_4[0x12] != '\x01') {
          return;
        }
        FUN_007dca64(param_4);
        *(undefined1 *)(param_4 + 0x12) = 0;
        return;
      }
      plVar10 = *(long **)(param_1 + 0x338);
      plVar8 = *(long **)(param_1 + 0x330);
      if ((char)param_4[0x25] == '\x01') {
        if (plVar10 == plVar8) goto LAB_008d7194;
        FUN_008d928c(param_4 + 8);
        plVar10 = *(long **)(param_1 + 0x338);
        plVar8 = *(long **)(param_1 + 0x330);
      }
      if (plVar10 == plVar8) goto LAB_008d7194;
      *plVar8 = param_3;
    }
    param_4[0x11] =
         (ulong)(uint)(-0x10 << (ulong)((iVar4 - 1U & 7) << 2) ^ -1 << (ulong)((uVar16 & 7) << 2));
    if (((*(byte *)(param_4 + 0x25) & 1) == 0) && ((*(byte *)((long)param_4 + 0x137) & 1) == 0)) {
      memset((void *)(param_1 + uVar15 * 8 + 0x348),0xff,(ulong)(iVar6 - uVar2) * 8 + 8);
    }
    local_b8 = (char *)((ulong)local_b8 & 0xffffffff00000000);
    FUN_008d9490(param_4 + 0xe,&local_b8,3);
    uVar13 = (ulong)(iVar4 - 1U);
    if ((int)uVar16 <= (int)(iVar4 - 1U)) {
      uVar12 = (ulong)(int)uVar16;
      do {
        if (7 < uVar12) goto LAB_008d717c;
        lVar11 = *(long *)(param_1 + 0x348 + uVar12 * 8);
        if (lVar11 == -1) {
          uVar9 = param_4[0xe];
          if (uVar9 >> 1 <= uVar12) goto LAB_008d7190;
          uVar17 = 0;
        }
        else {
          lVar11 = param_3 - lVar11;
          if (0xff < lVar11) {
            uVar9 = FUN_004249b0();
            if ((uVar9 & 1) == 0) {
              FUN_00623bb0(&DAT_002254eb,"../../call/rtp_payload_params.cc",0x1613,
                           "Too many frames since last VP9 T0 frame for spatial layer #",
                           uVar12 & 0xffffffff," at frame#",param_3);
            }
            lVar11 = 0;
            *(undefined8 *)(param_1 + 0x348 + uVar12 * 8) = 0xffffffffffffffff;
          }
          uVar17 = (undefined4)lVar11;
          uVar9 = param_4[0xe];
          if (uVar9 >> 1 <= uVar12) {
LAB_008d7190:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x8d7194);
            (*pcVar7)();
          }
        }
        plVar8 = param_4 + 0xf;
        if ((uVar9 & 1) != 0) {
          plVar8 = (long *)param_4[0xf];
        }
        *(undefined4 *)((long)plVar8 + uVar12 * 4) = uVar17;
        uVar12 = uVar12 + 1;
      } while (iVar4 != (int)uVar12);
    }
    if (uVar3 == 0) {
      if (7 < uVar2) {
LAB_008d717c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      param_1 = param_1 + 0x348;
      *(long *)(param_1 + uVar15 * 8) = param_3;
      if (((*(byte *)((long)param_4 + 0x12d) & 1) == 0) && ((int)uVar2 < (int)(iVar4 - 1U))) {
        if (uVar2 == 7) goto LAB_008d717c;
        uVar12 = uVar15 + 1;
        *(long *)(param_1 + uVar12 * 8) = param_3;
        if (uVar12 != uVar13) {
          if (uVar12 == 7) goto LAB_008d717c;
          uVar12 = uVar15 + 2;
          *(long *)(param_1 + uVar12 * 8) = param_3;
          if (uVar12 != uVar13) {
            if (uVar12 == 7) goto LAB_008d717c;
            uVar12 = uVar15 + 3;
            *(long *)(param_1 + uVar12 * 8) = param_3;
            if (uVar12 != uVar13) {
              if (uVar12 == 7) goto LAB_008d717c;
              uVar12 = uVar15 + 4;
              *(long *)(param_1 + uVar12 * 8) = param_3;
              if (uVar12 != uVar13) {
                if (uVar12 == 7) goto LAB_008d717c;
                uVar12 = uVar15 + 5;
                *(long *)(param_1 + uVar12 * 8) = param_3;
                if (uVar12 != uVar13) {
                  if (uVar12 == 7) goto LAB_008d717c;
                  uVar12 = uVar15 + 6;
                  *(long *)(param_1 + uVar12 * 8) = param_3;
                  if (uVar12 != uVar13) {
                    if (uVar12 == 7) goto LAB_008d717c;
                    *(long *)(param_1 + (uVar15 + 7) * 8) = param_3;
                    if (uVar15 + 7 != uVar13) {
                      if (uVar2 == 0) goto LAB_008d717c;
                      *(long *)(param_1 + uVar15 * 8 + 0x40) = param_3;
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
  else {
    uVar13 = FUN_004249b0();
    if ((uVar13 & 1) == 0) {
      local_b8 = "../../call/rtp_payload_params.cc";
      uStack_b0 = 0x12bb;
      ppcStack_98 = &local_b8;
      local_a0 = "Inconsistent layer id sid=";
      ppcStack_88 = &local_a0;
      local_a8 = &uStack_b9;
      puStack_78 = &local_90;
      local_80 = ",tid=";
      ppcStack_68 = &local_80;
      local_90 = uVar15;
      local_70 = (ulong)uVar3;
      FUN_00623bb0(&DAT_002254e0,"../../call/rtp_payload_params.cc",0x12bb,
                   "Inconsistent layer id sid=",uVar15,",tid=",(ulong)uVar3,
                   " in VP9 header. Active spatial ids: [",uVar16,&DAT_001ea264,iVar6,&DAT_0019fa9e)
      ;
    }
  }
  return;
}


// ===== 008d71bc  FUN_008d71bc =====

void FUN_008d71bc(long param_1,long param_2,long param_3,ulong param_4,long *param_5)

{
  size_t __n;
  uint uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_48;
  
  bVar3 = *(byte *)(param_2 + 4);
  uVar1 = 0;
  if (bVar3 != 0xff) {
    uVar1 = (uint)bVar3;
  }
  if (7 < uVar1) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_payload_params.cc",0xe8a,
                 "Temporal and/or spatial index is too high to be used with generic frame descriptor."
                );
    return;
  }
  if ((char)param_5[0x12] == '\x01') {
    FUN_007dca64(param_5);
    *(undefined1 *)(param_5 + 0x12) = 0;
  }
  if (param_5 == (long *)0x0) goto LAB_008d7548;
  FUN_007dc964(param_5);
  *param_5 = param_3;
  *(undefined1 *)(param_5 + 0x12) = 1;
  *(uint *)((long)param_5 + 0xc) = uVar1;
  FUN_007d54c8(param_5 + 2,0,4);
  uVar5 = param_5[2];
  plVar10 = param_5 + 3;
  plVar9 = param_5 + 3;
  if ((uVar5 & 1) != 0) {
    plVar9 = (long *)*plVar10;
  }
  if (uVar1 != 0) {
    __n = (ulong)((uint)bVar3 - (uint)(bVar3 != 0)) * 4 + 4;
    memset(plVar9,0,__n);
    uVar5 = param_5[2];
    plVar9 = (long *)((long)plVar9 + __n);
  }
  if ((uVar5 & 1) != 0) {
    plVar10 = (long *)*plVar10;
  }
  uVar7 = (long)plVar10 + ((uVar5 >> 1) * 4 - (long)plVar9);
  uVar5 = (long)uVar7 >> 2;
  if (0 < (long)uVar5) {
    if (7 < uVar5) {
      plVar10 = plVar9 + 2;
      uVar8 = uVar5 & 0x7ffffffffffffff8;
      do {
        uVar8 = uVar8 - 8;
        plVar10[-1] = 0x200000002;
        plVar10[-2] = 0x200000002;
        plVar10[1] = 0x200000002;
        *plVar10 = 0x200000002;
        plVar10 = plVar10 + 4;
      } while (uVar8 != 0);
      bVar4 = uVar5 == (uVar5 & 0x7ffffffffffffff8);
      plVar9 = (long *)((long)plVar9 + (uVar5 & 0x7ffffffffffffff8) * 4);
      uVar5 = uVar7 >> 2 & 7;
      if (bVar4) goto LAB_008d7384;
    }
    *(undefined4 *)plVar9 = 2;
    if ((1 < uVar5) && (*(undefined4 *)((long)plVar9 + 4) = 2, uVar5 != 2)) {
      *(undefined4 *)(plVar9 + 1) = 2;
      if ((3 < uVar5) &&
         (((*(undefined4 *)((long)plVar9 + 0xc) = 2, uVar5 != 4 &&
           (*(undefined4 *)(plVar9 + 2) = 2, 5 < uVar5)) &&
          (*(undefined4 *)((long)plVar9 + 0x14) = 2, uVar5 == 7)))) {
        *(undefined4 *)(plVar9 + 3) = 2;
      }
    }
  }
LAB_008d7384:
  if ((param_4 & 1) == 0) {
    iVar2 = 0;
    if (-1 < *(long *)(param_1 + 0x130)) {
      iVar2 = (int)param_3 - (int)*(long *)(param_1 + 0x130);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar2);
    FUN_007d51b0(param_5 + 0xe,&local_48,1);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      uVar5 = (ulong)(uVar1 + 1);
      plVar10 = (long *)(param_1 + 0x130);
      do {
        local_48 = *plVar10;
        if (local_48 != -1) {
          if ((param_5[8] & 1U) == 0) {
            plVar9 = param_5 + 9;
            uVar7 = 5;
          }
          else {
            plVar9 = (long *)param_5[9];
            uVar7 = param_5[10];
          }
          uVar8 = (ulong)param_5[8] >> 1;
          if (uVar8 == uVar7) {
            FUN_008d9300(param_5 + 8,&local_48);
          }
          else {
            if (plVar9 + uVar8 == (long *)0x0) goto LAB_008d7548;
            plVar9[uVar8] = local_48;
            param_5[8] = param_5[8] + 2;
          }
        }
        uVar5 = uVar5 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar5 != 0);
    }
    else {
      local_48 = *(long *)(param_1 + 0x130);
      if (*(long *)(param_1 + 0x138) < local_48) {
        *(undefined8 *)(param_1 + 0x138) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x140) < local_48) {
        *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x148) < local_48) {
        *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x150) < local_48) {
        *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x158) < local_48) {
        *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x160) < local_48) {
        *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
      }
      if (*(long *)(param_1 + 0x168) < local_48) {
        *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
      }
      puVar6 = (ulong *)(param_5 + 8);
      if ((*puVar6 & 1) == 0) {
        plVar10 = param_5 + 9;
        uVar5 = 5;
      }
      else {
        plVar10 = (long *)param_5[9];
        uVar5 = param_5[10];
      }
      uVar7 = *puVar6 >> 1;
      if (uVar7 == uVar5) {
        FUN_008d9300(puVar6,&local_48);
      }
      else {
        if (plVar10 + uVar7 == (long *)0x0) {
LAB_008d7548:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar10[uVar7] = local_48;
        *puVar6 = *puVar6 + 2;
      }
    }
    ((long *)(param_1 + 0x130))[uVar1] = param_3;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    FUN_007d51b0(param_5 + 0xe,&local_48,1);
    *(undefined8 *)(param_1 + 0x138) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
    *(long *)(param_1 + 0x130 + (ulong)uVar1 * 8) = param_3;
  }
  return;
}


// ===== 008d7568  FUN_008d7568 =====

void FUN_008d7568(ulong *param_1,long param_2,int *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint local_f0;
  uint uStack_ec;
  ulong local_e8;
  undefined4 local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (param_3 == (int *)0x0) {
LAB_008d77d4:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar3 = *param_3;
    if (iVar3 < 3) {
      if (iVar3 != 0) {
        if (iVar3 != 1) {
          param_1[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          *param_1 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[5] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[7] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[6] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0xd] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0xc] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0xf] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0xe] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0xb] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[10] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          param_1[0x10] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          puVar14 = param_1 + 8;
          param_1[9] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          *puVar14 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
          FUN_008d78dc(&local_e8,3,4);
          *param_1 = local_e8;
          *(undefined4 *)(param_1 + 1) = local_e0;
          param_1[2] = local_d8;
          param_1[4] = uStack_c8;
          param_1[3] = local_d0;
          param_1[6] = uStack_b8;
          param_1[5] = uStack_c0;
          param_1[7] = local_b0;
          *puVar14 = local_a8;
          param_1[0xf] = local_70;
          cVar4 = *(char *)((long)param_3 + 0xb);
          param_1[10] = uStack_98;
          param_1[9] = local_a0;
          param_1[0xc] = uStack_88;
          param_1[0xb] = uStack_90;
          local_d8 = 0;
          local_a8 = 0;
          param_1[0xe] = uStack_78;
          param_1[0xd] = local_80;
          *(undefined1 *)(param_1 + 0x10) = 1;
          if ((cVar4 == '\x01') && ((char)param_3[10] == '\x01')) {
            local_e8 = 0;
            if (*(long *)(param_3 + 6) != 0) {
              uVar12 = 0;
              uVar18 = 0;
              uVar17 = 0;
              uVar15 = 0;
              uVar13 = 0;
              puVar10 = param_1 + 9;
              puVar16 = (ushort *)((long)param_3 + 0x3a);
              do {
                if (uVar17 == 8) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x8d78dc);
                  (*pcVar7)();
                }
                uVar5 = *puVar16;
                local_f0 = (uint)puVar16[-8];
                uStack_ec = (uint)uVar5;
                if (((local_f0 != 0) && (uStack_ec != 0)) &&
                   (uVar18 = (ulong)CONCAT24(uVar5,local_f0), local_e8 = uVar18, uVar12 = uVar5,
                   uVar15 == 0 || uVar13 == 0)) {
                  uVar13 = (uint)uVar5;
                  uVar15 = local_f0;
                }
                if ((param_1[0x10] & 1) == 0) goto LAB_008d78ac;
                uVar9 = param_1[8];
                uVar1 = 4;
                if ((uVar9 & 1) != 0) {
                  uVar1 = param_1[10];
                }
                if (uVar9 >> 1 == uVar1) {
                  FUN_008d8de4(puVar14,&local_f0);
                }
                else {
                  puVar2 = puVar10;
                  if ((uVar9 & 1) != 0) {
                    puVar2 = (ulong *)*puVar10;
                  }
                  if (puVar2 + (uVar9 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                              );
                  }
                  puVar2[uVar9 >> 1] = (ulong)CONCAT24(uVar5,local_f0);
                  *puVar14 = *puVar14 + 2;
                }
                uVar17 = uVar17 + 1;
                puVar16 = puVar16 + 1;
              } while (uVar17 < *(ulong *)(param_3 + 6));
              if (((int)uVar18 != 0) && (uVar12 != 0)) {
                if (((param_1[0x10] & 1) != 0) &&
                   (FUN_008d8f74(puVar14,&local_e8,3), (param_1[0x10] & 1) != 0)) {
                  if ((*puVar14 & 1) != 0) {
                    puVar10 = (ulong *)*puVar10;
                  }
                  uVar17 = *puVar14 & 0x3ffffffffffffffe;
                  lVar11 = uVar17 << 2;
                  if (uVar17 != 0) {
                    do {
                      if (((int)*puVar10 < 1) || (*(int *)((long)puVar10 + 4) < 1)) {
                        *puVar10 = CONCAT44(uVar13,uVar15);
                      }
                      lVar11 = lVar11 + -8;
                      puVar10 = puVar10 + 1;
                    } while (lVar11 != 0);
                  }
                  goto LAB_008d77dc;
                }
                goto LAB_008d78ac;
              }
            }
            if ((param_1[0x10] & 1) == 0) {
LAB_008d78ac:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
            *puVar14 = *puVar14 & 1;
          }
          goto LAB_008d77dc;
        }
        goto LAB_008d7754;
      }
      if (*(char *)(param_2 + 0x3c1) != '\x01') goto LAB_008d77d4;
      uVar8 = 1;
    }
    else {
      if ((iVar3 == 3) || (iVar3 != 4)) goto LAB_008d77d4;
LAB_008d7754:
      uVar8 = 4;
    }
    FUN_008d78dc(&local_e8,1,uVar8);
    *(undefined1 *)(param_1 + 0x10) = 1;
    *param_1 = local_e8;
    param_1[4] = uStack_c8;
    param_1[3] = local_d0;
    param_1[6] = uStack_b8;
    param_1[5] = uStack_c0;
    *(undefined4 *)(param_1 + 1) = local_e0;
    param_1[2] = local_d8;
    param_1[0xc] = uStack_88;
    param_1[0xb] = uStack_90;
    param_1[10] = uStack_98;
    param_1[9] = local_a0;
    param_1[7] = local_b0;
    param_1[8] = local_a8;
    param_1[0xe] = uStack_78;
    param_1[0xd] = local_80;
    param_1[0xf] = local_70;
  }
LAB_008d77dc:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008d78dc  FUN_008d78dc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008d78dc(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int local_d8;
  int local_d4;
  int local_d0;
  uint uStack_cc;
  ulong local_c8;
  undefined8 *******local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  ulong local_98;
  undefined8 *******local_90;
  undefined1 *puStack_88;
  ulong local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x10) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0xe) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x18) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x16) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x14) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x12) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0xc) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 10) = &DAT_aaaaaaaaaaaaaaaa;
  puVar13 = (undefined8 *)(param_1 + 6);
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  *puVar13 = &DAT_aaaaaaaaaaaaaaaa;
  plVar10 = (long *)(param_1 + 4);
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar7 = (undefined8 *)(param_1 + 0x1a);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *param_1 = 0;
  param_1[1] = param_3 * param_2;
  param_1[2] = param_2;
  FUN_008d88c8();
  uVar12 = 0;
  local_d4 = 0;
  do {
    iVar11 = 0;
    local_c8 = 0;
    local_d0 = local_d4;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = 0;
    local_98 = 0;
    uStack_cc = uVar12;
    do {
      iVar14 = 2;
      local_d8 = iVar14;
      if (uVar12 != 0 || iVar11 < local_d4) {
        local_d8 = 0;
      }
      puVar2 = (undefined1 *)0xa;
      if ((local_c8 & 1) != 0) {
        puVar2 = puStack_b8;
      }
      if ((undefined1 *)(local_c8 >> 1) == puVar2) {
        FUN_008ad380(&local_c8,&local_d8);
      }
      else {
        pppppppuVar3 = &local_c0;
        if ((local_c8 & 1) != 0) {
          pppppppuVar3 = local_c0;
        }
        piVar1 = (int *)((long)pppppppuVar3 + (long)(local_c8 >> 1) * 4);
        if (piVar1 == (int *)0x0) goto LAB_008d7d1c;
        *piVar1 = local_d8;
        local_c8 = local_c8 + 2;
      }
      if (param_3 != 1) {
        if (1 < uVar12 || iVar11 < local_d4) {
          iVar14 = 0;
        }
        puVar2 = (undefined1 *)0xa;
        if ((local_c8 & 1) != 0) {
          puVar2 = puStack_b8;
        }
        local_d8 = iVar14;
        if ((undefined1 *)(local_c8 >> 1) == puVar2) {
          FUN_008ad380(&local_c8,&local_d8);
        }
        else {
          pppppppuVar3 = &local_c0;
          if ((local_c8 & 1) != 0) {
            pppppppuVar3 = local_c0;
          }
          piVar1 = (int *)((long)pppppppuVar3 + (long)(local_c8 >> 1) * 4);
          if (piVar1 == (int *)0x0) goto LAB_008d7d1c;
          *piVar1 = iVar14;
          local_c8 = local_c8 + 2;
        }
        if (param_3 != 2) {
          iVar14 = 2;
          local_d8 = iVar14;
          if (2 < uVar12 || iVar11 < local_d4) {
            local_d8 = 0;
          }
          puVar2 = (undefined1 *)0xa;
          if ((local_c8 & 1) != 0) {
            puVar2 = puStack_b8;
          }
          if ((undefined1 *)(local_c8 >> 1) == puVar2) {
            FUN_008ad380(&local_c8,&local_d8);
          }
          else {
            pppppppuVar3 = &local_c0;
            if ((local_c8 & 1) != 0) {
              pppppppuVar3 = local_c0;
            }
            piVar1 = (int *)((long)pppppppuVar3 + (long)(local_c8 >> 1) * 4);
            if (piVar1 == (int *)0x0) goto LAB_008d7d1c;
            *piVar1 = local_d8;
            local_c8 = local_c8 + 2;
          }
          if (param_3 != 3) {
            if (3 < uVar12 || iVar11 < local_d4) {
              iVar14 = 0;
            }
            puVar2 = (undefined1 *)0xa;
            if ((local_c8 & 1) != 0) {
              puVar2 = puStack_b8;
            }
            local_d8 = iVar14;
            if ((undefined1 *)(local_c8 >> 1) == puVar2) {
              FUN_008ad380(&local_c8,&local_d8);
            }
            else {
              pppppppuVar3 = &local_c0;
              if ((local_c8 & 1) != 0) {
                pppppppuVar3 = local_c0;
              }
              piVar1 = (int *)((long)pppppppuVar3 + (long)(local_c8 >> 1) * 4);
              if (piVar1 == (int *)0x0) goto LAB_008d7d1c;
              *piVar1 = iVar14;
              local_c8 = local_c8 + 2;
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (param_2 != iVar11);
    local_d8 = param_3 * param_2;
    if (uVar12 != 0) {
      local_d8 = param_2;
    }
    puVar2 = (undefined1 *)0x4;
    if ((local_98 & 1) != 0) {
      puVar2 = puStack_88;
    }
    if ((undefined1 *)(local_98 >> 1) == puVar2) {
      FUN_007d577c(&local_98,&local_d8);
    }
    else {
      pppppppuVar3 = &local_90;
      if ((local_98 & 1) != 0) {
        pppppppuVar3 = local_90;
      }
      piVar1 = (int *)((long)pppppppuVar3 + (long)(local_98 >> 1) * 4);
      if (piVar1 == (int *)0x0) goto LAB_008d7d1c;
      *piVar1 = local_d8;
      local_98 = local_98 + 2;
    }
    local_d8 = 1;
    FUN_008d8a40(&local_80,&local_d8,(long)(int)param_1[2]);
    uVar5 = *(ulong *)(param_1 + 0x1c);
    if (uVar5 < *(ulong *)(param_1 + 0x1e)) {
      FUN_008b5b74(puVar7,uVar5,&local_d0);
      lVar8 = uVar5 + 0x68;
    }
    else {
      lVar8 = FUN_008b5c60(puVar7,&local_d0);
    }
    uVar9 = *(ulong *)(param_1 + 4);
    *(long *)(param_1 + 0x1c) = lVar8;
    uVar5 = 10;
    if ((uVar9 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    if (uVar9 >> 1 == uVar5) {
      FUN_008d8c54(plVar10,&local_d4);
    }
    else {
      puVar4 = puVar13;
      if ((uVar9 & 1) != 0) {
        puVar4 = (undefined8 *)*puVar13;
      }
      piVar1 = (int *)((long)puVar4 + (uVar9 >> 1) * 4);
      if (piVar1 == (int *)0x0) {
LAB_008d7d1c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *piVar1 = local_d4;
      *plVar10 = *plVar10 + 2;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_c0);
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == param_3) {
      uVar12 = 0;
      local_d4 = local_d4 + 1;
      if (param_2 <= local_d4) {
        if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  } while( true );
}


// ===== 008d7d6c  FUN_008d7d6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d7d6c(long param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  int iVar16;
  int iVar18;
  undefined1 auVar17 [16];
  uint uVar19;
  byte local_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  long local_58;
  
  *(undefined2 *)(param_1 + 0x3a0) = 0x101;
  uVar4 = DAT_001f50d0;
  if ((param_4 & 1) == 0) {
    if (*(long *)(param_2 + 0x20) != 0) {
      uVar14 = 0;
      plVar1 = (long *)(param_6 + 0x48);
      bStack_68 = SUB161(_DAT_001f26f0,8);
      bStack_67 = SUB161(_DAT_001f26f0,9);
      bStack_66 = SUB161(_DAT_001f26f0,10);
      bStack_65 = SUB161(_DAT_001f26f0,0xb);
      local_70 = SUB161(_DAT_001f26f0,0);
      bStack_6f = SUB161(_DAT_001f26f0,1);
      bStack_6e = SUB161(_DAT_001f26f0,2);
      bStack_6d = SUB161(_DAT_001f26f0,3);
      do {
        if (uVar14 == 3) goto LAB_008d80e8;
        uVar6 = *(ulong *)(param_2 + 8 + uVar14 * 8);
        if (2 < uVar6) goto LAB_008d80c0;
        local_58 = *(long *)(param_1 + 0x388 + uVar6 * 8);
        uVar6 = *(ulong *)(param_6 + 0x40);
        pauVar10 = (undefined1 (*) [16])(param_6 + 0x48);
        if ((uVar6 & 1) != 0) {
          pauVar10 = (undefined1 (*) [16])*plVar1;
        }
        uVar7 = uVar6 >> 1;
        auVar15._8_8_ = local_58;
        auVar15._0_8_ = local_58;
        pauVar9 = pauVar10;
        pauVar12 = pauVar10;
        for (uVar13 = uVar7 * 8; 0x38 < uVar13; uVar13 = uVar13 - 0x40) {
          auVar17 = NEON_cmeq(*pauVar9,auVar15,8);
          uVar19 = NEON_umaxv(auVar17,4);
          if ((uVar19 & 1) != 0) {
            iVar16 = auVar17._0_4_;
            iVar18 = auVar17._8_4_;
            lVar8 = 0;
LAB_008d800c:
            uVar13 = NEON_cmlt(CONCAT44(iVar18 << 0x1f,iVar16 << 0x1f),0,4);
            uVar19 = (int)(uVar13 & uVar4) + (int)((uVar13 & uVar4) >> 0x20);
            uVar19 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555 | 4) << 1;
            uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
            pauVar11 = (undefined1 (*) [16])
                       (*pauVar9 + lVar8 + LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10) * 8);
            goto joined_r0x008d8034;
          }
          auVar17 = NEON_cmeq(pauVar9[1],auVar15,8);
          uVar19 = NEON_umaxv(auVar17,4);
          if ((uVar19 & 1) != 0) {
            iVar16 = auVar17._0_4_;
            iVar18 = auVar17._8_4_;
            lVar8 = 0x10;
            goto LAB_008d800c;
          }
          auVar17 = NEON_cmeq(pauVar9[2],auVar15,8);
          uVar19 = NEON_umaxv(auVar17,4);
          if ((uVar19 & 1) != 0) {
            iVar16 = auVar17._0_4_;
            iVar18 = auVar17._8_4_;
            lVar8 = 0x20;
            goto LAB_008d800c;
          }
          auVar17 = NEON_cmeq(pauVar9[3],auVar15,8);
          uVar19 = NEON_umaxv(auVar17,4);
          if ((uVar19 & 1) != 0) {
            iVar16 = auVar17._0_4_;
            iVar18 = auVar17._8_4_;
            lVar8 = 0x30;
            goto LAB_008d800c;
          }
          pauVar9 = pauVar9 + 4;
          pauVar12 = pauVar12 + 4;
        }
        if (8 < uVar13) {
          uVar13 = (long)pauVar10 + (uVar7 * 8 - (long)pauVar9);
          pauVar12 = pauVar9;
          do {
            auVar17 = NEON_cmeq(*pauVar9,auVar15,8);
            uVar19 = NEON_umaxv(auVar17,4);
            if ((uVar19 & 1) != 0) {
              uVar19 = CONCAT13(auVar17[3] & bStack_6d,
                                CONCAT12(auVar17[2] & bStack_6e,
                                         CONCAT11(auVar17[1] & bStack_6f,auVar17[0] & local_70))) +
                       CONCAT13(auVar17[0xb] & bStack_65,
                                CONCAT12(auVar17[10] & bStack_66,
                                         CONCAT11(auVar17[9] & bStack_67,auVar17[8] & bStack_68)));
              uVar19 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555 | 4) << 1;
              uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
              pauVar11 = (undefined1 (*) [16])
                         (*pauVar9 + LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10) * 8);
              goto joined_r0x008d8034;
            }
            uVar13 = uVar13 - 0x10;
            pauVar9 = pauVar9 + 1;
            pauVar12 = pauVar12 + 1;
          } while (8 < uVar13);
        }
        pauVar2 = (undefined1 (*) [16])(*pauVar10 + uVar7 * 8);
        pauVar11 = pauVar2;
        if (pauVar2 == pauVar9) {
LAB_008d7f2c:
          if ((uVar6 & 1) == 0) goto LAB_008d7f30;
LAB_008d7dec:
          lVar8 = *plVar1;
          if (pauVar11 == (undefined1 (*) [16])(lVar8 + uVar7 * 8)) {
            uVar6 = *(ulong *)(param_6 + 0x50);
            goto LAB_008d7f44;
          }
        }
        else {
          if ((ulong)((long)pauVar12 - (long)pauVar10) < 9) {
            do {
              pauVar11 = pauVar9;
              if (*(long *)*pauVar9 == local_58) break;
              pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
              pauVar11 = pauVar2;
            } while (pauVar9 != pauVar2);
            goto LAB_008d7f2c;
          }
          auVar15 = NEON_cmeq(pauVar2[-1],auVar15,8);
          uVar19 = CONCAT13(auVar15[3] & bStack_6d,
                            CONCAT12(auVar15[2] & bStack_6e,
                                     CONCAT11(auVar15[1] & bStack_6f,auVar15[0] & local_70))) +
                   CONCAT13(auVar15[0xb] & bStack_65,
                            CONCAT12(auVar15[10] & bStack_66,
                                     CONCAT11(auVar15[9] & bStack_67,auVar15[8] & bStack_68)));
          uVar19 = (uVar19 & 0xaaaaaaaa) >> 1 | (uVar19 & 0x55555555 | 4) << 1;
          uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
          pauVar11 = (undefined1 (*) [16])
                     (pauVar2[-1] + LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10) * 8);
joined_r0x008d8034:
          if ((uVar6 & 1) != 0) goto LAB_008d7dec;
LAB_008d7f30:
          if (pauVar11 == (undefined1 (*) [16])(plVar1 + uVar7)) {
            lVar8 = param_6 + 0x48;
            uVar6 = 5;
LAB_008d7f44:
            if (uVar7 == uVar6) {
              FUN_008d9300(param_6 + 0x40,&local_58);
            }
            else {
              plVar3 = (long *)(lVar8 + uVar7 * 8);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *plVar3 = local_58;
              *(long *)(param_6 + 0x40) = *(long *)(param_6 + 0x40) + 2;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ulong *)(param_2 + 0x20));
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      if (2 < *(ulong *)(param_2 + 0x28)) {
LAB_008d80c0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      param_1 = param_1 + 0x388;
      *(undefined8 *)(param_1 + *(ulong *)(param_2 + 0x28) * 8) = param_3;
      if (1 < *(ulong *)(param_2 + 0x40)) {
        if (2 < *(ulong *)(param_2 + 0x30)) goto LAB_008d80c0;
        *(undefined8 *)(param_1 + *(ulong *)(param_2 + 0x30) * 8) = param_3;
        if (2 < *(ulong *)(param_2 + 0x40)) {
          if (2 < *(ulong *)(param_2 + 0x38)) goto LAB_008d80c0;
          *(undefined8 *)(param_1 + *(ulong *)(param_2 + 0x38) * 8) = param_3;
          if (3 < *(ulong *)(param_2 + 0x40)) {
LAB_008d80e8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x8d80ec);
            (*pcVar5)();
          }
        }
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x388) = param_3;
    *(undefined8 *)(param_1 + 0x390) = param_3;
    *(undefined8 *)(param_1 + 0x398) = param_3;
  }
  return;
}


// ===== 008d80ec  FUN_008d80ec =====

void FUN_008d80ec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,long param_8)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_58;
  
  *(undefined2 *)(param_1 + 0x3a0) = 0x100;
  if ((param_4 & 1) == 0) {
    if ((param_7 & 1) == 0) {
      if ((int)param_6 < 0) goto LAB_008d8330;
      lVar6 = 0;
      do {
        if ((7 < param_5) || (lVar6 == 0x40)) goto LAB_008d8330;
        local_58 = *(long *)(param_1 + (ulong)param_5 * 0x40 + 0x130 + lVar6);
        if (local_58 != -1) {
          if ((*(ulong *)(param_8 + 0x40) & 1) == 0) {
            lVar4 = param_8 + 0x48;
            uVar5 = 5;
          }
          else {
            lVar4 = *(long *)(param_8 + 0x48);
            uVar5 = *(ulong *)(param_8 + 0x50);
          }
          uVar3 = *(ulong *)(param_8 + 0x40) >> 1;
          if (uVar3 == uVar5) {
            FUN_008d9300(param_8 + 0x40,&local_58);
          }
          else {
            plVar1 = (long *)(lVar4 + uVar3 * 8);
            if (plVar1 == (long *)0x0) goto LAB_008d830c;
            *plVar1 = local_58;
            *(long *)(param_8 + 0x40) = *(long *)(param_8 + 0x40) + 2;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((ulong)(param_6 + 1) << 3 != lVar6);
    }
    else {
      if (7 < param_5) goto LAB_008d8330;
      lVar6 = param_1 + (ulong)param_5 * 0x40;
      local_58 = *(long *)(lVar6 + 0x130);
      if (*(long *)(lVar6 + 0x138) < local_58) {
        *(undefined8 *)(lVar6 + 0x138) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x140) < local_58) {
        *(undefined8 *)(lVar6 + 0x140) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x148) < local_58) {
        *(undefined8 *)(lVar6 + 0x148) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x150) < local_58) {
        *(undefined8 *)(lVar6 + 0x150) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x158) < local_58) {
        *(undefined8 *)(lVar6 + 0x158) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x160) < local_58) {
        *(undefined8 *)(lVar6 + 0x160) = 0xffffffffffffffff;
      }
      if (*(long *)(lVar6 + 0x168) < local_58) {
        *(undefined8 *)(lVar6 + 0x168) = 0xffffffffffffffff;
      }
      puVar2 = (ulong *)(param_8 + 0x40);
      if ((*puVar2 & 1) == 0) {
        lVar6 = param_8 + 0x48;
        uVar5 = 5;
      }
      else {
        lVar6 = *(long *)(param_8 + 0x48);
        uVar5 = *(ulong *)(param_8 + 0x50);
      }
      uVar3 = *puVar2 >> 1;
      if (uVar3 == uVar5) {
        FUN_008d9300(puVar2,&local_58);
      }
      else {
        plVar1 = (long *)(lVar6 + uVar3 * 8);
        if (plVar1 == (long *)0x0) {
LAB_008d830c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *plVar1 = local_58;
        *puVar2 = *puVar2 + 2;
      }
    }
    if (param_6 < 8) {
      *(undefined8 *)(param_1 + (ulong)param_5 * 0x40 + (ulong)param_6 * 8 + 0x130) = param_3;
      return;
    }
  }
  else if (param_5 < 8) {
    param_1 = param_1 + (ulong)param_5 * 0x40;
    *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x138) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;
    if (param_6 < 8) {
      ((undefined8 *)(param_1 + 0x130))[param_6] = param_3;
      return;
    }
  }
LAB_008d8330:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
            );
}


// ===== 008d8344  FUN_008d8344 =====

void FUN_008d8344(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  size_t sVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  size_t __n;
  ulong uVar9;
  void *__dest;
  
  __src = (void *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar9 = (long)__n >> 6;
  lVar6 = param_2 - uVar9;
  if (param_2 < uVar9 || lVar6 == 0) {
    if (param_2 < uVar9) {
      puVar5 = (undefined8 *)((long)__src + param_2 * 0x40);
      uVar9 = (ulong)(((long)puVar5 - (long)puVar4 << 0x3a) - ((long)puVar5 - (long)puVar4)) >> 6;
      uVar8 = (ulong)((long)puVar4 + (-0x40 - ((long)puVar4 << 0x3a))) >> 6;
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      if ((1 < uVar9) && ((((int)__src - (int)puVar4 | -(int)puVar4) & 0x3fU) == 0)) {
        uVar9 = uVar9 & 0x3fffffffffffffe;
        puVar4 = puVar4 + uVar9 * -8;
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      while (puVar4 != puVar5) {
        puVar4 = puVar4 + -8;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar5;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 6) < param_2) {
      if (param_2 >> 0x3a == 0) {
        uVar1 = (long)uVar8 >> 5;
        if ((ulong)((long)uVar8 >> 5) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7fffffffffffffbf < uVar8) {
          uVar1 = 0x3ffffffffffffff;
        }
        if (uVar1 >> 0x3a == 0) {
          pvVar3 = operator_new(uVar1 * 0x40);
          lVar6 = lVar6 * 0x40;
          sVar2 = __n;
          if (lVar6 != 0) {
            sVar2 = lVar6 + __n;
            puVar4 = (undefined8 *)((long)pvVar3 + __n);
            do {
              if (puVar4 == (undefined8 *)0x0) goto LAB_008d8508;
              lVar6 = lVar6 + -0x40;
              puVar4[5] = 0;
              puVar4[4] = 0;
              puVar4[7] = 0;
              puVar4[6] = 0;
              puVar4[1] = 0;
              *puVar4 = 0;
              puVar4[3] = 0;
              puVar4[2] = 0;
              puVar4 = puVar4 + 8;
            } while (lVar6 != 0);
          }
          __dest = (void *)((long)pvVar3 + uVar9 * -0x40 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = (long)pvVar3 + sVar2;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 0x40);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_008d874c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar7 = lVar6 * 0x40;
    puVar5 = puVar4;
    if (lVar7 != 0) {
      puVar5 = puVar4 + lVar6 * 8;
      do {
        if (puVar4 == (undefined8 *)0x0) {
LAB_008d8508:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar7 = lVar7 + -0x40;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4 = puVar4 + 8;
      } while (lVar7 != 0);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 008d8524  FUN_008d8524 =====

void FUN_008d8524(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *param_2;
  uVar5 = uVar3 >> 1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8d8638);
    (*pcVar1)();
  }
  if ((uVar3 & 1) == 0) {
    puVar2 = param_1 + 1;
    puVar4 = param_2 + 1;
  }
  else {
    if (0x924924924924925 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar3 = uVar5;
    if (uVar5 < 9) {
      uVar3 = 8;
    }
    puVar2 = (ulong *)operator_new(uVar3 * 0x38);
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar3;
    puVar4 = (ulong *)param_2[1];
  }
  puVar2 = puVar2 + 2;
  puVar4 = puVar4 + 2;
  do {
    if (puVar2 + -2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar6 = puVar4[-1];
    uVar3 = puVar4[-2];
    *puVar2 = 0;
    puVar2[-1] = uVar6;
    puVar2[-2] = uVar3;
    uVar3 = *puVar4;
    if (1 < uVar3) {
      if ((uVar3 & 1) == 0) {
        *puVar2 = uVar3;
        uVar3 = puVar4[3];
        uVar7 = puVar4[2];
        uVar6 = puVar4[1];
        puVar2[4] = puVar4[4];
        puVar2[3] = uVar3;
        puVar2[2] = uVar7;
        puVar2[1] = uVar6;
      }
      else {
        FUN_008d863c(puVar2,puVar4);
      }
    }
    uVar5 = uVar5 - 1;
    puVar2 = puVar2 + 7;
    puVar4 = puVar4 + 7;
  } while (uVar5 != 0);
  *param_1 = *param_2;
  return;
}


// ===== 008d863c  FUN_008d863c =====

void FUN_008d863c(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8d86c0);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 9) {
      uVar2 = 8;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 008d86c4  FUN_008d86c4 =====

void FUN_008d86c4(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8d8748);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 9) {
      uVar2 = 8;
    }
    __dest = (ulong *)operator_new(uVar2 << 4);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 4);
  *param_1 = *param_2;
  return;
}


// ===== 008d874c  FUN_008d874c =====

void FUN_008d874c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008d8764  FUN_008d8764 =====

void FUN_008d8764(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 != 0) {
    puVar1 = puVar1 + uVar3 * 7;
    do {
      if (puVar1 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar1[-5] & 1) != 0) {
        operator_delete((void *)puVar1[-4]);
      }
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + -7;
    } while (uVar3 != 0);
    uVar2 = *param_1;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 008d8828  FUN_008d8828 =====

void FUN_008d8828(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (param_1 != param_2) {
    plVar1 = param_2 + 3;
    if ((param_2[2] & 1) != 0) {
      plVar1 = (long *)param_2[3];
    }
    FUN_0060adc4(param_1 + 2,plVar1,(long)(param_2[2] << 1) >> 2);
    plVar1 = param_2 + 9;
    if ((param_2[8] & 1) != 0) {
      plVar1 = (long *)param_2[9];
    }
    FUN_007dde24(param_1 + 8,plVar1,(long)(param_2[8] << 2) >> 3);
    plVar1 = param_2 + 0xf;
    if ((param_2[0xe] & 1) != 0) {
      plVar1 = (long *)param_2[0xf];
    }
    FUN_007d51b0(param_1 + 0xe,plVar1,(long)(param_2[0xe] << 1) >> 2);
  }
  param_1[0x11] = param_2[0x11];
  return;
}


// ===== 008d88c8  FUN_008d88c8 =====

void FUN_008d88c8(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  
  puVar19 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((param_1[2] - (long)puVar19 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    return;
  }
  if (param_2 < 0x276276276276277) {
    puVar20 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)operator_new(param_2 * 0x68);
    lVar16 = (long)puVar20 - (long)puVar19;
    puVar7 = puVar19;
    puVar10 = puVar3;
    if (lVar16 != 0) {
      do {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        uVar24 = puVar7[3];
        uVar23 = puVar7[2];
        uVar22 = puVar7[5];
        uVar21 = puVar7[4];
        puVar10[6] = puVar7[6];
        puVar10[3] = uVar24;
        puVar10[2] = uVar23;
        puVar10[5] = uVar22;
        puVar10[4] = uVar21;
        puVar7[1] = 0;
        puVar10[7] = puVar7[7];
        uVar21 = puVar7[8];
        puVar10[9] = puVar7[9];
        puVar10[8] = uVar21;
        puVar7[7] = 0;
        puVar10[10] = puVar7[10];
        uVar21 = puVar7[0xb];
        puVar10[0xc] = puVar7[0xc];
        puVar10[0xb] = uVar21;
        puVar7[10] = 0;
        puVar7 = puVar7 + 0xd;
        puVar10 = puVar10 + 0xd;
      } while (puVar7 != puVar20);
      do {
        FUN_007d511c(param_1,puVar19);
        puVar19 = puVar19 + 0xd;
      } while (puVar19 != puVar20);
      puVar19 = (undefined8 *)*param_1;
    }
    *param_1 = puVar3;
    param_1[1] = (long)puVar3 + lVar16;
    param_1[2] = puVar3 + param_2 * 0xd;
    if (puVar19 == (undefined8 *)0x0) {
      return;
    }
    operator_delete(puVar19);
    return;
  }
  auVar25 = FUN_007d5104();
  puVar6 = auVar25._8_8_;
  puVar4 = auVar25._0_8_;
  puVar11 = puVar4 + 1;
  if ((*puVar4 & 1) == 0) {
    uVar13 = 4;
    if (param_3 < 5) goto LAB_008d8a7c;
LAB_008d8ab8:
    uVar13 = uVar13 * 2;
    if (uVar13 < param_3 || uVar13 - param_3 == 0) {
      uVar13 = param_3;
    }
    if (uVar13 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar5 = (undefined4 *)operator_new(uVar13 << 2);
    uVar9 = param_3;
    puVar12 = puVar5;
  }
  else {
    puVar11 = (ulong *)puVar4[1];
    uVar13 = puVar4[2];
    if (uVar13 < param_3) goto LAB_008d8ab8;
LAB_008d8a7c:
    uVar14 = *puVar4 >> 1;
    puVar5 = (undefined4 *)((long)puVar11 + uVar14 * 4);
    bVar2 = uVar14 <= param_3;
    uVar13 = param_3;
    if (bVar2) {
      uVar13 = uVar14;
    }
    uVar9 = 0;
    if (bVar2) {
      uVar9 = param_3 - uVar14;
    }
    if (!bVar2 || param_3 - uVar14 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if (uVar13 != 0) {
      uVar1 = *puVar6;
      if (uVar13 < 8) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar13 & 0x7ffffffffffffff8;
        puVar18 = puVar11 + 2;
        uVar15 = uVar13 & 0x7ffffffffffffff8;
        do {
          uVar15 = uVar15 - 8;
          puVar18[-1] = CONCAT44(uVar1,uVar1);
          puVar18[-2] = CONCAT44(uVar1,uVar1);
          puVar18[1] = CONCAT44(uVar1,uVar1);
          *puVar18 = CONCAT44(uVar1,uVar1);
          puVar18 = puVar18 + 4;
        } while (uVar15 != 0);
        if (uVar13 == uVar17) goto LAB_008d8b1c;
      }
      lVar16 = uVar13 - uVar17;
      puVar12 = (undefined4 *)((long)puVar11 + uVar17 * 4);
      do {
        lVar16 = lVar16 + -1;
        *puVar12 = uVar1;
        puVar12 = puVar12 + 1;
      } while (lVar16 != 0);
    }
LAB_008d8b1c:
    if (param_3 <= uVar14) {
      uVar9 = *puVar4;
      goto LAB_008d8c1c;
    }
    uVar13 = 0;
    puVar12 = (undefined4 *)0x0;
  }
  uVar15 = uVar9 - 1;
  uVar14 = (ulong)-(long)puVar5 >> 2;
  if (uVar15 <= (ulong)-(long)puVar5 >> 2) {
    uVar14 = uVar15;
  }
  if (uVar14 < 0x24) {
LAB_008d8b48:
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    uVar17 = (ulong)-(long)puVar5 >> 2;
    if (uVar15 <= uVar17) {
      uVar17 = uVar15;
    }
    if (((-(long)puVar5 & 3U) == 0) && (puVar5 <= puVar5 + uVar17)) {
      uVar17 = (ulong)-(long)puVar5 >> 2;
      if (uVar15 <= (ulong)-(long)puVar5 >> 2) {
        uVar17 = uVar15;
      }
      if ((puVar6 < puVar5 + uVar17 + 1) && (puVar5 < puVar6 + 1)) goto LAB_008d8b48;
      uVar1 = *puVar6;
      uVar15 = uVar14 + 1 & 7;
      uVar17 = 8;
      if (uVar15 != 0) {
        uVar17 = uVar15;
      }
      lVar16 = (uVar14 + 1) - uVar17;
      puVar19 = (undefined8 *)(puVar5 + 4);
      lVar8 = lVar16;
      do {
        lVar8 = lVar8 + -8;
        puVar19[-1] = CONCAT44(uVar1,uVar1);
        puVar19[-2] = CONCAT44(uVar1,uVar1);
        puVar19[1] = CONCAT44(uVar1,uVar1);
        *puVar19 = CONCAT44(uVar1,uVar1);
        puVar19 = puVar19 + 4;
      } while (lVar8 != 0);
    }
  }
  lVar8 = uVar9 - lVar16;
  puVar5 = puVar5 + lVar16;
  do {
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar8 = lVar8 + -1;
    *puVar5 = *puVar6;
    puVar5 = puVar5 + 1;
  } while (lVar8 != 0);
  uVar9 = *puVar4;
  if (puVar12 != (undefined4 *)0x0) {
    if ((uVar9 & 1) != 0) {
      operator_delete((void *)puVar4[1]);
      uVar9 = *puVar4;
    }
    uVar9 = uVar9 | 1;
    puVar4[1] = (ulong)puVar12;
    puVar4[2] = uVar13;
  }
LAB_008d8c1c:
  *puVar4 = uVar9 & 1 | param_3 << 1;
  return;
}


// ===== 008d8a40  FUN_008d8a40 =====

void FUN_008d8a40(ulong *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  
  puVar6 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar8 = 4;
    if (4 < param_3) goto LAB_008d8ab8;
LAB_008d8a7c:
    uVar9 = *param_1 >> 1;
    puVar3 = (undefined4 *)((long)puVar6 + uVar9 * 4);
    bVar2 = uVar9 <= param_3;
    uVar8 = param_3;
    if (bVar2) {
      uVar8 = uVar9;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar9;
    }
    if (!bVar2 || param_3 - uVar9 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (uVar8 != 0) {
      uVar1 = *param_2;
      if (uVar8 < 8) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar8 & 0x7ffffffffffffff8;
        puVar14 = puVar6 + 2;
        uVar11 = uVar8 & 0x7ffffffffffffff8;
        do {
          uVar11 = uVar11 - 8;
          puVar14[-1] = CONCAT44(uVar1,uVar1);
          puVar14[-2] = CONCAT44(uVar1,uVar1);
          puVar14[1] = CONCAT44(uVar1,uVar1);
          *puVar14 = CONCAT44(uVar1,uVar1);
          puVar14 = puVar14 + 4;
        } while (uVar11 != 0);
        if (uVar8 == uVar13) goto LAB_008d8b1c;
      }
      lVar12 = uVar8 - uVar13;
      puVar7 = (undefined4 *)((long)puVar6 + uVar13 * 4);
      do {
        lVar12 = lVar12 + -1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (lVar12 != 0);
    }
LAB_008d8b1c:
    if (param_3 <= uVar9) {
      uVar9 = *param_1;
      goto LAB_008d8c1c;
    }
    uVar8 = 0;
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar8 = param_1[2];
    if (param_3 <= uVar8) goto LAB_008d8a7c;
LAB_008d8ab8:
    uVar8 = uVar8 * 2;
    if (uVar8 < param_3 || uVar8 - param_3 == 0) {
      uVar8 = param_3;
    }
    if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (undefined4 *)operator_new(uVar8 << 2);
    uVar4 = param_3;
    puVar7 = puVar3;
  }
  uVar11 = uVar4 - 1;
  uVar9 = (ulong)-(long)puVar3 >> 2;
  if (uVar11 <= (ulong)-(long)puVar3 >> 2) {
    uVar9 = uVar11;
  }
  if (uVar9 < 0x24) {
LAB_008d8b48:
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    uVar13 = (ulong)-(long)puVar3 >> 2;
    if (uVar11 <= uVar13) {
      uVar13 = uVar11;
    }
    if (((-(long)puVar3 & 3U) == 0) && (puVar3 <= puVar3 + uVar13)) {
      uVar13 = (ulong)-(long)puVar3 >> 2;
      if (uVar11 <= (ulong)-(long)puVar3 >> 2) {
        uVar13 = uVar11;
      }
      if ((param_2 < puVar3 + uVar13 + 1) && (puVar3 < param_2 + 1)) goto LAB_008d8b48;
      uVar1 = *param_2;
      uVar11 = uVar9 + 1 & 7;
      uVar13 = 8;
      if (uVar11 != 0) {
        uVar13 = uVar11;
      }
      lVar12 = (uVar9 + 1) - uVar13;
      puVar10 = (undefined8 *)(puVar3 + 4);
      lVar5 = lVar12;
      do {
        lVar5 = lVar5 + -8;
        puVar10[-1] = CONCAT44(uVar1,uVar1);
        puVar10[-2] = CONCAT44(uVar1,uVar1);
        puVar10[1] = CONCAT44(uVar1,uVar1);
        *puVar10 = CONCAT44(uVar1,uVar1);
        puVar10 = puVar10 + 4;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar12;
  puVar3 = puVar3 + lVar12;
  do {
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  uVar9 = *param_1;
  if (puVar7 != (undefined4 *)0x0) {
    if ((uVar9 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar9 = *param_1;
    }
    uVar9 = uVar9 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar8;
  }
LAB_008d8c1c:
  *param_1 = uVar9 & 1 | param_3 << 1;
  return;
}


// ===== 008d8c54  FUN_008d8c54 =====

undefined4 * FUN_008d8c54(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 0x14;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_008d8dcc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_008d8dcc;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 008d8de4  FUN_008d8de4 =====

undefined8 * FUN_008d8de4(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_008d8f5c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_008d8f5c;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 008d8f74  FUN_008d8f74 =====

void FUN_008d8f74(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar8 = param_1 + 1;
  uVar15 = *param_1;
  if ((uVar15 & 1) == 0) {
    uVar5 = 4;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  uVar14 = uVar15 >> 1;
  if (param_3 <= uVar14) goto LAB_008d9214;
  if (uVar5 < param_3) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar5 << 3);
    uVar9 = -(long)pvVar4 + uVar14 * -8 >> 3;
    if (param_3 + ~uVar14 <= uVar9) {
      uVar9 = param_3 + ~uVar14;
    }
    if ((uVar9 < 4) || ((-(int)pvVar4 & 7U) != 0)) {
      lVar10 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar11 = uVar9 + 1 & 3;
      uVar13 = 4;
      if (uVar11 != 0) {
        uVar13 = uVar11;
      }
      lVar10 = (uVar9 + 1) - uVar13;
      lVar7 = ~uVar9 + uVar13;
      puVar6 = (ulong *)((long)pvVar4 + uVar14 * 8 + 0x10);
      do {
        lVar7 = lVar7 + 4;
        puVar6[-1] = uVar1;
        puVar6[-2] = uVar1;
        puVar6[1] = uVar1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
    }
    lVar7 = (lVar10 + uVar14) - param_3;
    puVar6 = (ulong *)((long)pvVar4 + uVar14 * 8 + lVar10 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_008d9274;
      bVar3 = lVar7 != -1;
      lVar7 = lVar7 + 1;
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    } while (bVar3);
    if (uVar14 != 0) {
      uVar11 = (ulong)-(long)pvVar4 >> 3;
      uVar13 = uVar14 - 1;
      uVar9 = uVar11;
      if (uVar13 <= uVar11) {
        uVar9 = uVar13;
      }
      if (uVar9 < 0x1e) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (uVar13 <= uVar11) {
          uVar11 = uVar13;
        }
        if (((((-(int)pvVar4 & 7U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar11 * 8))) &&
            (puVar8 <= puVar8 + uVar11)) && (0x1f < (ulong)((long)pvVar4 - (long)puVar8))) {
          puVar6 = (ulong *)((long)pvVar4 + 0x10);
          uVar11 = uVar9 + 1 & 3;
          uVar13 = 4;
          if (uVar11 != 0) {
            uVar13 = uVar11;
          }
          puVar12 = puVar8 + 2;
          lVar10 = (uVar9 + 1) - uVar13;
          puVar8 = puVar8 + lVar10;
          lVar7 = lVar10;
          do {
            puVar2 = puVar12 + -1;
            uVar9 = puVar12[-2];
            uVar13 = puVar12[1];
            uVar11 = *puVar12;
            lVar7 = lVar7 + -4;
            puVar12 = puVar12 + 4;
            puVar6[-1] = *puVar2;
            puVar6[-2] = uVar9;
            puVar6[1] = uVar13;
            *puVar6 = uVar11;
            puVar6 = puVar6 + 4;
          } while (lVar7 != 0);
        }
      }
      lVar7 = uVar14 - lVar10;
      puVar6 = (ulong *)((long)pvVar4 + lVar10 * 8);
      do {
        if (puVar6 == (ulong *)0x0) goto LAB_008d9274;
        lVar7 = lVar7 + -1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    if ((uVar15 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar15 = *param_1;
    }
    uVar15 = uVar15 | 1;
    param_1[1] = (ulong)pvVar4;
    param_1[2] = uVar5;
    goto LAB_008d9214;
  }
  puVar6 = puVar8 + uVar14;
  uVar15 = param_3 + ~uVar14;
  uVar5 = (ulong)-(long)puVar6 >> 3;
  if (uVar15 <= (ulong)-(long)puVar6 >> 3) {
    uVar5 = uVar15;
  }
  if (uVar5 < 0x2c) {
LAB_008d908c:
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    uVar9 = (ulong)-(long)puVar6 >> 3;
    if (uVar15 <= (ulong)-(long)puVar6 >> 3) {
      uVar9 = uVar15;
    }
    if (((-(int)puVar8 & 7U) == 0) && (puVar6 <= puVar6 + uVar9)) {
      uVar15 = (ulong)-(long)puVar6 >> 3;
      if (param_3 + ~uVar14 <= (ulong)-(long)puVar6 >> 3) {
        uVar15 = param_3 + ~uVar14;
      }
      if ((param_2 < puVar8 + uVar15 + uVar14 + 1) && (puVar6 < param_2 + 1)) goto LAB_008d908c;
      uVar11 = *param_2;
      uVar15 = uVar5 + 1 & 3;
      puVar6 = puVar6 + 2;
      uVar9 = 4;
      if (uVar15 != 0) {
        uVar9 = uVar15;
      }
      lVar10 = (uVar5 + 1) - uVar9;
      lVar7 = ~uVar5 + uVar9;
      do {
        lVar7 = lVar7 + 4;
        puVar6[-1] = uVar11;
        puVar6[-2] = uVar11;
        puVar6[1] = uVar11;
        *puVar6 = uVar11;
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
    }
  }
  lVar7 = (lVar10 + uVar14) - param_3;
  puVar8 = puVar8 + uVar14 + lVar10;
  do {
    if (puVar8 == (ulong *)0x0) {
LAB_008d9274:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    bVar3 = lVar7 != -1;
    lVar7 = lVar7 + 1;
    *puVar8 = *param_2;
    puVar8 = puVar8 + 1;
  } while (bVar3);
  uVar15 = *param_1;
LAB_008d9214:
  *param_1 = uVar15 & 1 | param_3 << 1;
  return;
}


// ===== 008d928c  FUN_008d928c =====

void FUN_008d928c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar3 = 5;
  }
  else {
    puVar1 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  uVar2 = *param_1 >> 1;
  if (uVar2 != uVar3) {
    if (puVar1 + uVar2 != (ulong *)0x0) {
      puVar1[uVar2] = *param_2;
      *param_1 = *param_1 + 2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_008d9300(param_1);
  return;
}


// ===== 008d9300  FUN_008d9300 =====

undefined8 * FUN_008d9300(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 10;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_008d9478:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_008d9478;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 008d9490  FUN_008d9490 =====

void FUN_008d9490(ulong *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar15 = param_1 + 1;
  uVar17 = *param_1;
  if ((uVar17 & 1) == 0) {
    uVar5 = 4;
  }
  else {
    puVar15 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  uVar16 = uVar17 >> 1;
  if (param_3 <= uVar16) goto LAB_008d9730;
  if (uVar5 < param_3) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar5 << 2);
    uVar9 = -(long)pvVar4 + uVar16 * -4 >> 2;
    if (param_3 + ~uVar16 <= uVar9) {
      uVar9 = param_3 + ~uVar16;
    }
    if ((uVar9 < 8) || ((-(int)pvVar4 & 3U) != 0)) {
      lVar10 = 0;
    }
    else {
      uVar1 = *param_2;
      uVar11 = uVar9 + 1 & 7;
      uVar13 = 8;
      if (uVar11 != 0) {
        uVar13 = uVar11;
      }
      lVar10 = (uVar9 + 1) - uVar13;
      lVar7 = ~uVar9 + uVar13;
      puVar6 = (undefined8 *)((long)pvVar4 + uVar16 * 4 + 0x10);
      do {
        lVar7 = lVar7 + 8;
        puVar6[-1] = CONCAT44(uVar1,uVar1);
        puVar6[-2] = CONCAT44(uVar1,uVar1);
        puVar6[1] = CONCAT44(uVar1,uVar1);
        *puVar6 = CONCAT44(uVar1,uVar1);
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
    }
    lVar7 = (lVar10 + uVar16) - param_3;
    puVar8 = (undefined4 *)((long)pvVar4 + uVar16 * 4 + lVar10 * 4);
    do {
      if (puVar8 == (undefined4 *)0x0) goto LAB_008d9790;
      bVar3 = lVar7 != -1;
      lVar7 = lVar7 + 1;
      *puVar8 = *param_2;
      puVar8 = puVar8 + 1;
    } while (bVar3);
    if (uVar16 != 0) {
      uVar11 = (ulong)-(long)pvVar4 >> 2;
      uVar13 = uVar16 - 1;
      uVar9 = uVar11;
      if (uVar13 <= uVar11) {
        uVar9 = uVar13;
      }
      if (uVar9 < 0x20) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (uVar13 <= uVar11) {
          uVar11 = uVar13;
        }
        if (((((-(int)pvVar4 & 3U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar11 * 4))) &&
            (puVar15 <= (ulong *)((long)puVar15 + uVar11 * 4))) &&
           (0x1f < (ulong)((long)pvVar4 - (long)puVar15))) {
          puVar14 = (ulong *)((long)pvVar4 + 0x10);
          uVar11 = uVar9 + 1 & 7;
          uVar13 = 8;
          if (uVar11 != 0) {
            uVar13 = uVar11;
          }
          puVar12 = puVar15 + 2;
          lVar10 = (uVar9 + 1) - uVar13;
          puVar15 = (ulong *)((long)puVar15 + lVar10 * 4);
          lVar7 = lVar10;
          do {
            puVar2 = puVar12 + -1;
            uVar9 = puVar12[-2];
            uVar13 = puVar12[1];
            uVar11 = *puVar12;
            lVar7 = lVar7 + -8;
            puVar12 = puVar12 + 4;
            puVar14[-1] = *puVar2;
            puVar14[-2] = uVar9;
            puVar14[1] = uVar13;
            *puVar14 = uVar11;
            puVar14 = puVar14 + 4;
          } while (lVar7 != 0);
        }
      }
      lVar7 = uVar16 - lVar10;
      puVar8 = (undefined4 *)((long)pvVar4 + lVar10 * 4);
      do {
        if (puVar8 == (undefined4 *)0x0) goto LAB_008d9790;
        lVar7 = lVar7 + -1;
        *puVar8 = (int)*puVar15;
        puVar8 = puVar8 + 1;
        puVar15 = (ulong *)((long)puVar15 + 4);
      } while (lVar7 != 0);
    }
    if ((uVar17 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar17 = *param_1;
    }
    uVar17 = uVar17 | 1;
    param_1[1] = (ulong)pvVar4;
    param_1[2] = uVar5;
    goto LAB_008d9730;
  }
  puVar8 = (undefined4 *)((long)puVar15 + uVar16 * 4);
  uVar17 = param_3 + ~uVar16;
  uVar5 = (ulong)-(long)puVar8 >> 2;
  if (uVar17 <= (ulong)-(long)puVar8 >> 2) {
    uVar5 = uVar17;
  }
  if (uVar5 < 0x2c) {
LAB_008d95a8:
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    uVar9 = (ulong)-(long)puVar8 >> 2;
    if (uVar17 <= (ulong)-(long)puVar8 >> 2) {
      uVar9 = uVar17;
    }
    if (((-(int)puVar15 & 3U) == 0) && (puVar8 <= puVar8 + uVar9)) {
      uVar17 = (ulong)-(long)puVar8 >> 2;
      if (param_3 + ~uVar16 <= (ulong)-(long)puVar8 >> 2) {
        uVar17 = param_3 + ~uVar16;
      }
      if ((param_2 < (undefined4 *)((long)puVar15 + (uVar17 + uVar16) * 4 + 4)) &&
         (puVar8 < param_2 + 1)) goto LAB_008d95a8;
      uVar1 = *param_2;
      uVar17 = uVar5 + 1 & 7;
      puVar6 = (undefined8 *)(puVar8 + 4);
      uVar9 = 8;
      if (uVar17 != 0) {
        uVar9 = uVar17;
      }
      lVar10 = (uVar5 + 1) - uVar9;
      lVar7 = ~uVar5 + uVar9;
      do {
        lVar7 = lVar7 + 8;
        puVar6[-1] = CONCAT44(uVar1,uVar1);
        puVar6[-2] = CONCAT44(uVar1,uVar1);
        puVar6[1] = CONCAT44(uVar1,uVar1);
        *puVar6 = CONCAT44(uVar1,uVar1);
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
    }
  }
  lVar7 = (lVar10 + uVar16) - param_3;
  puVar8 = (undefined4 *)((long)puVar15 + lVar10 * 4 + uVar16 * 4);
  do {
    if (puVar8 == (undefined4 *)0x0) {
LAB_008d9790:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    bVar3 = lVar7 != -1;
    lVar7 = lVar7 + 1;
    *puVar8 = *param_2;
    puVar8 = puVar8 + 1;
  } while (bVar3);
  uVar17 = *param_1;
LAB_008d9730:
  *param_1 = uVar17 & 1 | param_3 << 1;
  return;
}


// ===== 008d97a8  FUN_008d97a8 =====

void FUN_008d97a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_008d9b8c((long)param_1 + 0xc);
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  param_1[6] = 0x7fffffffffffffff;
  return;
}


// ===== 008d97fc  FUN_008d97fc =====

void FUN_008d97fc(long param_1)

{
  FUN_008d9bac(param_1 + 0xc);
  return;
}


// ===== 008d9808  FUN_008d9808 =====

undefined1  [16] FUN_008d9808(undefined1 (*param_1) [12])

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *param_1;
  return auVar1;
}


// ===== 008d981c  FUN_008d981c =====

undefined1  [16] FUN_008d981c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar4 = *(uint *)((long)param_2 + 4);
  if (uVar4 == 0xffffffff) {
    bVar3 = false;
    uVar4 = 0xaaaaaa00;
  }
  else {
    bVar3 = uVar4 != param_1[10];
    if (!bVar3) {
      uVar4 = 0xaaaaaa00;
    }
  }
  uVar10 = *param_2;
  param_1[0xb] = *(uint *)(param_2 + 1);
  *(undefined8 *)(param_1 + 9) = uVar10;
  if ((char)param_1[4] == '\x01') {
    uVar7 = param_1[3];
  }
  else {
    uVar7 = 0;
  }
  if ((int)uVar7 <= (int)param_1[9]) {
    uVar7 = param_1[9];
  }
  if ((param_1[8] & 1) == 0) {
    uVar8 = param_1[0xb];
  }
  else {
    uVar2 = param_1[7];
    uVar8 = param_1[0xb];
    uVar9 = uVar8;
    if (uVar2 <= uVar8) {
      uVar9 = uVar2;
    }
    uVar1 = uVar2;
    if (0 < (int)uVar8) {
      uVar1 = uVar9;
    }
    if (0 < (int)uVar2) {
      uVar8 = uVar1;
    }
  }
  uVar9 = (uint)*(long *)(param_1 + 0xc);
  if (0xfffffffffffffffd < *(long *)(param_1 + 0xc) + 0x7fffffffffffffffU) {
    uVar9 = 0xffffffff;
  }
  uVar2 = uVar9;
  if (uVar8 <= uVar9) {
    uVar2 = uVar8;
  }
  uVar1 = uVar8;
  if (0 < (int)uVar9) {
    uVar1 = uVar2;
  }
  if (0 < (int)uVar8) {
    uVar9 = uVar1;
  }
  uVar8 = uVar7;
  if ((int)uVar9 <= (int)uVar7) {
    uVar8 = uVar9;
  }
  if (uVar9 != 0xffffffff) {
    uVar7 = uVar8;
  }
  if (uVar7 == *param_1) {
    if (uVar9 == param_1[2] && !bVar3) {
      uVar6 = 0;
      uVar5 = 0;
      goto LAB_008d9960;
    }
    if (bVar3) goto LAB_008d9920;
LAB_008d9910:
    uVar8 = param_1[1];
    uVar5 = 0xffffffff00000000;
  }
  else {
    if (!bVar3) goto LAB_008d9910;
LAB_008d9920:
    if ((int)uVar4 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar8 = uVar9;
    if (uVar4 <= uVar9) {
      uVar8 = uVar4;
    }
    uVar2 = uVar4;
    if (0 < (int)uVar9) {
      uVar2 = uVar8;
    }
    uVar8 = uVar9;
    if (0 < (int)uVar4) {
      uVar8 = uVar2;
    }
    uVar5 = (ulong)uVar8 << 0x20;
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  uVar5 = uVar5 | uVar7;
  uVar6 = 0x100000000;
  param_1[2] = uVar9;
LAB_008d9960:
  auVar11._8_8_ = uVar6 | uVar9;
  auVar11._0_8_ = uVar5;
  return auVar11;
}


// ===== 008d996c  FUN_008d996c =====

undefined1  [16] FUN_008d996c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if ((char)param_1[4] == '\x01') {
    uVar2 = param_1[3];
  }
  else {
    uVar2 = 0;
  }
  if ((int)uVar2 <= (int)param_1[9]) {
    uVar2 = param_1[9];
  }
  if ((param_1[8] & 1) == 0) {
    uVar4 = param_1[0xb];
  }
  else {
    uVar6 = param_1[7];
    uVar4 = param_1[0xb];
    uVar5 = uVar4;
    if (uVar6 <= uVar4) {
      uVar5 = uVar6;
    }
    uVar1 = uVar6;
    if (0 < (int)uVar4) {
      uVar1 = uVar5;
    }
    if (0 < (int)uVar6) {
      uVar4 = uVar1;
    }
  }
  uVar5 = (uint)*(long *)(param_1 + 0xc);
  if (0xfffffffffffffffd < *(long *)(param_1 + 0xc) + 0x7fffffffffffffffU) {
    uVar5 = 0xffffffff;
  }
  uVar6 = uVar5;
  if (uVar4 <= uVar5) {
    uVar6 = uVar4;
  }
  uVar1 = uVar4;
  if (0 < (int)uVar5) {
    uVar1 = uVar6;
  }
  if (0 < (int)uVar4) {
    uVar5 = uVar1;
  }
  uVar4 = uVar2;
  if ((int)uVar5 <= (int)uVar2) {
    uVar4 = uVar5;
  }
  if (uVar5 != 0xffffffff) {
    uVar2 = uVar4;
  }
  if (uVar2 == *param_1) {
    if ((uVar5 == param_1[2]) && ((char)param_2[1] == '\0')) {
      uVar7 = 0;
      uVar3 = 0;
      goto LAB_008d9a7c;
    }
    if ((char)param_2[1] != '\0') goto LAB_008d9a34;
LAB_008d9a64:
    uVar6 = param_1[1];
    uVar3 = 0xffffffff00000000;
  }
  else {
    if ((param_2[1] & 1) == 0) goto LAB_008d9a64;
LAB_008d9a34:
    uVar4 = *param_2;
    if ((int)*param_2 <= (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar6 = uVar5;
    if (uVar4 <= uVar5) {
      uVar6 = uVar4;
    }
    uVar1 = uVar4;
    if (0 < (int)uVar5) {
      uVar1 = uVar6;
    }
    uVar6 = uVar5;
    if (0 < (int)uVar4) {
      uVar6 = uVar1;
    }
    uVar3 = (ulong)uVar6 << 0x20;
  }
  *param_1 = uVar2;
  param_1[1] = uVar6;
  uVar3 = uVar3 | uVar2;
  uVar7 = 0x100000000;
  param_1[2] = uVar5;
LAB_008d9a7c:
  auVar8._8_8_ = uVar7 | uVar5;
  auVar8._0_8_ = uVar3;
  return auVar8;
}


// ===== 008d9a88  FUN_008d9a88 =====

void FUN_008d9a88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x1c) = param_2[2];
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  FUN_008d996c(param_1,param_2 + 1);
  return;
}


// ===== 008d9ab8  FUN_008d9ab8 =====

undefined1  [16] FUN_008d9ab8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  *(long *)(param_1 + 0xc) = param_2;
  if ((char)param_1[4] == '\x01') {
    uVar5 = param_1[3];
  }
  else {
    uVar5 = 0;
  }
  if ((int)uVar5 <= (int)param_1[9]) {
    uVar5 = param_1[9];
  }
  if ((param_1[8] & 1) == 0) {
    uVar6 = param_1[0xb];
  }
  else {
    uVar2 = param_1[7];
    uVar6 = param_1[0xb];
    uVar3 = uVar6;
    if (uVar2 <= uVar6) {
      uVar3 = uVar2;
    }
    uVar1 = uVar2;
    if (0 < (int)uVar6) {
      uVar1 = uVar3;
    }
    if (0 < (int)uVar2) {
      uVar6 = uVar1;
    }
  }
  uVar3 = (uint)param_2;
  if (0xfffffffffffffffd < param_2 + 0x7fffffffffffffffU) {
    uVar3 = 0xffffffff;
  }
  uVar2 = uVar3;
  if (uVar6 <= uVar3) {
    uVar2 = uVar6;
  }
  uVar1 = uVar6;
  if (0 < (int)uVar3) {
    uVar1 = uVar2;
  }
  if (0 < (int)uVar6) {
    uVar3 = uVar1;
  }
  uVar6 = uVar5;
  if ((int)uVar3 <= (int)uVar5) {
    uVar6 = uVar3;
  }
  if (uVar3 != 0xffffffff) {
    uVar5 = uVar6;
  }
  if ((uVar5 == *param_1) && (uVar3 == param_1[2])) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    *param_1 = uVar5;
    uVar4 = (ulong)uVar5 | 0xffffffff00000000;
    uVar7 = 0x100000000;
    param_1[2] = uVar3;
  }
  auVar8._8_8_ = uVar7 | uVar3;
  auVar8._0_8_ = uVar4;
  return auVar8;
}


// ===== 008d9b8c  FUN_008d9b8c =====

void FUN_008d9b8c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  return;
}


// ===== 008d9bac  FUN_008d9bac =====

void FUN_008d9bac(void)

{
  return;
}


// ===== 008d9bb4  FUN_008d9bb4 =====

void FUN_008d9bb4(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d3ccd0;
  *(undefined1 *)(param_1 + 1) = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[2] = uVar2;
  param_1[3] = *(undefined8 *)(param_2 + 0x10);
  plVar1 = *(long **)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008d9bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}


// ===== 008d9bfc  FUN_008d9bfc =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_008d9bfc(long param_1,long *param_2)

{
  undefined ********ppppppppuVar1;
  undefined1 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined ********ppppppppuVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  byte bVar14;
  long lVar15;
  undefined *****pppppuVar16;
  long lVar17;
  undefined4 uVar18;
  long *plVar19;
  long *plVar20;
  int local_160;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined5 uStack_158;
  undefined3 uStack_153;
  undefined8 local_150;
  undefined ********local_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined7 local_128;
  char cStack_121;
  undefined ********local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [80];
  long local_70;
  
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 == (undefined8 *)0x0) {
    ppppppppuVar10 = (undefined ********)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    if (puVar9 == (undefined8 *)0x0) goto LAB_008d9c6c;
LAB_008d9c4c:
    plVar11 = (long *)(**(code **)*puVar9)();
  }
  else {
    ppppppppuVar10 = (undefined ********)(**(code **)*puVar9)(puVar9,param_2[1]);
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    if (puVar9 != (undefined8 *)0x0) goto LAB_008d9c4c;
LAB_008d9c6c:
    plVar11 = (long *)0x0;
  }
  plVar20 = param_2 + 1;
  plVar19 = (long *)*plVar20;
  (**(code **)(*plVar19 + 0x10))(&local_120,plVar19,"WebRTC-Bwe-ScreamV2",0x13);
  puVar2 = puStack_118;
  if (-1 < (long)local_110) {
    puVar2 = (undefined1 *)((ulong)local_110 >> 0x38);
  }
  if (puVar2 < (undefined1 *)0x7) {
    bVar7 = false;
    if ((long)local_110 < 0) goto LAB_008d9d08;
LAB_008d9cf8:
    if (bVar7) goto LAB_008d9cfc;
LAB_008d9d1c:
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = (undefined ********)&DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_005d3510(&local_138,&DAT_001b3348);
    FUN_00661054(&local_120,&DAT_001ab5a5,4);
    local_120 = (undefined ********)&PTR_FUN_00d27f10;
    if (cStack_121 < '\0') {
      FUN_005478d8(&local_e0,local_138,puStack_130);
      if (cStack_121 < '\0') {
        operator_delete(local_138);
      }
    }
    else {
      local_d0 = (undefined1 *)CONCAT17(cStack_121,local_128);
      puStack_d8 = puStack_130;
      local_e0 = local_138;
    }
    local_140 = (undefined ********)&local_120;
    (**(code **)(*plVar19 + 0x10))(&local_160,plVar19,"WebRTC-Bwe-ScreamV2",0x13);
    uVar12 = CONCAT35(uStack_153,uStack_158);
    piVar3 = (int *)CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160)));
    if (-1 < (long)local_150) {
      uVar12 = (ulong)local_150 >> 0x38;
      piVar3 = &local_160;
    }
    FUN_00661cc0(&local_140,1,piVar3,uVar12);
    if ((long)local_150 < 0) {
      operator_delete((void *)CONCAT26(uStack_15a,
                                       CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160))));
    }
    puVar2 = puStack_d8;
    if (-1 < (long)local_d0) {
      puVar2 = (undefined1 *)(ulong)local_d0._7_1_;
    }
    if (puVar2 == (undefined1 *)0x0) goto LAB_008da128;
    if ((long)local_d0 < 0) {
      FUN_005478d8(&local_160,local_e0);
      bVar14 = local_150._7_1_;
      if ((long)local_150 < 0) goto LAB_008d9f44;
LAB_008d9e44:
      if ((bVar14 != 6) || (local_160 != 0x61776c61 || CONCAT11(uStack_15b,uStack_15c) != 0x7379)) {
LAB_008d9e6c:
        if ((long)local_d0 < 0) goto LAB_008d9fc8;
LAB_008d9e74:
        uStack_158 = SUB85(puStack_d8,0);
        uStack_153 = (undefined3)((ulong)puStack_d8 >> 0x28);
        local_160 = (int)local_e0;
        uStack_15c = (undefined1)((ulong)local_e0 >> 0x20);
        uStack_15b = (undefined1)((ulong)local_e0 >> 0x28);
        uStack_15a = (undefined2)((ulong)local_e0 >> 0x30);
        local_150._7_1_ = (byte)((ulong)local_d0 >> 0x38);
        cVar4 = local_150._7_1_;
        local_150 = local_d0;
        goto joined_r0x008d9e88;
      }
LAB_008d9f80:
      uVar12 = FUN_00417e08();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../api/transport/goog_cc_factory.cc",0x1f1,
                     "ScreamV2 enabled always");
      }
      bVar7 = true;
LAB_008da130:
      bVar14 = 0;
      uVar18 = 1;
    }
    else {
      uStack_158 = SUB85(puStack_d8,0);
      uStack_153 = (undefined3)((ulong)puStack_d8 >> 0x28);
      local_160 = (int)local_e0;
      uStack_15c = (undefined1)((ulong)local_e0 >> 0x20);
      uStack_15b = (undefined1)((ulong)local_e0 >> 0x28);
      uStack_15a = (undefined2)((ulong)local_e0 >> 0x30);
      local_150 = local_d0;
      bVar14 = local_d0._7_1_;
      if (-1 < (long)local_d0) goto LAB_008d9e44;
LAB_008d9f44:
      piVar3 = (int *)CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160)));
      if (CONCAT35(uStack_153,uStack_158) == 6) {
        iVar8 = *piVar3;
        iVar5 = piVar3[1];
        operator_delete(piVar3);
        if (iVar8 == 0x61776c61 && (short)iVar5 == 0x7379) goto LAB_008d9f80;
        goto LAB_008d9e6c;
      }
      operator_delete(piVar3);
      if (-1 < (long)local_d0) goto LAB_008d9e74;
LAB_008d9fc8:
      FUN_005478d8(&local_160,local_e0,puStack_d8);
      cVar4 = local_150._7_1_;
joined_r0x008d9e88:
      if ((long)local_150 < 0) {
        plVar19 = (long *)CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160)));
        if (CONCAT35(uStack_153,uStack_158) != 0xd) {
          operator_delete(plVar19);
          if ((long)local_d0 < 0) goto LAB_008da078;
LAB_008d9ed0:
          uStack_158 = SUB85(puStack_d8,0);
          uStack_153 = (undefined3)((ulong)puStack_d8 >> 0x28);
          local_160 = (int)local_e0;
          uStack_15c = (undefined1)((ulong)local_e0 >> 0x20);
          uStack_15b = (undefined1)((ulong)local_e0 >> 0x28);
          uStack_15a = (undefined2)((ulong)local_e0 >> 0x30);
          local_150._7_1_ = (byte)((ulong)local_d0 >> 0x38);
          cVar4 = local_150._7_1_;
          local_150 = local_d0;
          goto joined_r0x008d9ee4;
        }
        lVar15 = *plVar19;
        lVar17 = *(long *)((long)plVar19 + 5);
        operator_delete(plVar19);
        if (lVar15 != 0x7466615f796c6e6f || lVar17 != 0x65635f7265746661) goto LAB_008d9ec8;
      }
      else if ((cVar4 != '\r') ||
              (CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160))) !=
               0x7466615f796c6e6f ||
               CONCAT53(uStack_158,CONCAT21(uStack_15a,uStack_15b)) != 0x65635f7265746661)) {
LAB_008d9ec8:
        if (-1 < (long)local_d0) goto LAB_008d9ed0;
LAB_008da078:
        FUN_005478d8(&local_160,local_e0,puStack_d8);
        cVar4 = local_150._7_1_;
joined_r0x008d9ee4:
        if ((long)local_150 < 0) {
          plVar19 = (long *)CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160)))
          ;
          if (CONCAT35(uStack_153,uStack_158) == 0x11) {
            lVar15 = *plVar19;
            lVar17 = plVar19[1];
            lVar6 = plVar19[2];
            operator_delete(plVar19);
            if ((lVar15 == 0x5f63635f676f6f67 && lVar17 == 0x7463655f68746977) && (char)lVar6 == '1'
               ) goto LAB_008da0e4;
          }
          else {
            operator_delete(plVar19);
          }
LAB_008da128:
          bVar7 = false;
          goto LAB_008da130;
        }
        if ((cVar4 != '\x11') ||
           ((CONCAT26(uStack_15a,CONCAT15(uStack_15b,CONCAT14(uStack_15c,local_160))) !=
             0x5f63635f676f6f67 || CONCAT35(uStack_153,uStack_158) != 0x7463655f68746977) ||
            (char)local_150 != '1')) goto LAB_008da128;
LAB_008da0e4:
        uVar12 = FUN_00417e08();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../api/transport/goog_cc_factory.cc",0x231,
                       "GoogCC used. Sending packets as ECT1 until first seen CE marking.");
        }
        bVar7 = false;
        uVar18 = 1;
        bVar14 = 1;
        goto LAB_008da134;
      }
      uVar12 = FUN_00417e08();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../api/transport/goog_cc_factory.cc",0x211,
                     "ScreamV2 used after first packet with CE marking.");
      }
      bVar7 = false;
      uVar18 = 0;
      bVar14 = 1;
    }
LAB_008da134:
    local_120 = (undefined ********)&PTR_FUN_00d27f10;
    if ((long)local_d0 < 0) {
      operator_delete(local_e0);
    }
    FUN_006634ac(&local_120);
    if (!bVar7) {
      if ((bVar14 & *(byte *)(param_1 + 8)) == 1) {
        pvVar13 = operator_new(0x48);
        local_120 = (undefined ********)*param_2;
        if (local_120 != (undefined ********)0x0) {
          FUN_00d0f740(1,(undefined *******)local_120 + 1);
        }
        local_110 = (undefined1 *)param_2[2];
        puStack_118 = (undefined1 *)*plVar20;
        puStack_100 = (undefined1 *)param_2[4];
        puStack_108 = (undefined1 *)param_2[3];
        FUN_0086db50(&puStack_f8,param_2 + 5);
        FUN_0086db00(auStack_c0,param_2 + 0xc);
        local_70 = param_2[0x16];
        FUN_008ff860(pvVar13,&local_120,ppppppppuVar10,plVar11,uVar18);
        FUN_0086db20(auStack_c0);
      }
      else {
LAB_008da2ac:
        pvVar13 = operator_new(0x6c0);
        local_120 = (undefined ********)*param_2;
        if (local_120 != (undefined ********)0x0) {
          FUN_00d0f740(1,(undefined *******)local_120 + 1);
        }
        local_110 = (undefined1 *)param_2[2];
        puStack_118 = (undefined1 *)*plVar20;
        puStack_100 = (undefined1 *)param_2[4];
        puStack_108 = (undefined1 *)param_2[3];
        FUN_0086db50(&puStack_f8,param_2 + 5);
        FUN_0086db00(auStack_c0,param_2 + 0xc);
        local_70 = param_2[0x16];
        FUN_008da404(pvVar13,&local_120,ppppppppuVar10,plVar11);
        FUN_0086db20(auStack_c0);
      }
      FUN_0086db70(&puStack_f8);
      ppppppppuVar10 = local_120;
      if (local_120 == (undefined ********)0x0) {
        return pvVar13;
      }
      iVar8 = FUN_00d0f7a0(0xffffffff,local_120 + 1);
      if (iVar8 != 1) {
        return pvVar13;
      }
      pppppuVar16 = (undefined *****)(*ppppppppuVar10)[1];
      goto LAB_008da348;
    }
  }
  else {
    ppppppppuVar1 = local_120;
    if (-1 < (long)local_110) {
      ppppppppuVar1 = (undefined ********)&local_120;
    }
    bVar7 = *(int *)ppppppppuVar1 == 0x62616e45 && *(int *)((long)ppppppppuVar1 + 3) == 0x64656c62;
    if (-1 < (long)local_110) goto LAB_008d9cf8;
LAB_008d9d08:
    operator_delete(local_120);
    if (!bVar7) goto LAB_008d9d1c;
LAB_008d9cfc:
    if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_008da2ac;
  }
  pvVar13 = operator_new(0x1a28);
  local_120 = (undefined ********)*param_2;
  if (local_120 != (undefined ********)0x0) {
    FUN_00d0f740(1,(undefined *******)local_120 + 1);
  }
  local_110 = (undefined1 *)param_2[2];
  puStack_118 = (undefined1 *)*plVar20;
  puStack_100 = (undefined1 *)param_2[4];
  puStack_108 = (undefined1 *)param_2[3];
  FUN_0086db50(&puStack_f8,param_2 + 5);
  FUN_0086db00(auStack_c0,param_2 + 0xc);
  local_70 = param_2[0x16];
  FUN_00900b14(pvVar13,&local_120);
  FUN_0086db20(auStack_c0);
  FUN_0086db70(&puStack_f8);
  ppppppppuVar1 = local_120;
  if ((local_120 != (undefined ********)0x0) &&
     (iVar8 = FUN_00d0f7a0(0xffffffff,local_120 + 1), iVar8 == 1)) {
    (*(code *)(*ppppppppuVar1)[1])(ppppppppuVar1);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if (ppppppppuVar10 == (undefined ********)0x0) {
    return pvVar13;
  }
  pppppuVar16 = (undefined *****)(*ppppppppuVar10)[5];
LAB_008da348:
  (*(code *)pppppuVar16)(ppppppppuVar10);
  return pvVar13;
}


// ===== 008da378  FUN_008da378 =====

undefined8 FUN_008da378(void)

{
  return 25000;
}


// ===== 008da384  FUN_008da384 =====

void FUN_008da384(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d3ccd0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008da3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}


// ===== 008da3b4  FUN_008da3b4 =====

void FUN_008da3b4(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d3ccd0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  operator_delete(param_1);
  return;
}


// ===== 008da404  FUN_008da404 =====

void FUN_008da404(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *****ppppplVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_88;
  undefined8 *puStack_80;
  long ****local_78;
  ulong local_70;
  byte bStack_61;
  
  *param_1 = &PTR_FUN_00d3cd00;
  lVar5 = *param_2;
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar7 = param_2[4];
  lVar5 = param_2[3];
  lVar8 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar8;
  param_1[5] = lVar7;
  param_1[4] = lVar5;
  FUN_00662484(param_1 + 6,"Enabled",7);
  FUN_00662484(param_1 + 0xe,&DAT_001989de,3);
  (**(code **)(*(long *)param_1[2] + 0x10))
            (&local_78,(long *)param_1[2],"WebRTC-Bwe-MinAllocAsLowerBound",0x1f);
  uVar4 = local_70;
  if (-1 < (char)bStack_61) {
    uVar4 = (ulong)bStack_61;
  }
  if (uVar4 < 8) {
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
  *(bool *)(param_1 + 0x16) = bVar2;
  (**(code **)(*(long *)param_1[2] + 0x10))
            (&local_78,(long *)param_1[2],"WebRTC-Bwe-IgnoreProbesLowerThanNetworkStateEstimate",
             0x34);
  uVar4 = local_70;
  if (-1 < (char)bStack_61) {
    uVar4 = (ulong)bStack_61;
  }
  if (uVar4 < 8) {
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
  *(bool *)((long)param_1 + 0xb1) = bVar2;
  (**(code **)(*(long *)param_1[2] + 0x10))
            (&local_78,(long *)param_1[2],"WebRTC-Bwe-LimitProbesLowerThanThroughputEstimate",0x31);
  uVar4 = local_70;
  if (-1 < (char)bStack_61) {
    uVar4 = (ulong)bStack_61;
  }
  if (uVar4 < 8) {
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
  *(bool *)((long)param_1 + 0xb2) = bVar2;
  FUN_008a5364(param_1 + 0x17,param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x10))
            (&local_78,(long *)param_1[2],"WebRTC-Bwe-LimitPacingFactorByUpperLinkCapacityEstimate",
             0x37);
  uVar4 = local_70;
  if (-1 < (char)bStack_61) {
    uVar4 = (ulong)bStack_61;
  }
  if (uVar4 < 7) {
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
  *(bool *)(param_1 + 0x22) = bVar2;
  pvVar3 = operator_new(0x880);
  FUN_008f4134(pvVar3,param_1[2],param_1[5]);
  param_1[0x23] = pvVar3;
  uVar4 = FUN_008a5720(param_1 + 0x17);
  if ((uVar4 & 1) == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    uVar6 = param_1[2];
    pvVar3 = operator_new(0x30);
    FUN_008f5d58(pvVar3,uVar6);
  }
  param_1[0x24] = pvVar3;
  FUN_008f6174(param_1 + 0x25,param_1[2],param_1[5]);
  FUN_008de1e0(param_1 + 0x81,param_1 + 1);
  pvVar3 = operator_new(0x30);
  FUN_008e14a0(pvVar3,param_1[5]);
  param_1[0x91] = pvVar3;
  param_1[0x92] = param_3;
  param_1[0x93] = param_4;
  pvVar3 = operator_new(0x248);
  FUN_008df008(pvVar3,param_1[2],param_1[5],param_4);
  param_1[0x94] = pvVar3;
  uVar6 = FUN_008e0828(param_1[2]);
  param_1[0x95] = uVar6;
  lVar5 = *param_2;
  param_1[0x96] = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar7 = param_2[4];
  lVar5 = param_2[3];
  lVar8 = param_2[1];
  param_1[0x98] = param_2[2];
  param_1[0x97] = lVar8;
  param_1[0x9a] = lVar7;
  param_1[0x99] = lVar5;
  FUN_0086db50(param_1 + 0x9b,param_2 + 5);
  FUN_0086db00(param_1 + 0xa2,param_2 + 0xc);
  lVar5 = param_2[0x16];
  *(undefined1 *)(param_1 + 0xad) = 1;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb0] = 0x7fffffffffffffff;
  param_1[0xac] = lVar5;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined2 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  lVar5 = param_2[10];
  param_1[0xcf] = 0x7fffffffffffffff;
  *(undefined4 *)(param_1 + 0xce) = 3;
  param_1[0xcc] = lVar5;
  param_1[0xcd] = lVar5;
  *(undefined2 *)((long)param_1 + 0x674) = 0x100;
  lVar5 = param_2[0xe];
  param_1[0xd1] = param_2[0xf];
  param_1[0xd0] = lVar5;
  param_1[0xd2] = param_2[0x16];
  if ((char)param_2[0x11] == '\x01') {
    lVar5 = param_2[0x10];
  }
  else {
    lVar5 = 0;
  }
  param_1[0xd3] = lVar5;
  if ((char)param_2[0x13] == '\x01') {
    lVar5 = param_2[0x12];
  }
  else {
    lVar5 = 0;
  }
  param_1[0xd4] = lVar5;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  local_88 = param_1 + 6;
  puStack_80 = param_1 + 0xe;
  (**(code **)(*(long *)param_1[2] + 0x10))
            (&local_78,(long *)param_1[2],"WebRTC-Bwe-SafeResetOnRouteChange",0x21);
  ppppplVar1 = (long *****)local_78;
  if (-1 < (char)bStack_61) {
    local_70 = (ulong)bStack_61;
    ppppplVar1 = &local_78;
  }
  FUN_00661cc0(&local_88,2,ppppplVar1,local_70);
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  if (param_1[0x94] != 0) {
    FUN_008dfc90(param_1[0x94],5000);
  }
  return;
}


// ===== 008da91c  FUN_008da91c =====

void FUN_008da91c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d3cd00;
  FUN_008daab0(param_1 + 0xc6);
  if (*(char *)(param_1 + 0xad) == '\x01') {
    FUN_0086db20(param_1 + 0xa2);
    FUN_0086db70(param_1 + 0x9b);
    plVar2 = (long *)param_1[0x96];
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  plVar2 = (long *)param_1[0x95];
  param_1[0x95] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x94];
  param_1[0x94] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x93];
  param_1[0x93] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x92];
  param_1[0x92] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  pvVar3 = (void *)param_1[0x91];
  param_1[0x91] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_008e14c0(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_008de25c(param_1 + 0x81);
  FUN_008f6654(param_1 + 0x25);
  pvVar3 = (void *)param_1[0x24];
  param_1[0x24] = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_008f4314(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_008a56ec(param_1 + 0x17);
  FUN_006634ac(param_1 + 0xe);
  FUN_006634ac(param_1 + 6);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008daa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008daab0  FUN_008daab0 =====

void FUN_008daab0(undefined8 *param_1)

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
    plVar3 = puVar9 + (uVar7 >> 9);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x1ff) * 8;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8) {
      if (lVar4 == 0) goto LAB_008dac18;
      lVar4 = lVar4 + 8;
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
    uVar1 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_008dab90;
    uVar1 = 0x200;
  }
  param_1[4] = uVar1;
LAB_008dab90:
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
LAB_008dac18:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008dac68  FUN_008dac68 =====

void FUN_008dac68(void *param_1)

{
  FUN_008da91c();
  operator_delete(param_1);
  return;
}


// ===== 008dac98  FUN_008dac98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dac98(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar8 = _UNK_00225590;
  uVar7 = _DAT_00225588;
  uVar4 = _UNK_00225560;
  uVar3 = _DAT_00225558;
  uVar2 = _UNK_00225550;
  uVar1 = _DAT_00225548;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar1 = _DAT_00225578;
  uVar6 = _UNK_00225570;
  uVar5 = _DAT_00225568;
  param_1[0xf] = _UNK_00225580;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  uVar4 = _UNK_00225520;
  uVar3 = _DAT_00225518;
  uVar2 = _UNK_00225510;
  uVar1 = _DAT_00225508;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar3 = _UNK_00225540;
  uVar2 = _DAT_00225538;
  uVar1 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  FUN_0086e1ac(param_1);
  FUN_008f504c(&local_50,*(undefined8 *)(param_2 + 0x118),param_3,param_4);
  pvVar9 = (void *)param_1[7];
  if (pvVar9 != (void *)0x0) {
    pvVar10 = (void *)param_1[8];
    uVar11 = (ulong)(((long)pvVar9 - (long)pvVar10) * 0x1333333333333333) >> 3;
    uVar12 = (long)pvVar10 * -0x1333333333333333 - 8U >> 3;
    if (uVar12 <= uVar11) {
      uVar11 = uVar12;
    }
    if ((1 < uVar11) && ((((int)pvVar9 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
      uVar11 = uVar11 & 0x1ffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar11 * -0x28);
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    while (pvVar10 != pvVar9) {
      pvVar10 = (void *)((long)pvVar10 + -0x28);
      if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar9;
    operator_delete(pvVar9);
  }
  param_1[8] = uStack_48;
  param_1[7] = local_50;
  param_1[9] = local_40;
  return;
}


// ===== 008daddc  FUN_008daddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008daddc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_98 [56];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar8 = FUN_006624c8(param_2 + 0x30);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_006624c8(param_2 + 0x70);
    if ((uVar8 & 1) == 0) {
      lVar9 = FUN_008f6c88(param_2 + 0x128);
    }
    else {
      auVar15 = (**(code **)(**(long **)(param_2 + 0x4a8) + 0x18))();
      lVar9 = auVar15._0_8_;
      if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        auVar15 = (**(code **)(**(long **)(param_2 + 0x4a8) + 0x20))();
        lVar9 = auVar15._0_8_;
        if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_008dae7c;
      }
    }
    if (*(char *)(param_3 + 7) == '\x01') {
      if ((long)param_3[6] <= lVar9) {
        lVar9 = param_3[6];
      }
      param_3[6] = lVar9;
    }
    else {
      param_3[6] = lVar9;
      *(undefined1 *)(param_3 + 7) = 1;
    }
  }
LAB_008dae7c:
  uVar10 = FUN_008e0828(*(undefined8 *)(param_2 + 0x10));
  plVar12 = *(long **)(param_2 + 0x4a8);
  *(undefined8 *)(param_2 + 0x4a8) = uVar10;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  pvVar11 = operator_new(0x30);
  FUN_008e14a0(pvVar11,*(undefined8 *)(param_2 + 0x28));
  pvVar14 = *(void **)(param_2 + 0x488);
  *(void **)(param_2 + 0x488) = pvVar11;
  if (pvVar14 != (void *)0x0) {
    FUN_008e14c0(pvVar14);
    operator_delete(pvVar14);
  }
  plVar12 = *(long **)(param_2 + 0x490);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12,param_3);
  }
  pvVar11 = operator_new(0x248);
  FUN_008df008(pvVar11,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x28),
               *(undefined8 *)(param_2 + 0x498));
  plVar12 = *(long **)(param_2 + 0x4a0);
  *(void **)(param_2 + 0x4a0) = pvVar11;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  FUN_008f6890(param_2 + 0x128);
  FUN_008f42c0(*(undefined8 *)(param_2 + 0x118),*param_3);
  uVar7 = _UNK_00225590;
  uVar6 = _DAT_00225588;
  uVar3 = _UNK_00225560;
  uVar2 = _DAT_00225558;
  uVar1 = _UNK_00225550;
  uVar10 = _DAT_00225548;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar1;
  param_1[8] = uVar10;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar5 = _UNK_00225580;
  uVar4 = _DAT_00225578;
  uVar10 = _DAT_00225568;
  param_1[0xd] = _UNK_00225570;
  param_1[0xc] = uVar10;
  uVar3 = _UNK_00225520;
  uVar2 = _DAT_00225518;
  uVar1 = _UNK_00225510;
  uVar10 = _DAT_00225508;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[1] = uVar1;
  *param_1 = uVar10;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = _UNK_00225540;
  uVar1 = _DAT_00225538;
  uVar10 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar10;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  FUN_0086e1ac(param_1);
  FUN_0086db50(auStack_98,param_3 + 1);
  FUN_008db080(&local_60,param_2,auStack_98);
  pvVar11 = (void *)param_1[7];
  if (pvVar11 != (void *)0x0) {
    pvVar14 = (void *)param_1[8];
    uVar8 = (ulong)(((long)pvVar11 - (long)pvVar14) * 0x1333333333333333) >> 3;
    uVar13 = (long)pvVar14 * -0x1333333333333333 - 8U >> 3;
    if (uVar13 <= uVar8) {
      uVar8 = uVar13;
    }
    if ((1 < uVar8) && ((((int)pvVar11 - (int)pvVar14 | -(int)pvVar14) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      pvVar14 = (void *)((long)pvVar14 + uVar8 * -0x28);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (pvVar14 != pvVar11) {
      pvVar14 = (void *)((long)pvVar14 + -0x28);
      if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar11;
    operator_delete(pvVar11);
  }
  uVar1 = local_50;
  uVar10 = uStack_58;
  uStack_58 = 0;
  local_50 = 0;
  param_1[8] = uVar10;
  param_1[7] = local_60;
  param_1[9] = uVar1;
  local_60 = 0;
  FUN_0086db70(auStack_98);
  FUN_008db174(param_2,param_1,*param_3);
  return;
}


// ===== 008db080  FUN_008db080 =====

void FUN_008db080(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 2) == '\x01') {
    uVar1 = param_3[1];
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(param_2 + 0x570) = uVar1;
  if (*(char *)(param_3 + 4) == '\x01') {
    uVar1 = param_3[3];
  }
  else {
    uVar1 = 0x7fffffffffffffff;
  }
  *(undefined8 *)(param_2 + 0x580) = uVar1;
  uVar1 = param_3[5];
  *(undefined1 *)(param_2 + 0x590) = *(undefined1 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 0x588) = uVar1;
  FUN_008dc1b8(param_2);
  FUN_008f6968(param_2 + 0x128,*(undefined8 *)(param_2 + 0x588),*(undefined8 *)(param_2 + 0x590),
               *(undefined8 *)(param_2 + 0x578),*(undefined8 *)(param_2 + 0x580),*param_3);
  if (*(char *)(param_2 + 0x590) == '\x01') {
    FUN_008dfc04(*(undefined8 *)(param_2 + 0x4a0),*(undefined8 *)(param_2 + 0x588));
  }
  FUN_008dfc90(*(undefined8 *)(param_2 + 0x4a0),*(undefined8 *)(param_2 + 0x578));
  if (*(char *)(param_2 + 0x590) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x588);
  }
  else {
    uVar1 = 0;
  }
  FUN_008f4320(param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x578),uVar1,
               *(undefined8 *)(param_2 + 0x580),*param_3);
  return;
}


// ===== 008db174  FUN_008db174 =====

void FUN_008db174(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  char *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 uStack_51;
  
  bVar2 = *(byte *)(param_1 + 0x338);
  lVar17 = *(long *)(param_1 + 0x340);
  uVar7 = FUN_008f6c88(param_1 + 0x128);
  iVar5 = FUN_008f6cd4(param_1 + 0x128);
  dVar18 = 0.0;
  uVar10 = uVar7;
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar8 = FUN_008f5ee0(*(long *)(param_1 + 0x120),uVar7 & 0xffffffff);
    iVar6 = FUN_008f6c7c(param_1 + 0x128);
    uVar10 = (long)iVar6;
    if ((long)iVar6 <= (long)(uVar8 & 0xffffffff)) {
      uVar10 = uVar8 & 0xffffffff;
    }
    uVar8 = FUN_008a5744(param_1 + 0xb8);
    if ((uVar8 & 1) != 0) {
      dVar18 = (double)(long)(uVar7 - uVar10) / (double)(long)uVar7;
    }
  }
  if (((((uVar7 != *(ulong *)(param_1 + 0x660)) || (iVar5 != *(int *)(param_1 + 0x670))) ||
       (*(char *)(param_1 + 0x675) != '\x01')) ||
      ((bVar2 != *(byte *)(param_1 + 0x674) || (lVar17 != *(long *)(param_1 + 0x678))))) ||
     (uVar10 != *(ulong *)(param_1 + 0x668))) {
    *(ulong *)(param_1 + 0x660) = uVar7;
    *(ulong *)(param_1 + 0x668) = uVar10;
    *(ushort *)(param_1 + 0x674) = bVar2 | 0x100;
    *(long *)(param_1 + 0x678) = lVar17;
    *(int *)(param_1 + 0x670) = iVar5;
    FUN_008de4b4(param_1 + 0x408,uVar7);
    uVar9 = FUN_008dfc9c(*(undefined8 *)(param_1 + 0x4a0));
    uVar8 = FUN_008a5744(param_1 + 0xb8);
    bVar4 = (uVar8 & 1) == 0;
    uVar8 = uVar7;
    if (bVar4) {
      uVar8 = uVar10;
    }
    if (bVar4) {
      dVar18 = 0.0;
    }
    if (*(char *)(param_2 + 0x90) == '\x01') {
      *(ulong *)(param_2 + 0x50) = param_3;
      *(ulong *)(param_2 + 0x58) = param_3;
      *(undefined8 *)(param_2 + 0x60) = 0x7fffffffffffffff;
      *(long *)(param_2 + 0x68) = lVar17;
      *(undefined8 *)(param_2 + 0x70) = uVar9;
      *(float *)(param_2 + 0x78) = (float)bVar2 / 255.0;
      *(undefined4 *)(param_2 + 0x7c) = 0xaaaaaaaa;
      *(ulong *)(param_2 + 0x80) = uVar8;
      *(double *)(param_2 + 0x88) = dVar18;
    }
    else {
      if (param_2 == -0x50) goto LAB_008db630;
      *(ulong *)(param_2 + 0x80) = uVar8;
      *(undefined8 *)(param_2 + 0x60) = 0x7fffffffffffffff;
      *(long *)(param_2 + 0x68) = lVar17;
      *(ulong *)(param_2 + 0x50) = param_3;
      *(ulong *)(param_2 + 0x58) = param_3;
      *(undefined8 *)(param_2 + 0x70) = uVar9;
      *(float *)(param_2 + 0x78) = (float)bVar2 / 255.0;
      *(undefined4 *)(param_2 + 0x7c) = 0xaaaaaaaa;
      *(double *)(param_2 + 0x88) = dVar18;
      *(undefined1 *)(param_2 + 0x90) = 1;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x118);
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uVar10 = FUN_008f6cd4(param_1 + 0x128);
    uVar8 = FUN_008f6ce0(param_1 + 0x128);
    uVar3 = *(int *)(*(long *)(param_1 + 0x4a0) + 0x240) - 1;
    uVar13 = 3;
    if (1 < uVar3) {
      uVar13 = 4;
    }
    if (((uVar8 & 1) == 0) && (1 < uVar3)) {
      uVar13 = *(undefined4 *)(&DAT_001f49c0 + (uVar10 & 0xffffffff) * 4);
    }
    FUN_008f5094(&local_80,uVar9,uVar7,uVar13,param_3);
    FUN_008dcf0c(param_2 + 0x38,*(undefined8 *)(param_2 + 0x40),local_80,puStack_78,
                 ((long)puStack_78 - (long)local_80 >> 3) * -0x3333333333333333);
    lVar14 = *(long *)(param_1 + 0x698);
    lVar17 = *(long *)(param_1 + 0x660);
    if (*(char *)(param_1 + 0x688) == '\x01') {
      dVar18 = *(double *)(param_1 + 0x680);
    }
    else {
      dVar18 = DAT_001f5a30;
      if (*(char *)(param_1 + 0x599) == '\0') {
        dVar18 = 2.5;
      }
    }
    lVar11 = lVar14;
    if (lVar14 <= lVar17) {
      lVar11 = lVar17;
    }
    lVar11 = (long)(dVar18 * (double)lVar11);
    if ((((*(char *)(param_1 + 0x110) == '\x01') && (*(char *)(param_1 + 0x628) == '\x01')) &&
        (lVar16 = *(long *)(param_1 + 0x5d0), lVar16 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) &&
       (lVar16 < lVar11)) {
      if (lVar16 <= lVar14) {
        lVar16 = lVar14;
      }
      lVar11 = lVar16;
      if (lVar16 <= lVar17) {
        lVar11 = lVar17;
      }
    }
    plVar1 = (long *)(param_1 + 0x6a0);
    plVar15 = plVar1;
    if ((*(int *)(param_1 + 0x670) == 1) && (plVar15 = (long *)(param_1 + 0x660), lVar17 <= *plVar1)
       ) {
      plVar15 = plVar1;
    }
    lVar17 = *(long *)(param_1 + 0x668);
    if (*plVar15 <= *(long *)(param_1 + 0x668)) {
      lVar17 = *plVar15;
    }
    FUN_0086e368(&local_a0,param_3,lVar11,lVar17,*(undefined8 *)(param_1 + 0x690));
    if (*(char *)(param_2 + 0x30) != '\x01') {
      if ((undefined8 *)(param_2 + 0x10) == (undefined8 *)0x0) {
LAB_008db630:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(param_2 + 0x30) = 1;
    }
    *(undefined8 *)(param_2 + 0x18) = uStack_98;
    *(undefined8 *)(param_2 + 0x10) = local_a0;
    *(undefined8 *)(param_2 + 0x28) = uStack_88;
    *(undefined1 **)(param_2 + 0x20) = local_90;
    uVar10 = FUN_0044075c();
    if ((uVar10 & 1) == 0) {
      local_a0 = "../../modules/congestion_controller/goog_cc/goog_cc_network_control.cc";
      uStack_98 = 0x1438;
      local_90 = &uStack_51;
      if ((long)param_3 < 0) {
        uVar10 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
      }
      else {
        uVar10 = param_3 / 1000;
        if (499 < param_3 % 1000) {
          uVar10 = uVar10 + 1;
        }
      }
      FUN_00623bb0(&DAT_002255a0,
                   "../../modules/congestion_controller/goog_cc/goog_cc_network_control.cc",0x1438,
                   &DAT_001c3803,uVar10," pushback_target_bps=",*(undefined8 *)(param_1 + 0x668),
                   " estimate_bps=",uVar7);
    }
    if (local_80 != (undefined1 *)0x0) {
      uVar10 = (ulong)(((long)local_80 - (long)puStack_78) * 0x1333333333333333) >> 3;
      uVar7 = (long)puStack_78 * -0x1333333333333333 - 8U >> 3;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      puVar12 = puStack_78;
      if ((1 < uVar10) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
        uVar10 = uVar10 & 0x1ffffffffffffffe;
        puVar12 = puStack_78 + uVar10 * -0x28;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      while (puVar12 != local_80) {
        puVar12 = puVar12 + -0x28;
        if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_78 = local_80;
      operator_delete(local_80);
    }
  }
  return;
}


// ===== 008db644  FUN_008db644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008db644(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [56];
  
  uVar8 = _UNK_00225590;
  uVar7 = _DAT_00225588;
  uVar4 = _UNK_00225560;
  uVar3 = _DAT_00225558;
  uVar2 = _UNK_00225550;
  uVar22 = _DAT_00225548;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar2;
  param_1[8] = uVar22;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar22 = _DAT_00225578;
  uVar6 = _UNK_00225570;
  uVar5 = _DAT_00225568;
  param_1[0xf] = _UNK_00225580;
  param_1[0xe] = uVar22;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  uVar4 = _UNK_00225520;
  uVar3 = _DAT_00225518;
  uVar2 = _UNK_00225510;
  uVar22 = _DAT_00225508;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar22;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar3 = _UNK_00225540;
  uVar2 = _DAT_00225538;
  uVar22 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar22;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  FUN_0086e1ac(param_1);
  if (*(char *)(param_2 + 0x568) == '\x01') {
    FUN_0086db50(auStack_68,param_2 + 0x4d8);
    FUN_008db080(&local_90,param_2,auStack_68);
    pvVar11 = (void *)param_1[7];
    if (pvVar11 != (void *)0x0) {
      pvVar13 = (void *)param_1[8];
      uVar16 = (ulong)(((long)pvVar11 - (long)pvVar13) * 0x1333333333333333) >> 3;
      uVar19 = (long)pvVar13 * -0x1333333333333333 - 8U >> 3;
      if (uVar19 <= uVar16) {
        uVar16 = uVar19;
      }
      if ((1 < uVar16) && ((((int)pvVar11 - (int)pvVar13 | -(int)pvVar13) & 7U) == 0)) {
        uVar16 = uVar16 & 0x1ffffffffffffffe;
        pvVar13 = (void *)((long)pvVar13 + uVar16 * -0x28);
        do {
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
      }
      do {
        if (pvVar13 == pvVar11) {
          param_1[8] = pvVar11;
          operator_delete(pvVar11);
          goto LAB_008db764;
        }
        pvVar13 = (void *)((long)pvVar13 + -0x28);
      } while (pvVar13 != (void *)0x0);
      goto LAB_008dbb38;
    }
LAB_008db764:
    puVar9 = local_80;
    puVar15 = puStack_88;
    puStack_88 = (undefined1 *)0x0;
    local_80 = (undefined1 *)0x0;
    param_1[8] = puVar15;
    param_1[7] = local_90;
    param_1[9] = puVar9;
    local_90 = (undefined1 *)0x0;
    FUN_0086db70(auStack_68);
    lVar17 = *(long *)(param_2 + 0x698);
    lVar14 = *(long *)(param_2 + 0x660);
    if (*(char *)(param_2 + 0x688) == '\x01') {
      dVar23 = *(double *)(param_2 + 0x680);
    }
    else {
      dVar23 = DAT_001f5a30;
      if (*(char *)(param_2 + 0x599) == '\0') {
        dVar23 = 2.5;
      }
    }
    lVar12 = lVar17;
    if (lVar17 <= lVar14) {
      lVar12 = lVar14;
    }
    lVar12 = (long)(dVar23 * (double)lVar12);
    if ((((*(char *)(param_2 + 0x110) == '\x01') && (*(char *)(param_2 + 0x628) == '\x01')) &&
        (lVar20 = *(long *)(param_2 + 0x5d0), lVar20 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) &&
       (lVar20 < lVar12)) {
      if (lVar20 <= lVar17) {
        lVar20 = lVar17;
      }
      lVar12 = lVar20;
      if (lVar20 <= lVar14) {
        lVar12 = lVar14;
      }
    }
    plVar21 = (long *)(param_2 + 0x6a0);
    plVar18 = plVar21;
    if ((*(int *)(param_2 + 0x670) == 1) &&
       (plVar18 = (long *)(param_2 + 0x660), lVar14 <= *plVar21)) {
      plVar18 = plVar21;
    }
    lVar14 = *(long *)(param_2 + 0x668);
    if (*plVar18 <= *(long *)(param_2 + 0x668)) {
      lVar14 = *plVar18;
    }
    FUN_0086e368(&local_90,*param_3,lVar12,lVar14,*(undefined8 *)(param_2 + 0x690));
    param_1[3] = puStack_88;
    param_1[2] = local_90;
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    if ((((*(byte *)(param_2 + 0x568) & 1) == 0) ||
        ((*(char *)(param_2 + 0x519) == '\x01' &&
         (FUN_008f5414(*(undefined8 *)(param_2 + 0x118),*(undefined1 *)(param_2 + 0x518)),
         (*(byte *)(param_2 + 0x568) & 1) == 0)))) ||
       ((*(char *)(param_2 + 0x51b) == '\x01' &&
        (FUN_008f5420(*(undefined8 *)(param_2 + 0x118),*(undefined1 *)(param_2 + 0x51a)),
        (*(byte *)(param_2 + 0x568) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if ((*(byte *)(param_2 + 0x558) & 1) != 0) {
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_008f4eb0(&local_90,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x550),
                   *param_3);
      FUN_008dcf0c(param_1 + 7,param_1[8],local_90,puStack_88,
                   ((long)puStack_88 - (long)local_90 >> 3) * -0x3333333333333333);
      if (local_90 != (undefined1 *)0x0) {
        uVar16 = (ulong)(((long)local_90 - (long)puStack_88) * 0x1333333333333333) >> 3;
        uVar19 = (long)puStack_88 * -0x1333333333333333 - 8U >> 3;
        if (uVar19 <= uVar16) {
          uVar16 = uVar19;
        }
        puVar15 = puStack_88;
        if ((1 < uVar16) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 7U) == 0)) {
          uVar16 = uVar16 & 0x1ffffffffffffffe;
          puVar15 = puStack_88 + uVar16 * -0x28;
          do {
            uVar16 = uVar16 - 2;
          } while (uVar16 != 0);
        }
        do {
          if (puVar15 == local_90) {
            puStack_88 = local_90;
            operator_delete(local_90);
            goto LAB_008db98c;
          }
          puVar15 = puVar15 + -0x28;
        } while (puVar15 != (undefined1 *)0x0);
        goto LAB_008dbb38;
      }
LAB_008db98c:
      if (*(char *)(param_2 + 0x568) != '\x01') goto LAB_008db9d8;
    }
    FUN_0086db20(param_2 + 0x510);
    FUN_0086db70(param_2 + 0x4d8);
    plVar21 = *(long **)(param_2 + 0x4b0);
    if ((plVar21 != (long *)0x0) && (iVar10 = FUN_00d0f7a0(0xffffffff,plVar21 + 1), iVar10 == 1)) {
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    *(undefined1 *)(param_2 + 0x568) = 0;
  }
LAB_008db9d8:
  if ((*(long *)(param_2 + 0x120) != 0) && (*(char *)(param_3 + 2) == '\x01')) {
    FUN_008f5e84(*(long *)(param_2 + 0x120),param_3[1]);
  }
  FUN_008f6e84(param_2 + 0x128,*param_3);
  uVar22 = *(undefined8 *)(param_2 + 0x118);
  auVar24 = FUN_008de528(param_2 + 0x408);
  FUN_008f542c(uVar22,auVar24._0_8_,auVar24._8_8_ & 0xff);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008f5834(&local_90,*(undefined8 *)(param_2 + 0x118),*param_3);
  FUN_008dcf0c(param_1 + 7,param_1[8],local_90,puStack_88,
               ((long)puStack_88 - (long)local_90 >> 3) * -0x3333333333333333);
  uVar16 = FUN_008a56f4(param_2 + 0xb8);
  if (((uVar16 & 1) != 0) && (*(long *)(param_2 + 0x658) != 0)) {
    FUN_008dbb88(param_2);
  }
  if ((*(long *)(param_2 + 0x120) == 0) || (*(char *)(param_2 + 0x6b8) != '\x01')) {
    uVar1 = *(undefined1 *)(param_2 + 0x6b8);
    *param_1 = *(undefined8 *)(param_2 + 0x6b0);
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  else {
    FUN_008f5e90(*(long *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x6b0));
  }
  FUN_008db174(param_2,param_1,*param_3);
  if (local_90 == (undefined1 *)0x0) {
    return;
  }
  uVar16 = (ulong)(((long)local_90 - (long)puStack_88) * 0x1333333333333333) >> 3;
  uVar19 = (long)puStack_88 * -0x1333333333333333 - 8U >> 3;
  if (uVar19 <= uVar16) {
    uVar16 = uVar19;
  }
  puVar15 = puStack_88;
  if ((1 < uVar16) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 7U) == 0)) {
    uVar16 = uVar16 & 0x1ffffffffffffffe;
    puVar15 = puStack_88 + uVar16 * -0x28;
    do {
      uVar16 = uVar16 - 2;
    } while (uVar16 != 0);
  }
  do {
    if (puVar15 == local_90) {
      puStack_88 = local_90;
      operator_delete(local_90);
      return;
    }
    puVar15 = puVar15 + -0x28;
  } while (puVar15 != (undefined1 *)0x0);
LAB_008dbb38:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008dbb88  FUN_008dbb88 =====

void FUN_008dbb88(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  lVar5 = *(long *)(param_1 + 0x638);
  if (lVar5 == *(long *)(param_1 + 0x640)) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x650);
    uVar1 = *(long *)(param_1 + 0x658) + uVar9;
    plVar8 = (long *)(lVar5 + (uVar9 >> 9) * 8);
    plVar6 = (long *)(*plVar8 + (uVar9 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)(lVar5 + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8);
    if (plVar6 != plVar2) {
      plVar10 = (long *)*plVar8;
      plVar3 = plVar6;
      plVar11 = plVar6;
      while( true ) {
        plVar6 = plVar3;
        plVar11 = plVar11 + 1;
        if ((long)plVar11 - (long)plVar10 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar10 = (long *)*plVar8;
          plVar11 = plVar10;
        }
        if (plVar11 == plVar2) break;
        plVar3 = plVar11;
        if (*plVar6 <= *plVar11) {
          plVar3 = plVar6;
        }
      }
    }
  }
  lVar7 = *plVar6;
  lVar4 = FUN_008a5700(param_1 + 0xb8);
  lVar5 = -0x8000000000000000;
  if (lVar4 * 1000 != -0x8000000000000000 && lVar7 * 1000 != -0x8000000000000000) {
    lVar5 = lVar4 * 1000 + lVar7 * 1000;
  }
  lVar5 = (long)(&uleb128_003d0900 + lVar5 * *(long *)(param_1 + 0x660)) / 8000000;
  plVar6 = (long *)(param_1 + 0x6b0);
  if (*(char *)(param_1 + 0x6b8) == '\x01') {
    lVar4 = *plVar6;
    lVar5 = (lVar4 + lVar5) / 2;
    if (lVar5 < 0xbb9) {
      lVar5 = 3000;
    }
    lVar7 = 3000;
    if (lVar4 != -0x8000000000000000) {
      lVar7 = lVar5;
    }
    lVar5 = 0x3fffffffffffffff;
    if (lVar4 != 0x7fffffffffffffff) {
      lVar5 = lVar7;
    }
    *plVar6 = lVar5;
  }
  else {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (lVar5 < 0xbb9) {
      lVar5 = 3000;
    }
    *(undefined1 *)(param_1 + 0x6b8) = 1;
    *(long *)(param_1 + 0x6b0) = lVar5;
  }
  return;
}


// ===== 008dbd10  FUN_008dbd10 =====

void FUN_008dbd10(undefined8 param_1,long param_2)

{
  FUN_008f6d54(param_2 + 0x128);
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dbd40  FUN_008dbd40 =====

void FUN_008dbd40(undefined8 param_1,long param_2,undefined8 *param_3)

{
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    if (*(long *)(param_2 + 0x4a0) != 0) {
      FUN_008dfbf8(*(long *)(param_2 + 0x4a0),param_3[1]);
    }
    FUN_008f79c8(param_2 + 0x128,param_3[1],*param_3);
  }
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dbd9c  FUN_008dbd9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dbd9c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  long *plVar9;
  
  FUN_008de2b4(param_2 + 0x408,param_3[1],*param_3);
  plVar9 = *(long **)(param_2 + 0x4a8);
  FUN_008de528(param_2 + 0x408);
  (**(code **)(*plVar9 + 0x28))(plVar9,extraout_w1 & 1);
  if ((*(byte *)(param_2 + 0x598) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x598) = 1;
    FUN_008f7cc0(param_2 + 0x128,*param_3,0);
  }
  FUN_008f7ccc(param_2 + 0x128,param_3);
  if (*(long *)(param_2 + 0x120) != 0) {
    FUN_008f5e78(*(long *)(param_2 + 0x120),param_3[8]);
    uVar8 = _UNK_00225590;
    uVar7 = _DAT_00225588;
    uVar4 = _UNK_00225560;
    uVar3 = _DAT_00225558;
    uVar2 = _UNK_00225550;
    uVar1 = _DAT_00225548;
    param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    uVar6 = _UNK_00225580;
    uVar5 = _DAT_00225578;
    uVar1 = _DAT_00225568;
    param_1[0xd] = _UNK_00225570;
    param_1[0xc] = uVar1;
    uVar4 = _UNK_00225520;
    uVar3 = _DAT_00225518;
    uVar2 = _UNK_00225510;
    uVar1 = _DAT_00225508;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar3 = _UNK_00225540;
    uVar2 = _DAT_00225538;
    uVar1 = _DAT_00225528;
    param_1[5] = _UNK_00225530;
    param_1[4] = uVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    FUN_0086e1ac(param_1);
    FUN_008db174(param_2,param_1,*param_3);
    return;
  }
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dbea0  FUN_008dbea0 =====

void FUN_008dbea0(undefined8 param_1)

{
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dbeac  FUN_008dbeac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dbeac(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar9 = _UNK_00225590;
  uVar8 = _DAT_00225588;
  uVar5 = _UNK_00225560;
  uVar4 = _DAT_00225558;
  uVar3 = _UNK_00225550;
  uVar18 = _DAT_00225548;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar3;
  param_1[8] = uVar18;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  uVar18 = _DAT_00225578;
  uVar7 = _UNK_00225570;
  uVar6 = _DAT_00225568;
  param_1[0xf] = _UNK_00225580;
  param_1[0xe] = uVar18;
  param_1[0x11] = uVar9;
  param_1[0x10] = uVar8;
  uVar5 = _UNK_00225520;
  uVar4 = _DAT_00225518;
  uVar3 = _UNK_00225510;
  uVar18 = _DAT_00225508;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[1] = uVar3;
  *param_1 = uVar18;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar4 = _UNK_00225540;
  uVar3 = _DAT_00225538;
  uVar18 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar18;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  FUN_0086e1ac(param_1);
  if (*(char *)((long)param_3 + 9) == '\x01') {
    FUN_008f5414(*(undefined8 *)(param_2 + 0x118),*(undefined1 *)(param_3 + 1));
  }
  if (*(char *)(param_3 + 9) == '\x01') {
    FUN_008f4eb0(&local_50,*(undefined8 *)(param_2 + 0x118),param_3[8],*param_3);
    pvVar10 = (void *)param_1[7];
    if (pvVar10 != (void *)0x0) {
      pvVar12 = (void *)param_1[8];
      uVar14 = (ulong)(((long)pvVar10 - (long)pvVar12) * 0x1333333333333333) >> 3;
      uVar17 = (long)pvVar12 * -0x1333333333333333 - 8U >> 3;
      if (uVar17 <= uVar14) {
        uVar14 = uVar17;
      }
      if ((1 < uVar14) && ((((int)pvVar10 - (int)pvVar12 | -(int)pvVar12) & 7U) == 0)) {
        uVar14 = uVar14 & 0x1ffffffffffffffe;
        pvVar12 = (void *)((long)pvVar12 + uVar14 * -0x28);
        do {
          uVar14 = uVar14 - 2;
        } while (uVar14 != 0);
      }
      while (pvVar12 != pvVar10) {
        pvVar12 = (void *)((long)pvVar12 + -0x28);
        if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[8] = pvVar10;
      operator_delete(pvVar10);
    }
    param_1[8] = uStack_48;
    param_1[7] = local_50;
    param_1[9] = local_40;
  }
  if ((*(char *)(param_3 + 3) == '\x01') &&
     ((*(char *)(param_2 + 0x688) != '\x01' || ((double)param_3[2] != *(double *)(param_2 + 0x680)))
     )) {
    uVar18 = param_3[2];
    *(undefined1 *)(param_2 + 0x688) = *(undefined1 *)(param_3 + 3);
    bVar2 = true;
    *(undefined8 *)(param_2 + 0x680) = uVar18;
  }
  else {
    bVar2 = false;
  }
  if ((*(char *)(param_3 + 5) == '\x01') && (param_3[4] != *(long *)(param_2 + 0x698))) {
    *(undefined8 *)(param_2 + 0x698) = param_3[4];
    if (*(char *)(param_2 + 0xb0) == '\x01') {
      FUN_008dc1b8(param_2);
      FUN_008dfc90(*(undefined8 *)(param_2 + 0x4a0),*(undefined8 *)(param_2 + 0x578));
      FUN_008f69fc(param_2 + 0x128,*(undefined8 *)(param_2 + 0x578),*(undefined8 *)(param_2 + 0x580)
                  );
    }
    bVar2 = true;
  }
  if ((*(char *)(param_3 + 7) == '\x01') && (param_3[6] != *(long *)(param_2 + 0x6a0))) {
    *(undefined8 *)(param_2 + 0x6a0) = param_3[6];
  }
  else if (!bVar2) {
    return;
  }
  lVar15 = *(long *)(param_2 + 0x698);
  lVar13 = *(long *)(param_2 + 0x660);
  if (*(char *)(param_2 + 0x688) == '\x01') {
    dVar20 = *(double *)(param_2 + 0x680);
  }
  else {
    dVar20 = DAT_001f5a30;
    if (*(char *)(param_2 + 0x599) == '\0') {
      dVar20 = 2.5;
    }
  }
  lVar11 = lVar15;
  if (lVar15 <= lVar13) {
    lVar11 = lVar13;
  }
  lVar11 = (long)(dVar20 * (double)lVar11);
  if ((((*(char *)(param_2 + 0x110) == '\x01') && (*(char *)(param_2 + 0x628) == '\x01')) &&
      (lVar19 = *(long *)(param_2 + 0x5d0), lVar19 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) &&
     (lVar19 < lVar11)) {
    if (lVar19 <= lVar15) {
      lVar19 = lVar15;
    }
    lVar11 = lVar19;
    if (lVar19 <= lVar13) {
      lVar11 = lVar13;
    }
  }
  plVar1 = (long *)(param_2 + 0x6a0);
  plVar16 = plVar1;
  if ((*(int *)(param_2 + 0x670) == 1) && (plVar16 = (long *)(param_2 + 0x660), lVar13 <= *plVar1))
  {
    plVar16 = plVar1;
  }
  lVar13 = *(long *)(param_2 + 0x668);
  if (*plVar16 <= *(long *)(param_2 + 0x668)) {
    lVar13 = *plVar16;
  }
  FUN_0086e368(&local_50,*param_3,lVar11,lVar13,*(undefined8 *)(param_2 + 0x690));
  param_1[3] = uStack_48;
  param_1[2] = local_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}


// ===== 008dc1b8  FUN_008dc1b8 =====

void FUN_008dc1b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x570);
  if (lVar4 < 0x1389) {
    lVar4 = 5000;
  }
  *(long *)(param_1 + 0x578) = lVar4;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    lVar1 = 0x698;
    if (*(long *)(param_1 + 0x698) <= lVar4) {
      lVar1 = 0x578;
    }
    lVar4 = *(long *)(param_1 + lVar1);
    *(long *)(param_1 + 0x578) = lVar4;
  }
  if (*(long *)(param_1 + 0x580) < lVar4) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/goog_cc_network_control.cc",0xae2,
                   "max bitrate smaller than min bitrate");
    }
    lVar4 = *(long *)(param_1 + 0x578);
    *(long *)(param_1 + 0x580) = lVar4;
  }
  if ((*(char *)(param_1 + 0x590) == '\x01') && (*(long *)(param_1 + 0x588) < lVar4)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/goog_cc_network_control.cc",0xb02,
                   "start bitrate smaller than min bitrate");
    }
    if (*(char *)(param_1 + 0x590) == '\x01') {
      uVar3 = *(undefined8 *)(param_1 + 0x578);
    }
    else {
      if ((long *)(param_1 + 0x588) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar3 = *(undefined8 *)(param_1 + 0x578);
      *(undefined1 *)(param_1 + 0x590) = 1;
    }
    *(undefined8 *)(param_1 + 0x588) = uVar3;
  }
  return;
}


// ===== 008dc2d4  FUN_008dc2d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dc2d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_88 [56];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar8 = _UNK_00225590;
  uVar7 = _DAT_00225588;
  uVar4 = _UNK_00225560;
  uVar3 = _DAT_00225558;
  uVar2 = _UNK_00225550;
  uVar1 = _DAT_00225548;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar1 = _DAT_00225578;
  uVar6 = _UNK_00225570;
  uVar5 = _DAT_00225568;
  param_1[0xf] = _UNK_00225580;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  uVar4 = _UNK_00225520;
  uVar3 = _DAT_00225518;
  uVar2 = _UNK_00225510;
  uVar1 = _DAT_00225508;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar3 = _UNK_00225540;
  uVar2 = _DAT_00225538;
  uVar1 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  FUN_0086e1ac(param_1);
  FUN_0086db50(auStack_88,param_3);
  FUN_008db080(&local_50,param_2,auStack_88);
  pvVar9 = (void *)param_1[7];
  if (pvVar9 != (void *)0x0) {
    pvVar10 = (void *)param_1[8];
    uVar11 = (ulong)(((long)pvVar9 - (long)pvVar10) * 0x1333333333333333) >> 3;
    uVar12 = (long)pvVar10 * -0x1333333333333333 - 8U >> 3;
    if (uVar12 <= uVar11) {
      uVar11 = uVar12;
    }
    if ((1 < uVar11) && ((((int)pvVar9 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
      uVar11 = uVar11 & 0x1ffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar11 * -0x28);
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    while (pvVar10 != pvVar9) {
      pvVar10 = (void *)((long)pvVar10 + -0x28);
      if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[8] = pvVar9;
    operator_delete(pvVar9);
  }
  uVar2 = local_40;
  uVar1 = uStack_48;
  uStack_48 = 0;
  local_40 = 0;
  param_1[8] = uVar1;
  param_1[7] = local_50;
  param_1[9] = uVar2;
  local_50 = 0;
  FUN_0086db70(auStack_88);
  FUN_008db174(param_2,param_1,*param_3);
  return;
}


// ===== 008dc43c  FUN_008dc43c =====

void FUN_008dc43c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  FUN_008f7390(param_2 + 0x128,param_3[3],param_3[3] + param_3[4],*param_3);
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dc47c  FUN_008dc47c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dc47c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint local_254;
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
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 local_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  long *local_110;
  long *plStack_108;
  undefined1 *local_100;
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
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
  undefined8 local_70;
  
  if (param_3[3] == param_3[4]) {
    FUN_0086e1ac(param_1);
    return;
  }
  if ((*(byte *)(param_2 + 0x599) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x599) = 1;
  }
  if (*(long *)(param_2 + 0x120) != 0) {
    FUN_008f5e78(*(long *)(param_2 + 0x120),param_3[1]);
  }
  plStack_108 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_110 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086df08(&local_110,param_3);
  if (local_110 == plStack_108) {
LAB_008dc7ac:
    local_254 = 0;
  }
  else {
    uVar17 = ((long)plStack_108 - (long)local_110) * 0xdb6db6db6db6db7 - 0x10U >> 4;
    if ((uVar17 == 0) || (((uint)((int)plStack_108 - (int)local_110) >> 3 & 1) != 0)) {
      lVar18 = -0x8000000000000000;
      plVar24 = local_110;
LAB_008dc5ac:
      do {
        plVar1 = plVar24 + 0xe;
        if (lVar18 <= plVar24[9]) {
          lVar18 = plVar24[9];
        }
        plVar24 = plVar1;
      } while (plVar1 != plStack_108);
    }
    else {
      uVar17 = uVar17 + 1;
      uVar23 = uVar17 & 0x1ffffffffffffffe;
      lVar20 = -0x8000000000000000;
      lVar18 = -0x8000000000000000;
      plVar24 = local_110 + 0x17;
      do {
        if (lVar18 <= plVar24[-0xe]) {
          lVar18 = plVar24[-0xe];
        }
        if (lVar20 <= *plVar24) {
          lVar20 = *plVar24;
        }
        uVar23 = uVar23 - 2;
        plVar24 = plVar24 + 0x1c;
      } while (uVar23 != 0);
      if (lVar18 <= lVar20) {
        lVar18 = lVar20;
      }
      plVar24 = local_110 + (uVar17 & 0x1ffffffffffffffe) * 0xe;
      if (uVar17 != (uVar17 & 0x1ffffffffffffffe)) goto LAB_008dc5ac;
    }
    lVar19 = *param_3;
    uVar17 = 0x8000000000000000;
    lVar20 = 0x7fffffffffffffff;
    plVar24 = local_110;
    do {
      lVar21 = *plVar24;
      uVar23 = 0x8000000000000000;
      if (lVar21 != 0x7fffffffffffffff && lVar19 != -0x8000000000000000) {
        uVar23 = lVar19 - lVar21;
      }
      lVar22 = plVar24[9];
      plVar24 = plVar24 + 0xe;
      uVar25 = 0x7fffffffffffffff;
      if (lVar21 != -0x8000000000000000 && lVar19 != 0x7fffffffffffffff) {
        uVar25 = uVar23;
      }
      lVar21 = -0x8000000000000000;
      if (lVar22 != 0x7fffffffffffffff && lVar18 != -0x8000000000000000) {
        lVar21 = lVar18 - lVar22;
      }
      lVar3 = 0x7fffffffffffffff;
      if (lVar22 != -0x8000000000000000 && lVar18 != 0x7fffffffffffffff) {
        lVar3 = lVar21;
      }
      lVar21 = uVar25 - lVar3;
      if (lVar20 <= (long)(uVar25 - lVar3)) {
        lVar21 = lVar20;
      }
      lVar22 = -0x8000000000000000;
      if (lVar3 != 0x7fffffffffffffff && uVar25 != 0x8000000000000000) {
        lVar22 = lVar21;
      }
      lVar21 = lVar20;
      if (lVar3 != -0x8000000000000000) {
        lVar21 = lVar22;
      }
      if (uVar25 != 0x7fffffffffffffff) {
        lVar20 = lVar21;
      }
      if ((long)uVar17 <= (long)uVar25) {
        uVar17 = uVar25;
      }
    } while (plVar24 != plStack_108);
    if (0xfffffffffffffffd < uVar17 + 0x7fffffffffffffff) goto LAB_008dc7ac;
    uVar23 = uVar17 / 1000;
    lVar18 = *(long *)(param_2 + 0x640);
    if (499 < uVar17 % 1000) {
      uVar23 = uVar23 + 1;
    }
    lVar19 = *(long *)(param_2 + 0x638);
    if ((uVar17 & 0x8000000000000000) != 0) {
      uVar23 = -(-uVar17 / 1000) - (ulong)(500 < -uVar17 % 1000);
    }
    lVar21 = 0;
    if (lVar18 != lVar19) {
      lVar21 = (lVar18 - lVar19) * 0x40 + -1;
    }
    if (lVar21 == *(long *)(param_2 + 0x658) + *(long *)(param_2 + 0x650)) {
      FUN_008dd1e0(param_2 + 0x630);
      lVar19 = *(long *)(param_2 + 0x638);
      lVar18 = *(long *)(param_2 + 0x640);
    }
    if ((lVar19 == lVar18) ||
       (uVar17 = *(long *)(param_2 + 0x658) + *(long *)(param_2 + 0x650),
       puVar2 = (ulong *)(*(long *)(lVar19 + (uVar17 >> 9) * 8) + (uVar17 & 0x1ff) * 8),
       puVar2 == (ulong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar2 = uVar23;
    lVar18 = *(long *)(param_2 + 0x658);
    uVar17 = lVar18 + 1;
    *(ulong *)(param_2 + 0x658) = uVar17;
    if (0x20 < uVar17) {
      uVar17 = *(ulong *)(param_2 + 0x650);
      if ((*(undefined8 **)(param_2 + 0x638))[uVar17 >> 9] + (uVar17 & 0x1ff) * 8 == 0)
      goto LAB_008dccc8;
      *(long *)(param_2 + 0x658) = lVar18;
      *(ulong *)(param_2 + 0x650) = uVar17 + 1;
      if (0x3ff < uVar17 + 1) {
        operator_delete((void *)**(undefined8 **)(param_2 + 0x638));
        *(long *)(param_2 + 0x638) = *(long *)(param_2 + 0x638) + 8;
        *(long *)(param_2 + 0x650) = *(long *)(param_2 + 0x650) + -0x200;
      }
    }
    FUN_008f7cc0(param_2 + 0x128,*param_3,lVar20);
    local_254 = 1;
  }
  auVar28 = FUN_008de528(param_2 + 0x408);
  if ((*(char *)(param_2 + 0x6a8) == '\x01') &&
     ((auVar28 & (undefined1  [16])0x1) == (undefined1  [16])0x0)) {
    (**(code **)(**(long **)(param_2 + 0x4a8) + 0x30))(*(long **)(param_2 + 0x4a8),*param_3);
    FUN_008f543c(*(undefined8 *)(param_2 + 0x118),*param_3);
  }
  plVar24 = *(long **)(param_2 + 0x4a8);
  *(byte *)(param_2 + 0x6a8) = auVar28[8] & 1;
  FUN_0086e09c(&local_f0,param_3);
  (**(code **)(*plVar24 + 0x10))(plVar24,&local_f0);
  puVar5 = local_f0;
  puVar16 = puStack_e8;
  if (local_f0 != (undefined1 *)0x0) {
    while (puVar5 != puVar16) {
      puVar16 = puVar16 + -0x70;
      if (puVar16 == (undefined1 *)0x0) goto LAB_008dccc8;
      FUN_0086dc48(puVar16);
    }
    puStack_e8 = puVar5;
    operator_delete(local_f0);
  }
  auVar29 = (**(code **)(**(long **)(param_2 + 0x4a8) + 0x18))();
  lVar18 = auVar29._0_8_;
  uVar17 = auVar29._8_8_ & 0xff;
  FUN_008f6d9c(param_2 + 0x128,lVar18,uVar17 | 0xaaaaaaaaaaaaaa00,*param_3);
  FUN_0086e09c(&local_f0,param_3);
  puVar5 = puStack_e8;
  puVar16 = local_f0;
  if (local_f0 == puStack_e8) {
    puVar5 = local_f0;
    puVar16 = puStack_e8;
    if (local_f0 == (undefined1 *)0x0) goto LAB_008dc92c;
joined_r0x008dc8c0:
    while (puVar12 = local_f0, local_f0 != puVar16) {
      puVar16 = puVar16 + -0x70;
      local_f0 = puVar5;
      if (puVar16 == (undefined1 *)0x0) goto LAB_008dccc8;
      FUN_0086dc48(puVar16);
      puVar5 = local_f0;
      local_f0 = puVar12;
    }
    puStack_e8 = local_f0;
    local_f0 = puVar5;
    operator_delete(puVar5);
    plVar24 = *(long **)(param_2 + 0x490);
  }
  else {
    do {
      if (*(int *)(puVar16 + 0x20) != -1) {
        FUN_008e14f0(*(undefined8 *)(param_2 + 0x488),puVar16);
      }
      puVar16 = puVar16 + 0x70;
    } while (puVar16 != puVar5);
    puVar5 = local_f0;
    puVar16 = puStack_e8;
    if (local_f0 != (undefined1 *)0x0) goto joined_r0x008dc8c0;
LAB_008dc92c:
    plVar24 = *(long **)(param_2 + 0x490);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 8))(plVar24,param_3);
    (**(code **)**(undefined8 **)(param_2 + 0x490))(&local_1a0);
    lVar20 = *(long *)(param_2 + 0x5a8);
    *(undefined8 *)(param_2 + 0x5e8) = uStack_158;
    *(undefined8 *)(param_2 + 0x5e0) = local_160;
    *(undefined8 *)(param_2 + 0x5f8) = uStack_148;
    *(undefined8 *)(param_2 + 0x5f0) = uStack_150;
    *(undefined8 *)(param_2 + 0x608) = uStack_138;
    *(undefined8 *)(param_2 + 0x600) = local_140;
    *(ulong *)(param_2 + 0x618) = CONCAT71(local_127,uStack_128);
    *(undefined8 *)(param_2 + 0x610) = uStack_130;
    *(undefined8 *)(param_2 + 0x621) = uStack_11f;
    *(ulong *)(param_2 + 0x619) = CONCAT17(uStack_120,local_127);
    *(undefined8 *)(param_2 + 0x5b8) = uStack_188;
    *(undefined8 *)(param_2 + 0x5b0) = local_190;
    *(undefined8 *)(param_2 + 0x5c8) = uStack_178;
    *(undefined8 *)(param_2 + 0x5c0) = uStack_180;
    *(undefined8 *)(param_2 + 0x5d8) = uStack_168;
    *(undefined8 *)(param_2 + 0x5d0) = local_170;
    *(undefined8 *)(param_2 + 0x5a8) = uStack_198;
    *(undefined8 *)(param_2 + 0x5a0) = local_1a0;
    if ((*(char *)(param_2 + 0x628) == '\x01') &&
       (((*(byte *)(param_2 + 0x628) & 1) == 0 || (*(long *)(param_2 + 0x5a8) != lVar20)))) {
      plVar24 = *(long **)(param_2 + 0x28);
      puVar15 = (undefined8 *)operator_new(0x20);
      uVar27 = *(undefined8 *)(param_2 + 0x5d0);
      uVar26 = *(undefined8 *)(param_2 + 0x5c8);
      *puVar15 = &PTR_FUN_00d3cd88;
      puVar15[1] = 0;
      puVar15[3] = uVar27;
      puVar15[2] = uVar26;
      (**(code **)(*plVar24 + 0x28))(plVar24,puVar15);
      if ((*(byte *)(param_2 + 0x628) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uStack_a8 = *(undefined8 *)(param_2 + 0x5e8);
      local_b0 = *(undefined8 *)(param_2 + 0x5e0);
      uStack_98 = *(undefined8 *)(param_2 + 0x5f8);
      uStack_a0 = *(undefined8 *)(param_2 + 0x5f0);
      local_70 = *(undefined8 *)(param_2 + 0x620);
      uStack_88 = *(undefined8 *)(param_2 + 0x608);
      local_90 = *(undefined8 *)(param_2 + 0x600);
      uStack_78 = *(undefined8 *)(param_2 + 0x618);
      uStack_80 = *(undefined8 *)(param_2 + 0x610);
      puStack_e8 = *(undefined1 **)(param_2 + 0x5a8);
      local_f0 = *(undefined1 **)(param_2 + 0x5a0);
      uStack_d8 = *(undefined8 *)(param_2 + 0x5b8);
      local_e0 = *(undefined1 **)(param_2 + 0x5b0);
      uStack_c8 = *(undefined8 *)(param_2 + 0x5c8);
      local_d0 = *(undefined8 *)(param_2 + 0x5c0);
      uStack_b8 = *(undefined8 *)(param_2 + 0x5d8);
      uStack_c0 = *(undefined8 *)(param_2 + 0x5d0);
      FUN_008f579c(*(undefined8 *)(param_2 + 0x118),&local_f0);
    }
  }
  auVar30 = FUN_008e20b8(*(undefined8 *)(param_2 + 0x488));
  uVar11 = _UNK_00225590;
  uVar10 = _DAT_00225588;
  uVar7 = _UNK_00225560;
  uVar6 = _DAT_00225558;
  uVar27 = _UNK_00225550;
  uVar26 = _DAT_00225548;
  lVar20 = auVar30._0_8_;
  uVar25 = auVar30._8_8_ & 0xff | 0xaaaaaaaaaaaaaa00;
  uVar23 = uVar25;
  if ((((*(char *)(param_2 + 0xb1) == '\x01') &&
       ((auVar30 & (undefined1  [16])0x1) != (undefined1  [16])0x0)) &&
      (*(char *)(param_2 + 0x628) == '\x01')) &&
     ((lVar20 < *(long *)(*(long *)(param_2 + 0x4a0) + 0x238) &&
      (uVar23 = 0xaaaaaaaaaaaaaa00, *(long *)(param_2 + 0x5c8) <= lVar20)))) {
    uVar23 = uVar25;
  }
  if (((*(char *)(param_2 + 0xb2) == '\x01') && ((uVar23 & 1) != 0)) &&
     ((auVar29 & (undefined1  [16])0x1) != (undefined1  [16])0x0)) {
    lVar21 = *(long *)(*(long *)(param_2 + 0x4a0) + 0x238);
    lVar19 = (long)((double)lVar18 * 0.85);
    if (lVar21 <= (long)((double)lVar18 * 0.85)) {
      lVar19 = lVar21;
    }
    if (lVar20 <= lVar19) {
      lVar20 = lVar19;
    }
  }
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = uVar27;
  param_1[8] = uVar26;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  uVar9 = _UNK_00225580;
  uVar8 = _DAT_00225578;
  uVar26 = _DAT_00225568;
  param_1[0xd] = _UNK_00225570;
  param_1[0xc] = uVar26;
  uVar7 = _UNK_00225520;
  uVar6 = _DAT_00225518;
  uVar27 = _UNK_00225510;
  uVar26 = _DAT_00225508;
  param_1[0xf] = uVar9;
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar11;
  param_1[0x10] = uVar10;
  param_1[1] = uVar27;
  *param_1 = uVar26;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar6 = _UNK_00225540;
  uVar27 = _DAT_00225538;
  uVar26 = _DAT_00225528;
  param_1[5] = _UNK_00225530;
  param_1[4] = uVar26;
  param_1[7] = uVar6;
  param_1[6] = uVar27;
  FUN_0086e1ac(param_1);
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008deff0(&local_f0);
  uStack_208 = *(undefined8 *)(param_2 + 0x5e8);
  local_210 = *(undefined8 *)(param_2 + 0x5e0);
  uStack_1f8 = *(undefined8 *)(param_2 + 0x5f8);
  uStack_200 = *(undefined8 *)(param_2 + 0x5f0);
  uStack_1e8 = *(undefined8 *)(param_2 + 0x608);
  local_1f0 = *(undefined8 *)(param_2 + 0x600);
  uStack_1c8 = *(undefined8 *)(param_2 + 0x628);
  uStack_1d0 = *(undefined8 *)(param_2 + 0x620);
  uStack_1d8 = *(undefined8 *)(param_2 + 0x618);
  local_1e0 = *(undefined8 *)(param_2 + 0x610);
  uStack_248 = *(undefined8 *)(param_2 + 0x5a8);
  local_250 = *(undefined8 *)(param_2 + 0x5a0);
  uStack_238 = *(undefined8 *)(param_2 + 0x5b8);
  uStack_240 = *(undefined8 *)(param_2 + 0x5b0);
  uStack_228 = *(undefined8 *)(param_2 + 0x5c8);
  local_230 = *(undefined8 *)(param_2 + 0x5c0);
  uStack_218 = *(undefined8 *)(param_2 + 0x5d8);
  uStack_220 = *(undefined8 *)(param_2 + 0x5d0);
  FUN_008df2f0(&local_1c0,*(undefined8 *)(param_2 + 0x4a0),param_3,lVar18,
               uVar17 | 0xaaaaaaaaaaaaaa00,lVar20,uVar23,&local_250,auVar28._8_4_ & 1);
  puStack_e8 = puStack_1b8;
  local_f0 = local_1c0;
  puVar16 = local_f0;
  local_e0 = local_1b0;
  if (((ulong)local_1c0 & 1) != 0) {
    local_f0._1_1_ = (char)((ulong)local_1c0 >> 8);
    bVar13 = local_f0._1_1_ == '\x01';
    local_f0 = puVar16;
    if (bVar13) {
      FUN_008f6a3c(param_2 + 0x128,puStack_1b8,*param_3);
    }
    FUN_008f6d78(param_2 + 0x128,*param_3,puStack_e8);
  }
  FUN_008f6df4(param_2 + 0x128,param_3,local_e0._4_4_,lVar20,uVar23,auVar28._8_4_ & 1);
  if (((ulong)local_f0 & 1) != 0) {
    FUN_008db174(param_2,param_1,*param_3);
  }
  if (((ulong)local_e0 & 1) != 0) {
    FUN_008f542c(*(undefined8 *)(param_2 + 0x118),auVar28._0_8_,
                 auVar28._8_8_ & 0xff | 0xaaaaaaaaaaaaaa00);
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008f548c(&local_1c0,*(undefined8 *)(param_2 + 0x118),*param_3);
    FUN_008dcf0c(param_1 + 7,param_1[8],local_1c0,puStack_1b8,
                 ((long)puStack_1b8 - (long)local_1c0 >> 3) * -0x3333333333333333);
    if (local_1c0 != (undefined1 *)0x0) {
      uVar17 = (ulong)(((long)local_1c0 - (long)puStack_1b8) * 0x1333333333333333) >> 3;
      uVar23 = (long)puStack_1b8 * -0x1333333333333333 - 8U >> 3;
      if (uVar23 <= uVar17) {
        uVar17 = uVar23;
      }
      puVar16 = puStack_1b8;
      if ((1 < uVar17) && ((((int)local_1c0 - (int)puStack_1b8 | -(int)puStack_1b8) & 7U) == 0)) {
        uVar17 = uVar17 & 0x1ffffffffffffffe;
        puVar16 = puStack_1b8 + uVar17 * -0x28;
        do {
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
      }
      do {
        if (puVar16 == local_1c0) {
          puStack_1b8 = local_1c0;
          operator_delete(local_1c0);
          goto LAB_008dccec;
        }
        puVar16 = puVar16 + -0x28;
      } while (puVar16 != (undefined1 *)0x0);
LAB_008dccc8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
LAB_008dccec:
  uVar14 = FUN_008a56f4(param_2 + 0xb8);
  if ((local_254 & uVar14) == 1) {
    FUN_008dbb88(param_2);
  }
  if ((*(long *)(param_2 + 0x120) == 0) || (*(char *)(param_2 + 0x6b8) != '\x01')) {
    uVar4 = *(undefined1 *)(param_2 + 0x6b8);
    *param_1 = *(undefined8 *)(param_2 + 0x6b0);
    *(undefined1 *)(param_1 + 1) = uVar4;
    plVar24 = local_110;
  }
  else {
    FUN_008f5e90(*(long *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x6b0));
    plVar24 = local_110;
  }
  local_110 = plVar24;
  plVar1 = plStack_108;
  if (plVar24 != (long *)0x0) {
    while (plVar24 != plVar1) {
      plVar1 = plVar1 + -0xe;
      if (plVar1 == (long *)0x0) goto LAB_008dccc8;
      FUN_0086dc48(plVar1);
    }
    plStack_108 = plVar24;
    operator_delete(local_110);
  }
  return;
}


// ===== 008dcdd4  FUN_008dcdd4 =====

void FUN_008dcdd4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 local_40;
  
  if (*(long *)(param_2 + 0x490) == 0) {
    uVar8 = *param_3;
    uVar7 = param_3[3];
    uVar6 = param_3[2];
    uVar12 = param_3[0xd];
    uVar11 = param_3[0xc];
    uVar10 = param_3[0xf];
    uVar9 = param_3[0xe];
    uVar16 = param_3[9];
    uVar15 = param_3[8];
    uVar14 = param_3[0xb];
    uVar13 = param_3[10];
    lVar3 = *(long *)(param_2 + 0x5a8);
    uVar20 = param_3[5];
    uVar19 = param_3[4];
    uVar18 = param_3[7];
    uVar17 = param_3[6];
    uVar4 = param_3[0x10];
    bVar1 = *(byte *)(param_2 + 0x628);
    *(undefined8 *)(param_2 + 0x5a8) = param_3[1];
    *(undefined8 *)(param_2 + 0x5a0) = uVar8;
    *(undefined8 *)(param_2 + 0x5b8) = uVar7;
    *(undefined8 *)(param_2 + 0x5b0) = uVar6;
    *(undefined8 *)(param_2 + 0x5c8) = uVar20;
    *(undefined8 *)(param_2 + 0x5c0) = uVar19;
    *(undefined8 *)(param_2 + 0x5d8) = uVar18;
    *(undefined8 *)(param_2 + 0x5d0) = uVar17;
    *(undefined8 *)(param_2 + 0x5e8) = uVar16;
    *(undefined8 *)(param_2 + 0x5e0) = uVar15;
    *(undefined8 *)(param_2 + 0x5f8) = uVar14;
    *(undefined8 *)(param_2 + 0x5f0) = uVar13;
    *(undefined8 *)(param_2 + 0x608) = uVar12;
    *(undefined8 *)(param_2 + 0x600) = uVar11;
    *(undefined8 *)(param_2 + 0x618) = uVar10;
    *(undefined8 *)(param_2 + 0x610) = uVar9;
    *(undefined8 *)(param_2 + 0x620) = uVar4;
    *(undefined1 *)(param_2 + 0x628) = 1;
    if (((bVar1 & 1) == 0) || (*(long *)(param_2 + 0x5a8) != lVar3)) {
      plVar5 = *(long **)(param_2 + 0x28);
      puVar2 = (undefined8 *)operator_new(0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x5d0);
      uVar4 = *(undefined8 *)(param_2 + 0x5c8);
      *puVar2 = &PTR_FUN_00d3cd88;
      puVar2[1] = 0;
      puVar2[3] = uVar6;
      puVar2[2] = uVar4;
      (**(code **)(*plVar5 + 0x28))(plVar5,puVar2);
      if ((*(byte *)(param_2 + 0x628) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uStack_78 = *(undefined8 *)(param_2 + 0x5e8);
      local_80 = *(undefined8 *)(param_2 + 0x5e0);
      uStack_68 = *(undefined8 *)(param_2 + 0x5f8);
      uStack_70 = *(undefined8 *)(param_2 + 0x5f0);
      local_40 = *(undefined8 *)(param_2 + 0x620);
      uStack_58 = *(undefined8 *)(param_2 + 0x608);
      local_60 = *(undefined8 *)(param_2 + 0x600);
      uStack_48 = *(undefined8 *)(param_2 + 0x618);
      uStack_50 = *(undefined8 *)(param_2 + 0x610);
      uStack_b8 = *(undefined8 *)(param_2 + 0x5a8);
      local_c0 = *(undefined8 *)(param_2 + 0x5a0);
      uStack_a8 = *(undefined8 *)(param_2 + 0x5b8);
      uStack_b0 = *(undefined8 *)(param_2 + 0x5b0);
      uStack_98 = *(undefined8 *)(param_2 + 0x5c8);
      local_a0 = *(undefined8 *)(param_2 + 0x5c0);
      uStack_88 = *(undefined8 *)(param_2 + 0x5d8);
      uStack_90 = *(undefined8 *)(param_2 + 0x5d0);
      FUN_008f579c(*(undefined8 *)(param_2 + 0x118),&local_c0);
    }
  }
  FUN_0086e1ac(param_1);
  return;
}


// ===== 008dcf00  FUN_008dcf00 =====

undefined8 FUN_008dcf00(void)

{
  return 0;
}


// ===== 008dcf0c  FUN_008dcf0c =====

undefined8 *
FUN_008dcf0c(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  size_t __n;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = param_2;
  if (0 < param_5) {
    puVar10 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar10 >> 3) * -0x3333333333333333 < param_5) {
      lVar12 = *param_1;
      uVar6 = param_5 + ((long)puVar10 - lVar12 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar6) {
        FUN_00870980();
LAB_008dd1dc:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      lVar5 = param_1[2] - lVar12 >> 3;
      uVar7 = lVar5 * -0x6666666666666666;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar7 = uVar6;
      }
      if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
        uVar7 = 0x666666666666666;
      }
      if (uVar7 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (0x666666666666666 < uVar7) goto LAB_008dd1dc;
        pvVar2 = operator_new(uVar7 * 0x28);
      }
      puVar9 = (undefined8 *)((long)pvVar2 + ((long)param_2 - lVar12));
      lVar12 = param_5 * 0x28;
      puVar11 = puVar9;
      if (lVar12 != 0) {
        puVar10 = puVar9;
        do {
          if (puVar10 == (undefined8 *)0x0) {
LAB_008dd1c4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar16 = param_3[1];
          uVar15 = *param_3;
          uVar14 = param_3[3];
          uVar13 = param_3[2];
          lVar12 = lVar12 + -0x28;
          puVar11 = param_3 + 4;
          param_3 = param_3 + 5;
          puVar10[4] = *puVar11;
          puVar10[1] = uVar16;
          *puVar10 = uVar15;
          puVar10[3] = uVar14;
          puVar10[2] = uVar13;
          puVar10 = puVar10 + 5;
        } while (lVar12 != 0);
        puVar10 = (undefined8 *)param_1[1];
        puVar11 = puVar9 + param_5 * 5;
      }
      memcpy(puVar11,param_2,(long)puVar10 - (long)param_2);
      lVar12 = param_1[1];
      param_1[1] = (long)param_2;
      sVar4 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar9 - sVar4),(void *)*param_1,sVar4);
      pvVar3 = (void *)*param_1;
      *param_1 = (long)puVar9 - sVar4;
      param_1[1] = (long)puVar11 + (lVar12 - (long)param_2);
      param_1[2] = (long)((long)pvVar2 + uVar7 * 0x28);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      sVar4 = (long)puVar10 - (long)param_2;
      if (((long)sVar4 >> 3) * -0x3333333333333333 < param_5) {
        __n = param_4 - ((long)param_3 + sVar4);
        memmove(puVar10,(void *)((long)param_3 + sVar4),__n);
        lVar12 = (long)puVar10 + __n;
        param_1[1] = lVar12;
        if (0 < (long)sVar4) {
          lVar5 = lVar12;
          if ((undefined8 *)(lVar12 + param_5 * -0x28) < puVar10) {
            param_4 = param_4 + (long)param_2;
            lVar8 = -(long)param_3;
            lVar5 = param_4 + param_5 * -0x28;
            do {
              puVar11 = (undefined8 *)(param_4 + lVar8);
              if (puVar11 == (undefined8 *)0x0) goto LAB_008dd1c4;
              puVar1 = (undefined8 *)(lVar5 + lVar8);
              lVar5 = lVar5 + 0x28;
              param_4 = param_4 + 0x28;
              uVar16 = puVar1[1];
              uVar15 = *puVar1;
              uVar14 = puVar1[3];
              uVar13 = puVar1[2];
              puVar11[4] = puVar1[4];
              puVar11[1] = uVar16;
              *puVar11 = uVar15;
              puVar11[3] = uVar14;
              puVar11[2] = uVar13;
            } while ((undefined8 *)(lVar5 + lVar8) < puVar10);
            lVar5 = param_4 - (long)param_3;
          }
          param_1[1] = lVar5;
          memmove((void *)(lVar12 - (lVar12 - (long)(param_2 + param_5 * 5))),param_2,
                  lVar12 - (long)(param_2 + param_5 * 5));
          memmove(param_2,param_3,sVar4);
        }
      }
      else {
        puVar1 = puVar10;
        for (puVar11 = puVar10 + param_5 * -5; puVar11 < puVar10; puVar11 = puVar11 + 5) {
          if (puVar1 == (undefined8 *)0x0) goto LAB_008dd1c4;
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          uVar14 = puVar11[3];
          uVar13 = puVar11[2];
          puVar1[4] = puVar11[4];
          puVar1[1] = uVar16;
          *puVar1 = uVar15;
          puVar1[3] = uVar14;
          puVar1[2] = uVar13;
          puVar1 = puVar1 + 5;
        }
        param_1[1] = (long)puVar1;
        sVar4 = (long)puVar10 + (param_5 * -0x28 - (long)param_2);
        memmove((void *)((long)puVar10 - sVar4),param_2,sVar4);
        memmove(param_2,param_3,param_5 * 0x28);
      }
    }
  }
  return puVar9;
}


// ===== 008dd1e0  FUN_008dd1e0 =====

void FUN_008dd1e0(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x200) {
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
      FUN_008dd650(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008ddb74(&local_50,lVar5);
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
      FUN_008dd650(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_008dd8d8(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008dd3c8(param_1,&local_50);
  return;
}


// ===== 008dd3c8  FUN_008dd3c8 =====

void FUN_008dd3c8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008dd638;
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
LAB_008dd638:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008dd650  FUN_008dd650 =====

void FUN_008dd650(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008dd8c0;
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
LAB_008dd8c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008dd8d8  FUN_008dd8d8 =====

void FUN_008dd8d8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008ddb5c;
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
LAB_008ddb5c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ddb74  FUN_008ddb74 =====

void FUN_008ddb74(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008dddf8;
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
LAB_008dddf8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008dde10  FUN_008dde10 =====

void FUN_008dde10(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008dde1c  FUN_008dde1c =====

undefined8 FUN_008dde1c(void)

{
  return 2;
}


// ===== 008dde28  FUN_008dde28 =====

undefined8 FUN_008dde28(void)

{
  return 0;
}


// ===== 008dde34  FUN_008dde34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dde34(double *param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined8 ******local_88;
  ulong uStack_80;
  undefined7 local_78;
  byte bStack_71;
  undefined8 uStack_70;
  byte local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  
  auVar8 = _DAT_001f3930;
  param_1[2] = 0.5;
  param_1[1] = auVar8._8_8_;
  *param_1 = auVar8._0_8_;
  uVar2 = FUN_008de66c(param_2);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/congestion_controller/goog_cc/alr_detector.cc",0x20,
                 "AlrExperimentSettings::MaxOneFieldTrialEnabled(key_value_config)",&DAT_001f5fa0);
  }
  auVar7[8] = 0xaa;
  auVar7._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaa;
  auVar7[9] = 0xaa;
  auVar7[10] = 0xaa;
  auVar7[0xb] = 0xaa;
  local_60 = 0xffffffff;
  uStack_54 = auVar7._8_4_;
  uStack_5c = 0xaaaaaaaa;
  uStack_58 = 0xaaaaaaaa;
  iStack_4c = -0x55555556;
  iStack_48 = -0x55555556;
  local_3c = 0xaaaaaaaa;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  FUN_008de740(&local_60,param_2,"WebRTC-ProbingScreenshareBwe",0x1c);
  if ((uStack_40 & 1) == 0) {
    FUN_008de740(&local_88,param_2,"WebRTC-StrictPacingAndProbing",0x1d);
    uStack_40 = CONCAT31(uStack_40._1_3_,local_68);
    uStack_58 = (undefined4)uStack_80;
    uStack_54 = (undefined4)(uStack_80 >> 0x20);
    local_60 = SUB84(local_88,0);
    uStack_5c = (undefined4)((ulong)local_88 >> 0x20);
    iStack_48 = (int)uStack_70;
    uStack_44 = (undefined4)((ulong)uStack_70 >> 0x20);
    uStack_50 = (uint)local_78;
    iStack_4c = (int)(CONCAT17(bStack_71,local_78) >> 0x20);
    if ((local_68 & 1) == 0) goto LAB_008ddf10;
  }
  auVar8._0_8_ = (long)(int)uStack_50;
  auVar8._8_8_ = (long)iStack_4c;
  auVar8 = NEON_scvtf(auVar8,8);
  param_1[1] = auVar8._8_8_ / 100.0;
  *param_1 = auVar8._0_8_ / 100.0;
  param_1[2] = (double)iStack_48 / 100.0;
LAB_008ddf10:
  puVar3 = (undefined8 *)
           FUN_008de078("bw_usage",param_1,"start",param_1 + 1,&DAT_001e5b76,param_1 + 2);
  (**(code **)(*param_2 + 0x10))(&local_88,param_2,"WebRTC-AlrDetectorParameters",0x1c);
  pppppppuVar1 = (undefined8 *******)local_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppppppuVar1 = &local_88;
  }
  FUN_006659ac(puVar3,pppppppuVar1,uStack_80);
  if ((char)bStack_71 < '\0') {
    operator_delete(local_88);
  }
  if (puVar3 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar3;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)puVar3[1];
      uVar6 = (ulong)((long)pvVar5 + (-0x20 - ((long)pvVar5 << 0x3b))) >> 5;
      uVar2 = (ulong)(((long)pvVar4 - (long)pvVar5 << 0x3b) - ((long)pvVar4 - (long)pvVar5)) >> 5;
      if (uVar6 <= uVar2) {
        uVar2 = uVar6;
      }
      if ((1 < uVar2) && ((((int)pvVar4 - (int)pvVar5 | -(int)pvVar5) & 0x1fU) == 0)) {
        uVar2 = uVar2 & 0x7fffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar2 * -0x20);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (pvVar5 != pvVar4) {
        pvVar5 = (void *)((long)pvVar5 + -0x20);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar3[1] = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(puVar3);
  }
  return;
}


// ===== 008de078  FUN_008de078 =====

void * FUN_008de078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  puVar3 = (undefined8 *)operator_new(0x60);
  puVar1 = PTR_FUN_00d51f40;
  if (((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0xffffffffffffffe0)) &&
     (puVar3 != (undefined8 *)0xffffffffffffffc0)) {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar2 = PTR_FUN_00d51f48;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
    puVar3[8] = param_5;
    puVar3[9] = param_6;
    puVar3[2] = puVar1;
    puVar3[3] = puVar2;
    puVar3[6] = puVar1;
    puVar3[7] = puVar2;
    puVar3[10] = puVar1;
    puVar3[0xb] = puVar2;
    pvVar4 = operator_new(0x18);
    local_68 = puVar3;
    local_60 = puVar3 + 0xc;
    local_58 = puVar3 + 0xc;
    FUN_0066597c(pvVar4,&local_68);
    if (local_68 != (undefined8 *)0x0) {
      uVar6 = (ulong)((long)local_60 + (-0x20 - ((long)local_60 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)local_68 - (long)local_60 << 0x3b) - ((long)local_68 - (long)local_60))
              >> 5;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      puVar3 = local_60;
      if ((1 < uVar5) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        puVar3 = local_60 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar3 != local_68) {
        puVar3 = puVar3 + -4;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_60 = local_68;
      operator_delete(local_68);
    }
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008de1e0  FUN_008de1e0 =====

void FUN_008de1e0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar1 = param_2[1];
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = lVar1;
  param_1[4] = lVar3;
  param_1[3] = lVar2;
  FUN_008dde34(param_1 + 5,param_1[1]);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_008debec(param_1 + 10,0,1);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}


// ===== 008de25c  FUN_008de25c =====

void FUN_008de25c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008de2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008de2b4  FUN_008de2b4 =====

void FUN_008de2b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    if ((long *)(param_1 + 0x40) != (long *)0x0) {
      *(long *)(param_1 + 0x40) = param_3;
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
    goto LAB_008de4a0;
  }
  if ((param_3 == 0x7fffffffffffffff) ||
     (lVar4 = *(long *)(param_1 + 0x40), lVar4 == -0x8000000000000000)) {
    *(long *)(param_1 + 0x40) = param_3;
    FUN_008decac(param_1 + 0x50);
    uVar7 = 0x7fffffffffffffff;
LAB_008de34c:
    uVar3 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar3 = uVar3 + 1;
    }
  }
  else {
    if ((param_3 == -0x8000000000000000) || (lVar4 == 0x7fffffffffffffff)) {
      *(long *)(param_1 + 0x40) = param_3;
      FUN_008decac(param_1 + 0x50);
      uVar7 = 0x8000000000000000;
    }
    else {
      uVar7 = param_3 - lVar4;
      *(long *)(param_1 + 0x40) = param_3;
      FUN_008decac(param_1 + 0x50);
      if (-1 < (long)uVar7) goto LAB_008de34c;
    }
    uVar3 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  lVar4 = param_1 + 0x50;
  FUN_008dec64(lVar4,uVar3);
  dVar8 = (double)FUN_008deccc(lVar4);
  dVar9 = *(double *)(param_1 + 0x30);
  if ((dVar8 == dVar9 || dVar8 < dVar9 != (NAN(dVar8) || NAN(dVar9))) ||
     ((*(byte *)(param_1 + 0x78) & 1) != 0)) {
    dVar8 = (double)FUN_008deccc(lVar4);
    if ((*(double *)(param_1 + 0x38) <= dVar8) || (*(char *)(param_1 + 0x78) != '\x01')) {
      return;
    }
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if (*(char *)(param_1 + 0x78) == '\x01') {
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      uVar6 = 1;
    }
    else {
      if ((undefined8 *)(param_1 + 0x70) == (undefined8 *)0x0) {
LAB_008de4a0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = 1;
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
  }
  plVar5 = *(long **)(param_1 + 0x20);
  pvVar2 = operator_new(0x18);
  FUN_008de538(pvVar2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x008de49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,pvVar2);
  return;
}


// ===== 008de4b4  FUN_008de4b4 =====

void FUN_008de4b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*(double *)(param_1 + 0x28) * (double)param_2);
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  FUN_008dec28(param_1 + 0x50,uVar2);
  return;
}


// ===== 008de528  FUN_008de528 =====

undefined1  [16] FUN_008de528(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}


// ===== 008de538  FUN_008de538 =====

void FUN_008de538(undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_00d3cdc0;
  param_1[1] = 0;
  return;
}


// ===== 008de550  FUN_008de550 =====

void FUN_008de550(void)

{
  return;
}


// ===== 008de558  FUN_008de558 =====

void FUN_008de558(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008de564  FUN_008de564 =====

undefined8 FUN_008de564(void)

{
  return 0;
}


// ===== 008de570  FUN_008de570 =====

undefined8 FUN_008de570(void)

{
  return 0;
}


// ===== 008de57c  FUN_008de57c =====

void FUN_008de57c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00547c2c(param_1,10);
  do {
    uVar6 = param_2 >> 7;
    bVar1 = *(byte *)((long)param_1 + 0x17);
    bVar5 = 0;
    if (uVar6 != 0) {
      bVar5 = 0x80;
    }
    if ((char)bVar1 < '\0') {
      uVar2 = param_1[1];
      uVar4 = (param_1[2] & 0x7fffffffffffffff) - 1;
      if (uVar2 == uVar4) goto LAB_008de620;
LAB_008de644:
      param_1[1] = uVar2 + 1;
      puVar3 = (undefined8 *)*param_1;
    }
    else {
      if (bVar1 == 0x16) {
        uVar4 = 0x16;
LAB_008de620:
        uVar2 = uVar4;
        FUN_0054774c(param_1,uVar2,1,uVar2,uVar2,0,0);
        goto LAB_008de644;
      }
      uVar2 = (ulong)bVar1;
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1 & 0x7f;
      puVar3 = param_1;
    }
    ((byte *)((long)puVar3 + uVar2))[1] = 0;
    *(byte *)((long)puVar3 + uVar2) = bVar5 | (byte)param_2 & 0x7f;
    param_2 = uVar6;
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}


// ===== 008de66c  FUN_008de66c =====

bool FUN_008de66c(long *param_1)

{
  bool bVar1;
  void *local_50;
  long local_48;
  char cStack_39;
  void *local_38;
  ulong local_30;
  byte bStack_21;
  
  (**(code **)(*param_1 + 0x10))(&local_38,param_1,"WebRTC-StrictPacingAndProbing",0x1d);
  if (-1 < (char)bStack_21) {
    local_30 = (ulong)bStack_21;
  }
  if (local_30 == 0) {
    bVar1 = true;
    if (((uint)(int)(char)bStack_21 >> 7 & 1) == 0) {
      return true;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(&local_50,param_1,"WebRTC-ProbingScreenshareBwe",0x1c);
    if (-1 < cStack_39) {
      local_48 = (long)cStack_39;
    }
    bVar1 = local_48 == 0;
    if ((long)cStack_39 < 0) {
      operator_delete(local_50);
    }
    if (-1 < (char)bStack_21) {
      return bVar1;
    }
  }
  operator_delete(local_38);
  return bVar1;
}


// ===== 008de740  FUN_008de740 =====

/* WARNING: Removing unreachable block (ram,0x008deb78) */
/* WARNING: Removing unreachable block (ram,0x008deb90) */

void FUN_008de740(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  char *pcVar14;
  char *******pppppppcVar15;
  code *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 uStack_159;
  char *local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  char *pcStack_140;
  char **local_138;
  double local_130;
  char **local_128;
  char *pcStack_120;
  double *local_118;
  undefined8 uStack_110;
  char **local_108;
  char *local_100;
  undefined8 *puStack_f8;
  ulong local_f0;
  char **ppcStack_e8;
  char *local_e0;
  ulong *local_d8;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 ******local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  char ******local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_70;
  long lStack_68;
  
  *(undefined4 *)param_1 = 0xffffffff;
  lVar13 = *param_2;
  *(undefined1 *)param_1 = 0;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  pcVar16 = *(code **)(lVar13 + 0x10);
  *(undefined1 **)((long)param_1 + 0x1c) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)((long)param_1 + 0x14) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)((long)param_1 + 0xc) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)((long)param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined4 *)((long)param_1 + 0x24) = 0xaaaaaaaa;
  *(undefined1 *)(param_1 + 4) = 0;
  pcStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = param_3;
  lStack_68 = param_4;
  (*pcVar16)(&local_90);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_b0,"_Dogfood");
  pcVar18 = (char *)(ulong)local_80._7_1_;
  uVar4 = (uint)(char)local_80._7_1_;
  pcVar14 = (char *)(ulong)uVar4;
  pcVar2 = pcStack_88;
  pppppppcVar15 = (char *******)local_90;
  if (-1 < (int)uVar4) {
    pcVar2 = pcVar18;
    pppppppcVar15 = &local_90;
  }
  pppppppuVar1 = (undefined8 *******)local_b0;
  puVar5 = puStack_a8;
  if (-1 < (long)local_a0) {
    pppppppuVar1 = &local_b0;
    puVar5 = (undefined1 *)((ulong)local_a0 >> 0x38);
  }
  if ((puVar5 != (undefined1 *)0x0) && ((long)puVar5 <= (long)pcVar2)) {
    pcVar10 = (char *)((long)pppppppcVar15 + (long)pcVar2);
    do {
      pcVar17 = pcVar10 + (1 - (long)puVar5);
      pcVar7 = pcVar10 + -2;
      do {
        pcVar11 = pcVar7;
        if (pcVar10 == (char *)((long)pppppppcVar15 + (long)(puVar5 + -1))) goto LAB_008de880;
        pcVar10 = pcVar10 + -1;
        pcVar17 = pcVar17 + -1;
        puVar12 = puVar5;
        pcVar7 = pcVar11 + -1;
      } while (*pcVar10 != *(char *)((long)pppppppuVar1 + (long)(puVar5 + -1)));
      do {
        if (puVar12 + -1 == (undefined1 *)0x0) goto LAB_008de884;
        cVar3 = *pcVar11;
        puVar6 = puVar12 + -2;
        pcVar11 = pcVar11 + -1;
        puVar12 = puVar12 + -1;
      } while (cVar3 == *(char *)((long)pppppppuVar1 + (long)puVar6));
    } while( true );
  }
LAB_008de880:
  pcVar17 = (char *)((long)pppppppcVar15 + (long)pcVar2);
LAB_008de884:
  if (((pcVar17 == (char *)((long)pppppppcVar15 + (long)pcVar2) && puVar5 != (undefined1 *)0x0) ||
      (pcVar17 = pcVar17 + -(long)pppppppcVar15, pcVar17 == (char *)0xffffffffffffffff)) ||
     (pcVar17 != pcVar2 + -(long)puVar5)) goto LAB_008de960;
  if ((int)uVar4 < 0) {
    pppppppcVar15 = (char *******)local_90;
    pcVar2 = pcVar17;
    if (pcStack_88 < pcVar17) {
      pcVar14 = (char *)((ulong)local_80 >> 0x38);
      lVar13 = ((ulong)local_80 & 0x7fffffffffffffff) - 1;
      pcVar18 = pcStack_88;
      goto LAB_008de8d8;
    }
  }
  else if (pcVar18 < pcVar17) {
    lVar13 = 0x16;
LAB_008de8d8:
    if ((ulong)(lVar13 - (long)pcVar18) < (ulong)((long)pcVar17 - (long)pcVar18)) {
      FUN_0054774c(&local_90,lVar13,(long)pcVar17 - lVar13,pcVar18,pcVar18,0,0);
      pcVar14 = (char *)((ulong)local_80 >> 0x38);
      pcStack_88 = pcVar18;
    }
    pppppppcVar15 = (char *******)local_90;
    if (((ulong)pcVar14 & 0x80) == 0) {
      pppppppcVar15 = &local_90;
    }
    memset((char *)((long)pppppppcVar15 + (long)pcVar18),0,(long)pcVar17 - (long)pcVar18);
    local_80 = (undefined1 *)(CONCAT17((char)pcVar17,(undefined7)local_80) & 0x7fffffffffffffff);
    pcVar2 = pcStack_88;
  }
  else {
    local_80 = (undefined1 *)CONCAT17((char)pcVar17,(undefined7)local_80);
    pppppppcVar15 = &local_90;
    pcVar2 = pcStack_88;
  }
  pcStack_88 = pcVar2;
  *(char *)((long)pppppppcVar15 + (long)pcVar17) = '\0';
  pcVar14 = (char *)((ulong)local_80 >> 0x38);
  pcVar18 = pcVar14;
LAB_008de960:
  pcVar2 = pcStack_88;
  if (((ulong)pcVar14 & 0x80) == 0) {
    pcVar2 = pcVar18;
  }
  if (pcVar2 == (char *)0x0) {
    if (param_4 != 0x1c) {
      return;
    }
    if (((*param_3 != 0x502d435452626557 || param_3[1] != 0x6353676e69626f72) ||
        param_3[2] != 0x726168736e656572) || (int)param_3[3] != 0x65774265) {
      return;
    }
    if (((uint)pcVar14 >> 7 & 1) == 0) {
      local_80 = (undefined1 *)CONCAT17(0x14,(undefined7)local_80);
      pppppppcVar15 = &local_90;
    }
    else {
      pcStack_88 = (char *)0x14;
      pppppppcVar15 = (char *******)local_90;
    }
    *(char *)((long)pppppppcVar15 + 0x14) = '\0';
    *(undefined4 *)(pppppppcVar15 + 2) = 0x332c3036;
    pppppppcVar15[1] = (char ******)s_1_0_2875_80_40__60_3_001ceb33._8_8_;
    *pppppppcVar15 = (char ******)s_1_0_2875_80_40__60_3_001ceb33._0_8_;
    pcVar14 = (char *)((ulong)local_80 >> 0x38);
  }
  local_d0 = -NAN;
  pppppppcVar15 = (char *******)local_90;
  if (((ulong)pcVar14 & 0x80) == 0) {
    pppppppcVar15 = &local_90;
  }
  uStack_c4 = 0xaaaaaaaa;
  uStack_cc = 0xaaaaaaaa;
  uStack_c8 = 0xaaaaaaaa;
  uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaa;
  uStack_bc = 0xaaaaaaaa;
  iVar8 = sscanf((char *)pppppppcVar15,"%f,%ld,%d,%d,%d,%d",&local_d0,&uStack_c8,&uStack_c0,
                 &uStack_bc,&uStack_b8,(long)&uStack_b8 + 4);
  if (iVar8 == 6) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[1] = CONCAT44(uStack_c4,uStack_c8);
    *param_1 = CONCAT44(uStack_cc,local_d0);
    param_1[3] = uStack_b8;
    param_1[2] = CONCAT44(uStack_bc,uStack_c0);
    uVar9 = FUN_00417e08();
    if ((uVar9 & 1) == 0) {
      local_158 = "../../rtc_base/experiments/alr_experiment.cc";
      uStack_150 = 0x229;
      local_148 = &uStack_159;
      local_138 = &local_158;
      uStack_110 = CONCAT44(uStack_c4,uStack_c8);
      pcStack_140 = "Using ALR experiment settings: pacing factor: ";
      local_128 = &pcStack_140;
      local_118 = &local_130;
      pcStack_120 = ", max pacer queue length: ";
      local_108 = &pcStack_120;
      local_f0 = (ulong)uStack_c0;
      puStack_f8 = &uStack_110;
      local_d8 = &local_f0;
      local_100 = ", ALR bandwidth usage percent: ";
      ppcStack_e8 = &local_100;
      local_130 = (double)local_d0;
      local_e0 = ", ALR start budget level percent: ";
      FUN_00623bb0(&DAT_002255b0,"../../rtc_base/experiments/alr_experiment.cc",0x229);
    }
  }
  else {
    uVar9 = FUN_00417e08();
    if ((uVar9 & 1) == 0) {
      FUN_00623bb0(&DAT_0021f2ce,"../../rtc_base/experiments/alr_experiment.cc",0x289,
                   "Failed to parse ALR experiment: ",&local_70);
    }
  }
  return;
}


// ===== 008debec  FUN_008debec =====

void FUN_008debec(int *param_1,int param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined1 *)(param_1 + 6) = param_3;
  lVar3 = (long)param_2 * 500;
  *param_1 = param_2;
  lVar1 = lVar3 + 7;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  uVar4 = lVar1 >> 3;
  uVar5 = -uVar4 & ((long)-uVar4 >> 0x3f ^ 0xffffffffffffffffU);
  uVar2 = uVar4;
  if ((long)uVar5 <= (long)uVar4) {
    uVar2 = uVar5;
  }
  *(ulong *)(param_1 + 2) = uVar4;
  *(ulong *)(param_1 + 4) = uVar2;
  return;
}


// ===== 008dec28  FUN_008dec28 =====

void FUN_008dec28(int *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = param_2;
  lVar2 = (long)param_2 * 500;
  lVar3 = lVar2 + 7;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  lVar2 = *(long *)(param_1 + 4);
  lVar3 = lVar3 >> 3;
  if (lVar2 + lVar3 == 0 || lVar2 + lVar3 < 0 != SCARRY8(lVar2,lVar3)) {
    lVar2 = -lVar3;
  }
  lVar1 = lVar3;
  if (lVar2 <= lVar3) {
    lVar1 = lVar2;
  }
  *(long *)(param_1 + 2) = lVar3;
  *(long *)(param_1 + 4) = lVar1;
  return;
}


// ===== 008dec64  FUN_008dec64 =====

void FUN_008dec64(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_2 = param_2 * *param_1;
  lVar2 = param_2 + 7;
  if (-1 < param_2) {
    lVar2 = param_2;
  }
  lVar2 = lVar2 >> 3;
  if ((*(long *)(param_1 + 4) < 0) || ((char)param_1[6] == '\x01')) {
    lVar2 = lVar2 + *(long *)(param_1 + 4);
  }
  lVar1 = *(long *)(param_1 + 2);
  if (lVar2 <= *(long *)(param_1 + 2)) {
    lVar1 = lVar2;
  }
  *(long *)(param_1 + 4) = lVar1;
  return;
}


// ===== 008decac  FUN_008decac =====

void FUN_008decac(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)param_2;
  if (lVar2 == -lVar1 || lVar2 + lVar1 < 0 != SBORROW8(lVar2,-lVar1)) {
    lVar2 = -lVar1;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  return;
}


// ===== 008deccc  FUN_008deccc =====

undefined1  [16] FUN_008deccc(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 8) != 0) {
    auVar1._0_8_ = (double)*(long *)(param_1 + 0x10) / (double)*(long *)(param_1 + 8);
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0);
}


// ===== 008decf4  FUN_008decf4 =====

void FUN_008decf4(undefined1 *param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ******local_38;
  ulong uStack_30;
  byte bStack_21;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 10;
  *(undefined8 *)(param_1 + 8) = 1000000;
  puVar2 = (undefined8 *)
           FUN_008dee68("enabled",param_1,"packet_threshold",param_1 + 4,"time_threshold");
  (**(code **)(*param_2 + 0x10))(&local_38,param_2,"WebRTC-Bwe-SeparateAudioPackets",0x1f);
  pppppppuVar1 = (undefined8 *******)local_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppppppuVar1 = &local_38;
  }
  FUN_006659ac(puVar2,pppppppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    operator_delete(local_38);
  }
  if (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar2[1];
      uVar6 = (ulong)((long)pvVar4 + (-0x20 - ((long)pvVar4 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3b) - ((long)pvVar3 - (long)pvVar4)) >> 5;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x20);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
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
      puVar2[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
  }
  return;
}


// ===== 008dee68  FUN_008dee68 =====

void * FUN_008dee68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  puVar3 = (undefined8 *)operator_new(0x60);
  puVar1 = PTR_FUN_00d51f60;
  if (((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0xffffffffffffffe0)) &&
     (puVar3 != (undefined8 *)0xffffffffffffffc0)) {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar2 = PTR_FUN_00d51f68;
    puVar3[2] = puVar1;
    puVar3[3] = puVar2;
    puVar1 = PTR_FUN_00d51f50;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
    puVar2 = PTR_FUN_00d51f58;
    puVar3[6] = puVar1;
    puVar3[7] = puVar2;
    puVar1 = PTR_FUN_00d520e8;
    puVar3[8] = param_5;
    puVar3[9] = param_6;
    puVar2 = PTR_FUN_00d520f0;
    puVar3[10] = puVar1;
    puVar3[0xb] = puVar2;
    pvVar4 = operator_new(0x18);
    local_68 = puVar3;
    local_60 = puVar3 + 0xc;
    local_58 = puVar3 + 0xc;
    FUN_0066597c(pvVar4,&local_68);
    if (local_68 != (undefined8 *)0x0) {
      uVar6 = (ulong)((long)local_60 + (-0x20 - ((long)local_60 << 0x3b))) >> 5;
      uVar5 = (ulong)(((long)local_68 - (long)local_60 << 0x3b) - ((long)local_68 - (long)local_60))
              >> 5;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      puVar3 = local_60;
      if ((1 < uVar5) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 0x1fU) == 0)) {
        uVar5 = uVar5 & 0x7fffffffffffffe;
        puVar3 = local_60 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar3 != local_68) {
        puVar3 = puVar3 + -4;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_60 = local_68;
      operator_delete(local_68);
    }
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008deff0  FUN_008deff0 =====

void FUN_008deff0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


// ===== 008df008  FUN_008df008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008df008(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  void *local_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_00d3cdf8;
  FUN_00660fac(param_1 + 1);
  param_1[3] = param_3;
  param_1[4] = param_2;
  FUN_008decf4(param_1 + 5,param_2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = _UNK_001f3868;
  uVar1 = _DAT_001f3860;
  param_1[9] = param_4;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  pvVar3 = operator_new(0xe8);
  FUN_008e4318(pvVar3,param_1[4],param_4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = pvVar3;
  pvVar3 = operator_new(0xe8);
  FUN_008e4318(pvVar3,param_1[4],param_1[9]);
  param_1[0xf] = pvVar3;
  param_1[0x10] = param_1[0xc];
  param_1[0x11] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_008f2734(param_1 + 0x13,param_2,1);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)
             FUN_008dee68("enabled",param_1 + 5,"packet_threshold",(long)param_1 + 0x2c,
                          "time_threshold",param_1 + 6);
    FUN_00665bb4(local_48);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",
                 0x2d1,"Initialized DelayBasedBwe with separate audio overuse detection",local_48);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (puVar5 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar5;
      if (pvVar3 != (void *)0x0) {
        pvVar6 = (void *)puVar5[1];
        uVar7 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
        uVar4 = (ulong)(((long)pvVar3 - (long)pvVar6 << 0x3b) - ((long)pvVar3 - (long)pvVar6)) >> 5;
        if (uVar7 <= uVar4) {
          uVar4 = uVar7;
        }
        if ((1 < uVar4) && ((((int)pvVar3 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
          uVar4 = uVar4 & 0x7fffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar4 * -0x20);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (pvVar6 != pvVar3) {
          pvVar6 = (void *)((long)pvVar6 + -0x20);
          if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puVar5[1] = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(puVar5);
    }
  }
  return;
}


// ===== 008df200  FUN_008df200 =====

void FUN_008df200(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3cdf8;
  FUN_008f2b08(param_1 + 0x13);
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 008df2c0  FUN_008df2c0 =====

void FUN_008df2c0(void *param_1)

{
  FUN_008df200();
  operator_delete(param_1);
  return;
}


// ===== 008df2f0  FUN_008df2f0 =====

void FUN_008df2f0(undefined2 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 uint param_9)

{
  undefined1 *puVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086e09c(&local_80,param_3);
  if (local_80 == puStack_78) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",
                   0x372,"Very late feedback received.");
    }
  }
  else {
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
      sVar3 = strlen("WebRTC.BWE.Types");
      lVar4 = FUN_0066631c("WebRTC.BWE.Types",sVar3,4);
      if (lVar4 != 0) {
        FUN_00666568(lVar4,3);
      }
      *(undefined1 *)(param_2 + 0x90) = 1;
    }
    iVar2 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
    puVar1 = puStack_78;
    puVar6 = local_80;
    if (local_80 != puStack_78) {
      do {
        FUN_008df554(param_2,puVar6,*param_3);
        if (((iVar2 == 2) &&
            (iVar2 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))(), iVar2 == 0)) &&
           (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",0x401,
                       "Recovered from overuse state");
        }
        iVar2 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
        puVar6 = puVar6 + 0x70;
      } while (puVar6 != puVar1);
      FUN_008f33e0(param_2 + 0x98,param_9 & 1);
      FUN_008f34dc(param_2 + 0x98,param_8);
      FUN_008df8c4(param_1,param_2,param_4,param_5,param_6,param_7);
      puVar6 = local_80;
      goto joined_r0x008df4dc;
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar6 = local_80;
joined_r0x008df4dc:
  local_80 = puVar6;
  puVar1 = puStack_78;
  if (puVar6 != (undefined1 *)0x0) {
    while (puVar6 != puVar1) {
      puVar1 = puVar1 + -0x70;
      if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0086dc48(puVar1);
    }
    puStack_78 = puVar6;
    operator_delete(local_80);
  }
  return;
}


// ===== 008df554  FUN_008df554 =====

void FUN_008df554(long param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_4c;
  long local_48;
  long local_28;
  
  if ((*(long *)(param_1 + 0x88) + 0x8000000000000001U < 2 || param_3 == 0x7fffffffffffffff) ||
     ((param_3 != -0x8000000000000000 && (2000000 < param_3 - *(long *)(param_1 + 0x88))))) {
    pvVar2 = operator_new(0x70);
    FUN_008dfca8(pvVar2,5000);
    pvVar3 = *(void **)(param_1 + 0x58);
    *(void **)(param_1 + 0x58) = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    pvVar2 = operator_new(0x70);
    FUN_008dfca8(pvVar2,5000);
    pvVar3 = *(void **)(param_1 + 0x70);
    *(void **)(param_1 + 0x70) = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    pvVar2 = operator_new(0xe8);
    FUN_008e4318(pvVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48));
    plVar4 = *(long **)(param_1 + 0x60);
    *(void **)(param_1 + 0x60) = pvVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pvVar2 = operator_new(0xe8);
    FUN_008e4318(pvVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48));
    plVar4 = *(long **)(param_1 + 0x78);
    *(void **)(param_1 + 0x78) = pvVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = *(long **)(param_1 + 0x60);
    *(long **)(param_1 + 0x80) = plVar4;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
  }
  *(long *)(param_1 + 0x88) = param_3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar9 = param_2[1];
    lVar5 = 0x58;
    goto LAB_008df73c;
  }
  if ((char)param_2[6] == '\x01') {
    plVar4 = *(long **)(param_1 + 0x78);
    lVar5 = *(long *)(param_1 + 0x38) + 1;
    *(long *)(param_1 + 0x38) = lVar5;
    if (*(int *)(param_1 + 0x2c) < lVar5) {
      uVar9 = param_2[9];
      lVar5 = 0x7fffffffffffffff;
      if ((uVar9 != 0x7fffffffffffffff) &&
         (lVar12 = *(long *)(param_1 + 0x40), lVar12 != -0x8000000000000000)) {
        lVar5 = -0x8000000000000000;
        if (lVar12 != 0x7fffffffffffffff && uVar9 != 0x8000000000000000) {
          lVar5 = uVar9 - lVar12;
        }
      }
      if (*(long *)(param_1 + 0x30) < lVar5) goto LAB_008df718;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar9 = *(ulong *)(param_1 + 0x40);
    if ((long)*(ulong *)(param_1 + 0x40) <= (long)param_2[9]) {
      uVar9 = param_2[9];
    }
    *(ulong *)(param_1 + 0x40) = uVar9;
LAB_008df718:
    *(long **)(param_1 + 0x80) = plVar4;
  }
  uVar9 = param_2[1];
  lVar5 = 0x70;
  if ((char)param_2[6] == '\0') {
    lVar5 = 0x58;
  }
LAB_008df73c:
  local_28 = 0;
  local_48 = 0;
  local_4c = 0;
  uVar1 = FUN_008dfce0(*(undefined8 *)(param_1 + lVar5),*param_2,param_2[9],param_3,uVar9,&local_28,
                       &local_48,&local_4c);
  if (local_48 == -0x8000000000000000) {
    dVar6 = -INFINITY;
  }
  else if (local_48 == 0x7fffffffffffffff) {
    dVar6 = INFINITY;
  }
  else {
    dVar6 = (double)local_48 * DAT_001f5860;
  }
  if (local_28 == -0x8000000000000000) {
    dVar7 = -INFINITY;
  }
  else if (local_28 == 0x7fffffffffffffff) {
    dVar7 = INFINITY;
  }
  else {
    dVar7 = (double)local_28 * DAT_001f5860;
  }
  uVar10 = *param_2;
  if ((long)uVar10 < 0) {
    uVar11 = -(-uVar10 / 1000) - (ulong)(500 < -uVar10 % 1000);
    uVar10 = param_2[9];
  }
  else {
    uVar11 = uVar10 / 1000;
    if (499 < uVar10 % 1000) {
      uVar11 = uVar11 + 1;
    }
    uVar10 = param_2[9];
  }
  if ((long)uVar10 < 0) {
    uVar8 = -(-uVar10 / 1000) - (ulong)(500 < -uVar10 % 1000);
  }
  else {
    uVar8 = uVar10 / 1000;
    if (499 < uVar10 % 1000) {
      uVar8 = uVar8 + 1;
    }
  }
  (**(code **)(*plVar4 + 0x10))(dVar6,dVar7,plVar4,uVar11,uVar8,uVar9,uVar1 & 1);
  return;
}


// ===== 008df8c4  FUN_008df8c4 =====

void FUN_008df8c4(byte *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6,undefined8 param_7,byte param_8,undefined8 param_9,
                 undefined8 param_10)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  code *pcVar9;
  char *local_90;
  undefined1 *puStack_88;
  undefined8 *local_80;
  undefined8 local_70;
  ulong uStack_68;
  
  plVar5 = *(long **)(param_2 + 0x80);
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  lVar8 = *plVar5;
  *(ulong *)(param_1 + 8) = 0;
  pcVar9 = *(code **)(lVar8 + 0x18);
  *(undefined1 **)(param_1 + 0x10) = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[0x10] = 0;
  iVar3 = (*pcVar9)();
  if (iVar3 == 2) {
    if ((param_4 & 1) == 0) {
      uVar6 = FUN_008f2b68(param_2 + 0x98);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_008f2c70(param_2 + 0x98,param_10), (uVar6 & 1) != 0)) {
        lVar8 = FUN_008f2c64(param_2 + 0x98);
        FUN_008f33ec(param_2 + 0x98,lVar8 / 2,param_10);
        bVar2 = 1;
        param_1[0] = 1;
        param_1[1] = 0;
        lVar8 = FUN_008f2c64(param_2 + 0x98);
        *(long *)(param_1 + 8) = lVar8;
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_002255de,
                       "../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",0x771,
                       "Reducing bitrate, no measurement: ",*(undefined8 *)(param_2 + 0x238),
                       &DAT_001dce1a,lVar8);
        }
        goto LAB_008dfb54;
      }
    }
    else {
      uVar6 = FUN_008f2bc0(param_2 + 0x98,param_10,param_3);
      if ((uVar6 & 1) != 0) {
        local_80 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = param_3;
        uStack_68 = param_4;
        uVar4 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
        FUN_008f3924(&local_90,uVar4,&local_70);
        lVar8 = FUN_008f2d20(param_2 + 0x98,&local_90,param_10);
        *(long *)(param_1 + 8) = lVar8;
        bVar2 = FUN_008f2b68(param_2 + 0x98);
        FUN_008f3938(&local_90);
        *param_1 = bVar2 & 1;
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          local_90 = "../../modules/congestion_controller/goog_cc/delay_based_bwe.cc";
          puStack_88 = (undefined1 *)0x711;
          local_80 = &local_70;
          FUN_00623bb0(&DAT_002255a0,
                       "../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",0x711,
                       "Reducing bitrate (acked bitrate: ",param_3,&DAT_001cdeb2,
                       *(undefined8 *)(param_2 + 0x238),&DAT_001dce1a,lVar8);
        }
        goto LAB_008dfb54;
      }
    }
    lVar8 = 0;
    bVar2 = 0;
  }
  else if (((param_6 & 1) == 0) || (lVar8 = FUN_008f2c64(param_2 + 0x98), param_5 <= lVar8)) {
    local_80 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = param_3;
    uStack_68 = param_4;
    uVar4 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
    FUN_008f3924(&local_90,uVar4,&local_70);
    lVar8 = FUN_008f2d20(param_2 + 0x98,&local_90,param_10);
    *(long *)(param_1 + 8) = lVar8;
    bVar2 = FUN_008f2b68(param_2 + 0x98);
    FUN_008f3938(&local_90);
    param_1[0x10] = param_8 & 1;
    *param_1 = bVar2 & 1;
  }
  else {
    param_1[0] = 1;
    param_1[1] = 1;
    FUN_008f33ec(param_2 + 0x98,param_5,param_10);
    lVar8 = FUN_008f2c64(param_2 + 0x98);
    bVar2 = 1;
    *(long *)(param_1 + 8) = lVar8;
  }
LAB_008dfb54:
  iVar3 = (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
  if ((((bVar2 & 1) != 0) && (*(long *)(param_2 + 0x238) != lVar8)) ||
     (iVar3 != *(int *)(param_2 + 0x240))) {
    plVar5 = *(long **)(param_2 + 0x18);
    puVar1 = (ulong *)(param_1 + 8);
    if ((bVar2 & 1) == 0) {
      puVar1 = (ulong *)(param_2 + 0x238);
    }
    uVar6 = *puVar1;
    if (plVar5 != (long *)0x0) {
      pvVar7 = operator_new(0x18);
      FUN_008e5d6c(pvVar7,uVar6 & 0xffffffff,iVar3);
      (**(code **)(*plVar5 + 0x28))(plVar5,pvVar7);
    }
    *(ulong *)(param_2 + 0x238) = uVar6;
    *(int *)(param_2 + 0x240) = iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}


// ===== 008dfbf8  FUN_008dfbf8 =====

void FUN_008dfbf8(long param_1)

{
  FUN_008f2d14(param_1 + 0x98);
  return;
}


// ===== 008dfc04  FUN_008dfc04 =====

void FUN_008dfc04(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00665ccc(local_38,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/congestion_controller/goog_cc/delay_based_bwe.cc",
                 0x989,"BWE Setting start bitrate to: ",local_38);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  FUN_008f2b38(param_1 + 0x98,param_2);
  return;
}


// ===== 008dfc90  FUN_008dfc90 =====

void FUN_008dfc90(long param_1)

{
  FUN_008f2b4c(param_1 + 0x98);
  return;
}


// ===== 008dfc9c  FUN_008dfc9c =====

void FUN_008dfc9c(long param_1)

{
  FUN_008f351c(param_1 + 0x98);
  return;
}


// ===== 008dfca8  FUN_008dfca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008dfca8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = _UNK_001f3868;
  uVar1 = _DAT_001f3860;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_1[4] = 0x8000000000000000;
  param_1[3] = 0x8000000000000000;
  param_1[6] = 0x8000000000000000;
  param_1[5] = 0x8000000000000000;
  param_1[10] = 0x8000000000000000;
  param_1[9] = 0x8000000000000000;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xb] = 0x8000000000000000;
  return;
}


// ===== 008dfce0  FUN_008dfce0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008dfce0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 ulong *param_6,ulong *param_7,int *param_8)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(long *)(param_1 + 0x28) + 0x8000000000000001U < 2) {
    bVar2 = false;
    *(long *)(param_1 + 0x10) = param_2;
    *(long *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
  else {
    if (param_2 < *(long *)(param_1 + 0x10)) {
      return false;
    }
    uVar3 = FUN_008e011c(param_1,param_3,param_2);
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
      lVar4 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x18) <= param_2) {
        lVar4 = param_2;
      }
      *(long *)(param_1 + 0x18) = lVar4;
    }
    else {
      uVar3 = *(long *)(param_1 + 0x58) + 0x7fffffffffffffff;
      bVar2 = uVar3 < 0xfffffffffffffffe;
      if (uVar3 < 0xfffffffffffffffe) {
        lVar4 = *(long *)(param_1 + 0x18);
        uVar3 = 0x7fffffffffffffff;
        if ((lVar4 != 0x7fffffffffffffff) &&
           (lVar7 = *(long *)(param_1 + 0x48), lVar7 != -0x8000000000000000)) {
          uVar3 = 0x8000000000000000;
          if (lVar7 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
            uVar3 = lVar4 - lVar7;
          }
        }
        *param_6 = uVar3;
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0x7fffffffffffffff) {
          uVar3 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x58);
          uVar3 = 0x7fffffffffffffff;
          if (lVar7 != -0x8000000000000000) {
            uVar3 = 0x8000000000000000;
            if (lVar7 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
              uVar3 = lVar4 - lVar7;
            }
          }
        }
        *param_7 = uVar3;
        lVar4 = *(long *)(param_1 + 0x30);
        uVar6 = 0x7fffffffffffffff;
        if ((lVar4 != 0x7fffffffffffffff) &&
           (lVar7 = *(long *)(param_1 + 0x60), lVar7 != -0x8000000000000000)) {
          uVar6 = 0x8000000000000000;
          if (lVar7 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
            uVar6 = lVar4 - lVar7;
          }
        }
        if (((uVar3 == 0x7fffffffffffffff) || (uVar6 == 0x8000000000000000)) ||
           ((uVar3 != 0x8000000000000000 &&
            ((uVar6 != 0x7fffffffffffffff && (2999999 < (long)(uVar3 - uVar6))))))) {
          uVar3 = FUN_004022fc(bVar2);
          if ((uVar3 & 1) == 0) {
            uVar3 = *param_7;
            if ((long)uVar3 < 0) {
              uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
            }
            else {
              uVar5 = uVar3 / 1000;
              if (499 < uVar3 % 1000) {
                uVar5 = uVar5 + 1;
              }
            }
            if ((long)uVar6 < 0) {
              uVar3 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
            }
            else {
              uVar3 = uVar6 / 1000;
              if (499 < uVar6 % 1000) {
                uVar3 = uVar3 + 1;
              }
            }
            FUN_00623bb0(&DAT_00224cd0,
                         "../../modules/congestion_controller/goog_cc/inter_arrival_delta.cc",0x1f2,
                         "The arrival time clock offset has changed (diff = ",uVar5 - uVar3,
                         " ms), resetting.");
          }
LAB_008dfff0:
          uVar9 = _UNK_001f3868;
          uVar8 = _DAT_001f3860;
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          *(undefined8 *)(param_1 + 8) = uVar8;
          *(undefined8 *)(param_1 + 0x40) = uVar9;
          *(undefined8 *)(param_1 + 0x38) = uVar8;
          *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x28) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x50) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x60) = 0x8000000000000000;
          *(undefined8 *)(param_1 + 0x58) = 0x8000000000000000;
          return false;
        }
        if ((long)uVar3 < 0) {
          iVar1 = *(int *)(param_1 + 0x68) + 1;
          *(int *)(param_1 + 0x68) = iVar1;
          if (iVar1 < 3) {
            return false;
          }
          uVar3 = FUN_004022fc(bVar2);
          if ((uVar3 & 1) == 0) {
            uVar3 = *param_7;
            if ((long)uVar3 < 0) {
              uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
            }
            else {
              uVar6 = uVar3 / 1000;
              if (499 < uVar3 % 1000) {
                uVar6 = uVar6 + 1;
              }
            }
            uVar3 = *param_6;
            if ((long)uVar3 < 0) {
              uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
            }
            else {
              uVar5 = uVar3 / 1000;
              if (499 < uVar3 % 1000) {
                uVar5 = uVar5 + 1;
              }
            }
            FUN_00623bb0(&DAT_002255e4,
                         "../../modules/congestion_controller/goog_cc/inter_arrival_delta.cc",0x252,
                         "Packets between send burst arrived out of order, resetting:",
                         " arrival_time_delta_ms=",uVar6,", send_time_delta_ms=",uVar5);
          }
          goto LAB_008dfff0;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
        *param_8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x38);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = param_2;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      *(undefined8 *)(param_1 + 0x48) = uVar8;
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 8) = 0;
      *(long *)(param_1 + 0x10) = param_2;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + param_5;
  return bVar2;
}


// ===== 008e011c  FUN_008e011c =====

bool FUN_008e011c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (1 < param_1[5] + 0x8000000000000001U) {
    lVar1 = param_2;
    if (param_2 != -0x8000000000000000) {
      lVar1 = param_2 - param_1[5];
    }
    lVar2 = param_2;
    if (param_2 != 0x7fffffffffffffff) {
      lVar2 = lVar1;
    }
    if (param_3 == 0x7fffffffffffffff) {
      lVar1 = 0x7fffffffffffffff;
    }
    else {
      lVar3 = param_1[3];
      lVar1 = 0x7fffffffffffffff;
      if (lVar3 != -0x8000000000000000) {
        if ((param_3 == -0x8000000000000000) || (lVar3 == 0x7fffffffffffffff)) goto LAB_008e021c;
        lVar1 = param_3 - lVar3;
        if (lVar1 == 0) {
          return false;
        }
      }
    }
    if (((((lVar2 == 0x7fffffffffffffff) || (lVar1 == -0x8000000000000000)) ||
         (lVar3 = lVar2 - lVar1,
         ((lVar3 != -1 && lVar3 + 1 < 0 == SCARRY8(lVar3,1)) && lVar1 != 0x7fffffffffffffff) &&
         lVar2 != -0x8000000000000000)) || ((5000 < lVar2 || (param_2 == 0x7fffffffffffffff)))) ||
       ((lVar1 = param_1[4], lVar1 == -0x8000000000000000 ||
        (((param_2 != -0x8000000000000000 && (lVar1 != 0x7fffffffffffffff)) &&
         (99999 < param_2 - lVar1)))))) {
LAB_008e021c:
      lVar1 = 0x7fffffffffffffff;
      if ((param_3 != 0x7fffffffffffffff) && (lVar2 = param_1[2], lVar2 != -0x8000000000000000)) {
        lVar1 = -0x8000000000000000;
        if (lVar2 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
          lVar1 = param_3 - lVar2;
        }
      }
      return *param_1 < lVar1;
    }
  }
  return false;
}


// ===== 008e0258  FUN_008e0258 =====

/* WARNING: Removing unreachable block (ram,0x008e0374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e0258(undefined1 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  double *pdVar14;
  long *plVar15;
  uint *puVar16;
  double dVar17;
  undefined8 ****local_68;
  ulong uStack_60;
  byte bStack_51;
  
  puVar13 = (uint *)(param_1 + 4);
  *(undefined8 *)puVar13 = DAT_001f58e0;
  uVar1 = _UNK_001f20a8;
  lVar9 = _DAT_001f20a0;
  puVar16 = (uint *)(param_1 + 0x20);
  *puVar16 = 10;
  plVar15 = (long *)(param_1 + 0x18);
  *param_1 = 1;
  plVar12 = (long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *plVar12 = lVar9;
  pdVar14 = (double *)(param_1 + 0x28);
  *pdVar14 = 1.0;
  puVar2 = (undefined8 *)
           FUN_008e0614("enabled",param_1,"window_packets",puVar13,"max_window_packets",param_1 + 8,
                        "window_duration",plVar12,"max_window_duration",plVar15,"required_packets",
                        puVar16,"unacked_weight",pdVar14);
  (**(code **)(*param_2 + 0x10))
            (&local_68,param_2,"WebRTC-Bwe-RobustThroughputEstimatorSettings",0x2c);
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    local_68 = &local_68;
  }
  FUN_006659ac(puVar2,local_68,uStack_60);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar6 = (void *)puVar2[1];
      uVar11 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
      uVar4 = (ulong)(((long)pvVar3 - (long)pvVar6 << 0x3b) - ((long)pvVar3 - (long)pvVar6)) >> 5;
      if (uVar11 <= uVar4) {
        uVar4 = uVar11;
      }
      if ((1 < uVar4) && ((((int)pvVar3 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
        uVar4 = uVar4 & 0x7fffffffffffffe;
        pvVar6 = (void *)((long)pvVar6 + uVar4 * -0x20);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar6 != pvVar3) {
        pvVar6 = (void *)((long)pvVar6 + -0x20);
        if (pvVar6 == (void *)0x0) {
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
  uVar5 = *puVar13;
  if (uVar5 - 0x3e9 < 0xfffffc21) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0xf2,"Window size must be between 10 and 1000 packets");
    }
    uVar5 = 0x14;
    *puVar13 = 0x14;
  }
  uVar8 = *(uint *)(param_1 + 8);
  if (uVar8 - 0x3e9 < 0xfffffc21) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0x112,"Max window size must be between 10 and 1000 packets");
    }
    uVar5 = *puVar13;
    uVar8 = 500;
  }
  uVar10 = *puVar16;
  if (uVar8 <= uVar5) {
    uVar8 = uVar5;
  }
  *(uint *)(param_1 + 8) = uVar8;
  if (uVar10 - 0x3e9 < 0xfffffc21) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0x14a,"Required number of initial packets must be between 10 and 1000 packets");
    }
    uVar5 = *puVar13;
    uVar10 = 10;
  }
  lVar9 = *plVar12;
  if (uVar10 <= uVar5) {
    uVar5 = uVar10;
  }
  *puVar16 = uVar5;
  if (lVar9 - 0x2dc6c1U < 0xffffffffffd3bfdf) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0x18a,"Window duration must be between 100 and 3000 ms");
    }
    lVar9 = 750000;
    *plVar12 = 750000;
  }
  lVar7 = *plVar15;
  if (lVar7 - 0xe4e1c1U < 0xffffffffff2a607f) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0x1b2,"Max window duration must be between 1 and 15 s");
    }
    lVar9 = *plVar12;
    lVar7 = 5000000;
    *plVar15 = 5000000;
  }
  dVar17 = *pdVar14;
  if (lVar9 <= lVar7) {
    lVar7 = lVar9;
  }
  *plVar12 = lVar7;
  if ((dVar17 < 0.0) || (dVar17 != 1.0 && dVar17 < 1.0 == NAN(dVar17))) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator_interface.cc"
                   ,0x1e2,"Weight for prior unacked size must be between 0 and 1.");
    }
    *pdVar14 = 1.0;
  }
  return;
}


// ===== 008e0614  FUN_008e0614 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_008e0614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

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
  
  puVar5 = (undefined8 *)operator_new(0xe0);
  puVar1 = PTR_FUN_00d51f60;
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
    if ((((uVar9 & 1) == 0) && (puVar5 != (undefined8 *)0xffffffffffffff60)) &&
       (puVar5 != (undefined8 *)0xffffffffffffff40)) {
      *puVar5 = param_1;
      puVar5[1] = param_2;
      puVar2 = PTR_FUN_00d51f68;
      puVar5[2] = puVar1;
      puVar5[3] = puVar2;
      puVar1 = PTR_FUN_00d520c8;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      puVar2 = PTR_FUN_00d520d0;
      puVar5[8] = param_5;
      puVar5[9] = param_6;
      puVar5[6] = puVar1;
      puVar5[7] = puVar2;
      puVar5[10] = puVar1;
      puVar5[0xb] = puVar2;
      puVar3 = PTR_FUN_00d520e8;
      puVar5[0xc] = param_7;
      puVar5[0xd] = param_8;
      puVar4 = PTR_FUN_00d520f0;
      puVar5[0x17] = puVar2;
      puVar5[0xe] = puVar3;
      puVar5[0xf] = puVar4;
      puVar5[0x10] = param_9;
      puVar5[0x11] = param_10;
      puVar5[0x12] = puVar3;
      puVar5[0x13] = puVar4;
      puVar5[0x14] = param_11;
      puVar5[0x15] = param_12;
      puVar5[0x16] = puVar1;
      puVar1 = PTR_FUN_00d51f40;
      puVar5[0x18] = param_13;
      puVar5[0x19] = param_14;
      puVar2 = PTR_FUN_00d51f48;
      puVar5[0x1a] = puVar1;
      puVar5[0x1b] = puVar2;
      pvVar6 = operator_new(0x18);
      local_78 = puVar5;
      local_70 = puVar5 + 0x1c;
      local_68 = puVar5 + 0x1c;
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


// ===== 008e0820  FUN_008e0820 =====

void FUN_008e0820(void)

{
  return;
}


// ===== 008e0828  FUN_008e0828 =====

void * FUN_008e0828(undefined8 param_1)

{
  void *pvVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  local_28 = 0xffffffffffffffff;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008e0258(&local_50,param_1);
  if (((ulong)local_50 & 1) == 0) {
    pvVar1 = operator_new(0x28);
    FUN_008e08ac(pvVar1,param_1);
  }
  else {
    pvVar1 = operator_new(0x70);
    FUN_008e2144(pvVar1,&local_50);
  }
  return pvVar1;
}


// ===== 008e08ac  FUN_008e08ac =====

void FUN_008e08ac(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x278);
  FUN_008e0b34(pvVar1,param_2);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3ce18;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = pvVar1;
  return;
}


// ===== 008e090c  FUN_008e090c =====

void FUN_008e090c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d3ce18;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_008e0820(param_1);
  return;
}


// ===== 008e0958  FUN_008e0958 =====

void FUN_008e0958(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d3ce18;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_008e0820(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008e09b0  FUN_008e09b0 =====

void FUN_008e09b0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 0xe) {
    if (((*(char *)(param_1 + 0x10) == '\x01') && (*(long *)(param_1 + 8) < *param_2)) &&
       ((**(code **)(**(long **)(param_1 + 0x20) + 0x20))(), *(char *)(param_1 + 0x10) == '\x01')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    lVar3 = param_2[1];
    lVar2 = 0x7fffffffffffffff;
    if ((lVar3 != 0x7fffffffffffffff) && (lVar4 = param_2[2], lVar4 != 0x7fffffffffffffff)) {
      lVar2 = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
        lVar2 = lVar4 + lVar3;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
              (*(long **)(param_1 + 0x20),param_2[9],lVar2,*(undefined1 *)(param_1 + 0x18));
  }
  return;
}


// ===== 008e0a8c  FUN_008e0a8c =====

void FUN_008e0a8c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  return;
}


// ===== 008e0ab8  FUN_008e0ab8 =====

void FUN_008e0ab8(long param_1)

{
  FUN_008e12b8(*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 008e0adc  FUN_008e0adc =====

void FUN_008e0adc(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_1 != -8) {
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e0b28  FUN_008e0b28 =====

void FUN_008e0b28(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 008e0b34  FUN_008e0b34 =====

/* WARNING: Removing unreachable block (ram,0x008e0e28) */
/* WARNING: Removing unreachable block (ram,0x008e0e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008e0b34(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uStack_139;
  char *local_138;
  undefined8 local_130;
  undefined1 *local_128;
  char *local_120;
  char **ppcStack_118;
  undefined8 ****local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  char **local_f8;
  char *local_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  char **local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 ***local_98;
  undefined8 uStack_90;
  undefined7 local_88;
  undefined1 uStack_81;
  
  *param_1 = &PTR_FUN_00d3ce60;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_00661054(param_1 + 2,"initial_window_ms",0x11);
  uVar5 = _UNK_001f4bb8;
  uVar7 = _DAT_001f4bb0;
  puVar1 = PTR_DAT_00d520a8 + 0x10;
  *(undefined4 *)((long)param_1 + 0x4c) = 500;
  param_1[2] = puVar1;
  param_1[0xb] = uVar5;
  param_1[10] = uVar7;
  FUN_00661054(param_1 + 0xc,"window_ms",9);
  param_1[0xc] = puVar1;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x96;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar7;
  FUN_00661054(param_1 + 0x16,"scale",5);
  puVar1 = PTR_DAT_00d52020;
  param_1[0x1e] = 0x4024000000000000;
  puVar1 = puVar1 + 0x10;
  param_1[0x16] = puVar1;
  FUN_00661054(param_1 + 0x1f,"scale_alr",9);
  uVar7 = param_1[0x1e];
  param_1[0x1f] = puVar1;
  param_1[0x27] = 0x4024000000000000;
  FUN_00661054(param_1 + 0x28,"scale_small",0xb);
  param_1[0x28] = puVar1;
  param_1[0x30] = uVar7;
  FUN_00661054(param_1 + 0x31,"small_thresh",0xc);
  param_1[0x31] = &PTR_FUN_00d280c0;
  param_1[0x39] = 0;
  FUN_00661054(param_1 + 0x3a,"symmetry_cap",0xc);
  param_1[0x3a] = &PTR_FUN_00d28090;
  param_1[0x42] = 0;
  FUN_00661054(param_1 + 0x43,"floor",5);
  param_1[0x43] = &PTR_FUN_00d28090;
  uVar7 = DAT_001f5810;
  param_1[0x4d] = 0xffffffffffffffff;
  param_1[0x4e] = uVar7;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  local_e0 = (undefined8 ****)(param_1 + 2);
  puStack_d8 = param_1 + 0xc;
  local_d0 = param_1 + 0x16;
  local_c8 = (char **)(param_1 + 0x1f);
  local_c0 = param_1 + 0x28;
  local_b8 = param_1 + 0x31;
  puStack_b0 = param_1 + 0x3a;
  local_a8 = param_1 + 0x43;
  (**(code **)(*param_2 + 0x10))(&local_110,param_2,"WebRTC-BweThroughputWindowConfig",0x20);
  puVar2 = puStack_108;
  pppppuVar4 = (undefined8 *****)local_110;
  if (-1 < (long)local_100) {
    puVar2 = (undefined8 *)((ulong)local_100 >> 0x38);
    pppppuVar4 = &local_110;
  }
  FUN_00661cc0(&local_e0,8,pppppuVar4,puVar2);
  if ((long)local_100 < 0) {
    operator_delete(local_110);
    uVar6 = FUN_00417e08();
  }
  else {
    uVar6 = FUN_00417e08();
  }
  if ((uVar6 & 1) == 0) {
    local_138 = "../../modules/congestion_controller/goog_cc/bitrate_estimator.cc";
    local_130 = 0x209;
    local_128 = &uStack_139;
    ppcStack_118 = &local_138;
    local_120 = "BitrateEstimator settings, initial_window_ms ";
    FUN_008e1314(&local_e0,param_1 + 2);
    if ((long)local_d0 < 0) {
      FUN_005478d8(&local_110,local_e0,puStack_d8);
      local_f8 = &local_120;
      if ((long)local_d0 < 0) {
        operator_delete(local_e0);
      }
    }
    else {
      local_f8 = &local_120;
      puStack_108 = puStack_d8;
      local_110 = local_e0;
      local_100 = local_d0;
    }
    ppppuStack_e8 = &local_110;
    local_f0 = ", window_ms: ";
    FUN_008e1314(&local_98,param_1 + 0xc);
    local_d0 = (undefined8 *)CONCAT17(uStack_81,local_88);
    local_c8 = &local_f0;
    puStack_d8 = (undefined8 *)uStack_90;
    local_e0 = (undefined8 ****)local_98;
    pppuVar3 = (undefined8 ***)ppppuStack_e8[3][1];
    FUN_00623bb0("\r\t\n\t\n",*pppuVar3,*(undefined4 *)(pppuVar3 + 1),*ppppuStack_e8[3],
                 ppppuStack_e8,local_f0,&local_e0);
    if ((long)local_d0 < 0) {
      operator_delete(local_e0);
    }
    if ((long)local_100 < 0) {
      operator_delete(local_110);
    }
  }
  return;
}


// ===== 008e0ee0  FUN_008e0ee0 =====

void FUN_008e0ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3ce60;
  FUN_006634ac(param_1 + 0x43);
  FUN_006634ac(param_1 + 0x3a);
  FUN_006634ac(param_1 + 0x31);
  FUN_006634ac(param_1 + 0x28);
  FUN_006634ac(param_1 + 0x1f);
  FUN_006634ac(param_1 + 0x16);
  FUN_006634ac(param_1 + 0xc);
  FUN_006634ac(param_1 + 2);
  return;
}


// ===== 008e0f50  FUN_008e0f50 =====

void FUN_008e0f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3ce60;
  FUN_006634ac(param_1 + 0x43);
  FUN_006634ac(param_1 + 0x3a);
  FUN_006634ac(param_1 + 0x31);
  FUN_006634ac(param_1 + 0x28);
  FUN_006634ac(param_1 + 0x1f);
  FUN_006634ac(param_1 + 0x16);
  FUN_006634ac(param_1 + 0xc);
  FUN_006634ac(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 008e0fcc  FUN_008e0fcc =====

void FUN_008e0fcc(long param_1,ulong param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *(float *)(param_1 + 0x270);
  uVar3 = param_2 / 1000;
  lVar4 = 0x4c;
  if (0.0 <= fVar7) {
    lVar4 = 0x9c;
  }
  if (499 < param_2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  lVar5 = *(long *)(param_1 + 0x268);
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar3 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  iVar2 = *(int *)(param_1 + lVar4);
  lVar4 = (long)iVar2;
  if ((long)uVar3 < lVar5) {
    lVar6 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  else if (lVar5 < 0) {
    lVar6 = *(long *)(param_1 + 0x260);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x260) + (uVar3 - lVar5);
    *(long *)(param_1 + 0x260) = lVar6;
    if (lVar4 < (long)(uVar3 - lVar5)) {
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar6 / lVar4;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      lVar6 = lVar6 - lVar5 * lVar4;
      *(long *)(param_1 + 0x260) = lVar6;
    }
  }
  *(ulong *)(param_1 + 0x268) = uVar3;
  if (lVar6 < lVar4) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    *(long *)(param_1 + 0x260) = lVar6 - lVar4;
    *(int *)(param_1 + 8) = param_3;
    fVar10 = ((float)iVar1 * 8.0) / (float)iVar2;
    if (0.0 <= fVar10) {
      if (fVar7 < 0.0) {
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0((double)fVar10,&DAT_001f6471,
                       "../../modules/congestion_controller/goog_cc/bitrate_estimator.cc",0x299,
                       "Initializing bitrate estimate: "," [kbps]");
        }
        *(float *)(param_1 + 0x270) = fVar10;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x210);
        lVar4 = 0x138;
        if ((param_4 & fVar10 < fVar7) == 0) {
          lVar4 = 0xf0;
        }
        lVar6 = 0x180;
        if (*(long *)(param_1 + 0x1c8) <= (long)iVar1 || fVar10 >= fVar7) {
          lVar6 = lVar4;
        }
        fVar8 = INFINITY;
        if (lVar5 != 0x7fffffffffffffff) {
          fVar8 = (float)lVar5 * 0.001;
        }
        lVar4 = *(long *)(param_1 + 600);
        fVar9 = -INFINITY;
        if (lVar5 != -0x8000000000000000) {
          fVar9 = fVar8;
        }
        if (fVar10 <= fVar9) {
          fVar9 = fVar10;
        }
        fVar8 = (ABS(fVar7 - fVar10) * (float)*(double *)(param_1 + lVar6)) / (fVar7 + fVar9);
        fVar9 = *(float *)(param_1 + 0x274) + 5.0;
        fVar8 = fVar8 * fVar8;
        fVar7 = (fVar10 * fVar9 + fVar7 * fVar8) / (fVar9 + fVar8);
        if (lVar4 == -0x8000000000000000) {
          fVar10 = -INFINITY;
        }
        else if (lVar4 == 0x7fffffffffffffff) {
          fVar10 = INFINITY;
        }
        else {
          fVar10 = (float)lVar4 * 0.001;
        }
        if (fVar10 <= fVar7) {
          fVar10 = fVar7;
        }
        *(float *)(param_1 + 0x270) = fVar10;
        *(float *)(param_1 + 0x274) = (fVar9 * fVar8) / (fVar9 + fVar8);
      }
    }
  }
  return;
}


// ===== 008e124c  FUN_008e124c =====

undefined1  [16] FUN_008e124c(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(float *)(param_1 + 0x270) < 0.0) {
    return ZEXT816(0);
  }
  fVar1 = *(float *)(param_1 + 0x270) * 1000.0;
  if (fVar1 == INFINITY) {
    auVar2._8_8_ = 1;
    auVar2._0_8_ = 0x7fffffffffffffff;
    return auVar2;
  }
  if (fVar1 == -INFINITY) {
    auVar3._8_8_ = 1;
    auVar3._0_8_ = 0x8000000000000000;
    return auVar3;
  }
  auVar4._0_8_ = (long)fVar1;
  auVar4._8_8_ = 1;
  return auVar4;
}


// ===== 008e12b8  FUN_008e12b8 =====

undefined1  [16] FUN_008e12b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (0 < *(long *)(param_1 + 0x260)) {
    lVar2 = *(long *)(param_1 + 0x260) * 1000;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = ((long)*(int *)(param_1 + 8) * 8000000) / lVar2;
    }
    auVar3._8_8_ = 1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  return ZEXT816(0);
}


// ===== 008e12f8  FUN_008e12f8 =====

void FUN_008e12f8(long param_1)

{
  *(float *)(param_1 + 0x274) = *(float *)(param_1 + 0x274) + 200.0;
  return;
}


// ===== 008e1314  FUN_008e1314 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008e1314(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  void *local_158 [11];
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  
  puVar3 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_158[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[9] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_158[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[3] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0;
  local_158[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_e8 = puVar1;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar4 = *(long *)((long)local_158[0] + -0x18);
  FUN_00520e8c((long)local_158 + lVar4,local_158 + 1);
  *(undefined8 *)((long)&local_d0 + lVar4) = 0;
  local_158[0] = puVar2 + 0x18;
  *(undefined1 *)((long)&uStack_c8 + lVar4 + 4) = 0;
  *(undefined4 *)((long)&uStack_c8 + lVar4) = 0xffffffff;
  puVar2 = PTR_DAT_00d51e20 + 0x10;
  local_158[1] = puVar2;
  puStack_e8 = puVar1;
  FUN_0053ce34(local_158 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_158[6] = (void *)0x0;
  local_158[5] = (void *)0x0;
  local_158[8] = (void *)0x0;
  local_158[7] = (void *)0x0;
  local_158[4] = (void *)0x0;
  local_158[3] = (void *)0x0;
  local_158[10] = (void *)0x0;
  local_158[9] = (void *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  local_100 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x10);
  local_158[1] = puVar1;
  FUN_006e2de0(local_158 + 1);
  FUN_0054bae0(local_158,*(undefined4 *)(param_2 + 0x3c));
  FUN_0054d504(param_1,local_158 + 1);
  local_158[0] = *(void **)puVar3;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x18);
  if (local_100 < 0) {
    local_158[1] = puVar1;
    operator_delete(local_158[9]);
  }
  local_158[1] = puVar2;
  FUN_0053ceec(local_158 + 2);
  FUN_0054b3d4(local_158,puVar3 + 8);
  thunk_FUN_00520cf4(&puStack_e8);
  return;
}


// ===== 008e14a0  FUN_008e14a0 =====

void FUN_008e14a0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ===== 008e14c0  FUN_008e14c0 =====

void FUN_008e14c0(long param_1)

{
  long local_18;
  
  local_18 = param_1;
  FUN_008e20d0(&local_18,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 008e14f0  FUN_008e14f0 =====

/* WARNING: Removing unreachable block (ram,0x008e18c4) */
/* WARNING: Removing unreachable block (ram,0x008e1e9c) */
/* WARNING: Removing unreachable block (ram,0x008e1eb4) */
/* WARNING: Removing unreachable block (ram,0x008e1ecc) */
/* WARNING: Removing unreachable block (ram,0x008e1f30) */
/* WARNING: Removing unreachable block (ram,0x008e1f48) */
/* WARNING: Removing unreachable block (ram,0x008e18dc) */
/* WARNING: Removing unreachable block (ram,0x008e18f4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_008e14f0(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  char **ppcVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  void *pvVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  char **ppcVar35;
  ulong uVar36;
  long *plVar37;
  undefined1 auVar38 [16];
  char *local_248;
  char ****ppppcStack_240;
  char cStack_231;
  char **local_230;
  char **ppcStack_228;
  char cStack_219;
  void *local_218 [2];
  char cStack_201;
  char ***local_200 [2];
  char cStack_1e9;
  char *local_1e8;
  char ****ppppcStack_1e0;
  char cStack_1d1;
  char **local_1d0;
  char **ppcStack_1c8;
  char cStack_1b9;
  char *local_1b8;
  char ****ppppcStack_1b0;
  char **local_1a8;
  char **local_1a0;
  char *local_198;
  char ***pppcStack_190;
  char ****local_188;
  char **ppcStack_180;
  undefined *local_178;
  char *****pppppcStack_170;
  void **local_168;
  undefined **ppuStack_160;
  undefined *local_158;
  void ***pppvStack_150;
  char ***local_148;
  undefined **ppuStack_140;
  char *local_138;
  char ****ppppcStack_130;
  char **local_128;
  char **local_120;
  char *local_118;
  char ***pppcStack_110;
  char ****local_108;
  char **ppcStack_100;
  undefined *local_f8;
  char *****pppppcStack_f0;
  void **local_e8;
  undefined **ppuStack_e0;
  char *local_d8;
  void ***pppvStack_d0;
  char ***local_c8;
  char **ppcStack_c0;
  void *local_b8 [3];
  char ***local_a0 [3];
  char ***local_88;
  undefined8 local_80;
  char ****local_78;
  
  uVar15 = *(uint *)(param_2 + 4);
  ppcVar35 = (char **)(ulong)uVar15;
  FUN_008e1f70(param_1,param_2[9]);
  plVar24 = (long *)param_1[1];
  plVar22 = param_1 + 1;
  while (plVar37 = plVar22, plVar24 != (long *)0x0) {
    while (plVar17 = plVar24, plVar22 = plVar17, (int)*(uint *)(plVar17 + 4) <= (int)uVar15) {
      if (uVar15 == *(uint *)(plVar17 + 4)) goto LAB_008e15f0;
      plVar24 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar37 = plVar17 + 1;
        goto LAB_008e156c;
      }
    }
    plVar24 = (long *)*plVar17;
  }
LAB_008e156c:
  plVar17 = (long *)operator_new(0x68);
  if ((plVar17 == (long *)0x0) || (*plVar17 = 0, plVar17 == (long *)0xffffffffffffffe0))
  goto LAB_008e1f5c;
  *(uint *)(plVar17 + 4) = uVar15;
  lVar29 = _UNK_001f1c18;
  lVar30 = _DAT_001f1c10;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *plVar17 = 0;
  plVar17[1] = 0;
  plVar17[6] = lVar29;
  plVar17[5] = lVar30;
  lVar29 = _UNK_001f3458;
  lVar30 = _DAT_001f3450;
  plVar17[9] = -0x8000000000000000;
  plVar17[10] = 0;
  plVar17[8] = lVar29;
  plVar17[7] = lVar30;
  plVar17[2] = (long)plVar22;
  *plVar37 = (long)plVar17;
  plVar22 = plVar17;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar22 = (long *)*plVar37;
  }
  FUN_005d5b94(param_1[1],plVar22);
  param_1[2] = param_1[2] + 1;
LAB_008e15f0:
  lVar25 = *param_2;
  lVar30 = lVar25;
  lVar29 = plVar17[6];
  if (lVar25 < plVar17[6]) {
    plVar17[6] = lVar25;
    lVar30 = *param_2;
    lVar29 = lVar25;
  }
  lVar25 = plVar17[7];
  if (plVar17[7] < lVar30) {
    plVar17[7] = lVar30;
    plVar17[10] = param_2[1];
    lVar25 = lVar30;
  }
  lVar26 = param_2[9];
  lVar30 = lVar26;
  lVar31 = plVar17[8];
  if (lVar26 < plVar17[8]) {
    plVar17[8] = lVar26;
    plVar17[0xb] = param_2[1];
    lVar30 = param_2[9];
    lVar31 = lVar26;
  }
  lVar26 = plVar17[9];
  if (plVar17[9] < lVar30) {
    plVar17[9] = lVar30;
    lVar26 = lVar30;
  }
  lVar33 = plVar17[0xc];
  lVar30 = 0x7fffffffffffffff;
  if ((lVar33 != 0x7fffffffffffffff) && (lVar34 = param_2[1], lVar34 != 0x7fffffffffffffff)) {
    lVar30 = -0x8000000000000000;
    if (lVar34 != -0x8000000000000000 && lVar33 != -0x8000000000000000) {
      lVar30 = lVar33 + lVar34;
    }
  }
  plVar17[0xc] = lVar30;
  lVar33 = 0;
  iVar1 = (int)plVar17[5] + 1;
  *(int *)(plVar17 + 5) = iVar1;
  if (iVar1 < (int)((double)*(int *)((long)param_2 + 0x24) * DAT_001f5c98)) {
    uVar36 = 0;
    goto LAB_008e1898;
  }
  uVar36 = 0;
  if (lVar30 < (long)((double)(int)param_2[5] * DAT_001f5c98)) goto LAB_008e1898;
  uVar36 = 0x7fffffffffffffff;
  if (lVar25 == 0x7fffffffffffffff) {
    lVar33 = 0x7fffffffffffffff;
    if (lVar26 != 0x7fffffffffffffff) goto LAB_008e1720;
LAB_008e17bc:
    uVar18 = FUN_00417e08();
    if ((uVar18 & 1) == 0) {
      local_88 = (char ***)0x1b1f61;
      local_80 = 0x391;
      local_78 = local_200;
      ppppcStack_1e0 = &local_88;
      local_1e8 = "Probing unsuccessful, invalid send/receive interval [cluster id: ";
      ppcStack_1c8 = &local_1e8;
      local_1d0 = ppcVar35;
      FUN_006224f8(local_a0,lVar33);
      FUN_006224f8(local_b8,uVar36);
      FUN_00623bb0(&DAT_00225639,*ppppcStack_1e0,*(undefined4 *)(ppppcStack_1e0 + 1),local_1e8,
                   (ulong)local_1d0 & 0xffffffff,"] [send interval: ",local_a0,
                   "] [receive interval: ",local_b8,&DAT_0019fa9e);
    }
    plVar22 = (long *)param_1[3];
    if (plVar22 != (long *)0x0) {
      pvVar21 = operator_new(0x18);
      uVar23 = 0;
LAB_008e1878:
      FUN_008e5db0(pvVar21,ppcVar35,uVar23);
      (**(code **)(*plVar22 + 0x28))(plVar22,pvVar21);
    }
  }
  else {
    lVar33 = 0x7fffffffffffffff;
    if (lVar29 != -0x8000000000000000) {
      lVar33 = -0x8000000000000000;
      if (lVar29 != 0x7fffffffffffffff && lVar25 != -0x8000000000000000) {
        lVar33 = lVar25 - lVar29;
      }
    }
    if (lVar26 == 0x7fffffffffffffff) goto LAB_008e17bc;
LAB_008e1720:
    if (lVar31 == -0x8000000000000000) goto LAB_008e17bc;
    uVar36 = 0x8000000000000000;
    if (lVar31 != 0x7fffffffffffffff && lVar26 != -0x8000000000000000) {
      uVar36 = lVar26 - lVar31;
    }
    if (((lVar33 - 0xf4241U < 0xfffffffffff0bdc0) || ((long)uVar36 < 1)) || (1000000 < uVar36))
    goto LAB_008e17bc;
    if (lVar30 == 0x7fffffffffffffff) {
      lVar29 = 0x7fffffffffffffff;
    }
    else {
      lVar25 = plVar17[10];
      lVar29 = 0x7fffffffffffffff;
      if (lVar25 != -0x8000000000000000) {
        lVar29 = -0x8000000000000000;
        if (lVar25 != 0x7fffffffffffffff && lVar30 != -0x8000000000000000) {
          lVar29 = lVar30 - lVar25;
        }
      }
    }
    lVar25 = 0x7fffffffffffffff;
    if ((lVar30 != 0x7fffffffffffffff) && (lVar31 = plVar17[0xb], lVar31 != -0x8000000000000000)) {
      lVar25 = -0x8000000000000000;
      if (lVar31 != 0x7fffffffffffffff && lVar30 != -0x8000000000000000) {
        lVar25 = lVar30 - lVar31;
      }
    }
    uVar18 = 0;
    if (lVar33 != 0) {
      uVar18 = (lVar29 * 8000000) / lVar33;
    }
    uVar16 = 0;
    if (uVar36 != 0) {
      uVar16 = (lVar25 * 8000000) / (long)uVar36;
    }
    if (uVar16 == 0x8000000000000000) {
      dVar27 = -INFINITY;
    }
    else if (uVar16 == 0x7fffffffffffffff) {
      dVar27 = INFINITY;
    }
    else {
      dVar27 = (double)(long)uVar16;
    }
    if (uVar18 == 0x8000000000000000) {
      dVar28 = -INFINITY;
    }
    else if (uVar18 == 0x7fffffffffffffff) {
      dVar28 = INFINITY;
    }
    else {
      dVar28 = (double)(long)uVar18;
    }
    dVar27 = dVar27 / dVar28;
    uVar19 = FUN_00417e08();
    if (dVar27 == 2.0 || dVar27 < 2.0 != NAN(dVar27)) {
      if ((uVar19 & 1) == 0) {
        local_88 = (char ***)0x1b1f61;
        local_80 = 0x521;
        local_78 = &local_148;
        ppppcStack_130 = &local_88;
        local_138 = "Probing successful [cluster id: ";
        local_120 = &local_138;
        pppcStack_110 = &local_128;
        local_118 = "] [send: ";
        local_128 = ppcVar35;
        FUN_00665f28(local_a0,lVar29);
        ppcStack_100 = &local_118;
        pppppcStack_f0 = &local_108;
        local_f8 = &DAT_001ceb48;
        local_108 = local_a0;
        FUN_006224f8(local_b8,lVar33);
        ppuStack_e0 = &local_f8;
        pppvStack_d0 = &local_e8;
        local_d8 = " = ";
        local_e8 = local_b8;
        FUN_00665ccc(&local_1d0,uVar18);
        ppcStack_c0 = &local_d8;
        ppppcStack_240 = &local_c8;
        local_248 = " ] [receive: ";
        local_c8 = &local_1d0;
        FUN_00665f28(&local_1e8,lVar25);
        ppcStack_228 = &local_248;
        local_230 = &local_1e8;
        FUN_006224f8(local_200,uVar36);
        FUN_00665ccc(local_218,uVar16);
        ppcVar13 = ppppcStack_240[1][1];
        pcVar14 = ppcVar13[1];
        puVar2 = *(undefined8 **)(pcVar14 + 8);
        puVar3 = (undefined8 *)puVar2[1];
        puVar11 = (undefined4 *)puVar3[1];
        puVar32 = *(undefined8 **)(puVar11 + 2);
        puVar4 = (undefined8 *)puVar32[1];
        FUN_00623bb0(&DAT_0022565b,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar32,*puVar11,*puVar3,
                     *puVar2,*(undefined8 *)pcVar14,*ppcVar13,*ppppcStack_240[1],*ppppcStack_240,
                     local_248,local_230,&DAT_001ceb48,local_200,&DAT_0019afbc,local_218,
                     &DAT_0019fa9e);
        if (cStack_201 < '\0') {
          operator_delete(local_218[0]);
        }
        if (cStack_1e9 < '\0') {
          operator_delete(local_200[0]);
        }
        if (cStack_1d1 < '\0') {
          operator_delete(local_1e8);
        }
        if (cStack_1b9 < '\0') {
          operator_delete(local_1d0);
        }
      }
      plVar22 = (long *)param_1[3];
      uVar19 = uVar16;
      if ((long)uVar18 <= (long)uVar16) {
        uVar19 = uVar18;
      }
      uVar36 = (long)((double)(long)uVar16 * DAT_001f5368);
      if ((long)((double)(long)uVar18 * DAT_001f59c8) <= (long)uVar16) {
        uVar36 = uVar19;
      }
      if (plVar22 != (long *)0x0) {
        pvVar21 = operator_new(0x18);
        FUN_008e5dec(pvVar21,ppcVar35,uVar36 & 0xffffffff);
        (**(code **)(*plVar22 + 0x28))(plVar22,pvVar21);
      }
      if ((char)param_1[5] == '\x01') {
        param_1[4] = uVar36;
      }
      else {
        if ((ulong *)(param_1 + 4) == (ulong *)0x0) {
LAB_008e1f5c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        param_1[4] = uVar36;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      lVar33 = param_1[5];
      goto LAB_008e1898;
    }
    if ((uVar19 & 1) == 0) {
      local_88 = (char ***)0x1b1f61;
      local_80 = 0x479;
      local_78 = (char ****)&stack0xffffffffffffff9f;
      ppppcStack_1b0 = &local_88;
      local_1b8 = "Probing unsuccessful, receive/send ratio too high [cluster id: ";
      local_1a0 = &local_1b8;
      pppcStack_190 = &local_1a8;
      local_198 = "] [send: ";
      local_1a8 = ppcVar35;
      FUN_00665f28(local_a0,lVar29);
      ppcStack_180 = &local_198;
      pppppcStack_170 = &local_188;
      local_178 = &DAT_001ceb48;
      local_188 = local_a0;
      FUN_006224f8(local_b8,lVar33);
      ppuStack_160 = &local_178;
      pppvStack_150 = &local_168;
      local_158 = &DAT_0019afbc;
      local_168 = local_b8;
      FUN_00665ccc(&local_1d0,uVar18);
      ppuStack_140 = &local_158;
      ppppcStack_130 = &local_148;
      local_138 = "] [receive: ";
      local_148 = &local_1d0;
      FUN_00665f28(&local_1e8,lVar25);
      local_120 = &local_138;
      pppcStack_110 = &local_128;
      local_118 = " / ";
      local_128 = &local_1e8;
      FUN_006224f8(local_200,uVar36);
      ppcStack_100 = &local_118;
      pppppcStack_f0 = &local_108;
      local_f8 = &DAT_0019afbc;
      local_108 = local_200;
      FUN_00665ccc(local_218,uVar16);
      ppuStack_e0 = &local_f8;
      pppvStack_d0 = &local_e8;
      local_d8 = " ] [ratio: ";
      local_e8 = local_218;
      FUN_00665ccc(&local_230,uVar16);
      ppcStack_c0 = &local_d8;
      local_c8 = &local_230;
      FUN_00665ccc(&local_248,uVar18);
      puVar2 = (undefined8 *)pppvStack_d0[1][1];
      puVar3 = (undefined8 *)puVar2[1];
      puVar4 = (undefined8 *)puVar3[1];
      puVar32 = (undefined8 *)puVar4[1];
      puVar5 = (undefined8 *)puVar32[1];
      puVar6 = (undefined8 *)puVar5[1];
      puVar7 = (undefined8 *)puVar6[1];
      puVar8 = (undefined8 *)puVar7[1];
      puVar9 = (undefined8 *)puVar8[1];
      puVar10 = (undefined8 *)puVar9[1];
      puVar11 = (undefined4 *)puVar10[1];
      puVar20 = *(undefined8 **)(puVar11 + 2);
      puVar12 = (undefined8 *)puVar20[1];
      FUN_00623bb0(dVar27,0x4000000000000000,&DAT_00225642,*puVar12,*(undefined4 *)(puVar12 + 1),
                   *puVar20,*puVar11,*puVar10,*puVar9,*puVar8,*puVar7,*puVar6,*puVar5,*puVar32,
                   *puVar4,*puVar3,*puVar2,*pppvStack_d0[1],*pppvStack_d0,local_d8,local_c8,
                   &DAT_001ceb48,&local_248,&DAT_0019afbc," > kMaxValidRatio (",&DAT_001dfd2b);
      if (cStack_231 < '\0') {
        operator_delete(local_248);
      }
      if (cStack_219 < '\0') {
        operator_delete(local_230);
      }
      if (cStack_201 < '\0') {
        operator_delete(local_218[0]);
      }
      if (cStack_1e9 < '\0') {
        operator_delete(local_200[0]);
      }
      if (cStack_1d1 < '\0') {
        operator_delete(local_1e8);
      }
      if (cStack_1b9 < '\0') {
        operator_delete(local_1d0);
      }
    }
    plVar22 = (long *)param_1[3];
    if (plVar22 != (long *)0x0) {
      pvVar21 = operator_new(0x18);
      uVar23 = 1;
      goto LAB_008e1878;
    }
  }
  lVar33 = 0;
  uVar36 = 0;
LAB_008e1898:
  auVar38._8_8_ = lVar33;
  auVar38._0_8_ = uVar36;
  return auVar38;
}


// ===== 008e1f70  FUN_008e1f70 =====

void FUN_008e1f70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
joined_r0x008e1f9c:
  do {
    if (puVar5 == param_1 + 1) {
      return;
    }
    lVar3 = puVar5[9];
    if (lVar3 != 0x7fffffffffffffff) {
      if (lVar3 != -0x8000000000000000) {
        lVar3 = lVar3 + 1000000;
      }
      if (lVar3 < param_2) {
        puVar1 = (undefined8 *)puVar5[1];
        puVar4 = puVar5;
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
          do {
            puVar6 = (undefined8 *)puVar4[2];
            bVar2 = puVar4 != (undefined8 *)*puVar6;
            puVar4 = puVar6;
          } while (bVar2);
        }
        else {
          do {
            puVar6 = puVar1;
            puVar1 = (undefined8 *)*puVar6;
          } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
        }
        if ((undefined8 *)*param_1 == puVar5) {
          *param_1 = puVar6;
        }
        param_1[2] = param_1[2] + -1;
        FUN_005d5d48(param_1[1],puVar5);
        if (puVar5 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(puVar5);
        puVar5 = puVar6;
        goto joined_r0x008e1f9c;
      }
    }
    puVar1 = (undefined8 *)puVar5[1];
    puVar4 = puVar5;
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar4[2];
        bVar2 = puVar4 != (undefined8 *)*puVar5;
        puVar4 = puVar5;
      } while (bVar2);
    }
    else {
      do {
        puVar5 = puVar1;
        puVar1 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  } while( true );
}


// ===== 008e20b8  FUN_008e20b8 =====

undefined8 FUN_008e20b8(long param_1)

{
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 008e20d0  FUN_008e20d0 =====

void FUN_008e20d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008e20d0(param_1,*param_2);
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


// ===== 008e2144  FUN_008e2144 =====

void FUN_008e2144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_00d3ce98;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[0xd] = 0x8000000000000000;
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return;
}


// ===== 008e2184  FUN_008e2184 =====

void FUN_008e2184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3ce98;
  FUN_008e21bc(param_1 + 7);
  FUN_008e0820(param_1);
  return;
}


// ===== 008e21bc  FUN_008e21bc =====

void FUN_008e21bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar1 = puVar7;
  if (puVar7 != puVar3) {
    uVar4 = param_1[4];
    plVar8 = puVar7 + uVar4 / 0x24;
    lVar6 = *plVar8 + (uVar4 % 0x24) * 0x70;
    lVar9 = puVar7[(param_1[5] + uVar4) / 0x24] + ((param_1[5] + uVar4) % 0x24) * 0x70;
    puVar1 = puVar3;
    if (lVar6 != lVar9) {
      do {
        if (lVar6 == 0) goto LAB_008e2378;
        FUN_0086dc48(lVar6);
        lVar6 = lVar6 + 0x70;
        if (lVar6 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          lVar6 = *plVar8;
        }
      } while (lVar6 != lVar9);
      puVar7 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar1 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar1 - (long)puVar7;
  while (uVar4 = lVar6 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar7);
    puVar3 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar7;
    lVar6 = (long)puVar3 - (long)puVar7;
  }
  if (uVar4 == 1) {
    uVar2 = 0x12;
  }
  else {
    if (uVar4 != 2) goto LAB_008e22f0;
    uVar2 = 0x24;
  }
  param_1[4] = uVar2;
LAB_008e22f0:
  puVar1 = puVar3;
  if (puVar7 != puVar3) {
    do {
      puVar1 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar1;
    } while (puVar1 != puVar3);
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  uVar5 = (ulong)((long)puVar1 + (-8 - ((long)puVar1 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)puVar3 - (long)puVar1 << 0x3d) - ((long)puVar3 - (long)puVar1)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)puVar3 - (int)puVar1 | -(int)puVar1) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar1 = puVar1 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar1 == puVar3) {
      param_1[2] = puVar1;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar1 = puVar1 + -1;
  } while (puVar1 != (undefined8 *)0x0);
LAB_008e2378:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008e23d8  FUN_008e23d8 =====

void FUN_008e23d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3ce98;
  FUN_008e21bc(param_1 + 7);
  FUN_008e0820(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008e241c  FUN_008e241c =====

void FUN_008e241c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_129;
  char *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  char *local_110;
  char **ppcStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined7 local_e8;
  char cStack_e1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  char **local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  plVar1 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  do {
    if (plVar1 == plVar2) {
      uVar4 = *(ulong *)(param_1 + 0x60);
      do {
        if (uVar4 == 0) {
          return;
        }
        if (uVar4 <= *(uint *)(param_1 + 0x10)) {
          uVar5 = *(ulong *)(param_1 + 0x58);
          uVar8 = (uVar4 + uVar5) - 1;
          lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar8 / 0x24) * 8) +
                            (uVar8 % 0x24) * 0x70 + 0x48);
          lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar5 / 0x24) * 8) +
                            (uVar5 % 0x24) * 0x70 + 0x48);
          lVar3 = 0x7fffffffffffffff;
          if (lVar7 != 0x7fffffffffffffff && lVar9 != -0x8000000000000000) {
            lVar3 = -0x8000000000000000;
            if (lVar9 != 0x7fffffffffffffff && lVar7 != -0x8000000000000000) {
              lVar3 = lVar7 - lVar9;
            }
          }
          if (lVar3 <= *(long *)(param_1 + 0x20)) {
            if (uVar4 <= *(uint *)(param_1 + 0xc)) {
              return;
            }
            if (lVar3 <= *(long *)(param_1 + 0x18)) {
              return;
            }
          }
        }
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                   (*(ulong *)(param_1 + 0x58) / 0x24) * 8) +
                         (*(ulong *)(param_1 + 0x58) % 0x24) * 0x70);
        lVar3 = *(long *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x68) <= lVar7) {
          lVar3 = lVar7;
        }
        *(long *)(param_1 + 0x68) = lVar3;
        FUN_008e29ec(param_1 + 0x38);
        uVar4 = *(ulong *)(param_1 + 0x60);
      } while( true );
    }
    if ((1 < plVar1[9] + 0x8000000000000001U) && (1 < *plVar1 + 0x8000000000000001U)) {
      lVar7 = *(long *)(param_1 + 0x40);
      lVar9 = *(long *)(param_1 + 0x48);
      lVar3 = 0;
      if (lVar9 - lVar7 != 0) {
        lVar3 = (lVar9 - lVar7 >> 3) * 0x24 + -1;
      }
      if (lVar3 == *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) {
        FUN_008e2f9c(param_1 + 0x38);
        lVar7 = *(long *)(param_1 + 0x40);
        lVar9 = *(long *)(param_1 + 0x48);
      }
      if ((lVar7 == lVar9) ||
         (uVar4 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58),
         lVar3 = *(long *)(lVar7 + (uVar4 / 0x24) * 8) + (uVar4 % 0x24) * 0x70, lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0086dc20(lVar3,plVar1);
      uVar4 = *(ulong *)(param_1 + 0x60);
      *(ulong *)(param_1 + 0x60) = uVar4 + 1;
      if (0xfffffffffffffffe < uVar4) {
LAB_008e29c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                  );
      }
      uVar4 = *(long *)(param_1 + 0x58) + uVar4;
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + (uVar4 / 0x24) * 8) + (uVar4 % 0x24) * 0x70;
      *(long *)(lVar3 + 0x10) =
           (long)(*(double *)(param_1 + 0x30) * (double)*(long *)(lVar3 + 0x10));
      uVar5 = *(ulong *)(param_1 + 0x60);
      uVar4 = uVar5 - 1;
      if (uVar4 != 0) {
        do {
          uVar5 = *(ulong *)(param_1 + 0x60);
          if ((uVar5 <= uVar4) || (uVar5 <= uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                      );
          }
          uVar8 = uVar4 + *(long *)(param_1 + 0x58);
          puVar10 = (undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x40) + (uVar8 / 0x24) * 8) +
                    (uVar8 % 0x24) * 0x70);
          puVar11 = (undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x40) + ((uVar8 - 1) / 0x24) * 8) +
                    ((uVar8 - 1) % 0x24) * 0x70);
          if ((long)puVar11[9] <= (long)puVar10[9]) goto LAB_008e2674;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          local_c8 = (char **)&DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0086dc20(&local_e0,puVar10);
          uVar14 = puVar11[4];
          uVar13 = puVar11[7];
          uVar6 = puVar11[6];
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          uVar18 = puVar11[3];
          uVar17 = puVar11[2];
          puVar10[5] = puVar11[5];
          puVar10[4] = uVar14;
          puVar10[7] = uVar13;
          puVar10[6] = uVar6;
          puVar10[1] = uVar16;
          *puVar10 = uVar15;
          puVar10[3] = uVar18;
          puVar10[2] = uVar17;
          uVar15 = puVar11[0xb];
          uVar14 = puVar11[10];
          uVar13 = puVar11[0xd];
          uVar6 = puVar11[0xc];
          uVar16 = puVar11[8];
          puVar10[9] = puVar11[9];
          puVar10[8] = uVar16;
          puVar10[0xb] = uVar15;
          puVar10[10] = uVar14;
          puVar10[0xd] = uVar13;
          puVar10[0xc] = uVar6;
          puVar11[0xd] = puStack_78;
          puVar11[0xc] = local_80;
          puVar11[9] = puStack_98;
          puVar11[8] = local_a0;
          puVar11[0xb] = puStack_88;
          puVar11[10] = local_90;
          puVar11[5] = puStack_b8;
          puVar11[4] = local_c0;
          puVar11[7] = puStack_a8;
          puVar11[6] = puStack_b0;
          puVar11[1] = puStack_d8;
          *puVar11 = local_e0;
          puVar11[3] = local_c8;
          puVar11[2] = local_d0;
          FUN_0086dc48(&local_e0);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        uVar5 = *(ulong *)(param_1 + 0x60);
        local_100 = &DAT_aaaaaaaaaaaaaaaa;
        if (uVar5 == 0) goto LAB_008e29c4;
      }
LAB_008e2674:
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      uVar4 = (uVar5 + *(long *)(param_1 + 0x58)) - 1;
      lVar7 = plVar1[9];
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar4 / 0x24) * 8) +
                        (uVar4 % 0x24) * 0x70 + 0x48);
      if (lVar3 == 0x7fffffffffffffff || lVar7 == -0x8000000000000000) {
        local_100 = (undefined1 *)0x7fffffffffffffff;
      }
      else if ((lVar3 == -0x8000000000000000 || lVar7 == 0x7fffffffffffffff) ||
              (local_100 = (undefined1 *)(lVar3 - lVar7), (long)local_100 < 0xf4241))
      goto LAB_008e2484;
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) == 0) {
        local_128 = "../../modules/congestion_controller/goog_cc/robust_throughput_estimator.cc";
        local_120 = 0x2ba;
        local_118 = &uStack_129;
        ppcStack_108 = &local_128;
        local_110 = "Severe packet re-ordering or timestamps offset changed: ";
        FUN_005f3380(&local_f8,&local_100);
        if (cStack_e1 < '\0') {
          FUN_005478d8(&local_e0,local_f8,puStack_f0);
          local_c8 = &local_110;
          if (cStack_e1 < '\0') {
            operator_delete(local_f8);
          }
        }
        else {
          local_d0 = (undefined1 *)CONCAT17(cStack_e1,local_e8);
          puStack_d8 = puStack_f0;
          local_e0 = local_f8;
          local_c8 = &local_110;
        }
        FUN_00623bb0(&DAT_001f6510,*(undefined8 *)local_c8[1],*(undefined4 *)(local_c8[1] + 8),
                     *local_c8,&local_e0);
        if ((long)local_d0 < 0) {
          operator_delete(local_e0);
        }
      }
      puVar10 = *(undefined8 **)(param_1 + 0x40);
      puVar11 = puVar10;
      if (puVar10 != *(undefined8 **)(param_1 + 0x48)) {
        uVar5 = *(ulong *)(param_1 + 0x58);
        uVar4 = *(long *)(param_1 + 0x60) + uVar5;
        plVar12 = puVar10 + uVar5 / 0x24;
        lVar3 = *plVar12 + (uVar5 % 0x24) * 0x70;
        lVar7 = puVar10[uVar4 / 0x24] + (uVar4 % 0x24) * 0x70;
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        if (lVar3 != lVar7) {
          do {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_0086dc48(lVar3);
            lVar3 = lVar3 + 0x70;
            if (lVar3 - *plVar12 == 0xfc0) {
              plVar12 = plVar12 + 1;
              lVar3 = *plVar12;
            }
          } while (lVar3 != lVar7);
          puVar10 = *(undefined8 **)(param_1 + 0x40);
          puVar11 = *(undefined8 **)(param_1 + 0x48);
        }
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      lVar3 = (long)puVar11 - (long)puVar10;
      while (uVar4 = lVar3 >> 3, 2 < uVar4) {
        operator_delete((void *)*puVar10);
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined8 **)(param_1 + 0x40) = puVar10;
        lVar3 = *(long *)(param_1 + 0x48) - (long)puVar10;
      }
      if (uVar4 == 1) {
        uVar6 = 0x12;
LAB_008e2478:
        *(undefined8 *)(param_1 + 0x58) = uVar6;
      }
      else if (uVar4 == 2) {
        uVar6 = 0x24;
        goto LAB_008e2478;
      }
      *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
    }
LAB_008e2484:
    plVar1 = plVar1 + 0xe;
  } while( true );
}


// ===== 008e29ec  FUN_008e29ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e29ec(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  if (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x24) * 8) +
      (*(ulong *)(param_1 + 0x20) % 0x24) * 0x70 != 0) {
    FUN_0086dc48();
    uVar1 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar1;
    if (0x47 < uVar1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x24;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008e2ac8  FUN_008e2ac8 =====

undefined1  [16] FUN_008e2ac8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  
  uVar14 = *(ulong *)(param_1 + 0x60);
  if ((uVar14 == 0) || (uVar14 < *(uint *)(param_1 + 0x28))) {
    uVar14 = 0;
    uVar4 = 0;
    uVar11 = 0;
    goto LAB_008e2f58;
  }
  lVar19 = uVar14 - 1;
  if (lVar19 == 0) {
    lVar15 = *(long *)(param_1 + 0x40);
    uVar17 = *(ulong *)(param_1 + 0x58);
    lVar12 = 0;
    lVar13 = 0;
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0x58);
    lVar15 = *(long *)(param_1 + 0x40);
    lVar12 = 0;
    uVar11 = uVar17;
    lVar22 = 0;
    do {
      uVar1 = uVar11 + 1;
      lVar6 = *(long *)(*(long *)(lVar15 + (uVar11 / 0x24) * 8) + (uVar11 % 0x24) * 0x70 + 0x48);
      lVar5 = *(long *)(*(long *)(lVar15 + (uVar1 / 0x24) * 8) + (uVar1 % 0x24) * 0x70 + 0x48);
      lVar13 = 0x7fffffffffffffff;
      if (lVar5 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
        lVar13 = -0x8000000000000000;
        if (lVar6 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000) {
          lVar13 = lVar5 - lVar6;
        }
      }
      lVar5 = lVar13;
      if (lVar13 <= lVar12) {
        lVar5 = lVar12;
      }
      lVar12 = lVar22;
      if (lVar13 <= lVar22) {
        lVar13 = lVar22;
        lVar12 = lVar5;
      }
      lVar19 = lVar19 + -1;
      uVar11 = uVar1;
      lVar22 = lVar13;
    } while (lVar19 != 0);
  }
  if (lVar15 == *(long *)(param_1 + 0x48)) {
LAB_008e2dfc:
    lVar20 = 0;
    lVar18 = 0;
    lVar16 = -0x8000000000000000;
    lVar22 = 0x7fffffffffffffff;
    uVar14 = 0;
    lVar6 = 0;
    lVar5 = 0;
    lVar15 = 0x7fffffffffffffff;
    lVar19 = -0x8000000000000000;
  }
  else {
    plVar9 = (long *)(*(long *)(lVar15 + (uVar17 / 0x24) * 8) + (uVar17 % 0x24) * 0x70);
    plVar7 = (long *)(*(long *)(lVar15 + ((uVar17 + uVar14) / 0x24) * 8) +
                     ((uVar17 + uVar14) % 0x24) * 0x70);
    if (plVar9 == plVar7) goto LAB_008e2dfc;
    plVar10 = (long *)(lVar15 + (uVar17 / 0x24) * 8);
    lVar6 = 0;
    lVar18 = 0;
    uVar14 = 0;
    lVar20 = 0;
    lVar5 = 0;
    lVar19 = -0x8000000000000000;
    lVar15 = 0x7fffffffffffffff;
    lVar16 = -0x8000000000000000;
    lVar8 = 0x7fffffffffffffff;
    do {
      lVar22 = plVar9[9];
      if (lVar22 < lVar15) {
        lVar21 = plVar9[1];
        lVar15 = lVar22;
        lVar6 = 0x7fffffffffffffff;
        if ((lVar21 != 0x7fffffffffffffff) && (lVar3 = plVar9[2], lVar3 != 0x7fffffffffffffff)) {
          lVar6 = -0x8000000000000000;
          if (lVar3 != -0x8000000000000000 && lVar21 != -0x8000000000000000) {
            lVar6 = lVar21 + lVar3;
          }
        }
      }
      else {
        lVar21 = plVar9[1];
      }
      if (lVar19 <= lVar22) {
        lVar19 = lVar22;
      }
      if ((lVar5 == 0x7fffffffffffffff) || (lVar21 == 0x7fffffffffffffff)) {
        lVar3 = plVar9[2];
        bVar2 = lVar3 == 0x7fffffffffffffff;
        lVar5 = 0x7fffffffffffffff;
      }
      else {
        lVar3 = plVar9[2];
        lVar22 = -0x8000000000000000;
        if (lVar21 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
          lVar22 = lVar21 + lVar5;
        }
        bVar2 = lVar3 == 0x7fffffffffffffff;
        lVar5 = 0x7fffffffffffffff;
        if ((lVar22 != 0x7fffffffffffffff) && (lVar3 != 0x7fffffffffffffff)) {
          bVar2 = false;
          lVar5 = -0x8000000000000000;
          if (lVar3 != -0x8000000000000000 && lVar22 != -0x8000000000000000) {
            lVar5 = lVar3 + lVar22;
          }
        }
      }
      lVar23 = *plVar9;
      lVar22 = lVar8;
      if (*(long *)(param_1 + 0x68) <= lVar23) {
        if ((lVar16 < lVar23) &&
           (lVar16 = lVar23, lVar18 = 0x7fffffffffffffff,
           !(bool)(lVar21 == 0x7fffffffffffffff | bVar2))) {
          lVar18 = -0x8000000000000000;
          if (lVar3 != -0x8000000000000000 && lVar21 != -0x8000000000000000) {
            lVar18 = lVar3 + lVar21;
          }
        }
        lVar24 = 0x7fffffffffffffff;
        lVar22 = lVar23;
        if (lVar8 <= lVar23) {
          lVar22 = lVar8;
        }
        if ((lVar20 != 0x7fffffffffffffff) && (lVar21 != 0x7fffffffffffffff)) {
          lVar8 = -0x8000000000000000;
          if (lVar21 != -0x8000000000000000 && lVar20 != -0x8000000000000000) {
            lVar8 = lVar21 + lVar20;
          }
          if (!(bool)(lVar8 == 0x7fffffffffffffff | bVar2)) {
            lVar24 = -0x8000000000000000;
            if (lVar3 != -0x8000000000000000 && lVar8 != -0x8000000000000000) {
              lVar24 = lVar3 + lVar8;
            }
          }
        }
        lVar20 = lVar24;
        uVar14 = uVar14 + 1;
      }
      plVar9 = plVar9 + 0xe;
      if ((long)plVar9 - *plVar10 == 0xfc0) {
        plVar10 = plVar10 + 1;
        plVar9 = (long *)*plVar10;
      }
      lVar8 = lVar22;
    } while (plVar9 != plVar7);
  }
  lVar8 = -8000000;
  if ((lVar5 != 0x7fffffffffffffff) && (lVar8 = -8000000, lVar6 != -0x8000000000000000)) {
    lVar8 = 0;
    if (lVar6 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000) {
      lVar8 = (lVar5 - lVar6) * 8000000;
    }
  }
  lVar5 = 0x7fffffffffffffff;
  lVar6 = -8000000;
  if ((lVar20 != 0x7fffffffffffffff) && (lVar18 != -0x8000000000000000)) {
    lVar6 = 0;
    if (lVar18 != 0x7fffffffffffffff && lVar20 != -0x8000000000000000) {
      lVar6 = (lVar20 - lVar18) * 8000000;
    }
  }
  if ((lVar19 != 0x7fffffffffffffff) && (lVar15 != -0x8000000000000000)) {
    lVar18 = -0x8000000000000000;
    if (lVar19 != -0x8000000000000000 && lVar15 != 0x7fffffffffffffff) {
      lVar18 = lVar19 - lVar15;
    }
    if (lVar18 != 0x7fffffffffffffff) {
      lVar19 = -0x8000000000000000;
      if (lVar18 != -0x8000000000000000 && lVar13 != 0x7fffffffffffffff) {
        lVar19 = lVar18 - lVar13;
      }
      if ((lVar19 != 0x7fffffffffffffff) && (lVar12 != 0x7fffffffffffffff)) {
        lVar12 = lVar19 + lVar12;
        if (lVar12 < 0x3e9) {
          lVar12 = 1000;
        }
        lVar5 = 1000;
        if (lVar19 != -0x8000000000000000) {
          lVar5 = lVar12;
        }
      }
    }
  }
  if (uVar14 < *(uint *)(param_1 + 0x28)) {
    uVar14 = 0;
    if (lVar5 != 0) {
      uVar14 = lVar8 / lVar5;
    }
  }
  else {
    lVar19 = 0x7fffffffffffffff;
    if ((lVar16 != 0x7fffffffffffffff) && (lVar22 != -0x8000000000000000)) {
      lVar12 = lVar16 - lVar22;
      if (lVar12 < 0x3e9) {
        lVar12 = 1000;
      }
      lVar19 = 1000;
      if (lVar22 != 0x7fffffffffffffff && lVar16 != -0x8000000000000000) {
        lVar19 = lVar12;
      }
    }
    uVar11 = 0;
    if (lVar19 != 0) {
      uVar11 = lVar6 / lVar19;
    }
    uVar14 = 0;
    if (lVar5 != 0) {
      uVar14 = lVar8 / lVar5;
    }
    if ((long)uVar11 <= (long)uVar14) {
      uVar14 = uVar11;
    }
  }
  uVar11 = uVar14 & 0xffffffffffffff00;
  uVar4 = 1;
LAB_008e2f58:
  auVar25._0_8_ = uVar11 | uVar14 & 0xff;
  auVar25._8_8_ = uVar4;
  return auVar25;
}


// ===== 008e2f64  FUN_008e2f64 =====

void FUN_008e2f64(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 008e2f8c  FUN_008e2f8c =====

void FUN_008e2f8c(void)

{
  return;
}


// ===== 008e2f94  FUN_008e2f94 =====

void FUN_008e2f94(void)

{
  return;
}


// ===== 008e2f9c  FUN_008e2f9c =====

void FUN_008e2f9c(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x24) {
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
      local_18 = operator_new(0xfc0);
      FUN_008e340c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008e3930(&local_50,lVar5);
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
      local_50 = (undefined1 *)operator_new(0xfc0);
      FUN_008e340c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xfc0);
    FUN_008e3694(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x24;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008e3184(param_1,&local_50);
  return;
}


// ===== 008e3184  FUN_008e3184 =====

void FUN_008e3184(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008e33f4;
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
LAB_008e33f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e340c  FUN_008e340c =====

void FUN_008e340c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008e367c;
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
LAB_008e367c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e3694  FUN_008e3694 =====

void FUN_008e3694(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008e3918;
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
LAB_008e3918:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e3930  FUN_008e3930 =====

void FUN_008e3930(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008e3bb4;
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
LAB_008e3bb4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e3bcc  FUN_008e3bcc =====

/* WARNING: Removing unreachable block (ram,0x008e3e58) */
/* WARNING: Removing unreachable block (ram,0x008e3d88) */
/* WARNING: Removing unreachable block (ram,0x008e4094) */
/* WARNING: Type propagation algorithm not settling */

void FUN_008e3bcc(undefined2 *param_1,long *param_2)

{
  int *******pppppppiVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  double *pdVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  double dVar17;
  int *******local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_48;
  
  puVar14 = (uint *)(param_1 + 0xe);
  *param_1 = 0;
  pdVar13 = (double *)(param_1 + 8);
  *pdVar13 = 0.0;
  puVar12 = (uint *)(param_1 + 2);
  puVar12[0] = 7;
  puVar12[1] = 7;
  puVar15 = (uint *)(param_1 + 0xc);
  puVar15[0] = 0x14;
  puVar15[1] = 0x14;
  *(undefined8 *)(param_1 + 0x10) = 0;
  (**(code **)(*param_2 + 0x10))(&local_80,param_2,"WebRTC-BweWindowSizeInPackets",0x1d);
  bVar2 = false;
  puVar16 = puStack_78;
  if (-1 < (long)local_70) {
    puVar16 = (undefined1 *)((ulong)local_70 >> 0x38);
  }
  if (puVar16 < (undefined1 *)0x7) {
    if (-1 < (long)local_70) goto LAB_008e3c70;
LAB_008e3cac:
    operator_delete(local_80);
    if (bVar2) goto LAB_008e3cc0;
  }
  else {
    pppppppiVar1 = local_80;
    if (-1 < (long)local_70) {
      pppppppiVar1 = (int *******)&local_80;
    }
    bVar2 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
    if ((long)local_70 < 0) goto LAB_008e3cac;
LAB_008e3c70:
    if (bVar2) {
LAB_008e3cc0:
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*param_2 + 0x10))(&local_80,param_2,"WebRTC-BweWindowSizeInPackets",0x1d);
      local_48 = &DAT_aaaaaaaaaaaaaaaa;
      iVar3 = sscanf((char *)&local_80,"Enabled-%zu",&local_48);
      if (iVar3 == 1) {
        puVar16 = local_48;
        if (local_48 < (undefined1 *)0x2) {
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,
                         "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x19a,
                         "Window size must be greater than 1.");
          }
          goto LAB_008e3d54;
        }
      }
      else {
LAB_008e3d54:
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x1aa,
                       "Failed to parse parameters for BweWindowSizeInPackets experiment from field trial string. Using default."
                      );
        }
        puVar16 = (undefined1 *)0x14;
      }
      *puVar15 = (uint)puVar16;
    }
  }
  puVar4 = (undefined8 *)
           FUN_008e4104(&DAT_001b7dbf,param_1,&DAT_001a4678,(long)param_1 + 1,"beginning_packets",
                        puVar12,"end_packets",param_1 + 4,"cap_uncertainty",pdVar13,"window_size",
                        puVar15,"min_window_size",puVar14,"max_window_duration_ms",param_1 + 0x10);
  (**(code **)(*param_2 + 0x10))(&local_80,param_2,"WebRTC-Bwe-TrendlineEstimatorSettings",0x25);
  puVar16 = puStack_78;
  pppppppiVar1 = local_80;
  if (-1 < (long)local_70) {
    puVar16 = (undefined1 *)((ulong)local_70 >> 0x38);
    pppppppiVar1 = (int *******)&local_80;
  }
  FUN_006659ac(puVar4,pppppppiVar1,puVar16);
  if (puVar4 != (undefined8 *)0x0) {
    pvVar5 = (void *)*puVar4;
    if (pvVar5 != (void *)0x0) {
      pvVar8 = (void *)puVar4[1];
      uVar11 = (ulong)((long)pvVar8 + (-0x20 - ((long)pvVar8 << 0x3b))) >> 5;
      uVar6 = (ulong)(((long)pvVar5 - (long)pvVar8 << 0x3b) - ((long)pvVar5 - (long)pvVar8)) >> 5;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      if ((1 < uVar6) && ((((int)pvVar5 - (int)pvVar8 | -(int)pvVar8) & 0x1fU) == 0)) {
        uVar6 = uVar6 & 0x7fffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar6 * -0x20);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (pvVar8 != pvVar5) {
        pvVar8 = (void *)((long)pvVar8 + -0x20);
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar4[1] = pvVar5;
      operator_delete(pvVar5);
    }
    operator_delete(puVar4);
  }
  uVar7 = *puVar15;
  if (uVar7 - 0x3e9 < 0xfffffc21) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x3f2,
                   "Window size must be between 10 and 1000 packets");
    }
    uVar7 = 0x14;
    *puVar15 = 0x14;
  }
  if ((*puVar14 < 10) || (uVar7 < *puVar14)) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x412,
                   "Minimum window size must be between 10 and window_size");
    }
    uVar7 = *puVar15;
    *puVar14 = uVar7;
  }
  if (*(char *)((long)param_1 + 1) != '\x01') {
    return;
  }
  uVar9 = *puVar12;
  if ((((uVar9 == 0) || (uVar10 = *(uint *)(param_1 + 4), uVar10 == 0)) || (uVar7 < uVar9)) ||
     (uVar7 < uVar10)) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,
                   "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x442,
                   "Size of beginning and end must be between 1 and ",*puVar15);
    }
    uVar7 = *puVar15;
    uVar10 = 0;
    uVar9 = 0;
    *(undefined1 *)((long)param_1 + 1) = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    *pdVar13 = 0.0;
  }
  if (uVar7 < uVar10 + uVar9) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x47a,
                   "Size of beginning plus end can\'t exceed the window size");
    }
    uVar10 = 0;
    uVar9 = 0;
    *(undefined1 *)((long)param_1 + 1) = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    *pdVar13 = 0.0;
  }
  if (*puVar14 < uVar10 + uVar9) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x4b2,
                   "Size of beginning plus end can\'t exceed the minimum window size");
    }
    dVar17 = 0.0;
    *(undefined1 *)((long)param_1 + 1) = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    *pdVar13 = 0.0;
  }
  else {
    dVar17 = *pdVar13;
    if (dVar17 < 0.0) goto LAB_008e40b4;
  }
  if (dVar17 == DAT_001f5bc8 || dVar17 < DAT_001f5bc8 != (NAN(dVar17) || NAN(DAT_001f5bc8))) {
    return;
  }
LAB_008e40b4:
  uVar6 = FUN_004022fc();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/congestion_controller/goog_cc/trendline_estimator.cc",
                 0x4ea,"Cap uncertainty must be between 0 and 0.025");
  }
  *pdVar13 = 0.0;
  return;
}


// ===== 008e4104  FUN_008e4104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_008e4104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  
  puVar5 = (undefined8 *)operator_new(0x100);
  puVar1 = PTR_FUN_00d51f60;
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
    if (((((uVar9 & 1) == 0) && (puVar5 != (undefined8 *)0xffffffffffffff60)) &&
        (puVar5 != (undefined8 *)0xffffffffffffff40)) &&
       (puVar5 != (undefined8 *)0xffffffffffffff20)) {
      *puVar5 = param_1;
      puVar5[1] = param_2;
      puVar2 = PTR_FUN_00d51f68;
      puVar5[4] = param_3;
      puVar5[5] = param_4;
      puVar5[2] = puVar1;
      puVar5[3] = puVar2;
      puVar5[6] = puVar1;
      puVar5[7] = puVar2;
      puVar3 = PTR_FUN_00d520c8;
      puVar5[8] = param_5;
      puVar5[9] = param_6;
      puVar4 = PTR_FUN_00d520d0;
      puVar5[0xc] = param_7;
      puVar5[0xd] = param_8;
      puVar5[0xe] = puVar3;
      puVar5[10] = puVar3;
      puVar5[0xb] = puVar4;
      puVar5[0xf] = puVar4;
      puVar1 = PTR_FUN_00d51f40;
      puVar5[0x10] = param_9;
      puVar5[0x11] = param_10;
      puVar2 = PTR_FUN_00d51f48;
      puVar5[0x12] = puVar1;
      puVar5[0x1f] = puVar2;
      puVar5[0x13] = puVar2;
      puVar5[0x14] = param_11;
      puVar5[0x15] = param_12;
      puVar5[0x16] = puVar3;
      puVar5[0x17] = puVar4;
      puVar5[0x18] = param_13;
      puVar5[0x19] = param_14;
      puVar5[0x1a] = puVar3;
      puVar5[0x1b] = puVar4;
      puVar5[0x1c] = param_15;
      puVar5[0x1d] = param_16;
      puVar5[0x1e] = puVar1;
      pvVar6 = operator_new(0x18);
      local_78 = puVar5;
      local_70 = puVar5 + 0x20;
      local_68 = puVar5 + 0x20;
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


// ===== 008e4318  FUN_008e4318 =====

/* WARNING: Removing unreachable block (ram,0x008e4498) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4318(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  undefined1 local_58 [31];
  undefined1 uStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  
  *param_1 = &PTR_FUN_00d3cee0;
  FUN_008e3bcc(param_1 + 1);
  uVar3 = _UNK_001f28f8;
  uVar2 = _DAT_001f28f0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar3 = _UNK_001f22b8;
  uVar2 = DAT_001f22b0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  uVar5 = _UNK_001f2fb8;
  uVar4 = _DAT_001f2fb0;
  param_1[9] = 0xffffffffffffffff;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar4;
  uVar3 = _UNK_001f3678;
  uVar2 = _DAT_001f3670;
  param_1[0x16] = 0x7ff8000000000000;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x19] = uVar3;
  param_1[0x18] = uVar2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = param_3;
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    local_38 = "../../modules/congestion_controller/goog_cc/trendline_estimator.cc";
    local_30 = 0x631;
    local_28 = &uStack_39;
    puVar7 = (undefined8 *)
             FUN_008e4104(&DAT_001b7dbf,param_1 + 1,&DAT_001a4678,(long)param_1 + 9,
                          "beginning_packets",(long)param_1 + 0xc,"end_packets",param_1 + 2,
                          "cap_uncertainty",param_1 + 3,"window_size",param_1 + 4,"min_window_size",
                          (long)param_1 + 0x24,"max_window_duration_ms",param_1 + 5);
    FUN_00665bb4(local_58);
    pcVar1 = "no";
    if (param_1[0x1c] != 0) {
      pcVar1 = "injected";
    }
    FUN_00623bb0("\r\t\n\t\t\t",local_38,local_30 & 0xffffffff,
                 "Using Trendline filter for delay change estimation with settings ",local_58,
                 " and ",pcVar1," network state predictor");
    if (puVar7 != (undefined8 *)0x0) {
      pvVar8 = (void *)*puVar7;
      if (pvVar8 != (void *)0x0) {
        pvVar9 = (void *)puVar7[1];
        uVar10 = (ulong)((long)pvVar9 + (-0x20 - ((long)pvVar9 << 0x3b))) >> 5;
        uVar6 = (ulong)(((long)pvVar8 - (long)pvVar9 << 0x3b) - ((long)pvVar8 - (long)pvVar9)) >> 5;
        if (uVar10 <= uVar6) {
          uVar6 = uVar10;
        }
        if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar9 | -(int)pvVar9) & 0x1fU) == 0)) {
          uVar6 = uVar6 & 0x7fffffffffffffe;
          pvVar9 = (void *)((long)pvVar9 + uVar6 * -0x20);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (pvVar9 != pvVar8) {
          pvVar9 = (void *)((long)pvVar9 + -0x20);
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puVar7[1] = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(puVar7);
    }
  }
  return;
}


// ===== 008e455c  FUN_008e455c =====

void FUN_008e455c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cee0;
  FUN_008e4570(param_1 + 0xc);
  return;
}


// ===== 008e4570  FUN_008e4570 =====

void FUN_008e4570(undefined8 *param_1)

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
      if (lVar4 == 0) goto LAB_008e46f4;
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
    if (uVar5 != 2) goto LAB_008e466c;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_008e466c:
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
LAB_008e46f4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008e4744  FUN_008e4744 =====

void FUN_008e4744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cee0;
  FUN_008e4570(param_1 + 0xc);
  operator_delete(param_1);
  return;
}


// ===== 008e4780  FUN_008e4780 =====

void FUN_008e4780(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double *pdVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  ulong uVar15;
  double *pdVar16;
  long *plVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_28;
  
  iVar8 = 1000;
  if (*(int *)(param_3 + 0x40) + 1 < 1000) {
    iVar8 = *(int *)(param_3 + 0x40) + 1;
  }
  *(int *)(param_3 + 0x40) = iVar8;
  lVar10 = *(long *)(param_3 + 0x48);
  if (*(long *)(param_3 + 0x48) == -1) {
    *(long *)(param_3 + 0x48) = param_5;
    lVar10 = param_5;
  }
  pdVar20 = (double *)(param_3 + 0x50);
  dVar21 = (param_1 - param_2) + *pdVar20;
  pdVar6 = (double *)(param_3 + 0x58);
  *pdVar20 = dVar21;
  local_28 = (double)(param_5 - lVar10);
  *pdVar6 = *(double *)(param_3 + 0x30) * *pdVar6 + dVar21 * (1.0 - *(double *)(param_3 + 0x30));
  FUN_008e4d00(param_3 + 0x60,&local_28,pdVar6,pdVar20);
  if (*(char *)(param_3 + 8) == '\x01') {
    uVar7 = *(ulong *)(param_3 + 0x88);
    while (uVar9 = uVar7 - 1, uVar9 != 0) {
      if ((*(ulong *)(param_3 + 0x88) <= uVar9) || (*(ulong *)(param_3 + 0x88) <= uVar7 - 2)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                  );
      }
      uVar7 = uVar9 + *(long *)(param_3 + 0x80);
      pdVar20 = (double *)
                (*(long *)(*(long *)(param_3 + 0x68) + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
      pdVar6 = (double *)
               (*(long *)(*(long *)(param_3 + 0x68) + ((uVar7 - 1) / 0xaa) * 8) +
               ((uVar7 - 1) % 0xaa) * 0x18);
      dVar21 = *pdVar20;
      if (*pdVar6 <= dVar21) break;
      dVar23 = pdVar6[1];
      dVar22 = *pdVar6;
      dVar25 = pdVar20[2];
      dVar24 = pdVar20[1];
      pdVar20[2] = pdVar6[2];
      pdVar20[1] = dVar23;
      *pdVar20 = dVar22;
      *pdVar6 = dVar21;
      pdVar6[2] = dVar25;
      pdVar6[1] = dVar24;
      uVar7 = uVar9;
    }
  }
  uVar7 = *(ulong *)(param_3 + 0x88);
  if (*(uint *)(param_3 + 0x20) < uVar7) {
    uVar9 = *(ulong *)(param_3 + 0x80);
    if ((*(undefined8 **)(param_3 + 0x68))[uVar9 / 0xaa] + (uVar9 % 0xaa) * 0x18 == 0) {
LAB_008e4cd8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar7 = uVar7 - 1;
    *(ulong *)(param_3 + 0x80) = uVar9 + 1;
    *(ulong *)(param_3 + 0x88) = uVar7;
    if (0x153 < uVar9 + 1) {
      operator_delete((void *)**(undefined8 **)(param_3 + 0x68));
      uVar7 = *(ulong *)(param_3 + 0x88);
      *(long *)(param_3 + 0x68) = *(long *)(param_3 + 0x68) + 8;
      *(long *)(param_3 + 0x80) = *(long *)(param_3 + 0x80) + -0xaa;
    }
  }
  dVar21 = *(double *)(param_3 + 0x28);
  if (dVar21 == 0.0 || dVar21 < 0.0 != NAN(dVar21)) {
    uVar9 = (ulong)*(uint *)(param_3 + 0x24);
  }
  else {
    uVar9 = (ulong)*(uint *)(param_3 + 0x24);
    if (uVar9 < uVar7) {
      lVar10 = *(long *)(param_3 + 0x48);
      uVar12 = *(ulong *)(param_3 + 0x80);
      puVar11 = *(undefined8 **)(param_3 + 0x68);
      do {
        dVar22 = *(double *)(param_3 + 0x28);
        pdVar6 = (double *)(puVar11[uVar12 / 0xaa] + (uVar12 % 0xaa) * 0x18);
        dVar21 = (double)(param_5 - lVar10) - *pdVar6;
        if (dVar21 == dVar22 || dVar21 < dVar22 != (NAN(dVar21) || NAN(dVar22))) break;
        if (pdVar6 == (double *)0x0) goto LAB_008e4cd8;
        uVar12 = uVar12 + 1;
        uVar7 = uVar7 - 1;
        *(ulong *)(param_3 + 0x80) = uVar12;
        *(ulong *)(param_3 + 0x88) = uVar7;
        if (0x153 < uVar12) {
          operator_delete((void *)*puVar11);
          uVar7 = *(ulong *)(param_3 + 0x88);
          puVar11 = (undefined8 *)(*(long *)(param_3 + 0x68) + 8);
          uVar9 = (ulong)*(uint *)(param_3 + 0x24);
          uVar12 = *(long *)(param_3 + 0x80) - 0xaa;
          *(undefined8 **)(param_3 + 0x68) = puVar11;
          *(ulong *)(param_3 + 0x80) = uVar12;
        }
      } while (uVar9 < uVar7);
    }
  }
  dVar21 = *(double *)(param_3 + 0xc0);
  if (uVar9 <= uVar7) {
    uVar9 = *(ulong *)(param_3 + 0x80);
    dVar21 = 0.0;
    dVar22 = 0.0;
    lVar10 = *(long *)(param_3 + 0x68);
    plVar1 = (long *)(lVar10 + (uVar9 / 0xaa) * 8);
    if (lVar10 != *(long *)(param_3 + 0x70)) {
      pdVar14 = (double *)*plVar1;
      pdVar20 = pdVar14 + (uVar9 % 0xaa) * 3;
      pdVar16 = (double *)
                (*(long *)(lVar10 + ((uVar9 + uVar7) / 0xaa) * 8) + ((uVar9 + uVar7) % 0xaa) * 0x18)
      ;
      pdVar6 = pdVar20;
      plVar17 = plVar1;
      pdVar18 = pdVar14;
      if (pdVar20 != pdVar16) {
        do {
          pdVar19 = pdVar6 + 3;
          if ((long)pdVar19 - (long)pdVar18 == 0xff0) {
            plVar17 = plVar17 + 1;
            pdVar19 = (double *)*plVar17;
            pdVar18 = pdVar19;
          }
          dVar21 = dVar21 + *pdVar6;
          dVar22 = dVar22 + pdVar6[1];
          pdVar6 = pdVar19;
        } while (pdVar19 != pdVar16);
        dVar23 = dVar21 / (double)uVar7;
        dVar24 = dVar22 / (double)uVar7;
        dVar21 = 0.0;
        dVar22 = 0.0;
        plVar17 = plVar1;
        do {
          pdVar18 = pdVar20 + 3;
          pdVar6 = pdVar20 + 1;
          dVar25 = *pdVar20;
          pdVar20 = pdVar18;
          if ((long)pdVar18 - (long)pdVar14 == 0xff0) {
            plVar17 = plVar17 + 1;
            pdVar14 = (double *)*plVar17;
            pdVar20 = pdVar14;
          }
          dVar25 = dVar25 - dVar23;
          dVar21 = dVar21 + dVar25 * dVar25;
          dVar22 = dVar22 + (*pdVar6 - dVar24) * dVar25;
        } while (pdVar20 != pdVar16);
      }
    }
    dVar22 = dVar22 / dVar21;
    if (dVar21 == 0.0) {
      dVar22 = *(double *)(param_3 + 0xc0);
    }
    dVar21 = dVar22;
    if (*(char *)(param_3 + 9) == '\x01') {
      if (uVar7 != 0) {
        pdVar6 = (double *)(*plVar1 + (uVar9 % 0xaa) * 0x18);
        uVar2 = *(uint *)(param_3 + 0xc);
        dVar21 = *pdVar6;
        dVar23 = pdVar6[2];
        if (1 < uVar2) {
          if (uVar7 - 1 <= (ulong)uVar2 - 2) goto LAB_008e4cec;
          lVar13 = (ulong)uVar2 - 1;
          uVar12 = uVar9;
          do {
            uVar12 = uVar12 + 1;
            pdVar6 = (double *)(*(long *)(lVar10 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
            dVar24 = pdVar6[2];
            if (dVar24 < dVar23) {
              dVar21 = *pdVar6;
              dVar23 = dVar24;
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        uVar12 = (ulong)*(uint *)(param_3 + 0x10);
        uVar15 = uVar7 - uVar12;
        if (uVar15 < uVar7) {
          pdVar6 = (double *)
                   (*(long *)(lVar10 + ((uVar15 + uVar9) / 0xaa) * 8) +
                   ((uVar15 + uVar9) % 0xaa) * 0x18);
          dVar25 = *pdVar6;
          dVar24 = pdVar6[2];
          if (uVar15 + 1 < uVar7) {
            lVar13 = uVar12 - 1;
            uVar12 = (uVar7 + uVar9) - uVar12;
            do {
              uVar12 = uVar12 + 1;
              pdVar6 = (double *)(*(long *)(lVar10 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
              dVar26 = pdVar6[2];
              if (dVar26 < dVar24) {
                dVar25 = *pdVar6;
                dVar24 = dVar26;
              }
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          dVar25 = dVar25 - dVar21;
          dVar21 = 0.0;
          if (1.0 <= dVar25) {
            dVar21 = (dVar24 - dVar23) / dVar25 + *(double *)(param_3 + 0x18);
          }
          bVar3 = true;
          if ((dVar22 != dVar21 && dVar22 < dVar21 == (NAN(dVar22) || NAN(dVar21))) &&
             (bVar3 = false, !NAN(dVar25))) {
            bVar3 = dVar25 < 1.0;
          }
          bVar4 = true;
          bVar5 = false;
          if (!bVar3) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(dVar22)) {
              bVar4 = dVar22 < 0.0;
              bVar5 = false;
            }
          }
          if (bVar4 != bVar5) {
            dVar21 = dVar22;
          }
          goto LAB_008e4c98;
        }
      }
LAB_008e4cec:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1540: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                );
    }
  }
LAB_008e4c98:
  FUN_008e4e2c(dVar21,param_2,param_3,param_5);
  return;
}


// ===== 008e4d00  FUN_008e4d00 =====

long FUN_008e4d00(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar6) {
    lVar5 = (lVar4 - lVar6 >> 3) * 0xaa + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_008e513c(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar6 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined8 *)(*(long *)(lVar6 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18),
     puVar3 != (undefined8 *)0x0)) {
    uVar7 = *param_3;
    uVar8 = *param_4;
    *puVar3 = *param_2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8);
    lVar6 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar6 + (uVar1 % 0xaa) * 0x18;
    }
    if (lVar5 == lVar6) {
      lVar5 = plVar2[-1] + 0xff0;
    }
    return lVar5 + -0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e4e2c  FUN_008e4e2c =====

void FUN_008e4e2c(double param_1,double param_2,long param_3,long param_4)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  char **local_98;
  char *local_90;
  char **ppcStack_88;
  undefined8 local_80;
  char **ppcStack_78;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  char **ppcStack_58;
  char *local_50;
  undefined8 *puStack_48;
  undefined1 uStack_31;
  
  uVar6 = *(uint *)(param_3 + 0x40);
  if ((int)uVar6 < 2) {
    *(undefined4 *)(param_3 + 0xd4) = 0;
  }
  else {
    puVar2 = (uint *)&UNK_001fdc68;
    if (uVar6 < 0x3d) {
      puVar2 = (uint *)(param_3 + 0x40);
    }
    dVar11 = *(double *)(param_3 + 0x38) * param_1 * (double)(int)*puVar2;
    dVar9 = *(double *)(param_3 + 0xa8);
    *(double *)(param_3 + 0xb0) = dVar11;
    if (dVar11 == dVar9 || dVar11 < dVar9 != (NAN(dVar11) || NAN(dVar9))) {
      *(undefined4 *)(param_3 + 0xd0) = 0;
      *(undefined8 *)(param_3 + 200) = 0xbff0000000000000;
      if (-dVar9 <= dVar11) {
        *(undefined4 *)(param_3 + 0xd4) = 0;
      }
      else {
        *(undefined4 *)(param_3 + 0xd4) = 1;
      }
    }
    else {
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(param_1,dVar11,&DAT_002256b7,
                     "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x959,
                     "Overuse danger, trend: ",", modified trend: ");
      }
      iVar5 = *(int *)(param_3 + 0xd0);
      dVar10 = *(double *)(param_3 + 0xa0);
      iVar1 = iVar5 + 1;
      *(int *)(param_3 + 0xd0) = iVar1;
      dVar9 = param_2 * 0.5;
      if (*(double *)(param_3 + 200) != -1.0) {
        dVar9 = param_2 + *(double *)(param_3 + 200);
      }
      *(double *)(param_3 + 200) = dVar9;
      if (((dVar9 != dVar10 && dVar9 < dVar10 == (NAN(dVar9) || NAN(dVar10))) &&
           iVar5 + -1 < 0 == SBORROW4(iVar1,2)) &&
         (param_1 < *(double *)(param_3 + 0xc0) ==
          (NAN(param_1) || NAN(*(double *)(param_3 + 0xc0))))) {
        uVar7 = FUN_00417e08();
        if ((uVar7 & 1) == 0) {
          local_b8 = "../../modules/congestion_controller/goog_cc/trendline_estimator.cc";
          uStack_b0 = 0x9c1;
          local_a8 = &uStack_31;
          local_98 = &local_b8;
          pcStack_a0 = "Setting TrendlineEstimator state to overusing";
          local_80 = *(undefined8 *)(param_3 + 200);
          ppcStack_88 = &pcStack_a0;
          local_90 = ", time_over_using_: ";
          ppcStack_78 = &local_90;
          puStack_68 = &local_80;
          local_60 = *(undefined8 *)(param_3 + 0xa0);
          local_70 = ", overusing_time_threshold_: ";
          ppcStack_58 = &local_70;
          puStack_48 = &local_60;
          local_50 = ", overuse_counter_: ";
          FUN_00623bb0(local_80,local_60,param_1,*(undefined8 *)(param_3 + 0xc0),&DAT_002256bd,
                       "../../modules/congestion_controller/goog_cc/trendline_estimator.cc",0x9c1);
        }
        *(undefined8 *)(param_3 + 200) = 0;
        *(undefined8 *)(param_3 + 0xd0) = DAT_001f5200;
      }
    }
    dVar9 = *(double *)(param_3 + 0xa8);
    dVar11 = ABS(dVar11);
    *(double *)(param_3 + 0xc0) = param_1;
    dVar10 = dVar9 + 15.0;
    if (dVar11 == dVar10 || dVar11 < dVar10 != (NAN(dVar11) || NAN(dVar10))) {
      lVar8 = param_4 - *(long *)(param_3 + 0xb8);
      lVar3 = 0x98;
      if (dVar9 <= dVar11) {
        lVar3 = 0x90;
      }
      if (99 < lVar8) {
        lVar8 = 100;
      }
      lVar4 = 0;
      if (*(long *)(param_3 + 0xb8) != -1) {
        lVar4 = lVar8;
      }
      dVar9 = dVar9 + (dVar11 - dVar9) * *(double *)(param_3 + lVar3) * (double)lVar4;
      dVar11 = 600.0;
      if (dVar9 < 600.0 != NAN(dVar9)) {
        dVar11 = dVar9;
      }
      dVar10 = 6.0;
      if (6.0 < dVar9) {
        dVar10 = dVar11;
      }
      *(double *)(param_3 + 0xa8) = dVar10;
    }
    *(long *)(param_3 + 0xb8) = param_4;
  }
  return;
}


// ===== 008e50b4  FUN_008e50b4 =====

void FUN_008e50b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  undefined4 uVar1;
  long *plVar2;
  
  if ((param_5 & 1) != 0) {
    FUN_008e4780(param_1,param_2,param_3);
  }
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,*(undefined4 *)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0xd8) = uVar1;
  }
  return;
}


// ===== 008e511c  FUN_008e511c =====

undefined4 FUN_008e511c(long param_1)

{
  long lVar1;
  
  lVar1 = 0xd4;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = 0xd8;
  }
  return *(undefined4 *)(param_1 + lVar1);
}


// ===== 008e513c  FUN_008e513c =====

void FUN_008e513c(long *param_1)

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
      FUN_008e55ac(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008e5ad0(&local_50,lVar5);
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
      FUN_008e55ac(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_008e5834(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008e5324(param_1,&local_50);
  return;
}


// ===== 008e5324  FUN_008e5324 =====

void FUN_008e5324(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008e5594;
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
LAB_008e5594:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e55ac  FUN_008e55ac =====

void FUN_008e55ac(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008e581c;
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
LAB_008e581c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e5834  FUN_008e5834 =====

void FUN_008e5834(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008e5ab8;
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
LAB_008e5ab8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e5ad0  FUN_008e5ad0 =====

void FUN_008e5ad0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008e5d54;
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
LAB_008e5d54:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008e5d6c  FUN_008e5d6c =====

void FUN_008e5d6c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d3cf10;
  param_1[1] = 0;
  return;
}


// ===== 008e5d84  FUN_008e5d84 =====

void FUN_008e5d84(void)

{
  return;
}


// ===== 008e5d8c  FUN_008e5d8c =====

void FUN_008e5d8c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008e5d98  FUN_008e5d98 =====

undefined8 FUN_008e5d98(void)

{
  return 7;
}


// ===== 008e5da4  FUN_008e5da4 =====

undefined8 FUN_008e5da4(void)

{
  return 0;
}


// ===== 008e5db0  FUN_008e5db0 =====

void FUN_008e5db0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d3cf48;
  param_1[1] = 0;
  return;
}


// ===== 008e5dc8  FUN_008e5dc8 =====

void FUN_008e5dc8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008e5dd4  FUN_008e5dd4 =====

undefined8 FUN_008e5dd4(void)

{
  return 0xf;
}


// ===== 008e5de0  FUN_008e5de0 =====

undefined8 FUN_008e5de0(void)

{
  return 0;
}


// ===== 008e5dec  FUN_008e5dec =====

void FUN_008e5dec(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *param_1 = &PTR_FUN_00d3cf80;
  param_1[1] = 0;
  return;
}


// ===== 008e5e04  FUN_008e5e04 =====

void FUN_008e5e04(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008e5e10  FUN_008e5e10 =====

undefined8 FUN_008e5e10(void)

{
  return 0x10;
}


// ===== 008e5e1c  FUN_008e5e1c =====

undefined8 FUN_008e5e1c(void)

{
  return 0;
}


// ===== 008e5e28  FUN_008e5e28 =====

void FUN_008e5e28(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_00d3cfb8;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  return;
}


// ===== 008e5e44  FUN_008e5e44 =====

void FUN_008e5e44(void)

{
  return;
}


// ===== 008e5e4c  FUN_008e5e4c =====

void FUN_008e5e4c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008e5e58  FUN_008e5e58 =====

undefined8 FUN_008e5e58(void)

{
  return 1;
}


// ===== 008e5e64  FUN_008e5e64 =====

undefined8 FUN_008e5e64(void)

{
  return 0;
}


// ===== 008e5e70  FUN_008e5e70 =====

void FUN_008e5e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3cff0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[0x15] = 1;
  param_1[0x1a] = FUN_00433984;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
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
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = param_1 + 0x20;
  return;
}


// ===== 008e5ee0  FUN_008e5ee0 =====

void FUN_008e5ee0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *local_38;
  
  *param_1 = &PTR_FUN_00d3cff0;
  local_38 = param_1 + 0x1f;
  FUN_008e7ed8(&local_38,param_1[0x20]);
  puVar9 = (undefined8 *)param_1[0x1c];
  if (puVar9 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x1d];
    puVar2 = puVar9;
    if (puVar9 != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_008e6104;
        pvVar8 = (void *)*puVar3;
        *puVar3 = 0;
        if (pvVar8 != (void *)0x0) {
          FUN_007dc854(pvVar8);
          operator_delete(pvVar8);
        }
      } while (puVar3 != puVar9);
      puVar2 = (undefined8 *)param_1[0x1c];
    }
    param_1[0x1d] = puVar9;
    operator_delete(puVar2);
  }
  (*(code *)param_1[0x1a])(0,param_1 + 0x18,param_1 + 0x18);
  pvVar8 = (void *)param_1[0x11];
  if (pvVar8 == (void *)0x0) {
LAB_008e6018:
    pvVar8 = (void *)param_1[0xe];
    if (pvVar8 == (void *)0x0) {
LAB_008e6098:
      pvVar8 = (void *)param_1[0xb];
      if (pvVar8 == (void *)0x0) {
LAB_008e6128:
        if (param_1[9] != 0) {
          plVar1 = (long *)param_1[8];
          plVar5 = *(long **)(param_1[7] + 8);
          *(long **)(*plVar1 + 8) = plVar5;
          *plVar5 = *plVar1;
          param_1[9] = 0;
          while (plVar1 != param_1 + 7) {
            if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0))
            goto LAB_008e6104;
            plVar5 = (long *)plVar1[1];
            operator_delete(plVar1);
            plVar1 = plVar5;
          }
        }
        puVar9 = (undefined8 *)param_1[4];
        while( true ) {
          if (puVar9 == (undefined8 *)0x0) {
            pvVar8 = (void *)param_1[2];
            param_1[2] = 0;
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8);
            }
            return;
          }
          if (puVar9 == (undefined8 *)0xfffffffffffffff0) break;
          pvVar8 = (void *)*puVar9;
          operator_delete(puVar9);
          puVar9 = (undefined8 *)pvVar8;
        }
      }
      else {
        pvVar4 = (void *)param_1[0xc];
        uVar7 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
        uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3d) - ((long)pvVar8 - (long)pvVar4)) >> 3;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
          uVar6 = uVar6 & 0x1ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar6 * -8);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        do {
          if (pvVar4 == pvVar8) {
            param_1[0xc] = pvVar8;
            operator_delete(pvVar8);
            goto LAB_008e6128;
          }
          pvVar4 = (void *)((long)pvVar4 + -8);
        } while (pvVar4 != (void *)0x0);
      }
    }
    else {
      pvVar4 = (void *)param_1[0xf];
      uVar7 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
      uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3d) - ((long)pvVar8 - (long)pvVar4)) >> 3;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar6 * -8);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (pvVar4 == pvVar8) {
          param_1[0xf] = pvVar8;
          operator_delete(pvVar8);
          goto LAB_008e6098;
        }
        pvVar4 = (void *)((long)pvVar4 + -8);
      } while (pvVar4 != (void *)0x0);
    }
  }
  else {
    pvVar4 = (void *)param_1[0x12];
    uVar7 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
    uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3d) - ((long)pvVar8 - (long)pvVar4)) >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar6 * -8);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (pvVar4 == pvVar8) {
        param_1[0x12] = pvVar8;
        operator_delete(pvVar8);
        goto LAB_008e6018;
      }
      pvVar4 = (void *)((long)pvVar4 + -8);
    } while (pvVar4 != (void *)0x0);
  }
LAB_008e6104:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008e61d0  FUN_008e61d0 =====

void FUN_008e61d0(void *param_1)

{
  FUN_008e5ee0();
  operator_delete(param_1);
  return;
}


// ===== 008e6200  FUN_008e6200 =====

void FUN_008e6200(long param_1,long *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *local_18;
  
  uVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
  FUN_008e633c(param_1,param_2,uVar1);
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  if ((uVar2 >> 0x20 & 1) != 0) {
    FUN_008e633c(param_1,param_2,uVar2);
  }
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  if ((uVar2 >> 0x20 & 1) != 0) {
    FUN_008e633c(param_1,param_2,uVar2);
  }
  uVar2 = (**(code **)(*param_2 + 0x80))(param_2);
  if ((uVar2 & 1) != 0) {
    *(long **)(param_1 + 0x50) = param_2;
  }
  if ((param_3 & 1) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x78);
    local_18 = param_2;
    if (puVar5 < *(undefined8 **)(param_1 + 0x80)) {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar5 + 1;
      *puVar5 = param_2;
    }
    else {
      puVar4 = (undefined8 *)FUN_008e7cf0(param_1 + 0x70,&local_18);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x78) = puVar4;
    if ((puVar5 == puVar4) &&
       (puVar5 = *(undefined8 **)(param_1 + 0x88), puVar5 == *(undefined8 **)(param_1 + 0x90))) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)*puVar5;
    }
    plVar3 = *(long **)(param_1 + 0xa0);
    if ((plVar6 != plVar3) && (plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *(long **)(param_1 + 0xa0) = plVar6;
  }
  return;
}


// ===== 008e633c  FUN_008e633c =====

void FUN_008e633c(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint local_50;
  undefined1 uStack_49;
  undefined1 *local_48;
  long *local_28;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  local_50 = param_3;
  if ((uVar5 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar8 = uVar5 - 1;
    uVar9 = (ulong)param_3;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar8) == 0) {
      uVar10 = (ulong)(uVar4 - 1 & param_3);
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_3 / uVar4;
        }
        uVar10 = (ulong)(param_3 - uVar1 * uVar4);
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x10) + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_008e63b4;
            uVar12 = plVar11[1];
            if (uVar12 != uVar9) break;
            if (*(uint *)(plVar11 + 2) == param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_0061fd88("../../modules/pacing/packet_router.cc",100,
                           "send_modules_map_.find(ssrc) == send_modules_map_.end()",&DAT_001f5fa0);
            }
          }
          if ((uVar5 & uVar8) == 0) break;
          if (uVar5 <= uVar12) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar2 * uVar5;
          }
          if (uVar12 != uVar10) goto LAB_008e63b4;
        }
      } while ((uVar12 & uVar8) == uVar10);
    }
  }
LAB_008e63b4:
  (**(code **)(*param_2 + 0x1b8))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x128))(param_2);
  plVar11 = (long *)(param_1 + 0x38);
  plVar3 = (long *)operator_new(0x18);
  if ((uVar5 & 1) == 0) {
    if ((plVar3 == (long *)0x0) || (plVar3 == (long *)0xfffffffffffffff0)) goto LAB_008e64d8;
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    *plVar3 = (long)plVar11;
    plVar3[1] = (long)puVar7;
    plVar3[2] = (long)param_2;
    *puVar7 = plVar3;
    *(long **)(param_1 + 0x40) = plVar3;
  }
  else {
    if ((plVar3 == (long *)0x0) || (plVar3 == (long *)0xfffffffffffffff0)) {
LAB_008e64d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar6 = *plVar11;
    plVar3[1] = (long)plVar11;
    plVar3[2] = (long)param_2;
    *plVar3 = lVar6;
    *(long **)(lVar6 + 8) = plVar3;
    *plVar11 = (long)plVar3;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  local_48 = (undefined1 *)&local_50;
  local_28 = (long *)(param_1 + 0x10);
  lVar6 = FUN_008e7fd0(&local_28,&local_50,&DAT_001f94c3,&local_48,&uStack_49);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
              );
  }
  *(long **)(lVar6 + 0x18) = param_2;
  return;
}


// ===== 008e6520  FUN_008e6520 =====

uint FUN_008e6520(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == param_1 + 0x38) {
    uVar1 = 0;
  }
  else {
    do {
      uVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x80))();
      if ((uVar1 & 1) != 0) break;
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_1 + 0x38);
  }
  return uVar1 & 1;
}


// ===== 008e657c  FUN_008e657c =====

void FUN_008e657c(long param_1,long param_2)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  pcVar2 = FUN_00433984;
  if (*(long *)(param_2 + 0x18) == 0) {
    pcStack_38 = (code *)0x0;
  }
  else {
    pvVar1 = operator_new(0x20);
    (**(code **)(param_2 + 0x10))(1,param_2,pvVar1);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    pcStack_38 = FUN_008e7f4c;
    pcVar2 = FUN_008e7f5c;
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar4;
    *(undefined8 *)((long)pvVar1 + 0x10) = uVar3;
    local_50[0] = pvVar1;
  }
  local_40 = pcVar2;
  (**(code **)(param_1 + 0xd0))(0,param_1 + 0xc0,param_1 + 0xc0);
  *(code **)(param_1 + 0xd0) = FUN_00433984;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  (*pcVar2)(1,local_50,param_1 + 0xc0);
  *(code **)(param_1 + 0xd8) = pcStack_38;
  *(code **)(param_1 + 0xd0) = local_40;
  return;
}


// ===== 008e6640  FUN_008e6640 =====

void FUN_008e6640(long param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = param_2;
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}


// ===== 008e6650  FUN_008e6650 =====

void FUN_008e6650(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  void *local_48 [2];
  byte local_38;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar10 = (ulong)param_2;
  if ((uVar5 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar6 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar7 = uVar10;
      if (uVar5 <= uVar10) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar10) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            FUN_008e67e8(param_1 + 0x38,plVar8 + 3);
            if (*(long *)(param_1 + 0x108) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0061fd88("../../modules/pacing/packet_router.cc",0x7d,
                           "modules_used_in_current_batch_.empty()",&DAT_001f5fa0);
            }
            FUN_008e83f0(local_48,param_1 + 0x10,plVar8);
            pvVar3 = local_48[0];
            local_48[0] = (void *)0x0;
            if (pvVar3 == (void *)0x0) {
              return;
            }
            if ((pvVar3 == (void *)0xfffffffffffffff0) && ((local_38 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            operator_delete(pvVar3);
            return;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
      }
    }
  }
  uVar5 = FUN_004249b0();
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f6220,"../../modules/pacing/packet_router.cc",0x3cb,
               "No send module found for ssrc ",uVar10);
  return;
}


// ===== 008e67e8  FUN_008e67e8 =====

long FUN_008e67e8(long *****param_1,undefined8 *param_2)

{
  bool bVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long lVar7;
  long ****local_48;
  long ****local_40;
  long local_38;
  
  ppppplVar3 = (long *****)param_1[1];
  local_38 = 0;
  local_48 = (long ****)&local_48;
  local_40 = (long ****)&local_48;
  if (ppppplVar3 == param_1) {
    lVar7 = 0;
  }
  else {
    do {
      ppppplVar4 = (long *****)ppppplVar3[1];
      if (ppppplVar3[2] == (long ****)*param_2) {
        if (ppppplVar4 == param_1) {
          bVar1 = true;
          if (ppppplVar3 == ppppplVar4) goto LAB_008e6868;
LAB_008e687c:
          ppppplVar5 = (long *****)*ppppplVar4;
          if (&local_48 != param_1) {
            lVar7 = 1;
            for (ppppplVar6 = ppppplVar3; ppppplVar6 != ppppplVar5;
                ppppplVar6 = (long *****)ppppplVar6[1]) {
              lVar7 = lVar7 + 1;
            }
            local_38 = local_38 + lVar7;
            param_1[2] = (long ****)((long)param_1[2] - lVar7);
          }
          pppplVar2 = ppppplVar5[1];
          (*ppppplVar3)[1] = (long ***)pppplVar2;
          *pppplVar2 = (long ***)*ppppplVar3;
          local_48[1] = (long ***)ppppplVar3;
          *ppppplVar3 = local_48;
          ppppplVar5[1] = (long ****)&local_48;
          local_48 = (long ****)ppppplVar5;
          if (bVar1) goto LAB_008e6820;
        }
        else {
          do {
            bVar1 = ppppplVar4[2] == ppppplVar3[2];
            if (!bVar1) break;
            ppppplVar4 = (long *****)ppppplVar4[1];
          } while (ppppplVar4 != param_1);
          if (ppppplVar3 != ppppplVar4) goto LAB_008e687c;
LAB_008e6868:
          if (bVar1) goto LAB_008e6820;
        }
        ppppplVar4 = (long *****)ppppplVar4[1];
      }
LAB_008e6820:
      ppppplVar3 = ppppplVar4;
      lVar7 = local_38;
    } while (ppppplVar3 != param_1);
    if (local_38 != 0) {
      pppplVar2 = (long ****)local_48[1];
      (*local_40)[1] = (long **)pppplVar2;
      *pppplVar2 = *local_40;
      local_38 = 0;
      ppppplVar3 = (long *****)local_40;
      while (ppppplVar3 != &local_48) {
        if ((ppppplVar3 == (long *****)0xfffffffffffffff0) || (ppppplVar3 == (long *****)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        ppppplVar4 = (long *****)ppppplVar3[1];
        operator_delete(ppppplVar3);
        ppppplVar3 = ppppplVar4;
      }
    }
  }
  return lVar7;
}


// ===== 008e697c  FUN_008e697c =====

void FUN_008e697c(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  FUN_008e6a24(param_1,param_2,1);
  uVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
  FUN_008e6650(param_1,uVar1);
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  if ((uVar2 >> 0x20 & 1) != 0) {
    FUN_008e6650(param_1,uVar2);
  }
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2);
  if ((uVar2 >> 0x20 & 1) != 0) {
    FUN_008e6650(param_1,uVar2);
  }
  if (*(long **)(param_1 + 0x50) == param_2) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x008e6a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1b8))(param_2);
  return;
}


// ===== 008e6a24  FUN_008e6a24 =====

void FUN_008e6a24(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar2 = 0x70;
  if ((param_3 & 1) == 0) {
    lVar2 = 0x88;
  }
  plVar3 = (long *)(param_1 + lVar2);
  plVar6 = (long *)*plVar3;
  plVar9 = (long *)plVar3[1];
  if (plVar6 == plVar9) {
joined_r0x008e6afc:
    if (plVar6 != plVar9) {
      if ((long *)*plVar6 == *(long **)(param_1 + 0xa0)) {
        if ((long *)*plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../modules/pacing/packet_router.cc",0x17b,"active_remb_module_",
                       &DAT_001f5fa0);
        }
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))();
        plVar9 = (long *)plVar3[1];
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      if (plVar6 == plVar9) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                  );
      }
      memmove(plVar6,plVar6 + 1,(long)plVar9 - (long)(plVar6 + 1));
      plVar6 = (long *)plVar3[1];
      uVar8 = (ulong)((long)plVar6 + (-8 - ((long)plVar6 << 0x3d))) >> 3;
      uVar5 = (((long)plVar9 - (long)plVar6 << 0x3d) - ((long)plVar9 - (long)plVar6)) + 8U >> 3;
      if (uVar8 <= uVar5) {
        uVar5 = uVar8;
      }
      if ((1 < uVar5) && ((-(int)plVar6 & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        plVar6 = plVar6 + -uVar5;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (plVar6 != plVar9 + -1) {
        plVar6 = plVar6 + -1;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      plVar3[1] = (long)(plVar9 + -1);
      puVar7 = *(undefined8 **)(param_1 + 0x70);
      if ((puVar7 == *(undefined8 **)(param_1 + 0x78)) &&
         (puVar7 = *(undefined8 **)(param_1 + 0x88), puVar7 == *(undefined8 **)(param_1 + 0x90))) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)*puVar7;
      }
      plVar3 = *(long **)(param_1 + 0xa0);
      if ((plVar6 != plVar3) && (plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(long **)(param_1 + 0xa0) = plVar6;
    }
  }
  else {
    uVar5 = (long)plVar9 + (-8 - (long)plVar6);
    uVar4 = (uint)uVar5;
    if ((~uVar4 & 0x18) != 0) {
      uVar8 = (ulong)((uVar4 >> 3) + 1) & 3;
      do {
        if (*plVar6 == param_2) goto joined_r0x008e6afc;
        uVar8 = uVar8 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar8 != 0);
    }
    if (0x17 < uVar5) {
      plVar6 = plVar6 + 2;
      do {
        if (plVar6[-2] == param_2) {
          plVar6 = plVar6 + -2;
          goto joined_r0x008e6afc;
        }
        if (plVar6[-1] == param_2) {
          plVar6 = plVar6 + -1;
          goto joined_r0x008e6afc;
        }
        if (*plVar6 == param_2) goto joined_r0x008e6afc;
        if (plVar6[1] == param_2) {
          plVar6 = plVar6 + 1;
          goto joined_r0x008e6afc;
        }
        plVar1 = plVar6 + 2;
        plVar6 = plVar6 + 4;
      } while (plVar1 != plVar9);
    }
  }
  return;
}


// ===== 008e6c58  FUN_008e6c58 =====

void FUN_008e6c58(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  local_30 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x68)) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_008e6d10;
    *puVar1 = param_2;
    *(undefined8 **)(param_1 + 0x60) = puVar1 + 1;
  }
  else {
    uVar3 = FUN_008e7cf0(param_1 + 0x58,&local_30);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  if ((param_3 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    local_28 = local_30;
    if (puVar1 < *(undefined8 **)(param_1 + 0x98)) {
      if (puVar1 == (undefined8 *)0x0) {
LAB_008e6d10:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar1 + 1;
      *puVar1 = local_30;
    }
    else {
      puVar4 = (undefined8 *)FUN_008e7cf0(param_1 + 0x88,&local_28);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x90) = puVar4;
    if ((puVar1 == *(undefined8 **)(param_1 + 0x78)) &&
       (puVar1 = *(undefined8 **)(param_1 + 0x88), puVar1 == puVar4)) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)*puVar1;
    }
    plVar2 = *(long **)(param_1 + 0xa0);
    if ((plVar5 != plVar2) && (plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(long **)(param_1 + 0xa0) = plVar5;
  }
  return;
}


// ===== 008e6d4c  FUN_008e6d4c =====

void FUN_008e6d4c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  FUN_008e6a24(param_1,param_2,0);
  plVar5 = *(long **)(param_1 + 0x58);
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar5 == plVar2) {
LAB_008e6e28:
    if (plVar5 != plVar2) {
      memmove(plVar5,plVar5 + 1,(long)plVar2 - (long)(plVar5 + 1));
      plVar5 = *(long **)(param_1 + 0x60);
      uVar6 = (ulong)((long)plVar5 + (-8 - ((long)plVar5 << 0x3d))) >> 3;
      uVar4 = (((long)plVar2 - (long)plVar5 << 0x3d) - ((long)plVar2 - (long)plVar5)) + 8U >> 3;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      if ((1 < uVar4) && ((-(int)plVar5 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar5 = plVar5 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (plVar5 == plVar2 + -1) {
          *(long **)(param_1 + 0x60) = plVar2 + -1;
          return;
        }
        plVar5 = plVar5 + -1;
      } while (plVar5 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)plVar2 + (-8 - (long)plVar5);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar6 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar5 == param_2) goto LAB_008e6e28;
        uVar6 = uVar6 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar4) {
      plVar5 = plVar5 + 2;
      do {
        if (plVar5[-2] == param_2) {
          plVar5 = plVar5 + -2;
          goto LAB_008e6e28;
        }
        if (plVar5[-1] == param_2) {
          plVar5 = plVar5 + -1;
          goto LAB_008e6e28;
        }
        if (*plVar5 == param_2) goto LAB_008e6e28;
        if (plVar5[1] == param_2) {
          plVar5 = plVar5 + 1;
          goto LAB_008e6e28;
        }
        plVar1 = plVar5 + 2;
        plVar5 = plVar5 + 4;
      } while (plVar1 != plVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 008e6ecc  FUN_008e6ecc =====

void FUN_008e6ecc(long param_1,void *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  void *pvVar16;
  char *pcVar17;
  char *local_88;
  char *local_80;
  long **local_78;
  char **local_70;
  char *local_68;
  char *pcStack_60;
  long *local_58;
  ulong uStack_50;
  undefined2 local_44 [2];
  
  if (((DAT_00d80400 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d80400), iVar4 != 0)) {
    DAT_00d803f8 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d80400);
  }
  local_70 = (char **)0x0;
  pcStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d803f8 != '\0') {
    local_58 = (long *)(ulong)*(ushort *)((long)param_2 + 4);
    uStack_50 = (ulong)*(uint *)((long)param_2 + 8);
    local_88 = s_sequence_number_001cc0ae;
    local_80 = "rtp_timestamp";
    local_44[0] = 0x202;
    FUN_0066d348(0x42,DAT_00d803f8,"PacketRouter::SendPacket",0,2,&local_88,local_44,&local_58,0);
    local_68 = DAT_00d803f8;
    pcStack_60 = "PacketRouter::SendPacket";
    local_70 = &local_68;
  }
  uVar8 = *(ulong *)(param_1 + 0x18);
  if ((uVar8 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar10 = uVar8 - 1;
    uVar1 = *(uint *)((long)param_2 + 0xc);
    uVar11 = (ulong)uVar1;
    uVar7 = (uint)uVar8;
    if ((uVar8 & uVar10) == 0) {
      uVar12 = (ulong)(uVar7 - 1 & uVar1);
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar1 / uVar7;
        }
        uVar12 = (ulong)(uVar1 - uVar2 * uVar7);
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x10) + uVar12 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_008e6fd4;
          uVar14 = plVar13[1];
          if (uVar14 == uVar11) break;
          if ((uVar8 & uVar10) == 0) {
            uVar14 = uVar14 & uVar10;
          }
          else if (uVar8 <= uVar14) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar14 / uVar8;
            }
            uVar14 = uVar14 - uVar3 * uVar8;
          }
          if (uVar14 != uVar12) goto LAB_008e6fd4;
        }
      } while (*(uint *)(plVar13 + 2) != uVar1);
      local_58 = (long *)plVar13[3];
      if ((param_2 == (void *)0x0) ||
         (uVar8 = (**(code **)(*local_58 + 0x160))(local_58,param_2), (uVar8 & 1) == 0)) {
        uVar8 = FUN_004022fc();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/pacing/packet_router.cc",0x5f2,
                       "Failed to send packet, Not sending media");
        }
      }
      else {
        if (((*(byte *)(param_1 + 0xb0) & 1) != 0) ||
           (uVar8 = FUN_007dbb58(param_2,8), (uVar8 & 1) != 0)) {
          lVar9 = *(long *)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar9 + 1;
          *(long *)((long)param_2 + 0x98) = lVar9;
          *(undefined1 *)((long)param_2 + 0xa0) = 1;
        }
        if (*(char *)(param_1 + 0xb1) == '\x01') {
          *(undefined1 *)((long)param_2 + 0xbc) = 1;
        }
        (**(code **)(*local_58 + 0x168))(local_58,param_2);
        if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
          (**(code **)(param_1 + 0xd8))(param_1 + 0xc0,param_2,param_3);
        }
        (**(code **)(*local_58 + 0x170))(local_58,param_2,param_3);
        FUN_008e8524(0,param_1 + 0xf8,param_1 + 0xf8,&local_58);
        uVar8 = (**(code **)(*local_58 + 0x80))();
        if ((uVar8 & 1) != 0) {
          *(long **)(param_1 + 0x50) = local_58;
        }
        (**(code **)(*local_58 + 0x188))(&local_88);
        pcVar17 = local_80;
        if (local_88 != local_80) {
          puVar5 = *(undefined8 **)(param_1 + 0xe8);
          pcVar15 = local_88;
          do {
            if (puVar5 < *(undefined8 **)(param_1 + 0xf0)) {
              if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              pcVar15[0] = '\0';
              pcVar15[1] = '\0';
              pcVar15[2] = '\0';
              pcVar15[3] = '\0';
              pcVar15[4] = '\0';
              pcVar15[5] = '\0';
              pcVar15[6] = '\0';
              pcVar15[7] = '\0';
              puVar6 = puVar5 + 1;
              *puVar5 = *(undefined8 *)pcVar15;
            }
            else {
              puVar6 = (undefined8 *)FUN_0086a31c(param_1 + 0xe0,pcVar15);
            }
            pcVar15 = pcVar15 + 8;
            *(undefined8 **)(param_1 + 0xe8) = puVar6;
            puVar5 = puVar6;
          } while (pcVar15 != pcVar17);
        }
        pcVar15 = local_88;
        pcVar17 = local_80;
        if (local_88 != (char *)0x0) {
          while (pcVar15 != pcVar17) {
            pcVar17 = pcVar17 + -8;
            if (pcVar17 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            pvVar16 = *(void **)pcVar17;
            pcVar17[0] = '\0';
            pcVar17[1] = '\0';
            pcVar17[2] = '\0';
            pcVar17[3] = '\0';
            pcVar17[4] = '\0';
            pcVar17[5] = '\0';
            pcVar17[6] = '\0';
            pcVar17[7] = '\0';
            if (pvVar16 != (void *)0x0) {
              FUN_007dc854(pvVar16);
              operator_delete(pvVar16);
            }
          }
          local_80 = pcVar15;
          operator_delete(local_88);
        }
        param_2 = (void *)0x0;
      }
      goto LAB_008e701c;
    }
  }
LAB_008e6fd4:
  uVar8 = FUN_004022fc();
  if ((uVar8 & 1) == 0) {
    local_78 = &local_58;
    local_88 = "../../modules/pacing/packet_router.cc";
    local_80 = (char *)0x5aa;
    FUN_00623bb0(&DAT_002256ca,"../../modules/pacing/packet_router.cc",0x5aa,
                 "Failed to send packet, matching RTP module not found or transport error. SSRC = ",
                 *(undefined4 *)((long)param_2 + 0xc),", sequence number ",
                 *(undefined2 *)((long)param_2 + 4));
  }
LAB_008e701c:
  if ((local_70 != (char **)0x0) && (**local_70 != '\0')) {
    FUN_0066d348(0x45,*local_70,local_70[1],0,0,0,0,0,0);
  }
  if (param_2 != (void *)0x0) {
    FUN_007dc854(param_2);
    operator_delete(param_2);
  }
  return;
}


// ===== 008e7308  FUN_008e7308 =====

void FUN_008e7308(long param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char **local_50;
  char *local_48;
  char *pcStack_40;
  undefined8 *local_38;
  
  if (((DAT_00d80410 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d80410), iVar3 != 0)) {
    DAT_00d80408 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d80410);
  }
  local_50 = (char **)0x0;
  pcStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80408 != '\0') {
    local_50 = &local_48;
    FUN_0066d348(0x42,DAT_00d80408,"PacketRouter::OnBatchComplete",0,0,0,0,0,0);
    local_48 = DAT_00d80408;
    pcStack_40 = "PacketRouter::OnBatchComplete";
  }
  plVar4 = *(long **)(param_1 + 0xf8);
  while (plVar4 != (long *)(param_1 + 0x100)) {
    (**(code **)(*(long *)plVar4[4] + 0x178))();
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
  local_38 = (undefined8 *)(param_1 + 0xf8);
  FUN_008e7ed8(&local_38,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(long **)(param_1 + 0xf8) = (long *)(param_1 + 0x100);
  if ((local_50 != (char **)0x0) && (**local_50 != '\0')) {
    FUN_0066d348(0x45,*local_50,local_50[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 008e747c  FUN_008e747c =====

void FUN_008e747c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return;
}


// ===== 008e749c  FUN_008e749c =====

void FUN_008e749c(long *param_1,long param_2,char *param_3)

{
  char *****pppppcVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *****pppppcVar5;
  long *plVar6;
  char ******ppppppcVar7;
  long *plVar8;
  long lVar9;
  char *****local_b8;
  char *****local_b0;
  char *pcStack_a8;
  char **local_a0;
  char *local_98;
  char *pcStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined2 local_74 [2];
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00d80420 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80420), iVar2 != 0)) {
    DAT_00d80418 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d80420);
  }
  local_a0 = (char **)0x0;
  pcStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80418 != '\0') {
    local_b8 = (char *****)0x1b4f17;
    local_88 = CONCAT71(local_88._1_7_,3);
    local_70 = param_3;
    FUN_0066d348(0x42,DAT_00d80418,"PacketRouter::GeneratePadding",0,1,&local_b8,&local_88,&local_70
                 ,0);
    local_98 = DAT_00d80418;
    pcStack_90 = "PacketRouter::GeneratePadding";
    local_a0 = &local_98;
  }
  plVar3 = *(long **)(param_2 + 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x80))(), (uVar4 & 1) != 0)) {
    (**(code **)(**(long **)(param_2 + 0x50) + 0x1a0))(&local_b8,*(long **)(param_2 + 0x50),param_3)
    ;
    FUN_008e7dfc(param_1,&local_b8,0);
    pppppcVar1 = local_b8;
    ppppppcVar7 = (char ******)local_b0;
    if ((char ******)local_b8 != (char ******)0x0) {
      while ((char ******)pppppcVar1 != ppppppcVar7) {
        ppppppcVar7 = ppppppcVar7 + -1;
        if (ppppppcVar7 == (char ******)0x0) {
LAB_008e7858:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pppppcVar5 = *ppppppcVar7;
        *ppppppcVar7 = (char *****)0x0;
        if (pppppcVar5 != (char *****)0x0) {
          FUN_007dc854(pppppcVar5);
          operator_delete(pppppcVar5);
        }
      }
      local_b0 = pppppcVar1;
      operator_delete(local_b8);
    }
  }
  plVar3 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  if (plVar3 == plVar8) {
    lVar9 = *(long *)(param_2 + 0x40);
    if (lVar9 != param_2 + 0x38) {
      do {
        plVar6 = *(long **)(lVar9 + 0x10);
        uVar4 = (**(code **)(*plVar6 + 0x78))(plVar6);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar6 + 0x1a0))(&local_b8,plVar6,param_3);
          FUN_008e7dfc(param_1,&local_b8,0);
          pppppcVar1 = local_b8;
          ppppppcVar7 = (char ******)local_b0;
          if ((char ******)local_b8 != (char ******)0x0) {
            while ((char ******)pppppcVar1 != ppppppcVar7) {
              ppppppcVar7 = ppppppcVar7 + -1;
              if (ppppppcVar7 == (char ******)0x0) goto LAB_008e7858;
              pppppcVar5 = *ppppppcVar7;
              *ppppppcVar7 = (char *****)0x0;
              if (pppppcVar5 != (char *****)0x0) {
                FUN_007dc854(pppppcVar5);
                operator_delete(pppppcVar5);
              }
            }
            local_b0 = pppppcVar1;
            operator_delete(local_b8);
          }
          plVar3 = (long *)*param_1;
          plVar8 = (long *)param_1[1];
          if (plVar3 != plVar8) {
            *(long **)(param_2 + 0x50) = plVar6;
            goto LAB_008e760c;
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != param_2 + 0x38);
      plVar3 = (long *)*param_1;
      plVar8 = (long *)param_1[1];
    }
  }
LAB_008e760c:
  if (plVar3 != plVar8) {
    do {
      if (((DAT_00d80430 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80430), iVar2 != 0)) {
        DAT_00d80428 = (char ******)FUN_0066d328("disabled-by-default-webrtc");
        FUN_0054ff1c(&DAT_00d80430);
      }
      local_b8 = (char *****)0x0;
      pcStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
      if (*(char *)DAT_00d80428 != '\0') {
        local_88 = (ulong)*(ushort *)(*plVar3 + 4);
        uStack_80 = (ulong)*(uint *)(*plVar3 + 8);
        local_70 = s_sequence_number_001cc0ae;
        pcStack_68 = "rtp_timestamp";
        local_74[0] = 0x202;
        FUN_0066d348(0x42,DAT_00d80428,"PacketRouter::GeneratePadding::Loop",0,2,&local_70,local_74,
                     &local_88,0);
        local_b0 = (char *****)DAT_00d80428;
        pcStack_a8 = "PacketRouter::GeneratePadding::Loop";
        local_b8 = (char *****)&local_b0;
        if (*(char *)DAT_00d80428 != '\0') {
          FUN_0066d348(0x45,DAT_00d80428,"PacketRouter::GeneratePadding::Loop",0,0,0,0,0,0);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar8);
  }
  if ((local_a0 != (char **)0x0) && (**local_a0 != '\0')) {
    FUN_0066d348(0x45,*local_a0,local_a0[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 008e789c  FUN_008e789c =====

void FUN_008e789c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar5 = uVar4 - 1;
    uVar6 = (ulong)param_2;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar5) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return;
            }
            uVar9 = plVar8[1];
            if (uVar9 != uVar6) break;
            if (*(uint *)(plVar8 + 2) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x008e7958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar8[3] + 400))((long *)plVar8[3],param_3,param_4);
              return;
            }
          }
          if ((uVar4 & uVar5) == 0) break;
          if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return;
          }
        }
      } while ((uVar9 & uVar5) == uVar7);
    }
  }
  return;
}


// ===== 008e795c  FUN_008e795c =====

ulong FUN_008e795c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if ((uVar4 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  uVar5 = uVar4 - 1;
  uVar6 = (ulong)param_2;
  uVar3 = (uint)uVar4;
  if ((uVar4 & uVar5) == 0) {
    uVar7 = (ulong)(uVar3 - 1 & param_2);
  }
  else {
    uVar7 = uVar6;
    if (uVar4 <= uVar6) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_2 / uVar3;
      }
      uVar7 = (ulong)(param_2 - uVar1 * uVar3);
    }
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x10) + uVar7 * 8);
  if (plVar8 != (long *)0x0) {
    for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      uVar9 = plVar8[1];
      if (uVar9 == uVar6) {
        if (*(uint *)(plVar8 + 2) == param_2) {
          uVar3 = (**(code **)(*(long *)plVar8[3] + 0xd0))();
          if (uVar3 != param_2) {
            return 0;
          }
          uVar4 = (**(code **)(*(long *)plVar8[3] + 0xf0))();
          return uVar4 & 0xffffffffff;
        }
      }
      else {
        if ((uVar4 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar2 * uVar4;
        }
        if (uVar9 != uVar7) {
          return 0;
        }
      }
    }
  }
  return 0;
}


// ===== 008e7a68  FUN_008e7a68 =====

void FUN_008e7a68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
    pvStack_28 = (void *)param_3[1];
    local_30 = (void *)*param_3;
    local_20 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_30);
    if (local_30 != (void *)0x0) {
      uVar4 = (ulong)((long)pvStack_28 + (-4 - ((long)pvStack_28 << 0x3e))) >> 2;
      uVar3 = (ulong)(((long)local_30 - (long)pvStack_28 << 0x3e) -
                     ((long)local_30 - (long)pvStack_28)) >> 2;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      pvVar2 = pvStack_28;
      if ((1 < uVar3) && ((((int)local_30 - (int)pvStack_28 | -(int)pvStack_28) & 3U) == 0)) {
        uVar3 = uVar3 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvStack_28 + uVar3 * -4);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (pvVar2 != local_30) {
        pvVar2 = (void *)((long)pvVar2 + -4);
        if (pvVar2 == (void *)0x0) {
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
  }
  return;
}


// ===== 008e7b48  FUN_008e7b48 =====

void FUN_008e7b48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_60;
  long *plStack_58;
  undefined8 local_50;
  
  for (lVar6 = *(long *)(param_1 + 0x40); lVar6 != param_1 + 0x38; lVar6 = *(long *)(lVar6 + 8)) {
    plVar5 = *(long **)(lVar6 + 0x10);
    iVar2 = (**(code **)(*plVar5 + 0x1c0))(plVar5);
    if (iVar2 != 0) {
      plStack_58 = (long *)param_2[1];
      local_60 = (long *)*param_2;
      local_50 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_60);
      plVar1 = local_60;
      plVar5 = local_60;
      plVar4 = plStack_58;
      if (local_60 == (long *)0x0) {
        return;
      }
      goto joined_r0x008e7c64;
    }
  }
  if (*(undefined8 **)(param_1 + 0x58) == *(undefined8 **)(param_1 + 0x60)) {
    return;
  }
  plStack_78 = (long *)param_2[1];
  local_80 = (long *)*param_2;
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x58);
  local_70 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_80);
  plVar1 = local_80;
  plVar5 = local_80;
  plVar4 = plStack_78;
  if (local_80 == (long *)0x0) {
    return;
  }
  while (local_80 = plVar5, plVar1 != plVar4) {
    plVar4 = plVar4 + -1;
    if (plVar4 == (long *)0x0) {
LAB_008e7cdc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar3 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar5 = local_80;
    }
  }
  plStack_78 = plVar1;
  goto LAB_008e7cb8;
joined_r0x008e7c64:
  local_60 = plVar5;
  if (plVar1 != plVar4) {
    plVar4 = plVar4 + -1;
    if (plVar4 == (long *)0x0) goto LAB_008e7cdc;
    plVar3 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar5 = local_60;
    }
    goto joined_r0x008e7c64;
  }
  plStack_58 = plVar1;
LAB_008e7cb8:
  operator_delete(plVar5);
  return;
}


// ===== 008e7cf0  FUN_008e7cf0 =====

undefined8 * FUN_008e7cf0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_008e7de4();
LAB_008e7de0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_008e7de0;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
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


// ===== 008e7de4  FUN_008e7de4 =====

void FUN_008e7de4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008e7dfc  FUN_008e7dfc =====

void FUN_008e7dfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
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
          FUN_007dc854(pvVar3);
          operator_delete(pvVar3);
        }
      } while (puVar2 != puVar4);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar4;
    operator_delete(puVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// ===== 008e7ed8  FUN_008e7ed8 =====

void FUN_008e7ed8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008e7ed8(param_1,*param_2);
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


// ===== 008e7f4c  FUN_008e7f4c =====

void FUN_008e7f4c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008e7f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 008e7f5c  FUN_008e7f5c =====

void FUN_008e7f5c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8e7fd0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x10))(0,pvVar2,pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 008e7fd0  FUN_008e7fd0 =====

undefined1  [16]
FUN_008e7fd0(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auVar17 [16];
  
  plVar11 = (long *)*param_1;
  uVar1 = *param_2;
  puVar15 = (undefined1 *)(ulong)uVar1;
  puVar14 = (undefined1 *)plVar11[1];
  if (puVar14 == (undefined1 *)0x0) {
    puVar16 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar5 = puVar14 + -1;
    uVar13 = (uint)puVar14;
    if (((ulong)puVar14 & (ulong)puVar5) == 0) {
      puVar16 = (undefined1 *)(ulong)(uVar13 - 1 & uVar1);
    }
    else {
      puVar16 = puVar15;
      if (puVar14 <= puVar15) {
        uVar3 = 0;
        if (uVar13 != 0) {
          uVar3 = uVar1 / uVar13;
        }
        puVar16 = (undefined1 *)(ulong)(uVar1 - uVar3 * uVar13);
      }
    }
    puVar7 = *(undefined8 **)(*plVar11 + (long)puVar16 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        puVar9 = (undefined1 *)plVar12[1];
        if (puVar9 == puVar15) {
          if (*(uint *)(plVar12 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_008e826c;
          }
        }
        else {
          if (((ulong)puVar14 & (ulong)puVar5) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar5);
          }
          else if (puVar14 <= puVar9) {
            uVar8 = 0;
            if (puVar14 != (undefined1 *)0x0) {
              uVar8 = (ulong)puVar9 / (ulong)puVar14;
            }
            puVar9 = puVar9 + -(uVar8 * (long)puVar14);
          }
          if (puVar9 != puVar16) break;
        }
      }
    }
  }
  plVar12 = (long *)operator_new(0x20);
  if (plVar12 == (long *)0x0) {
LAB_008e8288:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar12 = 0;
  plVar12[1] = (long)puVar15;
  if (plVar12 == (long *)0xfffffffffffffff0) goto LAB_008e8288;
  uVar2 = *(undefined4 *)*param_4;
  plVar12[3] = 0;
  *(undefined4 *)(plVar12 + 2) = uVar2;
  if ((float)(plVar11[3] + 1) <= *(float *)(plVar11 + 4) * (float)puVar14) goto LAB_008e81f4;
  if (puVar14 < (undefined1 *)0x3) {
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)(((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0);
  }
  puVar16 = (undefined1 *)(uVar8 | (long)puVar14 << 1);
  puVar5 = (undefined1 *)(long)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
  if (puVar16 <= puVar5) {
    puVar16 = puVar5;
  }
  if (puVar16 + -1 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar16 & (ulong)(puVar16 + -1)) != 0) {
    puVar16 = (undefined1 *)FUN_005204f8(puVar16);
    puVar14 = (undefined1 *)plVar11[1];
  }
  if (puVar14 < puVar16) {
LAB_008e8148:
    FUN_008e829c(plVar11,puVar16);
  }
  else if (puVar16 < puVar14) {
    puVar5 = (undefined1 *)(long)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
    if ((puVar14 < (undefined1 *)0x3) || (((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0)) {
      puVar5 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar5) {
      puVar5 = (undefined1 *)(1L << (-LZCOUNT(puVar5 + -1) & 0x3fU));
    }
    if (puVar16 <= puVar5) {
      puVar16 = puVar5;
    }
    if (puVar16 < puVar14) goto LAB_008e8148;
  }
  puVar14 = (undefined1 *)plVar11[1];
  if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
    puVar16 = (undefined1 *)(ulong)((int)puVar14 - 1U & uVar1);
  }
  else {
    puVar16 = puVar15;
    if (puVar14 <= puVar15) {
      uVar8 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar8 = (ulong)puVar15 / (ulong)puVar14;
      }
      puVar16 = puVar15 + -(uVar8 * (long)puVar14);
    }
  }
LAB_008e81f4:
  lVar6 = *plVar11;
  plVar10 = *(long **)(lVar6 + (long)puVar16 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar11 + 2;
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
    *(long **)(lVar6 + (long)puVar16 * 8) = plVar10;
    if (*plVar12 != 0) {
      puVar15 = *(undefined1 **)(*plVar12 + 8);
      if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
        puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)(puVar14 + -1));
      }
      else if (puVar14 <= puVar15) {
        uVar8 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar15 / (ulong)puVar14;
        }
        puVar15 = puVar15 + -(uVar8 * (long)puVar14);
      }
      *(long **)(*plVar11 + (long)puVar15 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
  }
  uVar4 = 1;
  plVar11[3] = plVar11[3] + 1;
LAB_008e826c:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar12;
  return auVar17;
}


// ===== 008e829c  FUN_008e829c =====

void FUN_008e829c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
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
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 008e83f0  FUN_008e83f0 =====

void FUN_008e83f0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008e84a8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_008e84a8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_008e84a8:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 008e8524  FUN_008e8524 =====

undefined1  [16] FUN_008e8524(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_008e8590;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_008e85fc;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_008e8590:
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
LAB_008e85fc:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 008e862c  FUN_008e862c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e862c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1[2] = param_2;
  param_1[3] = param_5;
  *param_1 = &PTR_FUN_00d3d040;
  param_1[1] = &PTR_FUN_00d3d0d8;
  *(undefined4 *)(param_1 + 4) = param_6;
  FUN_008e9c68(param_1 + 5);
  puVar1 = PTR_DAT_00d52038;
  param_1[0x6c] = 0x8000000000000000;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((long)param_1 + 0x374) = *(undefined4 *)puVar1;
  FUN_00625c38(0x3f733333,(long)param_1 + 0x36c);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FUN_007ebca0(param_1 + 0x76);
  uVar2 = FUN_005d6490();
  param_1[0x77] = uVar2;
  return;
}


// ===== 008e8708  FUN_008e8708 =====

void FUN_008e8708(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3d040;
  param_1[1] = &PTR_FUN_00d3d0d8;
  *(undefined1 *)((long)param_1 + 0x369) = 1;
  FUN_007ebdcc(param_1[0x76]);
  pvVar2 = (void *)param_1[0x76];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_008ea0e0(param_1 + 5);
  return;
}


// ===== 008e8778  FUN_008e8778 =====

void FUN_008e8778(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  param_1[-1] = &PTR_FUN_00d3d040;
  *param_1 = &PTR_FUN_00d3d0d8;
  *(undefined1 *)((long)param_1 + 0x361) = 1;
  FUN_007ebdcc(param_1[0x75]);
  pvVar2 = (void *)param_1[0x75];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_008ea0e0(param_1 + 4);
  return;
}


// ===== 008e87e8  FUN_008e87e8 =====

void FUN_008e87e8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3d040;
  param_1[1] = &PTR_FUN_00d3d0d8;
  *(undefined1 *)((long)param_1 + 0x369) = 1;
  FUN_007ebdcc(param_1[0x76]);
  pvVar2 = (void *)param_1[0x76];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_008ea0e0(param_1 + 5);
  operator_delete(param_1);
  return;
}


// ===== 008e8864  FUN_008e8864 =====

void FUN_008e8864(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3d0d8;
  param_1[-1] = &PTR_FUN_00d3d040;
  *(undefined1 *)((long)param_1 + 0x361) = 1;
  FUN_007ebdcc(param_1[0x75]);
  pvVar2 = (void *)param_1[0x75];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_008ea0e0(param_1 + 4);
  operator_delete(param_1 + -1);
  return;
}


// ===== 008e88f0  FUN_008e88f0 =====

void FUN_008e88f0(long param_1)

{
  FUN_008eb0b0(param_1 + 0x28);
  return;
}


// ===== 008e88fc  FUN_008e88fc =====

void FUN_008e88fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *(undefined1 *)(param_1 + 0x368) = 1;
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e89c8  FUN_008e89c8 =====

void FUN_008e89c8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar1 = param_2[1] - *param_2;
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *param_2;
  }
  FUN_008ea258(param_1 + 0x28,lVar3,(lVar1 >> 3) * -0x3333333333333333);
  lVar3 = *(long *)(param_1 + 0x3b0);
  plVar2 = *(long **)(param_1 + 0x3b8);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_008e988c;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 008e8aa4  FUN_008e8aa4 =====

void FUN_008e8aa4(long param_1)

{
  FUN_008ea2c4(param_1 + 0x28);
  return;
}


// ===== 008e8ab0  FUN_008e8ab0 =====

void FUN_008e8ab0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_008ea458(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e8b7c  FUN_008e8b7c =====

void FUN_008e8b7c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_008ea4c8(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e8c48  FUN_008e8c48 =====

void FUN_008e8c48(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_008ea7c4(param_1 + 0x28,&local_70);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e8d20  FUN_008e8d20 =====

void FUN_008e8d20(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar3 = *(long *)(param_1 + 0x3b0);
  plVar2 = *(long **)(param_1 + 0x3b8);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar1 = (long *)operator_new(0x20);
  *plVar1 = param_1;
  plVar1[3] = lVar4;
  plVar1[2] = lVar6;
  plVar1[1] = lVar5;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar3;
  local_60[0][4] = (long)FUN_008e9b28;
  local_60[0][5] = (long)FUN_008e989c;
  local_60[0][2] = (long)plVar1;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_60,&uStack_21,&uStack_22);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 008e8e14  FUN_008e8e14 =====

void FUN_008e8e14(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  lVar3 = *(long *)(param_1 + 0x3a8);
  plVar2 = *(long **)(param_1 + 0x3b0);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar1 = (long *)operator_new(0x20);
  *plVar1 = param_1 + -8;
  plVar1[3] = lVar4;
  plVar1[2] = lVar6;
  plVar1[1] = lVar5;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar3;
  local_60[0][4] = (long)FUN_008e9b28;
  local_60[0][5] = (long)FUN_008e989c;
  local_60[0][2] = (long)plVar1;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_60,&uStack_61,&uStack_62);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 008e8f0c  FUN_008e8f0c =====

void FUN_008e8f0c(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x3b0);
  plVar1 = *(long **)(param_1 + 0x3b8);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_008e9c10;
  local_50[0][2] = param_1;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 008e8fcc  FUN_008e8fcc =====

void FUN_008e8fcc(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 0x3a8);
  plVar1 = *(long **)(param_1 + 0x3b0);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_008e9c10;
  local_50[0][2] = param_1 + -8;
  *(undefined4 *)(local_50[0] + 3) = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 008e9090  FUN_008e9090 =====

void FUN_008e9090(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_008eb080(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e915c  FUN_008e915c =====

void FUN_008e915c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *(undefined1 *)(param_1 + 0x378) = 1;
  FUN_008eb08c(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e9230  FUN_008e9230 =====

void FUN_008e9230(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_008eb09c(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e92fc  FUN_008e92fc =====

void FUN_008e92fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_008ec4d8(param_1 + 0x28);
  lVar1 = FUN_008eb1cc(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x3b0);
    plVar2 = *(long **)(param_1 + 0x3b8);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar1;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_008e9c48;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 008e93c8  FUN_008e93c8 =====

undefined8 FUN_008e93c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x390);
}


// ===== 008e93d4  FUN_008e93d4 =====

undefined8 FUN_008e93d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x388);
}


// ===== 008e93e0  FUN_008e93e0 =====

undefined1  [16] FUN_008e93e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x398);
}


// ===== 008e93f4  FUN_008e93f4 =====

long FUN_008e93f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x380);
  if (1 < lVar2 + 0x8000000000000001U) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if (lVar2 <= lVar1) {
      if (lVar1 == 0x7fffffffffffffff) {
        return 0x7fffffffffffffff;
      }
      return lVar1 - lVar2;
    }
  }
  return 0;
}


// ===== 008e9454  FUN_008e9454 =====

void FUN_008e9454(long param_1,long param_2)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 extraout_w1;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char **ppcVar16;
  long lVar17;
  long lVar18;
  char *local_90;
  char *pcStack_88;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  undefined1 local_44 [3];
  undefined1 uStack_41;
  
  if (((DAT_00d80440 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d80440), iVar4 != 0)) {
    DAT_00d80438 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d80440);
  }
  pcStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80438 == '\0') {
    ppcVar16 = (char **)0x0;
    bVar1 = *(byte *)(param_1 + 0x369);
  }
  else {
    ppcVar16 = &local_90;
    FUN_0066d348(0x42,DAT_00d80438,"TaskQueuePacedSender::MaybeProcessPackets",0,0,0,0,0,0);
    local_90 = DAT_00d80438;
    pcStack_88 = "TaskQueuePacedSender::MaybeProcessPackets";
    bVar1 = *(byte *)(param_1 + 0x369);
  }
  if (((bVar1 & 1) == 0) && (*(char *)(param_1 + 0x368) == '\x01')) {
    *(undefined1 *)(param_1 + 0x3a8) = 1;
    lVar5 = FUN_008eae24(param_1 + 0x28);
    lVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
    uVar7 = FUN_008ea7b0(param_1 + 0x28);
    puVar3 = PTR_DAT_00d530d8;
    lVar12 = *(long *)PTR_DAT_00d530d8;
    if ((uVar7 & 1) == 0) {
      lVar12 = 0;
    }
LAB_008e9588:
    if ((lVar6 != 0x7fffffffffffffff) && (lVar12 != 0x7fffffffffffffff)) {
      lVar13 = -0x8000000000000000;
      if (lVar12 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
        lVar13 = lVar12 + lVar6;
      }
      if (lVar13 < lVar5) goto code_r0x008e95b0;
    }
    FUN_008eb230(param_1 + 0x28);
    lVar5 = FUN_008eae24(param_1 + 0x28);
    uVar7 = FUN_008ea7b0(param_1 + 0x28);
    lVar12 = *(long *)puVar3;
    if ((uVar7 & 1) == 0) {
      lVar12 = 0;
    }
    goto LAB_008e9588;
  }
  goto LAB_008e9804;
code_r0x008e95b0:
  uVar8 = FUN_008eb0bc(param_1 + 0x28);
  uVar9 = FUN_008eb214(param_1 + 0x28);
  uVar10 = FUN_008eb224(param_1 + 0x28);
  uVar11 = FUN_008eb14c(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3a1) = 0xaaaaaaaa;
  *(undefined2 *)(param_1 + 0x3a5) = 0xaaaa;
  *(undefined8 *)(param_1 + 0x380) = uVar10;
  *(undefined8 *)(param_1 + 0x388) = uVar11;
  *(undefined8 *)(param_1 + 0x390) = uVar8;
  *(undefined8 *)(param_1 + 0x398) = uVar9;
  *(undefined1 *)(param_1 + 0x3a0) = extraout_w1;
  *(undefined1 *)(param_1 + 0x3a7) = 0xaa;
  if (param_2 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    if (param_2 == *(long *)(param_1 + 0x360)) {
      *(undefined8 *)(param_1 + 0x360) = 0x8000000000000000;
      goto LAB_008e9634;
    }
  }
  else {
LAB_008e9634:
    uVar7 = FUN_008ea7b0(param_1 + 0x28);
    if ((uVar7 & 1) == 0) {
      lVar18 = *(long *)(param_1 + 0x18);
      lVar13 = lVar18;
      if (((*(int *)(param_1 + 0x20) != -1) && (lVar17 = *(long *)(param_1 + 0x78), lVar17 != 0)) &&
         (fVar2 = *(float *)(param_1 + 0x370), fVar2 != DAT_001fd5e4)) {
        if (fVar2 == INFINITY) {
          lVar14 = -8000000;
        }
        else if (fVar2 == -INFINITY) {
          lVar14 = 0;
        }
        else {
          lVar14 = (long)fVar2 * 8000000;
        }
        lVar13 = 0;
        if (lVar17 != 0) {
          lVar13 = lVar14 / lVar17;
        }
        lVar13 = lVar13 * *(int *)(param_1 + 0x20);
        if (lVar18 <= lVar13) {
          lVar13 = lVar18;
        }
      }
    }
    else {
      lVar13 = 0;
    }
    lVar17 = 0x7fffffffffffffff;
    lVar18 = -0x7ffffffffffffc1a;
    if (((lVar6 != -0x8000000000000000) && (lVar5 != 0x7fffffffffffffff)) &&
       ((lVar5 = lVar5 - lVar6, lVar5 != 0x7fffffffffffffff && (lVar12 != -0x8000000000000000)))) {
      lVar18 = lVar13;
      if (lVar13 <= lVar5 - lVar12) {
        lVar18 = lVar5 - lVar12;
      }
      if (lVar5 != -0x8000000000000000) {
        lVar13 = lVar18;
      }
      lVar12 = lVar13;
      if (lVar13 != -0x8000000000000000) {
        lVar12 = lVar13 + lVar6;
      }
      lVar18 = lVar13 + 999;
      lVar17 = lVar13;
      if (lVar13 != 0x7fffffffffffffff) {
        lVar17 = lVar12;
      }
    }
    if ((*(long *)(param_1 + 0x360) == -0x8000000000000000) || (lVar17 < *(long *)(param_1 + 0x360))
       ) {
      lVar12 = *(long *)(param_1 + 0x3b0);
      plVar15 = *(long **)(param_1 + 0x3b8);
      if (lVar12 != 0) {
        FUN_00d0f740(1,lVar12);
      }
      local_80[0] = (long *)operator_new(0x30);
      local_80[0][4] = (long)FUN_004473ec;
      local_80[0][5] = (long)FUN_008e9c58;
      *local_80[0] = lVar12;
      local_80[0][2] = param_1;
      local_80[0][3] = lVar17;
      local_70 = FUN_005db390;
      pcStack_68 = FUN_005db348;
      local_44[0] = 1;
      (**(code **)(*plVar15 + 0x10))(plVar15,local_80,(lVar18 / 1000) * 1000,local_44,&uStack_41);
      (*local_70)(0,local_80,local_80);
      *(long *)(param_1 + 0x360) = lVar17;
    }
  }
  *(undefined1 *)(param_1 + 0x3a8) = 0;
LAB_008e9804:
  if ((ppcVar16 != (char **)0x0) && (**ppcVar16 != '\0')) {
    FUN_0066d348(0x45,*ppcVar16,ppcVar16[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 008e988c  FUN_008e988c =====

void FUN_008e988c(undefined8 *param_1)

{
  FUN_008e9454(*param_1,0x8000000000000000);
  return;
}


// ===== 008e989c  FUN_008e989c =====

void FUN_008e989c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char **local_b8;
  char *local_b0;
  char *pcStack_a8;
  char **local_a0;
  char *local_98;
  char *pcStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined2 local_74 [2];
  char *local_70;
  char *pcStack_68;
  
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (((DAT_00d80450 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80450), iVar1 != 0)) {
    DAT_00d80448 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d80450);
  }
  local_a0 = (char **)0x0;
  pcStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80448 != '\0') {
    FUN_0066d348(0x42,DAT_00d80448,"TaskQueuePacedSender::EnqueuePackets",0,0,0,0,0,0);
    local_98 = DAT_00d80448;
    pcStack_90 = "TaskQueuePacedSender::EnqueuePackets";
    local_a0 = &local_98;
  }
  plVar6 = (long *)plVar5[1];
  plVar5 = (long *)plVar5[2];
  if (plVar6 != plVar5) {
    do {
      if (((DAT_00d80460 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80460), iVar1 != 0)) {
        DAT_00d80458 = (char *)FUN_0066d328("disabled-by-default-webrtc");
        FUN_0054ff1c(&DAT_00d80460);
      }
      local_b8 = (char **)0x0;
      pcStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      if (*DAT_00d80458 != '\0') {
        local_88 = (ulong)*(ushort *)(*plVar6 + 4);
        uStack_80 = (ulong)*(uint *)(*plVar6 + 8);
        local_70 = s_sequence_number_001cc0ae;
        pcStack_68 = "rtp_timestamp";
        local_74[0] = 0x202;
        FUN_0066d348(0x42,DAT_00d80458,"TaskQueuePacedSender::EnqueuePackets::Loop",0,2,&local_70,
                     local_74,&local_88,0);
        local_b0 = DAT_00d80458;
        pcStack_a8 = "TaskQueuePacedSender::EnqueuePackets::Loop";
        local_b8 = &local_b0;
      }
      lVar2 = *plVar6;
      uVar3 = *(long *)(lVar2 + 0x18) + (ulong)*(byte *)(lVar2 + 2);
      if (*(char *)(lVar4 + 0x378) == '\x01') {
        uVar3 = *(long *)(lVar2 + 0x10) + uVar3;
      }
      FUN_00625c4c(0,(float)uVar3,lVar4 + 0x36c);
      lVar2 = *plVar6;
      *plVar6 = 0;
      FUN_008eac40(lVar4 + 0x28,lVar2);
      if ((local_b8 != (char **)0x0) && (**local_b8 != '\0')) {
        FUN_0066d348(0x45,*local_b8,local_b8[1],0,0,0,0,0,0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar5);
  }
  FUN_008e9454(lVar4,0x8000000000000000);
  if ((local_a0 != (char **)0x0) && (**local_a0 != '\0')) {
    FUN_0066d348(0x45,*local_a0,local_a0[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 008e9b28  FUN_008e9b28 =====

void FUN_008e9b28(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8e9c10);
      (*pcVar1)();
    }
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      puVar6 = *(undefined8 **)((long)pvVar4 + 8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((long)pvVar4 + 0x10);
        puVar2 = puVar6;
        if (puVar6 != puVar3) {
          do {
            puVar3 = puVar3 + -1;
            if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            pvVar5 = (void *)*puVar3;
            *puVar3 = 0;
            if (pvVar5 != (void *)0x0) {
              FUN_007dc854(pvVar5);
              operator_delete(pvVar5);
            }
          } while (puVar3 != puVar6);
          puVar2 = *(undefined8 **)((long)pvVar4 + 8);
        }
        *(undefined8 **)((long)pvVar4 + 0x10) = puVar6;
        operator_delete(puVar2);
      }
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 008e9c10  FUN_008e9c10 =====

void FUN_008e9c10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_008ea7a4(lVar1 + 0x28,(int)param_1[1]);
  FUN_008e9454(lVar1,0x8000000000000000);
  return;
}


// ===== 008e9c48  FUN_008e9c48 =====

void FUN_008e9c48(undefined8 *param_1)

{
  FUN_008e9454(*param_1,0x8000000000000000);
  return;
}


// ===== 008e9c58  FUN_008e9c58 =====

void FUN_008e9c58(undefined8 *param_1)

{
  FUN_008e9454(*param_1,param_1[1]);
  return;
}


// ===== 008e9c68  FUN_008e9c68 =====

void FUN_008e9c68(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,char *param_5)

{
  long *****ppppplVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long ****local_68;
  ulong local_60;
  byte bStack_51;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (*param_5 == '\x01') {
    (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-DrainQueue",0x17);
    uVar4 = local_60;
    if (-1 < (char)bStack_51) {
      uVar4 = (ulong)bStack_51;
    }
    if (uVar4 < 8) {
      bVar2 = true;
    }
    else {
      ppppplVar1 = (long *****)local_68;
      if (-1 < (char)bStack_51) {
        ppppplVar1 = &local_68;
      }
      bVar2 = *ppppplVar1 != (long ****)0x64656c6261736944;
    }
    if ((char)bStack_51 < '\0') {
      operator_delete(local_68);
    }
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 2) = bVar2;
  (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-PadInSilence",0x19);
  uVar4 = local_60;
  if (-1 < (char)bStack_51) {
    uVar4 = (ulong)bStack_51;
  }
  if (uVar4 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_68;
    if (-1 < (char)bStack_51) {
      ppppplVar1 = &local_68;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)((long)param_1 + 0x11) = bVar2;
  (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-BlockAudio",0x17);
  uVar4 = local_60;
  if (-1 < (char)bStack_51) {
    uVar4 = (ulong)bStack_51;
  }
  if (uVar4 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_68;
    if (-1 < (char)bStack_51) {
      ppppplVar1 = &local_68;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)((long)param_1 + 0x12) = bVar2;
  (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-IgnoreTransportOverhead",0x24);
  uVar4 = local_60;
  if (-1 < (char)bStack_51) {
    uVar4 = (ulong)bStack_51;
  }
  if (uVar4 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_68;
    if (-1 < (char)bStack_51) {
      ppppplVar1 = &local_68;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)((long)param_1 + 0x13) = bVar2;
  (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-FastRetransmissions",0x20);
  uVar4 = local_60;
  if (-1 < (char)bStack_51) {
    uVar4 = (ulong)bStack_51;
  }
  if (uVar4 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_68;
    if (-1 < (char)bStack_51) {
      ppppplVar1 = &local_68;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  *(bool *)((long)param_1 + 0x14) = bVar2;
  if ((param_5[0x10] & 1U) == 0) {
    (**(code **)(*param_4 + 0x10))(&local_68,param_4,"WebRTC-Pacer-KeyframeFlushing",0x1d);
    if (-1 < (char)bStack_51) {
      local_60 = (ulong)bStack_51;
    }
    if (local_60 < 7) {
      bVar2 = false;
    }
    else {
      ppppplVar1 = (long *****)local_68;
      if (-1 < (char)bStack_51) {
        ppppplVar1 = &local_68;
      }
      bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
    }
    if ((char)bStack_51 < '\0') {
      operator_delete(local_68);
    }
  }
  else {
    bVar2 = true;
  }
  *(bool *)((long)param_1 + 0x15) = bVar2;
  param_1[3] = 0;
  param_1[4] = *(undefined8 *)(param_5 + 0x30);
  uVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_008ecd74(param_1 + 0xc,param_4);
  *(undefined1 *)(param_1 + 0x27) = 0;
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = uVar3;
  param_1[0x29] = uVar3;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  uStack_78 = *(undefined8 *)(param_5 + 0x20);
  local_80 = *(undefined8 *)(param_5 + 0x18);
  local_70 = *(undefined8 *)(param_5 + 0x28);
  FUN_008ee6f4(param_1 + 0x2d,uVar3,param_5[0x11],&local_80);
  *(undefined1 *)(param_1 + 100) = 0;
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0x10000;
  param_1[0x65] = uVar3;
  if (((*(byte *)(param_1 + 2) & 1) == 0) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/pacing/pacing_controller.cc",0x30a,
                 "Pacer queues will not be drained,pushback experiment must be enabled.");
  }
  return;
}


// ===== 008ea0e0  FUN_008ea0e0 =====

void FUN_008ea0e0(long param_1)

{
  FUN_008ea120(param_1 + 0x168);
  FUN_006634ac(param_1 + 0xe8);
  FUN_006634ac(param_1 + 0xa0);
  FUN_008ec928(param_1 + 0x68);
  return;
}


// ===== 008ea120  FUN_008ea120 =====

void FUN_008ea120(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    plVar1 = *(long **)(param_1 + 0x1a8);
    plVar5 = *(long **)(*(long *)(param_1 + 0x1a0) + 8);
    *(long **)(*plVar1 + 8) = plVar5;
    *plVar5 = *plVar1;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    while (plVar1 != (long *)(param_1 + 0x1a0)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) goto LAB_008ea244;
      plVar5 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar5;
    }
  }
  FUN_008ec4e4(param_1 + 0x168);
  FUN_008ec4e4(param_1 + 0x138);
  FUN_008ec4e4(param_1 + 0x108);
  FUN_008ec4e4(param_1 + 0xd8);
  FUN_008ec4e4(param_1 + 0xa8);
  puVar2 = (undefined8 *)*(void **)(param_1 + 0x90);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      pvVar3 = *(void **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x10));
        return;
      }
      return;
    }
    if (puVar2 == (undefined8 *)0xfffffffffffffff0) break;
    pvVar3 = (void *)*puVar2;
    lVar4 = puVar2[3];
    puVar2[3] = 0;
    if (lVar4 != 0) {
      FUN_008ec69c();
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
LAB_008ea244:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008ea258  FUN_008ea258 =====

void FUN_008ea258(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  for (param_3 = param_3 * 0x28; param_3 != 0; param_3 = param_3 + -0x28) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    local_40 = param_2[4];
    FUN_008ecfe4(param_1 + 0x60,&local_60);
    param_2 = param_2 + 5;
  }
  return;
}


// ===== 008ea2c4  FUN_008ea2c4 =====

void FUN_008ea2c4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/pacing/pacing_controller.cc",0x389,
                 "PacedSender paused.");
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar2 = FUN_008ea334(param_1);
  FUN_008ef7c0(param_1 + 0x168,1,uVar2);
  return;
}


// ===== 008ea334  FUN_008ea334 =====

ulong FUN_008ea334(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  if ((long)uVar1 < (long)param_1[5]) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      uVar3 = param_1[5];
      uVar2 = uVar3 / 1000;
      uVar4 = uVar1 / 1000;
      if (499 < uVar3 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      if (499 < uVar1 % 1000) {
        uVar4 = uVar4 + 1;
      }
      if ((uVar1 & 0x8000000000000000) != 0) {
        uVar4 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
      }
      FUN_00623bb0(&DAT_002255de,"../../modules/pacing/pacing_controller.cc",0x4ba,
                   "Non-monotonic clock behavior observed. Previous timestamp: ",uVar2,
                   ", new timestamp: ",uVar4);
    }
    uVar1 = param_1[5];
  }
  param_1[5] = uVar1;
  return uVar1;
}


// ===== 008ea458  FUN_008ea458 =====

void FUN_008ea458(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/pacing/pacing_controller.cc",0x3c1,
                 "PacedSender resumed.");
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar2 = FUN_008ea334(param_1);
  FUN_008ef7c0(param_1 + 0x168,0,uVar2);
  return;
}


// ===== 008ea4c8  FUN_008ea4c8 =====

void FUN_008ea4c8(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 800) & 1) != 0)) {
    uVar1 = FUN_008ea334(param_1);
    lVar2 = FUN_008ea5bc(param_1,uVar1);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x38);
    auVar7._8_8_ = 0x8000000000000000;
    auVar7._0_8_ = 0x8000000000000000;
    auVar9 = NEON_cmeq(auVar6,auVar7,8);
    auVar3._8_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * lVar2) / 8000000;
    auVar3._0_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * lVar2) / 8000000;
    auVar7 = NEON_cmgt(auVar6,auVar3,8);
    auVar7 = NEON_bif(auVar3,auVar6,auVar7,1);
    auVar4._0_8_ = auVar6._0_8_ - auVar7._0_8_;
    auVar4._8_8_ = auVar6._8_8_ - auVar7._8_8_;
    auVar5._0_8_ = auVar6._0_8_ + -0x7fffffffffffffff;
    auVar5._8_8_ = auVar6._8_8_ + -0x7fffffffffffffff;
    auVar8._8_8_ = 2;
    auVar8._0_8_ = 2;
    auVar6._8_8_ = 0x8000000000000000;
    auVar6._0_8_ = 0x8000000000000000;
    auVar7 = NEON_bit(auVar4,auVar6,auVar9,1);
    auVar6 = NEON_cmhi(auVar8,auVar5,8);
    auVar9._8_8_ = 0x7ff8000000000000;
    auVar9._0_8_ = 0x7ff8000000000000;
    auVar7 = NEON_bit(auVar7,auVar9,auVar6,1);
    *(long *)(param_1 + 0x40) = auVar7._8_8_;
    *(long *)(param_1 + 0x38) = auVar7._0_8_;
  }
  *(byte *)(param_1 + 800) = param_2 & 1;
  return;
}


// ===== 008ea5bc  FUN_008ea5bc =====

/* WARNING: Removing unreachable block (ram,0x008ea724) */
/* WARNING: Removing unreachable block (ram,0x008ea6b4) */
/* WARNING: Removing unreachable block (ram,0x008ea698) */
/* WARNING: Removing unreachable block (ram,0x008ea708) */
/* WARNING: Removing unreachable block (ram,0x008ea764) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * FUN_008ea5bc(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uStack_b9;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  char *local_a0;
  char **ppcStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char **local_78;
  char *local_70;
  void **ppvStack_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  char **local_48;
  char *local_40;
  void *local_38;
  undefined8 uStack_30;
  
  lVar3 = *(long *)(param_1 + 0x140);
  if (lVar3 == -0x8000000000000000) {
    return (char *)0x0;
  }
  local_40 = (char *)(param_2 - lVar3);
  if (param_2 < lVar3) {
    return (char *)0x0;
  }
  if (param_2 == 0x7fffffffffffffff) {
    local_40 = (char *)0x7fffffffffffffff;
    *(undefined8 *)(param_1 + 0x140) = 0x7fffffffffffffff;
  }
  else {
    if (lVar3 == 0x7fffffffffffffff) {
      *(long *)(param_1 + 0x140) = param_2;
      return (char *)0x8000000000000000;
    }
    *(long *)(param_1 + 0x140) = param_2;
    if ((long)local_40 < 0x1e8481) {
      return local_40;
    }
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    local_b8 = "../../modules/pacing/pacing_controller.cc";
    local_b0 = 0x96a;
    local_a8 = &uStack_b9;
    ppcStack_98 = &local_b8;
    local_a0 = "Elapsed time (";
    FUN_005f3380(&local_60,&local_40);
    local_78 = &local_a0;
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
    ppvStack_68 = &local_90;
    local_70 = ") longer than expected, limiting to ";
    FUN_005f3380(&local_38,&DAT_002256d8);
    local_48 = &local_70;
    uStack_58 = uStack_30;
    local_60 = local_38;
                    /* WARNING: Load size is inaccurate */
    puVar1 = *(undefined8 **)((long)ppvStack_68[3] + 8);
    FUN_00623bb0("\r\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*ppvStack_68[3],ppvStack_68,
                 local_70,&local_60);
    if (local_80 < 0) {
      operator_delete(local_90);
    }
  }
  return "nt read_session_ticket";
}


// ===== 008ea7a4  FUN_008ea7a4 =====

void FUN_008ea7a4(long param_1)

{
  FUN_008ef7f4(param_1 + 0x168);
  return;
}


// ===== 008ea7b0  FUN_008ea7b0 =====

bool FUN_008ea7b0(long param_1)

{
  return *(int *)(param_1 + 0x60) == 2;
}


// ===== 008ea7c4  FUN_008ea7c4 =====

void FUN_008ea7c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = 1000000;
  lVar2 = lVar8;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = (*(long *)(param_2 + 0x18) * 8000000) / lVar2;
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = (*(long *)(param_2 + 8) * 8000000) / lVar2;
  }
  if (lVar5 <= lVar1) goto LAB_008ea950;
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) == 0) {
    lVar2 = lVar8;
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar2 = *(long *)(param_2 + 0x10);
    }
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = (*(long *)(param_2 + 0x18) * 8000000) / lVar2;
    }
    if ((long)uVar3 < 0) {
      uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      uVar3 = *(ulong *)(param_1 + 0x58);
      if ((long)uVar3 < 0) goto LAB_008ea8d8;
LAB_008ea86c:
      uVar7 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar7 = uVar7 + 1;
      }
    }
    else {
      uVar6 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar6 = uVar6 + 1;
      }
      uVar3 = *(ulong *)(param_1 + 0x58);
      if (-1 < (long)uVar3) goto LAB_008ea86c;
LAB_008ea8d8:
      uVar7 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    }
    FUN_00623bb0(&DAT_00215708,"../../modules/pacing/pacing_controller.cc",0x57a,"Padding rate ",
                 uVar6,"kbps is higher than the pacing rate ",uVar7,"kbps, capping.");
  }
  lVar2 = lVar8;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = (*(long *)(param_2 + 8) * 8000000) / lVar2;
  }
LAB_008ea950:
  *(long *)(param_1 + 0x58) = lVar5;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar8 = *(long *)(param_2 + 0x10);
  }
  lVar2 = 0;
  if (lVar8 != 0) {
    lVar2 = (*(long *)(param_2 + 8) * 8000000) / lVar8;
  }
  *(long *)(param_1 + 0x48) = lVar2;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x10);
  uVar4 = FUN_008ea334(param_1);
  FUN_008eaa88(param_1,uVar4);
  uVar3 = FUN_0044075c();
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x48);
  if ((long)uVar3 < 0) {
    uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    uVar3 = *(ulong *)(param_1 + 0x58);
  }
  else {
    uVar6 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar6 = uVar6 + 1;
    }
    uVar3 = *(ulong *)(param_1 + 0x58);
  }
  if ((long)uVar3 < 0) {
    uVar7 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  else {
    uVar7 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar7 = uVar7 + 1;
    }
  }
  FUN_00623bb0(&DAT_002255de,"../../modules/pacing/pacing_controller.cc",0x5e0,
               "bwe:pacer_updated pacing_kbps=",uVar6," padding_budget_kbps=",uVar7);
  return;
}


// ===== 008eaa88  FUN_008eaa88 =====

void FUN_008eaa88(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return;
  }
  lVar3 = FUN_008ef548(param_1 + 0x168);
  if (*(char *)(param_1 + 0x331) == '\x01') {
    iVar2 = FUN_008ef53c(param_1 + 0x168);
    lVar8 = 0x7fffffffffffffff;
    if ((lVar3 == 0x7fffffffffffffff) ||
       (lVar5 = *(long *)(param_1 + 0x18) * (long)iVar2, lVar5 == 0x7fffffffffffffff))
    goto LAB_008eab1c;
    if (lVar3 == -0x8000000000000000) {
      return;
    }
    if (lVar5 == -0x8000000000000000) {
      return;
    }
    lVar3 = lVar5 + lVar3;
  }
  lVar8 = lVar3;
  if (lVar3 < 1) {
    return;
  }
LAB_008eab1c:
  FUN_008eeeb0(param_1 + 0x168,param_2);
  lVar5 = FUN_008ef7a0(param_1 + 0x168);
  lVar6 = *(long *)(param_1 + 0x328);
  lVar3 = lVar6 - lVar5;
  if (lVar3 < 0x3e9) {
    lVar3 = 1000;
  }
  lVar1 = 1000;
  if (lVar6 != -0x8000000000000000 && lVar5 != 0x7fffffffffffffff) {
    lVar1 = lVar3;
  }
  lVar3 = 0x7fffffffffffffff;
  if (lVar5 != -0x8000000000000000) {
    lVar3 = lVar1;
  }
  lVar5 = 0x7fffffffffffffff;
  if (lVar6 != 0x7fffffffffffffff) {
    lVar5 = lVar3;
  }
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = (lVar8 * 8000000) / lVar5;
  }
  if (*(long *)(param_1 + 0x48) < lVar3) {
    *(long *)(param_1 + 0x50) = lVar3;
    uVar4 = FUN_0044075c();
    if ((uVar4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x48);
      if ((long)uVar4 < 0) {
        uVar7 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
      }
      else {
        uVar7 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          uVar7 = uVar7 + 1;
        }
      }
      FUN_00623bb0(&DAT_001f6276,"../../modules/pacing/pacing_controller.cc",0x15f0,
                   "bwe:large_pacing_queue pacing_rate_kbps=",uVar7);
      return;
    }
  }
  return;
}


// ===== 008eac40  FUN_008eac40 =====

void FUN_008eac40(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    if ((((*(char *)(param_1 + 0x15) == '\x01') && (*(long *)(param_2 + 0x78) == 1)) &&
        (*(char *)(param_2 + 0xb9) == '\x01')) &&
       ((*(char *)(param_2 + 0xb8) == '\x01' &&
        (uVar1 = FUN_008efd34(param_1 + 0x168,*(undefined4 *)(param_2 + 0xc)), (uVar1 & 1) == 0))))
    {
      FUN_008ef7f4(param_1 + 0x168,*(undefined4 *)(param_2 + 0xc));
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                        (*(long **)(param_1 + 8),*(undefined4 *)(param_2 + 0xc));
      if ((uVar1 >> 0x20 & 1) != 0) {
        FUN_008ef7f4(param_1 + 0x168,uVar1);
      }
    }
    FUN_008ecf34(param_1 + 0x60,
                 *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) +
                 (ulong)*(byte *)(param_2 + 2));
    lVar2 = FUN_008ea334(param_1);
    uVar1 = FUN_008ef554(param_1 + 0x168);
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_008eae24(param_1);
      lVar4 = lVar3;
      if (lVar2 <= lVar3) {
        lVar4 = lVar2;
      }
      if (0xfffffffffffffffd < lVar3 + 0x7fffffffffffffffU) {
        lVar4 = lVar2;
      }
      lVar4 = FUN_008ea5bc(param_1,lVar4);
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x38);
      auVar9._8_8_ = 0x8000000000000000;
      auVar9._0_8_ = 0x8000000000000000;
      auVar11 = NEON_cmeq(auVar8,auVar9,8);
      auVar5._8_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x58) * lVar4) / 8000000;
      auVar5._0_8_ = (long)(&uleb128_003d0900 + *(long *)(param_1 + 0x50) * lVar4) / 8000000;
      auVar9 = NEON_cmgt(auVar8,auVar5,8);
      auVar9 = NEON_bif(auVar5,auVar8,auVar9,1);
      auVar6._0_8_ = auVar8._0_8_ - auVar9._0_8_;
      auVar6._8_8_ = auVar8._8_8_ - auVar9._8_8_;
      auVar7._0_8_ = auVar8._0_8_ + -0x7fffffffffffffff;
      auVar7._8_8_ = auVar8._8_8_ + -0x7fffffffffffffff;
      auVar10._8_8_ = 2;
      auVar10._0_8_ = 2;
      auVar8._8_8_ = 0x8000000000000000;
      auVar8._0_8_ = 0x8000000000000000;
      auVar9 = NEON_bit(auVar6,auVar8,auVar11,1);
      auVar8 = NEON_cmhi(auVar10,auVar7,8);
      auVar11._8_8_ = 0x7ff8000000000000;
      auVar11._0_8_ = 0x7ff8000000000000;
      auVar9 = NEON_bit(auVar9,auVar11,auVar8,1);
      *(long *)(param_1 + 0x40) = auVar9._8_8_;
      *(long *)(param_1 + 0x38) = auVar9._0_8_;
    }
    FUN_008ee778(param_1 + 0x168,lVar2,param_2);
    *(undefined1 *)(param_1 + 0x160) = 1;
    FUN_008eaa88(param_1,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/pacing/pacing_controller.cc",0xc3,"packet->packet_type()",
               &DAT_001f5fa0);
}


