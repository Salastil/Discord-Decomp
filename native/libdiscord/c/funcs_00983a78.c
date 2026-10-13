// ===== 00983a78  FUN_00983a78 =====

void FUN_00983a78(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  uVar1 = FUN_009861a4(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) != 0) {
    FUN_0098622c(*(undefined8 *)(param_1 + 0x30));
    plVar2 = *(long **)(param_1 + 0x30);
    local_28 = plVar2;
    if (plVar2 == (long *)0x0) {
      FUN_00983c1c(param_1,&local_28);
    }
    else {
      (**(code **)*plVar2)(plVar2);
      FUN_00983c1c(param_1,&local_28);
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  uVar1 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
  if ((uVar1 & 1) != 0) {
    FUN_009868b0(*(undefined8 *)(param_1 + 0x38));
    plVar2 = *(long **)(param_1 + 0x38);
    local_30 = plVar2;
    if (plVar2 == (long *)0x0) {
      FUN_00983c1c(param_1,&local_30);
      plVar2 = *(long **)(param_1 + 0x40);
      goto joined_r0x00983b3c;
    }
    (**(code **)*plVar2)(plVar2);
    FUN_00983c1c(param_1,&local_30);
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar2 = *(long **)(param_1 + 0x40);
joined_r0x00983b3c:
  if (plVar2 != (long *)0x0) {
    local_38 = plVar2;
    (**(code **)*plVar2)(plVar2);
    FUN_00983c1c(param_1,&local_38);
    (**(code **)(*plVar2 + 8))(plVar2);
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 8))();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar1 = FUN_009884d0(*(undefined8 *)(param_1 + 0x48));
  if ((uVar1 & 1) != 0) {
    FUN_0098855c(*(undefined8 *)(param_1 + 0x48));
    plVar2 = *(long **)(param_1 + 0x48);
    local_40 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)*plVar2)(plVar2);
      FUN_00983c1c(param_1,&local_40);
                    /* WARNING: Could not recover jumptable at 0x00983be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
    FUN_00983c1c(param_1,&local_40);
  }
  return;
}


// ===== 00983c1c  FUN_00983c1c =====

void FUN_00983c1c(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *local_18;
  
  puVar3 = *(undefined8 **)(param_1 + 0x9b8);
  puVar1 = (undefined8 *)(param_1 + 0x9b8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
    do {
      while ((ulong)puVar5[4] <= *param_2) {
        if (*param_2 <= (ulong)puVar5[4]) {
          puVar7 = (undefined8 *)puVar5[1];
          puVar1 = puVar5;
          goto joined_r0x00983c94;
        }
        puVar5 = (undefined8 *)puVar5[1];
        if (puVar5 == (undefined8 *)0x0) goto LAB_00983c74;
      }
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
LAB_00983c74:
  puVar7 = *(undefined8 **)(param_1 + 0x9c0);
joined_r0x00983c94:
  puVar5 = puVar1;
  if (puVar7 == (undefined8 *)0x0) {
    do {
      puVar6 = (undefined8 *)puVar5[2];
      bVar2 = puVar5 != (undefined8 *)*puVar6;
      puVar5 = puVar6;
    } while (bVar2);
  }
  else {
    do {
      puVar6 = puVar7;
      puVar7 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*(void **)(param_1 + 0x9b0) == puVar1) {
    *(undefined8 **)(param_1 + 0x9b0) = puVar6;
  }
  *(long *)(param_1 + 0x9c0) = *(long *)(param_1 + 0x9c0) + -1;
  FUN_005d5d48(puVar3,puVar1);
  if (puVar1 + 4 != (long *)0x0) {
    plVar4 = (long *)puVar1[4];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    operator_delete(puVar1);
    local_18 = (long *)*param_2;
    plVar4 = *(long **)(param_1 + 0x60);
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)();
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00983d68  FUN_00983d68 =====

void FUN_00983d68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x10);
  *param_1 = puVar3;
  param_1[2] = puVar3 + 2;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    if (puVar3 + 1 != (undefined8 *)0x0) {
      puVar3[1] = uVar2;
      param_1[1] = puVar3 + 2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00983dd4  FUN_00983dd4 =====

void FUN_00983dd4(long param_1)

{
  double dVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_790 [272];
  undefined1 auStack_680 [208];
  undefined1 auStack_5b0 [1376];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x9a8) & 1) == 0) {
    if (param_1 == -0x268) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00979c88(param_1 + 0x268);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x9a8) = 1;
  }
  else {
    FUN_00979cc8(param_1 + 0x268);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    local_790[0] = 0;
    local_50 = '\0';
    if (*(char *)(param_1 + 0x9a8) != '\x01') goto LAB_00983e64;
  }
  local_50 = 0;
  local_790[0] = 0;
  FUN_00979c88(local_790,param_1 + 0x268);
  local_50 = '\x01';
LAB_00983e64:
  FUN_00985bb8(uVar8,local_790);
  if (local_50 == '\x01') {
    FUN_008a03f4(auStack_5b0);
    FUN_0084966c(auStack_680);
    FUN_007b9754(local_790);
  }
  if ((*(byte *)(param_1 + 0x9a8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  uVar8 = FUN_00979d68(param_1 + 0x268);
  FUN_00983f84(uVar9,uVar8,param_1 + 0xb0);
  bVar4 = *(char *)(param_1 + 0x9a8) != '\x01';
  if (bVar4) {
    dVar12 = -NAN;
  }
  else {
    lVar5 = FUN_00979d68(param_1 + 0x268);
    dVar12 = (double)NEON_ucvtf((ulong)*(uint *)(lVar5 + 0x14));
  }
  bVar4 = !bVar4;
  pdVar6 = (double *)FUN_0097cbb0(param_1 + 0x80);
  dVar10 = *pdVar6;
  dVar7 = pdVar6[1];
  bVar3 = ((SUB84(dVar7,0) ^ 0xffffffff) & 1) == 0;
  dVar11 = dVar12;
  if ((!bVar4 || dVar10 <= dVar12) && bVar3) {
    dVar11 = dVar10;
  }
  dVar1 = (double)((ulong)dVar7 & 0xffffffffffffff00 | (ulong)bVar4);
  if ((!bVar4 || dVar10 <= dVar12) && bVar3) {
    dVar1 = dVar7;
  }
  FUN_0098625c(*(undefined8 *)(param_1 + 0x30),dVar11,dVar1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00983f84  FUN_00983f84 =====

void FUN_00983f84(undefined8 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *local_48;
  ulong local_40;
  undefined8 local_38;
  
  *(undefined1 *)(param_1 + 0x4e) = 0;
  local_48 = (ulong *)0x0;
  local_40 = 0;
  local_38 = 0;
  if (*param_2 == 2) {
    lVar3 = FUN_007b8ca4(param_2);
    FUN_008822e8(&local_48,*(undefined1 *)(lVar3 + 10),0);
    if ((((local_40 != 0) &&
         (*local_48 = *local_48 & 0xfffffffffffffffe | (ulong)*(byte *)(param_2 + 0x8a),
         1 < local_40)) &&
        ((*local_48 = *local_48 & 0xfffffffffffffffc |
                      *local_48 & 1 | ((ulong)*(byte *)(param_2 + 0xb2) & 1) << 1, 2 < local_40 &&
         ((*local_48 = *local_48 & 0xfffffffffffffff8 |
                       *local_48 & 3 | ((ulong)*(byte *)(param_2 + 0xda) & 1) << 2, 3 < local_40 &&
          (*local_48 = *local_48 & 0xfffffffffffffff0 |
                       *local_48 & 7 | ((ulong)*(byte *)(param_2 + 0x102) & 1) << 3, 4 < local_40)))
         ))) && (*local_48 = *local_48 & 0xffffffffffffffe0 |
                             *local_48 & 0xf | ((ulong)*(byte *)(param_2 + 0x12a) & 1) << 4,
                5 < local_40)) {
LAB_00984274:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x984278);
      (*pcVar1)();
    }
  }
  else {
    FUN_008822e8(&local_48,(char)param_2[8],0);
    if ((((local_40 != 0) &&
         (*local_48 = *local_48 & 0xfffffffffffffffe | (ulong)*(byte *)(param_2 + 0x12),
         1 < local_40)) &&
        (*local_48 = *local_48 & 0xfffffffffffffffc |
                     *local_48 & 1 | ((ulong)*(byte *)(param_2 + 0x3a) & 1) << 1, 2 < local_40)) &&
       (*local_48 = *local_48 & 0xfffffffffffffff8 |
                    *local_48 & 3 | ((ulong)*(byte *)(param_2 + 0x62) & 1) << 2, 3 < local_40))
    goto LAB_00984274;
  }
  if ((*(uint *)(param_1 + 0x4d) == (uint)*(ushort *)(param_2 + 1)) &&
     (*(uint *)((long)param_1 + 0x26c) == (uint)*(ushort *)((long)param_2 + 6))) {
    bVar2 = false;
  }
  else {
    bVar2 = *param_3 == *(int *)(param_1 + 0x4c);
  }
  if (local_40 == param_1[0x4a]) {
    if (local_40 == 0) {
      if (!bVar2) goto LAB_009841f8;
    }
    else if ((*local_48 ^ *(ulong *)param_1[0x49]) << (-local_40 & 0x3f) == 0 && !bVar2)
    goto LAB_009841f8;
  }
  *(undefined1 *)(param_1 + 0x4e) = 1;
  uVar4 = FUN_0098681c(*param_1);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/adaptation/video_stream_encoder_resource_manager.cc",
                   0x661,"Resetting initial_framedrop_ due to changed stream parameters");
    }
    *(undefined4 *)(param_1 + 0x46) = 0;
    if (*(char *)(param_1 + 0x47) == '\x01') {
      uVar4 = FUN_0097ea38(param_2);
      if ((*(byte *)(param_1 + 0x47) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (((uVar4 >> 0x20 & 1) != 0) && (*(uint *)((long)param_1 + 0x234) < (uint)uVar4)) {
        *(undefined1 *)((long)param_1 + 0x23c) = 1;
      }
    }
  }
LAB_009841f8:
  param_1[0x4c] = *(undefined8 *)param_3;
  FUN_009858ac(param_1 + 0x49,&local_48);
  *(uint *)(param_1 + 0x4d) = (uint)*(ushort *)(param_2 + 1);
  *(uint *)((long)param_1 + 0x26c) = (uint)*(ushort *)((long)param_2 + 6);
  uVar5 = FUN_0097ea38(param_2);
  *(int *)((long)param_1 + 0x234) = (int)uVar5;
  *(char *)(param_1 + 0x47) = (char)((ulong)uVar5 >> 0x20);
  if (local_48 != (ulong *)0x0) {
    operator_delete(local_48);
  }
  return;
}


// ===== 00984278  FUN_00984278 =====

void FUN_00984278(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    *(int *)(param_1 + 0xec) = (int)param_2;
    FUN_00985bc4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xec));
    FUN_00985ec8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xec));
  }
  lVar2 = *(long *)(param_1 + 0xe0);
  uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))();
  *(long *)(lVar2 + 0x220) = param_2;
  *(undefined8 *)(lVar2 + 0x228) = uVar1;
  return;
}


// ===== 009842ec  FUN_009842ec =====

void FUN_009842ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    *(int *)(param_1 + 0xec) = (int)param_2;
    FUN_00985bc4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xec));
    FUN_00985ec8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xec));
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  FUN_009843b8(uVar3,param_2,uVar2);
  return;
}


// ===== 009843b8  FUN_009843b8 =====

void FUN_009843b8(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong extraout_x1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((((0 < (long)param_1[0x44]) && ((*(byte *)(param_1 + 0x43) & 1) == 0)) &&
      (uVar1 = FUN_0098681c(*param_1), (uVar1 & 1) != 0)) &&
     ((uVar1 = FUN_009879f0(param_1 + 1), (uVar1 >> 0x20 & 1) != 0 &&
      (FUN_00987a5c(param_1 + 1), (extraout_x1 & 1) != 0)))) {
    lVar2 = param_1[0x45];
    uVar1 = FUN_009879f0(param_1 + 1);
    if ((uVar1 >> 0x20 & 1) == 0) {
LAB_009844ac:
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    if (param_3 - lVar2 < (long)(int)uVar1) {
      auVar3 = FUN_00987a5c(param_1 + 1);
      if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_009844ac;
      if (param_2 < (long)(auVar3._0_8_ * (double)(long)param_1[0x44])) {
        uVar1 = FUN_00417e08();
        if ((uVar1 & 1) == 0) {
          FUN_00623bb0(&DAT_002255de,
                       "../../video/adaptation/video_stream_encoder_resource_manager.cc",0x581,
                       "Reset initial_framedrop_. Start bitrate: ",param_1[0x44],
                       ", target bitrate: ",param_2);
        }
        *(undefined4 *)(param_1 + 0x46) = 0;
        *(undefined1 *)(param_1 + 0x43) = 1;
      }
    }
  }
  return;
}


// ===== 009844b0  FUN_009844b0 =====

void FUN_009844b0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    memcpy((void *)(param_1 + 0x100),(void *)(param_2 + 8),0x160);
  }
  else {
    if (param_1 == -0xf8) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined **)(param_1 + 0xf8) = PTR_DAT_00d52958 + 0x10;
    memcpy((void *)(param_1 + 0x100),(void *)(param_2 + 8),0x160);
    *(undefined1 *)(param_1 + 0x260) = 1;
  }
  *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x240) = *(undefined8 *)(param_2 + 0x160);
  return;
}


// ===== 00984548  FUN_00984548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00984548(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long *local_8;
  
  uStack_28 = _UNK_0022a7a8;
  uStack_30 = _DAT_0022a7a0;
  uStack_38 = _UNK_0022a798;
  local_40 = _DAT_0022a790;
  *(int *)(*(long *)(param_1 + 0xe0) + 0x230) = *(int *)(*(long *)(param_1 + 0xe0) + 0x230) + 1;
  uStack_78 = _UNK_0022a758;
  local_80 = _DAT_0022a750;
  uStack_68 = _UNK_0022a768;
  uStack_70 = _DAT_0022a760;
  uStack_58 = _UNK_0022a778;
  local_60 = _DAT_0022a770;
  uStack_48 = _UNK_0022a788;
  uStack_50 = _DAT_0022a780;
  FUN_0097e630(&local_80,*(undefined8 *)(param_1 + 0x68));
  iVar1 = FUN_0097cd98(&local_80);
  if (iVar1 == 0) {
    local_8 = *(long **)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if (local_8 != (long *)0x0) {
      (**(code **)*local_8)();
    }
    FUN_0097e840(uVar2,&local_80,&local_8);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  return;
}


// ===== 00984600  FUN_00984600 =====

void FUN_00984600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x9a8) & 1) != 0) {
    lVar1 = FUN_00979d54(param_1 + 0x268);
    if ((*(byte *)(lVar1 + 0x108) & 1) == 0) {
      FUN_009862fc(*(undefined8 *)(param_1 + 0x30));
    }
    FUN_009862e4(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00984674  FUN_00984674 =====

void FUN_00984674(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x9a8) & 1) != 0) {
    lVar1 = FUN_00979d54(param_1 + 0x268);
    if ((*(byte *)(lVar1 + 0x108) & 1) == 0) {
      FUN_009862fc(*(undefined8 *)(param_1 + 0x30));
    }
    FUN_009862f0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_2 + 0x98),param_3,
                 *(long *)(param_2 + 0x10) * 1000,param_4);
    FUN_009868e0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    FUN_009885b8(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 0098472c  FUN_0098472c =====

void FUN_0098472c(long param_1)

{
  FUN_009868fc(*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 00984738  FUN_00984738 =====

bool FUN_00984738(long param_1)

{
  return *(int *)(*(long *)(param_1 + 0xe0) + 0x230) < 4;
}


// ===== 00984750  FUN_00984750 =====

ulong FUN_00984750(long param_1)

{
  return *(ulong *)(*(long *)(param_1 + 0xe0) + 0x234) & 0xffffffffff;
}


// ===== 00984768  FUN_00984768 =====

ulong FUN_00984768(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(*(long *)(param_1 + 0xe0) + 0x23c) == '\x01') &&
     (uVar1 = *(ulong *)(*(long *)(param_1 + 0xe0) + 0x240), 0 < (long)uVar1)) {
    return uVar1 & 0xffffffff | 0x100000000;
  }
  return 0;
}


// ===== 0098479c  FUN_0098479c =====

void FUN_0098479c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  *(undefined4 *)(lVar1 + 0x230) = 4;
  *(undefined1 *)(lVar1 + 0x23c) = 0;
  return;
}


// ===== 009847b4  FUN_009847b4 =====

void FUN_009847b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *local_48;
  long *local_28;
  
  uVar1 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
  if ((param_3 & 1) == 0) {
    if ((uVar1 & 1) == 0) goto LAB_00984978;
    FUN_009868b0(*(undefined8 *)(param_1 + 0x38));
    plVar4 = *(long **)(param_1 + 0x38);
    local_48 = plVar4;
    if (plVar4 == (long *)0x0) {
      FUN_00983c1c(param_1,&local_48);
      goto LAB_00984978;
    }
    (**(code **)*plVar4)(plVar4);
    FUN_00983c1c(param_1,&local_48);
  }
  else {
    if ((uVar1 & 1) != 0) {
      FUN_009868d4(*(undefined8 *)(param_1 + 0x38),param_2);
      goto LAB_00984978;
    }
    FUN_00986830(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x9b8);
    if (*(undefined8 **)(param_1 + 0x9b8) == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(param_1 + 0x9b8);
      puVar7 = (undefined8 *)(param_1 + 0x9b8);
    }
    else {
      do {
        while (puVar6 = puVar3, (long *)puVar6[4] <= plVar4) {
          if (plVar4 <= (long *)puVar6[4]) goto LAB_00984910;
          puVar3 = (undefined8 *)puVar6[1];
          if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
            puVar7 = puVar6 + 1;
            goto LAB_009848a4;
          }
        }
        puVar3 = (undefined8 *)*puVar6;
        puVar7 = puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
LAB_009848a4:
    puVar3 = (undefined8 *)operator_new(0x30);
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 + 4 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3[4] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    *(undefined4 *)(puVar3 + 5) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar6;
    *puVar7 = puVar3;
    if (**(long **)(param_1 + 0x9b0) != 0) {
      *(long *)(param_1 + 0x9b0) = **(long **)(param_1 + 0x9b0);
      puVar3 = (undefined8 *)*puVar7;
    }
    FUN_005d5b94(*(undefined8 *)(param_1 + 0x9b8),puVar3);
    *(long *)(param_1 + 0x9c0) = *(long *)(param_1 + 0x9c0) + 1;
LAB_00984910:
    plVar5 = *(long **)(param_1 + 0x60);
    local_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    if (plVar4 == (long *)0x0) goto LAB_00984978;
  }
  (**(code **)(*plVar4 + 8))(plVar4);
LAB_00984978:
  puVar3 = *(undefined8 **)(param_1 + 0xe0);
  uVar1 = FUN_0098681c(*puVar3);
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
    *(undefined1 *)((long)puVar3 + 0x23c) = 0;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(puVar3 + 0x46) = uVar2;
  return;
}


// ===== 009849cc  FUN_009849cc =====

void FUN_009849cc(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *local_58;
  long *local_38;
  
  uVar1 = FUN_009884d0(*(undefined8 *)(param_1 + 0x48));
  if ((param_2 & 1) == 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0098855c(*(undefined8 *)(param_1 + 0x48));
      plVar3 = *(long **)(param_1 + 0x48);
      local_58 = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)(plVar3);
        FUN_00983c1c(param_1,&local_58);
                    /* WARNING: Could not recover jumptable at 0x00984b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      FUN_00983c1c(param_1,&local_58);
    }
  }
  else if ((uVar1 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x9b8);
    if (*(undefined8 **)(param_1 + 0x9b8) == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(param_1 + 0x9b8);
      puVar6 = (undefined8 *)(param_1 + 0x9b8);
    }
    else {
      do {
        while (puVar5 = puVar2, (long *)puVar5[4] <= plVar3) {
          if (plVar3 <= (long *)puVar5[4]) goto LAB_00984ad4;
          puVar2 = (undefined8 *)puVar5[1];
          if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
            puVar6 = puVar5 + 1;
            goto LAB_00984a68;
          }
        }
        puVar2 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
LAB_00984a68:
    puVar2 = (undefined8 *)operator_new(0x30);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 + 4 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2[4] = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
    }
    *(undefined4 *)(puVar2 + 5) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar5;
    *puVar6 = puVar2;
    if (**(long **)(param_1 + 0x9b0) != 0) {
      *(long *)(param_1 + 0x9b0) = **(long **)(param_1 + 0x9b0);
      puVar2 = (undefined8 *)*puVar6;
    }
    FUN_005d5b94(*(undefined8 *)(param_1 + 0x9b8),puVar2);
    *(long *)(param_1 + 0x9c0) = *(long *)(param_1 + 0x9c0) + 1;
LAB_00984ad4:
    plVar4 = *(long **)(param_1 + 0x60);
    local_38 = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    FUN_009884e4(*(undefined8 *)(param_1 + 0x48),param_3,param_4);
  }
  return;
}


// ===== 00984be0  FUN_00984be0 =====

void FUN_00984be0(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b9498(&local_80);
  if ((((*(uint *)(param_1 + 0x78) & 0xfffffffd) == 1) &&
      ((((ulong)puStack_78 & 1) != 0 ||
       ((*(char *)(param_1 + 0x9a8) == '\x01' &&
        (lVar6 = FUN_00979d5c(param_1 + 0x268), *(char *)(lVar6 + 0xc9) == '\x01')))))) &&
     ((*(char *)(param_2 + 0xf1) != '\x01' || ((*(byte *)(param_2 + 0xf0) & 1) != 0)))) {
    uVar4 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
    if ((uVar4 & 1) != 0) goto LAB_00984ca8;
    uVar10 = 0xaaaaaa00;
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      uVar5 = FUN_00979d74(param_1 + 0x268);
      auVar12 = FUN_00987e34(uVar5,*(undefined8 *)(param_1 + 0x10));
      puVar8 = auVar12._0_8_;
      uVar10 = auVar12._8_4_ & 0xff | 0xaaaaaa00;
    }
    else {
      puVar8 = (undefined1 *)0xaaaaaaaaaaaaaa00;
    }
    if ((uVar10 & 1) == 0) {
      puVar8 = local_80;
      uVar10 = (uint)puStack_78;
    }
  }
  else {
    puVar8 = (undefined1 *)0x0;
    uVar10 = 0;
  }
  FUN_009847b4(param_1,puVar8,uVar10);
LAB_00984ca8:
  if ((*(int *)(param_1 + 0x78) == 3) &&
     (uVar4 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38)), (uVar4 & 1) != 0)) {
    uVar2 = FUN_00979d74(param_1 + 0x268);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(auStack_50,*(long **)(param_1 + 0x58));
    uVar4 = FUN_0097f02c(auStack_50);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(auStack_70,*(long **)(param_1 + 0x58));
    uVar7 = FUN_0097effc(auStack_70);
    uVar3 = 0x6300;
    if ((uVar7 & 0x100000000) != 0) {
      uVar3 = (undefined4)uVar7;
    }
    if ((uVar4 & 0x100000000) != 0) {
      uVar3 = (undefined4)uVar4;
    }
    auVar11 = FUN_00980688(param_1 + 0xb8,uVar2,uVar3);
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      FUN_009868d4(*(undefined8 *)(param_1 + 0x38),auVar11._0_8_);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x78) & 0xfffffffd;
  uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffe;
  uVar4 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
  if (((uVar4 & 1) == 0) &&
     (uVar4 = FUN_009884d0(*(undefined8 *)(param_1 + 0x48)), (uVar4 & 1) == 0)) {
    lVar9 = 0;
    lVar6 = 0x100;
    if (uVar1 != 2) {
      lVar6 = 0;
    }
    if (uVar10 == 1) {
      lVar6 = lVar6 + 1;
    }
  }
  else {
    lVar6 = 0x100;
    if (uVar1 != 2) {
      lVar6 = 0;
    }
    lVar9 = lVar6;
    if (uVar10 == 1) {
      lVar6 = lVar6 + 1;
      lVar9 = lVar6;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x50))(*(long **)(param_1 + 0x70),lVar6,lVar9);
  FUN_007b94a8(&local_80);
  return;
}


// ===== 00984dec  FUN_00984dec =====

void FUN_00984dec(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  
  if ((((*(uint *)(param_1 + 0x78) & 0xfffffffd) == 1) && (*(char *)(param_1 + 0x9a8) == '\x01')) &&
     (lVar4 = FUN_00979d5c(param_1 + 0x268), *(char *)(lVar4 + 0xc9) == '\x01')) {
    bVar7 = *(byte *)(param_2 + 0xf1) & (*(byte *)(param_2 + 0xf0) ^ 1);
  }
  else {
    bVar7 = 0;
  }
  uVar3 = FUN_00979d74(param_1 + 0x268);
  FUN_009849cc(param_1,bVar7 & 1,param_2 + 0xb0,uVar3);
  uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffd;
  uVar2 = *(uint *)(param_1 + 0x78) & 0xfffffffe;
  uVar5 = FUN_0098681c(*(undefined8 *)(param_1 + 0x38));
  if (((uVar5 & 1) == 0) &&
     (uVar5 = FUN_009884d0(*(undefined8 *)(param_1 + 0x48)), (uVar5 & 1) == 0)) {
    lVar4 = 0x100;
    if (uVar2 != 2) {
      lVar4 = 0;
    }
    lVar6 = 0;
    if (uVar1 == 1) {
      lVar4 = lVar4 + 1;
    }
  }
  else {
    lVar4 = 0x100;
    if (uVar2 != 2) {
      lVar4 = 0;
    }
    lVar6 = lVar4;
    if (uVar1 == 1) {
      lVar4 = lVar4 + 1;
      lVar6 = lVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00984ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x50))(*(long **)(param_1 + 0x70),lVar4,lVar6);
  return;
}


// ===== 00984ee4  FUN_00984ee4 =====

void FUN_00984ee4(long param_1,undefined8 *param_2,int *param_3,long *param_4)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)param_3;
  if ((*param_4 == 0) && (*param_3 + param_3[1] == 0)) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x48))();
  }
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_68 = param_2[5];
  local_70 = param_2[4];
  FUN_0097cc74(&local_60,&local_90,*(undefined4 *)(param_1 + 0x78));
  bVar3 = *(char *)(param_1 + 0x9a8) != '\x01';
  *(undefined8 *)(param_1 + 0x88) = uStack_58;
  *(undefined8 *)(param_1 + 0x80) = local_60;
  *(undefined8 *)(param_1 + 0x98) = uStack_48;
  *(undefined8 *)(param_1 + 0x90) = uStack_50;
  *(undefined8 *)(param_1 + 0xa8) = uStack_38;
  *(undefined8 *)(param_1 + 0xa0) = local_40;
  if (bVar3) {
    dVar9 = -NAN;
  }
  else {
    lVar4 = FUN_00979d68(param_1 + 0x268);
    dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(lVar4 + 0x14));
  }
  bVar3 = !bVar3;
  pdVar5 = (double *)FUN_0097cbb0(param_1 + 0x80);
  dVar7 = *pdVar5;
  dVar6 = pdVar5[1];
  bVar2 = ((SUB84(dVar6,0) ^ 0xffffffff) & 1) == 0;
  dVar8 = dVar9;
  if ((!bVar3 || dVar7 <= dVar9) && bVar2) {
    dVar8 = dVar7;
  }
  dVar1 = (double)((ulong)dVar6 & 0xffffffffffffff00 | (ulong)bVar3);
  if ((!bVar3 || dVar7 <= dVar9) && bVar2) {
    dVar1 = dVar6;
  }
  FUN_0098625c(*(undefined8 *)(param_1 + 0x30),dVar8,dVar1);
  return;
}


// ===== 00984fe8  FUN_00984fe8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00984fe8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *******local_90 [2];
  char cStack_79;
  undefined8 *******local_78;
  undefined8 *******local_70;
  long local_68;
  
  plVar14 = (long *)*param_2;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00985208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x70) + 0x48))();
    return;
  }
  local_70 = (undefined8 *******)0x0;
  local_68 = 0;
  plVar15 = (long *)*param_3;
  local_78 = &local_70;
  if (plVar15 == param_3 + 1) {
LAB_009851c4:
    (**(code **)*plVar14)(plVar14);
    bVar4 = false;
  }
  else {
    do {
      plVar14 = (long *)plVar15[4];
      if (plVar14 != (long *)0x0) {
        (**(code **)*plVar14)(plVar14);
      }
      plVar13 = *(long **)(param_1 + 0x9b8);
      plVar10 = (long *)(param_1 + 0x9b8);
      if (plVar13 != (long *)0x0) {
        do {
          while (plVar14 < (long *)plVar13[4]) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_0098509c;
          }
          plVar10 = plVar13;
          if (plVar14 <= (long *)plVar13[4]) goto LAB_009850a0;
          plVar13 = (long *)plVar13[1];
        } while (plVar13 != (long *)0x0);
LAB_0098509c:
        plVar10 = (long *)(param_1 + 0x9b8);
      }
LAB_009850a0:
      iVar1 = (int)plVar10[5];
      pppppppuVar9 = &local_70;
      pppppppuVar8 = local_70;
      while (pppppppuVar12 = pppppppuVar9, pppppppuVar8 != (undefined8 *******)0x0) {
        while (pppppppuVar5 = pppppppuVar8, *(int *)((long)pppppppuVar5 + 0x1c) <= iVar1) {
          if (iVar1 <= *(int *)((long)pppppppuVar5 + 0x1c)) {
            bVar4 = false;
            goto joined_r0x009851b0;
          }
          pppppppuVar8 = (undefined8 *******)pppppppuVar5[1];
          if ((undefined8 *******)pppppppuVar5[1] == (undefined8 *******)0x0) {
            pppppppuVar9 = pppppppuVar5 + 1;
            pppppppuVar12 = pppppppuVar5;
            goto LAB_009850e8;
          }
        }
        pppppppuVar9 = pppppppuVar5;
        pppppppuVar8 = (undefined8 *******)*pppppppuVar5;
      }
LAB_009850e8:
      pppppppuVar5 = (undefined8 *******)operator_new(0x28);
      if (pppppppuVar5 == (undefined8 *******)0x0) goto LAB_0098544c;
      *(int *)((long)pppppppuVar5 + 0x1c) = iVar1;
      ppppppuVar11 = (undefined8 ******)plVar15[5];
      *pppppppuVar5 = (undefined8 ******)0x0;
      pppppppuVar5[1] = (undefined8 ******)0x0;
      pppppppuVar5[2] = pppppppuVar12;
      pppppppuVar5[4] = ppppppuVar11;
      *pppppppuVar9 = pppppppuVar5;
      pppppppuVar8 = pppppppuVar5;
      if ((undefined8 *******)*local_78 != (undefined8 *******)0x0) {
        pppppppuVar8 = (undefined8 *******)*pppppppuVar9;
        local_78 = (undefined8 *******)*local_78;
      }
      FUN_005d5b94(local_70,pppppppuVar8);
      bVar4 = true;
      local_68 = local_68 + 1;
joined_r0x009851b0:
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      if ((!bVar4) &&
         (*(int *)(pppppppuVar5 + 4) + *(int *)((long)pppppppuVar5 + 0x24) <
          (int)plVar15[5] + *(int *)((long)plVar15 + 0x2c))) {
        pppppppuVar5[4] = (undefined8 ******)plVar15[5];
      }
      plVar14 = (long *)plVar15[1];
      plVar10 = plVar15;
      if ((long *)plVar15[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar10[2];
          bVar4 = plVar10 != (long *)*plVar15;
          plVar10 = plVar15;
        } while (bVar4);
      }
      else {
        do {
          plVar15 = plVar14;
          plVar14 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
    } while (plVar15 != param_3 + 1);
    plVar14 = (long *)*param_2;
    if (plVar14 != (long *)0x0) goto LAB_009851c4;
    bVar4 = true;
  }
  for (plVar15 = *(long **)(param_1 + 0x9b8); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
    while ((long *)plVar15[4] <= plVar14) {
      if (plVar14 <= (long *)plVar15[4]) {
        uVar2 = (undefined4)plVar15[5];
        goto joined_r0x00985314;
      }
      plVar15 = (long *)plVar15[1];
      if (plVar15 == (long *)0x0) goto LAB_0098521c;
    }
  }
LAB_0098521c:
  uVar2 = *(undefined4 *)(param_1 + 0x9e0);
joined_r0x00985314:
  if (!bVar4) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  plVar14 = *(long **)(param_1 + 0x70);
  pppppppuVar9 = &local_70;
  pppppppuVar8 = local_70;
  while (pppppppuVar12 = pppppppuVar9, pppppppuVar5 = &local_70,
        pppppppuVar8 != (undefined8 *******)0x0) {
    while (pppppppuVar9 = pppppppuVar8, *(int *)((long)pppppppuVar9 + 0x1c) < 2) {
      pppppppuVar8 = pppppppuVar9;
      pppppppuVar12 = local_70;
      if (*(int *)((long)pppppppuVar9 + 0x1c) == 1) goto joined_r0x00985324;
      pppppppuVar8 = (undefined8 *******)pppppppuVar9[1];
      if ((undefined8 *******)pppppppuVar9[1] == (undefined8 *******)0x0) {
        pppppppuVar12 = pppppppuVar9 + 1;
        goto LAB_009852a8;
      }
    }
    pppppppuVar8 = (undefined8 *******)*pppppppuVar9;
  }
LAB_009852a8:
  pppppppuVar8 = (undefined8 *******)operator_new(0x28);
  if (pppppppuVar8 != (undefined8 *******)0x0) {
    *(undefined4 *)((long)pppppppuVar8 + 0x24) = 0;
    uVar3 = DAT_001f58a0;
    *pppppppuVar8 = (undefined8 ******)0x0;
    pppppppuVar8[1] = (undefined8 ******)0x0;
    pppppppuVar8[2] = pppppppuVar9;
    *(undefined8 *)((long)pppppppuVar8 + 0x1c) = uVar3;
    *pppppppuVar12 = pppppppuVar8;
    pppppppuVar9 = pppppppuVar8;
    if ((undefined8 *******)*local_78 != (undefined8 *******)0x0) {
      pppppppuVar9 = (undefined8 *******)*pppppppuVar12;
      local_78 = (undefined8 *******)*local_78;
    }
    FUN_005d5b94(local_70,pppppppuVar9);
    local_68 = local_68 + 1;
    pppppppuVar12 = local_70;
joined_r0x00985324:
    do {
      pppppppuVar9 = pppppppuVar5;
      if (pppppppuVar12 == (undefined8 *******)0x0) goto LAB_00985358;
      while (pppppppuVar6 = pppppppuVar12, *(int *)((long)pppppppuVar6 + 0x1c) < 1) {
        if (-1 < *(int *)((long)pppppppuVar6 + 0x1c)) goto LAB_009853a8;
        pppppppuVar12 = (undefined8 *******)pppppppuVar6[1];
        if ((undefined8 *******)pppppppuVar6[1] == (undefined8 *******)0x0) {
          pppppppuVar5 = pppppppuVar6 + 1;
          pppppppuVar9 = pppppppuVar6;
          goto LAB_00985358;
        }
      }
      pppppppuVar12 = (undefined8 *******)*pppppppuVar6;
      pppppppuVar5 = pppppppuVar6;
    } while( true );
  }
LAB_0098544c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
LAB_00985358:
  pppppppuVar6 = (undefined8 *******)operator_new(0x28);
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    pppppppuVar6[4] = (undefined8 ******)0x0;
    *(undefined4 *)((long)pppppppuVar6 + 0x1c) = 0;
    *pppppppuVar6 = (undefined8 ******)0x0;
    pppppppuVar6[1] = (undefined8 ******)0x0;
    pppppppuVar6[2] = pppppppuVar9;
    *pppppppuVar5 = pppppppuVar6;
    pppppppuVar9 = pppppppuVar6;
    if ((undefined8 *******)*local_78 != (undefined8 *******)0x0) {
      pppppppuVar9 = (undefined8 *******)*pppppppuVar5;
      local_78 = (undefined8 *******)*local_78;
    }
    FUN_005d5b94(local_70,pppppppuVar9);
    local_68 = local_68 + 1;
LAB_009853a8:
    (**(code **)(*plVar14 + 0x40))(plVar14,uVar2,pppppppuVar8 + 4,pppppppuVar6 + 4);
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00985460(local_90,&local_78);
      FUN_00623bb0(&DAT_001f627a,"../../video/adaptation/video_stream_encoder_resource_manager.cc",
                   0x1681,local_90);
      if (cStack_79 < '\0') {
        operator_delete(local_90[0]);
      }
    }
    local_90[0] = &local_78;
    FUN_00985b20(local_90,local_70);
    return;
  }
  goto LAB_0098544c;
}


// ===== 00985460  FUN_00985460 =====

void FUN_00985460(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  bool bVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 ***local_68;
  ulong uStack_60;
  ulong local_58;
  
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_00547cac(&local_80,"Downgrade counts: fps: {",0x18);
  plVar7 = param_2 + 1;
  if ((long *)*param_2 != plVar7) {
    plVar6 = (long *)*param_2;
    do {
      pcVar5 = "quality";
      if ((*(int *)((long)plVar6 + 0x1c) != 0) &&
         (pcVar5 = "cpu", *(int *)((long)plVar6 + 0x1c) != 1)) goto LAB_00985750;
      FUN_005d3510(&local_68,pcVar5);
      uVar1 = uStack_60;
      ppppuVar2 = (undefined8 ****)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        ppppuVar2 = &local_68;
      }
      FUN_00547cac(&local_80,ppppuVar2,uVar1);
      FUN_00547cac(&local_80,&DAT_001ca603,1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*(undefined4 *)((long)plVar6 + 0x24));
      uVar1 = uStack_60;
      ppppuVar2 = (undefined8 ****)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        ppppuVar2 = &local_68;
      }
      FUN_00547cac(&local_80,ppppuVar2,uVar1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] != (long *)0x0) goto LAB_009855a8;
LAB_009855b8:
        do {
          plVar8 = (long *)plVar6[2];
          bVar4 = plVar6 != (long *)*plVar8;
          plVar6 = plVar8;
        } while (bVar4);
      }
      else {
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_009855b8;
LAB_009855a8:
        do {
          plVar8 = plVar3;
          plVar3 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      plVar6 = plVar8;
    } while (plVar8 != plVar7);
  }
  FUN_00547cac(&local_80,"}, resolution {",0xf);
  if ((long *)*param_2 != plVar7) {
    plVar6 = (long *)*param_2;
    do {
      pcVar5 = "quality";
      if ((*(int *)((long)plVar6 + 0x1c) != 0) &&
         (pcVar5 = "cpu", *(int *)((long)plVar6 + 0x1c) != 1)) {
LAB_00985750:
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      FUN_005d3510(&local_68,pcVar5);
      uVar1 = uStack_60;
      ppppuVar2 = (undefined8 ****)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        ppppuVar2 = &local_68;
      }
      FUN_00547cac(&local_80,ppppuVar2,uVar1);
      FUN_00547cac(&local_80,&DAT_001ca603,1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,(int)plVar6[4]);
      uVar1 = uStack_60;
      ppppuVar2 = (undefined8 ****)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        ppppuVar2 = &local_68;
      }
      FUN_00547cac(&local_80,ppppuVar2,uVar1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] != (long *)0x0) goto LAB_009856e4;
LAB_009856f4:
        do {
          plVar8 = (long *)plVar6[2];
          bVar4 = plVar6 != (long *)*plVar8;
          plVar6 = plVar8;
        } while (bVar4);
      }
      else {
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_009856f4;
LAB_009856e4:
        do {
          plVar8 = plVar3;
          plVar3 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      plVar6 = plVar8;
    } while (plVar8 != plVar7);
  }
  FUN_00547cac(&local_80,&DAT_001b0cbb,1);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}


// ===== 00985754  FUN_00985754 =====

void FUN_00985754(long param_1)

{
  FUN_00984fe8(param_1 + -8);
  return;
}


// ===== 00985760  FUN_00985760 =====

bool FUN_00985760(long param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_1 + 0xa8);
  lVar7 = *(long *)(param_1 + 0xb0);
  if (lVar8 == lVar7) {
    return false;
  }
  bVar4 = 0;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    bVar4 = *(byte *)(lVar8 + 0x51);
  }
  if (bVar4 == 1) {
    iVar6 = FUN_0096a3b0(*(undefined1 *)(lVar8 + 0x50));
    lVar8 = *(long *)(param_1 + 0xa8);
    lVar7 = *(long *)(param_1 + 0xb0);
  }
  else {
    iVar6 = -0x55555600;
  }
  if (lVar7 - lVar8 == 200) {
    if (iVar6 < 2) {
      return false;
    }
    return (bool)bVar4;
  }
  if (lVar7 == lVar8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  bVar3 = 0;
  if (iVar6 == 1) {
    bVar3 = bVar4;
  }
  if (((bVar3 & 1) == 0) && ((*(byte *)(lVar8 + 0x52) & 1) != 0)) {
    return true;
  }
  iVar6 = 0;
  lVar5 = (lVar7 + -200) - lVar8;
  if (lVar5 != 0) {
    iVar10 = 0;
    uVar2 = ((ulong)(lVar5 * 0xf5c28f5c28f5c29) >> 3) + 1;
    uVar11 = uVar2 & 0x3ffffffffffffffe;
    pbVar9 = (byte *)(lVar8 + 0x11a);
    do {
      pbVar1 = pbVar9 + -200;
      bVar4 = *pbVar9;
      uVar11 = uVar11 - 2;
      pbVar9 = pbVar9 + 400;
      iVar6 = iVar6 + (uint)*pbVar1;
      iVar10 = iVar10 + (uint)bVar4;
    } while (uVar11 != 0);
    iVar6 = iVar10 + iVar6;
    lVar8 = lVar8 + (uVar2 & 0x3ffffffffffffffe) * 200;
    if (uVar2 == (uVar2 & 0x3ffffffffffffffe)) goto LAB_00985880;
  }
  do {
    lVar5 = lVar8 + 200;
    iVar6 = iVar6 + (uint)*(byte *)(lVar8 + 0x52);
    lVar8 = lVar5;
  } while (lVar5 != lVar7);
LAB_00985880:
  return 1 < iVar6;
}


// ===== 009858ac  FUN_009858ac =====

undefined8 * FUN_009858ac(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  long lVar1;
  void *__dest;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar2 = param_2[1];
    if (uVar2 != 0) {
      __dest = (void *)*param_1;
      if ((ulong)(param_1[2] * 0x40) < uVar2) {
        if (__dest != (void *)0x0) {
          operator_delete(__dest);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar2 = param_2[1];
        }
        if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00632a3c();
        }
        lVar1 = 0;
        if (uVar2 != 0) {
          lVar1 = (uVar2 - 1 >> 6) + 1;
        }
        __dest = operator_new(lVar1 << 3);
        *param_1 = __dest;
        param_1[1] = 0;
        param_1[2] = lVar1;
        uVar2 = param_2[1];
      }
      __n = 0;
      if (uVar2 != 0) {
        __n = (uVar2 - 1 >> 3 & 0x1ffffffffffffff8) + 8;
      }
      memmove(__dest,(void *)*param_2,__n);
      uVar2 = param_2[1];
    }
    param_1[1] = uVar2;
  }
  return param_1;
}


// ===== 0098596c  FUN_0098596c =====

void FUN_0098596c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0098596c(param_1,*param_2);
      if (param_2 + 4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[4];
      puVar2 = (undefined8 *)param_2[1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 009859fc  FUN_009859fc =====

undefined1  [16] FUN_009859fc(undefined8 *param_1,ulong *param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = (long *)*param_1;
  plVar5 = plVar7 + 1;
  plVar8 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar2 = (long *)*plVar5;
    do {
      while (plVar3 = plVar2, plVar5 = plVar3, *param_2 < (ulong)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar8 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00985a6c;
      }
      if (*param_2 <= (ulong)plVar3[4]) {
        uVar6 = 0;
        goto LAB_00985af0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar8 = plVar3 + 1;
  }
LAB_00985a6c:
  plVar3 = (long *)operator_new(0x30);
  if (plVar3 != (long *)0x0) {
    *plVar3 = 0;
    if (plVar3 + 4 != (long *)0x0) {
      puVar4 = (undefined8 *)*param_3;
      plVar3[4] = (long)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      uVar1 = *param_4;
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = (long)plVar5;
      *(undefined4 *)(plVar3 + 5) = uVar1;
      *plVar8 = (long)plVar3;
      plVar5 = plVar3;
      if (*(long *)*plVar7 != 0) {
        *plVar7 = *(long *)*plVar7;
        plVar5 = (long *)*plVar8;
      }
      FUN_005d5b94(plVar7[1],plVar5);
      uVar6 = 1;
      plVar7[2] = plVar7[2] + 1;
LAB_00985af0:
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = plVar3;
      return auVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00985b20  FUN_00985b20 =====

void FUN_00985b20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00985b20(param_1,*param_2);
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


// ===== 00985b94  FUN_00985b94 =====

void FUN_00985b94(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3f428;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)((long)param_1 + 0x754) = 0;
  return;
}


// ===== 00985bb8  FUN_00985bb8 =====

void FUN_00985bb8(long param_1)

{
  FUN_00985ddc(param_1 + 8);
  return;
}


// ===== 00985bc4  FUN_00985bc4 =====

void FUN_00985bc4(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x750) = (int)param_2;
  *(char *)(param_1 + 0x754) = (char)((ulong)param_2 >> 0x20);
  return;
}


// ===== 00985bd8  FUN_00985bd8 =====

uint FUN_00985bd8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  uint local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  local_40 = param_3[4];
  uStack_88 = param_4[1];
  local_90 = *param_4;
  uStack_78 = param_4[3];
  uStack_80 = param_4[2];
  uStack_68 = param_4[5];
  local_70 = param_4[4];
  uVar2 = FUN_0097cc2c(&local_60,&local_90);
  if (((((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x748) == '\x01')) &&
      (*(char *)(param_1 + 0x754) == '\x01')) && (uVar5 = *(uint *)(param_1 + 0x750), uVar5 != 0)) {
    uVar3 = FUN_00979d5c(param_1 + 8);
    if ((*(byte *)(param_1 + 0x748) & 1) == 0) {
LAB_00985cf8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar4 = FUN_00979d68(param_1 + 8);
    uVar2 = FUN_00985760(uVar3,uVar4);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_0097f02c(param_2), (uVar2 >> 0x20 & 1) != 0)) {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = 0xaaaaaaaa;
      if ((*(byte *)(param_1 + 0x748) & 1) == 0) goto LAB_00985cf8;
      uVar3 = FUN_00979d54(param_1 + 8);
      uVar1 = FUN_0097cd38(uVar2 & 0xffffffff);
      FUN_007ba768(&local_b0,uVar3,uVar1);
      uVar5 = local_a0 & 0xff ^ 1 | (uint)(local_b0._4_4_ <= uVar5);
      goto LAB_00985c84;
    }
  }
  uVar5 = 1;
LAB_00985c84:
  return uVar5 & 1;
}


// ===== 00985d0c  FUN_00985d0c =====

void FUN_00985d0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f428;
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    FUN_008a03f4(param_1 + 0x3d);
    FUN_0084966c(param_1 + 0x23);
    FUN_007b9754(param_1 + 1);
  }
  FUN_00985e74(param_1);
  return;
}


// ===== 00985d64  FUN_00985d64 =====

void FUN_00985d64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f428;
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    FUN_008a03f4(param_1 + 0x3d);
    FUN_0084966c(param_1 + 0x23);
    FUN_007b9754(param_1 + 1);
  }
  FUN_00985e74(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00985dc8  FUN_00985dc8 =====

void FUN_00985dc8(undefined8 param_1)

{
  FUN_005d3510(param_1,"BitrateConstraint");
  return;
}


// ===== 00985ddc  FUN_00985ddc =====

void FUN_00985ddc(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x740);
  if (cVar1 == *(char *)(param_2 + 0x740)) {
    if (cVar1 != '\0') {
      FUN_00979cc8(param_1);
      return;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00979c88(param_1);
    *(undefined1 *)(param_1 + 0x740) = 1;
  }
  else {
    FUN_008a03f4(param_1 + 0x1e0);
    FUN_0084966c(param_1 + 0x110);
    FUN_007b9754(param_1);
    *(undefined1 *)(param_1 + 0x740) = 0;
  }
  return;
}


// ===== 00985e74  FUN_00985e74 =====

void FUN_00985e74(void)

{
  return;
}


// ===== 00985e7c  FUN_00985e7c =====

void FUN_00985e7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00d3f458;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  FUN_0097f284(param_1 + 2,param_3);
  param_1[5] = param_2;
  return;
}


// ===== 00985ec8  FUN_00985ec8 =====

void FUN_00985ec8(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 8) = (int)param_2;
  *(char *)(param_1 + 0xc) = (char)((ulong)param_2 >> 0x20);
  return;
}


// ===== 00985edc  FUN_00985edc =====

undefined8 FUN_00985edc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  if (iVar1 == 3) {
    uVar4 = FUN_0097f02c(param_2);
    uVar5 = FUN_0097effc(param_2);
    if ((uVar5 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    uVar2 = (undefined4)uVar5;
    if ((uVar4 & 0x100000000) != 0) {
      uVar2 = (undefined4)uVar4;
    }
    uVar3 = FUN_0097f014(param_2);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      uVar6 = *(undefined4 *)(param_1 + 8);
    }
    else {
      uVar6 = 0;
    }
    uVar4 = FUN_00980414(param_1 + 0x10,uVar3,uVar2,uVar6);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uStack_68 = param_3[1];
    local_70 = *param_3;
    uStack_58 = param_3[3];
    uStack_60 = param_3[2];
    uStack_48 = param_3[5];
    local_50 = param_3[4];
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    uStack_88 = param_4[3];
    uStack_90 = param_4[2];
    uStack_78 = param_4[5];
    local_80 = param_4[4];
    uVar4 = FUN_0097cc2c(&local_70,&local_a0);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_0097f014(param_2);
      if (*(char *)(param_1 + 0xc) == '\x01') {
        uVar6 = *(undefined4 *)(param_1 + 8);
      }
      else {
        uVar6 = 0;
      }
      uVar4 = FUN_0098052c(param_1 + 0x10,uVar3,uVar2,uVar6);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}


// ===== 00986004  FUN_00986004 =====

void FUN_00986004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f458;
  FUN_009801a0(param_1 + 2);
  FUN_00985e74(param_1);
  return;
}


// ===== 0098603c  FUN_0098603c =====

void FUN_0098603c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f458;
  FUN_009801a0(param_1 + 2);
  FUN_00985e74(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00986080  FUN_00986080 =====

void FUN_00986080(undefined8 param_1)

{
  FUN_005d3510(param_1,"BalancedConstraint");
  return;
}


// ===== 00986094  FUN_00986094 =====

void FUN_00986094(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *local_48 [2];
  char cStack_31;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  FUN_005d3510(local_48,"EncoderUsageResource");
  FUN_0098652c(puVar1,local_48);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *puVar1 = &PTR_FUN_00d3f508;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xb] = &PTR_FUN_00d3f560;
  puVar1[0xc] = param_2;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 0x10);
  }
  return;
}


// ===== 00986144  FUN_00986144 =====

void FUN_00986144(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d3f4d8;
  param_1[1] = 0;
  param_1[-0xb] = &PTR_FUN_00d3f488;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 00986194  FUN_00986194 =====

void FUN_00986194(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x98619c);
  (*pcVar1)();
}


// ===== 0098619c  FUN_0098619c =====

void FUN_0098619c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9861a4);
  (*pcVar1)();
}


// ===== 009861a4  FUN_009861a4 =====

undefined1 FUN_009861a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}


// ===== 009861b0  FUN_009861b0 =====

void FUN_009861b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = FUN_005d6490();
  FUN_0098189c(uVar3,uVar1,param_2,param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    iVar2 = (int)*(double *)(param_1 + 0x70);
  }
  else {
    iVar2 = 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00986228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60),iVar2);
  return;
}


// ===== 0098622c  FUN_0098622c =====

void FUN_0098622c(long param_1)

{
  FUN_00981d5c(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}


// ===== 0098625c  FUN_0098625c =====

void FUN_0098625c(long param_1,double param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if ((bVar1 & param_3) == 0) {
    if (bVar1 == param_3) {
      return;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(double *)(param_1 + 0x70) == param_2) {
      return;
    }
  }
  *(double *)(param_1 + 0x70) = param_2;
  *(byte *)(param_1 + 0x78) = param_3;
  if (*(char *)(param_1 + 0x68) != '\x01') {
    return;
  }
  iVar2 = (int)param_2;
  if ((param_3 & 1) == 0) {
    iVar2 = 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x009862bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(*(long **)(param_1 + 0x60),iVar2);
  return;
}


// ===== 009862e4  FUN_009862e4 =====

void FUN_009862e4(long param_1)

{
  FUN_00981e18(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 009862f0  FUN_009862f0 =====

void FUN_009862f0(long param_1)

{
  FUN_00981f10(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 009862fc  FUN_009862fc =====

void FUN_009862fc(long param_1)

{
  FUN_00981d68(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 00986308  FUN_00986308 =====

void FUN_00986308(undefined8 param_1)

{
  FUN_0098668c(param_1,1);
  return;
}


// ===== 00986314  FUN_00986314 =====

void FUN_00986314(long param_1)

{
  FUN_0098668c(param_1 + -0x58,1);
  return;
}


// ===== 00986324  FUN_00986324 =====

void FUN_00986324(undefined8 param_1)

{
  FUN_0098668c(param_1,0);
  return;
}


// ===== 00986330  FUN_00986330 =====

void FUN_00986330(long param_1)

{
  FUN_0098668c(param_1 + -0x58,0);
  return;
}


// ===== 00986340  FUN_00986340 =====

void FUN_00986340(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x80);
  return;
}


// ===== 00986364  FUN_00986364 =====

bool FUN_00986364(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x10);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 009863bc  FUN_009863bc =====

void FUN_009863bc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f488;
  plVar1 = (long *)param_1[0xc];
  param_1[0xb] = &PTR_FUN_00d3f4d8;
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_009865c0(param_1);
  return;
}


// ===== 0098640c  FUN_0098640c =====

void FUN_0098640c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f488;
  plVar1 = (long *)param_1[0xc];
  param_1[0xb] = &PTR_FUN_00d3f4d8;
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_009865c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00986468  FUN_00986468 =====

bool FUN_00986468(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x80) == 1;
}


// ===== 00986480  FUN_00986480 =====

void FUN_00986480(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d3f4d8;
  param_1[1] = 0;
  param_1[-0xb] = &PTR_FUN_00d3f488;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 009864d0  FUN_009864d0 =====

void FUN_009864d0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d3f4d8;
  param_1[1] = 0;
  param_1 = param_1 + -0xb;
  *param_1 = &PTR_FUN_00d3f488;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_009865c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0098652c  FUN_0098652c =====

int FUN_0098652c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_18;
  
  FUN_00979944();
  *param_1 = &PTR_FUN_00d3f590;
  param_1[5] = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  ((pthread_mutex_t *)(param_1 + 1))->__align = 0;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_18);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[8] = param_2[2];
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return iVar1;
}


// ===== 009865c0  FUN_009865c0 =====

void FUN_009865c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f590;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  FUN_00979958(param_1);
  return;
}


// ===== 00986614  FUN_00986614 =====

void FUN_00986614(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x98661c);
  (*pcVar1)();
}


// ===== 0098661c  FUN_0098661c =====

void FUN_0098661c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}


// ===== 00986628  FUN_00986628 =====

int FUN_00986628(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x50) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00986660  FUN_00986660 =====

void FUN_00986660(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x47)) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
  return;
}


// ===== 0098668c  FUN_0098668c =====

int FUN_0098668c(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long *local_18;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  plVar2 = (long *)param_1[10];
  if (plVar2 != (long *)0x0) {
    local_18 = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_18,param_2);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 00986718  FUN_00986718 =====

void FUN_00986718(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  FUN_005d3510(local_38,"QualityScalerResource");
  FUN_0098652c(puVar1,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *puVar1 = &PTR_FUN_00d3f650;
  puVar1[0xb] = &PTR_FUN_00d3f6a8;
  puVar1[0xc] = 0;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 0xd);
  }
  return;
}


// ===== 009867b0  FUN_009867b0 =====

void FUN_009867b0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  param_1[-0xb] = &PTR_FUN_00d3f5d0;
  *param_1 = &PTR_FUN_00d3f620;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00987468(param_1);
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 0098680c  FUN_0098680c =====

void FUN_0098680c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x986814);
  (*pcVar1)();
}


// ===== 00986814  FUN_00986814 =====

void FUN_00986814(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x98681c);
  (*pcVar1)();
}


// ===== 0098681c  FUN_0098681c =====

bool FUN_0098681c(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}


// ===== 00986830  FUN_00986830 =====

void FUN_00986830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = operator_new(0xe8);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x58;
  }
  FUN_00986b80(pvVar2,lVar1,param_2,param_3);
  plVar3 = *(long **)(param_1 + 0x60);
  *(void **)(param_1 + 0x60) = pvVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00986898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


// ===== 009868b0  FUN_009868b0 =====

void FUN_009868b0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009868cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 009868d4  FUN_009868d4 =====

void FUN_009868d4(long param_1)

{
  FUN_009871a4(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 009868e0  FUN_009868e0 =====

void FUN_009868e0(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 0x60) != 0) && (-1 < *(int *)(param_2 + 0x24))) {
    FUN_009871f8();
    return;
  }
  return;
}


// ===== 009868fc  FUN_009868fc =====

void FUN_009868fc(long param_1,char param_2)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    if (param_2 == '\x01') {
      FUN_009871e8();
      return;
    }
    if (param_2 == '\0') {
      FUN_009871b0();
      return;
    }
  }
  return;
}


// ===== 00986924  FUN_00986924 =====

void FUN_00986924(undefined8 param_1)

{
  FUN_0098668c(param_1,0);
  return;
}


// ===== 00986930  FUN_00986930 =====

void FUN_00986930(long param_1)

{
  FUN_0098668c(param_1 + -0x58,0);
  return;
}


// ===== 00986940  FUN_00986940 =====

void FUN_00986940(undefined8 param_1)

{
  FUN_0098668c(param_1,1);
  return;
}


// ===== 0098694c  FUN_0098694c =====

void FUN_0098694c(long param_1)

{
  FUN_0098668c(param_1 + -0x58,1);
  return;
}


// ===== 0098695c  FUN_0098695c =====

void FUN_0098695c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x68);
  return;
}


// ===== 00986980  FUN_00986980 =====

bool FUN_00986980(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xd);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 009869d8  FUN_009869d8 =====

void FUN_009869d8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f5d0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_00d3f620;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00987468(param_1 + 0xb);
  FUN_009865c0(param_1);
  return;
}


// ===== 00986a38  FUN_00986a38 =====

void FUN_00986a38(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f5d0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_00d3f620;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00987468(param_1 + 0xb);
  FUN_009865c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00986aa4  FUN_00986aa4 =====

bool FUN_00986aa4(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x68) == 1;
}


// ===== 00986abc  FUN_00986abc =====

void FUN_00986abc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  param_1[-0xb] = &PTR_FUN_00d3f5d0;
  *param_1 = &PTR_FUN_00d3f620;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00987468(param_1);
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 00986b18  FUN_00986b18 =====

void FUN_00986b18(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)param_1[1];
  puVar2 = param_1 + -0xb;
  *puVar2 = &PTR_FUN_00d3f5d0;
  *param_1 = &PTR_FUN_00d3f620;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00987468(param_1);
  FUN_009865c0(puVar2);
  operator_delete(puVar2);
  return;
}


// ===== 00986b80  FUN_00986b80 =====

void FUN_00986b80(void)

{
  FUN_00986b8c();
  return;
}


// ===== 00986b8c  FUN_00986b8c =====

void FUN_00986b8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_250 [72];
  undefined1 auStack_208 [72];
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [80];
  
  *param_1 = &PTR_FUN_00d3f6d8;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  FUN_009875e0(auStack_250,param_4);
  uVar4 = FUN_009877ac(auStack_250);
  if ((uVar4 & 0x100000000) != 0) {
    param_5 = uVar4;
  }
  FUN_006634ac(auStack_90);
  FUN_006634ac(auStack_d8);
  FUN_006634ac(auStack_128);
  FUN_006634ac(auStack_178);
  FUN_006634ac(auStack_1c0);
  FUN_006634ac(auStack_208);
  FUN_006634ac(auStack_250);
  param_1[4] = (long)(int)param_5;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_009875e0(auStack_250,param_4);
  uVar4 = FUN_00987818(auStack_250);
  lVar1 = 0x96;
  if ((uVar4 & 0x100000000) != 0) {
    lVar1 = (long)(int)uVar4;
  }
  FUN_00625cdc(param_1 + 6,lVar1);
  FUN_006634ac(auStack_90);
  FUN_006634ac(auStack_d8);
  FUN_006634ac(auStack_128);
  FUN_006634ac(auStack_178);
  FUN_006634ac(auStack_1c0);
  FUN_006634ac(auStack_208);
  FUN_006634ac(auStack_250);
  FUN_00625cdc(param_1 + 0xb,0x96);
  FUN_00625cdc(param_1 + 0x10,0x96);
  bVar3 = FUN_00987adc(param_4);
  uVar9 = DAT_001f54f8;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(byte *)(param_1 + 0x15) = bVar3 & 1;
  *(undefined8 *)((long)param_1 + 0xac) = uVar9;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_009875e0(auStack_250,param_4);
  uVar4 = FUN_00987884(auStack_250);
  lVar1 = 0x3c;
  if ((uVar4 & 0x100000000) != 0) {
    lVar1 = (long)(int)uVar4;
  }
  FUN_006634ac(auStack_90);
  FUN_006634ac(auStack_d8);
  FUN_006634ac(auStack_128);
  FUN_006634ac(auStack_178);
  FUN_006634ac(auStack_1c0);
  FUN_006634ac(auStack_208);
  FUN_006634ac(auStack_250);
  param_1[0x19] = lVar1;
  FUN_009875e0(auStack_250,param_4);
  auVar10 = FUN_009878f0(auStack_250);
  uVar9 = auVar10._0_8_;
  if ((auVar10 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar9 = 0x4004000000000000;
  }
  FUN_006634ac(auStack_90);
  FUN_006634ac(auStack_d8);
  FUN_006634ac(auStack_128);
  FUN_006634ac(auStack_178);
  FUN_006634ac(auStack_1c0);
  FUN_006634ac(auStack_208);
  FUN_006634ac(auStack_250);
  param_1[0x1a] = uVar9;
  FUN_009875e0(auStack_250,param_4);
  uVar9 = FUN_00987970(auStack_250);
  param_1[0x1b] = uVar9;
  *(undefined1 *)(param_1 + 0x1c) = extraout_w1;
  FUN_006634ac(auStack_90);
  FUN_006634ac(auStack_d8);
  FUN_006634ac(auStack_128);
  FUN_006634ac(auStack_178);
  FUN_006634ac(auStack_1c0);
  FUN_006634ac(auStack_208);
  FUN_006634ac(auStack_250);
  if (*(char *)(param_1 + 0x15) == '\x01') {
    uVar4 = FUN_0098802c(param_4);
    *(ulong *)((long)param_1 + 0xac) = uVar4;
    *(undefined1 *)((long)param_1 + 0xb4) = extraout_w1_00;
    puVar5 = (undefined4 *)operator_new(0x20);
    puVar2 = PTR_DAT_00d52038;
    *puVar5 = (int)uVar4;
    *(undefined8 *)(puVar5 + 2) = 0;
    uVar8 = *(undefined4 *)puVar2;
    puVar5[6] = uVar8;
    FUN_00625c38(uVar4 & 0xffffffff,puVar5 + 4);
    pvVar6 = (void *)param_1[0x17];
    param_1[0x17] = puVar5;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    puVar5 = (undefined4 *)operator_new(0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x16);
    *(undefined8 *)(puVar5 + 2) = 0;
    puVar5[6] = uVar8;
    *puVar5 = uVar7;
    FUN_00625c38(puVar5 + 4);
    pvVar6 = (void *)param_1[0x18];
    param_1[0x18] = puVar5;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  FUN_00986edc(param_1);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6148,"../../modules/video_coding/utility/quality_scaler.cc",0x6e9,
                 "QP thresholds: low: ",*(undefined4 *)(param_1 + 3),", high: ",
                 *(undefined4 *)((long)param_1 + 0x1c));
  }
  return;
}


// ===== 00986edc  FUN_00986edc =====

void FUN_00986edc(long param_1)

{
  long *plVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = *(ushort *)(*(long *)(param_1 + 8) + 0xe);
    uVar4 = (uint)(uVar2 >> 8);
  }
  plVar1 = (long *)operator_new(0x20);
  *plVar1 = param_1;
  *(undefined4 *)(plVar1 + 1) = 0;
  *(ushort *)((long)plVar1 + 0xc) = uVar2 & 0xff | (ushort)(uVar4 << 8);
  *(undefined2 *)((long)plVar1 + 0xe) = 0;
  FUN_009881bc(plVar1 + 2);
  pvVar3 = *(void **)(param_1 + 8);
  plVar1[3] = (long)plVar1;
  *(long **)(param_1 + 8) = plVar1;
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
    FUN_009881c8((long)pvVar3 + 0x10);
    operator_delete(pvVar3);
    plVar1 = *(long **)(param_1 + 8);
  }
  FUN_0098704c(plVar1);
  return;
}


// ===== 00986f7c  FUN_00986f7c =====

void FUN_00986f7c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x18];
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_00d3f6d8;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x17];
  param_1[0x17] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_00625dbc(param_1 + 0x10);
  FUN_00625dbc(param_1 + 0xb);
  FUN_00625dbc(param_1 + 6);
  pvVar1 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    FUN_009881c8((long)pvVar1 + 0x10);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0098701c  FUN_0098701c =====

void FUN_0098701c(void *param_1)

{
  FUN_00986f7c();
  operator_delete(param_1);
  return;
}


// ===== 0098704c  FUN_0098704c =====

void FUN_0098704c(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_68 [8];
  long local_60;
  long *plStack_58;
  void *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  *(undefined4 *)(param_1 + 1) = 1;
  plVar1 = (long *)FUN_005d6490();
  FUN_00988288(local_50,param_1 + 2);
  lVar3 = param_1[3];
  FUN_00988398(auStack_68,local_50);
  local_60 = lVar3;
  FUN_00988108(local_50);
  plStack_58 = param_1;
  pvVar2 = operator_new(0x18);
  FUN_0098815c(pvVar2,auStack_68);
  lVar3 = *param_1;
  *(long **)((long)pvVar2 + 0x10) = plStack_58;
  *(long *)((long)pvVar2 + 8) = local_60;
  if (*(char *)(lVar3 + 0x28) == '\x01') {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  else if ((*(char *)(lVar3 + 0xa8) == '\x01') && ((*(byte *)((long)param_1 + 0xc) & 1) == 0)) {
    lVar3 = *(long *)(lVar3 + 0x20) / 2;
  }
  else {
    if ((*(char *)(lVar3 + 0xe0) == '\x01') && ((*(byte *)((long)param_1 + 0xd) & 1) == 0)) {
      lVar4 = *(long *)(lVar3 + 0x20);
      dVar5 = *(double *)(lVar3 + 0xd8);
    }
    else {
      lVar4 = *(long *)(lVar3 + 0x20);
      dVar5 = *(double *)(lVar3 + 0xd0);
    }
    lVar3 = (long)(dVar5 * (double)lVar4);
  }
  local_40 = FUN_0098747c;
  pcStack_38 = FUN_00987470;
  local_14[0] = 0;
  local_50[0] = pvVar2;
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,lVar3 * 1000,local_14,&uStack_11);
  (*local_40)(0,local_50,local_50);
  FUN_00988344(auStack_68);
  return;
}


// ===== 009871a4  FUN_009871a4 =====

void FUN_009871a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 009871b0  FUN_009871b0 =====

void FUN_009871b0(long param_1)

{
  FUN_00625e64(param_1 + 0x58,100);
  FUN_00625e64(param_1 + 0x80,100);
  return;
}


// ===== 009871e8  FUN_009871e8 =====

void FUN_009871e8(long param_1)

{
  FUN_00625e64(param_1 + 0x80,100);
  return;
}


// ===== 009871f8  FUN_009871f8 =====

void FUN_009871f8(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  FUN_00625e64(param_1 + 0x58,0);
  FUN_00625e64(param_1 + 0x80,0);
  FUN_00625e64(param_1 + 0x30,param_2);
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    FUN_00625c4c((float)(param_3 / 1000 - *(long *)(lVar1 + 8)),(float)param_2,lVar1 + 0x10);
    *(long *)(lVar1 + 8) = param_3 / 1000;
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_00625c4c((float)(param_3 / 1000 - *(long *)(lVar1 + 8)),(float)param_2,lVar1 + 0x10);
    *(long *)(lVar1 + 8) = param_3 / 1000;
  }
  return;
}


// ===== 009872c8  FUN_009872c8 =====

undefined8 FUN_009872c8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
  lVar6 = 0x80;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    lVar6 = 0x58;
  }
  uVar2 = FUN_00625ef0(param_1 + lVar6);
  if (uVar2 < *(ulong *)(param_1 + 200)) {
    return 0;
  }
  lVar6 = 0x80;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    lVar6 = 0x58;
  }
  uVar2 = FUN_00625eb4(param_1 + lVar6);
  puVar1 = PTR_DAT_00d52038;
  if (((uVar2 >> 0x20 & 1) == 0) || ((int)uVar2 < 0x3c)) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      uVar2 = FUN_00625eb4(param_1 + 0x30);
      lVar6 = *(long *)(param_1 + 0xc0);
      if (lVar6 == 0) goto LAB_009873d4;
LAB_009873a0:
      uVar3 = (ulong)(uint)(int)*(float *)(lVar6 + 0x14) | 0x100000000;
      if (*(float *)(lVar6 + 0x14) == *(float *)puVar1) {
        uVar3 = 0;
      }
    }
    else {
      fVar7 = *(float *)(*(long *)(param_1 + 0xb8) + 0x14);
      uVar2 = (ulong)(uint)(int)fVar7 | 0x100000000;
      if (fVar7 == *(float *)PTR_DAT_00d52038) {
        uVar2 = 0;
      }
      lVar6 = *(long *)(param_1 + 0xc0);
      if (lVar6 != 0) goto LAB_009873a0;
LAB_009873d4:
      uVar3 = FUN_00625eb4(param_1 + 0x30);
    }
    if (((uVar2 >> 0x20 & 1) != 0) && ((uVar3 >> 0x20 & 1) != 0)) {
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4ea6,"../../modules/video_coding/utility/quality_scaler.cc",0x961,
                     "Checking average QP ",uVar2 & 0xffffffff,&DAT_001a2df6,uVar3 & 0xffffffff,
                     &DAT_001a3771);
      }
      if (*(int *)(param_1 + 0x1c) < (int)uVar2) goto LAB_00987434;
      if ((int)uVar3 <= *(int *)(param_1 + 0x18)) {
        return 3;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/utility/quality_scaler.cc",0x901,
                   "Reporting high QP, framedrop percent ",uVar2 & 0xffffffff);
      return 2;
    }
LAB_00987434:
    uVar5 = 2;
  }
  return uVar5;
}


// ===== 00987468  FUN_00987468 =====

void FUN_00987468(void)

{
  return;
}


// ===== 00987470  FUN_00987470 =====

void FUN_00987470(undefined8 *param_1)

{
  FUN_009874e4(*param_1);
  return;
}


// ===== 0098747c  FUN_0098747c =====

void FUN_0098747c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x9874e4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00988344(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 009874e4  FUN_009874e4 =====

void FUN_009874e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_009881a4();
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    iVar1 = FUN_009872c8(*plVar6);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *(undefined1 *)((long)plVar6 + 0xe) = 0;
      }
      else {
        *(undefined1 *)((long)plVar6 + 0xe) = 1;
      }
    }
    else {
      if (iVar1 == 2) {
        *(undefined2 *)((long)plVar6 + 0xe) = 0x101;
        *(undefined1 *)(*plVar6 + 0x28) = 0;
        pcVar4 = *(code **)(**(long **)(*plVar6 + 0x10) + 0x10);
      }
      else {
        *(undefined2 *)((long)plVar6 + 0xe) = 0x101;
        pcVar4 = *(code **)(**(long **)(*plVar6 + 0x10) + 0x18);
      }
      (*pcVar4)();
      lVar5 = *plVar6;
      FUN_00625f10(lVar5 + 0x58);
      FUN_00625f10(lVar5 + 0x80);
      FUN_00625f10(lVar5 + 0x30);
      puVar3 = *(undefined4 **)(lVar5 + 0xb8);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00625c38(*puVar3,puVar3 + 4);
      }
      puVar3 = *(undefined4 **)(lVar5 + 0xc0);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00625c38(*puVar3,puVar3 + 4);
      }
    }
    *(undefined4 *)(plVar6 + 1) = 2;
    FUN_00986edc(*plVar6);
    return;
  }
  return;
}


// ===== 009875e0  FUN_009875e0 =====

void FUN_009875e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  undefined1 *local_b0;
  ulong uStack_a8;
  byte bStack_99;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  
  FUN_00661054(param_1,"sampling_period_ms",0x12);
  puVar1 = PTR_DAT_00d51ff8;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = (long)puVar1;
  FUN_00661054(param_1 + 9,"average_qp_window",0x11);
  param_1[9] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_00661054(param_1 + 0x12,"min_frames",10);
  param_1[0x12] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00661054(param_1 + 0x1b,"initial_scale_factor",0x14);
  puVar2 = PTR_DAT_00d520b0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x1b] = (long)puVar2;
  FUN_00661054(param_1 + 0x25,"scale_factor",0xc);
  param_1[0x25] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_00661054(param_1 + 0x2f,"initial_bitrate_interval_ms",0x1b);
  param_1[0x2f] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  FUN_00661054(param_1 + 0x38,"initial_bitrate_factor",0x16);
  param_1[0x38] = (long)puVar2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  local_98 = param_1;
  plStack_90 = param_1 + 9;
  local_88 = param_1 + 0x12;
  plStack_80 = param_1 + 0x1b;
  local_78 = param_1 + 0x25;
  plStack_70 = param_1 + 0x2f;
  local_68 = param_1 + 0x38;
  (**(code **)(*param_2 + 0x10))(&local_b0,param_2,"WebRTC-Video-QualityScalerSettings",0x22);
  ppuVar3 = (undefined1 **)local_b0;
  if (-1 < (char)bStack_99) {
    uStack_a8 = (ulong)bStack_99;
    ppuVar3 = &local_b0;
  }
  FUN_00661cc0(&local_98,7,ppuVar3,uStack_a8);
  if ((char)bStack_99 < '\0') {
    operator_delete(local_b0);
  }
  return;
}


// ===== 009877ac  FUN_009877ac =====

ulong FUN_009877ac(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(int *)(param_1 + 0x3c) < 1)) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x152,
                   "Unsupported sampling_period_ms value, ignored.");
    }
    return 0;
  }
  return *(ulong *)(param_1 + 0x3c) & 0xffffffffff;
}


// ===== 00987818  FUN_00987818 =====

ulong FUN_00987818(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(int *)(param_1 + 0x84) < 1)) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x192,
                   "Unsupported average_qp_window value, ignored.");
    }
    return 0;
  }
  return *(ulong *)(param_1 + 0x84) & 0xffffffffff;
}


// ===== 00987884  FUN_00987884 =====

ulong FUN_00987884(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(int *)(param_1 + 0xcc) < 10)) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x1d2,
                   "Unsupported min_frames value, ignored.");
    }
    return 0;
  }
  return *(ulong *)(param_1 + 0xcc) & 0xffffffffff;
}


// ===== 009878f0  FUN_009878f0 =====

undefined1  [16] FUN_009878f0(long param_1)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    dVar2 = *(double *)(param_1 + 0x118);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x118);
    if (dVar2 < DAT_001f5338) {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x21a,
                     "Unsupported initial_scale_factor value, ignored.");
      }
      return ZEXT816(0);
    }
  }
  auVar3[8] = *(undefined1 *)(param_1 + 0x120);
  auVar3._0_8_ = dVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 00987970  FUN_00987970 =====

undefined1  [16] FUN_00987970(long param_1)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    dVar2 = *(double *)(param_1 + 0x168);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x168);
    if (dVar2 < DAT_001f5338) {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x25a,
                     "Unsupported scale_factor value, ignored.");
      }
      return ZEXT816(0);
    }
  }
  auVar3[8] = *(undefined1 *)(param_1 + 0x170);
  auVar3._0_8_ = dVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 009879f0  FUN_009879f0 =====

ulong FUN_009879f0(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x1b8) == '\x01') && (*(int *)(param_1 + 0x1b4) < 0)) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x2a2,
                   "Unsupported bitrate_interval value, ignored.");
    }
    return 0;
  }
  return *(ulong *)(param_1 + 0x1b4) & 0xffffffffff;
}


// ===== 00987a5c  FUN_00987a5c =====

undefined1  [16] FUN_00987a5c(long param_1)

{
  ulong uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 0x208) & 1) == 0) {
    dVar2 = *(double *)(param_1 + 0x200);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x200);
    if (dVar2 < DAT_001f5338) {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaler_settings.cc",0x2ea,
                     "Unsupported initial_bitrate_factor value, ignored.");
      }
      return ZEXT816(0);
    }
  }
  auVar3[8] = *(undefined1 *)(param_1 + 0x208);
  auVar3._0_8_ = dVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 00987adc  FUN_00987adc =====

byte FUN_00987adc(long *param_1)

{
  long ****pppplVar1;
  bool bVar2;
  byte bVar3;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
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
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long ***local_38;
  ulong local_30;
  byte bStack_21;
  
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00987bf0(&local_d0,param_1);
  (**(code **)(*param_1 + 0x10))(&local_38,param_1,"WebRTC-Video-QualityScaling",0x1b);
  if (-1 < (char)bStack_21) {
    local_30 = (ulong)bStack_21;
  }
  if (local_30 < 8) {
    bVar2 = false;
    if (-1 < (char)bStack_21) goto LAB_00987b90;
LAB_00987ba4:
    operator_delete(local_38);
    if (bVar2) goto LAB_00987b94;
  }
  else {
    pppplVar1 = (long ****)local_38;
    if (-1 < (char)bStack_21) {
      pppplVar1 = &local_38;
    }
    bVar2 = *pppplVar1 == (long ***)0x64656c6261736944;
    if ((char)bStack_21 < '\0') goto LAB_00987ba4;
LAB_00987b90:
    if (bVar2) {
LAB_00987b94:
      if (((ulong)local_90 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (byte)local_48;
      }
      goto LAB_00987bc4;
    }
  }
  bVar3 = 1;
LAB_00987bc4:
  FUN_006634ac(&puStack_88);
  FUN_006634ac(&local_d0);
  return bVar3 & 1;
}


// ===== 00987bf0  FUN_00987bf0 =====

void FUN_00987bf0(long *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  long *local_40;
  long *plStack_38;
  
  FUN_00661054(param_1,"low_qp",6);
  puVar2 = PTR_DAT_00d51ff8;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_00661054(param_1 + 9,"high_qp",7);
  param_1[9] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_40 = param_1;
  plStack_38 = param_1 + 9;
  (**(code **)(*param_2 + 0x10))(&local_58,param_2,"WebRTC-H265-QualityScaling",0x1a);
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &local_58;
  }
  FUN_00661cc0(&local_40,2,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 00987cd8  FUN_00987cd8 =====

/* WARNING: Removing unreachable block (ram,0x00987e10) */

void FUN_00987cd8(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  char ***__s;
  int iVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  char **local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (char **)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_40,param_2,"WebRTC-Video-QualityScaling",0x1b);
  uVar4 = (ulong)(uint)(int)(char)local_30._7_1_;
  puVar1 = puStack_38;
  if (-1 < (char)local_30._7_1_) {
    puVar1 = (undefined1 *)(ulong)local_30._7_1_;
  }
  if (puVar1 == (undefined1 *)0x0) {
    FUN_00547bf8(&local_40,"Enabled-29,95,149,205,24,37,26,36,0.9995,0.9999,1");
    uVar4 = (ulong)local_30 >> 0x38;
  }
  __s = (char ***)local_40;
  if ((uVar4 & 0x80) == 0) {
    __s = &local_40;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaa;
  local_54 = 0xaaaaaaaa;
  uStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  auStack_48[0] = 0xaaaaaaaa;
  iVar2 = sscanf((char *)__s,"Enabled-%d,%d,%d,%d,%d,%d,%d,%d,%f,%f,%d",&local_70,
                 (ulong)&local_70 | 4,(ulong)&local_70 | 8,(ulong)&local_70 | 0xc,&uStack_60,
                 (long)&uStack_60 + 4,&uStack_58,&local_54,&uStack_50,&uStack_4c,auStack_48);
  if (iVar2 == 0xb) {
    uVar3 = 1;
    param_1[1] = puStack_68;
    *param_1 = local_70;
    param_1[3] = CONCAT44(local_54,uStack_58);
    param_1[2] = uStack_60;
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(auStack_48[0],uStack_4c);
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_50,local_54);
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaling_experiment.cc",0x36a,
                   "Invalid number of parameters provided.");
    }
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x2c) = uVar3;
  return;
}


// ===== 00987e34  FUN_00987e34 =====

undefined1  [16] FUN_00987e34(int param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  
  if (param_1 == 5) {
    uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00987bf0(&local_d0,param_2);
    bVar2 = (byte)local_90 & (byte)local_48;
    if ((bVar2 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)uStack_98._4_4_;
      unaff_x22 = CONCAT44(uStack_50._4_4_,uStack_98._4_4_) >> 8;
    }
    FUN_006634ac(&puStack_88);
    FUN_006634ac(&local_d0);
    if ((bVar2 & 1) != 0) {
      uVar6 = 1;
      goto LAB_00988008;
    }
  }
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00987cd8(&local_d0,param_2);
  if (local_a8._4_1_ != '\x01') {
    uVar6 = 0;
    uVar7 = 0;
    goto LAB_00988008;
  }
  uVar6 = 0;
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar7 = 0;
      if (param_1 != 1) goto LAB_00988008;
      uVar8 = (ulong)local_d0 & 0xffffffff;
      if (((int)local_d0 <= (int)local_d0._4_4_) && (0 < (int)local_d0)) {
        bVar3 = SBORROW4(local_d0._4_4_,0x7f);
        bVar4 = (int)(local_d0._4_4_ - 0x7f) < 0;
        bVar5 = local_d0._4_4_ == 0x7f;
        uVar9 = local_d0._4_4_;
        goto LAB_00987fa8;
      }
      goto LAB_00988000;
    }
    if (((int)uStack_b8._4_4_ < (int)(uint)uStack_b8) ||
       (uVar9 = uStack_b8._4_4_, uVar1 = (uint)uStack_b8, (int)(uint)uStack_b8 < 1))
    goto LAB_00988000;
LAB_00987fa4:
    uVar8 = (ulong)uVar1;
    bVar3 = SBORROW4(uVar9,0xff);
    bVar4 = (int)(uVar9 - 0xff) < 0;
    bVar5 = uVar9 == 0xff;
LAB_00987fa8:
    uVar6 = 0;
    uVar7 = uVar6;
    if (bVar5 || bVar4 != bVar3) {
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../rtc_base/experiments/quality_scaling_experiment.cc",0x1a9,
                     "QP thresholds: low: ",uVar8,", high: ",uVar9);
      }
      uVar6 = 1;
      uVar7 = uVar8 & 0x7fffff00 | (ulong)uVar9 << 0x20 | (ulong)((uint)uVar8 & 0xff);
    }
  }
  else {
    if (param_1 == 2) {
      if (((int)(uint)uStack_c8 <= (int)uStack_c8._4_4_) &&
         (uVar9 = uStack_c8._4_4_, uVar1 = (uint)uStack_c8, 0 < (int)(uint)uStack_c8))
      goto LAB_00987fa4;
    }
    else {
      uVar7 = 0;
      if (param_1 != 4) goto LAB_00988008;
      uVar8 = (ulong)local_c0 & 0xffffffff;
      if (((int)local_c0 <= (int)local_c0._4_4_) && (0 < (int)local_c0)) {
        bVar3 = SBORROW4(local_c0._4_4_,0x33);
        bVar4 = (int)(local_c0._4_4_ - 0x33) < 0;
        bVar5 = local_c0._4_4_ == 0x33;
        uVar9 = local_c0._4_4_;
        goto LAB_00987fa8;
      }
    }
LAB_00988000:
    uVar6 = 0;
    uVar7 = 0;
  }
  unaff_x22 = uVar7 >> 8;
LAB_00988008:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar7 & 0xff | unaff_x22 << 8;
  return auVar10;
}


// ===== 0098802c  FUN_0098802c =====

undefined1  [16] FUN_0098802c(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = 0xffffffffffffffff;
  FUN_00987cd8(auStack_50);
  if (local_28._4_1_ == '\x01') {
    uVar1 = local_30 & 0xffffffff;
    uVar2 = 0xaaaaaa00;
    if (0 < (int)local_28) {
      uVar2 = 0xaaaaaa01;
    }
    if ((0.0 <= (float)local_30) && ((float)local_30 <= local_30._4_4_)) goto LAB_009880d8;
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/quality_scaling_experiment.cc",0x4ca,
                   "Invalid alpha value provided, using default.");
    }
  }
  else {
    uVar2 = 0;
  }
  local_30._4_4_ = 0.9999;
  uVar1 = 0x3f7fdf3b;
LAB_009880d8:
  auVar3._0_8_ = uVar1 | (ulong)(uint)local_30._4_4_ << 0x20;
  auVar3._8_4_ = uVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 009880fc  FUN_009880fc =====

void FUN_009880fc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00988108  FUN_00988108 =====

void FUN_00988108(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar2 + 4), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0098815c  FUN_0098815c =====

void FUN_0098815c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}


// ===== 00988170  FUN_00988170 =====

void FUN_00988170(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 4);
  }
  return;
}


// ===== 009881a4  FUN_009881a4 =====

uint FUN_009881a4(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    pbVar1 = (byte *)(ulong)*pbVar1;
  }
  return (uint)pbVar1 & 1;
}


// ===== 009881bc  FUN_009881bc =====

void FUN_009881bc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009881c8  FUN_009881c8 =====

void FUN_009881c8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
    pvVar2 = (void *)*param_1;
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar2 + 4), iVar1 == 1))
    {
      operator_delete(pvVar2);
    }
    *param_1 = 0;
  }
  return;
}


// ===== 00988228  FUN_00988228 =====

void FUN_00988228(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
    pvVar2 = (void *)*param_1;
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar2 + 4), iVar1 == 1))
    {
      operator_delete(pvVar2);
    }
    *param_1 = 0;
  }
  return;
}


// ===== 00988288  FUN_00988288 =====

void FUN_00988288(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((*param_2 == 0) || ((int)*(undefined8 *)(*param_2 + 4) == 1)) {
    puVar2 = (undefined8 *)operator_new(8);
    *puVar2 = 1;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d0f740(1,(long)puVar2 + 4);
    }
    pvVar3 = (void *)*param_2;
    if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar3 + 4), iVar1 == 1))
    {
      operator_delete(pvVar3);
    }
    *param_2 = (long)puVar2;
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined8 *)*param_2;
    *param_1 = puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 4);
  }
  return;
}


// ===== 00988344  FUN_00988344 =====

void FUN_00988344(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar2 + 4), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00988398  FUN_00988398 =====

void FUN_00988398(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 4);
  }
  return;
}


// ===== 009883cc  FUN_009883cc =====

void FUN_009883cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  FUN_005d3510(local_38,"BandwidthQualityScalerResource");
  FUN_0098652c(puVar1,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *puVar1 = &PTR_FUN_00d3f778;
  puVar1[0xb] = &PTR_FUN_00d3f7d0;
  puVar1[0xc] = 0;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 0xd);
  }
  return;
}


// ===== 00988464  FUN_00988464 =====

void FUN_00988464(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  param_1[-0xb] = &PTR_FUN_00d3f6f8;
  *param_1 = &PTR_FUN_00d3f748;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00988c8c(param_1);
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 009884c0  FUN_009884c0 =====

void FUN_009884c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9884c8);
  (*pcVar1)();
}


// ===== 009884c8  FUN_009884c8 =====

void FUN_009884c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9884d0);
  (*pcVar1)();
}


// ===== 009884d0  FUN_009884d0 =====

bool FUN_009884d0(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}


// ===== 009884e4  FUN_009884e4 =====

void FUN_009884e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = operator_new(0xb0);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x58;
  }
  FUN_00988818(pvVar2,lVar1);
  plVar3 = *(long **)(param_1 + 0x60);
  *(void **)(param_1 + 0x60) = pvVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    pvVar2 = *(void **)(param_1 + 0x60);
  }
  FUN_00988b74(pvVar2,param_2,param_3);
  return;
}


// ===== 0098855c  FUN_0098855c =====

void FUN_0098855c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00988578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00988580  FUN_00988580 =====

void FUN_00988580(undefined8 param_1)

{
  FUN_0098668c(param_1,0);
  return;
}


// ===== 0098858c  FUN_0098858c =====

void FUN_0098858c(long param_1)

{
  FUN_0098668c(param_1 + -0x58,0);
  return;
}


// ===== 0098859c  FUN_0098859c =====

void FUN_0098859c(undefined8 param_1)

{
  FUN_0098668c(param_1,1);
  return;
}


// ===== 009885a8  FUN_009885a8 =====

void FUN_009885a8(long param_1)

{
  FUN_0098668c(param_1 + -0x58,1);
  return;
}


// ===== 009885b8  FUN_009885b8 =====

void FUN_009885b8(long param_1,undefined4 *param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00988b0c(*(long *)(param_1 + 0x60),param_4,param_3 / 1000,*param_2,param_2[1]);
    return;
  }
  return;
}


// ===== 009885f4  FUN_009885f4 =====

void FUN_009885f4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x68);
  return;
}


// ===== 00988618  FUN_00988618 =====

bool FUN_00988618(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xd);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00988670  FUN_00988670 =====

void FUN_00988670(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f6f8;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_00d3f748;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00988c8c(param_1 + 0xb);
  FUN_009865c0(param_1);
  return;
}


// ===== 009886d0  FUN_009886d0 =====

void FUN_009886d0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3f6f8;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_00d3f748;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00988c8c(param_1 + 0xb);
  FUN_009865c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0098873c  FUN_0098873c =====

bool FUN_0098873c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x68) == 1;
}


// ===== 00988754  FUN_00988754 =====

void FUN_00988754(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  param_1[-0xb] = &PTR_FUN_00d3f6f8;
  *param_1 = &PTR_FUN_00d3f748;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00988c8c(param_1);
  FUN_009865c0(param_1 + -0xb);
  return;
}


// ===== 009887b0  FUN_009887b0 =====

void FUN_009887b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)param_1[1];
  puVar2 = param_1 + -0xb;
  *puVar2 = &PTR_FUN_00d3f6f8;
  *param_1 = &PTR_FUN_00d3f748;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00988c8c(param_1);
  FUN_009865c0(puVar2);
  operator_delete(puVar2);
  return;
}


// ===== 00988818  FUN_00988818 =====

void FUN_00988818(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d3f800;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_007de7c4(0x45fa0000,param_1 + 4,5000);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  FUN_009881bc(param_1 + 0x11);
  param_1[0x12] = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_00988880(param_1);
  return;
}


// ===== 00988880  FUN_00988880 =====

void FUN_00988880(long param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long lStack_58;
  void *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  plVar1 = (long *)FUN_005d6490();
  FUN_00988288(local_50,param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  FUN_00988398(auStack_68,local_50);
  local_60 = uVar3;
  FUN_00988108(local_50);
  lStack_58 = param_1;
  pvVar2 = operator_new(0x18);
  FUN_0098815c(pvVar2,auStack_68);
  *(long *)((long)pvVar2 + 0x10) = lStack_58;
  *(undefined8 *)((long)pvVar2 + 8) = local_60;
  local_40 = FUN_00988da4;
  pcStack_38 = FUN_00988c94;
  local_14[0] = 0;
  local_50[0] = pvVar2;
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,5000000,local_14,&uStack_11);
  (*local_40)(0,local_50,local_50);
  FUN_00988344(auStack_68);
  return;
}


// ===== 00988960  FUN_00988960 =====

void FUN_00988960(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x13];
  *param_1 = &PTR_FUN_00d3f800;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x14];
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
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x14] = pvVar1;
    operator_delete(pvVar1);
  }
  param_1[0x12] = 0;
  FUN_009881c8(param_1 + 0x11);
  FUN_007de938(param_1 + 4);
  return;
}


// ===== 00988a30  FUN_00988a30 =====

void FUN_00988a30(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x13];
  *param_1 = &PTR_FUN_00d3f800;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x14];
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
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x14] = pvVar1;
    operator_delete(pvVar1);
  }
  param_1[0x12] = 0;
  FUN_009881c8(param_1 + 0x11);
  FUN_007de938(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00988b0c  FUN_00988b0c =====

void FUN_00988b0c(long param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(char *)(param_1 + 0x84) == '\x01') {
    *(int *)(param_1 + 0x80) = param_5 * param_4;
  }
  else {
    if ((int *)(param_1 + 0x80) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(int *)(param_1 + 0x80) = param_5 * param_4;
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  FUN_007dec4c(param_1 + 0x20,(long)param_2);
  return;
}


// ===== 00988b74  FUN_00988b74 =====

void FUN_00988b74(long param_1,long *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (*param_2 == param_2[1]) {
    FUN_0096e844(&local_40,param_3);
    pvVar1 = *(void **)(param_1 + 0x98);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0xa0);
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
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0xa0) = pvVar1;
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0xa0) = uStack_38;
    *(undefined8 *)(param_1 + 0x98) = local_40;
    *(undefined8 *)(param_1 + 0xa8) = local_30;
  }
  else if ((long *)(param_1 + 0x98) != param_2) {
    FUN_00962a90();
    return;
  }
  return;
}


// ===== 00988c8c  FUN_00988c8c =====

void FUN_00988c8c(void)

{
  return;
}


// ===== 00988c94  FUN_00988c94 =====

void FUN_00988c94(long *param_1)

{
  float fVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_30;
  
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + 0x10);
  uVar2 = FUN_009881a4(lVar5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar5 + 8) == 0) {
    return;
  }
  if ((*(char *)(lVar4 + 0x84) == '\x01') && (*(char *)(lVar4 + 0x18) == '\x01')) {
    auVar7 = FUN_007df10c(lVar4 + 0x20,*(undefined8 *)(lVar4 + 0x10));
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = 0xaaaaaaaa;
      FUN_0096e9d0(&local_40,*(undefined8 *)(lVar4 + 0x80),lVar4 + 0x98);
      if ((local_30 & 1) != 0) {
        fVar1 = (float)auVar7._0_8_;
        if (fVar1 <= (float)uStack_38._4_4_ * 0.95) {
          fVar6 = (float)local_40._4_4_ * 0.8;
          if (fVar6 == fVar1 || fVar6 < fVar1 != (NAN(fVar6) || NAN(fVar1))) goto LAB_00988d88;
          pcVar3 = *(code **)(**(long **)(lVar4 + 8) + 0x10);
        }
        else {
          pcVar3 = *(code **)(**(long **)(lVar4 + 8) + 0x18);
        }
        (*pcVar3)();
        if (*(char *)(lVar4 + 0x84) == '\x01') {
          *(undefined1 *)(lVar4 + 0x84) = 0;
        }
      }
    }
  }
LAB_00988d88:
  FUN_00988880(lVar4);
  return;
}


// ===== 00988da4  FUN_00988da4 =====

void FUN_00988da4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x988e0c);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00988344(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00988e0c  FUN_00988e0c =====

/* WARNING: Removing unreachable block (ram,0x009893bc) */
/* WARNING: Removing unreachable block (ram,0x00988fd8) */
/* WARNING: Removing unreachable block (ram,0x00988fbc) */
/* WARNING: Removing unreachable block (ram,0x009893a0) */
/* WARNING: Removing unreachable block (ram,0x009894d4) */

void FUN_00988e0c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  char *pcVar4;
  undefined8 ***pppuVar5;
  char *****pppppcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined ***__src;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  undefined1 *local_3c0;
  undefined1 uStack_3b1;
  char *local_3b0;
  char **ppcStack_3a8;
  ulong local_3a0;
  char **local_398;
  char **local_390;
  ulong *puStack_388;
  undefined1 *local_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined1 *puStack_358;
  undefined1 *local_350;
  undefined8 uStack_348;
  undefined **local_340;
  undefined1 *local_338;
  undefined1 *local_330;
  undefined1 *puStack_328;
  undefined1 *local_320;
  undefined1 *puStack_318;
  undefined1 *local_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined **local_2f8;
  undefined1 *local_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *local_290;
  undefined **ppuStack_288;
  undefined1 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 ****local_230;
  undefined ***pppuStack_228;
  undefined1 **local_220;
  char ***local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined **local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  char ****local_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 local_d0;
  undefined8 ****local_c0;
  undefined ***pppuStack_b8;
  undefined1 **local_b0;
  undefined ***local_a8;
  undefined1 local_a0 [24];
  undefined4 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  
  puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
  local_370 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
  local_360 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_348 = &DAT_aaaaaaaaaaaaaaaa;
  local_350 = &DAT_aaaaaaaaaaaaaaaa;
  local_338 = &DAT_aaaaaaaaaaaaaaaa;
  local_340 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
  local_330 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
  local_320 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
  local_310 = &DAT_aaaaaaaaaaaaaaaa;
  local_2f8 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_300 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_2c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a0 = &DAT_aaaaaaaaaaaaaaaa;
  ppuStack_288 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_290 = &DAT_aaaaaaaaaaaaaaaa;
  local_278 = &DAT_aaaaaaaaaaaaaaaa;
  local_280 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  local_258 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  local_238 = &DAT_aaaaaaaaaaaaaaaa;
  local_240 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
  local_380 = &DAT_aaaaaaaaaaaaaaaa;
  ppppuStack_d8 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (char ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0x10))(&local_e0,param_2,"WebRTC-PixelLimitResource",0x19);
  pppppuVar3 = (undefined8 *****)ppppuStack_d8;
  if (-1 < (char)local_d0._7_1_) {
    pppppuVar3 = (undefined8 *****)(ulong)local_d0._7_1_;
  }
  if (pppppuVar3 == (undefined8 *****)0x0) {
    local_380 = (undefined1 *)((ulong)local_380 & 0xffffffffffffff00);
    local_238 = (undefined1 *)((ulong)local_238 & 0xffffffffffffff00);
    puVar1 = uStack_348;
    puVar2 = local_300;
    puVar7 = uStack_2c0;
    puVar8 = puStack_248;
    if (((uint)(int)(char)local_d0._7_1_ >> 7 & 1) != 0) goto LAB_00989380;
  }
  else {
    pppuStack_228 = (undefined ***)&DAT_aaaaaaaaaaaaaaaa;
    local_230 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
    local_218 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
    local_220 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    local_210 = &DAT_aaaaaaaaaaaaaaaa;
    local_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1f0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    local_138 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    local_118 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    local_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00661054(&local_230,"target_pixels",0xd);
    puVar10 = PTR_DAT_00d52028;
    local_1f8 = (undefined1 *)((ulong)local_1f8 & 0xffffffff);
    local_230 = (undefined8 ****)(PTR_DAT_00d52028 + 0x10);
    FUN_00661054(&local_1f0,"interval",8);
    local_1f0 = &PTR_FUN_00d267f8;
    local_1b0 = (undefined1 *)0x4c4b40;
    FUN_005d3510(&local_c0,&DAT_001e0194);
    local_a8 = (undefined ***)CONCAT44(local_a8._4_4_,1);
    FUN_005d3510(local_a0,"quality");
    local_80 = (char *)&local_78;
    local_88 = 0;
    local_78 = 0;
    local_70 = (undefined1 *)0x0;
    FUN_009897b8(&local_80,&local_c0,&local_80);
    FUN_00989630(&puStack_1a8,"reason",6,1,&local_80);
    local_390 = &local_80;
    FUN_00989d9c(&local_390,local_78);
    FUN_00661054(&local_138,"toggle",6);
    local_138 = &PTR_FUN_00d28120;
    local_f8 = (undefined1 *)((ulong)local_f8 & 0xffffffffffffff00);
    puStack_f0 = (undefined1 *)((ulong)puStack_f0 & 0xffffffffffffff00);
    pppppuVar3 = (undefined8 *****)ppppuStack_d8;
    pppppcVar6 = (char *****)local_e0;
    if (-1 < (long)local_d0) {
      pppppuVar3 = (undefined8 *****)((ulong)local_d0 >> 0x38);
      pppppcVar6 = &local_e0;
    }
    local_c0 = &local_230;
    pppuStack_b8 = &local_1f0;
    local_b0 = &puStack_1a8;
    local_a8 = &local_138;
    FUN_00661cc0(&local_c0,4,pppppcVar6,pppppuVar3);
    __src = pppuStack_228;
    puVar9 = PTR_DAT_00d51fe0;
    local_370 = (undefined1 *)0x0;
    puStack_368 = (undefined1 *)0x0;
    local_380 = PTR_DAT_00d51fe0 + 0x10;
    uVar15 = (long)local_220 - (long)pppuStack_228;
    puStack_378 = (undefined1 *)0x0;
    if (uVar15 != 0) {
      if ((long)uVar15 < 0) goto LAB_00989514;
      puStack_378 = (undefined1 *)operator_new(uVar15);
      puVar1 = puStack_378 + uVar15;
      puStack_368 = puVar1;
      memcpy(puStack_378,__src,uVar15);
      local_370 = puVar1;
    }
    if ((long)local_200 < 0) {
      FUN_005478d8(&local_360,local_210,puStack_208);
    }
    else {
      puStack_358 = puStack_208;
      local_360 = local_210;
      local_350 = local_200;
    }
    puVar1 = puStack_1e8;
    local_380 = puVar10 + 0x10;
    uStack_348 = (undefined1 *)CONCAT71(uStack_348._1_7_,(undefined1)local_1f8);
    local_340 = (undefined **)(puVar9 + 0x10);
    uVar15 = (long)local_1e0 - (long)puStack_1e8;
    uStack_348 = (undefined1 *)CONCAT44(local_1f8._4_4_,(undefined4)uStack_348);
    local_338 = (undefined1 *)0x0;
    local_330 = (undefined1 *)0x0;
    puStack_328 = (undefined1 *)0x0;
    if (uVar15 != 0) {
      if ((long)uVar15 < 0) goto LAB_00989514;
      local_338 = (undefined1 *)operator_new(uVar15);
      puVar2 = local_338 + uVar15;
      local_330 = local_338;
      puStack_328 = puVar2;
      memcpy(local_338,puVar1,uVar15);
      local_330 = puVar2;
    }
    if ((long)local_1c0 < 0) {
      FUN_005478d8(&local_320,local_1d0,puStack_1c8);
    }
    else {
      puStack_318 = puStack_1c8;
      local_320 = local_1d0;
      local_310 = local_1c0;
    }
    local_340 = &PTR_FUN_00d267f8;
    puStack_308 = (undefined1 *)CONCAT71(puStack_308._1_7_,local_1b8._0_1_);
    local_300 = local_1b0;
    FUN_00662644(&local_2f8,&puStack_1a8);
    puVar1 = local_130;
    local_2f8 = &PTR_FUN_00d3f860;
    ppuStack_288 = (undefined **)(puVar9 + 0x10);
    local_280 = (undefined1 *)0x0;
    uVar15 = (long)puStack_128 - (long)local_130;
    local_278 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    if (uVar15 != 0) {
      if ((long)uVar15 < 0) {
LAB_00989514:
                    /* WARNING: Subroutine does not return */
        FUN_005edb98();
      }
      local_280 = (undefined1 *)operator_new(uVar15);
      puVar2 = local_280 + uVar15;
      local_278 = local_280;
      local_270 = puVar2;
      memcpy(local_280,puVar1,uVar15);
      local_278 = puVar2;
    }
    if ((long)puStack_108 < 0) {
      FUN_005478d8(&puStack_268,local_118,local_110);
    }
    else {
      puStack_260 = local_110;
      puStack_268 = local_118;
      local_258 = puStack_108;
    }
    ppuStack_288 = &PTR_FUN_00d28120;
    local_250 = (undefined1 *)CONCAT71(local_250._1_7_,local_100._0_1_);
    local_240 = puStack_f0;
    puStack_248 = local_f8;
    local_238 = (undefined1 *)CONCAT71(local_238._1_7_,1);
    FUN_006634ac(&local_138);
    FUN_006627a0(&puStack_1a8);
    FUN_006634ac(&local_1f0);
    FUN_006634ac(&local_230);
    puVar1 = uStack_348;
    puVar2 = local_300;
    puVar7 = uStack_2c0;
    puVar8 = puStack_248;
    if ((long)local_d0 < 0) {
LAB_00989380:
      operator_delete(local_e0);
      puVar1 = uStack_348;
      puVar2 = local_300;
      puVar7 = uStack_2c0;
      puVar8 = puStack_248;
    }
  }
  if (((ulong)local_238 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    uStack_348._4_4_ = (undefined4)((ulong)puVar1 >> 0x20);
    uVar11 = uStack_348._4_4_;
    uStack_2c0._4_4_ = (int)((ulong)puVar7 >> 0x20);
    uVar12 = uStack_2c0._4_4_;
    uVar15 = (ulong)local_240 & 0xff;
    uStack_348 = puVar1;
    local_300 = puVar2;
    uStack_2c0 = puVar7;
    puStack_248 = puVar8;
    puVar13 = (undefined8 *)operator_new(0x68);
    FUN_00979944();
    puVar13[1] = param_3;
    puVar13[2] = param_4;
    *(undefined1 *)(puVar13 + 8) = 1;
    *(undefined4 *)(puVar13 + 3) = uVar11;
    puVar13[4] = puVar2;
    *(undefined4 *)(puVar13 + 5) = uVar12;
    puVar13[6] = puVar8;
    puVar13[7] = uVar15;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[9] = 0;
    *puVar13 = &PTR_FUN_00d3f890;
    *(undefined4 *)(puVar13 + 0xc) = 0;
    *param_1 = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar13 + 0xc);
    }
    uVar15 = FUN_00417e08();
    if ((uVar15 & 1) == 0) {
      local_80 = "../../video/adaptation/pixel_limit_resource.cc";
      local_78 = 0x369;
      local_70 = &uStack_3b1;
      ppcStack_3a8 = &local_80;
      local_3b0 = "Running with PixelLimitResource {target_pixels:";
      if (((ulong)local_238 & 1) == 0) {
LAB_00989500:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      local_3a0 = (ulong)uStack_348 >> 0x20;
      local_398 = &local_3b0;
      puStack_388 = &local_3a0;
      local_3c0 = local_300;
      local_390 = (char **)0x1e0198;
      FUN_005f3380(&local_c0,&local_3c0);
      local_218 = &local_390;
      pppuStack_228 = pppuStack_b8;
      local_230 = local_c0;
      local_220 = local_b0;
      ppppuStack_d8 = &local_230;
      local_e0 = (char ****)0x1acc43;
      if (((ulong)local_238 & 1) == 0) goto LAB_00989500;
      pcVar4 = "quality";
      if (uStack_2c0._4_4_ != 0) {
        pcVar4 = "cpu";
      }
      if (((ulong)local_240 & 1) == 0) {
        FUN_005d3510(&local_c0,&DAT_001b0855);
      }
      else {
        FUN_006224f8(&local_c0,puStack_248);
      }
      pppuVar5 = (undefined8 ***)ppppuStack_d8[3][1];
      ppuVar14 = pppuVar5[1];
      puVar13 = ppuVar14[1];
      FUN_00623bb0(&DAT_0022a819,*puVar13,*(undefined4 *)(puVar13 + 1),*ppuVar14,
                   *(undefined4 *)pppuVar5,*ppppuStack_d8[3],ppppuStack_d8,local_e0,pcVar4,
                   ", toggle:",&local_c0,&DAT_001b0cbb);
      if ((long)local_220 < 0) {
        operator_delete(local_230);
      }
    }
    if ((char)local_238 == '\x01') {
      FUN_006634ac(&ppuStack_288);
      FUN_006627a0(&local_2f8);
      FUN_006634ac(&local_340);
      FUN_006634ac(&local_380);
    }
  }
  return;
}


// ===== 00989518  FUN_00989518 =====

void FUN_00989518(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x989520);
  (*pcVar1)();
}


// ===== 00989520  FUN_00989520 =====

void FUN_00989520(long param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  *(long *)(param_1 + 0x50) = param_2;
  FUN_00841cf8(param_1 + 0x58);
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00989f88;
    local_50[0] = param_1;
    uVar3 = FUN_00622394();
    FUN_00841954(&local_18,uVar4,uVar6,local_50,0,uVar3,&uStack_51);
    pvVar1 = local_18;
    pvVar5 = *(void **)(param_1 + 0x58);
    local_18 = (void *)0x0;
    *(void **)(param_1 + 0x58) = pvVar1;
    if (pvVar5 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar5);
      if (iVar2 == 1) {
        operator_delete(pvVar5);
      }
      pvVar1 = local_18;
      if ((local_18 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_18), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 0098961c  FUN_0098961c =====

void FUN_0098961c(undefined8 param_1)

{
  FUN_005d3510(param_1,"PixelLimitResource");
  return;
}


// ===== 00989630  FUN_00989630 =====

void FUN_00989630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  undefined4 uVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 ***local_68;
  undefined8 **local_48;
  
  local_98 = (undefined8 ****)0x0;
  local_90 = 0;
  local_a0 = &local_98;
  if (*(long *)(param_5 + 0x10) == 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_88 = &local_80;
  }
  else {
    local_98 = (undefined8 ***)FUN_00989cb4(&local_a0,*(undefined8 *)(param_5 + 8),&local_a0);
    ((undefined8 ****)local_98)[2] = &local_98;
    ppppuVar2 = (undefined8 ****)local_98;
    do {
      ppppuVar6 = ppppuVar2;
      ppppuVar2 = (undefined8 ****)*ppppuVar6;
    } while ((undefined8 ****)*ppppuVar6 != (undefined8 ****)0x0);
    local_90 = *(undefined8 *)(param_5 + 0x10);
    local_88 = &local_80;
    local_80 = 0;
    uStack_78 = 0;
    local_a0 = ppppuVar6;
    while (ppppuVar6 != &local_98) {
      local_68 = ppppuVar6 + 4;
      uVar1 = *(undefined4 *)(ppppuVar6 + 7);
      local_48 = &local_88;
      lVar4 = FUN_00989b44(&local_48,ppppuVar6 + 4,&DAT_001f94c3,&local_68,&uStack_69);
      *(undefined4 *)(lVar4 + 0x38) = uVar1;
      ppppuVar2 = (undefined8 ****)ppppuVar6[1];
      ppppuVar5 = ppppuVar6;
      if ((undefined8 ****)ppppuVar6[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar6 = (undefined8 ****)ppppuVar5[2];
          bVar3 = ppppuVar5 != (undefined8 ****)*ppppuVar6;
          ppppuVar5 = ppppuVar6;
        } while (bVar3);
      }
      else {
        do {
          ppppuVar6 = ppppuVar2;
          ppppuVar2 = (undefined8 ****)*ppppuVar6;
        } while ((undefined8 ****)*ppppuVar6 != (undefined8 ****)0x0);
      }
    }
  }
  FUN_00662540(param_1,param_2,param_3,param_4,&local_88);
  local_48 = &local_88;
  FUN_00663680(&local_48,local_80);
  local_48 = &local_a0;
  FUN_00989d9c(&local_48,local_98);
  *param_1 = &PTR_FUN_00d3f860;
  return;
}


// ===== 009897b8  FUN_009897b8 =====

void FUN_009897b8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_50;
  long *plStack_48;
  long local_28;
  
  if (param_2 != param_3) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      puVar2 = (undefined8 *)operator_new(0x40);
      if (puVar2 == (undefined8 *)0x0) {
LAB_009898c8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = puVar2 + 4;
      *puVar2 = 0;
      if (puVar3 == (undefined8 *)0x0) goto LAB_009898c8;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(puVar3,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        uVar5 = param_2[2];
        puVar2[5] = param_2[1];
        *puVar3 = uVar6;
        puVar2[6] = uVar5;
      }
      uVar1 = *(undefined4 *)(param_2 + 3);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = param_1 + 1;
      *(undefined4 *)(puVar2 + 7) = uVar1;
      param_1[1] = (long)puVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(puVar2,puVar2);
      param_2 = param_2 + 4;
      param_1[2] = param_1[2] + 1;
      lVar4 = param_1[1];
    }
    do {
      local_28 = lVar4;
      lVar4 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_50 = param_1;
        plStack_48 = &local_28;
        FUN_009898dc(&local_50,param_2,param_2);
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 009898dc  FUN_009898dc =====

void FUN_009898dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  plVar11 = (long *)param_1[1];
  plVar10 = (long *)*param_1;
  lVar8 = *plVar11;
  uVar1 = *(ulong *)(lVar8 + 0x28);
  puVar6 = (undefined8 *)*(void **)(lVar8 + 0x20);
  if (-1 < (char)*(byte *)(lVar8 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar8 + 0x37);
    puVar6 = (undefined8 *)(lVar8 + 0x20);
  }
  puVar7 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar2 = uVar4;
  if (uVar1 <= uVar4) {
    sVar2 = uVar1;
  }
  iVar5 = memcmp(puVar6,puVar7,sVar2);
  if (iVar5 == 0) {
    if (uVar4 <= uVar1) goto LAB_00989994;
  }
  else if (-1 < iVar5) {
LAB_00989994:
    plVar12 = plVar10 + 1;
    plVar11 = (long *)*plVar12;
    plVar13 = plVar12;
    if ((long *)*plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = plVar11;
          plVar11 = (long *)plVar12[4];
          uVar1 = plVar12[5];
          if (-1 < (char)*(byte *)((long)plVar12 + 0x37)) {
            plVar11 = plVar12 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar12 + 0x37);
          }
          sVar2 = uVar1;
          if (uVar4 <= uVar1) {
            sVar2 = uVar4;
          }
          iVar5 = memcmp(puVar7,plVar11,sVar2);
          if (iVar5 == 0) break;
          if (-1 < iVar5) goto LAB_009899a8;
LAB_009899f8:
          plVar11 = (long *)*plVar12;
          plVar13 = plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_00989a68;
        }
        if (uVar4 == uVar1) {
          return;
        }
        if (uVar4 < uVar1) goto LAB_009899f8;
LAB_009899a8:
        plVar11 = (long *)plVar12[1];
      } while ((long *)plVar12[1] != (long *)0x0);
      plVar13 = plVar12 + 1;
    }
LAB_00989a68:
    puVar6 = (undefined8 *)operator_new(0x40);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6 + 4;
      *puVar6 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_005478d8(puVar7,*param_3,param_3[1]);
        }
        else {
          uVar14 = *param_3;
          uVar9 = param_3[2];
          puVar6[5] = param_3[1];
          *puVar7 = uVar14;
          puVar6[6] = uVar9;
        }
        uVar3 = *(undefined4 *)(param_3 + 3);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = plVar12;
        *(undefined4 *)(puVar6 + 7) = uVar3;
        *plVar13 = (long)puVar6;
        if (*(long *)*plVar10 != 0) {
          *plVar10 = *(long *)*plVar10;
          puVar6 = (undefined8 *)*plVar13;
        }
        FUN_005d5b94(plVar10[1],puVar6);
        plVar10[2] = plVar10[2] + 1;
        return;
      }
    }
    goto LAB_00989b00;
  }
  puVar6 = (undefined8 *)operator_new(0x40);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6 + 4;
    *puVar6 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*param_3,param_3[1]);
        plVar11 = (long *)param_1[1];
      }
      else {
        uVar14 = *param_3;
        uVar9 = param_3[2];
        puVar6[5] = param_3[1];
        *puVar7 = uVar14;
        puVar6[6] = uVar9;
      }
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_3 + 3);
      lVar8 = *plVar11;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = lVar8;
      *(undefined8 **)(lVar8 + 8) = puVar6;
      puVar7 = puVar6;
      if (*(long *)*plVar10 != 0) {
        *plVar10 = *(long *)*plVar10;
        puVar7 = *(undefined8 **)(lVar8 + 8);
      }
      FUN_005d5b94(plVar10[1],puVar7);
      plVar10[2] = plVar10[2] + 1;
      *(undefined8 **)param_1[1] = puVar6;
      return;
    }
  }
LAB_00989b00:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00989b14  FUN_00989b14 =====

void FUN_00989b14(void *param_1)

{
  FUN_006627a0();
  operator_delete(param_1);
  return;
}


// ===== 00989b44  FUN_00989b44 =====

undefined1  [16]
FUN_00989b44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00989c78;
        }
        if (uVar2 <= uVar1) goto LAB_00989b8c;
LAB_00989bdc:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00989bf8;
      }
      if (iVar3 < 0) goto LAB_00989bdc;
LAB_00989b8c:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00989bf8:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*param_4;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*plVar7,plVar7[1]);
      }
      else {
        lVar12 = plVar7[1];
        lVar11 = *plVar7;
        plVar4[6] = plVar7[2];
        plVar4[5] = lVar12;
        *plVar6 = lVar11;
      }
      *(undefined4 *)(plVar4 + 7) = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00989c78:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00989cb4  FUN_00989cb4 =====

long * FUN_00989cb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)operator_new(0x40);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 4;
    *plVar2 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        FUN_005478d8(plVar3,param_2[4],param_2[5]);
      }
      else {
        lVar4 = param_2[4];
        lVar6 = param_2[6];
        plVar2[5] = param_2[5];
        *plVar3 = lVar4;
        plVar2[6] = lVar6;
      }
      uVar5 = *param_2;
      *(undefined4 *)(plVar2 + 7) = *(undefined4 *)(param_2 + 7);
      lVar6 = FUN_00989cb4(param_1,uVar5,param_3);
      lVar4 = FUN_00989cb4(param_1,param_2[1],param_3);
      uVar1 = *(undefined1 *)(param_2 + 3);
      *plVar2 = lVar6;
      plVar2[1] = lVar4;
      *(undefined1 *)(plVar2 + 3) = uVar1;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar2;
        lVar4 = plVar2[1];
      }
      if (lVar4 == 0) {
        return plVar2;
      }
      *(long **)(lVar4 + 0x10) = plVar2;
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00989d9c  FUN_00989d9c =====

void FUN_00989d9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00989d9c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00989e30  FUN_00989e30 =====

void FUN_00989e30(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x60);
  return;
}


// ===== 00989e54  FUN_00989e54 =====

bool FUN_00989e54(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xc);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00989eac  FUN_00989eac =====

void FUN_00989eac(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d3f820;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_00979958(param_1);
  return;
}


// ===== 00989f08  FUN_00989f08 =====

void FUN_00989f08(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d3f820;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_00979958(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00989f70  FUN_00989f70 =====

bool FUN_00989f70(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x60) == 1;
}


// ===== 00989f88  FUN_00989f88 =====

long FUN_00989f88(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *local_40 [4];
  
  plVar8 = (long *)*param_1;
  plVar9 = (long *)plVar8[10];
  if (plVar9 == (long *)0x0) goto LAB_0098a114;
  if ((char)plVar8[8] == '\x01') {
    (**(code **)(*(long *)plVar8[2] + 0x10))(local_40);
    uVar4 = FUN_0097effc(local_40);
    if ((uVar4 >> 0x20 & 1) != 0) {
      iVar3 = FUN_0097cd18((int)plVar8[3]);
      if ((int)plVar8[3] < (int)uVar4) {
        plVar9 = (long *)plVar8[10];
        local_40[0] = plVar8;
        if (plVar8 != (long *)0x0) {
          (**(code **)*plVar8)(plVar8);
        }
        lVar6 = *plVar9;
        uVar5 = 0;
        goto LAB_0098a050;
      }
      if ((int)uVar4 < iVar3) {
        plVar9 = (long *)plVar8[10];
        goto LAB_0098a028;
      }
    }
  }
  else {
LAB_0098a028:
    local_40[0] = plVar8;
    if (plVar8 != (long *)0x0) {
      (**(code **)*plVar8)(plVar8);
    }
    lVar6 = *plVar9;
    uVar5 = 1;
LAB_0098a050:
    (**(code **)(lVar6 + 0x10))(plVar9,local_40,uVar5);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  if ((char)plVar8[7] == '\x01') {
    lVar6 = plVar8[9];
    if ((lVar6 == 0x7fffffffffffffff) || (lVar7 = plVar8[4], lVar7 == 0x7fffffffffffffff)) {
      plVar8[9] = 0x7fffffffffffffff;
    }
    else {
      lVar1 = -0x8000000000000000;
      if (lVar7 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
        lVar1 = lVar6 + lVar7;
      }
      plVar8[9] = lVar1;
      if (lVar1 < plVar8[6]) goto LAB_0098a114;
    }
    *(byte *)(plVar8 + 8) = *(byte *)(plVar8 + 8) ^ 1;
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      puVar2 = &DAT_001eb19b;
      if ((char)plVar8[8] == '\0') {
        puVar2 = &DAT_001b4a9e;
      }
      FUN_00623bb0(&DAT_001f4ed3,"../../video/adaptation/pixel_limit_resource.cc",0x5e9,
                   "PixelLimitResource toggled ",puVar2);
    }
    plVar8[9] = 0;
  }
LAB_0098a114:
  return plVar8[4];
}


// ===== 0098a12c  FUN_0098a12c =====

void FUN_0098a12c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_00d3f8d8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x10);
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  uVar2 = param_3[5];
  uVar1 = param_3[4];
  uVar4 = param_3[1];
  uVar3 = *param_3;
  param_1[8] = param_3[6];
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}


// ===== 0098a160  FUN_0098a160 =====

void FUN_0098a160(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  long lVar1;
  undefined1 extraout_w1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  long local_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined1 *local_48;
  
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = FUN_009469c8(param_3,*param_6);
  local_48 = (undefined1 *)CONCAT71(local_48._1_7_,extraout_w1);
  if (*(ulong *)(param_6 + 0x30) < 2) {
LAB_0098a20c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = FUN_0098ce78(param_6);
    if ((uVar2 & 1) == 0) {
      FUN_0098a994(&local_68,param_2,param_4,param_5,param_6,&local_50);
      goto LAB_0098a268;
    }
  }
  else {
    lVar1 = *(long *)(param_6 + 0x2a);
    if (*(long *)(param_6 + 0x2c) - lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    if (*(char *)(lVar1 + 0x51) == '\x01') {
      uVar2 = (*(long *)(param_6 + 0x2c) - lVar1 >> 3) * -0x70a3d70a3d70a3d7;
      if (1 < uVar2) {
        lVar3 = uVar2 - 1;
        pbVar4 = (byte *)(lVar1 + 0x11a);
        do {
          if ((*pbVar4 & 1) != 0) goto LAB_0098a240;
          lVar3 = lVar3 + -1;
          pbVar4 = pbVar4 + 200;
        } while (lVar3 != 0);
      }
      goto LAB_0098a20c;
    }
LAB_0098a240:
    param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
    *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
  }
  FUN_0098a2d8(&local_68,param_2,param_3,param_4,param_5,param_6,&local_50);
LAB_0098a268:
  *param_1 = local_68;
  param_1[2] = lStack_58;
  param_1[1] = local_60;
  if (local_60 != local_68) {
    *(undefined8 *)(local_68 + 0x40) = *(undefined8 *)(param_6 + 0x28);
    *(undefined1 *)(local_68 + 0x48) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0098a2d8  FUN_0098a2d8 =====

void FUN_0098a2d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6,undefined4 *param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  int *piVar27;
  ulong *puVar28;
  int iVar29;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long *local_58;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0098b2b4(&local_70);
  lVar15 = (long)puStack_68 - (long)local_70;
  param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
  puVar18 = (undefined1 *)0x0;
  if (lVar15 != 0) {
    puVar18 = local_70;
  }
  param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
  uVar10 = FUN_0098ce78(param_6);
  FUN_0098d70c(param_1,puVar18,lVar15 >> 3,uVar10 & 1,*param_6 == 5 || *param_6 - 1 < 3,param_3);
  if (param_1[1] == *param_1) goto LAB_0098a97c;
  if (*(char *)(param_7 + 2) == '\0') {
    param_7 = &DAT_002285a8;
  }
  *(undefined4 *)(*param_1 + 0x14) = *param_7;
  uVar10 = *param_6;
  lVar15 = *param_1;
  if (param_1[1] == lVar15) {
LAB_0098a954:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  uVar20 = 0;
  lVar22 = 0x30;
  do {
    lVar23 = *(long *)(param_6 + 0x2a);
    if ((ulong)((*(long *)(param_6 + 0x2c) - lVar23 >> 3) * -0x70a3d70a3d70a3d7) <= uVar20)
    goto LAB_0098a954;
    plVar1 = (long *)(lVar23 + lVar22);
    plVar2 = (long *)(lVar15 + lVar22);
    *(undefined1 *)((long)plVar2 + 0x22) = *(undefined1 *)((long)plVar1 + 0x22);
    *(short *)(plVar2 + 4) = (short)plVar1[4];
    uVar11 = *(undefined8 *)((long)plVar1 + 0x24);
    *(undefined1 *)((long)plVar2 + 0x2c) = *(undefined1 *)((long)plVar1 + 0x2c);
    *(undefined8 *)((long)plVar2 + 0x24) = uVar11;
    plVar2[-2] = plVar1[-2];
    bVar6 = 0;
    if (*plVar1 != 0) {
      bVar6 = *(byte *)(plVar1 + 1);
    }
    if (((uVar10 == 5 || uVar10 - 1 < 3) & bVar6) == 1) {
      *plVar2 = *plVar1;
      *(undefined1 *)(plVar2 + 1) = 1;
    }
    if (0 < (int)plVar1[-4]) {
      *(int *)(lVar15 + lVar22 + -0x20) = (int)plVar1[-4];
    }
    lVar3 = lVar23 + lVar22;
    if (0 < *(int *)(lVar3 + -0x1c)) {
      *(int *)(lVar15 + lVar22 + -0x1c) = *(int *)(lVar3 + -0x1c);
    }
    if (0 < *(int *)(lVar3 + -0x14)) {
      *(int *)(lVar15 + lVar22 + -0x14) = *(int *)(lVar3 + -0x14);
    }
    lVar4 = lVar23 + lVar22;
    if (0 < *(int *)(lVar4 + -0x18)) {
      *(int *)(lVar15 + lVar22 + -0x18) = *(int *)(lVar4 + -0x18);
    }
    if (*(int *)(lVar3 + -0x1c) < 1) {
      if (0 < *(int *)(lVar3 + -0x14)) {
        piVar26 = (int *)(lVar15 + lVar22 + -0x1c);
        piVar27 = (int *)(lVar15 + lVar22 + -0x14);
        iVar29 = *piVar27;
        iVar19 = iVar29;
        if (*piVar26 <= iVar29) {
          iVar19 = *piVar26;
        }
        *piVar26 = iVar19;
        lVar3 = lVar15 + lVar22;
        if (*(int *)(lVar4 + -0x18) < 1) {
          iVar14 = iVar29 * 3;
          iVar7 = iVar14 + 3;
          if (-1 < iVar14) {
            iVar7 = iVar14;
          }
          iVar14 = *(int *)(lVar3 + -0x18);
          if (*(int *)(lVar3 + -0x18) <= iVar7 >> 2) {
            iVar14 = iVar7 >> 2;
          }
          *(int *)(lVar3 + -0x18) = iVar14;
        }
        else {
          iVar14 = *(int *)(lVar3 + -0x18);
        }
        if (iVar14 <= iVar29) {
          piVar27 = (int *)(lVar15 + lVar22 + -0x18);
        }
        if (iVar19 <= iVar14) {
          piVar26 = piVar27;
        }
        iVar19 = *piVar26;
LAB_0098a5c8:
        *(int *)(lVar15 + lVar22 + -0x18) = iVar19;
      }
    }
    else if (*(int *)(lVar3 + -0x14) < 1) {
      lVar3 = lVar15 + lVar22;
      uVar11 = NEON_smax(*(undefined8 *)(lVar3 + -0x18),
                         CONCAT44(*(undefined4 *)(lVar3 + -0x1c),*(undefined4 *)(lVar3 + -0x1c)),4);
      *(undefined8 *)(lVar3 + -0x18) = uVar11;
    }
    else {
      if (*(int *)(lVar4 + -0x18) < 1) {
        iVar29 = *(int *)(lVar15 + lVar22 + -0x14) * 3;
        iVar19 = iVar29 + 3;
        if (-1 < iVar29) {
          iVar19 = iVar29;
        }
        iVar19 = iVar19 >> 2;
        *(int *)(lVar15 + lVar22 + -0x18) = iVar19;
      }
      else {
        iVar19 = *(int *)(lVar15 + lVar22 + -0x18);
      }
      if (iVar19 < *(int *)(lVar15 + lVar22 + -0x1c)) {
        iVar19 = *(int *)(lVar15 + lVar22 + -0x14);
        goto LAB_0098a5c8;
      }
    }
    uVar24 = *(uint *)(lVar23 + lVar22 + -8);
    if (((int)uVar24 < 1) && (uVar24 = param_6[0x33], (int)uVar24 < 1)) {
      uVar24 = *(uint *)(&PTR_DAT_00d3f900)[*param_6];
    }
    lVar15 = lVar15 + lVar22;
    uVar20 = uVar20 + 1;
    lVar22 = lVar22 + 200;
    *(uint *)(lVar15 + -8) = uVar24;
    lVar15 = *param_1;
    lVar23 = param_1[1];
    uVar25 = (lVar23 - lVar15 >> 3) * -0x70a3d70a3d70a3d7;
  } while (uVar20 < uVar25);
  uVar25 = uVar25 - 1;
  if ((ulong)((*(long *)(param_6 + 0x2c) - *(long *)(param_6 + 0x2a) >> 3) * -0x70a3d70a3d70a3d7) <=
      uVar25) goto LAB_0098a954;
  if (((param_6[0x22] != 1) && (*(int *)(*(long *)(param_6 + 0x2a) + uVar25 * 200 + 0x1c) < 1)) &&
     (0 < (int)param_6[0x27])) {
    FUN_0098d60c(param_6[0x27],param_1);
    lVar15 = *param_1;
    lVar23 = param_1[1];
  }
  if (lVar23 - lVar15 == 0) {
    puVar28 = (ulong *)0x0;
    puVar12 = (ulong *)0x0;
  }
  else {
    lVar15 = lVar23 - lVar15 >> 3;
    if ((ulong)(lVar15 * -0x70a3d70a3d70a3d7) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005ff43c();
    }
    puVar12 = (ulong *)operator_new(lVar15 * 0x7ae147ae147ae148);
    uVar16 = lVar15 * 0x7ae147ae147ae148 - 8;
    uVar20 = uVar16 >> 3;
    puVar28 = puVar12 + lVar15 * 0xf5c28f5c28f5c29;
    uVar25 = uVar20;
    if ((ulong)-(long)puVar12 >> 3 <= uVar20) {
      uVar25 = (ulong)-(long)puVar12 >> 3;
    }
    puVar21 = puVar12;
    if ((5 < uVar25) && ((-(int)puVar12 & 7U) == 0)) {
      uVar5 = uVar25 + 1 & 3;
      uVar8 = 4;
      if (uVar5 != 0) {
        uVar8 = uVar5;
      }
      puVar17 = puVar12 + 2;
      lVar15 = (uVar25 + 1) - uVar8;
      puVar21 = puVar12 + lVar15;
      do {
        lVar15 = lVar15 + -4;
        puVar17[-1] = 0;
        puVar17[-2] = 0;
        puVar17[1] = 0;
        *puVar17 = 0;
        puVar17 = puVar17 + 4;
      } while (lVar15 != 0);
    }
    do {
      if (puVar21 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar17 = puVar21 + 1;
      *puVar21 = 0;
      puVar21 = puVar17;
    } while (puVar17 != puVar28);
    if (uVar16 < 0x18) {
      uVar16 = 0;
      puVar17 = puVar12;
    }
    else {
      uVar20 = uVar20 + 1;
      uVar16 = uVar20 & 0x3ffffffffffffffc;
      uVar25 = uVar20 & 0x3ffffffffffffffc;
      puVar17 = puVar12 + uVar16;
      puVar21 = puVar12 + 2;
      uVar11 = DAT_001f5170;
      do {
        iVar19 = (int)uVar11;
        iVar29 = (int)((ulong)uVar11 >> 0x20);
        uVar25 = uVar25 - 4;
        uVar11 = CONCAT44(iVar29 + 4,iVar19 + 4);
        puVar21[-1] = (long)iVar29;
        puVar21[-2] = (long)iVar19;
        puVar21[1] = (long)(iVar29 + 2);
        *puVar21 = (long)(iVar19 + 2);
        puVar21 = puVar21 + 4;
      } while (uVar25 != 0);
      if (uVar20 == uVar16) goto LAB_0098a76c;
    }
    do {
      iVar19 = (int)uVar16;
      uVar16 = (ulong)(iVar19 + 1);
      puVar21 = puVar17 + 1;
      *puVar17 = (long)iVar19;
      puVar17 = puVar21;
    } while (puVar21 != puVar28);
  }
LAB_0098a76c:
  puVar9 = PTR_DAT_00d51ca8;
  uVar25 = (long)puVar28 - (long)puVar12 >> 3;
  uVar20 = uVar25;
  local_58 = param_1;
  if (0x80 < (long)uVar25) {
    do {
      pvVar13 = (void *)FUN_00546b60(uVar20 << 3,puVar9);
      if (pvVar13 != (void *)0x0) {
        FUN_0098bab4(puVar12,puVar28,&local_58,uVar25,pvVar13,uVar20);
        operator_delete(pvVar13);
        goto joined_r0x0098a7f8;
      }
      uVar20 = uVar20 >> 1;
    } while (uVar20 != 0);
  }
  FUN_0098bab4(puVar12,puVar28,&local_58,uVar25,0,0);
joined_r0x0098a7f8:
  if (puVar28 == puVar12) {
LAB_0098a97c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  lVar15 = *param_1;
  uVar20 = (param_1[1] - lVar15 >> 3) * -0x70a3d70a3d70a3d7;
  if (uVar20 <= *puVar12) goto LAB_0098a97c;
  lVar22 = lVar15 + *puVar12 * 200;
  if ((*(byte *)(lVar22 + 0x52) & 1) == 0) {
    uVar16 = 0;
    do {
      if ((uVar25 == uVar16) || (uVar20 <= puVar12[uVar16])) goto LAB_0098a97c;
      lVar23 = lVar15 + puVar12[uVar16] * 200;
      if (*(char *)(lVar23 + 0x52) == '\x01') {
        *(undefined4 *)(lVar23 + 0x14) = *(undefined4 *)(lVar22 + 0x14);
        break;
      }
      uVar16 = uVar16 + 1;
    } while (uVar20 - uVar16 != 0);
  }
  if (puVar12 != (ulong *)0x0) {
    if ((ulong)((long)puVar28 + (-8 - ((long)puVar28 << 0x3d))) <
        (ulong)(((long)puVar12 - (long)puVar28 << 0x3d) - ((long)puVar12 - (long)puVar28)))
    goto LAB_0098a910;
    operator_delete(puVar12);
  }
  if (local_70 == (undefined1 *)0x0) {
    return;
  }
  uVar20 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3d) - ((long)local_70 - (long)puStack_68)
                  ) >> 3;
  if ((ulong)(puStack_68 + (-8 - ((long)puStack_68 << 0x3d))) >> 3 <= uVar20) {
    uVar20 = (ulong)(puStack_68 + (-8 - ((long)puStack_68 << 0x3d))) >> 3;
  }
  puVar18 = puStack_68;
  if ((1 < uVar20) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 7U) == 0)) {
    uVar20 = uVar20 & 0x1ffffffffffffffe;
    puVar18 = puStack_68 + uVar20 * -8;
    do {
      uVar20 = uVar20 - 2;
    } while (uVar20 != 0);
  }
  do {
    if (puVar18 == local_70) {
      puStack_68 = local_70;
      operator_delete(local_70);
      return;
    }
    puVar18 = puVar18 + -8;
  } while (puVar18 != (undefined1 *)0x0);
LAB_0098a910:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0098a994  FUN_0098a994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0098a994(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4,uint *param_5,
                 ulong *param_6)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  long lVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  int *piVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 local_180 [44];
  undefined1 local_154;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 uStack_ed;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
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
  undefined8 uStack_88;
  undefined1 *local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(param_5 + 0x2a);
  if (*(long *)(param_5 + 0x2c) == lVar8) goto LAB_0098afe4;
  uVar18 = *(uint *)(lVar8 + 0x1c);
  uVar13 = param_5[0x22];
  if ((int)uVar18 < 1) {
    uVar10 = param_5[0x27];
    if (0 < (int)uVar10) {
      uVar20 = 0;
      uVar16 = 0xaaaaaa;
      goto LAB_0098aa24;
    }
    uVar18 = param_4 * param_3;
    if ((int)uVar18 < 0x12c01) {
      uVar10 = 600;
    }
    else if (uVar18 < 0x4b001) {
      uVar10 = 0x6a4;
    }
    else {
      uVar10 = 2000;
      if (0x7e900 < uVar18) {
        uVar10 = 0x9c4;
      }
    }
    bVar1 = false;
    uVar18 = uVar10;
    if (uVar10 < 0x4b1) {
      uVar18 = 0x4b0;
    }
    if (uVar13 != 1) {
      uVar18 = uVar10;
    }
    uVar18 = uVar18 * 1000;
  }
  else {
    uVar10 = param_5[0x27];
    uVar16 = uVar18 >> 8;
    uVar20 = uVar18;
    if (0 < (int)uVar10) {
LAB_0098aa24:
      uVar16 = uVar20 & 0xff | uVar16 << 8;
      if ((int)uVar10 <= (int)uVar16) {
        uVar16 = uVar10;
      }
      bVar1 = (int)uVar18 < 1;
      uVar18 = uVar16;
      if (bVar1) {
        uVar18 = uVar10;
      }
      uVar16 = uVar18 >> 8;
    }
    uVar18 = uVar18 & 0xff | uVar16 << 8;
    bVar1 = true;
  }
  if ((char)param_6[1] == '\x01') {
    uVar11 = *param_6;
    uVar10 = 2;
    if ((long)uVar11 < 0x80000000) {
      uVar10 = 0;
    }
    if ((long)uVar11 < -0x80000000) {
      uVar10 = uVar10 + 1;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        uVar11 = 0x80000000;
      }
    }
    else {
      if (uVar10 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      uVar11 = 0x7fffffff;
    }
  }
  else {
    uVar11 = (ulong)DAT_002285a8;
  }
  uVar16 = *(uint *)(lVar8 + 0x14);
  uStack_b8 = _UNK_0022a8b0;
  local_c0 = _DAT_0022a8a8;
  uStack_a8 = _UNK_0022a8c0;
  uStack_b0 = _DAT_0022a8b8;
  uVar10 = uVar16;
  if ((int)uVar16 <= (int)uVar18) {
    uVar10 = uVar18;
  }
  uStack_98 = _UNK_0022a8d0;
  local_a0 = _DAT_0022a8c8;
  uStack_88 = _UNK_0022a8e0;
  uStack_90 = _DAT_0022a8d8;
  bVar7 = bVar1;
  if ((int)uVar16 < 1) {
    uVar16 = (uint)uVar11;
    bVar7 = true;
  }
  uStack_f8 = _UNK_0022a870;
  local_100 = _DAT_0022a868;
  uStack_e8 = (undefined4)_UNK_0022a880;
  local_e4 = (undefined4)((ulong)_UNK_0022a880 >> 0x20);
  local_f0 = (undefined2)_DAT_0022a878;
  local_ee = (undefined1)((ulong)_DAT_0022a878 >> 0x10);
  uStack_ed = (undefined1)((ulong)_DAT_0022a878 >> 0x18);
  local_ec = (undefined4)((ulong)_DAT_0022a878 >> 0x20);
  uVar20 = uVar18;
  if (!bVar7) {
    uVar20 = uVar10;
  }
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  iVar21 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) < 1) {
    iVar21 = *(int *)PTR_DAT_00d522e8;
  }
  uStack_d8 = _UNK_0022a890;
  local_e0 = _DAT_0022a888;
  uStack_c8 = _UNK_0022a8a0;
  uStack_d0 = _DAT_0022a898;
  lStack_138 = _UNK_0022a830;
  local_140 = _DAT_0022a828;
  local_128 = _UNK_0022a840;
  local_130 = _DAT_0022a838;
  uStack_118 = _UNK_0022a850;
  local_120 = _DAT_0022a848;
  local_108 = _UNK_0022a860;
  local_110 = _DAT_0022a858;
  FUN_008491f0(&local_140);
  lVar8 = *(long *)(param_5 + 0x2a);
  local_130 = CONCAT44(local_130._4_4_,iVar21);
  if (*(long *)(param_5 + 0x2c) != lVar8) {
    uVar22 = *(undefined8 *)(lVar8 + 0x54);
    local_120 = *(undefined8 *)(lVar8 + 0x20);
    local_ec = (undefined4)uVar22;
    uStack_e8 = (undefined4)((ulong)uVar22 >> 0x20);
    local_e4 = CONCAT31(local_e4._1_3_,*(undefined1 *)(lVar8 + 0x5c));
    lVar23 = lVar8;
    do {
      if (*(char *)(lVar23 + 0x52) == '\x01') {
        local_ee = 1;
        goto LAB_0098ab78;
      }
      lVar23 = lVar23 + 200;
    } while (lVar23 != *(long *)(param_5 + 0x2c));
    local_ee = 0;
LAB_0098ab78:
    if (*(char *)(lVar8 + 0x5c) == '\x01') {
      lVar8 = FUN_0098b024(param_2,param_3,param_4,*(undefined8 *)(lVar8 + 0x54));
      lStack_138 = lVar8 >> 0x20;
      uVar10 = (uint)lVar8;
    }
    else {
      dVar25 = *(double *)(lVar8 + 0x20);
      uVar10 = param_3;
      if (dVar25 == 1.0 || dVar25 < 1.0 != NAN(dVar25)) {
        lStack_138 = (long)(int)param_4;
      }
      else {
        uVar12 = param_4;
        if ((0x10 < (int)param_3) && (0x10 < (int)param_4)) {
          dVar26 = (double)param_3 / dVar25;
          dVar27 = (double)param_4 / dVar25;
          if (dVar26 <= dVar27) {
            dVar27 = dVar26;
          }
          dVar26 = (double)param_4 / 16.0;
          if ((double)param_3 / 16.0 <= (double)param_4 / 16.0) {
            dVar26 = (double)param_3 / 16.0;
          }
          if (0xf < (int)dVar27) {
            dVar26 = dVar25;
          }
          uVar10 = (uint)((double)param_3 / dVar26);
          uVar12 = (uint)((double)param_4 / dVar26);
        }
        lStack_138 = (long)(int)uVar12;
      }
    }
    local_140 = (long)(int)uVar10;
    if (*param_5 == 2) {
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_5 + 0x24) + 0x28))(*(long **)(param_5 + 0x24),&local_150);
      local_110 = (ulong)local_150 & 0xff;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,1);
      }
      lVar8 = *(long *)(param_5 + 0x1e) - *(long *)(param_5 + 0x1c) >> 5;
      uVar11 = (*(long *)(param_5 + 0x2c) - *(long *)(param_5 + 0x2a) >> 3) * -0x70a3d70a3d70a3d7;
      uVar14 = lVar8 * -0x3333333333333333;
      uVar19 = (ulong)puStack_148 >> 0x10 & 0xff;
      if (uVar11 < uVar14 || uVar11 + lVar8 * 0x3333333333333333 == 0) {
        uVar11 = uVar14;
      }
      if (uVar19 <= uVar11) {
        uVar19 = uVar11;
      }
      if ((0 < (int)(param_4 * param_3)) && ((1 < (int)uVar19 || (1 < (byte)local_150)))) {
        local_180[0] = 0;
        puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
        local_250 = &DAT_aaaaaaaaaaaaaaaa;
        local_240 = &DAT_aaaaaaaaaaaaaaaa;
        local_154 = 0;
        FUN_009737bc(&local_250,(float)iVar21,(long)(int)param_3,(long)(int)param_4,0,
                     (long)(int)uVar19,local_110,uVar13 == 1,local_180);
        puVar6 = local_250;
        if (local_250 == puStack_248) {
          uVar13 = 0;
        }
        else {
          uVar11 = ((long)puStack_248 - (long)local_250) * 0x4cccccccccccccd - 0x20U >> 5;
          if ((uVar11 != 0) && (((int)puStack_248 - (int)local_250 & 0x18U) == 0)) {
            uVar11 = uVar11 + 1;
            iVar17 = 0;
            iVar21 = 0;
            piVar24 = (int *)(local_250 + 0xb0);
            puVar15 = local_250 + (uVar11 & 0xffffffffffffffe) * 0xa0;
            uVar19 = uVar11 & 0xffffffffffffffe;
            do {
              piVar2 = piVar24 + -0x28;
              iVar3 = *piVar24;
              uVar19 = uVar19 - 2;
              piVar24 = piVar24 + 0x50;
              iVar17 = *piVar2 + iVar17;
              iVar21 = iVar3 + iVar21;
            } while (uVar19 != 0);
            bVar7 = uVar11 == (uVar11 & 0xffffffffffffffe);
            goto LAB_0098ae38;
          }
          iVar17 = 0;
          puVar15 = local_250;
          do {
            iVar21 = *(int *)(puVar15 + 0x10);
            puVar15 = puVar15 + 0xa0;
            bVar7 = puVar15 == puStack_248;
LAB_0098ae38:
            iVar17 = iVar21 + iVar17;
          } while (!bVar7);
          uVar13 = iVar17 * 1000;
        }
        if (bVar1) {
          if (*(long *)(param_5 + 0x2c) == *(long *)(param_5 + 0x2a)) goto LAB_0098afe4;
          if ((int)uVar18 <= (int)uVar13) {
            uVar13 = uVar18;
          }
          if (0 < *(int *)(*(long *)(param_5 + 0x2a) + 0x1c)) {
            uVar13 = uVar18;
          }
        }
        uVar20 = uVar16;
        if ((int)uVar16 <= (int)uVar13) {
          uVar20 = uVar13;
        }
        puVar15 = puStack_248;
        if (local_250 != (undefined1 *)0x0) {
          while (puVar5 = puVar15, puVar6 != puVar5) {
            puVar15 = puVar5 + -0xa0;
            if (puVar15 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if (puVar5[-0x18] == '\x01') {
              FUN_007b6d78(puVar5 + -0x78);
            }
          }
          puStack_248 = puVar6;
          operator_delete(local_250);
        }
      }
    }
    lVar8 = *(long *)(param_5 + 0x2a);
    uVar18 = uVar20;
    if ((int)uVar16 <= (int)uVar20) {
      uVar18 = uVar16;
    }
    local_130 = CONCAT44(uVar18,(undefined4)local_130);
    if (*(long *)(param_5 + 0x2c) != lVar8) {
      uVar13 = *(uint *)(lVar8 + 0x18);
      uVar10 = param_5[0x33];
      local_100 = *(undefined8 *)(param_5 + 0x28);
      uVar18 = uVar20;
      if ((int)uVar13 <= (int)uVar20) {
        uVar18 = uVar13;
      }
      uVar16 = uVar20;
      if (0 < (int)uVar13) {
        uVar16 = uVar18;
      }
      local_128 = CONCAT44(uVar20,uVar16);
      uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
      if ((int)uVar10 < 1) {
        uVar18 = *param_5;
        uVar10 = *(uint *)(&PTR_DAT_00d3f900)[uVar18];
      }
      else {
        uVar18 = *param_5;
      }
      uStack_118 = CONCAT44(uStack_118._4_4_,uVar10);
      if (((uVar18 < 6) && ((0x2eU >> (ulong)(uVar18 & 0x1f) & 1) != 0)) &&
         (*(char *)(lVar8 + 0x38) == '\x01')) {
        local_110 = *(ulong *)(lVar8 + 0x30);
        local_108 = CONCAT71(local_108._1_7_,1);
      }
      local_f0 = *(undefined2 *)(lVar8 + 0x50);
      FUN_00849240(&local_250,&local_140);
      pvVar9 = operator_new(200);
      *param_1 = pvVar9;
      param_1[2] = (long)pvVar9 + 200;
      if (pvVar9 != (void *)0x0) {
        FUN_00849240(pvVar9,&local_250);
        param_1[1] = (long)pvVar9 + 200;
        FUN_008492a8(&local_250);
        FUN_008492a8(&local_140);
        if (*(long *)(lVar4 + 0x28) == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
  }
LAB_0098afe4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0098b024  FUN_0098b024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0098b024(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  int local_138;
  undefined1 local_134;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  
  uVar8 = (ulong)param_2;
  iVar5 = (int)param_4;
  iVar6 = (int)((ulong)param_4 >> 0x20);
  iVar1 = iVar6;
  if ((int)param_2 < (int)param_3 == iVar6 <= iVar5) {
    iVar1 = iVar5;
    iVar5 = iVar6;
  }
  if (((0 < (int)param_2) && (0 < (int)param_3)) && (iVar5 < (int)param_2 || iVar1 < (int)param_3))
  {
    dVar9 = (double)iVar5 / (double)uVar8;
    dVar10 = (double)iVar1 / (double)param_3;
    if (dVar9 <= dVar10) {
      dVar10 = dVar9;
    }
    uVar8 = (ulong)(uint)(int)(dVar10 * (double)uVar8);
    param_3 = (uint)(dVar10 * (double)param_3);
  }
  uStack_68 = _UNK_0022a9b8;
  local_70 = _DAT_0022a9b0;
  uStack_58 = _UNK_0022a9c8;
  uStack_60 = _DAT_0022a9c0;
  uStack_98 = _UNK_0022a988;
  local_a0 = _DAT_0022a980;
  uStack_88 = _UNK_0022a998;
  uStack_90 = _DAT_0022a990;
  uStack_78 = _UNK_0022a9a8;
  local_80 = _DAT_0022a9a0;
  uStack_d8 = _UNK_0022a948;
  local_e0 = _DAT_0022a940;
  uStack_c8 = _UNK_0022a958;
  uStack_d0 = _DAT_0022a950;
  uStack_b8 = _UNK_0022a968;
  local_c0 = _DAT_0022a960;
  uStack_a8 = _UNK_0022a978;
  uStack_b0 = _DAT_0022a970;
  uStack_128 = _UNK_0022a8f8;
  local_130 = _DAT_0022a8f0;
  uStack_118 = _UNK_0022a908;
  uStack_120 = _DAT_0022a900;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_108 = _UNK_0022a918;
  local_110 = _DAT_0022a910;
  uStack_f8 = _UNK_0022a928;
  local_100 = _DAT_0022a920;
  uStack_e8 = _UNK_0022a938;
  uStack_f0 = _DAT_0022a930;
  FUN_0089e1a4(&local_130,*(undefined4 *)(param_1 + 8));
  local_138 = (int)uVar8 * param_3;
  local_180 = (undefined1 *)(uVar8 | (ulong)param_3 << 0x20);
  uStack_178 = (undefined1 *)CONCAT71(uStack_178._1_7_,1);
  local_134 = 1;
  local_140 = local_140 & 0xffffff00;
  local_13c = 0;
  FUN_0089ee44(&local_130,&local_180,&local_138,&local_140);
  if (*(char *)(param_1 + 0x40) != '\x01') goto LAB_0098b210;
  uStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bfa40(&local_180);
  uStack_148._0_5_ = CONCAT14(1,(undefined4)uStack_148);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) goto LAB_0098b2a0;
  puVar3 = (undefined8 *)FUN_0097cba4(param_1 + 0x10);
  if (uStack_178._4_1_ == *(char *)(puVar3 + 1)) {
    if (uStack_178._4_1_ != '\0') {
      uVar7 = (undefined4)*puVar3;
LAB_0098b1c0:
      uStack_178 = (undefined1 *)CONCAT44(uStack_178._4_4_,uVar7);
    }
  }
  else {
    if (uStack_178._4_1_ == '\0') {
      uVar7 = (undefined4)*puVar3;
      uStack_178 = (undefined1 *)CONCAT35(uStack_178._5_3_,0x100000000);
      goto LAB_0098b1c0;
    }
    uStack_178._0_5_ = (uint5)(uint)uStack_178;
  }
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
LAB_0098b2a0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  puVar4 = (undefined4 *)FUN_0097cb9c(param_1 + 0x10);
  uVar7 = *puVar4;
  uStack_148._0_7_ = CONCAT25(0x100,(undefined5)uStack_148);
  if (*(char *)(puVar4 + 2) == '\0') {
    uVar7 = 0x7fffffff;
  }
  local_180 = (undefined1 *)CONCAT44(uVar7,(undefined4)local_180);
  uStack_170 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 8),(undefined4)uStack_170);
  FUN_0089f83c(&local_130,&local_180);
  FUN_007bfb14(&local_180);
LAB_0098b210:
  local_184 = 0;
  local_180 = (undefined1 *)CONCAT44(local_180._4_4_,0xaaaaaaaa);
  local_138 = -0x55555556;
  local_140 = 0;
  uVar8 = FUN_0089e398(&local_130,uVar8,param_3,0,&local_180,&local_138,&local_140,&local_184);
  if (((uVar8 & 1) == 0) && (uVar8 = FUN_004249b0(), (uVar8 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/config/encoder_stream_factory.cc",0x11ab,
                 "AdaptFrameResolution returned false!");
  }
  uVar2 = local_140;
  uVar7 = local_184;
  FUN_0089e310(&local_130);
  return CONCAT44(uVar7,uVar2);
}


// ===== 0098b2b4  FUN_0098b2b4 =====

void FUN_0098b2b4(long *param_1,long param_2,undefined8 param_3,uint param_4,uint param_5,
                 undefined4 *param_6)

{
  double *pdVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 local_88;
  
  uVar20 = (ulong)param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar8 = FUN_0098ce78(param_6);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_6 + 0x30) == 0) {
      return;
    }
    uVar8 = 0;
    puVar10 = (undefined8 *)0x0;
    do {
      local_88 = CONCAT44(param_5,param_4);
      if (puVar10 < (undefined8 *)param_1[2]) {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar9 = puVar10 + 1;
        *puVar10 = local_88;
      }
      else {
        puVar9 = (undefined8 *)FUN_0098cb74(param_1,&local_88);
      }
      uVar20 = *(ulong *)(param_6 + 0x30);
      uVar8 = uVar8 + 1;
      param_1[1] = (long)puVar9;
      puVar10 = puVar9;
    } while (uVar8 < uVar20);
    return;
  }
  uVar8 = FUN_00849ac0(param_6);
  uVar21 = *(ulong *)(param_6 + 0x30);
  if (uVar21 != 0) {
    lVar12 = 1;
    pbVar15 = (byte *)(*(long *)(param_6 + 0x2a) + 0x52);
    do {
      if ((*(long *)(param_6 + 0x2c) - *(long *)(param_6 + 0x2a) >> 3) * 0x70a3d70a3d70a3d7 + lVar12
          == 1) goto LAB_0098b7ac;
      if ((*pbVar15 & 1) != 0) goto LAB_0098b3c4;
      lVar12 = lVar12 + 1;
      pbVar15 = pbVar15 + 200;
    } while (lVar12 - uVar21 != 1);
  }
  lVar12 = 0;
LAB_0098b3c4:
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_0098cf64(lVar12,uVar21,param_4,param_5,param_3,*param_6);
  }
  else {
    uVar8 = uVar21;
    if ((*(char *)(param_2 + 0x40) == '\x01') &&
       (lVar12 = FUN_0097cb9c(param_2 + 0x10), *(char *)(lVar12 + 8) == '\x01')) {
      if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      puVar10 = (undefined8 *)FUN_0097cb9c(param_2 + 0x10);
      if ((*(byte *)(puVar10 + 1) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      lVar12 = *(long *)(param_6 + 0x2a);
      if (*(long *)(param_6 + 0x2c) - lVar12 == 0) {
LAB_0098b7ac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      local_88 = 0;
      puVar9 = (undefined8 *)(lVar12 + 0x54);
      if (*(char *)(lVar12 + 0x5c) == '\0') {
        puVar9 = &local_88;
      }
      if (1 < uVar21) {
        puVar17 = (undefined8 *)(lVar12 + 0x11c);
        uVar16 = 0xaaaaaaaaaaaaaa00;
        uVar18 = 1;
        iVar19 = (int)((ulong)*puVar9 >> 0x20) * (int)*puVar9;
        bVar4 = false;
        do {
          local_88 = 0;
          if ((*(long *)(param_6 + 0x2c) - lVar12 >> 3) * -0x70a3d70a3d70a3d7 - uVar18 == 0)
          goto LAB_0098b7ac;
          local_88 = 0;
          puVar9 = puVar17;
          if (*(char *)(puVar17 + 1) == '\0') {
            puVar9 = &local_88;
          }
          iVar3 = (int)((ulong)*puVar9 >> 0x20) * (int)*puVar9;
          if (iVar3 < iVar19) goto LAB_0098b4f0;
          puVar17 = puVar17 + 0x19;
          bVar5 = (bool)(bVar4 | (int)*puVar10 < iVar3);
          if (!bVar4 && (int)*puVar10 < iVar3) {
            uVar16 = uVar18;
          }
          uVar18 = uVar18 + 1;
          iVar19 = iVar3;
          bVar4 = bVar5;
        } while (uVar21 != uVar18);
        uVar8 = uVar16;
        if (!bVar5) {
          uVar8 = uVar21;
        }
      }
    }
  }
LAB_0098b4f0:
  iVar19 = (int)uVar8;
  if ((0xf < (int)param_4) && (0xf < (int)param_5)) {
    uVar18 = FUN_0098ddfc(param_3);
    uVar21 = uVar18;
    if (((uVar18 >> 0x20 & 1) != 0) &&
       (iVar3 = 1 << (ulong)((uint)uVar18 & 0x1f), uVar21 = uVar18 & 0xffffffff,
       iVar3 <= (int)param_5 && iVar3 <= (int)param_4)) {
      uVar21 = uVar18;
    }
    if ((uVar21 >> 0x20 & 1) == 0) {
      uVar21 = FUN_00849afc(param_6);
      if ((uVar21 & 1) == 0) {
        uVar21 = (ulong)(iVar19 - 1);
      }
      else {
        lVar13 = *(long *)(param_6 + 0x2a);
        lVar2 = *(long *)(param_6 + 0x2c);
        lVar12 = lVar13;
        if (lVar13 != lVar2) {
          do {
            dVar22 = 1.0;
            if (1.0 <= *(double *)(lVar12 + 0x20)) {
              dVar22 = *(double *)(lVar12 + 0x20);
            }
            if (((double)(long)dVar22 != dVar22) ||
               (uVar14 = (uint)dVar22, (int)uVar14 < 1 || (uVar14 & uVar14 - 1) != 0))
            goto LAB_0098b5ec;
            lVar12 = lVar12 + 200;
            lVar6 = lVar13;
            lVar7 = lVar13;
          } while (lVar12 != lVar2);
          while (lVar13 = lVar6, lVar6 = lVar7 + 200, lVar6 != lVar2) {
            pdVar1 = (double *)(lVar7 + 0xe8);
            lVar7 = lVar6;
            if (*pdVar1 <= *(double *)(lVar13 + 0x20)) {
              lVar6 = lVar13;
            }
          }
        }
        dVar22 = *(double *)(lVar13 + 0x20);
        if (dVar22 == 1.0 || dVar22 < 1.0 != NAN(dVar22)) goto LAB_0098b5ec;
        dVar22 = log2(dVar22);
        uVar21 = (ulong)(uint)(int)dVar22;
      }
    }
    iVar3 = 1 << (ulong)((uint)uVar21 & 0x1f);
    if (iVar3 <= (int)param_4 && iVar3 <= (int)param_5) {
      uVar14 = -1 << (ulong)((uint)uVar21 & 0x1f);
      uVar20 = (ulong)(uVar14 & param_4);
      param_5 = uVar14 & param_5;
    }
  }
LAB_0098b5ec:
  uVar21 = FUN_00849afc(param_6);
  FUN_0098b7ec(param_1,uVar8);
  if (uVar8 != 0) {
    uVar18 = 0;
    dVar22 = (double)param_5 / 16.0;
    if ((double)uVar20 / 16.0 <= (double)param_5 / 16.0) {
      dVar22 = (double)uVar20 / 16.0;
    }
    do {
      if ((ulong)((*(long *)(param_6 + 0x2c) - *(long *)(param_6 + 0x2a) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar18) goto LAB_0098b7ac;
      lVar12 = *(long *)(param_6 + 0x2a) + uVar18 * 200;
      if (*(char *)(lVar12 + 0x5c) == '\x01') {
        uVar11 = FUN_0098b024(param_2,uVar20,param_5,*(undefined8 *)(lVar12 + 0x54));
        if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar18) goto LAB_0098b76c;
        *(undefined8 *)(*param_1 + uVar18 * 8) = uVar11;
      }
      else if ((uVar21 & 1) == 0) {
        if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar18) {
LAB_0098b76c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        *(int *)(*param_1 + uVar18 * 8) = (int)uVar20 >> (~((uint)uVar18 - iVar19) & 0x1f);
        if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar18) goto LAB_0098b76c;
        *(int *)(*param_1 + uVar18 * 8 + 4) = (int)param_5 >> (iVar19 + ~(uint)uVar18 & 0x1f);
      }
      else {
        uVar16 = uVar20;
        uVar14 = param_5;
        if (0x10 < (int)uVar20 && 0x10 < (int)param_5) {
          dVar23 = 1.0;
          if (1.0 <= *(double *)(lVar12 + 0x20)) {
            dVar23 = *(double *)(lVar12 + 0x20);
          }
          dVar24 = (double)uVar20 / dVar23;
          dVar25 = (double)param_5 / dVar23;
          if (dVar24 <= dVar25) {
            dVar25 = dVar24;
          }
          dVar24 = dVar22;
          if (0xf < (int)dVar25) {
            dVar24 = dVar23;
          }
          uVar16 = (ulong)(uint)(int)((double)uVar20 / dVar24);
          uVar14 = (uint)((double)param_5 / dVar24);
        }
        if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar18) goto LAB_0098b76c;
        *(ulong *)(*param_1 + uVar18 * 8) = uVar16 | (ulong)uVar14 << 0x20;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar8);
  }
  return;
}


// ===== 0098b7ec  FUN_0098b7ec =====

void FUN_0098b7ec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  __src = (void *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar11 = (long)__n >> 3;
  uVar6 = param_2 - uVar11;
  iVar9 = (int)puVar4;
  if (param_2 < uVar11 || uVar6 == 0) {
    if (param_2 < uVar11) {
      puVar10 = (undefined8 *)((long)__src + param_2 * 8);
      uVar6 = (ulong)(((long)puVar10 - (long)puVar4 << 0x3d) - ((long)puVar10 - (long)puVar4)) >> 3;
      uVar11 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar10) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar8 >> 2;
        if ((ulong)((long)uVar8 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar3 = operator_new(uVar1 * 8);
          if (uVar6 * 8 == 0) {
            puVar10 = (undefined8 *)((long)pvVar3 + __n);
          }
          else {
            puVar10 = (undefined8 *)((long)pvVar3 + uVar6 * 8 + __n);
            uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 3;
            uVar8 = (param_2 * 8 - __n) - 8 >> 3;
            if (uVar8 <= uVar6) {
              uVar6 = uVar8;
            }
            if (uVar6 < 8) {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
            }
            else {
              puVar4 = (undefined8 *)((long)pvVar3 + __n);
              if ((((int)__src - iVar9) - (int)pvVar3 & 7U) == 0) {
                uVar8 = uVar6 + 1 & 3;
                uVar2 = 4;
                if (uVar8 != 0) {
                  uVar2 = uVar8;
                }
                lVar5 = (uVar6 + 1) - uVar2;
                puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar4 = (undefined8 *)((long)pvVar3 + lVar5 * 8 + __n);
                do {
                  lVar5 = lVar5 + -4;
                  puVar7[-1] = 0;
                  puVar7[-2] = 0;
                  puVar7[1] = 0;
                  *puVar7 = 0;
                  puVar7 = puVar7 + 4;
                } while (lVar5 != 0);
              }
            }
            do {
              if (puVar4 == (undefined8 *)0x0) goto LAB_0098ba90;
              puVar7 = puVar4 + 1;
              *puVar4 = 0;
              puVar4 = puVar7;
            } while (puVar7 != puVar10);
          }
          __dest = (void *)((long)pvVar3 + uVar11 * -8 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar10;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_0098cc68();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar10 = puVar4;
    if ((uVar6 & 0x1fffffffffffffff) != 0) {
      puVar10 = puVar4 + uVar6;
      uVar11 = (param_2 * 8 - __n) - 8 >> 3;
      uVar6 = (ulong)-(long)puVar4 >> 3;
      if (uVar11 <= (ulong)-(long)puVar4 >> 3) {
        uVar6 = uVar11;
      }
      if ((5 < uVar6) && ((-iVar9 & 7U) == 0)) {
        uVar11 = uVar6 + 1 & 3;
        uVar8 = 4;
        if (uVar11 != 0) {
          uVar8 = uVar11;
        }
        puVar7 = puVar4 + 2;
        lVar5 = (uVar6 + 1) - uVar8;
        puVar4 = puVar4 + lVar5;
        do {
          lVar5 = lVar5 + -4;
          puVar7[-1] = 0;
          puVar7[-2] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7 = puVar7 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar4 == (undefined8 *)0x0) {
LAB_0098ba90:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar7 = puVar4 + 1;
        *puVar4 = 0;
        puVar4 = puVar7;
      } while (puVar7 != puVar10);
    }
    param_1[1] = puVar10;
  }
  return;
}


// ===== 0098baac  FUN_0098baac =====

void FUN_0098baac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x98bab4);
  (*pcVar1)();
}


// ===== 0098bab4  FUN_0098bab4 =====

void FUN_0098bab4(ulong *param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ulong *param_5,
                 long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      lVar6 = *(long *)*param_3;
      uVar10 = (((long *)*param_3)[1] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
      uVar5 = param_2[-1];
      if ((uVar10 <= uVar5) || (uVar8 = *param_1, uVar10 <= uVar8)) {
LAB_0098be38:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (*(int *)(lVar6 + uVar5 * 200 + 0x1c) < *(int *)(lVar6 + uVar8 * 200 + 0x1c)) {
        *param_1 = uVar5;
        param_2[-1] = uVar8;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar6 = 0;
        puVar13 = param_1 + 1;
        puVar12 = param_1;
        do {
          puVar9 = puVar13;
          lVar14 = *(long *)*param_3;
          uVar5 = puVar12[1];
          uVar10 = (((long *)*param_3)[1] - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
          if ((uVar10 <= uVar5) || (uVar8 = *puVar12, uVar10 <= uVar8)) goto LAB_0098be38;
          lVar4 = lVar6;
          if (*(int *)(lVar14 + uVar5 * 200 + 0x1c) < *(int *)(lVar14 + uVar8 * 200 + 0x1c)) {
            do {
              lVar14 = lVar4;
              *(ulong *)((long)param_1 + lVar14 + 8) = uVar8;
              puVar13 = param_1;
              if (lVar14 == 0) goto LAB_0098bbb4;
              lVar1 = *(long *)*param_3;
              uVar10 = (((long *)*param_3)[1] - lVar1 >> 3) * -0x70a3d70a3d70a3d7;
              if ((uVar10 <= uVar5) ||
                 (uVar8 = *(ulong *)((long)param_1 + lVar14 + -8), uVar10 <= uVar8))
              goto LAB_0098be38;
              lVar4 = lVar14 + -8;
            } while (*(int *)(lVar1 + uVar5 * 200 + 0x1c) < *(int *)(lVar1 + uVar8 * 200 + 0x1c));
            puVar13 = (ulong *)((long)param_1 + lVar14);
LAB_0098bbb4:
            *puVar13 = uVar5;
          }
          puVar13 = puVar9 + 1;
          lVar6 = lVar6 + 8;
          puVar12 = puVar9;
        } while (puVar13 != param_2);
      }
    }
    else {
      uVar5 = param_4 >> 1;
      lVar6 = param_4 - uVar5;
      if (param_6 < (long)param_4) {
        FUN_0098bab4();
        FUN_0098bab4(param_1 + uVar5,param_2,param_3,lVar6,param_5,param_6);
        FUN_0098c42c(param_1,param_1 + uVar5,param_2,param_3,uVar5,lVar6,param_5,param_6);
        return;
      }
      FUN_0098bf44(param_1,param_1 + uVar5,param_3,uVar5,param_5);
      puVar13 = param_5 + uVar5;
      FUN_0098bf44(param_1 + uVar5,param_2,param_3,lVar6,param_5 + uVar5);
      puVar12 = param_5 + param_4;
      puVar9 = puVar13;
      puVar11 = param_1;
      if (uVar5 * 8 != 0) {
        puVar9 = param_5 + uVar5;
        puVar7 = param_5;
        puVar16 = param_1;
        do {
          if (puVar9 == puVar12) {
            if (puVar7 == puVar13) {
              return;
            }
            uVar5 = (long)param_5 + (uVar5 * 8 - (long)puVar7) + -8;
            if ((((0x127 < uVar5) &&
                 (puVar16 <= (ulong *)((long)puVar16 + (uVar5 & 0xfffffffffffffff8)))) &&
                (puVar7 <= (ulong *)((long)puVar7 + (uVar5 & 0xfffffffffffffff8)))) &&
               (0x1f < (ulong)((long)param_1 - (long)puVar7))) {
              puVar12 = puVar16 + 2;
              uVar5 = (uVar5 >> 3) + 1;
              uVar8 = uVar5 & 0x3ffffffffffffffc;
              puVar16 = puVar16 + uVar8;
              puVar9 = puVar7 + 2;
              uVar10 = uVar5 & 0x3ffffffffffffffc;
              do {
                puVar11 = puVar9 + -1;
                uVar15 = puVar9[-2];
                uVar18 = puVar9[1];
                uVar17 = *puVar9;
                uVar10 = uVar10 - 4;
                puVar9 = puVar9 + 4;
                puVar12[-1] = *puVar11;
                puVar12[-2] = uVar15;
                puVar12[1] = uVar18;
                *puVar12 = uVar17;
                puVar12 = puVar12 + 4;
              } while (uVar10 != 0);
              puVar7 = puVar7 + uVar8;
              if (uVar5 == uVar8) {
                return;
              }
            }
            do {
              puVar12 = puVar7 + 1;
              *puVar16 = *puVar7;
              puVar7 = puVar12;
              puVar16 = puVar16 + 1;
            } while (puVar12 != puVar13);
            return;
          }
          lVar6 = *(long *)*param_3;
          uVar8 = (((long *)*param_3)[1] - lVar6 >> 3) * -0x70a3d70a3d70a3d7;
          uVar10 = *puVar9;
          if ((uVar8 <= uVar10) || (uVar15 = *puVar7, uVar8 <= uVar15)) goto LAB_0098be38;
          param_1 = param_1 + 1;
          iVar2 = *(int *)(lVar6 + uVar10 * 200 + 0x1c);
          iVar3 = *(int *)(lVar6 + uVar15 * 200 + 0x1c);
          lVar6 = 0;
          if (iVar3 <= iVar2) {
            lVar6 = 8;
            uVar10 = uVar15;
          }
          puVar7 = (ulong *)((long)puVar7 + lVar6);
          lVar6 = 8;
          if (iVar3 <= iVar2) {
            lVar6 = 0;
          }
          puVar9 = (ulong *)((long)puVar9 + lVar6);
          puVar11 = puVar16 + 1;
          *puVar16 = uVar10;
          puVar16 = puVar11;
        } while (puVar7 != puVar13);
      }
      if (puVar9 != puVar12) {
        uVar5 = (long)puVar12 + (-8 - (long)puVar9);
        if (((0x117 < uVar5) && (puVar11 <= (ulong *)((long)puVar11 + (uVar5 & 0xfffffffffffffff8)))
            ) && ((puVar9 <= (ulong *)((long)puVar9 + (uVar5 & 0xfffffffffffffff8)) &&
                  (0x1f < (ulong)((long)puVar11 - (long)puVar9))))) {
          puVar13 = puVar11 + 2;
          uVar5 = (uVar5 >> 3) + 1;
          uVar8 = uVar5 & 0x3ffffffffffffffc;
          uVar10 = uVar5 & 0x3ffffffffffffffc;
          puVar11 = puVar11 + uVar8;
          puVar7 = puVar9 + 2;
          do {
            puVar16 = puVar7 + -1;
            uVar15 = puVar7[-2];
            uVar18 = puVar7[1];
            uVar17 = *puVar7;
            uVar10 = uVar10 - 4;
            puVar7 = puVar7 + 4;
            puVar13[-1] = *puVar16;
            puVar13[-2] = uVar15;
            puVar13[1] = uVar18;
            *puVar13 = uVar17;
            puVar13 = puVar13 + 4;
          } while (uVar10 != 0);
          puVar9 = puVar9 + uVar8;
          if (uVar5 == uVar8) {
            return;
          }
        }
        do {
          puVar13 = puVar9 + 1;
          *puVar11 = *puVar9;
          puVar9 = puVar13;
          puVar11 = puVar11 + 1;
        } while (puVar13 != puVar12);
      }
    }
  }
  return;
}


// ===== 0098bf44  FUN_0098bf44 =====

void FUN_0098bf44(ulong *param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    lVar5 = *(long *)*param_3;
    uVar14 = (((long *)*param_3)[1] - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
    uVar4 = param_2[-1];
    if ((uVar14 <= uVar4) || (uVar12 = *param_1, uVar14 <= uVar12)) {
LAB_0098c404:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    if (*(int *)(lVar5 + uVar12 * 200 + 0x1c) <= *(int *)(lVar5 + uVar4 * 200 + 0x1c)) {
      if (param_5 == (ulong *)0x0) goto LAB_0098c418;
      puVar8 = param_5 + 1;
      *param_5 = uVar12;
      if (puVar8 == (ulong *)0x0) goto LAB_0098c418;
      uVar4 = param_2[-1];
      goto LAB_0098c224;
    }
    if (param_5 == (ulong *)0x0) goto LAB_0098c418;
    puVar8 = param_5 + 1;
    *param_5 = uVar4;
    if (puVar8 == (ulong *)0x0) goto LAB_0098c418;
  }
  else {
    if (param_4 != 1) {
      if ((long)param_4 < 9) {
        if (param_1 == param_2) {
          return;
        }
        if (param_5 != (ulong *)0x0) {
          puVar8 = param_1 + 1;
          *param_5 = *param_1;
          if (puVar8 == param_2) {
            return;
          }
          lVar5 = 0;
          puVar7 = param_5;
          while( true ) {
            lVar11 = *(long *)*param_3;
            uVar4 = *puVar8;
            uVar14 = (((long *)*param_3)[1] - lVar11 >> 3) * -0x70a3d70a3d70a3d7;
            if (uVar14 <= uVar4) break;
            puVar6 = puVar7 + 1;
            uVar12 = *puVar7;
            if (uVar14 <= uVar12) break;
            if (*(int *)(lVar11 + uVar4 * 200 + 0x1c) < *(int *)(lVar11 + uVar12 * 200 + 0x1c)) {
              if (puVar6 == (ulong *)0x0) goto LAB_0098c418;
              puVar7[1] = uVar12;
              puVar9 = param_5;
              lVar11 = lVar5;
              if (puVar7 != param_5) {
                do {
                  lVar2 = *(long *)*param_3;
                  uVar4 = (((long *)*param_3)[1] - lVar2 >> 3) * -0x70a3d70a3d70a3d7;
                  if (uVar4 <= *puVar8) goto LAB_0098c404;
                  uVar14 = ((ulong *)((long)param_5 + lVar11))[-1];
                  if (uVar4 <= uVar14) goto LAB_0098c404;
                  if (*(int *)(lVar2 + uVar14 * 200 + 0x1c) <=
                      *(int *)(lVar2 + *puVar8 * 200 + 0x1c)) {
                    puVar9 = (ulong *)((long)param_5 + lVar11);
                    break;
                  }
                  lVar2 = lVar11 + -8;
                  *(ulong *)((long)param_5 + lVar11) = uVar14;
                  lVar11 = lVar2;
                } while (lVar2 != 0);
              }
              *puVar9 = *puVar8;
            }
            else {
              if (puVar6 == (ulong *)0x0) goto LAB_0098c418;
              *puVar6 = uVar4;
            }
            puVar8 = puVar8 + 1;
            lVar5 = lVar5 + 8;
            puVar7 = puVar6;
            if (puVar8 == param_2) {
              return;
            }
          }
          goto LAB_0098c404;
        }
      }
      else {
        uVar4 = param_4 >> 1;
        puVar6 = param_1 + uVar4;
        FUN_0098bab4(param_1,param_1 + uVar4,param_3,uVar4,param_5,uVar4);
        FUN_0098bab4(param_1 + uVar4,param_2,param_3,param_4 - uVar4,param_5 + uVar4,param_4 - uVar4
                    );
        puVar7 = param_5;
        puVar8 = puVar6;
        if ((uVar4 & 0x1fffffffffffffff) != 0) {
          uVar4 = -(long)param_5;
          puVar9 = param_1;
          do {
            if (puVar8 == param_2) {
              if (puVar9 == puVar6) {
                return;
              }
              uVar12 = uVar4 >> 3;
              uVar13 = (ulong)((long)puVar6 + (-8 - (long)puVar9)) >> 3;
              uVar14 = uVar13;
              if (uVar12 <= uVar13) {
                uVar14 = uVar12;
              }
              puVar8 = puVar9;
              if (0x31 < uVar14) {
                uVar1 = uVar13;
                if (uVar12 <= uVar13) {
                  uVar1 = uVar12;
                }
                if (((((((int)param_1 - (int)puVar9 | -(int)param_5) & 7U) == 0) &&
                     (puVar7 <= puVar7 + uVar1)) && (puVar9 <= puVar9 + uVar1)) &&
                   (0x1f < -((long)puVar9 + uVar4))) {
                  uVar4 = uVar14 + 1 & 3;
                  uVar1 = 4;
                  if (uVar4 != 0) {
                    uVar1 = uVar4;
                  }
                  if (uVar13 <= uVar12) {
                    uVar12 = uVar13;
                  }
                  puVar8 = puVar9 + ((uVar14 + 1) - uVar1);
                  puVar10 = puVar7 + 2;
                  puVar9 = puVar9 + 2;
                  lVar5 = ~uVar12 + uVar1;
                  puVar7 = puVar7 + ((uVar12 + 1) - uVar1);
                  do {
                    puVar3 = puVar9 + -1;
                    uVar4 = puVar9[-2];
                    uVar12 = puVar9[1];
                    uVar14 = *puVar9;
                    lVar5 = lVar5 + 4;
                    puVar9 = puVar9 + 4;
                    puVar10[-1] = *puVar3;
                    puVar10[-2] = uVar4;
                    puVar10[1] = uVar12;
                    *puVar10 = uVar14;
                    puVar10 = puVar10 + 4;
                  } while (lVar5 != 0);
                }
              }
              while (puVar7 != (ulong *)0x0) {
                puVar9 = puVar8 + 1;
                *puVar7 = *puVar8;
                puVar7 = puVar7 + 1;
                puVar8 = puVar9;
                if (puVar9 == puVar6) {
                  return;
                }
              }
              goto LAB_0098c418;
            }
            lVar5 = *(long *)*param_3;
            uVar12 = (((long *)*param_3)[1] - lVar5 >> 3) * -0x70a3d70a3d70a3d7;
            uVar14 = *puVar8;
            if ((uVar12 <= uVar14) || (uVar13 = *puVar9, uVar12 <= uVar13)) goto LAB_0098c404;
            if (*(int *)(lVar5 + uVar14 * 200 + 0x1c) < *(int *)(lVar5 + uVar13 * 200 + 0x1c)) {
              if (puVar7 == (ulong *)0x0) goto LAB_0098c418;
              *puVar7 = uVar14;
              puVar8 = puVar8 + 1;
            }
            else {
              if (puVar7 == (ulong *)0x0) goto LAB_0098c418;
              puVar9 = puVar9 + 1;
              *puVar7 = uVar13;
            }
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 - 8;
          } while (puVar9 != puVar6);
        }
        if (puVar8 == param_2) {
          return;
        }
        uVar14 = (ulong)((long)param_2 + (-8 - (long)puVar8)) >> 3;
        uVar4 = uVar14;
        if ((ulong)-(long)puVar7 >> 3 <= uVar14) {
          uVar4 = (ulong)-(long)puVar7 >> 3;
        }
        puVar6 = puVar7;
        puVar9 = puVar8;
        if (0x2b < uVar4) {
          uVar12 = (ulong)-(long)puVar7 >> 3;
          if (uVar12 <= uVar14) {
            uVar14 = uVar12;
          }
          if ((((((int)param_2 - (int)puVar8 | (uint)-(long)puVar7) & 7) == 0) &&
              (puVar7 <= puVar7 + uVar14)) &&
             ((puVar8 <= puVar8 + uVar14 && (0x1f < (ulong)((long)puVar7 - (long)puVar8))))) {
            uVar14 = uVar4 + 1 & 3;
            uVar12 = 4;
            if (uVar14 != 0) {
              uVar12 = uVar14;
            }
            lVar5 = (uVar4 + 1) - uVar12;
            puVar6 = puVar7 + lVar5;
            puVar9 = puVar8 + lVar5;
            puVar8 = puVar8 + 2;
            puVar7 = puVar7 + 2;
            do {
              puVar10 = puVar8 + -1;
              uVar4 = puVar8[-2];
              uVar12 = puVar8[1];
              uVar14 = *puVar8;
              lVar5 = lVar5 + -4;
              puVar8 = puVar8 + 4;
              puVar7[-1] = *puVar10;
              puVar7[-2] = uVar4;
              puVar7[1] = uVar12;
              *puVar7 = uVar14;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        while (puVar6 != (ulong *)0x0) {
          puVar8 = puVar9 + 1;
          *puVar6 = *puVar9;
          puVar6 = puVar6 + 1;
          puVar9 = puVar8;
          if (puVar8 == param_2) {
            return;
          }
        }
      }
LAB_0098c418:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar8 = param_5;
    if (param_5 == (ulong *)0x0) goto LAB_0098c418;
  }
  uVar4 = *param_1;
LAB_0098c224:
  *puVar8 = uVar4;
  return;
}


// ===== 0098c42c  FUN_0098c42c =====

void FUN_0098c42c(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4,long param_5,
                 long param_6,ulong *param_7,long param_8)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_6 != 0) {
    while ((param_8 < param_6 && (param_8 < param_5))) {
      if (param_5 == 0) {
        return;
      }
      uVar9 = *param_2;
      lVar16 = *(long *)*param_4;
      uVar6 = (((long *)*param_4)[1] - lVar16 >> 3) * -0x70a3d70a3d70a3d7;
      if (uVar6 <= uVar9) goto LAB_0098ca44;
      lVar8 = 0;
      lVar13 = 0;
      while( true ) {
        uVar10 = param_1[lVar13];
        if (uVar6 <= uVar10) goto LAB_0098ca44;
        if (*(int *)(lVar16 + uVar9 * 200 + 0x1c) < *(int *)(lVar16 + uVar10 * 200 + 0x1c)) break;
        lVar13 = lVar13 + 1;
        lVar8 = lVar8 + -8;
        if (param_5 == lVar13) {
          return;
        }
      }
      puVar5 = (ulong *)((long)param_1 - lVar8);
      if (param_5 - lVar13 < param_6) {
        lVar15 = param_6 / 2;
        puVar7 = param_2 + lVar15;
        puVar14 = param_2;
        if (puVar5 != param_2) {
          if (uVar6 <= *puVar7) goto LAB_0098ca44;
          uVar10 = (long)param_2 + (lVar8 - (long)param_1) >> 3;
          uVar9 = uVar10 >> 1;
          if (uVar6 <= param_1[uVar9 + lVar13]) goto LAB_0098ca44;
          iVar1 = *(int *)(lVar16 + *puVar7 * 200 + 0x1c);
          puVar14 = puVar5;
          if (*(int *)(lVar16 + param_1[uVar9 + lVar13] * 200 + 0x1c) <= iVar1) {
            puVar14 = (ulong *)((long)param_1 + (uVar9 * 8 - lVar8) + 8);
            uVar9 = uVar10 + ~uVar9;
          }
          while (uVar9 != 0) {
            uVar10 = uVar9 >> 1;
            uVar11 = puVar14[uVar10];
            if (uVar6 <= uVar11) goto LAB_0098ca44;
            uVar17 = uVar9 + ~uVar10;
            uVar9 = uVar10;
            if (*(int *)(lVar16 + uVar11 * 200 + 0x1c) <= iVar1) {
              puVar14 = puVar14 + uVar10 + 1;
              uVar9 = uVar17;
            }
          }
        }
        lVar12 = (long)puVar14 - (long)puVar5 >> 3;
      }
      else {
        if (param_5 + -1 == lVar13) {
          param_1[lVar13] = uVar9;
          *param_2 = uVar10;
          return;
        }
        lVar12 = (param_5 - lVar13) / 2;
        puVar7 = param_3;
        if ((long)param_3 - (long)param_2 != 0) {
          uVar11 = (long)param_3 - (long)param_2 >> 3;
          uVar10 = uVar11 >> 1;
          uVar9 = param_2[uVar10];
          if ((uVar6 <= uVar9) || (uVar6 <= param_1[lVar12 + lVar13])) goto LAB_0098ca44;
          iVar1 = *(int *)(lVar16 + param_1[lVar12 + lVar13] * 200 + 0x1c);
          puVar14 = param_2 + uVar10 + 1;
          uVar11 = uVar11 + ~uVar10;
          if (iVar1 <= *(int *)(lVar16 + uVar9 * 200 + 0x1c)) {
            puVar14 = param_2;
            uVar11 = uVar10;
          }
          while (puVar7 = puVar14, uVar11 != 0) {
            uVar9 = uVar11 >> 1;
            uVar10 = puVar7[uVar9];
            if (uVar6 <= uVar10) goto LAB_0098ca44;
            puVar14 = puVar7 + uVar9 + 1;
            uVar11 = uVar11 + ~uVar9;
            if (iVar1 <= *(int *)(lVar16 + uVar10 * 200 + 0x1c)) {
              puVar14 = puVar7;
              uVar11 = uVar9;
            }
          }
        }
        puVar14 = (ulong *)((long)param_1 + (lVar12 * 8 - lVar8));
        lVar15 = (long)puVar7 - (long)param_2 >> 3;
      }
      lVar16 = (param_5 - lVar12) - lVar13;
      puVar4 = (ulong *)FUN_008a3a78(puVar14,param_2,puVar7);
      if (lVar12 + lVar15 < ((param_6 + param_5) - (lVar12 + lVar15)) - lVar13) {
        FUN_0098c42c(puVar5,puVar14,puVar4,param_4,lVar12,lVar15,param_7,param_8);
        puVar5 = puVar4;
        puVar4 = param_3;
        param_2 = puVar7;
        param_6 = param_6 - lVar15;
        param_5 = lVar16;
      }
      else {
        FUN_0098c42c(puVar4,puVar7,param_3,param_4,lVar16,param_6 - lVar15,param_7,param_8);
        param_2 = puVar14;
        param_6 = lVar15;
        param_5 = lVar12;
      }
      param_1 = puVar5;
      param_3 = puVar4;
      if (param_6 == 0) {
        return;
      }
    }
    if (param_5 <= param_6) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = (ulong)((long)param_2 + (-8 - (long)param_1)) >> 3;
      uVar6 = uVar9;
      if ((ulong)-(long)param_7 >> 3 <= uVar9) {
        uVar6 = (ulong)-(long)param_7 >> 3;
      }
      puVar5 = param_7;
      puVar7 = param_1;
      if (0x2b < uVar6) {
        uVar10 = (ulong)-(long)param_7 >> 3;
        if (uVar10 <= uVar9) {
          uVar9 = uVar10;
        }
        if (((((((int)param_2 - (int)param_1 | (uint)-(long)param_7) & 7) == 0) &&
             (param_7 <= param_7 + uVar9)) && (param_1 <= param_1 + uVar9)) &&
           (0x1f < (ulong)((long)param_7 - (long)param_1))) {
          puVar14 = param_1 + 2;
          uVar9 = uVar6 + 1 & 3;
          puVar4 = param_7 + 2;
          uVar10 = 4;
          if (uVar9 != 0) {
            uVar10 = uVar9;
          }
          lVar16 = (uVar6 + 1) - uVar10;
          puVar5 = param_7 + lVar16;
          puVar7 = param_1 + lVar16;
          do {
            puVar3 = puVar14 + -1;
            uVar6 = puVar14[-2];
            uVar10 = puVar14[1];
            uVar9 = *puVar14;
            lVar16 = lVar16 + -4;
            puVar14 = puVar14 + 4;
            puVar4[-1] = *puVar3;
            puVar4[-2] = uVar6;
            puVar4[1] = uVar10;
            *puVar4 = uVar9;
            puVar4 = puVar4 + 4;
          } while (lVar16 != 0);
        }
      }
      lVar16 = -(long)puVar5;
      do {
        if (puVar5 == (ulong *)0x0) goto LAB_0098cb14;
        puVar4 = puVar7 + 1;
        lVar16 = lVar16 + -8;
        puVar14 = puVar5 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar14;
        puVar7 = puVar4;
      } while (puVar4 != param_2);
      if (puVar14 == param_7) {
        return;
      }
      while( true ) {
        if (param_2 == param_3) {
          memmove(param_1,param_7,-((long)param_7 + lVar16));
          return;
        }
        lVar13 = *(long *)*param_4;
        uVar9 = (((long *)*param_4)[1] - lVar13 >> 3) * -0x70a3d70a3d70a3d7;
        uVar6 = *param_2;
        if ((uVar9 <= uVar6) || (uVar10 = *param_7, uVar9 <= uVar10)) break;
        iVar1 = *(int *)(lVar13 + uVar6 * 200 + 0x1c);
        iVar2 = *(int *)(lVar13 + uVar10 * 200 + 0x1c);
        lVar13 = 0;
        if (iVar2 <= iVar1) {
          lVar13 = 8;
          uVar6 = uVar10;
        }
        lVar8 = 8;
        if (iVar2 <= iVar1) {
          lVar8 = 0;
        }
        param_7 = (ulong *)((long)param_7 + lVar13);
        param_2 = (ulong *)((long)param_2 + lVar8);
        *param_1 = uVar6;
        param_1 = param_1 + 1;
        if (puVar14 == param_7) {
          return;
        }
      }
      goto LAB_0098ca44;
    }
    if (param_2 == param_3) {
      return;
    }
    uVar9 = (ulong)((long)param_3 + (-8 - (long)param_2)) >> 3;
    uVar6 = uVar9;
    if ((ulong)-(long)param_7 >> 3 <= uVar9) {
      uVar6 = (ulong)-(long)param_7 >> 3;
    }
    puVar5 = param_7;
    puVar7 = param_2;
    if (0x2b < uVar6) {
      uVar10 = (ulong)-(long)param_7 >> 3;
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((((((int)param_3 - (int)param_2 | (uint)-(long)param_7) & 7) == 0) &&
          (param_7 <= param_7 + uVar9)) &&
         ((param_2 <= param_2 + uVar9 && (0x1f < (ulong)((long)param_7 - (long)param_2))))) {
        puVar14 = param_2 + 2;
        uVar9 = uVar6 + 1 & 3;
        puVar4 = param_7 + 2;
        uVar10 = 4;
        if (uVar9 != 0) {
          uVar10 = uVar9;
        }
        lVar16 = (uVar6 + 1) - uVar10;
        puVar5 = param_7 + lVar16;
        puVar7 = param_2 + lVar16;
        do {
          puVar3 = puVar14 + -1;
          uVar6 = puVar14[-2];
          uVar10 = puVar14[1];
          uVar9 = *puVar14;
          lVar16 = lVar16 + -4;
          puVar14 = puVar14 + 4;
          puVar4[-1] = *puVar3;
          puVar4[-2] = uVar6;
          puVar4[1] = uVar10;
          *puVar4 = uVar9;
          puVar4 = puVar4 + 4;
        } while (lVar16 != 0);
      }
    }
    do {
      if (puVar5 == (ulong *)0x0) {
LAB_0098cb14:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar7 + 1;
      puVar14 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = puVar14;
      puVar7 = puVar4;
    } while (puVar4 != param_3);
    if (puVar14 == param_7) {
      return;
    }
    lVar16 = 0;
    do {
      if (param_2 == param_1) {
        if (param_7 == puVar14) {
          return;
        }
        puVar5 = (ulong *)((long)param_3 + lVar16);
        uVar6 = ((long)puVar14 - (long)param_7) - 8;
        puVar7 = puVar14;
        if (((0xf7 < uVar6) &&
            ((long)param_3 + (lVar16 - ((long)puVar14 - (long)param_7 & 0xfffffffffffffff8U)) <=
             (ulong)((long)param_3 + lVar16 + -8))) &&
           (0x1f < (ulong)((long)puVar14 + (-lVar16 - (long)param_3)))) {
          puVar4 = puVar5 + -2;
          uVar6 = (uVar6 >> 3) + 1;
          uVar9 = uVar6 & 0x3ffffffffffffffc;
          puVar5 = (ulong *)((long)param_3 + lVar16 + uVar9 * -8);
          puVar7 = puVar14 + -uVar9;
          puVar14 = puVar14 + -2;
          uVar10 = uVar6 & 0x3ffffffffffffffc;
          do {
            puVar3 = puVar14 + -1;
            uVar18 = puVar14[-2];
            uVar17 = puVar14[1];
            uVar11 = *puVar14;
            uVar10 = uVar10 - 4;
            puVar14 = puVar14 + -4;
            puVar4[-1] = *puVar3;
            puVar4[-2] = uVar18;
            puVar4[1] = uVar17;
            *puVar4 = uVar11;
            puVar4 = puVar4 + -4;
          } while (uVar10 != 0);
          if (uVar6 == uVar9) {
            return;
          }
        }
        do {
          puVar5 = puVar5 + -1;
          puVar7 = puVar7 + -1;
          *puVar5 = *puVar7;
        } while (puVar7 != param_7);
        return;
      }
      lVar13 = *(long *)*param_4;
      uVar9 = (((long *)*param_4)[1] - lVar13 >> 3) * -0x70a3d70a3d70a3d7;
      uVar6 = puVar14[-1];
      if (uVar9 <= uVar6) {
LAB_0098ca44:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar10 = param_2[-1];
      if (uVar9 <= uVar10) goto LAB_0098ca44;
      puVar5 = param_2 + -1;
      if (*(int *)(lVar13 + uVar10 * 200 + 0x1c) <= *(int *)(lVar13 + uVar6 * 200 + 0x1c)) {
        puVar5 = param_2;
        puVar14 = puVar14 + -1;
        uVar10 = uVar6;
      }
      *(ulong *)((long)param_3 + lVar16 + -8) = uVar10;
      param_2 = puVar5;
      lVar16 = lVar16 + -8;
    } while (puVar14 != param_7);
  }
  return;
}


// ===== 0098cb74  FUN_0098cb74 =====

undefined8 * FUN_0098cb74(long *param_1,undefined8 *param_2)

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
    FUN_0098cc68();
LAB_0098cc64:
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
    if (uVar5 >> 0x3d != 0) goto LAB_0098cc64;
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


// ===== 0098cc68  FUN_0098cc68 =====

void FUN_0098cc68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0098cc80  FUN_0098cc80 =====

byte FUN_0098cc80(long param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if (bVar1 < 4) {
    iVar3 = *(int *)(param_1 + 0x38);
    if ((1 < bVar1) && (iVar3 = *(int *)(param_1 + 0xd8) + iVar3, bVar1 != 2)) {
      iVar3 = *(int *)(param_1 + 0x178) + iVar3;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (iVar3 == 0) {
      bVar1 = 1;
    }
    return bVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x98cccc);
  (*pcVar2)();
}


// ===== 0098cccc  FUN_0098cccc =====

bool FUN_0098cccc(int *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  
  uVar4 = param_2 - 1;
  if (2 < uVar4) goto LAB_0098ce40;
  uVar2 = *(ushort *)(param_1 + 1);
  if (param_1[(ulong)uVar4 * 0x28 + 10] != (uint)uVar2) {
    return false;
  }
  uVar3 = *(ushort *)((long)param_1 + 6);
  if ((param_1 + (ulong)uVar4 * 0x28 + 10)[1] != (uint)uVar3) {
    return false;
  }
  if (param_1[0xb] * (uint)uVar2 != param_1[10] * (uint)uVar3) {
    return false;
  }
  if (param_2 != 1) {
    if (param_1[0x33] * (uint)uVar2 != param_1[0x32] * (uint)uVar3) {
      return false;
    }
    if ((param_2 != 2) && (param_1[0x5b] * (uint)uVar2 != param_1[0x5a] * (uint)uVar3)) {
      return false;
    }
  }
  if ((*param_1 == 1) && (1 < param_2)) {
    if (param_1[0x32] < param_1[10]) {
      return false;
    }
    if (param_2 != 2) {
      if (param_1[0x5a] < param_1[0x32]) {
        return false;
      }
      if (param_2 != 3) goto LAB_0098ce40;
    }
LAB_0098cdac:
    dVar6 = (double)ABS((float)param_1[0x34] - (float)param_1[0xc]);
    if (dVar6 != DAT_001f5378 && dVar6 < DAT_001f5378 == (NAN(dVar6) || NAN(DAT_001f5378))) {
      return false;
    }
    if (param_2 == 2) {
      cVar1 = (char)param_1[0xd];
      if (cVar1 != (char)param_1[0x35]) {
        return false;
      }
      if (uVar4 == 1) {
        return true;
      }
      goto LAB_0098ce28;
    }
    dVar6 = (double)ABS((float)param_1[0x5c] - (float)param_1[0x34]);
    if (dVar6 != DAT_001f5378 && dVar6 < DAT_001f5378 == (NAN(dVar6) || NAN(DAT_001f5378))) {
      return false;
    }
    if (param_2 != 3) {
LAB_0098ce40:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x98ce44);
      (*pcVar5)();
    }
  }
  else {
    if (1 < param_2) goto LAB_0098cdac;
    if (uVar4 == 0) {
      return true;
    }
  }
  cVar1 = (char)param_1[0xd];
  if (cVar1 != (char)param_1[0x35]) {
    return false;
  }
LAB_0098ce28:
  return cVar1 == (char)param_1[0x5d];
}


// ===== 0098ce44  FUN_0098ce44 =====

bool FUN_0098ce44(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1[0x14a] == 1) && ((*(byte *)(param_1 + 0x150) & 1) != 0)) {
    bVar1 = *param_1 == 1 || *param_1 == 4;
  }
  return bVar1;
}


// ===== 0098ce78  FUN_0098ce78 =====

bool FUN_0098ce78(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1[0x22] == 1) && ((*(byte *)(param_1 + 0x32) & 1) != 0)) {
    bVar1 = *param_1 == 1 || *param_1 == 4;
  }
  return bVar1;
}


// ===== 0098ceac  FUN_0098ceac =====

uint FUN_0098ceac(int *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  if ((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) {
    iVar1 = *param_1;
    if (iVar1 == 4) {
      lVar5 = FUN_007b8cbc(param_1);
      uVar3 = (uint)*(byte *)(lVar5 + 8);
    }
    else if (iVar1 == 2) {
      pbVar4 = (byte *)FUN_007b8ca4(param_1);
      uVar3 = (uint)*pbVar4;
    }
    else if (iVar1 == 1) {
      pbVar4 = (byte *)FUN_007b8c8c(param_1);
      uVar3 = (uint)*pbVar4;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_0096a40c();
  }
  if ((char)param_1[8] != '\0') {
    if (2 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x98cf64);
      (*pcVar2)();
    }
    if ((int)uVar3 <= (int)(uint)*(byte *)(param_1 + (ulong)param_2 * 0x28 + 0xd)) {
      uVar3 = (uint)*(byte *)(param_1 + (ulong)param_2 * 0x28 + 0xd);
    }
  }
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0098cf64  FUN_0098cf64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0098cf64(ulong param_1,ulong param_2,undefined4 param_3,undefined4 param_4,long *param_5,
                  undefined4 param_6)

{
  long *****ppppplVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 ****local_c8;
  ulong local_c0;
  byte bStack_b1;
  long ****local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58;
  long ****local_38;
  
  (**(code **)(*param_5 + 0x10))(&local_a0,param_5,"WebRTC-LegacySimulcastLayerLimit",0x20);
  if (-1 < (char)local_90._7_1_) {
    uStack_98 = (ulong)local_90._7_1_;
  }
  if (uStack_98 < 8) {
    bVar4 = false;
  }
  else {
    ppppplVar1 = (long *****)local_a0;
    if (-1 < (char)local_90._7_1_) {
      ppppplVar1 = &local_a0;
    }
    bVar4 = *ppppplVar1 == (long ****)0x64656c6261736944;
  }
  if ((char)local_90._7_1_ < '\0') {
    operator_delete(local_a0);
  }
  if (!bVar4) {
    uStack_98 = _UNK_0022aa08;
    local_a0 = _DAT_0022aa00;
    uStack_88 = _UNK_0022aa18;
    local_90 = _DAT_0022aa10;
    uStack_78 = _UNK_0022aa28;
    local_80 = _DAT_0022aa20;
    uStack_68 = _UNK_0022aa38;
    local_70 = _DAT_0022aa30;
    local_58 = _UNK_0022aa48;
    local_60 = _DAT_0022aa40;
    FUN_00661054(&local_a0,"max_ratio",9);
    local_60 = local_60 & 0xffffffffffffff00;
    local_58 = local_58 & 0xffffffffffffff00;
    local_a0 = (long ****)(PTR_DAT_00d520b0 + 0x10);
    local_38 = (long ****)&local_a0;
    (**(code **)(*param_5 + 0x10))(&local_c8,param_5,"WebRTC-SimulcastLayerLimitRoundUp",0x21);
    uVar2 = local_c0;
    pppppuVar3 = (undefined8 *****)local_c8;
    if (-1 < (char)bStack_b1) {
      uVar2 = (ulong)bStack_b1;
      pppppuVar3 = &local_c8;
    }
    FUN_00661cc0(&local_38,1,pppppuVar3,uVar2);
    if ((char)bStack_b1 < '\0') {
      operator_delete(local_c8);
    }
    FUN_0098d180(&local_c8,param_3,param_4,local_60,local_58 & 0xff,0,param_6);
    if (param_1 <= local_c0) {
      param_1 = local_c0;
    }
    uVar2 = param_2;
    if ((param_1 < param_2) && (uVar5 = FUN_004022fc(), uVar2 = param_1, (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_001fd8a8,"../../video/config/simulcast.cc",0xda2,
                   "Reducing simulcast layer count from ",param_2,&DAT_0019fec4,param_1);
    }
    param_2 = uVar2;
    FUN_006634ac(&local_a0);
  }
  return param_2;
}


// ===== 0098d180  FUN_0098d180 =====

void FUN_0098d180(int *param_1,int param_2,int param_3,double param_4,ulong param_5,ulong param_6,
                 uint param_7)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  
  local_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (param_7 < 6) {
    if ((0x13U >> (ulong)(param_7 & 0x1f) & 1) == 0) {
      puVar5 = &DAT_0022ab68;
      pcVar6 = "WebRTC-NormalizeSimulcastResolution";
    }
    else {
      puVar5 = &DAT_0022aa50;
      pcVar6 = &DAT_0022ab68;
    }
    FUN_0098db28(&local_80,0,puVar5,pcVar6);
  }
  if ((param_6 & 1) == 0) {
    lVar10 = (long)puStack_78 - (long)local_80;
    uVar7 = (lVar10 >> 3) * -0x3333333333333333;
    if (uVar7 < 2) goto LAB_0098d5e8;
    *(undefined8 *)((long)local_80 + lVar10 + -0x10) =
         *(undefined8 *)((long)local_80 + lVar10 + -0x38);
    *(undefined8 *)((long)local_80 + lVar10 + -0x18) =
         *(undefined8 *)((long)local_80 + lVar10 + -0x40);
    *(undefined8 *)((long)local_80 + lVar10 + -8) = *(undefined8 *)((long)local_80 + lVar10 + -0x30)
    ;
  }
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  local_58 = 0;
  if (param_7 < 6) {
    if ((0x13U >> (ulong)(param_7 & 0x1f) & 1) == 0) {
      puVar5 = &DAT_0022ab68;
      pcVar6 = "WebRTC-NormalizeSimulcastResolution";
    }
    else {
      puVar5 = &DAT_0022aa50;
      pcVar6 = &DAT_0022ab68;
    }
    FUN_0098db28(&local_68,0,puVar5,pcVar6);
  }
  lVar10 = (long)pvStack_60 - (long)local_68;
  uVar7 = (lVar10 >> 3) * -0x3333333333333333;
  if ((param_6 & 1) == 0) {
    if (uVar7 < 2) {
LAB_0098d5e8:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/config/simulcast.cc",0xe9,"formats.size() >= 2u",&DAT_00214eb8,uVar7
                   ,2);
    }
    *(undefined8 *)((long)local_68 + lVar10 + -0x10) =
         *(undefined8 *)((long)local_68 + lVar10 + -0x38);
    *(undefined8 *)((long)local_68 + lVar10 + -0x18) =
         *(undefined8 *)((long)local_68 + lVar10 + -0x40);
    *(undefined8 *)((long)local_68 + lVar10 + -8) = *(undefined8 *)((long)local_68 + lVar10 + -0x30)
    ;
  }
  if (pvStack_60 != local_68) {
    uVar12 = 0;
    uVar20 = 0;
    do {
      piVar13 = (int *)((long)local_68 + uVar12 * 0x28);
      if (piVar13[1] * *piVar13 <= param_3 * param_2) goto LAB_0098d2fc;
      uVar20 = uVar20 + 1;
      uVar12 = (ulong)uVar20;
    } while (uVar12 <= uVar7 && uVar7 - uVar12 != 0);
  }
  uVar20 = 0xffffffff;
LAB_0098d2fc:
  if (local_68 == (void *)0x0) {
LAB_0098d38c:
    if (uVar20 == 0) {
      if (puStack_78 == local_80) goto LAB_0098d5d4;
      uVar22 = *local_80;
      uVar25 = local_80[3];
      uVar24 = local_80[2];
      uVar11 = local_80[4];
      *(undefined8 *)(param_1 + 2) = local_80[1];
      *(undefined8 *)param_1 = uVar22;
      *(undefined8 *)(param_1 + 6) = uVar25;
      *(undefined8 *)(param_1 + 4) = uVar24;
      *(undefined8 *)(param_1 + 8) = uVar11;
    }
    else {
      uVar7 = ((long)puStack_78 - (long)local_80 >> 3) * -0x3333333333333333;
      iVar4 = uVar20 - 1;
      if ((uVar7 < (ulong)(long)iVar4 || uVar7 - (long)iVar4 == 0) ||
         (uVar7 < (ulong)(long)(int)uVar20 || uVar7 - (long)(int)uVar20 == 0)) {
LAB_0098d5d4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      piVar13 = (int *)(local_80 + (long)iVar4 * 5);
      piVar14 = (int *)(local_80 + (long)(int)uVar20 * 5);
      *param_1 = param_2;
      param_1[1] = param_3;
      if ((param_5 & 1) == 0) {
        param_4 = DAT_001f5930;
      }
      dVar21 = (double)((float)(piVar13[1] * *piVar13 - param_3 * param_2) /
                       (float)(piVar13[1] * *piVar13 - piVar14[1] * *piVar14));
      dVar23 = 1.0 - dVar21;
      lVar10 = (long)((double)*(long *)(piVar14 + 4) * dVar21);
      lVar18 = (long)(dVar21 * (double)*(long *)(piVar14 + 6));
      piVar1 = piVar13;
      if (param_4 == dVar21 || param_4 < dVar21 != (NAN(param_4) || NAN(dVar21))) {
        piVar1 = piVar14;
      }
      lVar15 = (long)(dVar23 * (double)*(long *)(piVar13 + 4));
      lVar17 = (long)(dVar23 * (double)*(long *)(piVar13 + 6));
      lVar3 = -0x8000000000000000;
      if (lVar10 != -0x8000000000000000 && lVar15 != -0x8000000000000000) {
        lVar3 = lVar15 + lVar10;
      }
      lVar16 = (long)(dVar21 * (double)*(long *)(piVar14 + 8));
      lVar19 = (long)(dVar23 * (double)*(long *)(piVar13 + 8));
      lVar2 = 0x7fffffffffffffff;
      if (lVar15 != 0x7fffffffffffffff && lVar10 != 0x7fffffffffffffff) {
        lVar2 = lVar3;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar1 + 2);
      *(long *)(param_1 + 4) = lVar2;
      lVar10 = -0x8000000000000000;
      if (lVar18 != -0x8000000000000000 && lVar17 != -0x8000000000000000) {
        lVar10 = lVar18 + lVar17;
      }
      lVar3 = 0x7fffffffffffffff;
      if (lVar17 != 0x7fffffffffffffff && lVar18 != 0x7fffffffffffffff) {
        lVar3 = lVar10;
      }
      *(long *)(param_1 + 6) = lVar3;
      lVar10 = -0x8000000000000000;
      if (lVar16 != -0x8000000000000000 && lVar19 != -0x8000000000000000) {
        lVar10 = lVar16 + lVar19;
      }
      lVar18 = 0x7fffffffffffffff;
      if (lVar19 != 0x7fffffffffffffff && lVar16 != 0x7fffffffffffffff) {
        lVar18 = lVar10;
      }
      *(long *)(param_1 + 8) = lVar18;
    }
    if (local_80 == (undefined8 *)0x0) {
      return;
    }
    uVar7 = (ulong)(((long)local_80 - (long)puStack_78) * 0x1333333333333333) >> 3;
    uVar12 = (long)puStack_78 * -0x1333333333333333 - 8U >> 3;
    if (uVar12 <= uVar7) {
      uVar7 = uVar12;
    }
    puVar9 = puStack_78;
    if ((1 < uVar7) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      puVar9 = puStack_78 + uVar7 * -5;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (puVar9 == local_80) {
        operator_delete(local_80);
        return;
      }
      puVar9 = puVar9 + -5;
    } while (puVar9 != (undefined8 *)0x0);
  }
  else {
    uVar7 = (ulong)(((long)local_68 - (long)pvStack_60) * 0x1333333333333333) >> 3;
    uVar12 = (long)pvStack_60 * -0x1333333333333333 - 8U >> 3;
    if (uVar12 <= uVar7) {
      uVar7 = uVar12;
    }
    pvVar8 = pvStack_60;
    if ((1 < uVar7) && ((((int)local_68 - (int)pvStack_60 | -(int)pvStack_60) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      pvVar8 = (void *)((long)pvStack_60 + uVar7 * -0x28);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar8 == local_68) {
        operator_delete(local_68);
        goto LAB_0098d38c;
      }
      pvVar8 = (void *)((long)pvVar8 + -0x28);
    } while (pvVar8 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0098d60c  FUN_0098d60c =====

void FUN_0098d60c(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar2 == lVar3) {
    return;
  }
  uVar7 = (lVar3 - lVar2 >> 3) * -0x70a3d70a3d70a3d7;
  uVar10 = uVar7 - 1;
  if (uVar10 != 0) {
    if (uVar7 < 2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    if (uVar10 == 1) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      iVar11 = 0;
      iVar12 = 0;
      uVar9 = uVar10 & 0xfffffffffffffffe;
      piVar8 = (int *)(lVar2 + 0xe0);
      uVar13 = uVar10 & 0xfffffffffffffffe;
      do {
        piVar1 = piVar8 + -0x32;
        iVar4 = *piVar8;
        uVar13 = uVar13 - 2;
        piVar8 = piVar8 + 100;
        iVar11 = *piVar1 + iVar11;
        iVar12 = iVar4 + iVar12;
      } while (uVar13 != 0);
      bVar5 = uVar10 == uVar9;
      uVar10 = (ulong)(uint)(iVar12 + iVar11);
      if (bVar5) goto LAB_0098d6c4;
    }
    lVar6 = ~uVar9 + uVar7;
    piVar8 = (int *)(lVar2 + uVar9 * 200 + 0x18);
    do {
      lVar6 = lVar6 + -1;
      uVar10 = (ulong)(uint)(*piVar8 + (int)uVar10);
      piVar8 = piVar8 + 0x32;
    } while (lVar6 != 0);
  }
LAB_0098d6c4:
  iVar11 = *(int *)(lVar3 + -0xac) + (int)uVar10;
  if (iVar11 < param_1) {
    iVar11 = (int)param_1 - iVar11;
    if (param_1 == 0x7fffffffffffffff) {
      iVar11 = -1;
    }
    *(int *)(lVar3 + -0xac) = *(int *)(lVar3 + -0xac) + iVar11;
  }
  return;
}


// ===== 0098d70c  FUN_0098d70c =====

void FUN_0098d70c(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4,byte param_5,
                 long *param_6,uint param_7)

{
  long lVar1;
  int *******pppppppiVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  long lVar19;
  int ******local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  
  FUN_008a5364(&local_c0,param_6);
  bVar9 = FUN_008a584c(&local_c0);
  FUN_008a56ec(&local_c0);
  if ((param_4 & 1) == 0) {
    (**(code **)(*param_6 + 0x10))
              (&local_c0,param_6,"WebRTC-LowresSimulcastBitrateInterpolation",0x2a);
    if (-1 < (char)local_b0._7_1_) {
      puStack_b8 = (undefined1 *)(ulong)local_b0._7_1_;
    }
    if (puStack_b8 < 7) {
      bVar8 = false;
    }
    else {
      pppppppiVar2 = (int *******)local_c0;
      if (-1 < (char)local_b0._7_1_) {
        pppppppiVar2 = &local_c0;
      }
      bVar8 = *(int *)pppppppiVar2 == 0x62616e45 && *(int *)((long)pppppppiVar2 + 3) == 0x64656c62;
    }
    if ((char)local_b0._7_1_ < '\0') {
      operator_delete(local_c0);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (param_3 == 0) {
      return;
    }
    if (param_3 < 0x147ae147ae147af) {
      param_5 = param_5 & param_7 < 5;
      uVar16 = param_3 * 200;
      plVar10 = (long *)operator_new(uVar16);
      *param_1 = plVar10;
      param_1[2] = plVar10 + param_3 * 0x19;
      plVar15 = plVar10;
      while (plVar15 != (long *)0x0) {
        FUN_008491f0(plVar15);
        puVar7 = PTR_DAT_00d522e8;
        uVar16 = uVar16 - 200;
        plVar15 = plVar15 + 0x19;
        if (uVar16 == 0) {
          lVar1 = 3;
          if (param_5 == 0) {
            lVar1 = 1;
          }
          iVar11 = *param_2;
          *plVar10 = (long)iVar11;
          bVar6 = *(byte *)(plVar10 + 7);
          fVar17 = 0.6666667;
          if ((param_5 & bVar9) == 0) {
            fVar17 = 1.0;
          }
          iVar12 = param_2[1];
          param_1[1] = plVar10 + param_3 * 0x19;
          uVar5 = *(undefined4 *)puVar7;
          plVar10[1] = (long)iVar12;
          if ((bVar6 & 1) == 0) {
            *(undefined1 *)(plVar10 + 7) = 1;
          }
          plVar10[6] = lVar1;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = (int ******)&DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0098d180(&local_c0,(long)iVar11,(long)iVar12,0,0,bVar8,param_7);
          lVar13 = param_3 - 1;
          *(undefined4 *)(plVar10 + 2) = uVar5;
          *(undefined4 *)((long)plVar10 + 0x14) = local_a0._0_4_;
          uVar18 = NEON_scvtf(CONCAT44((int)puStack_a8,(int)local_b0),4);
          uVar18 = NEON_smax(CONCAT44(local_a0._0_4_,local_a0._0_4_),
                             CONCAT44((int)((float)((ulong)uVar18 >> 0x20) * fVar17),
                                      (int)((float)uVar18 * fVar17)),4);
          lVar19 = NEON_rev64(uVar18,4);
          plVar10[3] = lVar19;
          if (lVar13 == 0) {
            return;
          }
          pbVar14 = (byte *)(plVar10 + 0x20);
          param_2 = param_2 + 3;
          do {
            iVar12 = param_2[-1];
            *(long *)(pbVar14 + -0x38) = (long)iVar12;
            iVar11 = *param_2;
            *(long *)(pbVar14 + -0x30) = (long)iVar11;
            if ((*pbVar14 & 1) == 0) {
              *pbVar14 = 1;
            }
            *(long *)(pbVar14 + -8) = lVar1;
            param_2 = param_2 + 2;
            local_a0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
            local_c0 = (int ******)&DAT_aaaaaaaaaaaaaaaa;
            puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
            local_b0 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_0098d180(&local_c0,(long)iVar12,(long)iVar11,0,0,bVar8,param_7);
            lVar13 = lVar13 + -1;
            *(undefined4 *)(pbVar14 + -0x28) = uVar5;
            *(undefined4 *)(pbVar14 + -0x24) = local_a0._0_4_;
            uVar18 = NEON_smax(CONCAT44(local_a0._0_4_,local_a0._0_4_),
                               CONCAT44((int)puStack_a8,(int)local_b0),4);
            uVar18 = NEON_rev64(uVar18,4);
            *(undefined8 *)(pbVar14 + -0x20) = uVar18;
            pbVar14 = pbVar14 + 200;
          } while (lVar13 != 0);
          return;
        }
      }
LAB_0098dafc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
  }
  else {
    iVar12 = (int)param_3;
    iVar11 = iVar12;
    if (1 < iVar12) {
      iVar11 = 2;
    }
    if (iVar12 == 0) goto LAB_0098db14;
    if (-1 < iVar12) {
      uVar16 = (long)iVar11 * 200;
      iVar3 = *param_2;
      iVar4 = param_2[2];
      plVar10 = (long *)operator_new(uVar16);
      *param_1 = plVar10;
      param_1[2] = plVar10 + (long)iVar11 * 0x19;
      plVar15 = plVar10;
      while (plVar15 != (long *)0x0) {
        FUN_008491f0(plVar15);
        uVar16 = uVar16 - 200;
        plVar15 = plVar15 + 0x19;
        if (uVar16 == 0) {
          param_1[1] = plVar10 + (long)iVar11 * 0x19;
          puVar7 = PTR_DAT_00d52030;
          lVar1 = DAT_001f5110;
          *plVar10 = (long)iVar3;
          plVar10[1] = (long)iVar4;
          uVar5 = *(undefined4 *)puVar7;
          plVar10[3] = lVar1;
          *(undefined4 *)(plVar10 + 2) = 5;
          *(undefined4 *)((long)plVar10 + 0x14) = uVar5;
          if ((*(byte *)(plVar10 + 7) & 1) == 0) {
            *(undefined1 *)(plVar10 + 7) = 1;
          }
          lVar1 = 1;
          if ((param_5 & 1) != 0) {
            lVar1 = 2;
          }
          plVar10[6] = lVar1;
          if (iVar12 < 2) {
            return;
          }
          if ((param_5 & 1) == 0) {
            fVar17 = (float)FUN_0089ff84(2,0,bVar9 & 1);
            iVar11 = (int)(fVar17 * 1.25e+06);
          }
          else {
            iVar11 = 0x1312d0;
          }
          puVar7 = PTR_DAT_00d522e8;
          plVar10[0x19] = (long)iVar3;
          plVar10[0x1a] = (long)iVar4;
          *(undefined4 *)(plVar10 + 0x1b) = *(undefined4 *)puVar7;
          if ((*(byte *)(plVar10 + 0x20) & 1) == 0) {
            *(undefined1 *)(plVar10 + 0x20) = 1;
          }
          plVar10[0x1f] = lVar1;
          if ((param_5 & 1) == 0) {
            iVar12 = (int)plVar10[3] << 1;
          }
          else {
            iVar12 = 600000;
          }
          *(int *)((long)plVar10 + 0xdc) = iVar12;
          *(int *)(plVar10 + 0x1c) = iVar11;
          *(int *)((long)plVar10 + 0xe4) = iVar11;
          return;
        }
      }
      goto LAB_0098dafc;
    }
  }
  FUN_006108c0();
LAB_0098db14:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0098db28  FUN_0098db28 =====

void FUN_0098db28(long *param_1,void *param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *__dest;
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__dest_00;
  size_t sVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  sVar10 = (long)param_4 - (long)param_3;
  if (0 < (long)sVar10) {
    puVar4 = (undefined8 *)param_1[1];
    if ((long)sVar10 <= param_1[2] - (long)puVar4) {
      sVar12 = (long)puVar4 - (long)param_2;
      if ((long)sVar12 < (long)sVar10) {
        puVar7 = puVar4;
        puVar1 = puVar4;
        for (puVar9 = (undefined8 *)((long)param_3 + sVar12); puVar9 != param_4; puVar9 = puVar9 + 5
            ) {
          if (puVar1 == (undefined8 *)0x0) goto LAB_0098ddc8;
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar14 = puVar9[3];
          uVar13 = puVar9[2];
          puVar7 = puVar7 + 5;
          puVar1[4] = puVar9[4];
          puVar1[1] = uVar16;
          *puVar1 = uVar15;
          puVar1[3] = uVar14;
          puVar1[2] = uVar13;
          puVar1 = puVar1 + 5;
        }
        param_1[1] = (long)puVar7;
        if ((long)sVar12 < 1) {
          return;
        }
        puVar1 = puVar7;
        for (puVar9 = (undefined8 *)((long)puVar7 - sVar10); puVar9 < puVar4; puVar9 = puVar9 + 5) {
          if (puVar1 == (undefined8 *)0x0) goto LAB_0098ddc8;
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar14 = puVar9[3];
          uVar13 = puVar9[2];
          puVar1[4] = puVar9[4];
          puVar1[1] = uVar16;
          *puVar1 = uVar15;
          puVar1[3] = uVar14;
          puVar1[2] = uVar13;
          puVar1 = puVar1 + 5;
        }
        param_1[1] = (long)puVar1;
        sVar10 = (long)puVar7 - ((long)param_2 + sVar10);
        memmove((void *)((long)puVar7 - sVar10),param_2,sVar10);
        sVar10 = sVar12;
      }
      else {
        puVar9 = puVar4;
        for (puVar7 = (undefined8 *)((long)puVar4 - sVar10); puVar7 < puVar4; puVar7 = puVar7 + 5) {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0098ddc8;
          uVar16 = puVar7[1];
          uVar15 = *puVar7;
          uVar14 = puVar7[3];
          uVar13 = puVar7[2];
          puVar9[4] = puVar7[4];
          puVar9[1] = uVar16;
          *puVar9 = uVar15;
          puVar9[3] = uVar14;
          puVar9[2] = uVar13;
          puVar9 = puVar9 + 5;
        }
        param_1[1] = (long)puVar9;
        sVar12 = (long)puVar4 - ((long)param_2 + sVar10);
        memmove((void *)((long)puVar4 - sVar12),param_2,sVar12);
      }
      memmove(param_2,param_3,sVar10);
      return;
    }
    lVar11 = *param_1;
    uVar6 = ((long)sVar10 >> 3) * -0x3333333333333333 +
            ((long)puVar4 - lVar11 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar6) {
      FUN_0098dde4();
LAB_0098dde0:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar5 = param_1[2] - lVar11 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar8 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar8) goto LAB_0098dde0;
      pvVar2 = operator_new(uVar8 * 0x28);
    }
    puVar7 = (undefined8 *)((long)pvVar2 + ((long)param_2 - lVar11));
    __dest = (void *)((long)puVar7 + sVar10);
    puVar4 = puVar7;
    do {
      if (puVar4 == (undefined8 *)0x0) {
LAB_0098ddc8:
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
      sVar10 = sVar10 - 0x28;
      puVar9 = param_3 + 4;
      param_3 = param_3 + 5;
      puVar4[4] = *puVar9;
      puVar4[1] = uVar16;
      *puVar4 = uVar15;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      puVar4 = puVar4 + 5;
    } while (sVar10 != 0);
    memcpy(__dest,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    sVar10 = (long)param_2 - *param_1;
    __dest_00 = (void *)((long)puVar7 - sVar10);
    memcpy(__dest_00,(void *)*param_1,sVar10);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest_00;
    param_1[1] = (long)__dest + (lVar11 - (long)param_2);
    param_1[2] = (long)((long)pvVar2 + uVar8 * 0x28);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 0098dde4  FUN_0098dde4 =====

void FUN_0098dde4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0098ddfc  FUN_0098ddfc =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0098ddfc(long *param_1)

{
  bool bVar1;
  int iVar2;
  int *******pppppppiVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  uint local_44;
  int *******local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  (**(code **)(*param_1 + 0x10))(&local_40,param_1,"WebRTC-NormalizeSimulcastResolution",0x23);
  if (-1 < (char)local_30._7_1_) {
    puStack_38 = (undefined1 *)(ulong)local_30._7_1_;
  }
  if (puStack_38 < 7) {
    bVar1 = false;
  }
  else {
    pppppppiVar3 = local_40;
    if (-1 < (char)local_30._7_1_) {
      pppppppiVar3 = (int *******)&local_40;
    }
    bVar1 = *(int *)pppppppiVar3 == 0x62616e45 && *(int *)((long)pppppppiVar3 + 3) == 0x64656c62;
  }
  if ((char)local_30._7_1_ < '\0') {
    operator_delete(local_40);
  }
  if (!bVar1) {
    return 0;
  }
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x10))(&local_40,param_1,"WebRTC-NormalizeSimulcastResolution",0x23);
  if ((long)local_30 < 0) {
    pppppppiVar3 = local_40;
    if (puStack_38 != (undefined1 *)0x0) goto LAB_0098df00;
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    if (local_30._7_1_ == '\0') {
      uVar6 = 0;
      lVar7 = 0;
      goto LAB_0098dfc0;
    }
    pppppppiVar3 = (int *******)&local_40;
LAB_0098df00:
    local_44 = 0xaaaaaaaa;
    iVar2 = sscanf((char *)pppppppiVar3,"Enabled-%d",&local_44);
    if (iVar2 == 1) {
      uVar6 = (ulong)local_44;
      if (5 < local_44) {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          pcVar5 = "Unsupported exp value provided, value ignored.";
          uVar4 = 0x15a;
          goto LAB_0098df74;
        }
        goto LAB_0098df78;
      }
      lVar7 = 1;
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        pcVar5 = "No parameter provided.";
        uVar4 = 0x132;
LAB_0098df74:
        FUN_00623bb0(&DAT_001f4e98,
                     "../../rtc_base/experiments/normalize_simulcast_size_experiment.cc",uVar4,
                     pcVar5);
      }
LAB_0098df78:
      lVar7 = 0;
      uVar6 = 0;
    }
    if (-1 < (long)local_30) goto LAB_0098dfc0;
  }
  operator_delete(local_40);
LAB_0098dfc0:
  return uVar6 & 0xff | lVar7 << 0x20;
}


// ===== 0098dfdc  FUN_0098dfdc =====

void FUN_0098dfdc(undefined8 *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = 0xffffffffffffffff;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00977eb0(&local_70);
  if ((char)param_3[1] == '\x01') {
    iVar4 = *param_3 << 7;
  }
  else {
    if ((param_2[1] & 1) == 0) {
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../api/video/corruption_detection/frame_instrumentation_data_reader.cc",
                     0xf2,
                     "Got Corruption Detection Message with relative sequence index where no earlier sequence index is know. Ignoring."
                    );
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      if (puStack_58 == (undefined1 *)0x0) {
        return;
      }
      uVar7 = (ulong)(((long)puStack_58 - (long)local_50 << 0x3d) -
                     ((long)puStack_58 - (long)local_50)) >> 3;
      if ((ulong)(local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3 <= uVar7) {
        uVar7 = (ulong)(local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
      }
      puVar6 = local_50;
      if ((1 < uVar7) && ((((int)puStack_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        puVar6 = local_50 + uVar7 * -8;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar6 == puStack_58) {
          local_50 = puStack_58;
          operator_delete(puStack_58);
          return;
        }
        puVar6 = puVar6 + -8;
      } while (puVar6 != (undefined1 *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar5 = *param_2 & 0x3f80;
    uVar1 = uVar5 + 0x80;
    if ((int)(*param_2 & 0x7f) <= *param_3) {
      uVar1 = uVar5;
    }
    iVar4 = uVar1 + *param_3;
  }
  FUN_00977ed0(&local_70,iVar4);
  uVar7 = *(ulong *)(param_3 + 6) >> 1;
  piVar2 = param_3 + 8;
  if ((*(ulong *)(param_3 + 6) & 1) != 0) {
    piVar2 = *(int **)(param_3 + 8);
  }
  piVar3 = (int *)0x0;
  if (uVar7 != 0) {
    piVar3 = piVar2;
  }
  uVar5 = (int)uVar7 + (int)local_70;
  if ((char)param_2[1] == '\x01') {
    *param_2 = uVar5;
  }
  else {
    if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_2 = uVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if (uVar7 != 0) {
    FUN_00977eec(*(undefined8 *)(param_3 + 2),&local_70);
    FUN_00977f1c(&local_70,param_3[4]);
    FUN_00977f38(&local_70,param_3[5]);
    FUN_00977f54(&local_70,piVar3,uVar7);
  }
  param_1[2] = local_60;
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[4] = local_50;
  param_1[3] = puStack_58;
  param_1[5] = local_48;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


// ===== 0098e20c  FUN_0098e20c =====

void FUN_0098e20c(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  memset(param_1 + 8,0,0x4000);
  param_1[0x4038] = 0;
  *(undefined8 *)(param_1 + 0x4008) = 0x8000000000000000;
  *(undefined1 **)(param_1 + 0x4040) = param_1 + 0x4048;
  *(undefined8 *)(param_1 + 0x4050) = 0;
  *(undefined8 *)(param_1 + 0x4048) = 0;
  *(undefined8 *)(param_1 + 0x4068) = 0;
  *(undefined8 *)(param_1 + 0x4060) = 0;
  *(undefined8 *)(param_1 + 0x4030) = 0;
  *(undefined1 **)(param_1 + 0x4058) = param_1 + 0x4060;
  *(undefined8 *)(param_1 + 0x4018) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x4010) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x4028) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x4020) = 0x8000000000000000;
  return;
}


// ===== 0098e284  FUN_0098e284 =====

void FUN_0098e284(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  param_3 = param_3 & 0xffff;
  lVar3 = param_3 - 1;
  puVar2 = (ulong *)(param_2 + 0x4008);
  if (lVar3 == *(long *)(param_2 + 0x4008)) {
LAB_0098e300:
    if (puVar2 != (ulong *)0x0) {
      *puVar2 = param_3;
      goto LAB_0098e334;
    }
  }
  else {
    if (lVar3 == *(long *)(param_2 + 0x4010)) {
      lVar3 = 0x4010;
LAB_0098e2fc:
      puVar2 = (ulong *)(param_2 + lVar3);
      goto LAB_0098e300;
    }
    if (lVar3 == *(long *)(param_2 + 0x4018)) {
      lVar3 = 0x4018;
      goto LAB_0098e2fc;
    }
    if (lVar3 == *(long *)(param_2 + 0x4020)) {
      lVar3 = 0x4020;
      goto LAB_0098e2fc;
    }
    if (lVar3 == *(long *)(param_2 + 0x4028)) {
      lVar3 = 0x4028;
      goto LAB_0098e2fc;
    }
  }
  if (*(ulong *)(param_2 + 0x4030) < 5) {
    ((ulong *)(param_2 + 0x4008))[*(ulong *)(param_2 + 0x4030)] = param_3;
    uVar1 = *(ulong *)(param_2 + 0x4030);
    if (uVar1 < 5) {
      lVar3 = uVar1 - 4;
      if (lVar3 != 0) {
        lVar3 = uVar1 + 1;
      }
      *(long *)(param_2 + 0x4030) = lVar3;
LAB_0098e334:
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
            );
}


// ===== 0098e360  FUN_0098e360 =====

void FUN_0098e360(undefined8 *param_1,long param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  uVar5 = *(ulong *)((long)param_3 + 8);
  lVar1 = param_2 + 8;
  uVar4 = uVar5 & 0x7ff;
  pvVar6 = *(void **)(lVar1 + uVar4 * 8);
  if (pvVar6 == (void *)0x0) {
    *(void **)(lVar1 + uVar4 * 8) = param_3;
  }
  else {
    iVar2 = *(uint *)((long)pvVar6 + 0x10) - *(uint *)((long)param_3 + 0x10);
    bVar3 = *(uint *)((long)param_3 + 0x10) <= *(uint *)((long)pvVar6 + 0x10) && iVar2 != 0;
    if (iVar2 != -0x80000000) {
      bVar3 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
    }
    if (bVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      if (param_3 != (void *)0x0) {
        FUN_007dd190((long)param_3 + 0x30);
        FUN_007b5554((long)param_3 + 0x18);
        operator_delete(param_3);
        return;
      }
      return;
    }
    *(void **)(lVar1 + uVar4 * 8) = param_3;
    FUN_007dd190((long)pvVar6 + 0x30);
    FUN_007b5554((long)pvVar6 + 0x18);
    operator_delete(pvVar6);
  }
  FUN_0098e464(param_1,param_2,uVar5);
  return;
}


// ===== 0098e464  FUN_0098e464 =====

void FUN_0098e464(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  
  lVar1 = param_2 + 8;
  param_1[2] = 0;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  lVar7 = *(long *)(lVar1 + (param_3 & 0x7ff) * 8);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/h26x_packet_buffer.cc",0xac,"packet != nullptr",
                 &DAT_001f5fa0);
  }
  lVar5 = param_3 - 1;
  puVar2 = (ulong *)(param_2 + 0x4008);
  puVar8 = puVar2;
  if (lVar5 == *(long *)(param_2 + 0x4008)) {
LAB_0098e51c:
    if (puVar8 != (ulong *)0x0) goto LAB_0098e588;
  }
  else {
    if (lVar5 == *(long *)(param_2 + 0x4010)) {
      lVar5 = 0x4010;
LAB_0098e518:
      puVar8 = (ulong *)(param_2 + lVar5);
      goto LAB_0098e51c;
    }
    if (lVar5 == *(long *)(param_2 + 0x4018)) {
      lVar5 = 0x4018;
      goto LAB_0098e518;
    }
    if (lVar5 == *(long *)(param_2 + 0x4020)) {
      lVar5 = 0x4020;
      goto LAB_0098e518;
    }
    if (lVar5 == *(long *)(param_2 + 0x4028)) {
      lVar5 = 0x4028;
      goto LAB_0098e518;
    }
  }
  uVar3 = FUN_0098e65c(param_2,lVar7);
  if (((uVar3 & 1) == 0) && ((*(byte *)(param_2 + 0x4038) & 1) != 0)) {
    return;
  }
  if (*(ulong *)(param_2 + 0x4030) < 5) {
    puVar2[*(ulong *)(param_2 + 0x4030)] = param_3;
    uVar3 = *(ulong *)(param_2 + 0x4030);
    if (uVar3 < 5) {
      lVar5 = uVar3 - 4;
      puVar8 = puVar2 + uVar3;
      if (lVar5 != 0) {
        lVar5 = uVar3 + 1;
      }
      *(long *)(param_2 + 0x4030) = lVar5;
LAB_0098e588:
      uVar3 = param_3;
      if ((long)param_3 <= (long)(param_3 + 0x800)) {
        uVar3 = param_3 + 0x800;
      }
      do {
        if (param_3 == uVar3) {
          return;
        }
        if (param_3 != *(ulong *)(lVar7 + 8)) {
          return;
        }
        *puVar8 = param_3;
        if (*(char *)(lVar7 + 1) == '\x01') {
          uVar4 = param_3;
          do {
            uVar6 = uVar4;
            if ((long)uVar6 <= (long)(param_3 - 0x800)) goto LAB_0098e5a0;
            lVar5 = *(long *)(lVar1 + ((ulong)((int)uVar6 - 1) & 0x7ff) * 8);
          } while ((lVar5 != 0) &&
                  (uVar4 = uVar6 - 1, *(int *)(lVar5 + 0x10) == *(int *)(lVar7 + 0x10)));
          uVar4 = FUN_0098e84c(param_2,uVar6,param_3,param_1);
          if ((uVar4 & 1) == 0) {
            return;
          }
          *(undefined1 *)(param_2 + 0x4038) = 1;
        }
LAB_0098e5a0:
        param_3 = param_3 + 1;
        lVar7 = *(long *)(lVar1 + (param_3 & 0x7ff) * 8);
        if (lVar7 == 0) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
            );
}


// ===== 0098e65c  FUN_0098e65c =====

bool FUN_0098e65c(byte *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (*(int *)(param_2 + 0xdc) == 5) {
    lVar7 = *(long *)(param_2 + 0x18);
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x10) + *(long *)(param_2 + 0x20);
    }
    lVar1 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar1 = lVar7;
    }
    FUN_0088518c(&local_50,lVar1);
    puVar4 = puStack_48;
    puVar8 = local_50;
    if (local_50 == puStack_48) {
      bVar5 = false;
    }
    else {
      do {
        puVar13 = puVar8 + 0x18;
        lVar7 = *(long *)(param_2 + 0x18);
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x10) + *(long *)(param_2 + 0x20);
        }
        cVar6 = FUN_0088532c(*(undefined1 *)(lVar7 + *(long *)(puVar8 + 8)));
        bVar5 = cVar6 == ' ';
        puVar8 = puVar13;
      } while (!bVar5 && puVar13 != puVar4);
    }
    if (local_50 != (undefined1 *)0x0) {
      uVar10 = (ulong)(((long)local_50 - (long)puStack_48) * 0x1555555555555555) >> 3;
      uVar12 = (long)puStack_48 * -0x1555555555555555 - 8U >> 3;
      if (uVar12 <= uVar10) {
        uVar10 = uVar12;
      }
      puVar8 = puStack_48;
      if ((1 < uVar10) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
        uVar10 = uVar10 & 0x1ffffffffffffffe;
        puVar8 = puStack_48 + uVar10 * -0x18;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      while (puVar8 != local_50) {
        puVar8 = puVar8 + -0x18;
        if (puVar8 == (undefined1 *)0x0) {
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
  }
  else {
    if (*(int *)(param_2 + 0xdc) == 4) {
      if (*(char *)(param_2 + 0x7c0) != '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_005ee558();
      }
      pcVar2 = *(char **)(param_2 + 0x160);
      pcVar3 = *(char **)(param_2 + 0x168);
      pcVar9 = pcVar2;
      if (pcVar2 != pcVar3) {
        do {
          pcVar11 = pcVar9 + 0xc;
          if (*pcVar9 == '\a') {
            return true;
          }
          pcVar9 = pcVar11;
        } while (pcVar11 != pcVar3);
        if ((*param_1 & 1) != 0) {
          do {
            pcVar9 = pcVar2 + 0xc;
            bVar5 = *pcVar2 == '\x05';
            if (bVar5) {
              return bVar5;
            }
            pcVar2 = pcVar9;
          } while (pcVar9 != pcVar3);
          return bVar5;
        }
      }
    }
    bVar5 = false;
  }
  return bVar5;
}


// ===== 0098e84c  FUN_0098e84c =====

undefined8 FUN_0098e84c(byte *param_1,ulong param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  ulong uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 auVar41 [16];
  byte bVar58;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar59 [16];
  byte bVar82;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar90;
  byte bVar91;
  ulong uVar83;
  char cVar89;
  byte bVar92;
  undefined8 uVar84;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined8 uVar102;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  undefined8 uVar119;
  byte bVar127;
  undefined8 uVar120;
  byte bVar128;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  undefined8 uVar129;
  byte bVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  
  if ((long)param_2 <= (long)param_3) {
    bVar29 = 0;
    bVar58 = 0;
    bVar40 = 0;
    bVar30 = 0;
    uVar19 = 0xffffffff;
    uVar14 = 0xffffffff;
    uVar12 = param_2;
    do {
      uVar28 = uVar12 & 0x7ff;
      lVar17 = *(long *)(param_1 + uVar28 * 8 + 8);
      if (*(int *)(lVar17 + 0xdc) == 5) {
        auVar31[8] = 0xaa;
        auVar31._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
        auVar31[9] = 0xaa;
        auVar31[10] = 0xaa;
        auVar31[0xb] = 0xaa;
        auVar31[0xc] = 0xaa;
        auVar31[0xd] = 0xaa;
        auVar31[0xe] = 0xaa;
        auVar31[0xf] = 0xaa;
        puStack_98 = auVar31._8_8_;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        lVar24 = *(long *)(lVar17 + 0x18);
        if (lVar24 != 0) {
          lVar24 = *(long *)(lVar24 + 0x10) + *(long *)(lVar17 + 0x20);
        }
        lVar6 = 0;
        if (*(long *)(lVar17 + 0x28) != 0) {
          lVar6 = lVar24;
        }
        FUN_0088518c(&local_a0,lVar6);
        puVar11 = puStack_98;
        for (puVar18 = local_a0; puVar18 != puVar11; puVar18 = puVar18 + 0x18) {
          lVar17 = *(long *)(*(long *)(param_1 + uVar28 * 8 + 8) + 0x18);
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x10) +
                     *(long *)(*(long *)(param_1 + uVar28 * 8 + 8) + 0x20);
          }
          bVar33 = FUN_0088532c(*(undefined1 *)(lVar17 + *(long *)(puVar18 + 8)));
          bVar30 = bVar30 | (bVar33 & 0xf8) == 0x10;
          bVar29 = bVar29 | bVar33 == 0x20;
          bVar58 = bVar58 | bVar33 == 0x21;
          bVar40 = bVar40 | bVar33 == 0x22;
        }
        iVar15 = (int)puStack_98;
        if ((bVar30 != 0) && ((bVar29 & bVar58 & bVar40) == 0)) {
          if (local_a0 != (undefined1 *)0x0) {
            uVar28 = (long)puStack_98 * -0x1555555555555555 - 8U >> 3;
            uVar12 = (ulong)((long)puStack_98 * -0x1555555555555555 +
                            (long)local_a0 * 0x1555555555555555) >> 3;
            if (uVar28 <= uVar12) {
              uVar12 = uVar28;
            }
            puVar18 = puStack_98;
            if ((1 < uVar12) && ((((int)local_a0 - iVar15 | -iVar15) & 7U) == 0)) {
              uVar12 = uVar12 & 0x1ffffffffffffffe;
              puVar18 = puStack_98 + uVar12 * -0x18;
              do {
                uVar12 = uVar12 - 2;
              } while (uVar12 != 0);
            }
            while (puVar18 != local_a0) {
              puVar18 = puVar18 + -0x18;
              if (puVar18 == (undefined1 *)0x0) {
LAB_0098ef4c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
            }
            puStack_98 = local_a0;
            operator_delete(local_a0);
          }
          return 0;
        }
        if (local_a0 != (undefined1 *)0x0) {
          uVar20 = (ulong)(((long)local_a0 - (long)puStack_98) * 0x1555555555555555) >> 3;
          uVar23 = (long)puStack_98 * -0x1555555555555555 - 8U >> 3;
          if (uVar23 <= uVar20) {
            uVar20 = uVar23;
          }
          puVar18 = puStack_98;
          if ((1 < uVar20) && ((((int)local_a0 - iVar15 | -iVar15) & 7U) == 0)) {
            uVar20 = uVar20 & 0x1ffffffffffffffe;
            puVar18 = puStack_98 + uVar20 * -0x18;
            do {
              uVar20 = uVar20 - 2;
            } while (uVar20 != 0);
          }
          while (puVar18 != local_a0) {
            puVar18 = puVar18 + -0x18;
            if (puVar18 == (undefined1 *)0x0) goto LAB_0098ef4c;
          }
          puStack_98 = local_a0;
          operator_delete(local_a0);
        }
        lVar17 = *(long *)(param_1 + uVar28 * 8 + 8);
      }
      else if (*(int *)(lVar17 + 0xdc) == 4) {
        if (*(char *)(lVar17 + 0x7c0) != '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        pcVar22 = *(char **)(lVar17 + 0x160);
        pcVar8 = *(char **)(lVar17 + 0x168);
        if (pcVar22 != pcVar8) {
          uVar28 = ((long)pcVar8 - (long)pcVar22) * 0x2aaaaaaaaaaaaaab - 4;
          if (0x1b < uVar28) {
            uVar20 = (uVar28 >> 2) + 1;
            if (uVar28 < 0x7c) {
              uVar23 = 0;
            }
            else {
              uVar84 = 0;
              bVar61 = 0;
              bVar63 = 0;
              bVar65 = 0;
              bVar67 = 0;
              bVar69 = 0;
              bVar71 = 0;
              bVar73 = 0;
              bVar48 = 0;
              bVar50 = 0;
              bVar51 = 0;
              bVar52 = 0;
              bVar53 = 0;
              bVar54 = 0;
              bVar55 = 0;
              bVar56 = 0;
              bVar57 = 0;
              uVar23 = uVar20 & 0x7fffffffffffffe0;
              uVar119 = 0;
              uVar129 = 0;
              uVar102 = 0;
              uVar120 = 0;
              pcVar21 = pcVar22 + 0xc0;
              uVar28 = uVar20 & 0x7fffffffffffffe0;
              uVar83 = (ulong)bVar58;
              bVar60 = 0;
              bVar62 = 0;
              bVar64 = 0;
              bVar66 = 0;
              bVar68 = 0;
              bVar70 = 0;
              bVar72 = 0;
              bVar74 = 0;
              bVar75 = 0;
              bVar76 = 0;
              bVar77 = 0;
              bVar78 = 0;
              bVar79 = 0;
              bVar80 = 0;
              bVar81 = 0;
              bVar58 = 0;
              bVar33 = 0;
              bVar34 = 0;
              bVar35 = 0;
              bVar36 = 0;
              bVar37 = 0;
              bVar38 = 0;
              bVar39 = 0;
              bVar42 = 0;
              bVar43 = 0;
              bVar44 = 0;
              bVar45 = 0;
              bVar46 = 0;
              bVar47 = 0;
              bVar49 = 0;
              do {
                auVar137[0] = pcVar21[-0xc0];
                uVar28 = uVar28 - 0x20;
                auVar137[1] = pcVar21[-0xb4];
                auVar137[2] = pcVar21[-0xa8];
                auVar137[3] = pcVar21[-0x9c];
                auVar137[4] = pcVar21[-0x90];
                auVar137[5] = pcVar21[-0x84];
                auVar137[6] = pcVar21[-0x78];
                auVar137[7] = pcVar21[-0x6c];
                auVar137[9] = pcVar21[-0x54];
                auVar137[8] = pcVar21[-0x60];
                auVar137[10] = pcVar21[-0x48];
                auVar137[0xb] = pcVar21[-0x3c];
                auVar137[0xc] = pcVar21[-0x30];
                auVar137[0xd] = pcVar21[-0x24];
                auVar137[0xe] = pcVar21[-0x18];
                auVar137[0xf] = pcVar21[-0xc];
                auVar139[1] = pcVar21[0xc];
                auVar139[0] = *pcVar21;
                auVar139[2] = pcVar21[0x18];
                auVar139[3] = pcVar21[0x24];
                auVar139[4] = pcVar21[0x30];
                auVar139[5] = pcVar21[0x3c];
                auVar139[6] = pcVar21[0x48];
                auVar139[7] = pcVar21[0x54];
                auVar139[9] = pcVar21[0x6c];
                auVar139[8] = pcVar21[0x60];
                auVar139[10] = pcVar21[0x78];
                auVar139[0xb] = pcVar21[0x84];
                auVar139[0xc] = pcVar21[0x90];
                auVar139[0xd] = pcVar21[0x9c];
                auVar139[0xe] = pcVar21[0xa8];
                pcVar1 = pcVar21 + 0xb4;
                pcVar21 = pcVar21 + 0x180;
                auVar139[0xf] = *pcVar1;
                auVar138[8] = 5;
                auVar138._0_8_ = 0x505050505050505;
                auVar138[9] = 5;
                auVar138[10] = 5;
                auVar138[0xb] = 5;
                auVar138[0xc] = 5;
                auVar138[0xd] = 5;
                auVar138[0xe] = 5;
                auVar138[0xf] = 5;
                auVar140 = NEON_cmeq(auVar137,auVar138,1);
                auVar141[8] = 7;
                auVar141._0_8_ = 0x707070707070707;
                auVar141[9] = 7;
                auVar141[10] = 7;
                auVar141[0xb] = 7;
                auVar141[0xc] = 7;
                auVar141[0xd] = 7;
                auVar141[0xe] = 7;
                auVar141[0xf] = 7;
                auVar141 = NEON_cmeq(auVar137,auVar141,1);
                auVar9[8] = 8;
                auVar9._0_8_ = 0x808080808080808;
                auVar9[9] = 8;
                auVar9[10] = 8;
                auVar9[0xb] = 8;
                auVar9[0xc] = 8;
                auVar9[0xd] = 8;
                auVar9[0xe] = 8;
                auVar9[0xf] = 8;
                auVar138 = NEON_cmeq(auVar137,auVar9,1);
                bVar30 = bVar30 | auVar140[0];
                bVar58 = bVar58 | auVar140[1];
                bVar33 = bVar33 | auVar140[2];
                bVar34 = bVar34 | auVar140[3];
                bVar35 = bVar35 | auVar140[4];
                bVar36 = bVar36 | auVar140[5];
                bVar37 = bVar37 | auVar140[6];
                bVar38 = bVar38 | auVar140[7];
                bVar39 = bVar39 | auVar140[8];
                bVar42 = bVar42 | auVar140[9];
                bVar43 = bVar43 | auVar140[10];
                bVar44 = bVar44 | auVar140[0xb];
                bVar45 = bVar45 | auVar140[0xc];
                bVar46 = bVar46 | auVar140[0xd];
                bVar47 = bVar47 | auVar140[0xe];
                bVar49 = bVar49 | auVar140[0xf];
                bVar82 = (byte)uVar83 | auVar141[0];
                bVar85 = (byte)(uVar83 >> 8) | auVar141[1];
                bVar86 = (byte)(uVar83 >> 0x10) | auVar141[2];
                bVar87 = (byte)(uVar83 >> 0x18) | auVar141[3];
                bVar88 = (byte)(uVar83 >> 0x20) | auVar141[4];
                bVar90 = (byte)(uVar83 >> 0x28) | auVar141[5];
                bVar91 = (byte)(uVar83 >> 0x30) | auVar141[6];
                bVar92 = (byte)(uVar83 >> 0x38) | auVar141[7];
                uVar83 = CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar88,CONCAT13(
                                                  bVar87,CONCAT12(bVar86,CONCAT11(bVar85,bVar82)))))
                                                 ));
                bVar93 = (byte)uVar84 | auVar141[8];
                bVar94 = (byte)((ulong)uVar84 >> 8) | auVar141[9];
                bVar95 = (byte)((ulong)uVar84 >> 0x10) | auVar141[10];
                bVar96 = (byte)((ulong)uVar84 >> 0x18) | auVar141[0xb];
                bVar97 = (byte)((ulong)uVar84 >> 0x20) | auVar141[0xc];
                bVar98 = (byte)((ulong)uVar84 >> 0x28) | auVar141[0xd];
                bVar99 = (byte)((ulong)uVar84 >> 0x30) | auVar141[0xe];
                bVar100 = (byte)((ulong)uVar84 >> 0x38) | auVar141[0xf];
                uVar84 = CONCAT17(bVar100,CONCAT16(bVar99,CONCAT15(bVar98,CONCAT14(bVar97,CONCAT13(
                                                  bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93)))))
                                                  ));
                auVar140[8] = 5;
                auVar140._0_8_ = 0x505050505050505;
                auVar140[9] = 5;
                auVar140[10] = 5;
                auVar140[0xb] = 5;
                auVar140[0xc] = 5;
                auVar140[0xd] = 5;
                auVar140[0xe] = 5;
                auVar140[0xf] = 5;
                auVar141 = NEON_cmeq(auVar139,auVar140,1);
                auVar142[8] = 7;
                auVar142._0_8_ = 0x707070707070707;
                auVar142[9] = 7;
                auVar142[10] = 7;
                auVar142[0xb] = 7;
                auVar142[0xc] = 7;
                auVar142[0xd] = 7;
                auVar142[0xe] = 7;
                auVar142[0xf] = 7;
                auVar142 = NEON_cmeq(auVar139,auVar142,1);
                auVar10[8] = 8;
                auVar10._0_8_ = 0x808080808080808;
                auVar10[9] = 8;
                auVar10[10] = 8;
                auVar10[0xb] = 8;
                auVar10[0xc] = 8;
                auVar10[0xd] = 8;
                auVar10[0xe] = 8;
                auVar10[0xf] = 8;
                auVar140 = NEON_cmeq(auVar139,auVar10,1);
                bVar40 = bVar40 | auVar138[0];
                bVar60 = bVar60 | auVar138[1];
                bVar62 = bVar62 | auVar138[2];
                bVar64 = bVar64 | auVar138[3];
                bVar66 = bVar66 | auVar138[4];
                bVar68 = bVar68 | auVar138[5];
                bVar70 = bVar70 | auVar138[6];
                bVar72 = bVar72 | auVar138[7];
                bVar74 = bVar74 | auVar138[8];
                bVar75 = bVar75 | auVar138[9];
                bVar76 = bVar76 | auVar138[10];
                bVar77 = bVar77 | auVar138[0xb];
                bVar78 = bVar78 | auVar138[0xc];
                bVar79 = bVar79 | auVar138[0xd];
                bVar80 = bVar80 | auVar138[0xe];
                bVar81 = bVar81 | auVar138[0xf];
                bVar61 = bVar61 | auVar141[0];
                bVar63 = bVar63 | auVar141[1];
                bVar65 = bVar65 | auVar141[2];
                bVar67 = bVar67 | auVar141[3];
                bVar69 = bVar69 | auVar141[4];
                bVar71 = bVar71 | auVar141[5];
                bVar73 = bVar73 | auVar141[6];
                bVar48 = bVar48 | auVar141[7];
                bVar50 = bVar50 | auVar141[8];
                bVar51 = bVar51 | auVar141[9];
                bVar52 = bVar52 | auVar141[10];
                bVar53 = bVar53 | auVar141[0xb];
                bVar54 = bVar54 | auVar141[0xc];
                bVar55 = bVar55 | auVar141[0xd];
                bVar56 = bVar56 | auVar141[0xe];
                bVar57 = bVar57 | auVar141[0xf];
                bVar118 = (byte)uVar119 | auVar142[0];
                bVar121 = (byte)((ulong)uVar119 >> 8) | auVar142[1];
                bVar122 = (byte)((ulong)uVar119 >> 0x10) | auVar142[2];
                bVar123 = (byte)((ulong)uVar119 >> 0x18) | auVar142[3];
                bVar124 = (byte)((ulong)uVar119 >> 0x20) | auVar142[4];
                bVar125 = (byte)((ulong)uVar119 >> 0x28) | auVar142[5];
                bVar126 = (byte)((ulong)uVar119 >> 0x30) | auVar142[6];
                bVar127 = (byte)((ulong)uVar119 >> 0x38) | auVar142[7];
                uVar119 = CONCAT17(bVar127,CONCAT16(bVar126,CONCAT15(bVar125,CONCAT14(bVar124,
                                                  CONCAT13(bVar123,CONCAT12(bVar122,CONCAT11(bVar121
                                                  ,bVar118)))))));
                bVar128 = (byte)uVar129 | auVar142[8];
                bVar130 = (byte)((ulong)uVar129 >> 8) | auVar142[9];
                bVar131 = (byte)((ulong)uVar129 >> 0x10) | auVar142[10];
                bVar132 = (byte)((ulong)uVar129 >> 0x18) | auVar142[0xb];
                bVar133 = (byte)((ulong)uVar129 >> 0x20) | auVar142[0xc];
                bVar134 = (byte)((ulong)uVar129 >> 0x28) | auVar142[0xd];
                bVar135 = (byte)((ulong)uVar129 >> 0x30) | auVar142[0xe];
                bVar136 = (byte)((ulong)uVar129 >> 0x38) | auVar142[0xf];
                uVar129 = CONCAT17(bVar136,CONCAT16(bVar135,CONCAT15(bVar134,CONCAT14(bVar133,
                                                  CONCAT13(bVar132,CONCAT12(bVar131,CONCAT11(bVar130
                                                  ,bVar128)))))));
                bVar101 = (byte)uVar102 | auVar140[0];
                bVar103 = (byte)((ulong)uVar102 >> 8) | auVar140[1];
                bVar104 = (byte)((ulong)uVar102 >> 0x10) | auVar140[2];
                bVar105 = (byte)((ulong)uVar102 >> 0x18) | auVar140[3];
                bVar106 = (byte)((ulong)uVar102 >> 0x20) | auVar140[4];
                bVar107 = (byte)((ulong)uVar102 >> 0x28) | auVar140[5];
                bVar108 = (byte)((ulong)uVar102 >> 0x30) | auVar140[6];
                bVar109 = (byte)((ulong)uVar102 >> 0x38) | auVar140[7];
                uVar102 = CONCAT17(bVar109,CONCAT16(bVar108,CONCAT15(bVar107,CONCAT14(bVar106,
                                                  CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103
                                                  ,bVar101)))))));
                bVar110 = (byte)uVar120 | auVar140[8];
                bVar111 = (byte)((ulong)uVar120 >> 8) | auVar140[9];
                bVar112 = (byte)((ulong)uVar120 >> 0x10) | auVar140[10];
                bVar113 = (byte)((ulong)uVar120 >> 0x18) | auVar140[0xb];
                bVar114 = (byte)((ulong)uVar120 >> 0x20) | auVar140[0xc];
                bVar115 = (byte)((ulong)uVar120 >> 0x28) | auVar140[0xd];
                bVar116 = (byte)((ulong)uVar120 >> 0x30) | auVar140[0xe];
                bVar117 = (byte)((ulong)uVar120 >> 0x38) | auVar140[0xf];
                uVar120 = CONCAT17(bVar117,CONCAT16(bVar116,CONCAT15(bVar115,CONCAT14(bVar114,
                                                  CONCAT13(bVar113,CONCAT12(bVar112,CONCAT11(bVar111
                                                  ,bVar110)))))));
              } while (uVar28 != 0);
              auVar41[0] = (bVar118 | bVar82) << 7;
              auVar41[1] = (bVar121 | bVar85) << 7;
              auVar41[2] = (bVar122 | bVar86) << 7;
              auVar41[3] = (bVar123 | bVar87) << 7;
              auVar41[4] = (bVar124 | bVar88) << 7;
              auVar41[5] = (bVar125 | bVar90) << 7;
              auVar41[6] = (bVar126 | bVar91) << 7;
              auVar41[7] = (bVar127 | bVar92) << 7;
              auVar41[8] = (bVar128 | bVar93) << 7;
              auVar41[9] = (bVar130 | bVar94) << 7;
              auVar41[10] = (bVar131 | bVar95) << 7;
              auVar41[0xb] = (bVar132 | bVar96) << 7;
              auVar41[0xc] = (bVar133 | bVar97) << 7;
              auVar41[0xd] = (bVar134 | bVar98) << 7;
              auVar41[0xe] = (bVar135 | bVar99) << 7;
              auVar41[0xf] = (bVar136 | bVar100) << 7;
              auVar59[0] = (bVar101 | bVar40) << 7;
              auVar59[1] = (bVar103 | bVar60) << 7;
              auVar59[2] = (bVar104 | bVar62) << 7;
              auVar59[3] = (bVar105 | bVar64) << 7;
              auVar59[4] = (bVar106 | bVar66) << 7;
              auVar59[5] = (bVar107 | bVar68) << 7;
              auVar59[6] = (bVar108 | bVar70) << 7;
              auVar59[7] = (bVar109 | bVar72) << 7;
              auVar59[8] = (bVar110 | bVar74) << 7;
              auVar59[9] = (bVar111 | bVar75) << 7;
              auVar59[10] = (bVar112 | bVar76) << 7;
              auVar59[0xb] = (bVar113 | bVar77) << 7;
              auVar59[0xc] = (bVar114 | bVar78) << 7;
              auVar59[0xd] = (bVar115 | bVar79) << 7;
              auVar59[0xe] = (bVar116 | bVar80) << 7;
              auVar59[0xf] = (bVar117 | bVar81) << 7;
              auVar32[0] = (bVar61 | bVar30) << 7;
              auVar32[1] = (bVar63 | bVar58) << 7;
              auVar32[2] = (bVar65 | bVar33) << 7;
              auVar32[3] = (bVar67 | bVar34) << 7;
              auVar32[4] = (bVar69 | bVar35) << 7;
              auVar32[5] = (bVar71 | bVar36) << 7;
              auVar32[6] = (bVar73 | bVar37) << 7;
              auVar32[7] = (bVar48 | bVar38) << 7;
              auVar32[8] = (bVar50 | bVar39) << 7;
              auVar32[9] = (bVar51 | bVar42) << 7;
              auVar32[10] = (bVar52 | bVar43) << 7;
              auVar32[0xb] = (bVar53 | bVar44) << 7;
              auVar32[0xc] = (bVar54 | bVar45) << 7;
              auVar32[0xd] = (bVar55 | bVar46) << 7;
              auVar32[0xe] = (bVar56 | bVar47) << 7;
              auVar32[0xf] = (bVar57 | bVar49) << 7;
              auVar140 = NEON_cmlt(auVar41,0,1);
              auVar141 = NEON_cmlt(auVar59,0,1);
              auVar138 = NEON_cmlt(auVar32,0,1);
              bVar58 = NEON_umaxv(auVar140,1);
              bVar40 = NEON_umaxv(auVar141,1);
              bVar30 = NEON_umaxv(auVar138,1);
              bVar58 = bVar58 & 1;
              bVar40 = bVar40 & 1;
              bVar30 = bVar30 & 1;
              if (uVar20 == uVar23) goto LAB_0098edac;
              if ((uVar20 & 0x18) == 0) {
                pcVar22 = pcVar22 + uVar23 * 0xc;
                goto LAB_0098ed7c;
              }
            }
            bVar61 = 0;
            bVar63 = 0;
            bVar65 = 0;
            bVar67 = 0;
            bVar69 = 0;
            bVar71 = 0;
            bVar73 = 0;
            bVar42 = 0;
            bVar43 = 0;
            bVar44 = 0;
            bVar45 = 0;
            bVar46 = 0;
            bVar47 = 0;
            bVar49 = 0;
            bVar33 = 0;
            bVar34 = 0;
            bVar35 = 0;
            bVar36 = 0;
            bVar37 = 0;
            bVar38 = 0;
            bVar39 = 0;
            uVar28 = uVar20 & 0x7ffffffffffffff8;
            lVar24 = uVar23 - uVar28;
            pcVar21 = pcVar22 + uVar23 * 0xc + 0x30;
            do {
              pcVar1 = pcVar21 + -0x30;
              pcVar25 = pcVar21 + -0x24;
              lVar24 = lVar24 + 8;
              pcVar26 = pcVar21 + -0x18;
              pcVar27 = pcVar21 + -0xc;
              pcVar2 = pcVar21 + 0xc;
              cVar89 = *pcVar21;
              pcVar3 = pcVar21 + 0x18;
              pcVar4 = pcVar21 + 0x24;
              pcVar21 = pcVar21 + 0x60;
              uVar84 = CONCAT17(*pcVar4,CONCAT16(*pcVar3,CONCAT15(*pcVar2,CONCAT14(cVar89,CONCAT13(*
                                                  pcVar27,CONCAT12(*pcVar26,CONCAT11(*pcVar25,*
                                                  pcVar1)))))));
              uVar102 = NEON_cmeq(uVar84,0x505050505050505,1);
              uVar120 = NEON_cmeq(uVar84,0x707070707070707,1);
              uVar84 = NEON_cmeq(uVar84,0x808080808080808,1);
              bVar30 = bVar30 | (byte)uVar102;
              bVar33 = bVar33 | (byte)((ulong)uVar102 >> 8);
              bVar34 = bVar34 | (byte)((ulong)uVar102 >> 0x10);
              bVar35 = bVar35 | (byte)((ulong)uVar102 >> 0x18);
              bVar36 = bVar36 | (byte)((ulong)uVar102 >> 0x20);
              bVar37 = bVar37 | (byte)((ulong)uVar102 >> 0x28);
              bVar38 = bVar38 | (byte)((ulong)uVar102 >> 0x30);
              bVar39 = bVar39 | (byte)((ulong)uVar102 >> 0x38);
              bVar58 = bVar58 | (byte)uVar120;
              bVar61 = bVar61 | (byte)((ulong)uVar120 >> 8);
              bVar63 = bVar63 | (byte)((ulong)uVar120 >> 0x10);
              bVar65 = bVar65 | (byte)((ulong)uVar120 >> 0x18);
              bVar67 = bVar67 | (byte)((ulong)uVar120 >> 0x20);
              bVar69 = bVar69 | (byte)((ulong)uVar120 >> 0x28);
              bVar71 = bVar71 | (byte)((ulong)uVar120 >> 0x30);
              bVar73 = bVar73 | (byte)((ulong)uVar120 >> 0x38);
              bVar40 = bVar40 | (byte)uVar84;
              bVar42 = bVar42 | (byte)((ulong)uVar84 >> 8);
              bVar43 = bVar43 | (byte)((ulong)uVar84 >> 0x10);
              bVar44 = bVar44 | (byte)((ulong)uVar84 >> 0x18);
              bVar45 = bVar45 | (byte)((ulong)uVar84 >> 0x20);
              bVar46 = bVar46 | (byte)((ulong)uVar84 >> 0x28);
              bVar47 = bVar47 | (byte)((ulong)uVar84 >> 0x30);
              bVar49 = bVar49 | (byte)((ulong)uVar84 >> 0x38);
            } while (lVar24 != 0);
            uVar120 = NEON_cmlt(CONCAT17(bVar73 << 7,
                                         CONCAT16(bVar71 << 7,
                                                  CONCAT15(bVar69 << 7,
                                                           CONCAT14(bVar67 << 7,
                                                                    CONCAT13(bVar65 << 7,
                                                                             CONCAT12(bVar63 << 7,
                                                                                      CONCAT11(
                                                  bVar61 << 7,bVar58 << 7))))))),0,1);
            uVar102 = NEON_cmlt(CONCAT17(bVar49 << 7,
                                         CONCAT16(bVar47 << 7,
                                                  CONCAT15(bVar46 << 7,
                                                           CONCAT14(bVar45 << 7,
                                                                    CONCAT13(bVar44 << 7,
                                                                             CONCAT12(bVar43 << 7,
                                                                                      CONCAT11(
                                                  bVar42 << 7,bVar40 << 7))))))),0,1);
            uVar84 = NEON_cmlt(CONCAT17(bVar39 << 7,
                                        CONCAT16(bVar38 << 7,
                                                 CONCAT15(bVar37 << 7,
                                                          CONCAT14(bVar36 << 7,
                                                                   CONCAT13(bVar35 << 7,
                                                                            CONCAT12(bVar34 << 7,
                                                                                     CONCAT11(bVar33
                                                                                              << 7,
                                                  bVar30 << 7))))))),0,1);
            bVar58 = NEON_umaxv(uVar120,1);
            bVar40 = NEON_umaxv(uVar102,1);
            bVar30 = NEON_umaxv(uVar84,1);
            bVar58 = bVar58 & 1;
            bVar40 = bVar40 & 1;
            bVar30 = bVar30 & 1;
            pcVar22 = pcVar22 + uVar28 * 0xc;
            if (uVar20 == uVar28) goto LAB_0098edac;
          }
LAB_0098ed7c:
          do {
            pcVar21 = pcVar22 + 0xc;
            cVar89 = *pcVar22;
            bVar30 = bVar30 | cVar89 == '\x05';
            bVar58 = bVar58 | cVar89 == '\a';
            bVar40 = bVar40 | cVar89 == '\b';
            pcVar22 = pcVar21;
          } while (pcVar21 != pcVar8);
        }
LAB_0098edac:
        if (bVar30 == 0) {
          bVar30 = 0;
        }
        else {
          bVar30 = 1;
          if (((*param_1 & 1) == 0) && ((bVar58 & bVar40) == 0)) {
            return 0;
          }
        }
      }
      uVar12 = uVar12 + 1;
      if ((int)uVar19 <= (int)(uint)*(ushort *)(lVar17 + 0xcc)) {
        uVar19 = (uint)*(ushort *)(lVar17 + 0xcc);
      }
      if ((int)uVar14 <= (int)(uint)*(ushort *)(lVar17 + 0xce)) {
        uVar14 = (uint)*(ushort *)(lVar17 + 0xce);
      }
    } while ((long)uVar12 <= (long)param_3);
    lVar17 = 0;
    uVar16 = 3;
    if (bVar30 == 0) {
      uVar16 = 4;
    }
    do {
      pbVar5 = param_1 + (param_2 & 0x7ff) * 8 + 8;
      *(bool *)(*(long *)pbVar5 + 0xd5) = lVar17 == 0;
      *(bool *)(*(long *)pbVar5 + 0xd6) = param_3 == param_2;
      lVar24 = *(long *)pbVar5;
      if (*(char *)(lVar24 + 0xd5) == '\x01') {
        if (uVar19 != 0 && uVar14 != 0) {
          *(short *)(lVar24 + 0xcc) = (short)uVar19;
          *(short *)(*(long *)pbVar5 + 0xce) = (short)uVar14;
          lVar24 = *(long *)pbVar5;
        }
        *(undefined4 *)(lVar24 + 200) = uVar16;
        lVar24 = *(long *)pbVar5;
      }
      if ((*(int *)(lVar24 + 0xdc) == 4) && (uVar12 = FUN_0098efa0(param_1), (uVar12 & 1) == 0)) {
        *(undefined1 *)(param_4 + 0x18) = 1;
        return 0;
      }
      puVar7 = *(undefined8 **)(param_4 + 8);
      if (puVar7 < *(undefined8 **)(param_4 + 0x10)) {
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        puVar13 = puVar7 + 1;
        *puVar7 = *(undefined8 *)pbVar5;
      }
      else {
        puVar13 = (undefined8 *)FUN_0098fa64(param_4,pbVar5);
      }
      param_2 = param_2 + 1;
      lVar17 = lVar17 + -1;
      *(undefined8 **)(param_4 + 8) = puVar13;
    } while ((long)param_2 <= (long)param_3);
  }
  return 1;
}


// ===== 0098efa0  FUN_0098efa0 =====

undefined4 FUN_0098efa0(char *param_1,long param_2)

{
  ushort *puVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  void *pvVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  ushort *puVar18;
  char *pcVar19;
  ulong uVar20;
  char *pcVar21;
  undefined1 **ppuVar22;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 uStack_61;
  
  if (*(char *)(param_2 + 0x7c0) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b53d4(&local_80);
  if (*param_1 == '\x01') {
    pcVar15 = *(char **)(param_2 + 0x160);
    pcVar5 = *(char **)(param_2 + 0x168);
    if (pcVar15 != pcVar5) {
      pcVar2 = param_1 + 0x4060;
      pcVar3 = param_1 + 0x4048;
      bVar7 = false;
      pcVar19 = pcVar3;
      pcVar21 = pcVar2;
LAB_0098f068:
      cVar6 = *pcVar15;
      if (cVar6 != '\x05') {
        if (cVar6 == '\b') {
          local_90 = pcVar15 + 8;
          uVar17 = *(undefined4 *)(pcVar15 + 4);
          lVar10 = FUN_0098fea0(0,param_1 + 0x4040,param_1 + 0x4040,&DAT_001f94c3,&local_90,
                                &uStack_61);
          *(undefined4 *)(lVar10 + 0x28) = uVar17;
        }
        else if (cVar6 == '\a') {
          local_90 = pcVar15 + 4;
          lVar10 = FUN_0098fd90(0,param_1 + 0x4058,param_1 + 0x4058,&DAT_001f94c3,&local_90,
                                &uStack_61);
          *(uint *)(lVar10 + 0x28) = (uint)*(ushort *)(param_2 + 0xcc);
          *(uint *)(lVar10 + 0x2c) = (uint)*(ushort *)(param_2 + 0xce);
        }
        goto LAB_0098f05c;
      }
      if (*(char *)(param_2 + 0xd5) != '\x01') goto LAB_0098f05c;
      iVar9 = *(int *)(pcVar15 + 8);
      if (iVar9 != -1) {
        pcVar19 = *(char **)pcVar3;
        if (pcVar19 != (char *)0x0) {
          do {
            if (iVar9 < *(int *)(pcVar19 + 0x20)) {
              pcVar19 = *(char **)pcVar19;
            }
            else {
              if (iVar9 == *(int *)(pcVar19 + 0x20)) goto LAB_0098f108;
              pcVar19 = *(char **)(pcVar19 + 8);
            }
            if (pcVar19 == (char *)0x0) break;
          } while( true );
        }
        goto LAB_0098f180;
      }
      uVar20 = FUN_004022fc();
      if ((uVar20 & 1) != 0) goto LAB_0098f44c;
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h26x_packet_buffer.cc",0xdba,
                   "No PPS id in IDR nalu.");
      uVar17 = 0;
      goto LAB_0098f484;
    }
  }
LAB_0098f284:
  iVar9 = *(int *)(param_2 + 0x15c);
  if (iVar9 == 0) {
    FUN_00877fc4(&local_80,&DAT_0022accc,4);
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x10) + *(long *)(param_2 + 0x20);
    }
    uVar14 = *(undefined8 *)(param_2 + 0x28);
LAB_0098f3d8:
    FUN_00877fc4(&local_80,lVar10,uVar14);
    puVar8 = local_80;
    if (&local_80 != (undefined1 **)(param_2 + 0x18)) {
      if (local_80 != (undefined1 *)0x0) {
        FUN_00d0f740(1,local_80 + 0x18);
      }
      puVar16 = *(undefined1 **)(param_2 + 0x18);
joined_r0x0098f3fc:
      if ((puVar16 != (undefined1 *)0x0) &&
         (iVar9 = FUN_00d0f7a0(0xffffffff,puVar16 + 0x18), iVar9 == 1)) {
        pvVar11 = *(void **)(puVar16 + 0x10);
        *(undefined8 *)(puVar16 + 0x10) = 0;
        if (pvVar11 != (void *)0x0) {
          operator_delete__(pvVar11);
        }
        operator_delete(puVar16);
      }
      *(undefined1 **)(param_2 + 0x18) = puVar8;
      *(undefined1 **)(param_2 + 0x28) = local_70;
      *(undefined1 **)(param_2 + 0x20) = puStack_78;
    }
  }
  else {
    if (iVar9 == 2) {
      if (*(long *)(param_2 + 0x160) != *(long *)(param_2 + 0x168)) {
        FUN_00877fc4(&local_80,&DAT_0022accc,4);
      }
      if (*(long *)(param_2 + 0x18) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x10) + *(long *)(param_2 + 0x20);
      }
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      goto LAB_0098f3d8;
    }
    if (iVar9 != 1) {
LAB_0098f44c:
      uVar17 = 0;
      goto LAB_0098f484;
    }
    ppuVar22 = (undefined1 **)(param_2 + 0x18);
    puVar16 = *ppuVar22;
    if (puVar16 != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)(*(long *)(puVar16 + 0x10) + *(long *)(param_2 + 0x20));
    }
    lVar10 = *(long *)(param_2 + 0x28);
    puVar1 = (ushort *)(puVar16 + 1);
    puVar8 = local_80;
    while (local_80 = puVar8, puVar1 < (ushort *)((long)(puVar16 + lVar10) - 1U)) {
      puVar18 = puVar1 + 1;
      uVar20 = (ulong)((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8);
      puVar1 = (ushort *)((long)puVar18 + uVar20);
      if (puVar1 <= puVar16 + lVar10) {
        FUN_00877fc4(&local_80,&DAT_0022accc,4);
        FUN_00877fc4(&local_80,puVar18,uVar20);
        puVar8 = local_80;
      }
    }
    if (&local_80 != ppuVar22) {
      if (puVar8 != (undefined1 *)0x0) {
        FUN_00d0f740(1,puVar8 + 0x18);
      }
      puVar16 = *ppuVar22;
      goto joined_r0x0098f3fc;
    }
  }
  uVar17 = 1;
LAB_0098f484:
  FUN_007b5554(&local_80);
  return uVar17;
LAB_0098f108:
  if (pcVar19 == pcVar3) {
LAB_0098f180:
    uVar20 = FUN_004022fc();
    if ((uVar20 & 1) != 0) goto LAB_0098f44c;
    uVar17 = *(undefined4 *)(pcVar15 + 8);
    puVar12 = &DAT_001f1906;
    pcVar15 = "No PPS with id << ";
    uVar14 = 0xdea;
    goto LAB_0098f47c;
  }
  pcVar21 = *(char **)pcVar2;
  if (pcVar21 != (char *)0x0) {
    do {
      if (*(int *)(pcVar19 + 0x28) < *(int *)(pcVar21 + 0x20)) {
        pcVar21 = *(char **)pcVar21;
      }
      else {
        if (*(int *)(pcVar19 + 0x28) == *(int *)(pcVar21 + 0x20)) goto LAB_0098f144;
        pcVar21 = *(char **)(pcVar21 + 8);
      }
      if (pcVar21 == (char *)0x0) break;
    } while( true );
  }
  goto LAB_0098f444;
LAB_0098f144:
  if (pcVar21 != pcVar2) {
    *(short *)(param_2 + 0xcc) = (short)*(undefined4 *)(pcVar21 + 0x28);
    *(short *)(param_2 + 0xce) = (short)*(undefined4 *)(pcVar21 + 0x2c);
    if (*(long *)(pcVar21 + 0x38) != 0) {
      bVar7 = (bool)(*(long *)(pcVar19 + 0x38) != 0 | bVar7);
    }
LAB_0098f05c:
    pcVar15 = pcVar15 + 0xc;
    if (pcVar15 == pcVar5) goto LAB_0098f1b4;
    goto LAB_0098f068;
  }
LAB_0098f444:
  uVar20 = FUN_004022fc();
  if ((uVar20 & 1) != 0) goto LAB_0098f44c;
  uVar17 = *(undefined4 *)(pcVar19 + 0x28);
  puVar12 = &DAT_001fcbd8;
  pcVar15 = "No SPS with id << ";
  uVar14 = 0xe22;
LAB_0098f47c:
  FUN_00623bb0(puVar12,"../../modules/video_coding/h26x_packet_buffer.cc",uVar14,pcVar15,uVar17,
               " received");
  uVar17 = 0;
  goto LAB_0098f484;
LAB_0098f1b4:
  if (bVar7) {
    if ((pcVar21 == pcVar2) || (pcVar19 == pcVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/video_coding/h26x_packet_buffer.cc",0x1df,
                   "!prepend_sps_pps || (sps != sps_data_.end() && pps != pps_data_.end())",
                   &DAT_001f5fa0);
    }
    FUN_00877fc4(&local_80,&DAT_0022accc,4);
    FUN_00877fc4(&local_80,*(undefined8 *)(pcVar21 + 0x38),*(undefined8 *)(pcVar21 + 0x30));
    FUN_00877fc4(&local_80,&DAT_0022accc,4);
    FUN_00877fc4(&local_80,*(undefined8 *)(pcVar19 + 0x38),*(undefined8 *)(pcVar19 + 0x30));
    local_90 = (char *)CONCAT71(local_90._1_7_,7);
    plVar4 = *(long **)(param_2 + 0x168);
    local_90 = (char *)CONCAT44(*(undefined4 *)(pcVar21 + 0x20),(undefined4)local_90);
    local_88 = 0xffffffff;
    if (plVar4 < *(long **)(param_2 + 0x170)) {
      if (plVar4 == (long *)0x0) goto LAB_0098f4e4;
      plVar13 = (long *)((long)plVar4 + 0xc);
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
      *plVar4 = (long)local_90;
    }
    else {
      plVar13 = (long *)FUN_00934f24(param_2 + 0x160,&local_90);
    }
    *(long **)(param_2 + 0x168) = plVar13;
    local_90 = (char *)CONCAT71(local_90._1_7_,8);
    local_90 = (char *)CONCAT44(*(undefined4 *)(pcVar21 + 0x20),(undefined4)local_90);
    local_88 = *(undefined4 *)(pcVar19 + 0x20);
    if (plVar13 < *(long **)(param_2 + 0x170)) {
      if (plVar13 == (long *)0x0) {
LAB_0098f4e4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)(plVar13 + 1) = local_88;
      lVar10 = (long)plVar13 + 0xc;
      *plVar13 = (long)local_90;
    }
    else {
      lVar10 = FUN_00934f24(param_2 + 0x160,&local_90);
    }
    *(long *)(param_2 + 0x168) = lVar10;
  }
  goto LAB_0098f284;
}


// ===== 0098f53c  FUN_0098f53c =====

void FUN_0098f53c(byte *param_1)

{
  ulong uVar1;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  void *pvStack_38;
  void *local_30;
  undefined8 local_28;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h26x_packet_buffer.cc",0xa5a,
                   "Ignore sprop parameter sets because IDR only keyframe is not allowed.");
      return;
    }
  }
  else {
    pvStack_38 = (void *)0x0;
    local_40 = 0;
    local_28 = 0;
    local_30 = (void *)0x0;
    pvStack_48 = (void *)0x0;
    local_50 = (void *)0x0;
    uVar1 = FUN_0094449c(&local_50);
    if ((uVar1 & 1) != 0) {
      FUN_0098f644(param_1,&local_50,&pvStack_38);
    }
    if (pvStack_38 != (void *)0x0) {
      if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)pvStack_38)) goto LAB_0098f630;
      local_30 = pvStack_38;
      operator_delete(pvStack_38);
    }
    if (local_50 != (void *)0x0) {
      if ((long)pvStack_48 - 1U < (ulong)((long)pvStack_48 - (long)local_50)) {
LAB_0098f630:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvStack_48 = local_50;
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 0098f644  FUN_0098f644 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffef8 : 0x0098f8e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0098f644(byte *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 uStack_109;
  ulong *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  char *local_f0;
  char **ppcStack_e8;
  ulong local_e0;
  char **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  uint local_70;
  
  if ((*param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/video_coding/h26x_packet_buffer.cc",0x158,
                 "h264_idr_only_keyframes_allowed_",&DAT_001f5fa0);
  }
  pbVar3 = (byte *)*param_2;
  lVar8 = param_2[1] - (long)pbVar3;
  if (lVar8 == 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      pcVar11 = "SPS size  ";
      lVar8 = param_2[1] - *param_2;
      uVar10 = 0xada;
LAB_0098f99c:
      FUN_00623bb0(&DAT_001fd8a8,"../../modules/video_coding/h26x_packet_buffer.cc",uVar10,pcVar11,
                   lVar8," is smaller than ",1);
      return;
    }
  }
  else if ((*pbVar3 & 0x1f) == 7) {
    if ((byte *)param_3[1] == (byte *)*param_3) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        pcVar11 = "PPS size  ";
        lVar8 = param_3[1] - *param_3;
        uVar10 = 0xb22;
        goto LAB_0098f99c;
      }
    }
    else if ((*(byte *)*param_3 & 0x1f) == 8) {
      pbVar1 = (byte *)0x0;
      if (lVar8 != 0 && lVar8 + -1 != 0) {
        pbVar1 = pbVar3 + 1;
      }
      uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = 0xaaaaaaaa;
      FUN_0087d8cc(&local_a0,pbVar1,lVar8 + -1);
      uVar6 = param_3[1] - *param_3;
      lVar8 = 0;
      if (uVar6 != 0) {
        lVar8 = *param_3;
      }
      lVar2 = 0;
      if (1 < uVar6) {
        lVar2 = lVar8 + 1;
      }
      local_b0 = 0xaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0087af7c(&local_d0,lVar2,uVar6 - (uVar6 != 0));
      if (((local_70 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h26x_packet_buffer.cc",0xb92,
                     "Failed to parse SPS.");
      }
      if (((local_b0 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h26x_packet_buffer.cc",0xbb2,
                     "Failed to parse PPS.");
      }
      if (((local_b0 & 1) != 0) && ((local_70 & 1) != 0)) {
        pvVar9 = (void *)*param_2;
        uVar6 = param_2[1] - (long)pvVar9;
        pvVar7 = operator_new__(uVar6);
        puVar5 = local_a0;
        memcpy(pvVar7,pvVar9,uVar6);
        local_108 = &local_e0;
        local_e0 = CONCAT44(local_e0._4_4_,uStack_78._4_4_);
        lVar8 = FUN_0098fb74(0,param_1 + 0x4058,param_1 + 0x4058,&DAT_001f94c3,&local_108,&local_f0)
        ;
        *(undefined1 **)(lVar8 + 0x28) = puVar5;
        pvVar9 = *(void **)(lVar8 + 0x38);
        *(ulong *)(lVar8 + 0x30) = uVar6;
        *(void **)(lVar8 + 0x38) = pvVar7;
        if (pvVar9 != (void *)0x0) {
          operator_delete__(pvVar9);
        }
        if ((local_b0 & 1) == 0) goto LAB_0098fa30;
        pvVar9 = (void *)*param_3;
        uVar4 = local_b8._4_4_;
        uVar6 = param_3[1] - (long)pvVar9;
        pvVar7 = operator_new__(uVar6);
        memcpy(pvVar7,pvVar9,uVar6);
        local_108 = &local_e0;
        local_e0 = CONCAT44(local_e0._4_4_,(undefined4)local_b8);
        lVar8 = FUN_0098fc84(0,param_1 + 0x4040,param_1 + 0x4040,&DAT_001f94c3,&local_108,&local_f0)
        ;
        *(undefined4 *)(lVar8 + 0x28) = uVar4;
        *(undefined4 *)(lVar8 + 0x2c) = 0xaaaaaaaa;
        pvVar9 = *(void **)(lVar8 + 0x38);
        *(ulong *)(lVar8 + 0x30) = uVar6;
        *(void **)(lVar8 + 0x38) = pvVar7;
        if (pvVar9 != (void *)0x0) {
          operator_delete__(pvVar9);
        }
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          local_108 = (ulong *)0x1cc590;
          local_100 = 0xc71;
          local_f8 = &uStack_109;
          ppcStack_e8 = (char **)&local_108;
          local_f0 = "Inserted SPS id ";
          if ((local_70 & 1) == 0) {
LAB_0098fa30:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          local_e0 = (ulong)uStack_78 >> 0x20;
          local_d8 = &local_f0;
          if ((local_b0 & 1) == 0) goto LAB_0098fa30;
          FUN_00623bb0(&DAT_00226924,"../../modules/video_coding/h26x_packet_buffer.cc",0xc71,
                       "Inserted SPS id ",local_e0," and PPS id ",(ulong)local_b8 & 0xffffffff,
                       " (referencing SPS ",local_b8._4_4_,&DAT_001ca519);
        }
      }
      if (((byte)local_70 & 1) != 0) {
        FUN_0087d8c4(&local_a0);
      }
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        uVar10 = 0xb4a;
        goto LAB_0098fa0c;
      }
    }
  }
  else {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      uVar10 = 0xb02;
LAB_0098fa0c:
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h26x_packet_buffer.cc",uVar10,
                   "SPS Nalu header missing");
      return;
    }
  }
  return;
}


// ===== 0098fa64  FUN_0098fa64 =====

undefined8 * FUN_0098fa64(long *param_1,undefined8 *param_2)

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
                    /* WARNING: Subroutine does not return */
    FUN_0098fb5c();
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
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
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


// ===== 0098fb5c  FUN_0098fb5c =====

void FUN_0098fb5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0098fb74  FUN_0098fb74 =====

undefined1  [16]
FUN_0098fb74(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0098fbdc;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0098fc54;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0098fbdc:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  plVar3[2] = (long)plVar4;
  plVar3[5] = -1;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0098fc54:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0098fc84  FUN_0098fc84 =====

undefined1  [16]
FUN_0098fc84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0098fcec;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0098fd60;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0098fcec:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_0098fd60:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0098fd90  FUN_0098fd90 =====

undefined1  [16]
FUN_0098fd90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0098fdf8;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0098fe70;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0098fdf8:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  plVar3[2] = (long)plVar4;
  plVar3[5] = -1;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0098fe70:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0098fea0  FUN_0098fea0 =====

undefined1  [16]
FUN_0098fea0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0098ff08;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0098ff7c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0098ff08:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_0098ff7c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0098ffac  FUN_0098ffac =====

void FUN_0098ffac(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = *param_2;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 8) = param_3;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  FUN_007b53d4(param_1 + 0x18);
  FUN_007dd000(param_1 + 0x30,param_4);
  return;
}


// ===== 00990008  FUN_00990008 =====

void FUN_00990008(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0098fb5c();
    }
    puVar4 = (undefined8 *)operator_new(param_2 * 8);
    param_1[2] = puVar4;
    param_1[3] = puVar4;
    uVar5 = param_2 * 8 - 8 >> 3;
    uVar2 = (ulong)-(long)puVar4 >> 3;
    if (uVar5 <= (ulong)-(long)puVar4 >> 3) {
      uVar2 = uVar5;
    }
    puVar1 = puVar4 + param_2;
    param_1[4] = puVar1;
    if ((5 < uVar2) && ((-(int)puVar4 & 7U) == 0)) {
      uVar5 = uVar2 + 1 & 3;
      uVar3 = 4;
      if (uVar5 != 0) {
        uVar3 = uVar5;
      }
      puVar7 = puVar4 + 2;
      lVar6 = (uVar2 + 1) - uVar3;
      puVar4 = puVar4 + lVar6;
      do {
        lVar6 = lVar6 + -4;
        puVar7[-1] = 0;
        puVar7[-2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 4;
      } while (lVar6 != 0);
    }
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar7;
    } while (puVar7 != puVar1);
    param_1[3] = puVar1;
  }
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  param_1[6] = param_1 + 7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


// ===== 00990110  FUN_00990110 =====

void FUN_00990110(long param_1)

{
  long local_8;
  
  FUN_009908f4();
  local_8 = param_1 + 0x48;
  FUN_00937884(&local_8,*(undefined8 *)(param_1 + 0x50));
  local_8 = param_1 + 0x30;
  FUN_00937884(&local_8,*(undefined8 *)(param_1 + 0x38));
  FUN_00990168(param_1 + 0x10);
  return;
}


// ===== 00990168  FUN_00990168 =====

void FUN_00990168(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
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
        FUN_007dd190((long)pvVar3 + 0x30);
        FUN_007b5554((long)pvVar3 + 0x18);
        operator_delete(pvVar3);
      }
    } while (puVar2 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar1);
  return;
}


// ===== 00990228  FUN_00990228 =====

void FUN_00990228(undefined8 *param_1,ulong *param_2,undefined1 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  void *pvVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *local_58;
  undefined8 *local_50;
  
  param_1[2] = 0;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  uVar8 = param_2[2];
  uVar18 = param_2[3];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar12 = *(ulong *)(param_3 + 8);
  uVar10 = (long)(uVar18 - uVar8) >> 3;
  uVar14 = uVar12 & 0xffff;
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar18 = uVar14 / uVar10;
  }
  uVar18 = uVar14 - uVar18 * uVar10;
  uVar2 = (ushort)uVar12;
  if ((*(byte *)((long)param_2 + 10) & 1) == 0) {
    *(ushort *)(param_2 + 1) = uVar2;
    *(undefined1 *)((long)param_2 + 10) = 1;
LAB_00990328:
    lVar9 = *(long *)(uVar8 + uVar18 * 8);
  }
  else {
    uVar1 = (ushort)param_2[1];
    if (uVar1 == uVar2) goto LAB_00990328;
    uVar3 = (uint)(short)(uVar1 - uVar2);
    bVar7 = (uint)uVar2 < (uint)uVar1;
    if ((uint)uVar1 - (uint)uVar2 != 0x8000) {
      bVar7 = uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1);
    }
    if (!bVar7) goto LAB_00990328;
    if ((*(byte *)((long)param_2 + 0xb) & 1) != 0) goto LAB_009903a8;
    if ((*param_2 <= (ulong)(ushort)(uVar2 - uVar1)) && (*param_2 >> 1 <= ((ulong)uVar3 & 0xffff)))
    {
      FUN_009908f4(param_2);
      uVar8 = param_2[2];
      *(undefined1 *)((long)param_2 + 10) = 1;
      *(ushort *)(param_2 + 1) = uVar2;
      if ((ulong)((long)(param_2[3] - uVar8) >> 3) <= uVar18) goto LAB_00990308;
      goto LAB_00990328;
    }
    *(ushort *)(param_2 + 1) = uVar2;
    lVar9 = *(long *)(uVar8 + uVar18 * 8);
  }
  if (lVar9 != 0) {
    if (*(short *)(lVar9 + 8) == *(short *)(param_3 + 8)) {
LAB_009903a8:
      if (param_3 == (undefined1 *)0x0) {
        return;
      }
      FUN_007dd190(param_3 + 0x30);
      FUN_007b5554(param_3 + 0x18);
      operator_delete(param_3);
      return;
    }
    do {
      uVar10 = FUN_00990624(param_2);
      uVar8 = param_2[2];
      uVar11 = (long)(param_2[3] - uVar8) >> 3;
      uVar18 = 0;
      if (uVar11 != 0) {
        uVar18 = uVar14 / uVar11;
      }
      uVar18 = uVar14 - uVar18 * uVar11;
    } while (((uVar10 & 1) != 0) && (*(long *)(uVar8 + uVar18 * 8) != 0));
    if (*(long *)(uVar8 + uVar18 * 8) != 0) {
      uVar8 = FUN_004022fc();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/packet_buffer.cc",0x37a,
                     "Clear PacketBuffer and request key frame.");
      }
      FUN_009908f4(param_2);
      *(undefined1 *)(param_1 + 3) = 1;
      goto LAB_009903a8;
    }
  }
  *param_3 = 0;
  uVar8 = param_2[2];
  if (uVar18 < (ulong)((long)(param_2[3] - uVar8) >> 3)) {
    pvVar15 = *(void **)(uVar8 + uVar18 * 8);
    *(undefined1 **)(uVar8 + uVar18 * 8) = param_3;
    if (pvVar15 != (void *)0x0) {
      FUN_007dd190((long)pvVar15 + 0x30);
      FUN_007b5554((long)pvVar15 + 0x18);
      operator_delete(pvVar15);
    }
    FUN_009909bc(param_2,uVar12 & 0xffffffff);
    puVar16 = param_2 + 10;
    puVar13 = (ulong *)param_2[9];
    if ((ulong *)*puVar16 != (ulong *)0x0) {
      uVar3 = (int)uVar12 - ((uint)((int)param_2[3] - (int)param_2[2]) >> 5);
      puVar6 = (ulong *)*puVar16;
      puVar17 = puVar16;
      do {
        while( true ) {
          puVar19 = puVar6;
          uVar2 = *(ushort *)((long)puVar19 + 0x1a);
          puVar16 = puVar19;
          if ((uint)uVar2 == (uVar3 & 0xffff)) goto joined_r0x00990608;
          iVar4 = (int)(short)(uVar2 - (short)uVar3);
          bVar7 = (uVar3 & 0xffff) < (uint)uVar2;
          if ((uint)uVar2 - (uVar3 & 0xffff) != 0x8000) {
            bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (bVar7) break;
          iVar4 = (int)(short)((short)uVar3 - uVar2);
          bVar7 = (uint)uVar2 < (uVar3 & 0xffff);
          if ((uVar3 & 0xffff) - (uint)uVar2 != 0x8000) {
            bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if ((!bVar7) ||
             (puVar6 = (ulong *)puVar19[1], puVar16 = puVar17, (ulong *)puVar19[1] == (ulong *)0x0))
          goto joined_r0x00990608;
        }
        puVar6 = (ulong *)*puVar19;
        puVar17 = puVar19;
      } while ((ulong *)*puVar19 != (ulong *)0x0);
    }
joined_r0x00990608:
    do {
      if (puVar13 == puVar16) {
        FUN_00990c4c(&local_58,param_2,uVar12 & 0xffffffff);
        FUN_00991614(param_1,&local_58);
        puVar5 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          return;
        }
        while( true ) {
          if (puVar5 == local_50) {
            local_50 = puVar5;
            operator_delete(local_58);
            return;
          }
          local_50 = local_50 + -1;
          if (local_50 == (undefined8 *)0x0) break;
          pvVar15 = (void *)*local_50;
          *local_50 = 0;
          if (pvVar15 != (void *)0x0) {
            FUN_007dd190((long)pvVar15 + 0x30);
            FUN_007b5554((long)pvVar15 + 0x18);
            operator_delete(pvVar15);
          }
        }
LAB_00990610:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar6 = (ulong *)puVar13[1];
      puVar17 = puVar13;
      if ((ulong *)puVar13[1] == (ulong *)0x0) {
        do {
          puVar19 = (ulong *)puVar17[2];
          bVar7 = puVar17 != (ulong *)*puVar19;
          puVar17 = puVar19;
        } while (bVar7);
      }
      else {
        do {
          puVar19 = puVar6;
          puVar6 = (ulong *)*puVar19;
        } while ((ulong *)*puVar19 != (ulong *)0x0);
      }
      if ((ulong *)param_2[9] == puVar13) {
        param_2[9] = (ulong)puVar19;
      }
      param_2[0xb] = param_2[0xb] - 1;
      FUN_005d5d48(param_2[10],puVar13);
      if (puVar13 == (ulong *)0xffffffffffffffe6) goto LAB_00990610;
      operator_delete(puVar13);
      puVar13 = puVar19;
    } while( true );
  }
LAB_00990308:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00990624  FUN_00990624 =====

bool FUN_00990624(ulong *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  plVar15 = (long *)param_1[3];
  uVar13 = *param_1;
  plVar14 = (long *)param_1[2];
  uVar12 = (long)plVar15 - (long)plVar14 >> 3;
  if (uVar12 == uVar13) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/video_coding/packet_buffer.cc",0x642,
                   "PacketBuffer is already at max size (",*param_1,"), failed to increase size.");
    }
  }
  else {
    uVar4 = (long)plVar15 - (long)plVar14 >> 2;
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    if (uVar13 <= uVar4) {
      uVar4 = uVar13;
    }
    puVar10 = local_78;
    puVar2 = local_70;
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0098fb5c();
      }
      local_78 = (undefined8 *)operator_new(uVar4 * 8);
      uVar5 = uVar4 * 8 - 8 >> 3;
      uVar3 = (ulong)-(long)local_78 >> 3;
      if (uVar5 <= (ulong)-(long)local_78 >> 3) {
        uVar3 = uVar5;
      }
      local_68 = local_78 + uVar4;
      puVar8 = local_78;
      if ((5 < uVar3) && ((-(int)local_78 & 7U) == 0)) {
        uVar5 = uVar3 + 1 & 3;
        uVar1 = 4;
        if (uVar5 != 0) {
          uVar1 = uVar5;
        }
        puVar10 = local_78 + 2;
        lVar6 = ~uVar3 + uVar1;
        do {
          lVar6 = lVar6 + 4;
          puVar10[-1] = 0;
          puVar10[-2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10 = puVar10 + 4;
          puVar8 = local_78 + ((uVar3 + 1) - uVar1);
        } while (lVar6 != 0);
      }
      do {
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar9 = puVar8 + 1;
        *puVar8 = 0;
        puVar8 = puVar9;
        puVar10 = local_78;
        puVar2 = local_68;
      } while (puVar9 != local_68);
    }
    local_70 = puVar2;
    local_78 = puVar10;
    local_68 = local_70;
    if (plVar14 != plVar15) {
      lVar6 = (long)local_70 - (long)puVar10;
      do {
        lVar7 = *plVar14;
        if (lVar7 != 0) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = *(ushort *)(lVar7 + 8) / uVar4;
          }
          uVar3 = (ulong)*(ushort *)(lVar7 + 8) - uVar3 * uVar4;
          if ((ulong)(lVar6 >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          *plVar14 = 0;
          pvVar11 = (void *)puVar10[uVar3];
          puVar10[uVar3] = lVar7;
          if (pvVar11 != (void *)0x0) {
            FUN_007dd190((long)pvVar11 + 0x30);
            FUN_007b5554((long)pvVar11 + 0x18);
            operator_delete(pvVar11);
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar15);
    }
    FUN_00991614(param_1 + 2,&local_78);
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../modules/video_coding/packet_buffer.cc",0x6a9,
                   "PacketBuffer size expanded to ",uVar4);
    }
    puVar2 = local_78;
    puVar10 = local_70;
    if (local_78 != (undefined8 *)0x0) {
      while (puVar2 != puVar10) {
        puVar10 = puVar10 + -1;
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar11 = (void *)*puVar10;
        *puVar10 = 0;
        if (pvVar11 != (void *)0x0) {
          FUN_007dd190((long)pvVar11 + 0x30);
          FUN_007b5554((long)pvVar11 + 0x18);
          operator_delete(pvVar11);
        }
      }
      local_70 = puVar2;
      operator_delete(local_78);
    }
  }
  return uVar12 != uVar13;
}


// ===== 009908f4  FUN_009908f4 =====

void FUN_009908f4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long local_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  for (puVar1 = *(undefined8 **)(param_1 + 0x10); puVar1 != puVar3; puVar1 = puVar1 + 1) {
    pvVar2 = (void *)*puVar1;
    *puVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_007dd190((long)pvVar2 + 0x30);
      FUN_007b5554((long)pvVar2 + 0x18);
      operator_delete(pvVar2);
    }
  }
  *(undefined2 *)(param_1 + 10) = 0;
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  local_38 = param_1 + 0x30;
  puVar3 = (undefined8 *)(param_1 + 0x38);
  FUN_00937884(&local_38,*puVar3);
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  puVar1 = (undefined8 *)(param_1 + 0x50);
  local_38 = param_1 + 0x48;
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00937884(&local_38,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}


// ===== 009909bc  FUN_009909bc =====

void FUN_009909bc(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  short local_54 [2];
  
  sVar3 = (short)param_2;
  if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
    *(short *)(param_1 + 0x28) = sVar3;
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  uVar2 = *(ushort *)(param_1 + 0x28);
  local_54[0] = sVar3;
  if ((uint)uVar2 == (param_2 & 0xffff)) {
LAB_00990acc:
    FUN_00991bbc(param_1 + 0x30,local_54);
    return;
  }
  uVar1 = param_2 & 0xffff;
  iVar6 = (int)(short)(sVar3 - uVar2);
  bVar7 = uVar2 < uVar1;
  if (uVar1 - uVar2 != 0x8000) {
    bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
  }
  if (!bVar7) goto LAB_00990acc;
  uVar5 = param_2 - 1000;
  plVar10 = (long *)(param_1 + 0x38);
  puVar8 = (undefined8 *)(param_1 + 0x30);
  sVar4 = (short)uVar5;
  if ((long *)*plVar10 != (long *)0x0) {
    plVar9 = (long *)*plVar10;
    plVar11 = plVar10;
    do {
      while( true ) {
        plVar12 = plVar9;
        uVar2 = *(ushort *)((long)plVar12 + 0x1a);
        plVar10 = plVar12;
        if ((uint)uVar2 == (uVar5 & 0xffff)) goto LAB_00990afc;
        iVar6 = (int)(short)(uVar2 - sVar4);
        bVar7 = (uVar5 & 0xffff) < (uint)uVar2;
        if ((uint)uVar2 - (uVar5 & 0xffff) != 0x8000) {
          bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
        }
        if (bVar7) break;
        iVar6 = (int)(short)(sVar4 - uVar2);
        bVar7 = (uint)uVar2 < (uVar5 & 0xffff);
        if ((uVar5 & 0xffff) - (uint)uVar2 != 0x8000) {
          bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
        }
        if ((!bVar7) ||
           (plVar9 = (long *)plVar12[1], plVar10 = plVar11, (long *)plVar12[1] == (long *)0x0))
        goto LAB_00990afc;
      }
      plVar9 = (long *)*plVar12;
      plVar11 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_00990afc:
  plVar9 = (long *)*puVar8;
  if (plVar9 != plVar10) {
    do {
      plVar11 = (long *)plVar9[1];
      plVar12 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar12[2];
          bVar7 = plVar12 != (long *)*plVar13;
          plVar12 = plVar13;
        } while (bVar7);
      }
      else {
        do {
          plVar13 = plVar11;
          plVar11 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      if ((long *)*puVar8 == plVar9) {
        *puVar8 = plVar13;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x38),plVar9);
      if (plVar9 == (long *)0xffffffffffffffe6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar9);
      plVar9 = plVar13;
    } while (plVar10 != plVar13);
    if ((*(byte *)(param_1 + 0x2a) & 1) == 0) goto LAB_00990c24;
  }
  uVar2 = *(ushort *)(param_1 + 0x28);
  if ((uint)uVar2 != (uVar5 & 0xffff)) {
    iVar6 = (int)(short)(sVar4 - uVar2);
    bVar7 = (uint)uVar2 < (uVar5 & 0xffff);
    if ((uVar5 & 0xffff) - (uint)uVar2 != 0x8000) {
      bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
    }
    if (bVar7) {
      *(short *)(param_1 + 0x28) = sVar4;
    }
  }
  do {
    uVar2 = *(short *)(param_1 + 0x28) + 1;
    *(ushort *)(param_1 + 0x28) = uVar2;
    if ((param_2 & 0xffff) == (uint)uVar2) {
      return;
    }
    iVar6 = (int)(short)(sVar3 - uVar2);
    bVar7 = (uint)uVar2 < (param_2 & 0xffff);
    if (uVar1 - uVar2 != 0x8000) {
      bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
    }
    if (!bVar7) {
      return;
    }
    FUN_00939f8c(0,puVar8,puVar8,param_1 + 0x28);
  } while ((*(byte *)(param_1 + 0x2a) & 1) != 0);
LAB_00990c24:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00990c4c  FUN_00990c4c =====

void FUN_00990c4c(undefined8 *param_1,long param_2,uint param_3)

{
  char *pcVar1;
  void *__src;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  char *pcVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  void *__dest;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  ulong uVar35;
  size_t __n;
  ulong uVar36;
  ulong uVar37;
  ulong in_stack_ffffffffffffff28;
  ulong in_stack_ffffffffffffff30;
  ulong local_b8;
  undefined1 uStack_a9;
  char *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  ulong local_80;
  char **local_78;
  char *local_70;
  ulong *puStack_68;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar20 = *(long *)(param_2 + 0x18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar20 - lVar10 == 0) {
    return;
  }
  uVar12 = lVar20 - lVar10 >> 3;
  uVar35 = (ulong)param_3;
  local_b8 = 0;
LAB_00990cd8:
  plVar19 = *(long **)(param_2 + 0x50);
  uVar34 = (uint)uVar35;
  sVar6 = (short)uVar35;
  if (plVar19 == (long *)0x0) {
LAB_00990d70:
    uVar26 = lVar20 - lVar10 >> 3;
    uVar17 = uVar35 & 0xffff;
    uVar24 = 0;
    if (uVar26 != 0) {
      uVar24 = uVar17 / uVar26;
    }
    lVar20 = uVar17 - uVar24 * uVar26;
    iVar18 = (int)uVar26;
    if (lVar20 != 0) {
      iVar18 = (int)lVar20;
    }
    if (uVar26 <= (ulong)(long)(iVar18 + -1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    lVar20 = *(long *)(lVar10 + lVar20 * 8);
    if (lVar20 == 0) {
      return;
    }
    if ((uint)*(ushort *)(lVar20 + 8) != (uVar34 & 0xffff)) {
      return;
    }
    if ((*(byte *)(lVar20 + 0xd5) & 1) == 0) {
      pcVar23 = *(char **)(lVar10 + (long)(iVar18 + -1) * 8);
      if (pcVar23 == (char *)0x0) {
        return;
      }
      if ((uint)*(ushort *)(pcVar23 + 8) != (uVar34 - 1 & 0xffff)) {
        return;
      }
      if (*(int *)(pcVar23 + 0x10) != *(int *)(lVar20 + 0x10)) {
        return;
      }
      if (*pcVar23 != '\x01') {
        return;
      }
    }
    uVar24 = 0;
    if (uVar12 != 0) {
      uVar24 = uVar17 / uVar12;
    }
    uVar17 = uVar17 - uVar24 * uVar12;
    **(undefined1 **)(lVar10 + uVar17 * 8) = 1;
    lVar10 = *(long *)(param_2 + 0x10);
    uVar24 = *(long *)(param_2 + 0x18) - lVar10;
    uVar12 = (long)uVar24 >> 3;
    if (uVar12 <= uVar17) goto LAB_009915d4;
    lVar20 = *(long *)(lVar10 + uVar17 * 8);
    if (*(char *)(lVar20 + 0xd6) == '\x01') {
      lVar21 = 0;
      uVar16 = 0;
      bVar8 = false;
      uVar37 = 0;
      uVar36 = 0;
      uVar30 = 0xffffffff;
      bVar28 = *(int *)(lVar20 + 0xdc) == 4 & (*(byte *)(lVar20 + 0xc0) ^ 1);
      uVar26 = uVar17 & 0xffffffff;
      uVar25 = 0xffffffff;
      do {
        lVar27 = *(long *)(lVar10 + uVar17 * 8);
        iVar22 = (int)(uVar24 >> 3);
        uVar29 = (uint)uVar35;
        iVar18 = (int)uVar26;
        uVar3 = (ushort)uVar35;
        if (lVar27 == 0) {
          if (bVar28 == 0) break;
LAB_00990ec0:
          if (lVar27 == -0x158) {
            return;
          }
          if (*(char *)(lVar27 + 0x7c0) != '\x03') {
            return;
          }
          pcVar23 = *(char **)(lVar27 + 0x160);
          while (pcVar23 != *(char **)(lVar27 + 0x168)) {
            cVar2 = *pcVar23;
            if (cVar2 == '\x05') {
              uVar16 = 1;
LAB_00990f18:
              pcVar23 = pcVar23 + 0xc;
            }
            else if (cVar2 == '\b') {
              uVar36 = 1;
              pcVar23 = pcVar23 + 0xc;
            }
            else {
              if (cVar2 != '\a') goto LAB_00990f18;
              uVar37 = 1;
              pcVar23 = pcVar23 + 0xc;
            }
          }
          if ((((uint)*(byte *)(param_2 + 0x60) & uVar16 & (uint)uVar37 & (uint)uVar36) != 0) ||
             (((*(byte *)(param_2 + 0x60) ^ 1) & uVar16) != 0)) {
            if ((*(ushort *)(lVar27 + 0xcc) != 0) && (*(ushort *)(lVar27 + 0xce) != 0)) {
              uVar25 = (uint)*(ushort *)(lVar27 + 0xce);
              uVar30 = (uint)*(ushort *)(lVar27 + 0xcc);
            }
            bVar8 = true;
          }
          if (lVar21 + 1U == uVar12) goto LAB_00990f98;
          if (iVar18 < 1) {
            iVar18 = iVar22;
          }
          uVar5 = iVar18 - 1;
          uVar17 = (ulong)(int)uVar5;
          if (uVar12 <= uVar17) goto LAB_009915d4;
          lVar27 = *(long *)(lVar10 + uVar17 * 8);
          if ((lVar27 == 0) || (*(int *)(lVar27 + 0x10) != *(int *)(lVar20 + 0x10)))
          goto LAB_00990f98;
          bVar28 = 1;
        }
        else {
          if ((bVar28 & (*(byte *)(lVar27 + 0xc0) ^ 0xff)) != 0) goto LAB_00990ec0;
          if ((*(byte *)(lVar27 + 0xd5) & 1) != 0) goto LAB_009911ac;
          if (lVar21 + 1U == uVar12) break;
          bVar28 = 0;
          if (iVar18 < 1) {
            iVar18 = iVar22;
          }
          uVar5 = iVar18 - 1;
          uVar17 = (ulong)(int)uVar5;
        }
        lVar21 = lVar21 + 1;
        uVar26 = (ulong)uVar5;
        uVar35 = (ulong)(uVar29 - 1);
        if (uVar12 <= uVar17) goto LAB_009915d4;
      } while( true );
    }
  }
  else {
    uVar3 = *(ushort *)((long)plVar19 + 0x1a);
    if ((uint)uVar3 != (uVar34 & 0xffff)) {
      do {
        uVar25 = (uint)uVar3;
        iVar18 = (int)(short)(uVar3 - sVar6);
        bVar8 = (uVar34 & 0xffff) < uVar25;
        if (uVar25 - (uVar34 & 0xffff) != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if (bVar8) {
          plVar19 = (long *)*plVar19;
        }
        else {
          iVar18 = (int)(short)(sVar6 - uVar3);
          bVar8 = uVar25 < (uVar34 & 0xffff);
          if ((uVar34 & 0xffff) - uVar25 != 0x8000) {
            bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
          }
          if (!bVar8) break;
          plVar19 = (long *)plVar19[1];
        }
        if (plVar19 == (long *)0x0) goto LAB_00990d70;
        uVar3 = *(ushort *)((long)plVar19 + 0x1a);
      } while ((uint)uVar3 != (uVar34 & 0xffff));
    }
    if (plVar19 == (long *)(param_2 + 0x50)) goto LAB_00990d70;
  }
  goto LAB_00990cb4;
LAB_00990f98:
  if ((uVar16 != 0) && (((uint)uVar37 & (uint)uVar36) == 0)) {
    uVar12 = FUN_004022fc();
    if ((uVar12 & 1) == 0) {
      local_a8 = "../../modules/video_coding/packet_buffer.cc";
      uStack_a0 = 0xb12;
      local_98 = &uStack_a9;
      in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000 | uVar37;
      ppcStack_88 = &local_a8;
      local_90 = "Received H.264-IDR frame (SPS: ";
      local_78 = &local_90;
      bVar7 = *(char *)(param_2 + 0x60) == '\0';
      in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffff00000000 | uVar36;
      pcVar23 = "enabled.";
      if (bVar7) {
        pcVar23 = "disabled";
      }
      pcVar1 = "delta";
      if (bVar7) {
        pcVar1 = "key";
      }
      puStack_68 = &local_80;
      local_70 = ", PPS: ";
      local_80 = in_stack_ffffffffffffff28;
      FUN_00623bb0(&DAT_0022acd0,"../../modules/video_coding/packet_buffer.cc",0xb12,
                   "Received H.264-IDR frame (SPS: ",uVar37,", PPS: ",uVar36,"). Treating as ",
                   pcVar1," frame since WebRTC-SpsPpsIdrIsH264Keyframe is ",pcVar23,
                   in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    }
    lVar10 = *(long *)(param_2 + 0x10);
    uVar12 = *(long *)(param_2 + 0x18) - lVar10 >> 3;
  }
  uVar24 = 0;
  if (uVar12 != 0) {
    uVar24 = (uVar35 & 0xffff) / uVar12;
  }
  uVar12 = (uVar35 & 0xffff) - uVar24 * uVar12;
  if (bVar8) {
    *(undefined4 *)(*(long *)(lVar10 + uVar12 * 8) + 200) = 3;
    if ((0 < (int)uVar30) && (0 < (int)uVar25)) {
      if (uVar12 < (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3)) {
        *(short *)(*(long *)(*(long *)(param_2 + 0x10) + uVar12 * 8) + 0xcc) = (short)uVar30;
        if (uVar12 < (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3)) {
          *(short *)(*(long *)(*(long *)(param_2 + 0x10) + uVar12 * 8) + 0xce) = (short)uVar25;
          goto LAB_009911ac;
        }
      }
LAB_009915d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
  }
  else {
    *(undefined4 *)(*(long *)(lVar10 + uVar12 * 8) + 200) = 4;
    plVar19 = (long *)(param_2 + 0x38);
    if (*(long **)(param_2 + 0x38) != (long *)0x0) {
      plVar19 = (long *)(param_2 + 0x38);
      plVar14 = *(long **)(param_2 + 0x38);
LAB_0099111c:
      do {
        uVar4 = *(ushort *)((long)plVar14 + 0x1a);
        if (uVar4 == uVar3) {
LAB_0099118c:
          plVar14 = (long *)plVar14[1];
          while (plVar13 = plVar14, plVar13 != (long *)0x0) {
            plVar19 = plVar13;
            plVar14 = (long *)*plVar13;
          }
          break;
        }
        iVar18 = (int)(short)(uVar4 - uVar3);
        bVar8 = (uint)uVar3 < (uint)uVar4;
        if ((uint)uVar4 - (uVar29 & 0xffff) != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if (bVar8) goto LAB_00991110;
        iVar18 = (int)(short)(uVar3 - uVar4);
        bVar8 = (uint)uVar4 < (uVar29 & 0xffff);
        if ((uVar29 & 0xffff) - (uint)uVar4 != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if (!bVar8) goto LAB_0099118c;
        plVar13 = plVar14 + 1;
        plVar14 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
LAB_009911a0:
    if (plVar19 != *(long **)(param_2 + 0x30)) {
      return;
    }
  }
LAB_009911ac:
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  uVar12 = ((long)__n >> 3) + (ulong)(ushort)((sVar6 + 1) - uVar3);
  if ((ulong)(param_1[2] - (long)__src >> 3) < uVar12) {
    if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0098fb5c();
    }
    pvVar9 = operator_new(uVar12 * 8);
    __dest = (void *)((long)pvVar9 + __n + ((long)__n >> 3) * -8);
    memcpy(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = (long)pvVar9 + __n;
    param_1[2] = (void *)((long)pvVar9 + uVar12 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  if ((uVar34 + 1 & 0xffff) != (uVar29 & 0xffff)) {
    do {
      uVar24 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3;
      uVar12 = 0;
      if (uVar24 != 0) {
        uVar12 = (uVar35 & 0xffff) / uVar24;
      }
      plVar19 = (long *)(*(long *)(param_2 + 0x10) + ((uVar35 & 0xffff) - uVar12 * uVar24) * 8);
      uVar25 = (uint)uVar35;
      *(bool *)(*plVar19 + 0xd5) = (uVar25 & 0xffff) == (uVar29 & 0xffff);
      *(bool *)(*plVar19 + 0xd6) = (uVar25 & 0xffff) == (uVar34 & 0xffff);
      plVar14 = (long *)param_1[1];
      if (plVar14 < (long *)param_1[2]) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar10 = *plVar19;
        *plVar19 = 0;
        plVar19 = plVar14 + 1;
        *plVar14 = lVar10;
      }
      else {
        plVar19 = (long *)FUN_0098fa64(param_1);
      }
      uVar35 = (ulong)(uVar25 + 1);
      param_1[1] = plVar19;
    } while ((uVar25 & 0xffff) != (uVar34 & 0xffff));
  }
  plVar19 = (undefined8 *)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
    plVar19 = (undefined8 *)(param_2 + 0x38);
LAB_009912e0:
    do {
      puVar32 = puVar11;
      uVar3 = *(ushort *)((long)puVar32 + 0x1a);
      if ((uint)uVar3 == (uVar34 & 0xffff)) {
LAB_00991350:
        plVar14 = (long *)puVar32[1];
        while (plVar13 = plVar14, plVar13 != (long *)0x0) {
          plVar19 = plVar13;
          plVar14 = (long *)*plVar13;
        }
        break;
      }
      iVar18 = (int)(short)(uVar3 - sVar6);
      bVar8 = (uVar34 & 0xffff) < (uint)uVar3;
      if ((uint)uVar3 - (uVar34 & 0xffff) != 0x8000) {
        bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
      }
      if (bVar8) goto LAB_009912d4;
      iVar18 = (int)(short)(sVar6 - uVar3);
      bVar8 = (uint)uVar3 < (uVar34 & 0xffff);
      if ((uVar34 & 0xffff) - (uint)uVar3 != 0x8000) {
        bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
      }
      if (!bVar8) goto LAB_00991350;
      puVar11 = (undefined8 *)puVar32[1];
    } while ((undefined8 *)puVar32[1] != (undefined8 *)0x0);
  }
LAB_00991364:
  puVar11 = *(undefined8 **)(param_2 + 0x30);
  while (puVar11 != plVar19) {
    puVar32 = (undefined8 *)puVar11[1];
    puVar33 = puVar11;
    if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
      do {
        puVar31 = (undefined8 *)puVar33[2];
        bVar8 = puVar33 != (undefined8 *)*puVar31;
        puVar33 = puVar31;
      } while (bVar8);
    }
    else {
      do {
        puVar31 = puVar32;
        puVar32 = (undefined8 *)*puVar31;
      } while ((undefined8 *)*puVar31 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_2 + 0x30) == puVar11) {
      *(undefined8 **)(param_2 + 0x30) = puVar31;
    }
    *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + -1;
    FUN_005d5d48(*(undefined8 *)(param_2 + 0x38),puVar11);
    if (puVar11 == (undefined8 *)0xffffffffffffffe6) goto LAB_009915c0;
    operator_delete(puVar11);
    puVar11 = puVar31;
  }
  puVar11 = *(undefined8 **)(param_2 + 0x50);
  if (puVar11 != (undefined8 *)0x0) {
    puVar32 = puVar11;
    puVar33 = (undefined8 *)(param_2 + 0x50);
    do {
      while( true ) {
        puVar15 = puVar32;
        uVar3 = *(ushort *)((long)puVar15 + 0x1a);
        puVar31 = puVar15;
        if ((uint)uVar3 == (param_3 & 0xffff)) goto LAB_00991480;
        iVar18 = (int)(short)(uVar3 - (short)param_3);
        bVar8 = (param_3 & 0xffff) < (uint)uVar3;
        if ((uint)uVar3 - (param_3 & 0xffff) != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if (bVar8) break;
        iVar18 = (int)(short)((short)param_3 - uVar3);
        bVar8 = (uint)uVar3 < (param_3 & 0xffff);
        if ((param_3 & 0xffff) - (uint)uVar3 != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if ((!bVar8) ||
           (puVar32 = (undefined8 *)puVar15[1], puVar31 = puVar33,
           (undefined8 *)puVar15[1] == (undefined8 *)0x0)) goto LAB_00991480;
      }
      puVar32 = (undefined8 *)*puVar15;
      puVar33 = puVar15;
    } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
LAB_00991480:
    plVar19 = (long *)(param_2 + 0x50);
    while (uVar3 = *(ushort *)((long)puVar11 + 0x1a), (uint)uVar3 != (uVar34 & 0xffff)) {
      iVar18 = (int)(short)(uVar3 - sVar6);
      bVar8 = (uVar34 & 0xffff) < (uint)uVar3;
      if ((uint)uVar3 - (uVar34 & 0xffff) != 0x8000) {
        bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
      }
      if (bVar8) {
        puVar32 = (undefined8 *)*puVar11;
        plVar19 = puVar11;
      }
      else {
        iVar18 = (int)(short)(sVar6 - uVar3);
        bVar8 = (uint)uVar3 < (uVar34 & 0xffff);
        if ((uVar34 & 0xffff) - (uint)uVar3 != 0x8000) {
          bVar8 = iVar18 != -1 && iVar18 + 1 < 0 == SCARRY4(iVar18,1);
        }
        if (!bVar8) break;
        puVar32 = (undefined8 *)puVar11[1];
      }
      puVar11 = puVar32;
      if (puVar11 == (undefined8 *)0x0) goto joined_r0x00991520;
    }
    plVar14 = (long *)puVar11[1];
    while (plVar13 = plVar14, plVar13 != (long *)0x0) {
      plVar19 = plVar13;
      plVar14 = (long *)*plVar13;
    }
joined_r0x00991520:
    while (puVar31 != plVar19) {
      puVar11 = (undefined8 *)puVar31[1];
      puVar32 = puVar31;
      if ((undefined8 *)puVar31[1] == (undefined8 *)0x0) {
        do {
          puVar33 = (undefined8 *)puVar32[2];
          bVar8 = puVar32 != (undefined8 *)*puVar33;
          puVar32 = puVar33;
        } while (bVar8);
      }
      else {
        do {
          puVar33 = puVar11;
          puVar11 = (undefined8 *)*puVar33;
        } while ((undefined8 *)*puVar33 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_2 + 0x48) == puVar31) {
        *(undefined8 **)(param_2 + 0x48) = puVar33;
      }
      *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + -1;
      FUN_005d5d48(*(undefined8 *)(param_2 + 0x50),puVar31);
      if (puVar31 == (undefined8 *)0xffffffffffffffe6) {
LAB_009915c0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar31);
      puVar31 = puVar33;
    }
  }
LAB_00990cb4:
  lVar10 = *(long *)(param_2 + 0x10);
  lVar20 = *(long *)(param_2 + 0x18);
  uVar35 = (ulong)(uVar34 + 1);
  local_b8 = local_b8 + 1;
  uVar12 = lVar20 - lVar10 >> 3;
  if (uVar12 <= local_b8) {
    return;
  }
  goto LAB_00990cd8;
LAB_00991110:
  plVar13 = (long *)*plVar14;
  plVar19 = plVar14;
  plVar14 = plVar13;
  if (plVar13 == (long *)0x0) goto LAB_009911a0;
  goto LAB_0099111c;
LAB_009912d4:
  puVar11 = (undefined8 *)*puVar32;
  plVar19 = puVar32;
  if ((undefined8 *)*puVar32 == (undefined8 *)0x0) goto LAB_00991364;
  goto LAB_009912e0;
}


// ===== 00991614  FUN_00991614 =====

undefined8 * FUN_00991614(undefined8 *param_1,undefined8 *param_2)

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
          FUN_007dd190((long)pvVar3 + 0x30);
          FUN_007b5554((long)pvVar3 + 0x18);
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
  return param_1;
}


// ===== 009916fc  FUN_009916fc =====

void FUN_009916fc(long param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  
  uVar8 = *(ushort *)(param_1 + 8);
  uVar9 = (uint)uVar8;
  if ((uint)uVar8 != (param_2 & 0xffff)) {
    iVar4 = (int)(short)(uVar8 - (short)param_2);
    bVar7 = (param_2 & 0xffff) < uVar9;
    if (uVar9 - (param_2 & 0xffff) != 0x8000) {
      bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
    }
    if (bVar7) {
      return;
    }
  }
  if (*(char *)(param_1 + 10) != '\x01') {
    return;
  }
  param_2 = param_2 + 1;
  uVar10 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3;
  uVar11 = (ulong)(param_2 - uVar9) & 0xffff;
  if (uVar11 <= uVar10) {
    uVar10 = uVar11;
  }
  sVar3 = (short)param_2;
  if (uVar10 != 0) {
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      uVar12 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar8 / uVar12;
      }
      lVar13 = (ulong)uVar8 - uVar11 * uVar12;
      pvVar14 = *(void **)(lVar2 + lVar13 * 8);
      if (pvVar14 != (void *)0x0) {
        uVar1 = (ushort)*(undefined8 *)((long)pvVar14 + 8);
        if ((param_2 & 0xffff) != (uint)uVar1) {
          iVar4 = (int)(short)(sVar3 - uVar1);
          bVar7 = (uint)uVar1 < (param_2 & 0xffff);
          if ((param_2 & 0xffff) - (uint)uVar1 != 0x8000) {
            bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (bVar7) {
            *(undefined8 *)(lVar2 + lVar13 * 8) = 0;
            FUN_007dd190((long)pvVar14 + 0x30);
            FUN_007b5554((long)pvVar14 + 0x18);
            operator_delete(pvVar14);
            uVar8 = *(ushort *)(param_1 + 8);
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 - 1;
      *(ushort *)(param_1 + 8) = uVar8;
    } while (uVar10 != 0);
  }
  puVar19 = (undefined8 *)(param_1 + 0x38);
  puVar15 = *(undefined8 **)(param_1 + 0x30);
  *(short *)(param_1 + 8) = sVar3;
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((undefined8 *)*puVar19 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar19;
    puVar20 = puVar19;
    do {
      while( true ) {
        puVar22 = puVar6;
        uVar8 = *(ushort *)((long)puVar22 + 0x1a);
        puVar19 = puVar22;
        if ((uint)uVar8 == (param_2 & 0xffff)) goto joined_r0x00991a6c;
        iVar4 = (int)(short)(uVar8 - sVar3);
        bVar7 = (param_2 & 0xffff) < (uint)uVar8;
        if ((uint)uVar8 - (param_2 & 0xffff) != 0x8000) {
          bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        if (bVar7) break;
        iVar4 = (int)(short)(sVar3 - uVar8);
        bVar7 = (uint)uVar8 < (param_2 & 0xffff);
        if ((param_2 & 0xffff) - (uint)uVar8 != 0x8000) {
          bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        if ((!bVar7) ||
           (puVar6 = (undefined8 *)puVar22[1], puVar19 = puVar20,
           (undefined8 *)puVar22[1] == (undefined8 *)0x0)) goto joined_r0x00991a6c;
      }
      puVar6 = (undefined8 *)*puVar22;
      puVar20 = puVar22;
    } while ((undefined8 *)*puVar22 != (undefined8 *)0x0);
  }
joined_r0x00991a6c:
  do {
    if (puVar15 == puVar19) break;
    puVar6 = (undefined8 *)puVar15[1];
    puVar20 = puVar15;
    if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
      do {
        puVar22 = (undefined8 *)puVar20[2];
        bVar7 = puVar20 != (undefined8 *)*puVar22;
        puVar20 = puVar22;
      } while (bVar7);
    }
    else {
      do {
        puVar22 = puVar6;
        puVar6 = (undefined8 *)*puVar22;
      } while ((undefined8 *)*puVar22 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x30) == puVar15) {
      *(undefined8 **)(param_1 + 0x30) = puVar22;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x38),puVar15);
    if (puVar15 == (undefined8 *)0xffffffffffffffe6) goto LAB_00991a84;
    operator_delete(puVar15);
    puVar15 = puVar22;
  } while( true );
  plVar21 = (long *)(param_1 + 0x50);
  plVar16 = *(long **)(param_1 + 0x48);
  if ((long *)*plVar21 != (long *)0x0) {
    plVar5 = (long *)*plVar21;
    plVar17 = plVar21;
    do {
      while( true ) {
        plVar21 = plVar5;
        uVar8 = *(ushort *)((long)plVar21 + 0x1a);
        if ((uint)uVar8 == (param_2 & 0xffff)) goto LAB_009919d0;
        iVar4 = (int)(short)(uVar8 - sVar3);
        bVar7 = (param_2 & 0xffff) < (uint)uVar8;
        if ((uint)uVar8 - (param_2 & 0xffff) != 0x8000) {
          bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        if (bVar7) break;
        iVar4 = (int)(short)(sVar3 - uVar8);
        bVar7 = (uint)uVar8 < (param_2 & 0xffff);
        if ((param_2 & 0xffff) - (uint)uVar8 != 0x8000) {
          bVar7 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        if (!bVar7) {
          if (plVar16 == plVar21) {
            return;
          }
          goto LAB_009919dc;
        }
        plVar18 = plVar21 + 1;
        plVar5 = (long *)*plVar18;
        plVar21 = plVar17;
        if ((long *)*plVar18 == (long *)0x0) goto LAB_009919d0;
      }
      plVar5 = (long *)*plVar21;
      plVar17 = plVar21;
    } while ((long *)*plVar21 != (long *)0x0);
  }
LAB_009919d0:
  if (plVar16 != plVar21) {
LAB_009919dc:
    do {
      plVar5 = (long *)plVar16[1];
      plVar17 = plVar16;
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar18 = (long *)plVar17[2];
          bVar7 = plVar17 != (long *)*plVar18;
          plVar17 = plVar18;
        } while (bVar7);
      }
      else {
        do {
          plVar18 = plVar5;
          plVar5 = (long *)*plVar18;
        } while ((long *)*plVar18 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x48) == plVar16) {
        *(long **)(param_1 + 0x48) = plVar18;
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),plVar16);
      if (plVar16 == (long *)0xffffffffffffffe6) {
LAB_00991a84:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar16);
      plVar16 = plVar18;
    } while (plVar21 != plVar18);
  }
  return;
}


// ===== 00991a98  FUN_00991a98 =====

void FUN_00991a98(undefined8 *param_1,long param_2,ushort param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *local_48;
  undefined8 *local_40;
  ushort local_14 [2];
  
  param_1[2] = 0;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_14[0] = param_3;
  FUN_009909bc();
  FUN_00939f8c(0,param_2 + 0x48,param_2 + 0x48,local_14);
  FUN_00990c4c(&local_48,param_2,local_14[0] + 1);
  FUN_00991614(param_1,&local_48);
  puVar1 = local_48;
  puVar3 = local_40;
  if (local_48 != (undefined8 *)0x0) {
    while (puVar1 != puVar3) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar2 = (void *)*puVar3;
      *puVar3 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_007dd190((long)pvVar2 + 0x30);
        FUN_007b5554((long)pvVar2 + 0x18);
        operator_delete(pvVar2);
      }
    }
    local_40 = puVar1;
    operator_delete(local_48);
  }
  return;
}


// ===== 00991ba0  FUN_00991ba0 =====

void FUN_00991ba0(long param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


// ===== 00991bb0  FUN_00991bb0 =====

void FUN_00991bb0(long param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}


// ===== 00991bbc  FUN_00991bbc =====

long * FUN_00991bbc(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar1 = *param_2;
    uVar2 = *(ushort *)((long)plVar7 + 0x1a);
    plVar12 = plVar7;
    if (uVar2 != uVar1) {
      do {
        uVar11 = (uint)uVar2;
        iVar3 = (int)(short)(uVar2 - uVar1);
        uVar10 = (uint)uVar1;
        bVar6 = uVar10 < uVar11;
        if (uVar11 - uVar10 != 0x8000) {
          bVar6 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if (bVar6) {
          plVar12 = (long *)*plVar12;
        }
        else {
          iVar3 = uVar10 - uVar11;
          iVar4 = (int)(short)iVar3;
          bVar6 = uVar11 <= uVar10 && iVar3 != 0;
          if (iVar3 != 0x8000) {
            bVar6 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (!bVar6) break;
          plVar12 = (long *)plVar12[1];
        }
        if (plVar12 == (long *)0x0) goto LAB_00991c84;
        uVar2 = *(ushort *)((long)plVar12 + 0x1a);
      } while (uVar2 != uVar10);
    }
    if (plVar12 == param_1 + 1) {
LAB_00991c84:
      plVar7 = (long *)0x0;
    }
    else {
      plVar8 = plVar12;
      plVar5 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar6 = plVar8 != (long *)*plVar9;
          plVar8 = plVar9;
        } while (bVar6);
      }
      else {
        do {
          plVar9 = plVar5;
          plVar5 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar12) {
        *param_1 = plVar9;
      }
      param_1[2] = param_1[2] + -1;
      FUN_005d5d48(plVar7,plVar12);
      if (plVar12 == (long *)0xffffffffffffffe6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar12);
      plVar7 = (long *)0x1;
    }
  }
  return plVar7;
}


// ===== 00991d04  FUN_00991d04 =====

void FUN_00991d04(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    uVar3 = (ulong)param_2 * 8;
    puVar4 = (undefined8 *)operator_new(uVar3);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    uVar5 = uVar3 - 8 >> 3;
    uVar3 = (ulong)-(long)puVar4 >> 3;
    if (uVar5 <= (ulong)-(long)puVar4 >> 3) {
      uVar3 = uVar5;
    }
    puVar1 = puVar4 + param_2;
    param_1[2] = puVar1;
    if ((5 < uVar3) && ((-(int)puVar4 & 7U) == 0)) {
      uVar5 = uVar3 + 1 & 3;
      uVar2 = 4;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      puVar6 = puVar4 + 2;
      lVar7 = ~uVar3 + uVar2;
      puVar4 = puVar4 + ((uVar3 + 1) - uVar2);
      do {
        lVar7 = lVar7 + 4;
        puVar6[-1] = 0;
        puVar6[-2] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
    }
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar6;
    } while (puVar6 != puVar1);
    param_1[1] = puVar1;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_1 + 4;
  *(uint *)(param_1 + 6) = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


// ===== 00991df8  FUN_00991df8 =====

void FUN_00991df8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  local_8 = param_1 + 3;
  FUN_00992114(&local_8,param_1[4]);
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00991ec0  FUN_00991ec0 =====

void FUN_00991ec0(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  uint local_28;
  undefined1 uStack_21;
  uint *local_8;
  
  local_28 = param_2;
  if (param_2 < *(uint *)(param_1 + 6)) {
    lVar1 = *param_1;
    uVar2 = (ulong)param_2;
    if ((ulong)(param_1[1] - lVar1 >> 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    *(long *)(lVar1 + uVar2 * 8) = *(long *)(lVar1 + uVar2 * 8) + 1;
    param_1[8] = param_1[8] + 1;
  }
  else {
    local_8 = &local_28;
    lVar1 = FUN_00992188(0,param_1 + 3,param_1 + 3,&DAT_001f94c3,&local_8,&uStack_21);
    *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
  }
  param_1[7] = param_1[7] + 1;
  return;
}


// ===== 00991f80  FUN_00991f80 =====

ulong FUN_00991f80(float param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  
  if (1.0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88((double)param_1,0x3ff0000000000000,
                 "../../rtc_base/numerics/histogram_percentile_counter.cc",0x38,"fraction <= 1.0",
                 &DAT_001fdd70);
  }
  if (param_1 < 0.0 != NAN(param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88((double)param_1,0,"../../rtc_base/numerics/histogram_percentile_counter.cc",0x39,
                 "fraction >= 0.0",&DAT_001fdd70);
  }
  uVar4 = param_2[7];
  if (uVar4 == 0) {
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    fVar10 = (float)(int)(param_1 * (float)uVar4) + -1.0;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar5 = (long)fVar10;
    if (uVar4 <= (ulong)(long)fVar10) {
      uVar5 = uVar4 - 1;
    }
    uVar4 = uVar5 - param_2[8];
    if (uVar5 < (ulong)param_2[8]) {
      if ((int)param_2[6] == 0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar6 = 0;
        goto LAB_009920a0;
      }
      uVar4 = 0;
      do {
        if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar9 = *(ulong *)(*param_2 + uVar4 * 8);
        bVar2 = uVar5 < uVar9;
        uVar5 = uVar5 - uVar9;
        if (bVar2) goto LAB_00992098;
        uVar4 = uVar4 + 1;
      } while ((int)param_2[6] != (int)uVar4);
    }
    else {
      plVar7 = (long *)param_2[3];
      while (plVar7 != param_2 + 4) {
        bVar2 = uVar4 < (ulong)plVar7[5];
        uVar4 = uVar4 - plVar7[5];
        if (bVar2) {
          uVar4 = (ulong)*(uint *)(plVar7 + 4);
          goto LAB_00992098;
        }
        plVar8 = plVar7;
        plVar1 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar2 = plVar8 != (long *)*plVar7;
            plVar8 = plVar7;
          } while (bVar2);
        }
        else {
          do {
            plVar7 = plVar1;
            plVar1 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
    }
    uVar4 = 0;
    uVar3 = 0;
    uVar6 = 0;
  }
LAB_009920a0:
  return uVar4 | (uVar6 | uVar3 & 0xff);
LAB_00992098:
  uVar3 = (uint)uVar4;
  uVar6 = uVar3 & 0xffffff00;
  uVar4 = 0x100000000;
  goto LAB_009920a0;
}


// ===== 00992114  FUN_00992114 =====

void FUN_00992114(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00992114(param_1,*param_2);
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


// ===== 00992188  FUN_00992188 =====

undefined1  [16]
FUN_00992188(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009921f0;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00992260;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_009921f0:
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
LAB_00992260:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00992290  FUN_00992290 =====

void FUN_00992290(long *param_1,long param_2,long param_3)

{
  void *pvVar1;
  ulong uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar2 = (param_3 + 1U) * 8;
  if (param_3 + 1U >> 0x3d != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new__(uVar2);
  param_1[2] = (long)pvVar1;
  param_1[3] = 0;
  param_1[5] = -1;
  if (0 < param_2) {
    if (param_3 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/rate_tracker.cc",0x20,"bucket_count > 0",&DAT_001f5fa0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/rate_tracker.cc",0x1f,"bucket_milliseconds > 0",&DAT_001f5fa0);
}


// ===== 00992338  FUN_00992338 =====

void FUN_00992338(long param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0099234c  FUN_0099234c =====

undefined1  [16] FUN_0099234c(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if (param_1[5] != -1) {
    uVar6 = param_2 / 1000;
    uVar11 = param_3 / 1000;
    if (499 < param_2 % 1000) {
      uVar6 = uVar6 + 1;
    }
    lVar1 = *param_1;
    uVar2 = param_1[1];
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar6 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
    }
    uVar10 = uVar2 * lVar1;
    if (499 < param_3 % 1000) {
      uVar11 = uVar11 + 1;
    }
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar11 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
    }
    uVar7 = uVar10;
    if ((long)uVar11 <= (long)uVar10) {
      uVar7 = uVar11;
    }
    if ((long)(uVar7 + param_1[6]) < (long)uVar6) {
      lVar8 = ((uVar6 + uVar10) - param_1[5]) - uVar7;
      uVar6 = 0;
      if (lVar1 != 0) {
        uVar6 = lVar8 / lVar1;
      }
      lVar8 = lVar8 - uVar6 * lVar1;
    }
    else {
      uVar7 = uVar6 - param_1[6];
      if ((long)uVar7 < lVar1) goto LAB_0099243c;
      lVar8 = 0;
      uVar6 = uVar2 - param_1[4];
    }
    if ((uVar6 <= uVar2) && (uVar7 != 0)) {
      uVar11 = param_1[4] + 1;
      uVar10 = uVar2 + 1;
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = (uVar11 + uVar6) / uVar10;
      }
      uVar6 = (uVar11 + uVar6) - uVar5 * uVar10;
      lVar9 = 0;
      if (uVar6 != uVar2) {
        lVar9 = uVar6 + 1;
      }
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = (*(long *)(param_1[2] + uVar6 * 8) * (lVar1 - lVar8) + (lVar1 >> 1)) / lVar1;
      }
      for (; lVar9 != uVar11 - uVar4 * uVar10; lVar9 = (lVar9 + 1U) - uVar6 * uVar10) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = (lVar9 + 1U) / uVar10;
        }
        lVar3 = *(long *)(param_1[2] + lVar9 * 8) + lVar3;
      }
      auVar12._0_8_ = (double)(lVar3 * 1000) / (double)(long)uVar7;
      auVar12._8_8_ = 0;
      return auVar12;
    }
  }
LAB_0099243c:
  return ZEXT816(0);
}


// ===== 009924e0  FUN_009924e0 =====

undefined8 FUN_009924e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 009924ec  FUN_009924ec =====

void FUN_009924ec(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = param_3 / 1000;
  if (499 < param_3 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((param_3 & 0x8000000000000000) != 0) {
    uVar2 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
  }
  if (param_1[5] == -1) {
    param_1[5] = uVar2;
    param_1[6] = uVar2;
    param_1[4] = 0;
    *(undefined8 *)param_1[2] = 0;
  }
  uVar4 = param_1[1];
  uVar3 = 0;
  do {
    lVar7 = param_1[5];
    lVar6 = *param_1;
    if ((long)uVar2 < lVar6 + lVar7) goto LAB_009925b8;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 1;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (param_1[4] + 1U) / uVar4;
    }
    lVar5 = (param_1[4] + 1U) - uVar1 * uVar4;
    param_1[4] = lVar5;
    param_1[5] = lVar6 + lVar7;
    *(undefined8 *)(param_1[2] + lVar5 * 8) = 0;
    uVar4 = param_1[1];
  } while (uVar3 <= uVar4);
  lVar6 = *param_1;
  lVar7 = param_1[5];
LAB_009925b8:
  lVar5 = 0;
  if (lVar6 != 0) {
    lVar5 = (long)(uVar2 - lVar7) / lVar6;
  }
  param_1[5] = uVar2 + (lVar5 * lVar6 - (uVar2 - lVar7));
  *(long *)(param_1[2] + param_1[4] * 8) = *(long *)(param_1[2] + param_1[4] * 8) + param_2;
  param_1[3] = param_1[3] + param_2;
  return;
}


// ===== 009925f4  FUN_009925f4 =====

void FUN_009925f4(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ===== 00992610  FUN_00992610 =====

void FUN_00992610(void)

{
  return;
}


// ===== 00992618  FUN_00992618 =====

void FUN_00992618(long *param_1,int param_2)

{
  param_1[1] = param_1[1] + 1;
  *param_1 = *param_1 + (long)param_2;
  if ((*(char *)((long)param_1 + 0x14) != '\x01') || ((int)param_1[2] < param_2)) {
    *(int *)(param_1 + 2) = param_2;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  if ((*(char *)((long)param_1 + 0x1c) != '\x01') || (param_2 < (int)param_1[3])) {
    *(int *)(param_1 + 3) = param_2;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
  }
  return;
}


// ===== 00992680  FUN_00992680 =====

ulong FUN_00992680(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 < param_2) {
    return 0;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *param_1 / lVar2;
  }
  return uVar1 & 0xffffffff | 0x100000000;
}


// ===== 009926ac  FUN_009926ac =====

undefined8 FUN_009926ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 009926b8  FUN_009926b8 =====

undefined1  [16] FUN_009926b8(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if ((long)param_1[1] < param_2) {
    return ZEXT816(0);
  }
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = 1;
  return auVar1;
}


// ===== 009926e0  FUN_009926e0 =====

undefined8 FUN_009926e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 009926ec  FUN_009926ec =====

void FUN_009926ec(long *param_1,long *param_2)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined1 *local_40;
  ulong uStack_38;
  byte bStack_29;
  long *local_28;
  
  FUN_00661054(param_1,"min_keyframe_send_interval_ms",0x1d);
  puVar2 = PTR_DAT_00d51ff8;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  local_28 = param_1;
  (**(code **)(*param_2 + 0x10))(&local_40,param_2,"WebRTC-KeyframeInterval",0x17);
  ppuVar1 = (undefined1 **)local_40;
  if (-1 < (char)bStack_29) {
    uStack_38 = (ulong)bStack_29;
    ppuVar1 = &local_40;
  }
  FUN_00661cc0(&local_28,1,ppuVar1,uStack_38);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 009927a8  FUN_009927a8 =====

ulong FUN_009927a8(long param_1)

{
  return *(ulong *)(param_1 + 0x3c) & 0xffffffffff;
}


// ===== 009927b8  FUN_009927b8 =====

void FUN_009927b8(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  int ***pppiVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  int **local_48;
  ulong local_40;
  byte bStack_31;
  
  *param_1 = &PTR_FUN_00d3f940;
  FUN_00660fac(param_1 + 2);
  FUN_00992e34(param_1 + 4,param_2,param_3);
  param_1[0xf] = param_4;
  plVar3 = *(long **)(param_2 + 0x18);
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_48,*(long **)(param_2 + 8),"WebRTC-MediaTaskQueuePriorities",0x1f);
  uVar4 = 1;
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (6 < local_40) {
    pppiVar1 = (int ***)local_48;
    if (-1 < (char)bStack_31) {
      pppiVar1 = &local_48;
    }
    uVar4 = 1;
    if (*(int *)pppiVar1 == 0x62616e45 && *(int *)((long)pppiVar1 + 3) == 0x64656c62) {
      uVar4 = 2;
    }
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,"IncomingVideoStreamQueue",0x18,uVar4);
  param_1[0x10] = uVar2;
  return;
}


// ===== 009928d4  FUN_009928d4 =====

void FUN_009928d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f940;
  (*(code *)**(undefined8 **)param_1[0x10])();
  param_1[0x10] = 0;
  FUN_00992eb4(param_1 + 4);
  return;
}


// ===== 0099291c  FUN_0099291c =====

void FUN_0099291c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3f940;
  (*(code *)**(undefined8 **)param_1[0x10])();
  param_1[0x10] = 0;
  FUN_00992eb4(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00992970  FUN_00992970 =====

void FUN_00992970(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_189;
  long local_188;
  undefined1 auStack_180 [224];
  undefined1 *local_a0;
  undefined1 *puStack_98;
  char **local_90;
  char *local_88;
  char *pcStack_80;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  if (((DAT_00d807b8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d807b8), iVar1 != 0)) {
    DAT_00d807b0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d807b8);
  }
  local_90 = (char **)0x0;
  pcStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d807b0 != '\0') {
    FUN_0066d348(0x42,DAT_00d807b0,"IncomingVideoStream::OnFrame",0,0,0,0,0,0);
    local_88 = DAT_00d807b0;
    pcStack_80 = "IncomingVideoStream::OnFrame";
    local_90 = &local_88;
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00660fb8(&local_a0,param_1 + 0x10);
  uVar2 = FUN_00661028(&local_a0);
  if ((uVar2 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x80);
    local_188 = param_1;
    FUN_007bf070(auStack_180,param_2);
    plVar3 = (long *)operator_new(0xe8);
    *plVar3 = local_188;
    FUN_007bf130(plVar3 + 1,auStack_180);
    local_60 = FUN_00992dc0;
    pcStack_58 = FUN_00992d74;
    local_70[0] = plVar3;
    (**(code **)(*plVar4 + 8))(plVar4,local_70,&uStack_71,&uStack_189);
    (*local_60)(0,local_70,local_70);
    FUN_007bf020(auStack_180);
    FUN_0066103c(&local_a0);
    if ((local_90 != (char **)0x0) && (**local_90 != '\0')) {
      FUN_0066d348(0x45,*local_90,local_90[1],0,0,0,0,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/render/incoming_video_stream.cc",0x37,"!race_checker55.RaceDetected()",
               &DAT_001f5fa0);
}


// ===== 00992b5c  FUN_00992b5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00992b5c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uStack_171;
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
  undefined1 *local_90;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  long local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 local_44 [4];
  
  if (((DAT_00d807c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d807c8), iVar1 != 0)) {
    DAT_00d807c0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d807c8);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d807c0 != '\0') {
    FUN_0066d348(0x42,DAT_00d807c0,"IncomingVideoStream::Dequeue",0,0,0,0,0,0);
    local_80 = DAT_00d807c0;
    pcStack_78 = "IncomingVideoStream::Dequeue";
    local_88 = &local_80;
  }
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = _UNK_0022adc0;
  local_b0 = _DAT_0022adb8;
  uStack_98 = _UNK_0022add0;
  uStack_a0 = _DAT_0022adc8;
  uStack_e8 = _UNK_0022ad80;
  local_f0 = _DAT_0022ad78;
  uStack_d8 = _UNK_0022ad90;
  uStack_e0 = _DAT_0022ad88;
  uStack_c8 = _UNK_0022ada0;
  local_d0 = _DAT_0022ad98;
  uStack_b8 = _UNK_0022adb0;
  uStack_c0 = _DAT_0022ada8;
  uStack_128 = _UNK_0022ad40;
  local_130 = _DAT_0022ad38;
  uStack_118 = _UNK_0022ad50;
  uStack_120 = _DAT_0022ad48;
  uStack_108 = _UNK_0022ad60;
  local_110 = _DAT_0022ad58;
  uStack_f8 = _UNK_0022ad70;
  uStack_100 = _DAT_0022ad68;
  uStack_168 = _UNK_0022ad00;
  local_170 = _DAT_0022acf8;
  uStack_158 = _UNK_0022ad10;
  uStack_160 = _DAT_0022ad08;
  uStack_148 = _UNK_0022ad20;
  local_150 = _DAT_0022ad18;
  uStack_138 = _UNK_0022ad30;
  uStack_140 = _DAT_0022ad28;
  FUN_00993248(&local_170,param_1 + 0x20);
  if (((ulong)local_90 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x10))(*(long **)(param_1 + 0x78),&local_170);
  }
  uVar2 = FUN_0099352c(param_1 + 0x20);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00993464(param_1 + 0x20);
    local_60 = FUN_004473ec;
    pcStack_58 = FUN_00992e28;
    local_44[0] = 1;
    local_70[0] = param_1;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x10))
              (*(long **)(param_1 + 0x80),local_70,(uVar2 & 0xffffffff) * 1000,local_44,&uStack_171)
    ;
    (*local_60)(0,local_70,local_70);
  }
  if (((ulong)local_90 & 1) != 0) {
    FUN_007bf020(&local_170);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00992d74  FUN_00992d74 =====

void FUN_00992d74(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  iVar1 = FUN_0099301c(lVar2 + 0x20,(long *)*param_1 + 1);
  if (iVar1 == 1) {
    FUN_00992b5c(lVar2);
    return;
  }
  return;
}


// ===== 00992dc0  FUN_00992dc0 =====

void FUN_00992dc0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x992e28);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007bf020((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00992e28  FUN_00992e28 =====

void FUN_00992e28(undefined8 *param_1)

{
  FUN_00992b5c(*param_1);
  return;
}


// ===== 00992e34  FUN_00992e34 =====

void FUN_00992e34(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[2];
  lVar2 = param_2[1];
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  param_1[4] = lVar5;
  param_1[3] = lVar4;
  iVar1 = 10;
  if (0xfffffe14 < param_3 - 0x1f5U) {
    iVar1 = param_3;
  }
  param_1[2] = lVar3;
  param_1[1] = lVar2;
  param_1[7] = 0;
  *(int *)(param_1 + 8) = iVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


// ===== 00992eb4  FUN_00992eb4 =====

void FUN_00992eb4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[10] = param_1[10] + param_1[7];
  lVar2 = DAT_00d807d0;
  if (DAT_00d807d0 == 0) {
    lVar2 = FUN_006660d0("WebRTC.Video.DroppedFrames.RenderQueue",0x26,1,1000,0x32);
    FUN_00d0f5e0(0,lVar2,&DAT_00d807d0);
    if (lVar2 == 0) goto LAB_00992f30;
  }
  FUN_00666568(lVar2,*(undefined4 *)(param_1 + 10));
LAB_00992f30:
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6643,"../../video/render/video_render_frames.cc",0x191,
                 "WebRTC.Video.DroppedFrames.RenderQueue ",param_1[10]);
  }
  if (param_1[7] != 0) {
    plVar5 = (long *)param_1[6];
    plVar4 = *(long **)(param_1[5] + 8);
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar4 = *plVar5;
    param_1[7] = 0;
    while (plVar5 != param_1 + 5) {
      if (plVar5 + 2 == (long *)0x0) {
LAB_00993008:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar4 = (long *)plVar5[1];
      FUN_007bf020(plVar5 + 2);
      if (plVar5 == (long *)0x0) goto LAB_00993008;
      operator_delete(plVar5);
      plVar5 = plVar4;
    }
  }
  plVar5 = (long *)*param_1;
  if ((plVar5 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00992ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))(plVar5);
    return;
  }
  return;
}


// ===== 0099301c  FUN_0099301c =====

ulong FUN_0099301c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar7 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar7 = uVar7 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar3 = FUN_007bf4f8(param_2), (long)uVar7 <= lVar3 + 500)) {
    lVar3 = FUN_007bf4f8(param_2);
    if (lVar3 <= (long)(uVar7 + 10000)) {
      lVar3 = FUN_007bf4f8(param_2);
      if (*(long *)(param_1 + 0x48) <= lVar3) {
        uVar5 = FUN_007bf4f8(param_2);
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        plVar4 = (long *)operator_new(0xf0);
        if (plVar4 != (long *)0x0) {
          *plVar4 = 0;
          plVar4[1] = 0;
          if (plVar4 + 2 != (long *)0x0) {
            FUN_007bf130(plVar4 + 2,param_2);
            lVar3 = *(long *)(param_1 + 0x28);
            *plVar4 = lVar3;
            plVar4[1] = param_1 + 0x28;
            *(long **)(lVar3 + 8) = plVar4;
            *(long **)(param_1 + 0x28) = plVar4;
            uVar7 = *(long *)(param_1 + 0x38) + 1;
            *(ulong *)(param_1 + 0x38) = uVar7;
            if (uVar7 < 0x65) {
              return uVar7;
            }
            uVar7 = FUN_004022fc();
            if ((uVar7 & 1) == 0) {
              FUN_00623bb0(&DAT_001f6643,"../../video/render/video_render_frames.cc",0x2c2,
                           "Stored incoming frames: ",*(undefined8 *)(param_1 + 0x38));
            }
            return *(ulong *)(param_1 + 0x38);
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        uVar5 = FUN_007bf4f8(param_2);
        FUN_00623bb0(&DAT_002255de,"../../video/render/video_render_frames.cc",0x25a,
                     "Frame scheduled out of order, render_time=",uVar5,", latest=",
                     *(undefined8 *)(param_1 + 0x48));
      }
      goto LAB_00993184;
    }
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) != 0) goto LAB_00993184;
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    pcVar6 = "Frame too long into the future, timestamp=";
    uVar5 = 0x222;
  }
  else {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) != 0) goto LAB_00993184;
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    pcVar6 = "Too old frame, timestamp=";
    uVar5 = 0x1ea;
  }
  FUN_00623bb0(&DAT_001f6220,"../../video/render/video_render_frames.cc",uVar5,pcVar6,uVar1);
LAB_00993184:
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return 0xffffffff;
}


// ===== 00993248  FUN_00993248 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00993248(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar7 = _UNK_0022aeb8;
  uVar6 = _DAT_0022aeb0;
  uVar5 = _UNK_0022aea8;
  uVar4 = _DAT_0022aea0;
  param_1[0x1c] = &DAT_aaaaaaaaaaaaaaaa;
  lVar9 = *(long *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  uVar6 = _UNK_0022ae78;
  uVar5 = _DAT_0022ae70;
  uVar4 = _DAT_0022ae60;
  param_1[0x11] = _UNK_0022ae68;
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar6 = _UNK_0022ae98;
  uVar5 = _DAT_0022ae90;
  uVar4 = _DAT_0022ae80;
  param_1[0x15] = _UNK_0022ae88;
  param_1[0x14] = uVar4;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  uVar6 = _UNK_0022ae38;
  uVar5 = _DAT_0022ae30;
  uVar4 = _DAT_0022ae20;
  param_1[9] = _UNK_0022ae28;
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar6 = _UNK_0022ae58;
  uVar5 = _DAT_0022ae50;
  uVar4 = _DAT_0022ae40;
  param_1[0xd] = _UNK_0022ae48;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  uVar6 = _UNK_0022adf8;
  uVar5 = _DAT_0022adf0;
  uVar4 = _DAT_0022ade0;
  param_1[1] = _UNK_0022ade8;
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar7 = _UNK_0022ae18;
  uVar6 = _DAT_0022ae10;
  uVar5 = _UNK_0022ae08;
  uVar4 = _DAT_0022ae00;
  *(undefined1 *)param_1 = 0;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  do {
    if (lVar9 == 0) {
      return;
    }
    lVar9 = FUN_007bf4f8(*(long *)(param_2 + 0x30) + 0x10);
    uVar3 = *(uint *)(param_2 + 0x40);
    uVar8 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(*(long **)(param_2 + 0x10));
    uVar10 = -uVar8 / 1000;
    if (500 < -uVar8 % 1000) {
      uVar10 = uVar10 + 1;
    }
    uVar1 = -(uVar8 / 1000) - (ulong)(499 < uVar8 % 1000);
    if ((uVar8 & 0x8000000000000000) != 0) {
      uVar1 = uVar10;
    }
    lVar9 = (lVar9 - (ulong)uVar3) + uVar1;
    if (((uint)lVar9 & ((uint)(lVar9 >> 0x3f) ^ 0xffffffff)) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
      if (*(long *)(param_2 + 0x38) == 0) {
LAB_00993428:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                  );
      }
      FUN_007bf2e4(param_1,*(long *)(param_2 + 0x30) + 0x10);
    }
    else {
      if (*(long *)(param_2 + 0x38) == 0) goto LAB_00993428;
      if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007bf130(param_1,*(long *)(param_2 + 0x30) + 0x10);
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
                );
    }
    plVar11 = *(long **)(param_2 + 0x30);
    plVar2 = (long *)plVar11[1];
    *(long **)(*plVar11 + 8) = plVar2;
    *plVar2 = *plVar11;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + -1;
    if ((plVar11 + 2 == (long *)0x0) || (FUN_007bf020(plVar11 + 2), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar11);
    lVar9 = *(long *)(param_2 + 0x38);
  } while( true );
}


// ===== 00993464  FUN_00993464 =====

uint FUN_00993464(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_007bf4f8(*(long *)(param_1 + 0x30) + 0x10);
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
    uVar5 = -uVar4 / 1000;
    if (500 < -uVar4 % 1000) {
      uVar5 = uVar5 + 1;
    }
    uVar1 = -(uVar4 / 1000) - (ulong)(499 < uVar4 % 1000);
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar1 = uVar5;
    }
    lVar3 = (lVar3 - (ulong)uVar2) + uVar1;
    return (uint)lVar3 & ((uint)(lVar3 >> 0x3f) ^ 0xffffffff);
  }
  return 200;
}


// ===== 0099352c  FUN_0099352c =====

bool FUN_0099352c(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}


// ===== 00993540  FUN_00993540 =====

void FUN_00993540(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x993548);
  (*pcVar1)();
}


// ===== 00993548  FUN_00993548 =====

void FUN_00993548(undefined8 param_1)

{
  long *plVar1;
  undefined1 local_24 [4];
  long *local_8;
  
  local_8 = (long *)operator_new(8);
  local_24[0] = 1;
  *local_8 = (long)(PTR_DAT_00d53138 + 0x10);
  FUN_009935c0(param_1,&local_8,local_24);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


// ===== 009935c0  FUN_009935c0 =====

void FUN_009935c0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *local_28;
  
  puVar2 = (undefined8 *)operator_new(0x44c8);
  uVar4 = *param_2;
  *param_2 = 0;
  uVar1 = *param_3;
  *puVar2 = &PTR_FUN_00d3f978;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(puVar2 + 1),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  puVar2[6] = uVar4;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar2[10] = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  FUN_00994394(puVar2 + 0xb,uVar1);
  puVar2[0x897] = 0;
  *puVar2 = &PTR_FUN_00d3f9c0;
  *(undefined4 *)(puVar2 + 0x898) = 0;
  *param_1 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 0x898);
  }
  return;
}


// ===== 0099369c  FUN_0099369c =====

ulong FUN_0099369c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  char **local_68;
  char *local_60;
  char *pcStack_58;
  undefined8 *puVar10;
  
  if (((DAT_00d807e0 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d807e0), iVar5 != 0)) {
    DAT_00d807d8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d807e0);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d807d8 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00d807d8,"AudioMixerImpl::Mix",0,0,0,0,0,0);
    local_60 = DAT_00d807d8;
    pcStack_58 = "AudioMixerImpl::Mix";
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  lVar2 = (long)puVar1 - (long)*(undefined8 **)(param_1 + 0x38);
  lVar8 = lVar2 >> 3;
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x38);
    puVar11 = *(undefined4 **)(*(long *)(param_1 + 0x50) + 0x18);
    do {
      puVar10 = puVar9 + 1;
      uVar3 = (**(code **)(**(long **)*puVar9 + 0x18))();
      *puVar11 = uVar3;
      puVar9 = puVar10;
      puVar11 = puVar11 + 1;
    } while (puVar10 != puVar1);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18);
  }
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                    (*(undefined8 **)(param_1 + 0x30),uVar7,lVar8);
  auVar12 = FUN_00993860(param_1,uVar3);
  FUN_00994460(param_1 + 0x58,auVar12._0_8_,auVar12._8_8_,param_2,uVar3,lVar8,param_3);
  uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  uVar6 = (ulong)uVar4;
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    uVar6 = FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar6;
}


// ===== 00993860  FUN_00993860 =====

undefined1  [16] FUN_00993860(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar9 == puVar2) {
    lVar7 = 0;
    uVar6 = 0;
  }
  else {
    iVar8 = 0;
    do {
      puVar4 = *(undefined8 **)*puVar9;
      iVar3 = (**(code **)*puVar4)(puVar4,param_2,(undefined8 *)*puVar9 + 1);
      if (iVar3 == 0) {
        puVar4 = (undefined8 *)*puVar9;
        uVar10 = (**(code **)(*(long *)*puVar4 + 8))();
        lVar7 = **(long **)(param_1 + 0x50);
        if ((ulong)((*(long **)(param_1 + 0x50))[1] - lVar7 >> 4) <= (ulong)(long)iVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar1 = (long *)(lVar7 + (long)iVar8 * 0x10);
        iVar8 = iVar8 + 1;
        *plVar1 = (long)(puVar4 + 1);
        *(undefined4 *)(plVar1 + 1) = uVar10;
      }
      else if ((iVar3 == 2) && (uVar5 = FUN_004022fc(), (uVar5 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4ead,"../../modules/audio_mixer/audio_mixer_impl.cc",0x46a,
                     "GetAudioFromSources",&DAT_001c4dc3,
                     "failed to GetAudioFrameWithInfo() from source");
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
    lVar7 = (long)iVar8;
    uVar6 = 0;
    if (iVar8 != 0) {
      uVar6 = **(undefined8 **)(param_1 + 0x50);
    }
  }
  auVar11._8_8_ = lVar7;
  auVar11._0_8_ = uVar6;
  return auVar11;
}


// ===== 009939b4  FUN_009939b4 =====

undefined8 FUN_009939b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *local_38;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar2 = (undefined8 *)operator_new(0x3c68);
  *puVar2 = param_2;
  FUN_00658c48(puVar2 + 1);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  local_38 = puVar2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x48)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3 = puVar1 + 1;
    *puVar1 = puVar2;
  }
  else {
    puVar3 = (undefined8 *)FUN_00993d20(param_1 + 0x38,&local_38);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x40) = puVar3;
  lVar5 = (long)puVar3 - *(long *)(param_1 + 0x38) >> 3;
  FUN_00993e2c(lVar4,lVar5);
  FUN_00712464(lVar4 + 0x18,lVar5);
  uVar7 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
  uVar6 = (long)uVar7 >> 3;
  if (uVar6 <= *(ulong *)(param_1 + 0x44b8)) goto LAB_00993aa4;
  lVar4 = DAT_00d807e8;
  if (DAT_00d807e8 == 0) {
    lVar4 = FUN_006660d8("WebRTC.Audio.AudioMixer.NewHighestSourceCount",0x2d,1,0x14,0x14);
    FUN_00d0f5e0(0,lVar4,&DAT_00d807e8);
    if (lVar4 != 0) goto LAB_00993a94;
  }
  else {
LAB_00993a94:
    FUN_00666568(lVar4,uVar7 >> 3);
  }
  *(ulong *)(param_1 + 0x44b8) = uVar6;
LAB_00993aa4:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return 1;
}


// ===== 00993aec  FUN_00993aec =====

int FUN_00993aec(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar5 == puVar4) {
LAB_00993b4c:
    if (puVar5 != puVar4) {
      puVar1 = puVar5 + 1;
      if (puVar5 + 1 != puVar4) {
        do {
          puVar5 = puVar1;
          uVar3 = *puVar5;
          *puVar5 = 0;
          FUN_00993bd4(puVar5 + -1,uVar3);
          puVar1 = puVar5 + 1;
        } while (puVar5 + 1 != puVar4);
        puVar4 = *(undefined8 **)(param_1 + 0x40);
      }
      while( true ) {
        if (puVar5 == puVar4) {
          *(undefined8 **)(param_1 + 0x40) = puVar5;
          iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
          return iVar2;
        }
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) break;
        FUN_00993bd4(puVar4,0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    do {
      if (*(long *)*puVar5 == param_2) goto LAB_00993b4c;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar4);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00993bd4  FUN_00993bd4 =====

void FUN_00993bd4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  
  pvVar8 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar8 == (void *)0x0) {
    return;
  }
  pvVar9 = *(void **)((long)pvVar8 + 0x48);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    pvVar10 = *(void **)((long)pvVar9 + 8);
    if (pvVar10 != (void *)0x0) {
      pvVar3 = pvVar10;
      pvVar4 = *(void **)((long)pvVar9 + 0x10);
      if (pvVar10 != *(void **)((long)pvVar9 + 0x10)) {
        do {
          pvVar3 = (void *)((long)pvVar4 + -0x68);
          if (pvVar3 == (void *)0x0) {
LAB_00993d0c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar2 = *(void **)((long)pvVar4 + -0x60);
          if (pvVar2 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + -0x58);
            uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
            uVar6 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3e) - ((long)pvVar2 - (long)pvVar5))
                    >> 2;
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
              if (pvVar5 == (void *)0x0) goto LAB_00993d0c;
            }
            *(void **)((long)pvVar4 + -0x58) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar4 = pvVar3;
        } while (pvVar10 != pvVar3);
        pvVar3 = *(void **)((long)pvVar9 + 8);
      }
      *(void **)((long)pvVar9 + 0x10) = pvVar10;
      operator_delete(pvVar3);
    }
    operator_delete(pvVar9);
  }
  operator_delete(pvVar8);
  return;
}


// ===== 00993d20  FUN_00993d20 =====

undefined8 * FUN_00993d20(long *param_1,undefined8 *param_2)

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
    FUN_00993e14();
LAB_00993e10:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00993e10;
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


// ===== 00993e14  FUN_00993e14 =====

void FUN_00993e14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00993e2c  FUN_00993e2c =====

void FUN_00993e2c(undefined8 *param_1,ulong param_2)

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
  uVar9 = (long)__n >> 4;
  lVar6 = param_2 - uVar9;
  if (param_2 < uVar9 || lVar6 == 0) {
    if (param_2 < uVar9) {
      puVar5 = (undefined8 *)((long)__src + param_2 * 0x10);
      uVar9 = (ulong)(((long)puVar5 - (long)puVar4 << 0x3c) - ((long)puVar5 - (long)puVar4)) >> 4;
      uVar8 = (ulong)((long)puVar4 + (-0x10 - ((long)puVar4 << 0x3c))) >> 4;
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      if ((1 < uVar9) && ((((int)__src - (int)puVar4 | -(int)puVar4) & 0xfU) == 0)) {
        uVar9 = uVar9 & 0xffffffffffffffe;
        puVar4 = puVar4 + uVar9 * -2;
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      while (puVar4 != puVar5) {
        puVar4 = puVar4 + -2;
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
    if ((ulong)((long)uVar8 >> 4) < param_2) {
      if (param_2 >> 0x3c == 0) {
        uVar1 = (long)uVar8 >> 3;
        if ((ulong)((long)uVar8 >> 3) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 >> 0x3c == 0) {
          pvVar3 = operator_new(uVar1 * 0x10);
          lVar6 = lVar6 * 0x10;
          sVar2 = __n;
          if (lVar6 != 0) {
            sVar2 = lVar6 + __n;
            puVar4 = (undefined8 *)((long)pvVar3 + __n);
            do {
              if (puVar4 == (undefined8 *)0x0) goto LAB_00993fe0;
              lVar6 = lVar6 + -0x10;
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4 = puVar4 + 2;
            } while (lVar6 != 0);
          }
          __dest = (void *)((long)pvVar3 + uVar9 * -0x10 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = (long)pvVar3 + sVar2;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 0x10);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_00993ffc();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar7 = lVar6 * 0x10;
    puVar5 = puVar4;
    if (lVar7 != 0) {
      puVar5 = puVar4 + lVar6 * 2;
      do {
        if (puVar4 == (undefined8 *)0x0) {
LAB_00993fe0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar7 = lVar7 + -0x10;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (lVar7 != 0);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 00993ffc  FUN_00993ffc =====

void FUN_00993ffc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00994014  FUN_00994014 =====

void FUN_00994014(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  pvVar1 = (void *)param_2[3];
  if (pvVar1 == (void *)0x0) {
LAB_009940bc:
    pvVar1 = (void *)*param_2;
    if (pvVar1 == (void *)0x0) {
LAB_0099414c:
      operator_delete(param_2);
      return;
    }
    pvVar2 = (void *)param_2[1];
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
    do {
      if (pvVar2 == pvVar1) {
        param_2[1] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0099414c;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x10);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = (void *)param_2[4];
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
        param_2[4] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_009940bc;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00994164  FUN_00994164 =====

void FUN_00994164(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x44c0);
  return;
}


// ===== 0099418c  FUN_0099418c =====

bool FUN_0099418c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x898);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 009941e8  FUN_009941e8 =====

int FUN_009941e8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_00d3f978;
  FUN_00994408(param_1 + 0xb);
  lVar4 = param_1[10];
  param_1[10] = 0;
  if (lVar4 != 0) {
    FUN_00994014();
  }
  pvVar6 = (void *)param_1[7];
  if (pvVar6 != (void *)0x0) {
    pvVar5 = (void *)param_1[8];
    pvVar2 = pvVar6;
    if (pvVar6 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -8);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00993bd4(pvVar5,0);
      } while (pvVar5 != pvVar6);
      pvVar2 = (void *)param_1[7];
    }
    param_1[8] = pvVar6;
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 009942b0  FUN_009942b0 =====

void FUN_009942b0(void *param_1)

{
  FUN_009941e8();
  operator_delete(param_1);
  return;
}


// ===== 009942e0  FUN_009942e0 =====

bool FUN_009942e0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x44c0) == 1;
}


// ===== 009942fc  FUN_009942fc =====

int FUN_009942fc(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return 48000;
  }
  if (7 < (ulong)(param_3 * 4)) {
    lVar5 = param_3 * 4 - 4;
    piVar3 = param_2;
    piVar7 = param_2 + 1;
    iVar4 = *param_2;
    do {
      iVar2 = *piVar7;
      iVar1 = iVar4;
      if (iVar4 <= iVar2) {
        iVar1 = iVar2;
      }
      param_2 = piVar7;
      if (iVar2 <= iVar4) {
        param_2 = piVar3;
      }
      lVar5 = lVar5 + -4;
      piVar3 = param_2;
      piVar7 = piVar7 + 1;
      iVar4 = iVar1;
    } while (lVar5 != 0);
  }
  uVar6 = 4;
  piVar3 = (int *)&UNK_001f4bd0;
  do {
    uVar8 = uVar6 >> 1;
    piVar7 = piVar3 + uVar8 + 1;
    uVar6 = uVar6 + ~uVar8;
    if (*param_2 <= piVar3[uVar8]) {
      piVar7 = piVar3;
      uVar6 = uVar8;
    }
    piVar3 = piVar7;
  } while (uVar6 != 0);
  return *piVar7;
}


// ===== 00994380  FUN_00994380 =====

void FUN_00994380(void)

{
  return;
}


// ===== 00994388  FUN_00994388 =====

void FUN_00994388(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00994394  FUN_00994394 =====

void FUN_00994394(undefined8 *param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(1);
  FUN_0065b3d8(pvVar1,0);
  *param_1 = pvVar1;
  FUN_00997380(param_1 + 1,pvVar1,0x1e0,"AudioMixer",10);
  *(undefined1 *)(param_1 + 0x10b) = param_2;
  memset((void *)((long)param_1 + 0x85c),0,0x3c00);
  return;
}


// ===== 00994408  FUN_00994408 =====

void FUN_00994408(undefined8 *param_1)

{
  void *pvVar1;
  
  thunk_FUN_00997dbc(param_1 + 1);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0065b3e0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00994460  FUN_00994460 =====

void FUN_00994460(long param_1,long *param_2,long param_3,undefined1 *param_4,undefined8 param_5,
                 ulong param_6,uint *param_7)

{
  uint uVar1;
  void *pvVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  long *plVar8;
  short *psVar9;
  undefined1 *puVar10;
  float *pfVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  void *pvVar19;
  long *plVar20;
  size_t __n;
  float fVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auStack_b0 [16];
  void *local_a0;
  long lStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  short *local_80;
  undefined1 *local_78;
  
  uVar4 = (uint)param_5;
  puVar10 = param_4;
  if ((undefined1 *)0x7 < param_4) {
    puVar10 = (undefined1 *)0x8;
  }
  uVar15 = (ulong)(long)(int)uVar4 / 100;
  FUN_00658d78(param_7,0,0,uVar15,param_5,4,2,puVar10);
  if (param_3 == 0) {
    fVar27 = 1.0;
    param_7[2] = 0xffffffff;
    param_7[3] = 0xffffffff;
    param_7[0xe] = 0;
    param_7[0xf] = 0;
    if (param_6 < 2) {
      FUN_006592d8(param_7);
      return;
    }
  }
  else {
    lVar16 = param_3 << 4;
    *param_7 = *(uint *)*param_2;
    *(undefined8 *)(param_7 + 2) = *(undefined8 *)(*param_2 + 8);
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_80 = (short *)0x0;
    *(undefined8 *)(param_7 + 4) = *(undefined8 *)(*param_2 + 0x10);
    lVar14 = lVar16;
    plVar20 = param_2;
    if (lVar16 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      do {
        puVar12 = puStack_88;
        puVar17 = (uint *)*plVar20;
        uVar1 = *puVar17;
        if (*param_7 <= *puVar17) {
          uVar1 = *param_7;
        }
        *param_7 = uVar1;
        lVar18 = *(long *)(puVar17 + 4);
        if (*(long *)(param_7 + 4) <= *(long *)(puVar17 + 4)) {
          lVar18 = *(long *)(param_7 + 4);
        }
        *(long *)(param_7 + 4) = lVar18;
        lVar18 = *(long *)(param_7 + 2);
        if (*(long *)(param_7 + 2) <= *(long *)(puVar17 + 2)) {
          lVar18 = *(long *)(puVar17 + 2);
        }
        *(long *)(param_7 + 2) = lVar18;
        if (*(long *)(puVar17 + 0x10) == 0) {
          if (((DAT_00d60290 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d60290), iVar6 != 0)) {
            DAT_00d60288 = (long *)operator_new(0x18);
            DAT_00d60288[1] = 0;
            DAT_00d60288[2] = 0;
            *DAT_00d60288 = 0;
            FUN_0054ff1c(&DAT_00d60290);
          }
          lVar18 = *DAT_00d60288;
          if (*(long *)(puVar17 + 0x10) == 0) {
            plVar8 = DAT_00d60288;
            if (((DAT_00d60290 & 1) == 0) &&
               (iVar6 = FUN_0054fdd4(&DAT_00d60290), plVar8 = DAT_00d60288, iVar6 != 0)) {
              DAT_00d60288 = (long *)operator_new(0x18);
              DAT_00d60288[1] = 0;
              DAT_00d60288[2] = 0;
              *DAT_00d60288 = 0;
              FUN_0054ff1c(&DAT_00d60290);
              plVar8 = DAT_00d60288;
            }
          }
          else {
            plVar8 = (long *)(*(long *)(puVar17 + 0x10) + 8);
          }
        }
        else {
          plVar8 = (long *)(*(long *)(puVar17 + 0x10) + 8);
          lVar18 = *plVar8;
        }
        FUN_00994e88(&local_90,puVar12,lVar18,plVar8[1],
                     (plVar8[1] - lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5);
        puVar5 = puStack_88;
        puVar12 = local_90;
        lVar14 = lVar14 + -0x10;
        plVar20 = plVar20 + 2;
      } while (lVar14 != 0);
      if (local_90 == puStack_88) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)operator_new(0x20);
        *puVar7 = 0;
        *(undefined1 **)(puVar7 + 2) = puVar12;
        *(undefined1 **)(puVar7 + 4) = puVar5;
        *(short **)(puVar7 + 6) = local_80;
        local_90 = (undefined1 *)0x0;
        puStack_88 = (undefined1 *)0x0;
        local_80 = (short *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          FUN_00d0f740(1,puVar7);
        }
      }
    }
    pvVar19 = *(void **)(param_7 + 0x10);
    *(undefined4 **)(param_7 + 0x10) = puVar7;
    if ((pvVar19 != (void *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,pvVar19), iVar6 == 1)) {
      FUN_005da674((long)pvVar19 + 8);
      operator_delete(pvVar19);
    }
    FUN_005da674(&local_90);
    param_7[0xe] = 0;
    param_7[0xf] = 0;
    plVar20 = param_2;
    for (; lVar16 != 0; lVar16 = lVar16 + -0x10) {
      *(ulong *)(param_7 + 0xe) = *(ulong *)(param_7 + 0xe) | *(ulong *)(*plVar20 + 0x38);
      FUN_00995574(puVar10);
      plVar20 = plVar20 + 2;
    }
    fVar27 = 1.0;
    if (param_3 == 1) {
      fVar27 = *(float *)(param_2 + 1);
    }
    if ((param_6 < 2) && (fVar27 == 1.0)) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (short *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_006591e8(&local_90,param_7,*(undefined8 *)(*param_2 + 0x18),
                   *(undefined8 *)(*param_2 + 0x28));
      FUN_0065902c(auStack_b0,*param_2);
      memcpy(local_80,local_a0,lStack_98 << 1);
      return;
    }
  }
  if (0x1df < uVar15) {
    uVar15 = 0x1e0;
  }
  pvVar19 = (void *)(param_1 + 0x85c);
  if (param_4 != (undefined1 *)0x0) {
    __n = uVar15 << 2;
    pvVar2 = (void *)0x0;
    if (99 < uVar4) {
      pvVar2 = pvVar19;
    }
    memset(pvVar2,0,__n);
    if (param_4 != (undefined1 *)0x1) {
      pvVar2 = (void *)0x0;
      if (99 < uVar4) {
        pvVar2 = (void *)((long)pvVar19 + uVar15 * 4);
      }
      memset(pvVar2,0,__n);
      if (param_4 != (undefined1 *)0x2) {
        pvVar2 = (void *)0x0;
        if (99 < uVar4) {
          pvVar2 = (void *)((long)pvVar19 + uVar15 * 8);
        }
        memset(pvVar2,0,__n);
        if (param_4 != (undefined1 *)0x3) {
          pvVar2 = (void *)0x0;
          if (99 < uVar4) {
            pvVar2 = (void *)((long)pvVar19 + uVar15 * 0xc);
          }
          memset(pvVar2,0,__n);
          if (param_4 != (undefined1 *)0x4) {
            pvVar2 = (void *)0x0;
            if (99 < uVar4) {
              pvVar2 = (void *)((long)pvVar19 + uVar15 * 0x10);
            }
            memset(pvVar2,0,__n);
            if (param_4 != (undefined1 *)0x5) {
              pvVar2 = (void *)0x0;
              if (99 < uVar4) {
                pvVar2 = (void *)((long)pvVar19 + uVar15 * 0x14);
              }
              memset(pvVar2,0,__n);
              if (param_4 != (undefined1 *)0x6) {
                pvVar2 = (void *)0x0;
                if (99 < uVar4) {
                  pvVar2 = (void *)((long)pvVar19 + uVar15 * 0x18);
                }
                memset(pvVar2,0,__n);
                if (param_4 != (undefined1 *)0x7) {
                  pvVar2 = (void *)0x0;
                  if (99 < uVar4) {
                    pvVar2 = (void *)((long)pvVar19 + uVar15 * 0x1c);
                  }
                  memset(pvVar2,0,__n);
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_3 != 0) {
    lVar14 = 0;
    do {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (short *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_0065902c(&local_90,param_2[lVar14 * 2]);
      if (local_78 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/audio_mixer/frame_combiner.cc",0x60,"!frame_data.empty()",
                     &DAT_001f5fa0);
      }
      if (param_4 != (undefined1 *)0x0) {
        fVar21 = *(float *)(param_2 + lVar14 * 2 + 1);
        psVar9 = local_80;
        pfVar11 = (float *)(param_1 + 0x85c);
        uVar13 = uVar15;
        if (99 < uVar4) {
          do {
            sVar3 = *psVar9;
            uVar13 = uVar13 - 1;
            psVar9 = psVar9 + (long)puVar10;
            *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
            pfVar11 = pfVar11 + 1;
          } while (uVar13 != 0);
        }
        if (param_4 != (undefined1 *)0x1) {
          if (99 < uVar4) {
            psVar9 = local_80 + 1;
            pfVar11 = (float *)((long)pvVar19 + uVar15 * 4);
            uVar13 = uVar15;
            do {
              sVar3 = *psVar9;
              uVar13 = uVar13 - 1;
              psVar9 = psVar9 + (long)puVar10;
              *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
              pfVar11 = pfVar11 + 1;
            } while (uVar13 != 0);
          }
          if (param_4 != (undefined1 *)0x2) {
            if (99 < uVar4) {
              psVar9 = local_80 + 2;
              pfVar11 = (float *)((long)pvVar19 + uVar15 * 8);
              uVar13 = uVar15;
              do {
                sVar3 = *psVar9;
                uVar13 = uVar13 - 1;
                psVar9 = psVar9 + (long)puVar10;
                *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                pfVar11 = pfVar11 + 1;
              } while (uVar13 != 0);
            }
            if (param_4 != (undefined1 *)0x3) {
              if (99 < uVar4) {
                psVar9 = local_80 + 3;
                pfVar11 = (float *)((long)pvVar19 + uVar15 * 0xc);
                uVar13 = uVar15;
                do {
                  sVar3 = *psVar9;
                  uVar13 = uVar13 - 1;
                  psVar9 = psVar9 + (long)puVar10;
                  *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                  pfVar11 = pfVar11 + 1;
                } while (uVar13 != 0);
              }
              if (param_4 != (undefined1 *)0x4) {
                if (99 < uVar4) {
                  psVar9 = local_80 + 4;
                  pfVar11 = (float *)((long)pvVar19 + uVar15 * 0x10);
                  uVar13 = uVar15;
                  do {
                    sVar3 = *psVar9;
                    uVar13 = uVar13 - 1;
                    psVar9 = psVar9 + (long)puVar10;
                    *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                    pfVar11 = pfVar11 + 1;
                  } while (uVar13 != 0);
                }
                if (param_4 != (undefined1 *)0x5) {
                  if (99 < uVar4) {
                    psVar9 = local_80 + 5;
                    pfVar11 = (float *)((long)pvVar19 + uVar15 * 0x14);
                    uVar13 = uVar15;
                    do {
                      sVar3 = *psVar9;
                      uVar13 = uVar13 - 1;
                      psVar9 = psVar9 + (long)puVar10;
                      *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                      pfVar11 = pfVar11 + 1;
                    } while (uVar13 != 0);
                  }
                  if (param_4 != (undefined1 *)0x6) {
                    if (99 < uVar4) {
                      psVar9 = local_80 + 6;
                      pfVar11 = (float *)((long)pvVar19 + uVar15 * 0x18);
                      uVar13 = uVar15;
                      do {
                        sVar3 = *psVar9;
                        uVar13 = uVar13 - 1;
                        psVar9 = psVar9 + (long)puVar10;
                        *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                        pfVar11 = pfVar11 + 1;
                      } while (uVar13 != 0);
                    }
                    if ((param_4 != (undefined1 *)0x7) && (99 < uVar4)) {
                      psVar9 = local_80 + 7;
                      pfVar11 = (float *)((long)pvVar19 + uVar15 * 0x1c);
                      uVar13 = uVar15;
                      do {
                        sVar3 = *psVar9;
                        uVar13 = uVar13 - 1;
                        psVar9 = psVar9 + (long)puVar10;
                        *pfVar11 = *pfVar11 + fVar21 * (float)(int)sVar3;
                        pfVar11 = pfVar11 + 1;
                      } while (uVar13 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != param_3);
  }
  if ((*(char *)(param_1 + 0x858) == '\x01') &&
     ((1 < param_6 || (fVar27 != 1.0 && fVar27 < 1.0 == NAN(fVar27))))) {
    FUN_00997a70(param_1 + 8,uVar15);
    local_78 = (undefined1 *)0xaaaaaaaaaaaaaa01;
    local_90 = puVar10;
    puStack_88 = (undefined1 *)uVar15;
    local_80 = (short *)pvVar19;
    FUN_009973f4(param_1 + 8,&local_90);
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (short *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_006591e8(&local_90,param_7,uVar15,puVar10);
  if (local_90 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    do {
      pvVar2 = (void *)0x0;
      if (99 < uVar4) {
        pvVar2 = (void *)((long)pvVar19 + (long)puVar10 * uVar15 * 4);
      }
      if (puStack_88 != (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
        do {
          fVar27 = *(float *)((long)pvVar2 + (long)puVar12 * 4);
          auVar26._8_8_ = 0x7fffffff7fffffff;
          auVar26._0_8_ = 0x7fffffff7fffffff;
          lVar14 = (long)local_90 * (long)puVar12;
          puVar12 = puVar12 + 1;
          uVar22 = 0xfe00;
          uVar24 = 0x46ff;
          if (fVar27 == 32767.0 || fVar27 < 32767.0 != NAN(fVar27)) {
            uVar22 = SUB42(fVar27,0);
            uVar24 = (undefined2)((uint)fVar27 >> 0x10);
          }
          uVar23 = 0;
          uVar25 = 0xc700;
          if (-32768.0 <= (float)CONCAT22(uVar24,uVar22)) {
            uVar23 = uVar22;
            uVar25 = uVar24;
          }
          auVar26 = NEON_bsl(auVar26,ZEXT816(0x3f000000),ZEXT416(CONCAT22(uVar25,uVar23)),1);
          *(short *)((long)local_80 + (long)puVar10 * 2 + lVar14 * 2) =
               (short)(int)((float)CONCAT22(uVar25,uVar23) + auVar26._0_4_);
        } while (puVar12 < puStack_88);
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < local_90);
  }
  return;
}


// ===== 00994cf8  FUN_00994cf8 =====

void FUN_00994cf8(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    local_78 = *param_2;
    uStack_70 = 0x3f800000;
    if (local_60 < local_58) {
      if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar1 = local_60 + 2;
      local_60[1] = CONCAT44(uStack_6c,0x3f800000);
      *local_60 = local_78;
    }
    else {
      puVar1 = (undefined8 *)FUN_00995480(&local_68,&local_78);
    }
    param_2 = param_2 + 1;
    local_60 = puVar1;
  }
  puVar1 = (undefined8 *)0x0;
  if ((long)local_60 - (long)local_68 != 0) {
    puVar1 = local_68;
  }
  FUN_00994460(param_1,puVar1,(long)local_60 - (long)local_68 >> 4,param_4,param_5,param_6,param_7);
  if (local_68 != (undefined8 *)0x0) {
    uVar3 = (ulong)((long)local_60 + (-0x10 - ((long)local_60 << 0x3c))) >> 4;
    uVar2 = (ulong)(((long)local_68 - (long)local_60 << 0x3c) - ((long)local_68 - (long)local_60))
            >> 4;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    puVar1 = local_60;
    if ((1 < uVar2) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      puVar1 = local_60 + uVar2 * -2;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (puVar1 != local_68) {
      puVar1 = puVar1 + -2;
      if (puVar1 == (undefined8 *)0x0) {
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
  return;
}


// ===== 00994e88  FUN_00994e88 =====

undefined4 *
FUN_00994e88(long *param_1,undefined4 *param_2,undefined4 *param_3,long *param_4,long param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long local_80;
  undefined4 *local_78;
  long local_70;
  void *local_68;
  
  if (0 < param_5) {
    puVar12 = (undefined4 *)param_1[1];
    if ((param_1[2] - (long)puVar12 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
      lVar10 = *param_1;
      uVar9 = param_5 + ((long)puVar12 - lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (0x276276276276276 < uVar9) {
        FUN_005da784();
LAB_009952a4:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_80 = 0;
      local_78 = (undefined4 *)0x0;
      lVar7 = param_1[2] - lVar10 >> 3;
      local_70 = 0;
      uVar8 = lVar7 * -0x6276276276276276;
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        uVar8 = uVar9;
      }
      if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
        uVar8 = 0x276276276276276;
      }
      if (uVar8 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x276276276276276 < uVar8) goto LAB_009952a4;
        pvVar4 = operator_new(uVar8 * 0x68);
      }
      local_68 = (void *)((long)pvVar4 + uVar8 * 0x68);
      lVar7 = param_5 * 0x68;
      puVar11 = (undefined4 *)((long)pvVar4 + ((long)param_2 - lVar10));
      local_78 = puVar11;
      if (lVar7 != 0) {
        puVar13 = puVar11 + param_5 * 0x1a;
        do {
          if (puVar11 == (undefined4 *)0x0) goto LAB_0099528c;
          uVar3 = *param_3;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          *puVar11 = uVar3;
          pvVar4 = *(void **)(param_3 + 2);
          uVar9 = *(long *)(param_3 + 4) - (long)pvVar4;
          if (uVar9 != 0) {
            if ((long)uVar9 < 0) goto LAB_0099501c;
            pvVar5 = operator_new(uVar9);
            *(void **)(puVar11 + 2) = pvVar5;
            *(void **)(puVar11 + 4) = pvVar5;
            *(ulong *)(puVar11 + 6) = (long)pvVar5 + uVar9;
            memcpy(pvVar5,pvVar4,uVar9);
            *(ulong *)(puVar11 + 4) = (long)pvVar5 + uVar9;
          }
          uVar17 = *(undefined8 *)(param_3 + 0x10);
          uVar15 = *(undefined8 *)(param_3 + 0x16);
          uVar14 = *(undefined8 *)(param_3 + 0x14);
          lVar7 = lVar7 + -0x68;
          uVar20 = *(undefined8 *)(param_3 + 10);
          uVar19 = *(undefined8 *)(param_3 + 8);
          uVar24 = *(undefined8 *)(param_3 + 0xe);
          uVar23 = *(undefined8 *)(param_3 + 0xc);
          *(undefined8 *)(puVar11 + 0x12) = *(undefined8 *)(param_3 + 0x12);
          *(undefined8 *)(puVar11 + 0x10) = uVar17;
          *(undefined8 *)(puVar11 + 0x16) = uVar15;
          *(undefined8 *)(puVar11 + 0x14) = uVar14;
          *(undefined8 *)(puVar11 + 10) = uVar20;
          *(undefined8 *)(puVar11 + 8) = uVar19;
          *(undefined8 *)(puVar11 + 0xe) = uVar24;
          *(undefined8 *)(puVar11 + 0xc) = uVar23;
          puVar12 = param_3 + 0x18;
          param_3 = param_3 + 0x1a;
          *(undefined1 *)(puVar11 + 0x18) = *(undefined1 *)puVar12;
          puVar11 = puVar11 + 0x1a;
        } while (lVar7 != 0);
        puVar12 = (undefined4 *)param_1[1];
        puVar11 = puVar13;
      }
      pvVar4 = local_68;
      puVar13 = local_78;
      FUN_005db200(param_1,param_2,puVar12,puVar11);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar10 = (long)puVar13 + (*param_1 - (long)param_2);
      FUN_005db200(param_1,*param_1,param_2,lVar10);
      local_80 = *param_1;
      local_68 = (void *)param_1[2];
      *param_1 = lVar10;
      param_1[1] = (long)puVar11 + (lVar7 - (long)param_2);
      param_1[2] = (long)pvVar4;
      local_78 = (undefined4 *)local_80;
      local_70 = local_80;
      FUN_005db0f0(&local_80);
      param_2 = puVar13;
    }
    else {
      lVar10 = (long)puVar12 - (long)param_2;
      if ((lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5 < param_5) {
        puVar11 = puVar12;
        if ((long *)((long)param_3 + lVar10) != param_4) {
          puVar13 = puVar12;
          do {
            if (puVar13 == (undefined4 *)0x0) {
LAB_0099528c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar2 = (undefined4 *)(((long)param_3 - (long)param_2) + (long)puVar11);
            uVar3 = *puVar2;
            *(undefined8 *)(puVar13 + 4) = 0;
            *(undefined8 *)(puVar13 + 6) = 0;
            *(undefined8 *)(puVar13 + 2) = 0;
            *puVar13 = uVar3;
            pvVar4 = *(void **)(puVar2 + 2);
            uVar9 = *(long *)(puVar2 + 4) - (long)pvVar4;
            if (uVar9 != 0) {
              if ((long)uVar9 < 0) {
LAB_0099501c:
                    /* WARNING: Subroutine does not return */
                FUN_005da79c();
              }
              pvVar5 = operator_new(uVar9);
              *(void **)(puVar13 + 2) = pvVar5;
              *(void **)(puVar13 + 4) = pvVar5;
              *(ulong *)(puVar13 + 6) = (long)pvVar5 + uVar9;
              memcpy(pvVar5,pvVar4,uVar9);
              *(ulong *)(puVar13 + 4) = (long)pvVar5 + uVar9;
            }
            uVar17 = *(undefined8 *)(puVar2 + 0x10);
            uVar15 = *(undefined8 *)(puVar2 + 0x16);
            uVar14 = *(undefined8 *)(puVar2 + 0x14);
            uVar20 = *(undefined8 *)(puVar2 + 10);
            uVar19 = *(undefined8 *)(puVar2 + 8);
            uVar24 = *(undefined8 *)(puVar2 + 0xe);
            uVar23 = *(undefined8 *)(puVar2 + 0xc);
            puVar11 = puVar11 + 0x1a;
            *(undefined8 *)(puVar13 + 0x12) = *(undefined8 *)(puVar2 + 0x12);
            *(undefined8 *)(puVar13 + 0x10) = uVar17;
            *(undefined8 *)(puVar13 + 0x16) = uVar15;
            *(undefined8 *)(puVar13 + 0x14) = uVar14;
            *(undefined8 *)(puVar13 + 10) = uVar20;
            *(undefined8 *)(puVar13 + 8) = uVar19;
            *(undefined8 *)(puVar13 + 0xe) = uVar24;
            *(undefined8 *)(puVar13 + 0xc) = uVar23;
            *(undefined1 *)(puVar13 + 0x18) = *(undefined1 *)(puVar2 + 0x18);
            puVar13 = puVar13 + 0x1a;
          } while ((long *)(puVar2 + 0x1a) != param_4);
        }
        param_1[1] = (long)puVar11;
        if (0 < lVar10) {
          FUN_009952a8(param_1,param_2,puVar12,param_2 + param_5 * 0x1a);
          plVar6 = (long *)(param_3 + 4);
          puVar12 = param_2 + 2;
          do {
            puVar12[-2] = (int)plVar6[-2];
            if ((long *)(puVar12 + -2) != plVar6 + -2) {
              FUN_005e72f8(puVar12,plVar6[-1],*plVar6,*plVar6 - plVar6[-1] >> 2);
            }
            lVar18 = plVar6[6];
            lVar16 = plVar6[9];
            lVar7 = plVar6[8];
            plVar1 = plVar6 + 0xb;
            lVar22 = plVar6[3];
            lVar21 = plVar6[2];
            lVar26 = plVar6[5];
            lVar25 = plVar6[4];
            *(long *)(puVar12 + 0x10) = plVar6[7];
            *(long *)(puVar12 + 0xe) = lVar18;
            *(long *)(puVar12 + 0x14) = lVar16;
            *(long *)(puVar12 + 0x12) = lVar7;
            *(long *)(puVar12 + 8) = lVar22;
            *(long *)(puVar12 + 6) = lVar21;
            *(long *)(puVar12 + 0xc) = lVar26;
            *(long *)(puVar12 + 10) = lVar25;
            *(char *)(puVar12 + 0x16) = (char)plVar6[10];
            plVar6 = plVar6 + 0xd;
            puVar12 = puVar12 + 0x1a;
          } while (plVar1 != (long *)((long)param_3 + lVar10));
        }
      }
      else {
        FUN_009952a8(param_1,param_2,puVar12,param_2 + param_5 * 0x1a);
        plVar6 = (long *)(param_3 + 4);
        puVar12 = param_2 + 2;
        do {
          puVar12[-2] = (int)plVar6[-2];
          if ((long *)(puVar12 + -2) != plVar6 + -2) {
            FUN_005e72f8(puVar12,plVar6[-1],*plVar6,*plVar6 - plVar6[-1] >> 2);
          }
          lVar16 = plVar6[6];
          lVar7 = plVar6[9];
          lVar10 = plVar6[8];
          plVar1 = plVar6 + 0xb;
          lVar21 = plVar6[3];
          lVar18 = plVar6[2];
          lVar25 = plVar6[5];
          lVar22 = plVar6[4];
          *(long *)(puVar12 + 0x10) = plVar6[7];
          *(long *)(puVar12 + 0xe) = lVar16;
          *(long *)(puVar12 + 0x14) = lVar7;
          *(long *)(puVar12 + 0x12) = lVar10;
          *(long *)(puVar12 + 8) = lVar21;
          *(long *)(puVar12 + 6) = lVar18;
          *(long *)(puVar12 + 0xc) = lVar25;
          *(long *)(puVar12 + 10) = lVar22;
          *(char *)(puVar12 + 0x16) = (char)plVar6[10];
          plVar6 = plVar6 + 0xd;
          puVar12 = puVar12 + 0x1a;
        } while (plVar1 != (long *)(param_3 + param_5 * 0x1a));
      }
    }
  }
  return param_2;
}


// ===== 009952a8  FUN_009952a8 =====

void FUN_009952a8(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar9;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar8 = (undefined4 *)((long)param_2 + ((long)puVar7 - (long)param_4));
  puVar1 = puVar7;
  for (puVar9 = puVar8; puVar9 < param_3; puVar9 = puVar9 + 0x1a) {
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = *puVar9;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *puVar1 = uVar2;
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar9 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar9 + 4);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar9 + 6);
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0;
    *(undefined8 *)(puVar9 + 2) = 0;
    *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(puVar9 + 0x18);
    uVar12 = *(undefined8 *)(puVar9 + 0x10);
    uVar11 = *(undefined8 *)(puVar9 + 0x16);
    uVar10 = *(undefined8 *)(puVar9 + 0x14);
    uVar14 = *(undefined8 *)(puVar9 + 10);
    uVar13 = *(undefined8 *)(puVar9 + 8);
    uVar16 = *(undefined8 *)(puVar9 + 0xe);
    uVar15 = *(undefined8 *)(puVar9 + 0xc);
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar9 + 0x12);
    *(undefined8 *)(puVar1 + 0x10) = uVar12;
    *(undefined8 *)(puVar1 + 0x16) = uVar11;
    *(undefined8 *)(puVar1 + 0x14) = uVar10;
    *(undefined8 *)(puVar1 + 10) = uVar14;
    *(undefined8 *)(puVar1 + 8) = uVar13;
    *(undefined8 *)(puVar1 + 0xe) = uVar16;
    *(undefined8 *)(puVar1 + 0xc) = uVar15;
    puVar1 = puVar1 + 0x1a;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  if (puVar7 != param_4) {
    do {
      puVar9 = puVar8 + -0x1a;
      puVar7[-0x1a] = *puVar9;
      pvVar3 = *(void **)(puVar7 + -0x18);
      if (pvVar3 != (void *)0x0) {
        pvVar4 = *(void **)(puVar7 + -0x16);
        uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
        uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3e) - ((long)pvVar3 - (long)pvVar4)) >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar4 != pvVar3) {
          pvVar4 = (void *)((long)pvVar4 + -4);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)(puVar7 + -0x16) = pvVar3;
        operator_delete(pvVar3);
        *(undefined8 *)(puVar7 + -0x18) = 0;
        *(undefined8 *)(puVar7 + -0x16) = 0;
        *(undefined8 *)(puVar7 + -0x14) = 0;
      }
      *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
      *(undefined8 *)(puVar7 + -0x16) = *(undefined8 *)(puVar8 + -0x16);
      *(undefined8 *)(puVar7 + -0x14) = *(undefined8 *)(puVar8 + -0x14);
      *(undefined8 *)(puVar8 + -0x16) = 0;
      *(undefined8 *)(puVar8 + -0x14) = 0;
      *(undefined8 *)(puVar8 + -0x18) = 0;
      *(undefined1 *)(puVar7 + -2) = *(undefined1 *)(puVar8 + -2);
      uVar10 = *(undefined8 *)(puVar8 + -6);
      uVar12 = *(undefined8 *)(puVar8 + -8);
      uVar11 = *(undefined8 *)(puVar8 + -10);
      uVar14 = *(undefined8 *)(puVar8 + -0x10);
      uVar13 = *(undefined8 *)(puVar8 + -0x12);
      uVar16 = *(undefined8 *)(puVar8 + -0xc);
      uVar15 = *(undefined8 *)(puVar8 + -0xe);
      *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar8 + -4);
      *(undefined8 *)(puVar7 + -6) = uVar10;
      *(undefined8 *)(puVar7 + -8) = uVar12;
      *(undefined8 *)(puVar7 + -10) = uVar11;
      *(undefined8 *)(puVar7 + -0xc) = uVar16;
      *(undefined8 *)(puVar7 + -0xe) = uVar15;
      *(undefined8 *)(puVar7 + -0x10) = uVar14;
      *(undefined8 *)(puVar7 + -0x12) = uVar13;
      puVar8 = puVar9;
      puVar7 = puVar7 + -0x1a;
    } while (param_2 != puVar9);
  }
  return;
}


// ===== 00995480  FUN_00995480 =====

undefined8 * FUN_00995480(long *param_1,undefined8 *param_2)

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
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00993ffc();
LAB_00995570:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
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
    if (uVar5 >> 0x3c != 0) goto LAB_00995570;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00995574  FUN_00995574 =====

void FUN_00995574(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 != param_1) {
    if ((param_1 < 3) && (uVar3 < 3)) {
      if (param_1 < uVar3) {
        FUN_0092a164();
        return;
      }
      FUN_0092a210(param_1,param_2);
      return;
    }
    uVar1 = FUN_006594c0(param_1 & 0xffffffff);
    uVar2 = FUN_006594c0(*(undefined4 *)(param_2 + 0x28));
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0099565c(&local_80,uVar2,*(undefined8 *)(param_2 + 0x28),uVar1,param_1);
    FUN_009957f4(&local_80,param_2);
    FUN_009956d4(&local_80);
  }
  return;
}


// ===== 0099565c  FUN_0099565c =====

void FUN_0099565c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = param_2;
  param_1[1] = param_4;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00995c24(&local_50);
  bVar1 = FUN_00995e48(&local_50,param_1 + 6);
  *(byte *)(param_1 + 0x10) = bVar1 & 1;
  FUN_00995da0(&local_50);
  return;
}


// ===== 009956d4  FUN_009956d4 =====

void FUN_009956d4(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar7;
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar7 != *(undefined8 **)(param_1 + 0x20)) {
    do {
      puVar2 = puVar3 + -3;
      if (puVar2 == (undefined8 *)0x0) {
LAB_009957cc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        pvVar4 = (void *)puVar3[-2];
        uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
        uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3e) - ((long)pvVar1 - (long)pvVar4)) >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar4 != pvVar1) {
          pvVar4 = (void *)((long)pvVar4 + -4);
          if (pvVar4 == (void *)0x0) goto LAB_009957cc;
        }
        puVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar7 != puVar2);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  operator_delete(puVar2);
  return;
}


// ===== 009957f4  FUN_009957f4 =====

void FUN_009957f4(int *param_1,long param_2)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  short *psVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined2 uVar20;
  long lVar21;
  long *plVar22;
  float *pfVar23;
  void *__src;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  if (*param_1 == param_1[1]) {
    return;
  }
  if ((*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + 4)) &&
     (uVar15 = *(long *)(param_2 + 0x18) * *(ulong *)(param_1 + 4), 0x1e00 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/utility/channel_mixer.cc",0x3d,
                 "frame->samples_per_channel() * output_channels_ <= frame->max_16bit_samples()",
                 &DAT_001fb920,uVar15,0x1e00);
  }
  uVar15 = FUN_0065901c(param_2);
  if ((uVar15 & 1) != 0) {
    FUN_006592ec(param_2,param_1[1],*(undefined8 *)(param_1 + 4));
    return;
  }
  lVar9 = FUN_00659108(param_2);
  uVar15 = *(ulong *)(param_2 + 0x18);
  uVar24 = *(ulong *)(param_1 + 4);
  __src = *(void **)(param_1 + 0xc);
  uVar25 = uVar24 * uVar15;
  if (__src == (void *)0x0) {
    uVar15 = uVar25 * 2;
    if (uVar25 == 0xffffffffffffffff || (long)(uVar25 + 1) < 0 != SCARRY8(uVar25,1)) {
      uVar15 = 0xffffffffffffffff;
    }
    __src = operator_new__(uVar15);
    *(void **)(param_1 + 0xc) = __src;
  }
  else {
    if (uVar25 < *(ulong *)(param_1 + 0xe) || uVar25 - *(ulong *)(param_1 + 0xe) == 0)
    goto LAB_009958fc;
    uVar15 = uVar25 * 2;
    if (uVar25 == 0xffffffffffffffff || (long)(uVar25 + 1) < 0 != SCARRY8(uVar25,1)) {
      uVar15 = 0xffffffffffffffff;
    }
    pvVar10 = operator_new__(uVar15);
    *(void **)(param_1 + 0xc) = pvVar10;
    operator_delete__(__src);
    __src = *(void **)(param_1 + 0xc);
    uVar24 = *(ulong *)(param_1 + 4);
  }
  *(ulong *)(param_1 + 0xe) = uVar25;
  uVar15 = *(ulong *)(param_2 + 0x18);
LAB_009958fc:
  uVar25 = uVar24;
  if (uVar15 != 0) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      if (uVar24 != 0) {
        uVar15 = 0;
        do {
          uVar25 = *(ulong *)(param_1 + 2);
          if (uVar25 == 0) {
            fVar26 = 0.0;
          }
          else {
            if (((ulong)((*(long *)(param_1 + 8) - *(long *)(param_1 + 6) >> 3) *
                        -0x5555555555555555) <= uVar15) ||
               (plVar22 = (long *)(*(long *)(param_1 + 6) + uVar15 * 0x18), lVar1 = *plVar22,
               (ulong)(plVar22[1] - lVar1 >> 2) <= uVar25 - 1)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            if (uVar25 < 4) {
              fVar26 = 0.0;
              uVar11 = 0;
            }
            else {
              if (uVar25 < 0x10) {
                fVar26 = 0.0;
                uVar16 = 0;
              }
              else {
                puVar13 = (undefined8 *)(lVar9 + 0x10 + lVar17 * uVar25);
                fVar26 = 0.0;
                uVar11 = uVar25 & 0xfffffffffffffff0;
                uVar16 = uVar25 & 0xfffffffffffffff0;
                puVar14 = (undefined8 *)(lVar1 + 0x20);
                do {
                  psVar12 = (short *)(puVar13 + -2);
                  psVar2 = (short *)((long)puVar13 + -0xe);
                  psVar3 = (short *)((long)puVar13 + -0xc);
                  psVar4 = (short *)((long)puVar13 + -10);
                  psVar5 = (short *)(puVar13 + -1);
                  psVar6 = (short *)((long)puVar13 + -6);
                  psVar7 = (short *)((long)puVar13 + -4);
                  psVar8 = (short *)((long)puVar13 + -2);
                  uVar31 = puVar13[1];
                  uVar27 = *puVar13;
                  uVar16 = uVar16 - 0x10;
                  puVar13 = puVar13 + 4;
                  auVar32._0_4_ = (int)*psVar12;
                  auVar32._4_4_ = (int)*psVar2;
                  auVar32._8_4_ = (int)*psVar3;
                  auVar32._12_4_ = (int)*psVar4;
                  auVar30._0_4_ = (int)*psVar5;
                  auVar30._4_4_ = (int)*psVar6;
                  auVar30._8_4_ = (int)*psVar7;
                  auVar30._12_4_ = (int)*psVar8;
                  auVar32 = NEON_scvtf(auVar32,4);
                  auVar30 = NEON_scvtf(auVar30,4);
                  auVar33._0_4_ = (int)(short)uVar27;
                  auVar33._4_4_ = (int)(short)((ulong)uVar27 >> 0x10);
                  auVar33._8_4_ = (int)(short)((ulong)uVar27 >> 0x20);
                  auVar33._12_4_ = (int)(short)((ulong)uVar27 >> 0x30);
                  auVar33 = NEON_scvtf(auVar33,4);
                  auVar28._0_4_ = (int)(short)uVar31;
                  auVar28._4_4_ = (int)(short)((ulong)uVar31 >> 0x10);
                  auVar28._8_4_ = (int)(short)((ulong)uVar31 >> 0x20);
                  auVar28._12_4_ = (int)(short)((ulong)uVar31 >> 0x30);
                  auVar28 = NEON_scvtf(auVar28,4);
                  fVar26 = fVar26 + (float)puVar14[-4] * auVar32._0_4_ +
                           (float)((ulong)puVar14[-4] >> 0x20) * auVar32._4_4_ +
                           (float)puVar14[-3] * auVar32._8_4_ +
                           (float)((ulong)puVar14[-3] >> 0x20) * auVar32._12_4_ +
                           (float)puVar14[-2] * auVar30._0_4_ +
                           (float)((ulong)puVar14[-2] >> 0x20) * auVar30._4_4_ +
                           (float)puVar14[-1] * auVar30._8_4_ +
                           (float)((ulong)puVar14[-1] >> 0x20) * auVar30._12_4_ +
                           (float)*puVar14 * auVar33._0_4_ +
                           (float)((ulong)*puVar14 >> 0x20) * auVar33._4_4_ +
                           (float)puVar14[1] * auVar33._8_4_ +
                           (float)((ulong)puVar14[1] >> 0x20) * auVar33._12_4_ +
                           (float)puVar14[2] * auVar28._0_4_ +
                           (float)((ulong)puVar14[2] >> 0x20) * auVar28._4_4_ +
                           (float)puVar14[3] * auVar28._8_4_ +
                           (float)((ulong)puVar14[3] >> 0x20) * auVar28._12_4_;
                  puVar14 = puVar14 + 8;
                } while (uVar16 != 0);
                if (uVar25 == uVar11) goto LAB_00995b40;
                uVar16 = uVar11;
                if ((uVar25 & 0xc) == 0) goto LAB_00995b10;
              }
              uVar11 = uVar25 & 0xfffffffffffffffc;
              lVar21 = uVar16 - uVar11;
              puVar13 = (undefined8 *)(lVar1 + uVar16 * 4);
              puVar14 = (undefined8 *)(lVar9 + lVar17 * uVar25 + uVar16 * 2);
              do {
                uVar27 = *puVar14;
                lVar21 = lVar21 + 4;
                auVar29._0_4_ = (int)(short)uVar27;
                auVar29._4_4_ = (int)(short)((ulong)uVar27 >> 0x10);
                auVar29._8_4_ = (int)(short)((ulong)uVar27 >> 0x20);
                auVar29._12_4_ = (int)(short)((ulong)uVar27 >> 0x30);
                auVar30 = NEON_scvtf(auVar29,4);
                fVar26 = fVar26 + (float)*puVar13 * auVar30._0_4_ +
                         (float)((ulong)*puVar13 >> 0x20) * auVar30._4_4_ +
                         (float)puVar13[1] * auVar30._8_4_ +
                         (float)((ulong)puVar13[1] >> 0x20) * auVar30._12_4_;
                puVar13 = puVar13 + 2;
                puVar14 = puVar14 + 1;
              } while (lVar21 != 0);
              if (uVar25 == uVar11) goto LAB_00995b40;
            }
LAB_00995b10:
            lVar21 = uVar25 - uVar11;
            psVar12 = (short *)(lVar9 + lVar17 * uVar25 + uVar11 * 2);
            pfVar23 = (float *)(lVar1 + uVar11 * 4);
            do {
              lVar21 = lVar21 + -1;
              fVar26 = fVar26 + *pfVar23 * (float)(int)*psVar12;
              psVar12 = psVar12 + 1;
              pfVar23 = pfVar23 + 1;
            } while (lVar21 != 0);
          }
LAB_00995b40:
          uVar24 = uVar15 + uVar24 * uVar18;
          if (*(ulong *)(param_1 + 0xe) < uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../audio/utility/channel_mixer.cc",0x61,"index <= audio_vector_size_",
                         &DAT_001fb920);
          }
          uVar19 = 0;
          if (32767.0 < fVar26) {
            uVar19 = 2;
          }
          if (fVar26 < -32768.0 != NAN(fVar26)) {
            uVar19 = uVar19 + 1;
          }
          if (uVar19 < 2) {
            if (uVar19 == 0) {
              uVar20 = (undefined2)(int)fVar26;
            }
            else {
              uVar20 = 0x8000;
            }
          }
          else {
            if (uVar19 != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_0061ff28();
            }
            uVar20 = 0x7fff;
          }
          *(undefined2 *)((long)__src + uVar24 * 2) = uVar20;
          uVar15 = uVar15 + 1;
          uVar24 = *(ulong *)(param_1 + 4);
        } while (uVar15 < uVar24);
        uVar15 = *(ulong *)(param_2 + 0x18);
        uVar25 = uVar24;
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 2;
    } while (uVar18 < uVar15);
  }
  FUN_006592ec(param_2,param_1[1],uVar25);
  pvVar10 = (void *)FUN_006591a0(param_2);
  memcpy(pvVar10,__src,*(long *)(param_2 + 0x18) * *(long *)(param_2 + 0x28) * 2);
  return;
}


// ===== 00995c24  FUN_00995c24 =====

void FUN_00995c24(long param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  iVar1 = 10;
  if (param_4 != 0xe || param_2 != 0xc) {
    iVar1 = param_2;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar2 = 9;
  if (param_4 != 0xd || param_2 != 0xb) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  if (param_4 != 0x10) {
    if (param_2 != 0x1d) {
      FUN_00995cd4(param_2);
    }
    if (param_4 == 0x1d) {
      return;
    }
    FUN_00995cd4(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../audio/utility/channel_mixing_matrix.cc",0x52,
               "output_layout != CHANNEL_LAYOUT_STEREO_DOWNMIX",&DAT_00223e43,0x10,0x10);
}


// ===== 00995cd4  FUN_00995cd4 =====

void FUN_00995cd4(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/utility/channel_mixing_matrix.cc",0x2b,"layout != CHANNEL_LAYOUT_NONE"
                 ,&DAT_00223e43,0,0);
  }
  if (0x20 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/utility/channel_mixing_matrix.cc",0x2c,"layout <= CHANNEL_LAYOUT_MAX",
                 &DAT_00223e43,param_1,0x20);
  }
  if (param_1 == 0x1e) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/utility/channel_mixing_matrix.cc",0x2f,
                 "layout != CHANNEL_LAYOUT_STEREO_AND_KEYBOARD_MIC",&DAT_00223e43,0x1e,0x1e);
  }
  if (param_1 != 1) {
    FUN_006594a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../audio/utility/channel_mixing_matrix.cc",0x2d,
               "layout != CHANNEL_LAYOUT_UNSUPPORTED",&DAT_00223e43,1,1);
}


// ===== 00995da0  FUN_00995da0 =====

void FUN_00995da0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x20);
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
      *(void **)(param_1 + 0x20) = pvVar1;
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


// ===== 00995e48  FUN_00995e48 =====

undefined8 FUN_00995e48(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *__dest;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long lStack_68;
  
  *param_1 = (long)param_2;
  lVar21 = param_2[2];
  puVar19 = (undefined4 *)*param_2;
  iVar5 = *(int *)((long)param_1 + 0x14);
  if ((ulong)((lVar21 - (long)puVar19 >> 3) * -0x5555555555555555) < (ulong)(long)iVar5) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0062a9b4();
    }
    lVar15 = param_2[1];
    uVar20 = (long)iVar5 * 0x18;
    __dest = operator_new(uVar20);
    memcpy(__dest,puVar19,lVar15 - (long)puVar19);
    *param_2 = __dest;
    param_2[1] = (long)__dest + (lVar15 - (long)puVar19);
    param_2[2] = (void *)((long)__dest + uVar20);
    local_80 = puVar19;
    local_78 = puVar19;
    local_70 = puVar19;
    lStack_68 = lVar21;
    FUN_00997010(&local_80);
    iVar5 = *(int *)((long)param_1 + 0x14);
  }
  if (0 < iVar5) {
    iVar8 = 0;
    do {
      iVar5 = *(int *)((long)param_1 + 0xc);
      lVar21 = *param_1;
      local_78 = (undefined4 *)0x0;
      local_70 = (undefined4 *)0x0;
      local_80 = (undefined4 *)0x0;
      if (iVar5 != 0) {
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0062a99c();
        }
        uVar20 = (long)iVar5 * 4;
        local_80 = (undefined4 *)operator_new(uVar20);
        uVar12 = uVar20 - 4 >> 2;
        uVar20 = (ulong)-(long)local_80 >> 2;
        if (uVar12 <= (ulong)-(long)local_80 >> 2) {
          uVar20 = uVar12;
        }
        local_70 = local_80 + iVar5;
        puVar19 = local_80;
        if ((7 < uVar20) && ((-(int)local_80 & 3U) == 0)) {
          puVar18 = (undefined8 *)(local_80 + 4);
          uVar12 = uVar20 + 1 & 7;
          uVar2 = 8;
          if (uVar12 != 0) {
            uVar2 = uVar12;
          }
          lVar15 = ~uVar20 + uVar2;
          puVar19 = local_80 + ((uVar20 + 1) - uVar2);
          do {
            lVar15 = lVar15 + 8;
            puVar18[-1] = 0;
            puVar18[-2] = 0;
            puVar18[1] = 0;
            *puVar18 = 0;
            puVar18 = puVar18 + 4;
          } while (lVar15 != 0);
        }
        do {
          local_78 = local_80;
          if (puVar19 == (undefined4 *)0x0) goto LAB_00996350;
          puVar9 = puVar19 + 1;
          *puVar19 = 0;
          puVar19 = puVar9;
        } while (puVar9 != local_70);
      }
      puVar18 = *(undefined8 **)(lVar21 + 8);
      local_78 = local_70;
      if (puVar18 < *(undefined8 **)(lVar21 + 0x10)) {
        if (puVar18 == (undefined8 *)0x0) goto LAB_00996350;
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar10 = puVar18 + 3;
        puVar18[2] = 0;
        *puVar18 = local_80;
        puVar18[1] = local_70;
        local_80 = (undefined4 *)0x0;
        local_78 = (undefined4 *)0x0;
        puVar18[2] = local_70;
        local_70 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)FUN_00997120(lVar21,&local_80);
      }
      *(undefined8 **)(lVar21 + 8) = puVar10;
      if (local_80 != (undefined4 *)0x0) {
        uVar12 = (ulong)((long)local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
        uVar20 = (ulong)(((long)local_80 - (long)local_78 << 0x3e) -
                        ((long)local_80 - (long)local_78)) >> 2;
        if (uVar12 <= uVar20) {
          uVar20 = uVar12;
        }
        puVar19 = local_78;
        if ((1 < uVar20) && ((((int)local_80 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
          uVar20 = uVar20 & 0x3ffffffffffffffe;
          puVar19 = local_78 + -uVar20;
          do {
            uVar20 = uVar20 - 2;
          } while (uVar20 != 0);
        }
        while (puVar19 != local_80) {
          puVar19 = puVar19 + -1;
          if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_78 = local_80;
        operator_delete(local_80);
      }
      iVar5 = *(int *)((long)param_1 + 0x14);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  if (((int)param_1[1] == 0x1d) || ((int)param_1[2] == 0x1d)) {
    lVar21 = 0x14;
    if (*(int *)((long)param_1 + 0xc) <= iVar5) {
      lVar21 = 0xc;
    }
    uVar6 = *(uint *)((long)param_1 + lVar21);
    if (0 < (int)uVar6) {
      lVar21 = 0;
      uVar20 = 0;
      do {
        lVar15 = *(long *)*param_1;
        uVar12 = (((long *)*param_1)[1] - lVar15 >> 3) * -0x5555555555555555;
        if ((uVar12 < uVar20 || uVar12 - uVar20 == 0) ||
           (plVar13 = (long *)(lVar15 + lVar21), lVar15 = *plVar13,
           (ulong)(plVar13[1] - lVar15 >> 2) <= uVar20)) goto LAB_00996d40;
        *(undefined4 *)(lVar15 + uVar20 * 4) = 0x3f800000;
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x18;
      } while (uVar6 != uVar20);
    }
  }
  else {
    if (((int)param_1[1] == 2) && (iVar5 = FUN_006594a0(), 1 < iVar5)) {
      puVar18 = *(undefined8 **)*param_1;
      if (((undefined8 *)((undefined8 *)*param_1)[1] != puVar18) &&
         ((undefined4 *)puVar18[1] != (undefined4 *)*puVar18)) {
        *(undefined4 *)*puVar18 = 0x3f800000;
        lVar21 = *(long *)*param_1;
        if ((1 < (ulong)((((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555)) &&
           (*(undefined4 **)(lVar21 + 0x20) != *(undefined4 **)(lVar21 + 0x18))) {
          **(undefined4 **)(lVar21 + 0x18) = 0x3f800000;
          lVar21 = *(long *)*param_1;
          if ((ulong)((((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555) < 3) {
            return 1;
          }
          lVar15 = 0;
          uVar20 = 2;
          while (puVar19 = *(undefined4 **)(lVar21 + lVar15 + 0x30),
                *(undefined4 **)(lVar21 + lVar15 + 0x38) != puVar19) {
            *puVar19 = 0;
            uVar20 = uVar20 + 1;
            lVar15 = lVar15 + 0x18;
            lVar21 = *(long *)*param_1;
            if ((ulong)((((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555) <= uVar20) {
              return 1;
            }
          }
        }
      }
      goto LAB_00996d40;
    }
    iVar5 = 0;
    local_80 = (undefined4 *)((ulong)local_80 & 0xffffffff00000000);
    do {
      uVar6 = FUN_006594e8((int)param_1[1],iVar5);
      if (-1 < (int)uVar6) {
        uVar7 = FUN_006594e8((int)param_1[2],(ulong)local_80 & 0xffffffff);
        if ((int)uVar7 < 0) {
          puVar19 = (undefined4 *)param_1[4];
          if (puVar19 < (undefined4 *)param_1[5]) {
            if (puVar19 == (undefined4 *)0x0) {
LAB_00996350:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar19 = (int)local_80;
            param_1[4] = (long)(puVar19 + 1);
          }
          else {
            lVar21 = FUN_00997274(param_1 + 3,&local_80);
            param_1[4] = lVar21;
          }
        }
        else {
          lVar21 = *(long *)*param_1;
          uVar12 = (((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555;
          uVar20 = (ulong)uVar7;
          if ((uVar12 < uVar20 || uVar12 - uVar20 == 0) ||
             (plVar13 = (long *)(lVar21 + uVar20 * 0x18), lVar21 = *plVar13,
             (ulong)(plVar13[1] - lVar21 >> 2) <= (ulong)uVar6)) goto LAB_00996d40;
          *(undefined4 *)(lVar21 + (ulong)uVar6 * 4) = 0x3f800000;
        }
      }
      iVar5 = (int)local_80 + 1;
      local_80 = (undefined4 *)CONCAT44(local_80._4_4_,iVar5);
    } while (iVar5 < 0xb);
    piVar14 = (int *)param_1[3];
    piVar16 = (int *)param_1[4];
    piVar17 = piVar14;
    if (piVar14 == piVar16) {
      return 1;
    }
    do {
      if (*piVar17 == 0) {
        if (piVar17 != piVar16) {
          if ((int)param_1[2] == 2) {
            uVar22 = 0x3f000000;
            if (*(int *)((long)param_1 + 0xc) != 2) {
              uVar22 = 0x3f3504f3;
            }
          }
          else {
            uVar22 = 0x3f3504f3;
          }
          FUN_00996d5c(uVar22,param_1,0,2);
          FUN_00996d5c(uVar22,param_1,1,2);
          piVar14 = (int *)param_1[3];
          piVar16 = (int *)param_1[4];
        }
        break;
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar16);
    if (piVar14 != piVar16) {
      uVar20 = (long)piVar16 + (-4 - (long)piVar14);
      uVar6 = (uint)uVar20;
      piVar17 = piVar14;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar17 == 2) goto LAB_00996448;
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar17 = piVar17 + 2;
        while( true ) {
          if (piVar17[-2] == 2) {
            piVar17 = piVar17 + -2;
            goto LAB_00996448;
          }
          if (piVar17[-1] == 2) break;
          if (*piVar17 == 2) goto LAB_00996448;
          if (piVar17[1] == 2) {
            piVar17 = piVar17 + 1;
            goto LAB_00996448;
          }
          piVar1 = piVar17 + 2;
          piVar17 = piVar17 + 4;
          if (piVar1 == piVar16) goto LAB_009964e8;
        }
        piVar17 = piVar17 + -1;
LAB_00996448:
        if (piVar17 != piVar16) {
          uVar22 = 0x3f800000;
          if ((int)param_1[1] != 2) {
            uVar22 = 0x3f3504f3;
          }
          iVar5 = FUN_006594e8((int)param_1[1],2);
          iVar8 = FUN_006594e8((int)param_1[2],0);
          lVar21 = *(long *)*param_1;
          uVar20 = (((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555;
          if (uVar20 < (ulong)(long)iVar8 || uVar20 - (long)iVar8 == 0) goto LAB_00996d40;
          plVar13 = (long *)(lVar21 + (long)iVar8 * 0x18);
          lVar21 = *plVar13;
          if ((ulong)(plVar13[1] - lVar21 >> 2) <= (ulong)(long)iVar5) goto LAB_00996d40;
          *(undefined4 *)(lVar21 + (long)iVar5 * 4) = uVar22;
          FUN_00996d5c(uVar22,param_1,2,1);
          piVar14 = (int *)param_1[3];
          piVar16 = (int *)param_1[4];
        }
      }
    }
LAB_009964e8:
    if (piVar14 != piVar16) {
      uVar20 = (long)piVar16 + (-4 - (long)piVar14);
      uVar6 = (uint)uVar20;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar14 == 4) goto LAB_0099658c;
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar14 = piVar14 + 2;
        while( true ) {
          if (piVar14[-2] == 4) {
            piVar14 = piVar14 + -2;
            goto LAB_0099658c;
          }
          if (piVar14[-1] == 4) break;
          if (*piVar14 == 4) goto LAB_0099658c;
          if (piVar14[1] == 4) {
            piVar14 = piVar14 + 1;
            goto LAB_0099658c;
          }
          piVar17 = piVar14 + 2;
          piVar14 = piVar14 + 4;
          if (piVar17 == piVar16) goto LAB_0099669c;
        }
        piVar14 = piVar14 + -1;
LAB_0099658c:
        if (piVar14 != piVar16) {
          iVar5 = FUN_006594e8((int)param_1[2],9);
          if (iVar5 < 0) {
            iVar5 = FUN_006594e8((int)param_1[2],8);
            if (iVar5 < 0) {
              if ((int)param_1[2] < 3) {
                uVar22 = 0x3f3504f3;
                FUN_00996d5c(0x3f3504f3,param_1,4,2);
                uVar11 = 2;
              }
              else {
                uVar22 = 0x3f3504f3;
                FUN_00996d5c(0x3f3504f3,param_1,4,0);
                uVar11 = 1;
              }
            }
            else {
              uVar22 = 0x3f3504f3;
              FUN_00996d5c(0x3f3504f3,param_1,4,8);
              uVar11 = 8;
            }
          }
          else {
            iVar5 = FUN_006594e8((int)param_1[1],9);
            uVar22 = 0x3f3504f3;
            if (iVar5 == -1 || iVar5 + 1 < 0 != SCARRY4(iVar5,1)) {
              uVar22 = 0x3f800000;
            }
            FUN_00996d5c(uVar22,param_1,4,9);
            uVar11 = 10;
          }
          FUN_00996d5c(uVar22,param_1,5,uVar11);
        }
      }
    }
LAB_0099669c:
    piVar17 = (int *)param_1[3];
    piVar14 = (int *)param_1[4];
    if (piVar17 != piVar14) {
      uVar20 = (long)piVar14 + (-4 - (long)piVar17);
      uVar6 = (uint)uVar20;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar17 == 9) goto LAB_00996744;
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar17 = piVar17 + 2;
        while( true ) {
          if (piVar17[-2] == 9) {
            piVar17 = piVar17 + -2;
            goto LAB_00996744;
          }
          if (piVar17[-1] == 9) break;
          if (*piVar17 == 9) goto LAB_00996744;
          if (piVar17[1] == 9) {
            piVar17 = piVar17 + 1;
            goto LAB_00996744;
          }
          piVar16 = piVar17 + 2;
          piVar17 = piVar17 + 4;
          if (piVar16 == piVar14) goto LAB_00996854;
        }
        piVar17 = piVar17 + -1;
LAB_00996744:
        if (piVar17 != piVar14) {
          iVar5 = FUN_006594e8((int)param_1[2],4);
          if (iVar5 < 0) {
            iVar5 = FUN_006594e8((int)param_1[2],8);
            if (iVar5 < 0) {
              if ((int)param_1[2] < 3) {
                uVar22 = 0x3f3504f3;
                FUN_00996d5c(0x3f3504f3,param_1,9,2);
                uVar11 = 2;
              }
              else {
                uVar22 = 0x3f3504f3;
                FUN_00996d5c(0x3f3504f3,param_1,9,0);
                uVar11 = 1;
              }
            }
            else {
              uVar22 = 0x3f3504f3;
              FUN_00996d5c(0x3f3504f3,param_1,9,8);
              uVar11 = 8;
            }
          }
          else {
            iVar5 = FUN_006594e8((int)param_1[1],4);
            uVar22 = 0x3f3504f3;
            if (iVar5 == -1 || iVar5 + 1 < 0 != SCARRY4(iVar5,1)) {
              uVar22 = 0x3f800000;
            }
            FUN_00996d5c(uVar22,param_1,9,4);
            uVar11 = 5;
          }
          FUN_00996d5c(uVar22,param_1,10,uVar11);
        }
      }
    }
LAB_00996854:
    piVar17 = (int *)param_1[3];
    piVar14 = (int *)param_1[4];
    if (piVar17 != piVar14) {
      uVar20 = (long)piVar14 + (-4 - (long)piVar17);
      uVar6 = (uint)uVar20;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar17 == 8) goto LAB_009968fc;
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar17 = piVar17 + 2;
        while( true ) {
          if (piVar17[-2] == 8) {
            piVar17 = piVar17 + -2;
            goto LAB_009968fc;
          }
          if (piVar17[-1] == 8) break;
          if (*piVar17 == 8) goto LAB_009968fc;
          if (piVar17[1] == 8) {
            piVar17 = piVar17 + 1;
            goto LAB_009968fc;
          }
          piVar16 = piVar17 + 2;
          piVar17 = piVar17 + 4;
          if (piVar16 == piVar14) goto LAB_00996a38;
        }
        piVar17 = piVar17 + -1;
LAB_009968fc:
        if (piVar17 != piVar14) {
          iVar5 = FUN_006594e8((int)param_1[2],4);
          if (iVar5 < 0) {
            iVar5 = FUN_006594e8((int)param_1[2],9);
            if (iVar5 < 0) {
              if ((int)param_1[2] < 3) {
                uVar11 = 2;
              }
              else {
                FUN_00996f5c(0x3f3504f3,param_1,8,0);
                uVar11 = 1;
              }
            }
            else {
              FUN_00996f5c(0x3f3504f3,param_1,8,9);
              uVar11 = 10;
            }
          }
          else {
            iVar5 = FUN_006594e8((int)param_1[1],8);
            iVar8 = FUN_006594e8((int)param_1[2],4);
            lVar21 = *(long *)*param_1;
            uVar20 = (((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555;
            if (uVar20 < (ulong)(long)iVar8 || uVar20 - (long)iVar8 == 0) goto LAB_00996d40;
            plVar13 = (long *)(lVar21 + (long)iVar8 * 0x18);
            lVar21 = *plVar13;
            if ((ulong)(plVar13[1] - lVar21 >> 2) <= (ulong)(long)iVar5) goto LAB_00996d40;
            *(undefined4 *)(lVar21 + (long)iVar5 * 4) = 0x3f3504f3;
            uVar11 = 5;
          }
          FUN_00996d5c(0x3f3504f3,param_1,8,uVar11);
        }
      }
    }
LAB_00996a38:
    piVar17 = (int *)param_1[3];
    piVar14 = (int *)param_1[4];
    if (piVar17 != piVar14) {
      uVar20 = (long)piVar14 + (-4 - (long)piVar17);
      uVar6 = (uint)uVar20;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar17 == 6) goto LAB_00996ae0;
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar17 = piVar17 + 2;
        while( true ) {
          if (piVar17[-2] == 6) {
            piVar17 = piVar17 + -2;
            goto LAB_00996ae0;
          }
          if (piVar17[-1] == 6) break;
          if (*piVar17 == 6) goto LAB_00996ae0;
          if (piVar17[1] == 6) {
            piVar17 = piVar17 + 1;
            goto LAB_00996ae0;
          }
          piVar16 = piVar17 + 2;
          piVar17 = piVar17 + 4;
          if (piVar16 == piVar14) goto LAB_00996b50;
        }
        piVar17 = piVar17 + -1;
LAB_00996ae0:
        if (piVar17 != piVar14) {
          iVar5 = FUN_006594e8((int)param_1[2],0);
          if (iVar5 < 0) {
            FUN_00996d5c(0x3f3504f3,param_1,6,2);
            uVar11 = 2;
          }
          else {
            FUN_00996d5c(0x3f3504f3,param_1,6,0);
            uVar11 = 1;
          }
          FUN_00996d5c(0x3f3504f3,param_1,7,uVar11);
        }
      }
    }
LAB_00996b50:
    piVar17 = (int *)param_1[3];
    piVar14 = (int *)param_1[4];
    if (piVar17 != piVar14) {
      uVar20 = (long)piVar14 + (-4 - (long)piVar17);
      uVar6 = (uint)uVar20;
      if ((~uVar6 & 0xc) != 0) {
        uVar12 = (ulong)((uVar6 >> 2) + 1) & 3;
        do {
          if (*piVar17 == 3) goto LAB_00996bf8;
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 1;
        } while (uVar12 != 0);
      }
      if (0xb < uVar20) {
        piVar17 = piVar17 + 2;
        while( true ) {
          if (piVar17[-2] == 3) {
            piVar17 = piVar17 + -2;
            goto LAB_00996bf8;
          }
          if (piVar17[-1] == 3) break;
          if (*piVar17 == 3) goto LAB_00996bf8;
          if (piVar17[1] == 3) {
            piVar17 = piVar17 + 1;
            goto LAB_00996bf8;
          }
          piVar16 = piVar17 + 2;
          piVar17 = piVar17 + 4;
          if (piVar16 == piVar14) goto LAB_00996cb0;
        }
        piVar17 = piVar17 + -1;
LAB_00996bf8:
        if (piVar17 != piVar14) {
          iVar5 = FUN_006594e8((int)param_1[2],2);
          if (iVar5 < 0) {
            iVar5 = FUN_006594e8((int)param_1[1],3);
            iVar8 = FUN_006594e8((int)param_1[2],0);
            lVar21 = *(long *)*param_1;
            uVar20 = (((long *)*param_1)[1] - lVar21 >> 3) * -0x5555555555555555;
            if (uVar20 < (ulong)(long)iVar8 || uVar20 - (long)iVar8 == 0) {
LAB_00996d40:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            plVar13 = (long *)(lVar21 + (long)iVar8 * 0x18);
            lVar21 = *plVar13;
            if ((ulong)(plVar13[1] - lVar21 >> 2) <= (ulong)(long)iVar5) goto LAB_00996d40;
            *(undefined4 *)(lVar21 + (long)iVar5 * 4) = 0x3f3504f3;
            uVar11 = 1;
          }
          else {
            uVar11 = 2;
          }
          FUN_00996d5c(0x3f3504f3,param_1,3,uVar11);
        }
      }
    }
LAB_00996cb0:
    if (0 < (int)*(uint *)((long)param_1 + 0x14)) {
      uVar20 = 0;
      lVar21 = 8;
      do {
        if (0 < *(int *)((long)param_1 + 0xc)) {
          lVar15 = *(long *)*param_1;
          uVar12 = (((long *)*param_1)[1] - lVar15 >> 3) * -0x5555555555555555;
          if (uVar12 < uVar20 || uVar12 - uVar20 == 0) goto LAB_00996d40;
          plVar13 = (long *)(lVar15 + lVar21);
          pfVar3 = (float *)plVar13[-1];
          pfVar4 = (float *)*plVar13;
          if (pfVar4 == pfVar3) goto LAB_00996d40;
          if (*pfVar3 != 1.0) {
            return 0;
          }
          if (*(int *)((long)param_1 + 0xc) != 1) {
            if ((long)pfVar4 - (long)pfVar3 != 4) {
              return 0;
            }
            goto LAB_00996d40;
          }
        }
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x18;
      } while (*(uint *)((long)param_1 + 0x14) != uVar20);
    }
  }
  return 1;
}


// ===== 00996d5c  FUN_00996d5c =====

void FUN_00996d5c(undefined4 param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar4 = FUN_006594e8(*(undefined4 *)(param_2 + 1));
  iVar5 = FUN_006594e8(*(undefined4 *)(param_2 + 2),param_4);
  lVar2 = *(long *)*param_2;
  uVar10 = (((long *)*param_2)[1] - lVar2 >> 3) * -0x5555555555555555;
  if ((ulong)(long)iVar5 <= uVar10 && uVar10 - (long)iVar5 != 0) {
    plVar7 = (long *)(lVar2 + (long)iVar5 * 0x18);
    lVar2 = *plVar7;
    if ((ulong)(long)iVar4 < (ulong)(plVar7[1] - lVar2 >> 2)) {
      *(undefined4 *)(lVar2 + (long)iVar4 * 4) = param_1;
      piVar8 = (int *)param_2[3];
      piVar3 = (int *)param_2[4];
      if (piVar8 == piVar3) {
LAB_00996ea0:
        if (piVar8 != piVar3) {
          memmove(piVar8,piVar8 + 1,(long)piVar3 - (long)(piVar8 + 1));
          piVar8 = (int *)param_2[4];
          uVar9 = (ulong)((long)piVar8 + (-4 - ((long)piVar8 << 0x3e))) >> 2;
          uVar10 = (((long)piVar3 - (long)piVar8 << 0x3e) - ((long)piVar3 - (long)piVar8)) + 4U >> 2
          ;
          if (uVar9 <= uVar10) {
            uVar10 = uVar9;
          }
          if ((1 < uVar10) && ((-(int)piVar8 & 3U) == 0)) {
            uVar10 = uVar10 & 0x3ffffffffffffffe;
            piVar8 = piVar8 + -uVar10;
            do {
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
          }
          do {
            if (piVar8 == piVar3 + -1) {
              param_2[4] = piVar3 + -1;
              return;
            }
            piVar8 = piVar8 + -1;
          } while (piVar8 != (int *)0x0);
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      else {
        uVar10 = (long)piVar3 + (-4 - (long)piVar8);
        uVar6 = (uint)uVar10;
        if ((~uVar6 & 0xc) != 0) {
          uVar9 = (ulong)((uVar6 >> 2) + 1) & 3;
          do {
            if (*piVar8 == param_3) goto LAB_00996ea0;
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 1;
          } while (uVar9 != 0);
        }
        if (0xb < uVar10) {
          piVar8 = piVar8 + 2;
          do {
            if (piVar8[-2] == param_3) {
              piVar8 = piVar8 + -2;
              goto LAB_00996ea0;
            }
            if (piVar8[-1] == param_3) {
              piVar8 = piVar8 + -1;
              goto LAB_00996ea0;
            }
            if (*piVar8 == param_3) goto LAB_00996ea0;
            if (piVar8[1] == param_3) {
              piVar8 = piVar8 + 1;
              goto LAB_00996ea0;
            }
            piVar1 = piVar8 + 2;
            piVar8 = piVar8 + 4;
          } while (piVar1 != piVar3);
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00996f5c  FUN_00996f5c =====

void FUN_00996f5c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar2 = FUN_006594e8(*(undefined4 *)(param_2 + 1));
  iVar3 = FUN_006594e8(*(undefined4 *)(param_2 + 2),param_4);
  lVar1 = *(long *)*param_2;
  uVar5 = (((long *)*param_2)[1] - lVar1 >> 3) * -0x5555555555555555;
  if ((ulong)(long)iVar3 <= uVar5 && uVar5 - (long)iVar3 != 0) {
    plVar4 = (long *)(lVar1 + (long)iVar3 * 0x18);
    lVar1 = *plVar4;
    if ((ulong)(long)iVar2 < (ulong)(plVar4[1] - lVar1 >> 2)) {
      *(undefined4 *)(lVar1 + (long)iVar2 * 4) = param_1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00997010  FUN_00997010 =====

void FUN_00997010(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  while( true ) {
    puVar3 = puVar2;
    if (puVar1 == puVar3) {
      param_1[2] = puVar3;
      if ((void *)*param_1 == (void *)0x0) {
        return;
      }
      operator_delete((void *)*param_1);
      return;
    }
    puVar2 = puVar3 + -3;
    if (puVar2 == (undefined8 *)0x0) break;
    pvVar4 = (void *)*puVar2;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)puVar3[-2];
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
        if (pvVar5 == (void *)0x0) goto LAB_009970cc;
      }
      puVar3[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
LAB_009970cc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00997120  FUN_00997120 =====

undefined8 * FUN_00997120(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  undefined8 *local_48;
  long local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0062a9b4();
  }
  local_50 = 0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0x18);
  }
  local_38 = (void *)((long)pvVar2 + uVar5 * 0x18);
  local_48 = (undefined8 *)((long)pvVar2 + lVar6);
  if (local_48 != (undefined8 *)0x0) {
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    *local_48 = *param_2;
    local_48[1] = param_2[1];
    local_48[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar1 = local_48 + 3;
    __n = param_1[1] - *param_1;
    pvVar2 = (void *)((long)local_48 - __n);
    memcpy(pvVar2,(void *)*param_1,__n);
    local_50 = *param_1;
    lVar6 = param_1[2];
    *param_1 = (long)pvVar2;
    param_1[1] = (long)puVar1;
    param_1[2] = (long)local_38;
    local_48 = (undefined8 *)local_50;
    local_40 = local_50;
    local_38 = (void *)lVar6;
    FUN_00997010(&local_50);
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00997274  FUN_00997274 =====

undefined4 * FUN_00997274(long *param_1,undefined4 *param_2)

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
    FUN_00997368();
LAB_00997364:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
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
    if (uVar5 >> 0x3e != 0) goto LAB_00997364;
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


// ===== 00997368  FUN_00997368 =====

void FUN_00997368(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00997380  FUN_00997380 =====

void FUN_00997380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00997a94(param_1,param_2,param_4,param_5);
  FUN_00998040(param_1 + 0x58,param_3,param_2);
  *(undefined8 *)(param_1 + 0x70) = param_2;
  memset((void *)(param_1 + 0x78),0,0x7d4);
  *(undefined4 *)(param_1 + 0x84c) = 0x3f800000;
  return;
}


// ===== 009973ec  thunk_FUN_00997dbc =====

void thunk_FUN_00997dbc(void)

{
  FUN_00997dbc();
  return;
}


// ===== 009973f4  FUN_009973f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009973f4(long param_1,undefined1 (*param_2) [16])

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float __x;
  float fVar36;
  float fVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar44;
  int iVar45;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fStack_168;
  float fStack_164;
  float fStack_108;
  float fStack_104;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  local_d8 = 0;
  uStack_e8 = SUB168(*param_2,8);
  local_f0 = SUB168(*param_2,0);
  if (param_2[1][8] == '\x01') {
    local_e0 = *(undefined8 *)param_2[1];
    local_d8 = 1;
  }
  else {
    if (param_2[1][8] != '\0') goto LAB_00997a1c;
    local_e0 = *(undefined8 *)param_2[1];
  }
  uStack_b8 = 0xffffffffffffffff;
  local_c0 = 0xffffffffffffffff;
  local_a8 = 0xffffffffffffffff;
  local_b0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  local_a0 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  local_90 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  local_d0 = 0xffffffffffffffff;
  FUN_0099812c(&local_d0,param_1 + 0x58,&local_f0);
  puVar27 = (undefined4 *)(param_1 + 0x78);
  *puVar27 = *(undefined4 *)(param_1 + 0x84c);
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x7c) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x80) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x84) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x88) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x8c) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x90) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x94) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x98) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0x9c) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xa0) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xa4) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xa8) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xac) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xb0) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xb4) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xb8) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xbc) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xc0) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 0xc4) = uVar31;
  uVar31 = FUN_00997e48(param_1);
  *(undefined4 *)(param_1 + 200) = uVar31;
  uVar22 = *(ulong *)(*param_2 + 8);
  uVar29 = uVar22 / 0x14;
  pfVar2 = (float *)0x0;
  if (uVar22 != 0) {
    pfVar2 = (float *)(param_1 + 0xcc);
  }
  if (uVar22 % 0x14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001fed90,uVar22 % 0x14,0,uVar22,
                 " is not evenly divisible by ",0x14);
  }
  fVar46 = *(float *)(param_1 + 0x78);
  fVar36 = *(float *)(param_1 + 0x7c);
  iVar28 = (int)uVar29;
  if ((uVar22 != 0) && (fVar46 != fVar36 && fVar46 < fVar36 == (NAN(fVar46) || NAN(fVar36)))) {
    if ((ulong)(long)iVar28 <= uVar22) {
      uVar22 = (long)iVar28;
    }
    pfVar16 = (float *)0x0;
    if (uVar29 << 0x20 != 0) {
      pfVar16 = pfVar2;
    }
    if (0 < (int)uVar22) {
      fVar32 = (float)(uVar22 & 0xffffffff);
      fVar37 = fVar46 - fVar36;
      uVar30 = uVar22 & 0x7fffffff;
      if (uVar30 < 4) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar22 & 0x7ffffffc;
        auVar41._8_8_ = _UNK_001f3f68;
        auVar41._0_8_ = _DAT_001f3f60;
        uVar17 = uVar22;
        pfVar20 = pfVar16;
        do {
          auVar43 = NEON_ucvtf(auVar41,4);
          auVar42 = NEON_fmov(0x3f800000,4);
          fVar35 = powf(auVar42._4_4_ - auVar43._4_4_ / fVar32,8.0);
          fVar33 = powf(__x,8.0);
          powf(fStack_108,8.0);
          fVar34 = powf(fStack_104,8.0);
          iVar38 = auVar41._8_4_;
          uVar17 = uVar17 - 4;
          pfVar20[4] = fStack_168 + fVar37 * 0.0;
          pfVar20[5] = fStack_164 + fVar34 * fVar37;
          *pfVar20 = fVar36 + fVar33 * fVar37;
          pfVar20[1] = fVar36 + fVar35 * fVar37;
          auVar41._12_4_ = auVar41._12_4_ + 4;
          auVar41._8_4_ = iVar38 + 4;
          auVar41._4_4_ = (int)(auVar42._12_4_ - auVar43._12_4_ / fVar32) + 4;
          auVar41._0_4_ = (int)(auVar42._8_4_ - auVar43._8_4_ / fVar32) + 4;
          pfVar20 = pfVar20 + 4;
        } while (uVar17 != 0);
        if (uVar30 == uVar22) goto LAB_00997760;
      }
      do {
        fVar35 = powf(1.0 - (float)(uVar22 & 0xffffffff) / fVar32,8.0);
        pfVar16[uVar22] = fVar36 + fVar37 * fVar35;
        uVar22 = uVar22 + 1;
      } while (uVar30 != uVar22);
    }
  }
LAB_00997760:
  uVar15 = _UNK_001f3f68;
  uVar14 = _DAT_001f3f60;
  uVar30 = uVar29 & 0x7fffffff;
  lVar23 = 0;
  uVar22 = (ulong)(fVar46 != fVar36 && fVar46 < fVar36 == (NAN(fVar46) || NAN(fVar36)));
  lVar25 = uVar29 * 4;
  if (fVar46 == fVar36 || fVar46 < fVar36 != (NAN(fVar46) || NAN(fVar36))) {
    lVar25 = 0;
  }
  lVar24 = uVar29 * uVar22;
  lVar26 = lVar24 << 0x20;
  do {
    uVar17 = uVar22 + 1;
    if (0 < iVar28) {
      fVar36 = (float)puVar27[uVar22];
      fVar46 = ((float)puVar27[uVar17] - fVar36) / (float)iVar28;
      if ((uVar30 < 8) ||
         (lVar18 = (long)((lVar25 + uVar29 * 4 * lVar23) * 0x40000000) >> 0x1e,
         (long)((lVar18 + (uVar30 - 1) * 4) * 0x40000000) >> 0x1e < lVar18 ||
         uVar30 - 1 >> 0x20 != 0)) {
        uVar22 = 0;
      }
      else {
        auVar43._8_8_ = uVar15;
        auVar43._0_8_ = uVar14;
        uVar22 = uVar29 & 0x7ffffff8;
        lVar18 = lVar26;
        do {
          auVar42._0_4_ = auVar43._0_4_ + 4;
          iVar38 = auVar43._4_4_;
          auVar42._4_4_ = iVar38 + 4;
          iVar44 = auVar43._8_4_;
          auVar42._8_4_ = iVar44 + 4;
          iVar45 = auVar43._12_4_;
          auVar42._12_4_ = iVar45 + 4;
          auVar48 = NEON_ucvtf(auVar43,4);
          pfVar16 = (float *)((long)pfVar2 + (lVar18 >> 0x1e));
          auVar43._0_4_ = auVar43._0_4_ + 8;
          auVar43._4_4_ = iVar38 + 8;
          auVar43._8_4_ = iVar44 + 8;
          auVar43._12_4_ = iVar45 + 8;
          uVar22 = uVar22 - 8;
          lVar18 = lVar18 + 0x800000000;
          auVar41 = NEON_ucvtf(auVar42,4);
          pfVar16[4] = fVar36 + auVar48._8_4_ * fVar46;
          pfVar16[5] = fVar36 + auVar48._12_4_ * fVar46;
          *pfVar16 = fVar36 + auVar48._0_4_ * fVar46;
          pfVar16[1] = fVar36 + auVar48._4_4_ * fVar46;
          pfVar16[8] = fVar36 + auVar41._8_4_ * fVar46;
          pfVar16[9] = fVar36 + auVar41._12_4_ * fVar46;
          pfVar16[4] = fVar36 + auVar41._0_4_ * fVar46;
          pfVar16[5] = fVar36 + auVar41._4_4_ * fVar46;
        } while (uVar22 != 0);
        uVar22 = uVar29 & 0x7ffffff8;
        if (uVar30 == (uVar29 & 0x7ffffff8)) goto LAB_009977ac;
      }
      lVar18 = (ulong)(uint)((int)uVar22 + (int)lVar24) << 0x20;
      do {
        uVar4 = uVar22 & 0xffffffff;
        lVar21 = lVar18 >> 0x1e;
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 0x100000000;
        *(float *)((long)pfVar2 + lVar21) = fVar36 + fVar46 * (float)uVar4;
      } while (uVar30 != uVar22);
    }
LAB_009977ac:
    lVar23 = lVar23 + 1;
    lVar26 = lVar26 + (uVar29 << 0x20);
    lVar24 = lVar24 + uVar29;
    uVar22 = uVar17;
  } while (uVar17 != 0x14);
  lVar23 = *(long *)*param_2;
  if (lVar23 != 0) {
    bVar3 = param_2[1][8];
    if (1 < bVar3) {
LAB_00997a1c:
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    uVar22 = *(ulong *)(*param_2 + 8);
    lVar26 = *(long *)param_2[1];
    auVar48._8_4_ = 0xc7000000;
    auVar48._0_8_ = 0xc7000000c7000000;
    auVar48._12_4_ = 0xc7000000;
    lVar25 = 0;
    uVar29 = uVar22 & 0x7fffffff;
    uVar30 = uVar29 - 1;
    do {
      if (bVar3 == 0) {
        pfVar16 = *(float **)(lVar26 + lVar25 * 8);
      }
      else {
        pfVar16 = (float *)(lVar26 + lVar25 * uVar22 * 4);
      }
      pfVar20 = (float *)0x0;
      if (uVar22 != 0) {
        pfVar20 = pfVar16;
      }
      if (0 < (int)uVar22) {
        uVar17 = 0;
        if ((0xb < uVar29) &&
           (pfVar20 <= pfVar20 + uVar30 &&
            ((uVar30 & 0xc000000000000000) == 0 && pfVar2 <= pfVar2 + uVar30))) {
          if ((pfVar20 < pfVar2 + uVar29) && (pfVar2 < pfVar20 + uVar29)) {
            uVar17 = 0;
          }
          else {
            pfVar16 = pfVar20 + 4;
            pfVar19 = pfVar2 + 4;
            uVar17 = uVar22 & 0x7ffffff8;
            do {
              pfVar1 = pfVar19 + -4;
              pfVar8 = pfVar19 + -3;
              pfVar9 = pfVar19 + -2;
              pfVar10 = pfVar19 + -1;
              fVar36 = *pfVar19;
              pfVar11 = pfVar19 + 1;
              pfVar12 = pfVar19 + 2;
              pfVar13 = pfVar19 + 3;
              uVar17 = uVar17 - 8;
              pfVar19 = pfVar19 + 8;
              auVar39._0_4_ = pfVar16[-4] * *pfVar1;
              auVar39._4_4_ = pfVar16[-3] * *pfVar8;
              auVar39._8_4_ = pfVar16[-2] * *pfVar9;
              auVar39._12_4_ = pfVar16[-1] * *pfVar10;
              auVar40._0_4_ = *pfVar16 * fVar36;
              auVar40._4_4_ = pfVar16[1] * *pfVar11;
              auVar40._8_4_ = pfVar16[2] * *pfVar12;
              auVar40._12_4_ = pfVar16[3] * *pfVar13;
              auVar47._8_4_ = 0x46fffe00;
              auVar47._0_8_ = 0x46fffe0046fffe00;
              auVar47._12_4_ = 0x46fffe00;
              auVar41 = NEON_fcmge(auVar39,auVar47,4);
              auVar5._8_4_ = 0x46fffe00;
              auVar5._0_8_ = 0x46fffe0046fffe00;
              auVar5._12_4_ = 0x46fffe00;
              auVar43 = NEON_fcmge(auVar40,auVar5,4);
              auVar47 = NEON_fcmge(auVar48,auVar39,4);
              auVar6._8_4_ = 0x46fffe00;
              auVar6._0_8_ = 0x46fffe0046fffe00;
              auVar6._12_4_ = 0x46fffe00;
              auVar41 = NEON_bit(auVar39,auVar6,auVar41,1);
              auVar42 = NEON_fcmge(auVar48,auVar40,4);
              auVar7._8_4_ = 0x46fffe00;
              auVar7._0_8_ = 0x46fffe0046fffe00;
              auVar7._12_4_ = 0x46fffe00;
              auVar43 = NEON_bit(auVar40,auVar7,auVar43,1);
              auVar41 = NEON_bit(auVar41,auVar48,auVar47,1);
              auVar43 = NEON_bit(auVar43,auVar48,auVar42,1);
              *(long *)(pfVar16 + -2) = auVar41._8_8_;
              *(long *)(pfVar16 + -4) = auVar41._0_8_;
              *(long *)(pfVar16 + 2) = auVar43._8_8_;
              *(long *)pfVar16 = auVar43._0_8_;
              pfVar16 = pfVar16 + 8;
            } while (uVar17 != 0);
            uVar17 = uVar22 & 0x7ffffff8;
            if (uVar29 == (uVar22 & 0x7ffffff8)) goto LAB_009978ec;
          }
        }
        lVar24 = uVar29 - uVar17;
        pfVar16 = pfVar20 + uVar17;
        pfVar20 = pfVar2 + uVar17;
        do {
          fVar46 = *pfVar16 * *pfVar20;
          fVar36 = 32767.0;
          if (fVar46 < 32767.0 != NAN(fVar46)) {
            fVar36 = fVar46;
          }
          fVar32 = -32768.0;
          if (-32768.0 < fVar46) {
            fVar32 = fVar36;
          }
          lVar24 = lVar24 + -1;
          *pfVar16 = fVar32;
          pfVar16 = pfVar16 + 1;
          pfVar20 = pfVar20 + 1;
        } while (lVar24 != 0);
      }
LAB_009978ec:
      lVar25 = lVar25 + 1;
    } while (lVar25 != lVar23);
  }
  *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 200);
  return;
}


// ===== 00997a54  FUN_00997a54 =====

void FUN_00997a54(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  return;
}


// ===== 00997a70  FUN_00997a70 =====

void FUN_00997a70(long param_1)

{
  FUN_009980b8(param_1 + 0x58);
  return;
}


// ===== 00997a7c  FUN_00997a7c =====

void FUN_00997a7c(long param_1)

{
  FUN_00998398(param_1 + 0x58);
  return;
}


// ===== 00997a88  FUN_00997a88 =====

undefined4 FUN_00997a88(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


// ===== 00997a94  FUN_00997a94 =====

/* WARNING: Removing unreachable block (ram,0x00997d7c) */
/* WARNING: Removing unreachable block (ram,0x00997d94) */

void FUN_00997a94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined5 uVar9;
  undefined3 uVar10;
  undefined5 uVar11;
  undefined8 uVar12;
  char local_c0 [5];
  char acStack_bb [3];
  char acStack_b8 [5];
  char local_b3;
  undefined2 uStack_b2;
  byte bStack_a9;
  char local_a8 [5];
  char acStack_a3 [3];
  char acStack_a0 [5];
  char local_9b;
  undefined2 uStack_9a;
  byte bStack_91;
  char local_90 [5];
  char acStack_8b [3];
  char acStack_88 [5];
  char local_83;
  undefined2 uStack_82;
  byte bStack_79;
  char local_78 [5];
  char acStack_73 [3];
  char acStack_70 [5];
  char local_6b;
  undefined2 uStack_6a;
  byte bStack_61;
  
  uVar11 = s_WebRTC_Audio__001aa12f._8_5_;
  uVar10 = s_WebRTC_Audio__001aa12f._5_3_;
  uVar9 = s_WebRTC_Audio__001aa12f._0_5_;
  bStack_61 = 0xd;
  if (("WebRTC.Audio." < local_78) || (&local_6b < "ebRTC.Audio.")) {
    local_6b = '\0';
    local_78 = (char  [5])s_WebRTC_Audio__001aa12f._0_5_;
    acStack_73 = (char  [3])s_WebRTC_Audio__001aa12f._5_3_;
    acStack_70 = (char  [5])s_WebRTC_Audio__001aa12f._8_5_;
    FUN_00547cac(local_78,param_3,param_4);
    FUN_00547cac(local_78,".FixedDigitalGainCurveRegion.Identity",0x25);
    bStack_79 = 0xd;
    uVar1 = CONCAT26(uStack_6a,CONCAT15(local_6b,acStack_70));
    pcVar5 = (char *)CONCAT35(acStack_73,local_78);
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      pcVar5 = local_78;
    }
    if (("WebRTC.Audio." < local_90) || (&local_83 < "ebRTC.Audio.")) {
      local_90 = (char  [5])uVar9;
      acStack_8b = (char  [3])uVar10;
      acStack_88 = (char  [5])uVar11;
      local_83 = '\0';
      FUN_00547cac(local_90,param_3,param_4);
      FUN_00547cac(local_90,".FixedDigitalGainCurveRegion.Knee",0x21);
      bStack_91 = 0xd;
      uVar2 = CONCAT26(uStack_82,CONCAT15(local_83,acStack_88));
      pcVar6 = (char *)CONCAT35(acStack_8b,local_90);
      if (-1 < (char)bStack_79) {
        uVar2 = (ulong)bStack_79;
        pcVar6 = local_90;
      }
      if (("WebRTC.Audio." < local_a8) || (&local_9b < "ebRTC.Audio.")) {
        local_a8 = (char  [5])uVar9;
        acStack_a3 = (char  [3])uVar10;
        acStack_a0 = (char  [5])uVar11;
        local_9b = '\0';
        FUN_00547cac(local_a8,param_3,param_4);
        FUN_00547cac(local_a8,".FixedDigitalGainCurveRegion.Limiter",0x24);
        bStack_a9 = 0xd;
        if (("WebRTC.Audio." < local_c0) || (&local_b3 < "ebRTC.Audio.")) {
          local_c0 = (char  [5])uVar9;
          acStack_bb = (char  [3])uVar10;
          acStack_b8 = (char  [5])uVar11;
          uVar3 = CONCAT26(uStack_9a,CONCAT15(local_9b,acStack_a0));
          pcVar7 = (char *)CONCAT35(acStack_a3,local_a8);
          if (-1 < (char)bStack_91) {
            uVar3 = (ulong)bStack_91;
            pcVar7 = local_a8;
          }
          local_b3 = '\0';
          FUN_00547cac(local_c0,param_3,param_4);
          FUN_00547cac(local_c0,".FixedDigitalGainCurveRegion.Saturation",0x27);
          uVar4 = CONCAT26(uStack_b2,CONCAT15(local_b3,acStack_b8));
          pcVar8 = (char *)CONCAT35(acStack_bb,local_c0);
          if (-1 < (char)bStack_a9) {
            uVar4 = (ulong)bStack_a9;
            pcVar8 = local_c0;
          }
          uVar12 = FUN_006660d0(pcVar5,uVar1,1,10000,0x32);
          *param_1 = uVar12;
          uVar12 = FUN_006660d0(pcVar6,uVar2,1,10000,0x32);
          param_1[1] = uVar12;
          uVar12 = FUN_006660d0(pcVar7,uVar3,1,10000,0x32);
          param_1[2] = uVar12;
          uVar12 = FUN_006660d0(pcVar8,uVar4,1,10000,0x32);
          param_1[3] = uVar12;
          if ((char)bStack_a9 < '\0') {
            operator_delete((void *)CONCAT35(acStack_bb,local_c0));
          }
          if ((char)bStack_91 < '\0') {
            operator_delete((void *)CONCAT35(acStack_a3,local_a8));
          }
          param_1[4] = param_2;
          *(undefined4 *)((long)param_1 + 0x4c) = 0;
          param_1[10] = 0;
          param_1[6] = 0;
          param_1[5] = 0;
          param_1[8] = 0;
          param_1[7] = 0;
          *(undefined1 *)(param_1 + 9) = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
            );
}


// ===== 00997dbc  FUN_00997dbc =====

void FUN_00997dbc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((char)param_1[9] == '\x01') {
    iVar1 = *(int *)((long)param_1 + 0x4c);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar2 = *param_1;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        lVar2 = param_1[1];
      }
    }
    else if (iVar1 == 2) {
      lVar2 = param_1[2];
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      lVar2 = param_1[3];
    }
    if (lVar2 != 0) {
      FUN_00666568(lVar2,(SUB168(SEXT816(param_1[10]) * ZEXT816(0xa3d70a3d70a3d70b),8) >> 6) -
                         (param_1[10] >> 0x3f));
      return;
    }
  }
  return;
}


// ===== 00997e48  FUN_00997e48 =====

float FUN_00997e48(float param_1,long *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  *(undefined1 *)(param_2 + 9) = 1;
  if (30057.297 <= param_1) {
    if (33724.844 <= param_1) {
      lVar4 = 0x38;
      if (36766.3 <= param_1) {
        lVar4 = 0x40;
      }
      iVar6 = 2;
      if (36766.3 <= param_1) {
        iVar6 = 3;
      }
    }
    else {
      iVar6 = 1;
      lVar4 = 0x30;
    }
  }
  else {
    iVar6 = 0;
    lVar4 = 0x28;
  }
  *(long *)((long)param_2 + lVar4) = *(long *)((long)param_2 + lVar4) + 1;
  iVar2 = *(int *)((long)param_2 + 0x4c);
  lVar4 = param_2[10];
  if (iVar6 == iVar2) {
    param_2[10] = lVar4 + 1;
    goto code_r0x00997f70;
  }
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar3 = *param_2;
joined_r0x00997f30:
      if (lVar3 != 0) goto LAB_00997f34;
    }
    else if (iVar2 == 1) {
      lVar3 = param_2[1];
      goto joined_r0x00998024;
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_00997f58;
      lVar3 = param_2[3];
      goto joined_r0x00997f30;
    }
    lVar3 = param_2[2];
joined_r0x00998024:
    if (lVar3 == 0) goto LAB_00997f58;
LAB_00997f34:
    FUN_00666568(lVar3,(SUB168(SEXT816(lVar4) * ZEXT816(0xa3d70a3d70a3d70b),8) >> 6) -
                       (lVar4 >> 0x3f));
  }
LAB_00997f58:
  param_2[10] = 0;
  *(int *)((long)param_2 + 0x4c) = iVar6;
code_r0x00997f70:
  fVar9 = 1.0;
  if (30057.297 < param_1) {
    if (param_1 < 36766.3 == NAN(param_1)) {
      fVar9 = 32768.0 / param_1;
    }
    else {
      uVar7 = 0x20;
      pfVar5 = (float *)&UNK_0022aec8;
      do {
        uVar8 = uVar7 >> 1;
        pfVar1 = pfVar5 + uVar8 + 1;
        uVar7 = uVar7 + ~uVar8;
        if (param_1 <= pfVar5[uVar8]) {
          pfVar1 = pfVar5;
          uVar7 = uVar8;
        }
        pfVar5 = pfVar1;
      } while (uVar7 != 0);
      uVar7 = ((long)(pfVar1 + -0x8abb2) >> 2) - 1;
      if (0x1f < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      fVar9 = param_1 * *(float *)(&UNK_0022af48 + uVar7 * 4) +
              *(float *)(&UNK_0022afc8 + uVar7 * 4);
    }
  }
  return fVar9;
}


// ===== 00998040  FUN_00998040 =====

void FUN_00998040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  iVar1 = (int)param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 % 0x14 == 0) {
    *(int *)(param_1 + 2) = iVar1 / 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar1 % 0x14,0,param_2,
               " is not evenly divisible by ",0x14);
}


// ===== 009980b8  FUN_009980b8 =====

void FUN_009980b8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 % 0x14 == 0) {
    *(int *)(param_1 + 0x10) = iVar1 / 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar1 % 0x14,0,param_2,
               " is not evenly divisible by ",0x14);
}


// ===== 0099812c  FUN_0099812c =====

void FUN_0099812c(float *param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *param_3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (lVar5 == 0) {
    fVar13 = 0.0;
  }
  else {
    bVar3 = *(byte *)(param_3 + 3);
    if (1 < bVar3) goto LAB_00998394;
    uVar2 = *(uint *)(param_2 + 0x10);
    lVar6 = param_3[2];
    lVar7 = 0;
    do {
      if (bVar3 == 0) {
        lVar10 = *(long *)(lVar6 + lVar7 * 8);
        lVar11 = param_3[1];
      }
      else {
        lVar11 = param_3[1];
        lVar10 = lVar6 + lVar11 * lVar7 * 4;
      }
      iVar8 = 0;
      lVar9 = 0;
      lVar1 = 0;
      if (lVar11 != 0) {
        lVar1 = lVar10;
      }
      do {
        if (0 < (int)uVar2) {
          uVar12 = (ulong)uVar2;
          fVar13 = param_1[lVar9];
          iVar4 = iVar8;
          do {
            lVar10 = (long)iVar4;
            iVar4 = iVar4 + 1;
            fVar14 = ABS(*(float *)(lVar1 + lVar10 * 4));
            if (fVar14 <= fVar13) {
              fVar14 = fVar13;
            }
            uVar12 = uVar12 - 1;
            fVar13 = fVar14;
          } while (uVar12 != 0);
          param_1[lVar9] = fVar14;
        }
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + uVar2;
      } while (lVar9 != 0x14);
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar5);
    fVar13 = param_1[1];
    if (*param_1 < fVar13) {
      *param_1 = fVar13;
    }
  }
  fVar14 = param_1[2];
  if (fVar13 < fVar14) {
    param_1[1] = fVar14;
  }
  fVar13 = param_1[3];
  if (fVar14 < fVar13) {
    param_1[2] = fVar13;
  }
  fVar14 = param_1[4];
  if (fVar13 < fVar14) {
    param_1[3] = fVar14;
  }
  fVar13 = param_1[5];
  if (fVar14 < fVar13) {
    param_1[4] = fVar13;
  }
  fVar14 = param_1[6];
  if (fVar13 < fVar14) {
    param_1[5] = fVar14;
  }
  fVar13 = param_1[7];
  if (fVar14 < fVar13) {
    param_1[6] = fVar13;
  }
  fVar14 = param_1[8];
  if (fVar13 < fVar14) {
    param_1[7] = fVar14;
  }
  fVar13 = param_1[9];
  if (fVar14 < fVar13) {
    param_1[8] = fVar13;
  }
  fVar14 = param_1[10];
  if (fVar13 < fVar14) {
    param_1[9] = fVar14;
  }
  fVar13 = param_1[0xb];
  if (fVar14 < fVar13) {
    param_1[10] = fVar13;
  }
  fVar14 = param_1[0xc];
  if (fVar13 < fVar14) {
    param_1[0xb] = fVar14;
  }
  fVar13 = param_1[0xd];
  if (fVar14 < fVar13) {
    param_1[0xc] = fVar13;
  }
  fVar14 = param_1[0xe];
  if (fVar13 < fVar14) {
    param_1[0xd] = fVar14;
  }
  fVar13 = param_1[0xf];
  if (fVar14 < fVar13) {
    param_1[0xe] = fVar13;
  }
  fVar14 = param_1[0x10];
  if (fVar13 < fVar14) {
    param_1[0xf] = fVar14;
  }
  fVar13 = param_1[0x11];
  if (fVar14 < fVar13) {
    param_1[0x10] = fVar13;
  }
  fVar14 = param_1[0x12];
  if (fVar13 < fVar14) {
    param_1[0x11] = fVar14;
  }
  if (fVar14 < param_1[0x13]) {
    param_1[0x12] = param_1[0x13];
  }
  fVar13 = *(float *)(param_2 + 8);
  lVar5 = 0;
  while( true ) {
    fVar15 = *(float *)((long)param_1 + lVar5);
    fVar14 = 0.0;
    if (fVar15 == fVar13 || fVar15 < fVar13 != (NAN(fVar15) || NAN(fVar13))) {
      fVar15 = fVar15 * 0.0028740764;
      fVar14 = 0.9971259;
    }
    fVar13 = fVar15 + fVar13 * fVar14;
    *(float *)((long)param_1 + lVar5) = fVar13;
    *(float *)(param_2 + 8) = fVar13;
    if (1 < *(byte *)(param_3 + 3)) break;
    lVar5 = lVar5 + 4;
    if (lVar5 == 0x50) {
      return;
    }
  }
LAB_00998394:
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 00998398  FUN_00998398 =====

void FUN_00998398(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 009983a4  FUN_009983a4 =====

void FUN_009983a4(undefined8 *param_1)

{
  undefined8 local_8;
  
  FUN_009983d8(&local_8);
  *param_1 = local_8;
  return;
}


// ===== 009983d8  FUN_009983d8 =====

void FUN_009983d8(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_3 == 2) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) goto LAB_00998458;
    pcVar5 = 
    "Use the CreateWindowsCoreAudioAudioDeviceModule() factory method instead for this option.";
    uVar4 = 0x24b;
  }
  else {
    if (4 < param_3 - 5U) {
      plVar3 = (long *)operator_new(0x1b8);
      *plVar3 = (long)&PTR_FUN_00d3fa38;
      *(int *)(plVar3 + 1) = param_3;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *(undefined1 *)(plVar3 + 2) = 0;
      FUN_0099b0c0(plVar3 + 3,param_2,0);
      plVar3[0x35] = 0;
      *plVar3 = (long)&PTR_FUN_00d3fc78;
      *(undefined4 *)(plVar3 + 0x36) = 0;
      if (plVar3 != (long *)0x0) {
        FUN_00d0f740(1,plVar3 + 0x36);
      }
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x439,
                     "current platform is Android");
      }
      *(undefined4 *)((long)plVar3 + 0xc) = 5;
      iVar1 = FUN_00998574(plVar3);
      if (iVar1 != -1) {
        uVar2 = FUN_00417e08();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x861,
                       "AttachAudioBuffer");
        }
        (**(code **)(*(long *)plVar3[0x35] + 0x1e0))((long *)plVar3[0x35],plVar3 + 3);
        *param_1 = plVar3;
        return;
      }
      *param_1 = 0;
      if (plVar3 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00998570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3);
      return;
    }
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) goto LAB_00998458;
    pcVar5 = "Use the CreateAndroidAudioDeviceModule() factory method instead for this option.";
    uVar4 = 0x293;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",uVar4,pcVar5);
LAB_00998458:
  *param_1 = 0;
  return;
}


// ===== 00998574  FUN_00998574 =====

undefined8 FUN_00998574(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x509,
                 "CreatePlatformSpecificObjects");
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  uVar2 = FUN_00417e08();
  if (lVar5 == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1c89,
                   "PlatformAudioLayer");
    }
    if (*(int *)(param_1 + 8) == 0xb) {
      plVar3 = (long *)operator_new(8);
      puVar1 = PTR_DAT_00d52f68;
      plVar4 = *(long **)(param_1 + 0x1a8);
      *(long **)(param_1 + 0x1a8) = plVar3;
      *plVar3 = (long)(puVar1 + 0x10);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1f0))();
      }
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x7f9,
                     "Dummy Audio APIs will be utilized.");
      }
    }
    if (*(long *)(param_1 + 0x1a8) == 0) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x823,
                     "Failed to create the platform specific ADM implementation.");
      }
      return 0xffffffff;
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x519,
                 "Reusing provided audio device");
    return 0;
  }
  return 0;
}


// ===== 009986c0  FUN_009986c0 =====

void FUN_009986c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9986c8);
  (*pcVar1)();
}


// ===== 009986c8  FUN_009986c8 =====

undefined8 FUN_009986c8(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x8b1,
                 "ActiveAudioLayer");
  }
  local_24 = 0xaaaaaaaa;
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x1a8))
                    (*(undefined8 **)(param_1 + 0x1a8),&local_24);
  if ((int)uVar2 != -1) {
    uVar2 = 0;
    *param_2 = local_24;
  }
  return uVar2;
}


// ===== 00998750  FUN_00998750 =====

undefined8 FUN_00998750(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x901,&DAT_001ca4e9
                );
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (*(long **)(param_1 + 0x1a8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/audio_device/audio_device_impl.cc",0x123,"audio_device_",
                   &DAT_001f5fa0);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
    lVar4 = FUN_0066631c("WebRTC.Audio.InitializationResult",0x21,4);
    if (lVar4 != 0) {
      FUN_00666568(lVar4,iVar1);
    }
    if (iVar1 == 0) {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x94b,
                     "Audio device initialization failed.");
      }
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00998844  FUN_00998844 =====

undefined8 FUN_00998844(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x989,"Terminate");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
    if ((int)uVar2 != -1) {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 009988c4  FUN_009988c4 =====

undefined1 FUN_009988c4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_00215736,"../../modules/audio_device/audio_device_impl.cc",0x9e1,"Initialized"
                 ,&DAT_001c4dc3,*(undefined1 *)(param_1 + 0x10));
  }
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 00998920  FUN_00998920 =====

undefined8 FUN_00998920(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xa09,"InitSpeaker"
                );
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00998980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xd0))();
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00998998  FUN_00998998 =====

undefined8 FUN_00998998(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xa39,
                 "InitMicrophone");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x009989f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xe0))();
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00998a10  FUN_00998a10 =====

undefined8 FUN_00998a10(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xa69,
                 "SpeakerVolumeIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xf0))(*(long **)(param_1 + 0x1a8),local_24)
    ;
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xaa1,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00998ad4  FUN_00998ad4 =====

undefined8 FUN_00998ad4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b048,"../../modules/audio_device/audio_device_impl.cc",0xac9,
                 "SetSpeakerVolume",&DAT_0019fcd5,param_2,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00998b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xf8))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00998b68  FUN_00998b68 =====

undefined8 FUN_00998b68(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xaf9,
                 "SpeakerVolume");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24 = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x100))
                      (*(long **)(param_1 + 0x1a8),&local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24;
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../modules/audio_device/audio_device_impl.cc",0xb31,
                     "output: ",*param_2);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00998c2c  FUN_00998c2c =====

uint FUN_00998c2c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xb59,
                 "SpeakerIsInitialized");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xd8))();
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xb71,"output: ",
                   uVar1 & 1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


// ===== 00998cd0  FUN_00998cd0 =====

uint FUN_00998cd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xb99,
                 "MicrophoneIsInitialized");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xe8))();
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xbb1,"output: ",
                   uVar1 & 1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


// ===== 00998d74  FUN_00998d74 =====

undefined8 FUN_00998d74(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_4 = 0;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x108))
                      (*(long **)(param_1 + 0x1a8),&local_4);
    if ((int)uVar1 != -1) {
      uVar1 = 0;
      *param_2 = local_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00998ddc  FUN_00998ddc =====

undefined8 FUN_00998ddc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_4 = 0;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x110))
                      (*(long **)(param_1 + 0x1a8),&local_4);
    if ((int)uVar1 != -1) {
      uVar1 = 0;
      *param_2 = local_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00998e44  FUN_00998e44 =====

undefined8 FUN_00998e44(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xc79,
                 "SpeakerMuteIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x140))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xcb1,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00998f08  FUN_00998f08 =====

undefined8 FUN_00998f08(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0xcd9,
                 "SetSpeakerMute",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00998f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x148))
                      (*(long **)(param_1 + 0x1a8),param_2 & 1);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00998f9c  FUN_00998f9c =====

undefined8 FUN_00998f9c(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xd09,"SpeakerMute"
                );
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x150))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xd41,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999060  FUN_00999060 =====

undefined8 FUN_00999060(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xd69,
                 "MicrophoneMuteIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x158))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xda1,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999124  FUN_00999124 =====

undefined8 FUN_00999124(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0xdc9,
                 "SetMicrophoneMute",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x009991a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x160))
                      (*(long **)(param_1 + 0x1a8),param_2 & 1);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 009991b8  FUN_009991b8 =====

undefined8 FUN_009991b8(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xdf9,
                 "MicrophoneMute");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x168))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xe31,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 0099927c  FUN_0099927c =====

undefined8 FUN_0099927c(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xe59,
                 "MicrophoneVolumeIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x118))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xe91,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999340  FUN_00999340 =====

undefined8 FUN_00999340(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b048,"../../modules/audio_device/audio_device_impl.cc",0xeb9,
                 "SetMicrophoneVolume",&DAT_0019fcd5,param_2,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x009993bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x120))(*(long **)(param_1 + 0x1a8),param_2)
    ;
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 009993d4  FUN_009993d4 =====

undefined8 FUN_009993d4(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xee9,
                 "MicrophoneVolume");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24 = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x128))
                      (*(long **)(param_1 + 0x1a8),&local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24;
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../modules/audio_device/audio_device_impl.cc",0xf21,
                     "output: ",*param_2);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999498  FUN_00999498 =====

undefined8 FUN_00999498(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0xf51,
                 "StereoRecordingIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x188))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0xf89,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 0099955c  FUN_0099955c =====

undefined8 FUN_0099955c(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0xfb1,
                 "SetStereoRecording",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x98))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 400))
                        (*(long **)(param_1 + 0x1a8),param_2 & 1);
      if (iVar1 != -1) {
        uVar3 = 1;
        if ((param_2 & 1) != 0) {
          uVar3 = 2;
        }
        FUN_0099b994(param_1 + 0x18,uVar3);
        return 0;
      }
      if ((param_2 & 1) == 0) {
        return 0xffffffff;
      }
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) {
        return 0xffffffff;
      }
      pcVar4 = "failed to enable stereo recording";
      uVar3 = 0xffa;
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return 0xffffffff;
      }
      pcVar4 = "unable to set stereo mode after recording is initialized";
      uVar3 = 0xfcb;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",uVar3,pcVar4);
  }
  return 0xffffffff;
}


// ===== 00999674  FUN_00999674 =====

undefined8 FUN_00999674(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1061,
                 "StereoRecording");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x198))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1099,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999738  FUN_00999738 =====

undefined8 FUN_00999738(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x10c1,
                 "StereoPlayoutIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x170))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x10f9,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 009997fc  FUN_009997fc =====

undefined8 FUN_009997fc(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1121,
                 "SetStereoPlayout",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x80))();
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x178))
                        (*(long **)(param_1 + 0x1a8),param_2 & 1);
      if (iVar1 == 0) {
        uVar3 = 1;
        if ((param_2 & 1) != 0) {
          uVar3 = 2;
        }
        FUN_0099b9fc(param_1 + 0x18,uVar3);
        return 0;
      }
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) {
        return 0xffffffff;
      }
      pcVar4 = "stereo playout is not supported";
      uVar3 = 0x1162;
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return 0xffffffff;
      }
      pcVar4 = "unable to set stereo mode while playing side is initialized";
      uVar3 = 0x113b;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",uVar3,pcVar4);
  }
  return 0xffffffff;
}


// ===== 00999908  FUN_00999908 =====

undefined8 FUN_00999908(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x11c1,
                 "StereoPlayout");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x180))
                      (*(long **)(param_1 + 0x1a8),local_24);
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x11f9,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 009999cc  FUN_009999cc =====

undefined8 FUN_009999cc(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1221,
                 "PlayoutIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),local_24)
    ;
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1259,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999a90  FUN_00999a90 =====

undefined8 FUN_00999a90(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_24 [4];
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1281,
                 "RecordingIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_24[0] = 0;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x88))(*(long **)(param_1 + 0x1a8),local_24)
    ;
    if ((int)uVar2 != -1) {
      *param_2 = local_24[0];
      uVar1 = FUN_00417e08();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x12b9,
                     "output: ",local_24[0]);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 00999b54  FUN_00999b54 =====

undefined8 FUN_00999b54(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_4 = 0;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x130))
                      (*(long **)(param_1 + 0x1a8),&local_4);
    if ((int)uVar1 != -1) {
      uVar1 = 0;
      *param_2 = local_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00999bbc  FUN_00999bbc =====

undefined8 FUN_00999bbc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_4 = 0;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x138))
                      (*(long **)(param_1 + 0x1a8),&local_4);
    if ((int)uVar1 != -1) {
      uVar1 = 0;
      *param_2 = local_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 00999c24  FUN_00999c24 =====

uint FUN_00999c24(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1380,
                 "PlayoutDevices");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x20))();
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1398,"output: "
                   ,uVar1 & 0xffff);
    }
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ===== 00999cc8  FUN_00999cc8 =====

undefined8 FUN_00999cc8(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x13c1,
                 "SetPlayoutDevice",&DAT_0019fcd5,param_2 & 0xffff,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00999d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x40))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00999d5c  FUN_00999d5c =====

undefined8 FUN_00999d5c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x13f1,
                 "SetPlayoutDevice");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00999dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x48))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00999ddc  FUN_00999ddc =====

undefined8 FUN_00999ddc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1421,
                 "SetPlayoutDevice");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00999e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x50))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 00999e5c  FUN_00999e5c =====

undefined8 FUN_00999e5c(long param_1,uint param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1468,
                 "PlayoutDeviceName",&DAT_0019fcd5,param_2 & 0xffff,", ...)");
  }
  uVar2 = 0xffffffff;
  if (((param_3 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x30))
                        (*(long **)(param_1 + 0x1a8),param_2,param_3,param_4), (int)uVar2 != -1)) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ed3,"../../modules/audio_device/audio_device_impl.cc",0x14b0,
                   "output: name = ",param_3);
    }
    if ((param_4 != 0) && (uVar1 = FUN_0044075c(), (uVar1 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4ed3,"../../modules/audio_device/audio_device_impl.cc",0x14c8,
                   "output: guid = ",param_4);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00999f64  FUN_00999f64 =====

undefined8 FUN_00999f64(long param_1,uint param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1510,
                 "RecordingDeviceName",&DAT_0019fcd5,param_2 & 0xffff,", ...)");
  }
  uVar2 = 0xffffffff;
  if (((param_3 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x38))
                        (*(long **)(param_1 + 0x1a8),param_2,param_3,param_4), (int)uVar2 != -1)) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ed3,"../../modules/audio_device/audio_device_impl.cc",0x1558,
                   "output: name = ",param_3);
    }
    if ((param_4 != 0) && (uVar1 = FUN_0044075c(), (uVar1 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4ed3,"../../modules/audio_device/audio_device_impl.cc",0x1570,
                   "output: guid = ",param_4);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0099a06c  FUN_0099a06c =====

uint FUN_0099a06c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x15a0,
                 "RecordingDevices");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x28))();
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x15b8,"output: "
                   ,uVar1 & 0xffff);
    }
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ===== 0099a110  FUN_0099a110 =====

undefined8 FUN_0099a110(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x15e1,
                 "SetRecordingDevice",&DAT_0019fcd5,param_2 & 0xffff,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x58))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0099a1a4  FUN_0099a1a4 =====

undefined8 FUN_0099a1a4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1611,
                 "SetRecordingDevice");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x60))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0099a224  FUN_0099a224 =====

undefined8 FUN_0099a224(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1641,
                 "SetRecordingDevice");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x68))(*(long **)(param_1 + 0x1a8),param_2);
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0099a2a4  FUN_0099a2a4 =====

int FUN_0099a2a4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1671,
                 "InitPlayout");
  }
  if ((char)param_1[2] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[0x35] + 0x78))();
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x16a1,
                     "output: ",iVar1);
      }
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


// ===== 0099a388  FUN_0099a388 =====

int FUN_0099a388(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x16d9,
                 "InitRecording");
  }
  if ((char)param_1[2] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*(long *)param_1[0x35] + 0x90))();
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1709,
                     "output: ",iVar1);
      }
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


// ===== 0099a46c  FUN_0099a46c =====

undefined8 FUN_0099a46c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1741,
                 "PlayoutIsInitialized");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x80))();
    return uVar2;
  }
  return 0;
}


// ===== 0099a4e4  FUN_0099a4e4 =====

undefined8 FUN_0099a4e4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1771,
                 "RecordingIsInitialized");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x98))();
    return uVar2;
  }
  return 0;
}


// ===== 0099a55c  FUN_0099a55c =====

int FUN_0099a55c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x17a1,
                 "StartPlayout");
  }
  if ((char)param_1[2] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_0099b378(param_1 + 3);
      iVar1 = (**(code **)(*(long *)param_1[0x35] + 0xa0))();
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x17d9,
                     "output: ",iVar1);
      }
      lVar3 = FUN_0066631c("WebRTC.Audio.StartPlayoutSuccess",0x20,2);
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


// ===== 0099a648  FUN_0099a648 =====

int FUN_0099a648(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1811,
                 "StopPlayout");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xa8))();
    FUN_0099b5f4(param_1 + 0x18);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1831,"output: "
                   ,iVar1);
    }
    lVar3 = FUN_0066631c("WebRTC.Audio.StopPlayoutSuccess",0x1f,2);
    if (lVar3 != 0) {
      FUN_00666568(lVar3,iVar1 == 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 0099a718  FUN_0099a718 =====

undefined8 FUN_0099a718(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1869,"Playing");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xb0))();
    return uVar2;
  }
  return 0;
}


// ===== 0099a790  FUN_0099a790 =====

int FUN_0099a790(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1899,
                 "StartRecording");
  }
  if ((char)param_1[2] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_0099b4b4(param_1 + 3);
      iVar1 = (**(code **)(*(long *)param_1[0x35] + 0xb8))();
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x18d1,
                     "output: ",iVar1);
      }
      lVar3 = FUN_0066631c("WebRTC.Audio.StartRecordingSuccess",0x22,2);
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


// ===== 0099a87c  FUN_0099a87c =====

int FUN_0099a87c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1909,
                 "StopRecording");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0xc0))();
    FUN_0099b71c(param_1 + 0x18);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1929,"output: "
                   ,iVar1);
    }
    lVar3 = FUN_0066631c("WebRTC.Audio.StopRecordingSuccess",0x21,2);
    if (lVar3 != 0) {
      FUN_00666568(lVar3,iVar1 == 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 0099a94c  FUN_0099a94c =====

undefined8 FUN_0099a94c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1961,"Recording")
    ;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099a9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 200))();
    return uVar2;
  }
  return 0;
}


// ===== 0099a9c4  FUN_0099a9c4 =====

void FUN_0099a9c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1999,
                 "RegisterAudioCallback");
  }
  FUN_0099b30c(param_1 + 0x18,param_2);
  return;
}


// ===== 0099aa1c  FUN_0099aa1c =====

undefined8 FUN_0099aa1c(long param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined2 local_4 [2];
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_4[0] = 0;
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1a0))(*(long **)(param_1 + 0x1a8),local_4)
    ;
    if (iVar1 == -1) {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x19db,
                     "failed to retrieve the playout delay");
      }
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *param_2 = local_4[0];
    }
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0099aab4  FUN_0099aab4 =====

uint FUN_0099aab4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1a19,
                 "BuiltInAECIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1a8))();
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1a31,"output: "
                   ,uVar1 & 1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


// ===== 0099ab58  FUN_0099ab58 =====

undefined4 FUN_0099ab58(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1a59,
                 "EnableBuiltInAEC",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1c0))
                      (*(long **)(param_1 + 0x1a8),param_2 & 1);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1a71,"output: "
                   ,uVar1);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0099ac18  FUN_0099ac18 =====

uint FUN_0099ac18(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1a99,
                 "BuiltInAGCIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1b0))();
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1ab1,"output: "
                   ,uVar1 & 1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


// ===== 0099acbc  FUN_0099acbc =====

undefined4 FUN_0099acbc(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1ad9,
                 "EnableBuiltInAGC",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1c8))
                      (*(long **)(param_1 + 0x1a8),param_2 & 1);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1af1,"output: "
                   ,uVar1);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0099ad7c  FUN_0099ad7c =====

uint FUN_0099ad7c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x1b19,
                 "BuiltInNSIsAvailable");
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1b8))();
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1b31,"output: "
                   ,uVar1 & 1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


// ===== 0099ae20  FUN_0099ae20 =====

undefined4 FUN_0099ae20(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_0022b04e,"../../modules/audio_device/audio_device_impl.cc",0x1b59,
                 "EnableBuiltInNS",&DAT_0019fcd5,param_2 & 1,&DAT_001ca519);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1d0))
                      (*(long **)(param_1 + 0x1a8),param_2 & 1);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/audio_device/audio_device_impl.cc",0x1b71,"output: "
                   ,uVar1);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0099aee0  FUN_0099aee0 =====

undefined8 FUN_0099aee0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0099aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x1d8))();
    return uVar1;
  }
  return 0xffffffff;
}


// ===== 0099af08  FUN_0099af08 =====

undefined8 FUN_0099af08(void)

{
  return 0xffffffff;
}


// ===== 0099af14  FUN_0099af14 =====

undefined8 FUN_0099af14(void)

{
  return 0xffffffff;
}


// ===== 0099af20  FUN_0099af20 =====

undefined8 FUN_0099af20(void)

{
  return 0xffffffff;
}


// ===== 0099af2c  FUN_0099af2c =====

undefined8 FUN_0099af2c(void)

{
  return 0xffffffff;
}


// ===== 0099af38  FUN_0099af38 =====

void FUN_0099af38(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x1b0);
  return;
}


// ===== 0099af5c  FUN_0099af5c =====

bool FUN_0099af5c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x36);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 0099afb4  FUN_0099afb4 =====

void FUN_0099afb4(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3fa38;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x891,
                 "~AudioDeviceModuleImpl");
  }
  plVar2 = (long *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1f0))();
  }
  FUN_0099b1f0(param_1 + 3);
  return;
}


// ===== 0099b028  FUN_0099b028 =====

void FUN_0099b028(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d3fa38;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_impl.cc",0x891,
                 "~AudioDeviceModuleImpl");
  }
  plVar2 = (long *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1f0))();
  }
  FUN_0099b1f0(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 0099b0a8  FUN_0099b0a8 =====

bool FUN_0099b0a8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x1b0) == 1;
}


// ===== 0099b0c0  FUN_0099b0c0 =====

void FUN_0099b0c0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_28;
  
  *param_1 = &PTR_FUN_00d3fec0;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar5 = param_2[1];
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = param_2[2];
  param_1[2] = lVar5;
  param_1[5] = lVar4;
  param_1[4] = lVar3;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 6),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  uVar1 = (**(code **)(*(long *)param_1[4] + 0x10))
                    ((long *)param_1[4],"AudioDeviceBufferTimer",0x16,0);
  param_1[0xb] = uVar1;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 1;
  FUN_0099c6f4(param_1 + 0x2d);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/audio_device/audio_device_buffer.cc",0x251,
                 "AudioDeviceBuffer::ctor");
  }
  return;
}


