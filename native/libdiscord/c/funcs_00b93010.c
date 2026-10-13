// ===== 00b93010  FUN_00b93010 =====

byte FUN_00b93010(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar4 = FUN_007e18fc(param_2);
  if ((uVar4 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b930e8;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
    bVar3 = *(byte *)(param_1 + 3);
  }
  else {
    pcVar6 = (code *)param_1[1];
    puVar2 = (undefined8 *)param_1[5];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    uVar5 = *(undefined8 *)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    bVar3 = (*pcVar6)(plVar1,uVar5,*puVar2);
    *(byte *)(param_1 + 3) = bVar3 & 1;
  }
  return bVar3 & 1;
}


// ===== 00b930e8  FUN_00b930e8 =====

void FUN_00b930e8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  pcVar5 = (code *)plVar6[1];
  puVar2 = (undefined8 *)plVar6[5];
  plVar1 = (long *)(*plVar6 + (plVar6[2] >> 1));
  if ((plVar6[2] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  uVar4 = *(undefined8 *)plVar6[4];
  *(undefined8 *)plVar6[4] = 0;
  bVar3 = (*pcVar5)(plVar1,uVar4,*puVar2);
  *(byte *)(plVar6 + 3) = bVar3 & 1;
  FUN_0066f2dc(plVar6 + 6);
  return;
}


// ===== 00b93148  FUN_00b93148 =====

byte FUN_00b93148(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b9321c;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    pcVar5 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    uVar4 = *(undefined8 *)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    bVar2 = (*pcVar5)(plVar1,uVar4);
    *(byte *)(param_1 + 3) = bVar2 & 1;
  }
  return bVar2 & 1;
}


// ===== 00b9321c  FUN_00b9321c =====

void FUN_00b9321c(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  pcVar4 = (code *)plVar5[1];
  plVar1 = (long *)(*plVar5 + (plVar5[2] >> 1));
  if ((plVar5[2] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  uVar3 = *(undefined8 *)plVar5[4];
  *(undefined8 *)plVar5[4] = 0;
  bVar2 = (*pcVar4)(plVar1,uVar3);
  *(byte *)(plVar5 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar5 + 5);
  return;
}


// ===== 00b93278  FUN_00b93278 =====

void FUN_00b93278(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  uVar2 = *(undefined8 *)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  (*pcVar3)(plVar1,uVar2);
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b932c8  FUN_00b932c8 =====

void FUN_00b932c8(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00b932ec  FUN_00b932ec =====

bool FUN_00b932ec(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b93344  FUN_00b93344 =====

void FUN_00b93344(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
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
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d46d90;
  param_1[1] = &PTR_FUN_00d46e18;
  local_c0 = FUN_00b93cc4;
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
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[2];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b93d00;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00b9345c  FUN_00b9345c =====

void FUN_00b9345c(void *param_1)

{
  FUN_00b93344();
  operator_delete(param_1);
  return;
}


// ===== 00b9348c  FUN_00b9348c =====

void FUN_00b9348c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b9349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


// ===== 00b934a0  FUN_00b934a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b934a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
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
  local_98 = 0;
  uStack_b0 = _UNK_001f46e8;
  local_b8 = _DAT_001f46e0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b93d44(param_1,&local_c0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00b93598  FUN_00b93598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b93598(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
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
  local_98 = 0;
  uStack_b0 = _UNK_001f4c48;
  local_b8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b93fdc(param_1,&local_c0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00b93690  FUN_00b93690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b93690(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
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
  
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = (long *)0x0;
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
  uStack_a8 = _UNK_001f46f8;
  local_b0 = _DAT_001f46f0;
  uStack_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b94274(param_1,&local_b8,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0(&local_90);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


// ===== 00b93728  FUN_00b93728 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b93728(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
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
  
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = (long *)0x0;
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
  uStack_a8 = _UNK_001f2798;
  local_b0 = _DAT_001f2790;
  uStack_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b94404(param_1,&local_b8,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0(&local_90);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


// ===== 00b937c0  FUN_00b937c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b937c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
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
  
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
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
  uStack_98 = _UNK_001f2338;
  local_a0 = _DAT_001f2330;
  uStack_88 = param_2;
  FUN_0066f1ac(&puStack_80);
  uVar1 = FUN_00b94594(&local_a8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_80);
  return uVar1 & 1;
}


// ===== 00b93840  FUN_00b93840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b93840(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
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
  
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
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
  uStack_98 = _UNK_001f3ab8;
  local_a0 = _DAT_001f3ab0;
  uStack_88 = param_2;
  FUN_0066f1ac(&puStack_80);
  uVar1 = FUN_00b946fc(&local_a8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_80);
  return uVar1 & 1;
}


// ===== 00b938c0  FUN_00b938c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b938c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
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
  
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
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
  uStack_98 = _UNK_001f3d98;
  local_a0 = _DAT_001f3d90;
  uStack_88 = param_2;
  FUN_0066f1ac(&puStack_80);
  uVar1 = FUN_00b94594(&local_a8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_80);
  return uVar1 & 1;
}


// ===== 00b93940  FUN_00b93940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b93940(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
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
  
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
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
  uStack_98 = _UNK_001f1cc8;
  local_a0 = _DAT_001f1cc0;
  uStack_88 = param_2;
  FUN_0066f1ac(&puStack_80);
  uVar1 = FUN_00b946fc(&local_a8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_80);
  return uVar1 & 1;
}


// ===== 00b939c0  FUN_00b939c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b939c0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4708;
  local_b8 = _DAT_001f4700;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b94864;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b93afc  FUN_00b93afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b93afc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3208;
  local_b8 = _DAT_001f3200;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b94864;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b93c38  FUN_00b93c38 =====

bool FUN_00b93c38(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00b93c50  FUN_00b93c50 =====

void FUN_00b93c50(long param_1)

{
  FUN_00b939c0(param_1 + -8);
  return;
}


// ===== 00b93c5c  FUN_00b93c5c =====

void FUN_00b93c5c(long param_1)

{
  FUN_00b93afc(param_1 + -8);
  return;
}


// ===== 00b93c68  FUN_00b93c68 =====

void FUN_00b93c68(long param_1)

{
  FUN_00b93344(param_1 + -8);
  return;
}


// ===== 00b93c74  FUN_00b93c74 =====

void FUN_00b93c74(long param_1)

{
  FUN_00b93344((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00b93ca8  FUN_00b93ca8 =====

void FUN_00b93ca8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb93cb0);
  (*pcVar1)();
}


// ===== 00b93cb0  FUN_00b93cb0 =====

void FUN_00b93cb0(long param_1)

{
  FUN_00b93344(param_1 + -8);
  return;
}


// ===== 00b93cbc  FUN_00b93cbc =====

void FUN_00b93cbc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb93cc4);
  (*pcVar1)();
}


// ===== 00b93cc4  FUN_00b93cc4 =====

void FUN_00b93cc4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00b93d00  FUN_00b93d00 =====

void FUN_00b93d00(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b93d44  FUN_00b93d44 =====

void FUN_00b93d44(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b93fa4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b93e14(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00b93e14  FUN_00b93e14 =====

void FUN_00b93e14(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00b93ed8(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00b93ed8  FUN_00b93ed8 =====

undefined8 * FUN_00b93ed8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
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
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
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


// ===== 00b93fa4  FUN_00b93fa4 =====

void FUN_00b93fa4(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b93e14(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00b93fdc  FUN_00b93fdc =====

void FUN_00b93fdc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b9423c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b940ac(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00b940ac  FUN_00b940ac =====

void FUN_00b940ac(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00b94170(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00b94170  FUN_00b94170 =====

undefined8 * FUN_00b94170(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
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
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
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


// ===== 00b9423c  FUN_00b9423c =====

void FUN_00b9423c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b940ac(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00b94274  FUN_00b94274 =====

void FUN_00b94274(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b94380;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b94380  FUN_00b94380 =====

void FUN_00b94380(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b94404  FUN_00b94404 =====

void FUN_00b94404(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b94510;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b94510  FUN_00b94510 =====

void FUN_00b94510(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b94594  FUN_00b94594 =====

undefined1 FUN_00b94594(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b94684;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar4 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    bVar2 = (*pcVar4)(plVar1,local_40);
    *(byte *)(param_1 + 3) = bVar2 & 1;
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return (char)param_1[3];
}


// ===== 00b94684  FUN_00b94684 =====

void FUN_00b94684(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  bVar2 = (*pcVar3)(plVar1,&local_8);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b946fc  FUN_00b946fc =====

undefined1 FUN_00b946fc(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b947ec;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar4 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    bVar2 = (*pcVar4)(plVar1,local_40);
    *(byte *)(param_1 + 3) = bVar2 & 1;
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return (char)param_1[3];
}


// ===== 00b947ec  FUN_00b947ec =====

void FUN_00b947ec(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  bVar2 = (*pcVar3)(plVar1,&local_8);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b94864  FUN_00b94864 =====

void FUN_00b94864(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b948b0  FUN_00b948b0 =====

void FUN_00b948b0(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x30);
  return;
}


// ===== 00b948d4  FUN_00b948d4 =====

bool FUN_00b948d4(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 6);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b9492c  FUN_00b9492c =====

void FUN_00b9492c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
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
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d46f50;
  param_1[1] = &PTR_FUN_00d46fe8;
  param_1[2] = &PTR_FUN_00d47018;
  local_c0 = FUN_00b95724;
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
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[3];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b95760;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  return;
}


// ===== 00b94a4c  FUN_00b94a4c =====

void FUN_00b94a4c(void *param_1)

{
  FUN_00b9492c();
  operator_delete(param_1);
  return;
}


// ===== 00b94a7c  FUN_00b94a7c =====

void FUN_00b94a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b94a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return;
}


// ===== 00b94a90  FUN_00b94a90 =====

void FUN_00b94a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b94aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return;
}


// ===== 00b94aa4  FUN_00b94aa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b94aa4(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x28);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4c48;
  local_b8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b957a4;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00b94bb4  FUN_00b94bb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b94bb4(long param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d0;
  code *local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 local_44 [2];
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d0 = *(long *)(param_1 + 0x28);
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = local_44;
  uStack_c0 = _UNK_001f46f8;
  local_c8 = _DAT_001f46f0;
  local_44[0] = param_2;
  FUN_0066f1ac(&local_a8);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b957f4;
    local_40[0] = (undefined1 *)&local_d0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&local_a8,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_b8;
  }
  else {
    plVar4 = (long *)(local_d0 + ((long)uStack_c0 >> 1));
    pcVar3 = local_c8;
    if ((uStack_c0 & 1) != 0) {
      pcVar3 = *(code **)(local_c8 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b0);
    local_b8 = (undefined1 *)(CONCAT71(local_b8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&local_a8);
  return bVar1 & 1;
}


// ===== 00b94cdc  FUN_00b94cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b94cdc(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
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
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x28);
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
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2798;
  local_c0 = _DAT_001f2790;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b9584c;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b94de0  FUN_00b94de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b94de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  long *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  puStack_a8 = &local_100;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c8 = *(long *)(param_1 + 0x28);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2338;
  local_c0 = _DAT_001f2330;
  local_100 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00b95898;
    local_f0[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_f0,&uStack_f1,&uStack_f2);
    (*local_e0)(0,local_f0,local_f0);
    FUN_0066f318(&puStack_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c8 + ((long)uStack_b8 >> 1));
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a8,uStack_a0);
  }
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b94f1c  FUN_00b94f1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b94f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ab8;
  local_b8 = _DAT_001f3ab0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b958e4;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b95058  FUN_00b95058 =====

void FUN_00b95058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b95068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  return;
}


// ===== 00b9506c  FUN_00b9506c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b9506c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
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
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x28);
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
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f1cc8;
  local_c0 = _DAT_001f1cc0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b95930;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b95170  FUN_00b95170 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b95170(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined4 local_e8;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &local_e8;
  uStack_b0 = _UNK_001f2918;
  local_b8 = _DAT_001f2910;
  local_e8 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b9597c;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b952ac  FUN_00b952ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b952ac(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x28);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3118;
  local_b8 = _DAT_001f3110;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 0x20);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b959c8;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b953a8  FUN_00b953a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b953a8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4708;
  local_b8 = _DAT_001f4700;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b95a0c;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b954e4  FUN_00b954e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b954e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3208;
  local_b8 = _DAT_001f3200;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b95a0c;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b95620  FUN_00b95620 =====

bool FUN_00b95620(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x30) == 1;
}


// ===== 00b95638  FUN_00b95638 =====

void FUN_00b95638(long param_1)

{
  FUN_00b953a8(param_1 + -8);
  return;
}


// ===== 00b95644  FUN_00b95644 =====

void FUN_00b95644(long param_1)

{
  FUN_00b954e4(param_1 + -8);
  return;
}


// ===== 00b95650  FUN_00b95650 =====

void FUN_00b95650(long param_1)

{
  FUN_00b9492c(param_1 + -8);
  return;
}


// ===== 00b9565c  FUN_00b9565c =====

void FUN_00b9565c(long param_1)

{
  FUN_00b9492c((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00b95690  FUN_00b95690 =====

void FUN_00b95690(long param_1)

{
  FUN_00b9492c(param_1 + -0x10);
  return;
}


// ===== 00b9569c  FUN_00b9569c =====

void FUN_00b9569c(long param_1)

{
  FUN_00b9492c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00b956d0  FUN_00b956d0 =====

void FUN_00b956d0(long param_1)

{
  FUN_00b94de0(param_1 + -0x10);
  return;
}


// ===== 00b956dc  FUN_00b956dc =====

void FUN_00b956dc(long param_1)

{
  FUN_00b94f1c(param_1 + -0x10);
  return;
}


// ===== 00b956e8  FUN_00b956e8 =====

void FUN_00b956e8(long param_1)

{
  FUN_00b952ac(param_1 + -0x10);
  return;
}


// ===== 00b956f4  FUN_00b956f4 =====

void FUN_00b956f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb956fc);
  (*pcVar1)();
}


// ===== 00b956fc  FUN_00b956fc =====

void FUN_00b956fc(long param_1)

{
  FUN_00b9492c(param_1 + -8);
  return;
}


// ===== 00b95708  FUN_00b95708 =====

void FUN_00b95708(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb95710);
  (*pcVar1)();
}


// ===== 00b95710  FUN_00b95710 =====

void FUN_00b95710(long param_1)

{
  FUN_00b9492c(param_1 + -0x10);
  return;
}


// ===== 00b9571c  FUN_00b9571c =====

void FUN_00b9571c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb95724);
  (*pcVar1)();
}


// ===== 00b95724  FUN_00b95724 =====

void FUN_00b95724(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 00b95760  FUN_00b95760 =====

void FUN_00b95760(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b957a4  FUN_00b957a4 =====

void FUN_00b957a4(undefined8 *param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  bVar1 = (*pcVar2)();
  *(byte *)(plVar3 + 3) = bVar1 & 1;
  FUN_0066f2dc((long)plVar3 + 0x1c);
  return;
}


// ===== 00b957f4  FUN_00b957f4 =====

void FUN_00b957f4(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined1 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b9584c  FUN_00b9584c =====

void FUN_00b9584c(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b95898  FUN_00b95898 =====

void FUN_00b95898(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4],plVar3[5]);
  FUN_0066f2dc(plVar3 + 6);
  return;
}


// ===== 00b958e4  FUN_00b958e4 =====

void FUN_00b958e4(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b95930  FUN_00b95930 =====

void FUN_00b95930(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b9597c  FUN_00b9597c =====

void FUN_00b9597c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined4 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b959c8  FUN_00b959c8 =====

void FUN_00b959c8(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b95a0c  FUN_00b95a0c =====

void FUN_00b95a0c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b95a58  FUN_00b95a58 =====

void FUN_00b95a58(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00b95a7c  FUN_00b95a7c =====

bool FUN_00b95a7c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b95ad4  FUN_00b95ad4 =====

void FUN_00b95ad4(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
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
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d47118;
  param_1[1] = &PTR_FUN_00d471a8;
  local_c0 = FUN_00b966c4;
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
  local_b8 = 0;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[2];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b96700;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00b95bec  FUN_00b95bec =====

void FUN_00b95bec(void *param_1)

{
  FUN_00b95ad4();
  operator_delete(param_1);
  return;
}


// ===== 00b95c1c  FUN_00b95c1c =====

void FUN_00b95c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b95c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


// ===== 00b95c30  FUN_00b95c30 =====

void FUN_00b95c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b95c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}


// ===== 00b95c44  FUN_00b95c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b95c44(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4c48;
  local_b8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96744;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00b95d54  FUN_00b95d54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b95d54(long param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d0;
  code *local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 local_44 [2];
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d0 = *(long *)(param_1 + 0x18);
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = local_44;
  uStack_c0 = _UNK_001f46f8;
  local_c8 = _DAT_001f46f0;
  local_44[0] = param_2;
  FUN_0066f1ac(&local_a8);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96794;
    local_40[0] = (undefined1 *)&local_d0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&local_a8,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_b8;
  }
  else {
    plVar4 = (long *)(local_d0 + ((long)uStack_c0 >> 1));
    pcVar3 = local_c8;
    if ((uStack_c0 & 1) != 0) {
      pcVar3 = *(code **)(local_c8 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b0);
    local_b8 = (undefined1 *)(CONCAT71(local_b8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&local_a8);
  return bVar1 & 1;
}


// ===== 00b95e7c  FUN_00b95e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b95e7c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
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
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
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
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2798;
  local_c0 = _DAT_001f2790;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b967ec;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b95f80  FUN_00b95f80 =====

void FUN_00b95f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b95f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
  return;
}


// ===== 00b95f94  FUN_00b95f94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b95f94(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ab8;
  local_b8 = _DAT_001f3ab0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96838;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b960d0  FUN_00b960d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b960d0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3d98;
  local_b8 = _DAT_001f3d90;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96838;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b9620c  FUN_00b9620c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b9620c(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f1cc8;
  local_d0 = _DAT_001f1cc0;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b96884;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00b96328  FUN_00b96328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b96328(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
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
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
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
  uStack_a0 = _UNK_001f2918;
  local_a8 = _DAT_001f2910;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b968dc(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00b963c0  FUN_00b963c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b963c0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4708;
  local_b8 = _DAT_001f4700;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96a64;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b964fc  FUN_00b964fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b964fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3208;
  local_b8 = _DAT_001f3200;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b96a64;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b96638  FUN_00b96638 =====

bool FUN_00b96638(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00b96650  FUN_00b96650 =====

void FUN_00b96650(long param_1)

{
  FUN_00b963c0(param_1 + -8);
  return;
}


// ===== 00b9665c  FUN_00b9665c =====

void FUN_00b9665c(long param_1)

{
  FUN_00b964fc(param_1 + -8);
  return;
}


// ===== 00b96668  FUN_00b96668 =====

void FUN_00b96668(long param_1)

{
  FUN_00b95ad4(param_1 + -8);
  return;
}


// ===== 00b96674  FUN_00b96674 =====

void FUN_00b96674(long param_1)

{
  FUN_00b95ad4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00b966a8  FUN_00b966a8 =====

void FUN_00b966a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb966b0);
  (*pcVar1)();
}


// ===== 00b966b0  FUN_00b966b0 =====

void FUN_00b966b0(long param_1)

{
  FUN_00b95ad4(param_1 + -8);
  return;
}


// ===== 00b966bc  FUN_00b966bc =====

void FUN_00b966bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb966c4);
  (*pcVar1)();
}


// ===== 00b966c4  FUN_00b966c4 =====

void FUN_00b966c4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00b96700  FUN_00b96700 =====

void FUN_00b96700(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b96744  FUN_00b96744 =====

void FUN_00b96744(undefined8 *param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  bVar1 = (*pcVar2)();
  *(byte *)(plVar3 + 3) = bVar1 & 1;
  FUN_0066f2dc((long)plVar3 + 0x1c);
  return;
}


// ===== 00b96794  FUN_00b96794 =====

void FUN_00b96794(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined1 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b967ec  FUN_00b967ec =====

void FUN_00b967ec(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b96838  FUN_00b96838 =====

void FUN_00b96838(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b96884  FUN_00b96884 =====

void FUN_00b96884(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b968dc  FUN_00b968dc =====

void FUN_00b968dc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b969e4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b969e4  FUN_00b969e4 =====

void FUN_00b969e4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00b96a64  FUN_00b96a64 =====

void FUN_00b96a64(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b96ab0  FUN_00b96ab0 =====

void FUN_00b96ab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc0);
  FUN_00b96b20(pvVar1,param_2,param_3);
  *param_1 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    FUN_00d0f740(1,pvVar1);
  }
  return;
}


// ===== 00b96b10  FUN_00b96b10 =====

undefined8 FUN_00b96b10(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x40);
}


// ===== 00b96b20  FUN_00b96b20 =====

void FUN_00b96b20(undefined4 *param_1,long param_2,long *param_3)

{
  long *****ppppplVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long ****local_60;
  ulong local_58;
  code *local_50;
  code *pcStack_48;
  
  *param_1 = 0;
  lVar8 = param_3[0x1d];
  plVar7 = (long *)(param_1 + 2);
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(bool *)((long)param_1 + 5) = lVar8 != 0;
  lVar8 = *param_3;
  if (lVar8 == 0) {
    lVar8 = FUN_007e3d94();
    pvVar3 = operator_new(0xd8);
    FUN_007e0b20(pvVar3,lVar8);
    plVar4 = *(long **)(param_1 + 4);
    *(void **)(param_1 + 4) = pvVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    plVar4 = (long *)*plVar7;
    *plVar7 = lVar8;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    FUN_007e0c74(*(undefined8 *)(param_1 + 4),"pc_network_thread",0x11,0);
    FUN_007e1adc(*(undefined8 *)(param_1 + 4));
    lVar8 = *(long *)(param_1 + 4);
  }
  *(long *)(param_1 + 8) = lVar8;
  lVar8 = param_3[1];
  if (lVar8 == 0) {
    lVar8 = FUN_007e1984();
    FUN_007e0c74(lVar8,"pc_worker_thread",0x10,0);
    FUN_007e1adc(lVar8);
    lVar9 = lVar8;
  }
  else {
    lVar9 = 0;
  }
  *(long *)(param_1 + 10) = lVar9;
  *(long *)(param_1 + 0xc) = lVar8;
  lVar8 = param_3[2];
  *(undefined1 *)(param_1 + 1) = 0;
  if ((lVar8 == 0) && (lVar8 = FUN_007e06bc(), lVar8 == 0)) {
    FUN_007e03ac();
    lVar8 = FUN_007e096c();
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *(long *)(param_1 + 0xe) = lVar8;
  if (*(char *)((long)param_1 + 5) == '\x01') {
    uVar5 = (**(code **)(*(long *)param_3[0x1d] + 0x18))((long *)param_3[0x1d],param_2,param_3);
  }
  else {
    uVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  param_1[0x12] = 0;
  FUN_00896f84(param_1 + 0x14);
  lVar8 = param_3[0x10];
  param_3[0x10] = 0;
  *(long *)(param_1 + 0x24) = lVar8;
  lVar8 = param_3[0xf];
  param_3[0xf] = 0;
  *(long *)(param_1 + 0x26) = lVar8;
  lVar8 = param_3[0x1d];
  param_3[0x1d] = 0;
  *(long *)(param_1 + 0x28) = lVar8;
  lVar8 = param_3[10];
  param_3[10] = 0;
  *(long *)(param_1 + 0x2a) = lVar8;
  pvVar3 = (void *)param_3[0x12];
  param_3[0x12] = 0;
  if (pvVar3 == (void *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    pvVar3 = operator_new(0x10);
    FUN_00b971b8(pvVar3,uVar5);
  }
  *(void **)(param_1 + 0x2c) = pvVar3;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  FUN_007e2104(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
  FUN_007e2104(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 8));
  FUN_007e2104(*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 8));
  uVar6 = FUN_007e18fc(*(undefined8 *)(param_1 + 8));
  if ((uVar6 & 1) == 0) {
    local_60 = *(long *****)(param_1 + 8);
    local_58 = *(ulong *)(param_1 + 0xc);
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_00b970ec;
    (*(code *)(*local_60)[1])(local_60,&local_60,&uStack_61,&uStack_62);
    (*local_50)(0,&local_60,&local_60);
  }
  lVar8 = param_3[3];
  if ((lVar8 == 0) && (lVar8 = *plVar7, lVar8 == 0)) {
    lVar8 = FUN_007e1210(*(undefined8 *)(param_1 + 8));
    lVar9 = *(long *)(param_1 + 0x26);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x26);
  }
  if (lVar9 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x24);
    pvVar3 = operator_new(0x178);
    FUN_00bcaaac(pvVar3,param_2,lVar8,uVar5);
    plVar7 = *(long **)(param_1 + 0x26);
    *(void **)(param_1 + 0x26) = pvVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (*(long *)(param_1 + 0x2a) == 0) {
    pvVar3 = operator_new(0x10);
    FUN_00bd20d8(pvVar3,lVar8);
    plVar7 = *(long **)(param_1 + 0x2a);
    *(void **)(param_1 + 0x2a) = pvVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_007e19ec(*(undefined8 *)(param_1 + 0xe),100);
  FUN_007e19ec(*(undefined8 *)(param_1 + 0xc),0x1e);
  FUN_007e19ec(*(undefined8 *)(param_1 + 8),10);
  (**(code **)(**(long **)(param_2 + 8) + 0x10))
            (&local_60,*(long **)(param_2 + 8),"WebRTC-SynchronousDestructors",0x1d);
  uVar6 = local_58;
  if (-1 < (long)local_50) {
    uVar6 = (ulong)local_50 >> 0x38;
  }
  if (uVar6 < 7) {
    bVar2 = false;
  }
  else {
    ppppplVar1 = (long *****)local_60;
    if (-1 < (long)local_50) {
      ppppplVar1 = &local_60;
    }
    bVar2 = *(int *)ppppplVar1 == 0x62616e45 && *(int *)((long)ppppplVar1 + 3) == 0x64656c62;
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  *(bool *)(param_1 + 6) = bVar2;
  return;
}


// ===== 00b96ecc  FUN_00b96ecc =====

void FUN_00b96ecc(long param_1)

{
  long *plVar1;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_40[0] = param_1;
    (**(code **)(*plVar1 + 0x60))(plVar1,local_40,FUN_00b97144,&uStack_1);
  }
  else {
    local_40[0] = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    local_30 = FUN_00b97170;
    pcStack_28 = FUN_00b97168;
    (**(code **)(*plVar1 + 8))(plVar1,local_40,&uStack_1,&uStack_2);
    (*local_30)(0,local_40,local_40);
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_007e03ac();
    FUN_007e0a00();
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_00896fd4(param_1 + 0x50);
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}


// ===== 00b9709c  FUN_00b9709c =====

void FUN_00b9709c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b970c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
  return;
}


// ===== 00b970c4  FUN_00b970c4 =====

void FUN_00b970c4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b970e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
  return;
}


// ===== 00b970ec  FUN_00b970ec =====

void FUN_00b970ec(long *param_1)

{
  long lVar1;
  
  FUN_007e1e64(*param_1,0);
  FUN_007e210c(*param_1);
  lVar1 = *param_1;
  if (param_1[1] != lVar1) {
    return;
  }
  FUN_007e2104(lVar1,lVar1);
  return;
}


// ===== 00b97144  FUN_00b97144 =====

void FUN_00b97144(long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*param_1 + 0x40);
  *(undefined8 *)(*param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b97160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00b97168  FUN_00b97168 =====

void FUN_00b97168(void)

{
  return;
}


// ===== 00b97170  FUN_00b97170 =====

void FUN_00b97170(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar3 = *param_2;
    *param_2 = 0;
    *param_3 = lVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb971b8);
    (*pcVar1)();
  }
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b971ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


// ===== 00b971b8  FUN_00b971b8 =====

void FUN_00b971b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d471d8;
  param_1[1] = param_2;
  return;
}


// ===== 00b971cc  FUN_00b971cc =====

void * FUN_00b971cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x160);
  FUN_00b9727c(pvVar1,param_2,*(undefined8 *)(param_1 + 8),param_3);
  return pvVar1;
}


// ===== 00b97220  FUN_00b97220 =====

void FUN_00b97220(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_00b999e4(&local_40,param_3);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[2] = local_30;
  return;
}


// ===== 00b97268  FUN_00b97268 =====

void FUN_00b97268(void)

{
  return;
}


// ===== 00b97270  FUN_00b97270 =====

void FUN_00b97270(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b9727c  FUN_00b9727c =====

void FUN_00b9727c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(8);
  *plVar1 = (long)(PTR_DAT_00d52d90 + 0x10);
  FUN_00b972e0(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00b972e0  FUN_00b972e0 =====

void FUN_00b972e0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d47208;
  param_1[1] = &PTR_FUN_00d47318;
  lVar5 = *param_2;
  param_1[4] = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar5 = param_2[1];
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  param_1[6] = param_2[2];
  param_1[5] = lVar5;
  param_1[8] = lVar7;
  param_1[7] = lVar6;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0x10))();
  FUN_00889c98(param_1 + 9,uVar4);
  param_1[0xe] = FUN_00b99e20;
  param_1[0xf] = &DAT_00256720;
  param_1[10] = param_5;
  param_1[0xb] = param_3;
  param_1[0xc] = param_1;
  param_1[0x10] = param_1;
  param_1[0x12] = FUN_00b99e34;
  param_1[0x13] = &DAT_00256740;
  param_1[0x14] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"DcSctpTransport",0xf);
  uVar3 = FUN_00d0f7a0(1,&DAT_00dbacf0);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,uVar3);
  uVar1 = uStack_40;
  ppppuVar2 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    ppppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  param_1[0x16] = uStack_58;
  param_1[0x15] = local_60;
  param_1[0x17] = local_50;
  FUN_007b53d4(param_1 + 0x18);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = FUN_00ad9b38;
  param_1[0x22] = &DAT_001fbc50;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00b97484(param_1);
  return;
}


// ===== 00b97484  FUN_00b97484 =====

void FUN_00b97484(long param_1)

{
  long local_80 [2];
  code *local_70;
  code *pcStack_68;
  long local_60 [2];
  code *local_50;
  code *pcStack_48;
  long local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b9a350;
    local_40[0] = param_1;
    FUN_00bc8598(*(long *)(param_1 + 0x18),param_1,local_40);
    (*local_30)(0,local_40,local_40);
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_00b9a408;
    local_60[0] = param_1;
    FUN_00bc83e4(*(undefined8 *)(param_1 + 0x18),param_1,local_60);
    (*local_50)(0,local_60,local_60);
    local_70 = FUN_004473ec;
    pcStack_68 = FUN_00b9a438;
    local_80[0] = param_1;
    FUN_00bc8488(*(undefined8 *)(param_1 + 0x18),local_80);
    (*local_70)(0,local_80,local_80);
    FUN_007b5a0c(*(long *)(param_1 + 0x18) + 0x110,param_1,param_1,FUN_00b9a498);
  }
  return;
}


// ===== 00b97570  FUN_00b97570 =====

void FUN_00b97570(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_00d47208;
  param_1[1] = &PTR_FUN_00d47318;
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x50))();
  }
  if ((*(char *)(param_1 + 0x2b) == '\x01') &&
     (pvVar2 = (void *)param_1[0x28], pvVar2 != (void *)0x0)) {
    if (param_1[0x29] - 1 < (ulong)(param_1[0x29] - (long)pvVar2)) goto LAB_00b97698;
    param_1[0x29] = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(char *)(param_1 + 0x27) == '\x01') &&
     (pvVar2 = (void *)param_1[0x24], pvVar2 != (void *)0x0)) {
    if (param_1[0x25] - 1 < (ulong)(param_1[0x25] - (long)pvVar2)) goto LAB_00b97698;
    param_1[0x25] = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(code **)(param_1[0x22] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x22] + 8))(param_1[0x1f]);
  }
  pvVar2 = (void *)param_1[0x1b];
  if (pvVar2 == (void *)0x0) {
LAB_00b976bc:
    FUN_007b5554(param_1 + 0x18);
    if (*(char *)((long)param_1 + 0xbf) < '\0') {
      operator_delete((void *)param_1[0x15]);
    }
    plVar3 = (long *)param_1[0x14];
    param_1[0x14] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (*(code **)(param_1[0x13] + 8) != (code *)0x0) {
      (**(code **)(param_1[0x13] + 8))(param_1[0x10]);
    }
    if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
      (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
    }
    plVar3 = (long *)param_1[10];
    param_1[10] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (long *)param_1[4];
    if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b97768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3);
      return;
    }
    return;
  }
  pvVar4 = (void *)param_1[0x1c];
  uVar6 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)pvVar2 - (long)pvVar4 << 0x3d) - ((long)pvVar2 - (long)pvVar4)) >> 3;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar5 * -8);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar4 == pvVar2) {
      param_1[0x1c] = pvVar2;
      operator_delete(pvVar2);
      goto LAB_00b976bc;
    }
    pvVar4 = (void *)((long)pvVar4 + -8);
  } while (pvVar4 != (void *)0x0);
LAB_00b97698:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b9777c  FUN_00b9777c =====

void FUN_00b9777c(long param_1)

{
  FUN_00b97570(param_1 + -8);
  return;
}


// ===== 00b97788  FUN_00b97788 =====

void FUN_00b97788(void *param_1)

{
  FUN_00b97570();
  operator_delete(param_1);
  return;
}


// ===== 00b977b8  FUN_00b977b8 =====

void FUN_00b977b8(long param_1)

{
  FUN_00b97570((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00b977ec  FUN_00b977ec =====

void FUN_00b977ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined **)(param_1 + 0x110) = &DAT_001fbc50;
  pcVar2 = *(code **)(lVar1 + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0xf8));
  }
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x100) = param_2[1];
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = param_2[2];
  *(undefined8 *)(param_1 + 0x110) = param_2[3];
  param_2[2] = 0;
  param_2[3] = &DAT_001fbc50;
  return;
}


// ===== 00b97858  FUN_00b97858 =====

void FUN_00b97858(long param_1,long *param_2)

{
  *(long **)(param_1 + 0x118) = param_2;
  if ((param_2 != (long *)0x0) && (*(char *)(param_1 + 0xf0) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00b9787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2);
    return;
  }
  return;
}


// ===== 00b97884  FUN_00b97884 =====

undefined8 FUN_00b97884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00b97890  FUN_00b97890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b97890(long param_1,int *param_2)

{
  ulong uVar1;
  int *****pppppiVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  long *__dest;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  size_t sVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 uStack_139;
  long local_138;
  char **ppcStack_130;
  char *local_128;
  undefined8 local_120;
  long *plStack_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int ****local_68;
  char **local_60;
  byte bStack_51;
  
  if (*(long **)(param_1 + 0xa0) == (long *)0x0) {
    plVar19 = *(long **)(param_1 + 0x28);
    local_120 = 0xaaaaaaaaaaaaffff;
    plStack_118 = (long *)0x4a7;
    local_108 = 0xaaaaaaaaaaaa0100;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = 0x500000;
    local_e0 = "sha256kdf-scheme";
    uStack_b4 = (undefined4)DAT_001f56f0;
    uStack_b0 = (undefined4)((ulong)DAT_001f56f0 >> 0x20);
    uStack_ac = 0xdc;
    local_110 = (long)param_2[2];
    uStack_f8 = 0xaaaaaaaaaaaaaa00;
    local_a0 = _UNK_001f2cd8;
    uStack_a8 = _DAT_001f2cd0;
    local_90 = _UNK_001f48a8;
    uStack_98 = _DAT_001f48a0;
    local_128 = *(char **)param_2;
    uStack_88 = DAT_001f56f8;
    local_70 = 0xaaaaaaaa00000000;
    uStack_b8 = 0xaaaaaa01;
    uStack_d0 = _UNK_001f2018;
    uStack_d8 = _DAT_001f2010;
    uStack_c0 = _UNK_001f39b8;
    local_c8 = _DAT_001f39b0;
    local_80 = 0x8aaaaaa00;
    uStack_78 = 0x1aa01aaaaaa00;
    puStack_e8 = (undefined1 *)FUN_00bc8aa8();
    local_120._0_4_ = CONCAT22((short)param_2[3],(undefined2)local_120);
    local_f0 = (undefined1 *)0xffffffffffffffff;
    (**(code **)(*plVar19 + 0x10))(&local_68,plVar19,"WebRTC-DataChannelMessageInterleaving",0x25);
    bVar13 = false;
    if (-1 < (char)bStack_51) {
      local_60 = (char **)(ulong)bStack_51;
    }
    if (6 < local_60) {
      pppppiVar2 = (int *****)local_68;
      if (-1 < (char)bStack_51) {
        pppppiVar2 = &local_68;
      }
      bVar13 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
    }
    if ((char)bStack_51 < '\0') {
      operator_delete(local_68);
    }
    uStack_78._0_6_ = CONCAT15(bVar13,(undefined5)uStack_78);
    if ((char)param_2[10] == '\x01') {
      FUN_00b97e74(param_1 + 0x120,param_2 + 4);
    }
    if ((char)param_2[0x12] == '\x01') {
      FUN_00b97e74(param_1 + 0x140,param_2 + 0xc);
    }
    iVar14 = FUN_00623870();
    if (iVar14 < 1) {
      plVar21 = (long *)operator_new(0x20);
      uVar12 = (uint)(char)*(byte *)(param_1 + 0xbf);
      uVar22 = (ulong)uVar12;
      uVar17 = *(ulong *)(param_1 + 0xb0);
      plVar19 = *(long **)(param_1 + 0xa8);
      if (-1 < (int)uVar12) {
        uVar17 = (ulong)*(byte *)(param_1 + 0xbf);
        plVar19 = (long *)(param_1 + 0xa8);
      }
      __dest = plVar21 + 1;
      *plVar21 = (long)(PTR_DAT_00d52ed0 + 0x10);
      if (0x7ffffffffffffff6 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (uVar17 < 0x17) {
        *(char *)((long)plVar21 + 0x1f) = (char)uVar17;
      }
      else {
        uVar1 = (uVar17 & 0x7ffffffffffffff8) + 8;
        uVar3 = 0x19;
        if (uVar1 != 0x18) {
          uVar3 = uVar1;
        }
        __dest = (long *)operator_new(uVar3);
        plVar21[1] = (long)__dest;
        plVar21[2] = uVar17;
        plVar21[3] = uVar3 | 0x8000000000000000;
      }
      if ((long *)((long)__dest + uVar17) < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= plVar19) && (plVar19 < (long *)((long)__dest + uVar17))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,plVar19,uVar17);
      *(undefined1 *)((long)__dest + uVar17) = 0;
      plVar19 = *(long **)(param_1 + 0x50);
      if ((uVar12 >> 7 & 1) != 0) goto LAB_00b97c2c;
LAB_00b97b5c:
      lVar16 = param_1 + 0xa8;
      uVar22 = uVar22 & 0xff;
    }
    else {
      uVar22 = (ulong)*(byte *)(param_1 + 0xbf);
      plVar21 = (long *)0x0;
      plVar19 = *(long **)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0xbf)) goto LAB_00b97b5c;
LAB_00b97c2c:
      lVar16 = *(long *)(param_1 + 0xa8);
      uVar22 = *(ulong *)(param_1 + 0xb0);
    }
    uVar18 = (**(code **)(*plVar19 + 0x10))(plVar19,lVar16,uVar22,param_1 + 8,plVar21,&local_128);
    plVar19 = *(long **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar18;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
    plVar19 = *(long **)(param_1 + 0x18);
joined_r0x00b97c68:
    if ((((plVar19 != (long *)0x0) && (uVar17 = (**(code **)(*plVar19 + 8))(), (uVar17 & 1) != 0))
        && (*(long **)(param_1 + 0xa0) != (long *)0x0)) &&
       (iVar14 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x58))(), iVar14 == 0)) {
      if ((*(char *)(param_1 + 0x138) == '\x01') && ((*(byte *)(param_1 + 0x158) & 1) != 0)) {
        lVar10 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120);
        lVar16 = 0;
        if (lVar10 != 0) {
          lVar16 = *(long *)(param_1 + 0x120);
        }
        lVar11 = *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140);
        lVar4 = 0;
        if (lVar11 != 0) {
          lVar4 = *(long *)(param_1 + 0x140);
        }
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x38))
                  (*(long **)(param_1 + 0xa0),lVar16,lVar10,lVar4,lVar11);
      }
      else {
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x30))();
      }
    }
    puVar8 = *(undefined2 **)(param_1 + 0xe0);
    for (puVar7 = *(undefined2 **)(param_1 + 0xd8); puVar7 != puVar8; puVar7 = puVar7 + 4) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x70))
                (*(long **)(param_1 + 0xa0),*puVar7,puVar7[3]);
    }
    uVar18 = 1;
  }
  else {
    iVar14 = *param_2;
    piVar15 = (int *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x60))();
    if ((iVar14 == *piVar15) &&
       (iVar14 = param_2[1], lVar16 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x60))(),
       iVar14 == *(int *)(lVar16 + 4))) {
      bVar9 = *(byte *)(param_1 + 0x138);
      if ((bVar9 & *(byte *)(param_2 + 10)) == 0) {
        if (*(byte *)(param_2 + 10) != bVar9) goto LAB_00b97d10;
LAB_00b97cdc:
        bVar9 = *(byte *)(param_1 + 0x158);
        if ((bVar9 & *(byte *)(param_2 + 0x12)) != 0) {
          if ((bVar9 & 1) == 0) {
LAB_00b97e5c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          sVar20 = *(long *)(param_2 + 0xe) - (long)*(void **)(param_2 + 0xc);
          if ((sVar20 == *(long *)(param_1 + 0x148) - (long)*(void **)(param_1 + 0x140)) &&
             (iVar14 = memcmp(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0x140),sVar20),
             iVar14 == 0)) goto LAB_00b97dc4;
          goto LAB_00b97d10;
        }
        if (*(byte *)(param_2 + 0x12) != bVar9) goto LAB_00b97d10;
LAB_00b97dc4:
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x68))
                  (*(long **)(param_1 + 0xa0),(long)param_2[2]);
        plVar19 = *(long **)(param_1 + 0x18);
        goto joined_r0x00b97c68;
      }
      if ((bVar9 & 1) == 0) goto LAB_00b97e5c;
      sVar20 = *(long *)(param_2 + 6) - (long)*(void **)(param_2 + 4);
      if ((sVar20 == *(long *)(param_1 + 0x128) - (long)*(void **)(param_1 + 0x120)) &&
         (iVar14 = memcmp(*(void **)(param_2 + 4),*(void **)(param_1 + 0x120),sVar20), iVar14 == 0))
      goto LAB_00b97cdc;
LAB_00b97d10:
      uVar17 = FUN_004249b0();
      if ((uVar17 & 1) == 0) {
        plStack_118 = (long *)&uStack_139;
        local_128 = "../../media/sctp/dcsctp_transport.cc";
        local_120 = 0x76b;
        local_60 = (char **)&local_138;
        local_68 = (int ****)0x19c0d2;
        local_138 = param_1 + 0xa8;
        pcVar5 = "(set)";
        if ((char)param_2[10] == '\0') {
          pcVar5 = "(not set)";
        }
        ppcStack_130 = &local_128;
        pcVar6 = "(set)";
        if ((char)param_2[0x12] == '\0') {
          pcVar6 = "(not set)";
        }
        FUN_00623bb0("\r\n\t\t\t\t\t\t","../../media/sctp/dcsctp_transport.cc",0x76b,local_138,
                     "->Start(","local_init=",pcVar5,", remote_init=",pcVar6,
                     "): Can\'t change sctp-init on already started transport.");
      }
    }
    else {
      uVar17 = FUN_004249b0();
      if ((uVar17 & 1) == 0) {
        local_128 = "../../media/sctp/dcsctp_transport.cc";
        local_120 = 0x72b;
        plStack_118 = &local_138;
        local_68 = (int ****)(param_1 + 0xa8);
        local_60 = &local_128;
        FUN_00623bb0(&DAT_00255951,"../../media/sctp/dcsctp_transport.cc",0x72b,local_68,
                     "->Start(local=",*param_2,", remote=",param_2[1],
                     "): Can\'t change ports on already started transport.");
      }
    }
    uVar18 = 0;
  }
  return uVar18;
}


// ===== 00b97e74  FUN_00b97e74 =====

long * FUN_00b97e74(long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  
  if ((char)param_1[3] == '\x01') {
    if (param_1 != param_2) {
      FUN_00674d3c(param_1,*param_2,param_2[1],param_2[1] - *param_2);
    }
  }
  else {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    __src = (void *)*param_2;
    __n = param_2[1] - (long)__src;
    if (__n != 0) {
      if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      __dest = operator_new(__n);
      *param_1 = (long)__dest;
      param_1[1] = (long)__dest;
      param_1[2] = (long)__dest + __n;
      memcpy(__dest,__src,__n);
      param_1[1] = (long)__dest + __n;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}


// ===== 00b97f30  FUN_00b97f30 =====

undefined8 FUN_00b97f30(long param_1,ushort param_2,ushort param_3)

{
  long lVar1;
  long *plVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ushort local_34 [2];
  undefined2 local_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  ushort auStack_14 [2];
  
  uStack_15 = 0xaa;
  auStack_14[0] = 0xaaaa;
  local_18 = 0;
  uStack_16 = 0;
  FUN_00bc8ab4(auStack_14,1);
  puVar4 = *(ushort **)(param_1 + 0xd8);
  lVar1 = (long)*(ushort **)(param_1 + 0xe0) - (long)puVar4;
  if (lVar1 != 0) {
    uVar5 = lVar1 >> 3;
    puVar3 = puVar4;
    do {
      uVar6 = uVar5 >> 1;
      puVar4 = puVar3 + uVar6 * 4 + 4;
      uVar5 = uVar5 + ~uVar6;
      if (param_2 <= puVar3[uVar6 * 4]) {
        puVar4 = puVar3;
        uVar5 = uVar6;
      }
      puVar3 = puVar4;
    } while (uVar5 != 0);
  }
  local_34[0] = param_2;
  auStack_14[0] = param_3;
  if ((puVar4 == *(ushort **)(param_1 + 0xe0)) || (param_2 < *puVar4)) {
    FUN_00b99e50((long *)(param_1 + 0xd8),puVar4,local_34,&local_18);
    plVar2 = *(long **)(param_1 + 0xa0);
  }
  else {
    puVar4[3] = param_3;
    *(uint *)(puVar4 + 1) = CONCAT13(uStack_15,CONCAT12(uStack_16,local_18));
    plVar2 = *(long **)(param_1 + 0xa0);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3);
  }
  return 1;
}


// ===== 00b9802c  FUN_00b9802c =====

undefined4 FUN_00b9802c(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 local_24 [2];
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    pcVar3 = "): Transport is not started.";
    uVar2 = 0x8bb;
  }
  else {
    puVar5 = *(ushort **)(param_1 + 0xd8);
    local_24[0] = (undefined2)param_2;
    lVar1 = (long)*(ushort **)(param_1 + 0xe0) - (long)puVar5;
    if (lVar1 != 0) {
      uVar6 = lVar1 >> 3;
      puVar4 = puVar5;
      do {
        uVar7 = uVar6 >> 1;
        puVar5 = puVar4 + uVar7 * 4 + 4;
        uVar6 = uVar6 + ~uVar7;
        if ((param_2 & 0xffff) <= (uint)puVar4[uVar7 * 4]) {
          puVar5 = puVar4;
          uVar6 = uVar7;
        }
        puVar4 = puVar5;
      } while (uVar6 != 0);
    }
    if ((puVar5 != *(ushort **)(param_1 + 0xe0)) && ((uint)*puVar5 <= (param_2 & 0xffff))) {
      if ((puVar5[1] & 1) != 0) {
        return 0;
      }
      if ((*(byte *)((long)puVar5 + 3) & 1) != 0) {
        return 0;
      }
      if ((puVar5[2] & 1) != 0) {
        return 0;
      }
      *(undefined1 *)(puVar5 + 1) = 1;
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x90))(*(long **)(param_1 + 0xa0),local_24,1);
      return 1;
    }
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    pcVar3 = "): Stream is not open.";
    uVar2 = 0x903;
  }
  FUN_00623bb0(&DAT_00256769,"../../media/sctp/dcsctp_transport.cc",uVar2,param_1 + 0xa8,
               "->ResetStream(sid=",param_2,pcVar3);
  return 0;
}


// ===== 00b98164  FUN_00b98164 =====

void FUN_00b98164(undefined4 *param_1,long param_2,uint param_3,int *param_4,long *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (*(long **)(param_2 + 0xa0) == (long *)0x0) {
    uVar15 = FUN_004249b0();
    if ((uVar15 & 1) == 0) {
      FUN_00623bb0(&DAT_00223e94,"../../media/sctp/dcsctp_transport.cc",0x9d3,param_2 + 0xa8,
                   "->SendData(...): Transport is not started.");
    }
  }
  else {
    puVar9 = *(ushort **)(param_2 + 0xd8);
    lVar4 = (long)*(ushort **)(param_2 + 0xe0) - (long)puVar9;
    if (lVar4 != 0) {
      uVar15 = lVar4 >> 3;
      puVar8 = puVar9;
      do {
        uVar17 = uVar15 >> 1;
        puVar9 = puVar8 + uVar17 * 4 + 4;
        uVar15 = uVar15 + ~uVar17;
        if ((param_3 & 0xffff) <= (uint)puVar8[uVar17 * 4]) {
          puVar9 = puVar8;
          uVar15 = uVar17;
        }
        puVar8 = puVar9;
      } while (uVar15 != 0);
    }
    if ((puVar9 == *(ushort **)(param_2 + 0xe0)) || ((param_3 & 0xffff) < (uint)*puVar9)) {
      uVar15 = FUN_0044075c();
      if ((uVar15 & 1) == 0) {
        pcVar6 = "Skipping message on non-open stream with sid: ";
        uVar5 = 0xa40;
LAB_00b98284:
        FUN_00623bb0(&DAT_001f4e94,"../../media/sctp/dcsctp_transport.cc",uVar5,pcVar6,param_3);
      }
    }
    else {
      if ((((puVar9[1] & 1) == 0) && ((*(byte *)((long)puVar9 + 3) & 1) == 0)) &&
         ((char)puVar9[2] != '\x01')) {
        lVar4 = (**(code **)(**(long **)(param_2 + 0xa0) + 0x60))();
        uVar15 = *(ulong *)(lVar4 + 0x18);
        if ((uVar15 != 0) && (uVar15 < (ulong)param_5[2])) {
          uVar17 = FUN_004022fc();
          if ((uVar17 & 1) == 0) {
            FUN_00623bb0(&DAT_0025676f,"../../media/sctp/dcsctp_transport.cc",0xaba,param_2 + 0xa8,
                         "->SendData(...): Trying to send packet bigger than the max message size: "
                         ,param_5[2]," vs max of ",uVar15);
          }
          uVar7 = 4;
          goto LAB_00b98290;
        }
        if (*param_5 == 0) {
          puVar20 = (undefined1 *)0x0;
        }
        else {
          puVar20 = (undefined1 *)(*(long *)(*param_5 + 0x10) + param_5[1]);
        }
        uVar15 = param_5[2];
        puStack_68 = (undefined1 *)0x0;
        local_60 = (undefined1 *)0x0;
        local_70 = (undefined1 *)0x0;
        if (uVar15 == 0) {
LAB_00b98438:
          local_a0 = local_a0 & 0xffffffffffffff00;
          FUN_00b99db8(&local_70,&local_a0);
          bVar2 = param_5[2] == 0;
        }
        else {
          if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005d34c0();
          }
          local_70 = (undefined1 *)operator_new(uVar15);
          uVar10 = uVar15 - 1;
          uVar17 = uVar10;
          if ((ulong)-(long)local_70 < uVar10) {
            uVar17 = -(long)local_70;
          }
          uVar17 = uVar17 + 1;
          local_60 = local_70 + uVar15;
          puVar11 = puVar20;
          puStack_68 = local_70;
          if (0x20 < uVar17) {
            if ((ulong)-(long)local_70 < uVar10) {
              uVar10 = -(long)local_70;
            }
            if (((local_70 <= local_70 + uVar10) && (puVar20 <= puVar20 + uVar10)) &&
               (0x1f < (ulong)((long)local_70 - (long)puVar20))) {
              puVar16 = (undefined8 *)(local_70 + 0x10);
              uVar10 = 0x20;
              if ((uVar17 & 0x1f) != 0) {
                uVar10 = uVar17 & 0x1f;
              }
              puVar18 = (undefined8 *)(puVar20 + 0x10);
              lVar4 = uVar17 - uVar10;
              puVar11 = puVar20 + lVar4;
              puStack_68 = local_70 + lVar4;
              do {
                puVar1 = puVar18 + -1;
                uVar5 = puVar18[-2];
                uVar22 = puVar18[1];
                uVar21 = *puVar18;
                lVar4 = lVar4 + -0x20;
                puVar18 = puVar18 + 4;
                puVar16[-1] = *puVar1;
                puVar16[-2] = uVar5;
                puVar16[1] = uVar22;
                *puVar16 = uVar21;
                puVar16 = puVar16 + 4;
              } while (lVar4 != 0);
            }
          }
          puVar13 = puStack_68;
          do {
            if (puVar13 == (undefined1 *)0x0) {
              puStack_68 = local_70;
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar12 = puVar11 + 1;
            puStack_68 = puStack_68 + 1;
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar11;
            puVar11 = puVar12;
            puVar13 = puVar14;
          } while (puVar12 != puVar20 + uVar15);
          if (puVar14 == local_70) goto LAB_00b98438;
          bVar2 = false;
        }
        local_a8 = local_60;
        puStack_b0 = puStack_68;
        local_b8 = local_70;
        if (*param_4 == 2) {
          local_c0 = 0x3200000000;
        }
        else {
          if (*param_4 == 1) {
            uVar15 = 0x3500000000;
            local_c0 = 0x3900000000;
          }
          else {
            uVar15 = 0x3300000000;
            local_c0 = 0x3800000000;
          }
          if (!bVar2) {
            local_c0 = uVar15;
          }
        }
        local_70 = (undefined1 *)0x0;
        puStack_68 = (undefined1 *)0x0;
        local_60 = (undefined1 *)0x0;
        uStack_98 = 0xaaaaaaaaaaaaaa00;
        local_90 = -0x5555555555555600;
        local_88 = 0xaaaaaaaaaaaaaa00;
        local_80 = 0;
        local_a0 = CONCAT71(0xaaaaaa00aaaaaa,(char)param_4[1]) ^ 1;
        if ((char)param_4[5] == '\x01') {
          uStack_98 = 0xaaaaaaaaaaaaaa01;
          local_a0 = CONCAT44(param_4[4],(undefined4)local_a0);
        }
        local_c0 = local_c0 | (param_3 & 0xffff | 0xaaaa0000);
        if ((char)param_4[3] == '\x01') {
          local_90 = (long)param_4[2];
          local_88 = 0xaaaaaaaaaaaaaa01;
        }
        iVar3 = (**(code **)(**(long **)(param_2 + 0xa0) + 0x80))
                          (*(long **)(param_2 + 0xa0),&local_c0,&local_a0);
        if (local_b8 != (undefined1 *)0x0) {
          if (puStack_b0 + -1 < puStack_b0 + -(long)local_b8) goto LAB_00b98658;
          puStack_b0 = local_b8;
          operator_delete(local_b8);
        }
        if (iVar3 == 3) {
          *(undefined1 *)(param_2 + 0xf0) = 0;
          *param_1 = 9;
          *(undefined1 *)((long)param_1 + 0x26) = 0;
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 6) = 0;
          *(undefined8 *)(param_1 + 2) = 0;
          *(undefined8 *)((long)param_1 + 0x1d) = 0;
        }
        else if (iVar3 == 0) {
          FUN_005ecd48(param_1);
        }
        else {
          puVar19 = (&PTR_s_ERROR_MESSAGE_EMPTY_00d473e8)[iVar3 - 1];
          uVar5 = *(undefined8 *)(&DAT_001f8da8 + (ulong)(iVar3 - 1) * 8);
          local_d0 = puVar19;
          uStack_c8 = uVar5;
          uVar15 = FUN_004249b0();
          if ((uVar15 & 1) == 0) {
            FUN_00623bb0(&DAT_00255ab6,"../../media/sctp/dcsctp_transport.cc",0xc2b,param_2 + 0xa8,
                         "->SendData(...): send() failed with error ",&local_d0,&DAT_001ea377);
            puVar19 = local_d0;
            uVar5 = uStack_c8;
          }
          *param_1 = 8;
          FUN_00b637f0(param_1 + 2,puVar19,uVar5);
          param_1[8] = 0;
          *(undefined1 *)(param_1 + 9) = 0;
          *(undefined1 *)((long)param_1 + 0x26) = 0;
        }
        if (local_70 == (undefined1 *)0x0) {
          return;
        }
        if ((ulong)((long)puStack_68 - (long)local_70) <= (long)puStack_68 - 1U) {
          puStack_68 = local_70;
          operator_delete(local_70);
          return;
        }
LAB_00b98658:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar15 = FUN_0044075c();
      if ((uVar15 & 1) == 0) {
        pcVar6 = "Skipping message on closing stream with sid: ";
        uVar5 = 0xa80;
        goto LAB_00b98284;
      }
    }
  }
  uVar7 = 6;
LAB_00b98290:
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *param_1 = uVar7;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  return;
}


// ===== 00b98670  FUN_00b98670 =====

undefined1 FUN_00b98670(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}


// ===== 00b9867c  FUN_00b9867c =====

undefined4 FUN_00b9867c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(long **)(param_1 + 0xa0) == (long *)0x0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_00223e94,"../../media/sctp/dcsctp_transport.cc",0xc9b,param_1 + 0xa8,
                   "->max_message_size(...): Transport is not started.");
    }
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x60))();
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
  }
  return uVar1;
}


// ===== 00b986ec  FUN_00b986ec =====

long * FUN_00b986ec(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [84];
  ushort local_2c;
  byte local_28;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb0))(auStack_80);
    if ((local_28 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0xb0))(auStack_80);
      if ((local_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      plVar1 = (long *)((ulong)local_2c | 0x100000000);
    }
  }
  return plVar1;
}


// ===== 00b98778  FUN_00b98778 =====

long * FUN_00b98778(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [82];
  ushort local_2e;
  byte local_28;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb0))(auStack_80);
    if ((local_28 & 1) == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0xb0))(auStack_80);
      if ((local_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      plVar1 = (long *)((ulong)local_2e | 0x100000000);
    }
  }
  return plVar1;
}


// ===== 00b98804  FUN_00b98804 =====

void FUN_00b98804(long param_1,undefined2 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b9881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00b98824  FUN_00b98824 =====

void FUN_00b98824(long param_1,undefined2 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b9883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00b98844  FUN_00b98844 =====

void FUN_00b98844(long param_1,undefined2 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b9885c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00b98864  FUN_00b98864 =====

undefined4 FUN_00b98864(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined *in_stack_fffffffffffffef0;
  undefined1 uStack_f9;
  long local_f8;
  char **ppcStack_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  char ***local_78;
  char **local_70;
  char *pcStack_68;
  char *local_60;
  char **ppcStack_58;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x60))();
  if (*(ulong *)(lVar3 + 0x10) < param_3) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      local_e8 = "../../media/sctp/dcsctp_transport.cc";
      local_e0 = 0xe03;
      local_d8 = &local_f8;
      ppcStack_58 = &local_e8;
      local_60 = (char *)(param_1 + 0xa8);
      local_70 = &local_60;
      local_78 = (char ***)0x1e9373;
      lVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x60))();
      FUN_00623bb0(&DAT_0025676f,*(undefined8 *)local_70[1],*(undefined4 *)(local_70[1] + 8),
                   *local_70,local_78,param_3," vs max of ",*(undefined8 *)(lVar3 + 0x10));
    }
    uVar2 = 2;
  }
  else {
    if (((DAT_00dbace8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbace8), iVar1 != 0)) {
      DAT_00dbace0 = (char **)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00dbace8);
    }
    local_78 = (char ***)0x0;
    pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (char **)&DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)DAT_00dbace0 != '\0') {
      in_stack_fffffffffffffef0 =
           (undefined *)((ulong)in_stack_fffffffffffffef0 & 0xffffffffffffff00);
      FUN_0066d348(0x42,DAT_00dbace0,"DcSctpTransport::SendPacket",0,0,0,0,0,
                   in_stack_fffffffffffffef0);
      local_70 = DAT_00dbace0;
      pcStack_68 = "DcSctpTransport::SendPacket";
      local_78 = &local_70;
    }
    if (*(long **)(param_1 + 0x18) == (long *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      if ((uVar4 & 1) == 0) {
        uVar2 = 2;
      }
      else {
        plVar5 = *(long **)(param_1 + 0x18);
        FUN_00897b38(&local_e8);
        iVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_3,&local_e8,0);
        FUN_00897c8c(&local_e8);
        uVar2 = 0;
        if (iVar1 < 0) {
          uVar4 = FUN_004022fc();
          if ((uVar4 & 1) == 0) {
            local_e8 = "../../media/sctp/dcsctp_transport.cc";
            local_e0 = 0xea2;
            local_d8 = (long *)&uStack_f9;
            ppcStack_f0 = &local_e8;
            local_f8 = param_1 + 0xa8;
            ppcStack_58 = (char **)&local_f8;
            local_60 = "->SendPacket(length=";
            uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
            in_stack_fffffffffffffef0 = &DAT_001ea377;
            FUN_00623bb0(&DAT_00256776,*(undefined8 *)ppcStack_58[1],
                         *(undefined4 *)((long)ppcStack_58[1] + 8),*ppcStack_58,local_60,param_3,
                         ") failed with error: ",uVar2,&DAT_001ea377);
          }
          iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
          uVar2 = 1;
          if (iVar1 != 0x73 && iVar1 != 0xb) {
            uVar2 = 2;
          }
        }
      }
    }
    if ((local_78 != (char ***)0x0) && (*(char *)*local_78 != '\0')) {
      FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,
                   (ulong)in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    }
  }
  return uVar2;
}


// ===== 00b98b44  FUN_00b98b44 =====

void FUN_00b98b44(long param_1)

{
  FUN_00b98864(param_1 + -8);
  return;
}


// ===== 00b98b50  FUN_00b98b50 =====

void * FUN_00b98b50(long param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  FUN_00bc8d88(pvVar1,param_1 + 0x58,param_2);
  return pvVar1;
}


// ===== 00b98b9c  FUN_00b98b9c =====

void * FUN_00b98b9c(long param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  FUN_00bc8d88(pvVar1,param_1 + 0x50,param_2);
  return pvVar1;
}


// ===== 00b98be8  FUN_00b98be8 =====

ulong FUN_00b98be8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  return uVar2;
}


// ===== 00b98c68  FUN_00b98c68 =====

ulong FUN_00b98c68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  return uVar2;
}


// ===== 00b98ce8  FUN_00b98ce8 =====

void FUN_00b98ce8(long param_1)

{
  FUN_00889ca4(param_1 + 0x48);
  return;
}


// ===== 00b98cf4  FUN_00b98cf4 =====

void FUN_00b98cf4(long param_1)

{
  FUN_00889ca4(param_1 + 0x40);
  return;
}


// ===== 00b98d00  FUN_00b98d00 =====

void FUN_00b98d00(long param_1)

{
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
    if (*(long **)(param_1 + 0x118) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b98d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x118) + 0x30))();
      return;
    }
  }
  return;
}


// ===== 00b98d30  FUN_00b98d30 =====

void FUN_00b98d30(long param_1)

{
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    if (*(long **)(param_1 + 0x110) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b98d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x110) + 0x30))();
      return;
    }
  }
  return;
}


// ===== 00b98d60  FUN_00b98d60 =====

void FUN_00b98d60(long param_1,undefined2 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x118);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b98d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00b98d80  FUN_00b98d80 =====

void FUN_00b98d80(long param_1,undefined2 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x110);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b98d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00b98da0  FUN_00b98da0 =====

void FUN_00b98da0(long param_1,undefined2 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar3 = *(int *)(param_2 + 2) - 0x32;
  if ((uVar3 < 8) && ((0xdfU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    uVar2 = *(undefined4 *)(&DAT_001f8b08 + (ulong)uVar3 * 4);
    FUN_007b5928(param_1 + 0xc0);
    if ((*(uint *)(param_2 + 2) & 0xfffffffe) != 0x38) {
      lVar4 = *(long *)(param_2 + 8) - *(long *)(param_2 + 4);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = *(long *)(param_2 + 4);
      }
      FUN_00877fc4(param_1 + 0xc0,lVar1,lVar4);
    }
    plVar5 = *(long **)(param_1 + 0x118);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b98e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,*param_2,uVar2,param_1 + 0xc0);
      return;
    }
  }
  else {
    uVar6 = FUN_0044075c();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_0025677e,"../../media/sctp/dcsctp_transport.cc",0x1030,param_1 + 0xa8,
                   "->OnMessageReceived(): Received an unknown PPID ",*(undefined4 *)(param_2 + 2),
                   " on an SCTP packet. Dropping.");
      return;
    }
  }
  return;
}


// ===== 00b98e9c  FUN_00b98e9c =====

void FUN_00b98e9c(long param_1)

{
  FUN_00b98da0(param_1 + -8);
  return;
}


// ===== 00b98ea8  FUN_00b98ea8 =====

void FUN_00b98ea8(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  char *local_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  char *local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  long local_40;
  char **ppcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_3;
  uStack_28 = param_4;
  if (param_2 == 7) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uStack_50 = 0x10e8;
    local_70 = "RESOURCE_EXHAUSTION";
    uStack_68 = 0x13;
    uVar2 = 0x10e8;
  }
  else {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uStack_50 = 0x110b;
    uStack_68 = *(undefined8 *)(&DAT_002567c0 + (ulong)param_2 * 8);
    local_70 = (&PTR_s_NO_ERROR_00d47408)[param_2];
    uVar2 = 0x110b;
  }
  ppcStack_38 = &local_58;
  local_48 = &uStack_59;
  local_58 = "../../media/sctp/dcsctp_transport.cc";
  local_40 = param_1 + 0xa8;
  FUN_00623bb0(&DAT_00256784,"../../media/sctp/dcsctp_transport.cc",uVar2,local_40,
               "->OnError(error=",&local_70,", message=",&local_30,&DAT_001a3771);
  return;
}


// ===== 00b98fc4  FUN_00b98fc4 =====

void FUN_00b98fc4(long param_1)

{
  FUN_00b98ea8(param_1 + -8);
  return;
}


// ===== 00b98fd0  FUN_00b98fd0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b98fd0(long param_1,uint param_2,undefined8 *******param_3,char **param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******__dest;
  long *plVar8;
  undefined8 *******pppppppuVar9;
  char **__n;
  undefined4 local_e0 [2];
  undefined8 ******local_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined8 *******local_b8;
  char **ppcStack_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 *******pppppppuStack_98;
  char **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 *******local_60;
  char **ppcStack_58;
  
  local_60 = param_3;
  ppcStack_58 = param_4;
  uVar6 = FUN_004249b0();
  if ((uVar6 & 1) == 0) {
    local_90 = (char **)&uStack_61;
    local_a0 = "../../media/sctp/dcsctp_transport.cc";
    pppppppuStack_98 = (undefined8 *******)0x1153;
    local_b8 = (undefined8 *******)(param_1 + 0xa8);
    ppcStack_b0 = &local_a0;
    local_78 = &DAT_00256850 + *(int *)(&DAT_00256850 + (ulong)param_2 * 4);
    uStack_70 = *(undefined8 *)(&DAT_00256808 + (ulong)param_2 * 8);
    FUN_00623bb0(&DAT_00256784,"../../media/sctp/dcsctp_transport.cc",0x1153,param_1 + 0xa8,
                 "->OnAborted(error=",&local_78,", message=",&local_60,&DAT_001a3771);
    param_4 = ppcStack_58;
    param_3 = local_60;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  pppppppuStack_98 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (char **)&DAT_aaaaaaaaaaaaaaaa;
  if ((char **)0x7ffffffffffffff6 < param_4) {
LAB_00b99304:
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < (char **)0x17) {
    local_a8 = CONCAT17((char)param_4,(undefined7)local_a8);
    pppppppuVar7 = &local_b8;
  }
  else {
    uVar6 = ((ulong)param_4 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar6 != 0x18) {
      uVar1 = uVar6;
    }
    pppppppuVar7 = (undefined8 *******)operator_new(uVar1);
    local_a8 = uVar1 | 0x8000000000000000;
    local_b8 = pppppppuVar7;
    ppcStack_b0 = param_4;
  }
  if ((undefined8 *******)((long)pppppppuVar7 + (long)param_4) < pppppppuVar7) goto LAB_00b992dc;
  if ((pppppppuVar7 <= param_3) &&
     (param_3 < (undefined8 *******)((long)pppppppuVar7 + (long)param_4))) goto LAB_00b992f0;
  memmove(pppppppuVar7,param_3,(size_t)param_4);
  *(undefined1 *)((long)pppppppuVar7 + (long)param_4) = 0;
  uVar6 = local_a8;
  __n = (char **)(long)local_a8._7_1_;
  if ((long)__n < 0) {
    local_a0 = (char *)CONCAT44(local_a0._4_4_,0xb);
    if ((char **)0x7ffffffffffffff6 < ppcStack_b0) goto LAB_00b99304;
    pppppppuVar9 = (undefined8 *******)((ulong)&local_a0 | 8);
    __n = ppcStack_b0;
    pppppppuVar7 = local_b8;
    __dest = pppppppuVar9;
    if ((char **)0x16 < ppcStack_b0) goto LAB_00b99174;
LAB_00b99144:
    local_a0 = (char *)CONCAT44(local_a0._4_4_,0xb);
    local_88 = (undefined1 *)CONCAT17((char)__n,(undefined7)local_88);
    pppppppuVar9 = __dest;
  }
  else {
    pppppppuVar9 = (undefined8 *******)((ulong)&local_a0 | 8);
    pppppppuVar7 = &local_b8;
    __dest = pppppppuVar9;
    if (__n < (char **)0x17) goto LAB_00b99144;
LAB_00b99174:
    local_a0 = (char *)CONCAT44(local_a0._4_4_,0xb);
    uVar1 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *******)operator_new(uVar2);
    local_88 = (undefined1 *)(uVar2 | 0x8000000000000000);
    pppppppuStack_98 = __dest;
    local_90 = __n;
  }
  if (__dest <= (undefined8 *******)((long)__dest + (long)__n)) {
    if ((pppppppuVar7 < __dest) || ((undefined8 *******)((long)__dest + (long)__n) <= pppppppuVar7))
    {
      memmove(__dest,pppppppuVar7,(size_t)__n);
      puVar4 = local_80;
      *(undefined1 *)((long)__dest + (long)__n) = 0;
      local_80._0_5_ = (uint5)(uint)local_80;
      uVar5 = local_80;
      local_80._7_1_ = SUB81(puVar4,7);
      local_80._0_6_ = (uint6)uVar5;
      local_80._0_7_ = (uint7)(uint6)local_80;
      if ((long)uVar6 < 0) {
        operator_delete(local_b8);
      }
      uVar5 = local_80;
      local_80 = (undefined1 *)CONCAT44(local_80._4_4_,4);
      if (param_2 - 3 < 5) {
        local_80._7_1_ = SUB81(uVar5,7);
        local_80 = (undefined1 *)CONCAT17(local_80._7_1_,0x1000000000000);
        local_80._0_6_ = CONCAT24(*(undefined2 *)(&DAT_00256874 + (ulong)(param_2 - 3) * 2),4);
      }
      plVar8 = *(long **)(param_1 + 0x118);
      cVar3 = local_88._7_1_;
      if (plVar8 == (long *)0x0) {
        if (-1 < (long)local_88) {
          return;
        }
      }
      else {
        local_e0[0] = local_a0._0_4_;
        if ((long)local_88 < 0) {
          FUN_005478d8(&local_d8,pppppppuStack_98,local_90);
        }
        else {
          ppppppuStack_d0 = pppppppuVar9[1];
          local_d8 = *pppppppuVar9;
          local_c8 = pppppppuVar9[2];
        }
        uStack_bc = (undefined3)((ulong)local_80 >> 0x20);
        local_c0 = (uint)local_80;
        (**(code **)(*plVar8 + 0x38))(plVar8,local_e0);
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
        if (((uint)(int)cVar3 >> 7 & 1) == 0) {
          return;
        }
      }
      operator_delete(pppppppuStack_98);
      return;
    }
LAB_00b992f0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00b992dc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00b99308  FUN_00b99308 =====

void FUN_00b99308(long param_1)

{
  FUN_00b98fd0(param_1 + -8);
  return;
}


// ===== 00b99314  FUN_00b99314 =====

void FUN_00b99314(long param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if ((*(byte *)(*(long *)(param_1 + 0x110) + 0x10) & 1) == 0) {
    (**(code **)(param_1 + 0x108))(param_1 + 0xf8);
  }
  if (*(long **)(param_1 + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00b99374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x118) + 0x30))();
    return;
  }
  return;
}


// ===== 00b99388  FUN_00b99388 =====

void FUN_00b99388(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 1;
  if ((*(byte *)(*(long *)(param_1 + 0x108) + 0x10) & 1) == 0) {
    (**(code **)(param_1 + 0x100))(param_1 + 0xf0);
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00b993e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x110) + 0x30))();
    return;
  }
  return;
}


// ===== 00b993fc  FUN_00b993fc =====

void FUN_00b993fc(long param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}


// ===== 00b99408  FUN_00b99408 =====

void FUN_00b99408(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}


// ===== 00b99414  FUN_00b99414 =====

void FUN_00b99414(void)

{
  return;
}


// ===== 00b9941c  FUN_00b9941c =====

void FUN_00b9941c(void)

{
  return;
}


// ===== 00b99424  FUN_00b99424 =====

void FUN_00b99424(long param_1,undefined2 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_3 = param_3 << 1;
  if (param_3 != 0) {
    local_70 = param_4;
    uStack_68 = param_5;
    do {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_0025678c,"../../media/sctp/dcsctp_transport.cc",0x12b2,param_1 + 0xa8,
                     "->OnStreamsResetFailed(...): Outgoing stream reset failed",", sid=",*param_2,
                     ", reason: ",&local_70,&DAT_001ea377);
      }
      param_3 = param_3 + -2;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00b994f8  FUN_00b994f8 =====

void FUN_00b994f8(long param_1,undefined2 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_3 = param_3 << 1;
  if (param_3 != 0) {
    local_70 = param_4;
    uStack_68 = param_5;
    do {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_0025678c,"../../media/sctp/dcsctp_transport.cc",0x12b2,param_1 + 0xa0,
                     "->OnStreamsResetFailed(...): Outgoing stream reset failed",", sid=",*param_2,
                     ", reason: ",&local_70,&DAT_001ea377);
      }
      param_3 = param_3 + -2;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00b995cc  FUN_00b995cc =====

void FUN_00b995cc(long param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  
  if ((param_3 & 0x7fffffffffffffff) != 0) {
    puVar1 = param_2 + param_3;
    do {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_00256795,"../../media/sctp/dcsctp_transport.cc",0x1309,param_1 + 0xa8,
                     "->OnStreamsResetPerformed(...): Outgoing stream reset",", sid=",*param_2);
      }
      puVar6 = *(ushort **)(param_1 + 0xd8);
      lVar2 = (long)*(ushort **)(param_1 + 0xe0) - (long)puVar6;
      if (lVar2 != 0) {
        uVar3 = lVar2 >> 3;
        puVar5 = puVar6;
        do {
          uVar7 = uVar3 >> 1;
          puVar6 = puVar5 + uVar7 * 4 + 4;
          uVar3 = uVar3 + ~uVar7;
          if (*param_2 <= puVar5[uVar7 * 4]) {
            puVar6 = puVar5;
            uVar3 = uVar7;
          }
          puVar5 = puVar6;
        } while (uVar3 != 0);
      }
      if (puVar6 == *(ushort **)(param_1 + 0xe0)) {
        return;
      }
      if (*param_2 < *puVar6) {
        return;
      }
      *(undefined1 *)(puVar6 + 2) = 1;
      if (*(char *)((long)puVar6 + 3) == '\x01') {
        plVar4 = *(long **)(param_1 + 0x118);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,*param_2);
        }
        FUN_00b99700(param_1 + 0xd8,param_2);
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


// ===== 00b99700  FUN_00b99700 =====

long FUN_00b99700(long *param_1,ushort *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = (ushort *)*param_1;
  puVar5 = (ushort *)param_1[1];
  if ((long)puVar5 - (long)puVar4 != 0) {
    uVar7 = (long)puVar5 - (long)puVar4 >> 3;
    puVar3 = puVar4;
    do {
      uVar8 = uVar7 >> 1;
      puVar4 = puVar3 + uVar8 * 4 + 4;
      uVar7 = uVar7 + ~uVar8;
      if (*param_2 <= puVar3[uVar8 * 4]) {
        puVar4 = puVar3;
        uVar7 = uVar8;
      }
      puVar3 = puVar4;
    } while (uVar7 != 0);
  }
  puVar3 = puVar4;
  if (puVar4 == puVar5) {
    lVar6 = 0;
  }
  else {
    if (*puVar4 <= *param_2) {
      puVar3 = puVar4 + 4;
    }
    lVar6 = (long)puVar3 - (long)puVar4;
    if (puVar3 < puVar4) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
  }
  if (puVar4 != puVar3) {
    puVar3 = (ushort *)((long)puVar4 + lVar6);
    if (puVar3 != puVar5) {
      do {
        *puVar4 = *puVar3;
        puVar1 = puVar3 + 3;
        uVar2 = *(undefined4 *)(puVar3 + 1);
        puVar3 = puVar3 + 4;
        puVar4[3] = *puVar1;
        *(undefined4 *)(puVar4 + 1) = uVar2;
        puVar4 = puVar4 + 4;
      } while (puVar3 != puVar5);
      puVar5 = (ushort *)param_1[1];
    }
    uVar8 = (ulong)((long)puVar5 + (-8 - ((long)puVar5 << 0x3d))) >> 3;
    uVar7 = (ulong)(((long)puVar4 - (long)puVar5 << 0x3d) - ((long)puVar4 - (long)puVar5)) >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)puVar4 - (int)puVar5 | -(int)puVar5) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      puVar5 = puVar5 + uVar7 * -4;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (puVar5 != puVar4) {
      puVar5 = puVar5 + -4;
      if (puVar5 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = (long)puVar4;
  }
  return lVar6 >> 3;
}


// ===== 00b99850  FUN_00b99850 =====

void FUN_00b99850(long param_1)

{
  FUN_00b995cc(param_1 + -8);
  return;
}


// ===== 00b9985c  FUN_00b9985c =====

void FUN_00b9985c(long param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort local_44 [2];
  
  if ((param_3 & 0x7fffffffffffffff) != 0) {
    puVar1 = param_2 + param_3;
    do {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_00256795,"../../media/sctp/dcsctp_transport.cc",0x13e9,param_1 + 0xa8,
                     "->OnIncomingStreamsReset(...): Incoming stream reset",", sid=",*param_2);
      }
      puVar7 = *(ushort **)(param_1 + 0xd8);
      lVar2 = (long)*(ushort **)(param_1 + 0xe0) - (long)puVar7;
      if (lVar2 != 0) {
        uVar3 = lVar2 >> 3;
        puVar6 = puVar7;
        do {
          uVar5 = uVar3 >> 1;
          puVar7 = puVar6 + uVar5 * 4 + 4;
          uVar3 = uVar3 + ~uVar5;
          if (*param_2 <= puVar6[uVar5 * 4]) {
            puVar7 = puVar6;
            uVar3 = uVar5;
          }
          puVar6 = puVar7;
        } while (uVar3 != 0);
      }
      if (puVar7 == *(ushort **)(param_1 + 0xe0)) {
        return;
      }
      if (*param_2 < *puVar7) {
        return;
      }
      *(undefined1 *)((long)puVar7 + 3) = 1;
      if ((puVar7[1] & 1) == 0) {
        local_44[0] = *param_2;
        (**(code **)(**(long **)(param_1 + 0xa0) + 0x90))(*(long **)(param_1 + 0xa0),local_44,1);
        plVar4 = *(long **)(param_1 + 0x118);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,*param_2);
        }
      }
      if ((char)puVar7[2] == '\x01') {
        plVar4 = *(long **)(param_1 + 0x118);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,*param_2);
        }
        FUN_00b99700(param_1 + 0xd8,param_2);
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


// ===== 00b999d8  FUN_00b999d8 =====

void FUN_00b999d8(long param_1)

{
  FUN_00b9985c(param_1 + -8);
  return;
}


// ===== 00b999e4  FUN_00b999e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b999e4(undefined8 param_1,long param_2)

{
  int *****pppppiVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  int ****local_90;
  ulong local_88;
  byte bStack_79;
  undefined1 **local_78 [2];
  code *local_68;
  undefined *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))();
  FUN_00889c98(&local_98,uVar4);
  plVar5 = (long *)operator_new(8);
  plVar6 = *(long **)(param_2 + 8);
  *plVar5 = (long)(PTR_DAT_00d52d90 + 0x10);
  local_150 = 0xaaaaaaaaaaaaffff;
  local_138 = 0xaaaaaaaaaaaa0100;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = 0x500000;
  local_110 = "sha256kdf-scheme";
  uStack_e4 = (undefined4)DAT_001f56f0;
  uStack_e0 = (undefined4)((ulong)DAT_001f56f0 >> 0x20);
  local_dc = 0xdc;
  local_d0 = _UNK_001f2cd8;
  uStack_d8 = _DAT_001f2cd0;
  local_c0 = _UNK_001f48a8;
  uStack_c8 = _DAT_001f48a0;
  uStack_128 = 0xaaaaaaaaaaaaaa00;
  uStack_140 = _UNK_001f4718;
  uStack_148 = _DAT_001f4710;
  local_158 = 0xffffffffffffffff;
  uStack_b8 = DAT_001f56f8;
  local_a0 = 0xaaaaaaaa00000000;
  uStack_e8 = 0xaaaaaa01;
  uStack_100 = _UNK_001f2018;
  uStack_108 = _DAT_001f2010;
  uStack_f0 = _UNK_001f39b8;
  local_f8 = _DAT_001f39b0;
  local_b0 = 0x8aaaaaa00;
  uStack_a8 = 0x1aa01aaaaaa00;
  puStack_118 = (undefined1 *)FUN_00bc8aa8();
  local_150._0_4_ = CONCAT22(0x400,(undefined2)local_150);
  local_120 = (undefined1 *)0xffffffffffffffff;
  (**(code **)(*plVar6 + 0x10))(&local_90,plVar6,"WebRTC-DataChannelMessageInterleaving",0x25);
  bVar3 = false;
  if (-1 < (char)bStack_79) {
    local_88 = (ulong)bStack_79;
  }
  if (6 < local_88) {
    pppppiVar1 = (int *****)local_90;
    if (-1 < (char)bStack_79) {
      pppppiVar1 = &local_90;
    }
    bVar3 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_79 < '\0') {
    operator_delete(local_90);
  }
  local_68 = FUN_00b9a4c0;
  local_60 = &DAT_002567a0;
  local_78[0] = &local_98;
  uStack_a8._0_6_ = CONCAT15(bVar3,(undefined5)uStack_a8);
  FUN_00b9a54c(param_1,plVar5,&local_158,local_78);
  if (*(code **)(local_60 + 8) != (code *)0x0) {
    (**(code **)(local_60 + 8))(local_78[0]);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b99c60  FUN_00b99c60 =====

uint FUN_00b99c60(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined7 uStack_5f;
  void *local_58;
  char local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  void *local_38;
  char local_28;
  
  local_48 = '\0';
  local_40 = 0;
  local_28 = '\0';
  uStack_64 = 0x400;
  local_60 = 0;
  local_70 = param_2;
  uStack_6c = param_3;
  local_68 = param_4;
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  if ((local_28 == '\x01') && (pvVar1 = (void *)CONCAT71(uStack_3f,local_40), pvVar1 != (void *)0x0)
     ) {
    if ((long)local_38 - 1U < (ulong)((long)local_38 - (long)pvVar1)) goto LAB_00b99d2c;
    local_38 = pvVar1;
    operator_delete(pvVar1);
  }
  if ((local_48 == '\x01') && (pvVar1 = (void *)CONCAT71(uStack_5f,local_60), pvVar1 != (void *)0x0)
     ) {
    if ((long)local_58 - 1U < (ulong)((long)local_58 - (long)pvVar1)) {
LAB_00b99d2c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_58 = pvVar1;
    operator_delete(pvVar1);
  }
  return uVar2 & 1;
}


// ===== 00b99d40  FUN_00b99d40 =====

void FUN_00b99d40(void)

{
  return;
}


// ===== 00b99d48  FUN_00b99d48 =====

void FUN_00b99d48(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b99d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}


// ===== 00b99d5c  FUN_00b99d5c =====

long FUN_00b99d5c(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar1 * 1000;
}


// ===== 00b99d88  FUN_00b99d88 =====

void FUN_00b99d88(void)

{
  return;
}


// ===== 00b99d90  FUN_00b99d90 =====

void FUN_00b99d90(void)

{
  return;
}


// ===== 00b99d98  FUN_00b99d98 =====

void FUN_00b99d98(void)

{
  return;
}


// ===== 00b99da0  FUN_00b99da0 =====

void FUN_00b99da0(void)

{
  return;
}


// ===== 00b99da8  FUN_00b99da8 =====

void FUN_00b99da8(void)

{
  return;
}


// ===== 00b99db0  FUN_00b99db0 =====

void FUN_00b99db0(void)

{
  return;
}


// ===== 00b99db8  FUN_00b99db8 =====

undefined1 * FUN_00b99db8(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (puVar1 < *(undefined1 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = (undefined1 *)FUN_006cc5d8(param_1);
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  return puVar2 + -1;
}


// ===== 00b99e20  FUN_00b99e20 =====

void FUN_00b99e20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b99e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x98))();
  return;
}


// ===== 00b99e34  FUN_00b99e34 =====

void FUN_00b99e34(long *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b99e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0xa0) + 0x28))(*(long **)(*param_1 + 0xa0),*param_2);
  return;
}


// ===== 00b99e50  FUN_00b99e50 =====

undefined8 * FUN_00b99e50(long *param_1,undefined8 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00b9a050:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined2 *)puVar2 = *param_3;
      uVar12 = *param_4;
      *(undefined2 *)((long)puVar2 + 6) = *(undefined2 *)(param_4 + 1);
      *(undefined4 *)((long)puVar2 + 2) = uVar12;
      param_1[1] = (long)(puVar2 + 1);
    }
    else {
      uVar3 = *param_3;
      uVar12 = *param_4;
      uVar4 = *(undefined2 *)(param_4 + 1);
      puVar6 = puVar2;
      for (puVar9 = puVar2 + -1; puVar9 < puVar2; puVar9 = puVar9 + 1) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_00b9a050;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
      }
      param_1[1] = (long)puVar6;
      if (puVar2 != param_2 + 1) {
        lVar11 = 0;
        do {
          lVar5 = lVar11 + -0x10;
          *(undefined2 *)((long)puVar2 + lVar11 + -8) =
               *(undefined2 *)((long)puVar2 + lVar11 + -0x10);
          *(undefined2 *)((long)puVar2 + lVar11 + -2) = *(undefined2 *)((long)puVar2 + lVar11 + -10)
          ;
          *(undefined4 *)((long)puVar2 + lVar11 + -6) =
               *(undefined4 *)((long)puVar2 + lVar11 + -0xe);
          lVar11 = lVar11 + -8;
        } while ((undefined8 *)((long)puVar2 + lVar5) != param_2);
      }
      *(undefined2 *)param_2 = uVar3;
      *(undefined2 *)((long)param_2 + 6) = uVar4;
      *(undefined4 *)((long)param_2 + 2) = uVar12;
    }
  }
  else {
    lVar11 = *param_1;
    uVar1 = ((long)puVar2 - lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00b9a338();
LAB_00b9a068:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar7 = param_1[2] - lVar11;
    local_60 = (void *)0x0;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3d != 0) goto LAB_00b9a068;
      local_60 = operator_new(uVar8 << 3);
    }
    pvStack_48 = (void *)((long)local_60 + uVar8 * 8);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar11));
    local_50 = local_58;
    FUN_00b9a06c(&local_60,param_3,param_4);
    puVar10 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - __n);
    local_50 = (undefined8 *)((long)local_50 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar11;
      operator_delete(local_60);
    }
  }
  return puVar10;
}


// ===== 00b9a06c  FUN_00b9a06c =====

void FUN_00b9a06c(undefined8 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  ulong uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar19 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar19) {
    pvVar3 = (void *)*param_1;
    puVar20 = (undefined8 *)param_1[1];
    if ((long)puVar20 - (long)pvVar3 == 0) {
      uVar7 = (long)param_1[3] - (long)pvVar3 >> 2;
      if (puVar19 == puVar20) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar21 = uVar7 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar8 = (undefined8 *)((long)pvVar6 + uVar21 * 8);
      lVar9 = (long)puVar19 - (long)puVar20;
      iVar18 = (int)puVar19;
      puVar10 = puVar8;
      if (lVar9 != 0) {
        uVar16 = lVar9 - 8U >> 3;
        uVar14 = uVar16;
        if ((ulong)-(long)puVar8 >> 3 <= uVar16) {
          uVar14 = (ulong)-(long)puVar8 >> 3;
        }
        puVar10 = (undefined8 *)((long)puVar8 + lVar9);
        puVar11 = puVar8;
        puVar13 = puVar20;
        if (0x31 < uVar14) {
          if ((ulong)-(long)puVar8 >> 3 <= uVar16) {
            uVar16 = (ulong)-(long)puVar8 >> 3;
          }
          if ((((((iVar18 - (int)puVar20 | -(int)pvVar6) & 7U) == 0) && (puVar8 <= puVar8 + uVar16))
              && (puVar20 <= puVar20 + uVar16)) &&
             (0x1f < (long)pvVar6 + (uVar21 * 8 - (long)puVar20))) {
            uVar2 = uVar14 + 1 & 3;
            puVar17 = (undefined8 *)((long)pvVar6 + uVar21 * 8 + 0x10);
            uVar21 = 4;
            if (uVar2 != 0) {
              uVar21 = uVar2;
            }
            puVar15 = puVar20 + 2;
            lVar12 = (uVar14 + 1) - uVar21;
            lVar9 = ~uVar16 + uVar21;
            puVar11 = puVar8 + lVar12;
            puVar13 = puVar20 + lVar12;
            do {
              puVar5 = puVar15 + -1;
              uVar22 = puVar15[-2];
              uVar24 = puVar15[1];
              uVar23 = *puVar15;
              lVar9 = lVar9 + 4;
              puVar15 = puVar15 + 4;
              puVar17[-1] = *puVar5;
              puVar17[-2] = uVar22;
              puVar17[1] = uVar24;
              *puVar17 = uVar23;
              puVar17 = puVar17 + 4;
            } while (lVar9 != 0);
          }
        }
        do {
          if (puVar11 == (undefined8 *)0x0) goto LAB_00b9a320;
          puVar17 = puVar11 + 1;
          *puVar11 = *puVar13;
          puVar11 = puVar17;
          puVar13 = puVar13 + 1;
        } while (puVar17 != puVar10);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar8;
      uVar14 = (ulong)((long)puVar19 + (-8 - ((long)puVar19 << 0x3d))) >> 3;
      uVar21 = (ulong)(((long)puVar20 - (long)puVar19 << 0x3d) - ((long)puVar20 - (long)puVar19)) >>
               3;
      param_1[2] = puVar10;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar14 <= uVar21) {
        uVar21 = uVar14;
      }
      puVar8 = puVar19;
      if ((1 < uVar21) && ((((int)puVar20 - iVar18 | -iVar18) & 7U) == 0)) {
        uVar21 = uVar21 & 0x1ffffffffffffffe;
        puVar8 = puVar19 + -uVar21;
        do {
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
      }
      while (puVar8 != puVar20) {
        puVar8 = puVar8 + -1;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar20 != (undefined8 *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      lVar9 = (((long)puVar20 - (long)pvVar3 >> 3) + 1) / 2;
      puVar8 = puVar20 + -lVar9;
      if (puVar20 != puVar19) {
        do {
          *(undefined2 *)puVar8 = *(undefined2 *)puVar20;
          puVar1 = (undefined2 *)((long)puVar20 + 6);
          uVar4 = *(undefined4 *)((long)puVar20 + 2);
          puVar20 = puVar20 + 1;
          *(undefined2 *)((long)puVar8 + 6) = *puVar1;
          *(undefined4 *)((long)puVar8 + 2) = uVar4;
          puVar8 = puVar8 + 1;
        } while (puVar20 != puVar19);
        puVar20 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar20 + -lVar9;
      param_1[2] = puVar8;
      puVar19 = puVar8;
    }
  }
  if (puVar19 != (undefined8 *)0x0) {
    *(undefined2 *)puVar19 = *param_2;
    uVar4 = *param_3;
    *(undefined2 *)((long)puVar19 + 6) = *(undefined2 *)(param_3 + 1);
    *(undefined4 *)((long)puVar19 + 2) = uVar4;
    param_1[2] = puVar19 + 1;
    return;
  }
LAB_00b9a320:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b9a338  FUN_00b9a338 =====

void FUN_00b9a338(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b9a350  FUN_00b9a350 =====

void FUN_00b9a350(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if ((((*(long **)(lVar7 + 0x18) != (long *)0x0) &&
       (uVar6 = (**(code **)(**(long **)(lVar7 + 0x18) + 8))(), (uVar6 & 1) != 0)) &&
      (*(long **)(lVar7 + 0xa0) != (long *)0x0)) &&
     (iVar5 = (**(code **)(**(long **)(lVar7 + 0xa0) + 0x58))(), iVar5 == 0)) {
    if ((*(char *)(lVar7 + 0x138) == '\x01') && ((*(byte *)(lVar7 + 0x158) & 1) != 0)) {
      lVar3 = *(long *)(lVar7 + 0x128) - *(long *)(lVar7 + 0x120);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = *(long *)(lVar7 + 0x120);
      }
      lVar4 = *(long *)(lVar7 + 0x148) - *(long *)(lVar7 + 0x140);
      lVar2 = 0;
      if (lVar4 != 0) {
        lVar2 = *(long *)(lVar7 + 0x140);
      }
                    /* WARNING: Could not recover jumptable at 0x00b9a3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar7 + 0xa0) + 0x38))
                (*(long **)(lVar7 + 0xa0),lVar1,lVar3,lVar2,lVar4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b9a404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar7 + 0xa0) + 0x30))();
    return;
  }
  return;
}


// ===== 00b9a408  FUN_00b9a408 =====

void FUN_00b9a408(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  if ((*(int *)((long)param_3 + 0x2c) == 1) &&
     (plVar1 = *(long **)(*param_1 + 0xa0), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00b9a430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,*param_3,param_3[1]);
    return;
  }
  return;
}


// ===== 00b9a438  FUN_00b9a438 =====

void FUN_00b9a438(long *param_1)

{
  long *plVar1;
  undefined8 local_40;
  void *pvStack_38;
  undefined8 uStack_30;
  long local_28;
  undefined8 local_20;
  
  plVar1 = *(long **)(*param_1 + 0x118);
  if (plVar1 != (long *)0x0) {
    local_20 = 0;
    pvStack_38 = (void *)0x0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    if (local_28 < 0) {
      operator_delete(pvStack_38);
    }
  }
  return;
}


// ===== 00b9a498  FUN_00b9a498 =====

void FUN_00b9a498(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  
  if (param_3 == 0) {
    plVar1 = *(long **)(*param_1 + 0xa0);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)(*param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00b9a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}


// ===== 00b9a4c0  FUN_00b9a4c0 =====

void FUN_00b9a4c0(undefined8 *param_1)

{
  FUN_00889ca4(*param_1);
  return;
}


// ===== 00b9a4cc  FUN_00b9a4cc =====

void FUN_00b9a4cc(void)

{
  return;
}


// ===== 00b9a4d4  FUN_00b9a4d4 =====

void FUN_00b9a4d4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b9a4e0  FUN_00b9a4e0 =====

void * FUN_00b9a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c0);
  FUN_00b9a5e8(pvVar1,param_2,param_3,param_4,param_5,param_6);
  return pvVar1;
}


// ===== 00b9a54c  FUN_00b9a54c =====

void FUN_00b9a54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = param_4[1];
  local_60 = *param_4;
  local_48 = param_4[3];
  uStack_50 = param_4[2];
  if (*(code **)param_4[3] != (code *)0x0) {
    local_60 = (**(code **)param_4[3])(*param_4);
  }
  FUN_00b9b364(param_1,param_3,&local_60);
  if (*(code **)(local_48 + 8) != (code *)0x0) {
    (**(code **)(local_48 + 8))(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b9a5e8  FUN_00b9a5e8 =====

void FUN_00b9a5e8(undefined8 *param_1,undefined8 ****param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 ****__dest;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 ***local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 *local_f0 [2];
  code *local_e0;
  undefined **local_d8;
  undefined8 *local_d0 [2];
  code *local_c0;
  undefined **local_b8;
  undefined8 *local_b0 [2];
  code *local_a0;
  undefined **local_98;
  undefined8 *local_90 [2];
  code *local_80;
  undefined **local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar9 = param_1 + 1;
  *param_1 = &PTR_FUN_00d47488;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    uStack_104 = CONCAT13((char)param_3,(undefined3)uStack_104);
    __dest = &local_118;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    uStack_104 = (uint)(uVar2 >> 0x20) | 0x80000000;
    local_110 = (undefined4)param_3;
    uStack_10c = (undefined4)(param_3 >> 0x20);
    local_108 = (undefined4)uVar2;
    local_118 = __dest;
  }
  if ((undefined8 ****)((long)__dest + param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_2) && (param_2 < (undefined8 ****)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_2,param_3);
  *(undefined1 *)((long)__dest + param_3) = 0;
  puVar6 = (undefined8 *)FUN_00547cac(&local_118,&DAT_001c4dc3,2);
  uVar10 = *puVar6;
  uVar8 = puVar6[2];
  param_1[2] = puVar6[1];
  *puVar9 = uVar10;
  param_1[3] = uVar8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((int)uStack_104 < 0) {
    operator_delete(local_118);
  }
  param_1[4] = param_5;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x76) = 0;
  uVar11 = param_6[4];
  uVar10 = param_6[7];
  uVar8 = param_6[6];
  uVar13 = param_6[1];
  uVar12 = *param_6;
  uVar15 = param_6[3];
  uVar14 = param_6[2];
  param_1[0x15] = param_6[5];
  param_1[0x14] = uVar11;
  param_1[0x17] = uVar10;
  param_1[0x16] = uVar8;
  param_1[0x11] = uVar13;
  param_1[0x10] = uVar12;
  param_1[0x13] = uVar15;
  param_1[0x12] = uVar14;
  uVar11 = param_6[0xc];
  uVar10 = param_6[0xf];
  uVar8 = param_6[0xe];
  uVar13 = param_6[9];
  uVar12 = param_6[8];
  uVar15 = param_6[0xb];
  uVar14 = param_6[10];
  param_1[0x1d] = param_6[0xd];
  param_1[0x1c] = uVar11;
  param_1[0x1f] = uVar10;
  param_1[0x1e] = uVar8;
  param_1[0x19] = uVar13;
  param_1[0x18] = uVar12;
  param_1[0x1b] = uVar15;
  param_1[0x1a] = uVar14;
  uVar11 = param_6[0x14];
  uVar10 = param_6[0x17];
  uVar8 = param_6[0x16];
  uVar13 = param_6[0x11];
  uVar12 = param_6[0x10];
  uVar15 = param_6[0x13];
  uVar14 = param_6[0x12];
  param_1[0x25] = param_6[0x15];
  param_1[0x24] = uVar11;
  param_1[0x27] = uVar10;
  param_1[0x26] = uVar8;
  puVar5 = PTR_DAT_00d52d98;
  param_1[0x21] = uVar13;
  param_1[0x20] = uVar12;
  param_1[0x23] = uVar15;
  param_1[0x22] = uVar14;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = puVar5 + 0x10;
  param_1[0x29] = param_4;
  param_1[0x30] = FUN_00ba15f4;
  param_1[0x31] = &DAT_00256908;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_80 = FUN_00ba1604;
  local_78 = &PTR_FUN_00d475e0;
  local_90[0] = (undefined8 *)operator_new(0x18);
  *local_90[0] = FUN_00b9aa2c;
  local_90[0][1] = 0;
  iVar3 = *(int *)(param_6 + 0xc);
  uVar8 = *(undefined8 *)((long)param_6 + 0xac);
  local_90[0][2] = param_1;
  local_118 = (undefined8 ***)0x7fffffffffffffff;
  if (iVar3 != 0x7fffffff) {
    local_118 = (undefined8 ***)((long)iVar3 * 1000);
  }
  uStack_10c = (undefined4)uVar8;
  local_108 = (undefined4)((ulong)uVar8 >> 0x20);
  local_110 = 1;
  local_100 = 0x7fffffffffffffff;
  local_f8 = 0;
  uVar8 = FUN_00ba434c(param_1 + 0x2e,"t1-init",7,local_90,&local_118);
  param_1[0x36] = uVar8;
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90[0]);
  }
  local_a0 = FUN_00ba1604;
  local_98 = &PTR_FUN_00d475e0;
  local_b0[0] = (undefined8 *)operator_new(0x18);
  iVar3 = *(int *)((long)param_6 + 100);
  *local_b0[0] = FUN_00b9aac8;
  local_b0[0][1] = 0;
  uVar8 = *(undefined8 *)((long)param_6 + 0xac);
  local_b0[0][2] = param_1;
  local_118 = (undefined8 ***)0x7fffffffffffffff;
  if (iVar3 != 0x7fffffff) {
    local_118 = (undefined8 ***)((long)iVar3 * 1000);
  }
  local_110 = 1;
  uStack_10c = (undefined4)uVar8;
  local_108 = (undefined4)((ulong)uVar8 >> 0x20);
  local_100 = 0x7fffffffffffffff;
  local_f8 = 0;
  uVar8 = FUN_00ba434c(param_1 + 0x2e,"t1-cookie",9,local_b0,&local_118);
  param_1[0x37] = uVar8;
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0[0]);
  }
  local_c0 = FUN_00ba1604;
  local_b8 = &PTR_FUN_00d475e0;
  local_d0[0] = (undefined8 *)operator_new(0x18);
  iVar3 = *(int *)(param_6 + 0xd);
  *local_d0[0] = FUN_00b9abec;
  local_d0[0][1] = 0;
  uVar8 = *(undefined8 *)((long)param_6 + 0xa4);
  local_d0[0][2] = param_1;
  local_118 = (undefined8 ***)0x7fffffffffffffff;
  if (iVar3 != 0x7fffffff) {
    local_118 = (undefined8 ***)((long)iVar3 * 1000);
  }
  local_110 = 1;
  uStack_10c = (undefined4)uVar8;
  local_108 = (undefined4)((ulong)uVar8 >> 0x20);
  local_100 = 0x7fffffffffffffff;
  local_f8 = 0;
  uVar8 = FUN_00ba434c(param_1 + 0x2e,"t2-shutdown",0xb,local_d0,&local_118);
  param_1[0x38] = uVar8;
  if ((code *)local_b8[1] != (code *)0x0) {
    (*(code *)local_b8[1])(local_d0[0]);
  }
  local_e0 = FUN_00ba1678;
  local_d8 = &PTR_FUN_00d47600;
  local_f0[0] = (undefined8 *)operator_new(0x18);
  local_f0[0][2] = param_1;
  *local_f0[0] = FUN_00b9ae90;
  local_f0[0][1] = 0;
  FUN_00ba4700(param_1 + 0x39,param_1 + 0x28,local_f0);
  if ((code *)local_d8[1] != (code *)0x0) {
    (*(code *)local_d8[1])(local_f0[0]);
  }
  lVar7 = (long)*(char *)((long)param_1 + 0x1f);
  if (lVar7 < 0) {
    puVar9 = (undefined8 *)param_1[1];
    lVar7 = param_1[2];
  }
  FUN_00ba5b5c(param_1 + 0x3e,puVar9,lVar7,param_1 + 0x28,param_1[0x12],
               *(undefined2 *)(param_1 + 0x14),param_1[0x19]);
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  param_1[0x57] = 0;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b9aa2c  FUN_00b9aa2c =====

undefined8 FUN_00b9aa2c(long param_1)

{
  long *plVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x1b0) + 0x9c) == '\x01') {
    FUN_00b9af68(param_1);
  }
  else if (*(int *)(param_1 + 0x2b4) != 0) {
    FUN_00ba3ee4();
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar1 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    FUN_00ba1ce8(param_1 + 0x140,1,"No INIT_ACK received",0x14);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return 0;
}


// ===== 00b9aac8  FUN_00b9aac8 =====

undefined8 FUN_00b9aac8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  if (*(char *)(*(long *)(param_1 + 0x1b8) + 0x9c) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x2b8);
    uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_50,*(undefined4 *)(lVar3 + 0x108),lVar3 + 0x18);
    FUN_00baab74(lVar3,&local_50,uVar1);
    if (local_40 != (undefined1 *)0x0) {
      if (local_38 + -1 < local_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_38 = local_40;
      operator_delete(local_40);
    }
  }
  else if (*(int *)(param_1 + 0x2b4) != 0) {
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar2 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    FUN_00ba1ce8(param_1 + 0x140,1,"No COOKIE_ACK received",0x16);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return 0;
}


// ===== 00b9abec  FUN_00b9abec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b9abec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 local_78;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [16];
  void *local_48;
  long local_40;
  
  if ((*(byte *)(*(long *)(param_1 + 0x1c0) + 0x9c) & 1) != 0) {
    FUN_00b9c954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00b9ac3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x38))();
    return uVar7;
  }
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(auStack_58);
  puVar6 = PTR_DAT_00d52eb8;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_b8 = PTR_DAT_00d52eb8 + 0x10;
  local_b0 = (char *)operator_new(0x28);
  uVar5 = s_Too_many_retransmissions_of_SHUT_001f122c._24_8_;
  uVar4 = s_Too_many_retransmissions_of_SHUT_001f122c._16_8_;
  uVar3 = s_Too_many_retransmissions_of_SHUT_001f122c._8_8_;
  uVar7 = s_Too_many_retransmissions_of_SHUT_001f122c._0_8_;
  lStack_a0 = _UNK_001f2ca8;
  local_a8 = _DAT_001f2ca0;
  if (local_b0 + 0x24 < local_b0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((local_b0 < "oo many retransmissions of SHUTDOWN") &&
     ("Too many retransmissions of SHUTDOWN" < local_b0 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  local_b0[0x24] = '\0';
  local_b0[0x20] = 'D';
  local_b0[0x21] = 'O';
  local_b0[0x22] = 'W';
  local_b0[0x23] = 'N';
  *(undefined8 *)(local_b0 + 8) = uVar3;
  *(undefined8 *)local_b0 = uVar7;
  *(undefined8 *)(local_b0 + 0x18) = uVar5;
  *(undefined8 *)(local_b0 + 0x10) = uVar4;
  puVar8 = (undefined8 *)FUN_00bba458(&local_98,&local_b8);
  puVar1 = PTR_DAT_00d52da0;
  local_60 = puVar8[2];
  pvStack_68 = (void *)puVar8[1];
  local_70 = (void *)*puVar8;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar1 = puVar1 + 0x10;
  local_78 = 1;
  local_80 = puVar1;
  uVar7 = FUN_00ba4854(auStack_58,&local_80);
  FUN_00ba4738(param_1 + 0x1c8,uVar7,1);
  local_80 = puVar1;
  if (local_70 != (void *)0x0) {
    if ((long)pvStack_68 - 1U < (ulong)((long)pvStack_68 - (long)local_70)) goto LAB_00b9ae7c;
    pvStack_68 = local_70;
    operator_delete(local_70);
  }
  local_b8 = puVar6 + 0x10;
  if (lStack_a0 < 0) {
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    if ((long)local_90 - 1U < (ulong)((long)local_90 - (long)local_98)) goto LAB_00b9ae7c;
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_48 == (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x2b4);
  }
  else {
    if (local_40 - 1U < (ulong)(local_40 - (long)local_48)) {
LAB_00b9ae7c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(local_48);
    iVar2 = *(int *)(param_1 + 0x2b4);
  }
  if (iVar2 != 0) {
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar9 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_00ba1ce8(param_1 + 0x140,1,"No SHUTDOWN_ACK received",0x18);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return 0;
}


// ===== 00b9ae90  FUN_00b9ae90 =====

void FUN_00b9ae90(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    uVar2 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar2 = uVar2 + 1;
    }
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar2,param_2,param_3);
  }
  if (param_4 == 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  return;
}


// ===== 00b9af68  FUN_00b9af68 =====

void FUN_00b9af68(long param_1)

{
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  void *local_40;
  void *pvStack_38;
  undefined8 local_30;
  
  local_40 = (void *)0x0;
  pvStack_38 = (void *)0x0;
  local_30 = 0;
  FUN_00b9b0cc(param_1 + 0x80,*(int *)(param_1 + 0x138) != 0,&local_40);
  local_48 = local_30;
  local_30 = 0;
  local_68 = *(undefined4 *)(param_1 + 0x2ac);
  pvStack_50 = pvStack_38;
  local_58 = local_40;
  uStack_64 = (undefined4)*(undefined8 *)(param_1 + 0xa8);
  uStack_5c = *(undefined4 *)(param_1 + 0x2a8);
  local_60 = *(uint *)(param_1 + 0x88) >> 0x10 | *(uint *)(param_1 + 0x88) << 0x10;
  local_40 = (void *)0x0;
  pvStack_38 = (void *)0x0;
  local_70 = &PTR_FUN_00d47c80;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba4828(&local_a0,0,param_1 + 0x80);
  FUN_00ba4854(&local_a0,&local_70);
  FUN_00ba4738(param_1 + 0x1c8,&local_a0,1);
  if (local_90 != (undefined1 *)0x0) {
    if (local_88 + -1 < local_88 + -(long)local_90) goto LAB_00b9b0b8;
    local_88 = local_90;
    operator_delete(local_90);
  }
  local_70 = &PTR_FUN_00d47c80;
  if (local_58 != (void *)0x0) {
    if ((long)pvStack_50 - 1U < (ulong)((long)pvStack_50 - (long)local_58)) goto LAB_00b9b0b8;
    pvStack_50 = local_58;
    operator_delete(local_58);
  }
  if (local_40 != (void *)0x0) {
    if ((long)pvStack_38 - 1U < (ulong)((long)pvStack_38 - (long)local_40)) {
LAB_00b9b0b8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvStack_38 = local_40;
    operator_delete(local_40);
  }
  return;
}


// ===== 00b9b0cc  FUN_00b9b0cc =====

void FUN_00b9b0cc(long param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined **local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_48 = (undefined1 *)operator_new(1);
  puVar2 = local_48 + 1;
  local_38 = puVar2;
  if (local_48 == (undefined1 *)0x0) {
LAB_00b9b288:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  *local_48 = 0x82;
  if (cVar1 == '\x01') {
    local_68 = (undefined **)(PTR_DAT_00d52e28 + 0x10);
    local_40 = puVar2;
    FUN_00bba458(param_3,&local_68);
    local_68 = (undefined **)CONCAT71(local_68._1_7_,0xc0);
    if (local_40 < local_38) {
      if (local_40 == (undefined1 *)0x0) goto LAB_00b9b288;
      puVar2 = local_40 + 1;
      *local_40 = 0xc0;
    }
    else {
      puVar2 = (undefined1 *)FUN_006cc5d8(&local_48,&local_68);
    }
  }
  local_40 = puVar2;
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    local_68 = (undefined **)CONCAT71(local_68._1_7_,0x40);
    if (puVar2 < local_38) {
      if (puVar2 == (undefined1 *)0x0) goto LAB_00b9b288;
      local_40 = puVar2 + 1;
      *puVar2 = 0x40;
    }
    else {
      local_40 = (undefined1 *)FUN_006cc5d8(&local_48,&local_68);
    }
    local_68 = (undefined **)CONCAT71(local_68._1_7_,0xc2);
    if (local_40 < local_38) {
      if (local_40 == (undefined1 *)0x0) goto LAB_00b9b288;
      *local_40 = 0xc2;
      local_40 = local_40 + 1;
    }
    else {
      local_40 = (undefined1 *)FUN_006cc5d8(&local_48,&local_68);
    }
  }
  local_58 = local_40;
  if ((param_2 & 1) != 0) {
    local_68 = (undefined **)(PTR_DAT_00d52e60 + 0x10);
    local_60 = (undefined1 *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0xb8));
    FUN_00bba458(param_3,&local_68);
    local_58 = local_40;
  }
  local_50 = local_38;
  local_60 = local_48;
  local_38 = (undefined1 *)0x0;
  local_48 = (undefined1 *)0x0;
  local_40 = (undefined1 *)0x0;
  local_68 = &PTR_FUN_00d47d10;
  FUN_00bba458(param_3,&local_68);
  local_68 = &PTR_FUN_00d47d10;
  if (local_60 != (undefined1 *)0x0) {
    if (local_58 + -1 < local_58 + -(long)local_60) goto LAB_00b9b2cc;
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (local_48 != (undefined1 *)0x0) {
    if ((long)local_40 - 1U < (ulong)((long)local_40 - (long)local_48)) {
LAB_00b9b2cc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}


// ===== 00b9b2e0  FUN_00b9b2e0 =====

void FUN_00b9b2e0(long param_1)

{
  undefined4 uVar1;
  
  FUN_00ba1710(param_1 + 0x140);
  if (*(int *)(param_1 + 0x2b4) == 0) {
    uVar1 = FUN_00ba1a18(param_1 + 0x140,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x2a8) = uVar1;
    uVar1 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
    *(undefined4 *)(param_1 + 0x2ac) = uVar1;
    FUN_00b9af68(param_1);
    FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1b0));
    if (*(int *)(param_1 + 0x2b4) != 1) {
      *(undefined4 *)(param_1 + 0x2b4) = 1;
    }
  }
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9b364  FUN_00b9b364 =====

void FUN_00b9b364(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  pcVar3 = *(code **)(param_3 + 0x10);
  param_1[2] = 0;
  uVar1 = (*pcVar3)(param_3,1,0xffffffff);
  uVar2 = (**(code **)(param_3 + 0x10))(param_3,0,0xffffffff);
  local_60 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_50 = 0;
  FUN_00b9b0cc(param_2,*(int *)(param_2 + 0xb8) != 0,&local_60);
  local_68 = local_50;
  pvStack_70 = pvStack_58;
  local_78 = local_60;
  local_50 = 0;
  local_60 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_80 = *(uint *)(param_2 + 8) >> 0x10 | *(uint *)(param_2 + 8) << 0x10;
  local_90 = &PTR_FUN_00d47c80;
  uStack_84 = (undefined4)*(undefined8 *)(param_2 + 0x28);
  local_88 = uVar1;
  uStack_7c = uVar2;
  FUN_00bc179c(&local_90,param_1);
  local_90 = &PTR_FUN_00d47c80;
  if (local_78 != (void *)0x0) {
    if ((long)pvStack_70 - 1U < (ulong)((long)pvStack_70 - (long)local_78)) goto LAB_00b9b4a4;
    pvStack_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (void *)0x0) {
    if ((long)pvStack_58 - 1U < (ulong)((long)pvStack_58 - (long)local_60)) {
LAB_00b9b4a4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  return;
}


// ===== 00b9b4b8  FUN_00b9b4b8 =====

undefined4
FUN_00b9b4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined **local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_38;
  
  FUN_00ba1710(param_1 + 0x140);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc1574(&local_90,param_2,param_3);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc1574(&local_d0,param_4,param_5);
  if ((((ulong)local_60 & 1) == 0) || (((ulong)local_a0 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    local_38 = FUN_00b9b6e8(param_1 + 0x80,(ulong)local_c0 & 0xffff,local_c0._2_2_,&puStack_b8);
    if ((((ulong)local_60 & 1) == 0) || (((ulong)local_a0 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar3 = local_80._4_4_;
    uVar1 = (ulong)uStack_c8 & 0xffffffff;
    uVar6 = uStack_c8._4_4_;
    uVar7 = (ulong)puStack_88 & 0xffffffff;
    uVar2 = local_c0._4_4_;
    lVar4 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,0,0xffffffff);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,1,0xffffffff);
    FUN_00b9b940(param_1,&local_38,uVar7,uVar3,uVar1,uVar2,uVar6,uVar5 & 0xffffffff | lVar4 << 0x20)
    ;
    if (*(int *)(param_1 + 0x2b4) != 3) {
      *(undefined4 *)(param_1 + 0x2b4) = 3;
    }
    FUN_00ba1e7c(param_1 + 0x140);
    uVar6 = 1;
  }
  if ((((ulong)local_a0 & 1) != 0) &&
     (local_d0 = &PTR_FUN_00d47c80, puStack_b8 != (undefined1 *)0x0)) {
    if (local_b0 + -1 < local_b0 + -(long)puStack_b8) goto LAB_00b9b6d4;
    local_b0 = puStack_b8;
    operator_delete(puStack_b8);
  }
  if ((((ulong)local_60 & 1) != 0) &&
     (local_90 = &PTR_FUN_00d47c80, puStack_78 != (undefined1 *)0x0)) {
    if (local_70 + -1 < local_70 + -(long)puStack_78) {
LAB_00b9b6d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_70 = puStack_78;
    operator_delete(puStack_78);
  }
  FUN_00ba1720(param_1 + 0x140);
  return uVar6;
}


// ===== 00b9b6e8  FUN_00b9b6e8 =====

ulong FUN_00b9b6e8(long param_1,uint param_2,ushort param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  uint uVar10;
  ulong uVar11;
  undefined1 auStack_c0 [8];
  int local_b8;
  byte local_b0;
  undefined1 auStack_a8 [8];
  byte local_a0;
  byte local_98;
  undefined **local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba0b0c(&local_90,param_4);
  if ((*(byte *)(param_1 + 0xb4) & 1) == 0) {
    uVar11 = (ulong)local_70 & 0xff;
    uVar10 = 0;
LAB_00b9b780:
    puVar5 = local_80;
    puVar7 = puStack_88;
    if ((*(char *)(param_1 + 0xb5) == '\x01') && ((uVar11 & 1) != 0)) {
      __n = (long)local_80 - (long)puStack_88;
      puVar6 = (undefined1 *)memchr(puStack_88,0x40,(long)local_80 - (long)puStack_88);
      if ((puVar6 == (undefined1 *)0x0) || (puVar6 == puVar5)) goto LAB_00b9b7dc;
      puVar7 = (undefined1 *)memchr(puVar7,0xc2,__n);
      uVar9 = 0x100;
      if (puVar7 == puVar5 || puVar7 == (undefined1 *)0x0) {
        uVar9 = 0;
      }
      if ((uVar11 & 1) == 0) goto LAB_00b9b824;
    }
    else {
LAB_00b9b7dc:
      uVar9 = 0;
      if ((uVar11 & 1) == 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
        goto joined_r0x00b9b818;
      }
    }
    puVar7 = local_80;
    puVar5 = (undefined1 *)memchr(puStack_88,0x82,(long)local_80 - (long)puStack_88);
    uVar11 = 0x10000;
    if (puVar5 == puVar7 || puVar5 == (undefined1 *)0x0) {
      uVar11 = 0;
    }
    iVar2 = *(int *)(param_1 + 0xb8);
  }
  else {
    FUN_00ba0c38(auStack_a8,param_4);
    puVar7 = local_80;
    uVar10 = (uint)local_a0;
    if (((ulong)local_70 & 1) != 0) {
      puVar5 = (undefined1 *)memchr(puStack_88,0xc0,(long)local_80 - (long)puStack_88);
      uVar11 = 1;
      if (puVar5 != (undefined1 *)0x0 && puVar5 != puVar7) {
        uVar10 = 1;
      }
      goto LAB_00b9b780;
    }
    uVar9 = 0;
LAB_00b9b824:
    iVar2 = *(int *)(param_1 + 0xb8);
joined_r0x00b9b818:
    uVar11 = 0;
  }
  if ((iVar2 == 0) || (FUN_00ba0d60(auStack_a8,param_4), (local_98 & 1) == 0)) {
    uVar8 = 0;
  }
  else {
    FUN_00ba0d60(auStack_c0,param_4);
    if ((local_b0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar8 = 0x1000000;
    if (local_b8 != *(int *)(param_1 + 0xb8)) {
      uVar8 = 0;
    }
  }
  uVar3 = *(ushort *)(param_1 + 8);
  uVar4 = *(ushort *)(param_1 + 10);
  if ((((ulong)local_70 & 1) != 0) &&
     (local_90 = &PTR_FUN_00d47d10, puStack_88 != (undefined1 *)0x0)) {
    if (local_80 + -1 < local_80 + -(long)puStack_88) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_80 = puStack_88;
    operator_delete(puStack_88);
  }
  if (uVar4 <= param_3) {
    param_3 = uVar4;
  }
  uVar1 = param_2 & 0xffff;
  if ((uint)uVar3 <= (param_2 & 0xffff)) {
    uVar1 = (uint)uVar3;
  }
  return (ulong)uVar1 << 0x20 | (ulong)param_3 << 0x30 | uVar8 | uVar11 | uVar9 | (ulong)uVar10;
}


// ===== 00b9b940  FUN_00b9b940 =====

void FUN_00b9b940(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long local_88 [2];
  code *local_78;
  undefined *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_2 + 3);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_2 + 6);
  pvVar4 = operator_new(0x610);
  bVar2 = *(byte *)(param_1 + 0x1f);
  local_78 = FUN_00ba16f8;
  local_70 = &DAT_00256928;
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  plVar5 = (long *)*(long *)(param_1 + 8);
  if (-1 < (char)bVar2) {
    plVar5 = (long *)(param_1 + 8);
  }
  local_88[0] = param_1;
  FUN_00ba9d9c(pvVar4,param_1 + 0x170,plVar5,uVar1,param_1 + 0x80,param_2,param_1 + 0x140,
               param_1 + 0x1f0,param_3,param_4,param_5,param_6,param_7,param_8,param_1 + 0x1c8,
               local_88);
  if (*(code **)(local_70 + 8) != (code *)0x0) {
    (**(code **)(local_70 + 8))(local_88[0]);
  }
  plVar5 = *(long **)(param_1 + 0x2b8);
  *(void **)(param_1 + 0x2b8) = pvVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b9ba9c  FUN_00b9ba9c =====

void FUN_00b9ba9c(long param_1,int *param_2)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  FUN_00ba1710(param_1 + 0x140);
  if (*(int *)(param_1 + 0x2b4) == 0) {
    if (*param_2 == 1) {
      iVar1 = param_2[1];
      *(int *)(param_1 + 0x2ac) = iVar1;
      local_18 = param_2[8];
      iStack_14 = param_2[9];
      FUN_00ba7768(param_1 + 0x1f0,param_2);
      FUN_00b9b940(param_1,&local_18,iVar1,param_2[2],param_2[3],param_2[4],0,
                   *(undefined8 *)(param_2 + 6));
      FUN_00bab054(*(undefined8 *)(param_1 + 0x2b8),param_2);
      if (*(int *)(param_1 + 0x2b4) != 3) {
        *(undefined4 *)(param_1 + 0x2b4) = 3;
      }
      FUN_00ba1e7c(param_1 + 0x140);
    }
  }
  else {
    FUN_00ba1b54(param_1 + 0x140,8,"Only closed socket can be restored from state",0x2d);
  }
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9bb70  FUN_00b9bb70 =====

void FUN_00b9bb70(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  FUN_00ba1710(param_1 + 0x140);
  iVar1 = *(int *)(param_1 + 0x2b4);
  if (*(long *)(param_1 + 0x2b8) == 0) {
    if (iVar1 == 0) goto LAB_00b9bc84;
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar3 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_00ba1efc(param_1 + 0x140);
    if (*(int *)(param_1 + 0x2b4) == 0) goto LAB_00b9bc84;
    uVar4 = 0;
  }
  else {
    if (iVar1 != 4) {
      if ((iVar1 == 5) || (iVar1 == 7)) goto LAB_00b9bc84;
      *(undefined4 *)(param_1 + 0x2b4) = 4;
    }
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    if (*(long *)(*(long *)(param_1 + 0x2b8) + 0x4c0) != 0) goto LAB_00b9bc84;
    if (*(int *)(param_1 + 0x2b4) == 6) {
      FUN_00b9ff20(param_1);
      if (*(int *)(param_1 + 0x2b4) == 7) goto LAB_00b9bc84;
      uVar4 = 7;
    }
    else {
      if (*(int *)(param_1 + 0x2b4) != 4) goto LAB_00b9bc84;
      FUN_00b9c954(param_1);
      lVar5 = *(long *)(param_1 + 0x1c0);
      lVar2 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x38))();
      if (86399999999 < lVar2) {
        lVar2 = 86400000000;
      }
      *(long *)(lVar5 + 0x90) = lVar2;
      FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1c0));
      if (*(int *)(param_1 + 0x2b4) == 5) goto LAB_00b9bc84;
      uVar4 = 5;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar4;
LAB_00b9bc84:
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9bcb4  FUN_00b9bcb4 =====

void FUN_00b9bcb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_c0;
  void *local_b8;
  undefined4 local_b0;
  char local_ac [11];
  char cStack_a1;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 local_80;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  FUN_00ba1710(param_1 + 0x140);
  if (*(int *)(param_1 + 0x2b4) != 0) {
    if (*(long **)(param_1 + 0x2b8) != (long *)0x0) {
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(&local_60);
      puVar2 = PTR_DAT_00d52eb8;
      local_98 = (void *)0x0;
      local_a0 = (void *)0x0;
      local_c0 = PTR_DAT_00d52eb8 + 0x10;
      local_90 = 0;
      cStack_a1 = '\f';
      if ((&local_b8 < (void **)0x1d80d5) && ("Close called" < local_ac)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      local_ac[0] = '\0';
      local_b0 = 0x64656c6c;
      local_b8 = (void *)s_Close_called_001d80d4._0_8_;
      puVar3 = (undefined8 *)FUN_00bba458(&local_a0,&local_c0);
      puVar1 = PTR_DAT_00d52da0;
      local_68 = puVar3[2];
      pvStack_70 = (void *)puVar3[1];
      local_78 = (void *)*puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar1 = puVar1 + 0x10;
      local_80 = 1;
      local_88 = puVar1;
      FUN_00ba4854(&local_60,&local_88);
      local_88 = puVar1;
      if (local_78 != (void *)0x0) {
        if ((long)pvStack_70 - 1U < (ulong)((long)pvStack_70 - (long)local_78)) goto LAB_00b9bef0;
        pvStack_70 = local_78;
        operator_delete(local_78);
      }
      local_c0 = puVar2 + 0x10;
      if (cStack_a1 < '\0') {
        operator_delete(local_b8);
      }
      if (local_a0 != (void *)0x0) {
        if ((long)local_98 - 1U < (ulong)((long)local_98 - (long)local_a0)) goto LAB_00b9bef0;
        local_98 = local_a0;
        operator_delete(local_a0);
      }
      FUN_00ba4738(param_1 + 0x1c8,&local_60,1);
      if (local_50 != (undefined1 *)0x0) {
        if (local_48 + -1 < local_48 + -(long)local_50) {
LAB_00b9bef0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_48 = local_50;
        operator_delete(local_50);
      }
      if (*(int *)(param_1 + 0x2b4) == 0) goto LAB_00b9bebc;
    }
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar4 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    FUN_00ba1efc(param_1 + 0x140);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
LAB_00b9bebc:
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9bf04  FUN_00b9bf04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b9bf04(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 local_78;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [16];
  void *local_48;
  long local_40;
  
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(auStack_58);
  puVar5 = PTR_DAT_00d52eb8;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_b8 = PTR_DAT_00d52eb8 + 0x10;
  local_b0 = (char *)operator_new(0x20);
  uVar4 = s_Too_many_retransmissions_001b89ab._16_8_;
  uVar3 = s_Too_many_retransmissions_001b89ab._8_8_;
  uVar7 = s_Too_many_retransmissions_001b89ab._0_8_;
  lStack_a0 = _UNK_001f3238;
  local_a8 = _DAT_001f3230;
  if (local_b0 + 0x18 < local_b0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((local_b0 < "oo many retransmissions") && ("Too many retransmissions" < local_b0 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  local_b0[0x18] = '\0';
  *(undefined8 *)(local_b0 + 8) = uVar3;
  *(undefined8 *)local_b0 = uVar7;
  *(undefined8 *)(local_b0 + 0x10) = uVar4;
  puVar6 = (undefined8 *)FUN_00bba458(&local_98,&local_b8);
  puVar1 = PTR_DAT_00d52da0;
  local_60 = puVar6[2];
  pvStack_68 = (void *)puVar6[1];
  local_70 = (void *)*puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar1 = puVar1 + 0x10;
  local_78 = 1;
  local_80 = puVar1;
  uVar7 = FUN_00ba4854(auStack_58,&local_80);
  FUN_00ba4738(param_1 + 0x1c8,uVar7,1);
  local_80 = puVar1;
  if (local_70 != (void *)0x0) {
    if ((long)pvStack_68 - 1U < (ulong)((long)pvStack_68 - (long)local_70)) goto LAB_00b9c154;
    pvStack_68 = local_70;
    operator_delete(local_70);
  }
  local_b8 = puVar5 + 0x10;
  if (lStack_a0 < 0) {
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    if ((long)local_90 - 1U < (ulong)((long)local_90 - (long)local_98)) goto LAB_00b9c154;
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_48 == (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x2b4);
  }
  else {
    if (local_40 - 1U < (ulong)(local_40 - (long)local_48)) {
LAB_00b9c154:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(local_48);
    iVar2 = *(int *)(param_1 + 0x2b4);
  }
  if (iVar2 != 0) {
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar8 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    FUN_00ba1ce8(param_1 + 0x140,1,"Too many retransmissions",0x18);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return;
}


// ===== 00b9c168  FUN_00b9c168 =====

void FUN_00b9c168(long param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_00ba75a0(param_1 + 0x1f0,param_2,param_3);
  return;
}


// ===== 00b9c17c  FUN_00b9c17c =====

void FUN_00b9c17c(long param_1,undefined2 param_2)

{
  FUN_00ba75d4(param_1 + 0x1f0,param_2);
  return;
}


// ===== 00b9c18c  FUN_00b9c18c =====

int FUN_00b9c18c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  FUN_00ba1710(param_1 + 0x140);
  iVar1 = FUN_00b9c2f4(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    local_90 = *param_2;
    pvStack_80 = (void *)param_2[2];
    local_88 = (void *)param_2[1];
    local_78 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_00ba6c90(param_1 + 0x1f0,uVar2,&local_90,param_3);
    if (local_88 != (void *)0x0) {
      if ((long)pvStack_80 - 1U < (ulong)((long)pvStack_80 - (long)local_88)) goto LAB_00b9c2e0;
      pvStack_80 = local_88;
      operator_delete(local_88);
    }
    lVar3 = *(long *)(param_1 + 0x2b8);
    if (lVar3 != 0) {
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba4828(&local_70,*(undefined4 *)(lVar3 + 0x108),lVar3 + 0x18);
      FUN_00baab74(lVar3,&local_70,uVar2);
      if (local_60 != (undefined1 *)0x0) {
        if (local_58 + -1 < local_58 + -(long)local_60) {
LAB_00b9c2e0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_58 = local_60;
        operator_delete(local_60);
      }
    }
  }
  FUN_00ba1720(param_1 + 0x140);
  return iVar1;
}


// ===== 00b9c2f4  FUN_00b9c2f4 =====

undefined4 FUN_00b9c2f4(long param_1,undefined2 *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x20);
  if (*(long *)(param_2 + 8) == *(long *)(param_2 + 4)) {
    if (lVar3 != 0) {
      FUN_00ba2980(param_1 + 0x140,lVar3);
    }
    FUN_00ba1b54(param_1 + 0x140,6,"Unable to send empty message",0x1c);
    uVar2 = 1;
  }
  else if (*(ulong *)(param_1 + 0x98) < (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 4))) {
    if (lVar3 != 0) {
      FUN_00ba2980(param_1 + 0x140,lVar3);
    }
    FUN_00ba1b54(param_1 + 0x140,6,"Unable to send too large message",0x20);
    uVar2 = 2;
  }
  else if ((*(uint *)(param_1 + 0x2b4) & 0xfffffffc) == 4) {
    if (lVar3 != 0) {
      FUN_00ba2980(param_1 + 0x140,lVar3);
    }
    uVar2 = 4;
    FUN_00ba1b54(param_1 + 0x140,4,"Unable to send message as the socket is shutting down",0x35);
  }
  else {
    if ((*(ulong *)(param_1 + 0x280) < *(ulong *)(param_1 + 0xb8)) &&
       (uVar1 = FUN_00ba74b0(param_1 + 0x1f0,*param_2), uVar1 < *(ulong *)(param_1 + 0xc0))) {
      return 0;
    }
    if (lVar3 != 0) {
      FUN_00ba2980(param_1 + 0x140,lVar3);
    }
    FUN_00ba1b54(param_1 + 0x140,7,"Unable to send message as the send queue is full",0x30);
    uVar2 = 3;
  }
  return uVar2;
}


// ===== 00b9c434  FUN_00b9c434 =====

ulong FUN_00b9c434(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  uVar5 = param_4;
  FUN_00ba1710(param_2 + 0x140);
  uVar3 = (**(code **)(**(long **)(param_2 + 0x148) + 0x38))();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      auVar10 = FUN_00ba0e8c();
      lVar9 = auVar10._0_8_;
      FUN_00ba1710(lVar9 + 0x140);
      lVar7 = *(long *)(lVar9 + 0x2b8);
      if (lVar7 == 0) {
        FUN_00ba1b54(lVar9 + 0x140,4,"Can\'t reset streams as the socket is not connected",0x32);
        uVar8 = 0;
      }
      else if ((*(byte *)(lVar7 + 0xe2) & 1) == 0) {
        FUN_00ba1b54(lVar9 + 0x140,8,"Can\'t reset streams as the peer doesn\'t support it",0x32);
        uVar8 = 2;
      }
      else {
        FUN_00bbe350(lVar7 + 0x510,auVar10._8_8_,uVar5);
        FUN_00b9c6e4(lVar9);
        uVar8 = 1;
      }
      FUN_00ba1720(lVar9 + 0x140);
      return (ulong)uVar8;
    }
    pvVar4 = operator_new(param_4 * 4);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (void *)((long)pvVar4 + param_4 * 4);
    for (lVar9 = param_4 << 5; lVar9 != 0; lVar9 = lVar9 + -0x20) {
      uVar2 = FUN_00b9c2f4(param_2,param_3,param_5);
      puVar1 = (undefined4 *)param_1[1];
      local_80 = (undefined1 *)CONCAT44(local_80._4_4_,uVar2);
      if (puVar1 < (undefined4 *)param_1[2]) {
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = puVar1 + 1;
        *puVar1 = uVar2;
      }
      else {
        puVar6 = (undefined4 *)FUN_00ba0ea4(param_1,&local_80);
      }
      param_1[1] = puVar6;
      if ((int)local_80 == 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
        local_a0 = *param_3;
        pvStack_90 = (void *)param_3[2];
        local_98 = (void *)param_3[1];
        local_88 = param_3[3];
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        FUN_00ba6c90(param_2 + 0x1f0,uVar3,&local_a0,param_5);
        if (local_98 != (void *)0x0) {
          if ((long)pvStack_90 - 1U < (ulong)((long)pvStack_90 - (long)local_98)) goto LAB_00b9c618;
          pvStack_90 = local_98;
          operator_delete(local_98);
        }
      }
      param_3 = param_3 + 4;
    }
  }
  lVar9 = *(long *)(param_2 + 0x2b8);
  if (lVar9 != 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_80,*(undefined4 *)(lVar9 + 0x108),lVar9 + 0x18);
    FUN_00baab74(lVar9,&local_80,uVar3);
    if (local_70 != (undefined1 *)0x0) {
      if (local_68 + -1 < local_68 + -(long)local_70) {
LAB_00b9c618:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  uVar5 = FUN_00ba1720(param_2 + 0x140);
  return uVar5;
}


// ===== 00b9c630  FUN_00b9c630 =====

undefined4 FUN_00b9c630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_00ba1710(param_1 + 0x140);
  lVar1 = *(long *)(param_1 + 0x2b8);
  if (lVar1 == 0) {
    FUN_00ba1b54(param_1 + 0x140,4,"Can\'t reset streams as the socket is not connected",0x32);
    uVar2 = 0;
  }
  else if ((*(byte *)(lVar1 + 0xe2) & 1) == 0) {
    FUN_00ba1b54(param_1 + 0x140,8,"Can\'t reset streams as the peer doesn\'t support it",0x32);
    uVar2 = 2;
  }
  else {
    FUN_00bbe350(lVar1 + 0x510,param_2,param_3);
    FUN_00b9c6e4(param_1);
    uVar2 = 1;
  }
  FUN_00ba1720(param_1 + 0x140);
  return uVar2;
}


// ===== 00b9c6e4  FUN_00b9c6e4 =====

void FUN_00b9c6e4(long param_1)

{
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbdf7c(&local_50,*(long *)(param_1 + 0x2b8) + 0x510);
  if (((ulong)local_30 & 1) != 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(&local_80);
    if (((ulong)local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_00ba4854(&local_80,&local_50);
    FUN_00ba4738(param_1 + 0x1c8,&local_80,1);
    if (local_70 != (undefined1 *)0x0) {
      if (local_68 + -1 < local_68 + -(long)local_70) goto LAB_00b9c7fc;
      local_68 = local_70;
      operator_delete(local_70);
    }
    if (((ulong)local_30 & 1) != 0) {
      local_50 = &PTR_FUN_00d47b60;
      if (puStack_48 != (undefined1 *)0x0) {
        if (local_40 + -1 < local_40 + -(long)puStack_48) {
LAB_00b9c7fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_40 = puStack_48;
        operator_delete(puStack_48);
      }
    }
  }
  return;
}


// ===== 00b9c810  FUN_00b9c810 =====

undefined4 FUN_00b9c810(long param_1)

{
  return *(undefined4 *)(&DAT_001f8c88 + (ulong)*(uint *)(param_1 + 0x2b4) * 4);
}


// ===== 00b9c828  FUN_00b9c828 =====

void FUN_00b9c828(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}


// ===== 00b9c834  FUN_00b9c834 =====

void FUN_00b9c834(long param_1,undefined2 param_2)

{
  FUN_00ba74b0(param_1 + 0x1f0,param_2);
  return;
}


// ===== 00b9c844  FUN_00b9c844 =====

void FUN_00b9c844(long param_1,undefined2 param_2)

{
  FUN_00ba7500(param_1 + 0x1f0,param_2);
  return;
}


// ===== 00b9c854  FUN_00b9c854 =====

void FUN_00b9c854(long param_1,undefined2 param_2)

{
  FUN_00ba7550(param_1 + 0x1f0,param_2);
  return;
}


// ===== 00b9c864  FUN_00b9c864 =====

void FUN_00b9c864(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(param_2 + 0x2b8);
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar4 + 0x170);
    uVar7 = *(long *)(param_2 + 0x90) - 0x1c;
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = ((*(long *)(param_2 + 0x90) + *(long *)(param_2 + 0x280)) - 0x1dU) / uVar7;
    }
    param_1[4] = *(undefined8 *)(lVar4 + 0x408);
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    iVar6 = (int)(uVar5 / 1000);
    uVar11 = *(undefined8 *)(lVar4 + 0x430);
    uVar10 = *(undefined8 *)(lVar4 + 0x428);
    *(int *)(param_1 + 9) = (int)*(undefined8 *)(lVar4 + 0x410);
    *(undefined4 *)((long)param_1 + 0x4c) = uVar1;
    if (499 < uVar5 % 1000) {
      iVar6 = iVar6 + 1;
    }
    uVar2 = *(undefined2 *)(lVar4 + 0xe4);
    lVar4 = *(long *)(lVar4 + 0x4c0);
    *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x78);
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    param_1[1] = uVar9;
    *param_1 = uVar8;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    *(undefined2 *)((long)param_1 + 0x52) = uVar2;
    if ((uVar5 & 0x8000000000000000) != 0) {
      iVar6 = -(int)(-uVar5 / 1000) - (uint)(500 < -uVar5 % 1000);
    }
    *(int *)(param_1 + 5) = iVar6;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x7c);
    param_1[6] = uVar3 + lVar4;
    param_1[8] = uVar9;
    param_1[7] = uVar8;
    *(undefined4 *)((long)param_1 + 0x54) = uVar1;
    *(undefined1 *)(param_1 + 0xb) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}


// ===== 00b9c954  FUN_00b9c954 =====

void FUN_00b9c954(long param_1)

{
  undefined *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(&local_50);
  local_60 = PTR_DAT_00d52e18 + 0x10;
  local_58 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x1e0);
  FUN_00ba4854(&local_50,&local_60);
  FUN_00ba4738(param_1 + 0x1c8,&local_50,1);
  if (local_40 != (undefined1 *)0x0) {
    if (local_38 + -1 < local_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_38 = local_40;
    operator_delete(local_40);
  }
  return;
}


// ===== 00b9ca18  FUN_00b9ca18 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00b9ca18(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *******local_38;
  ulong uStack_30;
  byte bStack_21;
  
  lVar9 = *(long *)(param_1 + 0x2b8);
  if (lVar9 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar9 + 0x100);
  }
  pcVar7 = *(char **)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 4);
  lVar4 = (long)*(char **)(param_2 + 0x30) - (long)pcVar7;
  if (iVar2 == 0) {
    if ((lVar4 == 0x18) && (*pcVar7 == '\x01')) {
      return 1;
    }
    pcVar7 = "Only a single INIT chunk can be present in packets sent on verification_tag = 0";
    uVar8 = 0x4f;
  }
  else {
    pcVar1 = (char *)0x0;
    if (*(char **)(param_2 + 0x30) != pcVar7) {
      pcVar1 = pcVar7;
    }
    cVar3 = *pcVar1;
    if ((lVar4 != 0x18) || (cVar3 != '\x06')) {
      if (cVar3 == '\n') {
        return 1;
      }
      if (cVar3 == '\x02') {
        iVar6 = *(int *)(param_1 + 0x2ac);
      }
      else if ((lVar4 == 0x18) && (cVar3 == '\x0e')) {
        if ((pcVar1[1] & 1U) != 0) {
          if (lVar9 == 0) {
            return 1;
          }
          iVar6 = *(int *)(lVar9 + 0x108);
        }
        if (iVar2 == iVar6) {
          return 1;
        }
        pcVar7 = "SHUTDOWN_COMPLETE chunk verification tag was wrong";
        uVar8 = 0x32;
        goto LAB_00b9caf0;
      }
      if (iVar2 == iVar6) {
        return 1;
      }
      FUN_008490e4(&local_38,"Packet has invalid verification tag: %08x, expected %08x");
      pppppppuVar5 = local_38;
      if (-1 < (char)bStack_21) {
        uStack_30 = (ulong)bStack_21;
        pppppppuVar5 = &local_38;
      }
      FUN_00ba1b54(param_1 + 0x140,3,pppppppuVar5,uStack_30);
      if (-1 < (char)bStack_21) {
        return 0;
      }
      operator_delete(local_38);
      return 0;
    }
    if ((pcVar1[1] & 1U) != 0) {
      if (lVar9 == 0) {
        return 1;
      }
      iVar6 = *(int *)(lVar9 + 0x108);
    }
    if (iVar2 == iVar6) {
      return 1;
    }
    pcVar7 = "ABORT chunk verification tag was wrong";
    uVar8 = 0x26;
  }
LAB_00b9caf0:
  FUN_00ba1b54(param_1 + 0x140,3,pcVar7,uVar8);
  return 0;
}


// ===== 00b9cbbc  FUN_00b9cbbc =====

void FUN_00b9cbbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_00ba1710(param_1 + 0x140);
  FUN_00ba42fc(param_1 + 0x170,param_2);
  if ((*(long **)(param_1 + 0x2b8) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x50))(), (uVar1 & 1) != 0)) {
    FUN_00b9bf04(param_1);
  }
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9cc1c  FUN_00b9cc1c =====

void FUN_00b9cc1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  char *pcStack_58;
  char *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  FUN_00ba1710(param_1 + 0x140);
  plVar7 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  if (plVar7 != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    uVar5 = uVar1 / 1000;
    if (499 < uVar1 % 1000) {
      uVar5 = uVar5 + 1;
    }
    if ((uVar1 & 0x8000000000000000) != 0) {
      uVar5 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,param_2,param_3);
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba4a60(&local_80,param_2,param_3,param_1 + 0x80);
  if (((ulong)local_40 & 1) == 0) {
    FUN_00ba1b54(param_1 + 0x140,3,"Failed to parse received SCTP packet",0x24);
  }
  else {
    uVar5 = FUN_00b9ca18(param_1,&local_80);
    if ((uVar5 & 1) != 0) {
      if (((ulong)local_40 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(int *)(param_1 + 0x2b4) == 5) {
        lVar2 = (long)local_50 - (long)pcStack_58;
        pcVar4 = (char *)0x0;
        if (lVar2 != 0) {
          pcVar4 = pcStack_58;
        }
        pcVar3 = pcStack_58;
        if (lVar2 == 0) {
          pcVar3 = (char *)0x0;
LAB_00b9cd78:
          if (pcVar3 != pcVar4 + lVar2) {
            FUN_00b9c954(param_1);
            lVar6 = *(long *)(param_1 + 0x1c0);
            lVar2 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x38))();
            if (86399999999 < lVar2) {
              lVar2 = 86400000000;
            }
            *(long *)(lVar6 + 0x90) = lVar2;
            FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1c0));
            if (((ulong)local_40 & 1) == 0) {
LAB_00b9cf0c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
          }
        }
        else {
          do {
            if (*pcVar3 == '\0') goto LAB_00b9cd78;
            pcVar3 = pcVar3 + 0x18;
          } while (pcVar3 != pcVar4 + lVar2);
        }
      }
      if ((long)local_50 - (long)pcStack_58 != 0) {
        pcVar3 = pcStack_58 + ((long)local_50 - (long)pcStack_58);
        pcVar4 = pcStack_58;
        do {
          if (((ulong)local_40 & 1) == 0) goto LAB_00b9cf0c;
          uVar5 = FUN_00b9cf34(param_1,&local_80,pcVar4);
        } while (((uVar5 & 1) != 0) && (pcVar4 = pcVar4 + 0x18, pcVar4 != pcVar3));
      }
      if (*(long *)(param_1 + 0x2b8) != 0) {
        FUN_00bbbc28(*(long *)(param_1 + 0x2b8) + 0x1a8);
        FUN_00baa53c(*(undefined8 *)(param_1 + 0x2b8));
      }
    }
  }
  if (((ulong)local_40 & 1) != 0) {
    if (pcStack_58 != (char *)0x0) {
      uVar5 = (ulong)(((long)pcStack_58 - (long)local_50) * 0x1555555555555555) >> 3;
      uVar1 = (long)local_50 * -0x1555555555555555 - 8U >> 3;
      if (uVar1 <= uVar5) {
        uVar5 = uVar1;
      }
      pcVar4 = local_50;
      if ((1 < uVar5) && ((((int)pcStack_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pcVar4 = local_50 + uVar5 * -0x18;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pcVar4 == pcStack_58) {
          local_50 = pcStack_58;
          operator_delete(pcStack_58);
          goto LAB_00b9cec0;
        }
        pcVar4 = pcVar4 + -0x18;
      } while (pcVar4 != (char *)0x0);
LAB_00b9ce9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00b9cec0:
    if (local_70 != (undefined1 *)0x0) {
      if (local_68 + -1 < local_68 + -(long)local_70) goto LAB_00b9ce9c;
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  FUN_00ba1720(param_1 + 0x140);
  return;
}


// ===== 00b9cf34  FUN_00b9cf34 =====

undefined8 FUN_00b9cf34(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_3;
  switch(cVar1) {
  case '\0':
    FUN_00b9d058();
    break;
  case '\x01':
    FUN_00b9d140();
    break;
  case '\x02':
    FUN_00b9d94c();
    break;
  case '\x03':
    FUN_00b9dfcc();
    break;
  case '\x04':
    FUN_00b9e324();
    break;
  case '\x05':
    FUN_00b9e470();
    break;
  case '\x06':
    FUN_00b9e5bc();
    break;
  case '\a':
    FUN_00b9ed50();
    break;
  case '\b':
    FUN_00b9edf4();
    break;
  case '\t':
    FUN_00b9e734();
    break;
  case '\n':
    FUN_00b9e8a4();
    break;
  case '\v':
    FUN_00b9ebec();
    break;
  case '\f':
  case '\r':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
  case '{':
  case '|':
  case '}':
  case '~':
  case '\x7f':
  case -0x80:
  case -0x7f:
code_r0x00b9cf8c:
    uVar2 = FUN_00b9f57c(param_1,param_3);
    return uVar2;
  case '\x0e':
    FUN_00b9ef90();
    break;
  case '@':
    FUN_00b9f350();
    break;
  case -0x7e:
    FUN_00b9f034();
    break;
  default:
    if (cVar1 == -0x40) {
      FUN_00b9f20c();
    }
    else {
      if (cVar1 != -0x3e) goto code_r0x00b9cf8c;
      FUN_00b9f438();
    }
  }
  return 1;
}


// ===== 00b9d058  FUN_00b9d058 =====

void FUN_00b9d058(long param_1,undefined8 param_2,long param_3)

{
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc034c(&local_70,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,0);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    FUN_00b9f9c4(param_1,&local_70);
  }
  if ((char)local_28 == '\x01') {
    local_70 = &PTR_FUN_00d47568;
    if (local_50 != (undefined1 *)0x0) {
      if (local_48 + -1 < local_48 + -(long)local_50) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 00b9d140  FUN_00b9d140 =====

void FUN_00b9d140(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  void *pvVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined **local_170;
  int local_168;
  int iStack_164;
  uint local_160;
  int iStack_15c;
  void *local_158;
  void *pvStack_150;
  void *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  void *local_128;
  void *local_120;
  undefined8 local_118;
  undefined **local_110;
  char local_108 [16];
  undefined8 local_f8;
  void *local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc1574(&local_a0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_70 & 1) == 0) {
    FUN_00b9f8dc(param_1,1);
  }
  else if ((((int)uStack_98 == 0) || ((short)local_90 == 0)) || (local_90._2_2_ == 0)) {
    FUN_00ba4828(&local_170,0,param_1 + 0x80);
    puVar7 = PTR_DAT_00d52e90;
    pvStack_e8 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_110 = (undefined **)(PTR_DAT_00d52e90 + 0x10);
    local_e0 = (void *)0x0;
    local_f8 = (undefined1 *)CONCAT17(0xe,(undefined7)local_f8);
    if ((local_108 < "NIT malformed") && ("INIT malformed" < local_108 + 0xe)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    local_108[0xe] = '\0';
    local_108[0] = s_INIT_malformed_001ccc8a[0];
    local_108[1] = s_INIT_malformed_001ccc8a[1];
    local_108[2] = s_INIT_malformed_001ccc8a[2];
    local_108[3] = s_INIT_malformed_001ccc8a[3];
    local_108[4] = s_INIT_malformed_001ccc8a[4];
    local_108[5] = s_INIT_malformed_001ccc8a[5];
    local_108[6] = s_INIT_malformed_001ccc8a[6];
    local_108[7] = s_INIT_malformed_001ccc8a[7];
    local_108[8] = s_INIT_malformed_001ccc8a[8];
    local_108[9] = s_INIT_malformed_001ccc8a[9];
    local_108[10] = s_INIT_malformed_001ccc8a[10];
    local_108[0xb] = s_INIT_malformed_001ccc8a[0xb];
    local_108[0xc] = s_INIT_malformed_001ccc8a[0xc];
    local_108[0xd] = s_INIT_malformed_001ccc8a[0xd];
    puVar16 = (undefined8 *)FUN_00bba458(&local_f0,&local_110);
    puVar6 = PTR_DAT_00d52da0;
    local_b0 = (undefined1 *)puVar16[2];
    puStack_b8 = (undefined1 *)puVar16[1];
    local_c0 = (undefined1 *)*puVar16;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar1 = puVar6 + 0x10;
    puStack_c8 = (undefined1 *)((ulong)puStack_c8 & 0xffffffffffffff00);
    local_d0 = puVar1;
    uVar11 = FUN_00ba4854(&local_170,&local_d0);
    FUN_00ba4738(param_1 + 0x1c8,uVar11,1);
    local_d0 = puVar1;
    if (local_c0 != (undefined1 *)0x0) {
      if (puStack_b8 + -1 < puStack_b8 + -(long)local_c0) goto LAB_00b9d934;
      puStack_b8 = local_c0;
      operator_delete(local_c0);
    }
    local_110 = (undefined **)(puVar7 + 0x10);
    if ((long)local_f8 < 0) {
      operator_delete((void *)CONCAT26(local_108._6_2_,local_108._0_6_));
      if (local_f0 == (void *)0x0) goto LAB_00b9d2e4;
LAB_00b9d310:
      if ((long)pvStack_e8 - 1U < (ulong)((long)pvStack_e8 - (long)local_f0)) goto LAB_00b9d934;
      pvStack_e8 = local_f0;
      operator_delete(local_f0);
      pvVar19 = (void *)CONCAT44(iStack_15c,local_160);
      if (pvVar19 == (void *)0x0) goto LAB_00b9d2ec;
LAB_00b9d33c:
      if ((long)local_158 - 1U < (ulong)((long)local_158 - (long)pvVar19)) goto LAB_00b9d934;
      local_158 = pvVar19;
      operator_delete(pvVar19);
      iVar10 = *(int *)(param_1 + 0x2b4);
    }
    else {
      if (local_f0 != (void *)0x0) goto LAB_00b9d310;
LAB_00b9d2e4:
      pvVar19 = (void *)CONCAT44(iStack_15c,local_160);
      if (pvVar19 != (void *)0x0) goto LAB_00b9d33c;
LAB_00b9d2ec:
      iVar10 = *(int *)(param_1 + 0x2b4);
    }
    if (iVar10 != 0) {
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
      plVar12 = *(long **)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      FUN_00ba1ce8(param_1 + 0x140,6,"Received invalid INIT",0x15);
      if (*(int *)(param_1 + 0x2b4) != 0) {
        *(undefined4 *)(param_1 + 0x2b4) = 0;
      }
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x2b4);
    if (iVar10 - 1U < 2) {
      iVar9 = *(int *)(param_1 + 0x2ac);
      iVar10 = *(int *)(param_1 + 0x2a8);
LAB_00b9d3f4:
      pvVar19 = (void *)0x0;
      puVar1 = local_90;
    }
    else {
      if (iVar10 == 0) {
        iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
        iVar10 = FUN_00ba1a18(param_1 + 0x140,0,0xffffffff);
        goto LAB_00b9d3f4;
      }
      if (iVar10 == 7) {
        FUN_00b9ff20(param_1);
        goto LAB_00b9d890;
      }
      iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
      lVar17 = *(long *)(param_1 + 0x2b8);
      if (iVar9 == *(int *)(lVar17 + 0x100)) {
        iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
        lVar17 = *(long *)(param_1 + 0x2b8);
        if (iVar9 == *(int *)(lVar17 + 0x100)) {
          iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
          lVar17 = *(long *)(param_1 + 0x2b8);
          if (iVar9 == *(int *)(lVar17 + 0x100)) {
            iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
            lVar17 = *(long *)(param_1 + 0x2b8);
            if (iVar9 == *(int *)(lVar17 + 0x100)) {
              iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
              lVar17 = *(long *)(param_1 + 0x2b8);
              if (iVar9 == *(int *)(lVar17 + 0x100)) {
                iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
                lVar17 = *(long *)(param_1 + 0x2b8);
                if (iVar9 == *(int *)(lVar17 + 0x100)) {
                  iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
                  lVar17 = *(long *)(param_1 + 0x2b8);
                  if (iVar9 == *(int *)(lVar17 + 0x100)) {
                    iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
                    lVar17 = *(long *)(param_1 + 0x2b8);
                    if (iVar9 == *(int *)(lVar17 + 0x100)) {
                      iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
                      lVar17 = *(long *)(param_1 + 0x2b8);
                      if (iVar9 == *(int *)(lVar17 + 0x100)) {
                        iVar9 = FUN_00ba1a18(param_1 + 0x140,1,0xffffffff);
                        lVar17 = *(long *)(param_1 + 0x2b8);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar10 = FUN_00bb5c98(lVar17 + 0x450);
      iVar10 = iVar10 + 0xf4241;
      pvVar19 = *(void **)(*(long *)(param_1 + 0x2b8) + 0x110);
      puVar1 = local_90;
    }
    local_90 = puVar1;
    if (((ulong)local_70 & 1) == 0) {
LAB_00b9d920:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    local_90._2_2_ = (short)((ulong)puVar1 >> 0x10);
    uVar8 = local_90._2_2_;
    pvVar13 = (void *)FUN_00b9b6e8(param_1 + 0x80,(ulong)puVar1 & 0xffff,uVar8,&puStack_88);
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    if (((ulong)local_70 & 1) == 0) goto LAB_00b9d920;
    FUN_00ba4828(&local_d0,(ulong)uStack_98 & 0xffffffff,param_1 + 0x80);
    local_128 = (void *)0x0;
    local_120 = (void *)0x0;
    local_118 = 0;
    if (((ulong)local_70 & 1) == 0) goto LAB_00b9d920;
    local_170 = (undefined **)CONCAT44(iVar9,(int)uStack_98);
    local_168 = local_90._4_4_;
    local_160 = uStack_98._4_4_;
    iStack_164 = iVar10;
    local_158 = pvVar19;
    pvStack_150 = pvVar13;
    FUN_00bc2768(&local_140,&local_170);
    puVar15 = local_138;
    puVar1 = local_140;
    local_108[8] = '\0';
    local_108[9] = '\0';
    local_108[10] = '\0';
    local_108[0xb] = '\0';
    local_108[0xc] = '\0';
    local_108[0xd] = '\0';
    local_108[0xe] = '\0';
    local_108[0xf] = '\0';
    local_f8 = (undefined1 *)0x0;
    uVar4 = (long)local_138 - (long)local_140;
    local_110 = &PTR_FUN_00d47da0;
    local_108[0] = '\0';
    local_108[1] = '\0';
    local_108[2] = '\0';
    local_108[3] = '\0';
    local_108[4] = '\0';
    local_108[5] = '\0';
    local_108[6] = '\0';
    local_108[7] = '\0';
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) goto LAB_00b9d948;
      puVar14 = (undefined1 *)operator_new(uVar4);
      local_108._0_6_ = SUB86(puVar14,0);
      local_108._6_2_ = (undefined2)((ulong)puVar14 >> 0x30);
      local_108[0xe] = (char)((ulong)puVar14 >> 0x30);
      local_108[0xf] = (char)((ulong)puVar14 >> 0x38);
      puVar21 = puVar1 + (long)puVar15 + ~((long)puVar1 << 1);
      local_f8 = puVar14 + uVar4;
      puVar15 = puVar21;
      if ((undefined1 *)-(long)puVar14 < puVar21) {
        puVar15 = (undefined1 *)-(long)puVar14;
      }
      puVar15 = puVar15 + 1;
      puVar20 = puVar1;
      if ((undefined1 *)0x20 < puVar15) {
        if ((undefined1 *)-(long)puVar14 < puVar21) {
          puVar21 = (undefined1 *)-(long)puVar14;
        }
        if (((puVar14 <= puVar14 + (long)puVar21) && (puVar1 <= puVar1 + (long)puVar21)) &&
           (0x1f < (ulong)((long)puVar14 - (long)puVar1))) {
          puVar16 = (undefined8 *)(puVar14 + 0x10);
          uVar3 = 0x20;
          if (((ulong)puVar15 & 0x1f) != 0) {
            uVar3 = (ulong)puVar15 & 0x1f;
          }
          puVar18 = (undefined8 *)(puVar1 + 0x10);
          lVar17 = (long)puVar15 - uVar3;
          puVar20 = puVar1 + lVar17;
          puVar14 = puVar14 + lVar17;
          do {
            puVar5 = puVar18 + -1;
            uVar11 = puVar18[-2];
            uVar23 = puVar18[1];
            uVar22 = *puVar18;
            lVar17 = lVar17 + -0x20;
            puVar18 = puVar18 + 4;
            puVar16[-1] = *puVar5;
            puVar16[-2] = uVar11;
            puVar16[1] = uVar23;
            *puVar16 = uVar22;
            puVar16 = puVar16 + 4;
          } while (lVar17 != 0);
        }
      }
      puVar15 = puVar14;
      do {
        if (puVar15 == (undefined1 *)0x0) {
          local_108._8_6_ = local_108._0_6_;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar21 = puVar20 + 1;
        puVar14 = puVar14 + 1;
        *puVar15 = *puVar20;
        puVar15 = puVar15 + 1;
        puVar20 = puVar21;
      } while (puVar21 != puVar1 + uVar4);
      local_108._8_6_ = SUB86(puVar14,0);
      local_108[0xe] = (char)((ulong)puVar14 >> 0x30);
      local_108[0xf] = (char)((ulong)puVar14 >> 0x38);
    }
    puVar16 = (undefined8 *)FUN_00bba458(&local_128,&local_110);
    pvStack_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_f0 = (void *)0x0;
    pvVar19 = (void *)*puVar16;
    uVar4 = puVar16[1] - (long)pvVar19;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
LAB_00b9d948:
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      local_f0 = operator_new(uVar4);
      pvVar2 = (void *)((long)local_f0 + uVar4);
      local_e0 = pvVar2;
      memcpy(local_f0,pvVar19,uVar4);
      pvStack_e8 = pvVar2;
    }
    pvVar19 = (void *)CONCAT26(local_108._6_2_,local_108._0_6_);
    local_110 = &PTR_FUN_00d47da0;
    if (pvVar19 != (void *)0x0) {
      lVar17 = CONCAT17(local_108[0xf],CONCAT16(local_108[0xe],local_108._8_6_));
      if (lVar17 - 1U < (ulong)(lVar17 - (long)pvVar19)) goto LAB_00b9d934;
      local_108[8] = local_108[0];
      local_108[9] = local_108[1];
      local_108[10] = local_108[2];
      local_108[0xb] = local_108[3];
      local_108[0xc] = local_108[4];
      local_108[0xd] = local_108[5];
      local_108[0xe] = (char)local_108._6_2_;
      local_108[0xf] = SUB21(local_108._6_2_,1);
      operator_delete(pvVar19);
    }
    if (local_140 != (undefined1 *)0x0) {
      if (local_138 + -1 < local_138 + -(long)local_140) goto LAB_00b9d934;
      local_138 = local_140;
      operator_delete(local_140);
    }
    if (local_128 != (void *)0x0) {
      if ((long)local_120 - 1U < (ulong)((long)local_120 - (long)local_128)) goto LAB_00b9d934;
      local_120 = local_128;
      operator_delete(local_128);
    }
    FUN_00b9b0cc(param_1 + 0x80,((ulong)pvVar13 & 0x1000000) >> 0x18,&local_f0);
    local_148 = local_e0;
    pvStack_150 = pvStack_e8;
    local_158 = local_f0;
    local_e0 = (void *)0x0;
    local_f0 = (void *)0x0;
    pvStack_e8 = (void *)0x0;
    local_160 = *(uint *)(param_1 + 0x88) >> 0x10 | *(uint *)(param_1 + 0x88) << 0x10;
    local_170 = &PTR_FUN_00d47dd0;
    iStack_164 = (int)*(undefined8 *)(param_1 + 0xa8);
    local_168 = iVar9;
    iStack_15c = iVar10;
    FUN_00ba4854(&local_d0,&local_170);
    FUN_00ba4738(param_1 + 0x1c8,&local_d0,((ulong)pvVar13 & 0x1000000) == 0);
    local_170 = &PTR_FUN_00d47dd0;
    if (local_158 != (void *)0x0) {
      if ((long)pvStack_150 - 1U < (ulong)((long)pvStack_150 - (long)local_158)) goto LAB_00b9d934;
      pvStack_150 = local_158;
      operator_delete(local_158);
    }
    if (local_f0 != (void *)0x0) {
      if ((long)pvStack_e8 - 1U < (ulong)((long)pvStack_e8 - (long)local_f0)) goto LAB_00b9d934;
      pvStack_e8 = local_f0;
      operator_delete(local_f0);
    }
    if (local_c0 != (undefined1 *)0x0) {
      if (puStack_b8 + -1 < puStack_b8 + -(long)local_c0) goto LAB_00b9d934;
      puStack_b8 = local_c0;
      operator_delete(local_c0);
    }
  }
LAB_00b9d890:
  if ((((ulong)local_70 & 1) != 0) &&
     (local_a0 = &PTR_FUN_00d47c80, puStack_88 != (undefined1 *)0x0)) {
    if (local_80 + -1 < local_80 + -(long)puStack_88) {
LAB_00b9d934:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_80 = puStack_88;
    operator_delete(puStack_88);
  }
  return;
}


// ===== 00b9d94c  FUN_00b9d94c =====

void FUN_00b9d94c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  long lVar19;
  long *plVar20;
  undefined1 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *local_150;
  void *local_148;
  char acStack_140 [8];
  undefined2 local_138;
  char acStack_136 [5];
  char cStack_131;
  void *local_130;
  void *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_110;
  void *local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  long *plStack_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc2e18(&local_c0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_90 & 1) == 0) {
    FUN_00b9f8dc(param_1,2);
  }
  else if (*(int *)(param_1 + 0x2b4) == 1) {
    plStack_e8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba0000(&local_f0,&puStack_a8);
    if (((ulong)local_d0 & 1) == 0) {
      FUN_00ba4828(&local_80,*(undefined4 *)(param_1 + 0x2ac),param_1 + 0x80);
      puVar7 = PTR_DAT_00d52e90;
      local_128 = (void *)0x0;
      local_130 = (void *)0x0;
      local_150 = PTR_DAT_00d52e90 + 0x10;
      local_120 = 0;
      cStack_131 = '\x12';
      if ((&local_148 < (void **)0x1c42c4) && ("INIT-ACK malformed" < acStack_136)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      local_138 = 0x6465;
      acStack_140[0] = s_INIT_ACK_malformed_001c42c3[8];
      acStack_140[1] = s_INIT_ACK_malformed_001c42c3[9];
      acStack_140[2] = s_INIT_ACK_malformed_001c42c3[10];
      acStack_140[3] = s_INIT_ACK_malformed_001c42c3[0xb];
      acStack_140[4] = s_INIT_ACK_malformed_001c42c3[0xc];
      acStack_140[5] = s_INIT_ACK_malformed_001c42c3[0xd];
      acStack_140[6] = s_INIT_ACK_malformed_001c42c3[0xe];
      acStack_140[7] = s_INIT_ACK_malformed_001c42c3[0xf];
      local_148 = (void *)s_INIT_ACK_malformed_001c42c3._0_8_;
      acStack_136[0] = '\0';
      puVar10 = (undefined8 *)FUN_00bba458(&local_130,&local_150);
      puVar6 = PTR_DAT_00d52da0;
      local_f8 = puVar10[2];
      pvStack_100 = (void *)puVar10[1];
      local_108 = (void *)*puVar10;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar2 = puVar6 + 0x10;
      local_110 = 0;
      local_118 = puVar2;
      uVar16 = FUN_00ba4854(&local_80,&local_118);
      FUN_00ba4738(param_1 + 0x1c8,uVar16,1);
      local_118 = puVar2;
      if (local_108 != (void *)0x0) {
        if ((long)pvStack_100 - 1U < (ulong)((long)pvStack_100 - (long)local_108))
        goto LAB_00b9dfb4;
        pvStack_100 = local_108;
        operator_delete(local_108);
      }
      local_150 = puVar7 + 0x10;
      if (cStack_131 < '\0') {
        operator_delete(local_148);
      }
      if (local_130 != (void *)0x0) {
        if ((long)local_128 - 1U < (ulong)((long)local_128 - (long)local_130)) goto LAB_00b9dfb4;
        local_128 = local_130;
        operator_delete(local_130);
      }
      if (local_70 != (undefined1 *)0x0) {
        if (local_68 + -1 < local_68 + -(long)local_70) goto LAB_00b9dfb4;
        local_68 = local_70;
        operator_delete(local_70);
      }
      if (*(int *)(param_1 + 0x2b4) != 0) {
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
        plVar11 = *(long **)(param_1 + 0x2b8);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        FUN_00ba1ce8(param_1 + 0x140,6,"InitAck chunk doesn\'t contain a cookie",0x26);
        if (*(int *)(param_1 + 0x2b4) != 0) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
      }
    }
    else {
      local_118 = &DAT_aaaaaaaaaaaaaaaa;
      if (((ulong)local_90 & 1) == 0) goto LAB_00b9df78;
      local_118 = (undefined1 *)
                  FUN_00b9b6e8(param_1 + 0x80,(ulong)local_b0 & 0xffff,local_b0._2_2_,&puStack_a8);
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
      if (((ulong)local_d0 & 1) == 0) goto LAB_00b9df78;
      if ((ulong)((long)local_e0 - (long)plStack_e8) < 9) {
LAB_00b9da54:
        uVar17 = 3;
      }
      else {
        if ((plStack_e8 == (long *)0x0) || (local_e0 == plStack_e8)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                    );
        }
        if (*plStack_e8 == 0x3030505443536364) {
          uVar17 = 1;
        }
        else {
          if (*plStack_e8 != 0x4453422d454d414b) goto LAB_00b9da54;
          uVar17 = 2;
        }
      }
      *(undefined4 *)(param_1 + 0x74) = uVar17;
      FUN_00ba735c(param_1 + 0x1f0);
      if (((ulong)local_90 & 1) == 0) {
LAB_00b9df78:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      uVar17 = *(undefined4 *)(param_1 + 0x2a8);
      uVar3 = (ulong)uStack_b8 & 0xffffffff;
      uVar8 = uStack_b8._4_4_;
      uVar4 = *(undefined4 *)(param_1 + 0x2ac);
      uVar9 = local_b0._4_4_;
      lVar12 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,0,0xffffffff);
      uVar13 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,1,0xffffffff);
      FUN_00b9b940(param_1,&local_118,uVar4,uVar17,uVar3,uVar9,uVar8,
                   uVar13 & 0xffffffff | lVar12 << 0x20);
      plVar22 = local_e0;
      plVar11 = plStack_e8;
      if (*(int *)(param_1 + 0x2b4) != 2) {
        *(undefined4 *)(param_1 + 0x2b4) = 2;
      }
      if (((ulong)local_d0 & 1) == 0) goto LAB_00b9df78;
      lVar12 = *(long *)(param_1 + 0x2b8);
      uVar3 = (long)local_e0 - (long)plStack_e8;
      if (uVar3 == 0) {
        puVar14 = (undefined1 *)0x0;
        puVar21 = (undefined1 *)0x0;
        lVar19 = 0;
      }
      else {
        if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d34c0();
        }
        puVar14 = (undefined1 *)operator_new(uVar3);
        puVar21 = puVar14 + uVar3;
        puVar1 = (undefined1 *)((long)plVar11 + (long)plVar22) + ~((long)plVar11 << 1);
        puVar2 = puVar1;
        if ((undefined1 *)-(long)puVar14 < puVar1) {
          puVar2 = (undefined1 *)-(long)puVar14;
        }
        puVar2 = puVar2 + 1;
        puVar18 = puVar14;
        plVar22 = plVar11;
        if ((undefined1 *)0x20 < puVar2) {
          if ((undefined1 *)-(long)puVar14 < puVar1) {
            puVar1 = (undefined1 *)-(long)puVar14;
          }
          if (((puVar14 <= puVar14 + (long)puVar1) &&
              (plVar11 <= (long *)((long)plVar11 + (long)puVar1))) &&
             (0x1f < (ulong)((long)puVar14 - (long)plVar11))) {
            plVar23 = (long *)(puVar14 + 0x10);
            uVar13 = 0x20;
            if (((ulong)puVar2 & 0x1f) != 0) {
              uVar13 = (ulong)puVar2 & 0x1f;
            }
            plVar20 = plVar11 + 2;
            lVar19 = (long)puVar2 - uVar13;
            plVar22 = (long *)((long)plVar11 + lVar19);
            puVar18 = puVar14 + lVar19;
            do {
              plVar5 = plVar20 + -1;
              lVar24 = plVar20[-2];
              lVar26 = plVar20[1];
              lVar25 = *plVar20;
              lVar19 = lVar19 + -0x20;
              plVar20 = plVar20 + 4;
              plVar23[-1] = *plVar5;
              plVar23[-2] = lVar24;
              plVar23[1] = lVar26;
              *plVar23 = lVar25;
              plVar23 = plVar23 + 4;
            } while (lVar19 != 0);
          }
        }
        lVar19 = (long)puVar14 - (long)puVar18;
        do {
          if (puVar18 == (undefined1 *)0x0) goto LAB_00b9df64;
          plVar23 = (long *)((long)plVar22 + 1);
          lVar19 = lVar19 + -1;
          *puVar18 = (char)*plVar22;
          puVar18 = puVar18 + 1;
          plVar22 = plVar23;
        } while (plVar23 != (long *)((long)plVar11 + uVar3));
        lVar19 = (long)puVar14 - lVar19;
      }
      puVar7 = PTR_DAT_00d52db0;
      if (*(char *)(lVar12 + 0x608) == '\x01') {
        pvVar15 = *(void **)(lVar12 + 0x5f0);
        if (pvVar15 != (void *)0x0) {
          if (*(long *)(lVar12 + 0x5f8) - 1U < (ulong)(*(long *)(lVar12 + 0x5f8) - (long)pvVar15))
          goto LAB_00b9dfb4;
          *(void **)(lVar12 + 0x5f8) = pvVar15;
          operator_delete(pvVar15);
        }
        *(undefined1 **)(lVar12 + 0x5f0) = puVar14;
        *(long *)(lVar12 + 0x5f8) = lVar19;
        *(undefined1 **)(lVar12 + 0x600) = puVar21;
      }
      else {
        if (lVar12 == -0x5e8) {
LAB_00b9df64:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined1 **)(lVar12 + 0x5f0) = puVar14;
        *(long *)(lVar12 + 0x5f8) = lVar19;
        *(undefined1 **)(lVar12 + 0x600) = puVar21;
        *(undefined **)(lVar12 + 0x5e8) = puVar7 + 0x10;
        *(undefined1 *)(lVar12 + 0x608) = 1;
      }
      lVar12 = *(long *)(param_1 + 0x2b8);
      uVar16 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba4828(&local_80,*(undefined4 *)(lVar12 + 0x108),lVar12 + 0x18);
      FUN_00baab74(lVar12,&local_80,uVar16);
      if (local_70 != (undefined1 *)0x0) {
        if (local_68 + -1 < local_68 + -(long)local_70) goto LAB_00b9dfb4;
        local_68 = local_70;
        operator_delete(local_70);
      }
      FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1b8));
    }
    if ((((ulong)local_d0 & 1) != 0) && (local_f0 = &PTR_FUN_00d47da0, plStack_e8 != (long *)0x0)) {
      if ((undefined1 *)((long)local_e0 + -1) < (undefined1 *)((long)local_e0 - (long)plStack_e8))
      goto LAB_00b9dfb4;
      local_e0 = plStack_e8;
      operator_delete(plStack_e8);
    }
  }
  if ((((ulong)local_90 & 1) != 0) &&
     (local_c0 = &PTR_FUN_00d47dd0, puStack_a8 != (undefined1 *)0x0)) {
    if (local_a0 + -1 < local_a0 + -(long)puStack_a8) {
LAB_00b9dfb4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_a0 = puStack_a8;
    operator_delete(puStack_a8);
  }
  return;
}


// ===== 00b9dfcc  FUN_00b9dfcc =====

void FUN_00b9dfcc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 **local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 **local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbc200(&local_b0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_70 & 1) == 0) {
    FUN_00b9f8dc(param_1,3);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    if (((ulong)local_70 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_00bc3220(&local_f0,&local_b0);
    uVar2 = FUN_00bb3778(*(long *)(param_1 + 0x2b8) + 0x2c8,uVar1,&local_f0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x2b8) + 0x4c0) == 0) {
        if (*(int *)(param_1 + 0x2b4) == 6) {
          FUN_00b9ff20(param_1);
          if (*(int *)(param_1 + 0x2b4) != 7) {
            uVar3 = 7;
LAB_00b9e2c4:
            *(undefined4 *)(param_1 + 0x2b4) = uVar3;
          }
        }
        else if (*(int *)(param_1 + 0x2b4) == 4) {
          FUN_00b9c954(param_1);
          lVar6 = *(long *)(param_1 + 0x1c0);
          lVar5 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x38))();
          if (86399999999 < lVar5) {
            lVar5 = 86400000000;
          }
          *(long *)(lVar6 + 0x90) = lVar5;
          FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1c0));
          if (*(int *)(param_1 + 0x2b4) != 5) {
            uVar3 = 5;
            goto LAB_00b9e2c4;
          }
        }
      }
      FUN_00baa8b8(*(undefined8 *)(param_1 + 0x2b8));
      lVar5 = *(long *)(param_1 + 0x2b8);
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba4828(&local_60,*(undefined4 *)(lVar5 + 0x108),lVar5 + 0x18);
      FUN_00baab74(lVar5,&local_60,uVar1);
      if (local_50 != (undefined1 *)0x0) {
        if (local_48 + -1 < local_48 + -(long)local_50) goto LAB_00b9e234;
        local_48 = local_50;
        operator_delete(local_50);
      }
    }
    local_60 = &puStack_c8;
    local_f0 = (undefined1 **)(PTR_DAT_00d52e08 + 0x10);
    FUN_00ba1004(&local_60,local_c0);
    if (local_e0 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_e0 - (long)local_d8 << 0x3e) - ((long)local_e0 - (long)local_d8))
              >> 2;
      if ((ulong)(local_d8 + (-4 - ((long)local_d8 << 0x3e))) >> 2 <= uVar2) {
        uVar2 = (ulong)(local_d8 + (-4 - ((long)local_d8 << 0x3e))) >> 2;
      }
      puVar4 = local_d8;
      if ((1 < uVar2) && ((((int)local_e0 - (int)local_d8 | -(int)local_d8) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar4 = local_d8 + uVar2 * -4;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar4 == local_e0) {
          local_d8 = local_e0;
          operator_delete(local_e0);
          goto joined_r0x00b9e178;
        }
        puVar4 = puVar4 + -4;
      } while (puVar4 != (undefined1 *)0x0);
      goto LAB_00b9e234;
    }
  }
joined_r0x00b9e178:
  if (((ulong)local_70 & 1) != 0) {
    local_f0 = &puStack_88;
    local_b0 = PTR_DAT_00d52e08 + 0x10;
    FUN_00ba1004(&local_f0,local_80);
    if (local_a0 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_a0 - (long)local_98 << 0x3e) - ((long)local_a0 - (long)local_98))
              >> 2;
      if ((ulong)(local_98 + (-4 - ((long)local_98 << 0x3e))) >> 2 <= uVar2) {
        uVar2 = (ulong)(local_98 + (-4 - ((long)local_98 << 0x3e))) >> 2;
      }
      puVar4 = local_98;
      if ((1 < uVar2) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar4 = local_98 + uVar2 * -4;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar4 == local_a0) {
          local_98 = local_a0;
          operator_delete(local_a0);
          return;
        }
        puVar4 = puVar4 + -4;
      } while (puVar4 != (undefined1 *)0x0);
LAB_00b9e234:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00b9e324  FUN_00b9e324 =====

void FUN_00b9e324(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bba8b0(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_30 & 1) == 0) {
    FUN_00b9f8dc(param_1,4);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    puStack_60 = local_40;
    local_68 = puStack_48;
    puVar1 = PTR_DAT_00d52dd8 + 0x10;
    local_58 = local_38;
    puStack_48 = (undefined1 *)0x0;
    local_40 = (undefined1 *)0x0;
    local_38 = (undefined1 *)0x0;
    local_70 = puVar1;
    FUN_00bb9a60(*(long *)(param_1 + 0x2b8) + 0x5a8,&local_70);
    local_70 = puVar1;
    if (local_68 != (undefined1 *)0x0) {
      if (puStack_60 + -1 < puStack_60 + -(long)local_68) goto LAB_00b9e45c;
      puStack_60 = local_68;
      operator_delete(local_68);
    }
  }
  if ((((ulong)local_30 & 1) != 0) &&
     (local_50 = &PTR_FUN_00d47a40, puStack_48 != (undefined1 *)0x0)) {
    if (local_40 + -1 < local_40 + -(long)puStack_48) {
LAB_00b9e45c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return;
}


// ===== 00b9e470  FUN_00b9e470 =====

void FUN_00b9e470(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbab6c(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_30 & 1) == 0) {
    FUN_00b9f8dc(param_1,5);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    puStack_60 = local_40;
    local_68 = puStack_48;
    puVar1 = PTR_DAT_00d52dd0 + 0x10;
    local_58 = local_38;
    puStack_48 = (undefined1 *)0x0;
    local_40 = (undefined1 *)0x0;
    local_38 = (undefined1 *)0x0;
    local_70 = puVar1;
    FUN_00bb9b5c(*(long *)(param_1 + 0x2b8) + 0x5a8,&local_70);
    local_70 = puVar1;
    if (local_68 != (undefined1 *)0x0) {
      if (puStack_60 + -1 < puStack_60 + -(long)local_68) goto LAB_00b9e5a8;
      puStack_60 = local_68;
      operator_delete(local_68);
    }
  }
  if ((((ulong)local_30 & 1) != 0) &&
     (local_50 = &PTR_FUN_00d47a70, puStack_48 != (undefined1 *)0x0)) {
    if (local_40 + -1 < local_40 + -(long)puStack_48) {
LAB_00b9e5a8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return;
}


// ===== 00b9e5bc  FUN_00b9e5bc =====

void FUN_00b9e5bc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc12a0(&local_60,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_38 & 1) == 0) {
    FUN_00b9f8dc(param_1,6);
  }
  else {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc492c(&local_80,&local_50);
    if (*(long *)(param_1 + 0x2b8) != 0) {
      puVar1 = puStack_78;
      ppuVar2 = (undefined1 **)local_80;
      if (-1 < (long)local_70) {
        puVar1 = (undefined1 *)((ulong)local_70 >> 0x38);
        ppuVar2 = &local_80;
      }
      if (*(int *)(param_1 + 0x2b4) != 0) {
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
        plVar3 = *(long **)(param_1 + 0x2b8);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        FUN_00ba1ce8(param_1 + 0x140,5,ppuVar2,puVar1);
        if (*(int *)(param_1 + 0x2b4) != 0) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
      }
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
  }
  if (((char)local_38 == '\x01') && (local_60 = &PTR_FUN_00d47c50, local_50 != (undefined1 *)0x0)) {
    if (puStack_48 + -1 < puStack_48 + -(long)local_50) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00b9e734  FUN_00b9e734 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b9e734(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******local_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 uStack_21;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc7c68(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_30 & 1) == 0) {
    FUN_00b9f8dc(param_1,9);
  }
  else {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc492c(&local_70,(ulong)&local_50 | 8);
    if (*(long *)(param_1 + 0x2b8) != 0) {
      puVar1 = puStack_68;
      pppppppuVar2 = local_70;
      if (-1 < (long)local_60) {
        puVar1 = (undefined1 *)((ulong)local_60 >> 0x38);
        pppppppuVar2 = &local_70;
      }
      FUN_005ff514(&local_88,&uStack_21,"Peer reported error: ",0x15,pppppppuVar2,puVar1);
      pppppppuVar2 = local_88;
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
        pppppppuVar2 = &local_88;
      }
      FUN_00ba1b54(param_1 + 0x140,5,pppppppuVar2,uStack_80);
      if ((char)bStack_71 < '\0') {
        operator_delete(local_88);
      }
    }
    if ((long)local_60 < 0) {
      operator_delete(local_70);
    }
  }
  if ((((ulong)local_30 & 1) != 0) &&
     (local_50 = &PTR_FUN_00d48010, puStack_48 != (undefined1 *)0x0)) {
    if (local_40 + -1 < local_40 + -(long)puStack_48) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return;
}


// ===== 00b9e8a4  FUN_00b9e8a4 =====

void FUN_00b9e8a4(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_e8;
  undefined8 ***local_e0;
  undefined1 *puStack_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined **local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc0a54(&local_80,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_60 & 1) == 0) {
    FUN_00b9f8dc(param_1,10);
  }
  else {
    puVar1 = (undefined1 *)0x0;
    if ((long)local_70 - (long)puStack_78 != 0) {
      puVar1 = puStack_78;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc28d4(&local_b0,puVar1,(long)local_70 - (long)puStack_78);
    if (((ulong)local_88 & 1) == 0) {
      FUN_00ba1b54(param_1 + 0x140,3,"Failed to parse state cookie",0x1c);
    }
    else {
      if (*(long *)(param_1 + 0x2b8) == 0) {
        if (*(int *)(param_2 + 4) == local_b0._4_4_) goto LAB_00b9e970;
        FUN_008490e4(&local_e0,
                     "Received CookieEcho with invalid verification tag: %08x, expected %08x");
        puVar1 = puStack_d8;
        ppppuVar10 = (undefined8 ****)local_e0;
        if (-1 < (long)local_d0) {
          puVar1 = (undefined1 *)((ulong)local_d0 >> 0x38);
          ppppuVar10 = &local_e0;
        }
        FUN_00ba1b54(param_1 + 0x140,3,ppppuVar10,puVar1);
        ppppuVar10 = (undefined8 ****)local_e0;
        if (-1 < (long)local_d0) goto LAB_00b9eb50;
      }
      else {
        uVar5 = FUN_00ba0128(param_1,param_2,&local_b0);
        if ((uVar5 & 1) == 0) goto LAB_00b9eb50;
LAB_00b9e970:
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
        if (*(int *)(param_1 + 0x2b4) != 3) {
          lVar12 = *(long *)(param_1 + 0x2b8);
          if ((lVar12 == 0) || (*(char *)(lVar12 + 0x608) != '\x01')) {
LAB_00b9e9ec:
            *(undefined4 *)(param_1 + 0x2b4) = 3;
          }
          else {
            pvVar6 = *(void **)(lVar12 + 0x5f0);
            *(undefined ***)(lVar12 + 0x5e8) = &PTR_FUN_00d47bf0;
            if (pvVar6 != (void *)0x0) {
              if (*(long *)(lVar12 + 0x5f8) - 1U < (ulong)(*(long *)(lVar12 + 0x5f8) - (long)pvVar6)
                 ) goto LAB_00b9ebd8;
              *(void **)(lVar12 + 0x5f8) = pvVar6;
              operator_delete(pvVar6);
            }
            *(undefined1 *)(lVar12 + 0x608) = 0;
            if (*(int *)(param_1 + 0x2b4) != 3) goto LAB_00b9e9ec;
          }
          FUN_00ba1e7c(param_1 + 0x140);
        }
        plVar7 = *(long **)(param_1 + 0x2b8);
        if (plVar7 == (long *)0x0) {
          FUN_00ba735c(param_1 + 0x1f0);
          if (((ulong)local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          uVar13 = (ulong)local_a0 & 0xffffffff;
          uVar5 = (ulong)local_b0 & 0xffffffff;
          uVar3 = local_b0._4_4_;
          uVar2 = (ulong)uStack_a8 & 0xffffffff;
          uVar4 = uStack_a8._4_4_;
          lVar12 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,0,0xffffffff);
          uVar8 = (**(code **)(*(long *)(param_1 + 0x140) + 0x40))(param_1 + 0x140,1,0xffffffff);
          FUN_00b9b940(param_1,&puStack_90,uVar3,uVar4,uVar5,uVar2,uVar13,
                       uVar8 & 0xffffffff | lVar12 << 0x20);
          plVar7 = *(long **)(param_1 + 0x2b8);
        }
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
        local_c8 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        (**(code **)(*plVar7 + 0x58))(&local_e0);
        local_e8 = PTR_DAT_00d52da8 + 0x10;
        FUN_00ba4854(&local_e0,&local_e8);
        uVar11 = *(undefined8 *)(param_1 + 0x2b8);
        uVar9 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
        FUN_00baab74(uVar11,&local_e0,uVar9);
        if ((undefined8 ****)local_d0 == (undefined8 ****)0x0) goto LAB_00b9eb50;
        if ((undefined1 *)((long)local_c8 + -1) < (undefined1 *)((long)local_c8 - (long)local_d0))
        goto LAB_00b9ebd8;
        local_c8 = local_d0;
        ppppuVar10 = (undefined8 ****)local_d0;
      }
      operator_delete(ppppuVar10);
    }
  }
LAB_00b9eb50:
  if ((((ulong)local_60 & 1) != 0) &&
     (local_80 = &PTR_FUN_00d47bf0, puStack_78 != (undefined1 *)0x0)) {
    if (local_70 + -1 < local_70 + -(long)puStack_78) {
LAB_00b9ebd8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_70 = puStack_78;
    operator_delete(puStack_78);
  }
  return;
}


// ===== 00b9ebec  FUN_00b9ebec =====

void FUN_00b9ebec(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc7fac(&local_70,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)puStack_68 & 1) == 0) {
    FUN_00b9f8dc(param_1,0xb);
  }
  else {
    if (*(int *)(param_1 + 0x2b4) != 2) {
      return;
    }
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    lVar3 = *(long *)(param_1 + 0x2b8);
    if (*(char *)(lVar3 + 0x608) == '\x01') {
      pvVar1 = *(void **)(lVar3 + 0x5f0);
      *(undefined ***)(lVar3 + 0x5e8) = &PTR_FUN_00d47bf0;
      if (pvVar1 != (void *)0x0) {
        if (*(long *)(lVar3 + 0x5f8) - 1U < (ulong)(*(long *)(lVar3 + 0x5f8) - (long)pvVar1))
        goto LAB_00b9ed3c;
        *(void **)(lVar3 + 0x5f8) = pvVar1;
        operator_delete(pvVar1);
      }
      *(undefined1 *)(lVar3 + 0x608) = 0;
    }
    if (*(int *)(param_1 + 0x2b4) != 3) {
      *(undefined4 *)(param_1 + 0x2b4) = 3;
    }
    lVar3 = *(long *)(param_1 + 0x2b8);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_60,*(undefined4 *)(lVar3 + 0x108),lVar3 + 0x18);
    FUN_00baab74(lVar3,&local_60,uVar2);
    if (local_50 != (undefined1 *)0x0) {
      if (local_48 + -1 < local_48 + -(long)local_50) {
LAB_00b9ed3c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
    FUN_00ba1e7c(param_1 + 0x140);
  }
  return;
}


// ===== 00b9ed50  FUN_00b9ed50 =====

void FUN_00b9ed50(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 auStack_38 [16];
  byte local_28;
  
  FUN_00bc21cc(auStack_38,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if ((local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,7);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2b4);
  if (uVar1 < 8) {
    if ((199U >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
      return;
    }
    if (uVar1 == 5) goto LAB_00b9edb4;
  }
  *(undefined4 *)(param_1 + 0x2b4) = 6;
  if (*(long *)(*(long *)(param_1 + 0x2b8) + 0x4c0) != 0) {
    return;
  }
LAB_00b9edb4:
  FUN_00b9ff20(param_1);
  if (*(int *)(param_1 + 0x2b4) != 7) {
    *(undefined4 *)(param_1 + 0x2b4) = 7;
  }
  return;
}


// ===== 00b9edf4  FUN_00b9edf4 =====

void FUN_00b9edf4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *local_60;
  undefined1 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  FUN_00bc80b4(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((byte)puStack_48 & 1) == 0) {
    FUN_00b9f8dc(param_1,8);
  }
  else {
    if ((*(uint *)(param_1 + 0x2b4) | 2) == 7) {
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(&local_50);
      local_58 = 0;
      local_60 = PTR_DAT_00d52e20 + 0x10;
      FUN_00ba4854(&local_50,&local_60);
      FUN_00ba4738(param_1 + 0x1c8,&local_50,1);
      if (*(int *)(param_1 + 0x2b4) != 0) {
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
        plVar1 = *(long **)(param_1 + 0x2b8);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        FUN_00ba1efc(param_1 + 0x140);
        if (*(int *)(param_1 + 0x2b4) != 0) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
      }
    }
    else {
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba4828(&local_50,*(undefined4 *)(param_2 + 4),param_1 + 0x80);
      local_58 = 1;
      local_60 = PTR_DAT_00d52e20 + 0x10;
      FUN_00ba4854(&local_50,&local_60);
      FUN_00ba4738(param_1 + 0x1c8,&local_50,1);
    }
    if (local_40 != (undefined1 *)0x0) {
      if (local_38 + -1 < local_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_38 = local_40;
      operator_delete(local_40);
    }
  }
  return;
}


// ===== 00b9ef90  FUN_00b9ef90 =====

void FUN_00b9ef90(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_38 [16];
  byte local_28;
  
  FUN_00bc81bc(auStack_38,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if ((local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,0xe);
  }
  else if (*(int *)(param_1 + 0x2b4) == 7) {
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
    plVar1 = *(long **)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    FUN_00ba1efc(param_1 + 0x140);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return;
}


// ===== 00b9f034  FUN_00b9f034 =====

void FUN_00b9f034(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined **local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x38))();
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbf918(&local_90,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_70 & 1) == 0) {
    FUN_00b9f8dc(param_1,0x82);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    puStack_a0 = local_80;
    local_a8 = puStack_88;
    puVar1 = PTR_DAT_00d52e00 + 0x10;
    local_98 = local_78;
    puStack_88 = (undefined1 *)0x0;
    local_80 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    local_b0 = puVar1;
    FUN_00bbdd68(*(long *)(param_1 + 0x2b8) + 0x510,&local_b0);
    local_b0 = puVar1;
    if (local_a8 != (undefined1 *)0x0) {
      if (puStack_a0 + -1 < puStack_a0 + -(long)local_a8) goto LAB_00b9f1f8;
      puStack_a0 = local_a8;
      operator_delete(local_a8);
    }
    FUN_00b9c6e4(param_1);
    lVar3 = *(long *)(param_1 + 0x2b8);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_60,*(undefined4 *)(lVar3 + 0x108),lVar3 + 0x18);
    FUN_00baab74(lVar3,&local_60,uVar2);
    if (local_50 != (undefined1 *)0x0) {
      if (local_48 + -1 < local_48 + -(long)local_50) goto LAB_00b9f1f8;
      local_48 = local_50;
      operator_delete(local_50);
    }
    FUN_00b9fddc(param_1);
  }
  if ((((ulong)local_70 & 1) != 0) &&
     (local_90 = &PTR_FUN_00d47b60, puStack_88 != (undefined1 *)0x0)) {
    if (local_80 + -1 < local_80 + -(long)puStack_88) {
LAB_00b9f1f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_80 = puStack_88;
    operator_delete(puStack_88);
  }
  return;
}


// ===== 00b9f20c  FUN_00b9f20c =====

void FUN_00b9f20c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb84bc(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,0xc0);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    FUN_00ba03d0(param_1,&local_50);
  }
  if ((char)local_28 == '\x01') {
    local_50 = &PTR_FUN_00d47598;
    if (local_40 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_40 - (long)puStack_38) * 0x1555555555555555) >> 2;
      uVar3 = (long)puStack_38 * -0x1555555555555555 - 4U >> 2;
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      puVar1 = puStack_38;
      if ((1 < uVar2) && ((((int)local_40 - (int)puStack_38 | -(int)puStack_38) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar1 = puStack_38 + uVar2 * -0xc;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar1 != local_40) {
        puVar1 = puVar1 + -0xc;
        if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
  }
  return;
}


// ===== 00b9f350  FUN_00b9f350 =====

void FUN_00b9f350(long param_1,undefined8 param_2,long param_3)

{
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbfbd4(&local_70,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,0x40);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    FUN_00b9f9c4(param_1,&local_70);
  }
  if ((char)local_28 == '\x01') {
    local_70 = &PTR_FUN_00d47568;
    if (local_50 != (undefined1 *)0x0) {
      if (local_48 + -1 < local_48 + -(long)local_50) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  return;
}


// ===== 00b9f438  FUN_00b9f438 =====

void FUN_00b9f438(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb8cec(&local_50,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((ulong)local_28 & 1) == 0) {
    FUN_00b9f8dc(param_1,0xc2);
  }
  else if (*(long *)(param_1 + 0x2b8) == 0) {
    FUN_00ba1b54(param_1 + 0x140,2,"Received unexpected commands on socket that is not connected",
                 0x3c);
  }
  else {
    FUN_00ba03d0(param_1,&local_50);
  }
  if ((char)local_28 == '\x01') {
    local_50 = &PTR_FUN_00d47598;
    if (local_40 != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)local_40 - (long)puStack_38) * 0x1555555555555555) >> 2;
      uVar3 = (long)puStack_38 * -0x1555555555555555 - 4U >> 2;
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      puVar1 = puStack_38;
      if ((1 < uVar2) && ((((int)local_40 - (int)puStack_38 | -(int)puStack_38) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar1 = puStack_38 + uVar2 * -0xc;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar1 != local_40) {
        puVar1 = puVar1 + -0xc;
        if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
  }
  return;
}


// ===== 00b9f57c  FUN_00b9f57c =====

/* WARNING: Removing unreachable block (ram,0x00b9f60c) */
/* WARNING: Removing unreachable block (ram,0x00b9f880) */

byte FUN_00b9f57c(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined8 ***local_80;
  ulong uStack_78;
  void *local_70;
  void *local_68;
  undefined8 ***local_58;
  ulong uStack_50;
  ulong local_48;
  
  bVar4 = *param_2;
  if ((bVar4 >> 6 & 1) != 0) {
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_00547cac(&local_58,"Received unknown chunk of type: ",0x20);
    local_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    FUN_005f55c4(&local_80,0x16,*param_2);
    uVar16 = uStack_78;
    ppppuVar6 = (undefined8 ****)local_80;
    if (-1 < (long)local_70) {
      uVar16 = (ulong)local_70 >> 0x38;
      ppppuVar6 = &local_80;
    }
    FUN_00547cac(&local_58,ppppuVar6,uVar16);
    FUN_00547cac(&local_58," with report-error bit set",0x1a);
    uVar16 = uStack_50;
    ppppuVar6 = (undefined8 ****)local_58;
    if (-1 < (long)local_48) {
      uVar16 = local_48 >> 0x38;
      ppppuVar6 = &local_58;
    }
    FUN_00ba1b54(param_1 + 0x140,3,ppppuVar6,uVar16);
    if (*(long **)(param_1 + 0x2b8) == (long *)0x0) goto LAB_00b9f890;
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(&local_80);
    uVar16 = *(ulong *)(param_2 + 0x10);
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    if (uVar16 == 0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      puVar15 = *(undefined1 **)(param_2 + 8);
      local_d0 = (undefined1 *)operator_new(uVar16);
      uVar9 = uVar16 - 1;
      uVar3 = uVar9;
      if ((ulong)-(long)local_d0 < uVar9) {
        uVar3 = -(long)local_d0;
      }
      uVar3 = uVar3 + 1;
      local_c0 = local_d0 + uVar16;
      puVar10 = puVar15;
      puVar12 = local_d0;
      if (0x20 < uVar3) {
        if ((ulong)-(long)local_d0 < uVar9) {
          uVar9 = -(long)local_d0;
        }
        if (((local_d0 <= local_d0 + uVar9) && (puVar15 <= puVar15 + uVar9)) &&
           (0x1f < (ulong)((long)local_d0 - (long)puVar15))) {
          puVar7 = (undefined8 *)(local_d0 + 0x10);
          uVar9 = 0x20;
          if ((uVar3 & 0x1f) != 0) {
            uVar9 = uVar3 & 0x1f;
          }
          puVar14 = (undefined8 *)(puVar15 + 0x10);
          lVar13 = uVar3 - uVar9;
          puVar10 = puVar15 + lVar13;
          puVar12 = local_d0 + lVar13;
          do {
            puVar5 = puVar14 + -1;
            uVar8 = puVar14[-2];
            uVar18 = puVar14[1];
            uVar17 = *puVar14;
            lVar13 = lVar13 + -0x20;
            puVar14 = puVar14 + 4;
            puVar7[-1] = *puVar5;
            puVar7[-2] = uVar8;
            puVar7[1] = uVar18;
            *puVar7 = uVar17;
            puVar7 = puVar7 + 4;
          } while (lVar13 != 0);
        }
      }
      lVar13 = (long)local_d0 - (long)puVar12;
      do {
        if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar11 = puVar10 + 1;
        lVar13 = lVar13 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar11;
        puVar12 = puVar12 + 1;
      } while (puVar11 != puVar15 + uVar16);
      local_c8 = local_d0 + -lVar13;
    }
    puVar1 = PTR_DAT_00d52ea0 + 0x10;
    local_d8 = puVar1;
    puVar7 = (undefined8 *)FUN_00bba458(&local_b8,&local_d8);
    puVar2 = PTR_DAT_00d52dc0;
    local_88 = puVar7[2];
    pvStack_90 = (void *)puVar7[1];
    local_98 = (void *)*puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar2 = puVar2 + 0x10;
    local_a0 = puVar2;
    uVar8 = FUN_00ba4854(&local_80,&local_a0);
    FUN_00ba4738(param_1 + 0x1c8,uVar8,1);
    local_a0 = puVar2;
    if (local_98 != (void *)0x0) {
      if ((long)pvStack_90 - 1U < (ulong)((long)pvStack_90 - (long)local_98)) goto LAB_00b9f8c4;
      pvStack_90 = local_98;
      operator_delete(local_98);
    }
    local_d8 = puVar1;
    if (local_d0 != (undefined1 *)0x0) {
      if (local_c8 + -1 < local_c8 + -(long)local_d0) goto LAB_00b9f8c4;
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
    if (local_b8 != (void *)0x0) {
      if ((long)local_b0 - 1U < (ulong)((long)local_b0 - (long)local_b8)) goto LAB_00b9f8c4;
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
    if (local_70 != (void *)0x0) {
      if ((long)local_68 - 1U < (ulong)((long)local_68 - (long)local_70)) {
LAB_00b9f8c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
LAB_00b9f890:
  return bVar4 >> 7;
}


// ===== 00b9f8dc  FUN_00b9f8dc =====

void FUN_00b9f8dc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined1 *local_60;
  ulong uStack_58;
  ulong local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"Failed to parse chunk of type: ",0x1f);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  uVar1 = uStack_58;
  ppuVar3 = (undefined1 **)local_60;
  if (-1 < (long)local_50) {
    uVar1 = local_50 >> 0x38;
    ppuVar3 = &local_60;
  }
  FUN_00ba1b54(param_1 + 0x140,3,ppuVar3,uVar1);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


// ===== 00b9f9c4  FUN_00b9f9c4 =====

void FUN_00b9f9c4(long param_1,long param_2)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_100;
  undefined8 uStack_f8;
  void *local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined *local_d0;
  void *local_c8;
  void *pvStack_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  void *local_70;
  void *local_68;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pvVar2 = *(void **)(param_2 + 0x20);
  pvVar3 = *(void **)(param_2 + 0x28);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  local_58 = *(undefined2 *)(param_2 + 0x38);
  local_56 = *(undefined1 *)(param_2 + 0x3a);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (pvVar2 == pvVar3) {
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(auStack_80);
    local_98 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a8 = PTR_DAT_00d52e80 + 0x10;
    local_a0 = uVar4;
    puVar8 = (undefined8 *)FUN_00bba458(&local_98,&local_a8);
    puVar1 = PTR_DAT_00d52dc0;
    pvStack_b8 = (void *)puVar8[2];
    pvStack_c0 = (void *)puVar8[1];
    local_c8 = (void *)*puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar1 = puVar1 + 0x10;
    local_d0 = puVar1;
    uVar9 = FUN_00ba4854(auStack_80,&local_d0);
    FUN_00ba4738(param_1 + 0x1c8,uVar9,1);
    local_d0 = puVar1;
    if (local_c8 != (void *)0x0) {
      if ((long)pvStack_c0 - 1U < (ulong)((long)pvStack_c0 - (long)local_c8)) goto LAB_00b9fdc8;
      pvStack_c0 = local_c8;
      operator_delete(local_c8);
    }
    if (local_98 != (void *)0x0) {
      if ((long)local_90 - 1U < (ulong)((long)local_90 - (long)local_98)) goto LAB_00b9fdc8;
      local_90 = local_98;
      operator_delete(local_98);
    }
    if (local_70 != (void *)0x0) {
      if ((long)local_68 - 1U < (ulong)((long)local_68 - (long)local_70)) goto LAB_00b9fdc8;
      local_68 = local_70;
      operator_delete(local_70);
    }
    FUN_00ba1b54(param_1 + 0x140,6,"Received DATA chunk with no user data",0x25);
  }
  else {
    plVar6 = *(long **)(param_1 + 0x2b8);
    if ((ulong)plVar6[0x57] < (ulong)plVar6[0x45]) {
      if ((ulong)plVar6[0x46] <= (ulong)plVar6[0x57]) {
        uVar7 = FUN_00bbbb6c(plVar6 + 0x35,uVar4);
        plVar6 = *(long **)(param_1 + 0x2b8);
        if ((uVar7 & 1) == 0) {
          FUN_00bbbbcc(plVar6 + 0x35);
          goto joined_r0x00b9fdc0;
        }
      }
      uVar7 = FUN_00bbb37c(plVar6 + 0x35,uVar4);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = FUN_00bbb3f0(*(long *)(param_1 + 0x2b8) + 0x1a8,uVar4,uVar5), (uVar7 & 1) != 0)) {
        uStack_f8 = uStack_48;
        local_100 = local_50;
        local_d8 = local_58;
        local_d6 = local_56;
        local_f0 = pvVar2;
        local_e8 = pvVar3;
        local_e0 = uVar9;
        FUN_00babf98(*(long *)(param_1 + 0x2b8) + 0x218,uVar4,&local_100);
        if (local_f0 == (void *)0x0) {
LAB_00b9fadc:
          FUN_00b9fddc(param_1);
          return;
        }
        if ((ulong)((long)local_e8 - (long)local_f0) <= (long)local_e8 - 1U) {
          local_e8 = local_f0;
          operator_delete(local_f0);
          goto LAB_00b9fadc;
        }
        goto LAB_00b9fdc8;
      }
    }
    else if (plVar6[0x4e] == 0) {
      (**(code **)(*plVar6 + 0x58))(auStack_80);
      local_98 = (void *)0x0;
      local_90 = (void *)0x0;
      local_88 = 0;
      local_a8 = PTR_DAT_00d52e88 + 0x10;
      puVar8 = (undefined8 *)FUN_00bba458(&local_98,&local_a8);
      puVar1 = PTR_DAT_00d52da0;
      local_b0 = puVar8[2];
      pvStack_b8 = (void *)puVar8[1];
      pvStack_c0 = (void *)*puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar1 = puVar1 + 0x10;
      local_c8 = (void *)CONCAT71(local_c8._1_7_,1);
      local_d0 = puVar1;
      uVar9 = FUN_00ba4854(auStack_80,&local_d0);
      FUN_00ba4738(param_1 + 0x1c8,uVar9,1);
      local_d0 = puVar1;
      if (pvStack_c0 != (void *)0x0) {
        if ((long)pvStack_b8 - 1U < (ulong)((long)pvStack_b8 - (long)pvStack_c0)) goto LAB_00b9fdc8;
        pvStack_b8 = pvStack_c0;
        operator_delete(pvStack_c0);
      }
      if (local_98 != (void *)0x0) {
        if ((long)local_90 - 1U < (ulong)((long)local_90 - (long)local_98)) goto LAB_00b9fdc8;
        local_90 = local_98;
        operator_delete(local_98);
      }
      if (local_70 != (void *)0x0) {
        if ((long)local_68 - 1U < (ulong)((long)local_68 - (long)local_70)) goto LAB_00b9fdc8;
        local_68 = local_70;
        operator_delete(local_70);
      }
      if (*(int *)(param_1 + 0x2b4) != 0) {
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b0));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1b8));
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x2b8);
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        FUN_00ba1ce8(param_1 + 0x140,7,"Reassembly Queue is exhausted",0x1d);
        if (*(int *)(param_1 + 0x2b4) != 0) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
      }
    }
  }
joined_r0x00b9fdc0:
  if (pvVar2 != (void *)0x0) {
    if ((long)pvVar3 - 1U < (ulong)((long)pvVar3 - (long)pvVar2)) {
LAB_00b9fdc8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00b9fddc  FUN_00b9fddc =====

void FUN_00b9fddc(long param_1)

{
  undefined1 *puVar1;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    do {
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bac69c(&local_60,*(long *)(param_1 + 0x2b8) + 0x218);
      puVar1 = local_40;
      if (((ulong)local_40 & 1) != 0) {
        local_80 = local_60;
        puStack_70 = local_50;
        local_78 = puStack_58;
        local_68 = local_48;
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
        local_50 = (undefined1 *)0x0;
        local_48 = (undefined1 *)0x0;
        puStack_58 = (undefined1 *)0x0;
        FUN_00ba1a2c(param_1 + 0x140,&local_80);
        if (local_78 != (undefined1 *)0x0) {
          if (puStack_70 + -1 < puStack_70 + -(long)local_78) goto LAB_00b9ff0c;
          puStack_70 = local_78;
          operator_delete(local_78);
        }
      }
      if ((((ulong)local_40 & 1) != 0) && (puStack_58 != (undefined1 *)0x0)) {
        if (local_50 + -1 < local_50 + -(long)puStack_58) {
LAB_00b9ff0c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_50 = puStack_58;
        operator_delete(puStack_58);
      }
    } while (((ulong)puVar1 & 1) != 0);
  }
  else if (*(long *)(*(long *)(param_1 + 0x2b8) + 0x270) != 0) {
    FUN_00ba1ad4(param_1 + 0x140);
    return;
  }
  return;
}


// ===== 00b9ff20  FUN_00b9ff20 =====

void FUN_00b9ff20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *local_50;
  undefined1 auStack_48 [16];
  void *local_38;
  void *local_30;
  
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))(auStack_48);
  local_50 = PTR_DAT_00d52e10 + 0x10;
  uVar1 = FUN_00ba4854(auStack_48,&local_50);
  FUN_00ba4738(param_1 + 0x1c8,uVar1,1);
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  lVar3 = *(long *)(param_1 + 0x1c0);
  lVar2 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x38))();
  if (86399999999 < lVar2) {
    lVar2 = 86400000000;
  }
  *(long *)(lVar3 + 0x90) = lVar2;
  FUN_00ba3f30(*(undefined8 *)(param_1 + 0x1c0));
  return;
}


// ===== 00ba0000  FUN_00ba0000 =====

void FUN_00ba0000(undefined1 *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  short *local_38;
  short *local_30;
  
  FUN_00bba4b8(&local_38);
  psVar1 = local_38;
  do {
    if (psVar1 == local_30) {
      bVar2 = true;
joined_r0x00ba0084:
      if (local_38 != (short *)0x0) {
        uVar3 = (ulong)(((long)local_38 - (long)local_30) * 0x1555555555555555) >> 3;
        uVar4 = (long)local_30 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          local_30 = local_30 + uVar3 * -0xc;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (local_30 != local_38) {
          local_30 = local_30 + -0xc;
          if (local_30 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_38);
      }
      if (bVar2) {
        *param_1 = 0;
        param_1[0x20] = 0;
      }
      return;
    }
    if (*psVar1 == 7) {
      FUN_00bc29c4(param_1,*(undefined8 *)(psVar1 + 4),*(undefined8 *)(psVar1 + 8));
      bVar2 = false;
      goto joined_r0x00ba0084;
    }
    psVar1 = psVar1 + 0xc;
  } while( true );
}


// ===== 00ba0128  FUN_00ba0128 =====

bool FUN_00ba0128(long param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined *local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  plVar3 = *(long **)(param_1 + 0x2b8);
  iVar2 = *param_3;
  if (*(int *)(param_2 + 4) == (int)plVar3[0x20]) {
    if (((int)plVar3[0x21] != iVar2) &&
       (*(undefined8 *)(param_1 + 0x2b8) = 0, plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 8))();
    }
    return true;
  }
  if (((int)plVar3[0x21] == iVar2) || (*(long *)(param_3 + 6) != plVar3[0x22])) {
    return (int)plVar3[0x21] != *param_3 || *(long *)(param_3 + 6) != 0;
  }
  if (*(int *)(param_1 + 0x2b4) != 7) {
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_00ba1f7c(param_1 + 0x140);
    return true;
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba4828(&local_50,iVar2,param_1 + 0x80);
  local_70 = PTR_DAT_00d52e10 + 0x10;
  FUN_00ba4854(&local_50,&local_70);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_90 = PTR_DAT_00d52e70 + 0x10;
  puVar4 = (undefined8 *)FUN_00bba458(&local_88,&local_90);
  puVar1 = PTR_DAT_00d52dc0;
  local_58 = puVar4[2];
  pvStack_60 = (void *)puVar4[1];
  local_68 = (void *)*puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar1 = puVar1 + 0x10;
  local_70 = puVar1;
  FUN_00ba4854(&local_50,&local_70);
  local_70 = puVar1;
  if (local_68 != (void *)0x0) {
    if ((long)pvStack_60 - 1U < (ulong)((long)pvStack_60 - (long)local_68)) goto LAB_00ba0334;
    pvStack_60 = local_68;
    operator_delete(local_68);
  }
  if (local_88 != (void *)0x0) {
    if ((long)local_80 - 1U < (ulong)((long)local_80 - (long)local_88)) goto LAB_00ba0334;
    local_80 = local_88;
    operator_delete(local_88);
  }
  FUN_00ba4738(param_1 + 0x1c8,&local_50,1);
  FUN_00ba1b54(param_1 + 0x140,4,"Received COOKIE-ECHO while shutting down",0x28);
  if (local_40 != (undefined1 *)0x0) {
    if (local_38 + -1 < local_38 + -(long)local_40) {
LAB_00ba0334:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_38 = local_40;
    operator_delete(local_40);
  }
  return false;
}


// ===== 00ba0348  FUN_00ba0348 =====

undefined8 FUN_00ba0348(long param_1)

{
  if (*(long *)(param_1 + 0x2b8) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x270);
  }
  return 0;
}


// ===== 00ba0364  FUN_00ba0364 =====

void FUN_00ba0364(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x2b8);
  if (lVar1 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bac69c(param_1,lVar1 + 0x218);
    if (*(char *)(param_1 + 4) == '\x01') {
      *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
    }
  }
  return;
}


// ===== 00ba03d0  FUN_00ba03d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ba03d0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 local_80;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  plVar11 = *(long **)(param_1 + 0x2b8);
  if ((*(byte *)(plVar11 + 0x1c) & 1) != 0) {
    uVar12 = FUN_00bbb68c(plVar11 + 0x35,*(undefined4 *)(param_2 + 8));
    if ((uVar12 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
      }
      FUN_00bac924(*(long *)(param_1 + 0x2b8) + 0x218,*(undefined4 *)(param_2 + 8),lVar2,
                   (lVar3 >> 2) * -0x5555555555555555);
    }
    FUN_00b9fddc(param_1);
    return;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar11 + 0x58))(&local_60);
  puVar10 = PTR_DAT_00d52e90;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_c0 = PTR_DAT_00d52e90 + 0x10;
  local_b8 = (char *)operator_new(0x50);
  uVar9 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._65_8_;
  uVar8 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._24_8_;
  uVar7 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._16_8_;
  uVar6 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._8_8_;
  uVar4 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._0_8_;
  lStack_a8 = _UNK_001f3518;
  local_b0 = _DAT_001f3510;
  if (local_b8 + 0x49 < local_b8) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((local_b8 < "-FORWARD-TSN received, but not indicated during connection establishment") &&
     ("I-FORWARD-TSN received, but not indicated during connection establishment" < local_b8 + 0x49)
     ) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  uVar5 = CONCAT17(s_I_FORWARD_TSN_received__but_not_i_001b5a2a[0x40],
                   s_I_FORWARD_TSN_received__but_not_i_001b5a2a._57_7_);
  local_b8[0x49] = '\0';
  *(undefined8 *)(local_b8 + 0x41) = uVar9;
  *(undefined8 *)(local_b8 + 0x39) = uVar5;
  *(undefined8 *)(local_b8 + 8) = uVar6;
  *(undefined8 *)local_b8 = uVar4;
  *(undefined8 *)(local_b8 + 0x18) = uVar8;
  *(undefined8 *)(local_b8 + 0x10) = uVar7;
  uVar7 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._48_8_;
  uVar6 = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._32_8_;
  uVar4 = CONCAT71(s_I_FORWARD_TSN_received__but_not_i_001b5a2a._57_7_,
                   s_I_FORWARD_TSN_received__but_not_i_001b5a2a[0x38]);
  *(undefined8 *)(local_b8 + 0x28) = s_I_FORWARD_TSN_received__but_not_i_001b5a2a._40_8_;
  *(undefined8 *)(local_b8 + 0x20) = uVar6;
  *(undefined8 *)(local_b8 + 0x38) = uVar4;
  *(undefined8 *)(local_b8 + 0x30) = uVar7;
  puVar13 = (undefined8 *)FUN_00bba458(&local_a0,&local_c0);
  puVar1 = PTR_DAT_00d52da0;
  local_68 = puVar13[2];
  pvStack_70 = (void *)puVar13[1];
  local_78 = (void *)*puVar13;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar1 = puVar1 + 0x10;
  local_80 = 1;
  local_88 = puVar1;
  FUN_00ba4854(&local_60,&local_88);
  local_88 = puVar1;
  if (local_78 != (void *)0x0) {
    if ((long)pvStack_70 - 1U < (ulong)((long)pvStack_70 - (long)local_78)) goto LAB_00ba0644;
    pvStack_70 = local_78;
    operator_delete(local_78);
  }
  local_c0 = puVar10 + 0x10;
  if (lStack_a8 < 0) {
    operator_delete(local_b8);
  }
  if (local_a0 != (void *)0x0) {
    if ((long)local_98 - 1U < (ulong)((long)local_98 - (long)local_a0)) goto LAB_00ba0644;
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  FUN_00ba4738(param_1 + 0x1c8,&local_60,1);
  FUN_00ba1b54(param_1 + 0x140,6,"Received a FORWARD_TSN without announced peer support",0x35);
  if (local_50 != (undefined1 *)0x0) {
    if (local_48 + -1 < local_48 + -(long)local_50) {
LAB_00ba0644:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00ba0658  FUN_00ba0658 =====

uint FUN_00ba0658(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2b4);
  uVar2 = FUN_00ba7630(param_1 + 0x1f0);
  uVar2 = uVar2 | (iVar1 != 0 && iVar1 != 3);
  if (*(long *)(param_1 + 0x2b8) != 0) {
    uVar3 = FUN_00baaf34(*(long *)(param_1 + 0x2b8));
    uVar2 = uVar3 | uVar2;
  }
  return uVar2;
}


// ===== 00ba06b0  FUN_00ba06b0 =====

void FUN_00ba06b0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_00ba1710(param_2 + 0x28);
  iVar1 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (iVar1 == 0) {
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_64 = 0xaaaaaaaa;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    local_40 = 0;
    local_c0 = 0xaaaaaaaa00000000;
    local_b0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0xaaaaaa00;
    if (*(int *)((long)param_2 + 0x2b4) == 3) {
      local_d0 = 1;
      FUN_00baaf94(param_2[0x57],&local_d0);
      FUN_00ba7660(param_2 + 0x3e,&local_d0);
      if (*(int *)((long)param_2 + 0x2b4) != 0) {
        FUN_00ba3ee4(param_2[0x36]);
        FUN_00ba3ee4(param_2[0x37]);
        FUN_00ba3ee4(param_2[0x38]);
        plVar2 = (long *)param_2[0x57];
        param_2[0x57] = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        FUN_00ba1efc(param_2 + 0x28);
        if (*(int *)((long)param_2 + 0x2b4) != 0) {
          *(undefined4 *)((long)param_2 + 0x2b4) = 0;
        }
      }
    }
    param_1[4] = local_b0;
    param_1[1] = uStack_c8;
    *param_1 = local_d0;
    param_1[3] = uStack_b8;
    param_1[2] = local_c0;
    param_1[7] = uStack_98;
    param_1[6] = local_a0;
    param_1[5] = uStack_a8;
    param_1[10] = uStack_80;
    param_1[9] = uStack_88;
    param_1[8] = local_90;
    *(undefined4 *)(param_1 + 0xd) = uStack_68;
    param_1[0xc] = CONCAT44(uStack_6c,uStack_70);
    param_1[0xb] = CONCAT44(uStack_74,uStack_78);
    param_1[0x10] = local_50;
    param_1[0xf] = uStack_58;
    param_1[0xe] = local_60;
    param_1[0x13] = uStack_38;
    local_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_60 = 0;
    param_1[0x12] = local_40;
    param_1[0x11] = uStack_48;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  FUN_00ba1720(param_2 + 0x28);
  return;
}


// ===== 00ba084c  FUN_00ba084c =====

void FUN_00ba084c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *local_48;
  
  plVar1 = (long *)param_1[0x57];
  param_1[0x57] = 0;
  *param_1 = &PTR_FUN_00d47488;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_48 = param_1 + 0x52;
  param_1[0x3e] = PTR_DAT_00d52ec0 + 0x10;
  FUN_00ba1144(&local_48,param_1[0x53]);
  if (*(code **)(param_1[0x4f] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x4f] + 8))(param_1[0x4c]);
  }
  pvVar2 = (void *)param_1[0x49];
  if (pvVar2 == (void *)0x0) {
LAB_00ba0958:
    if (*(code **)(param_1[0x3d] + 8) != (code *)0x0) {
      (**(code **)(param_1[0x3d] + 8))(param_1[0x3a]);
    }
    pvVar2 = (void *)param_1[0x38];
    param_1[0x38] = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00ba3e2c(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)param_1[0x37];
    param_1[0x37] = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00ba3e2c(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)param_1[0x36];
    param_1[0x36] = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00ba3e2c(pvVar2);
      operator_delete(pvVar2);
    }
    local_48 = param_1 + 0x32;
    FUN_00ba1420(&local_48,param_1[0x33]);
    if (*(code **)(param_1[0x31] + 8) != (code *)0x0) {
      (**(code **)(param_1[0x31] + 8))(param_1[0x2e]);
    }
    pvVar2 = (void *)param_1[0x2b];
    param_1[0x28] = &PTR_FUN_00d47630;
    if (pvVar2 != (void *)0x0) {
      pvVar6 = (void *)param_1[0x2c];
      pvVar3 = pvVar2;
      if (pvVar2 != pvVar6) {
        do {
          pvVar3 = (void *)((long)pvVar6 + -0x40);
          if (pvVar3 == (void *)0x0) goto LAB_00ba0934;
          if ((ulong)*(byte *)((long)pvVar6 + -8) != 0xff) {
            (*(code *)(&PTR_FUN_00d475b8)[*(byte *)((long)pvVar6 + -8)])
                      (&local_48,(long)pvVar6 + -0x38);
          }
          *(undefined1 *)((long)pvVar6 + -8) = 0xff;
          pvVar6 = pvVar3;
        } while (pvVar3 != pvVar2);
        pvVar3 = (void *)param_1[0x2b];
      }
      param_1[0x2c] = pvVar2;
      operator_delete(pvVar3);
    }
    plVar1 = (long *)param_1[4];
    param_1[4] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      operator_delete((void *)param_1[1]);
    }
    return;
  }
  pvVar3 = (void *)param_1[0x4a];
  uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar3 == pvVar2) {
      param_1[0x4a] = pvVar2;
      operator_delete(pvVar2);
      goto LAB_00ba0958;
    }
    pvVar3 = (void *)((long)pvVar3 + -8);
  } while (pvVar3 != (void *)0x0);
LAB_00ba0934:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba0ac4  FUN_00ba0ac4 =====

void FUN_00ba0ac4(void *param_1)

{
  FUN_00ba084c();
  operator_delete(param_1);
  return;
}


// ===== 00ba0af4  FUN_00ba0af4 =====

long FUN_00ba0af4(long param_1)

{
  return param_1 + 0x80;
}


// ===== 00ba0b00  FUN_00ba0b00 =====

undefined4 FUN_00ba0b00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}


// ===== 00ba0b0c  FUN_00ba0b0c =====

void FUN_00ba0b0c(undefined1 *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  short *local_38;
  short *local_30;
  
  FUN_00bba4b8(&local_38);
  psVar1 = local_38;
  do {
    if (psVar1 == local_30) {
      bVar2 = true;
joined_r0x00ba0b94:
      if (local_38 != (short *)0x0) {
        uVar3 = (ulong)(((long)local_38 - (long)local_30) * 0x1555555555555555) >> 3;
        uVar4 = (long)local_30 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          local_30 = local_30 + uVar3 * -0xc;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (local_30 != local_38) {
          local_30 = local_30 + -0xc;
          if (local_30 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_38);
      }
      if (bVar2) {
        *param_1 = 0;
        param_1[0x20] = 0;
      }
      return;
    }
    if (*psVar1 == -0x7ff8) {
      FUN_00bc1c80(param_1,*(undefined8 *)(psVar1 + 4),*(undefined8 *)(psVar1 + 8));
      bVar2 = false;
      goto joined_r0x00ba0b94;
    }
    psVar1 = psVar1 + 0xc;
  } while( true );
}


// ===== 00ba0c38  FUN_00ba0c38 =====

void FUN_00ba0c38(undefined1 *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  short *local_38;
  short *local_30;
  
  FUN_00bba4b8(&local_38);
  psVar1 = local_38;
  do {
    if (psVar1 == local_30) {
      bVar2 = true;
joined_r0x00ba0cbc:
      if (local_38 != (short *)0x0) {
        uVar3 = (ulong)(((long)local_38 - (long)local_30) * 0x1555555555555555) >> 3;
        uVar4 = (long)local_30 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          local_30 = local_30 + uVar3 * -0xc;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (local_30 != local_38) {
          local_30 = local_30 + -0xc;
          if (local_30 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_38);
      }
      if (bVar2) {
        *param_1 = 0;
        param_1[8] = 0;
      }
      return;
    }
    if (*psVar1 == -0x4000) {
      FUN_00bc197c(param_1,*(undefined8 *)(psVar1 + 4),*(undefined8 *)(psVar1 + 8));
      bVar2 = false;
      goto joined_r0x00ba0cbc;
    }
    psVar1 = psVar1 + 0xc;
  } while( true );
}


// ===== 00ba0d60  FUN_00ba0d60 =====

void FUN_00ba0d60(undefined1 *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  short *local_38;
  short *local_30;
  
  FUN_00bba4b8(&local_38);
  psVar1 = local_38;
  do {
    if (psVar1 == local_30) {
      bVar2 = true;
joined_r0x00ba0de8:
      if (local_38 != (short *)0x0) {
        uVar3 = (ulong)(((long)local_38 - (long)local_30) * 0x1555555555555555) >> 3;
        uVar4 = (long)local_30 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          local_30 = local_30 + uVar3 * -0xc;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (local_30 != local_38) {
          local_30 = local_30 + -0xc;
          if (local_30 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_38);
      }
      if (bVar2) {
        *param_1 = 0;
        param_1[0x10] = 0;
      }
      return;
    }
    if (*psVar1 == -0x7fff) {
      FUN_00bc1a80(param_1,*(undefined8 *)(psVar1 + 4),*(undefined8 *)(psVar1 + 8));
      bVar2 = false;
      goto joined_r0x00ba0de8;
    }
    psVar1 = psVar1 + 0xc;
  } while( true );
}


// ===== 00ba0e8c  FUN_00ba0e8c =====

void FUN_00ba0e8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba0ea4  FUN_00ba0ea4 =====

undefined4 * FUN_00ba0ea4(long *param_1,undefined4 *param_2)

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
    FUN_00ba0e8c();
LAB_00ba0f94:
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
    if (uVar5 >> 0x3e != 0) goto LAB_00ba0f94;
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


// ===== 00ba0f98  FUN_00ba0f98 =====

void FUN_00ba0f98(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xba0fa0);
  (*pcVar1)();
}


// ===== 00ba0fa0  FUN_00ba0fa0 =====

void FUN_00ba0fa0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = &PTR_FUN_00d47568;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[5] - (long)pvVar1) <= param_1[5] - 1) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba1004  FUN_00ba1004 =====

void FUN_00ba1004(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00ba1004(param_1,*param_2);
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


// ===== 00ba1078  FUN_00ba1078 =====

void FUN_00ba1078(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xba1080);
  (*pcVar1)();
}


// ===== 00ba1080  FUN_00ba1080 =====

void FUN_00ba1080(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47598;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
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
    pvVar2 = (void *)((long)pvVar2 + -0xc);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba1144  FUN_00ba1144 =====

void FUN_00ba1144(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = PTR_DAT_00d52ec8 + 0x10;
    do {
      FUN_00ba1144(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00ba128c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      param_2[5] = puVar1;
      puVar5 = (undefined8 *)param_2[1];
      if (*(code **)(param_2[0x13] + 8) != (code *)0x0) {
        (**(code **)(param_2[0x13] + 8))(param_2[0x10]);
      }
      FUN_00ba12a0(param_2 + 10);
      puVar7 = (undefined8 *)param_2[0xb];
      puVar8 = (undefined8 *)param_2[0xc];
      if (puVar7 != puVar8) {
        do {
          puVar6 = puVar7 + 1;
          operator_delete((void *)*puVar7);
          puVar7 = puVar6;
        } while (puVar6 != puVar8);
        puVar7 = (undefined8 *)param_2[0xb];
        puVar8 = (undefined8 *)param_2[0xc];
      }
      uVar4 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
      uVar3 = (ulong)(((long)puVar7 - (long)puVar8 << 0x3d) - ((long)puVar7 - (long)puVar8)) >> 3;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)puVar7 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        puVar8 = puVar8 + -uVar3;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (puVar8 != puVar7) {
        puVar8 = puVar8 + -1;
        if (puVar8 == (undefined8 *)0x0) goto LAB_00ba128c;
      }
      param_2[0xc] = puVar8;
      if ((void *)param_2[10] != (void *)0x0) {
        operator_delete((void *)param_2[10]);
      }
      pvVar2 = (void *)param_2[7];
      param_2[7] = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      operator_delete(param_2);
      param_2 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00ba12a0  FUN_00ba12a0 =====

void FUN_00ba12a0(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    plVar7 = puVar3 + uVar6 / 0x2a;
    lVar9 = *plVar7 + (uVar6 % 0x2a) * 0x60;
    lVar8 = puVar3[uVar1 / 0x2a] + (uVar1 % 0x2a) * 0x60;
    if (lVar9 != lVar8) {
      do {
        if (lVar9 == 0) {
LAB_00ba140c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar2 = *(void **)(lVar9 + 0x10);
        if (pvVar2 != (void *)0x0) {
          if (*(long *)(lVar9 + 0x18) - 1U < (ulong)(*(long *)(lVar9 + 0x18) - (long)pvVar2))
          goto LAB_00ba140c;
          *(void **)(lVar9 + 0x18) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar9 = lVar9 + 0x60;
        if (lVar9 - *plVar7 == 0xfc0) {
          plVar7 = plVar7 + 1;
          lVar9 = *plVar7;
        }
      } while (lVar9 != lVar8);
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar9 = (long)puVar5 - (long)puVar3;
  while (uVar1 = lVar9 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar9 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar1 == 1) {
    uVar4 = 0x15;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0x2a;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


// ===== 00ba1420  FUN_00ba1420 =====

void FUN_00ba1420(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00ba1420(param_1,*param_2);
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


// ===== 00ba1494  FUN_00ba1494 =====

void FUN_00ba1494(void)

{
  return;
}


// ===== 00ba149c  FUN_00ba149c =====

void FUN_00ba149c(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)pvVar1) <= *(long *)(param_2 + 0x10) - 1U) {
    *(void **)(param_2 + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba14f4  FUN_00ba14f4 =====

void FUN_00ba14f4(undefined8 param_1,long param_2)

{
  if (-1 < *(char *)(param_2 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_2 + 8));
  return;
}


// ===== 00ba1514  FUN_00ba1514 =====

void FUN_00ba1514(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    operator_delete((void *)param_2[3]);
    pvVar1 = (void *)*param_2;
  }
  else {
    pvVar1 = (void *)*param_2;
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_2[1];
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
    do {
      if (pvVar2 == pvVar1) {
        param_2[1] = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -2);
    } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  return;
}


// ===== 00ba15ec  FUN_00ba15ec =====

void FUN_00ba15ec(void)

{
  return;
}


// ===== 00ba15f4  FUN_00ba15f4 =====

void FUN_00ba15f4(long *param_1)

{
  FUN_00ba19f0(*param_1 + 0x140);
  return;
}


// ===== 00ba1604  FUN_00ba1604 =====

void FUN_00ba1604(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[2] + (param_1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00ba1624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00ba1628  FUN_00ba1628 =====

void FUN_00ba1628(undefined8 *param_1)

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


// ===== 00ba1664  FUN_00ba1664 =====

void FUN_00ba1664(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00ba1678  FUN_00ba1678 =====

void FUN_00ba1678(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00ba16a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2,param_2[1],param_3);
  return;
}


// ===== 00ba16a8  FUN_00ba16a8 =====

void FUN_00ba16a8(undefined8 *param_1)

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


// ===== 00ba16e4  FUN_00ba16e4 =====

void FUN_00ba16e4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00ba16f8  FUN_00ba16f8 =====

bool FUN_00ba16f8(long *param_1)

{
  return *(int *)(*param_1 + 0x2b4) == 3;
}


// ===== 00ba1710  FUN_00ba1710 =====

void FUN_00ba1710(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 00ba1720  FUN_00ba1720 =====

void FUN_00ba1720(long param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  code *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 local_b8 [48];
  byte local_88;
  void *local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined1 *local_48;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    local_80 = (void *)0x0;
    pvStack_78 = (void *)0x0;
    local_70 = 0;
    FUN_00ba18cc(&local_80,8);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    pvVar5 = *(void **)(param_1 + 0x20);
    pvVar3 = *(void **)(param_1 + 0x18);
    *(void **)(param_1 + 0x20) = pvStack_78;
    *(void **)(param_1 + 0x18) = local_80;
    *(undefined8 *)(param_1 + 0x28) = local_70;
    local_80 = pvVar3;
    pvStack_78 = pvVar5;
    local_70 = uVar6;
    if (pvVar3 != pvVar5) {
      lVar2 = (long)pvVar3 + 8;
      do {
        pcVar4 = *(code **)(lVar2 + -8);
        local_b8[0] = 0;
        local_88 = 0xff;
        bVar1 = *(byte *)(lVar2 + 0x30);
        if ((ulong)bVar1 != 0xff) {
          local_48 = local_b8;
          (*(code *)(&PTR_FUN_00d47728)[bVar1])(&local_48);
          local_88 = bVar1;
        }
        (*pcVar4)(local_b8,*(undefined8 *)(param_1 + 8));
        if ((ulong)local_88 != 0xff) {
          (*(code *)(&PTR_FUN_00d47700)[local_88])(&local_48,local_b8);
        }
        pvVar3 = (void *)(lVar2 + 0x38);
        lVar2 = lVar2 + 0x40;
        local_88 = 0xff;
      } while (pvVar3 != pvVar5);
    }
    pvVar5 = local_80;
    pvVar3 = pvStack_78;
    if (local_80 != (void *)0x0) {
      while (pvVar5 != pvVar3) {
        if ((void *)((long)pvVar3 + -0x40) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((ulong)*(byte *)((long)pvVar3 + -8) != 0xff) {
          (*(code *)(&PTR_FUN_00d47700)[*(byte *)((long)pvVar3 + -8)])
                    (&local_48,(long)pvVar3 + -0x38);
        }
        *(undefined1 *)((long)pvVar3 + -8) = 0xff;
        pvVar3 = (void *)((long)pvVar3 + -0x40);
      }
      pvStack_78 = pvVar5;
      operator_delete(local_80);
    }
  }
  return;
}


// ===== 00ba18cc  FUN_00ba18cc =====

void FUN_00ba18cc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  undefined1 uStack_21;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 6) < param_2) {
    if (param_2 >> 0x3a != 0) {
      lVar1 = FUN_00ba2b54();
                    /* WARNING: Could not recover jumptable at 0x00ba19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))();
      return;
    }
    lVar2 = param_1[1];
    local_60 = operator_new(param_2 * 0x40);
    local_58 = (long)local_60 + (lVar2 - lVar1);
    local_48 = (void *)((long)local_60 + param_2 * 0x40);
    local_50 = local_58;
    FUN_00ba2b6c(param_1,&local_60);
    lVar2 = local_58;
    lVar1 = local_50;
    while (lVar2 != lVar1) {
      if (lVar1 + -0x40 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((ulong)*(byte *)(lVar1 + -8) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(lVar1 + -8)])(&uStack_21,lVar1 + -0x38);
      }
      *(undefined1 *)(lVar1 + -8) = 0xff;
      lVar1 = lVar1 + -0x40;
    }
    if (local_60 != (void *)0x0) {
      local_50 = lVar1;
      operator_delete(local_60);
    }
  }
  return;
}


// ===== 00ba19dc  FUN_00ba19dc =====

void FUN_00ba19dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}


// ===== 00ba19f0  FUN_00ba19f0 =====

void FUN_00ba19f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba1a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


// ===== 00ba1a04  FUN_00ba1a04 =====

void FUN_00ba1a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba1a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 00ba1a18  FUN_00ba1a18 =====

void FUN_00ba1a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba1a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}


// ===== 00ba1a2c  FUN_00ba1a2c =====

void FUN_00ba1a2c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba3010;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3010;
    puVar2 = puVar1 + 8;
    uVar3 = *param_2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = uVar3;
    puVar1[2] = 0;
    puVar1[2] = param_2[1];
    puVar1[3] = param_2[2];
    puVar1[4] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(puVar1 + 7) = 1;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba2e60(param_1 + 0x18,&local_8);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba1ad4  FUN_00ba1ad4 =====

void FUN_00ba1ad4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba3234;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3234;
    puVar2 = puVar1 + 8;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba30b8(param_1 + 0x18,&local_8,&uStack_21);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba1b54  FUN_00ba1b54 =====

void FUN_00ba1b54(long param_1,undefined4 param_2,undefined8 ***param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 ***__dest;
  undefined8 *puVar4;
  undefined4 local_70 [2];
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  code *local_38;
  
  local_38 = FUN_00ba33ec;
  local_70[0] = param_2;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __dest = &local_68;
  if (param_4 < 0x17) {
    local_58 = CONCAT17((char)param_4,(undefined7)local_58);
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_58 = uVar2 | 0x8000000000000000;
    local_68 = __dest;
    uStack_60 = param_4;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_4)) {
    if ((__dest <= param_3) && (param_3 < (undefined8 ***)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    *(undefined1 *)((long)__dest + param_4) = 0;
    if (puVar3 < puVar4) {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar3 = FUN_00ba33ec;
      puVar4 = puVar3 + 8;
      *(undefined4 *)(puVar3 + 1) = local_70[0];
      puVar3[4] = local_58;
      puVar3[3] = uStack_60;
      puVar3[2] = local_68;
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      *(undefined1 *)(puVar3 + 7) = 2;
    }
    else {
      puVar4 = (undefined8 *)FUN_00ba3248(param_1 + 0x18,&local_38,local_70);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00ba1ce8  FUN_00ba1ce8 =====

void FUN_00ba1ce8(long param_1,undefined4 param_2,undefined8 ***param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 ***__dest;
  undefined8 *puVar4;
  undefined4 local_70 [2];
  undefined8 **local_68;
  ulong uStack_60;
  undefined8 local_58;
  code *local_38;
  
  local_38 = FUN_00ba3490;
  local_70[0] = param_2;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __dest = &local_68;
  if (param_4 < 0x17) {
    local_58 = CONCAT17((char)param_4,(undefined7)local_58);
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_58 = uVar2 | 0x8000000000000000;
    local_68 = __dest;
    uStack_60 = param_4;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_4)) {
    if ((__dest <= param_3) && (param_3 < (undefined8 ***)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    *(undefined1 *)((long)__dest + param_4) = 0;
    if (puVar3 < puVar4) {
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar3 = FUN_00ba3490;
      puVar4 = puVar3 + 8;
      *(undefined4 *)(puVar3 + 1) = local_70[0];
      puVar3[4] = local_58;
      puVar3[3] = uStack_60;
      puVar3[2] = local_68;
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      *(undefined1 *)(puVar3 + 7) = 2;
    }
    else {
      puVar4 = (undefined8 *)FUN_00ba3248(param_1 + 0x18,&local_38,local_70);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00ba1e7c  FUN_00ba1e7c =====

void FUN_00ba1e7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba3534;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3534;
    puVar2 = puVar1 + 8;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba30b8(param_1 + 0x18,&local_8,&uStack_21);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba1efc  FUN_00ba1efc =====

void FUN_00ba1efc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba3548;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3548;
    puVar2 = puVar1 + 8;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba30b8(param_1 + 0x18,&local_8,&uStack_21);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba1f7c  FUN_00ba1f7c =====

void FUN_00ba1f7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba355c;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba355c;
    puVar2 = puVar1 + 8;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba30b8(param_1 + 0x18,&local_8,&uStack_21);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba1ffc  FUN_00ba1ffc =====

void FUN_00ba1ffc(long param_1,undefined2 *param_2,long param_3,undefined8 *******param_4,
                 ulong param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 *******__dest;
  undefined8 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  undefined8 ******local_68;
  ulong uStack_60;
  undefined8 local_58;
  code *local_38;
  
  uVar11 = param_3 * 2;
  local_38 = FUN_00ba3730;
  local_80 = (undefined2 *)0x0;
  local_78 = (undefined2 *)0x0;
  local_70 = (undefined2 *)0x0;
  puVar3 = local_78;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ba3880();
    }
    local_80 = (undefined2 *)operator_new(uVar11);
    local_70 = local_80 + param_3;
    uVar6 = uVar11 - 2 >> 1;
    uVar11 = (ulong)-(long)local_80 >> 1;
    if (uVar6 <= (ulong)-(long)local_80 >> 1) {
      uVar11 = uVar6;
    }
    puVar3 = local_80;
    puVar7 = param_2;
    if (0x27 < uVar11) {
      uVar1 = (ulong)-(long)local_80 >> 1;
      if (uVar6 <= (ulong)-(long)local_80 >> 1) {
        uVar1 = uVar6;
      }
      if ((((local_80 <= local_80 + uVar1) && (((ulong)local_80 & 1) == 0)) &&
          (param_2 <= param_2 + uVar1)) && (0x1f < (ulong)((long)local_80 - (long)param_2))) {
        puVar10 = (undefined8 *)(local_80 + 8);
        uVar6 = uVar11 + 1 & 0xf;
        puVar5 = (undefined8 *)(param_2 + 8);
        uVar1 = 0x10;
        if (uVar6 != 0) {
          uVar1 = uVar6;
        }
        lVar9 = (uVar11 + 1) - uVar1;
        puVar7 = param_2 + lVar9;
        puVar3 = local_80 + lVar9;
        do {
          puVar2 = puVar5 + -1;
          uVar12 = puVar5[-2];
          uVar14 = puVar5[1];
          uVar13 = *puVar5;
          lVar9 = lVar9 + -0x10;
          puVar5 = puVar5 + 4;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar12;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10 = puVar10 + 4;
        } while (lVar9 != 0);
      }
    }
    puVar4 = puVar3;
    do {
      if (puVar4 == (undefined2 *)0x0) goto LAB_00ba22e0;
      puVar8 = puVar7 + 1;
      puVar3 = puVar3 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar8;
    } while (puVar8 != param_2 + param_3);
  }
  local_78 = puVar3;
  if (0x7ffffffffffffff6 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __dest = &local_68;
  if (param_5 < 0x17) {
    local_58 = CONCAT17((char)param_5,(undefined7)local_58);
  }
  else {
    uVar11 = (param_5 & 0x7ffffffffffffff8) + 8;
    uVar6 = 0x19;
    if (uVar11 != 0x18) {
      uVar6 = uVar11;
    }
    __dest = (undefined8 *******)operator_new(uVar6);
    local_58 = uVar6 | 0x8000000000000000;
    local_68 = __dest;
    uStack_60 = param_5;
  }
  if ((undefined8 *******)((long)__dest + param_5) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_4) && (param_4 < (undefined8 *******)((long)__dest + param_5))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_4,param_5);
  puVar7 = local_70;
  puVar3 = local_78;
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  *(undefined1 *)((long)__dest + param_5) = 0;
  if (puVar10 < puVar5) {
    if (puVar10 == (undefined8 *)0x0) {
LAB_00ba22e0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar10 = FUN_00ba3730;
    puVar5 = puVar10 + 8;
    puVar10[1] = local_80;
    local_80 = (undefined2 *)0x0;
    local_78 = (undefined2 *)0x0;
    puVar10[2] = puVar3;
    local_70 = (undefined2 *)0x0;
    puVar10[3] = puVar7;
    puVar10[6] = local_58;
    puVar10[5] = uStack_60;
    puVar10[4] = local_68;
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    *(undefined1 *)(puVar10 + 7) = 3;
  }
  else {
    puVar5 = (undefined8 *)FUN_00ba3570(param_1 + 0x18,&local_38,&local_80);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (local_80 != (undefined2 *)0x0) {
    uVar6 = (ulong)((long)local_78 + ((long)local_78 << 0x3f) + -2) >> 1;
    uVar11 = (ulong)(((long)local_80 - (long)local_78 << 0x3f) - ((long)local_80 - (long)local_78))
             >> 1;
    if (uVar6 <= uVar11) {
      uVar11 = uVar6;
    }
    puVar3 = local_78;
    if ((1 < uVar11) && ((((int)local_80 - (uint)local_78 | (uint)local_78) & 1) == 0)) {
      uVar11 = uVar11 & 0x7ffffffffffffffe;
      puVar3 = local_78 + -uVar11;
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    while (puVar3 != local_80) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined2 *)0x0) {
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
  return;
}


// ===== 00ba2338  FUN_00ba2338 =====

void FUN_00ba2338(long param_1,undefined2 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  code *local_38;
  
  uVar10 = param_3 * 2;
  local_68 = (undefined2 *)0x0;
  local_60 = (undefined2 *)0x0;
  local_38 = FUN_00ba3898;
  local_58 = (undefined2 *)0x0;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ba3880();
    }
    local_68 = (undefined2 *)operator_new(uVar10);
    uVar8 = uVar10 - 2 >> 1;
    local_58 = local_68 + param_3;
    uVar10 = (ulong)-(long)local_68 >> 1;
    if (uVar8 <= (ulong)-(long)local_68 >> 1) {
      uVar10 = uVar8;
    }
    puVar4 = param_2;
    puVar6 = local_68;
    if (0x27 < uVar10) {
      uVar1 = (ulong)-(long)local_68 >> 1;
      if (uVar8 <= (ulong)-(long)local_68 >> 1) {
        uVar1 = uVar8;
      }
      if ((((local_68 <= local_68 + uVar1) && (((ulong)local_68 & 1) == 0)) &&
          (param_2 <= param_2 + uVar1)) && (0x1f < (ulong)((long)local_68 - (long)param_2))) {
        puVar9 = (undefined8 *)(local_68 + 8);
        uVar8 = uVar10 + 1 & 0xf;
        puVar3 = (undefined8 *)(param_2 + 8);
        uVar1 = 0x10;
        if (uVar8 != 0) {
          uVar1 = uVar8;
        }
        lVar7 = (uVar10 + 1) - uVar1;
        puVar4 = param_2 + lVar7;
        puVar6 = local_68 + lVar7;
        do {
          puVar2 = puVar3 + -1;
          uVar11 = puVar3[-2];
          uVar13 = puVar3[1];
          uVar12 = *puVar3;
          lVar7 = lVar7 + -0x10;
          puVar3 = puVar3 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar11;
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          puVar9 = puVar9 + 4;
        } while (lVar7 != 0);
      }
    }
    lVar7 = (long)local_68 - (long)puVar6;
    do {
      if (puVar6 == (undefined2 *)0x0) goto LAB_00ba258c;
      puVar5 = puVar4 + 1;
      lVar7 = lVar7 + -2;
      *puVar6 = *puVar4;
      puVar4 = puVar5;
      puVar6 = puVar6 + 1;
    } while (puVar5 != param_2 + param_3);
    local_60 = (undefined2 *)((long)local_68 - lVar7);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x20);
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  if (puVar9 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar9 == (undefined8 *)0x0) {
LAB_00ba258c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar9[2] = local_60;
    puVar9[3] = local_58;
    *puVar9 = FUN_00ba3898;
    puVar9[1] = local_68;
    puVar3 = puVar9 + 8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_60 = (undefined2 *)0x0;
    local_58 = (undefined2 *)0x0;
    local_68 = (undefined2 *)0x0;
    puVar9[6] = 0;
    *(undefined1 *)(puVar9 + 7) = 3;
  }
  else {
    puVar3 = (undefined8 *)FUN_00ba3570(param_1 + 0x18,&local_38,&local_68);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_68 != (undefined2 *)0x0) {
    uVar8 = (ulong)((long)local_60 + ((long)local_60 << 0x3f) + -2) >> 1;
    uVar10 = (ulong)(((long)local_68 - (long)local_60 << 0x3f) - ((long)local_68 - (long)local_60))
             >> 1;
    if (uVar8 <= uVar10) {
      uVar10 = uVar8;
    }
    puVar4 = local_60;
    if ((1 < uVar10) && ((((int)local_68 - (uint)local_60 | (uint)local_60) & 1) == 0)) {
      uVar10 = uVar10 & 0x7ffffffffffffffe;
      puVar4 = local_60 + -uVar10;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar4 != local_68) {
      puVar4 = puVar4 + -1;
      if (puVar4 == (undefined2 *)0x0) {
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


// ===== 00ba25b8  FUN_00ba25b8 =====

void FUN_00ba25b8(long param_1,undefined2 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  code *local_38;
  
  uVar10 = param_3 * 2;
  local_68 = (undefined2 *)0x0;
  local_60 = (undefined2 *)0x0;
  local_38 = FUN_00ba39b4;
  local_58 = (undefined2 *)0x0;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ba3880();
    }
    local_68 = (undefined2 *)operator_new(uVar10);
    uVar8 = uVar10 - 2 >> 1;
    local_58 = local_68 + param_3;
    uVar10 = (ulong)-(long)local_68 >> 1;
    if (uVar8 <= (ulong)-(long)local_68 >> 1) {
      uVar10 = uVar8;
    }
    puVar4 = param_2;
    puVar6 = local_68;
    if (0x27 < uVar10) {
      uVar1 = (ulong)-(long)local_68 >> 1;
      if (uVar8 <= (ulong)-(long)local_68 >> 1) {
        uVar1 = uVar8;
      }
      if ((((local_68 <= local_68 + uVar1) && (((ulong)local_68 & 1) == 0)) &&
          (param_2 <= param_2 + uVar1)) && (0x1f < (ulong)((long)local_68 - (long)param_2))) {
        puVar9 = (undefined8 *)(local_68 + 8);
        uVar8 = uVar10 + 1 & 0xf;
        puVar3 = (undefined8 *)(param_2 + 8);
        uVar1 = 0x10;
        if (uVar8 != 0) {
          uVar1 = uVar8;
        }
        lVar7 = (uVar10 + 1) - uVar1;
        puVar4 = param_2 + lVar7;
        puVar6 = local_68 + lVar7;
        do {
          puVar2 = puVar3 + -1;
          uVar11 = puVar3[-2];
          uVar13 = puVar3[1];
          uVar12 = *puVar3;
          lVar7 = lVar7 + -0x10;
          puVar3 = puVar3 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar11;
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          puVar9 = puVar9 + 4;
        } while (lVar7 != 0);
      }
    }
    lVar7 = (long)local_68 - (long)puVar6;
    do {
      if (puVar6 == (undefined2 *)0x0) goto LAB_00ba280c;
      puVar5 = puVar4 + 1;
      lVar7 = lVar7 + -2;
      *puVar6 = *puVar4;
      puVar4 = puVar5;
      puVar6 = puVar6 + 1;
    } while (puVar5 != param_2 + param_3);
    local_60 = (undefined2 *)((long)local_68 - lVar7);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x20);
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  if (puVar9 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar9 == (undefined8 *)0x0) {
LAB_00ba280c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar9[2] = local_60;
    puVar9[3] = local_58;
    *puVar9 = FUN_00ba39b4;
    puVar9[1] = local_68;
    puVar3 = puVar9 + 8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_60 = (undefined2 *)0x0;
    local_58 = (undefined2 *)0x0;
    local_68 = (undefined2 *)0x0;
    puVar9[6] = 0;
    *(undefined1 *)(puVar9 + 7) = 3;
  }
  else {
    puVar3 = (undefined8 *)FUN_00ba3570(param_1 + 0x18,&local_38,&local_68);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_68 != (undefined2 *)0x0) {
    uVar8 = (ulong)((long)local_60 + ((long)local_60 << 0x3f) + -2) >> 1;
    uVar10 = (ulong)(((long)local_68 - (long)local_60 << 0x3f) - ((long)local_68 - (long)local_60))
             >> 1;
    if (uVar8 <= uVar10) {
      uVar10 = uVar8;
    }
    puVar4 = local_60;
    if ((1 < uVar10) && ((((int)local_68 - (uint)local_60 | (uint)local_60) & 1) == 0)) {
      uVar10 = uVar10 & 0x7ffffffffffffffe;
      puVar4 = local_60 + -uVar10;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar4 != local_68) {
      puVar4 = puVar4 + -1;
      if (puVar4 == (undefined2 *)0x0) {
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


// ===== 00ba2838  FUN_00ba2838 =====

void FUN_00ba2838(long param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *local_28;
  undefined2 local_4 [2];
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_28 = FUN_00ba3c5c;
  local_4[0] = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3c5c;
    puVar2 = puVar1 + 8;
    *(undefined2 *)(puVar1 + 1) = param_2;
    *(undefined1 *)(puVar1 + 7) = 4;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba3ad0(param_1 + 0x18,&local_28,local_4);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba28c4  FUN_00ba28c4 =====

void FUN_00ba28c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  code *local_8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_8 = FUN_00ba3c94;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = FUN_00ba3c94;
    puVar2 = puVar1 + 8;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00ba30b8(param_1 + 0x18,&local_8,&uStack_21);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}


// ===== 00ba2944  FUN_00ba2944 =====

void FUN_00ba2944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba2954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  return;
}


// ===== 00ba2958  FUN_00ba2958 =====

void FUN_00ba2958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba2968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
  return;
}


// ===== 00ba296c  FUN_00ba296c =====

void FUN_00ba296c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba297c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xc0))();
  return;
}


// ===== 00ba2980  FUN_00ba2980 =====

void FUN_00ba2980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba2990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 200))();
  return;
}


// ===== 00ba2994  FUN_00ba2994 =====

void FUN_00ba2994(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uStack_41;
  
  pvVar2 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47630;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[4];
    pvVar1 = pvVar2;
    if (pvVar2 != pvVar3) {
      do {
        pvVar1 = (void *)((long)pvVar3 + -0x40);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((ulong)*(byte *)((long)pvVar3 + -8) != 0xff) {
          (*(code *)(&PTR_FUN_00d47700)[*(byte *)((long)pvVar3 + -8)])
                    (&uStack_41,(long)pvVar3 + -0x38);
        }
        *(undefined1 *)((long)pvVar3 + -8) = 0xff;
        pvVar3 = pvVar1;
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar2;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00ba2a64  FUN_00ba2a64 =====

void FUN_00ba2a64(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uStack_41;
  
  pvVar2 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47630;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[4];
    pvVar1 = pvVar2;
    if (pvVar2 != pvVar3) {
      do {
        pvVar1 = (void *)((long)pvVar3 + -0x40);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((ulong)*(byte *)((long)pvVar3 + -8) != 0xff) {
          (*(code *)(&PTR_FUN_00d47700)[*(byte *)((long)pvVar3 + -8)])
                    (&uStack_41,(long)pvVar3 + -0x38);
        }
        *(undefined1 *)((long)pvVar3 + -8) = 0xff;
        pvVar3 = pvVar1;
      } while (pvVar1 != pvVar2);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = pvVar2;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00ba2b40  FUN_00ba2b40 =====

void FUN_00ba2b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 00ba2b54  FUN_00ba2b54 =====

void FUN_00ba2b54(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba2b6c  FUN_00ba2b6c =====

void FUN_00ba2b6c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_70;
  undefined1 uStack_61;
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  puVar1 = (undefined8 *)(param_2[1] + (lVar3 - lVar5));
  if (lVar5 != lVar3) {
    lVar6 = lVar3 + 8;
    puVar7 = puVar1;
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar4 = *(undefined8 *)(lVar6 + -8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *(undefined1 *)(puVar7 + 7) = 0xff;
      *puVar7 = uVar4;
      bVar2 = *(byte *)(lVar6 + 0x30);
      if ((ulong)bVar2 != 0xff) {
        local_70 = puVar7 + 1;
        (*(code *)(&PTR_FUN_00d47728)[bVar2])(&local_70,lVar6);
        *(byte *)(puVar7 + 7) = bVar2;
      }
      lVar8 = lVar6 + 0x38;
      puVar7 = puVar7 + 8;
      lVar6 = lVar6 + 0x40;
    } while (lVar8 != lVar5);
    do {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((ulong)*(byte *)(lVar3 + 0x38) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(lVar3 + 0x38)])(&uStack_61,lVar3 + 8);
      }
      *(undefined1 *)(lVar3 + 0x38) = 0xff;
      lVar3 = lVar3 + 0x40;
    } while (lVar3 != lVar5);
  }
  param_2[1] = (long)puVar1;
  lVar3 = *param_1;
  lVar6 = param_1[2];
  param_1[1] = lVar3;
  lVar8 = param_2[1];
  lVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar8;
  param_1[2] = lVar5;
  param_2[2] = lVar3;
  param_2[3] = lVar6;
  *param_2 = lVar3;
  param_2[1] = lVar3;
  return;
}


// ===== 00ba2cdc  FUN_00ba2cdc =====

void FUN_00ba2cdc(long *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba2d0c  FUN_00ba2d0c =====

void FUN_00ba2d0c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = uVar2;
    puVar1[1] = 0;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba2d68  FUN_00ba2d68 =====

void FUN_00ba2d68(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar1 + 4) = uVar3;
    *(undefined8 *)(puVar1 + 2) = uVar2;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba2db8  FUN_00ba2db8 =====

void FUN_00ba2db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba2e28  FUN_00ba2e28 =====

void FUN_00ba2e28(undefined8 *param_1,undefined2 *param_2)

{
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    *(undefined2 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba2e60  FUN_00ba2e60 =====

long FUN_00ba2e60(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  void *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  undefined1 uStack_41;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_68 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar6 = 0x3ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3a != 0) goto LAB_00ba300c;
      local_68 = operator_new(uVar6 << 6);
    }
    local_50 = (void *)((long)local_68 + uVar6 * 0x40);
    local_60 = (undefined8 *)((long)local_68 + lVar7);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_58 = local_60 + 8;
    *local_60 = *param_2;
    uVar5 = *param_3;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[1] = uVar5;
    local_60[2] = 0;
    local_60[2] = param_3[1];
    local_60[3] = param_3[2];
    local_60[4] = param_3[3];
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined1 *)(local_60 + 7) = 1;
    FUN_00ba2b6c(param_1,&local_68);
    puVar3 = local_60;
    lVar7 = param_1[1];
    puVar2 = local_58;
    while( true ) {
      if (puVar3 == puVar2) {
        if (local_68 != (void *)0x0) {
          local_58 = puVar2;
          operator_delete(local_68);
        }
        return lVar7;
      }
      if (puVar2 + -8 == (undefined8 *)0x0) break;
      if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(puVar2 + -1)])(&uStack_41,puVar2 + -7);
      }
      *(undefined1 *)(puVar2 + -1) = 0xff;
      puVar2 = puVar2 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ba2b54();
LAB_00ba300c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ba3010  FUN_00ba3010 =====

void FUN_00ba3010(undefined8 *param_1,long *param_2)

{
  undefined8 local_30;
  void *local_28;
  void *pvStack_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  pvStack_20 = (void *)param_1[2];
  local_28 = (void *)param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_1[3];
  param_1[3] = 0;
  local_30 = *param_1;
  (**(code **)(*param_2 + 0x50))(param_2,&local_30);
  if (local_28 != (void *)0x0) {
    if ((long)pvStack_20 - 1U < (ulong)((long)pvStack_20 - (long)local_28)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvStack_20 = local_28;
    operator_delete(local_28);
  }
  return;
}


// ===== 00ba30b8  FUN_00ba30b8 =====

long FUN_00ba30b8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  void *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  undefined1 uStack_41;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_68 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar6 = 0x3ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3a != 0) goto LAB_00ba3230;
      local_68 = operator_new(uVar6 << 6);
    }
    local_50 = (void *)((long)local_68 + uVar6 * 0x40);
    local_60 = (undefined8 *)((long)local_68 + lVar7);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    local_58 = local_60 + 8;
    *(undefined1 *)(local_60 + 7) = 0;
    *local_60 = uVar5;
    FUN_00ba2b6c(param_1,&local_68);
    puVar3 = local_60;
    lVar7 = param_1[1];
    puVar2 = local_58;
    while( true ) {
      if (puVar3 == puVar2) {
        if (local_68 != (void *)0x0) {
          local_58 = puVar2;
          operator_delete(local_68);
        }
        return lVar7;
      }
      if (puVar2 + -8 == (undefined8 *)0x0) break;
      if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(puVar2 + -1)])(&uStack_41,puVar2 + -7);
      }
      *(undefined1 *)(puVar2 + -1) = 0xff;
      puVar2 = puVar2 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ba2b54();
LAB_00ba3230:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ba3234  FUN_00ba3234 =====

void FUN_00ba3234(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba3244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2);
  return;
}


// ===== 00ba3248  FUN_00ba3248 =====

long FUN_00ba3248(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  undefined1 uStack_41;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_68 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 5;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar5 = 0x3ffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3a != 0) goto LAB_00ba33e8;
      local_68 = operator_new(uVar5 << 6);
    }
    local_50 = (void *)((long)local_68 + uVar5 * 0x40);
    local_60 = (undefined8 *)((long)local_68 + lVar6);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_58 = local_60 + 8;
    *local_60 = *param_2;
    *(undefined4 *)(local_60 + 1) = *param_3;
    uVar8 = *(undefined8 *)(param_3 + 4);
    uVar7 = *(undefined8 *)(param_3 + 2);
    local_60[4] = *(undefined8 *)(param_3 + 6);
    local_60[3] = uVar8;
    local_60[2] = uVar7;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined1 *)(local_60 + 7) = 2;
    FUN_00ba2b6c(param_1,&local_68);
    puVar3 = local_60;
    lVar6 = param_1[1];
    puVar2 = local_58;
    while( true ) {
      if (puVar3 == puVar2) {
        if (local_68 != (void *)0x0) {
          local_58 = puVar2;
          operator_delete(local_68);
        }
        return lVar6;
      }
      if (puVar2 + -8 == (undefined8 *)0x0) break;
      if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(puVar2 + -1)])(&uStack_41,puVar2 + -7);
      }
      *(undefined1 *)(puVar2 + -1) = 0xff;
      puVar2 = puVar2 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ba2b54();
LAB_00ba33e8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ba33ec  FUN_00ba33ec =====

void FUN_00ba33ec(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_28;
  ulong uStack_20;
  ulong local_18;
  
  if (*(char *)(param_1 + 0xc) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  local_18 = *(ulong *)(param_1 + 6);
  uStack_20 = *(ulong *)(param_1 + 4);
  local_28 = *(undefined8 ***)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uVar1 = uStack_20;
  pppuVar2 = (undefined8 ***)local_28;
  if (-1 < (long)local_18) {
    uVar1 = local_18 >> 0x38;
    pppuVar2 = &local_28;
  }
  (**(code **)(*param_2 + 0x60))(param_2,*param_1,pppuVar2,uVar1);
  if ((long)local_18 < 0) {
    operator_delete(local_28);
  }
  return;
}


// ===== 00ba3490  FUN_00ba3490 =====

void FUN_00ba3490(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_28;
  ulong uStack_20;
  ulong local_18;
  
  if (*(char *)(param_1 + 0xc) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  local_18 = *(ulong *)(param_1 + 6);
  uStack_20 = *(ulong *)(param_1 + 4);
  local_28 = *(undefined8 ***)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uVar1 = uStack_20;
  pppuVar2 = (undefined8 ***)local_28;
  if (-1 < (long)local_18) {
    uVar1 = local_18 >> 0x38;
    pppuVar2 = &local_28;
  }
  (**(code **)(*param_2 + 0x68))(param_2,*param_1,pppuVar2,uVar1);
  if ((long)local_18 < 0) {
    operator_delete(local_28);
  }
  return;
}


// ===== 00ba3534  FUN_00ba3534 =====

void FUN_00ba3534(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba3544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2);
  return;
}


// ===== 00ba3548  FUN_00ba3548 =====

void FUN_00ba3548(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba3558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2);
  return;
}


// ===== 00ba355c  FUN_00ba355c =====

void FUN_00ba355c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2);
  return;
}


// ===== 00ba3570  FUN_00ba3570 =====

long FUN_00ba3570(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  void *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  undefined1 uStack_41;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_68 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar6 = 0x3ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3a != 0) goto LAB_00ba372c;
      local_68 = operator_new(uVar6 << 6);
    }
    local_50 = (void *)((long)local_68 + uVar6 * 0x40);
    local_60 = (undefined8 *)((long)local_68 + lVar7);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    local_60[2] = 0;
    local_60[3] = 0;
    *local_60 = uVar5;
    local_60[1] = 0;
    local_60[1] = *param_3;
    local_60[2] = param_3[1];
    local_60[3] = param_3[2];
    uVar8 = param_3[4];
    uVar5 = param_3[3];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    local_60[6] = param_3[5];
    local_60[5] = uVar8;
    local_60[4] = uVar5;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    *(undefined1 *)(local_60 + 7) = 3;
    local_58 = local_60 + 8;
    FUN_00ba2b6c(param_1,&local_68);
    puVar3 = local_60;
    lVar7 = param_1[1];
    puVar2 = local_58;
    while( true ) {
      if (puVar3 == puVar2) {
        if (local_68 != (void *)0x0) {
          local_58 = puVar2;
          operator_delete(local_68);
        }
        return lVar7;
      }
      if (puVar2 + -8 == (undefined8 *)0x0) break;
      if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(puVar2 + -1)])(&uStack_41,puVar2 + -7);
      }
      *(undefined1 *)(puVar2 + -1) = 0xff;
      puVar2 = puVar2 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ba2b54();
LAB_00ba372c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ba3730  FUN_00ba3730 =====

void FUN_00ba3730(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  undefined8 *******pppppppuVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ******local_28;
  ulong uStack_20;
  ulong local_18;
  
  if (*(char *)(param_1 + 6) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  local_18 = param_1[5];
  pvVar3 = (void *)param_1[1];
  uStack_20 = param_1[4];
  local_28 = (undefined8 ******)param_1[3];
  pvVar4 = (void *)*param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = (void *)0x0;
  if ((long)pvVar3 - (long)pvVar4 != 0) {
    pvVar1 = pvVar4;
  }
  uVar5 = uStack_20;
  pppppppuVar2 = (undefined8 *******)local_28;
  if (-1 < (long)local_18) {
    uVar5 = local_18 >> 0x38;
    pppppppuVar2 = &local_28;
  }
  (**(code **)(*param_2 + 0x88))(param_2,pvVar1,(long)pvVar3 - (long)pvVar4 >> 1,pppppppuVar2,uVar5)
  ;
  if ((long)local_18 < 0) {
    operator_delete(local_28);
  }
  if (pvVar4 != (void *)0x0) {
    uVar6 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar5 = (ulong)(((long)pvVar4 - (long)pvVar3 << 0x3f) - ((long)pvVar4 - (long)pvVar3)) >> 1;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar4 - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar5 = uVar5 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar5 * -2);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (pvVar3 != pvVar4) {
      pvVar3 = (void *)((long)pvVar3 + -2);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(pvVar4);
  }
  return;
}


// ===== 00ba3880  FUN_00ba3880 =====

void FUN_00ba3880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba3898  FUN_00ba3898 =====

void FUN_00ba3898(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 6) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  pvVar2 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  pvVar3 = (void *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lVar7 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = (void *)0x0;
  if ((long)pvVar6 - (long)pvVar2 != 0) {
    pvVar1 = pvVar2;
  }
  (**(code **)(*param_2 + 0x90))(param_2,pvVar1,(long)pvVar6 - (long)pvVar2 >> 1);
  if (lVar7 < 0) {
    operator_delete(pvVar3);
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  uVar5 = (ulong)((long)pvVar6 + ((long)pvVar6 << 0x3f) + -2) >> 1;
  uVar4 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3f) - ((long)pvVar2 - (long)pvVar6)) >> 1;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar2 - (uint)pvVar6 | (uint)pvVar6) & 1) == 0)) {
    uVar4 = uVar4 & 0x7ffffffffffffffe;
    pvVar6 = (void *)((long)pvVar6 + uVar4 * -2);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar6 == pvVar2) {
      operator_delete(pvVar2);
      return;
    }
    pvVar6 = (void *)((long)pvVar6 + -2);
  } while (pvVar6 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba39b4  FUN_00ba39b4 =====

void FUN_00ba39b4(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 6) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  pvVar2 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  pvVar3 = (void *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lVar7 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = (void *)0x0;
  if ((long)pvVar6 - (long)pvVar2 != 0) {
    pvVar1 = pvVar2;
  }
  (**(code **)(*param_2 + 0x98))(param_2,pvVar1,(long)pvVar6 - (long)pvVar2 >> 1);
  if (lVar7 < 0) {
    operator_delete(pvVar3);
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  uVar5 = (ulong)((long)pvVar6 + ((long)pvVar6 << 0x3f) + -2) >> 1;
  uVar4 = (ulong)(((long)pvVar2 - (long)pvVar6 << 0x3f) - ((long)pvVar2 - (long)pvVar6)) >> 1;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar2 - (uint)pvVar6 | (uint)pvVar6) & 1) == 0)) {
    uVar4 = uVar4 & 0x7ffffffffffffffe;
    pvVar6 = (void *)((long)pvVar6 + uVar4 * -2);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar6 == pvVar2) {
      operator_delete(pvVar2);
      return;
    }
    pvVar6 = (void *)((long)pvVar6 + -2);
  } while (pvVar6 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba3ad0  FUN_00ba3ad0 =====

long FUN_00ba3ad0(long *param_1,undefined8 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  void *local_50;
  undefined1 uStack_41;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_68 = (void *)0x0;
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar5) {
      uVar6 = 0x3ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3a != 0) goto LAB_00ba3c58;
      local_68 = operator_new(uVar6 << 6);
    }
    local_50 = (void *)((long)local_68 + uVar6 * 0x40);
    local_60 = (undefined8 *)((long)local_68 + lVar7);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *local_60 = *param_2;
    uVar2 = *param_3;
    *(undefined1 *)(local_60 + 7) = 4;
    local_58 = local_60 + 8;
    *(undefined2 *)(local_60 + 1) = uVar2;
    FUN_00ba2b6c(param_1,&local_68);
    puVar4 = local_60;
    lVar7 = param_1[1];
    puVar3 = local_58;
    while( true ) {
      if (puVar4 == puVar3) {
        if (local_68 != (void *)0x0) {
          local_58 = puVar3;
          operator_delete(local_68);
        }
        return lVar7;
      }
      if (puVar3 + -8 == (undefined8 *)0x0) break;
      if ((ulong)*(byte *)(puVar3 + -1) != 0xff) {
        (*(code *)(&PTR_FUN_00d47700)[*(byte *)(puVar3 + -1)])(&uStack_41,puVar3 + -7);
      }
      *(undefined1 *)(puVar3 + -1) = 0xff;
      puVar3 = puVar3 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00ba2b54();
LAB_00ba3c58:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00ba3c5c  FUN_00ba3c5c =====

void FUN_00ba3c5c(undefined2 *param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x04') {
                    /* WARNING: Could not recover jumptable at 0x00ba3c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_2,*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 00ba3c94  FUN_00ba3c94 =====

void FUN_00ba3c94(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba3ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xa8))(param_2);
  return;
}


// ===== 00ba3ca8  FUN_00ba3ca8 =====

void FUN_00ba3ca8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,ulong param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *__dest;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  __dest = param_1 + 2;
  *param_1 = param_2;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)param_4;
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined4 *)operator_new(uVar2);
    *(undefined4 **)(param_1 + 2) = __dest;
    *(ulong *)(param_1 + 4) = param_4;
    *(ulong *)(param_1 + 6) = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined4 *)((long)__dest + param_4)) {
    if ((__dest <= param_3) && (param_3 < (undefined4 *)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_3,param_4);
    *(undefined1 *)((long)__dest + param_4) = 0;
    uVar5 = param_8[1];
    uVar4 = *param_8;
    uVar7 = param_8[3];
    uVar6 = param_8[2];
    *(undefined8 *)(param_1 + 0x10) = param_8[4];
    *(undefined8 *)(param_1 + 10) = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0xe) = uVar7;
    *(undefined8 *)(param_1 + 0xc) = uVar6;
    uVar4 = *param_5;
    *(undefined8 *)(param_1 + 0x14) = param_5[1];
    *(undefined8 *)(param_1 + 0x12) = uVar4;
    *(undefined8 *)(param_1 + 0x16) = param_5[2];
    lVar3 = param_5[3];
    *(long *)(param_1 + 0x18) = lVar3;
    if (*(long *)(lVar3 + 8) != 0) {
      param_5[2] = 0;
      param_5[3] = &DAT_001fbc50;
    }
    uVar4 = *param_6;
    *(undefined8 *)(param_1 + 0x1c) = param_6[1];
    *(undefined8 *)(param_1 + 0x1a) = uVar4;
    *(undefined8 *)(param_1 + 0x1e) = param_6[2];
    lVar3 = param_6[3];
    *(long *)(param_1 + 0x20) = lVar3;
    if (*(long *)(lVar3 + 8) != 0) {
      param_6[2] = 0;
      param_6[3] = &DAT_001fbc50;
    }
    *(undefined8 *)(param_1 + 0x22) = param_7;
    uVar4 = *param_8;
    param_1[0x26] = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar4;
    param_1[0x28] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00ba3e2c  FUN_00ba3e2c =====

void FUN_00ba3e2c(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))();
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  (**(code **)(param_1 + 0x78))(param_1 + 0x68);
  plVar1 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 0x80) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x68));
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 0x60) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x48));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 00ba3ee4  FUN_00ba3ee4 =====

void FUN_00ba3ee4(long param_1)

{
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))();
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  return;
}


// ===== 00ba3f30  FUN_00ba3f30 =====

void FUN_00ba3f30(undefined4 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  param_1[0x28] = 0;
  if ((*(byte *)(param_1 + 0x27) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x24);
    iVar1 = param_1[0x26];
    param_1[0x26] = iVar1 + 1;
    if (uVar3 + 0x8000000000000001 < 2) {
      uVar2 = 0x7fffffff;
    }
    else {
      uVar2 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      uVar2 = uVar2 & 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00ba400c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x22) + 0x20))
              (*(long **)(param_1 + 0x22),uVar2,CONCAT44(*param_1,iVar1 + 1));
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x24);
  iVar1 = param_1[0x26];
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x26] = iVar1 + 1;
  if (uVar3 + 0x8000000000000001 < 2) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar2 = uVar2 + 1;
    }
    if ((uVar3 & 0x8000000000000000) != 0) {
      uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
    }
    uVar2 = uVar2 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00ba4080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x22) + 0x10))
            (*(long **)(param_1 + 0x22),uVar2,CONCAT44(*param_1,iVar1 + 1));
  return;
}


// ===== 00ba4084  FUN_00ba4084 =====

void FUN_00ba4084(undefined4 *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x27) == '\x01') && (param_1[0x26] == param_2)) {
    *(undefined1 *)(param_1 + 0x27) = 0;
    iVar3 = param_1[0x28] + 1;
    param_1[0x28] = iVar3;
    if ((*(char *)(param_1 + 0xc) != '\x01') || (iVar3 <= (int)param_1[0xb])) {
      uVar2 = *(ulong *)(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x27) = 1;
      uVar4 = uVar2;
      if (param_1[10] != 0) {
        uVar4 = *(ulong *)(param_1 + 0xe);
        do {
          if ((iVar3 < 1) || (86399999999 < (long)uVar2)) {
            uVar4 = uVar2;
            if (86399999999 < (long)uVar2) {
              uVar4 = 86400000000;
            }
            break;
          }
          uVar2 = uVar2 * 2;
          iVar3 = iVar3 + -1;
        } while (uVar2 - uVar4 == 0 || (long)uVar2 < (long)uVar4);
      }
      param_1[0x26] = param_2 + 1;
      if (uVar4 + 0x8000000000000001 < 2) {
        uVar2 = 0x7fffffff;
      }
      else {
        uVar2 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          uVar2 = uVar2 + 1;
        }
        if ((uVar4 & 0x8000000000000000) != 0) {
          uVar2 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
        }
        uVar2 = uVar2 & 0xffffffff;
      }
      (**(code **)(**(long **)(param_1 + 0x22) + 0x10))
                (*(long **)(param_1 + 0x22),uVar2,CONCAT44(*param_1,param_2 + 1));
    }
    lVar1 = (**(code **)(param_1 + 0x16))(param_1 + 0x12);
    if (((0 < lVar1) && (lVar1 != *(long *)(param_1 + 0x24))) &&
       (*(long *)(param_1 + 0x24) = lVar1, *(char *)(param_1 + 0x27) == '\x01')) {
      (**(code **)(**(long **)(param_1 + 0x22) + 0x18))();
      uVar2 = *(ulong *)(param_1 + 0x24);
      uVar4 = uVar2;
      if (param_1[10] != 0) {
        uVar4 = *(ulong *)(param_1 + 0xe);
        iVar3 = param_1[0x28];
        do {
          if ((iVar3 < 1) || (86399999999 < (long)uVar2)) {
            uVar4 = uVar2;
            if (86399999999 < (long)uVar2) {
              uVar4 = 86400000000;
            }
            break;
          }
          uVar2 = uVar2 * 2;
          iVar3 = iVar3 + -1;
        } while (uVar2 - uVar4 == 0 || (long)uVar2 < (long)uVar4);
      }
      iVar3 = param_1[0x26];
      param_1[0x26] = iVar3 + 1;
      if (uVar4 + 0x8000000000000001 < 2) {
        uVar2 = 0x7fffffff;
      }
      else {
        uVar2 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          uVar2 = uVar2 + 1;
        }
        if ((uVar4 & 0x8000000000000000) != 0) {
          uVar2 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
        }
        uVar2 = uVar2 & 0xffffffff;
      }
                    /* WARNING: Could not recover jumptable at 0x00ba42f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x22) + 0x10))
                (*(long **)(param_1 + 0x22),uVar2,CONCAT44(*param_1,iVar3 + 1));
      return;
    }
  }
  return;
}


// ===== 00ba42fc  FUN_00ba42fc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00ba42fc(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  while( true ) {
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return;
      }
      uVar2 = (uint)(param_2 >> 0x20);
      if (*(uint *)(plVar1 + 4) <= uVar2) break;
      plVar1 = (long *)*plVar1;
    }
    if (uVar2 <= *(uint *)(plVar1 + 4)) break;
    plVar1 = (long *)plVar1[1];
  }
  if (plVar1 == (undefined8 *)(param_1 + 0x28)) {
    return;
  }
  FUN_00ba4084(plVar1[5],param_2 & 0xffffffff);
  return;
}


// ===== 00ba434c  FUN_00ba434c =====

void * FUN_00ba434c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   long param_5)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  uint local_c0;
  undefined1 uStack_b9;
  undefined1 *local_b8;
  long local_b0;
  ulong uStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c0 = *(int *)(param_1 + 0x38) + 1;
  uVar4 = (ulong)local_c0;
  *(uint *)(param_1 + 0x38) = local_c0;
  if (local_c0 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/timer/timer.cc",0x94,
                 "*id != std::numeric_limits<uint32_t>::max()",&DAT_00223e43,0xffffffff,0xffffffff);
  }
  lVar2 = (**(code **)(param_1 + 0x10))(param_1,*(undefined4 *)(param_5 + 0x20));
  if (lVar2 != 0) {
    pvVar3 = operator_new(0xa8);
    uStack_88 = param_4[1];
    local_90 = *param_4;
    local_78 = param_4[3];
    uStack_80 = param_4[2];
    if (*(long *)(param_4[3] + 8) != 0) {
      param_4[2] = 0;
      param_4[3] = &DAT_001fbc50;
    }
    local_a0 = FUN_00ba44fc;
    local_98 = &DAT_00256948;
    local_b0 = param_1;
    uStack_a8 = uVar4;
    FUN_00ba3ca8(pvVar3,uVar4,param_2,param_3,&local_90,&local_b0,lVar2,param_5);
    if (*(code **)(local_98 + 8) != (code *)0x0) {
      (**(code **)(local_98 + 8))(local_b0);
    }
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    local_b8 = (undefined1 *)&local_c0;
    lVar2 = FUN_00ba45f4(0,param_1 + 0x20,param_1 + 0x20,&DAT_001f94c3,&local_b8,&uStack_b9);
    *(void **)(lVar2 + 0x28) = pvVar3;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return pvVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../net/dcsctp/timer/timer.cc",0x96,"timeout != nullptr",&DAT_001f5fa0);
}


// ===== 00ba44fc  FUN_00ba44fc =====

void FUN_00ba44fc(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar7 = plVar3;
    do {
      while (*(uint *)(param_1 + 1) < *(uint *)(plVar7 + 4)) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      if (*(uint *)(param_1 + 1) <= *(uint *)(plVar7 + 4)) {
        if (plVar7 == (long *)(lVar6 + 0x28)) {
          return;
        }
        plVar4 = plVar7;
        plVar1 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = plVar4 != (long *)*plVar5;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(long **)(lVar6 + 0x20) == plVar7) {
          *(long **)(lVar6 + 0x20) = plVar5;
        }
        *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + -1;
        FUN_005d5d48(plVar3,plVar7);
        if (plVar7 != (long *)0xffffffffffffffe0) {
          operator_delete(plVar7);
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
  }
  return;
}


// ===== 00ba45f4  FUN_00ba45f4 =====

undefined1  [16]
FUN_00ba45f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00ba4660;
      }
      if (uVar1 <= *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00ba46d0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00ba4660:
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
LAB_00ba46d0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00ba4700  FUN_00ba4700 =====

void FUN_00ba4700(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar2;
  param_1[3] = param_3[2];
  lVar1 = param_3[3];
  param_1[4] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  return;
}


// ===== 00ba4738  FUN_00ba4738 =====

bool FUN_00ba4738(undefined8 *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_30;
  long lStack_28;
  
  if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
    bVar2 = false;
  }
  else {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba49c4(&local_50,param_2,param_3 & 1);
    puVar1 = (undefined1 *)0x0;
    if ((long)puStack_48 - (long)local_50 != 0) {
      puVar1 = local_50;
    }
    iVar3 = (**(code **)(*(long *)*param_1 + 0x18))
                      ((long *)*param_1,puVar1,(long)puStack_48 - (long)local_50);
    lStack_28 = (long)puStack_48 - (long)local_50;
    local_30 = (undefined1 *)0x0;
    if (lStack_28 != 0) {
      local_30 = local_50;
    }
    (*(code *)param_1[3])(param_1 + 1,&local_30,iVar3);
    bVar2 = iVar3 == 0;
    if (local_50 != (undefined1 *)0x0) {
      if (puStack_48 + -1 < puStack_48 + -(long)local_50) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_48 = local_50;
      operator_delete(local_50);
    }
  }
  return bVar2;
}


// ===== 00ba4828  FUN_00ba4828 =====

void FUN_00ba4828(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  *param_1 = param_2;
  *(short *)(param_1 + 1) = (short)*param_3;
  *(short *)((long)param_1 + 6) = (short)param_3[1];
  uVar1 = *(ulong *)(param_3 + 4);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(ulong *)(param_1 + 2) = uVar1 & 0xfffffffffffffffc;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}


// ===== 00ba4854  FUN_00ba4854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00ba4854(undefined4 *param_1,long *param_2)

{
  ushort *puVar1;
  void *pvVar2;
  ushort *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar6 = (undefined8 *)(param_1 + 4);
  pvVar2 = (void *)*puVar6;
  if (pvVar2 == *(void **)(param_1 + 6)) {
    uVar7 = *(ulong *)(param_1 + 2);
    if ((ulong)(*(long *)(param_1 + 8) - (long)pvVar2) < uVar7) {
      if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      pvVar5 = operator_new(uVar7);
      *(void **)(param_1 + 4) = pvVar5;
      *(void **)(param_1 + 6) = pvVar5;
      *(ulong *)(param_1 + 8) = (long)pvVar5 + uVar7;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    FUN_004efbd8(puVar6,0xc);
    puVar3 = *(ushort **)(param_1 + 4);
    if ((ulong)((long)*(ushort **)(param_1 + 6) - (long)puVar3) < 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                   &DAT_001f5fa0);
    }
    puVar1 = (ushort *)0x0;
    if (*(ushort **)(param_1 + 6) != puVar3) {
      puVar1 = puVar3;
    }
    *puVar1 = *(ushort *)(param_1 + 1) >> 8 | (ushort)((*(ushort *)(param_1 + 1) & 0xff00ff) << 8);
    puVar1[1] = *(ushort *)((long)param_1 + 6) >> 8 |
                (ushort)((*(ushort *)((long)param_1 + 6) & 0xff00ff) << 8);
    uVar4 = *param_1;
    auVar8._4_4_ = uVar4;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar4;
    auVar8._12_4_ = uVar4;
    auVar9._8_8_ = _UNK_001f3918;
    auVar9._0_8_ = _DAT_001f3910;
    auVar9 = NEON_ushl(auVar8,auVar9,4);
    *(uint *)(puVar1 + 2) = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
  }
  (**(code **)(*param_2 + 0x10))(param_2,puVar6);
  if ((*(long *)(param_1 + 6) - *(long *)(param_1 + 4) & 3U) != 0) {
    FUN_004efbd8(puVar6,(*(long *)(param_1 + 6) - *(long *)(param_1 + 4)) + 3U & 0xfffffffffffffffc)
    ;
  }
  return param_1;
}


// ===== 00ba4994  FUN_00ba4994 =====

long FUN_00ba4994(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) {
    uVar2 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    lVar1 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 8)) {
      lVar1 = *(ulong *)(param_1 + 8) - uVar2;
    }
    return lVar1;
  }
  return *(long *)(param_1 + 8) + -0xc;
}


// ===== 00ba49c4  FUN_00ba49c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ba49c4(long *param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(param_2 + 0x10);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = lVar2;
  param_1[2] = auVar4._8_8_;
  lVar3 = auVar4._0_8_;
  param_1[1] = lVar3;
  if (((param_3 & 1) != 0) && (lVar2 != lVar3)) {
    uVar1 = FUN_00ba4fc0(lVar2,lVar3 - lVar2);
    if ((ulong)(lVar3 - lVar2) < 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                   &DAT_001f5fa0);
    }
    auVar4._4_4_ = uVar1;
    auVar4._0_4_ = uVar1;
    auVar4._8_4_ = uVar1;
    auVar4._12_4_ = uVar1;
    auVar4 = NEON_ushl(auVar4,_DAT_001f3910,4);
    *(uint *)(lVar2 + 8) = CONCAT13(auVar4[0xc],CONCAT12(auVar4[8],CONCAT11(auVar4[4],auVar4[0])));
  }
  return;
}


// ===== 00ba4a60  FUN_00ba4a60 =====

void FUN_00ba4a60(ushort *param_1,ushort *param_2,ulong param_3,long param_4)

{
  void *pvVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort uVar9;
  ushort uVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  void *pvVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  void *pvVar22;
  undefined1 *puVar23;
  void *pvVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *local_90;
  ulong uStack_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (param_3 - 0x10000 < 0xffffffffffff0010) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    return;
  }
  if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005d34c0();
  }
  uVar9 = param_2[4];
  bVar3 = *(byte *)((long)param_2 + 9);
  bVar4 = *(byte *)((long)param_2 + 0xb);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(uint *)(param_2 + 2);
  uVar10 = param_2[5];
  uVar7 = (uint)(byte)uVar9 << 0x18 | (uint)bVar3 << 0x10 | (uint)(byte)uVar10 << 8 | (uint)bVar4;
  pvVar14 = operator_new(param_3);
  uVar16 = param_3 - 1;
  if ((ulong)-(long)pvVar14 < uVar16) {
    uVar16 = -(long)pvVar14;
  }
  uVar16 = uVar16 + 1;
  puVar17 = param_2;
  pvVar22 = pvVar14;
  if ((0x20 < uVar16) && (0x1f < (ulong)((long)pvVar14 - (long)param_2))) {
    puVar21 = param_2 + 8;
    uVar25 = 0x20;
    if ((uVar16 & 0x1f) != 0) {
      uVar25 = uVar16 & 0x1f;
    }
    puVar20 = (undefined8 *)((long)pvVar14 + 0x10);
    lVar19 = uVar16 - uVar25;
    puVar17 = (ushort *)((long)param_2 + lVar19);
    pvVar22 = (void *)((long)pvVar14 + lVar19);
    do {
      puVar8 = puVar21 + -4;
      uVar26 = *(undefined8 *)(puVar21 + -8);
      uVar28 = *(undefined8 *)(puVar21 + 4);
      uVar27 = *(undefined8 *)puVar21;
      lVar19 = lVar19 + -0x20;
      puVar21 = puVar21 + 0x10;
      puVar20[-1] = *(undefined8 *)puVar8;
      puVar20[-2] = uVar26;
      puVar20[1] = uVar28;
      *puVar20 = uVar27;
      puVar20 = puVar20 + 4;
    } while (lVar19 != 0);
  }
  lVar19 = 0;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  do {
    puVar15 = (undefined1 *)((long)pvVar22 + lVar19);
    if (puVar15 == (undefined1 *)0x0) goto LAB_00ba4e14;
    puVar18 = (undefined1 *)((long)puVar17 + lVar19);
    lVar19 = lVar19 + 1;
    *puVar15 = *puVar18;
  } while ((long)puVar17 + lVar19 != (long)param_2 + param_3);
  pvVar24 = (void *)((long)pvVar22 + lVar19);
  if (((*(byte *)(param_4 + 0xb7) & 1) == 0) && ((*(int *)(param_4 + 0xb8) == 0 || (uVar7 != 0)))) {
    if ((ulong)((long)pvVar22 + (lVar19 - (long)pvVar14)) < 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                   &DAT_001f5fa0);
    }
    pvVar1 = (void *)0x0;
    if (pvVar24 != pvVar14) {
      pvVar1 = pvVar14;
    }
    *(undefined4 *)((long)pvVar1 + 8) = 0;
    uVar13 = FUN_00ba4fc0(pvVar1);
    if (uVar13 == uVar7) {
      *(byte *)((long)pvVar1 + 8) = (byte)uVar9;
      *(byte *)((long)pvVar1 + 9) = bVar3;
      *(byte *)((long)pvVar1 + 10) = (byte)uVar10;
      *(byte *)((long)pvVar1 + 0xb) = bVar4;
      goto LAB_00ba4c10;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
LAB_00ba4c10:
    puVar15 = (undefined1 *)operator_new(0x60);
    uVar16 = (long)pvVar22 + (lVar19 - (long)pvVar14);
    local_68 = puVar15 + 0x60;
    local_78 = puVar15;
    if (uVar16 < 0xc) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0xba4e48);
      local_70 = puVar15;
      (*pcVar11)();
    }
    uVar16 = uVar16 - 0xc;
    puVar18 = local_68;
    if (uVar16 != 0) {
      pvVar22 = (void *)0x0;
      if (pvVar24 != pvVar14) {
        pvVar22 = pvVar14;
      }
      puVar23 = (undefined1 *)((long)pvVar22 + 0xc);
      do {
        local_70 = puVar15;
        if (uVar16 < 4) {
LAB_00ba4cdc:
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 0x20) = 0;
          if (local_78 == (undefined1 *)0x0) goto joined_r0x00ba4e3c;
          uVar16 = (ulong)(((long)local_78 - (long)puVar15) * 0x1555555555555555) >> 3;
          uVar25 = (long)puVar15 * -0x1555555555555555 - 8U >> 3;
          if (uVar25 <= uVar16) {
            uVar16 = uVar25;
          }
          if ((1 < uVar16) && ((((int)local_78 - (int)puVar15 | -(int)puVar15) & 7U) == 0)) {
            uVar16 = uVar16 & 0x1ffffffffffffffe;
            puVar15 = puVar15 + uVar16 * -0x18;
            do {
              uVar16 = uVar16 - 2;
            } while (uVar16 != 0);
          }
          goto LAB_00ba4da4;
        }
        local_7c[0] = *puVar23;
        local_80[0] = puVar23[1];
        uVar13 = ((uint)(*(ushort *)(puVar23 + 2) >> 8) | (*(ushort *)(puVar23 + 2) & 0xff00ff) << 8
                 ) + 3;
        uVar25 = (ulong)uVar13 & 0xfffc;
        bVar12 = uVar16 < uVar25;
        uVar16 = uVar16 - uVar25;
        if (bVar12 || (uVar13 & 0xffff) < 4) goto LAB_00ba4cdc;
        local_90 = puVar23;
        uStack_88 = uVar25;
        if (puVar15 < local_68) {
          if (puVar15 == (undefined1 *)0x0) {
LAB_00ba4e14:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar15 = local_7c[0];
          puVar15[1] = local_80[0];
          *(undefined1 **)(puVar15 + 8) = puVar23;
          *(ulong *)(puVar15 + 0x10) = uVar25;
          puVar15 = puVar15 + 0x18;
        }
        else {
          puVar15 = (undefined1 *)FUN_00ba4e84(&local_78,local_7c,local_80,&local_90);
        }
        puVar23 = puVar23 + uVar25;
        puVar18 = local_68;
      } while (uVar16 != 0);
    }
    *(ulong *)(param_1 + 0x10) = (long)pvVar14 + param_3;
    *(undefined1 **)(param_1 + 0x14) = local_78;
    local_78 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
    *param_1 = uVar5 >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
    param_1[1] = uVar6 >> 8 | (ushort)((uVar6 & 0xff00ff) << 8);
    *(uint *)(param_1 + 2) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(uint *)(param_1 + 4) = uVar7;
    *(void **)(param_1 + 8) = pvVar14;
    *(void **)(param_1 + 0xc) = pvVar24;
    pvVar24 = (void *)0x0;
    pvVar14 = (void *)0x0;
    *(undefined1 **)(param_1 + 0x18) = puVar15;
    *(undefined1 **)(param_1 + 0x1c) = puVar18;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
joined_r0x00ba4e3c:
  if (pvVar14 != (void *)0x0) {
    if ((long)pvVar24 - 1U < (ulong)((long)pvVar24 - (long)pvVar14)) {
LAB_00ba4db4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(pvVar14);
  }
  return;
  while (puVar15 = puVar15 + -0x18, puVar15 != (undefined1 *)0x0) {
LAB_00ba4da4:
    if (puVar15 == local_78) {
      local_70 = local_78;
      operator_delete(local_78);
      goto joined_r0x00ba4e3c;
    }
  }
  goto LAB_00ba4db4;
}


// ===== 00ba4e6c  FUN_00ba4e6c =====

void FUN_00ba4e6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba4e84  FUN_00ba4e84 =====

undefined1 * FUN_00ba4e84(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar7 = (undefined1 *)(param_1[1] - *param_1);
  uVar4 = ((long)puVar7 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar4) {
    FUN_00ba4e6c();
LAB_00ba4fbc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
    uVar6 = uVar4;
  }
  if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_00ba4fbc;
    pvVar2 = operator_new(uVar6 * 0x18);
    puVar7 = (undefined1 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined1 *)0x0) {
    uVar1 = *param_3;
    uVar9 = param_4[1];
    uVar8 = *param_4;
    *puVar7 = *param_2;
    puVar7[1] = uVar1;
    *(undefined8 *)(puVar7 + 0x10) = uVar9;
    *(undefined8 *)(puVar7 + 8) = uVar8;
    __n = param_1[1] - *param_1;
    memcpy(puVar7 + -__n,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)(puVar7 + -__n);
    param_1[1] = (long)(puVar7 + 0x18);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 0x18);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba4fc0  FUN_00ba4fc0 =====

uint FUN_00ba4fc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ba4fe0();
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


// ===== 00ba4fe0  FUN_00ba4fe0 =====

void FUN_00ba4fe0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_00dbacf8 & 1) == 0) {
    iVar1 = FUN_0054fdd4(&DAT_00dbacf8);
    if (iVar1 != 0) {
      uVar2 = getauxval(0x10,param_1,param_2);
      DAT_00dbacf4 = (~uVar2 & 0x90) == 0;
      FUN_0054ff1c(&DAT_00dbacf8);
    }
  }
  if (DAT_00dbacf4 == '\x01') {
    FUN_00ba5094(0);
    return;
  }
  FUN_00ba54f4(0,param_1,param_2);
  return;
}


// ===== 00ba5094  FUN_00ba5094 =====

uint FUN_00ba5094(uint param_1,ushort *param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  param_1 = ~param_1;
  uVar11 = param_3;
  if (0x407 < (long)param_3) {
    do {
      param_3 = uVar11 - 0x408;
      uVar2 = crc32x(0,*(undefined8 *)(param_2 + 0x80),0x1edc6f41);
      uVar3 = crc32x(0,*(undefined8 *)(param_2 + 0x180),0x1edc6f41);
      uVar4 = crc32x(0,*(undefined8 *)(param_2 + 0x100),0x1edc6f41);
      uVar5 = crc32x(param_1,*(undefined8 *)param_2,0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x84),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x184),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x104),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 4),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x88),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x108),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x188),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x8c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 8),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x18c),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x10c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0xc),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x90),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x110),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 400),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x94),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x10),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x194),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x114),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x14),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x98),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x118),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x198),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x9c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x18),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x19c),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x11c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x1c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xa0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x120),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1a0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xa4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x20),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1a4),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x124),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x24),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xa8),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x128),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1a8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xac),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x28),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1ac),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 300),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x2c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xb0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x130),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1b0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xb4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x30),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1b4),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x134),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x34),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xb8),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x138),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1b8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xbc),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x38),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1bc),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x13c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x3c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xc0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x140),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1c0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xc4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x40),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1c4),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x144),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x44),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 200),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x148),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1c8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xcc),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x48),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1cc),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x14c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x4c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xd0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x150),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1d0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xd4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x50),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1d4),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x154),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x54),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xd8),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x158),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1d8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xdc),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x58),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1dc),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x15c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x5c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xe0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x160),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1e0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xe4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x60),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1e4),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x164),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 100),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xe8),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x168),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1e8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xec),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x68),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1ec),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x16c),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x6c),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xf0),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x170),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1f0),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xf4),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x70),0x1edc6f41);
      uVar3 = crc32x(uVar3,*(undefined8 *)(param_2 + 500),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x174),0x1edc6f41);
      uVar5 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x74),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xf8),0x1edc6f41);
      uVar4 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x178),0x1edc6f41);
      uVar6 = crc32x(uVar2,*(undefined8 *)(param_2 + 0xfc),0x1edc6f41);
      uVar2 = crc32x(uVar5,*(undefined8 *)(param_2 + 0x78),0x1edc6f41);
      uVar7 = crc32x(uVar4,*(undefined8 *)(param_2 + 0x17c),0x1edc6f41);
      uVar8 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x7c),0x1edc6f41);
      auVar13 = NEON_pmull((ulong)uVar6,0xbd6f81f8,8);
      auVar12 = NEON_pmull((ulong)uVar7,0xdcb17aa4,8);
      auVar14 = NEON_pmull((ulong)uVar8,0x8d96551c,8);
      uVar2 = crc32x(uVar3,*(undefined8 *)(param_2 + 0x1f8),0x1edc6f41);
      uVar2 = crc32x(uVar2,*(undefined8 *)(param_2 + 0x1fc),0x1edc6f41);
      puVar10 = param_2 + 0x200;
      param_2 = param_2 + 0x204;
      uVar6 = crc32x(uVar2,*(undefined8 *)puVar10,0x1edc6f41);
      uVar7 = crc32x(0,auVar12._0_8_,0x1edc6f41);
      uVar8 = crc32x(0,auVar13._0_8_,0x1edc6f41);
      uVar9 = crc32x(0,auVar14._0_8_,0x1edc6f41);
      param_1 = uVar7 ^ uVar6 ^ uVar8 ^ uVar9;
      bVar1 = 0x80f < uVar11;
      uVar11 = param_3;
    } while (bVar1);
  }
  puVar10 = param_2;
  uVar11 = param_3;
  if (7 < (long)param_3) {
    do {
      param_2 = puVar10 + 4;
      param_3 = uVar11 - 8;
      param_1 = crc32x(param_1,*(undefined8 *)puVar10,0x1edc6f41);
      bVar1 = 0xf < uVar11;
      puVar10 = param_2;
      uVar11 = param_3;
    } while (bVar1);
  }
  if (((uint)param_3 >> 2 & 1) != 0) {
    param_1 = crc32w(param_1,*(undefined4 *)param_2,0x1edc6f41);
    param_2 = param_2 + 2;
  }
  if (((uint)param_3 >> 1 & 1) != 0) {
    param_1 = crc32h(param_1,(uint)*param_2,0x1edc6f41);
    param_2 = param_2 + 1;
  }
  if ((param_3 & 1) != 0) {
    uVar6 = crc32b(param_1,(uint)(byte)*param_2,0x1edc6f41);
    return ~uVar6;
  }
  return ~param_1;
}


// ===== 00ba54f4  FUN_00ba54f4 =====

uint FUN_00ba54f4(uint param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar7;
  
  puVar1 = (uint *)((long)param_2 + param_3);
  param_1 = ~param_1;
  puVar9 = (uint *)((long)param_2 + 3U & 0xfffffffffffffffc);
  puVar10 = param_2;
  if ((puVar9 <= puVar1) && (puVar7 = param_2, param_2 != puVar9)) {
    do {
      puVar6 = (uint *)((long)puVar7 + 1);
      param_1 = *(uint *)(&DAT_00256968 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar7) * 4) ^
                param_1 >> 8;
      puVar7 = puVar6;
      puVar10 = puVar9;
    } while (puVar6 != puVar9);
  }
  if (0xf < (long)puVar1 - (long)puVar10) {
    uVar4 = puVar10[1];
    uVar12 = puVar10[2];
    uVar11 = puVar10[3];
    lVar8 = (long)puVar1 - (long)(puVar10 + 4);
    param_1 = *puVar10 ^ param_1;
    puVar9 = puVar10;
    puVar10 = puVar10 + 4;
    if (0x100 < lVar8) {
      do {
        puVar10 = puVar9;
        Hint_Prefetch(puVar10 + 0x44,0,0,1);
        uVar2 = *(uint *)(&DAT_00256d68 + (ulong)(param_1 & 0xff) * 4) ^ puVar10[4] ^
                *(uint *)(&DAT_00257168 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(param_1 >> 0x18) * 4);
        uVar4 = *(uint *)(&DAT_00256d68 + (ulong)(uVar4 & 0xff) * 4) ^ puVar10[5] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar4 >> 0x18) * 4);
        lVar8 = lVar8 + -0x40;
        uVar12 = *(uint *)(&DAT_00256d68 + (ulong)(uVar12 & 0xff) * 4) ^ puVar10[6] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar12 >> 0x18) * 4);
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar11 & 0xff) * 4) ^ puVar10[7] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar11 >> 0x18) * 4);
        uVar2 = *(uint *)(&DAT_00256d68 + (ulong)(uVar2 & 0xff) * 4) ^ puVar10[8] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar2 >> 0x18) * 4);
        uVar4 = *(uint *)(&DAT_00256d68 + (ulong)(uVar4 & 0xff) * 4) ^ puVar10[9] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar4 >> 0x18) * 4);
        uVar12 = *(uint *)(&DAT_00256d68 + (ulong)(uVar12 & 0xff) * 4) ^ puVar10[10] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar12 >> 0x18) * 4);
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar11 & 0xff) * 4) ^ puVar10[0xb] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar11 >> 0x18) * 4);
        uVar2 = *(uint *)(&DAT_00256d68 + (ulong)(uVar2 & 0xff) * 4) ^ puVar10[0xc] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar2 >> 0x18) * 4);
        uVar4 = *(uint *)(&DAT_00256d68 + (ulong)(uVar4 & 0xff) * 4) ^ puVar10[0xd] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar4 >> 0x18) * 4);
        uVar12 = *(uint *)(&DAT_00256d68 + (ulong)(uVar12 & 0xff) * 4) ^ puVar10[0xe] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar12 >> 0x18) * 4);
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar11 & 0xff) * 4) ^ puVar10[0xf] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar11 >> 0x18) * 4);
        param_1 = *(uint *)(&DAT_00256d68 + (ulong)(uVar2 & 0xff) * 4) ^ puVar10[0x10] ^
                  *(uint *)(&DAT_00257168 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_00257568 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_00257968 + (ulong)(uVar2 >> 0x18) * 4);
        uVar4 = *(uint *)(&DAT_00256d68 + (ulong)(uVar4 & 0xff) * 4) ^ puVar10[0x11] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar4 >> 0x18) * 4);
        uVar12 = *(uint *)(&DAT_00256d68 + (ulong)(uVar12 & 0xff) * 4) ^ puVar10[0x12] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar12 >> 0x18) * 4);
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar11 & 0xff) * 4) ^ puVar10[0x13] ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar11 >> 0x18) * 4);
        puVar9 = puVar10 + 0x10;
      } while (0x100 < lVar8);
      puVar10 = puVar10 + 0x14;
    }
    if (0xf < lVar8) {
      lVar8 = (long)param_2 + (param_3 - (long)puVar10);
      do {
        param_1 = *(uint *)(&DAT_00256d68 + (ulong)(param_1 & 0xff) * 4) ^ *puVar10 ^
                  *(uint *)(&DAT_00257168 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_00257568 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_00257968 + (ulong)(param_1 >> 0x18) * 4);
        uVar4 = *(uint *)(&DAT_00256d68 + (ulong)(uVar4 & 0xff) * 4) ^ puVar10[1] ^
                *(uint *)(&DAT_00257168 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00257568 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00257968 + (ulong)(uVar4 >> 0x18) * 4);
        puVar9 = puVar10 + 2;
        puVar7 = puVar10 + 3;
        lVar8 = lVar8 + -0x10;
        puVar10 = puVar10 + 4;
        uVar12 = *(uint *)(&DAT_00256d68 + (ulong)(uVar12 & 0xff) * 4) ^ *puVar9 ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar12 >> 0x18) * 4);
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar11 & 0xff) * 4) ^ *puVar7 ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar11 >> 0x18) * 4);
      } while (0xf < lVar8);
    }
    if (3 < lVar8) {
      lVar8 = (long)param_2 + (param_3 - (long)puVar10);
      puVar9 = puVar10;
      uVar2 = uVar4;
      uVar3 = uVar12;
      uVar5 = param_1;
      do {
        uVar12 = uVar11;
        uVar4 = uVar3;
        param_1 = uVar2;
        puVar10 = puVar9 + 1;
        lVar8 = lVar8 + -4;
        uVar11 = *(uint *)(&DAT_00256d68 + (ulong)(uVar5 & 0xff) * 4) ^ *puVar9 ^
                 *(uint *)(&DAT_00257168 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257568 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_00257968 + (ulong)(uVar5 >> 0x18) * 4);
        puVar9 = puVar10;
        uVar2 = uVar4;
        uVar3 = uVar12;
        uVar5 = param_1;
      } while (3 < lVar8);
    }
    uVar2 = *(uint *)(&DAT_00256968 + (ulong)(param_1 & 0xff) * 4) ^ param_1 >> 8;
    uVar2 = *(uint *)(&DAT_00256968 + (ulong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_00256968 + (ulong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar2 & 0xff) * 4) ^ uVar2 >> 8 ^ uVar4;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar12 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8 ^ uVar12;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar12 & 0xff) * 4) ^ uVar12 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar11 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8 ^ uVar11;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar11 & 0xff) * 4) ^ uVar11 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    uVar4 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
    param_1 = *(uint *)(&DAT_00256968 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
  }
  for (; puVar10 != puVar1; puVar10 = (uint *)((long)puVar10 + 1)) {
    param_1 = *(uint *)(&DAT_00256968 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar10) * 4) ^
              param_1 >> 8;
  }
  return ~param_1;
}


// ===== 00ba5b5c  FUN_00ba5b5c =====

void FUN_00ba5b5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined2 param_6,undefined8 param_7)

{
  *param_1 = &PTR_FUN_00d47760;
  param_1[1] = param_2;
  param_1[7] = param_5 + -0x20;
  param_1[0x10] = FUN_00ba7f9c;
  param_1[0x11] = &DAT_00257d68;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined2 *)(param_1 + 4) = param_6;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = param_7;
  param_1[0x14] = param_1 + 0x15;
  param_1[0x12] = 0;
  return;
}


// ===== 00ba5bc0  FUN_00ba5bc0 =====

undefined8 FUN_00ba5bc0(long param_1)

{
  if (((*(uint *)(param_1 + 0x18) & 0xfffffffe) != 2) && (*(long *)(param_1 + 0x50) != 0)) {
    return *(undefined8 *)
            (*(long *)(*(long *)(param_1 + 0x30) + (*(ulong *)(param_1 + 0x48) / 0x2a) * 8) +
             (*(ulong *)(param_1 + 0x48) % 0x2a) * 0x60 + 0x48);
  }
  return 0;
}


// ===== 00ba5c28  FUN_00ba5c28 =====

long FUN_00ba5c28(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = 0;
  if (lVar5 != lVar9) {
    lVar7 = (lVar5 - lVar9 >> 3) * 0x2a + -1;
  }
  if (lVar7 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00ba7fb4(param_1);
    lVar9 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar9 != lVar5) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar6 = (undefined4 *)(*(long *)(lVar9 + (uVar1 / 0x2a) * 8) + (uVar1 % 0x2a) * 0x60);
    if (puVar6 != (undefined4 *)0x0) {
      uVar4 = *param_2;
      uVar10 = param_3[3];
      lVar9 = param_3[2];
      param_3[3] = 0;
      uVar3 = *param_3;
      lVar7 = param_3[1];
      param_3[1] = 0;
      param_3[2] = 0;
      uVar8 = param_4[2];
      uVar12 = param_4[1];
      uVar11 = *param_4;
      *puVar6 = uVar4;
      *(undefined8 *)(puVar6 + 8) = uVar10;
      *(long *)(puVar6 + 6) = lVar9;
      *(undefined8 *)(puVar6 + 2) = uVar3;
      *(long *)(puVar6 + 4) = lVar7;
      *(undefined8 *)(puVar6 + 0xc) = uVar12;
      *(undefined8 *)(puVar6 + 10) = uVar11;
      *(undefined8 *)(puVar6 + 0xe) = uVar8;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(long *)(puVar6 + 0x12) = lVar9 - lVar7;
      *(undefined1 *)(puVar6 + 0x14) = 0;
      *(undefined1 *)(puVar6 + 0x15) = 0;
      *(undefined1 *)(puVar6 + 0x16) = 0;
      *(undefined1 *)((long)puVar6 + 0x5a) = 0;
      puVar6[0x17] = 0;
      lVar7 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar7;
      *(long *)(param_1 + 0x28) = lVar7;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2a) * 8);
      lVar9 = *plVar2;
      lVar7 = 0;
      if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
        lVar7 = lVar9 + (uVar1 % 0x2a) * 0x60;
      }
      if (lVar7 == lVar9) {
        lVar7 = plVar2[-1] + 0xfc0;
      }
      return lVar7 + -0x60;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba5da8  FUN_00ba5da8 =====

void FUN_00ba5da8(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  bool bVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  undefined1 *local_80;
  
  lVar18 = *(long *)(param_2 + 0x50);
  do {
    if (lVar18 == 0) {
      uVar17 = 0;
      *(undefined1 *)param_1 = 0;
LAB_00ba6220:
      *(undefined1 *)(param_1 + 0x14) = uVar17;
      return;
    }
    puVar25 = (undefined4 *)
              (*(long *)(*(long *)(param_2 + 0x30) + (*(ulong *)(param_2 + 0x48) / 0x2a) * 8) +
              (*(ulong *)(param_2 + 0x48) % 0x2a) * 0x60);
    if ((*(byte *)(puVar25 + 0x15) & 1) != 0) {
      bVar8 = *(byte *)(puVar25 + 10);
joined_r0x00ba5ef4:
      if (((bVar8 & 1) == 0) && ((*(byte *)((long)puVar25 + 0x5a) & 1) == 0)) {
        uVar10 = *(undefined2 *)(param_2 + 0x24);
        *(undefined1 *)((long)puVar25 + 0x5a) = 1;
        *(undefined2 *)(puVar25 + 0x16) = uVar10;
        *(short *)(param_2 + 0x24) = *(short *)(param_2 + 0x24) + 1;
      }
      puVar16 = *(undefined1 **)(puVar25 + 4);
      puVar29 = *(undefined1 **)(puVar25 + 6);
      uVar20 = *(ulong *)(puVar25 + 0x10);
      uVar19 = (long)puVar29 - (long)puVar16;
      uVar3 = uVar19 - uVar20;
      if (uVar19 < uVar20) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0xba6260);
        (*pcVar13)();
      }
      if (uVar3 <= param_4) {
        param_4 = uVar3;
      }
      puVar28 = (undefined1 *)0x0;
      if (puVar29 != puVar16) {
        puVar28 = puVar16;
      }
      if (param_4 != 0xffffffffffffffff) {
        uVar3 = param_4;
      }
      puVar1 = puVar28 + uVar19;
      uVar10 = *(undefined2 *)(puVar25 + 2);
      puVar27 = (undefined1 *)0x0;
      if (uVar3 != 0) {
        puVar27 = puVar28 + uVar20;
      }
      uVar7 = puVar25[3];
      puVar2 = puVar27 + uVar3;
      bVar14 = puVar28 == puVar27;
      if (bVar14 && puVar2 == puVar1) {
        local_80 = *(undefined1 **)(puVar25 + 8);
        *(ulong *)(puVar25 + 4) = 0;
        *(undefined8 *)(puVar25 + 6) = 0;
        *(undefined8 *)(puVar25 + 8) = 0;
      }
      else if (uVar3 == 0) {
        local_80 = (undefined1 *)0x0;
        puVar29 = (undefined1 *)0x0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        if ((long)puVar2 - (long)puVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d34c0();
        }
        puVar16 = (undefined1 *)operator_new((long)puVar2 - (long)puVar27);
        local_80 = puVar16 + ((long)puVar2 - (long)puVar27);
        uVar20 = uVar3 - 1;
        uVar19 = uVar20;
        if ((ulong)-(long)puVar16 < uVar20) {
          uVar19 = -(long)puVar16;
        }
        uVar19 = uVar19 + 1;
        puVar29 = puVar16;
        if (0x20 < uVar19) {
          if ((ulong)-(long)puVar16 < uVar20) {
            uVar20 = -(long)puVar16;
          }
          if ((puVar16 <= puVar16 + uVar20 && puVar27 <= puVar27 + uVar20) &&
             (0x1f < (ulong)((long)puVar16 - (long)puVar27))) {
            puVar22 = (undefined8 *)(puVar16 + 0x10);
            uVar20 = 0x20;
            if ((uVar19 & 0x1f) != 0) {
              uVar20 = uVar19 & 0x1f;
            }
            puVar23 = (undefined8 *)(puVar27 + 0x10);
            lVar18 = uVar19 - uVar20;
            puVar27 = puVar27 + lVar18;
            puVar29 = puVar16 + lVar18;
            do {
              puVar12 = puVar23 + -1;
              uVar24 = puVar23[-2];
              uVar30 = puVar23[1];
              uVar26 = *puVar23;
              lVar18 = lVar18 + -0x20;
              puVar23 = puVar23 + 4;
              puVar22[-1] = *puVar12;
              puVar22[-2] = uVar24;
              puVar22[1] = uVar30;
              *puVar22 = uVar26;
              puVar22 = puVar22 + 4;
            } while (lVar18 != 0);
          }
        }
        lVar18 = (long)puVar16 - (long)puVar29;
        do {
          if (puVar29 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar28 = puVar27 + 1;
          lVar18 = lVar18 + -1;
          *puVar29 = *puVar27;
          puVar29 = puVar29 + 1;
          puVar27 = puVar28;
        } while (puVar28 != puVar2);
        puVar29 = puVar16 + -lVar18;
      }
      iVar4 = puVar25[0x17];
      puVar25[0x17] = iVar4 + 1;
      uVar19 = *(ulong *)(param_2 + 0x78);
      uVar20 = uVar19 - ((long)puVar29 - (long)puVar16);
      *(ulong *)(param_2 + 0x78) = uVar20;
      if ((*(ulong *)(param_2 + 0x80) < uVar19) && (uVar20 <= *(ulong *)(param_2 + 0x80))) {
        (**(code **)(param_2 + 0x68))(param_2 + 0x58);
      }
      lVar18 = *(long *)(param_2 + 8);
      uVar19 = *(ulong *)(lVar18 + 0x90);
      uVar20 = uVar19 - ((long)puVar29 - (long)puVar16);
      *(ulong *)(lVar18 + 0x90) = uVar20;
      if ((*(ulong *)(lVar18 + 0x98) < uVar19) && (uVar20 <= *(ulong *)(lVar18 + 0x98))) {
        (**(code **)(lVar18 + 0x80))(lVar18 + 0x70);
      }
      if (*(char *)((long)puVar25 + 0x5a) == '\x01') {
        uVar21 = *(undefined2 *)(puVar25 + 0x16);
      }
      else {
        uVar21 = 0;
      }
      if ((*(byte *)(puVar25 + 0x15) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uVar5 = *puVar25;
      uVar6 = puVar25[0x14];
      uVar9 = *(undefined1 *)(puVar25 + 10);
      uVar11 = *(undefined2 *)((long)puVar25 + 0x2a);
      uVar24 = *(undefined8 *)(puVar25 + 0xc);
      if (puVar2 == puVar1) {
        uVar26 = *(undefined8 *)(puVar25 + 0xe);
        FUN_00ba6278(param_2 + 0x28);
        if (*(int *)(param_2 + 0x18) == 1) {
          *(undefined4 *)(param_2 + 0x18) = 2;
        }
      }
      else {
        uVar26 = 0;
        *(ulong *)(puVar25 + 0x10) = *(long *)(puVar25 + 0x10) + uVar3;
        *(ulong *)(puVar25 + 0x12) = *(long *)(puVar25 + 0x12) - uVar3;
      }
      *(bool *)(param_1 + 0xc) = bVar14;
      param_1[5] = uVar7;
      *(bool *)((long)param_1 + 0x31) = puVar2 == puVar1;
      *(undefined4 *)((long)param_1 + 0x3a) = 0xaaaaaaaa;
      *(undefined2 *)((long)param_1 + 0x3e) = 0xaaaa;
      uVar17 = 1;
      *param_1 = uVar5;
      *(undefined2 *)(param_1 + 2) = uVar10;
      *(undefined2 *)((long)param_1 + 10) = uVar21;
      param_1[3] = uVar6;
      param_1[4] = iVar4;
      *(undefined1 **)(param_1 + 6) = puVar16;
      *(undefined1 **)(param_1 + 8) = puVar29;
      *(undefined1 **)(param_1 + 10) = local_80;
      *(undefined1 *)((long)param_1 + 0x32) = uVar9;
      *(undefined2 *)(param_1 + 0xe) = uVar11;
      *(undefined8 *)(param_1 + 0x10) = uVar24;
      *(undefined8 *)(param_1 + 0x12) = uVar26;
      goto LAB_00ba6220;
    }
    if (param_3 < *(long *)(puVar25 + 0xc)) {
      lVar18 = 0x1c;
      if (*(char *)(puVar25 + 10) == '\0') {
        lVar18 = 0x20;
      }
      uVar7 = *(undefined4 *)(param_2 + lVar18);
      *(undefined1 *)(puVar25 + 0x15) = 1;
      puVar25[0x14] = uVar7;
      *(int *)(param_2 + lVar18) = *(int *)(param_2 + lVar18) + 1;
      bVar8 = *(byte *)(puVar25 + 10);
      goto joined_r0x00ba5ef4;
    }
    uVar3 = *(ulong *)(param_2 + 0x78);
    uVar19 = uVar3 - *(long *)(puVar25 + 0x12);
    *(ulong *)(param_2 + 0x78) = uVar19;
    if ((*(ulong *)(param_2 + 0x80) < uVar3) && (uVar19 <= *(ulong *)(param_2 + 0x80))) {
      (**(code **)(param_2 + 0x68))(param_2 + 0x58);
    }
    lVar18 = *(long *)(param_2 + 8);
    uVar3 = *(ulong *)(lVar18 + 0x90);
    uVar19 = uVar3 - *(long *)(puVar25 + 0x12);
    *(ulong *)(lVar18 + 0x90) = uVar19;
    if ((*(ulong *)(lVar18 + 0x98) < uVar3) && (uVar19 <= *(ulong *)(lVar18 + 0x98))) {
      (**(code **)(lVar18 + 0x80))(lVar18 + 0x70);
    }
    if (*(long *)(puVar25 + 0xe) != 0) {
      plVar15 = *(long **)(*(long *)(param_2 + 8) + 0x18);
      (**(code **)(*plVar15 + 0xb8))(plVar15,*(long *)(puVar25 + 0xe),0);
      plVar15 = *(long **)(*(long *)(param_2 + 8) + 0x18);
      (**(code **)(*plVar15 + 200))(plVar15,*(undefined8 *)(puVar25 + 0xe));
    }
    FUN_00ba6278(param_2 + 0x28);
    lVar18 = *(long *)(param_2 + 0x50);
  } while( true );
}


// ===== 00ba6278  FUN_00ba6278 =====

void FUN_00ba6278(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 8) + (uVar3 / 0x2a) * 8) + (uVar3 % 0x2a) * 0x60;
  if (lVar4 != 0) {
    pvVar1 = *(void **)(lVar4 + 0x10);
    if (pvVar1 != (void *)0x0) {
      if (*(long *)(lVar4 + 0x18) - 1U < (ulong)(*(long *)(lVar4 + 0x18) - (long)pvVar1))
      goto LAB_00ba6350;
      *(void **)(lVar4 + 0x18) = pvVar1;
      operator_delete(pvVar1);
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
    }
    *(ulong *)(param_1 + 0x20) = uVar3 + 1;
    *(long *)(param_1 + 0x28) = lVar2 + -1;
    if (0x53 < uVar3 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x2a;
    }
    return;
  }
LAB_00ba6350:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba6378  FUN_00ba6378 =====

undefined8 FUN_00ba6378(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_1[10] == 0) {
    return 0;
  }
  piVar4 = (int *)(*(long *)(param_1[6] + ((ulong)param_1[9] / 0x2a) * 8) +
                  ((ulong)param_1[9] % 0x2a) * 0x60);
  if (*piVar4 == param_2) {
    uVar1 = param_1[0xf];
    uVar3 = uVar1 - *(long *)(piVar4 + 0x12);
    param_1[0xf] = uVar3;
    if (((ulong)param_1[0x10] < uVar1) && (uVar3 <= (ulong)param_1[0x10])) {
      (*(code *)param_1[0xd])(param_1 + 0xb);
    }
    lVar2 = param_1[1];
    uVar1 = *(ulong *)(lVar2 + 0x90);
    uVar3 = uVar1 - *(long *)(piVar4 + 0x12);
    *(ulong *)(lVar2 + 0x90) = uVar3;
    if ((*(ulong *)(lVar2 + 0x98) < uVar1) && (uVar3 <= *(ulong *)(lVar2 + 0x98))) {
      (**(code **)(lVar2 + 0x80))(lVar2 + 0x70);
    }
    if (*(long *)(piVar4 + 0xe) != 0) {
      (**(code **)(**(long **)(param_1[1] + 0x18) + 0xb8))
                (*(long **)(param_1[1] + 0x18),*(long *)(piVar4 + 0xe),0);
      (**(code **)(**(long **)(param_1[1] + 0x18) + 200))
                (*(long **)(param_1[1] + 0x18),*(undefined8 *)(piVar4 + 0xe));
    }
    FUN_00ba6278(param_1 + 5);
    *(undefined1 *)(*(long *)param_1[2] + 0x29) = 0;
    if ((int)param_1[3] == 1) {
      *(undefined4 *)(param_1 + 3) = 2;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      if (lVar2 != 0) {
        return 1;
      }
    }
    FUN_00ba9548(param_1[2]);
    return 1;
  }
  return 0;
}


// ===== 00ba64e0  FUN_00ba64e0 =====

void FUN_00ba64e0(long param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x38);
  plVar9 = (long *)(lVar4 + (uVar3 / 0x2a) * 8);
  if (lVar4 == lVar7) {
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar9 + (uVar3 % 0x2a) * 0x60;
  }
  auVar13._8_8_ = lVar10;
  auVar13._0_8_ = plVar9;
  lVar12 = *(long *)(param_1 + 0x50);
  lVar10 = lVar12;
LAB_00ba6584:
  do {
    lVar11 = auVar13._8_8_;
    plVar9 = auVar13._0_8_;
    lVar8 = lVar11 + -0xfc0;
    do {
      if (lVar4 == lVar7) {
        if (lVar11 == 0) goto LAB_00ba66a4;
      }
      else if (lVar11 == *(long *)(lVar4 + ((uVar3 + lVar10) / 0x2a) * 8) +
                         ((uVar3 + lVar10) % 0x2a) * 0x60) {
LAB_00ba66a4:
        if (lVar10 == 0) {
          bVar1 = false;
          *(undefined4 *)(param_1 + 0x18) = 2;
        }
        else {
          bVar1 = *(long *)(*(long *)(lVar4 + (uVar3 / 0x2a) * 8) + (uVar3 % 0x2a) * 0x60 + 0x40) !=
                  0;
          uVar5 = 1;
          if (!bVar1) {
            uVar5 = 2;
          }
          *(undefined4 *)(param_1 + 0x18) = uVar5;
        }
        if (lVar12 == 0) {
          return;
        }
        if (bVar1) {
          return;
        }
        FUN_00ba9548(*(undefined8 *)(param_1 + 0x10));
        return;
      }
      if (*(long *)(lVar11 + 0x40) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x78);
        uVar6 = uVar3 - *(long *)(lVar11 + 0x48);
        *(ulong *)(param_1 + 0x78) = uVar6;
        if ((*(ulong *)(param_1 + 0x80) < uVar3) && (uVar6 <= *(ulong *)(param_1 + 0x80))) {
          (**(code **)(param_1 + 0x68))(param_1 + 0x58);
        }
        lVar4 = *(long *)(param_1 + 8);
        uVar3 = *(ulong *)(lVar4 + 0x90);
        uVar6 = uVar3 - *(long *)(lVar11 + 0x48);
        *(ulong *)(lVar4 + 0x90) = uVar6;
        if ((*(ulong *)(lVar4 + 0x98) < uVar3) && (uVar6 <= *(ulong *)(lVar4 + 0x98))) {
          (**(code **)(lVar4 + 0x80))(lVar4 + 0x70);
        }
        if (*(long *)(lVar11 + 0x38) != 0) {
          plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x18);
          (**(code **)(*plVar2 + 0xb8))(plVar2,*(long *)(lVar11 + 0x38),0);
          plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x18);
          (**(code **)(*plVar2 + 200))(plVar2,*(undefined8 *)(lVar11 + 0x38));
        }
        auVar13 = FUN_00ba6720(param_1 + 0x28,plVar9,lVar11);
        uVar3 = *(ulong *)(param_1 + 0x48);
        lVar10 = *(long *)(param_1 + 0x50);
        lVar4 = *(long *)(param_1 + 0x30);
        lVar7 = *(long *)(param_1 + 0x38);
        goto LAB_00ba6584;
      }
      lVar8 = lVar8 + 0x60;
      lVar11 = lVar11 + 0x60;
    } while (*plVar9 != lVar8);
    auVar13._8_8_ = plVar9[1];
    auVar13._0_8_ = plVar9 + 1;
  } while( true );
}


// ===== 00ba6720  FUN_00ba6720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ba6720(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *local_50;
  long local_48;
  
  uVar13 = *(ulong *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar14 = uVar13 + *(long *)(param_1 + 0x28);
  plVar1 = (long *)(lVar9 + (uVar14 / 0x2a) * 8);
  if (lVar9 == lVar2) {
    if (param_3 == 0) goto LAB_00ba6c7c;
    lVar12 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13 >> 1;
    plVar4 = (long *)(lVar9 + (SUB168(auVar3 * ZEXT816(0xc30c30c30c30c30d),8) >> 1 &
                              0x3ffffffffffffff8));
    lVar6 = lVar12;
    if (param_3 == 0) goto LAB_00ba6864;
LAB_00ba67c8:
    lVar10 = *plVar4;
    lVar11 = lVar6 - lVar10 >> 5;
    uVar13 = ((long)param_2 - (long)plVar4 >> 3) * 0x2a +
             (param_3 - *param_2 >> 5) * -0x5555555555555555 + lVar11 * 0x5555555555555555;
    lVar12 = lVar6;
    plVar8 = plVar4;
    if (uVar13 != 0) {
      uVar7 = uVar13 + lVar11 * -0x5555555555555555;
      if ((long)uVar7 < 1) {
        lVar12 = 0x29 - uVar7;
        lVar10 = SUB168(SEXT816(lVar12) * SEXT816(0x3cf3cf3cf3cf3cf3),8) - lVar12;
        plVar8 = plVar4 + ((lVar10 >> 5) - (lVar10 >> 0x3f));
        lVar10 = *plVar8;
        lVar12 = lVar10 + (((SUB168(SEXT816(lVar12) * ZEXT816(0xc30c30c30c30c30d),8) >> 5) -
                           (lVar12 / -0x5800000000000000 + (lVar12 >> 0x3f))) * 0x2a - lVar12) *
                          0x60 + 0xf60;
      }
      else {
        plVar8 = plVar4 + uVar7 / 0x2a;
        lVar10 = *plVar8;
        lVar12 = lVar10 + (uVar7 % 0x2a) * 0x60;
      }
      if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar13) {
        lVar10 = lVar12 - lVar10;
        if (lVar10 + 0x5f < 0 == SCARRY8(lVar10,0x5f)) {
          uVar13 = (lVar10 >> 5) * -0x5555555555555555 + 1;
          plVar4 = plVar8 + uVar13 / 0x2a;
          lVar6 = *plVar4 + (uVar13 % 0x2a) * 0x60;
          if (lVar9 != lVar2) goto LAB_00ba6934;
LAB_00ba6bac:
          lVar9 = 0;
        }
        else {
          uVar13 = (lVar10 >> 5) * 0x5555555555555555 + 0x28;
          uVar7 = uVar13 / 0x2a;
          plVar4 = plVar8 + -uVar7;
          lVar6 = *plVar4 + (uVar7 * 0x2a - uVar13) * 0x60 + 0xf60;
          if (lVar9 == lVar2) goto LAB_00ba6bac;
LAB_00ba6934:
          lVar9 = *plVar1 + (uVar14 % 0x2a) * 0x60;
        }
        local_50 = plVar8;
        local_48 = lVar12;
        FUN_00ba8e94(plVar4,lVar6,plVar1,lVar9,&local_50);
        if (local_48 != 0) {
          pvVar5 = *(void **)(local_48 + 0x10);
          if (pvVar5 != (void *)0x0) {
            if (*(long *)(local_48 + 0x18) - 1U < (ulong)(*(long *)(local_48 + 0x18) - (long)pvVar5)
               ) goto LAB_00ba6c68;
            *(void **)(local_48 + 0x18) = pvVar5;
            operator_delete(pvVar5);
          }
          lVar2 = *(long *)(param_1 + 0x10);
          lVar12 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar12 + -1;
          lVar9 = 0;
          if (lVar2 != *(long *)(param_1 + 8)) {
            lVar9 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x2a + -1;
          }
          if ((lVar9 - (lVar12 + *(long *)(param_1 + 0x20))) + 1U < 0x54) {
            return;
          }
          operator_delete(*(void **)(lVar2 + -8));
          lVar9 = *(long *)(param_1 + 0x10) + -8;
          if (lVar9 != 0) {
            *(long *)(param_1 + 0x10) = lVar9;
            return;
          }
        }
        goto LAB_00ba6c68;
      }
    }
  }
  else {
    if (param_3 == *plVar1 + (uVar14 % 0x2a) * 0x60) {
LAB_00ba6c7c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:2327: libc++ Hardening assertion __f != end() failed: deque::erase(iterator) called with a non-dereferenceable iterator\n"
                );
    }
    plVar4 = (long *)(lVar9 + (uVar13 / 0x2a) * 8);
    lVar12 = *plVar4 + (uVar13 % 0x2a) * 0x60;
    lVar6 = lVar12;
    if (param_3 != lVar12) goto LAB_00ba67c8;
LAB_00ba6864:
    lVar10 = *plVar4;
    plVar8 = plVar4;
    lVar6 = lVar12;
  }
  lVar10 = lVar12 - lVar10;
  if (lVar10 + 0x5f < 0 == SCARRY8(lVar10,0x5f)) {
    uVar14 = (lVar10 >> 5) * -0x5555555555555555 + 1;
    local_50 = plVar8 + uVar14 / 0x2a;
    local_48 = *local_50 + (uVar14 % 0x2a) * 0x60;
  }
  else {
    uVar14 = (lVar10 >> 5) * 0x5555555555555555 + 0x28;
    uVar13 = uVar14 / 0x2a;
    local_50 = plVar8 + -uVar13;
    local_48 = *local_50 + (uVar13 * 0x2a - uVar14) * 0x60 + 0xf60;
  }
  FUN_00ba8be4(plVar4,lVar6,plVar8,lVar12,&local_50);
  if (lVar6 == 0) {
LAB_00ba6c68:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  pvVar5 = *(void **)(lVar6 + 0x10);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)(lVar6 + 0x18) - 1U < (ulong)(*(long *)(lVar6 + 0x18) - (long)pvVar5))
    goto LAB_00ba6c68;
    *(void **)(lVar6 + 0x18) = pvVar5;
    operator_delete(pvVar5);
  }
  uVar14 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
  *(ulong *)(param_1 + 0x20) = uVar14;
  if (0x53 < uVar14) {
    operator_delete((void *)**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x2a;
  }
  return;
}


// ===== 00ba6c90  FUN_00ba6c90 =====

void FUN_00ba6c90(undefined8 param_1,long param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *pvVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_88;
  undefined1 local_87;
  undefined2 local_86;
  undefined4 local_84;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  int local_34;
  
  uVar3 = *(undefined2 *)(param_4 + 0x10);
  uVar2 = *param_4;
  lVar6 = 0x7fffffffffffffff;
  if (param_4[0x18] == '\0') {
    uVar3 = 0xffff;
  }
  if (((param_4[8] != '\x01') || (param_2 == 0x7fffffffffffffff)) ||
     (*(int *)(param_4 + 4) == 0x7fffffff)) goto LAB_00ba6d24;
  if (param_2 != -0x8000000000000000) {
    param_2 = param_2 + (long)*(int *)(param_4 + 4) * 1000;
    if (param_2 == 0x7fffffffffffffff) goto LAB_00ba6d24;
    if (param_2 != -0x8000000000000000) {
      lVar6 = param_2 + 1000;
      goto LAB_00ba6d24;
    }
  }
  lVar6 = -0x8000000000000000;
LAB_00ba6d24:
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  plVar4 = (long *)FUN_00ba6e44(param_1,*(undefined2 *)param_3);
  local_70 = *param_3;
  pvVar1 = (void *)param_3[1];
  uStack_58 = param_3[3];
  lVar5 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[1] = 0;
  local_87 = 0xaa;
  local_84 = 0xaaaaaaaa;
  local_88 = uVar2;
  local_86 = uVar3;
  local_80 = lVar6;
  uStack_78 = uVar7;
  local_68 = pvVar1;
  local_60 = (void *)lVar5;
  lVar6 = (**(code **)(*plVar4 + 0x18))();
  lVar5 = lVar5 - (long)pvVar1;
  plVar4[0xf] = lVar5 + plVar4[0xf];
  *(long *)(plVar4[1] + 0x90) = *(long *)(plVar4[1] + 0x90) + lVar5;
  local_34 = *(int *)(plVar4[1] + 0x24);
  *(int *)(plVar4[1] + 0x24) = local_34 + 1;
  FUN_00ba5c28(plVar4 + 5,&local_34,&local_70,&local_88);
  if (lVar6 == 0) {
    FUN_00ba9714(plVar4[2]);
  }
  if (local_68 != (void *)0x0) {
    if ((long)local_60 - 1U < (ulong)((long)local_60 - (long)local_68)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}


// ===== 00ba6e44  FUN_00ba6e44 =====

undefined8 * FUN_00ba6e44(long param_1,ushort param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  
  puVar5 = (undefined8 *)(param_1 + 0xa8);
  puVar4 = (undefined8 *)*puVar5;
  puVar2 = puVar4;
  puVar6 = puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      while (*(ushort *)(puVar2 + 4) <= param_2) {
        if (param_2 <= *(ushort *)(puVar2 + 4)) {
          if (puVar2 != puVar5) goto LAB_00ba6fc4;
          goto LAB_00ba6ec8;
        }
        puVar6 = puVar2 + 1;
        puVar2 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_00ba6ec8;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
LAB_00ba6ec8:
    do {
      puVar2 = puVar4;
      puVar6 = puVar2;
      if (*(ushort *)(puVar2 + 4) <= param_2) {
        if (param_2 <= *(ushort *)(puVar2 + 4)) goto LAB_00ba6fc4;
        puVar4 = (undefined8 *)puVar2[1];
        if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
          puVar5 = puVar2 + 1;
          break;
        }
        goto LAB_00ba6ec8;
      }
      puVar4 = (undefined8 *)*puVar2;
      puVar5 = puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
  puVar2 = (undefined8 *)operator_new(0xb0);
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(ushort *)(param_1 + 0x20);
  *(ushort *)(puVar2 + 4) = param_2;
  puVar2[5] = &PTR_FUN_00d477e8;
  puVar2[6] = param_1;
  plVar3 = (long *)operator_new(0x30);
  dVar8 = DAT_001f5658;
  dVar7 = (double)uVar1;
  puVar2[0x10] = param_1;
  puVar2[0x11] = (ulong)param_2;
  puVar2[0x12] = FUN_00ba90ec;
  puVar2[0x13] = &DAT_00257d88;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar6;
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  *plVar3 = param_1 + 0x28;
  plVar3[1] = (long)(puVar2 + 5);
  *(ushort *)(plVar3 + 2) = param_2;
  *(ushort *)((long)plVar3 + 0x12) = uVar1;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar2[7] = plVar3;
  puVar2[8] = 0;
  *(undefined8 *)((long)puVar2 + 0x46) = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  plVar3[3] = (long)(1.0 / dVar8);
  *puVar5 = puVar2;
  puVar4 = puVar2;
  if (**(long **)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = **(long **)(param_1 + 0xa0);
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_005d5b94(*(undefined8 *)(param_1 + 0xa8),puVar4);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
LAB_00ba6fc4:
  return puVar2 + 5;
}


// ===== 00ba7004  FUN_00ba7004 =====

void FUN_00ba7004(long param_1)

{
  FUN_00ba915c(param_1 + 0x28);
  return;
}


// ===== 00ba7010  FUN_00ba7010 =====

void FUN_00ba7010(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00ba6e44(param_1,param_2);
  FUN_00ba6378(uVar1,param_3);
  return;
}


// ===== 00ba7040  FUN_00ba7040 =====

void FUN_00ba7040(undefined8 param_1,undefined2 param_2)

{
  FUN_00ba6e44(param_1,param_2);
  FUN_00ba64e0();
  return;
}


// ===== 00ba7060  FUN_00ba7060 =====

bool FUN_00ba7060(long param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0xa0);
  if (plVar4 == (long *)(param_1 + 0xa8)) {
    bVar2 = false;
  }
  else {
    do {
      bVar2 = (int)plVar4[8] == 2;
      if (bVar2) {
        return bVar2;
      }
      plVar5 = plVar4;
      plVar1 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = plVar5 != (long *)*plVar4;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    } while (plVar4 != (long *)(param_1 + 0xa8));
  }
  return bVar2;
}


// ===== 00ba70c4  FUN_00ba70c4 =====

void FUN_00ba70c4(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  bool bVar3;
  undefined2 *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_2 + 0xa0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (plVar5 == (long *)(param_2 + 0xa8)) {
      return;
    }
    if ((int)plVar5[8] == 2) {
      *(undefined4 *)(plVar5 + 8) = 3;
      puVar1 = (undefined2 *)param_1[1];
      if (puVar1 < (undefined2 *)param_1[2]) {
        if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puVar1 + 1;
        *puVar1 = (short)plVar5[4];
      }
      else {
        puVar4 = (undefined2 *)FUN_00ba7d78(param_1,plVar5 + 4);
      }
      param_1[1] = puVar4;
    }
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = plVar6 != (long *)*plVar5;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  } while( true );
}


// ===== 00ba7198  FUN_00ba7198 =====

void FUN_00ba7198(long param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0xa0);
  while (plVar4 != (long *)(param_1 + 0xa8)) {
    if ((int)plVar4[8] == 3) {
      *(undefined8 *)((long)plVar4 + 0x46) = 0;
      plVar4[8] = 0;
      if (plVar4[0xf] != 0) {
        lVar3 = *(long *)(plVar4[0xb] + ((ulong)plVar4[0xe] / 0x2a) * 8) +
                ((ulong)plVar4[0xe] % 0x2a) * 0x60;
        plVar4[0x14] = (*(long *)(lVar3 + 0x18) -
                       (*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x10))) + plVar4[0x14];
        *(long *)(plVar4[6] + 0x90) =
             (*(long *)(lVar3 + 0x18) - (*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x10))) +
             *(long *)(plVar4[6] + 0x90);
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x18) - *(long *)(lVar3 + 0x10);
        if (*(char *)(lVar3 + 0x54) == '\x01') {
          *(undefined1 *)(lVar3 + 0x54) = 0;
        }
        if (*(char *)(lVar3 + 0x5a) == '\x01') {
          *(undefined1 *)(lVar3 + 0x5a) = 0;
        }
        *(undefined4 *)(lVar3 + 0x5c) = 0;
        FUN_00ba9714(plVar4[7]);
      }
    }
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


