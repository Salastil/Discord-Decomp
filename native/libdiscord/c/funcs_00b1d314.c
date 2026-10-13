// ===== 00b1d314  FUN_00b1d314 =====

void FUN_00b1d314(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}


// ===== 00b1d330  FUN_00b1d330 =====

/* WARNING: Removing unreachable block (ram,0x00b1d3c4) */

void FUN_00b1d330(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x28);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x130);
        if (pvVar2 == (void *)0x0) goto LAB_00b1d410;
        FUN_0066919c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x20);
    }
    *(void **)(param_1 + 0x28) = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
LAB_00b1d410:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    } while (pvVar2 != pvVar3);
    pvVar1 = *(void **)(param_1 + 8);
  }
  *(void **)(param_1 + 0x10) = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00b1d424  FUN_00b1d424 =====

void FUN_00b1d424(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b1d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}


// ===== 00b1d434  FUN_00b1d434 =====

void FUN_00b1d434(long *param_1)

{
  undefined1 auStack_38 [8];
  void *local_30;
  char cStack_19;
  
  (**(code **)(*param_1 + 0x60))(auStack_38);
  if (cStack_19 < '\0') {
    operator_delete(local_30);
  }
  return;
}


// ===== 00b1d47c  FUN_00b1d47c =====

undefined8 * FUN_00b1d47c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/MediaConstraints",&DAT_00dbaa38);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_e0;
  FUN_00ad8450(&local_80,param_1,uVar1,"getMandatory","()Ljava/util/List;",&DAT_00dbaa30);
  local_b0 = FUN_004a41b4(param_1,*param_2,local_60);
  local_a8 = param_1;
  FUN_00ad843c(&local_80);
  FUN_00b1d640(&local_a0,param_1,&local_b0);
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/MediaConstraints",&DAT_00dbaa38);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_e0;
  FUN_00ad8450(&local_80,param_1,uVar1,"getOptional","()Ljava/util/List;",&DAT_00dbaa40);
  local_e0 = FUN_004a41b4(param_1,*param_2,local_60);
  local_d8 = param_1;
  FUN_00ad843c(&local_80);
  FUN_00b1d640(&local_d0,param_1,&local_e0);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar1 = local_a0;
  local_a0 = 0;
  puVar2[1] = uStack_98;
  *puVar2 = uVar1;
  puVar2[2] = local_90;
  puVar2[4] = uStack_c8;
  puVar2[3] = local_d0;
  puVar2[5] = local_c0;
  uStack_98 = 0;
  local_90 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  puStack_78 = (undefined1 *)0x0;
  puStack_70 = (undefined1 *)0x0;
  local_80 = (undefined1 *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_00afbb14(&local_58);
  FUN_00afbb14(&local_80);
  FUN_00afbb14(&local_d0);
  FUN_00ada608(&local_e0,local_d8);
  FUN_00afbb14(&local_a0);
  FUN_00ada608(&local_b0,local_a8);
  return puVar2;
}


// ===== 00b1d640  FUN_00b1d640 =====

void FUN_00b1d640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_160 [8];
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 uStack_128;
  undefined7 local_120;
  char cStack_119;
  undefined8 local_118;
  undefined1 auStack_110 [16];
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
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
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_70;
  
  local_158 = tpidr_el0;
  local_70 = *(long *)(local_158 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00adbd70(&local_118,param_2,param_3);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdd4(&local_a0,local_118,auStack_110);
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdc0(&local_d0);
  uVar4 = FUN_00adc0b0(&local_a0,&local_d0);
  while ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)FUN_00adc13c(&local_a0);
    uVar6 = FUN_00adaed8(param_2,"org/webrtc/MediaConstraints$KeyValuePair",&DAT_00dbaa20);
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = auStack_160;
    FUN_00ad8450(&local_100,param_2,uVar6,"getKey","()Ljava/lang/String;",&DAT_00dbaa18);
    local_140 = FUN_004a41b4(param_2,*puVar5,local_e0);
    local_138 = param_2;
    FUN_00ad843c(&local_100);
    FUN_00adc4e0(&local_130,param_2,&local_140);
    uVar6 = FUN_00adaed8(param_2,"org/webrtc/MediaConstraints$KeyValuePair",&DAT_00dbaa20);
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = auStack_160;
    FUN_00ad8450(&local_100,param_2,uVar6,"getValue","()Ljava/lang/String;",&DAT_00dbaa28);
    local_150 = FUN_004a41b4(param_2,*puVar5,local_e0);
    local_148 = param_2;
    FUN_00ad843c(&local_100);
    FUN_00adc4e0(&local_100,param_2,&local_150);
    puVar3 = local_f0;
    puVar2 = puStack_f8;
    puVar1 = local_100;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 < (undefined8 *)param_1[2]) {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puStack_f8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      if (cStack_119 < '\0') {
        FUN_005478d8(puVar5,local_130,uStack_128);
      }
      else {
        puVar5[2] = CONCAT17(cStack_119,local_120);
        puVar5[1] = uStack_128;
        *puVar5 = local_130;
      }
      if ((long)puVar3 < 0) {
        FUN_005478d8(puVar5 + 3,puVar1,puVar2);
        operator_delete(puVar1);
        puVar7 = puVar5 + 6;
      }
      else {
        puVar5[3] = puVar1;
        puVar5[4] = puVar2;
        puVar7 = puVar5 + 6;
        puVar5[5] = puVar3;
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_00b1d94c(param_1,&local_130,&local_100);
    }
    param_1[1] = puVar7;
    if ((long)local_f0 < 0) {
      operator_delete(local_100);
    }
    FUN_00ada608(&local_150,local_148);
    if (cStack_119 < '\0') {
      operator_delete(local_130);
    }
    FUN_00ada608(&local_140,local_138);
    FUN_00adbeec(&local_a0);
    uVar4 = FUN_00adc0b0(&local_a0,&local_d0);
  }
  FUN_00adc078(&local_d0);
  FUN_00adc078(&local_a0);
  FUN_00adbdb0(&local_118);
  if (*(long *)(local_158 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00b1d94c  FUN_00b1d94c =====

long FUN_00b1d94c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar3) {
    FUN_00b1dcec();
LAB_00b1dad4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_70 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x555555555555555;
  }
  if (uVar5 != 0) {
    if (0x555555555555555 < uVar5) goto LAB_00b1dad4;
    local_70 = operator_new(uVar5 * 0x30);
  }
  puVar1 = (undefined8 *)((long)local_70 + lVar6);
  local_58 = (void *)((long)local_70 + uVar5 * 0x30);
  local_68 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar2 = param_3[1];
  lVar6 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  pvVar7 = (void *)*param_3;
  *param_3 = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
  }
  if (lVar6 < 0) {
    FUN_005478d8(puVar1 + 3,pvVar7,uVar2);
    operator_delete(pvVar7);
  }
  else {
    puVar1[3] = pvVar7;
    puVar1[4] = uVar2;
    puVar1[5] = lVar6;
  }
  local_60 = puVar1 + 6;
  FUN_00b1dad8(param_1,&local_70);
  lVar6 = param_1[1];
  FUN_00b1dc18(&local_70);
  return lVar6;
}


// ===== 00b1dad8  FUN_00b1dad8 =====

void FUN_00b1dad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar2));
  puVar4 = puVar9;
  puVar6 = puVar1;
  if (puVar2 != puVar9) {
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
      uVar7 = puVar4[4];
      uVar5 = puVar4[3];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar6[5] = puVar4[5];
      puVar6[4] = uVar7;
      puVar6[3] = uVar5;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar4 != puVar2);
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar9 + 0x2f) < '\0') {
        operator_delete((void *)puVar9[3]);
        cVar3 = *(char *)((long)puVar9 + 0x17);
      }
      else {
        cVar3 = *(char *)((long)puVar9 + 0x17);
      }
      if (cVar3 < '\0') {
        operator_delete((void *)*puVar9);
      }
      puVar9 = puVar9 + 6;
    } while (puVar9 != puVar2);
  }
  param_2[1] = puVar1;
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


// ===== 00b1dc18  FUN_00b1dc18 =====

/* WARNING: Removing unreachable block (ram,0x00b1dc68) */
/* WARNING: Removing unreachable block (ram,0x00b1dc84) */

void FUN_00b1dc18(undefined8 *param_1)

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


// ===== 00b1dcec  FUN_00b1dcec =====

void FUN_00b1dcec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b1dd04  FUN_00b1dd04 =====

void FUN_00b1dd04(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x15] = 0;
  param_1[1] = 0;
  *param_1 = 0;
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
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}


// ===== 00b1dd34  FUN_00b1dd34 =====

void FUN_00b1dd34(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  FUN_00843ef4(param_1 + 3,param_2 + 3);
  if (*(char *)((long)param_2 + 0x47) < '\0') {
    FUN_005478d8(param_1 + 6,param_2[6],param_2[7]);
    cVar1 = *(char *)((long)param_2 + 0x5f);
  }
  else {
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    cVar1 = *(char *)((long)param_2 + 0x5f);
  }
  if (cVar1 < '\0') {
    FUN_005478d8(param_1 + 9,param_2[9],param_2[10]);
  }
  else {
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    FUN_005478d8(param_1 + 0xd,param_2[0xd],param_2[0xe]);
  }
  else {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
  }
  FUN_00843ef4(param_1 + 0x10,param_2 + 0x10);
  FUN_00843ef4(param_1 + 0x13,param_2 + 0x13);
  return;
}


// ===== 00b1de28  FUN_00b1de28 =====

/* WARNING: Removing unreachable block (ram,0x00b1ded8) */
/* WARNING: Removing unreachable block (ram,0x00b1de78) */
/* WARNING: Removing unreachable block (ram,0x00b1dfb4) */

void FUN_00b1de28(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x13];
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x14];
    pvVar2 = pvVar4;
    if (pvVar4 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) goto LAB_00b1e004;
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[0x13];
    }
    param_1[0x14] = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x10];
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x11];
    pvVar2 = pvVar4;
    if (pvVar4 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) goto LAB_00b1e004;
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[0x10];
    }
    param_1[0x11] = pvVar4;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    pvVar4 = (void *)param_1[3];
  }
  else {
    pvVar4 = (void *)param_1[3];
  }
  if (pvVar4 == (void *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    pvVar3 = (void *)param_1[4];
    pvVar2 = pvVar4;
    if (pvVar4 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) {
LAB_00b1e004:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[3];
    }
    param_1[4] = pvVar4;
    operator_delete(pvVar2);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00b1e018  FUN_00b1e018 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b1e018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_001f5920;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 9) = 5;
  param_1[3] = uVar1;
  uVar2 = _UNK_001f34e8;
  uVar1 = _DAT_001f34e0;
  *(undefined4 *)(param_1 + 0xc) = 200;
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = 1000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x10001;
  uVar1 = DAT_001f5c78;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x12] = uVar1;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 1;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x10000;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  FUN_007ebea0(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x400;
  return;
}


// ===== 00b1e168  FUN_00b1e168 =====

void FUN_00b1e168(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  void *__dest;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = *param_2;
  lVar9 = param_2[1];
  uVar4 = lVar9 - lVar8;
  if (uVar4 != 0) {
    if ((ulong)(((long)uVar4 >> 4) * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745e) {
      pvVar5 = operator_new(uVar4);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (long)pvVar5 + uVar4;
      do {
        if (pvVar5 == (void *)0x0) goto LAB_00b1e3f8;
        FUN_00b1dd34(pvVar5,lVar8);
        lVar8 = lVar8 + 0xb0;
        pvVar5 = (void *)((long)pvVar5 + 0xb0);
      } while (lVar8 != lVar9);
      param_1[1] = pvVar5;
      goto LAB_00b1e208;
    }
    FUN_00afb604();
LAB_00b1e410:
    FUN_00afb440();
LAB_00b1e414:
                    /* WARNING: Subroutine does not return */
    FUN_005d4754();
  }
LAB_00b1e208:
  lVar8 = param_2[4];
  lVar9 = param_2[3];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar8;
  param_1[3] = lVar9;
  plVar10 = (long *)param_2[5];
  plVar2 = (long *)param_2[6];
  uVar4 = (long)plVar2 - (long)plVar10;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) goto LAB_00b1e410;
    plVar6 = (long *)operator_new(uVar4);
    param_1[5] = plVar6;
    param_1[6] = plVar6;
    param_1[7] = (long)plVar6 + uVar4;
    do {
      if (plVar6 == (long *)0x0) goto LAB_00b1e3f8;
      lVar8 = *plVar10;
      *plVar6 = lVar8;
      if (lVar8 != 0) {
        FUN_00d0f740(1);
      }
      plVar10 = plVar10 + 1;
      plVar6 = plVar6 + 1;
    } while (plVar10 != plVar2);
    param_1[6] = plVar6;
  }
  lVar12 = param_2[0xc];
  lVar9 = param_2[0xf];
  lVar8 = param_2[0xe];
  lVar14 = param_2[9];
  lVar13 = param_2[8];
  lVar16 = param_2[0xb];
  lVar15 = param_2[10];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar12;
  param_1[0xf] = lVar9;
  param_1[0xe] = lVar8;
  param_1[9] = lVar14;
  param_1[8] = lVar13;
  param_1[0xb] = lVar16;
  param_1[10] = lVar15;
  lVar12 = param_2[0x14];
  lVar9 = param_2[0x17];
  lVar8 = param_2[0x16];
  lVar14 = param_2[0x11];
  lVar13 = param_2[0x10];
  lVar16 = param_2[0x13];
  lVar15 = param_2[0x12];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = lVar12;
  param_1[0x17] = lVar9;
  param_1[0x16] = lVar8;
  param_1[0x11] = lVar14;
  param_1[0x10] = lVar13;
  param_1[0x13] = lVar16;
  param_1[0x12] = lVar15;
  lVar15 = param_2[0x1b];
  lVar14 = param_2[0x1a];
  lVar9 = param_2[0x1d];
  lVar8 = param_2[0x1c];
  lVar13 = param_2[0x19];
  lVar12 = param_2[0x18];
  *(int *)(param_1 + 0x1e) = (int)param_2[0x1e];
  param_1[0x1b] = lVar15;
  param_1[0x1a] = lVar14;
  param_1[0x1d] = lVar9;
  param_1[0x1c] = lVar8;
  param_1[0x19] = lVar13;
  param_1[0x18] = lVar12;
  uVar3 = *(undefined1 *)((long)param_2 + 0xfc);
  lVar8 = param_2[0x1f];
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = uVar3;
  *(int *)(param_1 + 0x1f) = (int)lVar8;
  pvVar5 = (void *)param_2[0x20];
  uVar4 = param_2[0x21] - (long)pvVar5;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) goto LAB_00b1e414;
    __dest = operator_new(uVar4);
    param_1[0x20] = __dest;
    param_1[0x21] = __dest;
    param_1[0x22] = (long)__dest + uVar4;
    memcpy(__dest,pvVar5,uVar4);
    param_1[0x21] = (long)__dest + uVar4;
  }
  *(char *)(param_1 + 0x23) = (char)param_2[0x23];
  if (*(char *)((long)param_2 + 0x137) < '\0') {
    FUN_005478d8(param_1 + 0x24,param_2[0x24],param_2[0x25]);
  }
  else {
    lVar9 = param_2[0x25];
    lVar8 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = lVar9;
    param_1[0x24] = lVar8;
  }
  lVar8 = param_2[0x29];
  lVar12 = param_2[0x28];
  lVar9 = param_2[0x27];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = lVar8;
  param_1[0x2a] = 0;
  param_1[0x28] = lVar12;
  param_1[0x27] = lVar9;
  lVar8 = param_2[0x2a];
  lVar9 = param_2[0x2b];
  uVar4 = lVar9 - lVar8;
  if (uVar4 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar4 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b1ed34();
    }
    puVar7 = (undefined8 *)operator_new(uVar4);
    param_1[0x2a] = puVar7;
    param_1[0x2b] = puVar7;
    param_1[0x2c] = (long)puVar7 + uVar4;
    do {
      if (puVar7 == (undefined8 *)0x0) {
LAB_00b1e3f8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar7 = &PTR_FUN_00d385d8;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar8 + 8);
      uVar11 = *(undefined8 *)(lVar8 + 0xc);
      *(undefined8 *)((long)puVar7 + 0x14) = *(undefined8 *)(lVar8 + 0x14);
      *(undefined8 *)((long)puVar7 + 0xc) = uVar11;
      puVar1 = (undefined4 *)(lVar8 + 0x20);
      lVar8 = lVar8 + 0x28;
      *(undefined4 *)(puVar7 + 4) = *puVar1;
      puVar7 = puVar7 + 5;
    } while (lVar8 != lVar9);
    param_1[0x2b] = puVar7;
  }
  lVar13 = param_2[0x2e];
  lVar12 = param_2[0x2d];
  lVar9 = param_2[0x30];
  lVar8 = param_2[0x2f];
  param_1[0x31] = param_2[0x31];
  param_1[0x2e] = lVar13;
  param_1[0x2d] = lVar12;
  param_1[0x30] = lVar9;
  param_1[0x2f] = lVar8;
  return;
}


// ===== 00b1e41c  FUN_00b1e41c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b1e41c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_001f5920;
  *(undefined4 *)(param_1 + 9) = 5;
  param_1[3] = uVar1;
  uVar2 = _UNK_001f34e8;
  uVar1 = _DAT_001f34e0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x10001;
  uVar1 = DAT_001f5c78;
  param_1[5] = 0;
  param_1[0x12] = uVar1;
  *(undefined8 *)((long)param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 200;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 1;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1000;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x10000;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  FUN_007ebea0(param_1 + 0x1f);
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x400;
  if (param_2 == 1) {
    *(undefined4 *)((long)param_1 + 0x6c) = 1000;
    *(undefined2 *)((long)param_1 + 0xa5) = 1;
    *(undefined8 *)((long)param_1 + 0x1c) = 0x100000001;
  }
  return;
}


// ===== 00b1e590  FUN_00b1e590 =====

void FUN_00b1e590(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  pvVar2 = (void *)param_1[0x2a];
  if (pvVar2 == (void *)0x0) {
LAB_00b1e638:
    if (*(char *)((long)param_1 + 0x137) < '\0') {
      operator_delete((void *)param_1[0x24]);
      pvVar2 = (void *)param_1[0x20];
    }
    else {
      pvVar2 = (void *)param_1[0x20];
    }
    if (pvVar2 == (void *)0x0) {
      puVar9 = (undefined8 *)param_1[5];
      if (puVar9 != (undefined8 *)0x0) {
LAB_00b1e650:
        puVar6 = (undefined8 *)param_1[6];
        puVar3 = puVar9;
        if (puVar9 != puVar6) {
          do {
            puVar6 = puVar6 + -1;
            if (puVar6 == (undefined8 *)0x0) goto LAB_00b1e720;
            pvVar2 = (void *)*puVar6;
            if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
              FUN_00833e18(pvVar2);
              operator_delete(pvVar2);
            }
          } while (puVar6 != puVar9);
          puVar3 = (undefined8 *)param_1[5];
        }
        param_1[6] = puVar9;
        operator_delete(puVar3);
      }
LAB_00b1e748:
      pvVar2 = (void *)*param_1;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      pvVar5 = (void *)param_1[1];
      pvVar4 = pvVar2;
      if (pvVar2 != pvVar5) {
        do {
          pvVar5 = (void *)((long)pvVar5 + -0xb0);
          if (pvVar5 == (void *)0x0) goto LAB_00b1e720;
          FUN_00b1de28(pvVar5);
        } while (pvVar5 != pvVar2);
        pvVar4 = (void *)*param_1;
      }
      param_1[1] = pvVar2;
      operator_delete(pvVar4);
      return;
    }
    pvVar5 = (void *)param_1[0x21];
    uVar8 = (ulong)((long)pvVar5 + ((long)pvVar5 << 0x3f) + -2) >> 1;
    uVar7 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3f) - ((long)pvVar2 - (long)pvVar5)) >> 1;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)pvVar2 - (uint)pvVar5 | (uint)pvVar5) & 1) == 0)) {
      uVar7 = uVar7 & 0x7ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar7 * -2);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar5 == pvVar2) {
        param_1[0x21] = pvVar2;
        operator_delete(pvVar2);
        puVar9 = (undefined8 *)param_1[5];
        if (puVar9 == (undefined8 *)0x0) goto LAB_00b1e748;
        goto LAB_00b1e650;
      }
      pvVar5 = (void *)((long)pvVar5 + -2);
    } while (pvVar5 != (void *)0x0);
  }
  else {
    pvVar5 = (void *)param_1[0x2b];
    uVar7 = (ulong)(((long)pvVar2 - (long)pvVar5) * 0x1333333333333333) >> 3;
    uVar8 = (long)pvVar5 * -0x1333333333333333 - 8U >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)pvVar2 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar7 * -0x28);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar5 == pvVar2) {
        param_1[0x2b] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_00b1e638;
      }
      pvVar5 = (void *)((long)pvVar5 + -0x28);
    } while (pvVar5 != (void *)0x0);
  }
LAB_00b1e720:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b1e7cc  FUN_00b1e7cc =====

void FUN_00b1e7cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
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
  return;
}


// ===== 00b1e7f0  FUN_00b1e7f0 =====

void FUN_00b1e7f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  param_2[5] = 0;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  param_2[6] = 0;
  param_1[6] = uVar1;
  uVar1 = param_2[7];
  param_2[7] = 0;
  param_1[7] = uVar1;
  uVar1 = param_2[8];
  param_2[8] = 0;
  param_1[8] = uVar1;
  uVar1 = param_2[9];
  param_2[9] = 0;
  param_1[9] = uVar1;
  uVar1 = param_2[10];
  param_2[10] = 0;
  param_1[10] = uVar1;
  return;
}


// ===== 00b1e878  FUN_00b1e878 =====

void FUN_00b1e878(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1e984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00b1e998  FUN_00b1e998 =====

void FUN_00b1e998(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  return;
}


// ===== 00b1e9c4  FUN_00b1e9c4 =====

void FUN_00b1e9c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar1 = param_2[4];
    param_2[4] = 0;
    param_1[4] = uVar1;
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar4 = param_2[6];
    uVar3 = param_2[5];
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_1[6] = uVar4;
    param_1[5] = uVar3;
  }
  uVar1 = param_2[10];
  param_2[10] = 0;
  param_1[10] = uVar1;
  uVar1 = param_2[0xb];
  param_2[0xb] = 0;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xc];
  param_2[0xc] = 0;
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xd];
  param_2[0xd] = 0;
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xe];
  param_2[0xe] = 0;
  param_1[0xe] = uVar1;
  uVar1 = param_2[0xf];
  param_2[0xf] = 0;
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x10];
  param_2[0x10] = 0;
  param_1[0x10] = uVar1;
  uVar1 = param_2[0x11];
  param_2[0x11] = 0;
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x12];
  param_2[0x12] = 0;
  param_1[0x12] = uVar1;
  uVar1 = param_2[0x13];
  param_2[0x13] = 0;
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x14];
  param_2[0x14] = 0;
  param_1[0x14] = uVar1;
  uVar1 = param_2[0x15];
  param_2[0x15] = 0;
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x16];
  param_2[0x16] = 0;
  param_1[0x16] = uVar1;
  uVar1 = param_2[0x17];
  param_2[0x17] = 0;
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x18];
  param_2[0x18] = 0;
  param_1[0x18] = uVar1;
  uVar1 = param_2[0x19];
  param_2[0x19] = 0;
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1a];
  param_2[0x1a] = 0;
  param_1[0x1a] = uVar1;
  uVar1 = param_2[0x1b];
  param_2[0x1b] = 0;
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1c];
  param_2[0x1c] = 0;
  param_1[0x1c] = uVar1;
  uVar1 = param_2[0x1d];
  param_2[0x1d] = 0;
  param_1[0x1d] = uVar1;
  return;
}


// ===== 00b1eafc  FUN_00b1eafc =====

void FUN_00b1eafc(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  plVar2 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
  }
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
  }
  plVar2 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((*(char *)(param_1 + 0x48) == '\x01') &&
      (plVar2 = *(long **)(param_1 + 0x20), plVar2 != (long *)0x0)) &&
     (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b1ed20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00b1ed34  FUN_00b1ed34 =====

void FUN_00b1ed34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b1ed4c  FUN_00b1ed4c =====

undefined8 FUN_00b1ed4c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 ***local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 ***local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uVar6 = FUN_00adaed8(param_1,"org/webrtc/IceCandidate",&DAT_00dbaa68);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_d0;
  FUN_00ad8450(&local_80,param_1,uVar6,"getSdpMid","()Ljava/lang/String;",&DAT_00dbaa48);
  local_c0 = (undefined8 ***)FUN_004a41b4(param_1,*param_2,local_60);
  puStack_b8 = (undefined1 *)param_1;
  FUN_00ad843c(&local_80);
  FUN_00adc4e0(&local_a0,param_1,&local_c0);
  FUN_00ada608(&local_c0,puStack_b8);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  uVar6 = FUN_00adaed8(param_1,"org/webrtc/IceCandidate",&DAT_00dbaa68);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_d0;
  FUN_00ad8450(&local_80,param_1,uVar6,"getSdp","()Ljava/lang/String;",&DAT_00dbaa50);
  local_d0 = FUN_004a41b4(param_1,*param_2,local_60);
  local_c8 = param_1;
  FUN_00ad843c(&local_80);
  FUN_00adc4e0(&local_c0,param_1,&local_d0);
  FUN_00ada608(&local_d0,local_c8);
  uVar6 = FUN_00adaed8(param_1,"org/webrtc/IceCandidate",&DAT_00dbaa68);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_d0;
  FUN_00ad8450(&local_80,param_1,uVar6,"getSdpMLineIndex",&DAT_001bb71e,&DAT_00dbaa58);
  uVar5 = FUN_004c1718(param_1,*param_2,local_60);
  FUN_00ad843c(&local_80);
  puVar1 = puStack_98;
  ppppuVar3 = (undefined8 ****)local_a0;
  if (-1 < (long)local_90) {
    puVar1 = (undefined1 *)((ulong)local_90 >> 0x38);
    ppppuVar3 = &local_a0;
  }
  puVar2 = puStack_b8;
  ppppuVar4 = (undefined8 ****)local_c0;
  if (-1 < (long)local_b0) {
    puVar2 = (undefined1 *)((ulong)local_b0 >> 0x38);
    ppppuVar4 = &local_c0;
  }
  uVar6 = FUN_00afd26c(ppppuVar3,puVar1,uVar5,ppppuVar4,puVar2,0);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return uVar6;
}


// ===== 00b1efb0  FUN_00b1efb0 =====

void FUN_00b1efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 *puVar1;
  void *local_78 [2];
  char cStack_61;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00affa30(&local_60,param_5,1);
  puVar1 = puStack_58;
  if (((ulong)local_50 & 0x8000000000000000) == 0) {
    puVar1 = (undefined1 *)((ulong)local_50 >> 0x38);
  }
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x3b,"!sdp.empty()",&DAT_001fbee0,
                 "got an empty ICE candidate");
  }
  FUN_005d3510(local_78,&DAT_001b3348);
  FUN_00b1f0c4(param_1,param_2,param_3,param_4,0xffffffff,&local_60,local_78,
               *(undefined4 *)(param_5 + 0xf0));
  if (cStack_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 00b1f0c4  FUN_00b1f0c4 =====

void FUN_00b1f0c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 local_b0;
  undefined8 local_a8;
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
  
  FUN_00adcfac(&local_80);
  FUN_00adcf00(&local_90,param_2,param_6);
  FUN_00adcf00(&local_a0,param_2,param_7);
  FUN_00af6cfc(&local_b0,param_2,param_8);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/IceCandidate",&DAT_00dbaa68);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_b0;
  FUN_00ad8450(&local_70,param_2,uVar1,"<init>",
               "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lorg/webrtc/PeerConnection$AdapterType;)V"
               ,&DAT_00dbaa60);
  uVar1 = FUN_004b8418(param_2,uVar1,local_50,local_80,param_5,local_90,local_a0,local_b0);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_70);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_80,local_78);
  return;
}


// ===== 00b1f204  FUN_00b1f204 =====

/* WARNING: Removing unreachable block (ram,0x00b1f330) */

void FUN_00b1f204(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined4 uVar3;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  void *local_78 [2];
  char cStack_61;
  undefined8 ***local_60;
  ulong uStack_58;
  ulong local_50;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(&local_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    local_60 = (undefined8 ***)*param_3;
    local_50 = param_3[2];
  }
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar1 = uStack_58;
  if (-1 < (long)local_50) {
    uVar1 = local_50 >> 0x38;
  }
  ppppuVar2 = (undefined8 ****)local_60;
  if (-1 < (long)local_50) {
    ppppuVar2 = &local_60;
  }
  FUN_00afdb78(local_78,param_3);
  if (*(char *)((long)param_3 + 0x1b7) < '\0') {
    FUN_005478d8(&local_90,param_3[0x34],param_3[0x35]);
  }
  else {
    uStack_88 = param_3[0x35];
    local_90 = (void *)param_3[0x34];
    local_80 = param_3[0x36];
  }
  FUN_00b1f0c4(param_1,param_2,ppppuVar2,uVar1,uVar3,local_78,&local_90,0);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if (cStack_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}


// ===== 00b1f344  FUN_00b1f344 =====

void FUN_00b1f344(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_3;
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/IceCandidate",&DAT_00dbaa68);
    uVar2 = (**(code **)(*param_2 + 0x560))(param_2,1,uVar2,0);
    uVar3 = *puVar1;
    *param_1 = uVar2;
    param_1[1] = param_2;
    FUN_00b1f204(&local_40,param_2,uVar3);
    (**(code **)(*param_2 + 0x570))(param_2,uVar2,0,local_40);
    FUN_00ada608(&local_40,local_38);
    operator_delete(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b1f428  FUN_00b1f428 =====

undefined4 FUN_00b1f428(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  piVar1 = (int *)&local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x3) &&
       ((short)*local_40 == 0x4c41 && *(char *)((long)local_40 + 2) == 'L')) {
      uVar2 = 3;
      goto LAB_00b1f530;
    }
    if ((puStack_38 == (undefined1 *)0x5) && (*local_40 == 0x414c4552 && (char)local_40[1] == 'Y'))
    {
      uVar2 = 1;
      goto LAB_00b1f530;
    }
    if ((puStack_38 == (undefined1 *)0x6) &&
       (*local_40 == 0x4f484f4e && (short)local_40[1] == 0x5453)) {
      uVar2 = 2;
      goto LAB_00b1f530;
    }
    piVar1 = local_40;
    if (puStack_38 != (undefined1 *)0x4) goto LAB_00b1f5f8;
  }
  else {
    if (4 < local_30._7_1_) {
      if (local_30._7_1_ == 5) {
        if ((int)local_40 == 0x414c4552 && local_40._4_1_ == 'Y') {
          return 1;
        }
      }
      else if ((local_30._7_1_ == 6) && ((int)local_40 == 0x4f484f4e && local_40._4_2_ == 0x5453)) {
        return 2;
      }
      goto LAB_00b1f5f8;
    }
    if (local_30._7_1_ == 3) {
      if ((short)local_40 == 0x4c41 && local_40._2_1_ == 'L') {
        return 3;
      }
      goto LAB_00b1f5f8;
    }
    if (local_30._7_1_ != 4) goto LAB_00b1f5f8;
  }
  if (*piVar1 != 0x454e4f4e) {
LAB_00b1f5f8:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x68,"false",&DAT_002544f2,
                 "Unexpected IceTransportsType enum_name ",&local_40);
  }
  uVar2 = 0;
LAB_00b1f530:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar2;
}


// ===== 00b1f624  FUN_00b1f624 =====

undefined4 FUN_00b1f624(void)

{
  long **pplVar1;
  undefined4 uVar2;
  long *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  pplVar1 = &local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x8) && (*local_40 == 0x4445434e414c4142)) {
      uVar2 = 0;
      goto LAB_00b1f738;
    }
    if ((puStack_38 == (undefined1 *)0x9) &&
       (*local_40 == 0x4c444e554258414d && (char)local_40[1] == 'E')) {
      uVar2 = 1;
      goto LAB_00b1f738;
    }
    pplVar1 = (long **)local_40;
    if (puStack_38 != (undefined1 *)0x9) goto LAB_00b1f7a0;
  }
  else {
    if (local_30._7_1_ == '\b') {
      if (local_40 == (long *)0x4445434e414c4142) {
        return 0;
      }
      goto LAB_00b1f7a0;
    }
    if (local_30._7_1_ != '\t') goto LAB_00b1f7a0;
    if (local_40 == (long *)0x4c444e554258414d && (char)puStack_38 == 'E') {
      return 1;
    }
  }
  if (*pplVar1 != (long *)0x41504d4f4358414d || (char)((long *)pplVar1)[1] != 'T') {
LAB_00b1f7a0:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x7a,"false",&DAT_002544f2,
                 "Unexpected BundlePolicy enum_name ",&local_40);
  }
  uVar2 = 2;
LAB_00b1f738:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar2;
}


// ===== 00b1f7cc  FUN_00b1f7cc =====

undefined4 FUN_00b1f7cc(void)

{
  long **pplVar1;
  undefined4 uVar2;
  long *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  pplVar1 = &local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x9) &&
       (*local_40 == 0x544149544f47454e && (char)local_40[1] == 'E')) {
      uVar2 = 0;
      goto joined_r0x00b1f8e8;
    }
    pplVar1 = (long **)local_40;
    if (puStack_38 != (undefined1 *)0x7) goto LAB_00b1f8f0;
  }
  else if (local_30._7_1_ != '\a') {
    if ((local_30._7_1_ == '\t') &&
       (local_40 == (long *)0x544149544f47454e && (char)puStack_38 == 'E')) {
      return 0;
    }
    goto LAB_00b1f8f0;
  }
  if ((int)*pplVar1 != 0x55514552 || *(int *)((long)pplVar1 + 3) != 0x45524955) {
LAB_00b1f8f0:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x89,"false",&DAT_002544f2,
                 "Unexpected RtcpMuxPolicy enum_name ",&local_40);
  }
  uVar2 = 1;
joined_r0x00b1f8e8:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar2;
}


// ===== 00b1f91c  FUN_00b1f91c =====

undefined4 FUN_00b1f91c(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  plVar2 = &local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x7) &&
       ((int)*local_40 == 0x42414e45 && *(int *)((long)local_40 + 3) == 0x44454c42)) {
      uVar3 = 0;
      goto joined_r0x00b1fa28;
    }
    plVar2 = local_40;
    if (puStack_38 != (undefined1 *)0x8) goto LAB_00b1fa30;
  }
  else {
    if (local_30._7_1_ == '\a') {
      iVar1 = (int)local_40;
      if (iVar1 == 0x42414e45 && local_40._3_4_ == 0x44454c42) {
        return 0;
      }
      goto LAB_00b1fa30;
    }
    if (local_30._7_1_ != '\b') goto LAB_00b1fa30;
  }
  if (*plVar2 != 0x44454c4241534944) {
LAB_00b1fa30:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x98,"false",&DAT_002544f2,
                 "Unexpected TcpCandidatePolicy enum_name ",&local_40);
  }
  uVar3 = 1;
joined_r0x00b1fa28:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar3;
}


// ===== 00b1fa5c  FUN_00b1fa5c =====

undefined4 FUN_00b1fa5c(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  plVar1 = &local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x3) &&
       ((short)*local_40 == 0x4c41 && *(char *)((long)local_40 + 2) == 'L')) {
      uVar2 = 0;
      goto joined_r0x00b1fb58;
    }
    plVar1 = local_40;
    if (puStack_38 != (undefined1 *)0x8) goto LAB_00b1fb60;
  }
  else {
    if (local_30._7_1_ == '\x03') {
      if ((short)local_40 == 0x4c41 && local_40._2_1_ == 'L') {
        return 0;
      }
      goto LAB_00b1fb60;
    }
    if (local_30._7_1_ != '\b') goto LAB_00b1fb60;
  }
  if (*plVar1 != 0x54534f435f574f4c) {
LAB_00b1fb60:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0xa8,"false",&DAT_002544f2,
                 "Unexpected CandidateNetworkPolicy enum_name ",&local_40);
  }
  uVar2 = 1;
joined_r0x00b1fb58:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar2;
}


// ===== 00b1fb8c  FUN_00b1fb8c =====

undefined4 FUN_00b1fb8c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  piVar1 = (int *)&local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x3) &&
       ((short)*local_40 == 0x5352 && *(char *)((long)local_40 + 2) == 'A')) {
      uVar2 = 0;
      goto joined_r0x00b1fc8c;
    }
    piVar1 = local_40;
    if (puStack_38 != (undefined1 *)0x5) goto LAB_00b1fc94;
  }
  else {
    if (local_30._7_1_ == '\x03') {
      if ((short)local_40 == 0x5352 && local_40._2_1_ == 'A') {
        return 0;
      }
      goto LAB_00b1fc94;
    }
    if (local_30._7_1_ != '\x05') goto LAB_00b1fc94;
  }
  if (*piVar1 != 0x53444345 || (char)piVar1[1] != 'A') {
LAB_00b1fc94:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0xb5,"false",&DAT_002544f2,
                 "Unexpected KeyType enum_name ",&local_40);
  }
  uVar2 = 1;
joined_r0x00b1fc8c:
  if ((long)local_30 < 0) {
    operator_delete(local_40);
  }
  return uVar2;
}


// ===== 00b1fcc0  FUN_00b1fcc0 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00b1fcc0(void)

{
  long *plVar1;
  undefined4 uVar2;
  long local_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined8 local_30;
  
  plVar1 = &local_40;
  uStack_38 = 0xaaaaaa;
  uStack_35 = 0xaaaaaaaaaa;
  local_40._0_3_ = 0xaaaaaa;
  local_40._3_5_ = 0xaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((CONCAT53(uStack_35,uStack_38) == 0xb) &&
       (*(long *)CONCAT53(local_40._3_5_,(undefined3)local_40) == 0x4f5f524548544147 &&
        *(long *)((long)CONCAT53(local_40._3_5_,(undefined3)local_40) + 3) == 0x45434e4f5f524548)) {
      uVar2 = 0;
      goto joined_r0x00b1fe0c;
    }
    if (CONCAT53(uStack_35,uStack_38) != 0x12) goto LAB_00b1fe14;
    plVar1 = (long *)CONCAT53(local_40._3_5_,(undefined3)local_40);
  }
  else {
    if (local_30._7_1_ == '\v') {
      if (CONCAT53(local_40._3_5_,(undefined3)local_40) == 0x4f5f524548544147 &&
          CONCAT35(uStack_38,local_40._3_5_) == 0x45434e4f5f524548) {
        return 0;
      }
      goto LAB_00b1fe14;
    }
    if (local_30._7_1_ != '\x12') goto LAB_00b1fe14;
  }
  if ((*plVar1 != 0x435f524548544147 || plVar1[1] != 0x4c41554e49544e4f) ||
      (short)plVar1[2] != 0x594c) {
LAB_00b1fe14:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0xc4,"false",&DAT_002544f2,
                 "Unexpected ContinualGatheringPolicy enum name ",&local_40);
  }
  uVar2 = 1;
joined_r0x00b1fe0c:
  if ((long)local_30 < 0) {
    operator_delete((void *)CONCAT53(local_40._3_5_,(undefined3)local_40));
  }
  return uVar2;
}


// ===== 00b1fe40  FUN_00b1fe40 =====

undefined8 FUN_00b1fe40(void)

{
  long **pplVar1;
  undefined8 uVar2;
  long *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    pplVar1 = (long **)local_40;
    if (puStack_38 == (undefined1 *)0x8) goto LAB_00b1fe9c;
    if (puStack_38 == (undefined1 *)0x17) {
LAB_00b1fedc:
      if ((*local_40 != 0x41425f454e555250 || local_40[1] != 0x505f4e4f5f444553) ||
          *(long *)((long)local_40 + 0xf) != 0x595449524f495250) goto LAB_00b1ffa8;
      uVar2 = 1;
      goto LAB_00b1ff74;
    }
LAB_00b1ff30:
    pplVar1 = (long **)local_40;
    if (puStack_38 != (undefined1 *)0x10) goto LAB_00b1ffa8;
LAB_00b1ff3c:
    if (*pplVar1 != (long *)0x5249465f5045454b || ((long *)pplVar1)[1] != 0x59444145525f5453) {
LAB_00b1ffa8:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0xd7,"false",&DAT_002544f2,
                   " Unexpected PortPrunePolicy enum name ",&local_40);
    }
    uVar2 = 2;
  }
  else {
    pplVar1 = &local_40;
    if (local_30._7_1_ != '\b') {
      pplVar1 = &local_40;
      if (local_30._7_1_ != '\x10') goto LAB_00b1ffa8;
      goto LAB_00b1ff3c;
    }
LAB_00b1fe9c:
    if (*pplVar1 != (long *)0x454e5552505f4f4e) {
      if (((long)local_30 < 0) && (puStack_38 == (undefined1 *)0x17)) goto LAB_00b1fedc;
      if (-1 < (long)local_30) goto LAB_00b1ffa8;
      goto LAB_00b1ff30;
    }
    uVar2 = 0;
  }
  if (-1 < (long)local_30) {
    return uVar2;
  }
LAB_00b1ff74:
  operator_delete(local_40);
  return uVar2;
}


// ===== 00b1ffd4  FUN_00b1ffd4 =====

undefined4 FUN_00b1ffd4(void)

{
  undefined4 uVar1;
  long *local_40;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined6 uStack_30;
  undefined1 uStack_2a;
  char cStack_29;
  
  uStack_38 = 0xaaaaaaaaaaaa;
  uStack_32 = 0xaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_30 = 0xaaaaaaaaaaaa;
  uStack_2a = 0xaa;
  cStack_29 = -0x56;
  FUN_00adc1dc(&local_40);
  if (cStack_29 < '\0') {
    if ((CONCAT26(uStack_32,uStack_38) == 0x16) &&
       ((*local_40 == 0x545245435f534c54 && local_40[1] == 0x5f5943494c4f505f) &&
        *(long *)((long)local_40 + 0xe) == 0x4552554345535f59)) {
      uVar1 = 0;
    }
    else {
      if ((CONCAT26(uStack_32,uStack_38) != 0x21) ||
         ((((*local_40 != 0x545245435f534c54 || local_40[1] != 0x5f5943494c4f505f) ||
           local_40[2] != 0x4552554345534e49) || local_40[3] != 0x434548435f4f4e5f) ||
          (char)local_40[4] != 'K')) goto LAB_00b20140;
      uVar1 = 1;
    }
    operator_delete(local_40);
  }
  else {
    if ((cStack_29 != '\x16') ||
       ((local_40 != (long *)0x545245435f534c54 ||
        CONCAT26(uStack_32,uStack_38) != 0x5f5943494c4f505f) ||
        CONCAT62(uStack_30,uStack_32) != 0x4552554345535f59)) {
LAB_00b20140:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0xe7,"false",&DAT_002544f2,
                   "Unexpected TlsCertPolicy enum_name ",&local_40);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00b2016c  FUN_00b2016c =====

undefined8 FUN_00b2016c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  
  plVar2 = &local_40;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adc1dc(&local_40);
  if ((long)local_30 < 0) {
    if ((puStack_38 == (undefined1 *)0x7) &&
       ((int)*local_40 == 0x4e4b4e55 && *(int *)((long)local_40 + 3) == 0x4e574f4e)) {
      uVar3 = 0;
    }
    else if ((puStack_38 == (undefined1 *)0x8) && (*local_40 == 0x54454e5245485445)) {
      uVar3 = 0x100000001;
    }
    else {
      uVar3 = 0x100000002;
      if ((puStack_38 != (undefined1 *)0x4) || ((int)*local_40 != 0x49464957)) {
        if ((puStack_38 == (undefined1 *)0x8) && (*local_40 == 0x52414c554c4c4543)) {
          uVar3 = 0x100000004;
          goto LAB_00b203f8;
        }
        if ((puStack_38 != (undefined1 *)0x3) ||
           ((short)*local_40 != 0x5056 || *(char *)((long)local_40 + 2) != 'N')) {
          plVar2 = local_40;
          if (puStack_38 != (undefined1 *)0x8) goto LAB_00b20420;
          goto LAB_00b202cc;
        }
        uVar3 = 0x100000008;
      }
    }
  }
  else {
    iVar1 = (int)local_40;
    if (local_30._7_1_ < 7) {
      if (local_30._7_1_ == 3) {
        if ((short)local_40 == 0x5056 && local_40._2_1_ == 'N') {
          return 0x100000008;
        }
      }
      else if ((local_30._7_1_ == 4) && ((int)local_40 == 0x49464957)) {
        return 0x100000002;
      }
      goto LAB_00b20420;
    }
    if (local_30._7_1_ == 7) {
      if (iVar1 == 0x4e4b4e55 && local_40._3_4_ == 0x4e574f4e) {
        return 0;
      }
      goto LAB_00b20420;
    }
    if (local_30._7_1_ != 8) goto LAB_00b20420;
    if (local_40 == (long *)0x54454e5245485445) {
      return 0x100000001;
    }
    if (local_40 == (long *)0x52414c554c4c4543) {
      uVar3 = 0x100000004;
    }
    else {
LAB_00b202cc:
      if (*plVar2 != 0x4b434142504f4f4c) {
LAB_00b20420:
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../sdk/android/src/jni/pc/ice_candidate.cc",0x102,"false",&DAT_002544f2,
                     "Unexpected NetworkPreference enum_name ",&local_40);
      }
      uVar3 = 0x100000010;
    }
  }
  if (-1 < (long)local_30) {
    return uVar3;
  }
LAB_00b203f8:
  operator_delete(local_40);
  return uVar3;
}


// ===== 00b2044c  FUN_00b2044c =====

void FUN_00b2044c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ebea0(param_1);
  if (*param_3 != 0) {
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions",&DAT_00dbaa78);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar2,"getSrtp","()Lorg/webrtc/CryptoOptions$Srtp;",&DAT_00dbaa70
                );
    uVar2 = FUN_004a41b4(param_2,*param_3,local_60);
    local_90 = uVar2;
    uStack_88 = param_2;
    FUN_00ad843c(&local_80);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions",&DAT_00dbaa78);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar3,"getSFrame","()Lorg/webrtc/CryptoOptions$SFrame;",
                 &DAT_00dbaa80);
    uVar3 = FUN_004a41b4(param_2,*param_3,local_60);
    local_a0 = uVar3;
    uStack_98 = param_2;
    FUN_00ad843c(&local_80);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions$Srtp",&DAT_00dbaa90);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar4,"getEnableGcmCryptoSuites",&DAT_001be1bc,&DAT_00dbaa88);
    cVar1 = FUN_004c17b4(param_2,uVar2,local_60);
    FUN_00ad843c(&local_80);
    *(bool *)param_1 = cVar1 != '\0';
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions$Srtp",&DAT_00dbaa90);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar4,"getEnableAes128Sha1_32CryptoCipher",&DAT_001be1bc,
                 &DAT_00dbaa98);
    cVar1 = FUN_004c17b4(param_2,uVar2,local_60);
    FUN_00ad843c(&local_80);
    *(bool *)((long)param_1 + 1) = cVar1 != '\0';
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions$Srtp",&DAT_00dbaa90);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar4,"getEnableEncryptedRtpHeaderExtensions",&DAT_001be1bc,
                 &DAT_00dbaaa0);
    cVar1 = FUN_004c17b4(param_2,uVar2,local_60);
    FUN_00ad843c(&local_80);
    *(bool *)((long)param_1 + 3) = cVar1 != '\0';
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/CryptoOptions$SFrame",&DAT_00dbaab0);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)&local_a0;
    FUN_00ad8450(&local_80,param_2,uVar2,"getRequireFrameEncryption",&DAT_001be1bc,&DAT_00dbaaa8);
    cVar1 = FUN_004c17b4(param_2,uVar3,local_60);
    FUN_00ad843c(&local_80);
    *(bool *)((long)param_1 + 4) = cVar1 != '\0';
    FUN_00ada608(&local_a0,param_2);
    FUN_00ada608(&local_90,param_2);
  }
  return;
}


// ===== 00b20790  Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioSource =====

undefined8
Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioSource
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  local_80 = param_4;
  pvVar2 = (void *)FUN_00b1d47c(param_1,&local_80);
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897504(&local_70);
  FUN_00d0b150(pvVar2,&local_70);
  local_78 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_3 + 0x20) + 0x48))(&local_78,*(long **)(param_3 + 0x20),&local_70);
  plVar1 = local_78;
  local_78 = (long *)0x0;
  uVar3 = FUN_00adde38(plVar1);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 8))(local_78);
  }
  FUN_00897538(&local_70);
  if (pvVar2 != (void *)0x0) {
    FUN_00afbb14((long)pvVar2 + 0x18);
    FUN_00afbb14(pvVar2);
    operator_delete(pvVar2);
  }
  return uVar3;
}


// ===== 00b20864  Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioTrack =====

undefined8
Java_org_webrtc_PeerConnectionFactory_nativeCreateAudioTrack
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_48;
  void *local_40 [2];
  char cStack_29;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  plVar2 = *(long **)(param_3 + 0x20);
  local_48 = param_4;
  FUN_00adc4e0(local_40,param_1,&local_48);
  (**(code **)(*plVar2 + 0x58))(&local_28,plVar2,local_40,param_5);
  if (cStack_29 < '\0') {
    operator_delete(local_40[0]);
  }
  plVar2 = local_28;
  local_28 = (long *)0x0;
  uVar1 = FUN_00adde38(plVar2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  return uVar1;
}


// ===== 00b2090c  Java_org_webrtc_PeerConnectionFactory_nativeCreateLocalMediaStream =====

undefined8
Java_org_webrtc_PeerConnectionFactory_nativeCreateLocalMediaStream
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_40;
  void *local_38 [2];
  char cStack_21;
  long *local_8;
  
  local_8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  plVar2 = *(long **)(param_3 + 0x20);
  local_40 = param_4;
  FUN_00adc4e0(local_38,param_1,&local_40);
  (**(code **)(*plVar2 + 0x40))(&local_8,plVar2,local_38);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  plVar2 = local_8;
  local_8 = (long *)0x0;
  uVar1 = FUN_00adde38(plVar2);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1;
}


// ===== 00b209ac  Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnection =====

undefined8
Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnection
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,void *param_5,
          long *param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long local_2f8;
  void *local_2f0;
  undefined8 uStack_2e8;
  long *local_2e0;
  undefined1 auStack_2d8 [88];
  undefined1 *local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  long *local_258;
  undefined1 *local_250;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  long *plStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long *local_1b8;
  long *local_1b0;
  long *plStack_1a8;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_1a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
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
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_2f8 = param_7;
  local_2f0 = param_5;
  uStack_2e8 = param_4;
  FUN_00b1e41c(&local_1e0,1);
  FUN_00af6dac(param_1,&uStack_2e8,&local_1e0);
  if ((local_1b8 == local_1b0) && (iVar3 = FUN_00af8b48(param_1,&uStack_2e8), iVar3 != 1)) {
    local_280 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008342c0(auStack_2d8,iVar3);
    local_240 = (undefined1 *)((ulong)local_240 & 0xffffffffffffff00);
    puStack_238 = (undefined1 *)((ulong)puStack_238 & 0xffffffffffffff00);
    FUN_00b22554(&local_280,auStack_2d8,&local_240);
    puVar1 = local_280;
    if (local_280 == (undefined1 *)0x0) {
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../sdk/android/src/jni/pc/peer_connection_factory.cc",0xf4b,
                     "Failed to generate certificate. KeyType: ",iVar3);
      }
    }
    else if (local_1b0 < plStack_1a8) {
      if (local_1b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar5 = local_1b0 + 1;
      *local_1b0 = (long)local_280;
      FUN_00d0f740(1,local_280);
      local_1b0 = plVar5;
    }
    else {
      local_1b0 = (long *)FUN_00afb0bc(&local_1b8,&local_280);
    }
    puVar2 = local_280;
    if ((local_280 != (undefined1 *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_280), iVar3 == 1)
       ) {
      FUN_00833e18(puVar2);
      operator_delete(puVar2);
    }
    param_5 = local_2f0;
    if (puVar1 == (undefined1 *)0x0) {
      uVar8 = 0;
      goto LAB_00b20cac;
    }
  }
  if (param_5 != (void *)0x0) {
    param_5 = (void *)FUN_00b1d47c(param_1,&local_2f0);
    FUN_00d0aec0(param_5,&local_1e0);
  }
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_208 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
  local_240 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b1e7cc(&local_240,param_6);
  plVar5 = plStack_208;
  if (local_2f8 != 0) {
    plVar5 = (long *)operator_new(0x10);
    FUN_00d09f64(plVar5,param_1,&local_2f8);
    if (plStack_208 != (long *)0x0) {
      lVar7 = *plStack_208;
      plStack_208 = plVar5;
      (**(code **)(lVar7 + 8))();
      plVar5 = plStack_208;
    }
  }
  plStack_208 = plVar5;
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  local_258 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
  local_280 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  plVar5 = *(long **)(param_3 + 0x20);
  FUN_00b1e7f0(auStack_2d8,&local_240);
  (**(code **)(*plVar5 + 0x28))(&local_280,plVar5,&local_1e0,auStack_2d8);
  FUN_00b1e878(auStack_2d8);
  if ((int)local_280 == 0) {
    pvVar6 = operator_new(0x18);
    local_2e0 = local_258;
    if (((ulong)local_250 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    local_258 = (long *)0x0;
    FUN_00afa320(pvVar6,&local_2e0,param_6,param_5);
    uVar8 = FUN_00adde38(pvVar6);
    if (local_2e0 != (long *)0x0) {
      (**(code **)(*local_2e0 + 8))(local_2e0);
    }
    param_5 = (void *)0x0;
    param_6 = (long *)0x0;
  }
  else {
    uVar8 = 0;
  }
  if ((((ulong)local_250 & 1) != 0) && (local_258 != (long *)0x0)) {
    (**(code **)(*local_258 + 8))();
  }
  if ((long)puStack_268 < 0) {
    operator_delete(puStack_278);
  }
  FUN_00b1e878(&local_240);
  if (param_5 != (void *)0x0) {
    FUN_00afbb14((long)param_5 + 0x18);
    FUN_00afbb14(param_5);
    operator_delete(param_5);
  }
LAB_00b20cac:
  FUN_00b1e590(&local_1e0);
  if (param_6 != (long *)0x0) {
    (**(code **)(*param_6 + 8))(param_6);
  }
  return uVar8;
}


// ===== 00b20d30  Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnectionFactory =====

undefined1 *
Java_org_webrtc_PeerConnectionFactory_nativeCreatePeerConnectionFactory
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long *param_6,long *param_7,long *param_8,undefined8 param_9,undefined8 param_10,
          long *param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
          undefined8 param_15,undefined8 param_16)

{
  undefined1 *puVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  local_98 = param_9;
  local_a0 = param_10;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_90 = param_4;
  if (param_5 != 0) {
    if (param_11 != (long *)0x0) {
      (**(code **)*param_11)(param_11);
      param_2 = extraout_x1;
    }
    local_70[0] = param_6;
    if (param_6 != (long *)0x0) {
      (**(code **)*param_6)(param_6);
      param_2 = extraout_x1_00;
    }
    local_88 = param_11;
    local_80 = param_8;
    local_78 = param_7;
    FUN_00b21af8(&local_b0,param_1,param_2,&uStack_90,param_5,local_70,&local_78,&local_80,&local_98
                 ,&local_a0,&local_88,param_12,param_13,param_14,param_15,param_16);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 8))();
    }
    puVar1 = local_b0;
    local_b0 = (undefined1 *)0x0;
    FUN_00ada608(&local_b0,puStack_a8);
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x16a,"env != nullptr",
               &DAT_001f5fa0);
}


// ===== 00b20ea8  Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoSource =====

void Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoSource
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00b22bf0(param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10));
  FUN_00adde38();
  return;
}


// ===== 00b20ec8  Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoTrack =====

undefined8
Java_org_webrtc_PeerConnectionFactory_nativeCreateVideoTrack
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  long *local_30;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  plVar3 = *(long **)(param_3 + 0x20);
  local_50 = param_4;
  local_30 = param_5;
  if (param_5 != (long *)0x0) {
    (**(code **)*param_5)(param_5);
  }
  FUN_00adc4e0(&local_48,param_1,&local_50);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &local_48;
  }
  (**(code **)(*plVar3 + 0x50))(&local_28,plVar3,&local_30,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  plVar3 = local_28;
  local_28 = (long *)0x0;
  uVar2 = FUN_00adde38(plVar3);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  return uVar2;
}


// ===== 00b20fb8  Java_org_webrtc_PeerConnectionFactory_nativeDeleteLoggable =====

void Java_org_webrtc_PeerConnectionFactory_nativeDeleteLoggable(void)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  
  if (((DAT_00dbaac0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaac0), iVar2 != 0)) {
    DAT_00dbaab8 = (undefined8 *)operator_new(0x10);
    *DAT_00dbaab8 = 0;
    DAT_00dbaab8[1] = 0;
    FUN_0054ff1c(&DAT_00dbaac0);
  }
  puVar1 = DAT_00dbaab8;
  if (DAT_00dbaab8[1] != 0) {
    FUN_00623a50();
    plVar3 = (long *)puVar1[1];
    puVar1[1] = 0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2100c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


// ===== 00b2105c  Java_org_webrtc_PeerConnectionFactory_nativeFreeFactory =====

void Java_org_webrtc_PeerConnectionFactory_nativeFreeFactory
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_3 != (long *)0x0) {
    if ((long *)param_3[4] != (long *)0x0) {
      (**(code **)(*(long *)param_3[4] + 8))();
    }
    plVar2 = (long *)param_3[3];
    param_3[3] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = (long *)param_3[2];
    param_3[2] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = (long *)param_3[1];
    param_3[1] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = (long *)*param_3;
    *param_3 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(param_3);
  }
  FUN_008b6480(0);
  if (((DAT_00dbaac0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaac0), iVar1 != 0)) {
    DAT_00dbaab8 = (undefined8 *)operator_new(0x10);
    *DAT_00dbaab8 = 0;
    DAT_00dbaab8[1] = 0;
    FUN_0054ff1c(&DAT_00dbaac0);
  }
  puVar3 = (undefined8 *)*DAT_00dbaab8;
  *DAT_00dbaab8 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      operator_delete((void *)*puVar3);
    }
    operator_delete(puVar3);
    return;
  }
  return;
}


// ===== 00b21190  Java_org_webrtc_PeerConnectionFactory_nativeGetNativePeerConnectionFactory =====

void Java_org_webrtc_PeerConnectionFactory_nativeGetNativePeerConnectionFactory
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00adde38(*(undefined8 *)(param_3 + 0x20));
  return;
}


// ===== 00b2119c  Java_org_webrtc_PeerConnectionFactory_nativeGetRtpReceiverCapabilities =====

undefined1 *
Java_org_webrtc_PeerConnectionFactory_nativeGetRtpReceiverCapabilities
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [72];
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  plVar3 = *(long **)(param_3 + 0x20);
  local_70 = param_4;
  uVar2 = FUN_00af36ac(param_1,&local_70);
  (**(code **)(*plVar3 + 0x38))(auStack_68,plVar3,uVar2);
  FUN_00d04c04(&local_80,param_1,auStack_68);
  FUN_00669380(auStack_68);
  puVar1 = local_80;
  local_80 = (undefined1 *)0x0;
  FUN_00ada608(&local_80,puStack_78);
  return puVar1;
}


// ===== 00b21224  Java_org_webrtc_PeerConnectionFactory_nativeGetRtpSenderCapabilities =====

undefined1 *
Java_org_webrtc_PeerConnectionFactory_nativeGetRtpSenderCapabilities
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [72];
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  plVar3 = *(long **)(param_3 + 0x20);
  local_70 = param_4;
  uVar2 = FUN_00af36ac(param_1,&local_70);
  (**(code **)(*plVar3 + 0x30))(auStack_68,plVar3,uVar2);
  FUN_00d04c04(&local_80,param_1,auStack_68);
  FUN_00669380(auStack_68);
  puVar1 = local_80;
  local_80 = (undefined1 *)0x0;
  FUN_00ada608(&local_80,puStack_78);
  return puVar1;
}


// ===== 00b212ac  Java_org_webrtc_PeerConnectionFactory_nativeInitializeAndroidGlobals =====

void Java_org_webrtc_PeerConnectionFactory_nativeInitializeAndroidGlobals(void)

{
  if ((DAT_00dbaac8 & 1) == 0) {
    FUN_00ad9d28();
    FUN_0089fcd8();
    DAT_00dbaac8 = 1;
  }
  return;
}


// ===== 00b212e8  Java_org_webrtc_PeerConnectionFactory_nativeInitializeFieldTrials =====

void Java_org_webrtc_PeerConnectionFactory_nativeInitializeFieldTrials
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_40 = param_3;
  if (((DAT_00dbaac0 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbaac0), iVar4 != 0)) {
    DAT_00dbaab8 = (undefined8 *)operator_new(0x10);
    *DAT_00dbaab8 = 0;
    DAT_00dbaab8[1] = 0;
    FUN_0054ff1c(&DAT_00dbaac0);
  }
  puVar8 = DAT_00dbaab8;
  if (local_40 != 0) {
    FUN_00adc4e0(&local_38,param_1,&local_40);
    puVar5 = (undefined8 *)operator_new(0x18);
    lVar3 = local_28;
    uVar2 = uStack_30;
    pvVar1 = local_38;
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    puVar5[1] = uVar2;
    *puVar5 = pvVar1;
    puVar5[2] = lVar3;
    puVar7 = (undefined8 *)*puVar8;
    *puVar8 = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        operator_delete((void *)*puVar7);
      }
      operator_delete(puVar7);
      if (local_28 < 0) {
        operator_delete(local_38);
      }
    }
    plVar6 = (long *)*puVar8;
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    FUN_008b6480(plVar6);
    return;
  }
  puVar8 = (undefined8 *)*DAT_00dbaab8;
  *DAT_00dbaab8 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      operator_delete((void *)*puVar8);
    }
    operator_delete(puVar8);
  }
  FUN_008b6480(0);
  return;
}


// ===== 00b21448  Java_org_webrtc_PeerConnectionFactory_nativeInitializeInternalTracer =====

void Java_org_webrtc_PeerConnectionFactory_nativeInitializeInternalTracer(void)

{
  long *plVar1;
  int iVar2;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_48 = 0;
  local_50 = (long *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_008b60e8(&local_80,&local_50);
  plVar1 = local_50;
  if ((local_50 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_50 + 1), iVar2 == 1)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  FUN_0066d9e0(&local_80,1);
  plVar1 = local_80;
  if ((local_80 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_80 + 1), iVar2 == 1)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00b214f8  Java_org_webrtc_PeerConnectionFactory_nativeInjectLoggable =====

void Java_org_webrtc_PeerConnectionFactory_nativeInjectLoggable
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 local_38;
  
  local_38 = param_3;
  if (((DAT_00dbaac0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbaac0), iVar2 != 0)) {
    DAT_00dbaab8 = (undefined8 *)operator_new(0x10);
    *DAT_00dbaab8 = 0;
    DAT_00dbaab8[1] = 0;
    FUN_0054ff1c(&DAT_00dbaac0);
  }
  puVar1 = DAT_00dbaab8;
  if (DAT_00dbaab8[1] != 0) {
    FUN_00623a50();
  }
  pvVar3 = operator_new(0x20);
  FUN_00d0ab18(pvVar3,param_1,&local_38);
  plVar4 = (long *)puVar1[1];
  puVar1[1] = pvVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    pvVar3 = (void *)puVar1[1];
  }
  FUN_00623970(pvVar3,param_4);
  FUN_006238a0(4);
  return;
}


// ===== 00b215d0  Java_org_webrtc_PeerConnectionFactory_nativePrintStackTrace =====

void Java_org_webrtc_PeerConnectionFactory_nativePrintStackTrace
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *local_50;
  void *local_48;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_0066f708(&local_50,param_3);
    FUN_0066fbb4(local_38,&local_50);
    FUN_00623bb0(&DAT_001f627a,"../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x1212,
                 local_38);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
    if (local_50 != (void *)0x0) {
      uVar1 = (ulong)(((long)local_50 - (long)local_48) * 0x1555555555555555) >> 3;
      uVar2 = (long)local_48 * -0x1555555555555555 - 8U >> 3;
      if (uVar2 <= uVar1) {
        uVar1 = uVar2;
      }
      if ((1 < uVar1) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 7U) == 0)) {
        uVar1 = uVar1 & 0x1ffffffffffffffe;
        local_48 = (void *)((long)local_48 + uVar1 * -0x18);
        do {
          uVar1 = uVar1 - 2;
        } while (uVar1 != 0);
      }
      while (local_48 != local_50) {
        local_48 = (void *)((long)local_48 + -0x18);
        if (local_48 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 00b216fc  Java_org_webrtc_PeerConnectionFactory_nativeShutdownInternalTracer =====

void Java_org_webrtc_PeerConnectionFactory_nativeShutdownInternalTracer(void)

{
  FUN_0066e004();
  return;
}


// ===== 00b21704  Java_org_webrtc_PeerConnectionFactory_nativeStartAecDump =====

uint Java_org_webrtc_PeerConnectionFactory_nativeStartAecDump
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  FILE *pFVar2;
  
  pFVar2 = fdopen(param_4,"wb");
  if (pFVar2 == (FILE *)0x0) {
    close(param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_3 + 0x20) + 0x60))
                      (*(long **)(param_3 + 0x20),pFVar2,(long)param_5);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


// ===== 00b21778  Java_org_webrtc_PeerConnectionFactory_nativeStartInternalTracingCapture =====

uint Java_org_webrtc_PeerConnectionFactory_nativeStartInternalTracingCapture
               (long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char *__s;
  ulong uVar2;
  size_t sVar3;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ed3,"../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x749,
                   "Starting internal tracing to: ",__s);
    }
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar3 = strlen(__s);
    uVar1 = FUN_0066dd48(__s,sVar3);
    uVar1 = uVar1 & 1;
    (**(code **)(*param_1 + 0x550))(param_1,param_3,__s);
  }
  return uVar1;
}


// ===== 00b21844  Java_org_webrtc_PeerConnectionFactory_nativeStopAecDump =====

void Java_org_webrtc_PeerConnectionFactory_nativeStopAecDump
               (undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00b21854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 0x20) + 0x68))();
  return;
}


// ===== 00b21858  Java_org_webrtc_PeerConnectionFactory_nativeStopInternalTracingCapture =====

void Java_org_webrtc_PeerConnectionFactory_nativeStopInternalTracingCapture(void)

{
  FUN_0066dee8();
  return;
}


// ===== 00b21860  FUN_00b21860 =====

void FUN_00b21860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *local_a0;
  undefined1 *puStack_98;
  code *local_90;
  code *pcStack_88;
  undefined1 *local_80;
  undefined1 uStack_71;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  undefined1 uStack_51;
  
  pvVar1 = operator_new(0x28);
  FUN_00b241f8(pvVar1,param_4,param_5,param_6,param_7,param_3);
  uVar2 = FUN_00adde38(pvVar1);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/PeerConnectionFactory",&DAT_00dbaad8);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_88 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_a0,param_2,uVar3,"<init>",&DAT_001cf399,&DAT_00dbaad0);
  uVar3 = FUN_004b8418(param_2,uVar3,local_80,uVar2);
  *param_1 = uVar3;
  param_1[1] = param_2;
  FUN_00ad843c(&local_a0);
  plVar4 = *(long **)((long)pvVar1 + 8);
  local_60 = 0;
  FUN_00ada590(&local_60,param_2,uVar3);
  uVar2 = local_60;
  local_68 = FUN_00b222ec;
  local_60 = 0;
  local_a0 = (undefined8 *)operator_new(0x10);
  *local_a0 = uVar2;
  local_a0[1] = FUN_00b222ec;
  local_70 = 0;
  local_90 = FUN_00b224ec;
  pcStack_88 = FUN_00b224b4;
  (**(code **)(*plVar4 + 8))(plVar4,&local_a0,&uStack_51,&uStack_71);
  (*local_90)(0,&local_a0,&local_a0);
  FUN_00ada650(&local_70);
  FUN_00ada650(&local_60);
  plVar4 = *(long **)((long)pvVar1 + 0x10);
  local_60 = 0;
  FUN_00ada590(&local_60,param_2,uVar3);
  uVar2 = local_60;
  local_68 = FUN_00b22384;
  local_60 = 0;
  local_a0 = (undefined8 *)operator_new(0x10);
  local_70 = 0;
  *local_a0 = uVar2;
  local_a0[1] = FUN_00b22384;
  local_90 = FUN_00b224ec;
  pcStack_88 = FUN_00b224b4;
  (**(code **)(*plVar4 + 8))(plVar4,&local_a0,&uStack_51,&uStack_71);
  (*local_90)(0,&local_a0,&local_a0);
  FUN_00ada650(&local_70);
  FUN_00ada650(&local_60);
  plVar4 = *(long **)((long)pvVar1 + 0x18);
  local_60 = 0;
  FUN_00ada590(&local_60,param_2,uVar3);
  uVar2 = local_60;
  local_68 = FUN_00b2241c;
  local_60 = 0;
  local_a0 = (undefined8 *)operator_new(0x10);
  local_70 = 0;
  *local_a0 = uVar2;
  local_a0[1] = FUN_00b2241c;
  local_90 = FUN_00b224ec;
  pcStack_88 = FUN_00b224b4;
  (**(code **)(*plVar4 + 8))(plVar4,&local_a0,&uStack_51,&uStack_71);
  (*local_90)(0,&local_a0,&local_a0);
  FUN_00ada650(&local_70);
  FUN_00ada650(&local_60);
  return;
}


// ===== 00b21af8  FUN_00b21af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b21af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 param_9,undefined8 param_10,long *param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  undefined1 *local_2b0;
  undefined8 uStack_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  long *local_290;
  undefined8 local_288;
  void *local_280;
  long *local_278;
  undefined1 auStack_270 [240];
  long *local_180;
  long *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *local_120;
  long *plStack_118;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined1 *puStack_f8;
  long *local_f0;
  long *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  long *local_c8;
  long *local_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  undefined1 *puStack_88;
  ulong local_80;
  undefined4 local_78;
  uint local_74;
  
  local_298 = param_1;
  local_290 = param_5;
  local_288 = param_9;
  FUN_007e03ac();
  FUN_007e096c();
  pvVar7 = operator_new(0x8d0);
  FUN_007e6484();
  puVar8 = (undefined1 *)operator_new(0xd8);
  local_280 = pvVar7;
  FUN_007e0b20(puVar8,pvVar7);
  FUN_007e0c74(puVar8,"network_thread",0xe,0);
  uVar9 = FUN_007e1adc(puVar8);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x117,
                 "network_thread->Start()",&DAT_001fbee0,"Failed to start thread");
  }
  uVar10 = FUN_007e1984();
  FUN_007e0c74(uVar10,"worker_thread",0xd,0);
  uVar9 = FUN_007e1adc(uVar10);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x11b,
                 "worker_thread->Start()",&DAT_001fbee0,"Failed to start thread");
  }
  uVar11 = FUN_007e1984();
  FUN_007e0c74(uVar11,"signaling_thread",0x10,0);
  uVar9 = FUN_007e1adc(uVar11);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x11f,
                 "signaling_thread->Start()",&DAT_001fbee0,"Failed to start thread");
  }
  local_74 = 0xaaaaaaaa;
  local_2a0 = param_8;
  if (*param_4 == 0) {
    local_80 = 0xaaaa0000;
    uVar12 = 2;
  }
  else {
    local_2b0 = puVar8;
    uStack_2a8 = uVar11;
    uVar11 = FUN_00adaed8(param_2,"org/webrtc/PeerConnectionFactory$Options",&DAT_00dbab00);
    local_150 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = auStack_2c0;
    FUN_00ad8450(&local_170,param_2,uVar11,"getNetworkIgnoreMask",&DAT_001bb71e,&DAT_00dbaaf8);
    local_2b8 = FUN_004c1718(param_2,*param_4,local_150);
    FUN_00ad843c(&local_170);
    uVar11 = FUN_00adaed8(param_2,"org/webrtc/PeerConnectionFactory$Options",&DAT_00dbab00);
    local_150 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = auStack_2c0;
    FUN_00ad8450(&local_170,param_2,uVar11,"getDisableEncryption",&DAT_001be1bc,&DAT_00dbab08);
    cVar4 = FUN_004c17b4(param_2,*param_4,local_150);
    FUN_00ad843c(&local_170);
    uVar11 = uStack_2a8;
    puVar8 = local_2b0;
    uVar12 = FUN_00adaed8(param_2,"org/webrtc/PeerConnectionFactory$Options",&DAT_00dbab00);
    local_150 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = auStack_2c0;
    FUN_00ad8450(&local_170,param_2,uVar12,"getDisableNetworkMonitor",&DAT_001be1bc,&DAT_00dbab10);
    cVar5 = FUN_004c17b4(param_2,*param_4,local_150);
    FUN_00ad843c(&local_170);
    local_80 = 0;
    if (cVar5 != '\0') {
      local_80 = 0x100;
    }
    local_80 = local_80 | local_2b8 << 0x20;
    if (cVar4 != '\0') {
      local_80 = local_80 + 1;
    }
    local_80 = local_80 | 0xaaaa0000;
    uVar12 = 0x100000002;
  }
  local_78 = (undefined4)uVar12;
  local_74 = CONCAT31(local_74._1_3_,(char)((ulong)uVar12 >> 0x20));
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_118 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_110 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_e8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_b8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  plStack_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b1e998(&local_170);
  plVar13 = local_290;
  lVar15 = *local_290;
  if ((char)local_128 == '\x01') {
    if (lVar15 != 0) {
      FUN_00d0f740(1,lVar15 + 8);
    }
    plVar14 = local_150;
    if ((local_150 != (long *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,local_150 + 1), iVar6 == 1))
    {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    local_140 = (undefined1 *)plVar13[2];
    puStack_148 = (undefined1 *)plVar13[1];
    puStack_130 = (undefined1 *)plVar13[4];
    puStack_138 = (undefined1 *)plVar13[3];
    local_150 = (long *)lVar15;
  }
  else {
    local_150 = (long *)lVar15;
    if (lVar15 != 0) {
      FUN_00d0f740(1,lVar15 + 8);
    }
    local_140 = (undefined1 *)plVar13[2];
    puStack_148 = (undefined1 *)plVar13[1];
    puStack_130 = (undefined1 *)plVar13[4];
    puStack_138 = (undefined1 *)plVar13[3];
    local_128 = (undefined1 *)CONCAT71(local_128._1_7_,1);
  }
  puStack_158 = (undefined1 *)local_280;
  local_170 = puVar8;
  puStack_168 = (undefined1 *)uVar10;
  local_160 = (undefined1 *)uVar11;
  plVar13 = (long *)operator_new(8);
  *plVar13 = (long)(PTR_DAT_00d51f20 + 0x10);
  if (plStack_118 != (long *)0x0) {
    lVar15 = *plStack_118;
    plStack_118 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = plStack_118;
  }
  plStack_118 = plVar13;
  plVar13 = local_110;
  local_110 = (long *)param_12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = local_100;
  local_100 = (long *)param_13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = local_108;
  local_108 = (long *)param_14;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  plVar13 = local_e8;
  local_e8 = (long *)param_15;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uVar3 = local_74;
  if (((char)local_74 != '\x01') || (plVar13 = local_f0, (local_80 & 0x100) == 0)) {
    plVar13 = (long *)operator_new(0x10);
    FUN_00ad7744();
    if (local_f0 != (long *)0x0) {
      lVar15 = *local_f0;
      local_f0 = plVar13;
      (**(code **)(lVar15 + 0x10))();
      plVar13 = local_f0;
    }
  }
  local_f0 = plVar13;
  plVar13 = (long *)*param_6;
  *param_6 = 0;
  if (local_c8 != (long *)0x0) {
    lVar15 = *local_c8;
    local_c8 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = local_c8;
  }
  local_c8 = plVar13;
  plVar13 = (long *)*param_7;
  *param_7 = 0;
  if (local_c0 != (long *)0x0) {
    lVar15 = *local_c0;
    local_c0 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = local_c0;
  }
  local_c0 = plVar13;
  plVar13 = (long *)*local_2a0;
  *local_2a0 = 0;
  if (plStack_b8 != (long *)0x0) {
    lVar15 = *plStack_b8;
    plStack_b8 = plVar13;
    (**(code **)(lVar15 + 8))();
    plVar13 = plStack_b8;
  }
  plStack_b8 = plVar13;
  plVar13 = local_a0;
  local_a0 = (long *)param_16;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = (long *)*param_11;
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)operator_new(0x5d0);
    memset(plVar13,0,0x5a0);
    puVar2 = PTR_DAT_00d51b38;
    uVar12 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(plVar13 + 1) = 32000;
    *(undefined4 *)((long)plVar13 + 0x1c) = 0x3f800000;
    plVar13[2] = 0;
    *(undefined8 *)((long)plVar13 + 0x24) = uVar12;
    lVar15 = DAT_001f55d0;
    *(undefined4 *)(plVar13 + 0xb) = 9;
    plVar13[10] = lVar15;
    *(undefined4 *)(plVar13 + 0xd) = 0x46;
    *plVar13 = (long)(puVar2 + 0x10);
    *(undefined4 *)(plVar13 + 6) = 0xff;
    plVar13[0xe] = 0x3dcccccd0000000f;
    *(undefined8 *)((long)plVar13 + 0x84) = 0x500000005;
    lVar15 = DAT_001f5168;
    *(undefined4 *)(plVar13 + 0xf) = 300;
    plVar13[0x12] = lVar15;
    uVar1 = _UNK_001f4ac8;
    uVar12 = _DAT_001f4ac0;
    *(undefined1 *)((long)plVar13 + 0x35) = 1;
    *(undefined8 *)((long)plVar13 + 0xac) = uVar1;
    *(undefined8 *)((long)plVar13 + 0xa4) = uVar12;
    *(undefined1 *)(plVar13 + 7) = 1;
    *(undefined4 *)(plVar13 + 8) = 1;
    *(undefined1 *)((long)plVar13 + 0x5c) = 1;
    *(undefined1 *)(plVar13 + 0xc) = 1;
    *(undefined1 *)((long)plVar13 + 0x6c) = 1;
    *(undefined1 *)(plVar13 + 0x13) = 1;
    *(undefined1 *)(plVar13 + 3) = 0;
    *(undefined4 *)((long)plVar13 + 0x8c) = 5;
    *(undefined4 *)((long)plVar13 + 0xb4) = 0xc2480000;
    *(undefined1 *)(plVar13 + 0x66) = 0;
    plVar13[0xb9] = 0;
    plVar13[0xb8] = 0;
    plVar13[0xb7] = 0;
    plVar13[0xb6] = 0;
    plVar13[0xb5] = 0;
    plVar13[0xb4] = 0;
    if (local_a8 != (long *)0x0) {
      lVar15 = *local_a8;
      local_a8 = plVar13;
      (**(code **)(lVar15 + 8))();
      plVar13 = local_a8;
    }
  }
  else {
    *param_11 = 0;
    local_178 = plVar13;
    plVar14 = (long *)FUN_009a9544(&local_178);
    plVar13 = local_a8;
    if (local_a8 != (long *)0x0) {
      lVar15 = *local_a8;
      local_a8 = plVar14;
      (**(code **)(lVar15 + 8))(plVar13);
      plVar14 = local_a8;
    }
    local_a8 = plVar14;
    plVar13 = local_a8;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 8))();
      plVar13 = local_a8;
    }
  }
  local_a8 = plVar13;
  plVar14 = (long *)FUN_00b22b38(param_2,local_288);
  plVar13 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    lVar15 = *plStack_98;
    plStack_98 = plVar14;
    (**(code **)(lVar15 + 0x30))(plVar13);
    plVar14 = plStack_98;
  }
  plStack_98 = plVar14;
  plVar14 = (long *)FUN_00b22b94(param_2,param_10);
  plVar13 = local_90;
  if (local_90 != (long *)0x0) {
    lVar15 = *local_90;
    local_90 = plVar14;
    (**(code **)(lVar15 + 8))(plVar13);
    plVar14 = local_90;
  }
  local_90 = plVar14;
  FUN_00b553d4(&local_170);
  local_180 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00b1e9c4(auStack_270,&local_170);
  FUN_00b8741c(&local_180,auStack_270);
  FUN_00b1eafc(auStack_270);
  if (local_180 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/pc/peer_connection_factory.cc",0x14c,"factory",
                 &DAT_001fbee0,
                 "Failed to create the peer connection factory; WebRTC/libjingle init likely failed on this device"
                );
  }
  if ((uVar3 & 1) != 0) {
    (**(code **)(*local_180 + 0x20))(local_180,&local_80);
    local_278 = local_180;
    if (local_180 == (long *)0x0) goto LAB_00b221d8;
  }
  local_278 = local_180;
  (**(code **)*local_180)();
LAB_00b221d8:
  FUN_00b21860(local_298,param_2,&local_278,local_280,puVar8,uVar10,uVar11);
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 8))();
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 8))();
  }
  FUN_00b1eafc(&local_170);
  return;
}


// ===== 00b222ec  FUN_00b222ec =====

void FUN_00b222ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/PeerConnectionFactory",&DAT_00dbaad8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"onNetworkThreadReady",&DAT_001ebb20,&DAT_00dbaae0);
  FUN_004c2120(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return;
}


// ===== 00b22384  FUN_00b22384 =====

void FUN_00b22384(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/PeerConnectionFactory",&DAT_00dbaad8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"onWorkerThreadReady",&DAT_001ebb20,&DAT_00dbaae8);
  FUN_004c2120(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return;
}


// ===== 00b2241c  FUN_00b2241c =====

void FUN_00b2241c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adaed8(param_1,"org/webrtc/PeerConnectionFactory",&DAT_00dbaad8);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (undefined1 *)&local_50;
  FUN_00ad8450(&local_50,param_1,uVar1,"onSignalingThreadReady",&DAT_001ebb20,&DAT_00dbaaf0);
  FUN_004c2120(param_1,*param_2,local_30);
  FUN_00ad843c(&local_50);
  return;
}


// ===== 00b224b4  FUN_00b224b4 =====

void FUN_00b224b4(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  lVar2 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  uVar1 = FUN_00ad9fc4();
                    /* WARNING: Could not recover jumptable at 0x00b224e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,lVar2);
  return;
}


// ===== 00b224ec  FUN_00b224ec =====

void FUN_00b224ec(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb22554);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00ada650(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b22554  FUN_00b22554 =====

void FUN_00b22554(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00834300();
  if ((uVar1 & 1) != 0) {
    if ((param_3[1] & 1) == 0) {
      lVar2 = FUN_00834a58("WebRTC",6,param_2);
    }
    else {
      uVar1 = *param_3 / 1000;
      if (0x1e1337f < *param_3 / 1000) {
        uVar1 = 0x1e13380;
      }
      lVar2 = thunk_FUN_00831fbc("WebRTC",6,param_2,uVar1);
    }
    if (lVar2 != 0) {
      FUN_00833dcc(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00b22614  FUN_00b22614 =====

void FUN_00b22614(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d43340;
  param_1[1] = param_2;
  return;
}


// ===== 00b2262c  FUN_00b2262c =====

void FUN_00b2262c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_98 = *(undefined4 *)(param_2 + 1);
  local_a0 = *param_2;
  local_90 = *param_3;
  local_80 = *(undefined8 *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  local_88 = *(undefined1 *)(param_3 + 1);
  (**(code **)(param_4 + 0x10))(1,param_4,auStack_70);
  uStack_58 = *(undefined8 *)(param_4 + 0x18);
  pcVar5 = *(code **)(param_4 + 0x10);
  *(code **)(param_4 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_4 + 0x18) = 0;
  local_60 = pcVar5;
  puVar4 = (undefined8 *)operator_new(0x50);
  puVar4[1] = CONCAT44(uStack_94,uStack_98);
  *puVar4 = local_a0;
  puVar4[3] = CONCAT71(uStack_87,local_88);
  puVar4[2] = local_90;
  puVar4[4] = local_80;
  (*pcVar5)(1,auStack_70,puVar4 + 6);
  uVar3 = uStack_58;
  pcVar5 = local_60;
  local_60 = FUN_00433984;
  uStack_58 = 0;
  puVar4[9] = uVar3;
  puVar4[8] = pcVar5;
  local_b0 = FUN_00b229b0;
  pcStack_a8 = FUN_00b22790;
  local_c0[0] = puVar4;
  (**(code **)(*plVar1 + 8))(plVar1,local_c0,&uStack_c1,&uStack_c2);
  (*local_b0)(0,local_c0,local_c0);
  (*local_60)(0,auStack_70,auStack_70);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b2277c  FUN_00b2277c =====

void FUN_00b2277c(void)

{
  return;
}


// ===== 00b22784  FUN_00b22784 =====

void FUN_00b22784(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b22790  FUN_00b22790 =====

void FUN_00b22790(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 uStack_b1;
  undefined1 *local_b0;
  undefined1 uStack_a1;
  undefined8 *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  undefined1 *local_80;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *param_1;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar5 = FUN_00834300(lVar8);
  if ((uVar5 & 1) != 0) {
    if ((*(byte *)(lVar8 + 0x18) & 1) == 0) {
      lVar6 = FUN_00834a58("WebRTC",6,lVar8);
    }
    else {
      uVar5 = *(ulong *)(lVar8 + 0x10) / 1000;
      if (0x1e1337f < uVar5) {
        uVar5 = 0x1e13380;
      }
      lVar6 = thunk_FUN_00831fbc("WebRTC",6,lVar8,uVar5);
    }
    if (lVar6 != 0) {
      FUN_00833dcc(&local_b0);
      local_80 = local_b0;
      goto LAB_00b2284c;
    }
  }
  local_80 = (undefined1 *)0x0;
LAB_00b2284c:
  plVar9 = *(long **)(lVar8 + 0x20);
  local_b0 = (undefined1 *)0x0;
  (**(code **)(lVar8 + 0x40))(1,lVar8 + 0x30,auStack_70);
  uStack_58 = *(undefined8 *)(lVar8 + 0x48);
  pcVar10 = *(code **)(lVar8 + 0x40);
  *(code **)(lVar8 + 0x40) = FUN_00433984;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  local_60 = pcVar10;
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar2 = local_80;
  local_80 = (undefined1 *)0x0;
  *puVar7 = puVar2;
  (*pcVar10)(1,auStack_70,puVar7 + 2);
  uVar3 = uStack_58;
  pcVar10 = local_60;
  local_60 = FUN_00433984;
  uStack_58 = 0;
  puVar7[5] = uVar3;
  puVar7[4] = pcVar10;
  local_90 = FUN_00b22a94;
  pcStack_88 = FUN_00b22a24;
  local_a0[0] = puVar7;
  (**(code **)(*plVar9 + 8))(plVar9,local_a0,&uStack_a1,&uStack_b1);
  (*local_90)(0,local_a0,local_a0);
  (*local_60)(0,auStack_70,auStack_70);
  puVar2 = local_80;
  if ((local_80 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_80), iVar4 == 1)) {
    FUN_00833e18(puVar2);
    operator_delete(puVar2);
  }
  puVar2 = local_b0;
  if ((local_b0 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_b0), iVar4 == 1)) {
    FUN_00833e18(puVar2);
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00b229b0  FUN_00b229b0 =====

void FUN_00b229b0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb22a24);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x40))(0,(long)pvVar2 + 0x30,(long)pvVar2 + 0x30);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b22a24  FUN_00b22a24 =====

void FUN_00b22a24(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_8;
  
  param_1 = (undefined8 *)*param_1;
  local_8 = (void *)*param_1;
  *param_1 = 0;
  (*(code *)param_1[5])(param_1 + 2,&local_8);
  pvVar1 = local_8;
  if ((local_8 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_8), iVar2 == 1)) {
    FUN_00833e18(pvVar1);
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00b22a94  FUN_00b22a94 =====

void FUN_00b22a94(uint param_1,undefined8 *param_2,undefined8 *param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb22b38);
      (*pcVar1)();
    }
    param_2 = (undefined8 *)*param_2;
    if (param_2 != (undefined8 *)0x0) {
      (*(code *)param_2[4])(0,param_2 + 2,param_2 + 2);
      pvVar3 = (void *)*param_2;
      if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
        FUN_00833e18(pvVar3);
        operator_delete(pvVar3);
      }
      operator_delete(param_2);
      return;
    }
  }
  return;
}


// ===== 00b22b38  FUN_00b22b38 =====

void * FUN_00b22b38(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00adc1a8();
  if ((uVar1 & 1) == 0) {
    pvVar2 = operator_new(0x40);
    FUN_00b22dcc(pvVar2,param_1,param_2);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ===== 00b22b94  FUN_00b22b94 =====

void * FUN_00b22b94(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00adc1a8();
  if ((uVar1 & 1) == 0) {
    pvVar2 = operator_new(0x10);
    FUN_00b23e68(pvVar2,param_1,param_2);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ===== 00b22bf0  FUN_00b22bf0 =====

undefined8 *
FUN_00b22bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x268);
  FUN_00adec4c(puVar1,param_2,param_1,param_4 != '\0',param_5 != '\0');
  *(undefined4 *)(puVar1 + 0x4c) = 0;
  *puVar1 = &PTR_FUN_00d43368;
  puVar1[1] = &PTR_FUN_00d43410;
  puVar1[2] = &PTR_FUN_00d43440;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 0x4c);
  }
  return puVar1;
}


// ===== 00b22c88  FUN_00b22c88 =====

void FUN_00b22c88(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x260);
  return;
}


// ===== 00b22cac  FUN_00b22cac =====

bool FUN_00b22cac(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x4c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b22d04  FUN_00b22d04 =====

void FUN_00b22d04(void *param_1)

{
  FUN_00adecfc();
  operator_delete(param_1);
  return;
}


// ===== 00b22d34  FUN_00b22d34 =====

bool FUN_00b22d34(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x260) == 1;
}


// ===== 00b22d4c  FUN_00b22d4c =====

void FUN_00b22d4c(long param_1)

{
  FUN_00adecfc(param_1 + -8);
  return;
}


// ===== 00b22d58  FUN_00b22d58 =====

void FUN_00b22d58(long param_1)

{
  FUN_00adecfc((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00b22d8c  FUN_00b22d8c =====

void FUN_00b22d8c(long param_1)

{
  FUN_00adecfc(param_1 + -0x10);
  return;
}


// ===== 00b22d98  FUN_00b22d98 =====

void FUN_00b22d98(long param_1)

{
  FUN_00adecfc((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00b22dcc  FUN_00b22dcc =====

void FUN_00b22dcc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_120;
  long *plStack_118;
  undefined8 local_110;
  ulong uStack_108;
  ulong local_100;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d43478;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  puVar10 = param_1 + 2;
  param_1[3] = 0;
  *puVar10 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoderFactory",&DAT_00dbab20);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = (undefined1 *)&local_120;
  FUN_00ad8450(&local_d0,param_2,uVar5,"getSupportedCodecs","()[Lorg/webrtc/VideoCodecInfo;",
               &DAT_00dbab18);
  uVar5 = FUN_004a41b4(param_2,*param_3,local_b0);
  local_f0 = uVar5;
  plStack_e8 = param_2;
  FUN_00ad843c(&local_d0);
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  iVar4 = (**(code **)(*param_2 + 0x558))(param_2,uVar5);
  FUN_00b236a0(&local_110,(long)iVar4);
  if (iVar4 != 0) {
    uVar9 = 0;
    do {
      local_e0 = (**(code **)(*param_2 + 0x568))(param_2,uVar5,uVar9 & 0xffffffff);
      local_d8 = param_2;
      FUN_00ae2420(&local_d0,param_2,&local_e0);
      uVar2 = uStack_108;
      if (uStack_108 < local_100) {
        if (uStack_108 == 0) goto LAB_00b231b4;
        FUN_007b6ad4(uStack_108,&local_d0);
        uStack_108 = uVar2 + 0x60;
      }
      else {
        uStack_108 = FUN_00b237dc(&local_110,&local_d0);
      }
      FUN_007b6d78(&local_d0);
      FUN_00ada608(&local_e0,local_d8);
      uVar9 = uVar9 + 1;
    } while ((long)iVar4 != uVar9);
  }
  cVar3 = (**(code **)(*param_2 + 0x720))(param_2);
  if (cVar3 == '\0') {
    pvVar8 = (void *)*puVar10;
    if (pvVar8 != (void *)0x0) {
      pvVar7 = (void *)param_1[3];
      pvVar6 = pvVar8;
      if (pvVar8 != pvVar7) {
        do {
          pvVar7 = (void *)((long)pvVar7 + -0x60);
          if (pvVar7 == (void *)0x0) goto LAB_00b231c8;
          FUN_007b6d78(pvVar7);
        } while (pvVar7 != pvVar8);
        pvVar6 = (void *)*puVar10;
      }
      param_1[3] = pvVar8;
      operator_delete(pvVar6);
    }
    param_1[3] = uStack_108;
    param_1[2] = local_110;
    param_1[4] = local_100;
    uVar5 = FUN_00adaed8(param_2,"org/webrtc/VideoEncoderFactory",&DAT_00dbab20);
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = (undefined1 *)&local_120;
    FUN_00ad8450(&local_d0,param_2,uVar5,"getImplementations","()[Lorg/webrtc/VideoCodecInfo;",
                 &DAT_00dbab28);
    uVar5 = FUN_004a41b4(param_2,*param_3,local_b0);
    local_120 = uVar5;
    plStack_118 = param_2;
    FUN_00ad843c(&local_d0);
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    iVar4 = (**(code **)(*param_2 + 0x558))(param_2,uVar5);
    FUN_00b236a0(&local_110,(long)iVar4);
    if (iVar4 != 0) {
      uVar9 = 0;
      do {
        local_e0 = (**(code **)(*param_2 + 0x568))(param_2,uVar5,uVar9 & 0xffffffff);
        local_d8 = param_2;
        FUN_00ae2420(&local_d0,param_2,&local_e0);
        uVar2 = uStack_108;
        if (uStack_108 < local_100) {
          if (uStack_108 == 0) {
LAB_00b231b4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_007b6ad4(uStack_108,&local_d0);
          uStack_108 = uVar2 + 0x60;
        }
        else {
          uStack_108 = FUN_00b237dc(&local_110,&local_d0);
        }
        FUN_007b6d78(&local_d0);
        FUN_00ada608(&local_e0,local_d8);
        uVar9 = uVar9 + 1;
      } while ((long)iVar4 != uVar9);
    }
    cVar3 = (**(code **)(*param_2 + 0x720))(param_2);
    if (cVar3 == '\0') {
      pvVar8 = (void *)param_1[5];
      if (pvVar8 != (void *)0x0) {
        pvVar7 = (void *)param_1[6];
        pvVar6 = pvVar8;
        if (pvVar8 != pvVar7) {
          do {
            pvVar7 = (void *)((long)pvVar7 + -0x60);
            if (pvVar7 == (void *)0x0) {
LAB_00b231c8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_007b6d78(pvVar7);
          } while (pvVar7 != pvVar8);
          pvVar6 = (void *)param_1[5];
        }
        param_1[6] = pvVar8;
        operator_delete(pvVar6);
      }
      param_1[6] = uStack_108;
      param_1[5] = local_110;
      param_1[7] = local_100;
      FUN_00ada608(&local_120,param_2);
      FUN_00ada608(&local_f0,param_2);
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  FUN_00adbb80(&local_d0,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/native_api/jni/java_types.h",0xa4,"!env->ExceptionCheck()",
               &DAT_00252f37,&local_d0,"Error during JavaToNativeVector");
}


// ===== 00b23218  FUN_00b23218 =====

void FUN_00b23218(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[5];
  *param_1 = &PTR_FUN_00d43478;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x60);
        if (pvVar2 == (void *)0x0) goto LAB_00b232dc;
        FUN_007b6d78(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[5];
    }
    param_1[6] = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x60);
        if (pvVar2 == (void *)0x0) {
LAB_00b232dc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007b6d78(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[2];
    }
    param_1[3] = pvVar3;
    operator_delete(pvVar1);
  }
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00b232f0  FUN_00b232f0 =====

void FUN_00b232f0(void *param_1)

{
  FUN_00b23218();
  operator_delete(param_1);
  return;
}


// ===== 00b23320  FUN_00b23320 =====

undefined8 FUN_00b23320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_80;
  undefined8 local_78;
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
  FUN_00ae25b4(&local_70,uVar1,param_3);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoEncoderFactory",&DAT_00dbab20);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,uVar1,uVar2,"createEncoder",
               "(Lorg/webrtc/VideoCodecInfo;)Lorg/webrtc/VideoEncoder;",&DAT_00dbab30);
  lVar3 = FUN_004a41b4(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  local_80 = lVar3;
  local_78 = uVar1;
  FUN_00ad843c(&local_60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00adde38(param_2);
    uVar2 = FUN_00ae83fc(uVar1,&local_80,uVar2);
    uVar1 = local_78;
  }
  FUN_00ada608(&local_80,uVar1);
  FUN_00ada608(&local_70,puStack_68);
  return uVar2;
}


// ===== 00b23438  FUN_00b23438 =====

void FUN_00b23438(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    if (0x2aaaaaaaaaaaaaa < (ulong)(((long)uVar2 >> 5) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_00894354();
    }
    pvVar3 = operator_new(uVar2);
    *param_1 = pvVar3;
    param_1[2] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007b69e0(pvVar3,lVar4);
      lVar4 = lVar4 + 0x60;
      pvVar3 = (void *)((long)pvVar3 + 0x60);
    } while (lVar4 != lVar1);
    param_1[1] = pvVar3;
  }
  return;
}


// ===== 00b234f4  FUN_00b234f4 =====

void FUN_00b234f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    if (0x2aaaaaaaaaaaaaa < (ulong)(((long)uVar2 >> 5) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_00894354();
    }
    pvVar3 = operator_new(uVar2);
    *param_1 = pvVar3;
    param_1[2] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007b69e0(pvVar3,lVar4);
      lVar4 = lVar4 + 0x60;
      pvVar3 = (void *)((long)pvVar3 + 0x60);
    } while (lVar4 != lVar1);
    param_1[1] = pvVar3;
  }
  return;
}


// ===== 00b235b0  FUN_00b235b0 =====

undefined8 * FUN_00b235b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = thunk_FUN_00ad9fc4();
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoEncoderFactory",&DAT_00dbab20);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"getEncoderSelector",
               "()Lorg/webrtc/VideoEncoderFactory$VideoEncoderSelector;",&DAT_00dbab38);
  lVar3 = FUN_004a41b4(uVar1,*(undefined8 *)(param_1 + 8),local_40);
  local_70 = lVar3;
  uStack_68 = uVar1;
  FUN_00ad843c(&local_60);
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x10);
    *puVar4 = &PTR_FUN_00d434c0;
    puVar4[1] = 0;
    FUN_00ada590(puVar4 + 1,uVar1,lVar3);
  }
  FUN_00ada608(&local_70,uVar1);
  return puVar4;
}


// ===== 00b236a0  FUN_00b236a0 =====

void FUN_00b236a0(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar3 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar3 >> 5) * -0x5555555555555555) < param_2) {
    if (0x2aaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00894354();
    }
    pvVar6 = (void *)param_1[1];
    pvVar2 = operator_new(param_2 * 0x60);
    lVar1 = (long)pvVar6 - (long)pvVar3;
    pvVar4 = pvVar3;
    pvVar5 = pvVar2;
    if (lVar1 != 0) {
      do {
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007b6ad4(pvVar5,pvVar4);
        pvVar4 = (void *)((long)pvVar4 + 0x60);
        pvVar5 = (void *)((long)pvVar5 + 0x60);
      } while (pvVar4 != pvVar6);
      do {
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007b6d78(pvVar3);
        pvVar3 = (void *)((long)pvVar3 + 0x60);
      } while (pvVar3 != pvVar6);
      pvVar3 = (void *)*param_1;
    }
    *param_1 = (long)pvVar2;
    param_1[1] = (long)pvVar2 + lVar1;
    param_1[2] = (long)((long)pvVar2 + param_2 * 0x60);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00b237dc  FUN_00b237dc =====

long FUN_00b237dc(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 5) * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00894354();
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0x60);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00b23940:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_007b6ad4(lVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
  pvVar8 = pvVar7;
  lVar9 = lVar4;
  if (pvVar1 != pvVar7) {
    do {
      if (lVar9 == 0) goto LAB_00b23940;
      FUN_007b6ad4(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0x60);
      lVar9 = lVar9 + 0x60;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_007b6d78(pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0x60);
    } while (pvVar7 != pvVar1);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0x60;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0x60);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return lVar6 + 0x60;
}


// ===== 00b23970  FUN_00b23970 =====

void FUN_00b23970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d434c0;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00b23984  FUN_00b23984 =====

void FUN_00b23984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d434c0;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00b239c0  FUN_00b239c0 =====

void FUN_00b239c0(long param_1,undefined8 param_2)

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
  FUN_00ae25b4(&local_70,uVar1,param_2);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoEncoderFactory$VideoEncoderSelector",&DAT_00dbab48);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onCurrentEncoder","(Lorg/webrtc/VideoCodecInfo;)V",
               &DAT_00dbab40);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,puStack_68);
  return;
}


// ===== 00b23a90  FUN_00b23a90 =====

void FUN_00b23a90(undefined1 *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = thunk_FUN_00ad9fc4();
  uVar5 = *param_3;
  uVar6 = uVar5 / 1000;
  if (499 < uVar5 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  uVar3 = FUN_00adaed8(uVar2,"org/webrtc/VideoEncoderFactory$VideoEncoderSelector",&DAT_00dbab48);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_b0,uVar2,uVar3,"onAvailableBitrate","(I)Lorg/webrtc/VideoCodecInfo;",
               &DAT_00dbab50);
  lVar4 = FUN_004a41b4(uVar2,*(undefined8 *)(param_2 + 8),local_90,uVar6 & 0xffffffff);
  local_c0 = lVar4;
  local_b8 = uVar2;
  FUN_00ad843c(&local_b0);
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[0x60] = 0;
  }
  else {
    FUN_00ae2420(&local_b0,uVar2,&local_c0);
    FUN_007b6ad4(param_1,&local_b0);
    param_1[0x60] = 1;
    FUN_007b6d78(&local_b0);
    uVar2 = local_b8;
  }
  FUN_00ada608(&local_c0,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b23c18  FUN_00b23c18 =====

void FUN_00b23c18(undefined1 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = thunk_FUN_00ad9fc4();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar5 = FUN_00adaed8(uVar4,"org/webrtc/VideoEncoderFactory$VideoEncoderSelector",&DAT_00dbab48);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_b0,uVar4,uVar5,"onResolutionChange","(II)Lorg/webrtc/VideoCodecInfo;",
               &DAT_00dbab58);
  lVar6 = FUN_004a41b4(uVar4,*(undefined8 *)(param_2 + 8),local_90,uVar1,uVar2);
  local_c0 = lVar6;
  local_b8 = uVar4;
  FUN_00ad843c(&local_b0);
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[0x60] = 0;
  }
  else {
    FUN_00ae2420(&local_b0,uVar4,&local_c0);
    FUN_007b6ad4(param_1,&local_b0);
    param_1[0x60] = 1;
    FUN_007b6d78(&local_b0);
    uVar4 = local_b8;
  }
  FUN_00ada608(&local_c0,uVar4);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b23d4c  FUN_00b23d4c =====

void FUN_00b23d4c(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = thunk_FUN_00ad9fc4();
  uVar3 = FUN_00adaed8(uVar2,"org/webrtc/VideoEncoderFactory$VideoEncoderSelector",&DAT_00dbab48);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = (undefined1 *)&local_b0;
  FUN_00ad8450(&local_a0,uVar2,uVar3,"onEncoderBroken","()Lorg/webrtc/VideoCodecInfo;",&DAT_00dbab60
              );
  lVar4 = FUN_004a41b4(uVar2,*(undefined8 *)(param_2 + 8),local_80);
  local_b0 = lVar4;
  local_a8 = uVar2;
  FUN_00ad843c(&local_a0);
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[0x60] = 0;
  }
  else {
    FUN_00ae2420(&local_a0,uVar2,&local_b0);
    FUN_007b6ad4(param_1,&local_a0);
    param_1[0x60] = 1;
    FUN_007b6d78(&local_a0);
    uVar2 = local_a8;
  }
  FUN_00ada608(&local_b0,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b23e68  FUN_00b23e68 =====

void FUN_00b23e68(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d43500;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00b23e84  FUN_00b23e84 =====

void FUN_00b23e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d43500;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00b23e98  FUN_00b23e98 =====

void FUN_00b23e98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d43500;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00b23ed4  FUN_00b23ed4 =====

undefined8 FUN_00b23ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_80;
  undefined8 local_78;
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
  FUN_00ae25b4(&local_70,uVar1,param_3);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/VideoDecoderFactory",&DAT_00dbab70);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,uVar1,uVar2,"createDecoder",
               "(Lorg/webrtc/VideoCodecInfo;)Lorg/webrtc/VideoDecoder;",&DAT_00dbab68);
  lVar3 = FUN_004a41b4(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  local_80 = lVar3;
  local_78 = uVar1;
  FUN_00ad843c(&local_60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00adde38(param_2);
    uVar2 = FUN_00ae46a4(uVar1,&local_80,uVar2);
    uVar1 = local_78;
  }
  FUN_00ada608(&local_80,uVar1);
  FUN_00ada608(&local_70,puStack_68);
  return uVar2;
}


// ===== 00b23fec  FUN_00b23fec =====

void FUN_00b23fec(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)thunk_FUN_00ad9fc4();
  uVar6 = FUN_00adaed8(plVar5,"org/webrtc/VideoDecoderFactory",&DAT_00dbab70);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = (undefined1 *)&local_e0;
  FUN_00ad8450(&local_c0,plVar5,uVar6,"getSupportedCodecs","()[Lorg/webrtc/VideoCodecInfo;",
               &DAT_00dbab78);
  uVar6 = FUN_004a41b4(plVar5,*(undefined8 *)(param_2 + 8),local_a0);
  local_e0 = uVar6;
  plStack_d8 = plVar5;
  FUN_00ad843c(&local_c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (**(code **)(*plVar5 + 0x558))(plVar5,uVar6);
  FUN_00b236a0(param_1,(long)iVar4);
  if (iVar4 != 0) {
    uVar8 = 0;
    do {
      local_d0 = (**(code **)(*plVar5 + 0x568))(plVar5,uVar6,uVar8 & 0xffffffff);
      local_c8 = plVar5;
      FUN_00ae2420(&local_c0,plVar5,&local_d0);
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007b6ad4(uVar1,&local_c0);
        lVar7 = uVar1 + 0x60;
      }
      else {
        lVar7 = FUN_00b237dc(param_1,&local_c0);
      }
      param_1[1] = lVar7;
      FUN_007b6d78(&local_c0);
      FUN_00ada608(&local_d0,local_c8);
      uVar8 = uVar8 + 1;
    } while ((long)iVar4 != uVar8);
  }
  cVar3 = (**(code **)(*plVar5 + 0x720))(plVar5);
  if (cVar3 != '\0') {
    FUN_00adbb80(&local_c0,plVar5);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/native_api/jni/java_types.h",0xa4,"!env->ExceptionCheck()",
                 &DAT_00252f37,&local_c0,"Error during JavaToNativeVector");
  }
  FUN_00ada608(&local_e0,plVar5);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00b241f8  FUN_00b241f8 =====

void FUN_00b241f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  puVar1 = (undefined8 *)*param_6;
  param_1[4] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00b24224  FUN_00b24224 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00b24224(undefined8 param_1,long param_2)

{
  int *******pppppppiVar1;
  bool bVar2;
  long *plVar3;
  int *******local_38;
  ulong local_30;
  byte bStack_21;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_38,*(long **)(param_2 + 8),"WebRTC-RtcEventLogKillSwitch",0x1c);
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
    plVar3 = (long *)operator_new(8);
    *plVar3 = (long)(PTR_DAT_00d51bf8 + 0x10);
    return plVar3;
  }
  plVar3 = (long *)operator_new(0x128);
  FUN_00b24334(plVar3,param_2);
  return plVar3;
}


// ===== 00b24320  FUN_00b24320 =====

void FUN_00b24320(void)

{
  return;
}


// ===== 00b24328  FUN_00b24328 =====

void FUN_00b24328(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b24334  FUN_00b24334 =====

void FUN_00b24334(undefined8 param_1,long param_2)

{
  long ****pppplVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long ***local_48;
  ulong local_40;
  byte bStack_31;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_48,*(long **)(param_2 + 8),"WebRTC-RtcEventLogNewFormat",0x1b);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 8) {
    bVar2 = false;
    if (-1 < (char)bStack_31) goto LAB_00b243d0;
LAB_00b243f4:
    operator_delete(local_48);
    if (bVar2) goto LAB_00b243d4;
  }
  else {
    pppplVar1 = (long ****)local_48;
    if (-1 < (char)bStack_31) {
      pppplVar1 = &local_48;
    }
    bVar2 = *pppplVar1 == (long ***)0x64656c6261736944;
    if ((char)bStack_31 < '\0') goto LAB_00b243f4;
LAB_00b243d0:
    if (bVar2) {
LAB_00b243d4:
      plVar3 = (long *)operator_new(8);
      *plVar3 = (long)(PTR_DAT_00d53178 + 0x10);
      goto LAB_00b24420;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 8);
  plVar3 = (long *)operator_new(0x10);
  FUN_00b3220c(plVar3,uVar4);
LAB_00b24420:
  FUN_00b24450(param_1,param_2,plVar3,10000,1000);
  return;
}


// ===== 00b24450  FUN_00b24450 =====

int FUN_00b24450(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_28;
  
  *param_1 = &PTR_FUN_00d43560;
  lVar4 = *param_2;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar6 = param_2[4];
  lVar4 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[3] = lVar8;
  param_1[2] = lVar7;
  param_1[5] = lVar6;
  param_1[4] = lVar4;
  param_1[0x1a] = param_3;
  param_1[0x1b] = 0;
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
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  uVar2 = (**(code **)(*(long *)param_1[3] + 0x10))();
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 0;
  uVar5 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  param_1[0x1d] = uVar5;
  uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],"rtc_event_log",0xd,0);
  param_1[0x1f] = uVar3;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x20),(pthread_mutexattr_t *)&local_28);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  return iVar1;
}


// ===== 00b245a0  FUN_00b245a0 =====

void FUN_00b245a0(long param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *local_58 [2];
  code *local_48;
  undefined *puStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  cVar1 = *(char *)(param_1 + 0xf0);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  if (cVar1 == '\x01') {
    puStack_6c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_70 = 0xaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_78 = 0xaaaaaaaa;
    local_74 = 0xaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0066f1ac(&local_c0);
    local_48 = FUN_00b28ab4;
    puStack_40 = &DAT_00254fd0;
    local_58[0] = (undefined1 *)&local_c0;
    FUN_00b24c64(param_1,local_58);
    FUN_0066f318(&local_c0,0x7fffffffffffffff,3000000);
    FUN_0066f2b0(&local_c0);
  }
  (**(code **)**(undefined8 **)(param_1 + 0xf8))();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x100));
  puVar4 = *(undefined8 **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_00b247cc(param_1 + 0xa0);
  FUN_00b247cc(param_1 + 0x70);
  FUN_00b247cc(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 8);
  if ((plVar5 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), iVar3 == 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b24718  FUN_00b24718 =====

void FUN_00b24718(undefined8 param_1)

{
  long lVar1;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *local_58 [2];
  code *local_48;
  undefined *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_6c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaa;
  local_74 = 0xaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_c0);
  local_48 = FUN_00b28ab4;
  puStack_40 = &DAT_00254fd0;
  local_58[0] = (undefined1 *)&local_c0;
  FUN_00b24c64(param_1,local_58);
  FUN_0066f318(&local_c0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b247cc  FUN_00b247cc =====

void FUN_00b247cc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar4;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar4 = puVar9;
  if (puVar9 != puVar6) {
    uVar7 = param_1[4];
    plVar10 = puVar9 + (uVar7 >> 9);
    plVar11 = (long *)(*plVar10 + (uVar7 & 0x1ff) * 8);
    plVar1 = (long *)(puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8);
    puVar4 = puVar6;
    if (plVar11 != plVar1) {
      do {
        if (plVar11 == (long *)0x0) goto LAB_00b24970;
        plVar2 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar11 = plVar11 + 1;
        if ((long)plVar11 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          plVar11 = (long *)*plVar10;
        }
      } while (plVar11 != plVar1);
      puVar9 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar4 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar9;
  while (uVar7 = lVar3 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar6 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar3 = (long)puVar6 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_00b248e8;
    uVar5 = 0x200;
  }
  param_1[4] = uVar5;
LAB_00b248e8:
  puVar4 = puVar6;
  if (puVar9 != puVar6) {
    do {
      puVar4 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
  }
  uVar8 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar6 - (long)puVar4 << 0x3d) - ((long)puVar6 - (long)puVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)puVar6 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar4 = puVar4 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == puVar6) {
      param_1[2] = puVar4;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined8 *)0x0);
LAB_00b24970:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b249d0  FUN_00b249d0 =====

void FUN_00b249d0(void *param_1)

{
  FUN_00b245a0();
  operator_delete(param_1);
  return;
}


// ===== 00b24a00  FUN_00b24a00 =====

uint FUN_00b24a00(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uStack_149;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long *local_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar3 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  else {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    lVar5 = FUN_00625b64();
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_00215708,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0x349,
                   "Starting WebRTC event log. (Timestamp, UTC) = (",lVar4,&DAT_001e1644,
                   lVar5 * 1000,&DAT_001a3771);
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
    *(undefined1 *)(param_1 + 0xf0) = 1;
    *(bool *)(param_1 + 0xf1) = param_3 == 0;
    plVar7 = *(long **)(param_1 + 0xf8);
    *(bool *)(param_1 + 0xf2) = param_3 != 0;
    pcStack_a8 = (code *)0x0;
    local_b0 = (code *)0x0;
    uStack_b8 = 0;
    local_c0 = (long *)0x0;
    lStack_118 = 0;
    local_120 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_100 = 0;
    lStack_f8 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    lStack_e8 = 0;
    local_f0 = 0;
    lStack_d8 = 0;
    local_e0 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_148 = param_1;
    lStack_140 = param_3;
    local_138 = lVar4;
    lStack_130 = lVar5 * 1000;
    local_128 = param_2;
    FUN_00b25e48(&local_120,param_1 + 0x70);
    FUN_00b25e48(&local_f0,param_1 + 0xa0);
    FUN_00b25e48(param_1 + 0x70,&local_c0);
    FUN_00b25e48(param_1 + 0xa0,&local_90);
    FUN_00b247cc(&local_90);
    FUN_00b247cc(&local_c0);
    local_c0 = (long *)operator_new(0x88);
    lVar2 = lStack_d8;
    lVar1 = local_e0;
    lVar5 = lStack_f8;
    lVar4 = local_100;
    local_c0[1] = lStack_140;
    *local_c0 = local_148;
    local_c0[3] = lStack_130;
    local_c0[2] = local_138;
    local_c0[4] = (long)local_128;
    local_128 = (long *)0x0;
    local_c0[8] = lStack_108;
    local_c0[7] = lStack_110;
    local_c0[6] = lStack_118;
    local_c0[5] = local_120;
    local_b0 = FUN_00b28a2c;
    pcStack_a8 = FUN_00b28584;
    lStack_118 = 0;
    local_120 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    local_100 = 0;
    lStack_f8 = 0;
    local_c0[10] = lVar5;
    local_c0[9] = lVar4;
    local_c0[0xc] = lStack_e8;
    local_c0[0xb] = local_f0;
    lStack_e8 = 0;
    local_f0 = 0;
    lStack_d8 = 0;
    local_e0 = 0;
    local_c0[0xe] = lVar2;
    local_c0[0xd] = lVar1;
    local_c0[0x10] = local_c8;
    local_c0[0xf] = local_d0;
    local_c8 = 0;
    local_d0 = 0;
    (**(code **)(*plVar7 + 8))(plVar7,&local_c0,&uStack_51,&uStack_149);
    (*local_b0)(0,&local_c0,&local_c0);
    FUN_00b247cc(&local_f0);
    FUN_00b247cc(&local_120);
    plVar7 = local_128;
    local_128 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  }
  return uVar3 & 1;
}


// ===== 00b24c64  FUN_00b24c64 =====

void FUN_00b24c64(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined1 uStack_141;
  long *local_140;
  undefined8 uStack_138;
  code *local_130;
  code *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 uStack_d1;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
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
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0xf0) = 0;
  plVar3 = *(long **)(param_1 + 0xf8);
  lStack_c0 = param_2[1];
  local_c8 = *param_2;
  puStack_b0 = (undefined *)param_2[3];
  local_b8 = param_2[2];
  local_d0 = param_1;
  if (*(code **)param_2[3] != (code *)0x0) {
    local_c8 = (**(code **)param_2[3])(*param_2);
  }
  local_120 = 0;
  uStack_118 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  pcStack_128 = (code *)0x0;
  local_130 = (code *)0x0;
  lStack_a0 = 0;
  local_a8 = 0;
  lStack_90 = 0;
  local_98 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_70 = 0;
  local_78 = 0;
  lStack_60 = 0;
  local_68 = 0;
  local_58 = 0;
  lStack_50 = 0;
  FUN_00b25e48(&local_a8,param_1 + 0x70);
  FUN_00b25e48(&local_78,param_1 + 0xa0);
  FUN_00b25e48(param_1 + 0x70,&local_140);
  FUN_00b25e48(param_1 + 0xa0,&local_110);
  FUN_00b247cc(&local_110);
  FUN_00b247cc(&local_140);
  local_140 = (long *)operator_new(0x88);
  *local_140 = local_d0;
  local_140[2] = lStack_c0;
  local_140[1] = local_c8;
  local_140[4] = (long)puStack_b0;
  local_140[3] = local_b8;
  if (*(long *)(puStack_b0 + 8) != 0) {
    local_b8 = 0;
    puStack_b0 = &DAT_001fbc50;
  }
  local_140[6] = lStack_a0;
  local_140[5] = local_a8;
  local_140[8] = lStack_90;
  local_140[7] = local_98;
  local_140[10] = lStack_80;
  local_140[9] = local_88;
  local_88 = 0;
  lStack_80 = 0;
  local_140[0xc] = lStack_70;
  local_140[0xb] = local_78;
  lStack_a0 = 0;
  local_a8 = 0;
  local_140[0xe] = lStack_60;
  local_140[0xd] = local_68;
  lStack_90 = 0;
  local_98 = 0;
  lStack_60 = 0;
  local_68 = 0;
  lStack_70 = 0;
  local_78 = 0;
  local_140[0x10] = lStack_50;
  local_140[0xf] = local_58;
  local_58 = 0;
  lStack_50 = 0;
  local_130 = FUN_00b28b74;
  pcStack_128 = FUN_00b28ac0;
  (**(code **)(*plVar3 + 8))(plVar3,&local_140,&uStack_d1,&uStack_141);
  (*local_130)(0,&local_140,&local_140);
  FUN_00b247cc(&local_78);
  FUN_00b247cc(&local_a8);
  if (*(code **)(puStack_b0 + 8) != (code *)0x0) {
    (**(code **)(puStack_b0 + 8))(local_c8);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00b24e68  FUN_00b24e68 =====

int FUN_00b24e68(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 uStack_121;
  long local_120;
  long local_118;
  code *pcStack_110;
  code *local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  if (param_2 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_2 + 8) = uVar2;
    FUN_00b250b8(param_1,param_2);
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      if ((*(ulong *)(param_1 + 200) < *(ulong *)(param_1 + 0x30)) &&
         (*(char *)(param_1 + 0xf1) != '\x01')) {
        if (*(char *)(param_1 + 0xf2) == '\x01') {
          *(undefined1 *)(param_1 + 0xf2) = 0;
          pcStack_110 = FUN_004473ec;
          local_108 = FUN_00b28d04;
          local_120 = param_1;
          (**(code **)(**(long **)(param_1 + 0xf8) + 8))
                    (*(long **)(param_1 + 0xf8),&local_120,&local_b0,&uStack_41);
          (*pcStack_110)(0,&local_120,&local_120);
        }
      }
      else {
        plVar3 = *(long **)(param_1 + 0xf8);
        local_90 = 0;
        uStack_88 = 0;
        pcStack_98 = (code *)0x0;
        local_a0 = (code *)0x0;
        uStack_a8 = 0;
        local_b0 = (long *)0x0;
        pcStack_110 = (code *)0x0;
        local_118 = 0;
        lStack_100 = 0;
        local_108 = (code *)0x0;
        local_f8 = 0;
        lStack_f0 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_e0 = 0;
        local_e8 = 0;
        lStack_d0 = 0;
        local_d8 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_c8 = 0;
        lStack_c0 = 0;
        local_120 = param_1;
        FUN_00b25e48(&local_118,param_1 + 0x70);
        FUN_00b25e48(&local_e8,param_1 + 0xa0);
        FUN_00b25e48(param_1 + 0x70,&local_b0);
        FUN_00b25e48(param_1 + 0xa0,&local_80);
        FUN_00b247cc(&local_80);
        FUN_00b247cc(&local_b0);
        local_b0 = (long *)operator_new(0x68);
        local_b0[2] = (long)pcStack_110;
        local_b0[1] = local_118;
        *local_b0 = local_120;
        local_b0[4] = lStack_100;
        local_b0[3] = (long)local_108;
        pcStack_110 = (code *)0x0;
        local_118 = 0;
        local_b0[6] = lStack_f0;
        local_b0[5] = local_f8;
        lStack_100 = 0;
        local_108 = (code *)0x0;
        local_b0[8] = lStack_e0;
        local_b0[7] = local_e8;
        local_f8 = 0;
        lStack_f0 = 0;
        local_b0[10] = lStack_d0;
        local_b0[9] = local_d8;
        lStack_d0 = 0;
        local_d8 = 0;
        lStack_e0 = 0;
        local_e8 = 0;
        local_b0[0xc] = lStack_c0;
        local_b0[0xb] = local_c8;
        local_c8 = 0;
        lStack_c0 = 0;
        local_a0 = FUN_00b28c94;
        pcStack_98 = FUN_00b28bf8;
        (**(code **)(*plVar3 + 8))(plVar3,&local_b0,&uStack_41,&uStack_121);
        (*local_a0)(0,&local_b0,&local_b0);
        FUN_00b247cc(&local_e8);
        FUN_00b247cc(&local_118);
      }
    }
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../logging/rtc_event_log/rtc_event_log_impl.cc",0xb6,"event",&DAT_001f5fa0);
}


// ===== 00b250b8  FUN_00b250b8 =====

void FUN_00b250b8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = 0x70;
  if ((uVar4 & 1) == 0) {
    lVar2 = 0xa0;
  }
  lVar2 = param_1 + lVar2;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = 0x38;
  if ((uVar4 & 1) == 0) {
    lVar3 = 0x30;
  }
  uVar4 = *(ulong *)(lVar2 + 0x28);
  if ((*(ulong *)(param_1 + lVar3) <= uVar4) && ((*(byte *)(param_1 + 0xf0) & 1) == 0)) {
    FUN_00b251cc(lVar2);
    uVar4 = *(ulong *)(lVar2 + 0x28);
  }
  lVar5 = *(long *)(lVar2 + 8);
  lVar6 = *(long *)(lVar2 + 0x10);
  lVar3 = 0;
  if (lVar6 != lVar5) {
    lVar3 = (lVar6 - lVar5) * 0x40 + -1;
  }
  if (lVar3 == uVar4 + *(long *)(lVar2 + 0x20)) {
    FUN_00b28f2c(lVar2);
    lVar5 = *(long *)(lVar2 + 8);
    lVar6 = *(long *)(lVar2 + 0x10);
  }
  if ((lVar5 != lVar6) &&
     (uVar4 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x20),
     puVar1 = (undefined8 *)(*(long *)(lVar5 + (uVar4 >> 9) * 8) + (uVar4 & 0x1ff) * 8),
     puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b251cc  FUN_00b251cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b251cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8) +
                   (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0x3ff < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b2529c  FUN_00b2529c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b2529c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 *******local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if ((long)uVar6 < 0) {
    uVar11 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
  }
  else {
    uVar11 = uVar6 / 1000;
    if (499 < uVar6 % 1000) {
      uVar11 = uVar11 + 1;
    }
  }
  *(ulong *)(param_1 + 0xe8) = uVar11;
  uVar6 = *(ulong *)(param_2 + 0x20);
  lVar8 = *(long *)(param_2 + 8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  plVar1 = (long *)(lVar8 + (uVar6 >> 9) * 8);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  if (lVar8 == *(long *)(param_2 + 0x10)) {
    lVar12 = 0;
    lVar13 = 0;
    plVar7 = (long *)(lVar8 + (*(long *)(param_2 + 0x28) + uVar6 >> 9) * 8);
  }
  else {
    uVar11 = *(long *)(param_2 + 0x28) + uVar6;
    plVar7 = (long *)(lVar8 + (uVar11 >> 9) * 8);
    lVar12 = *plVar1 + (uVar6 & 0x1ff) * 8;
    lVar13 = *plVar7 + (uVar11 & 0x1ff) * 8;
  }
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))
            (&local_50,*(long **)(param_1 + 0xd0),plVar1,lVar12,plVar7,lVar13);
  uVar6 = *(ulong *)(param_2 + 0x50);
  lVar8 = *(long *)(param_2 + 0x38);
  plVar1 = (long *)(lVar8 + (uVar6 >> 9) * 8);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (lVar8 == *(long *)(param_2 + 0x40)) {
    lVar12 = 0;
    lVar13 = 0;
    plVar7 = (long *)(lVar8 + (*(long *)(param_2 + 0x58) + uVar6 >> 9) * 8);
  }
  else {
    uVar11 = *(long *)(param_2 + 0x58) + uVar6;
    plVar7 = (long *)(lVar8 + (uVar11 >> 9) * 8);
    lVar12 = *plVar1 + (uVar6 & 0x1ff) * 8;
    lVar13 = *plVar7 + (uVar11 & 0x1ff) * 8;
  }
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))
            (&local_70,*(long **)(param_1 + 0xd0),plVar1,lVar12,plVar7,lVar13);
  puVar2 = puStack_48;
  pppppppuVar4 = local_50;
  if (-1 < (long)local_40) {
    puVar2 = (undefined1 *)((ulong)local_40 >> 0x38);
    pppppppuVar4 = &local_50;
  }
  puVar3 = puStack_68;
  ppuVar5 = (undefined1 **)local_70;
  if (-1 < (long)local_60) {
    puVar3 = (undefined1 *)((ulong)local_60 >> 0x38);
    ppuVar5 = &local_70;
  }
  FUN_00b256fc(param_1,pppppppuVar4,puVar2,ppuVar5,puVar3);
  uVar6 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x68);
  plVar1 = (long *)(*(long *)(param_1 + 0x48) + (uVar6 >> 9) * 8);
  if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar1 + (uVar6 & 0x1ff) * 8;
  }
  uVar11 = *(ulong *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 8);
  uVar6 = uVar11 >> 6 & 0x3fffffffffffff8;
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    lVar9 = 0;
    lVar13 = 0;
    lVar10 = 0;
    plVar7 = (long *)(lVar12 + (*(long *)(param_2 + 0x28) + uVar11 >> 9) * 8);
  }
  else {
    uVar14 = *(long *)(param_2 + 0x28) + uVar11;
    uVar15 = uVar14 & 0x1ff;
    lVar13 = *(long *)(lVar12 + uVar6) + (uVar11 & 0x1ff) * 8;
    uVar14 = uVar14 >> 6 & 0x3fffffffffffff8;
    plVar7 = (long *)(lVar12 + uVar14);
    lVar9 = *plVar7 + uVar15 * 8;
    if (lVar9 == lVar13) {
      lVar10 = 0;
    }
    else {
      lVar10 = (uVar15 | (uVar14 - uVar6) * 0x40) - (uVar11 & 0x1ff);
    }
  }
  FUN_00b26358(param_1 + 0x40,plVar1,lVar8,lVar12 + uVar6,lVar13,plVar7,lVar9,lVar10);
  if (*(ulong *)(param_1 + 0x68) <= *(ulong *)(param_1 + 0x38)) goto joined_r0x00b256cc;
  uVar6 = FUN_004022fc();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001fd8a8,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0x8fa,
                 "Dropping config events: ",*(undefined8 *)(param_1 + 0x68)," exceeds maximum ",
                 *(undefined8 *)(param_1 + 0x38));
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x48) + (*(ulong *)(param_1 + 0x60) >> 9) * 8);
  if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) {
    lVar8 = 0;
    lVar12 = *(long *)(param_1 + 0x68);
    if (lVar12 != 0) goto LAB_00b255c4;
LAB_00b25608:
    lVar13 = *(long *)(param_1 + 0x38);
    plVar7 = plVar1;
    lVar12 = lVar8;
  }
  else {
    lVar8 = *plVar1 + (*(ulong *)(param_1 + 0x60) & 0x1ff) * 8;
    lVar12 = *(long *)(param_1 + 0x68);
    if (lVar12 == 0) goto LAB_00b25608;
LAB_00b255c4:
    uVar6 = lVar12 + (lVar8 - *plVar1 >> 3);
    if ((long)uVar6 < 1) {
      uVar11 = 0x1ff - uVar6;
      uVar6 = 0x3fe - uVar6;
      if (-1 < (long)uVar11) {
        uVar6 = uVar11;
      }
      uVar14 = uVar11 & 0x1ff;
      if ((long)uVar11 < 1) {
        uVar14 = -(-uVar11 & 0x1ff);
      }
      lVar13 = *(long *)(param_1 + 0x38);
      plVar7 = plVar1 + -((long)uVar6 >> 9);
      lVar12 = plVar1[-((long)uVar6 >> 9)] + (0x1ff - uVar14) * 8;
    }
    else {
      plVar7 = plVar1 + (uVar6 >> 9);
      lVar12 = *plVar7 + (uVar6 & 0x1ff) * 8;
      lVar13 = *(long *)(param_1 + 0x38);
    }
  }
  if (lVar13 != 0) {
    uVar6 = (lVar12 - *plVar7 >> 3) - lVar13;
    if ((long)uVar6 < 1) {
      uVar11 = 0x1ff - uVar6;
      uVar6 = 0x3fe - uVar6;
      if (-1 < (long)uVar11) {
        uVar6 = uVar11;
      }
      uVar14 = uVar11 & 0x1ff;
      plVar7 = plVar7 + -((long)uVar6 >> 9);
      if ((long)uVar11 < 1) {
        uVar14 = -(-uVar11 & 0x1ff);
      }
      lVar12 = *plVar7 + (0x1ff - uVar14) * 8;
    }
    else {
      plVar7 = plVar7 + (uVar6 >> 9);
      lVar12 = *plVar7 + (uVar6 & 0x1ff) * 8;
    }
  }
  FUN_00b258a4(param_1 + 0x40,plVar1,lVar8,plVar7,lVar12);
joined_r0x00b256cc:
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 00b256fc  FUN_00b256fc =====

void FUN_00b256fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 ****ppppuVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 ***local_58;
  long lStack_50;
  undefined8 local_48;
  
  if (param_3 == 0) {
    plVar2 = *(long **)(param_1 + 0xd8);
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar4 = *plVar2;
  }
  else {
    if (param_5 != 0) {
      local_58 = (undefined8 ****)0x0;
      lStack_50 = 0;
      local_48 = 0;
      FUN_00547c2c(&local_58,param_5 + param_3);
      FUN_00547cac(&local_58,param_2,param_3);
      FUN_00547cac(&local_58,param_4,param_5);
      plVar2 = *(long **)(param_1 + 0xd8);
      if (plVar2 != (long *)0x0) {
        ppppuVar1 = (undefined8 ****)local_58;
        if (-1 < (long)local_48._7_1_) {
          ppppuVar1 = &local_58;
        }
        lVar4 = lStack_50;
        if (-1 < local_48) {
          lVar4 = (long)local_48._7_1_;
        }
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,ppppuVar1,lVar4);
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_004249b0();
          if ((uVar3 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0xa6b,
                         "Failed to write RTC event to output.");
          }
          plVar2 = *(long **)(param_1 + 0xd8);
          *(undefined8 *)(param_1 + 0xd8) = 0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
      }
      if (-1 < local_48) {
        return;
      }
      operator_delete(local_58);
      return;
    }
    plVar2 = *(long **)(param_1 + 0xd8);
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar4 = *plVar2;
    param_4 = param_2;
    param_5 = param_3;
  }
  uVar3 = (**(code **)(lVar4 + 0x18))(plVar2,param_4,param_5);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0xa6b,
                   "Failed to write RTC event to output.");
    }
    plVar2 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b25884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


// ===== 00b258a4  FUN_00b258a4 =====

void FUN_00b258a4(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *local_60;
  long *local_58;
  
  if ((param_4 <= param_2) && ((param_2 != param_4 || (param_5 < param_3)))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2353: libc++ Hardening assertion __f <= __l failed: deque::erase(first, last) called with an invalid range\n"
              );
  }
  if (param_5 == param_3) {
    lVar13 = 0;
  }
  else {
    lVar13 = (((long)param_5 - *param_4 >> 3) + ((long)param_4 - (long)param_2) * 0x40) -
             ((long)param_3 - *param_2 >> 3);
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 8);
  plVar10 = (long *)(lVar7 + (uVar5 >> 9) * 8);
  plVar14 = plVar10;
  if (lVar7 == *(long *)(param_1 + 0x10)) {
    plVar11 = (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_00b25988;
LAB_00b25938:
    uVar9 = ((long)param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar10) * 0x40;
    uVar12 = uVar9 - ((long)plVar11 - *plVar10 >> 3);
    plVar3 = plVar11;
    if (uVar12 != 0) {
      if ((long)uVar9 < 1) {
        uVar2 = 0x1ff - uVar9;
        uVar9 = 0x3fe - uVar9;
        if (-1 < (long)uVar2) {
          uVar9 = uVar2;
        }
        uVar8 = uVar2 & 0x1ff;
        plVar14 = plVar10 + -((long)uVar9 >> 9);
        if ((long)uVar2 < 1) {
          uVar8 = -(-uVar2 & 0x1ff);
        }
        plVar3 = (long *)(*plVar14 + (0x1ff - uVar8) * 8);
      }
      else {
        plVar14 = plVar10 + (uVar9 >> 9);
        plVar3 = (long *)(*plVar14 + (uVar9 & 0x1ff) * 8);
      }
    }
  }
  else {
    plVar11 = (long *)(*plVar10 + (uVar5 & 0x1ff) * 8);
    if (param_3 != plVar11) goto LAB_00b25938;
LAB_00b25988:
    uVar12 = 0;
    plVar3 = plVar11;
  }
  if (lVar13 < 1) {
    return;
  }
  uVar9 = lVar13 + ((long)plVar3 - *plVar14 >> 3);
  if (uVar12 <= (ulong)(*(long *)(param_1 + 0x28) - lVar13) >> 1) {
    if ((long)uVar9 < 1) {
      uVar12 = 0x1ff - uVar9;
      uVar5 = 0x3fe - uVar9;
      if (-1 < (long)uVar12) {
        uVar5 = uVar12;
      }
      uVar9 = uVar12 & 0x1ff;
      if ((long)uVar12 < 1) {
        uVar9 = -(-uVar12 & 0x1ff);
      }
      local_60 = plVar14 + -((long)uVar5 >> 9);
      local_58 = (long *)(*local_60 + (0x1ff - uVar9) * 8);
    }
    else {
      local_60 = plVar14 + (uVar9 >> 9);
      local_58 = (long *)(*local_60 + (uVar9 & 0x1ff) * 8);
    }
    FUN_00b2804c(plVar10,plVar11,plVar14,plVar3,&local_60);
    plVar14 = local_58;
    while( true ) {
      if (plVar14 == plVar11) {
        uVar5 = *(long *)(param_1 + 0x20) + lVar13;
        puVar6 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar13;
        *(ulong *)(param_1 + 0x20) = uVar5;
        while (0x3ff < uVar5) {
          operator_delete((void *)*puVar6);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar5 = *(long *)(param_1 + 0x20) - 0x200;
          *(undefined8 **)(param_1 + 8) = puVar6;
          *(ulong *)(param_1 + 0x20) = uVar5;
        }
        return;
      }
      if (plVar11 == (long *)0x0) break;
      plVar3 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar11 = plVar11 + 1;
      if ((long)plVar11 - *plVar10 == 0x1000) {
        plVar10 = plVar10 + 1;
        plVar11 = (long *)*plVar10;
      }
    }
    goto LAB_00b25d6c;
  }
  if ((long)uVar9 < 1) {
    uVar2 = 0x1ff - uVar9;
    uVar12 = 0x3fe - uVar9;
    if (-1 < (long)uVar2) {
      uVar12 = uVar2;
    }
    uVar9 = uVar2 & 0x1ff;
    plVar10 = plVar14 + -((long)uVar12 >> 9);
    if ((long)uVar2 < 1) {
      uVar9 = -(-uVar2 & 0x1ff);
    }
    lVar4 = *plVar10 + (0x1ff - uVar9) * 8;
  }
  else {
    plVar10 = plVar14 + (uVar9 >> 9);
    lVar4 = *plVar10 + (uVar9 & 0x1ff) * 8;
  }
  uVar5 = *(long *)(param_1 + 0x28) + uVar5;
  plVar11 = (long *)(lVar7 + (uVar5 >> 9) * 8);
  if (lVar7 == *(long *)(param_1 + 0x10)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar11 + (uVar5 & 0x1ff) * 8;
  }
  local_60 = plVar14;
  local_58 = plVar3;
  FUN_00b27b6c(plVar10,lVar4,plVar11,lVar7,&local_60);
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  plVar10 = local_58;
  plVar14 = local_60;
  if (lVar7 == lVar4) {
    plVar11 = (long *)0x0;
    if (local_58 != (long *)0x0) goto LAB_00b25c04;
  }
  else {
    uVar5 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    plVar11 = (long *)(*(long *)(lVar7 + (uVar5 >> 9) * 8) + (uVar5 & 0x1ff) * 8);
    if (local_58 != plVar11) {
LAB_00b25c04:
      do {
        if (plVar10 == (long *)0x0) goto LAB_00b25d6c;
        plVar3 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar10 = plVar10 + 1;
        if ((long)plVar10 - *plVar14 == 0x1000) {
          plVar14 = plVar14 + 1;
          plVar10 = (long *)*plVar14;
        }
      } while (plVar10 != plVar11);
      lVar7 = *(long *)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
  lVar13 = *(long *)(param_1 + 0x28) - lVar13;
  lVar1 = 0;
  if (lVar4 != lVar7) {
    lVar1 = (lVar4 - lVar7) * 0x40 + -1;
  }
  *(long *)(param_1 + 0x28) = lVar13;
  uVar5 = lVar1 - (lVar13 + *(long *)(param_1 + 0x20));
  while( true ) {
    if (uVar5 < 0x400) {
      return;
    }
    operator_delete(*(void **)(lVar4 + -8));
    lVar4 = *(long *)(param_1 + 0x10) + -8;
    if (lVar4 == 0) break;
    *(long *)(param_1 + 0x10) = lVar4;
    lVar13 = 0;
    if (lVar4 != *(long *)(param_1 + 8)) {
      lVar13 = (lVar4 - *(long *)(param_1 + 8)) * 0x40 + -1;
    }
    uVar5 = lVar13 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
LAB_00b25d6c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b25d80  FUN_00b25d80 =====

void FUN_00b25d80(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    plVar3 = *(long **)(param_1 + 0xd8);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))(&local_48,*(long **)(param_1 + 0xd0),uVar2);
    pppuVar1 = (undefined8 ***)local_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppuVar1 = &local_48;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,pppuVar1,uStack_40);
    if ((char)bStack_31 < '\0') {
      operator_delete(local_48);
    }
    plVar3 = *(long **)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return;
}


// ===== 00b25e48  FUN_00b25e48 =====

undefined8 * FUN_00b25e48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar7 = puVar3;
  if (puVar3 != (undefined8 *)param_1[2]) {
    uVar8 = param_1[4];
    plVar10 = puVar3 + (uVar8 >> 9);
    plVar11 = (long *)(*plVar10 + (uVar8 & 0x1ff) * 8);
    plVar1 = (long *)(puVar3[param_1[5] + uVar8 >> 9] + (param_1[5] + uVar8 & 0x1ff) * 8);
    puVar7 = (undefined8 *)param_1[2];
    if (plVar11 != plVar1) {
      do {
        if (plVar11 == (long *)0x0) goto LAB_00b25fcc;
        plVar2 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar11 = plVar11 + 1;
        if ((long)plVar11 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          plVar11 = (long *)*plVar10;
        }
      } while (plVar11 != plVar1);
      puVar3 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar7 - (long)puVar3;
  while (uVar8 = lVar6 >> 3, 2 < uVar8) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar3;
    lVar6 = param_1[2] - (long)puVar3;
  }
  if (uVar8 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar8 != 2) goto LAB_00b25f60;
    uVar4 = 0x200;
  }
  param_1[4] = uVar4;
LAB_00b25f60:
  FUN_00b26044(param_1);
  lVar6 = param_1[1];
  lVar5 = param_1[2];
  uVar9 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
  uVar8 = (ulong)((lVar6 - lVar5 << 0x3d) - (lVar6 - lVar5)) >> 3;
  if (uVar9 <= uVar8) {
    uVar8 = uVar9;
  }
  if ((1 < uVar8) && ((((int)lVar6 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
    uVar8 = uVar8 & 0x1ffffffffffffffe;
    lVar5 = lVar5 + uVar8 * -8;
    do {
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
  }
  do {
    if (lVar5 == lVar6) {
      param_1[2] = lVar5;
      FUN_00b2613c(param_1);
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      param_2[4] = 0;
      param_2[5] = 0;
      return param_1;
    }
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0);
LAB_00b25fcc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b26044  FUN_00b26044 =====

void FUN_00b26044(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != *(long *)(param_1 + 8)) {
      do {
        operator_delete(*(void **)(lVar2 + -8));
        lVar2 = *(long *)(param_1 + 0x10) + -8;
        if (lVar2 == 0) goto LAB_00b26128;
        *(long *)(param_1 + 0x10) = lVar2;
      } while (lVar2 != *(long *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (0x1ff < uVar4) {
      operator_delete((void *)*puVar3);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 8) = puVar3;
      uVar4 = *(long *)(param_1 + 0x20) - 0x200;
      *(ulong *)(param_1 + 0x20) = uVar4;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar1 = 0;
    if (puVar5 != puVar3) {
      lVar1 = ((long)puVar5 - (long)puVar3) * 0x40 + -1;
    }
    if (0x1ff < lVar1 - (lVar2 + uVar4)) {
      operator_delete((void *)puVar5[-1]);
      lVar2 = *(long *)(param_1 + 0x10) + -8;
      if (lVar2 == 0) {
LAB_00b26128:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(long *)(param_1 + 0x10) = lVar2;
    }
  }
  FUN_00b2613c(param_1);
  return;
}


// ===== 00b2613c  FUN_00b2613c =====

void FUN_00b2613c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = param_1[2];
  pvVar5 = (void *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)(lVar6 - (long)puVar13);
  if (puVar11 < (undefined8 *)(param_1[3] - (long)pvVar5)) {
    if (lVar6 - (long)puVar13 == 0) {
      puVar2 = (undefined8 *)0x0;
      lVar12 = lVar6;
    }
    else {
      if ((long)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      puVar2 = (undefined8 *)operator_new(lVar6 - (long)puVar13);
      puVar11 = (undefined8 *)((long)puVar2 + (long)puVar11);
      uVar3 = (lVar6 - (long)puVar13) - 8U >> 3;
      uVar8 = (ulong)-(long)puVar2 >> 3;
      if (uVar3 <= (ulong)-(long)puVar2 >> 3) {
        uVar8 = uVar3;
      }
      puVar4 = puVar2;
      if (0x2b < uVar8) {
        uVar9 = (ulong)-(long)puVar2 >> 3;
        if (uVar3 <= uVar9) {
          uVar9 = uVar3;
        }
        if (((((((int)lVar6 - (int)puVar13 | (uint)-(long)puVar2) & 7) == 0) &&
             (puVar2 <= puVar2 + uVar9)) && (puVar13 <= puVar13 + uVar9)) &&
           (0x1f < (ulong)((long)puVar2 - (long)puVar13))) {
          puVar7 = puVar13 + 2;
          uVar3 = uVar8 + 1 & 3;
          puVar10 = puVar2 + 2;
          uVar9 = 4;
          if (uVar3 != 0) {
            uVar9 = uVar3;
          }
          lVar6 = (uVar8 + 1) - uVar9;
          puVar4 = puVar2 + lVar6;
          puVar13 = puVar13 + lVar6;
          do {
            puVar1 = puVar7 + -1;
            uVar14 = puVar7[-2];
            uVar16 = puVar7[1];
            uVar15 = *puVar7;
            lVar6 = lVar6 + -4;
            puVar7 = puVar7 + 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar14;
            puVar10[1] = uVar16;
            *puVar10 = uVar15;
            puVar10 = puVar10 + 4;
          } while (lVar6 != 0);
        }
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
        *puVar4 = *puVar13;
        puVar4 = puVar7;
        puVar13 = puVar13 + 1;
      } while (puVar7 != puVar11);
      pvVar5 = (void *)*param_1;
      lVar6 = param_1[2];
      lVar12 = param_1[1];
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2;
    uVar3 = (lVar6 - (lVar6 << 0x3d)) - 8U >> 3;
    uVar8 = (ulong)((lVar12 - lVar6 << 0x3d) - (lVar12 - lVar6)) >> 3;
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_1[2] = (long)puVar2 + (lVar6 - lVar12);
    param_1[3] = (long)puVar11;
    if ((1 < uVar8) && ((((int)lVar12 - (int)lVar6 | -(int)lVar6) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      lVar6 = lVar6 + uVar8 * -8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (lVar6 != lVar12) {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


// ===== 00b26358  FUN_00b26358 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b26358(long param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5,
                 long *param_6,undefined8 *param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *local_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 uStack_31;
  
  uVar7 = *(ulong *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar12 = uVar7 >> 9;
  plVar4 = (long *)(lVar5 + uVar12 * 8);
  if (lVar5 == lVar6) {
    lVar13 = 0;
    if (param_3 != 0) goto LAB_00b263bc;
LAB_00b263ec:
    uVar18 = 0;
  }
  else {
    lVar13 = *plVar4 + (uVar7 & 0x1ff) * 8;
    if (param_3 == lVar13) goto LAB_00b263ec;
LAB_00b263bc:
    uVar18 = ((param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar4) * 0x40) -
             (lVar13 - *plVar4 >> 3);
  }
  lVar13 = *(long *)(param_1 + 0x28);
  if (lVar13 - uVar18 <= uVar18) {
    uVar7 = uVar7 + lVar13;
    lVar1 = 0;
    if (lVar6 != lVar5) {
      lVar1 = (lVar6 - lVar5) * 0x40 + -1;
    }
    lVar2 = param_8 - (lVar1 - uVar7);
    if (lVar1 - uVar7 <= param_8 && lVar2 != 0) {
      FUN_00b26e44(param_1,lVar2);
      lVar13 = *(long *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar7 = *(long *)(param_1 + 0x20) + lVar13;
    }
    local_70 = (long *)(lVar5 + (uVar7 >> 9) * 8);
    if (lVar5 == lVar6) {
      puStack_68 = (undefined8 *)0x0;
    }
    else {
      puStack_68 = (undefined8 *)(*local_70 + (uVar7 & 0x1ff) * 8);
    }
    uVar18 = lVar13 - uVar18;
    plVar4 = local_70;
    puVar10 = puStack_68;
    if (uVar18 < param_8) {
      puVar16 = param_7;
      if (param_8 >> 1 <= uVar18) {
        uVar7 = (uVar18 - param_8) + ((long)param_7 - *param_6 >> 3);
        if ((long)uVar7 < 1) {
          uVar12 = 0x1ff - uVar7;
          uVar7 = 0x3fe - uVar7;
          if (-1 < (long)uVar12) {
            uVar7 = uVar12;
          }
          plVar8 = param_6 + -((long)uVar7 >> 9);
LAB_00b26854:
          uVar7 = uVar12 & 0x1ff;
          if ((long)uVar12 < 1) {
            uVar7 = -(-uVar12 & 0x1ff);
          }
          puVar17 = (undefined8 *)(*plVar8 + (0x1ff - uVar7) * 8);
          puVar11 = puVar17;
          param_6 = plVar8;
          goto joined_r0x00b26874;
        }
        plVar8 = param_6 + (uVar7 >> 9);
LAB_00b2657c:
        puVar17 = (undefined8 *)(*plVar8 + (uVar7 & 0x1ff) * 8);
        puVar11 = puVar17;
        param_6 = plVar8;
        goto joined_r0x00b26874;
      }
      if (uVar18 != 0) {
        uVar7 = uVar18 + ((long)param_5 - *param_4 >> 3);
        if ((long)uVar7 < 1) {
          uVar12 = 0x1ff - uVar7;
          uVar7 = 0x3fe - uVar7;
          if (-1 < (long)uVar12) {
            uVar7 = uVar12;
          }
          plVar8 = param_4 + -((long)uVar7 >> 9);
          goto LAB_00b26854;
        }
        plVar8 = param_4 + (uVar7 >> 9);
        goto LAB_00b2657c;
      }
      puVar9 = puStack_68;
      plVar8 = param_4;
      puVar17 = param_5;
      param_6 = param_4;
      puVar11 = param_5;
      if (param_5 != param_7) {
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00b26b20;
          uVar15 = *puVar17;
          *puVar17 = 0;
          puVar10 = puVar9 + 1;
          *puVar9 = uVar15;
          if ((long)puVar10 - *plVar4 == 0x1000) {
            plVar4 = plVar4 + 1;
            puVar10 = (undefined8 *)*plVar4;
          }
          puVar17 = puVar17 + 1;
          if ((long)puVar17 - *plVar8 == 0x1000) {
            plVar8 = plVar8 + 1;
            puVar17 = (undefined8 *)*plVar8;
          }
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          puVar16 = puVar11;
joined_r0x00b26874:
          puVar9 = puVar10;
        } while (puVar17 != param_7);
      }
      param_7 = puVar16;
      param_8 = uVar18;
      if (uVar18 == 0) {
        return;
      }
    }
    else if (param_8 == 0) {
      return;
    }
    uVar7 = ((long)puStack_68 - *local_70 >> 3) - param_8;
    if ((long)uVar7 < 1) {
      uVar12 = 0x1ff - uVar7;
      uVar7 = 0x3fe - uVar7;
      if (-1 < (long)uVar12) {
        uVar7 = uVar12;
      }
      uVar14 = uVar12 & 0x1ff;
      plVar8 = local_70 + -((long)uVar7 >> 9);
      if ((long)uVar12 < 1) {
        uVar14 = -(-uVar12 & 0x1ff);
      }
      puVar16 = (undefined8 *)(*plVar8 + (0x1ff - uVar14) * 8);
      plVar3 = plVar8;
      puVar17 = puVar16;
    }
    else {
      plVar8 = local_70 + (uVar7 >> 9);
      puVar16 = (undefined8 *)(*plVar8 + (uVar7 & 0x1ff) * 8);
      plVar3 = plVar8;
      puVar17 = puVar16;
    }
    while( true ) {
      if (puVar16 == puStack_68) {
        plVar4 = local_70;
        puVar10 = puStack_68;
        if (param_8 < uVar18) {
          uVar18 = ((long)puStack_68 - *local_70 >> 3) - uVar18;
          if ((long)uVar18 < 1) {
            uVar12 = 0x1ff - uVar18;
            uVar7 = 0x3fe - uVar18;
            if (-1 < (long)uVar12) {
              uVar7 = uVar12;
            }
            uVar18 = uVar12 & 0x1ff;
            plVar4 = local_70 + -((long)uVar7 >> 9);
            if ((long)uVar12 < 1) {
              uVar18 = -(-uVar12 & 0x1ff);
            }
            lVar5 = *plVar4 + (0x1ff - uVar18) * 8;
          }
          else {
            plVar4 = local_70 + (uVar18 >> 9);
            lVar5 = *plVar4 + (uVar18 & 0x1ff) * 8;
          }
          FUN_00b2804c(plVar4,lVar5,plVar3,puVar17,&local_70);
          plVar4 = local_70;
          puVar10 = puStack_68;
        }
        puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00b2832c(&local_70,&uStack_31,param_4,param_5,param_6,param_7,plVar4,puVar10);
        return;
      }
      if (puVar10 == (undefined8 *)0x0) break;
      uVar15 = *puVar16;
      *puVar16 = 0;
      puVar11 = puVar10 + 1;
      *puVar10 = uVar15;
      if ((long)puVar11 - *plVar4 == 0x1000) {
        plVar4 = plVar4 + 1;
        puVar11 = (undefined8 *)*plVar4;
      }
      puVar16 = puVar16 + 1;
      if ((long)puVar16 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        puVar16 = (undefined8 *)*plVar8;
      }
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      puVar10 = puVar11;
    }
    goto LAB_00b26b20;
  }
  if (uVar7 <= param_8 && param_8 - uVar7 != 0) {
    FUN_00b26b34(param_1,param_8 - uVar7);
    uVar7 = *(ulong *)(param_1 + 0x20);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar12 = uVar7 >> 9;
  }
  lVar1 = _UNK_001f3ec8;
  lVar13 = _DAT_001f3ec0;
  local_70 = (long *)(lVar5 + uVar12 * 8);
  plVar4 = local_70;
  if (lVar5 == lVar6) {
    puStack_68 = (undefined8 *)0x0;
    lVar5 = param_8 - uVar18;
    if (uVar18 <= param_8 && lVar5 != 0) goto LAB_00b2643c;
LAB_00b264d0:
    puVar10 = puStack_68;
    if (param_8 == 0) {
      return;
    }
  }
  else {
    puStack_68 = (undefined8 *)(*local_70 + (uVar7 & 0x1ff) * 8);
    lVar5 = param_8 - uVar18;
    if (param_8 < uVar18 || lVar5 == 0) goto LAB_00b264d0;
LAB_00b2643c:
    puVar10 = puStack_68;
    puVar16 = param_5;
    if (param_8 >> 1 <= uVar18) {
      uVar7 = lVar5 + ((long)param_5 - *param_4 >> 3);
      if ((long)uVar7 < 1) {
        uVar12 = 0x1ff - uVar7;
        uVar7 = 0x3fe - uVar7;
        if (-1 < (long)uVar12) {
          uVar7 = uVar12;
        }
        plVar8 = param_4 + -((long)uVar7 >> 9);
LAB_00b26628:
        uVar7 = uVar12 & 0x1ff;
        if ((long)uVar12 < 1) {
          uVar7 = -(-uVar12 & 0x1ff);
        }
        puVar17 = (undefined8 *)(*plVar8 + (0x1ff - uVar7) * 8);
        puVar11 = puVar17;
        param_4 = plVar8;
        goto joined_r0x00b26648;
      }
      plVar8 = param_4 + (uVar7 >> 9);
LAB_00b26548:
      puVar17 = (undefined8 *)(*plVar8 + (uVar7 & 0x1ff) * 8);
      puVar11 = puVar17;
      param_4 = plVar8;
      goto joined_r0x00b26648;
    }
    if (uVar18 != 0) {
      uVar7 = ((long)param_7 - *param_6 >> 3) - uVar18;
      if ((long)uVar7 < 1) {
        uVar12 = 0x1ff - uVar7;
        uVar7 = 0x3fe - uVar7;
        if (-1 < (long)uVar12) {
          uVar7 = uVar12;
        }
        plVar8 = param_6 + -((long)uVar7 >> 9);
        goto LAB_00b26628;
      }
      plVar8 = param_6 + (uVar7 >> 9);
      goto LAB_00b26548;
    }
    plVar8 = param_6;
    puVar17 = param_7;
    param_4 = param_6;
    puVar11 = param_7;
    if (param_7 != param_5) {
      do {
        if (puVar10 == (undefined8 *)*plVar4) {
          plVar4 = plVar4 + -1;
          puVar10 = (undefined8 *)(*plVar4 + 0x1000);
        }
        if (puVar17 == (undefined8 *)*plVar8) {
          plVar8 = plVar8 + -1;
          puVar17 = (undefined8 *)(*plVar8 + 0x1000);
        }
        puVar10 = puVar10 + -1;
        if (puVar10 == (undefined8 *)0x0) goto LAB_00b26b20;
        puVar17 = puVar17 + -1;
        uVar15 = *puVar17;
        *puVar17 = 0;
        *puVar10 = uVar15;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar13;
        puVar16 = puVar11;
joined_r0x00b26648:
      } while (puVar17 != param_5);
    }
    param_5 = puVar16;
    param_8 = uVar18;
    if (uVar18 == 0) {
      return;
    }
  }
  lVar6 = _UNK_001f3ec8;
  lVar5 = _DAT_001f3ec0;
  uVar7 = param_8 + ((long)puStack_68 - *local_70 >> 3);
  if ((long)uVar7 < 1) {
    uVar12 = 0x1ff - uVar7;
    uVar7 = 0x3fe - uVar7;
    if (-1 < (long)uVar12) {
      uVar7 = uVar12;
    }
    uVar14 = uVar12 & 0x1ff;
    plVar8 = local_70 + -((long)uVar7 >> 9);
    if ((long)uVar12 < 1) {
      uVar14 = -(-uVar12 & 0x1ff);
    }
    puVar16 = (undefined8 *)(*plVar8 + (0x1ff - uVar14) * 8);
  }
  else {
    plVar8 = local_70 + (uVar7 >> 9);
    puVar16 = (undefined8 *)(*plVar8 + (uVar7 & 0x1ff) * 8);
  }
  while( true ) {
    if (puVar16 == puStack_68) {
      plVar4 = local_70;
      puVar10 = puStack_68;
      if (param_8 < uVar18) {
        FUN_00b27b6c();
        plVar4 = local_70;
        puVar10 = puStack_68;
      }
      puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00b27e94(&local_70,&uStack_31,param_4,param_5,param_6,param_7,plVar4,puVar10);
      return;
    }
    if (puVar10 == (undefined8 *)*plVar4) {
      plVar4 = plVar4 + -1;
      puVar10 = (undefined8 *)(*plVar4 + 0x1000);
    }
    if (puVar16 == (undefined8 *)*plVar8) {
      plVar8 = plVar8 + -1;
      puVar16 = (undefined8 *)(*plVar8 + 0x1000);
    }
    puVar10 = puVar10 + -1;
    if (puVar10 == (undefined8 *)0x0) break;
    puVar16 = puVar16 + -1;
    uVar15 = *puVar16;
    *puVar16 = 0;
    *puVar10 = uVar15;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar5;
  }
LAB_00b26b20:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b26b34  FUN_00b26b34 =====

void FUN_00b26b34(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  void *local_58;
  void *local_38;
  
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  lVar12 = param_1[4];
  lVar6 = lVar5 - lVar3;
  if (lVar6 == 0) {
    param_2 = param_2 + 1;
  }
  lVar2 = 0;
  if (lVar6 != 0) {
    lVar2 = (lVar5 - lVar3) * 0x40 + -1;
  }
  uVar14 = param_2 >> 9;
  uVar17 = (ulong)(lVar2 - (param_1[5] + lVar12)) >> 9;
  if ((param_2 & 0x1ff) != 0) {
    uVar14 = uVar14 + 1;
  }
  uVar13 = uVar14;
  if (uVar17 <= uVar14) {
    uVar13 = uVar17;
  }
  if (uVar14 <= uVar17) {
    param_1[4] = lVar12 + uVar13 * 0x200;
    while( true ) {
      if (uVar13 == 0) {
        return;
      }
      puVar9 = (undefined8 *)(param_1[2] + -8);
      local_70 = (void *)*puVar9;
      pvVar7 = local_60;
      if (puVar9 == (undefined8 *)0x0) break;
      param_1[2] = (long)puVar9;
      FUN_00b27124(param_1,&local_70);
      uVar13 = uVar13 - 1;
    }
    goto LAB_00b26e18;
  }
  uVar16 = uVar14 - uVar13;
  if ((ulong)((param_1[3] - *param_1 >> 3) - (lVar6 >> 3)) < uVar16) {
    uVar11 = param_1[3] - *param_1 >> 2;
    uVar1 = uVar16 + (lVar6 >> 3);
    local_70 = (void *)0x0;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (uVar11 != 0) {
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_70 = operator_new(uVar11 << 3);
    }
    local_58 = (void *)((long)local_70 + uVar11 * 8);
    pvStack_68 = local_70;
    local_60 = local_70;
    do {
      local_38 = operator_new(0x1000);
      FUN_00b2765c(&local_70,&local_38);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    pvVar10 = (void *)param_1[2];
    while (uVar17 != 0) {
      FUN_00b278e4(&local_70,(long)pvVar10 + -8);
      pvVar10 = (void *)(param_1[2] + -8);
      pvVar7 = local_60;
      if (pvVar10 == (void *)0x0) goto LAB_00b26e18;
      param_1[2] = (long)pvVar10;
      uVar13 = uVar13 - 1;
      uVar17 = uVar13;
    }
    pvVar15 = (void *)param_1[1];
    if (pvVar15 != pvVar10) {
      do {
        FUN_00b278e4(&local_70,pvVar15);
        pvVar10 = (void *)param_1[2];
        pvVar15 = (void *)((long)pvVar15 + 8);
      } while (pvVar15 != pvVar10);
      pvVar15 = (void *)param_1[1];
    }
    pvVar8 = (void *)*param_1;
    pvVar4 = (void *)param_1[3];
    uVar13 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
    uVar17 = (ulong)(((long)pvVar15 - (long)pvVar10 << 0x3d) - ((long)pvVar15 - (long)pvVar10)) >> 3
    ;
    param_1[1] = (long)pvStack_68;
    *param_1 = (long)local_70;
    param_1[3] = (long)local_58;
    param_1[2] = (long)local_60;
    if (uVar13 <= uVar17) {
      uVar17 = uVar13;
    }
    param_1[4] = (uVar14 * 0x200 - (ulong)(lVar3 == lVar5)) + param_1[4];
    local_60 = pvVar10;
    if ((1 < uVar17) && ((((int)pvVar15 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
      uVar17 = uVar17 & 0x1ffffffffffffffe;
      local_60 = (void *)((long)pvVar10 + uVar17 * -8);
      do {
        uVar17 = uVar17 - 2;
      } while (uVar17 != 0);
    }
    do {
      local_70 = pvVar8;
      pvStack_68 = pvVar15;
      local_58 = pvVar4;
      if (local_60 == pvVar15) {
        if (pvVar8 == (void *)0x0) {
          return;
        }
        operator_delete(pvVar8);
        return;
      }
      local_60 = (void *)((long)local_60 + -8);
      pvVar7 = pvVar10;
    } while (local_60 != (void *)0x0);
    goto LAB_00b26e18;
  }
  while (uVar16 != 0) {
    if (lVar3 == *param_1) goto LAB_00b26c8c;
    local_70 = operator_new(0x1000);
    FUN_00b273c0(param_1,&local_70);
    lVar3 = param_1[1];
    uVar16 = uVar16 - 1;
    uVar14 = uVar14 - 1;
    lVar12 = 0x1ff;
    if (param_1[2] - lVar3 != 8) {
      lVar12 = 0x200;
    }
    lVar12 = lVar12 + param_1[4];
    param_1[4] = lVar12;
  }
LAB_00b26cb4:
  param_1[4] = lVar12 + uVar13 * 0x200;
  while( true ) {
    if (uVar13 == 0) {
      return;
    }
    puVar9 = (undefined8 *)(param_1[2] + -8);
    local_70 = (void *)*puVar9;
    pvVar7 = local_60;
    if (puVar9 == (undefined8 *)0x0) break;
    param_1[2] = (long)puVar9;
    FUN_00b27124(param_1,&local_70);
    uVar13 = uVar13 - 1;
  }
LAB_00b26e18:
  local_60 = pvVar7;
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
LAB_00b26c8c:
  do {
    local_70 = operator_new(0x1000);
    FUN_00b2765c(param_1,&local_70);
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  lVar12 = param_1[4];
  uVar13 = uVar14;
  goto LAB_00b26cb4;
}


// ===== 00b26e44  FUN_00b26e44 =====

void FUN_00b26e44(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *local_48;
  
  uVar7 = (ulong)param_1[4] >> 9;
  if (param_1[1] == param_1[2]) {
    param_2 = param_2 + 1;
  }
  uVar4 = param_2 >> 9;
  if ((param_2 & 0x1ff) != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = uVar4;
  if (uVar7 <= uVar4) {
    uVar2 = uVar7;
  }
  if (uVar4 <= uVar7) {
    param_1[4] = param_1[4] + uVar2 * -0x200;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      local_60 = *(void **)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
      FUN_00b278e4(param_1,&local_60);
    }
    return;
  }
  lVar8 = param_1[2] - param_1[1] >> 3;
  uVar6 = uVar4 - uVar2;
  if ((ulong)((param_1[3] - *param_1 >> 3) - lVar8) < uVar6) {
    uVar4 = param_1[3] - *param_1 >> 2;
    local_60 = (void *)0x0;
    if (uVar4 <= uVar6 + lVar8) {
      uVar4 = uVar6 + lVar8;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_60 = operator_new(uVar4 << 3);
    }
    local_48 = (void *)((long)local_60 + uVar4 * 8);
    pvStack_58 = (void *)((long)local_60 + (lVar8 - uVar2) * 8);
    local_50 = pvStack_58;
    do {
      local_68 = operator_new(0x1000);
      FUN_00b2765c(&local_60,&local_68);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar8 = param_1[1];
    uVar4 = uVar2;
    while (uVar7 != 0) {
      FUN_00b278e4(&local_60);
      lVar8 = param_1[1] + 8;
      param_1[1] = lVar8;
      uVar4 = uVar4 - 1;
      uVar7 = uVar4;
    }
    lVar5 = param_1[2];
    if (lVar5 != lVar8) {
      do {
        lVar5 = lVar5 + -8;
        FUN_00b27124(&local_60,lVar5);
        lVar8 = param_1[1];
      } while (lVar5 != lVar8);
      lVar5 = param_1[2];
    }
    pvVar3 = (void *)*param_1;
    lVar1 = param_1[3];
    uVar4 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
    uVar7 = (ulong)((lVar8 - lVar5 << 0x3d) - (lVar8 - lVar5)) >> 3;
    param_1[1] = (long)pvStack_58;
    *param_1 = (long)local_60;
    param_1[3] = (long)local_48;
    param_1[2] = (long)local_50;
    if (uVar4 <= uVar7) {
      uVar7 = uVar4;
    }
    param_1[4] = param_1[4] + uVar2 * -0x200;
    local_50 = (void *)lVar5;
    if ((1 < uVar7) && ((((int)lVar8 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      local_50 = (void *)(lVar5 + uVar7 * -8);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (local_60 = pvVar3, pvStack_58 = (void *)lVar8, local_48 = (void *)lVar1,
          local_50 != (void *)lVar8) {
      local_50 = (void *)((long)local_50 + -8);
      if (local_50 == (void *)0x0) {
        local_50 = (void *)lVar5;
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (pvVar3 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar3);
    return;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (param_1[3] == param_1[2]) goto LAB_00b27080;
    local_60 = operator_new(0x1000);
    FUN_00b2765c(param_1,&local_60);
    uVar4 = uVar4 - 1;
  }
  lVar8 = param_1[4];
  uVar4 = uVar2;
LAB_00b270c0:
  param_1[4] = lVar8 + uVar4 * -0x200;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    FUN_00b278e4(param_1,&local_60);
  }
  return;
LAB_00b27080:
  do {
    local_60 = operator_new(0x1000);
    FUN_00b273c0(param_1,&local_60);
    uVar6 = uVar6 - 1;
    lVar8 = 0x1ff;
    if (param_1[2] - param_1[1] != 8) {
      lVar8 = 0x200;
    }
    lVar8 = lVar8 + param_1[4];
    param_1[4] = lVar8;
  } while (uVar6 != 0);
  goto LAB_00b270c0;
}


// ===== 00b27124  FUN_00b27124 =====

void FUN_00b27124(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00b273a8;
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
LAB_00b273a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b273c0  FUN_00b273c0 =====

void FUN_00b273c0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00b27644;
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
LAB_00b27644:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b2765c  FUN_00b2765c =====

void FUN_00b2765c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00b278cc;
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
LAB_00b278cc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b278e4  FUN_00b278e4 =====

void FUN_00b278e4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00b27b54;
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
LAB_00b27b54:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b27b6c  FUN_00b27b6c =====

void FUN_00b27b6c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 == param_3) {
    plVar8 = (long *)*param_5;
    plVar7 = (long *)param_5[1];
    if (param_2 != param_4) {
      plVar5 = (long *)*plVar8;
      do {
        lVar6 = (long)param_4 - (long)param_2 >> 3;
        lVar4 = (long)plVar5 + (0x1000 - (long)plVar7) >> 3;
        if (lVar4 <= lVar6) {
          lVar6 = lVar4;
        }
        if (lVar6 != 0) {
          lVar4 = lVar6 * 8;
          plVar5 = param_2 + lVar6;
          do {
            lVar6 = *param_2;
            *param_2 = 0;
            plVar3 = (long *)*plVar7;
            *plVar7 = lVar6;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            lVar4 = lVar4 + -8;
            param_2 = param_2 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar4 != 0);
          param_2 = plVar5;
          if (param_4 == plVar5) goto LAB_00b27e58;
        }
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
        plVar7 = plVar5;
      } while( true );
    }
    goto LAB_00b27e70;
  }
  plVar5 = (long *)*param_5;
  plVar7 = (long *)param_5[1];
  plVar8 = (long *)(*param_1 + 0x1000);
  if (param_2 != plVar8) {
    plVar3 = (long *)*plVar5;
    do {
      lVar6 = (long)plVar8 - (long)param_2 >> 3;
      lVar4 = (long)plVar3 + (0x1000 - (long)plVar7) >> 3;
      if (lVar4 <= lVar6) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0) {
        lVar4 = lVar6 * 8;
        plVar3 = param_2 + lVar6;
        do {
          lVar6 = *param_2;
          *param_2 = 0;
          plVar1 = (long *)*plVar7;
          *plVar7 = lVar6;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar4 = lVar4 + -8;
          param_2 = param_2 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 != 0);
        param_2 = plVar3;
        if (plVar8 == plVar3) goto LAB_00b27c40;
      }
      plVar5 = plVar5 + 1;
      plVar3 = (long *)*plVar5;
      plVar7 = plVar3;
    } while( true );
  }
  goto LAB_00b27c58;
LAB_00b27c40:
  if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
    plVar5 = plVar5 + 1;
    plVar7 = (long *)*plVar5;
  }
LAB_00b27c58:
  param_1 = param_1 + 1;
LAB_00b27c64:
  *param_5 = plVar5;
  param_5[1] = plVar7;
  if (param_1 != param_3) {
    plVar8 = (long *)*param_1;
    plVar1 = (long *)*plVar5;
    plVar3 = plVar8 + 0x200;
    do {
      lVar6 = (long)plVar3 - (long)plVar8 >> 3;
      lVar4 = (long)plVar1 + (0x1000 - (long)plVar7) >> 3;
      if (lVar4 <= lVar6) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0) {
        lVar4 = lVar6 * 8;
        plVar1 = plVar8 + lVar6;
        do {
          lVar6 = *plVar8;
          *plVar8 = 0;
          plVar2 = (long *)*plVar7;
          *plVar7 = lVar6;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          lVar4 = lVar4 + -8;
          plVar8 = plVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 != 0);
        plVar8 = plVar1;
        if (plVar3 == plVar1) goto LAB_00b27cfc;
      }
      plVar5 = plVar5 + 1;
      plVar1 = (long *)*plVar5;
      plVar7 = plVar1;
    } while( true );
  }
  param_1 = (long *)*param_1;
  if (param_1 == param_4) {
LAB_00b27dc0:
    *param_5 = plVar5;
    param_5[1] = plVar7;
    return;
  }
  plVar8 = (long *)*plVar5;
  do {
    lVar6 = (long)param_4 - (long)param_1 >> 3;
    lVar4 = (long)plVar8 + (0x1000 - (long)plVar7) >> 3;
    if (lVar4 <= lVar6) {
      lVar6 = lVar4;
    }
    if (lVar6 != 0) {
      lVar4 = lVar6 * 8;
      plVar8 = param_1 + lVar6;
      do {
        lVar6 = *param_1;
        *param_1 = 0;
        plVar3 = (long *)*plVar7;
        *plVar7 = lVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar4 = lVar4 + -8;
        param_1 = param_1 + 1;
        plVar7 = plVar7 + 1;
      } while (lVar4 != 0);
      param_1 = plVar8;
      if (param_4 == plVar8) {
        if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
          plVar5 = plVar5 + 1;
          plVar7 = (long *)*plVar5;
        }
        goto LAB_00b27dc0;
      }
    }
    plVar5 = plVar5 + 1;
    plVar8 = (long *)*plVar5;
    plVar7 = plVar8;
  } while( true );
LAB_00b27cfc:
  if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
    plVar5 = plVar5 + 1;
    plVar7 = (long *)*plVar5;
  }
  param_1 = param_1 + 1;
  goto LAB_00b27c64;
LAB_00b27e58:
  if ((plVar8 != (long *)0x0) && (plVar7 == (long *)(*plVar8 + 0x1000))) {
    plVar8 = plVar8 + 1;
    plVar7 = (long *)*plVar8;
  }
LAB_00b27e70:
  *param_5 = plVar8;
  param_5[1] = plVar7;
  return;
}


// ===== 00b27e94  FUN_00b27e94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b27e94(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_4 == param_6) {
LAB_00b28024:
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_7;
    param_1[3] = param_8;
    return;
  }
  plVar5 = (long *)*param_7;
  if (param_4 == param_6) goto LAB_00b27f10;
  do {
    lVar7 = (((long)param_6 - *param_5 >> 3) + ((long)param_5 - (long)param_3) * 0x40) -
            ((long)param_4 - *param_3 >> 3);
    while( true ) {
      lVar6 = (long)plVar5 + (0x1000 - (long)param_8) >> 3;
      if (lVar6 <= lVar7) {
        lVar7 = lVar6;
      }
      plVar5 = param_4;
      plVar2 = param_4;
      if (lVar7 != 0) {
        uVar1 = lVar7 + ((long)param_4 - *param_3 >> 3);
        if ((long)uVar1 < 1) {
          uVar3 = 0x1ff - uVar1;
          uVar1 = 0x3fe - uVar1;
          if (-1 < (long)uVar3) {
            uVar1 = uVar3;
          }
          uVar8 = uVar3 & 0x1ff;
          if ((long)uVar3 < 1) {
            uVar8 = -(-uVar3 & 0x1ff);
          }
          plVar2 = (long *)(param_3[-((long)uVar1 >> 9)] + (0x1ff - uVar8) * 8);
        }
        else {
          plVar2 = (long *)(param_3[uVar1 >> 9] + (uVar1 & 0x1ff) * 8);
        }
      }
      while (plVar5 != plVar2) {
        lVar7 = *plVar5;
        *plVar5 = 0;
        plVar4 = (long *)*param_8;
        *param_8 = lVar7;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        plVar5 = plVar5 + 1;
        if ((long)plVar5 - *param_3 == 0x1000) {
          param_3 = param_3 + 1;
          plVar5 = (long *)*param_3;
        }
        param_8 = param_8 + 1;
        param_4 = plVar2;
      }
      if (param_4 == param_6) {
        if ((param_7 != (long *)0x0) && (param_8 == (long *)(*param_7 + 0x1000))) {
          param_7 = param_7 + 1;
          param_8 = (long *)*param_7;
        }
        goto LAB_00b28024;
      }
      param_7 = param_7 + 1;
      plVar5 = (long *)*param_7;
      param_8 = plVar5;
      if (param_4 != param_6) break;
LAB_00b27f10:
      lVar7 = 0;
    }
  } while( true );
}


// ===== 00b2804c  FUN_00b2804c =====

void FUN_00b2804c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = (long *)*param_5;
  plVar8 = (long *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_00b28304;
    lVar3 = *plVar7;
    while( true ) {
      lVar4 = (long)plVar8 - lVar3 >> 3;
      lVar3 = (long)param_4 - (long)param_2 >> 3;
      if (lVar4 <= lVar3) {
        lVar3 = lVar4;
      }
      plVar9 = param_4;
      for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
        plVar9 = plVar9 + -1;
        lVar5 = *plVar9;
        *plVar9 = 0;
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
        *plVar8 = lVar5;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      param_4 = param_4 + -lVar3;
      if (param_2 == param_4) break;
      plVar7 = plVar7 + -1;
      lVar3 = *plVar7;
      plVar8 = (long *)(lVar3 + 0x1000);
    }
  }
  else {
    plVar9 = (long *)*param_3;
    if (plVar9 != param_4) {
      lVar3 = *plVar7;
      while( true ) {
        lVar4 = (long)plVar8 - lVar3 >> 3;
        lVar3 = (long)param_4 - (long)plVar9 >> 3;
        if (lVar4 <= lVar3) {
          lVar3 = lVar4;
        }
        plVar6 = param_4;
        for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
          plVar6 = plVar6 + -1;
          lVar5 = *plVar6;
          *plVar6 = 0;
          plVar8 = plVar8 + -1;
          plVar1 = (long *)*plVar8;
          *plVar8 = lVar5;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
        }
        param_4 = param_4 + -lVar3;
        if (plVar9 == param_4) break;
        plVar7 = plVar7 + -1;
        lVar3 = *plVar7;
        plVar8 = (long *)(lVar3 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        plVar8 = (long *)*plVar7;
      }
    }
    param_3 = param_3 + -1;
    while( true ) {
      *param_5 = plVar7;
      param_5[1] = plVar8;
      if (param_1 == param_3) break;
      plVar6 = (long *)*param_3;
      lVar3 = *plVar7;
      plVar9 = plVar6 + 0x200;
      while( true ) {
        lVar4 = (long)plVar8 - lVar3 >> 3;
        lVar3 = (long)plVar9 - (long)plVar6 >> 3;
        if (lVar4 <= lVar3) {
          lVar3 = lVar4;
        }
        plVar1 = plVar9;
        for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
          plVar1 = plVar1 + -1;
          lVar5 = *plVar1;
          *plVar1 = 0;
          plVar8 = plVar8 + -1;
          plVar2 = (long *)*plVar8;
          *plVar8 = lVar5;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar9 = plVar9 + -lVar3;
        if (plVar6 == plVar9) break;
        plVar7 = plVar7 + -1;
        lVar3 = *plVar7;
        plVar8 = (long *)(lVar3 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        plVar8 = (long *)*plVar7;
      }
      param_3 = param_3 + -1;
    }
    plVar9 = (long *)(*param_3 + 0x1000);
    if (param_2 == plVar9) goto LAB_00b28304;
    lVar3 = *plVar7;
    while( true ) {
      lVar4 = (long)plVar8 - lVar3 >> 3;
      lVar3 = (long)plVar9 - (long)param_2 >> 3;
      if (lVar4 <= lVar3) {
        lVar3 = lVar4;
      }
      plVar6 = plVar9;
      for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
        plVar6 = plVar6 + -1;
        lVar5 = *plVar6;
        *plVar6 = 0;
        plVar8 = plVar8 + -1;
        plVar1 = (long *)*plVar8;
        *plVar8 = lVar5;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      plVar9 = plVar9 + -lVar3;
      if (param_2 == plVar9) break;
      plVar7 = plVar7 + -1;
      lVar3 = *plVar7;
      plVar8 = (long *)(lVar3 + 0x1000);
    }
  }
  if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    plVar8 = (long *)*plVar7;
  }
LAB_00b28304:
  *param_5 = plVar7;
  param_5[1] = plVar8;
  return;
}


// ===== 00b2832c  FUN_00b2832c =====

void FUN_00b2832c(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_4 == param_6) {
    *param_1 = (long)param_3;
    param_1[1] = (long)param_4;
    param_1[2] = (long)param_7;
    param_1[3] = (long)param_8;
    return;
  }
  lVar4 = *param_7;
  plVar9 = param_6;
  plVar10 = param_5;
  do {
    if (plVar9 == param_4) {
      lVar6 = 0;
    }
    else {
      lVar6 = (((long)plVar9 - *plVar10 >> 3) + ((long)plVar10 - (long)param_3) * 0x40) -
              ((long)param_4 - *param_3 >> 3);
    }
    lVar4 = (long)param_8 - lVar4 >> 3;
    if (lVar4 <= lVar6) {
      lVar6 = lVar4;
    }
    if (lVar6 != 0) {
      uVar5 = ((long)plVar9 - *plVar10 >> 3) - lVar6;
      plVar8 = plVar9;
      plVar11 = plVar10;
      if ((long)uVar5 < 1) {
        uVar2 = 0x1ff - uVar5;
        uVar5 = 0x3fe - uVar5;
        if (-1 < (long)uVar2) {
          uVar5 = uVar2;
        }
        uVar7 = uVar2 & 0x1ff;
        if ((long)uVar2 < 1) {
          uVar7 = -(-uVar2 & 0x1ff);
        }
        plVar1 = (long *)(plVar10[-((long)uVar5 >> 9)] + (0x1ff - uVar7) * 8);
      }
      else {
        plVar1 = (long *)(plVar10[uVar5 >> 9] + (uVar5 & 0x1ff) * 8);
      }
      while (plVar8 != plVar1) {
        if (plVar8 == (long *)*plVar11) {
          plVar11 = plVar11 + -1;
          plVar8 = (long *)(*plVar11 + 0x1000);
        }
        plVar8 = plVar8 + -1;
        lVar4 = *plVar8;
        *plVar8 = 0;
        param_8 = param_8 + -1;
        plVar3 = (long *)*param_8;
        *param_8 = lVar4;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    if (lVar6 != 0) {
      uVar5 = ((long)plVar9 - *plVar10 >> 3) - lVar6;
      if ((long)uVar5 < 1) {
        uVar2 = 0x1ff - uVar5;
        uVar5 = 0x3fe - uVar5;
        if (-1 < (long)uVar2) {
          uVar5 = uVar2;
        }
        plVar10 = plVar10 + -((long)uVar5 >> 9);
        uVar5 = uVar2 & 0x1ff;
        if ((long)uVar2 < 1) {
          uVar5 = -(-uVar2 & 0x1ff);
        }
        plVar9 = (long *)(*plVar10 + (0x1ff - uVar5) * 8);
      }
      else {
        plVar10 = plVar10 + (uVar5 >> 9);
        plVar9 = (long *)(*plVar10 + (uVar5 & 0x1ff) * 8);
      }
      if (plVar9 == param_4) {
        if ((param_7 != (long *)0x0) && (param_8 == (long *)(*param_7 + 0x1000))) {
          param_7 = param_7 + 1;
          param_8 = (long *)*param_7;
        }
        *param_1 = (long)param_5;
        param_1[1] = (long)param_6;
        param_1[2] = (long)param_7;
        param_1[3] = (long)param_8;
        return;
      }
    }
    param_7 = param_7 + -1;
    lVar4 = *param_7;
    param_8 = (long *)(lVar4 + 0x1000);
  } while( true );
}


// ===== 00b28584  FUN_00b28584 =====

void FUN_00b28584(undefined8 *param_1)

{
  long *plVar1;
  undefined1 **ppuVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 *local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar20 = (long *)*param_1;
  lVar3 = *plVar20;
  *(long *)(lVar3 + 0xe0) = plVar20[1];
  lVar11 = plVar20[4];
  plVar20[4] = 0;
  plVar4 = *(long **)(lVar3 + 0xd8);
  *(long *)(lVar3 + 0xd8) = lVar11;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  (**(code **)(**(long **)(lVar3 + 0xd0) + 0x10))
            (&local_a0,*(long **)(lVar3 + 0xd0),plVar20[2],plVar20[3]);
  plVar4 = *(long **)(lVar3 + 0xd8);
  if (plVar4 != (long *)0x0) {
    ppuVar2 = (undefined1 **)local_a0;
    if (-1 < (long)local_90._7_1_) {
      ppuVar2 = &local_a0;
    }
    if (-1 < local_90) {
      lStack_98 = (long)local_90._7_1_;
    }
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2,lStack_98);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0xa6b,
                     "Failed to write RTC event to output.");
      }
      plVar4 = *(long **)(lVar3 + 0xd8);
      *(undefined8 *)(lVar3 + 0xd8) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (local_90._7_1_ < '\0') {
    operator_delete(local_a0);
    lVar11 = *(long *)(lVar3 + 0x68);
  }
  else {
    lVar11 = *(long *)(lVar3 + 0x68);
  }
  if (lVar11 == 0) goto LAB_00b2899c;
  plVar4 = (long *)(plVar20[6] + ((ulong)plVar20[9] >> 9) * 8);
  if (plVar20[6] == plVar20[7]) {
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar4 + (plVar20[9] & 0x1ffU) * 8;
  }
  uVar18 = *(ulong *)(lVar3 + 0x60);
  lVar15 = *(long *)(lVar3 + 0x48);
  uVar5 = uVar18 >> 6 & 0x3fffffffffffff8;
  if (lVar15 == *(long *)(lVar3 + 0x50)) {
    lVar9 = 0;
    lVar8 = 0;
    lVar10 = 0;
    plVar7 = (long *)(lVar15 + (uVar18 + lVar11 >> 9) * 8);
  }
  else {
    uVar19 = uVar18 + lVar11 & 0x1ff;
    lVar8 = *(long *)(lVar15 + uVar5) + (uVar18 & 0x1ff) * 8;
    uVar17 = uVar18 + lVar11 >> 6 & 0x3fffffffffffff8;
    plVar7 = (long *)(lVar15 + uVar17);
    lVar9 = *plVar7 + uVar19 * 8;
    if (lVar9 == lVar8) {
      lVar10 = 0;
    }
    else {
      lVar10 = (uVar19 - (uVar18 & 0x1ff)) + (uVar17 - uVar5) * 0x40;
    }
  }
  FUN_00b26358(plVar20 + 5,plVar4,lVar14,lVar15 + uVar5,lVar8,plVar7,lVar9,lVar10);
  puVar12 = *(undefined8 **)(lVar3 + 0x48);
  puVar16 = puVar12;
  if (puVar12 != *(undefined8 **)(lVar3 + 0x50)) {
    uVar18 = *(ulong *)(lVar3 + 0x60);
    uVar5 = *(long *)(lVar3 + 0x68) + uVar18;
    plVar7 = puVar12 + (uVar18 >> 9);
    plVar4 = (long *)(*plVar7 + (uVar18 & 0x1ff) * 8);
    plVar1 = (long *)(puVar12[uVar5 >> 9] + (uVar5 & 0x1ff) * 8);
    puVar16 = *(undefined8 **)(lVar3 + 0x50);
    if (plVar4 != plVar1) {
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar6 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar4 = plVar4 + 1;
        if ((long)plVar4 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          plVar4 = (long *)*plVar7;
        }
      } while (plVar4 != plVar1);
      puVar12 = *(undefined8 **)(lVar3 + 0x48);
      puVar16 = *(undefined8 **)(lVar3 + 0x50);
    }
  }
  *(undefined8 *)(lVar3 + 0x68) = 0;
  lVar11 = (long)puVar16 - (long)puVar12;
  while (uVar5 = lVar11 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar12);
    puVar12 = (undefined8 *)(*(long *)(lVar3 + 0x48) + 8);
    *(undefined8 **)(lVar3 + 0x48) = puVar12;
    lVar11 = *(long *)(lVar3 + 0x50) - (long)puVar12;
  }
  if (uVar5 == 1) {
    uVar13 = 0x100;
LAB_00b2881c:
    *(undefined8 *)(lVar3 + 0x60) = uVar13;
  }
  else if (uVar5 == 2) {
    uVar13 = 0x200;
    goto LAB_00b2881c;
  }
  if ((ulong)plVar20[10] <= *(ulong *)(lVar3 + 0x38)) goto LAB_00b2899c;
  uVar5 = FUN_004022fc();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001fd8a8,"../../logging/rtc_event_log/rtc_event_log_impl.cc",0x432,
                 "Dropping config events: ",plVar20[10]," exceeds maximum ",
                 *(undefined8 *)(lVar3 + 0x38));
  }
  plVar4 = (long *)(plVar20[6] + ((ulong)plVar20[9] >> 9) * 8);
  if (plVar20[6] == plVar20[7]) {
    lVar11 = 0;
    lVar14 = plVar20[10];
    if (lVar14 != 0) goto LAB_00b28898;
LAB_00b288dc:
    lVar15 = *(long *)(lVar3 + 0x38);
    plVar7 = plVar4;
    lVar14 = lVar11;
  }
  else {
    lVar11 = *plVar4 + (plVar20[9] & 0x1ffU) * 8;
    lVar14 = plVar20[10];
    if (lVar14 == 0) goto LAB_00b288dc;
LAB_00b28898:
    uVar5 = lVar14 + (lVar11 - *plVar4 >> 3);
    if ((long)uVar5 < 1) {
      uVar18 = 0x1ff - uVar5;
      uVar5 = 0x3fe - uVar5;
      if (-1 < (long)uVar18) {
        uVar5 = uVar18;
      }
      uVar17 = uVar18 & 0x1ff;
      if ((long)uVar18 < 1) {
        uVar17 = -(-uVar18 & 0x1ff);
      }
      lVar15 = *(long *)(lVar3 + 0x38);
      plVar7 = plVar4 + -((long)uVar5 >> 9);
      lVar14 = plVar4[-((long)uVar5 >> 9)] + (0x1ff - uVar17) * 8;
    }
    else {
      lVar15 = *(long *)(lVar3 + 0x38);
      plVar7 = plVar4 + (uVar5 >> 9);
      lVar14 = plVar4[uVar5 >> 9] + (uVar5 & 0x1ff) * 8;
    }
  }
  if (lVar15 != 0) {
    uVar5 = (lVar14 - *plVar7 >> 3) - lVar15;
    if ((long)uVar5 < 1) {
      uVar18 = 0x1ff - uVar5;
      uVar5 = 0x3fe - uVar5;
      if (-1 < (long)uVar18) {
        uVar5 = uVar18;
      }
      uVar17 = uVar18 & 0x1ff;
      plVar7 = plVar7 + -((long)uVar5 >> 9);
      if ((long)uVar18 < 1) {
        uVar17 = -(-uVar18 & 0x1ff);
      }
      lVar14 = *plVar7 + (0x1ff - uVar17) * 8;
    }
    else {
      plVar7 = plVar7 + (uVar5 >> 9);
      lVar14 = *plVar7 + (uVar5 & 0x1ff) * 8;
    }
  }
  FUN_00b258a4(plVar20 + 5,plVar4,lVar11,plVar7,lVar14);
LAB_00b2899c:
  lStack_98 = plVar20[6];
  local_a0 = (undefined1 *)plVar20[5];
  lStack_88 = plVar20[8];
  local_90 = plVar20[7];
  lStack_78 = plVar20[10];
  local_80 = plVar20[9];
  lStack_68 = plVar20[0xc];
  lStack_70 = plVar20[0xb];
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[6] = 0;
  plVar20[5] = 0;
  plVar20[8] = 0;
  plVar20[7] = 0;
  lStack_58 = plVar20[0xe];
  local_60 = plVar20[0xd];
  plVar20[0xe] = 0;
  plVar20[0xd] = 0;
  plVar20[0xc] = 0;
  plVar20[0xb] = 0;
  lStack_48 = plVar20[0x10];
  lStack_50 = plVar20[0xf];
  plVar20[0xf] = 0;
  plVar20[0x10] = 0;
  FUN_00b2529c(lVar3,&local_a0);
  FUN_00b247cc(&lStack_70);
  FUN_00b247cc(&local_a0);
  return;
}


// ===== 00b28a2c  FUN_00b28a2c =====

void FUN_00b28a2c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb28ab4);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      FUN_00b247cc((long)pvVar3 + 0x58);
      FUN_00b247cc((long)pvVar3 + 0x28);
      plVar2 = *(long **)((long)pvVar3 + 0x20);
      *(undefined8 *)((long)pvVar3 + 0x20) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00b28ab4  FUN_00b28ab4 =====

void FUN_00b28ab4(undefined8 *param_1)

{
  FUN_0066f2dc(*param_1);
  return;
}


// ===== 00b28ac0  FUN_00b28ac0 =====

void FUN_00b28ac0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
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
  long lStack_40;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar1 = *plVar2;
  if (*(long *)(lVar1 + 0xd8) != 0) {
    lStack_88 = plVar2[6];
    local_90 = plVar2[5];
    lStack_78 = plVar2[8];
    lStack_80 = plVar2[7];
    lStack_68 = plVar2[10];
    local_70 = plVar2[9];
    lStack_58 = plVar2[0xc];
    lStack_60 = plVar2[0xb];
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    lStack_48 = plVar2[0xe];
    local_50 = plVar2[0xd];
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    lStack_38 = plVar2[0x10];
    lStack_40 = plVar2[0xf];
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    FUN_00b2529c(lVar1,&local_90);
    FUN_00b247cc(&lStack_60);
    FUN_00b247cc(&local_90);
  }
  FUN_00b25d80(lVar1);
  (*(code *)plVar2[3])(plVar2 + 1);
  return;
}


// ===== 00b28b74  FUN_00b28b74 =====

void FUN_00b28b74(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb28bf8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00b247cc((long)pvVar2 + 0x58);
      FUN_00b247cc((long)pvVar2 + 0x28);
      pcVar1 = *(code **)(*(long *)((long)pvVar2 + 0x20) + 8);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(*(undefined8 *)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b28bf8  FUN_00b28bf8 =====

void FUN_00b28bf8(undefined8 *param_1)

{
  long *plVar1;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  plVar1 = (long *)*param_1;
  if (*(long *)(*plVar1 + 0xd8) != 0) {
    lStack_68 = plVar1[4];
    lStack_70 = plVar1[3];
    lStack_78 = plVar1[2];
    local_80 = plVar1[1];
    lStack_58 = plVar1[6];
    local_60 = plVar1[5];
    lStack_48 = plVar1[8];
    local_50 = plVar1[7];
    plVar1[4] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    lStack_38 = plVar1[10];
    lStack_40 = plVar1[9];
    plVar1[5] = 0;
    plVar1[6] = 0;
    lStack_28 = plVar1[0xc];
    local_30 = plVar1[0xb];
    plVar1[10] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    FUN_00b2529c(*plVar1,&local_80);
    FUN_00b247cc(&local_50);
    FUN_00b247cc(&local_80);
  }
  return;
}


// ===== 00b28c94  FUN_00b28c94 =====

void FUN_00b28c94(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb28d04);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00b247cc((long)pvVar2 + 0x38);
      FUN_00b247cc((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b28d04  FUN_00b28d04 =====

void FUN_00b28d04(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_40 [2];
  code *local_30;
  code *local_28;
  undefined1 local_4 [3];
  undefined1 uStack_1;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0xd8) != 0) {
    uVar3 = (**(code **)(**(long **)(lVar6 + 0x18) + 0x10))();
    local_4[0] = 0;
    uVar4 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar4 = uVar4 + 1;
    }
    lVar5 = *(long *)(lVar6 + 0xe0);
    if ((uVar3 & 0x8000000000000000) != 0) {
      uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    }
    lVar1 = (*(long *)(lVar6 + 0xe8) - uVar4) + lVar5;
    local_30 = FUN_004473ec;
    local_28 = FUN_00b28e10;
    lVar2 = lVar1;
    if (lVar5 <= lVar1) {
      lVar2 = lVar5;
    }
    lVar5 = (long)(int)lVar2 * 1000;
    if (lVar1 < 1) {
      lVar5 = 0;
    }
    local_40[0] = lVar6;
    (**(code **)(**(long **)(lVar6 + 0xf8) + 0x10))
              (*(long **)(lVar6 + 0xf8),local_40,lVar5,local_4,&uStack_1);
    (*local_30)(0,local_40,local_40);
  }
  return;
}


// ===== 00b28e10  FUN_00b28e10 =====

void FUN_00b28e10(long *param_1)

{
  long lVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0xd8) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x100));
    *(undefined1 *)(lVar1 + 0xf2) = 1;
    local_70 = 0;
    uStack_68 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_00b25e48(&local_f0,lVar1 + 0x70);
    FUN_00b25e48(&local_c0,lVar1 + 0xa0);
    FUN_00b25e48(lVar1 + 0x70,&local_90);
    FUN_00b25e48(lVar1 + 0xa0,&local_60);
    FUN_00b247cc(&local_60);
    FUN_00b247cc(&local_90);
    pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x100));
    uStack_38 = uStack_98;
    local_40 = local_a0;
    uStack_48 = uStack_a8;
    local_50 = local_b0;
    uStack_68 = uStack_c8;
    local_70 = local_d0;
    uStack_88 = uStack_e8;
    local_90 = local_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_58 = uStack_b8;
    local_60 = local_c0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_00b2529c(lVar1,&local_90);
    FUN_00b247cc(&local_60);
    FUN_00b247cc(&local_90);
    FUN_00b247cc(&local_c0);
    FUN_00b247cc(&local_f0);
  }
  return;
}


// ===== 00b28f2c  FUN_00b28f2c =====

void FUN_00b28f2c(long *param_1)

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
      FUN_00b2765c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00b27124(&local_50,lVar5);
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
      FUN_00b2765c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00b273c0(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00b278e4(param_1,&local_50);
  return;
}


// ===== 00b29114  FUN_00b29114 =====

void FUN_00b29114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = FUN_00b2c170(&local_60,0);
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,1);
  local_50 = (undefined1 *)((ulong)local_50 | 3);
  puStack_48 = (undefined1 *)param_3;
  FUN_00b2918c(param_1,uVar1,&local_60);
  FUN_00b2c190(&local_60);
  return;
}


// ===== 00b2918c  FUN_00b2918c =====

void FUN_00b2918c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2bd28(&local_60,0);
  FUN_00b2b38c(&local_60);
  if ((int)local_40 < 1) {
    FUN_006fc6ec(0);
  }
  ppuVar1 = &puStack_48;
  if (((ulong)puStack_48 & 1) != 0) {
    ppuVar1 = (undefined1 **)(puStack_48 + 7);
  }
  puVar2 = *ppuVar1;
  FUN_00b2b4c8(puVar2,param_3);
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006dca58(param_1,&local_60);
  FUN_00b2b4c8(puVar2,param_3);
  FUN_00b2bd44(&local_60);
  return;
}


// ===== 00b29250  FUN_00b29250 =====

void FUN_00b29250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = FUN_00b2c170(&local_60,0);
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,2);
  local_50 = (undefined1 *)((ulong)local_50 | 3);
  puStack_48 = (undefined1 *)param_3;
  FUN_00b2918c(param_1,uVar1,&local_60);
  FUN_00b2c190(&local_60);
  return;
}


// ===== 00b292c8  FUN_00b292c8 =====

void FUN_00b292c8(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5,long *param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_4 != param_6) {
    do {
      if (*param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../logging/rtc_event_log/encoder/rtc_event_log_encoder_legacy.cc",0xfb,
                     "it->get() != nullptr",&DAT_001f5fa0);
      }
      FUN_00b293bc(&local_58,param_2);
      uVar1 = uStack_50;
      pppuVar2 = (undefined8 ***)local_58;
      if (-1 < (char)bStack_41) {
        uVar1 = (ulong)bStack_41;
        pppuVar2 = &local_58;
      }
      FUN_00547cac(param_1,pppuVar2,uVar1);
      if ((char)bStack_41 < '\0') {
        operator_delete(local_58);
      }
      param_4 = param_4 + 1;
      if ((long)param_4 - *param_3 == 0x1000) {
        param_3 = param_3 + 1;
        param_4 = (long *)*param_3;
      }
    } while (param_4 != param_6);
  }
  return;
}


// ===== 00b293bc  FUN_00b293bc =====

void FUN_00b293bc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  switch(uVar1 & 0xffffffff) {
  case 0:
    FUN_00b29830(param_1,uVar1,param_3);
    return;
  case 2:
    FUN_00b2a428(param_1,uVar1,param_3);
    return;
  case 3:
    FUN_00b296b0(param_1,uVar1,param_3);
    return;
  case 4:
    FUN_00b29904(param_1,uVar1,param_3);
    return;
  case 5:
    FUN_00b299d8(param_1,uVar1,param_3);
    return;
  case 6:
    FUN_00b29b5c(param_1,uVar1,param_3);
    return;
  case 7:
    FUN_00b29ccc(param_1,uVar1,param_3);
    return;
  case 8:
    FUN_00b29dc0(param_1,uVar1,param_3);
    return;
  case 0xc:
    FUN_00b29eb4(param_1,uVar1,param_3);
    return;
  case 0xd:
    FUN_00b2a064(param_1,uVar1,param_3);
    return;
  case 0xe:
    FUN_00b2a154(param_1,uVar1,param_3);
    return;
  case 0xf:
    FUN_00b2a258(param_1,uVar1,param_3);
    return;
  case 0x10:
    FUN_00b2a344(param_1,uVar1,param_3);
    return;
  case 0x11:
    lVar7 = param_3[1];
    uVar6 = 1;
    break;
  case 0x12:
    lVar7 = param_3[1];
    uVar6 = 0;
    break;
  case 0x13:
    lVar7 = param_3[0xd];
    lVar2 = param_3[1];
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x10) + param_3[0xe];
    }
    lVar4 = param_3[4];
    uVar5 = 0xffffffff;
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar7;
    }
    lVar7 = param_3[5] + lVar4 + (ulong)*(byte *)((long)param_3 + 0x12);
    uVar6 = 1;
    goto LAB_00b2964c;
  case 0x14:
    lVar7 = param_3[0xd];
    lVar2 = param_3[1];
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x10) + param_3[0xe];
    }
    lVar4 = param_3[4];
    uVar5 = (undefined4)param_3[0x10];
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar7;
    }
    lVar7 = param_3[5] + lVar4 + (ulong)*(byte *)((long)param_3 + 0x12);
    uVar6 = 0;
LAB_00b2964c:
    FUN_00b2aed4(param_1,uVar1,lVar2,lVar3,lVar4,lVar7,uVar5,uVar6);
    return;
  case 0x15:
    FUN_00b2a5cc(param_1,uVar1,param_3);
    return;
  case 0x16:
    FUN_00b2a894(param_1,uVar1,param_3);
    return;
  default:
    (**(code **)(*param_3 + 0x10))(param_3);
  case 1:
  case 9:
  case 10:
  case 0xb:
  case 0x17:
  case 0x18:
    FUN_005d3510(param_1,&DAT_001b3348);
    return;
  }
  FUN_00b2abe4(param_1,uVar1,lVar7,param_3 + 2,uVar6);
  return;
}


// ===== 00b296b0  FUN_00b296b0 =====

void FUN_00b296b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x10);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x10) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x10);
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b57c(puVar1);
  }
  if (*(char *)(param_3 + 0x14) == '\x01') {
    *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 1;
  }
  if (*(char *)(param_3 + 0x1c) == '\x01') {
    *(undefined4 *)(local_48 + 0x1c) = *(undefined4 *)(param_3 + 0x18);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 2;
  }
  if (*(char *)(param_3 + 0x24) == '\x01') {
    *(undefined4 *)(local_48 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 4;
  }
  if (*(char *)(param_3 + 0x29) == '\x01') {
    local_48[0x24] = *(undefined1 *)(param_3 + 0x28);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 8;
  }
  if (*(char *)(param_3 + 0x2b) == '\x01') {
    local_48[0x25] = *(undefined1 *)(param_3 + 0x2a);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 0x10;
  }
  if (*(char *)(param_3 + 0x38) == '\x01') {
    *(int *)(local_48 + 0x28) = (int)*(undefined8 *)(param_3 + 0x30);
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 0x20;
  }
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b29830  FUN_00b29830 =====

void FUN_00b29830(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x13);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x13) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x13);
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b52c(puVar1);
  }
  local_48[0x18] = *(undefined1 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 1;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b29904  FUN_00b29904 =====

void FUN_00b29904(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,5);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 5) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,5);
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b5cc(puVar1);
  }
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 1;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b299d8  FUN_00b299d8 =====

void FUN_00b299d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puVar6 = (undefined1 *)FUN_00b2c170(&local_80,0);
  puStack_68 = *(undefined1 **)(param_3 + 8);
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,10);
  local_70 = (undefined1 *)((ulong)local_70 | 3);
  if ((int)local_50 != 10) {
    FUN_00b2c0e8(&local_80);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,10);
    puVar6 = puStack_78;
    if (((ulong)puStack_78 & 1) != 0) {
      puVar6 = *(undefined1 **)((ulong)puStack_78 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined1 *)FUN_00b2b61c(puVar6);
    local_58 = puVar6;
  }
  puVar5 = local_58;
  uVar3 = *(uint *)(local_58 + 0x10);
  uVar4 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 4);
  *(uint *)(local_58 + 0x10) = uVar3 | 2;
  *(undefined4 *)(local_58 + 0x30) = uVar4;
  uVar4 = **(undefined4 **)(param_3 + 0x10);
  *(uint *)(local_58 + 0x10) = uVar3 | 6;
  *(undefined4 *)(local_58 + 0x34) = uVar4;
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0x38);
  for (lVar1 = *(long *)(*(long *)(param_3 + 0x10) + 0x30); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    uVar8 = *(ulong *)(puVar5 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    lVar7 = FUN_00b2b66c(puVar5 + 0x18,uVar8);
    *(uint *)(puVar5 + 0x10) = *(uint *)(puVar5 + 0x10) | 1;
    uVar8 = *(ulong *)(lVar7 + 8);
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined1 *)FUN_00713ffc(lVar7 + 0x18,lVar1,uVar8);
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 2;
  }
  FUN_00b2918c(param_1,puVar6,&local_80);
  FUN_00b2c190(&local_80);
  return;
}


// ===== 00b29b5c  FUN_00b29b5c =====

void FUN_00b29b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puVar5 = (undefined1 *)FUN_00b2c170(&local_80,0);
  puStack_68 = *(undefined1 **)(param_3 + 8);
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,0xb);
  local_70 = (undefined1 *)((ulong)local_70 | 3);
  if ((int)local_50 != 0xb) {
    FUN_00b2c0e8(&local_80);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0xb);
    puVar5 = puStack_78;
    if (((ulong)puStack_78 & 1) != 0) {
      puVar5 = *(undefined1 **)((ulong)puStack_78 & 0xfffffffffffffffe);
    }
    puVar5 = (undefined1 *)FUN_00b2b7d8(puVar5);
    local_58 = puVar5;
  }
  puVar4 = local_58;
  uVar3 = **(undefined4 **)(param_3 + 0x10);
  *(uint *)(local_58 + 0x10) = *(uint *)(local_58 + 0x10) | 2;
  *(undefined4 *)(local_58 + 0x30) = uVar3;
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 0x38);
  for (lVar1 = *(long *)(*(long *)(param_3 + 0x10) + 0x30); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    uVar7 = *(ulong *)(puVar4 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    lVar6 = FUN_00b2b66c(puVar4 + 0x18,uVar7);
    *(uint *)(puVar4 + 0x10) = *(uint *)(puVar4 + 0x10) | 1;
    uVar7 = *(ulong *)(lVar6 + 8);
    *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 1;
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    puVar5 = (undefined1 *)FUN_00713ffc(lVar6 + 0x18,lVar1,uVar7);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
    *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 2;
  }
  FUN_00b2918c(param_1,puVar5,&local_80);
  FUN_00b2c190(&local_80);
  return;
}


// ===== 00b29ccc  FUN_00b29ccc =====

void FUN_00b29ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,7);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 7) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,7);
    puVar2 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar2 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b828(puVar2);
  }
  uVar1 = *(uint *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar1 | 1;
  uVar3 = *(uint *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar1 | 3;
  if (uVar3 != 2) {
    uVar3 = (uint)(uVar3 == 1);
  }
  *(uint *)(local_48 + 0x1c) = uVar3;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b29dc0  FUN_00b29dc0 =====

void FUN_00b29dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,6);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 6) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,6);
    puVar4 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar4 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b878(puVar4);
  }
  uVar1 = *(uint *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar1 | 1;
  bVar3 = *(byte *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar1 | 3;
  *(uint *)(local_48 + 0x1c) = (uint)bVar3;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  *(uint *)(local_48 + 0x10) = uVar1 | 7;
  *(undefined4 *)(local_48 + 0x20) = uVar2;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b29eb4  FUN_00b29eb4 =====

void FUN_00b29eb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x14);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x14) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x14);
    puVar5 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar5 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b8c8(puVar5);
  }
  iVar1 = *(int *)(param_3 + 0x10);
  uVar2 = *(uint *)(local_48 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar2 | 1;
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  *(int *)(local_48 + 0x18) = iVar1;
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar2 | 3;
  *(undefined4 *)(local_48 + 0x1c) = uVar3;
  uVar3 = *(undefined4 *)(param_3 + 0x18);
  *(uint *)(local_48 + 0x10) = uVar2 | 7;
  *(undefined4 *)(local_48 + 0x20) = uVar3;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(uint *)(local_48 + 0x10) = uVar2 | 0xf;
  uVar4 = iVar1 - 1;
  if (3 < uVar4) {
    uVar4 = 4;
  }
  *(uint *)(local_48 + 0x24) = uVar4;
  iVar1 = *(int *)(param_3 + 0x20);
  *(uint *)(local_48 + 0x10) = uVar2 | 0x1f;
  uVar4 = iVar1 - 1;
  if (4 < uVar4) {
    uVar4 = 5;
  }
  *(uint *)(local_48 + 0x28) = uVar4;
  iVar1 = *(int *)(param_3 + 0x24);
  uVar3 = 0;
  if (iVar1 != 1) {
    uVar3 = 2;
  }
  *(uint *)(local_48 + 0x10) = uVar2 | 0x3f;
  if (iVar1 == 2) {
    uVar3 = 1;
  }
  *(undefined4 *)(local_48 + 0x2c) = uVar3;
  uVar3 = *(undefined4 *)(param_3 + 0x28);
  *(uint *)(local_48 + 0x10) = uVar2 | 0x7f;
  *(undefined4 *)(local_48 + 0x30) = uVar3;
  iVar1 = *(int *)(param_3 + 0x2c);
  *(uint *)(local_48 + 0x10) = uVar2 | 0xff;
  uVar3 = 0;
  if (iVar1 != 1) {
    uVar3 = 2;
  }
  if (iVar1 == 2) {
    uVar3 = 1;
  }
  *(undefined4 *)(local_48 + 0x34) = uVar3;
  iVar1 = *(int *)(param_3 + 0x30);
  *(uint *)(local_48 + 0x10) = uVar2 | 0x1ff;
  uVar2 = iVar1 - 1;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  *(uint *)(local_48 + 0x38) = uVar2;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a064  FUN_00b2a064 =====

void FUN_00b2a064(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x15);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x15) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x15);
    puVar4 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar4 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b918(puVar4);
  }
  iVar1 = *(int *)(param_3 + 0x10);
  uVar2 = *(uint *)(local_48 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar2 | 1;
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  *(int *)(local_48 + 0x18) = iVar1;
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar2 | 3;
  *(undefined4 *)(local_48 + 0x1c) = uVar3;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a154  FUN_00b2a154 =====

void FUN_00b2a154(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x11);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x11) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x11);
    puVar3 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar3 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b968(puVar3);
  }
  uVar1 = *(uint *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar1 | 1;
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar1 | 3;
  *(undefined4 *)(local_48 + 0x1c) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  *(uint *)(local_48 + 0x10) = uVar1 | 7;
  *(undefined4 *)(local_48 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  *(uint *)(local_48 + 0x10) = uVar1 | 0xf;
  *(undefined4 *)(local_48 + 0x24) = uVar2;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a258  FUN_00b2a258 =====

void FUN_00b2a258(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x12);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x12) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x12);
    puVar4 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar4 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b9b8(puVar4);
  }
  uVar2 = *(uint *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(uint *)(local_48 + 0x10) = uVar2 | 1;
  uVar3 = *(uint *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar2 | 3;
  iVar1 = 0;
  if (uVar3 < 3) {
    iVar1 = uVar3 + 1;
  }
  *(int *)(local_48 + 0x1c) = iVar1;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a344  FUN_00b2a344 =====

void FUN_00b2a344(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x12);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x12) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x12);
    puVar3 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar3 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2b9b8(puVar3);
  }
  uVar1 = *(uint *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(local_48 + 0x1c) = 0;
  *(uint *)(local_48 + 0x10) = uVar1 | 3;
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  *(uint *)(local_48 + 0x10) = uVar1 | 7;
  *(undefined4 *)(local_48 + 0x20) = uVar2;
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a428  FUN_00b2a428 =====

void FUN_00b2a428(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_70,0);
  puStack_58 = *(undefined1 **)(param_3 + 8);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x16);
  local_60 = (undefined1 *)((ulong)local_60 | 3);
  if ((int)local_40 != 0x16) {
    FUN_00b2c0e8(&local_70);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x16);
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00b2ba08(puVar1);
  }
  uVar2 = *(ulong *)(param_3 + 0x10);
  if (uVar2 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    iVar3 = (int)(uVar2 / 1000);
    if (499 < uVar2 % 1000) {
      iVar3 = iVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      iVar3 = -(int)(-uVar2 / 1000) - (uint)(500 < -uVar2 % 1000);
    }
    *(int *)(local_48 + 0x18) = iVar3;
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 1;
  }
  uVar2 = *(ulong *)(param_3 + 0x18);
  if (uVar2 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    iVar3 = (int)(uVar2 / 1000);
    if (499 < uVar2 % 1000) {
      iVar3 = iVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      iVar3 = -(int)(-uVar2 / 1000) - (uint)(500 < -uVar2 % 1000);
    }
    *(int *)(local_48 + 0x1c) = iVar3;
    *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 2;
  }
  FUN_00b2918c(param_1,local_48,&local_70);
  FUN_00b2c190(&local_70);
  return;
}


// ===== 00b2a5cc  FUN_00b2a5cc =====

void FUN_00b2a5cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puVar7 = (undefined1 *)FUN_00b2c170(&local_80,0);
  puStack_68 = *(undefined1 **)(param_3 + 8);
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,8);
  local_70 = (undefined1 *)((ulong)local_70 | 3);
  if ((int)local_50 != 8) {
    FUN_00b2c0e8(&local_80);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,8);
    puVar7 = puStack_78;
    if (((ulong)puStack_78 & 1) != 0) {
      puVar7 = *(undefined1 **)((ulong)puStack_78 & 0xfffffffffffffffe);
    }
    puVar7 = (undefined1 *)FUN_00b2ba58(puVar7);
    local_58 = puVar7;
  }
  puVar6 = local_58;
  uVar3 = *(uint *)(local_58 + 0x10);
  uVar10 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 4);
  *(uint *)(local_58 + 0x10) = uVar3 | 8;
  *(undefined4 *)(local_58 + 0x60) = uVar10;
  uVar10 = **(undefined4 **)(param_3 + 0x10);
  *(uint *)(local_58 + 0x10) = uVar3 | 0x18;
  *(undefined4 *)(local_58 + 100) = uVar10;
  iVar4 = *(int *)(*(long *)(param_3 + 0x10) + 0x48);
  *(uint *)(local_58 + 0x10) = uVar3 | 0x58;
  uVar10 = 1;
  if (iVar4 == 2) {
    uVar10 = 2;
  }
  *(undefined4 *)(local_58 + 0x6c) = uVar10;
  uVar5 = *(undefined1 *)(*(long *)(param_3 + 0x10) + 0x28);
  *(uint *)(local_58 + 0x10) = uVar3 | 0x78;
  local_58[0x68] = uVar5;
  lVar11 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar11 + 0x30);
  lVar2 = *(long *)(lVar11 + 0x38);
  if (lVar12 != lVar2) {
    do {
      uVar9 = *(ulong *)(puVar6 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      lVar11 = FUN_00b2b66c(puVar6 + 0x30,uVar9);
      *(uint *)(puVar6 + 0x10) = *(uint *)(puVar6 + 0x10) | 2;
      uVar9 = *(ulong *)(lVar11 + 8);
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 1;
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      puVar7 = (undefined1 *)FUN_00713ffc(lVar11 + 0x18,lVar12,uVar9);
      puVar1 = (undefined4 *)(lVar12 + 0x18);
      lVar12 = lVar12 + 0x20;
      *(undefined4 *)(lVar11 + 0x20) = *puVar1;
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 2;
    } while (lVar12 != lVar2);
    lVar11 = *(long *)(param_3 + 0x10);
  }
  lVar2 = *(long *)(lVar11 + 0x58);
  for (lVar12 = *(long *)(lVar11 + 0x50); lVar12 != lVar2; lVar12 = lVar12 + 0x20) {
    lVar11 = FUN_00b2b114(puVar6);
    uVar9 = *(ulong *)(lVar11 + 8);
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 1;
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    puVar7 = (undefined1 *)FUN_00713ffc(lVar11 + 0x18,lVar12,uVar9);
    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar12 + 0x18);
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 2;
    if (*(int *)(lVar12 + 0x1c) != 0) {
      lVar11 = FUN_00b2b250(puVar6);
      lVar8 = *(long *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar12 + 0x18);
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 3;
      if (lVar8 == 0) {
        uVar9 = *(ulong *)(lVar11 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        lVar8 = FUN_00b2bb48(uVar9);
        *(long *)(lVar11 + 0x18) = lVar8;
      }
      uVar10 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 8);
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 1;
      *(undefined4 *)(lVar8 + 0x18) = uVar10;
      puVar7 = *(undefined1 **)(lVar11 + 0x18);
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 1;
      if (puVar7 == (undefined1 *)0x0) {
        uVar9 = *(ulong *)(lVar11 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        puVar7 = (undefined1 *)FUN_00b2bb48(uVar9);
        *(undefined1 **)(lVar11 + 0x18) = puVar7;
      }
      *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(lVar12 + 0x1c);
      *(uint *)(puVar7 + 0x10) = *(uint *)(puVar7 + 0x10) | 2;
    }
  }
  FUN_00b2918c(param_1,puVar7,&local_80);
  FUN_00b2c190(&local_80);
  return;
}


// ===== 00b2a894  FUN_00b2a894 =====

void FUN_00b2a894(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_80,0);
  puStack_68 = *(undefined1 **)(param_3 + 8);
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,9);
  local_70 = (undefined1 *)((ulong)local_70 | 3);
  if ((int)local_50 != 9) {
    FUN_00b2c0e8(&local_80);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,9);
    puVar5 = puStack_78;
    if (((ulong)puStack_78 & 1) != 0) {
      puVar5 = *(undefined1 **)((ulong)puStack_78 & 0xfffffffffffffffe);
    }
    local_58 = (undefined1 *)FUN_00b2bb98(puVar5);
  }
  puVar5 = local_58;
  puVar4 = (ulong *)(local_58 + 0x18);
  uVar7 = *puVar4;
  uVar3 = **(undefined4 **)(param_3 + 0x10);
  if (((uint)uVar7 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar7 & 3;
    if (uVar9 == 2) {
      iVar6 = 2;
LAB_00b2aba0:
      iVar10 = iVar6 + 1;
      puVar4 = (ulong *)FUN_006f7ed0(puVar4,(uVar7 & 4) == 0,iVar6,iVar10);
      uVar7 = *(ulong *)(puVar5 + 0x18);
      iVar6 = *(int *)(puVar5 + 0x20);
      goto LAB_00b2a974;
    }
    *(ulong *)(local_58 + 0x18) = uVar7 & 0xfffffffffffffff8 | (ulong)(uVar9 + 1);
    *(undefined4 *)(local_58 + (uVar7 & 3) * 4 + 0x20) = uVar3;
  }
  else {
    iVar6 = *(int *)(local_58 + 0x20);
    if (iVar6 == *(int *)(local_58 + 0x24)) goto LAB_00b2aba0;
    iVar10 = iVar6 + 1;
LAB_00b2a974:
    *(int *)(puVar5 + 0x20) = iVar10;
    *(undefined4 *)((uVar7 & 0xfffffffffffffff8) + (long)iVar6 * 4) = uVar3;
  }
  uVar9 = *(uint *)(puVar5 + 0x10) | 1;
  *(uint *)(puVar5 + 0x10) = uVar9;
  lVar8 = *(long *)(param_3 + 0x10);
  iVar6 = *(int *)(lVar8 + 8);
  if (iVar6 == 0) goto LAB_00b2a9fc;
  puVar4 = (ulong *)(puVar5 + 0x40);
  uVar7 = *puVar4;
  if (((uint)uVar7 >> 2 & 1) == 0) {
    uVar2 = (uint)uVar7 & 3;
    if (uVar2 == 2) {
      iVar10 = 2;
LAB_00b2abc4:
      iVar11 = iVar10 + 1;
      puVar4 = (ulong *)FUN_006f7ed0(puVar4,(uVar7 & 4) == 0,iVar10,iVar11);
      uVar7 = *(ulong *)(puVar5 + 0x40);
      iVar10 = *(int *)(puVar5 + 0x48);
      goto LAB_00b2a9e0;
    }
    *(ulong *)(puVar5 + 0x40) = uVar7 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    *(int *)(puVar5 + (uVar7 & 3) * 4 + 0x48) = iVar6;
  }
  else {
    iVar10 = *(int *)(puVar5 + 0x48);
    if (iVar10 == *(int *)(puVar5 + 0x4c)) goto LAB_00b2abc4;
    iVar11 = iVar10 + 1;
LAB_00b2a9e0:
    *(int *)(puVar5 + 0x48) = iVar11;
    *(int *)((uVar7 & 0xfffffffffffffff8) + (long)iVar10 * 4) = iVar6;
    uVar9 = *(uint *)(puVar5 + 0x10);
  }
  *(uint *)(puVar5 + 0x10) = uVar9 | 4;
  lVar8 = *(long *)(param_3 + 0x10);
LAB_00b2a9fc:
  lVar12 = *(long *)(lVar8 + 0x30);
  lVar13 = *(long *)(lVar8 + 0x38);
  if (lVar12 != lVar13) {
    do {
      uVar7 = *(ulong *)(puVar5 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      lVar8 = FUN_00b2b66c(puVar5 + 0x28,uVar7);
      *(uint *)(puVar5 + 0x10) = *(uint *)(puVar5 + 0x10) | 2;
      uVar7 = *(ulong *)(lVar8 + 8);
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 1;
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      puVar4 = (ulong *)FUN_00713ffc(lVar8 + 0x18,lVar12,uVar7);
      puVar1 = (undefined4 *)(lVar12 + 0x18);
      lVar12 = lVar12 + 0x20;
      *(undefined4 *)(lVar8 + 0x20) = *puVar1;
      *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 2;
    } while (lVar12 != lVar13);
    lVar8 = *(long *)(param_3 + 0x10);
  }
  lVar12 = *(long *)(lVar8 + 0x50);
  lVar8 = *(long *)(lVar8 + 0x58);
  do {
    if (lVar12 == lVar8) {
LAB_00b2ab60:
      FUN_00b2918c(param_1,puVar4,&local_80);
      FUN_00b2c190(&local_80);
      return;
    }
    lVar13 = *(long *)(puVar5 + 0x50);
    *(undefined4 *)(puVar5 + 0x58) = *(undefined4 *)(lVar12 + 0x1c);
    *(uint *)(puVar5 + 0x10) = *(uint *)(puVar5 + 0x10) | 0x18;
    if (lVar13 == 0) {
      uVar7 = *(ulong *)(puVar5 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      lVar13 = FUN_00b2bbe8(uVar7);
      *(long *)(puVar5 + 0x50) = lVar13;
    }
    uVar7 = *(ulong *)(lVar13 + 8);
    *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 1;
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    puVar4 = (ulong *)FUN_00713ffc(lVar13 + 0x18,lVar12,uVar7);
    *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar12 + 0x18);
    *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 2;
    if (0x20 < (ulong)(*(long *)(*(long *)(param_3 + 0x10) + 0x58) -
                      *(long *)(*(long *)(param_3 + 0x10) + 0x50))) {
      puVar4 = (ulong *)FUN_004022fc();
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = (ulong *)FUN_00623bb0(&DAT_001f4e90,
                                       "../../logging/rtc_event_log/encoder/rtc_event_log_encoder_legacy.cc"
                                       ,0x15c2,
                                       "LogVideoSendStreamConfig currently only supports one codec. Logging codec :"
                                       ,lVar12);
      }
      goto LAB_00b2ab60;
    }
    lVar12 = lVar12 + 0x20;
  } while( true );
}


// ===== 00b2abe4  FUN_00b2abe4 =====

void FUN_00b2abe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 byte param_5)

{
  void *pvVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  void *__src;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_a0,0);
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,4);
  local_90 = (undefined1 *)((ulong)local_90 | 3);
  puStack_88 = (undefined1 *)param_3;
  if ((int)local_70 != 4) {
    FUN_00b2c0e8(&local_a0);
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,4);
    puVar12 = puStack_98;
    if (((ulong)puStack_98 & 1) != 0) {
      puVar12 = *(undefined1 **)((ulong)puStack_98 & 0xfffffffffffffffe);
    }
    local_78 = (undefined1 *)FUN_00b2bc38(puVar12);
  }
  local_78[0x20] = param_5 & 1;
  *(uint *)(local_78 + 0x10) = *(uint *)(local_78 + 0x10) | 2;
  uVar11 = *param_4;
  __src = (void *)param_4[2];
  local_a8 = 0;
  local_b0 = 0xaa000000;
  if (uVar11 == 0) {
    puVar12 = (undefined1 *)0x0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    puVar3 = (undefined1 *)operator_new(uVar11);
    uVar6 = uVar11 - 1;
    puVar12 = puVar3 + uVar11;
    if ((ulong)-(long)puVar3 < uVar6) {
      uVar6 = -(long)puVar3;
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar3;
    if (0x20 < uVar6) {
      uVar2 = 0x20;
      if ((uVar6 & 0x1f) != 0) {
        uVar2 = uVar6 & 0x1f;
      }
      puVar9 = (undefined8 *)(puVar3 + 0x10);
      lVar8 = uVar6 - uVar2;
      puVar5 = puVar3 + lVar8;
      do {
        lVar8 = lVar8 + -0x20;
        puVar9[-1] = 0;
        puVar9[-2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 4;
      } while (lVar8 != 0);
    }
    do {
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = puVar5 + 1;
      *puVar5 = 0;
      puVar5 = puVar7;
    } while (puVar7 != puVar12);
  }
  pvVar1 = (void *)((long)__src + uVar11);
  if (__src < pvVar1) {
    uVar10 = 0;
    do {
      uVar11 = FUN_007cd9ac(&local_b0,__src,(long)pvVar1 - (long)__src);
      if ((uVar11 & 1) == 0) break;
      uVar11 = (local_a8 + (local_b0 >> 0x20) + (local_b0 >> 0x10 & 0xff)) - (long)__src;
      if (((byte)local_b0 - 200 < 8) && ((0xebU >> (ulong)((byte)local_b0 - 200 & 0x1f) & 1) != 0))
      {
        memcpy(puVar3 + uVar10,__src,uVar11 & 0xffffffff);
        uVar10 = uVar10 + (int)uVar11;
      }
      __src = (void *)((long)__src + (uVar11 & 0xffffffff));
    } while (__src < pvVar1);
  }
  else {
    uVar10 = 0;
  }
  if ((int)local_70 != 4) {
    FUN_00b2c0e8(&local_a0);
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,4);
    puVar5 = puStack_98;
    if (((ulong)puStack_98 & 1) != 0) {
      puVar5 = *(undefined1 **)((ulong)puStack_98 & 0xfffffffffffffffe);
    }
    local_78 = (undefined1 *)FUN_00b2bc38(puVar5);
  }
  *(uint *)(local_78 + 0x10) = *(uint *)(local_78 + 0x10) | 1;
  if ((puVar3 == (undefined1 *)0x0) && (uVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  uVar4 = FUN_00713f34(local_78 + 0x18,puVar3,uVar10);
  FUN_00b2918c(param_1,uVar4,&local_a0);
  if (puVar3 != (undefined1 *)0x0) {
    if (puVar12 + -1 < puVar12 + -(long)puVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(puVar3);
  }
  FUN_00b2c190(&local_a0);
  return;
}


// ===== 00b2aed4  FUN_00b2aed4 =====

void FUN_00b2aed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined4 param_6,int param_7,byte param_8)

{
  undefined1 *puVar1;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b2c170(&local_90,0);
  local_70 = (undefined1 *)CONCAT44(local_70._4_4_,3);
  local_80 = (undefined1 *)((ulong)local_80 | 3);
  puStack_78 = (undefined1 *)param_3;
  if ((int)local_60 != 3) {
    FUN_00b2c0e8(&local_90);
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,3);
    puVar1 = puStack_88;
    if (((ulong)puStack_88 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_88 & 0xfffffffffffffffe);
    }
    local_68 = (undefined1 *)FUN_00b2bc88(puVar1);
  }
  local_68[0x20] = param_8 & 1;
  *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 2;
  if ((int)local_60 != 3) {
    FUN_00b2c0e8(&local_90);
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,3);
    puVar1 = puStack_88;
    if (((ulong)puStack_88 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_88 & 0xfffffffffffffffe);
    }
    local_68 = (undefined1 *)FUN_00b2bc88(puVar1);
  }
  *(undefined4 *)(local_68 + 0x28) = param_6;
  *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 8;
  if ((int)local_60 != 3) {
    FUN_00b2c0e8(&local_90);
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,3);
    puVar1 = puStack_88;
    if (((ulong)puStack_88 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_88 & 0xfffffffffffffffe);
    }
    local_68 = (undefined1 *)FUN_00b2bc88(puVar1);
  }
  *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 1;
  if (-1 < param_5) {
    if ((param_4 == 0) && (param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    puVar1 = (undefined1 *)FUN_00713f34(local_68 + 0x18,param_4,param_5);
    if (param_7 != -1) {
      if ((int)local_60 != 3) {
        FUN_00b2c0e8(&local_90);
        local_60 = (undefined1 *)CONCAT44(local_60._4_4_,3);
        puVar1 = puStack_88;
        if (((ulong)puStack_88 & 1) != 0) {
          puVar1 = *(undefined1 **)((ulong)puStack_88 & 0xfffffffffffffffe);
        }
        local_68 = (undefined1 *)FUN_00b2bc88(puVar1);
      }
      *(int *)(local_68 + 0x2c) = param_7;
      *(uint *)(local_68 + 0x10) = *(uint *)(local_68 + 0x10) | 0x10;
      puVar1 = local_68;
    }
    FUN_00b2918c(param_1,puVar1,&local_90);
    FUN_00b2c190(&local_90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
            );
}


// ===== 00b2b114  FUN_00b2b114 =====

ulong FUN_00b2b114(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x48);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar3 = FUN_00b2baa8(uVar7);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x48,1,uVar7);
        uVar7 = FUN_00b2baa8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + 3) = 2;
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x48,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b2b22c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar1 + 1;
      uVar7 = FUN_00b2baa8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b2b22c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  return uVar7;
}


// ===== 00b2b250  FUN_00b2b250 =====

ulong FUN_00b2b250(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x18);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    uVar3 = FUN_00b2baf8(uVar7);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x18,1,uVar7);
        uVar7 = FUN_00b2baf8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 3) = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x18,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b2b368;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      uVar7 = FUN_00b2baf8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b2b368:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return uVar7;
}


// ===== 00b2b38c  FUN_00b2b38c =====

ulong FUN_00b2b38c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x18);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    uVar3 = FUN_00b2bcd8(uVar7);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x18,1,uVar7);
        uVar7 = FUN_00b2bcd8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 3) = 2;
        *(undefined4 *)(param_1 + 0x20) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x18,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b2b4a4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      uVar7 = FUN_00b2bcd8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b2b4a4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return uVar7;
}


// ===== 00b2b4c8  FUN_00b2b4c8 =====

void FUN_00b2b4c8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (uVar1 == uVar2) {
    FUN_00b2c6cc();
    return;
  }
  FUN_00712724();
  return;
}


// ===== 00b2b518  FUN_00b2b518 =====

void FUN_00b2b518(void)

{
  return;
}


// ===== 00b2b520  FUN_00b2b520 =====

void FUN_00b2b520(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b2b52c  FUN_00b2b52c =====

void * FUN_00b2b52c(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b314b8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b57c  FUN_00b2b57c =====

void * FUN_00b2b57c(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b306c0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b5cc  FUN_00b2b5cc =====

void * FUN_00b2b5cc(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b2d0e4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b61c  FUN_00b2b61c =====

void * FUN_00b2b61c(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_00b2fd60(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b66c  FUN_00b2b66c =====

ulong FUN_00b2b66c(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  
  uVar4 = *param_1;
  puVar2 = param_1;
  if (uVar4 == 0) {
    *(int *)(param_1 + 1) = 1;
    uVar4 = FUN_00b2b788(param_2);
    *param_1 = uVar4;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        *(int *)(param_1 + 1) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1,1,param_2);
        uVar4 = FUN_00b2b788(param_2);
        *puVar2 = uVar4;
        *(undefined4 *)(*param_1 + 3) = 2;
        *(int *)(param_1 + 1) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = (int)param_1[1];
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1,1,param_2);
        iVar6 = *(int *)(*param_1 + 3);
        piVar5 = (int *)(*param_1 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 1) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b2b770;
        }
      }
      piVar5[1] = iVar6 + 1;
      uVar4 = param_1[1];
      *(int *)(param_1 + 1) = (int)uVar4 + 1;
      uVar3 = FUN_00b2b788(param_2);
      puVar2 = (ulong *)(piVar5 + (long)(int)uVar4 * 2 + 2);
      *puVar2 = uVar3;
    }
  }
LAB_00b2b770:
  return *puVar2;
}


// ===== 00b2b788  FUN_00b2b788 =====

void * FUN_00b2b788(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2e510(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b7d8  FUN_00b2b7d8 =====

void * FUN_00b2b7d8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_00b3025c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b828  FUN_00b2b828 =====

void * FUN_00b2b828(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b2d638(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b878  FUN_00b2b878 =====

void * FUN_00b2b878(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2d314(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b8c8  FUN_00b2b8c8 =====

void * FUN_00b2b8c8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x40);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x40);
  }
  FUN_00b316b0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b918  FUN_00b2b918 =====

void * FUN_00b2b918(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b31ddc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b968  FUN_00b2b968 =====

void * FUN_00b2b968(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b30ae8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2b9b8  FUN_00b2b9b8 =====

void * FUN_00b2b9b8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b30e94(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2ba08  FUN_00b2ba08 =====

void * FUN_00b2ba08(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b311c0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2ba58  FUN_00b2ba58 =====

void * FUN_00b2ba58(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x70);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x70);
  }
  FUN_00b2d8fc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2baa8  FUN_00b2baa8 =====

void * FUN_00b2baa8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2e154(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2baf8  FUN_00b2baf8 =====

void * FUN_00b2baf8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2eb88(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bb48  FUN_00b2bb48 =====

void * FUN_00b2bb48(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b2e8cc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bb98  FUN_00b2bb98 =====

void * FUN_00b2bb98(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x60);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x60);
  }
  FUN_00b2f00c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bbe8  FUN_00b2bbe8 =====

void * FUN_00b2bbe8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2f9f0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bc38  FUN_00b2bc38 =====

void * FUN_00b2bc38(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b2cc80(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bc88  FUN_00b2bc88 =====

void * FUN_00b2bc88(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b2c734(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bcd8  FUN_00b2bcd8 =====

void * FUN_00b2bcd8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_00b2c170(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b2bd28  FUN_00b2bd28 =====

void FUN_00b2bd28(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43b58;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = param_2;
  return;
}


// ===== 00b2bd44  FUN_00b2bd44 =====

void FUN_00b2bd44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00711a3c((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00b2bd90  FUN_00b2bd90 =====

void FUN_00b2bd90(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_00711a3c();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2bdd8  FUN_00b2bdd8 =====

void FUN_00b2bdd8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
    FUN_00711e1c(param_1 + 0x18,param_2 + 0x18,uVar2);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2be78  FUN_00b2be78 =====

undefined ** FUN_00b2be78(void)

{
  return &PTR_PTR_00d43b88;
}


// ===== 00b2be88  FUN_00b2be88 =====

void FUN_00b2be88(long param_1)

{
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    FUN_006dbb58(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2bee8  FUN_00b2bee8 =====

void * FUN_00b2bee8(long param_1,void *param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) {
    iVar6 = 0;
    do {
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x20) <= iVar6)) {
        FUN_006fc6ec(iVar6);
      }
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      pvVar3 = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      pvVar3 = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pvVar3 = (void *)FUN_006dcef8(param_3,pvVar3,uVar4,param_2);
      return pvVar3;
    }
    memcpy(param_2,pvVar3,uVar4 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}


// ===== 00b2c008  FUN_00b2c008 =====

long FUN_00b2c008(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar4 = (long)*(int *)(param_1 + 0x20);
    puVar5 = (ulong *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar5 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar6 = lVar4 << 3;
      do {
        lVar1 = FUN_00b2c59c(*puVar5);
        lVar6 = lVar6 + -8;
        lVar4 = lVar1 + lVar4 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
        puVar5 = puVar5 + 1;
      } while (lVar6 != 0);
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b2c0c0;
    }
  }
  lVar4 = 0;
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x00b2c0c0:
  if ((uVar2 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar2 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b2c0e8  FUN_00b2c0e8 =====

void FUN_00b2c0e8(long param_1)

{
  ulong uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (*(long **)(param_1 + 0x28) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x28) + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ===== 00b2c170  FUN_00b2c170 =====

void FUN_00b2c170(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_00d43b18;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b2c190  FUN_00b2c190 =====

void FUN_00b2c190(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00b2c0e8(param_1);
    return;
  }
  return;
}


// ===== 00b2c1dc  FUN_00b2c1dc =====

void FUN_00b2c1dc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(int *)((long)param_1 + 0x30) != 0) {
    FUN_00b2c0e8(param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2c224  FUN_00b2c224 =====

void FUN_00b2c224(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_00b2c0e8(param_1);
      }
      *(int *)(param_1 + 0x30) = iVar2;
    }
    switch(iVar2) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      if (iVar3 != iVar2) {
        uVar4 = FUN_006dbf88(uVar5,*(undefined8 *)(param_2 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        uVar5 = *(ulong *)(param_2 + 8);
        goto joined_r0x00b2c318;
      }
      FUN_006dc000(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
joined_r0x00b2c318:
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(uVar5 & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2c34c  FUN_00b2c34c =====

undefined ** FUN_00b2c34c(void)

{
  return &PTR_PTR_00d43be8;
}


// ===== 00b2c35c  FUN_00b2c35c =====

void FUN_00b2c35c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00b2c0e8(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2c3bc  FUN_00b2c3bc =====

byte * FUN_00b2c3bc(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar5 = (ulong)(int)uVar1;
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = uVar5;
    pbVar3 = pbVar7;
    if (0x7f < uVar1) {
      do {
        uVar5 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar5;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 < 0x17) && ((0x7f0ff8U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_006dc57c(uVar8);
    param_2 = (byte *)FUN_006fc2f0(uVar1,uVar8,uVar2,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b2c524  FUN_00b2c524 =====

byte * FUN_00b2c524(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  pbVar1 = param_3 + 1;
  *param_3 = 8;
  pbVar2 = pbVar1;
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = param_2;
    } while (uVar3 != 0);
  }
  *pbVar1 = (byte)param_2;
  return pbVar1 + 1;
}


// ===== 00b2c59c  FUN_00b2c59c =====

ulong FUN_00b2c59c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = uVar5 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(int *)(param_1 + 0x30) - 3;
  if ((uVar1 < 0x14) && ((0xfe1ffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    lVar6 = *(long *)(&DAT_00255040 + (ulong)uVar1 * 8);
    lVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    uVar5 = uVar5 + lVar6 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar4 = (int)uVar5;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar5 = lVar2 + uVar5;
    iVar4 = (int)uVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar5;
  }
  return uVar5;
}


// ===== 00b2c6cc  FUN_00b2c6cc =====

void FUN_00b2c6cc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  return;
}


// ===== 00b2c734  FUN_00b2c734 =====

void FUN_00b2c734(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d43618;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = &DAT_00208540;
  return;
}


// ===== 00b2c75c  FUN_00b2c75c =====

void FUN_00b2c75c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  return;
}


// ===== 00b2c790  FUN_00b2c790 =====

void FUN_00b2c790(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00b2c7d0  FUN_00b2c7d0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b2c7d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2c8ac  FUN_00b2c8ac =====

undefined ** FUN_00b2c8ac(void)

{
  return &PTR_PTR_00d43c40;
}


// ===== 00b2c8bc  FUN_00b2c8bc =====

void FUN_00b2c8bc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((uVar1 & 0x1e) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b2c918  FUN_00b2c918 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b2c918(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 *__src;
  void *__src_00;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x20);
    *param_2 = 8;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x24);
    uVar5 = (ulong)(int)uVar7;
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    uVar8 = uVar5;
    pbVar4 = pbVar10;
    if (0x7f < uVar7) {
      do {
        uVar5 = uVar8 >> 7;
        uVar9 = uVar8 >> 0xe;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar8 | 0x80;
        uVar8 = uVar5;
        pbVar4 = pbVar10;
      } while (uVar9 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar5;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x28);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar7) {
      do {
        uVar3 = uVar7 >> 0xe;
        bVar2 = (byte)uVar7;
        uVar7 = uVar7 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar7;
  }
  if ((uVar1 & 1) == 0) goto joined_r0x00b2caa0;
  __src = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  __n = (size_t)*(char *)((long)__src + 0x17);
  if ((long)__n < 0) {
    puVar6 = (undefined8 *)*__src;
    __n = __src[1];
    __src = puVar6;
    if ((long)__n < 0x80) goto LAB_00b2ca04;
  }
  else {
LAB_00b2ca04:
    puVar6 = __src;
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x22;
      *(byte *)((long)param_2 + 1) = (byte)__n;
      memcpy((byte *)((long)param_2 + 2),__src,__n);
      param_2 = (byte *)((long)param_2 + 2) + __n;
      goto joined_r0x00b2caa0;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,4,puVar6,__n,param_2);
joined_r0x00b2caa0:
  if ((uVar1 >> 4 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
    uVar8 = *(ulong *)(param_1 + 8);
  }
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar5 < 0) {
      __src_00 = *(void **)(uVar8 + 8);
      uVar5 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      __src_00 = (void *)(uVar8 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src_00,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src_00,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b2cb68  FUN_00b2cb68 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00b2cb68(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulong)uVar1 & 2;
  if ((uVar1 & 0x1d) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar6 + uVar4 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + uVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
    iVar3 = (int)uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar4;
  }
  return uVar4;
}


// ===== 00b2cc80  FUN_00b2cc80 =====

void FUN_00b2cc80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d43698;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  return;
}


// ===== 00b2cca4  FUN_00b2cca4 =====

void FUN_00b2cca4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  return;
}


// ===== 00b2ccd8  FUN_00b2ccd8 =====

void FUN_00b2ccd8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00b2cd18  FUN_00b2cd18 =====

void FUN_00b2cd18(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2cdd4  FUN_00b2cdd4 =====

undefined ** FUN_00b2cdd4(void)

{
  return &PTR_PTR_00d43c98;
}


// ===== 00b2cde4  FUN_00b2cde4 =====

void FUN_00b2cde4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b2ce40  FUN_00b2ce40 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b2ce40(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 *__src;
  void *__src_00;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x20);
    *param_2 = 8;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar6 = (ulong)(int)uVar3;
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar7 = uVar6;
    pbVar4 = pbVar9;
    if (0x7f < uVar3) {
      do {
        uVar6 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar6;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b2cf70;
  }
  __src = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  __n = (size_t)*(char *)((long)__src + 0x17);
  if ((long)__n < 0) {
    puVar5 = (undefined8 *)*__src;
    __n = __src[1];
    __src = puVar5;
    if ((long)__n < 0x80) goto LAB_00b2cefc;
  }
  else {
LAB_00b2cefc:
    puVar5 = __src;
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      param_2[1] = (byte)__n;
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b2cf70;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,3,puVar5,__n,param_2);
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x00b2cf70:
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      __src_00 = *(void **)(uVar7 + 8);
      uVar6 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src_00 = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src_00,uVar6,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src_00,uVar6 & 0xffffffff);
    param_2 = param_2 + (int)uVar6;
  }
  return param_2;
}


// ===== 00b2d01c  FUN_00b2d01c =====

ulong FUN_00b2d01c(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulong)uVar1 & 2;
  if ((uVar1 & 5) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar6 + uVar4 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
    iVar3 = (int)uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar4;
  }
  return uVar4;
}


// ===== 00b2d0e4  FUN_00b2d0e4 =====

void FUN_00b2d0e4(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d43918;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


// ===== 00b2d100  FUN_00b2d100 =====

void FUN_00b2d100(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b2d114  FUN_00b2d114 =====

void FUN_00b2d114(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2d14c  FUN_00b2d14c =====

void FUN_00b2d14c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2d188  FUN_00b2d188 =====

undefined ** FUN_00b2d188(void)

{
  return &PTR_PTR_00d43cf8;
}


// ===== 00b2d198  FUN_00b2d198 =====

void FUN_00b2d198(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2d1b4  FUN_00b2d1b4 =====

byte * FUN_00b2d1b4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    pbVar3 = pbVar7;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar7 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar7;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar4 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b2d2ac  FUN_00b2d2ac =====

ulong FUN_00b2d2ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar1 = (int)uVar2;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
    iVar1 = (int)uVar2;
  }
  if ((iVar1 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar2;
  }
  return uVar2;
}


// ===== 00b2d314  FUN_00b2d314 =====

void FUN_00b2d314(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43718;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b2d330  FUN_00b2d330 =====

void FUN_00b2d330(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b2d344  FUN_00b2d344 =====

void FUN_00b2d344(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2d37c  FUN_00b2d37c =====

void FUN_00b2d37c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2d3e4  FUN_00b2d3e4 =====

undefined ** FUN_00b2d3e4(void)

{
  return &PTR_PTR_00d43d58;
}


// ===== 00b2d3f4  FUN_00b2d3f4 =====

void FUN_00b2d3f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2d420  FUN_00b2d420 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b2d420(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x1c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b2d55c  FUN_00b2d55c =====

ulong FUN_00b2d55c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b2d638  FUN_00b2d638 =====

void FUN_00b2d638(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43818;
  param_1[1] = param_2;
  return;
}


// ===== 00b2d650  FUN_00b2d650 =====

void FUN_00b2d650(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b2d664  FUN_00b2d664 =====

void FUN_00b2d664(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2d69c  FUN_00b2d69c =====

void FUN_00b2d69c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2d6ec  FUN_00b2d6ec =====

undefined ** FUN_00b2d6ec(void)

{
  return &PTR_PTR_00d43dc0;
}


// ===== 00b2d6fc  FUN_00b2d6fc =====

void FUN_00b2d6fc(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2d724  FUN_00b2d724 =====

byte * FUN_00b2d724(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar3 = (ulong)(int)uVar1;
    pbVar6 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    param_2 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      __src = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      __src = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar2 = (byte *)FUN_006dcef8(param_3,__src,uVar3,param_2);
      return pbVar2;
    }
    memcpy(param_2,__src,uVar3 & 0xffffffff);
    param_2 = param_2 + (int)uVar3;
  }
  return param_2;
}


// ===== 00b2d84c  FUN_00b2d84c =====

ulong FUN_00b2d84c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b2d8fc  FUN_00b2d8fc =====

void FUN_00b2d8fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d43ad8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  *(undefined4 *)((long)param_1 + 0x6c) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


// ===== 00b2d934  FUN_00b2d934 =====

void FUN_00b2d934(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00711a3c();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00711a3c();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00711a3c((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00b2d9a0  FUN_00b2d9a0 =====

void FUN_00b2d9a0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)((long)param_1 + 0x48) != 0) {
    FUN_00711a3c();
  }
  if (*(long *)((long)param_1 + 0x30) != 0) {
    FUN_00711a3c();
  }
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_00711a3c();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2da08  FUN_00b2da08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b2da08(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711e1c(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_2 + 0x38) != 0)) {
      FUN_00711e1c(param_1 + 0x30,param_2 + 0x30,uVar2);
    }
    if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_2 + 0x50) != 0)) {
      FUN_00711e1c(param_1 + 0x48,param_2 + 0x48,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2db30  FUN_00b2db30 =====

undefined ** FUN_00b2db30(void)

{
  return &PTR_PTR_00d43e28;
}


// ===== 00b2db40  FUN_00b2db40 =====

void FUN_00b2db40(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
      FUN_006dbb58(param_1 + 0x18);
    }
    if (((uVar1 >> 1 & 1) != 0) && (0 < *(int *)(param_1 + 0x38))) {
      FUN_006dbb58(param_1 + 0x30);
    }
    if (((uVar1 >> 2 & 1) != 0) && (0 < *(int *)(param_1 + 0x50))) {
      FUN_006dbb58(param_1 + 0x48);
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2dbf0  FUN_00b2dbf0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b2dbf0(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  void *__src;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x60);
    pbVar11 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar11;
    if (0x7f < uVar7) {
      do {
        uVar5 = uVar7 >> 0xe;
        bVar4 = (byte)uVar7;
        uVar7 = uVar7 >> 7;
        pbVar11 = pbVar6 + 1;
        *pbVar6 = bVar4 | 0x80;
        pbVar6 = pbVar11;
      } while (uVar5 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar7;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 100);
    pbVar11 = param_2 + 1;
    *param_2 = 0x10;
    pbVar6 = pbVar11;
    if (0x7f < uVar7) {
      do {
        uVar5 = uVar7 >> 0xe;
        bVar4 = (byte)uVar7;
        uVar7 = uVar7 >> 7;
        pbVar11 = pbVar6 + 1;
        *pbVar6 = bVar4 | 0x80;
        pbVar6 = pbVar11;
      } while (uVar5 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar7;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x6c);
    uVar9 = (ulong)(int)uVar7;
    pbVar11 = param_2 + 1;
    *param_2 = 0x18;
    uVar8 = uVar9;
    pbVar6 = pbVar11;
    if (0x7f < uVar7) {
      do {
        uVar9 = uVar8 >> 7;
        uVar10 = uVar8 >> 0xe;
        pbVar11 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar8 = uVar9;
        pbVar6 = pbVar11;
      } while (uVar10 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar4 = *(byte *)(param_1 + 0x68);
    *param_2 = 0x20;
    param_2[1] = bVar4;
    param_2 = param_2 + 2;
  }
  if (((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x20), iVar3 != 0)) {
    iVar12 = 0;
    do {
      if ((iVar12 < 0) || (*(int *)(param_1 + 0x20) <= iVar12)) {
        FUN_006fc6ec(iVar12);
      }
      uVar8 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  if (((uVar2 >> 1 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x38), iVar3 != 0)) {
    iVar12 = 0;
    do {
      if ((iVar12 < 0) || (*(int *)(param_1 + 0x38) <= iVar12)) {
        FUN_006fc6ec(iVar12);
      }
      uVar8 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  if (((uVar2 >> 2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x50), iVar3 != 0)) {
    iVar12 = 0;
    do {
      if ((iVar12 < 0) || (*(int *)(param_1 + 0x50) <= iVar12)) {
        FUN_006fc6ec(iVar12);
      }
      uVar8 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(7,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar8 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar6 = (byte *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return pbVar6;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 00b2df50  FUN_00b2df50 =====

ulong FUN_00b2df50(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulong)(uVar1 >> 4) & 2;
  if ((uVar1 & 0x5f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x20);
      uVar5 = (long)iVar4 + uVar5;
      puVar6 = (ulong *)(param_1 + 0x18);
      if ((uVar3 & 1) != 0) {
        puVar6 = (ulong *)(uVar3 + 7);
      }
      if (iVar4 != 0) {
        lVar7 = (long)iVar4 << 3;
        do {
          lVar2 = FUN_00b2eeb0(*puVar6);
          lVar7 = lVar7 + -8;
          uVar5 = lVar2 + uVar5 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x30);
      iVar4 = *(int *)(param_1 + 0x38);
      uVar5 = uVar5 + (long)iVar4;
      puVar6 = (ulong *)(param_1 + 0x30);
      if ((uVar3 & 1) != 0) {
        puVar6 = (ulong *)(uVar3 + 7);
      }
      if (iVar4 != 0) {
        lVar7 = (long)iVar4 << 3;
        do {
          lVar2 = FUN_00b2e800(*puVar6);
          lVar7 = lVar7 + -8;
          uVar5 = lVar2 + uVar5 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x48);
      iVar4 = *(int *)(param_1 + 0x50);
      uVar5 = uVar5 + (long)iVar4;
      puVar6 = (ulong *)(param_1 + 0x48);
      if ((uVar3 & 1) != 0) {
        puVar6 = (ulong *)(uVar3 + 7);
      }
      if (iVar4 != 0) {
        lVar7 = (long)iVar4 << 3;
        do {
          lVar2 = FUN_00b2e444(*puVar6);
          lVar7 = lVar7 + -8;
          uVar5 = lVar2 + uVar5 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar5 = uVar5 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x60)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar5 = uVar5 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 100)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar5 = uVar5 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar4 = (int)uVar5;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar7 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(uVar3 + 0x10);
    }
    uVar5 = lVar7 + uVar5;
    iVar4 = (int)uVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar5;
  }
  return uVar5;
}


// ===== 00b2e154  FUN_00b2e154 =====

void FUN_00b2e154(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d43858;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  return;
}


// ===== 00b2e178  FUN_00b2e178 =====

void FUN_00b2e178(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  return;
}


// ===== 00b2e1ac  FUN_00b2e1ac =====

void FUN_00b2e1ac(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00b2e1ec  FUN_00b2e1ec =====

void FUN_00b2e1ec(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2e290  FUN_00b2e290 =====

undefined ** FUN_00b2e290(void)

{
  return &PTR_PTR_00d43e90;
}


// ===== 00b2e2a0  FUN_00b2e2a0 =====

void FUN_00b2e2a0(long param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2e2ec  FUN_00b2e2ec =====

undefined1 * FUN_00b2e2ec(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *__src;
  void *__src_00;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x00b2e3ec;
  __src = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  __n = (size_t)*(char *)((long)__src + 0x17);
  if ((long)__n < 0) {
    puVar4 = (undefined8 *)*__src;
    __n = __src[1];
    __src = puVar4;
    if ((long)__n < 0x80) goto LAB_00b2e350;
  }
  else {
LAB_00b2e350:
    puVar4 = __src;
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x00b2e3ec;
    }
  }
  param_2 = (undefined1 *)FUN_006dd0b8(param_3,1,puVar4,__n,param_2);
joined_r0x00b2e3ec:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (undefined1 *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      __src_00 = *(void **)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src_00 = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar2 = (undefined1 *)FUN_006dcef8(param_3,__src_00,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src_00,uVar3 & 0xffffffff);
    param_2 = param_2 + (int)uVar3;
  }
  return param_2;
}


// ===== 00b2e444  FUN_00b2e444 =====

long FUN_00b2e444(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b2e510  FUN_00b2e510 =====

void FUN_00b2e510(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d43658;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  return;
}


// ===== 00b2e534  FUN_00b2e534 =====

void FUN_00b2e534(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  return;
}


// ===== 00b2e568  FUN_00b2e568 =====

void FUN_00b2e568(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00b2e5a8  FUN_00b2e5a8 =====

void FUN_00b2e5a8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2e64c  FUN_00b2e64c =====

undefined ** FUN_00b2e64c(void)

{
  return &PTR_PTR_00d43ef0;
}


// ===== 00b2e65c  FUN_00b2e65c =====

void FUN_00b2e65c(long param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2e6a8  FUN_00b2e6a8 =====

undefined1 * FUN_00b2e6a8(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *__src;
  void *__src_00;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x00b2e7a8;
  __src = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  __n = (size_t)*(char *)((long)__src + 0x17);
  if ((long)__n < 0) {
    puVar4 = (undefined8 *)*__src;
    __n = __src[1];
    __src = puVar4;
    if ((long)__n < 0x80) goto LAB_00b2e70c;
  }
  else {
LAB_00b2e70c:
    puVar4 = __src;
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x00b2e7a8;
    }
  }
  param_2 = (undefined1 *)FUN_006dd0b8(param_3,1,puVar4,__n,param_2);
joined_r0x00b2e7a8:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (undefined1 *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      __src_00 = *(void **)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src_00 = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar2 = (undefined1 *)FUN_006dcef8(param_3,__src_00,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src_00,uVar3 & 0xffffffff);
    param_2 = param_2 + (int)uVar3;
  }
  return param_2;
}


// ===== 00b2e800  FUN_00b2e800 =====

long FUN_00b2e800(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b2e8cc  FUN_00b2e8cc =====

void FUN_00b2e8cc(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d435d8;
  param_1[1] = param_2;
  return;
}


// ===== 00b2e8e4  FUN_00b2e8e4 =====

void FUN_00b2e8e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b2e8f8  FUN_00b2e8f8 =====

void FUN_00b2e8f8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2e930  FUN_00b2e930 =====

void FUN_00b2e930(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2e980  FUN_00b2e980 =====

undefined ** FUN_00b2e980(void)

{
  return &PTR_PTR_00d43f58;
}


// ===== 00b2e990  FUN_00b2e990 =====

void FUN_00b2e990(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2e9b8  FUN_00b2e9b8 =====

byte * FUN_00b2e9b8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = (ulong)uVar2;
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    pbVar4 = pbVar7;
    if (0x7f < uVar2) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar7 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar7;
      } while (uVar5 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar6;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b2ead8  FUN_00b2ead8 =====

ulong FUN_00b2ead8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b2eb88  FUN_00b2eb88 =====

void FUN_00b2eb88(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43a18;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b2eba4  FUN_00b2eba4 =====

void FUN_00b2eba4(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00b2ec04  FUN_00b2ec04 =====

void FUN_00b2ec04(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2ec60  FUN_00b2ec60 =====

void FUN_00b2ec60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_00b320e0(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 3) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2ed5c  FUN_00b2ed5c =====

undefined ** FUN_00b2ed5c(void)

{
  return &PTR_PTR_00d43fb0;
}


// ===== 00b2ed6c  FUN_00b2ed6c =====

void FUN_00b2ed6c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_00b2e990(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2edc4  FUN_00b2edc4 =====

void * FUN_00b2edc4(long param_1,void *param_2,long *param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (void *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (void *)FUN_006fc2f0(2,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      pvVar2 = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      pvVar2 = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pvVar2 = (void *)FUN_006dcef8(param_3,pvVar2,uVar3,param_2);
      return pvVar2;
    }
    memcpy(param_2,pvVar2,uVar3 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}


// ===== 00b2eeb0  FUN_00b2eeb0 =====

long FUN_00b2eeb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
    goto LAB_00b2efac;
  }
  if ((uVar1 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    Hint_Prefetch(lVar4 + 0x1c0,0,0,0);
    Hint_Prefetch(lVar4 + 0x200,0,0,0);
    Hint_Prefetch(lVar4 + 0x240,0,0,0);
    Hint_Prefetch(lVar4 + 0x280,0,0,0);
    Hint_Prefetch(lVar4 + 0x2c0,0,0,0);
    uVar2 = *(uint *)(lVar4 + 0x10);
    if ((uVar2 & 3) == 0) {
      uVar6 = 0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)((int)LZCOUNT(*(undefined4 *)(lVar4 + 0x18)) * -9 + 0x1a0U >> 6);
      }
      if ((uVar2 >> 1 & 1) != 0) {
        uVar6 = ((int)LZCOUNT((long)*(int *)(lVar4 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar6;
      }
    }
    if ((*(ulong *)(lVar4 + 8) & 1) == 0) {
      if ((int)uVar6 != 0) goto LAB_00b2ef6c;
LAB_00b2f000:
      if (*(int *)(lVar4 + 0x14) != 0) goto LAB_00b2ef6c;
    }
    else {
      uVar7 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
      lVar5 = (long)*(char *)(uVar7 + 0x1f);
      if (lVar5 < 0) {
        lVar5 = *(long *)(uVar7 + 0x10);
      }
      uVar6 = lVar5 + uVar6;
      if ((int)uVar6 == 0) goto LAB_00b2f000;
LAB_00b2ef6c:
      *(int *)(lVar4 + 0x14) = (int)uVar6;
    }
    lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
  }
LAB_00b2efac:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b2f00c  FUN_00b2f00c =====

void FUN_00b2f00c(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_00d439d8;
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}


// ===== 00b2f034  FUN_00b2f034 =====

void FUN_00b2f034(long param_1)

{
  long *plVar1;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
  }
  if ((((uint)*(ulong *)(param_1 + 0x40) >> 2 & 1) != 0) &&
     (plVar1 = (long *)((*(ulong *)(param_1 + 0x40) & 0xfffffffffffffff8) - 8), *plVar1 == 0)) {
    operator_delete(plVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00711a3c();
  }
  if ((((uint)*(ulong *)(param_1 + 0x18) >> 2 & 1) != 0) &&
     (plVar1 = (long *)((*(ulong *)(param_1 + 0x18) & 0xfffffffffffffff8) - 8), *plVar1 == 0)) {
    operator_delete(plVar1);
    return;
  }
  return;
}


// ===== 00b2f0f4  FUN_00b2f0f4 =====

void FUN_00b2f0f4(void *param_1)

{
  FUN_00b2f034();
  operator_delete(param_1);
  return;
}


// ===== 00b2f124  FUN_00b2f124 =====

void FUN_00b2f124(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  uVar10 = *(ulong *)(param_1 + 8);
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x1f) == 0) goto LAB_00b2f38c;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x18);
    uVar4 = (uint)uVar6 & 3;
    if ((uVar6 & 4) != 0) {
      uVar4 = *(uint *)(param_2 + 0x20);
    }
    if (uVar4 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x18);
      uVar7 = (uint)uVar8;
      if ((uVar7 >> 2 & 1) == 0) {
        uVar1 = uVar7 & 3;
        iVar11 = uVar1 + uVar4;
        if (2 < iVar11) goto LAB_00b2f1d4;
LAB_00b2f19c:
        if ((uVar7 >> 2 & 1) != 0) goto LAB_00b2f200;
LAB_00b2f1a0:
        uVar9 = param_1 + 0x20;
        uVar7 = (uint)uVar8 & 3;
        *(ulong *)(param_1 + 0x18) = uVar8 & 0xfffffffffffffff8 | (long)iVar11;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x20);
        iVar11 = uVar1 + uVar4;
        if (iVar11 <= *(int *)(param_1 + 0x24)) goto LAB_00b2f19c;
LAB_00b2f1d4:
        FUN_006f7ed0(param_1 + 0x18,(uVar8 & 4) == 0,uVar1,iVar11);
        uVar8 = *(ulong *)(param_1 + 0x18);
        if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_00b2f1a0;
LAB_00b2f200:
        uVar7 = *(uint *)(param_1 + 0x20);
        uVar9 = uVar8 & 0xfffffffffffffff8;
        *(int *)(param_1 + 0x20) = iVar11;
      }
      if (0 < (int)uVar4) {
        puVar2 = (uint *)(param_2 + 0x20);
        if ((uVar6 & 4) != 0) {
          puVar2 = (uint *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffff8);
        }
        memcpy((void *)(uVar9 + (long)(int)uVar7 * 4),puVar2,(ulong)uVar4 << 2);
      }
    }
  }
  if (((uVar3 >> 1 & 1) != 0) && (*(int *)(param_2 + 0x30) != 0)) {
    FUN_00711e1c(param_1 + 0x28,param_2 + 0x28,uVar10);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x40);
    uVar4 = (uint)uVar6 & 3;
    if ((uVar6 & 4) != 0) {
      uVar4 = *(uint *)(param_2 + 0x48);
    }
    if (uVar4 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x40);
      uVar7 = (uint)uVar8;
      if ((uVar7 >> 2 & 1) == 0) {
        uVar1 = uVar7 & 3;
        iVar11 = uVar1 + uVar4;
        if (2 < iVar11) goto LAB_00b2f2bc;
LAB_00b2f284:
        if ((uVar7 >> 2 & 1) != 0) goto LAB_00b2f2e8;
LAB_00b2f288:
        uVar9 = param_1 + 0x48;
        uVar7 = (uint)uVar8 & 3;
        *(ulong *)(param_1 + 0x40) = uVar8 & 0xfffffffffffffff8 | (long)iVar11;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x48);
        iVar11 = uVar1 + uVar4;
        if (iVar11 <= *(int *)(param_1 + 0x4c)) goto LAB_00b2f284;
LAB_00b2f2bc:
        FUN_006f7ed0(param_1 + 0x40,(uVar8 & 4) == 0,uVar1,iVar11);
        uVar8 = *(ulong *)(param_1 + 0x40);
        if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_00b2f288;
LAB_00b2f2e8:
        uVar7 = *(uint *)(param_1 + 0x48);
        uVar9 = uVar8 & 0xfffffffffffffff8;
        *(int *)(param_1 + 0x48) = iVar11;
      }
      if (0 < (int)uVar4) {
        puVar2 = (uint *)(param_2 + 0x48);
        if ((uVar6 & 4) != 0) {
          puVar2 = (uint *)(*(ulong *)(param_2 + 0x40) & 0xfffffffffffffff8);
        }
        memcpy((void *)(uVar9 + (long)(int)uVar7 * 4),puVar2,(ulong)uVar4 << 2);
      }
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    lVar13 = *(long *)(param_1 + 0x50);
    lVar12 = *(long *)(param_2 + 0x50);
    if (lVar13 == 0) {
      uVar5 = FUN_00b32160(uVar10,lVar12);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
    }
    else {
      uVar4 = *(uint *)(lVar12 + 0x10);
      if ((uVar4 & 3) != 0) {
        if ((uVar4 & 1) != 0) {
          uVar10 = *(ulong *)(lVar13 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          FUN_00713ffc(lVar13 + 0x18,*(ulong *)(lVar12 + 0x18) & 0xfffffffffffffffc,uVar10);
        }
        if ((uVar4 >> 1 & 1) != 0) {
          *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar12 + 0x20);
        }
      }
      *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | uVar4;
      if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
        FUN_006dcb04(lVar13 + 8,(*(ulong *)(lVar12 + 8) & 0xfffffffffffffffe) + 8);
      }
    }
  }
  if ((uVar3 >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  }
LAB_00b2f38c:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b2f41c  FUN_00b2f41c =====

undefined ** FUN_00b2f41c(void)

{
  return &PTR_PTR_00d44008;
}


// ===== 00b2f42c  FUN_00b2f42c =====

void FUN_00b2f42c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (((uint)*(ulong *)(param_1 + 0x18) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffff8;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    if (((uVar1 >> 1 & 1) != 0) && (0 < *(int *)(param_1 + 0x30))) {
      FUN_006dbb58(param_1 + 0x28);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (((uint)*(ulong *)(param_1 + 0x40) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffff8;
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00b2f4e4(*(undefined8 *)(param_1 + 0x50));
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2f4e4  FUN_00b2f4e4 =====

void FUN_00b2f4e4(long param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b2f530  FUN_00b2f530 =====

byte * FUN_00b2f530(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  void *__src;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    uVar9 = (uint)*(ulong *)(param_1 + 0x18);
    if ((uVar9 >> 2 & 1) == 0) {
      uVar9 = uVar9 & 3;
      if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
LAB_00b2f584:
        uVar11 = 0;
        do {
          if (param_2 < (byte *)*param_3) {
            uVar8 = *(ulong *)(param_1 + 0x18);
            if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_00b2f5a8;
LAB_00b2f5c8:
            uVar10 = *(uint *)(param_1 + 0x20);
          }
          else {
            param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
            uVar8 = *(ulong *)(param_1 + 0x18);
            if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_00b2f5c8;
LAB_00b2f5a8:
            uVar10 = (uint)uVar8 & 3;
          }
          if ((long)(int)uVar10 <= (long)uVar11) {
            FUN_006fc6ec(uVar11 & 0xffffffff);
            uVar8 = *(ulong *)(param_1 + 0x18);
          }
          puVar2 = (uint *)(param_1 + 0x20);
          if ((uVar8 & 4) != 0) {
            puVar2 = (uint *)(uVar8 & 0xfffffffffffffff8);
          }
          uVar10 = puVar2[uVar11];
          pbVar12 = param_2 + 1;
          *param_2 = 8;
          pbVar7 = pbVar12;
          if (0x7f < uVar10) {
            do {
              uVar5 = uVar10 >> 0xe;
              bVar6 = (byte)uVar10;
              uVar10 = uVar10 >> 7;
              pbVar12 = pbVar7 + 1;
              *pbVar7 = bVar6 | 0x80;
              pbVar7 = pbVar12;
            } while (uVar5 != 0);
          }
          uVar11 = uVar11 + 1;
          param_2 = pbVar12 + 1;
          *pbVar12 = (byte)uVar10;
        } while (uVar11 != uVar9);
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x20);
      if (0 < (int)uVar9) goto LAB_00b2f584;
    }
  }
  if (((uVar3 >> 1 & 1) != 0) && (iVar4 = *(int *)(param_1 + 0x30), iVar4 != 0)) {
    iVar13 = 0;
    do {
      if ((iVar13 < 0) || (*(int *)(param_1 + 0x30) <= iVar13)) {
        FUN_006fc6ec(iVar13);
      }
      uVar11 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar11 & 1) != 0) {
        puVar1 = (ulong *)(uVar11 + (long)iVar13 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar9 = (uint)*(ulong *)(param_1 + 0x40);
    if ((uVar9 >> 2 & 1) == 0) {
      uVar9 = uVar9 & 3;
      if ((*(ulong *)(param_1 + 0x40) & 3) == 0) goto LAB_00b2f774;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x48);
      if ((int)uVar9 < 1) goto LAB_00b2f774;
    }
    uVar11 = 0;
    do {
      if (param_2 < (byte *)*param_3) {
        uVar8 = *(ulong *)(param_1 + 0x40);
        if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_00b2f6ec;
LAB_00b2f70c:
        uVar10 = *(uint *)(param_1 + 0x48);
      }
      else {
        param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
        uVar8 = *(ulong *)(param_1 + 0x40);
        if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_00b2f70c;
LAB_00b2f6ec:
        uVar10 = (uint)uVar8 & 3;
      }
      if ((long)(int)uVar10 <= (long)uVar11) {
        FUN_006fc6ec(uVar11 & 0xffffffff);
        uVar8 = *(ulong *)(param_1 + 0x40);
      }
      puVar2 = (uint *)(param_1 + 0x48);
      if ((uVar8 & 4) != 0) {
        puVar2 = (uint *)(uVar8 & 0xfffffffffffffff8);
      }
      uVar10 = puVar2[uVar11];
      pbVar12 = param_2 + 1;
      *param_2 = 0x18;
      pbVar7 = pbVar12;
      if (0x7f < uVar10) {
        do {
          uVar5 = uVar10 >> 0xe;
          bVar6 = (byte)uVar10;
          uVar10 = uVar10 >> 7;
          pbVar12 = pbVar7 + 1;
          *pbVar7 = bVar6 | 0x80;
          pbVar7 = pbVar12;
        } while (uVar5 != 0);
      }
      uVar11 = uVar11 + 1;
      param_2 = pbVar12 + 1;
      *pbVar12 = (byte)uVar10;
    } while (uVar11 != uVar9);
  }
LAB_00b2f774:
  if ((uVar3 >> 4 & 1) != 0) {
    param_2 = (byte *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
  }
  if ((uVar3 >> 3 & 1) == 0) {
    uVar11 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(5,*(long *)(param_1 + 0x50),
                                   *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3
                                  );
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar11 + 8);
      uVar8 = (ulong)*(uint *)(uVar11 + 0x10);
    }
    else {
      __src = (void *)(uVar11 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar7 = (byte *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return pbVar7;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 00b2f84c  FUN_00b2f84c =====

long FUN_00b2f84c(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar7 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_006fc624(param_1 + 0x18);
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x18);
      if ((uVar3 >> 2 & 1) == 0) {
        uVar3 = uVar3 & 3;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x20);
      }
      lVar7 = lVar7 + (ulong)uVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0x30);
      lVar7 = lVar7 + iVar6;
      puVar8 = (ulong *)(param_1 + 0x28);
      if ((uVar4 & 1) != 0) {
        puVar8 = (ulong *)(uVar4 + 7);
      }
      if (iVar6 != 0) {
        lVar5 = (long)iVar6 << 3;
        do {
          lVar2 = FUN_00b2e800(*puVar8);
          lVar5 = lVar5 + -8;
          lVar7 = lVar2 + lVar7 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar5 = FUN_006fc624(param_1 + 0x40);
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x40);
      if ((uVar3 >> 2 & 1) == 0) {
        uVar3 = uVar3 & 3;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x48);
      }
      lVar7 = lVar5 + lVar7 + (ulong)uVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar5 = FUN_00b2fc94(*(undefined8 *)(param_1 + 0x50));
      lVar7 = lVar7 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar7 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar7;
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar6 = (int)lVar7;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    lVar7 = lVar5 + lVar7;
    iVar6 = (int)lVar7;
  }
  if ((iVar6 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar7;
  }
  return lVar7;
}


// ===== 00b2f9f0  FUN_00b2f9f0 =====

void FUN_00b2f9f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d437d8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  return;
}


// ===== 00b2fa14  FUN_00b2fa14 =====

void FUN_00b2fa14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  return;
}


// ===== 00b2fa48  FUN_00b2fa48 =====

void FUN_00b2fa48(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00b2fa88  FUN_00b2fa88 =====

void FUN_00b2fa88(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2fb2c  FUN_00b2fb2c =====

undefined ** FUN_00b2fb2c(void)

{
  return &PTR_PTR_00d44068;
}


// ===== 00b2fb3c  FUN_00b2fb3c =====

undefined1 * FUN_00b2fb3c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *__src;
  void *__src_00;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x00b2fc3c;
  __src = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  __n = (size_t)*(char *)((long)__src + 0x17);
  if ((long)__n < 0) {
    puVar4 = (undefined8 *)*__src;
    __n = __src[1];
    __src = puVar4;
    if ((long)__n < 0x80) goto LAB_00b2fba0;
  }
  else {
LAB_00b2fba0:
    puVar4 = __src;
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x00b2fc3c;
    }
  }
  param_2 = (undefined1 *)FUN_006dd0b8(param_3,1,puVar4,__n,param_2);
joined_r0x00b2fc3c:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (undefined1 *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      __src_00 = *(void **)(uVar5 + 8);
      uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src_00 = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar2 = (undefined1 *)FUN_006dcef8(param_3,__src_00,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src_00,uVar3 & 0xffffffff);
    param_2 = param_2 + (int)uVar3;
  }
  return param_2;
}


// ===== 00b2fc94  FUN_00b2fc94 =====

long FUN_00b2fc94(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b2fd60  FUN_00b2fd60 =====

void FUN_00b2fd60(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43a98;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  return;
}


// ===== 00b2fd80  FUN_00b2fd80 =====

void FUN_00b2fd80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00711a3c((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00b2fdcc  FUN_00b2fdcc =====

void FUN_00b2fdcc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_00711a3c();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b2fe14  FUN_00b2fe14 =====

void FUN_00b2fe14(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711e1c(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b2fecc  FUN_00b2fecc =====

undefined ** FUN_00b2fecc(void)

{
  return &PTR_PTR_00d440c8;
}


// ===== 00b2fedc  FUN_00b2fedc =====

void FUN_00b2fedc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    FUN_006dbb58(param_1 + 0x18);
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b2ff48  FUN_00b2ff48 =====

byte * FUN_00b2ff48(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x30);
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar4 = uVar8 >> 0xe;
        bVar5 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = bVar5 | 0x80;
        pbVar6 = pbVar10;
      } while (uVar4 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x34);
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    pbVar6 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar4 = uVar8 >> 0xe;
        bVar5 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = bVar5 | 0x80;
        pbVar6 = pbVar10;
      } while (uVar4 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if (((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x20), iVar3 != 0)) {
    iVar11 = 0;
    do {
      if ((iVar11 < 0) || (*(int *)(param_1 + 0x20) <= iVar11)) {
        FUN_006fc6ec(iVar11);
      }
      uVar7 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar6 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar6;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b3011c  FUN_00b3011c =====

long FUN_00b3011c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar5 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b30234;
  }
  if ((uVar1 & 1) == 0) {
LAB_00b301dc:
    lVar5 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar5 = (long)*(int *)(param_1 + 0x20);
    puVar6 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar6 = (ulong *)(uVar3 + 7);
    }
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_00b301dc;
    lVar7 = lVar5 << 3;
    do {
      lVar2 = FUN_00b2e800(*puVar6);
      lVar7 = lVar7 + -8;
      lVar5 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x34)) * -9 + 0x1a0U >> 6);
    uVar3 = *(ulong *)(param_1 + 8);
  }
joined_r0x00b30234:
  if ((uVar3 & 1) == 0) {
    iVar4 = (int)lVar5;
  }
  else {
    lVar7 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    lVar5 = lVar7 + lVar5;
    iVar4 = (int)lVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
  }
  return lVar5;
}


// ===== 00b3025c  FUN_00b3025c =====

void FUN_00b3025c(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43a58;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


// ===== 00b3027c  FUN_00b3027c =====

void FUN_00b3027c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00711a3c((long *)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00b302c8  FUN_00b302c8 =====

void FUN_00b302c8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  if (*(long *)((long)param_1 + 0x18) != 0) {
    FUN_00711a3c();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b30310  FUN_00b30310 =====

void FUN_00b30310(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711e1c(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b303bc  FUN_00b303bc =====

undefined ** FUN_00b303bc(void)

{
  return &PTR_PTR_00d44130;
}


// ===== 00b303cc  FUN_00b303cc =====

void FUN_00b303cc(long param_1)

{
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    FUN_006dbb58(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b30430  FUN_00b30430 =====

byte * FUN_00b30430(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  void *__src;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar7 = *(uint *)(param_1 + 0x30);
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar10;
    if (0x7f < uVar7) {
      do {
        uVar4 = uVar7 >> 0xe;
        bVar5 = (byte)uVar7;
        uVar7 = uVar7 >> 7;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = bVar5 | 0x80;
        pbVar6 = pbVar10;
      } while (uVar4 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar7;
  }
  if (((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x20), iVar3 != 0)) {
    iVar11 = 0;
    do {
      if ((iVar11 < 0) || (*(int *)(param_1 + 0x20) <= iVar11)) {
        FUN_006fc6ec(iVar11);
      }
      uVar8 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)FUN_006fc2f0(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar8 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar6 = (byte *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return pbVar6;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 00b305a4  FUN_00b305a4 =====

long FUN_00b305a4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar5 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b30698;
  }
  if ((uVar1 & 1) == 0) {
LAB_00b30660:
    lVar5 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar5 = (long)*(int *)(param_1 + 0x20);
    puVar6 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar6 = (ulong *)(uVar3 + 7);
    }
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_00b30660;
    lVar7 = lVar5 << 3;
    do {
      lVar2 = FUN_00b2e800(*puVar6);
      lVar7 = lVar7 + -8;
      lVar5 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
    uVar3 = *(ulong *)(param_1 + 8);
  }
joined_r0x00b30698:
  if ((uVar3 & 1) == 0) {
    iVar4 = (int)lVar5;
  }
  else {
    lVar7 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar7 < 0) {
      lVar7 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    lVar5 = lVar7 + lVar5;
    iVar4 = (int)lVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
  }
  return lVar5;
}


// ===== 00b306c0  FUN_00b306c0 =====

void FUN_00b306c0(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d43958;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 00b306e0  FUN_00b306e0 =====

void FUN_00b306e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b306f4  FUN_00b306f4 =====

void FUN_00b306f4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b3072c  FUN_00b3072c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b3072c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b307c4  FUN_00b307c4 =====

undefined ** FUN_00b307c4(void)

{
  return &PTR_PTR_00d44190;
}


// ===== 00b307d4  FUN_00b307d4 =====

void FUN_00b307d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b30800  FUN_00b30800 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b30800(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((uVar6 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x24);
    *param_2 = 0x20;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x25);
    *param_2 = 0x28;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar6 >> 5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar3 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar3 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b309f8  FUN_00b309f8 =====

long FUN_00b309f8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar3 = 0;
  if ((uVar1 & 4) != 0) {
    lVar3 = 5;
  }
  uVar6 = NEON_cnt((ulong)(uVar1 & 0x18),1);
  lVar3 = lVar3 + (ulong)(uint)((int)uVar6 << 1);
  if ((uVar1 & 0x23) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)lVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
    iVar2 = (int)lVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
  }
  return lVar3;
}


// ===== 00b30ae8  FUN_00b30ae8 =====

void FUN_00b30ae8(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d438d8;
  param_1[1] = param_2;
  param_1[2] = 0;
  return;
}


// ===== 00b30b04  FUN_00b30b04 =====

void FUN_00b30b04(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b30b18  FUN_00b30b18 =====

void FUN_00b30b18(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b30b50  FUN_00b30b50 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b30b50(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b30bc8  FUN_00b30bc8 =====

undefined ** FUN_00b30bc8(void)

{
  return &PTR_PTR_00d441f8;
}


// ===== 00b30bd8  FUN_00b30bd8 =====

void FUN_00b30bd8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0xf) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b30c00  FUN_00b30c00 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b30c00(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((uVar6 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 3 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x24);
    pbVar8 = param_2 + 1;
    *param_2 = 0x20;
    pbVar3 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar5 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar4 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b30d94  FUN_00b30d94 =====

ulong FUN_00b30d94(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b30e94  FUN_00b30e94 =====

void FUN_00b30e94(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43898;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b30eb0  FUN_00b30eb0 =====

void FUN_00b30eb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b30ec4  FUN_00b30ec4 =====

void FUN_00b30ec4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b30efc  FUN_00b30efc =====

void FUN_00b30efc(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b30f64  FUN_00b30f64 =====

undefined ** FUN_00b30f64(void)

{
  return &PTR_PTR_00d44258;
}


// ===== 00b30f74  FUN_00b30f74 =====

void FUN_00b30f74(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b30fa0  FUN_00b30fa0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b30fa0(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x1c);
    uVar4 = (ulong)(int)uVar2;
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b310e4  FUN_00b310e4 =====

ulong FUN_00b310e4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b311c0  FUN_00b311c0 =====

void FUN_00b311c0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d436d8;
  param_1[1] = param_2;
  return;
}


// ===== 00b311d8  FUN_00b311d8 =====

void FUN_00b311d8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b311ec  FUN_00b311ec =====

void FUN_00b311ec(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b31224  FUN_00b31224 =====

void FUN_00b31224(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b31274  FUN_00b31274 =====

undefined ** FUN_00b31274(void)

{
  return &PTR_PTR_00d442b8;
}


// ===== 00b31284  FUN_00b31284 =====

void FUN_00b31284(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b312ac  FUN_00b312ac =====

byte * FUN_00b312ac(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x1c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar3 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar5 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar4 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b31408  FUN_00b31408 =====

ulong FUN_00b31408(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b314b8  FUN_00b314b8 =====

void FUN_00b314b8(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d43998;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


// ===== 00b314d4  FUN_00b314d4 =====

void FUN_00b314d4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b314e8  FUN_00b314e8 =====

void FUN_00b314e8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b31520  FUN_00b31520 =====

void FUN_00b31520(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b3155c  FUN_00b3155c =====

undefined ** FUN_00b3155c(void)

{
  return &PTR_PTR_00d44318;
}


// ===== 00b3156c  FUN_00b3156c =====

void FUN_00b3156c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b31588  FUN_00b31588 =====

undefined1 * FUN_00b31588(long param_1,undefined1 *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    *param_2 = 8;
    puVar2 = param_2 + 2;
    param_2[1] = uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      __src = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      __src = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)puVar2 < (long)(int)uVar3) {
      puVar2 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar3,puVar2);
      return puVar2;
    }
    memcpy(puVar2,__src,uVar3 & 0xffffffff);
    puVar2 = puVar2 + (int)uVar3;
  }
  return puVar2;
}


// ===== 00b31668  FUN_00b31668 =====

long FUN_00b31668(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = ((ulong)*(uint *)(param_1 + 0x10) & 1) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)lVar1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
    iVar2 = (int)lVar1;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar1;
  }
  return lVar1;
}


// ===== 00b316b0  FUN_00b316b0 =====

void FUN_00b316b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d43798;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  return;
}


// ===== 00b316d0  FUN_00b316d0 =====

void FUN_00b316d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b316e4  FUN_00b316e4 =====

void FUN_00b316e4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b3171c  FUN_00b3171c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b3171c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b317e0  FUN_00b317e0 =====

undefined ** FUN_00b317e0(void)

{
  return &PTR_PTR_00d44370;
}


// ===== 00b317f0  FUN_00b317f0 =====

void FUN_00b317f0(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b31820  FUN_00b31820 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b31820(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 8;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x1c);
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar9;
      } while (uVar2 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x18;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x24);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x20;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x28;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x30;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x38;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x40;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar5 = (ulong)(int)uVar1;
    pbVar9 = param_2 + 1;
    *param_2 = 0x48;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar1) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b31c24  FUN_00b31c24 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b31c24(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((uVar1 >> 8 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)lVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    lVar3 = lVar5 + lVar3;
    iVar2 = (int)lVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
  }
  return lVar3;
}


// ===== 00b31ddc  FUN_00b31ddc =====

void FUN_00b31ddc(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d43758;
  param_1[1] = param_2;
  return;
}


// ===== 00b31df4  FUN_00b31df4 =====

void FUN_00b31df4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b31e08  FUN_00b31e08 =====

void FUN_00b31e08(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b31e40  FUN_00b31e40 =====

void FUN_00b31e40(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b31e90  FUN_00b31e90 =====

undefined ** FUN_00b31e90(void)

{
  return &PTR_PTR_00d443d8;
}


// ===== 00b31ea0  FUN_00b31ea0 =====

void FUN_00b31ea0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b31ec8  FUN_00b31ec8 =====

byte * FUN_00b31ec8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar4 = (ulong)(int)uVar1;
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = uVar4;
    pbVar3 = pbVar8;
    if (0x7f < uVar1) {
      do {
        uVar4 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = (byte)uVar6 | 0x80;
        uVar6 = uVar4;
        pbVar3 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if ((uVar5 >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x1c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar4 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b3202c  FUN_00b3202c =====

long FUN_00b3202c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)lVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
    iVar2 = (int)lVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
  }
  return lVar3;
}


// ===== 00b320e0  FUN_00b320e0 =====

undefined8 * FUN_00b320e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00d435d8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1[2] = uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 00b32160  FUN_00b32160 =====

undefined8 * FUN_00b32160(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x28);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00d437d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  uVar2 = *(ulong *)(param_2 + 0x18);
  if ((uVar2 & 3) != 0) {
    uVar2 = FUN_00713e9c((ulong *)(param_2 + 0x18),param_1);
  }
  puVar1[3] = uVar2;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar1;
}


// ===== 00b3220c  FUN_00b3220c =====

void FUN_00b3220c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *****ppppplVar2;
  bool bVar3;
  long ****local_48;
  ulong local_40;
  byte bStack_31;
  
  *param_1 = &PTR_FUN_00d44450;
  (**(code **)(*param_2 + 0x10))
            (&local_48,param_2,"WebRTC-RtcEventLogEncodeNetEqSetMinimumDelayKillSwitch",0x36);
  uVar1 = local_40;
  if (-1 < (char)bStack_31) {
    uVar1 = (ulong)bStack_31;
  }
  if (uVar1 < 7) {
    bVar3 = false;
  }
  else {
    ppppplVar2 = (long *****)local_48;
    if (-1 < (char)bStack_31) {
      ppppplVar2 = &local_48;
    }
    bVar3 = *(int *)ppppplVar2 == 0x62616e45 && *(int *)((long)ppppplVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *(bool *)(param_1 + 1) = bVar3;
  (**(code **)(*param_2 + 0x10))
            (&local_48,param_2,"WebRTC-RtcEventLogEncodeDependencyDescriptor",0x2c);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 8) {
    bVar3 = true;
  }
  else {
    ppppplVar2 = (long *****)local_48;
    if (-1 < (char)bStack_31) {
      ppppplVar2 = &local_48;
    }
    bVar3 = *ppppplVar2 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *(bool *)((long)param_1 + 9) = bVar3;
  return;
}


// ===== 00b32370  FUN_00b32370 =====

void FUN_00b32370(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_330 [768];
  
  memset(auStack_330,0xaa,0x300);
  FUN_00b40a68(auStack_330,0);
  lVar1 = FUN_00b32424(auStack_330);
  *(undefined4 *)(lVar1 + 0x28) = 2;
  *(long *)(lVar1 + 0x18) = param_3 / 1000;
  *(long *)(lVar1 + 0x20) = param_4 / 1000;
  *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 7;
  FUN_006dca58(param_1,auStack_330);
  FUN_00b40ba8(auStack_330);
  return;
}


// ===== 00b32424  FUN_00b32424 =====

ulong FUN_00b32424(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0xc0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 200) = 1;
    uVar3 = FUN_00b3e114(uVar7);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 200) == 0) {
        *(undefined4 *)(param_1 + 200) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0xc0,1,uVar7);
        uVar7 = FUN_00b3e114(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0xc0) + 3) = 2;
        *(undefined4 *)(param_1 + 200) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 200);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0xc0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 200) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3253c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 200);
      *(int *)(param_1 + 200) = iVar1 + 1;
      uVar7 = FUN_00b3e114(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3253c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
  return uVar7;
}


// ===== 00b32560  FUN_00b32560 =====

void FUN_00b32560(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_330 [768];
  
  memset(auStack_330,0xaa,0x300);
  FUN_00b40a68(auStack_330,0);
  lVar1 = FUN_00b325fc(auStack_330);
  *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 1;
  *(long *)(lVar1 + 0x18) = param_3 / 1000;
  FUN_006dca58(param_1,auStack_330);
  FUN_00b40ba8(auStack_330);
  return;
}


// ===== 00b325fc  FUN_00b325fc =====

ulong FUN_00b325fc(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0xd8);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 1;
    uVar3 = FUN_00b3e164(uVar7);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        *(undefined4 *)(param_1 + 0xe0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0xd8,1,uVar7);
        uVar7 = FUN_00b3e164(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0xd8) + 3) = 2;
        *(undefined4 *)(param_1 + 0xe0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0xe0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0xd8,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0xe0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b32714;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar1 + 1;
      uVar7 = FUN_00b3e164(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b32714:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  return uVar7;
}


// ===== 00b32738  FUN_00b32738 =====

void FUN_00b32738(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5,long *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined8 ***pppuVar19;
  undefined8 **ppuVar21;
  undefined4 local_5dc;
  undefined8 *local_5d8;
  undefined8 ***local_5d0;
  undefined8 ***local_5c8;
  undefined8 ***local_5c0;
  undefined8 ***local_5b8;
  undefined8 ***local_5b0;
  undefined8 ***local_5a8;
  undefined8 **local_5a0;
  undefined8 *local_598;
  undefined8 local_590;
  undefined8 *local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 ***local_570;
  undefined8 ***local_568;
  undefined8 ***local_560;
  undefined8 ***local_558;
  undefined8 ***local_550;
  undefined8 ***local_548;
  undefined8 ***local_540;
  undefined8 ***local_538;
  undefined8 ***local_530;
  undefined8 ***local_528;
  undefined8 ***local_520;
  undefined8 ***local_518;
  undefined8 ***local_510;
  undefined8 ***local_508;
  undefined8 ***local_500;
  undefined8 ***local_4f8;
  undefined8 ***local_4f0;
  undefined8 ***local_4e8;
  undefined8 ***local_4e0;
  undefined8 ***local_4d8;
  undefined8 ***local_4d0;
  undefined8 ***local_4c8;
  undefined8 ***local_4c0;
  undefined8 ***local_4b8;
  undefined8 ***local_4b0;
  undefined8 ***local_4a8;
  undefined8 ***local_4a0;
  undefined8 **local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined8 ***local_480;
  undefined8 ***local_478;
  undefined8 ***local_470;
  undefined8 ***local_468;
  undefined8 ***local_460;
  undefined8 ***local_458;
  undefined8 ***local_450;
  undefined8 ***local_448;
  undefined8 ***local_440;
  undefined8 ***local_438;
  undefined8 ***local_430;
  undefined8 ***local_428;
  undefined8 ***local_420;
  undefined8 ***local_418;
  undefined8 ***local_410;
  undefined8 ***local_408;
  undefined8 ***local_400;
  undefined8 ***local_3f8;
  undefined8 ***local_3f0;
  undefined8 ***local_3e8;
  undefined8 ***local_3e0;
  undefined8 ***local_3d8;
  undefined8 ***local_3d0;
  undefined8 ***local_3c8;
  undefined8 ***local_3c0;
  undefined8 ***local_3b8;
  undefined8 ***local_3b0;
  undefined8 ***local_3a8;
  undefined8 ***local_3a0;
  undefined8 ***local_398;
  undefined8 ***local_390;
  undefined8 ***local_388;
  undefined8 ***local_380;
  undefined1 auStack_378 [775];
  undefined1 uStack_71;
  undefined8 **local_70 [2];
  undefined8 ***pppuVar20;
  
  memset(auStack_378,0xaa,0x300);
  pppuVar10 = (undefined8 ***)FUN_00b40a68(auStack_378,0);
  local_388 = (undefined8 ***)0x0;
  local_380 = (undefined8 ***)0x0;
  local_3a8 = (undefined8 ***)0x0;
  local_3a0 = (undefined8 ***)0x0;
  local_398 = (undefined8 ***)0x0;
  local_390 = (undefined8 ***)0x0;
  local_3b8 = (undefined8 ***)0x0;
  local_3b0 = (undefined8 ***)0x0;
  local_3d8 = (undefined8 ***)0x0;
  local_3d0 = (undefined8 ***)0x0;
  local_3c8 = (undefined8 ***)0x0;
  local_3c0 = (undefined8 ***)0x0;
  local_3e8 = (undefined8 ***)0x0;
  local_3e0 = (undefined8 ***)0x0;
  local_408 = (undefined8 ***)0x0;
  local_400 = (undefined8 ***)0x0;
  local_3f8 = (undefined8 ***)0x0;
  local_3f0 = (undefined8 ***)0x0;
  local_418 = (undefined8 ***)0x0;
  local_410 = (undefined8 ***)0x0;
  local_438 = (undefined8 ***)0x0;
  local_430 = (undefined8 ***)0x0;
  local_428 = (undefined8 ***)0x0;
  local_420 = (undefined8 ***)0x0;
  local_448 = (undefined8 ***)0x0;
  local_440 = (undefined8 ***)0x0;
  local_468 = (undefined8 ***)0x0;
  local_460 = (undefined8 ***)0x0;
  local_458 = (undefined8 ***)0x0;
  local_450 = (undefined8 ***)0x0;
  local_480 = (undefined8 ***)0x0;
  local_478 = (undefined8 ***)0x0;
  local_470 = (undefined8 ***)0x0;
  local_490 = (undefined8 *)0x0;
  local_488 = 0;
  local_4a0 = (undefined8 ***)0x0;
  local_4b0 = (undefined8 ***)0x0;
  local_4a8 = (undefined8 ***)0x0;
  local_4c8 = (undefined8 ***)0x0;
  local_4c0 = (undefined8 ***)0x0;
  local_4b8 = (undefined8 ***)0x0;
  local_4d8 = (undefined8 ***)0x0;
  local_4d0 = (undefined8 ***)0x0;
  local_4f8 = (undefined8 ***)0x0;
  local_4f0 = (undefined8 ***)0x0;
  local_4e8 = (undefined8 ***)0x0;
  local_4e0 = (undefined8 ***)0x0;
  local_508 = (undefined8 ***)0x0;
  local_500 = (undefined8 ***)0x0;
  local_528 = (undefined8 ***)0x0;
  local_520 = (undefined8 ***)0x0;
  local_518 = (undefined8 ***)0x0;
  local_510 = (undefined8 ***)0x0;
  local_538 = (undefined8 ***)0x0;
  local_530 = (undefined8 ***)0x0;
  local_558 = (undefined8 ***)0x0;
  local_550 = (undefined8 ***)0x0;
  local_548 = (undefined8 ***)0x0;
  local_540 = (undefined8 ***)0x0;
  local_570 = (undefined8 ***)0x0;
  local_568 = (undefined8 ***)0x0;
  local_560 = (undefined8 ***)0x0;
  local_580 = 0;
  local_578 = 0;
  local_590 = 0;
  local_598 = (undefined8 *)0x0;
  local_5b8 = (undefined8 ***)0x0;
  local_5b0 = (undefined8 ***)0x0;
  local_5a8 = (undefined8 ***)0x0;
  local_5d0 = (undefined8 ***)0x0;
  local_5c8 = (undefined8 ***)0x0;
  local_5c0 = (undefined8 ***)0x0;
  local_5a0 = &local_598;
  local_588 = &local_580;
  local_498 = &local_490;
  if (param_4 != param_6) {
    do {
      pppuVar10 = (undefined8 ***)(**(code **)(*(long *)*param_4 + 0x10))();
      switch((ulong)pppuVar10 & 0xffffffff) {
      case 0:
        local_70[0] = (undefined8 **)*param_4;
        if (local_388 < local_380) {
          if (local_388 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_388 = local_70[0];
          local_388 = local_388 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e1b4(&local_390,local_70);
          local_388 = pppuVar10;
        }
        break;
      case 1:
        local_70[0] = (undefined8 **)*param_4;
        if (local_520 < local_518) {
          if (local_520 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_520 = local_70[0];
          local_520 = local_520 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3ef50(&local_528,local_70);
          local_520 = pppuVar10;
        }
        break;
      case 2:
        local_70[0] = (undefined8 **)*param_4;
        if (local_538 < local_530) {
          if (local_538 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_538 = local_70[0];
          local_538 = local_538 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f05c(&local_540,local_70);
          local_538 = pppuVar10;
        }
        break;
      case 3:
        local_70[0] = (undefined8 **)*param_4;
        if (local_3a0 < local_398) {
          if (local_3a0 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_3a0 = local_70[0];
          local_3a0 = local_3a0 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e2c0(&local_3a8,local_70);
          local_3a0 = pppuVar10;
        }
        break;
      case 4:
        local_70[0] = (undefined8 **)*param_4;
        if (local_3b8 < local_3b0) {
          if (local_3b8 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_3b8 = local_70[0];
          local_3b8 = local_3b8 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e3cc(&local_3c0,local_70);
          local_3b8 = pppuVar10;
        }
        break;
      case 5:
        local_70[0] = (undefined8 **)*param_4;
        if (local_3e8 < local_3e0) {
          if (local_3e8 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_3e8 = local_70[0];
          local_3e8 = local_3e8 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e4d8(&local_3f0,local_70);
          local_3e8 = pppuVar10;
        }
        break;
      case 6:
        local_70[0] = (undefined8 **)*param_4;
        if (local_400 < local_3f8) {
          if (local_400 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_400 = local_70[0];
          local_400 = local_400 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e5e4(&local_408,local_70);
          local_400 = pppuVar10;
        }
        break;
      case 7:
        local_70[0] = (undefined8 **)*param_4;
        if (local_418 < local_410) {
          if (local_418 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_418 = local_70[0];
          local_418 = local_418 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e6f0(&local_420,local_70);
          local_418 = pppuVar10;
        }
        break;
      case 8:
        local_70[0] = (undefined8 **)*param_4;
        if (local_430 < local_428) {
          if (local_430 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_430 = local_70[0];
          local_430 = local_430 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e7fc(&local_438,local_70);
          local_430 = pppuVar10;
        }
        break;
      case 9:
        local_70[0] = (undefined8 **)*param_4;
        if (local_448 < local_440) {
          if (local_448 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_448 = local_70[0];
          local_448 = local_448 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3e908(&local_450,local_70);
          local_448 = pppuVar10;
        }
        break;
      case 10:
        local_70[0] = (undefined8 **)*param_4;
        if (local_460 < local_458) {
          if (local_460 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_460 = local_70[0];
          local_460 = local_460 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3ea14(&local_468,local_70);
          local_460 = pppuVar10;
        }
        break;
      case 0xb:
        local_70[0] = (undefined8 **)*param_4;
        if (local_478 < local_470) {
          if (local_478 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_478 = local_70[0];
          local_478 = local_478 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3eb20(&local_480,local_70);
          local_478 = pppuVar10;
        }
        break;
      case 0xc:
        local_70[0] = (undefined8 **)*param_4;
        if (local_4c0 < local_4b8) {
          if (local_4c0 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_4c0 = local_70[0];
          local_4c0 = local_4c0 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f7b0(&local_4c8,local_70);
          local_4c0 = pppuVar10;
        }
        break;
      case 0xd:
        local_70[0] = (undefined8 **)*param_4;
        if (local_4a8 < local_4a0) {
          if (local_4a8 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_4a8 = local_70[0];
          local_4a8 = local_4a8 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f8bc(&local_4b0,local_70);
          local_4a8 = pppuVar10;
        }
        break;
      case 0xe:
        local_70[0] = (undefined8 **)*param_4;
        if (local_4d8 < local_4d0) {
          if (local_4d8 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_4d8 = local_70[0];
          local_4d8 = local_4d8 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3ec2c(&local_4e0,local_70);
          local_4d8 = pppuVar10;
        }
        break;
      case 0xf:
        local_70[0] = (undefined8 **)*param_4;
        if (local_4f0 < local_4e8) {
          if (local_4f0 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_4f0 = local_70[0];
          local_4f0 = local_4f0 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3ed38(&local_4f8,local_70);
          local_4f0 = pppuVar10;
        }
        break;
      case 0x10:
        local_70[0] = (undefined8 **)*param_4;
        if (local_508 < local_500) {
          if (local_508 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_508 = local_70[0];
          local_508 = local_508 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3ee44(&local_510,local_70);
          local_508 = pppuVar10;
        }
        break;
      case 0x11:
        local_70[0] = (undefined8 **)*param_4;
        if (local_550 < local_548) {
          if (local_550 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_550 = local_70[0];
          local_550 = local_550 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f168(&local_558,local_70);
          local_550 = pppuVar10;
        }
        break;
      case 0x12:
        local_70[0] = (undefined8 **)*param_4;
        if (local_568 < local_560) {
          if (local_568 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_568 = local_70[0];
          local_568 = local_568 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f274(&local_570,local_70);
          local_568 = pppuVar10;
        }
        break;
      case 0x13:
        local_5d8 = (undefined8 *)*param_4;
        local_70[0] = (undefined8 **)&local_5dc;
        local_5dc = *(undefined4 *)((long)local_5d8 + 0x1c);
        pppuVar11 = (undefined8 ***)
                    FUN_00b406f4(0,&local_588,&local_588,&DAT_001f94c3,local_70,&uStack_71);
        ppuVar21 = pppuVar11[6];
        pppuVar10 = pppuVar11;
        if (ppuVar21 < pppuVar11[7]) {
LAB_00b32d0c:
          if (ppuVar21 == (undefined8 **)0x0) {
LAB_00b335a8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *ppuVar21 = local_5d8;
          pppuVar10[6] = ppuVar21 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f380(pppuVar11 + 5,&local_5d8);
          pppuVar11[6] = pppuVar10;
        }
        break;
      case 0x14:
        local_5d8 = (undefined8 *)*param_4;
        local_70[0] = (undefined8 **)&local_5dc;
        local_5dc = *(undefined4 *)((long)local_5d8 + 0x1c);
        pppuVar11 = (undefined8 ***)
                    FUN_00b40800(0,&local_5a0,&local_5a0,&DAT_001f94c3,local_70,&uStack_71);
        ppuVar21 = pppuVar11[6];
        pppuVar10 = pppuVar11;
        if (ppuVar21 < pppuVar11[7]) goto LAB_00b32d0c;
        pppuVar10 = (undefined8 ***)FUN_00b3f48c(pppuVar11 + 5,&local_5d8);
        pppuVar11[6] = pppuVar10;
        break;
      case 0x15:
        local_70[0] = (undefined8 **)*param_4;
        if (local_5b0 < local_5a8) {
          if (local_5b0 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_5b0 = local_70[0];
          local_5b0 = local_5b0 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f598(&local_5b8,local_70);
          local_5b0 = pppuVar10;
        }
        break;
      case 0x16:
        local_70[0] = (undefined8 **)*param_4;
        if (local_5c8 < local_5c0) {
          if (local_5c8 == (undefined8 ***)0x0) goto LAB_00b335a8;
          *local_5c8 = local_70[0];
          local_5c8 = local_5c8 + 1;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3f6a4(&local_5d0,local_70);
          local_5c8 = pppuVar10;
        }
        break;
      case 0x17:
        local_5d8 = (undefined8 *)*param_4;
        local_70[0] = (undefined8 **)&local_5dc;
        local_5dc = *(undefined4 *)(local_5d8 + 3);
        pppuVar11 = (undefined8 ***)
                    FUN_00b4090c(0,&local_498,&local_498,&DAT_001f94c3,local_70,&uStack_71);
        ppuVar21 = pppuVar11[6];
        pppuVar10 = pppuVar11;
        if (ppuVar21 < pppuVar11[7]) goto LAB_00b32d0c;
        pppuVar10 = (undefined8 ***)FUN_00b3f9c8(pppuVar11 + 5,&local_5d8);
        pppuVar11[6] = pppuVar10;
        break;
      case 0x18:
        local_70[0] = (undefined8 **)*param_4;
        if (local_3d0 < local_3c8) {
          if (local_3d0 == (undefined8 ***)0x0) goto LAB_00b335a8;
          pppuVar10 = local_3d0 + 1;
          *local_3d0 = local_70[0];
          local_3d0 = pppuVar10;
        }
        else {
          pppuVar10 = (undefined8 ***)FUN_00b3fad4(&local_3d8,local_70);
          local_3d0 = pppuVar10;
        }
      }
      param_4 = param_4 + 1;
      if ((long)param_4 - *param_3 == 0x1000) {
        param_3 = param_3 + 1;
        param_4 = (long *)*param_3;
      }
    } while (param_4 != param_6);
  }
  if ((long)local_388 - (long)local_390 != 0) {
    pppuVar11 = (undefined8 ***)((long)local_390 + ((long)local_388 - (long)local_390));
    pppuVar19 = local_390;
    do {
      pppuVar20 = pppuVar19 + 1;
      ppuVar21 = *pppuVar19;
      pppuVar10 = (undefined8 ***)FUN_00b38dbc(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(pppuVar10 + 2);
      *(uint *)(pppuVar10 + 2) = uVar2 | 1;
      pppuVar10[3] = (undefined8 **)((long)puVar14 / 1000);
      uVar5 = *(undefined1 *)(ppuVar21 + 2);
      *(uint *)(pppuVar10 + 2) = uVar2 | 3;
      *(undefined1 *)(pppuVar10 + 4) = uVar5;
      pppuVar19 = pppuVar20;
    } while (pppuVar20 != pppuVar11);
  }
  pppuVar11 = (undefined8 ***)0x0;
  if ((long)local_3a0 - (long)local_3a8 != 0) {
    pppuVar11 = local_3a8;
  }
  uVar12 = FUN_00b34050(pppuVar10,pppuVar11,(long)local_3a0 - (long)local_3a8 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_3b8 - (long)local_3c0 != 0) {
    pppuVar10 = local_3c0;
  }
  uVar12 = FUN_00b34a8c(uVar12,pppuVar10,(long)local_3b8 - (long)local_3c0 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_3e8 - (long)local_3f0 != 0) {
    pppuVar10 = local_3f0;
  }
  uVar12 = FUN_00b34e6c(uVar12,pppuVar10,(long)local_3e8 - (long)local_3f0 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_400 - (long)local_408 != 0) {
    pppuVar10 = local_408;
  }
  FUN_00b34f78(uVar12,pppuVar10,(long)local_400 - (long)local_408 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_3d0 - (long)local_3d8 != 0) {
    pppuVar10 = local_3d8;
  }
  uVar12 = FUN_00b35070(param_2,pppuVar10,(long)local_3d0 - (long)local_3d8 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_418 - (long)local_420 != 0) {
    pppuVar10 = local_420;
  }
  uVar12 = FUN_00b3554c(uVar12,pppuVar10,(long)local_418 - (long)local_420 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_430 - (long)local_438 != 0) {
    pppuVar10 = local_438;
  }
  uVar12 = FUN_00b35a38(uVar12,pppuVar10,(long)local_430 - (long)local_438 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_448 - (long)local_450 != 0) {
    pppuVar10 = local_450;
  }
  lVar13 = FUN_00b36018(uVar12,pppuVar10,(long)local_448 - (long)local_450 >> 3,auStack_378);
  if ((long)local_460 - (long)local_468 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_468 + ((long)local_460 - (long)local_468));
    pppuVar11 = local_468;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b39c40(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar3 = *(uint *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      iVar1 = 0;
      if (uVar3 < 5) {
        iVar1 = uVar3 + 1;
      }
      *(int *)(lVar13 + 0x20) = iVar1;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  ppuVar21 = local_498;
  if ((long)local_478 - (long)local_480 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_480 + ((long)local_478 - (long)local_480));
    pppuVar11 = local_480;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b39d7c(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar5 = *(undefined1 *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      *(undefined1 *)(lVar13 + 0x20) = uVar5;
      ppuVar21 = local_498;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  while (ppuVar21 != &local_490) {
    lVar6 = (long)ppuVar21[6] - (long)ppuVar21[5];
    puVar14 = (undefined8 *)0x0;
    if (lVar6 != 0) {
      puVar14 = ppuVar21[5];
    }
    lVar13 = FUN_00b368d8(lVar13,puVar14,lVar6 >> 3,auStack_378);
    ppuVar7 = (undefined8 **)ppuVar21[1];
    ppuVar18 = ppuVar21;
    if ((undefined8 **)ppuVar21[1] == (undefined8 **)0x0) {
      do {
        ppuVar21 = (undefined8 **)ppuVar18[2];
        bVar9 = ppuVar18 != (undefined8 **)*ppuVar21;
        ppuVar18 = ppuVar21;
      } while (bVar9);
    }
    else {
      do {
        ppuVar21 = ppuVar7;
        ppuVar7 = (undefined8 **)*ppuVar21;
      } while ((undefined8 **)*ppuVar21 != (undefined8 **)0x0);
    }
  }
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_4c0 - (long)local_4c8 != 0) {
    pppuVar10 = local_4c8;
  }
  lVar13 = FUN_00b37134(lVar13,pppuVar10,(long)local_4c0 - (long)local_4c8 >> 3,auStack_378);
  if ((long)local_4a8 - (long)local_4b0 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_4b0 + ((long)local_4a8 - (long)local_4b0));
    pppuVar11 = local_4b0;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b3dfcc(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar3 = *(uint *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      iVar1 = 0;
      if (uVar3 < 4) {
        iVar1 = uVar3 + 1;
      }
      *(int *)(lVar13 + 0x20) = iVar1;
      uVar4 = *(undefined4 *)((long)ppuVar21 + 0x14);
      *(uint *)(lVar13 + 0x10) = uVar2 | 7;
      *(undefined4 *)(lVar13 + 0x24) = uVar4;
      uVar4 = *(undefined4 *)(ppuVar21 + 3);
      *(uint *)(lVar13 + 0x10) = uVar2 | 0xf;
      *(undefined4 *)(lVar13 + 0x28) = uVar4;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  if ((long)local_4d8 - (long)local_4e0 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_4e0 + ((long)local_4d8 - (long)local_4e0));
    pppuVar11 = local_4e0;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b39eb8(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar4 = *(undefined4 *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar13 + 0x20) = uVar4;
      uVar4 = *(undefined4 *)((long)ppuVar21 + 0x14);
      *(uint *)(lVar13 + 0x10) = uVar2 | 7;
      *(undefined4 *)(lVar13 + 0x24) = uVar4;
      uVar4 = *(undefined4 *)(ppuVar21 + 3);
      *(uint *)(lVar13 + 0x10) = uVar2 | 0xf;
      *(undefined4 *)(lVar13 + 0x28) = uVar4;
      uVar4 = *(undefined4 *)((long)ppuVar21 + 0x1c);
      *(uint *)(lVar13 + 0x10) = uVar2 | 0x1f;
      *(undefined4 *)(lVar13 + 0x2c) = uVar4;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  if ((long)local_4f0 - (long)local_4f8 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_4f8 + ((long)local_4f0 - (long)local_4f8));
    pppuVar11 = local_4f8;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b39ff4(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar4 = *(undefined4 *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar13 + 0x20) = uVar4;
      uVar3 = *(uint *)((long)ppuVar21 + 0x14);
      *(uint *)(lVar13 + 0x10) = uVar2 | 7;
      iVar1 = 0;
      if (uVar3 < 3) {
        iVar1 = uVar3 + 1;
      }
      *(int *)(lVar13 + 0x24) = iVar1;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  if ((long)local_508 - (long)local_510 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_510 + ((long)local_508 - (long)local_510));
    pppuVar11 = local_510;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b3a130(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar4 = *(undefined4 *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar13 + 0x20) = uVar4;
      uVar4 = *(undefined4 *)((long)ppuVar21 + 0x14);
      *(uint *)(lVar13 + 0x10) = uVar2 | 7;
      *(undefined4 *)(lVar13 + 0x24) = uVar4;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  if ((long)local_520 - (long)local_528 != 0) {
    pppuVar10 = (undefined8 ***)((long)local_528 + ((long)local_520 - (long)local_528));
    pppuVar11 = local_528;
    do {
      pppuVar19 = pppuVar11 + 1;
      ppuVar21 = *pppuVar11;
      lVar13 = FUN_00b3a26c(auStack_378);
      puVar14 = ppuVar21[1];
      uVar2 = *(uint *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x10) = uVar2 | 1;
      *(long *)(lVar13 + 0x18) = (long)puVar14 / 1000;
      uVar5 = *(undefined1 *)(ppuVar21 + 2);
      *(uint *)(lVar13 + 0x10) = uVar2 | 3;
      *(undefined1 *)(lVar13 + 0x20) = uVar5;
      uVar4 = *(undefined4 *)((long)ppuVar21 + 0x14);
      *(uint *)(lVar13 + 0x10) = uVar2 | 7;
      *(undefined4 *)(lVar13 + 0x24) = uVar4;
      pppuVar11 = pppuVar19;
    } while (pppuVar19 != pppuVar10);
  }
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_538 - (long)local_540 != 0) {
    pppuVar10 = local_540;
  }
  uVar12 = FUN_00b372c0(lVar13,pppuVar10,(long)local_538 - (long)local_540 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_550 - (long)local_558 != 0) {
    pppuVar10 = local_558;
  }
  uVar12 = FUN_00b37988(uVar12,pppuVar10,(long)local_550 - (long)local_558 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_568 - (long)local_570 != 0) {
    pppuVar10 = local_570;
  }
  uVar12 = FUN_00b3828c(uVar12,pppuVar10,(long)local_568 - (long)local_570 >> 3,auStack_378);
  puVar14 = local_588;
  while (ppuVar21 = local_5a0, puVar14 != &local_580) {
    uVar12 = FUN_00b3bfe0(auStack_378);
    uVar12 = FUN_00b3a75c(param_2,puVar14 + 5,uVar12);
    puVar8 = (undefined8 *)puVar14[1];
    puVar17 = puVar14;
    if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
      do {
        puVar14 = (undefined8 *)puVar17[2];
        bVar9 = puVar17 != (undefined8 *)*puVar14;
        puVar17 = puVar14;
      } while (bVar9);
    }
    else {
      do {
        puVar14 = puVar8;
        puVar8 = (undefined8 *)*puVar14;
      } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
    }
  }
  while (ppuVar21 != &local_598) {
    uVar12 = FUN_00b3dadc(auStack_378);
    uVar12 = FUN_00b3c258(param_2,ppuVar21 + 5,uVar12);
    ppuVar7 = (undefined8 **)ppuVar21[1];
    ppuVar18 = ppuVar21;
    if ((undefined8 **)ppuVar21[1] == (undefined8 **)0x0) {
      do {
        ppuVar21 = (undefined8 **)ppuVar18[2];
        bVar9 = ppuVar18 != (undefined8 **)*ppuVar21;
        ppuVar18 = ppuVar21;
      } while (bVar9);
    }
    else {
      do {
        ppuVar21 = ppuVar7;
        ppuVar7 = (undefined8 **)*ppuVar21;
      } while ((undefined8 **)*ppuVar21 != (undefined8 **)0x0);
    }
  }
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_5b0 - (long)local_5b8 != 0) {
    pppuVar10 = local_5b8;
  }
  uVar12 = FUN_00b38b90(uVar12,pppuVar10,(long)local_5b0 - (long)local_5b8 >> 3,auStack_378);
  pppuVar10 = (undefined8 ***)0x0;
  if ((long)local_5c8 - (long)local_5d0 != 0) {
    pppuVar10 = local_5d0;
  }
  FUN_00b38cb0(uVar12,pppuVar10,(long)local_5c8 - (long)local_5d0 >> 3,auStack_378);
  if (local_5d0 == (undefined8 ***)0x0) {
LAB_00b33538:
    if (local_5b8 == (undefined8 ***)0x0) {
LAB_00b335cc:
      local_5b8 = &local_5a0;
      FUN_00b40600(&local_5b8,local_598);
      local_5a0 = &local_588;
      FUN_00b4050c(&local_5a0,local_580);
      if (local_570 == (undefined8 ***)0x0) {
LAB_00b33674:
        if (local_558 == (undefined8 ***)0x0) {
LAB_00b336f4:
          if (local_540 == (undefined8 ***)0x0) {
LAB_00b33774:
            if (local_528 == (undefined8 ***)0x0) {
LAB_00b337f4:
              if (local_510 == (undefined8 ***)0x0) {
LAB_00b33874:
                if (local_4f8 == (undefined8 ***)0x0) {
LAB_00b338f4:
                  if (local_4e0 == (undefined8 ***)0x0) {
LAB_00b33974:
                    if (local_4c8 == (undefined8 ***)0x0) {
LAB_00b339f4:
                      if (local_4b0 == (undefined8 ***)0x0) {
LAB_00b33a74:
                        local_4b0 = &local_498;
                        FUN_00b40418(&local_4b0,local_490);
                        if (local_480 == (undefined8 ***)0x0) {
LAB_00b33b08:
                          if (local_468 == (undefined8 ***)0x0) {
LAB_00b33b88:
                            if (local_450 == (undefined8 ***)0x0) {
LAB_00b33c08:
                              if (local_438 == (undefined8 ***)0x0) {
LAB_00b33c88:
                                if (local_420 == (undefined8 ***)0x0) {
LAB_00b33d08:
                                  if (local_408 == (undefined8 ***)0x0) {
LAB_00b33d88:
                                    if (local_3f0 == (undefined8 ***)0x0) {
LAB_00b33e08:
                                      if (local_3d8 == (undefined8 ***)0x0) {
LAB_00b33e88:
                                        if (local_3c0 == (undefined8 ***)0x0) {
LAB_00b33f08:
                                          if (local_3a8 == (undefined8 ***)0x0) {
LAB_00b33f88:
                                            if (local_390 == (undefined8 ***)0x0) {
LAB_00b34018:
                                              FUN_006dca58(param_1,auStack_378);
                                              FUN_00b40ba8(auStack_378);
                                              return;
                                            }
                                            uVar16 = (ulong)((long)local_388 +
                                                            (-8 - ((long)local_388 << 0x3d))) >> 3;
                                            uVar15 = (ulong)(((long)local_390 - (long)local_388 <<
                                                             0x3d) - ((long)local_390 -
                                                                     (long)local_388)) >> 3;
                                            if (uVar16 <= uVar15) {
                                              uVar15 = uVar16;
                                            }
                                            pppuVar10 = local_388;
                                            if ((1 < uVar15) &&
                                               ((((int)local_390 - (int)local_388 | -(int)local_388)
                                                & 7U) == 0)) {
                                              uVar15 = uVar15 & 0x1ffffffffffffffe;
                                              pppuVar10 = local_388 + -uVar15;
                                              do {
                                                uVar15 = uVar15 - 2;
                                              } while (uVar15 != 0);
                                            }
                                            do {
                                              if (pppuVar10 == local_390) {
                                                local_388 = local_390;
                                                operator_delete(local_390);
                                                goto LAB_00b34018;
                                              }
                                              pppuVar10 = pppuVar10 + -1;
                                            } while (pppuVar10 != (undefined8 ***)0x0);
                                          }
                                          else {
                                            uVar16 = (ulong)((long)local_3a0 +
                                                            (-8 - ((long)local_3a0 << 0x3d))) >> 3;
                                            uVar15 = (ulong)(((long)local_3a8 - (long)local_3a0 <<
                                                             0x3d) - ((long)local_3a8 -
                                                                     (long)local_3a0)) >> 3;
                                            if (uVar16 <= uVar15) {
                                              uVar15 = uVar16;
                                            }
                                            pppuVar10 = local_3a0;
                                            if ((1 < uVar15) &&
                                               ((((int)local_3a8 - (int)local_3a0 | -(int)local_3a0)
                                                & 7U) == 0)) {
                                              uVar15 = uVar15 & 0x1ffffffffffffffe;
                                              pppuVar10 = local_3a0 + -uVar15;
                                              do {
                                                uVar15 = uVar15 - 2;
                                              } while (uVar15 != 0);
                                            }
                                            do {
                                              if (pppuVar10 == local_3a8) {
                                                local_3a0 = local_3a8;
                                                operator_delete(local_3a8);
                                                goto LAB_00b33f88;
                                              }
                                              pppuVar10 = pppuVar10 + -1;
                                            } while (pppuVar10 != (undefined8 ***)0x0);
                                          }
                                        }
                                        else {
                                          uVar16 = (ulong)((long)local_3b8 +
                                                          (-8 - ((long)local_3b8 << 0x3d))) >> 3;
                                          uVar15 = (ulong)(((long)local_3c0 - (long)local_3b8 <<
                                                           0x3d) - ((long)local_3c0 -
                                                                   (long)local_3b8)) >> 3;
                                          if (uVar16 <= uVar15) {
                                            uVar15 = uVar16;
                                          }
                                          pppuVar10 = local_3b8;
                                          if ((1 < uVar15) &&
                                             ((((int)local_3c0 - (int)local_3b8 | -(int)local_3b8) &
                                              7U) == 0)) {
                                            uVar15 = uVar15 & 0x1ffffffffffffffe;
                                            pppuVar10 = local_3b8 + -uVar15;
                                            do {
                                              uVar15 = uVar15 - 2;
                                            } while (uVar15 != 0);
                                          }
                                          do {
                                            if (pppuVar10 == local_3c0) {
                                              local_3b8 = local_3c0;
                                              operator_delete(local_3c0);
                                              goto LAB_00b33f08;
                                            }
                                            pppuVar10 = pppuVar10 + -1;
                                          } while (pppuVar10 != (undefined8 ***)0x0);
                                        }
                                      }
                                      else {
                                        uVar16 = (ulong)((long)local_3d0 +
                                                        (-8 - ((long)local_3d0 << 0x3d))) >> 3;
                                        uVar15 = (ulong)(((long)local_3d8 - (long)local_3d0 << 0x3d)
                                                        - ((long)local_3d8 - (long)local_3d0)) >> 3;
                                        if (uVar16 <= uVar15) {
                                          uVar15 = uVar16;
                                        }
                                        pppuVar10 = local_3d0;
                                        if ((1 < uVar15) &&
                                           ((((int)local_3d8 - (int)local_3d0 | -(int)local_3d0) &
                                            7U) == 0)) {
                                          uVar15 = uVar15 & 0x1ffffffffffffffe;
                                          pppuVar10 = local_3d0 + -uVar15;
                                          do {
                                            uVar15 = uVar15 - 2;
                                          } while (uVar15 != 0);
                                        }
                                        do {
                                          if (pppuVar10 == local_3d8) {
                                            local_3d0 = local_3d8;
                                            operator_delete(local_3d8);
                                            goto LAB_00b33e88;
                                          }
                                          pppuVar10 = pppuVar10 + -1;
                                        } while (pppuVar10 != (undefined8 ***)0x0);
                                      }
                                    }
                                    else {
                                      uVar16 = (ulong)((long)local_3e8 +
                                                      (-8 - ((long)local_3e8 << 0x3d))) >> 3;
                                      uVar15 = (ulong)(((long)local_3f0 - (long)local_3e8 << 0x3d) -
                                                      ((long)local_3f0 - (long)local_3e8)) >> 3;
                                      if (uVar16 <= uVar15) {
                                        uVar15 = uVar16;
                                      }
                                      pppuVar10 = local_3e8;
                                      if ((1 < uVar15) &&
                                         ((((int)local_3f0 - (int)local_3e8 | -(int)local_3e8) & 7U)
                                          == 0)) {
                                        uVar15 = uVar15 & 0x1ffffffffffffffe;
                                        pppuVar10 = local_3e8 + -uVar15;
                                        do {
                                          uVar15 = uVar15 - 2;
                                        } while (uVar15 != 0);
                                      }
                                      do {
                                        if (pppuVar10 == local_3f0) {
                                          local_3e8 = local_3f0;
                                          operator_delete(local_3f0);
                                          goto LAB_00b33e08;
                                        }
                                        pppuVar10 = pppuVar10 + -1;
                                      } while (pppuVar10 != (undefined8 ***)0x0);
                                    }
                                  }
                                  else {
                                    uVar16 = (ulong)((long)local_400 +
                                                    (-8 - ((long)local_400 << 0x3d))) >> 3;
                                    uVar15 = (ulong)(((long)local_408 - (long)local_400 << 0x3d) -
                                                    ((long)local_408 - (long)local_400)) >> 3;
                                    if (uVar16 <= uVar15) {
                                      uVar15 = uVar16;
                                    }
                                    pppuVar10 = local_400;
                                    if ((1 < uVar15) &&
                                       ((((int)local_408 - (int)local_400 | -(int)local_400) & 7U)
                                        == 0)) {
                                      uVar15 = uVar15 & 0x1ffffffffffffffe;
                                      pppuVar10 = local_400 + -uVar15;
                                      do {
                                        uVar15 = uVar15 - 2;
                                      } while (uVar15 != 0);
                                    }
                                    do {
                                      if (pppuVar10 == local_408) {
                                        local_400 = local_408;
                                        operator_delete(local_408);
                                        goto LAB_00b33d88;
                                      }
                                      pppuVar10 = pppuVar10 + -1;
                                    } while (pppuVar10 != (undefined8 ***)0x0);
                                  }
                                }
                                else {
                                  uVar16 = (ulong)((long)local_418 +
                                                  (-8 - ((long)local_418 << 0x3d))) >> 3;
                                  uVar15 = (ulong)(((long)local_420 - (long)local_418 << 0x3d) -
                                                  ((long)local_420 - (long)local_418)) >> 3;
                                  if (uVar16 <= uVar15) {
                                    uVar15 = uVar16;
                                  }
                                  pppuVar10 = local_418;
                                  if ((1 < uVar15) &&
                                     ((((int)local_420 - (int)local_418 | -(int)local_418) & 7U) ==
                                      0)) {
                                    uVar15 = uVar15 & 0x1ffffffffffffffe;
                                    pppuVar10 = local_418 + -uVar15;
                                    do {
                                      uVar15 = uVar15 - 2;
                                    } while (uVar15 != 0);
                                  }
                                  do {
                                    if (pppuVar10 == local_420) {
                                      local_418 = local_420;
                                      operator_delete(local_420);
                                      goto LAB_00b33d08;
                                    }
                                    pppuVar10 = pppuVar10 + -1;
                                  } while (pppuVar10 != (undefined8 ***)0x0);
                                }
                              }
                              else {
                                uVar16 = (ulong)((long)local_430 + (-8 - ((long)local_430 << 0x3d)))
                                         >> 3;
                                uVar15 = (ulong)(((long)local_438 - (long)local_430 << 0x3d) -
                                                ((long)local_438 - (long)local_430)) >> 3;
                                if (uVar16 <= uVar15) {
                                  uVar15 = uVar16;
                                }
                                pppuVar10 = local_430;
                                if ((1 < uVar15) &&
                                   ((((int)local_438 - (int)local_430 | -(int)local_430) & 7U) == 0)
                                   ) {
                                  uVar15 = uVar15 & 0x1ffffffffffffffe;
                                  pppuVar10 = local_430 + -uVar15;
                                  do {
                                    uVar15 = uVar15 - 2;
                                  } while (uVar15 != 0);
                                }
                                do {
                                  if (pppuVar10 == local_438) {
                                    local_430 = local_438;
                                    operator_delete(local_438);
                                    goto LAB_00b33c88;
                                  }
                                  pppuVar10 = pppuVar10 + -1;
                                } while (pppuVar10 != (undefined8 ***)0x0);
                              }
                            }
                            else {
                              uVar16 = (ulong)((long)local_448 + (-8 - ((long)local_448 << 0x3d)))
                                       >> 3;
                              uVar15 = (ulong)(((long)local_450 - (long)local_448 << 0x3d) -
                                              ((long)local_450 - (long)local_448)) >> 3;
                              if (uVar16 <= uVar15) {
                                uVar15 = uVar16;
                              }
                              pppuVar10 = local_448;
                              if ((1 < uVar15) &&
                                 ((((int)local_450 - (int)local_448 | -(int)local_448) & 7U) == 0))
                              {
                                uVar15 = uVar15 & 0x1ffffffffffffffe;
                                pppuVar10 = local_448 + -uVar15;
                                do {
                                  uVar15 = uVar15 - 2;
                                } while (uVar15 != 0);
                              }
                              do {
                                if (pppuVar10 == local_450) {
                                  local_448 = local_450;
                                  operator_delete(local_450);
                                  goto LAB_00b33c08;
                                }
                                pppuVar10 = pppuVar10 + -1;
                              } while (pppuVar10 != (undefined8 ***)0x0);
                            }
                          }
                          else {
                            uVar16 = (ulong)((long)local_460 + (-8 - ((long)local_460 << 0x3d))) >>
                                     3;
                            uVar15 = (ulong)(((long)local_468 - (long)local_460 << 0x3d) -
                                            ((long)local_468 - (long)local_460)) >> 3;
                            if (uVar16 <= uVar15) {
                              uVar15 = uVar16;
                            }
                            pppuVar10 = local_460;
                            if ((1 < uVar15) &&
                               ((((int)local_468 - (int)local_460 | -(int)local_460) & 7U) == 0)) {
                              uVar15 = uVar15 & 0x1ffffffffffffffe;
                              pppuVar10 = local_460 + -uVar15;
                              do {
                                uVar15 = uVar15 - 2;
                              } while (uVar15 != 0);
                            }
                            do {
                              if (pppuVar10 == local_468) {
                                local_460 = local_468;
                                operator_delete(local_468);
                                goto LAB_00b33b88;
                              }
                              pppuVar10 = pppuVar10 + -1;
                            } while (pppuVar10 != (undefined8 ***)0x0);
                          }
                        }
                        else {
                          uVar16 = (ulong)((long)local_478 + (-8 - ((long)local_478 << 0x3d))) >> 3;
                          uVar15 = (ulong)(((long)local_480 - (long)local_478 << 0x3d) -
                                          ((long)local_480 - (long)local_478)) >> 3;
                          if (uVar16 <= uVar15) {
                            uVar15 = uVar16;
                          }
                          pppuVar10 = local_478;
                          if ((1 < uVar15) &&
                             ((((int)local_480 - (int)local_478 | -(int)local_478) & 7U) == 0)) {
                            uVar15 = uVar15 & 0x1ffffffffffffffe;
                            pppuVar10 = local_478 + -uVar15;
                            do {
                              uVar15 = uVar15 - 2;
                            } while (uVar15 != 0);
                          }
                          do {
                            if (pppuVar10 == local_480) {
                              local_478 = local_480;
                              operator_delete(local_480);
                              goto LAB_00b33b08;
                            }
                            pppuVar10 = pppuVar10 + -1;
                          } while (pppuVar10 != (undefined8 ***)0x0);
                        }
                      }
                      else {
                        uVar16 = (ulong)((long)local_4a8 + (-8 - ((long)local_4a8 << 0x3d))) >> 3;
                        uVar15 = (ulong)(((long)local_4b0 - (long)local_4a8 << 0x3d) -
                                        ((long)local_4b0 - (long)local_4a8)) >> 3;
                        if (uVar16 <= uVar15) {
                          uVar15 = uVar16;
                        }
                        pppuVar10 = local_4a8;
                        if ((1 < uVar15) &&
                           ((((int)local_4b0 - (int)local_4a8 | -(int)local_4a8) & 7U) == 0)) {
                          uVar15 = uVar15 & 0x1ffffffffffffffe;
                          pppuVar10 = local_4a8 + -uVar15;
                          do {
                            uVar15 = uVar15 - 2;
                          } while (uVar15 != 0);
                        }
                        do {
                          if (pppuVar10 == local_4b0) {
                            local_4a8 = local_4b0;
                            operator_delete(local_4b0);
                            goto LAB_00b33a74;
                          }
                          pppuVar10 = pppuVar10 + -1;
                        } while (pppuVar10 != (undefined8 ***)0x0);
                      }
                    }
                    else {
                      uVar16 = (ulong)((long)local_4c0 + (-8 - ((long)local_4c0 << 0x3d))) >> 3;
                      uVar15 = (ulong)(((long)local_4c8 - (long)local_4c0 << 0x3d) -
                                      ((long)local_4c8 - (long)local_4c0)) >> 3;
                      if (uVar16 <= uVar15) {
                        uVar15 = uVar16;
                      }
                      pppuVar10 = local_4c0;
                      if ((1 < uVar15) &&
                         ((((int)local_4c8 - (int)local_4c0 | -(int)local_4c0) & 7U) == 0)) {
                        uVar15 = uVar15 & 0x1ffffffffffffffe;
                        pppuVar10 = local_4c0 + -uVar15;
                        do {
                          uVar15 = uVar15 - 2;
                        } while (uVar15 != 0);
                      }
                      do {
                        if (pppuVar10 == local_4c8) {
                          local_4c0 = local_4c8;
                          operator_delete(local_4c8);
                          goto LAB_00b339f4;
                        }
                        pppuVar10 = pppuVar10 + -1;
                      } while (pppuVar10 != (undefined8 ***)0x0);
                    }
                  }
                  else {
                    uVar16 = (ulong)((long)local_4d8 + (-8 - ((long)local_4d8 << 0x3d))) >> 3;
                    uVar15 = (ulong)(((long)local_4e0 - (long)local_4d8 << 0x3d) -
                                    ((long)local_4e0 - (long)local_4d8)) >> 3;
                    if (uVar16 <= uVar15) {
                      uVar15 = uVar16;
                    }
                    pppuVar10 = local_4d8;
                    if ((1 < uVar15) &&
                       ((((int)local_4e0 - (int)local_4d8 | -(int)local_4d8) & 7U) == 0)) {
                      uVar15 = uVar15 & 0x1ffffffffffffffe;
                      pppuVar10 = local_4d8 + -uVar15;
                      do {
                        uVar15 = uVar15 - 2;
                      } while (uVar15 != 0);
                    }
                    do {
                      if (pppuVar10 == local_4e0) {
                        local_4d8 = local_4e0;
                        operator_delete(local_4e0);
                        goto LAB_00b33974;
                      }
                      pppuVar10 = pppuVar10 + -1;
                    } while (pppuVar10 != (undefined8 ***)0x0);
                  }
                }
                else {
                  uVar16 = (ulong)((long)local_4f0 + (-8 - ((long)local_4f0 << 0x3d))) >> 3;
                  uVar15 = (ulong)(((long)local_4f8 - (long)local_4f0 << 0x3d) -
                                  ((long)local_4f8 - (long)local_4f0)) >> 3;
                  if (uVar16 <= uVar15) {
                    uVar15 = uVar16;
                  }
                  pppuVar10 = local_4f0;
                  if ((1 < uVar15) &&
                     ((((int)local_4f8 - (int)local_4f0 | -(int)local_4f0) & 7U) == 0)) {
                    uVar15 = uVar15 & 0x1ffffffffffffffe;
                    pppuVar10 = local_4f0 + -uVar15;
                    do {
                      uVar15 = uVar15 - 2;
                    } while (uVar15 != 0);
                  }
                  do {
                    if (pppuVar10 == local_4f8) {
                      local_4f0 = local_4f8;
                      operator_delete(local_4f8);
                      goto LAB_00b338f4;
                    }
                    pppuVar10 = pppuVar10 + -1;
                  } while (pppuVar10 != (undefined8 ***)0x0);
                }
              }
              else {
                uVar16 = (ulong)((long)local_508 + (-8 - ((long)local_508 << 0x3d))) >> 3;
                uVar15 = (ulong)(((long)local_510 - (long)local_508 << 0x3d) -
                                ((long)local_510 - (long)local_508)) >> 3;
                if (uVar16 <= uVar15) {
                  uVar15 = uVar16;
                }
                pppuVar10 = local_508;
                if ((1 < uVar15) &&
                   ((((int)local_510 - (int)local_508 | -(int)local_508) & 7U) == 0)) {
                  uVar15 = uVar15 & 0x1ffffffffffffffe;
                  pppuVar10 = local_508 + -uVar15;
                  do {
                    uVar15 = uVar15 - 2;
                  } while (uVar15 != 0);
                }
                do {
                  if (pppuVar10 == local_510) {
                    local_508 = local_510;
                    operator_delete(local_510);
                    goto LAB_00b33874;
                  }
                  pppuVar10 = pppuVar10 + -1;
                } while (pppuVar10 != (undefined8 ***)0x0);
              }
            }
            else {
              uVar16 = (ulong)((long)local_520 + (-8 - ((long)local_520 << 0x3d))) >> 3;
              uVar15 = (ulong)(((long)local_528 - (long)local_520 << 0x3d) -
                              ((long)local_528 - (long)local_520)) >> 3;
              if (uVar16 <= uVar15) {
                uVar15 = uVar16;
              }
              pppuVar10 = local_520;
              if ((1 < uVar15) && ((((int)local_528 - (int)local_520 | -(int)local_520) & 7U) == 0))
              {
                uVar15 = uVar15 & 0x1ffffffffffffffe;
                pppuVar10 = local_520 + -uVar15;
                do {
                  uVar15 = uVar15 - 2;
                } while (uVar15 != 0);
              }
              do {
                if (pppuVar10 == local_528) {
                  local_520 = local_528;
                  operator_delete(local_528);
                  goto LAB_00b337f4;
                }
                pppuVar10 = pppuVar10 + -1;
              } while (pppuVar10 != (undefined8 ***)0x0);
            }
          }
          else {
            uVar16 = (ulong)((long)local_538 + (-8 - ((long)local_538 << 0x3d))) >> 3;
            uVar15 = (ulong)(((long)local_540 - (long)local_538 << 0x3d) -
                            ((long)local_540 - (long)local_538)) >> 3;
            if (uVar16 <= uVar15) {
              uVar15 = uVar16;
            }
            pppuVar10 = local_538;
            if ((1 < uVar15) && ((((int)local_540 - (int)local_538 | -(int)local_538) & 7U) == 0)) {
              uVar15 = uVar15 & 0x1ffffffffffffffe;
              pppuVar10 = local_538 + -uVar15;
              do {
                uVar15 = uVar15 - 2;
              } while (uVar15 != 0);
            }
            do {
              if (pppuVar10 == local_540) {
                local_538 = local_540;
                operator_delete(local_540);
                goto LAB_00b33774;
              }
              pppuVar10 = pppuVar10 + -1;
            } while (pppuVar10 != (undefined8 ***)0x0);
          }
        }
        else {
          uVar16 = (ulong)((long)local_550 + (-8 - ((long)local_550 << 0x3d))) >> 3;
          uVar15 = (ulong)(((long)local_558 - (long)local_550 << 0x3d) -
                          ((long)local_558 - (long)local_550)) >> 3;
          if (uVar16 <= uVar15) {
            uVar15 = uVar16;
          }
          pppuVar10 = local_550;
          if ((1 < uVar15) && ((((int)local_558 - (int)local_550 | -(int)local_550) & 7U) == 0)) {
            uVar15 = uVar15 & 0x1ffffffffffffffe;
            pppuVar10 = local_550 + -uVar15;
            do {
              uVar15 = uVar15 - 2;
            } while (uVar15 != 0);
          }
          do {
            if (pppuVar10 == local_558) {
              local_550 = local_558;
              operator_delete(local_558);
              goto LAB_00b336f4;
            }
            pppuVar10 = pppuVar10 + -1;
          } while (pppuVar10 != (undefined8 ***)0x0);
        }
      }
      else {
        uVar16 = (ulong)((long)local_568 + (-8 - ((long)local_568 << 0x3d))) >> 3;
        uVar15 = (ulong)(((long)local_570 - (long)local_568 << 0x3d) -
                        ((long)local_570 - (long)local_568)) >> 3;
        if (uVar16 <= uVar15) {
          uVar15 = uVar16;
        }
        pppuVar10 = local_568;
        if ((1 < uVar15) && ((((int)local_570 - (int)local_568 | -(int)local_568) & 7U) == 0)) {
          uVar15 = uVar15 & 0x1ffffffffffffffe;
          pppuVar10 = local_568 + -uVar15;
          do {
            uVar15 = uVar15 - 2;
          } while (uVar15 != 0);
        }
        do {
          if (pppuVar10 == local_570) {
            local_568 = local_570;
            operator_delete(local_570);
            goto LAB_00b33674;
          }
          pppuVar10 = pppuVar10 + -1;
        } while (pppuVar10 != (undefined8 ***)0x0);
      }
    }
    else {
      uVar16 = (ulong)((long)local_5b0 + (-8 - ((long)local_5b0 << 0x3d))) >> 3;
      uVar15 = (ulong)(((long)local_5b8 - (long)local_5b0 << 0x3d) -
                      ((long)local_5b8 - (long)local_5b0)) >> 3;
      if (uVar16 <= uVar15) {
        uVar15 = uVar16;
      }
      pppuVar10 = local_5b0;
      if ((1 < uVar15) && ((((int)local_5b8 - (int)local_5b0 | -(int)local_5b0) & 7U) == 0)) {
        uVar15 = uVar15 & 0x1ffffffffffffffe;
        pppuVar10 = local_5b0 + -uVar15;
        do {
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
      }
      do {
        if (pppuVar10 == local_5b8) {
          local_5b0 = local_5b8;
          operator_delete(local_5b8);
          goto LAB_00b335cc;
        }
        pppuVar10 = pppuVar10 + -1;
      } while (pppuVar10 != (undefined8 ***)0x0);
    }
  }
  else {
    uVar16 = (ulong)((long)local_5c8 + (-8 - ((long)local_5c8 << 0x3d))) >> 3;
    uVar15 = (ulong)(((long)local_5d0 - (long)local_5c8 << 0x3d) -
                    ((long)local_5d0 - (long)local_5c8)) >> 3;
    if (uVar16 <= uVar15) {
      uVar15 = uVar16;
    }
    pppuVar10 = local_5c8;
    if ((1 < uVar15) && ((((int)local_5d0 - (int)local_5c8 | -(int)local_5c8) & 7U) == 0)) {
      uVar15 = uVar15 & 0x1ffffffffffffffe;
      pppuVar10 = local_5c8 + -uVar15;
      do {
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
    }
    do {
      if (pppuVar10 == local_5d0) {
        local_5c8 = local_5d0;
        operator_delete(local_5d0);
        goto LAB_00b33538;
      }
      pppuVar10 = pppuVar10 + -1;
    } while (pppuVar10 != (undefined8 ***)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b34050  FUN_00b34050 =====

void FUN_00b34050(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  void *local_b8;
  ulong uStack_b0;
  ulong local_a8;
  void *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  if (param_3 != 0) {
    lVar23 = *param_2;
    lVar9 = FUN_00b38ef8(param_4);
    lVar11 = *(long *)(lVar23 + 8);
    uVar8 = *(uint *)(lVar9 + 0x10);
    uVar10 = uVar8 | 0x80;
    *(uint *)(lVar9 + 0x10) = uVar10;
    *(long *)(lVar9 + 0x50) = lVar11 / 1000;
    if (*(char *)(lVar23 + 0x14) == '\x01') {
      uVar3 = *(undefined4 *)(lVar23 + 0x10);
      uVar10 = uVar8 | 0x180;
      *(uint *)(lVar9 + 0x10) = uVar10;
      *(undefined4 *)(lVar9 + 0x58) = uVar3;
    }
    if (*(char *)(lVar23 + 0x1c) == '\x01') {
      uVar3 = *(undefined4 *)(lVar23 + 0x18);
      uVar10 = uVar10 | 0x200;
      *(uint *)(lVar9 + 0x10) = uVar10;
      *(undefined4 *)(lVar9 + 0x5c) = uVar3;
    }
    uVar20 = 0xaaaaaaaaaaaaaa00;
    uVar21 = 0xaaaaaaaaaaaaaa00;
    uVar22 = 0xaaaaaaaaaaaaaa00;
    if (*(char *)(lVar23 + 0x24) == '\x01') {
      uVar8 = FUN_00b53b60(*(undefined4 *)(lVar23 + 0x20));
      uVar21 = (ulong)uVar8;
      uVar22 = 0xaaaaaaaaaaaaaa01;
      *(uint *)(lVar9 + 0x60) = uVar8;
      uVar10 = *(uint *)(lVar9 + 0x10) | 0x400;
      *(uint *)(lVar9 + 0x10) = uVar10;
    }
    if (*(char *)(lVar23 + 0x29) == '\x01') {
      uVar7 = *(undefined1 *)(lVar23 + 0x28);
      uVar10 = uVar10 | 0x800;
      *(uint *)(lVar9 + 0x10) = uVar10;
      *(undefined1 *)(lVar9 + 100) = uVar7;
    }
    if (*(char *)(lVar23 + 0x2b) == '\x01') {
      uVar7 = *(undefined1 *)(lVar23 + 0x2a);
      uVar10 = uVar10 | 0x1000;
      *(uint *)(lVar9 + 0x10) = uVar10;
      *(undefined1 *)(lVar9 + 0x65) = uVar7;
    }
    if (*(char *)(lVar23 + 0x38) == '\x01') {
      uVar13 = *(undefined8 *)(lVar23 + 0x30);
      uVar10 = uVar10 | 0x2000;
      *(uint *)(lVar9 + 0x10) = uVar10;
      *(int *)(lVar9 + 0x68) = (int)uVar13;
    }
    uVar17 = param_3 - 1;
    if (uVar17 != 0) {
      *(int *)(lVar9 + 0x6c) = (int)param_3 + -1;
      *(uint *)(lVar9 + 0x10) = uVar10 | 0x4000;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar17 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_80 = (undefined1 *)operator_new(uVar17 * 0x10);
      uVar15 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_70 = local_80 + uVar17 * 0x10;
      uVar14 = (ulong)-(long)local_80 >> 4;
      if (uVar15 <= (ulong)-(long)local_80 >> 4) {
        uVar14 = uVar15;
      }
      puVar12 = local_80;
      if (1 < uVar14) {
        uVar18 = (ulong)-(long)local_80 >> 4;
        if (uVar15 <= uVar18) {
          uVar18 = uVar15;
        }
        if (((-(long)local_80 & 0xfU) == 0) && (local_80 <= local_80 + uVar18 * 0x10)) {
          uVar14 = uVar14 & 0xffffffffffffffe;
          puVar16 = local_80 + 0x10;
          puVar12 = local_80 + uVar14 * 0x10;
          do {
            puVar16[-0x10] = 0;
            uVar14 = uVar14 - 2;
            *puVar16 = 0;
            puVar16[-8] = 0;
            puVar16[8] = 0;
            puVar16 = puVar16 + 0x20;
          } while (uVar14 != 0);
        }
      }
      do {
        if (puVar12 == (undefined1 *)0x0) goto LAB_00b349d8;
        *puVar12 = 0;
        puVar12[8] = 0;
        puVar12 = puVar12 + 0x10;
      } while (puVar12 != local_70);
      local_a0 = (void *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      if (uVar17 != 0) {
        lVar11 = 0;
        uVar17 = 0;
        do {
          lVar19 = uVar17 + 1;
          uVar17 = uVar17 + 1;
          lVar19 = *(long *)(param_2[lVar19] + 8);
          plVar1 = (long *)(local_80 + lVar11);
          lVar11 = lVar11 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar19 / 1000;
        } while (uVar17 < (ulong)((long)local_70 - (long)local_80 >> 4));
      }
      puStack_78 = local_70;
      FUN_00b53b7c(&local_b8,*(long *)(lVar23 + 8) / 1000,1,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar17 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar17 = local_a8 >> 0x38;
      }
      if (uVar17 != 0) {
        uVar17 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 1;
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x18,&local_a0,uVar17);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar17 = 0;
        do {
          if (*(char *)(param_2[uVar17 + 1] + 0x14) == '\x01') {
            uVar8 = *(uint *)(param_2[uVar17 + 1] + 0x10);
            *(undefined1 *)((long)(local_80 + lVar11) + 8) = 1;
            *(ulong *)(local_80 + lVar11) = (ulong)uVar8;
          }
          else if (local_80[lVar11 + 8] == '\x01') {
            local_80[lVar11 + 8] = 0;
          }
          uVar17 = uVar17 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar17 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      uVar17 = 0xaaaaaaaaaaaaaa00;
      uVar13 = 0xaaaaaaaaaaaaaa00;
      if ((*(byte *)(lVar23 + 0x14) & 1) != 0) {
        uVar17 = (ulong)*(uint *)(lVar23 + 0x10);
        uVar13 = 0xaaaaaaaaaaaaaa01;
      }
      FUN_00b53b7c(&local_b8,uVar17,uVar13,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar17 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar17 = local_a8 >> 0x38;
      }
      if (uVar17 != 0) {
        uVar17 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 2;
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x20,&local_a0,uVar17);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar17 = 0;
        do {
          if (*(char *)(param_2[uVar17 + 1] + 0x1c) == '\x01') {
            uVar8 = *(uint *)(param_2[uVar17 + 1] + 0x18);
            *(undefined1 *)((long)(local_80 + lVar11) + 8) = 1;
            *(ulong *)(local_80 + lVar11) = (ulong)uVar8;
          }
          else if (local_80[lVar11 + 8] == '\x01') {
            local_80[lVar11 + 8] = 0;
          }
          uVar17 = uVar17 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar17 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      uVar17 = 0xaaaaaaaaaaaaaa00;
      uVar13 = 0xaaaaaaaaaaaaaa00;
      if ((*(byte *)(lVar23 + 0x1c) & 1) != 0) {
        uVar17 = (ulong)*(uint *)(lVar23 + 0x18);
        uVar13 = 0xaaaaaaaaaaaaaa01;
      }
      FUN_00b53b7c(&local_b8,uVar17,uVar13,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar17 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar17 = local_a8 >> 0x38;
      }
      if (uVar17 != 0) {
        uVar17 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 4;
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x28,&local_a0,uVar17);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar17 = 0;
        do {
          if (*(char *)(param_2[uVar17 + 1] + 0x24) == '\x01') {
            uVar14 = FUN_00b53b60(*(undefined4 *)(param_2[uVar17 + 1] + 0x20));
            if ((ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            puVar2 = (ulong *)(local_80 + lVar11);
            if ((char)puVar2[1] != '\x01') {
              if (puVar2 == (ulong *)0x0) goto LAB_00b349d8;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = uVar14 & 0xffffffff;
          }
          else if (local_80[lVar11 + 8] == '\x01') {
            local_80[lVar11 + 8] = 0;
          }
          uVar17 = uVar17 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar17 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      FUN_00b53b7c(&local_b8,uVar21,uVar22,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar21 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar21 = local_a8 >> 0x38;
      }
      if (uVar21 != 0) {
        uVar21 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 8;
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x30,&local_a0,uVar21);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar21 = 0;
        do {
          lVar19 = param_2[uVar21 + 1];
          puVar2 = (ulong *)(local_80 + lVar11);
          cVar4 = (char)puVar2[1];
          if (cVar4 == *(char *)(lVar19 + 0x29)) {
            if (cVar4 != '\0') {
              bVar5 = *(byte *)(lVar19 + 0x28);
LAB_00b346a8:
              *puVar2 = (ulong)bVar5;
            }
          }
          else {
            if (cVar4 == '\0') {
              if (puVar2 != (ulong *)0x0) {
                bVar5 = *(byte *)(lVar19 + 0x28);
                *(undefined1 *)(puVar2 + 1) = 1;
                goto LAB_00b346a8;
              }
              goto LAB_00b349d8;
            }
            *(undefined1 *)(puVar2 + 1) = 0;
          }
          uVar21 = uVar21 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar21 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      bVar6 = *(char *)(lVar23 + 0x29) != '\x01';
      if (bVar6) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined1 *)(lVar23 + 0x28);
      }
      FUN_00b53b7c(&local_b8,uVar7,!bVar6,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar21 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar21 = local_a8 >> 0x38;
      }
      if (uVar21 != 0) {
        uVar21 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 0x10;
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x38,&local_a0,uVar21);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar21 = 0;
        do {
          lVar19 = param_2[uVar21 + 1];
          puVar2 = (ulong *)(local_80 + lVar11);
          cVar4 = (char)puVar2[1];
          if (cVar4 == *(char *)(lVar19 + 0x2b)) {
            if (cVar4 != '\0') {
              bVar5 = *(byte *)(lVar19 + 0x2a);
LAB_00b347a8:
              *puVar2 = (ulong)bVar5;
            }
          }
          else {
            if (cVar4 == '\0') {
              if (puVar2 == (ulong *)0x0) {
LAB_00b349d8:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              bVar5 = *(byte *)(lVar19 + 0x2a);
              *(undefined1 *)(puVar2 + 1) = 1;
              goto LAB_00b347a8;
            }
            *(undefined1 *)(puVar2 + 1) = 0;
          }
          uVar21 = uVar21 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar21 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      bVar6 = *(char *)(lVar23 + 0x2b) != '\x01';
      if (bVar6) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined1 *)(lVar23 + 0x2a);
      }
      FUN_00b53b7c(&local_b8,uVar7,!bVar6,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar21 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar21 = local_a8 >> 0x38;
      }
      if (uVar21 != 0) {
        uVar21 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 0x20;
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x40,&local_a0,uVar21);
      }
      if (puStack_78 != local_80) {
        lVar11 = 0;
        uVar21 = 0;
        do {
          if ((*(byte *)(param_2[uVar21 + 1] + 0x38) & 1) == 0) {
            if (local_80[lVar11 + 8] == '\x01') {
              local_80[lVar11 + 8] = 0;
            }
          }
          else {
            lVar19 = *(long *)(param_2[uVar21 + 1] + 0x30);
            *(undefined1 *)((long)(local_80 + lVar11) + 8) = 1;
            *(long *)(local_80 + lVar11) = lVar19 + -1;
          }
          uVar21 = uVar21 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar21 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      lVar11 = -0x5555555555555600;
      if ((*(byte *)(lVar23 + 0x38) & 1) != 0) {
        uVar20 = 0xaaaaaaaaaaaaaa01;
        lVar11 = *(long *)(lVar23 + 0x30) + -1;
      }
      FUN_00b53b7c(&local_b8,lVar11,uVar20,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar8 = (uint)(char)(local_a8 >> 0x38);
      if (-1 < (int)uVar8) {
        uStack_b0 = local_a8 >> 0x38;
      }
      if (uStack_b0 != 0) {
        uVar21 = *(ulong *)(lVar9 + 8);
        *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 0x40;
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar9 + 0x48,&local_a0,uVar21);
        uVar8 = (uint)local_90._7_1_;
      }
      if ((uVar8 >> 7 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (local_80 != (undefined1 *)0x0) {
        uVar21 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3c) -
                        ((long)local_80 - (long)puStack_78)) >> 4;
        if ((ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4 <= uVar21) {
          uVar21 = (ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4;
        }
        puVar12 = puStack_78;
        if ((1 < uVar21) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 0xfU) == 0)) {
          uVar21 = uVar21 & 0xffffffffffffffe;
          puVar12 = puStack_78 + uVar21 * -0x10;
          do {
            uVar21 = uVar21 - 2;
          } while (uVar21 != 0);
        }
        while (puVar12 != local_80) {
          puVar12 = puVar12 + -0x10;
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
  }
  return;
}


// ===== 00b34a8c  FUN_00b34a8c =====

void FUN_00b34a8c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (param_3 != 0) {
    lVar13 = *param_2;
    lVar3 = FUN_00b39034(param_4);
    lVar5 = *(long *)(lVar13 + 8);
    uVar10 = param_3 - 1;
    uVar4 = *(uint *)(lVar3 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar4 | 4;
    *(long *)(lVar3 + 0x28) = lVar5 / 1000;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar13 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar4 | 0xc;
    if (uVar10 != 0) {
      *(int *)(lVar3 + 0x34) = (int)param_3 + -1;
      *(uint *)(lVar3 + 0x10) = uVar4 | 0x1c;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar10 * 0x10);
      uVar8 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar10 * 0x10;
      uVar7 = (ulong)-(long)local_70 >> 4;
      if (uVar8 <= (ulong)-(long)local_70 >> 4) {
        uVar7 = uVar8;
      }
      puVar6 = local_70;
      if (1 < uVar7) {
        uVar11 = (ulong)-(long)local_70 >> 4;
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar11 * 0x10)) {
          uVar7 = uVar7 & 0xffffffffffffffe;
          puVar9 = local_70 + 0x10;
          puVar6 = local_70 + uVar7 * 0x10;
          do {
            puVar9[-0x10] = 0;
            uVar7 = uVar7 - 2;
            *puVar9 = 0;
            puVar9[-8] = 0;
            puVar9[8] = 0;
            puVar9 = puVar9 + 0x20;
          } while (uVar7 != 0);
        }
      }
      do {
        if (puVar6 == (undefined1 *)0x0) goto LAB_00b34e0c;
        *puVar6 = 0;
        puVar6[8] = 0;
        puVar6 = puVar6 + 0x10;
      } while (puVar6 != local_60);
      if (uVar10 != 0) {
        lVar5 = 0;
        uVar10 = 0;
        do {
          lVar12 = uVar10 + 1;
          uVar10 = uVar10 + 1;
          lVar12 = *(long *)(param_2[lVar12] + 8);
          plVar1 = (long *)(local_70 + lVar5);
          lVar5 = lVar5 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar12 / 1000;
        } while (uVar10 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar13 + 8) / 1000,1,&local_70);
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar10 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar10 = local_98 >> 0x38;
      }
      if (uVar10 != 0) {
        uVar10 = *(ulong *)(lVar3 + 8);
        *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar3 + 0x18,&local_90,uVar10);
      }
      if (puStack_68 != local_70) {
        lVar5 = 0;
        uVar10 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar5);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar10 + 1] + 0x10);
          }
          else {
            if (puVar2 == (ulong *)0x0) {
LAB_00b34e0c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar2 = (ulong)*(uint *)(param_2[uVar10 + 1] + 0x10);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar10 = uVar10 + 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar10 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar13 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar4 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar4) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar10 = *(ulong *)(lVar3 + 8);
        *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 2;
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar3 + 0x20,&local_90,uVar10);
        uVar4 = (uint)local_80._7_1_;
      }
      if ((uVar4 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar10 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar10) {
          uVar10 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar6 = puStack_68;
        if ((1 < uVar10) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar10 = uVar10 & 0xffffffffffffffe;
          puVar6 = puStack_68 + uVar10 * -0x10;
          do {
            uVar10 = uVar10 - 2;
          } while (uVar10 != 0);
        }
        while (puVar6 != local_70) {
          puVar6 = puVar6 + -0x10;
          if (puVar6 == (undefined1 *)0x0) {
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
  }
  return;
}


