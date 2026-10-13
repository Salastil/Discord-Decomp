// ===== 00c1cd80  FUN_00c1cd80 =====

void FUN_00c1cd80(long param_1)

{
  FUN_00c1cb70(param_1 + -0x10);
  return;
}


// ===== 00c1cd8c  FUN_00c1cd8c =====

void FUN_00c1cd8c(long param_1)

{
  FUN_00c1cb70((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c1cdc0  FUN_00c1cdc0 =====

void FUN_00c1cdc0(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x30);
  return;
}


// ===== 00c1cde4  FUN_00c1cde4 =====

bool FUN_00c1cde4(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 6);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c1ce3c  FUN_00c1ce3c =====

void FUN_00c1ce3c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_00d4b460;
  param_1[1] = &PTR_FUN_00d4b4f8;
  param_1[2] = &PTR_FUN_00d4b528;
  local_c0 = FUN_00c1dc34;
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
    pcStack_38 = FUN_00c1dc70;
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


// ===== 00c1cf5c  FUN_00c1cf5c =====

void FUN_00c1cf5c(void *param_1)

{
  FUN_00c1ce3c();
  operator_delete(param_1);
  return;
}


// ===== 00c1cf8c  FUN_00c1cf8c =====

void FUN_00c1cf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1cf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return;
}


// ===== 00c1cfa0  FUN_00c1cfa0 =====

void FUN_00c1cfa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return;
}


// ===== 00c1cfb4  FUN_00c1cfb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c1cfb4(long param_1)

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


// ===== 00c1d0c4  FUN_00c1d0c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c1d0c4(long param_1,undefined1 param_2)

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


// ===== 00c1d1ec  FUN_00c1d1ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c1d1ec(long param_1)

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


// ===== 00c1d2f0  FUN_00c1d2f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d2f0(long param_1,undefined8 param_2,undefined8 param_3)

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


// ===== 00c1d42c  FUN_00c1d42c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d42c(long param_1,undefined8 param_2)

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


// ===== 00c1d568  FUN_00c1d568 =====

void FUN_00c1d568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  return;
}


// ===== 00c1d57c  FUN_00c1d57c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c1d57c(long param_1)

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


// ===== 00c1d680  FUN_00c1d680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d680(long param_1,undefined4 param_2)

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


// ===== 00c1d7bc  FUN_00c1d7bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d7bc(long param_1)

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


// ===== 00c1d8b8  FUN_00c1d8b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d8b8(long param_1,undefined8 param_2)

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


// ===== 00c1d9f4  FUN_00c1d9f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1d9f4(long param_1,undefined8 param_2)

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


// ===== 00c1db30  FUN_00c1db30 =====

bool FUN_00c1db30(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x30) == 1;
}


// ===== 00c1db48  FUN_00c1db48 =====

void FUN_00c1db48(long param_1)

{
  FUN_00c1d8b8(param_1 + -8);
  return;
}


// ===== 00c1db54  FUN_00c1db54 =====

void FUN_00c1db54(long param_1)

{
  FUN_00c1d9f4(param_1 + -8);
  return;
}


// ===== 00c1db60  FUN_00c1db60 =====

void FUN_00c1db60(long param_1)

{
  FUN_00c1ce3c(param_1 + -8);
  return;
}


// ===== 00c1db6c  FUN_00c1db6c =====

void FUN_00c1db6c(long param_1)

{
  FUN_00c1ce3c((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c1dba0  FUN_00c1dba0 =====

void FUN_00c1dba0(long param_1)

{
  FUN_00c1ce3c(param_1 + -0x10);
  return;
}


// ===== 00c1dbac  FUN_00c1dbac =====

void FUN_00c1dbac(long param_1)

{
  FUN_00c1ce3c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c1dbe0  FUN_00c1dbe0 =====

void FUN_00c1dbe0(long param_1)

{
  FUN_00c1d2f0(param_1 + -0x10);
  return;
}


// ===== 00c1dbec  FUN_00c1dbec =====

void FUN_00c1dbec(long param_1)

{
  FUN_00c1d42c(param_1 + -0x10);
  return;
}


// ===== 00c1dbf8  FUN_00c1dbf8 =====

void FUN_00c1dbf8(long param_1)

{
  FUN_00c1d7bc(param_1 + -0x10);
  return;
}


// ===== 00c1dc04  FUN_00c1dc04 =====

void FUN_00c1dc04(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1dc0c);
  (*pcVar1)();
}


// ===== 00c1dc0c  FUN_00c1dc0c =====

void FUN_00c1dc0c(long param_1)

{
  FUN_00c1ce3c(param_1 + -8);
  return;
}


// ===== 00c1dc18  FUN_00c1dc18 =====

void FUN_00c1dc18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1dc20);
  (*pcVar1)();
}


// ===== 00c1dc20  FUN_00c1dc20 =====

void FUN_00c1dc20(long param_1)

{
  FUN_00c1ce3c(param_1 + -0x10);
  return;
}


// ===== 00c1dc2c  FUN_00c1dc2c =====

void FUN_00c1dc2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1dc34);
  (*pcVar1)();
}


// ===== 00c1dc34  FUN_00c1dc34 =====

void FUN_00c1dc34(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 00c1dc70  FUN_00c1dc70 =====

void FUN_00c1dc70(undefined8 *param_1)

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


// ===== 00c1dcb4  FUN_00c1dcb4 =====

void FUN_00c1dcb4(long param_1)

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


// ===== 00c1ddf0  FUN_00c1ddf0 =====

void FUN_00c1ddf0(undefined8 *param_1)

{
  FUN_00c1bba0(*param_1,*(undefined8 *)param_1[1],*(undefined4 *)param_1[2]);
  return;
}


// ===== 00c1de08  FUN_00c1de08 =====

void FUN_00c1de08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_00c1c560(uVar1,*(undefined8 *)param_1[1]);
  FUN_00c1bba0(uVar1,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3]);
  return;
}


// ===== 00c1de4c  FUN_00c1de4c =====

void FUN_00c1de4c(undefined8 *param_1)

{
  FUN_00c1dfa8(*(undefined8 *)*param_1);
  return;
}


// ===== 00c1de5c  FUN_00c1de5c =====

long * FUN_00c1de5c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)operator_new(8);
  puVar2 = (undefined8 *)*param_1;
  *plVar1 = (long)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
  }
  return plVar1;
}


// ===== 00c1deac  FUN_00c1deac =====

void FUN_00c1deac(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00c1def8  FUN_00c1def8 =====

int FUN_00c1def8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *local_28;
  
  FUN_00c1e3e0(param_1,1);
  *param_1 = &PTR_FUN_00d4b580;
  param_1[1] = &PTR_FUN_00d4b628;
  param_1[2] = &PTR_FUN_00d4b658;
  FUN_00adfeb8(param_1 + 7);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x20),(pthread_mutexattr_t *)&local_28);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  return iVar1;
}


// ===== 00c1df7c  FUN_00c1df7c =====

void FUN_00c1df7c(long param_1)

{
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}


// ===== 00c1df88  FUN_00c1df88 =====

long FUN_00c1df88(long param_1)

{
  return param_1 + 0x38;
}


// ===== 00c1df94  FUN_00c1df94 =====

long FUN_00c1df94(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != -0x38) {
    lVar1 = param_1 + 0x58;
  }
  return lVar1;
}


// ===== 00c1dfa8  FUN_00c1dfa8 =====

int FUN_00c1dfa8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  for (puVar3 = *(undefined8 **)(param_1 + 0x128); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_2);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  return iVar2;
}


// ===== 00c1e00c  FUN_00c1e00c =====

undefined8 FUN_00c1e00c(void)

{
  return 1;
}


// ===== 00c1e018  FUN_00c1e018 =====

void FUN_00c1e018(long param_1)

{
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c1e02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x140) + 0x10))();
    return;
  }
  return;
}


// ===== 00c1e034  FUN_00c1e034 =====

long * FUN_00c1e034(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_28;
  
  local_28 = param_2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  if (puVar1 < *(undefined8 **)(param_1 + 0x138)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar4 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar4 = (undefined8 *)FUN_00c1e2d4(param_1 + 0x128,&local_28);
  }
  lVar5 = *(long *)(param_1 + 0x128);
  *(undefined8 **)(param_1 + 0x130) = puVar4;
  uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  plVar3 = (long *)(ulong)uVar2;
  if (((long)puVar4 - lVar5 == 8) && (plVar3 = *(long **)(param_1 + 0x140), plVar3 != (long *)0x0))
  {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,1);
  }
  return plVar3;
}


// ===== 00c1e0dc  FUN_00c1e0dc =====

long * FUN_00c1e0dc(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  plVar8 = *(long **)(param_1 + 0x128);
  plVar7 = *(long **)(param_1 + 0x130);
  plVar3 = plVar8;
  if (plVar8 == plVar7) {
joined_r0x00c1e1b8:
    if (plVar3 != plVar7) {
      memmove(plVar3,plVar3 + 1,(long)plVar7 - (long)(plVar3 + 1));
      plVar3 = *(long **)(param_1 + 0x130);
      lVar6 = (long)plVar7 - (long)plVar3;
      plVar7 = plVar7 + -1;
      uVar5 = (ulong)((long)plVar3 + (-8 - ((long)plVar3 << 0x3d))) >> 3;
      uVar4 = ((lVar6 << 0x3d) - lVar6) + 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((-(int)plVar3 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        plVar3 = plVar3 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (plVar3 != plVar7) {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      plVar8 = *(long **)(param_1 + 0x128);
      *(long **)(param_1 + 0x130) = plVar7;
    }
  }
  else {
    uVar4 = (long)plVar7 + (-8 - (long)plVar8);
    uVar2 = (uint)uVar4;
    if ((~uVar2 & 0x18) != 0) {
      uVar5 = (ulong)((uVar2 >> 3) + 1) & 3;
      do {
        if (*plVar3 == param_2) goto joined_r0x00c1e1b8;
        uVar5 = uVar5 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar5 != 0);
    }
    if (0x17 < uVar4) {
      plVar3 = plVar3 + 2;
      do {
        if (plVar3[-2] == param_2) {
          plVar3 = plVar3 + -2;
          goto joined_r0x00c1e1b8;
        }
        if (plVar3[-1] == param_2) {
          plVar3 = plVar3 + -1;
          goto joined_r0x00c1e1b8;
        }
        if (*plVar3 == param_2) goto joined_r0x00c1e1b8;
        if (plVar3[1] == param_2) {
          plVar3 = plVar3 + 1;
          goto joined_r0x00c1e1b8;
        }
        plVar1 = plVar3 + 2;
        plVar3 = plVar3 + 4;
      } while (plVar1 != plVar7);
    }
  }
  uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  plVar3 = (long *)(ulong)uVar2;
  if ((plVar7 == plVar8) && (plVar3 = *(long **)(param_1 + 0x140), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c1e2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,0);
    return plVar3;
  }
  return plVar3;
}


// ===== 00c1e2a4  FUN_00c1e2a4 =====

void FUN_00c1e2a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e2ac);
  (*pcVar1)();
}


// ===== 00c1e2ac  FUN_00c1e2ac =====

void FUN_00c1e2ac(long param_1)

{
  FUN_00c1cb70(param_1 + -8);
  return;
}


// ===== 00c1e2b8  FUN_00c1e2b8 =====

void FUN_00c1e2b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e2c0);
  (*pcVar1)();
}


// ===== 00c1e2c0  FUN_00c1e2c0 =====

void FUN_00c1e2c0(long param_1)

{
  FUN_00c1cb70(param_1 + -0x10);
  return;
}


// ===== 00c1e2cc  FUN_00c1e2cc =====

void FUN_00c1e2cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e2d4);
  (*pcVar1)();
}


// ===== 00c1e2d4  FUN_00c1e2d4 =====

undefined8 * FUN_00c1e2d4(long *param_1,undefined8 *param_2)

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
    FUN_00c1e3c8();
LAB_00c1e3c4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c1e3c4;
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


// ===== 00c1e3c8  FUN_00c1e3c8 =====

void FUN_00c1e3c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c1e3e0  FUN_00c1e3e0 =====

void FUN_00c1e3e0(undefined8 *param_1,undefined1 param_2)

{
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d4b690;
  param_1[1] = &PTR_FUN_00d4b738;
  param_1[2] = &PTR_FUN_00d4b768;
  param_1[3] = param_1 + 3;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = param_2;
  return;
}


// ===== 00c1e410  FUN_00c1e410 =====

void FUN_00c1e410(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x30) = param_2;
  FUN_00adef98();
  return;
}


// ===== 00c1e42c  FUN_00c1e42c =====

void FUN_00c1e42c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00c1e46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}


// ===== 00c1e470  FUN_00c1e470 =====

void FUN_00c1e470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(param_1 + -0x10) + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00c1e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}


// ===== 00c1e4b4  FUN_00c1e4b4 =====

void FUN_00c1e4b4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00c1e4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


// ===== 00c1e4f0  FUN_00c1e4f0 =====

void FUN_00c1e4f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(param_1 + -0x10) + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00c1e528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


// ===== 00c1e52c  FUN_00c1e52c =====

void FUN_00c1e52c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e534);
  (*pcVar1)();
}


// ===== 00c1e534  FUN_00c1e534 =====

undefined8 FUN_00c1e534(void)

{
  return 0;
}


// ===== 00c1e540  FUN_00c1e540 =====

void FUN_00c1e540(void)

{
  return;
}


// ===== 00c1e548  FUN_00c1e548 =====

void FUN_00c1e548(void)

{
  return;
}


// ===== 00c1e550  FUN_00c1e550 =====

void FUN_00c1e550(void)

{
  return;
}


// ===== 00c1e558  FUN_00c1e558 =====

void FUN_00c1e558(undefined8 *param_1)

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


// ===== 00c1e600  FUN_00c1e600 =====

void FUN_00c1e600(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e608);
  (*pcVar1)();
}


// ===== 00c1e608  FUN_00c1e608 =====

void FUN_00c1e608(undefined8 *param_1)

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


// ===== 00c1e6b0  FUN_00c1e6b0 =====

void FUN_00c1e6b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e6b8);
  (*pcVar1)();
}


// ===== 00c1e6b8  FUN_00c1e6b8 =====

void FUN_00c1e6b8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00d4b908;
  param_1[1] = &PTR_FUN_00d4b998;
  param_1[2] = &PTR_FUN_00d4b9c8;
  param_1[3] = param_1 + 3;
  *(undefined1 *)(param_1 + 6) = 1;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    __dest = param_1 + 7;
    *(char *)((long)param_1 + 0x4f) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[7] = __dest;
    param_1[8] = param_3;
    param_1[9] = uVar2 | 0x8000000000000000;
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
    *(undefined4 *)(param_1 + 10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00c1e7cc  FUN_00c1e7cc =====

void FUN_00c1e7cc(long param_1)

{
  FUN_00c20c48(param_1 + -8);
  return;
}


// ===== 00c1e7d8  FUN_00c1e7d8 =====

void FUN_00c1e7d8(long param_1)

{
  FUN_00c20c48(param_1 + -0x10);
  return;
}


// ===== 00c1e7e4  FUN_00c1e7e4 =====

void FUN_00c1e7e4(long param_1)

{
  FUN_00c20c48(param_1 + -0x58);
  return;
}


// ===== 00c1e7f0  FUN_00c1e7f0 =====

void FUN_00c1e7f0(long param_1)

{
  FUN_00c20c48(param_1 + -0x78);
  return;
}


// ===== 00c1e7fc  FUN_00c1e7fc =====

void FUN_00c1e7fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e804);
  (*pcVar1)();
}


// ===== 00c1e804  FUN_00c1e804 =====

void FUN_00c1e804(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e80c);
  (*pcVar1)();
}


// ===== 00c1e80c  FUN_00c1e80c =====

void FUN_00c1e80c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e814);
  (*pcVar1)();
}


// ===== 00c1e814  FUN_00c1e814 =====

void FUN_00c1e814(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e81c);
  (*pcVar1)();
}


// ===== 00c1e81c  FUN_00c1e81c =====

void FUN_00c1e81c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1e824);
  (*pcVar1)();
}


// ===== 00c1e824  FUN_00c1e824 =====

void FUN_00c1e824(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *__src;
  size_t __n;
  undefined8 *__dest;
  
  __src = PTR_s_video_00d48a70;
  if (PTR_s_video_00d48a70 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(PTR_s_video_00d48a70);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (undefined8 *)operator_new(uVar2);
      *param_1 = __dest;
      param_1[1] = __n;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if (__dest <= (undefined8 *)((long)__dest + __n)) {
      if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,__src,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
      return;
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


// ===== 00c1e928  FUN_00c1e928 =====

void FUN_00c1e928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  FUN_00ae0ff4(param_1 + 0x58);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bfa80(&local_70,param_3);
  local_70 = (undefined1 *)
             (CONCAT62(local_70._2_6_,CONCAT11(*(undefined1 *)(param_1 + 0x94),local_70._0_1_)) ^
             0x100);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_70);
  FUN_007bfb14(&local_70);
  return;
}


// ===== 00c1e9b4  FUN_00c1e9b4 =====

void FUN_00c1e9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  FUN_00ae0ff4(param_1 + 0x48);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bfa80(&local_70,param_3);
  local_70 = (undefined1 *)
             (CONCAT62(local_70._2_6_,CONCAT11(*(undefined1 *)(param_1 + 0x84),local_70._0_1_)) ^
             0x100);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x28) + 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_70);
  FUN_007bfb14(&local_70);
  return;
}


// ===== 00c1ea40  FUN_00c1ea40 =====

void FUN_00c1ea40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  FUN_00ae0ff4();
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bfa80(&local_70,param_3);
  local_70 = (undefined1 *)
             (CONCAT62(local_70._2_6_,CONCAT11(*(undefined1 *)(param_1 + 0x3c),local_70._0_1_)) ^
             0x100);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x28) + 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_70);
  FUN_007bfb14(&local_70);
  return;
}


// ===== 00c1eac8  FUN_00c1eac8 =====

void FUN_00c1eac8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00ae1138(param_1 + 0x58);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00c1eb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


// ===== 00c1eb0c  FUN_00c1eb0c =====

void FUN_00c1eb0c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00ae1138(param_1 + 0x48);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x28) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00c1eb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


// ===== 00c1eb50  FUN_00c1eb50 =====

void FUN_00c1eb50(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00ae1138();
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x28) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00c1eb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


// ===== 00c1eb90  FUN_00c1eb90 =====

void FUN_00c1eb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1eba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + 0x10) + 0x20))();
  return;
}


// ===== 00c1eba8  FUN_00c1eba8 =====

void FUN_00c1eba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1ebbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x28) + 0x10) + 0x20))();
  return;
}


// ===== 00c1ebc0  FUN_00c1ebc0 =====

void FUN_00c1ebc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1ebd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x28) + 0x10) + 0x20))();
  return;
}


// ===== 00c1ebd8  FUN_00c1ebd8 =====

undefined8 FUN_00c1ebd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 00c1ebe4  FUN_00c1ebe4 =====

undefined4 FUN_00c1ebe4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}


// ===== 00c1ebf0  FUN_00c1ebf0 =====

void FUN_00c1ebf0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x90) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x90) = param_2;
  FUN_00c1dcb4();
  return;
}


// ===== 00c1ec0c  FUN_00c1ec0c =====

bool FUN_00c1ec0c(long param_1,byte param_2)

{
  byte bVar1;
  long local_40;
  byte *pbStack_38;
  byte local_14 [3];
  undefined1 uStack_11;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x30) = param_2;
  local_14[0] = param_2;
  if (bVar1 != (param_2 & 1)) {
    FUN_00c1dcb4(param_1);
  }
  pbStack_38 = local_14;
  local_40 = param_1;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x60))
            (*(long **)(param_1 + 0x80),&local_40,FUN_00c1f5e4,&uStack_11);
  return bVar1 != (param_2 & 1);
}


// ===== 00c1ec94  FUN_00c1ec94 =====

bool FUN_00c1ec94(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x30) = param_2;
  if (bVar1 != (param_2 & 1)) {
    FUN_00c1dcb4();
  }
  return bVar1 != (param_2 & 1);
}


// ===== 00c1ecd4  FUN_00c1ecd4 =====

undefined1 FUN_00c1ecd4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_007e18fc(*(undefined8 *)(param_1 + 0x80));
  lVar1 = 0x94;
  if ((uVar2 & 1) == 0) {
    lVar1 = 0x30;
  }
  return *(undefined1 *)(param_1 + lVar1);
}


// ===== 00c1ed14  FUN_00c1ed14 =====

undefined1 FUN_00c1ed14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}


// ===== 00c1ed20  FUN_00c1ed20 =====

undefined4 FUN_00c1ed20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}


// ===== 00c1ed2c  FUN_00c1ed2c =====

undefined4 FUN_00c1ed2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}


// ===== 00c1ed38  FUN_00c1ed38 =====

void FUN_00c1ed38(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  local_4[0] = 0xaa;
  FUN_007e0b10(local_4);
  iVar2 = (**(code **)(**(long **)(param_1 + 0x88) + 0x20))();
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = (uint)(iVar2 == 2);
  if (uVar1 != (iVar2 == 2)) {
    FUN_00c1dcb4(param_1);
  }
  FUN_007e0b18(local_4);
  return;
}


// ===== 00c1eda4  FUN_00c1eda4 =====

void FUN_00c1eda4(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  local_4[0] = 0xaa;
  FUN_007e0b10(local_4);
  iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar1 = *(uint *)(param_1 + -0x28);
  *(uint *)(param_1 + -0x28) = (uint)(iVar2 == 2);
  if (uVar1 != (iVar2 == 2)) {
    FUN_00c1dcb4(param_1 + -0x78);
  }
  FUN_007e0b18(local_4);
  return;
}


// ===== 00c1ee10  FUN_00c1ee10 =====

void FUN_00c1ee10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_007e06bc();
  uVar5 = *param_4;
  *param_4 = 0;
  puVar2 = (undefined8 *)operator_new(0x38);
  puVar2[4] = param_5;
  puVar2[5] = uVar5;
  *puVar2 = &PTR_FUN_00d4baf8;
  puVar2[1] = &PTR_FUN_00d4bba8;
  puVar2[2] = &PTR_FUN_00d4bbd8;
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 6) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 6);
  }
  puVar3 = (undefined8 *)operator_new(0xa0);
  FUN_00c1e6b8(puVar3,param_2,param_3);
  FUN_00ae0e9c(puVar3 + 0xb);
  puVar3[0x10] = param_5;
  puVar3[0x11] = puVar2;
  *puVar3 = &PTR_FUN_00d4b7a0;
  puVar3[1] = &PTR_FUN_00d4b840;
  puVar3[2] = &PTR_FUN_00d4b870;
  puVar4 = puVar3 + 0xf;
  *puVar4 = &PTR_FUN_00d4b8e0;
  puVar3[0xb] = &PTR_FUN_00d4b8a8;
  *(undefined4 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((long)puVar3 + 0x94) = 1;
  FUN_00c204d4(puVar2,puVar4);
  *(undefined4 *)(puVar3 + 0x13) = 0;
  *param_1 = puVar3;
  *puVar3 = &PTR_FUN_00d4bd20;
  puVar3[1] = &PTR_FUN_00d4bdc8;
  puVar3[2] = &PTR_FUN_00d4bdf8;
  puVar3[0xb] = &PTR_FUN_00d4be30;
  *puVar4 = &PTR_FUN_00d4be68;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar3 + 0x13);
  }
  return;
}


// ===== 00c1ef50  FUN_00c1ef50 =====

void FUN_00c1ef50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x4f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    param_1[1] = *(undefined8 *)(param_2 + 0x40);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
  return;
}


// ===== 00c1ef7c  FUN_00c1ef7c =====

void FUN_00c1ef7c(long param_1,long param_2)

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


// ===== 00c1efec  FUN_00c1efec =====

void FUN_00c1efec(long param_1,long param_2)

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


// ===== 00c1f024  FUN_00c1f024 =====

void FUN_00c1f024(long param_1,long param_2)

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


// ===== 00c1f094  FUN_00c1f094 =====

void FUN_00c1f094(long param_1,long param_2)

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


// ===== 00c1f140  FUN_00c1f140 =====

void FUN_00c1f140(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4b908;
  param_1[1] = &PTR_FUN_00d4b998;
  param_1[2] = &PTR_FUN_00d4b9c8;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  *param_1 = &PTR_FUN_00d4ba00;
  param_1[1] = &PTR_FUN_00d4ba90;
  param_1[2] = &PTR_FUN_00d4bac0;
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


// ===== 00c1f214  FUN_00c1f214 =====

void FUN_00c1f214(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f21c);
  (*pcVar1)();
}


// ===== 00c1f21c  FUN_00c1f21c =====

void FUN_00c1f21c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d4b908;
  *param_1 = &PTR_FUN_00d4b998;
  param_1[1] = &PTR_FUN_00d4b9c8;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  param_1[-1] = &PTR_FUN_00d4ba00;
  *param_1 = &PTR_FUN_00d4ba90;
  param_1[1] = &PTR_FUN_00d4bac0;
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


// ===== 00c1f2f0  FUN_00c1f2f0 =====

void FUN_00c1f2f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f2f8);
  (*pcVar1)();
}


// ===== 00c1f2f8  FUN_00c1f2f8 =====

void FUN_00c1f2f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-2] = &PTR_FUN_00d4b908;
  param_1[-1] = &PTR_FUN_00d4b998;
  *param_1 = &PTR_FUN_00d4b9c8;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  param_1[-2] = &PTR_FUN_00d4ba00;
  param_1[-1] = &PTR_FUN_00d4ba90;
  *param_1 = &PTR_FUN_00d4bac0;
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


// ===== 00c1f3cc  FUN_00c1f3cc =====

void FUN_00c1f3cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f3d4);
  (*pcVar1)();
}


// ===== 00c1f3d4  FUN_00c1f3d4 =====

void FUN_00c1f3d4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4ba00;
  param_1[1] = &PTR_FUN_00d4ba90;
  param_1[2] = &PTR_FUN_00d4bac0;
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


// ===== 00c1f47c  FUN_00c1f47c =====

void FUN_00c1f47c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f484);
  (*pcVar1)();
}


// ===== 00c1f484  FUN_00c1f484 =====

void FUN_00c1f484(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d4ba00;
  *param_1 = &PTR_FUN_00d4ba90;
  param_1[1] = &PTR_FUN_00d4bac0;
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


// ===== 00c1f52c  FUN_00c1f52c =====

void FUN_00c1f52c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f534);
  (*pcVar1)();
}


// ===== 00c1f534  FUN_00c1f534 =====

void FUN_00c1f534(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-2] = &PTR_FUN_00d4ba00;
  param_1[-1] = &PTR_FUN_00d4ba90;
  *param_1 = &PTR_FUN_00d4bac0;
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


// ===== 00c1f5dc  FUN_00c1f5dc =====

void FUN_00c1f5dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc1f5e4);
  (*pcVar1)();
}


// ===== 00c1f5e4  FUN_00c1f5e4 =====

void FUN_00c1f5e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x94) = *(undefined1 *)param_1[1];
  plVar3 = (long *)FUN_00ae1228(lVar1 + 0x58);
  puVar2 = (undefined8 *)plVar3[1];
  for (puVar4 = (undefined8 *)*plVar3; puVar4 != puVar2; puVar4 = puVar4 + 9) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007bfa80(&local_70,puVar4 + 1);
    local_70 = (undefined1 *)
               (CONCAT62(local_70._2_6_,CONCAT11(*(undefined1 *)param_1[1],local_70._0_1_)) ^ 0x100)
    ;
    (**(code **)(**(long **)(lVar1 + 0x88) + 0x70))(*(long **)(lVar1 + 0x88),*puVar4,&local_70);
    FUN_007bfb14(&local_70);
  }
  return;
}


// ===== 00c1f688  FUN_00c1f688 =====

void FUN_00c1f688(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x30);
  return;
}


// ===== 00c1f6ac  FUN_00c1f6ac =====

bool FUN_00c1f6ac(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 6);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c1f704  FUN_00c1f704 =====

void FUN_00c1f704(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_00d4bc10;
  param_1[1] = &PTR_FUN_00d4bcb8;
  param_1[2] = &PTR_FUN_00d4bce8;
  local_c0 = FUN_00c20850;
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
    pcStack_38 = FUN_00c2088c;
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


// ===== 00c1f824  FUN_00c1f824 =====

void FUN_00c1f824(void *param_1)

{
  FUN_00c1f704();
  operator_delete(param_1);
  return;
}


// ===== 00c1f854  FUN_00c1f854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c1f854(long param_1)

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
  uStack_b8 = _UNK_001f31d8;
  local_c0 = _DAT_001f31d0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c208d0;
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


// ===== 00c1f958  FUN_00c1f958 =====

void FUN_00c1f958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1f968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return;
}


// ===== 00c1f96c  FUN_00c1f96c =====

void FUN_00c1f96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c1f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  return;
}


// ===== 00c1f980  FUN_00c1f980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c1f980(long param_1)

{
  ulong uVar1;
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
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
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
  local_a8 = 0xaaaaaaaaaaaa0000;
  uStack_b0 = _UNK_001f46f8;
  local_b8 = _DAT_001f46f0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c2091c;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    uVar1 = local_a8 & 0xffff;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar2 & 0xffffffff;
    local_a8 = CONCAT62(local_a8._2_6_,(short)uVar2);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return uVar1;
}


// ===== 00c1fa90  FUN_00c1fa90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c1fa90(long param_1,undefined8 param_2)

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
  
  local_d8 = *(long *)(param_1 + 0x28);
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
  uStack_c8 = _UNK_001f2798;
  local_d0 = _DAT_001f2790;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c20968;
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


// ===== 00c1fbac  FUN_00c1fbac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c1fbac(long param_1)

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
  uStack_b0 = _UNK_001f2338;
  local_b8 = _DAT_001f2330;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c209c0;
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


// ===== 00c1fcbc  FUN_00c1fcbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1fcbc(long param_1)

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
  uStack_b0 = _UNK_001f3ab8;
  local_b8 = _DAT_001f3ab0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 0x20);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c20a10;
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


// ===== 00c1fdb8  FUN_00c1fdb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1fdb8(long param_1,undefined8 param_2)

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
  uStack_b0 = _UNK_001f3d98;
  local_b8 = _DAT_001f3d90;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c20a54;
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


// ===== 00c1fef4  FUN_00c1fef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1fef4(long param_1,undefined8 param_2)

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
  uStack_b0 = _UNK_001f1cc8;
  local_b8 = _DAT_001f1cc0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c20a54;
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


// ===== 00c20030  FUN_00c20030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c20030(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
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
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(long *)(param_1 + 0x28);
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
  uStack_b0 = _UNK_001f2918;
  local_b8 = _DAT_001f2910;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c20aa0;
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
    (*pcVar3)(plVar4,uStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c20160  FUN_00c20160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c20160(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_b8 = _UNK_001f2348;
  local_c0 = _DAT_001f2340;
  local_100 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00c20ae8;
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


// ===== 00c2029c  FUN_00c2029c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c2029c(long param_1,undefined8 param_2)

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
  uStack_b0 = _UNK_001f4a98;
  local_b8 = _DAT_001f4a90;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 0x20);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c20b34;
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


// ===== 00c203d8  FUN_00c203d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c203d8(long param_1)

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
    pcStack_28 = FUN_00c20a10;
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


// ===== 00c204d4  FUN_00c204d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c204d4(long param_1,undefined8 param_2)

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
    pcStack_c8 = FUN_00c20b80;
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


// ===== 00c20610  FUN_00c20610 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c20610(long param_1,undefined8 param_2)

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
    pcStack_c8 = FUN_00c20b80;
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


// ===== 00c2074c  FUN_00c2074c =====

bool FUN_00c2074c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x30) == 1;
}


// ===== 00c20764  FUN_00c20764 =====

void FUN_00c20764(long param_1)

{
  FUN_00c204d4(param_1 + -8);
  return;
}


// ===== 00c20770  FUN_00c20770 =====

void FUN_00c20770(long param_1)

{
  FUN_00c20610(param_1 + -8);
  return;
}


// ===== 00c2077c  FUN_00c2077c =====

void FUN_00c2077c(long param_1)

{
  FUN_00c1f704(param_1 + -8);
  return;
}


// ===== 00c20788  FUN_00c20788 =====

void FUN_00c20788(long param_1)

{
  FUN_00c1f704((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c207bc  FUN_00c207bc =====

void FUN_00c207bc(long param_1)

{
  FUN_00c1f704(param_1 + -0x10);
  return;
}


// ===== 00c207c8  FUN_00c207c8 =====

void FUN_00c207c8(long param_1)

{
  FUN_00c1f704((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c207fc  FUN_00c207fc =====

void FUN_00c207fc(long param_1)

{
  FUN_00c20160(param_1 + -0x10);
  return;
}


// ===== 00c20808  FUN_00c20808 =====

void FUN_00c20808(long param_1)

{
  FUN_00c2029c(param_1 + -0x10);
  return;
}


// ===== 00c20814  FUN_00c20814 =====

void FUN_00c20814(long param_1)

{
  FUN_00c203d8(param_1 + -0x10);
  return;
}


// ===== 00c20820  FUN_00c20820 =====

void FUN_00c20820(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc20828);
  (*pcVar1)();
}


// ===== 00c20828  FUN_00c20828 =====

void FUN_00c20828(long param_1)

{
  FUN_00c1f704(param_1 + -8);
  return;
}


// ===== 00c20834  FUN_00c20834 =====

void FUN_00c20834(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc2083c);
  (*pcVar1)();
}


// ===== 00c2083c  FUN_00c2083c =====

void FUN_00c2083c(long param_1)

{
  FUN_00c1f704(param_1 + -0x10);
  return;
}


// ===== 00c20848  FUN_00c20848 =====

void FUN_00c20848(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc20850);
  (*pcVar1)();
}


// ===== 00c20850  FUN_00c20850 =====

void FUN_00c20850(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 00c2088c  FUN_00c2088c =====

void FUN_00c2088c(undefined8 *param_1)

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


// ===== 00c208d0  FUN_00c208d0 =====

void FUN_00c208d0(undefined8 *param_1)

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


// ===== 00c2091c  FUN_00c2091c =====

void FUN_00c2091c(undefined8 *param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined2 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc((long)plVar3 + 0x1c);
  return;
}


// ===== 00c20968  FUN_00c20968 =====

void FUN_00c20968(undefined8 *param_1)

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


// ===== 00c209c0  FUN_00c209c0 =====

void FUN_00c209c0(undefined8 *param_1)

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


// ===== 00c20a10  FUN_00c20a10 =====

void FUN_00c20a10(undefined8 *param_1)

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


// ===== 00c20a54  FUN_00c20a54 =====

void FUN_00c20a54(undefined8 *param_1)

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


// ===== 00c20aa0  FUN_00c20aa0 =====

void FUN_00c20aa0(undefined8 *param_1)

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
  (*pcVar2)(plVar1,plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00c20ae8  FUN_00c20ae8 =====

void FUN_00c20ae8(undefined8 *param_1)

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


// ===== 00c20b34  FUN_00c20b34 =====

void FUN_00c20b34(undefined8 *param_1)

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


// ===== 00c20b80  FUN_00c20b80 =====

void FUN_00c20b80(undefined8 *param_1)

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


// ===== 00c20bcc  FUN_00c20bcc =====

void FUN_00c20bcc(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x98);
  return;
}


// ===== 00c20bf0  FUN_00c20bf0 =====

bool FUN_00c20bf0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x13);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c20c48  FUN_00c20c48 =====

void FUN_00c20c48(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4b7a0;
  param_1[1] = &PTR_FUN_00d4b840;
  param_1[2] = &PTR_FUN_00d4b870;
  param_1[0xb] = &PTR_FUN_00d4b8a8;
  param_1[0xf] = &PTR_FUN_00d4b8e0;
  (**(code **)(*(long *)param_1[0x11] + 0x90))();
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  FUN_00ae0eb4(param_1 + 0xb);
  *param_1 = &PTR_FUN_00d4b908;
  param_1[1] = &PTR_FUN_00d4b998;
  param_1[2] = &PTR_FUN_00d4b9c8;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  *param_1 = &PTR_FUN_00d4ba00;
  param_1[1] = &PTR_FUN_00d4ba90;
  param_1[2] = &PTR_FUN_00d4bac0;
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


// ===== 00c20d78  FUN_00c20d78 =====

void FUN_00c20d78(void *param_1)

{
  FUN_00c20c48();
  operator_delete(param_1);
  return;
}


// ===== 00c20da8  FUN_00c20da8 =====

bool FUN_00c20da8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x98) == 1;
}


// ===== 00c20dc0  FUN_00c20dc0 =====

void FUN_00c20dc0(long param_1)

{
  FUN_00c20c48(param_1 + -8);
  return;
}


// ===== 00c20dcc  FUN_00c20dcc =====

void FUN_00c20dcc(long param_1)

{
  FUN_00c20c48((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00c20e00  FUN_00c20e00 =====

void FUN_00c20e00(long param_1)

{
  FUN_00c20c48(param_1 + -0x10);
  return;
}


// ===== 00c20e0c  FUN_00c20e0c =====

void FUN_00c20e0c(long param_1)

{
  FUN_00c20c48((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00c20e40  FUN_00c20e40 =====

void FUN_00c20e40(long param_1)

{
  FUN_00c20c48(param_1 + -0x58);
  return;
}


// ===== 00c20e4c  FUN_00c20e4c =====

void FUN_00c20e4c(long param_1)

{
  FUN_00c20c48((void *)(param_1 + -0x58));
  operator_delete((void *)(param_1 + -0x58));
  return;
}


// ===== 00c20e80  FUN_00c20e80 =====

void FUN_00c20e80(long param_1)

{
  FUN_00c20c48(param_1 + -0x78);
  return;
}


// ===== 00c20e8c  FUN_00c20e8c =====

void FUN_00c20e8c(long param_1)

{
  FUN_00c20c48((void *)(param_1 + -0x78));
  operator_delete((void *)(param_1 + -0x78));
  return;
}


// ===== 00c20ec0  FUN_00c20ec0 =====

bool FUN_00c20ec0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x2f) & 0x80) == 0) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x2f);
  }
  if (uVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    if ((lVar5 == 0) || (lVar5 == 0x130)) {
      return false;
    }
    piVar4 = (int *)(*(long *)(param_1 + 0x60) + 0x160);
    lVar5 = (lVar5 >> 4) * -0x79435e50d79435e5 + -2;
    do {
      bVar3 = *(double *)(piVar4 + -2) != DAT_001fefd8 || *piVar4 != 1;
      if (*(double *)(piVar4 + -2) != DAT_001fefd8 || *piVar4 != 1) {
        return bVar3;
      }
      piVar4 = piVar4 + 0x4c;
      bVar1 = lVar5 != 0;
      lVar5 = lVar5 + -1;
    } while (bVar1);
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


// ===== 00c20f54  FUN_00c20f54 =====

void FUN_00c20f54(long *param_1,long *param_2,long param_3,long param_4,long *param_5,ulong param_6,
                 undefined4 param_7,long param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  long *__dest;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_58;
  
  *param_1 = (long)&PTR_FUN_00d4be90;
  param_1[1] = (long)&PTR_FUN_00d4c028;
  param_1[2] = (long)&PTR_FUN_00d4c050;
  lVar3 = *param_2;
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar6 = param_2[2];
  lVar5 = param_2[1];
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[5] = lVar6;
  param_1[4] = lVar5;
  param_1[7] = lVar4;
  param_1[6] = lVar3;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7ffffffffffffff6 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_6 < 0x17) {
    __dest = param_1 + 0xc;
    *(char *)((long)param_1 + 0x77) = (char)param_6;
  }
  else {
    uVar2 = (param_6 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar2 != 0x18) {
      uVar1 = uVar2;
    }
    __dest = (long *)operator_new(uVar1);
    param_1[0xc] = (long)__dest;
    param_1[0xd] = param_6;
    param_1[0xe] = uVar1 | 0x8000000000000000;
  }
  if (__dest <= (long *)((long)__dest + param_6)) {
    if ((__dest <= param_5) && (param_5 < (long *)((long)__dest + param_6))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_5,param_6);
    *(undefined1 *)((long)__dest + param_6) = 0;
    *(undefined4 *)(param_1 + 0xf) = param_7;
    param_1[0x10] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    FUN_00669500(param_1 + 0x13);
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x3d) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    *(undefined8 *)((long)param_1 + 0x221) = 0;
    *(undefined8 *)((long)param_1 + 0x219) = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x49] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    param_1[0x4c] = param_8;
    param_1[0x4d] = 0;
    *(undefined1 *)(param_1 + 0x4e) = 0;
    FUN_007ebd38(param_1 + 0x51,param_9 != 0,param_1[9]);
    FUN_007ebd38(&local_58,1,param_1[8]);
    lVar3 = local_58;
    uVar2 = param_1[0x20];
    local_58 = 0;
    param_1[0x52] = lVar3;
    if (uVar2 < (ulong)param_1[0x21]) {
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00668fb0(uVar2);
      param_1[0x20] = uVar2 + 0x130;
    }
    else {
      lVar3 = FUN_00b638cc(param_1 + 0x1f);
      param_1[0x20] = lVar3;
    }
    if (param_9 != 0) {
      (**(code **)(*param_1 + 0xc0))(param_1,param_9);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00c21194  FUN_00c21194 =====

/* WARNING: Removing unreachable block (ram,0x00c21280) */
/* WARNING: Removing unreachable block (ram,0x00c213b0) */

void FUN_00c21194(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_00d4be90;
  param_1[1] = &PTR_FUN_00d4c028;
  param_1[2] = &PTR_FUN_00d4c050;
  FUN_007ebdcc(param_1[0x52]);
  pvVar7 = (void *)param_1[0x52];
  if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x51];
  if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
    operator_delete(pvVar7);
  }
  plVar2 = (long *)param_1[0x50];
  param_1[0x50] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)param_1[0x4f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4f] + 8))();
  }
  pvVar7 = (void *)param_1[0x49];
  if (pvVar7 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x4a];
    pvVar4 = pvVar7;
    if (pvVar7 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
        if (pvVar5 == (void *)0x0) goto LAB_00c2144c;
      } while (pvVar5 != pvVar7);
      pvVar4 = (void *)param_1[0x49];
    }
    param_1[0x4a] = pvVar7;
    operator_delete(pvVar4);
  }
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(char *)((long)param_1 + 0x23f) < '\0')) {
    operator_delete((void *)param_1[0x45]);
  }
  if ((long *)param_1[0x44] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x44] + 8))();
  }
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 8))();
  }
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 8))();
  }
  puVar8 = (undefined8 *)param_1[0x3e];
  if (puVar8 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x3f];
    puVar3 = puVar8;
    if (puVar8 != puVar6) {
      do {
        puVar6 = puVar6 + -0x1b;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00c2144c;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar8);
      puVar3 = (undefined8 *)param_1[0x3e];
    }
    param_1[0x3f] = puVar8;
    operator_delete(puVar3);
  }
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    FUN_0066981c(param_1 + 0x28);
  }
  FUN_0066981c(param_1 + 0x13);
  pvVar7 = (void *)param_1[0x10];
  if (pvVar7 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x11];
    pvVar4 = pvVar7;
    if (pvVar7 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
        if (pvVar5 == (void *)0x0) {
LAB_00c2144c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar5 != pvVar7);
      pvVar4 = (void *)param_1[0x10];
    }
    param_1[0x11] = pvVar7;
    operator_delete(pvVar4);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    plVar2 = (long *)param_1[3];
  }
  else {
    plVar2 = (long *)param_1[3];
  }
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c21434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00c21460  FUN_00c21460 =====

void FUN_00c21460(long param_1)

{
  FUN_00c21194(param_1 + -8);
  return;
}


// ===== 00c2146c  FUN_00c2146c =====

void FUN_00c2146c(long param_1)

{
  FUN_00c21194(param_1 + -0x10);
  return;
}


// ===== 00c21478  FUN_00c21478 =====

void FUN_00c21478(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc21480);
  (*pcVar1)();
}


// ===== 00c21480  FUN_00c21480 =====

void FUN_00c21480(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc21488);
  (*pcVar1)();
}


// ===== 00c21488  FUN_00c21488 =====

void FUN_00c21488(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc21490);
  (*pcVar1)();
}


// ===== 00c21490  FUN_00c21490 =====

void FUN_00c21490(long param_1,undefined8 param_2)

{
  undefined1 uStack_29;
  undefined4 local_28 [2];
  long local_20;
  undefined8 uStack_18;
  
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    local_28[0] = *(undefined4 *)(param_1 + 0x50);
    local_20 = param_1;
    uStack_18 = param_2;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
              (*(long **)(param_1 + 0x48),local_28,FUN_00c26ae0,&uStack_29);
  }
  return;
}


// ===== 00c214ec  FUN_00c214ec =====

void FUN_00c214ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  int local_30 [2];
  long local_28;
  undefined1 uStack_1;
  
  plVar1 = *(long **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (((*(byte *)(param_1 + 0x54) & 1) == 0) &&
     (local_30[0] = *(int *)(param_1 + 0x50), local_30[0] != 0)) {
    local_28 = param_1;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
              (*(long **)(param_1 + 0x48),local_30,FUN_00c26b80,&uStack_1);
  }
  return;
}


// ===== 00c21568  FUN_00c21568 =====

void FUN_00c21568(long param_1)

{
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    FUN_00b618b4();
    return;
  }
  if (param_1 != -0x140) {
    FUN_0066953c(param_1 + 0x140);
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c215d4  FUN_00c215d4 =====

void FUN_00c215d4(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x208) == param_2) {
    return;
  }
  *(long *)(param_1 + 0x208) = param_2;
  if (param_2 != 0) {
    FUN_007ebdd8();
    return;
  }
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x288));
  return;
}


// ===== 00c21600  FUN_00c21600 =====

void FUN_00c21600(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 uStack_129;
  undefined4 local_128 [2];
  long local_120;
  undefined1 **ppuStack_118;
  undefined1 *local_110;
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
  undefined1 *local_70;
  byte *local_68;
  undefined4 *puStack_60;
  byte local_54 [4];
  
  if (*(char *)(param_2 + 0x54) == '\x01') {
    FUN_00669500(param_1);
    return;
  }
  if (*(int *)(param_2 + 0x50) == 0) {
    FUN_0066953c(param_1,param_2 + 0x98);
    return;
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(&local_110);
  if (((param_3 & 1) == 0) || (*(char *)(param_2 + 0x1e8) != '\x01')) {
    local_128[0] = *(undefined4 *)(param_2 + 0x50);
    local_68 = local_54;
    puStack_60 = local_128;
    local_54[0] = 0xaa;
    local_120 = param_2;
    ppuStack_118 = &local_110;
    (**(code **)(**(long **)(param_2 + 0x48) + 0x60))
              (*(long **)(param_2 + 0x48),&local_68,FUN_00c26bac,&uStack_129);
    if ((local_54[0] & 1) == 0) {
      if (*(char *)(param_2 + 0x1e8) == '\x01') {
        FUN_0066981c(param_2 + 0x140);
        *(undefined1 *)(param_2 + 0x1e8) = 0;
      }
      ppuVar1 = (undefined1 **)(param_2 + 0x98);
      goto LAB_00c21798;
    }
    if (*(char *)(param_2 + 0x1e8) == '\x01') {
      ppuVar1 = (undefined1 **)(param_2 + 0x140);
      ppuVar2 = &local_110;
      goto LAB_00c21714;
    }
    if (param_2 == -0x140) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_0066953c(param_2 + 0x140,&local_110);
    *(undefined1 *)(param_2 + 0x1e8) = 1;
  }
  else {
    ppuVar1 = &local_110;
    ppuVar2 = (undefined1 **)(param_2 + 0x140);
LAB_00c21714:
    FUN_00b618b4(ppuVar1,ppuVar2);
  }
  ppuVar1 = &local_110;
  if ((param_4 & 1) == 0) {
    ppuVar1 = &local_110;
    FUN_00c217e0(param_2 + 0x248,&puStack_b0);
  }
LAB_00c21798:
  FUN_0066953c(param_1,ppuVar1);
  FUN_0066981c(&local_110);
  return;
}


// ===== 00c217e0  FUN_00c217e0 =====

/* WARNING: Removing unreachable block (ram,0x00c2197c) */
/* WARNING: Removing unreachable block (ram,0x00c21980) */
/* WARNING: Removing unreachable block (ram,0x00c2199c) */

void FUN_00c217e0(undefined8 *param_1,ulong *param_2)

{
  undefined8 *__s2;
  undefined8 *__s1;
  void *__s2_00;
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  size_t sVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar10 = *param_2;
  uVar8 = param_2[1];
  if (uVar10 == uVar8) {
LAB_00c218a4:
    if (uVar10 != uVar8) {
      uVar5 = uVar10 + 0x130;
      uVar9 = uVar10;
      if (uVar10 + 0x130 != uVar8) {
        do {
          uVar7 = uVar5;
          puVar11 = (undefined8 *)*param_1;
          puVar2 = (undefined8 *)param_1[1];
          if (puVar11 != puVar2) {
            sVar4 = *(size_t *)(uVar9 + 0x1d8);
            __s2_00 = *(void **)(uVar9 + 0x1d0);
            if (-1 < (char)*(byte *)(uVar9 + 0x1e7)) {
              sVar4 = (ulong)*(byte *)(uVar9 + 0x1e7);
              __s2_00 = (void *)(uVar9 + 0x1d0);
            }
            do {
              bVar3 = *(byte *)((long)puVar11 + 0x17);
              sVar1 = puVar11[1];
              if (-1 < (char)bVar3) {
                sVar1 = (ulong)bVar3;
              }
              if (sVar1 == sVar4) {
                puVar12 = (undefined8 *)*puVar11;
                if (-1 < (char)bVar3) {
                  puVar12 = puVar11;
                }
                iVar6 = memcmp(puVar12,__s2_00,sVar4);
                if (iVar6 == 0) {
                  if (puVar11 != puVar2) goto LAB_00c218d0;
                  break;
                }
              }
              puVar11 = puVar11 + 3;
            } while (puVar11 != puVar2);
          }
          FUN_00b62384(uVar10,uVar7);
          uVar10 = uVar10 + 0x130;
LAB_00c218d0:
          uVar5 = uVar7 + 0x130;
          uVar9 = uVar7;
        } while (uVar7 + 0x130 != uVar8);
        uVar8 = param_2[1];
      }
      if (uVar8 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                  );
      }
      if (uVar10 != uVar8) {
        while (uVar10 != uVar8) {
          uVar8 = uVar8 - 0x130;
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_0066919c(uVar8);
        }
        param_2[1] = uVar10;
      }
    }
  }
  else {
    puVar11 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar11 != puVar2) {
        puVar12 = puVar11;
        sVar4 = *(size_t *)(uVar10 + 0xa8);
        __s2 = (undefined8 *)*(void **)(uVar10 + 0xa0);
        if (-1 < (char)*(byte *)(uVar10 + 0xb7)) {
          sVar4 = (ulong)*(byte *)(uVar10 + 0xb7);
          __s2 = (undefined8 *)(uVar10 + 0xa0);
        }
        do {
          bVar3 = *(byte *)((long)puVar12 + 0x17);
          sVar1 = puVar12[1];
          if (-1 < (char)bVar3) {
            sVar1 = (ulong)bVar3;
          }
          if (sVar1 == sVar4) {
            __s1 = (undefined8 *)*puVar12;
            if (-1 < (char)bVar3) {
              __s1 = puVar12;
            }
            iVar6 = memcmp(__s1,__s2,sVar4);
            if (iVar6 == 0) {
              if (puVar12 != puVar2) goto LAB_00c218a4;
              break;
            }
          }
          puVar12 = puVar12 + 3;
        } while (puVar12 != puVar2);
      }
      uVar10 = uVar10 + 0x130;
    } while (uVar10 != uVar8);
  }
  return;
}


// ===== 00c21a0c  FUN_00c21a0c =====

void FUN_00c21a0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c21a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1,1,1);
  return;
}


// ===== 00c21a24  FUN_00c21a24 =====

void FUN_00c21a24(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar5 = *param_2;
  param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = (long)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(lVar5 + 0xf8))(param_1,param_2,0,0);
  FUN_00835cc0(&local_48);
  plVar1 = param_2 + 0x45;
  if ((char)param_2[0x48] == '\x01') {
    if (*(char *)((long)param_2 + 0x23f) < '\0') {
      operator_delete((void *)param_2[0x45]);
    }
  }
  else {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
  param_2[0x46] = lStack_40;
  *plVar1 = local_48;
  param_2[0x47] = local_38;
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    if (param_1 != plVar1) {
      bVar3 = *(byte *)((long)param_2 + 0x23f);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uVar2 = param_2[0x46];
        plVar4 = (long *)param_2[0x45];
        if (-1 < (char)bVar3) {
          uVar2 = (ulong)bVar3;
          plVar4 = plVar1;
        }
        FUN_00547f08(param_1,plVar4,uVar2);
      }
      else if ((char)bVar3 < '\0') {
        FUN_00547fc0(param_1,param_2[0x45],param_2[0x46]);
      }
      else {
        lVar6 = *plVar1;
        lVar5 = param_2[0x47];
        param_1[1] = param_2[0x46];
        *param_1 = lVar6;
        param_1[2] = lVar5;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00c21b68  FUN_00c21b68 =====

void FUN_00c21b68(undefined4 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined5 local_188;
  undefined2 uStack_183;
  undefined4 uStack_181;
  undefined1 uStack_17d;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined4 local_178 [2];
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined3 uStack_154;
  undefined1 local_150 [8];
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 local_128 [216];
  char local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ulong *)(param_3 + 0x20);
  if ((*(byte *)(param_3 + 0x2f) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x2f);
  }
  if (uVar1 == 0) {
    lVar7 = *(long *)(param_3 + 0x68) - *(long *)(param_3 + 0x60);
    if ((lVar7 != 0) && (lVar7 != 0x130)) {
      piVar9 = (int *)(*(long *)(param_3 + 0x60) + 0x160);
      lVar7 = (lVar7 >> 4) * -0x79435e50d79435e5 + -1;
      do {
        if (*(double *)(piVar9 + -2) != DAT_001fefd8 || *piVar9 != 1) goto LAB_00c21ba8;
        lVar7 = lVar7 + -1;
        piVar9 = piVar9 + 0x4c;
      } while (lVar7 != 0);
    }
    if (*(int *)(param_2 + 0x50) != 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      goto LAB_00c21eb4;
    }
    lVar2 = *(long *)(param_2 + 0x1f8) - *(long *)(param_2 + 0x1f0);
    lVar7 = 0;
    if (lVar2 != 0) {
      lVar7 = *(long *)(param_2 + 0x1f0);
    }
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
    local_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    local_128[0] = 0;
    local_50 = '\0';
    FUN_00b6c05c(local_150,param_2 + 0x98,param_3,lVar7,(lVar2 >> 3) * -0x7b425ed097b425ed,local_128
                 ,*(undefined8 *)(param_2 + 0x20));
    if (local_50 == '\x01') {
      FUN_00890cb8(local_128);
    }
    if (local_150._0_4_ == 0) {
      FUN_00b618b4(param_2 + 0x98,param_3);
    }
    *param_1 = local_150._0_4_;
    if (-1 < (long)local_138) {
      uVar6 = (undefined4)local_130;
      puVar8 = (undefined8 *)((ulong)local_150 | 8);
      uVar11 = puVar8[1];
      uVar10 = *puVar8;
      uVar4 = puVar8[2];
      param_1[8] = uVar6;
      *(undefined4 *)((long)param_1 + 0x23) = local_130._3_4_;
      *(undefined8 *)(param_1 + 4) = uVar11;
      *(undefined8 *)(param_1 + 2) = uVar10;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined1 *)(param_1 + 10) = 1;
      goto LAB_00c21eb4;
    }
    FUN_005478d8(param_1 + 2,puStack_148,puStack_140);
    uVar6 = (undefined4)local_130;
    param_1[8] = uVar6;
    *(undefined4 *)((long)param_1 + 0x23) = local_130._3_4_;
    *(undefined1 *)(param_1 + 10) = 1;
    puVar5 = puStack_148;
    if (-1 < (long)local_138) goto LAB_00c21eb4;
  }
  else {
LAB_00c21ba8:
    uStack_17a = 0;
    puStack_190 = (undefined1 *)0x0;
    local_188 = 0;
    local_198 = (undefined1 *)0x0;
    uStack_183 = 0;
    uStack_181 = 0;
    uStack_17d = 0;
    uStack_17c = 0;
    FUN_00547cac(&local_198,"Attempted to set an unimplemented parameter of RtpParameters.",0x3d);
    local_178[0] = 2;
    if ((char)uStack_181 < '\0') {
      FUN_005478d8(&local_170,local_198,puStack_190);
    }
    else {
      local_160 = (undefined1 *)CONCAT17((char)uStack_181,CONCAT25(uStack_183,local_188));
      puStack_168 = puStack_190;
      local_170 = local_198;
    }
    local_158 = CONCAT13(uStack_17d,uStack_181._1_3_);
    uStack_154 = (undefined3)
                 (CONCAT13(uStack_17a,CONCAT12(uStack_17b,CONCAT11(uStack_17c,uStack_17d))) >> 8);
    uVar4 = FUN_005ecd5c(local_178);
    _local_150 = FUN_005eceec(local_178[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0xba3,uVar4,&DAT_001a2df6,local_150,
                 &DAT_001ca519);
    local_150._0_4_ = local_178[0];
    if ((long)local_160 < 0) {
      FUN_005478d8(&puStack_148,local_170,puStack_168);
      uVar6 = local_150._0_4_;
    }
    else {
      puStack_140 = puStack_168;
      puStack_148 = local_170;
      local_138 = local_160;
      uVar6 = local_178[0];
    }
    *param_1 = uVar6;
    local_130._0_7_ = CONCAT43(CONCAT31(uStack_154,local_158._3_1_),(int3)local_158);
    if ((long)local_138 < 0) {
      FUN_005478d8(param_1 + 2,puStack_148,puStack_140);
      uVar6 = (undefined4)local_130;
      param_1[8] = uVar6;
      *(undefined4 *)((long)param_1 + 0x23) = local_130._3_4_;
      *(undefined1 *)(param_1 + 10) = 1;
      if ((long)local_138 < 0) {
        operator_delete(puStack_148);
        goto joined_r0x00c21e88;
      }
      if (-1 < (long)local_160) goto LAB_00c21da8;
LAB_00c21e8c:
      operator_delete(local_170);
      puVar5 = local_198;
    }
    else {
      *(undefined1 **)(param_1 + 6) = local_138;
      *(undefined1 **)(param_1 + 4) = puStack_140;
      *(undefined1 **)(param_1 + 2) = puStack_148;
      param_1[8] = local_158;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_154,local_158._3_1_);
      *(undefined1 *)(param_1 + 10) = 1;
joined_r0x00c21e88:
      if ((long)local_160 < 0) goto LAB_00c21e8c;
LAB_00c21da8:
      puVar5 = local_198;
    }
    local_198 = puVar5;
    if (-1 < (char)uStack_181) goto LAB_00c21eb4;
  }
  operator_delete(puVar5);
LAB_00c21eb4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c21f18  FUN_00c21f18 =====

void FUN_00c21f18(int *param_1,long param_2,undefined8 param_3)

{
  undefined1 uStack_119;
  undefined4 local_118 [2];
  long local_110;
  undefined8 uStack_108;
  int *local_100;
  undefined1 **ppuStack_f8;
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
  undefined1 *local_50;
  
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = 6;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
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
  FUN_00669500(&local_f0);
  local_118[0] = *(undefined4 *)(param_2 + 0x50);
  local_110 = param_2;
  uStack_108 = param_3;
  local_100 = param_1;
  ppuStack_f8 = &local_f0;
  (**(code **)(**(long **)(param_2 + 0x48) + 0x60))
            (*(long **)(param_2 + 0x48),local_118,FUN_00c26c2c,&uStack_119);
  if (*param_1 == 0) {
    FUN_00b618b4(param_2 + 0x98,&local_f0);
    if (*(char *)(param_2 + 0x1e8) == '\x01') {
      FUN_00b618b4(param_2 + 0x140,&local_f0);
    }
    else {
      if (param_2 + 0x140 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0066953c(param_2 + 0x140,&local_f0);
      *(undefined1 *)(param_2 + 0x1e8) = 1;
    }
  }
  FUN_0066981c(&local_f0);
  return;
}


// ===== 00c2203c  FUN_00c2203c =====

void FUN_00c2203c(int *param_1,undefined1 *param_2,undefined8 param_3,long *param_4,byte param_5)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uStack_429;
  void *local_428;
  undefined1 *local_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *local_408;
  undefined8 local_400;
  undefined1 *local_3f0;
  undefined1 *puStack_3e8;
  undefined1 *local_3e0;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 *local_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined1 *puStack_39c;
  undefined4 local_390 [2];
  void *local_388;
  undefined8 uStack_380;
  long local_378;
  undefined4 local_370;
  undefined3 uStack_36c;
  undefined1 uStack_361;
  long *local_360 [2];
  code *local_350;
  code *pcStack_348;
  undefined1 *local_340;
  undefined1 *puStack_338;
  void **local_330;
  undefined1 *puStack_328;
  undefined8 local_320;
  undefined1 *local_318;
  undefined1 *puStack_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined1 *local_2f8;
  undefined1 *puStack_2f0;
  undefined1 *local_2e8;
  undefined1 *puStack_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined1 *puStack_2c0;
  undefined1 *local_2b8;
  undefined1 *puStack_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined1 *local_298;
  undefined1 *puStack_290;
  undefined1 *local_288;
  undefined1 *puStack_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined1 *local_268;
  code *pcStack_260;
  undefined1 *local_258;
  undefined1 *puStack_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined1 *local_238;
  undefined1 *puStack_230;
  undefined1 *local_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *local_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  void **local_170;
  undefined1 *local_168;
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
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  code *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
  local_330 = (void **)&DAT_aaaaaaaaaaaaaaaa;
  local_318 = &DAT_aaaaaaaaaaaaaaaa;
  local_320 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_338 = &DAT_aaaaaaaaaaaaaaaa;
  local_340 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c21b68(&local_340);
  if ((char)local_318 == '\x01') {
    pcVar5 = (code *)param_4[3];
    if (pcVar5 != (code *)0x0) {
      local_390[0] = (int)local_340;
      if ((long)puStack_328 < 0) {
        FUN_005478d8(&local_388,puStack_338,local_330);
        pcVar5 = (code *)param_4[3];
      }
      else {
        puVar7 = (undefined8 *)((ulong)&local_340 | 8);
        uStack_380 = puVar7[1];
        local_388 = (void *)*puVar7;
        local_378 = puVar7[2];
      }
      uStack_36c = (undefined3)((ulong)local_320 >> 0x20);
      local_370 = (int)local_320;
      (*pcVar5)(param_4,local_390);
      if (local_378 < 0) {
        operator_delete(local_388);
      }
    }
    if (((ulong)local_318 & 1) == 0) {
LAB_00c22744:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    *param_1 = (int)local_340;
    if ((long)puStack_328 < 0) {
      FUN_005478d8(param_1 + 2,puStack_338,local_330);
      iVar4 = (int)local_320;
      param_1[8] = iVar4;
      *(undefined4 *)((long)param_1 + 0x23) = local_320._3_4_;
      if (((char)local_318 == '\x01') && ((long)puStack_328 < 0)) {
        operator_delete(puStack_338);
      }
    }
    else {
      puVar7 = (undefined8 *)((ulong)&local_340 | 8);
      uVar11 = puVar7[1];
      uVar10 = *puVar7;
      uVar6 = puVar7[2];
      param_1[8] = (int)local_320;
      *(undefined8 *)(param_1 + 4) = uVar11;
      *(undefined8 *)(param_1 + 2) = uVar10;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined4 *)((long)param_1 + 0x23) = local_320._3_4_;
    }
  }
  else {
    if (param_2[0x1e8] == '\x01') {
      FUN_0066981c(param_2 + 0x140);
      param_2[0x1e8] = 0;
    }
    if ((param_5 & 1) == 0) {
      puStack_39c = &DAT_aaaaaaaaaaaaaaaa;
      uStack_3a0 = 0xaaaaaaaa;
      puStack_3d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3c0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_3a8 = 0xaaaaaaaa;
      local_3a4 = 0xaaaaaaaa;
      puStack_3b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3f0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0066f1ac(&local_3f0);
      local_400 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
      local_420 = &DAT_aaaaaaaaaaaaaaaa;
      local_408 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_410 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_005ecd48(&local_420);
      local_428 = (void *)0x0;
    }
    else {
      if (*(long *)(param_2 + 0x48) == *(long *)(param_2 + 0x40)) {
        FUN_00c21f18(param_1,param_2,param_3);
        goto LAB_00c22710;
      }
      puStack_39c = &DAT_aaaaaaaaaaaaaaaa;
      uStack_3a0 = 0xaaaaaaaa;
      puStack_3d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3c0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_3a8 = 0xaaaaaaaa;
      local_3a4 = 0xaaaaaaaa;
      puStack_3b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3f0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0066f1ac(&local_3f0);
      local_400 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
      local_420 = &DAT_aaaaaaaaaaaaaaaa;
      local_408 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_410 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_005ecd48(&local_420);
      local_428 = (void *)0x0;
      (*(code *)param_4[2])(0,param_4,param_4);
      *param_4 = (long)&local_3f0;
      param_4[1] = (long)&local_420;
      param_4[2] = (long)FUN_004473ec;
      param_4[3] = (long)FUN_00c27544;
    }
    local_168 = *(undefined1 **)(param_2 + 0x290);
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
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = (undefined1 *)(CONCAT71(0xaaaaaaaaaaaaaa,param_5) & 0xffffffffffffff01);
    local_170 = &local_428;
    local_180 = param_2;
    if (local_168 != (undefined1 *)0x0) {
      FUN_00d0f740(1);
    }
    local_160 = *(undefined1 **)(param_2 + 0x288);
    if (local_160 != (undefined1 *)0x0) {
      FUN_00d0f740(1);
    }
    FUN_0066953c(&puStack_158,param_3);
    (*(code *)param_4[2])(1,param_4,&puStack_b0);
    local_320 = local_160;
    puStack_328 = local_168;
    puStack_98 = (undefined1 *)param_4[3];
    local_a0 = (code *)param_4[2];
    param_4[2] = (long)FUN_00433984;
    param_4[3] = 0;
    local_90 = (undefined1 *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_2 + 0x50));
    puStack_338 = puStack_178;
    local_340 = local_180;
    puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
    local_228 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
    local_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    local_198 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
    local_238 = &DAT_aaaaaaaaaaaaaaaa;
    local_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_240 = &DAT_aaaaaaaaaaaaaaaa;
    local_248 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
    local_258 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_260 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_268 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_270 = &DAT_aaaaaaaaaaaaaaaa;
    local_278 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_280 = &DAT_aaaaaaaaaaaaaaaa;
    local_288 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_290 = &DAT_aaaaaaaaaaaaaaaa;
    local_298 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2f0 = &DAT_aaaaaaaaaaaaaaaa;
    local_2f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_300 = &DAT_aaaaaaaaaaaaaaaa;
    local_308 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_310 = &DAT_aaaaaaaaaaaaaaaa;
    local_318 = &DAT_aaaaaaaaaaaaaaaa;
    local_330 = local_170;
    local_168 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    FUN_0066953c(&local_318,&puStack_158);
    (*local_a0)(1,&puStack_b0,&puStack_270);
    local_258 = puStack_98;
    pcStack_260 = local_a0;
    local_a0 = FUN_00433984;
    puStack_98 = (undefined1 *)0x0;
    puStack_250 = (undefined1 *)CONCAT44(puStack_250._4_4_,local_90._0_4_);
    FUN_0066953c(&puStack_240,param_3);
    plVar9 = *(long **)(param_2 + 0x48);
    local_198 = (undefined1 *)CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x50));
    puStack_190 = param_2;
    if ((param_5 & 1) == 0) {
      lVar8 = *(long *)(param_2 + 0x288);
      if (lVar8 != 0) {
        FUN_00d0f740(1,lVar8);
      }
      puVar7 = (undefined8 *)operator_new(0x1c0);
      puVar7[1] = puStack_338;
      *puVar7 = local_340;
      puVar7[2] = local_330;
      puVar7[4] = local_320;
      puVar7[3] = puStack_328;
      puStack_328 = (undefined1 *)0x0;
      local_320 = (undefined1 *)0x0;
      FUN_0066953c(puVar7 + 5,&local_318);
      (*pcStack_260)(1,&puStack_270,puVar7 + 0x1a);
      puVar3 = local_258;
      pcVar5 = pcStack_260;
      pcStack_260 = FUN_00433984;
      local_258 = (undefined1 *)0x0;
      puVar7[0x1d] = puVar3;
      puVar7[0x1c] = pcVar5;
      *(undefined4 *)(puVar7 + 0x1e) = puStack_250._0_4_;
      FUN_0066953c(puVar7 + 0x20,&puStack_240);
      puVar7[0x36] = puStack_190;
      puVar7[0x35] = local_198;
      local_360[0] = (long *)operator_new(0x30);
      *local_360[0] = lVar8;
      local_360[0][4] = (long)FUN_00c28174;
      local_360[0][5] = (long)FUN_00c28168;
      local_360[0][2] = (long)puVar7;
      local_350 = FUN_005db390;
      pcStack_348 = FUN_005db348;
      (**(code **)(*plVar9 + 8))(plVar9,local_360,&uStack_361,&uStack_429);
      (*local_350)(0,local_360,local_360);
      FUN_005ecd48(param_1);
    }
    else {
      (**(code **)(*plVar9 + 0x60))(plVar9,&local_340,FUN_00c27658,local_360);
      FUN_0066f318(&local_3f0,0x7fffffffffffffff,3000000);
      if ((int)local_420 == 0) {
        if ((param_2[0x1e8] & 1) == 0) {
          if (param_2 == (undefined1 *)0xfffffffffffffec0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_0066953c(param_2 + 0x140,local_428);
          param_2[0x1e8] = 1;
        }
        else {
          FUN_00b618b4(param_2 + 0x140);
          if ((param_2[0x1e8] & 1) == 0) goto LAB_00c22744;
        }
        FUN_00b618b4(param_2 + 0x98,param_2 + 0x140);
      }
      *param_1 = (int)local_420;
      if ((long)local_408 < 0) {
        FUN_005478d8(param_1 + 2,puStack_418,puStack_410);
      }
      else {
        puVar7 = (undefined8 *)((ulong)&local_420 | 8);
        uVar10 = *puVar7;
        uVar6 = puVar7[2];
        *(undefined8 *)(param_1 + 4) = puVar7[1];
        *(undefined8 *)(param_1 + 2) = uVar10;
        *(undefined8 *)(param_1 + 6) = uVar6;
      }
      iVar4 = (int)local_400;
      param_1[8] = iVar4;
      *(undefined4 *)((long)param_1 + 0x23) = local_400._3_4_;
    }
    FUN_0066981c(&puStack_240);
    (*pcStack_260)(0,&puStack_270,&puStack_270);
    FUN_0066981c(&local_318);
    puVar3 = local_320;
    if ((local_320 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_320), iVar4 == 1)
       ) {
      operator_delete(puVar3);
    }
    puVar3 = puStack_328;
    if ((puStack_328 != (undefined1 *)0x0) &&
       (iVar4 = FUN_00d0f7a0(0xffffffff,puStack_328), iVar4 == 1)) {
      operator_delete(puVar3);
    }
    (*local_a0)(0,&puStack_b0,&puStack_b0);
    FUN_0066981c(&puStack_158);
    puVar3 = local_160;
    if ((local_160 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_160), iVar4 == 1)
       ) {
      operator_delete(puVar3);
    }
    puVar3 = local_168;
    if ((local_168 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_168), iVar4 == 1)
       ) {
      operator_delete(puVar3);
    }
    pvVar2 = local_428;
    local_428 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      FUN_0066981c(pvVar2);
      operator_delete(pvVar2);
    }
    if ((long)local_408 < 0) {
      operator_delete(puStack_418);
    }
    FUN_0066f2b0(&local_3f0);
  }
LAB_00c22710:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c22770  FUN_00c22770 =====

void FUN_00c22770(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uStack_121;
  undefined4 local_120 [2];
  long local_118;
  undefined8 uStack_110;
  undefined1 **local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
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
  undefined1 *local_60;
  int *local_50;
  undefined4 *puStack_48;
  
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c21b68(&local_100);
  if ((char)puStack_d8 == '\x01') {
    *param_1 = (int)local_100;
    if ((long)puStack_e8 < 0) {
      FUN_005478d8(param_1 + 2,puStack_f8,local_f0);
      uVar5 = (ulong)puStack_d8 & 0xff;
    }
    else {
      puVar3 = (undefined8 *)((ulong)&local_100 | 8);
      uVar6 = *puVar3;
      uVar4 = puVar3[2];
      *(undefined8 *)(param_1 + 4) = puVar3[1];
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_1 + 6) = uVar4;
      uVar5 = 1;
    }
    iVar1 = (int)local_e0;
    param_1[8] = iVar1;
    *(undefined4 *)((long)param_1 + 0x23) = local_e0._3_4_;
    if (((uVar5 & 1) != 0) && ((long)puStack_e8 < 0)) {
      operator_delete(puStack_f8);
    }
  }
  else {
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00669500(&local_100);
    local_120[0] = *(undefined4 *)(param_2 + 0x50);
    plVar2 = *(long **)(param_2 + 0x48);
    puStack_48 = local_120;
    *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    local_118 = param_2;
    uStack_110 = param_3;
    local_108 = &local_100;
    local_50 = param_1;
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_50,FUN_00c28248,&uStack_121);
    if (*param_1 == 0) {
      if (*(char *)(param_2 + 0x1e8) == '\x01') {
        FUN_00b618b4(param_2 + 0x140,&local_100);
      }
      else {
        if (param_2 + 0x140 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_0066953c(param_2 + 0x140,&local_100);
        *(undefined1 *)(param_2 + 0x1e8) = 1;
      }
    }
    FUN_0066981c(&local_100);
  }
  return;
}


// ===== 00c2291c  FUN_00c2291c =====

/* WARNING: Removing unreachable block (ram,0x00c22b28) */
/* WARNING: Removing unreachable block (ram,0x00c22b48) */

void FUN_00c2291c(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 local_e0 [2];
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined4 local_b8 [2];
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined4 local_98;
  undefined3 uStack_94;
  undefined4 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined5 local_78;
  undefined2 uStack_73;
  undefined4 uStack_71;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined4 local_68 [2];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined1 local_40 [16];
  
  puVar10 = local_e0;
  if (*(char *)(param_2 + 0x54) == '\x01') {
    uStack_6a = 0;
    local_90 = 6;
    uStack_80 = 0;
    local_78 = 0;
    local_88 = (void *)0x0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    FUN_00547cac(&local_88,"Cannot set parameters on a stopped sender.",0x2a);
    local_68[0] = local_90;
    if ((char)uStack_71 < '\0') {
      FUN_005478d8(&local_60,local_88,uStack_80);
    }
    else {
      local_50 = CONCAT17((char)uStack_71,CONCAT25(uStack_73,local_78));
      uStack_58 = uStack_80;
      local_60 = local_88;
    }
    puVar10 = local_68;
    local_48 = CONCAT13(uStack_6d,uStack_71._1_3_);
    uStack_44 = (undefined3)
                (CONCAT13(uStack_6a,CONCAT12(uStack_6b,CONCAT11(uStack_6c,uStack_6d))) >> 8);
    uVar9 = FUN_005ecd5c(local_68);
    local_40 = FUN_005eceec(local_68[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x115b,uVar9,&DAT_001a2df6,local_40,
                 &DAT_001ca519);
    *param_1 = local_68[0];
  }
  else if ((*(byte *)(param_2 + 0x240) & 1) == 0) {
    uStack_6a = 0;
    local_90 = 6;
    uStack_80 = 0;
    local_78 = 0;
    local_88 = (void *)0x0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    FUN_00547cac(&local_88,
                 "Failed to set parameters since getParameters() has never been called on this sender"
                 ,0x53);
    local_b8[0] = local_90;
    if ((char)uStack_71 < '\0') {
      FUN_005478d8(&local_b0,local_88,uStack_80);
    }
    else {
      local_a0 = CONCAT17((char)uStack_71,CONCAT25(uStack_73,local_78));
      uStack_a8 = uStack_80;
      local_b0 = local_88;
    }
    puVar10 = local_b8;
    local_98 = CONCAT13(uStack_6d,uStack_71._1_3_);
    uStack_94 = (undefined3)
                (CONCAT13(uStack_6a,CONCAT12(uStack_6b,CONCAT11(uStack_6c,uStack_6d))) >> 8);
    uVar9 = FUN_005ecd5c(local_b8);
    local_40 = FUN_005eceec(local_b8[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x118b,uVar9,&DAT_001a2df6,local_40,
                 &DAT_001ca519);
    *param_1 = local_b8[0];
    if (local_a0 < 0) {
      FUN_005478d8(param_1 + 2,local_b0,uStack_a8);
      param_1[8] = local_98;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_94,local_98._3_1_);
      pvVar6 = local_b0;
      lVar7 = local_a0;
      goto joined_r0x00c22bf0;
    }
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x23f);
    bVar5 = *(byte *)((long)param_3 + 0x17);
    __n = *(size_t *)(param_2 + 0x230);
    if (-1 < (char)bVar4) {
      __n = (ulong)bVar4;
    }
    sVar1 = param_3[1];
    if (-1 < (char)bVar5) {
      sVar1 = (ulong)bVar5;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*(void **)(param_2 + 0x228);
      if (-1 < (char)bVar4) {
        __s1 = (undefined8 *)(param_2 + 0x228);
      }
      __s2 = (undefined8 *)*param_3;
      if (-1 < (char)bVar5) {
        __s2 = param_3;
      }
      iVar8 = memcmp(__s1,__s2,__n);
      if (iVar8 == 0) {
        FUN_005ecd48(param_1);
        return;
      }
    }
    uStack_6a = 0;
    local_90 = 7;
    uStack_80 = 0;
    local_78 = 0;
    local_88 = (void *)0x0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    FUN_00547cac(&local_88,
                 "Failed to set parameters since the transaction_id doesn\'t match the last value returned from getParameters()"
                 ,0x6c);
    local_e0[0] = local_90;
    if ((char)uStack_71 < '\0') {
      FUN_005478d8(&local_d8,local_88,uStack_80);
    }
    else {
      local_c8 = CONCAT17((char)uStack_71,CONCAT25(uStack_73,local_78));
      uStack_d0 = uStack_80;
      local_d8 = local_88;
    }
    local_c0 = CONCAT13(uStack_6d,uStack_71._1_3_);
    uStack_bc = (undefined3)
                (CONCAT13(uStack_6a,CONCAT12(uStack_6b,CONCAT11(uStack_6c,uStack_6d))) >> 8);
    uVar9 = FUN_005ecd5c(local_e0);
    local_40 = FUN_005eceec(local_e0[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x11bb,uVar9,&DAT_001a2df6,local_40,
                 &DAT_001ca519);
    *param_1 = local_e0[0];
    if (local_c8 < 0) {
      FUN_005478d8(param_1 + 2,local_d8,uStack_d0);
      param_1[8] = local_c0;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_bc,local_c0._3_1_);
      pvVar6 = local_d8;
      lVar7 = local_c8;
joined_r0x00c22bf0:
      if (lVar7 < 0) {
        operator_delete(pvVar6);
      }
      goto LAB_00c22ca0;
    }
  }
  uVar11 = *(undefined8 *)(puVar10 + 2);
  uVar9 = *(undefined8 *)(puVar10 + 6);
  uVar2 = puVar10[8];
  uVar3 = *(undefined4 *)((long)puVar10 + 0x23);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar10 + 4);
  *(undefined8 *)(param_1 + 2) = uVar11;
  *(undefined8 *)(param_1 + 6) = uVar9;
  param_1[8] = uVar2;
  *(undefined4 *)((long)param_1 + 0x23) = uVar3;
LAB_00c22ca0:
  if ((char)uStack_71 < '\0') {
    operator_delete(local_88);
  }
  return;
}


// ===== 00c22d20  FUN_00c22d20 =====

void FUN_00c22d20(int *param_1,long *param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  long *plVar3;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  int local_80 [2];
  undefined8 **local_78;
  ulong uStack_70;
  undefined7 local_68;
  byte bStack_61;
  undefined4 local_60;
  undefined3 uStack_5c;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbae40 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae40), iVar2 != 0)) {
    DAT_00dbae38 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae40);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae38 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae38,"RtpSenderBase::SetParameters",0,0,0,0,0,0);
    local_50 = DAT_00dbae38;
    pcStack_48 = "RtpSenderBase::SetParameters";
    local_58 = &local_50;
  }
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c2291c(param_1,param_2,param_3);
  if (*param_1 == 0) {
    local_90 = FUN_00433984;
    uStack_88 = 0;
    (**(code **)(*param_2 + 0x100))(local_80,param_2,param_3,auStack_a0,1);
    plVar3 = (long *)(param_1 + 2);
    *param_1 = local_80[0];
    if (param_1 != local_80) {
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        pppuVar1 = (undefined8 ***)local_78;
        if (-1 < (char)bStack_61) {
          uStack_70 = (ulong)bStack_61;
          pppuVar1 = &local_78;
        }
        FUN_00547f08(plVar3,pppuVar1,uStack_70);
      }
      else if ((char)bStack_61 < '\0') {
        FUN_00547fc0(plVar3,local_78,uStack_70);
      }
      else {
        *(ulong *)(param_1 + 4) = uStack_70;
        *plVar3 = (long)local_78;
        *(ulong *)(param_1 + 6) = CONCAT17(bStack_61,local_68);
      }
    }
    param_1[8] = local_60;
    *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_5c,local_60._3_1_);
    if ((char)bStack_61 < '\0') {
      operator_delete(local_78);
    }
    (*local_90)(0,auStack_a0,auStack_a0);
    if ((char)param_2[0x48] == '\x01') {
      if (*(char *)((long)param_2 + 0x23f) < '\0') {
        operator_delete((void *)param_2[0x45]);
      }
      *(undefined1 *)(param_2 + 0x48) = 0;
    }
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c22f50  FUN_00c22f50 =====

/* WARNING: Removing unreachable block (ram,0x00c2313c) */
/* WARNING: Removing unreachable block (ram,0x00c23138) */
/* WARNING: Removing unreachable block (ram,0x00c2319c) */

void FUN_00c22f50(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *local_150 [2];
  code *local_140;
  code *pcStack_138;
  undefined1 auStack_130 [8];
  void *local_128;
  char cStack_111;
  int local_108 [2];
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined4 local_e8;
  undefined3 uStack_e4;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  char **local_b8;
  char *local_b0;
  char *pcStack_a8;
  long *local_a0;
  undefined1 auStack_90 [16];
  code *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_00dbae50 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae50), iVar2 != 0)) {
    DAT_00dbae48 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae50);
  }
  local_b8 = (char **)0x0;
  pcStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae48 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae48,"RtpSenderBase::SetParametersAsync",0,0,0,0,0,0);
    local_b0 = DAT_00dbae48;
    pcStack_a8 = "RtpSenderBase::SetParametersAsync";
    local_b8 = &local_b0;
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c2291c(&local_e0,param_1,param_2);
  if ((int)local_e0 == 0) {
    local_a0 = param_1;
    (**(code **)(param_3 + 0x10))(1,param_3,auStack_90);
    uStack_78 = *(undefined8 *)(param_3 + 0x18);
    pcVar5 = *(code **)(param_3 + 0x10);
    *(code **)(param_3 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_3 + 0x18) = 0;
    local_80 = pcVar5;
    puVar4 = (undefined8 *)operator_new(0x30);
    *puVar4 = local_a0;
    (*pcVar5)(1,auStack_90,puVar4 + 2);
    lVar3 = *param_1;
    puVar4[5] = uStack_78;
    puVar4[4] = local_80;
    local_140 = FUN_00c284f4;
    pcStack_138 = FUN_00c283b8;
    local_80 = FUN_00433984;
    uStack_78 = 0;
    local_150[0] = puVar4;
    (**(code **)(lVar3 + 0x100))(auStack_130,param_1,param_2,local_150,0);
    if (cStack_111 < '\0') {
      operator_delete(local_128);
    }
    (*local_140)(0,local_150,local_150);
    (*local_80)(0,auStack_90,auStack_90);
  }
  else {
    local_108[0] = (int)local_e0;
    puVar4 = (undefined8 *)((ulong)&local_e0 | 8);
    uStack_f8 = puVar4[1];
    local_100 = (void *)*puVar4;
    local_f0 = puVar4[2];
    uStack_e4 = (undefined3)((ulong)local_c0 >> 0x20);
    local_e8 = local_c0._0_4_;
    (**(code **)(param_3 + 0x18))(param_3,local_108);
    if (local_f0 < 0) {
      operator_delete(local_100);
    }
  }
  if ((local_b8 != (char **)0x0) && (**local_b8 != '\0')) {
    FUN_0066d348(0x45,*local_b8,local_b8[1],0,0,0,0,0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c2324c  FUN_00c2324c =====

void FUN_00c2324c(long param_1,undefined8 *param_2)

{
  *(undefined8 **)(param_1 + 0x268) = param_2;
  if ((param_2 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x270) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c23274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,*(undefined4 *)(param_1 + 0x78));
    return;
  }
  return;
}


// ===== 00c2327c  FUN_00c2327c =====

undefined4 FUN_00c2327c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}


// ===== 00c23288  FUN_00c23288 =====

void FUN_00c23288(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x268);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_1 + 0x78));
  }
  *(undefined1 *)(param_1 + 0x270) = 1;
  return;
}


// ===== 00c232cc  FUN_00c232cc =====

/* WARNING: Removing unreachable block (ram,0x00c23328) */

void FUN_00c232cc(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *puVar2;
  byte bVar3;
  size_t __n;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar6 = (undefined8 *)(param_1 + 0x80);
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = *(undefined8 **)(param_1 + 0x88);
  while (puVar7 != puVar8) {
    puVar8 = puVar8 + -3;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  *(undefined8 **)(param_1 + 0x88) = puVar7;
  puVar8 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  do {
    if (puVar8 == puVar2) {
      return;
    }
    puVar9 = (undefined8 *)*puVar6;
    if (puVar9 != puVar7) {
      __n = puVar8[1];
      puVar5 = (undefined8 *)*puVar8;
      if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
        __n = (ulong)*(byte *)((long)puVar8 + 0x17);
        puVar5 = puVar8;
      }
      do {
        bVar3 = *(byte *)((long)puVar9 + 0x17);
        sVar1 = puVar9[1];
        if (-1 < (char)bVar3) {
          sVar1 = (ulong)bVar3;
        }
        if (sVar1 == __n) {
          __s1 = (undefined8 *)*puVar9;
          if (-1 < (char)bVar3) {
            __s1 = puVar9;
          }
          iVar4 = memcmp(__s1,puVar5,__n);
          if (iVar4 == 0) {
            puVar5 = puVar7;
            if (puVar9 != puVar7) goto LAB_00c23350;
            break;
          }
        }
        puVar9 = puVar9 + 3;
      } while (puVar9 != puVar7);
    }
    if (puVar7 < *(undefined8 **)(param_1 + 0x90)) {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*puVar8,puVar8[1]);
        puVar5 = puVar7 + 3;
      }
      else {
        uVar11 = puVar8[1];
        uVar10 = *puVar8;
        puVar7[2] = puVar8[2];
        puVar5 = puVar7 + 3;
        puVar7[1] = uVar11;
        *puVar7 = uVar10;
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_009d56fc(puVar6,puVar8);
    }
    *(undefined8 **)(param_1 + 0x88) = puVar5;
LAB_00c23350:
    puVar8 = puVar8 + 3;
    puVar7 = puVar5;
  } while( true );
}


// ===== 00c23454  FUN_00c23454 =====

void FUN_00c23454(long *param_1)

{
  (**(code **)(*param_1 + 0xd0))();
  if (((long *)param_1[0x4c] != (long *)0x0) && ((*(byte *)((long)param_1 + 0x54) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c234a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[0x4c] + 0x10))();
    return;
  }
  return;
}


// ===== 00c234ac  FUN_00c234ac =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00c234ac(long *param_1,long *param_2)

{
  size_t __n;
  char *******__s1;
  undefined8 *******__s2;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  void *local_b8 [2];
  char cStack_a1;
  undefined1 uStack_99;
  char *local_98;
  char *******pppppppcStack_90;
  undefined8 *******local_88;
  size_t local_80;
  byte bStack_71;
  char *******local_70;
  size_t local_68;
  undefined8 local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbae60 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbae60), iVar4 != 0)) {
    DAT_00dbae58 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae60);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae58 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae58,"RtpSenderBase::SetTrack",0,0,0,0,0,0);
    local_50 = DAT_00dbae58;
    pcStack_48 = "RtpSenderBase::SetTrack";
    local_58 = &local_50;
  }
  if (*(char *)((long)param_1 + 0x54) == '\x01') {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_sender.cc",0x1413,
                   "SetTrack can\'t be called on a stopped RtpSender.");
      uVar7 = 0;
      goto joined_r0x00c23844;
    }
LAB_00c236ec:
    uVar7 = 0;
    goto joined_r0x00c23844;
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))(&local_70,param_2);
    (**(code **)(*param_1 + 0x148))(&local_88,param_1);
    bVar2 = bStack_71;
    uVar8 = (uint)(char)local_60._7_1_;
    __n = local_68;
    if (-1 < (int)uVar8) {
      __n = (ulong)local_60._7_1_;
    }
    if (-1 < (char)bStack_71) {
      local_80 = (ulong)bStack_71;
    }
    if (__n == local_80) {
      __s1 = local_70;
      if (-1 < (int)uVar8) {
        __s1 = (char *******)&local_70;
      }
      __s2 = local_88;
      if (-1 < (char)bStack_71) {
        __s2 = &local_88;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      bVar3 = iVar4 != 0;
    }
    else {
      bVar3 = true;
    }
    if ((char)bVar2 < '\0') {
      operator_delete(local_88);
      uVar8 = (uint)local_60._7_1_;
    }
    if ((uVar8 >> 7 & 1) != 0) {
      operator_delete(local_70);
    }
    if (bVar3) {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        local_70 = (char *******)0x1c4447;
        local_68 = 0x1433;
        local_60 = &uStack_99;
        pppppppcStack_90 = (char *******)&local_70;
        local_98 = "SetTrack with ";
        (**(code **)(*param_2 + 0x20))(&local_88,param_2);
        (**(code **)(*param_1 + 0x148))(local_b8,param_1);
        FUN_00623bb0("\r\t\n\t\n\t",*pppppppcStack_90,*(undefined4 *)(pppppppcStack_90 + 1),local_98
                     ,&local_88," called on RtpSender with ",local_b8," track.");
        if (cStack_a1 < '\0') {
          operator_delete(local_b8[0]);
        }
        if ((char)bStack_71 < '\0') {
          operator_delete(local_88);
        }
      }
      goto LAB_00c236ec;
    }
  }
  if (param_1[0x42] == 0) {
    bVar3 = false;
    plVar9 = (long *)0x0;
    bVar1 = true;
  }
  else {
    (**(code **)(*param_1 + 0x170))(param_1);
    (**(code **)(*(long *)(param_1[0x42] + 8) + 8))((long *)(param_1[0x42] + 8),param_1 + 2);
    (**(code **)(*param_1 + 0x180))(param_1);
    plVar9 = (long *)param_1[0x42];
    if (plVar9 == (long *)0x0) {
      bVar3 = false;
      bVar1 = true;
    }
    else {
      bVar3 = (int)param_1[10] != 0;
      (**(code **)*plVar9)(plVar9);
      bVar1 = false;
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  if ((long *)param_1[0x42] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42] + 8))();
  }
  param_1[0x42] = (long)param_2;
  if (param_2 == (long *)0x0) {
LAB_00c237f0:
    if (bVar3) {
      lVar6 = 0x158;
      goto LAB_00c237f8;
    }
  }
  else {
    (**(code **)param_2[1])(param_2 + 1,param_1 + 2);
    (**(code **)(*param_1 + 0x168))(param_1);
    if ((param_1[0x42] == 0) || ((int)param_1[10] == 0)) goto LAB_00c237f0;
    (**(code **)(*param_1 + 0x150))(param_1);
    lVar6 = 0x178;
LAB_00c237f8:
    (**(code **)(*param_1 + lVar6))(param_1);
  }
  uVar5 = param_1[0x42];
  if (uVar5 != 0) {
    iVar4 = FUN_00d0f7a0(1,&DAT_00dbaec8);
    uVar5 = (ulong)(iVar4 + 1);
  }
  *(int *)(param_1 + 0xb) = (int)uVar5;
  if (!bVar1) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  uVar7 = 1;
joined_r0x00c23844:
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar7;
}


// ===== 00c238ec  FUN_00c238ec =====

void FUN_00c238ec(long *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uStack_151;
  undefined4 local_150 [2];
  long *local_148;
  byte *pbStack_140;
  undefined1 **local_138;
  char *pcStack_130;
  char local_124 [4];
  undefined1 *local_120;
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
  byte local_6c [4];
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbae70 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae70), iVar2 != 0)) {
    DAT_00dbae68 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae70);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae68 == '\0') {
    bVar1 = *(byte *)((long)param_1 + 0x54);
  }
  else {
    FUN_0066d348(0x42,DAT_00dbae68,"RtpSenderBase::SetSsrc",0,0,0,0,0,0);
    local_60 = DAT_00dbae68;
    pcStack_58 = "RtpSenderBase::SetSsrc";
    bVar1 = *(byte *)((long)param_1 + 0x54);
    local_68 = &local_60;
  }
  if (((bVar1 & 1) != 0) || (param_2 == (int)param_1[10])) goto LAB_00c23b20;
  if ((char)param_1[0x3d] == '\x01') {
    FUN_0066981c(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  if (param_1[0x42] == 0) {
    *(int *)(param_1 + 10) = param_2;
    if (param_2 == 0) goto LAB_00c23a58;
LAB_00c23a44:
    if (param_1[0x1f] == param_1[0x20]) {
      local_6c[0] = *(byte *)((long)param_1 + 0x13c);
    }
    else {
      local_6c[0] = 1;
    }
  }
  else {
    if ((int)param_1[10] == 0) {
      *(int *)(param_1 + 10) = param_2;
joined_r0x00c23a18:
      if (param_2 == 0) goto LAB_00c23a58;
      (**(code **)(*param_1 + 0x150))(param_1);
      (**(code **)(*param_1 + 0x178))(param_1);
      param_2 = (int)param_1[10];
    }
    else {
      (**(code **)(*param_1 + 0x158))(param_1);
      (**(code **)(*param_1 + 0x180))(param_1);
      *(int *)(param_1 + 10) = param_2;
      if (param_1[0x42] != 0) goto joined_r0x00c23a18;
    }
    if (param_2 != 0) goto LAB_00c23a44;
LAB_00c23a58:
    local_6c[0] = 0;
  }
  local_6c[0] = local_6c[0] & 1;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(&local_120);
  local_150[0] = (undefined4)param_1[10];
  pbStack_140 = local_6c;
  pcStack_130 = local_124;
  local_124[0] = '\0';
  local_148 = param_1;
  local_138 = &local_120;
  (**(code **)(*(long *)param_1[9] + 0x60))((long *)param_1[9],local_150,FUN_00c28568,&uStack_151);
  if (local_124[0] == '\x01') {
    if ((char)param_1[0x3d] == '\x01') {
      FUN_00b618b4(param_1 + 0x28,&local_120);
    }
    else {
      if (param_1 + 0x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0066953c(param_1 + 0x28,&local_120);
      *(undefined1 *)(param_1 + 0x3d) = 1;
    }
  }
  FUN_0066981c(&local_120);
LAB_00c23b20:
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c23bb8  FUN_00c23bb8 =====

void FUN_00c23bb8(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uStack_59;
  long *local_58;
  undefined1 local_50;
  undefined4 local_4c;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbae80 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbae80), iVar1 != 0)) {
    DAT_00dbae78 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae80);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae78 != '\0') {
    FUN_0066d348(0x42,DAT_00dbae78,"RtpSenderBase::Stop",0,0,0,0,0,0);
    local_40 = DAT_00dbae78;
    pcStack_38 = "RtpSenderBase::Stop";
    local_48 = &local_40;
  }
  if ((*(byte *)((long)param_1 + 0x54) & 1) == 0) {
    uVar2 = param_1[0x42];
    if (uVar2 != 0) {
      (**(code **)(*param_1 + 0x170))(param_1);
      (**(code **)(*(long *)(param_1[0x42] + 8) + 8))((long *)(param_1[0x42] + 8),param_1 + 2);
      uVar2 = param_1[0x42];
      if ((uVar2 != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 10), *(uint *)(param_1 + 10) != 0)) {
        (**(code **)(*param_1 + 0x180))(param_1);
        uVar2 = 1;
      }
    }
    local_4c = (undefined4)param_1[10];
    local_50 = (undefined1)uVar2;
    local_58 = param_1;
    (**(code **)(*(long *)param_1[9] + 0x60))((long *)param_1[9],&local_58,FUN_00c28918,&uStack_59);
    *(undefined1 *)((long)param_1 + 0x54) = 1;
    if ((char)param_1[0x3d] == '\x01') {
      FUN_0066981c(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x3d) = 0;
    }
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c23d68  FUN_00c23d68 =====

void FUN_00c23d68(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbae90 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbae90), iVar2 != 0)) {
    DAT_00dbae88 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbae90);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae88 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbae88,"RtpSenderBase::DetachTrackAndGetStopTask",0,0,0,0,0,0);
    local_50 = DAT_00dbae88;
    pcStack_48 = "RtpSenderBase::DetachTrackAndGetStopTask";
  }
  if (*(char *)((long)param_2 + 0x54) == '\x01') {
    param_1[2] = (long)FUN_00433984;
    param_1[3] = 0;
    goto joined_r0x00c23ec0;
  }
  if (param_2[0x42] == 0) {
LAB_00c23e74:
    uVar3 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x170))(param_2);
    (**(code **)(*(long *)(param_2[0x42] + 8) + 8))((long *)(param_2[0x42] + 8),param_2 + 2);
    if ((param_2[0x42] == 0) || ((int)param_2[10] == 0)) goto LAB_00c23e74;
    (**(code **)(*param_2 + 0x180))(param_2);
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_2 + 0x54) = 1;
  if ((char)param_2[0x3d] == '\x01') {
    FUN_0066981c(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x3d) = 0;
  }
  lVar1 = param_2[10];
  *param_1 = (long)param_2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(int *)((long)param_1 + 0xc) = (int)lVar1;
  param_1[2] = (long)FUN_004473ec;
  param_1[3] = (long)FUN_00c2896c;
joined_r0x00c23ec0:
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c23f40  FUN_00c23f40 =====

/* WARNING: Removing unreachable block (ram,0x00c24220) */
/* WARNING: Removing unreachable block (ram,0x00c24240) */
/* WARNING: Removing unreachable block (ram,0x00c244fc) */
/* WARNING: Removing unreachable block (ram,0x00c24514) */

void FUN_00c23f40(int *param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  size_t sVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 local_1a0 [8];
  void *local_198;
  undefined8 uStack_190;
  undefined5 local_188;
  undefined2 uStack_183;
  undefined4 uStack_181;
  undefined1 uStack_17d;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  int local_178 [2];
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  undefined4 local_158;
  undefined3 uStack_154;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined5 local_138;
  undefined2 uStack_133;
  undefined4 uStack_131;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  int local_a0 [2];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined3 uStack_7c;
  undefined1 local_78 [16];
  
  if (*(char *)((long)param_2 + 0x54) == '\x01') {
    uStack_12a = 0;
    local_150 = (undefined1 *)CONCAT44(local_150._4_4_,6);
    puStack_140 = (undefined1 *)0x0;
    local_138 = 0;
    puStack_148 = (undefined1 *)0x0;
    uStack_133 = 0;
    uStack_131 = 0;
    uStack_12d = 0;
    uStack_12c = 0;
    FUN_00547cac(&puStack_148,"Cannot disable encodings on a stopped sender.",0x2d);
    local_a0[0] = (int)local_150;
    if ((char)uStack_131 < '\0') {
      FUN_005478d8(&local_98,puStack_148,puStack_140);
    }
    else {
      local_88 = CONCAT17((char)uStack_131,CONCAT25(uStack_133,local_138));
      uStack_90 = puStack_140;
      local_98 = puStack_148;
    }
    local_80 = CONCAT13(uStack_12d,uStack_131._1_3_);
    uStack_7c = (undefined3)
                (CONCAT13(uStack_12a,CONCAT12(uStack_12b,CONCAT11(uStack_12c,uStack_12d))) >> 8);
    uVar7 = FUN_005ecd5c(local_a0);
    _local_1a0 = FUN_005eceec(local_a0[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x19b3,uVar7,&DAT_001a2df6,local_1a0,
                 &DAT_001ca519);
    *param_1 = local_a0[0];
    *(undefined8 *)(param_1 + 4) = uStack_90;
    *(undefined1 **)(param_1 + 2) = local_98;
    *(undefined8 *)(param_1 + 6) = local_88;
    param_1[8] = local_80;
    *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_7c,local_80._3_1_);
    if ((char)uStack_131 < '\0') {
      operator_delete(puStack_148);
    }
  }
  else {
    if (*param_3 == param_3[1]) {
      FUN_005ecd48(param_1);
      return;
    }
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    local_138 = 0xaaaaaaaaaa;
    uStack_133 = 0xaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_131 = 0xaaaaaaaa;
    uStack_12d = 0xaa;
    uStack_12c = 0xaa;
    uStack_12b = 0xaa;
    uStack_12a = 0xaa;
    uStack_129 = 0xaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*param_2 + 0x110))(&local_150);
    puVar8 = puStack_e8;
    puVar16 = local_f0;
    puVar14 = (undefined8 *)*param_3;
    puVar13 = (undefined8 *)param_3[1];
    puVar12 = puVar14;
    if (puVar14 != puVar13) {
LAB_00c24024:
      puVar15 = puVar14;
      if (puVar16 != puVar8) {
        bVar9 = *(byte *)((long)puVar12 + 0x17);
        puVar11 = puVar16 + 0x14;
        sVar1 = puVar12[1];
        if (-1 < (char)bVar9) {
          sVar1 = (ulong)bVar9;
        }
        do {
          bVar5 = *(byte *)((long)puVar11 + 0x17);
          sVar4 = puVar11[1];
          if (-1 < (char)bVar5) {
            sVar4 = (ulong)bVar5;
          }
          if (sVar4 == sVar1) {
            puVar15 = (undefined8 *)*puVar11;
            if (-1 < (char)bVar5) {
              puVar15 = puVar11;
            }
            puVar2 = (undefined8 *)*puVar12;
            if (-1 < (char)bVar9) {
              puVar2 = puVar12;
            }
            iVar6 = memcmp(puVar15,puVar2,sVar1);
            if (iVar6 == 0) goto code_r0x00c24098;
          }
          puVar2 = puVar11 + 0x12;
          puVar11 = puVar11 + 0x26;
          puVar15 = puVar12;
          if (puVar2 == puVar8) break;
        } while( true );
      }
      uStack_17a = 0;
      local_1a0._0_4_ = 3;
      uStack_190 = 0;
      local_188 = 0;
      local_198 = (void *)0x0;
      uStack_183 = 0;
      uStack_181 = 0;
      uStack_17d = 0;
      uStack_17c = 0;
      FUN_00547cac(&local_198,"RID: ",5);
      uVar3 = puVar15[1];
      puVar12 = (undefined8 *)*puVar15;
      if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)puVar15 + 0x17);
        puVar12 = puVar15;
      }
      FUN_00547cac(&local_198,puVar12,uVar3);
      FUN_00547cac(&local_198," does not refer to a valid layer.",0x21);
      local_178[0] = local_1a0._0_4_;
      if ((char)uStack_181 < '\0') {
        FUN_005478d8(&local_170,local_198,uStack_190);
      }
      else {
        local_160 = CONCAT17((char)uStack_181,CONCAT25(uStack_183,local_188));
        uStack_168 = uStack_190;
        local_170 = local_198;
      }
      local_158 = CONCAT13(uStack_17d,uStack_181._1_3_);
      uStack_154 = (undefined3)
                   (CONCAT13(uStack_17a,CONCAT12(uStack_17b,CONCAT11(uStack_17c,uStack_17d))) >> 8);
      uVar7 = FUN_005ecd5c(local_178);
      local_78 = FUN_005eceec(local_178[0]);
      FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x1a33,uVar7,&DAT_001a2df6,local_78,
                   &DAT_001ca519);
      *param_1 = local_178[0];
      if (local_160 < 0) {
        FUN_005478d8(param_1 + 2,local_170,uStack_168);
        param_1[8] = local_158;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_154,local_158._3_1_);
        if (local_160 < 0) {
          operator_delete(local_170);
        }
      }
      else {
        *(undefined8 *)(param_1 + 4) = uStack_168;
        *(void **)(param_1 + 2) = local_170;
        *(long *)(param_1 + 6) = local_160;
        param_1[8] = local_158;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_154,local_158._3_1_);
      }
      if ((char)uStack_181 < '\0') {
        operator_delete(local_198);
      }
      goto LAB_00c24584;
    }
LAB_00c240a4:
    puVar12 = puStack_e8;
    puVar14 = local_f0;
    if ((int)param_2[10] == 0) {
      FUN_00c217e0(param_3,param_2 + 0x1f);
      if ((char)param_2[0x48] == '\x01') {
        if (*(char *)((long)param_2 + 0x23f) < '\0') {
          operator_delete((void *)param_2[0x45]);
        }
        *(undefined1 *)(param_2 + 0x48) = 0;
      }
      FUN_005ecd48(param_1);
    }
    else {
      for (; puVar14 != puVar12; puVar14 = puVar14 + 0x26) {
        puVar13 = (undefined8 *)*param_3;
        puVar16 = (undefined8 *)param_3[1];
        if (puVar13 != puVar16) {
          bVar9 = *(byte *)((long)puVar14 + 0xb7);
          sVar1 = puVar14[0x15];
          if (-1 < (char)bVar9) {
            sVar1 = (ulong)bVar9;
          }
          do {
            bVar5 = *(byte *)((long)puVar13 + 0x17);
            sVar4 = puVar13[1];
            if (-1 < (char)bVar5) {
              sVar4 = (ulong)bVar5;
            }
            if (sVar1 == sVar4) {
              puVar8 = (undefined8 *)puVar14[0x14];
              if (-1 < (char)bVar9) {
                puVar8 = puVar14 + 0x14;
              }
              puVar15 = (undefined8 *)*puVar13;
              if (-1 < (char)bVar5) {
                puVar15 = puVar13;
              }
              iVar6 = memcmp(puVar8,puVar15,sVar1);
              if (iVar6 == 0) {
                bVar9 = 0;
                goto LAB_00c240b8;
              }
            }
            puVar13 = puVar13 + 3;
          } while (puVar13 != puVar16);
        }
        bVar9 = 1;
LAB_00c240b8:
        *(byte *)((long)puVar14 + 0x9c) = bVar9 & *(byte *)((long)puVar14 + 0x9c);
      }
      lVar10 = *param_2;
      *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
      *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(lVar10 + 0x118))(param_1,param_2,&local_150);
      if (*param_1 == 0) {
        puVar12 = (undefined8 *)*param_3;
        puVar14 = (undefined8 *)param_3[1];
        if (puVar12 != puVar14) {
          puVar13 = (undefined8 *)param_2[0x4a];
          do {
            puVar16 = (undefined8 *)param_2[0x49];
            if (puVar16 != puVar13) {
              sVar1 = puVar12[1];
              puVar8 = (undefined8 *)*puVar12;
              if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
                sVar1 = (ulong)*(byte *)((long)puVar12 + 0x17);
                puVar8 = puVar12;
              }
              do {
                bVar9 = *(byte *)((long)puVar16 + 0x17);
                sVar4 = puVar16[1];
                if (-1 < (char)bVar9) {
                  sVar4 = (ulong)bVar9;
                }
                if (sVar4 == sVar1) {
                  puVar15 = (undefined8 *)*puVar16;
                  if (-1 < (char)bVar9) {
                    puVar15 = puVar16;
                  }
                  iVar6 = memcmp(puVar15,puVar8,sVar1);
                  if (iVar6 == 0) {
                    puVar8 = puVar13;
                    if (puVar16 != puVar13) goto LAB_00c24348;
                    break;
                  }
                }
                puVar16 = puVar16 + 3;
              } while (puVar16 != puVar13);
            }
            if (puVar13 < (undefined8 *)param_2[0x4b]) {
              if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              if (*(char *)((long)puVar12 + 0x17) < '\0') {
                FUN_005478d8(puVar13,*puVar12,puVar12[1]);
                puVar8 = puVar13 + 3;
              }
              else {
                uVar17 = puVar12[1];
                uVar7 = *puVar12;
                puVar13[2] = puVar12[2];
                puVar8 = puVar13 + 3;
                puVar13[1] = uVar17;
                *puVar13 = uVar7;
              }
            }
            else {
              puVar8 = (undefined8 *)FUN_009d56fc(param_2 + 0x49,puVar12);
            }
            param_2[0x4a] = (long)puVar8;
LAB_00c24348:
            puVar12 = puVar12 + 3;
            puVar13 = puVar8;
          } while (puVar12 != puVar14);
        }
        if ((char)param_2[0x48] == '\x01') {
          if (*(char *)((long)param_2 + 0x23f) < '\0') {
            operator_delete((void *)param_2[0x45]);
          }
          *(undefined1 *)(param_2 + 0x48) = 0;
        }
      }
    }
LAB_00c24584:
    FUN_0066981c(&local_150);
  }
  return;
code_r0x00c24098:
  puVar12 = puVar12 + 3;
  if (puVar12 == puVar13) goto LAB_00c240a4;
  goto LAB_00c24024;
}


// ===== 00c245c4  FUN_00c245c4 =====

void FUN_00c245c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int local_30 [2];
  long local_28;
  undefined1 uStack_1;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_30[0] = *(int *)(param_1 + 0x50);
  if ((local_30[0] != 0) && ((*(byte *)(param_1 + 0x54) & 1) == 0)) {
    local_28 = param_1;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
              (*(long **)(param_1 + 0x48),local_30,FUN_00c289c0,&uStack_1);
  }
  return;
}


// ===== 00c24648  FUN_00c24648 =====

void FUN_00c24648(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int local_30 [2];
  long local_28;
  undefined1 uStack_1;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_30[0] = *(int *)(param_1 + 0x48);
  if ((local_30[0] != 0) && ((*(byte *)(param_1 + 0x4c) & 1) == 0)) {
    local_28 = param_1 + -8;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x60))
              (*(long **)(param_1 + 0x40),local_30,FUN_00c289c0,&uStack_1);
  }
  return;
}


// ===== 00c246d0  FUN_00c246d0 =====

int FUN_00c246d0(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d4c078;
  param_1[1] = &PTR_FUN_00d4c0b8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 3));
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 3));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  return iVar1;
}


// ===== 00c24728  FUN_00c24728 =====

int FUN_00c24728(undefined8 *param_1)

{
  int iVar1;
  
  param_1[-1] = &PTR_FUN_00d4c078;
  *param_1 = &PTR_FUN_00d4c0b8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  return iVar1;
}


// ===== 00c24784  FUN_00c24784 =====

void FUN_00c24784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c078;
  param_1[1] = &PTR_FUN_00d4c0b8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 3));
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 3));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  operator_delete(param_1);
  return;
}


// ===== 00c247e8  FUN_00c247e8 =====

void FUN_00c247e8(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d4c078;
  *param_1 = &PTR_FUN_00d4c0b8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  operator_delete(param_1 + -1);
  return;
}


// ===== 00c24854  FUN_00c24854 =====

ulong FUN_00c24854(long param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char **local_a0;
  char *local_98;
  char *pcStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined2 local_74 [2];
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00dbaea0 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbaea0), iVar3 != 0)) {
    DAT_00dbae98 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaea0);
  }
  local_a0 = (char **)0x0;
  pcStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbae98 != '\0') {
    local_70 = "sample_rate";
    pcStack_68 = "number_of_frames";
    local_88 = (long)param_4;
    local_74[0] = 0x203;
    local_a0 = &local_98;
    uStack_80 = param_6;
    FUN_0066d348(0x42,DAT_00dbae98,"LocalAudioSinkAdapter::OnData",0,2,&local_70,local_74,&local_88,
                 0);
    local_98 = DAT_00dbae98;
    pcStack_90 = "LocalAudioSinkAdapter::OnData";
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    *(undefined4 *)(param_1 + 0x40) = uVar1;
  }
  uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  uVar5 = (ulong)uVar2;
  if ((local_a0 != (char **)0x0) && (**local_a0 != '\0')) {
    uVar5 = FUN_0066d348(0x45,*local_a0,local_a0[1],0,0,0,0,0,0);
  }
  return uVar5;
}


// ===== 00c24a24  FUN_00c24a24 =====

int FUN_00c24a24(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  return iVar1;
}


// ===== 00c24a5c  FUN_00c24a5c =====

int FUN_00c24a5c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 8) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00c24a94  FUN_00c24a94 =====

void FUN_00c24a94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2d0);
  FUN_00c24b64(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined4 *)(puVar1 + 0x59) = 0;
  *param_1 = puVar1;
  *puVar1 = &PTR_FUN_00d4c570;
  puVar1[1] = &PTR_FUN_00d4c610;
  puVar1[2] = &PTR_FUN_00d4c7a8;
  puVar1[3] = &PTR_FUN_00d4c7d0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 0x59);
  }
  return;
}


// ===== 00c24b64  FUN_00c24b64 =====

int FUN_00c24b64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_x6;
  undefined8 *puVar3;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d4c540;
  FUN_00c20f54(param_1 + 1);
  *param_1 = &PTR_FUN_00d4c0e0;
  param_1[1] = &PTR_FUN_00d4c168;
  param_1[2] = &PTR_FUN_00d4c300;
  param_1[3] = &PTR_FUN_00d4c328;
  param_1[0x54] = in_x6;
  FUN_00c2a36c(param_1 + 0x55,param_3,param_1);
  puVar3 = (undefined8 *)param_1[0x55];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
  }
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[1] = param_3;
  puVar2[2] = puVar3;
  *puVar2 = &PTR_FUN_00d4c7f8;
  *(undefined4 *)(puVar2 + 3) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 3);
  }
  param_1[0x56] = puVar2;
  *(undefined1 *)(param_1 + 0x57) = 0;
  puVar3 = (undefined8 *)operator_new(0x48);
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00d4c078;
  puVar3[1] = &PTR_FUN_00d4c0b8;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(puVar3 + 3),(pthread_mutexattr_t *)&local_38);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  param_1[0x58] = puVar3;
  return iVar1;
}


// ===== 00c24c8c  FUN_00c24c8c =====

void FUN_00c24c8c(long *param_1)

{
  long *plVar1;
  
  param_1[-1] = (long)&PTR_FUN_00d4c0e0;
  *param_1 = (long)&PTR_FUN_00d4c168;
  param_1[1] = (long)&PTR_FUN_00d4c300;
  param_1[2] = (long)&PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x54]);
  (**(code **)(*param_1 + 0xe8))(param_1);
  plVar1 = (long *)param_1[0x57];
  param_1[0x57] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  FUN_00c21194(param_1);
  return;
}


// ===== 00c24d28  FUN_00c24d28 =====

void FUN_00c24d28(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-2] = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + -1;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  *param_1 = &PTR_FUN_00d4c300;
  param_1[1] = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x53]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  FUN_00c21194(plVar2);
  return;
}


// ===== 00c24dcc  FUN_00c24dcc =====

void FUN_00c24dcc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-3] = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + -2;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  param_1[-1] = &PTR_FUN_00d4c300;
  *param_1 = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x52]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
  }
  FUN_00c21194(plVar2);
  return;
}


// ===== 00c24e70  FUN_00c24e70 =====

void FUN_00c24e70(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc24e78);
  (*pcVar1)();
}


// ===== 00c24e78  FUN_00c24e78 =====

void FUN_00c24e78(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc24e80);
  (*pcVar1)();
}


// ===== 00c24e80  FUN_00c24e80 =====

void FUN_00c24e80(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc24e88);
  (*pcVar1)();
}


// ===== 00c24e88  FUN_00c24e88 =====

void FUN_00c24e88(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc24e90);
  (*pcVar1)();
}


// ===== 00c24e90  FUN_00c24e90 =====

byte FUN_00c24e90(long param_1)

{
  ulong uVar1;
  undefined1 uStack_31;
  long local_30;
  byte *local_28;
  long *plStack_20;
  byte local_14 [4];
  
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_sender.cc",0x1e1b,
                   "CanInsertDtmf: Sender does not have SSRC.");
    }
    local_14[0] = 0;
  }
  else {
    local_28 = local_14;
    plStack_20 = &local_30;
    local_14[0] = 0xaa;
    local_30 = param_1;
    (**(code **)(**(long **)(param_1 + 0x50) + 0x60))
              (*(long **)(param_1 + 0x50),&local_28,FUN_00c29ddc,&uStack_31);
  }
  return local_14[0] & 1;
}


// ===== 00c24f3c  FUN_00c24f3c =====

byte FUN_00c24f3c(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined1 uStack_51;
  int local_50 [2];
  long local_48;
  undefined4 *puStack_40;
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  byte *local_28;
  int *piStack_20;
  byte local_14 [4];
  
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    local_50[0] = *(int *)(param_1 + 0x58);
    local_30 = param_3;
    uStack_2c = param_2;
    if (local_50[0] != 0) {
      puStack_40 = &uStack_2c;
      local_38 = &local_30;
      local_28 = local_14;
      piStack_20 = local_50;
      local_14[0] = 0xaa;
      local_48 = param_1;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x60))
                (*(long **)(param_1 + 0x50),&local_28,FUN_00c29e34,&uStack_51);
      goto LAB_00c24fb4;
    }
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_sender.cc",0x1e93,
                   "InsertDtmf: Sender does not have SSRC.");
    }
  }
  local_14[0] = 0;
LAB_00c24fb4:
  return local_14[0] & 1;
}


// ===== 00c24ff4  FUN_00c24ff4 =====

void FUN_00c24ff4(long *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbaeb0 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbaeb0), iVar3 != 0)) {
    DAT_00dbaea8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaeb0);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaea8 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaea8,"AudioRtpSender::OnChanged",0,0,0,0,0,0);
    local_40 = DAT_00dbaea8;
    pcStack_38 = "AudioRtpSender::OnChanged";
  }
  bVar2 = *(byte *)(param_1 + 0x57);
  bVar1 = (**(code **)(*(long *)param_1[0x43] + 0x30))();
  if (bVar2 != (bVar1 & 1)) {
    bVar2 = (**(code **)(*(long *)param_1[0x43] + 0x30))();
    *(byte *)(param_1 + 0x57) = bVar2 & 1;
    if ((param_1[0x43] != 0) && ((int)param_1[0xb] != 0)) {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c25154  FUN_00c25154 =====

void FUN_00c25154(long param_1)

{
  FUN_00c24ff4(param_1 + -0x18);
  return;
}


// ===== 00c25160  FUN_00c25160 =====

void FUN_00c25160(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x218);
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x2c0));
                    /* WARNING: Could not recover jumptable at 0x00c251b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c251d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000000000 + 0x58))(0,*(undefined8 *)(param_1 + 0x2c0));
  return;
}


// ===== 00c251dc  FUN_00c251dc =====

void FUN_00c251dc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x210);
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x2b8));
                    /* WARNING: Could not recover jumptable at 0x00c25234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c25254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000000000 + 0x58))(0,*(undefined8 *)(param_1 + 0x2b8));
  return;
}


// ===== 00c25258  FUN_00c25258 =====

void FUN_00c25258(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x218) + 0x30))();
  plVar2 = *(long **)(param_1 + 0x218);
  *(byte *)(param_1 + 0x2b8) = bVar1 & 1;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined8 *)(param_1 + 0x2c0));
                    /* WARNING: Could not recover jumptable at 0x00c252c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c252e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000000000 + 0x50))(0,*(undefined8 *)(param_1 + 0x2c0));
  return;
}


// ===== 00c252ec  FUN_00c252ec =====

void FUN_00c252ec(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x210) + 0x30))();
  plVar2 = *(long **)(param_1 + 0x210);
  *(byte *)(param_1 + 0x2b0) = bVar1 & 1;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined8 *)(param_1 + 0x2b8));
                    /* WARNING: Could not recover jumptable at 0x00c2535c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c2537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000000000 + 0x50))(0,*(undefined8 *)(param_1 + 0x2b8));
  return;
}


// ===== 00c25380  FUN_00c25380 =====

void FUN_00c25380(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x218);
  if (((plVar1 != (long *)0x0) && (*(int *)(param_1 + 0x58) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x2a0), plVar2 != (long *)0x0)) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1,*(undefined4 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00c253f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00c2540c  FUN_00c2540c =====

void FUN_00c2540c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x210);
  if (((plVar1 != (long *)0x0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x298), plVar2 != (long *)0x0)) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1,*(undefined4 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00c25480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00c25498  FUN_00c25498 =====

void FUN_00c25498(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x218);
  if (((plVar1 != (long *)0x0) && (*(int *)(param_1 + 0x58) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x2a0), plVar2 != (long *)0x0)) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,*(undefined4 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00c2550c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00c25524  FUN_00c25524 =====

void FUN_00c25524(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x210);
  if (((plVar1 != (long *)0x0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x298), plVar2 != (long *)0x0)) {
    (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,*(undefined4 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00c25598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00c255b0  FUN_00c255b0 =====

void FUN_00c255b0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x2b0);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c255c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c255d0  FUN_00c255d0 =====

void FUN_00c255d0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x2a8);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c255e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c255f0  FUN_00c255f0 =====

void FUN_00c255f0(undefined4 *param_1)

{
  void *local_40;
  undefined8 uStack_38;
  undefined5 local_30;
  undefined2 uStack_2b;
  undefined4 uStack_29;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  
  uStack_22 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_40 = (void *)0x0;
  uStack_2b = 0;
  uStack_29 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  FUN_00547cac(&local_40,"Generating key frames for audio is not supported.",0x31);
  *param_1 = 1;
  if ((char)uStack_29 < '\0') {
    FUN_005478d8(param_1 + 2,local_40,uStack_38);
    param_1[8] = CONCAT13(uStack_25,uStack_29._1_3_);
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_22,CONCAT12(uStack_23,CONCAT11(uStack_24,uStack_25)));
    if ((char)uStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_38;
    *(void **)(param_1 + 2) = local_40;
    *(ulong *)(param_1 + 6) = CONCAT17((char)uStack_29,CONCAT25(uStack_2b,local_30));
    param_1[8] = CONCAT13(uStack_25,uStack_29._1_3_);
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_22,CONCAT12(uStack_23,CONCAT11(uStack_24,uStack_25)));
  }
  return;
}


// ===== 00c256b4  FUN_00c256b4 =====

void FUN_00c256b4(undefined4 *param_1)

{
  void *local_40;
  undefined8 uStack_38;
  undefined5 local_30;
  undefined2 uStack_2b;
  undefined4 uStack_29;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  
  uStack_22 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_40 = (void *)0x0;
  uStack_2b = 0;
  uStack_29 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  FUN_00547cac(&local_40,"Generating key frames for audio is not supported.",0x31);
  *param_1 = 1;
  if ((char)uStack_29 < '\0') {
    FUN_005478d8(param_1 + 2,local_40,uStack_38);
    param_1[8] = CONCAT13(uStack_25,uStack_29._1_3_);
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_22,CONCAT12(uStack_23,CONCAT11(uStack_24,uStack_25)));
    if ((char)uStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_38;
    *(void **)(param_1 + 2) = local_40;
    *(ulong *)(param_1 + 6) = CONCAT17((char)uStack_29,CONCAT25(uStack_2b,local_30));
    param_1[8] = CONCAT13(uStack_25,uStack_29._1_3_);
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_22,CONCAT12(uStack_23,CONCAT11(uStack_24,uStack_25)));
  }
  return;
}


// ===== 00c25778  FUN_00c25778 =====

void FUN_00c25778(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uStack_115;
  byte local_114 [4];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  byte *pbStack_100;
  undefined1 **local_f8;
  undefined2 local_f0;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  byte *local_68;
  undefined4 *puStack_60;
  byte local_54 [4];
  
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    return;
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897504(&local_c0);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x218) + 0x30))();
  if ((uVar1 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x218);
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    lVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (lVar2 != 0) {
      plVar5 = *(long **)(param_1 + 0x218);
      if (plVar5 != (long *)0x0) {
        (**(code **)*plVar5)(plVar5);
      }
      plVar3 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5);
      uVar1 = (**(code **)(*plVar3 + 0x28))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if ((uVar1 & 1) != 0) goto LAB_00c258ec;
      plVar4 = *(long **)(param_1 + 0x218);
      if (plVar4 != (long *)0x0) {
        (**(code **)*plVar4)(plVar4);
      }
      plVar5 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4);
      (**(code **)(*plVar5 + 0x58))(&local_110);
      local_c0 = (undefined1 *)CONCAT44(uStack_10c,local_110);
      local_a0 = (undefined1 *)CONCAT62(local_a0._2_6_,local_f0);
      puStack_b8 = puStack_108;
      puStack_a8 = (undefined1 *)local_f8;
      local_b0 = pbStack_100;
      FUN_005e7520(&puStack_98,auStack_e8);
      local_78 = (undefined1 *)CONCAT62(local_78._2_6_,local_c8);
      FUN_00897538(&local_110);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
LAB_00c258ec:
  local_114[0] = (**(code **)(**(long **)(param_1 + 0x218) + 0x30))();
  local_110 = *(undefined4 *)(param_1 + 0x58);
  pbStack_100 = local_114;
  puStack_60 = &local_110;
  local_68 = local_54;
  local_114[0] = local_114[0] & 1;
  local_54[0] = 0xaa;
  puStack_108 = (undefined1 *)param_1;
  local_f8 = &local_c0;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x60))
            (*(long **)(param_1 + 0x50),&local_68,FUN_00c29e9c,&uStack_115);
  if (((local_54[0] & 1) == 0) && (uVar1 = FUN_004249b0(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f6220,"../../pc/rtp_sender.cc",0x2163,"SetAudioSend: ssrc is incorrect: ",
                 *(undefined4 *)(param_1 + 0x58));
  }
  FUN_00897538(&local_c0);
  return;
}


// ===== 00c259ac  FUN_00c259ac =====

void FUN_00c259ac(long param_1)

{
  FUN_00c25778(param_1 + -8);
  return;
}


// ===== 00c259b8  FUN_00c259b8 =====

void FUN_00c259b8(long param_1)

{
  undefined1 uStack_21;
  undefined4 local_20 [2];
  long local_18;
  
  local_20[0] = *(undefined4 *)(param_1 + 0x58);
  local_18 = param_1;
  (**(code **)(**(long **)(param_1 + 0x50) + 0x60))
            (*(long **)(param_1 + 0x50),local_20,FUN_00c29f18,&uStack_21);
  return;
}


// ===== 00c25a08  FUN_00c25a08 =====

void FUN_00c25a08(long param_1)

{
  undefined1 uStack_21;
  undefined4 local_20 [2];
  long local_18;
  
  local_20[0] = *(undefined4 *)(param_1 + 0x50);
  local_18 = param_1 + -8;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
            (*(long **)(param_1 + 0x48),local_20,FUN_00c29f18,&uStack_21);
  return;
}


// ===== 00c25a58  FUN_00c25a58 =====

void FUN_00c25a58(long param_1,undefined4 param_2)

{
  long *plVar1;
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
  
  if (*(long *)(param_1 + 0x210) != 0) {
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
    plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x210) + 0x18))();
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2,0,&local_70,0);
    FUN_00897538(&local_70);
  }
  return;
}


// ===== 00c25ae0  FUN_00c25ae0 =====

void FUN_00c25ae0(long param_1,undefined4 param_2)

{
  long *plVar1;
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
  
  if (*(long *)(param_1 + 0x208) != 0) {
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
    plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x208) + 0x18))();
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2,0,&local_70,0);
    FUN_00897538(&local_70);
  }
  return;
}


// ===== 00c25b68  FUN_00c25b68 =====

void FUN_00c25b68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2a0);
  FUN_00c20f54(puVar1,param_2,param_3,param_4,param_5,param_6,1,param_7,param_8);
  *param_1 = puVar1;
  *puVar1 = &PTR_FUN_00d4c8f0;
  puVar1[1] = &PTR_FUN_00d4ca98;
  puVar1[2] = &PTR_FUN_00d4cac0;
  puVar1[0x53] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar1 + 0x29c);
  }
  return;
}


// ===== 00c25c34  FUN_00c25c34 =====

void FUN_00c25c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c4f0;
  param_1[1] = &PTR_FUN_00d4c518;
  param_1 = param_1 + -1;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  return;
}


// ===== 00c25c7c  FUN_00c25c7c =====

void FUN_00c25c7c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d4c4f0;
  *param_1 = &PTR_FUN_00d4c518;
  param_1 = param_1 + -2;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  return;
}


// ===== 00c25cc4  FUN_00c25cc4 =====

void FUN_00c25cc4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc25ccc);
  (*pcVar1)();
}


// ===== 00c25ccc  FUN_00c25ccc =====

void FUN_00c25ccc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc25cd4);
  (*pcVar1)();
}


// ===== 00c25cd4  FUN_00c25cd4 =====

void FUN_00c25cd4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc25cdc);
  (*pcVar1)();
}


// ===== 00c25cdc  FUN_00c25cdc =====

void FUN_00c25cdc(long *param_1)

{
  int iVar1;
  long *plVar2;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbaec0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaec0), iVar1 != 0)) {
    DAT_00dbaeb8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaec0);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaeb8 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaeb8,"VideoRtpSender::OnChanged",0,0,0,0,0,0);
    local_40 = DAT_00dbaeb8;
    pcStack_38 = "VideoRtpSender::OnChanged";
  }
  plVar2 = (long *)param_1[0x42];
  if (plVar2 == (long *)0x0) {
    iVar1 = (**(code **)(lRam0000000000000000 + 0x60))();
  }
  else {
    (**(code **)*plVar2)(plVar2);
    iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if ((((int)param_1[0x53] != iVar1) && (*(int *)(param_1 + 0x53) = iVar1, param_1[0x42] != 0)) &&
     ((int)param_1[10] != 0)) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00c25e68  FUN_00c25e68 =====

void FUN_00c25e68(long param_1)

{
  FUN_00c25cdc(param_1 + -0x10);
  return;
}


// ===== 00c25e74  FUN_00c25e74 =====

void FUN_00c25e74(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x210);
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
    *(undefined4 *)(param_1 + 0x298) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00c25ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  uVar1 = (**(code **)(lRam0000000000000000 + 0x60))();
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  return;
}


// ===== 00c25ef4  FUN_00c25ef4 =====

void FUN_00c25ef4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00c25f00  FUN_00c25f00 =====

/* WARNING: Removing unreachable block (ram,0x00c263e4) */

void FUN_00c25f00(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *__s2;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long *plVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 uStack_1a9;
  undefined4 local_1a8 [2];
  void *local_1a0;
  code *pcStack_198;
  long local_190;
  undefined4 local_188;
  undefined3 uStack_184;
  long *local_180;
  void *local_178;
  code *pcStack_170;
  undefined5 local_168;
  undefined2 uStack_163;
  uint uStack_161;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined4 local_158 [2];
  void *local_150;
  code *pcStack_148;
  long local_140;
  undefined4 local_138;
  undefined3 uStack_134;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 local_80 [2] [16];
  
  if (((*(byte *)((long)param_2 + 0x54) & 1) != 0) || ((int)param_2[10] == 0)) {
    uVar11 = FUN_004022fc();
    if ((uVar11 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_sender.cc",0x23e2,
                   "Tried to generate key frame for sender that is stopped or has no media channel."
                  );
    }
    FUN_005ecd48(param_1);
    return;
  }
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_2 + 0xf8))(&local_130,param_2,1,0);
  puVar8 = puStack_c8;
  puVar10 = local_d0;
  puVar16 = (undefined8 *)*param_3;
  puVar13 = (undefined8 *)param_3[1];
  puVar20 = puVar16;
  if (puVar16 != puVar13) {
LAB_00c25f9c:
    cVar5 = *(char *)((long)puVar20 + 0x17);
    sVar15 = (size_t)cVar5;
    if ((long)sVar15 < 0) {
      if (puVar20[1] != 0) goto LAB_00c25fb8;
LAB_00c263f8:
      uStack_15a = 0;
      local_180 = (long *)CONCAT44(local_180._4_4_,3);
      pcStack_170 = (code *)0x0;
      local_168 = 0;
      local_178 = (void *)0x0;
      uStack_163 = 0;
      uStack_161 = 0;
      uStack_15d = 0;
      uStack_15c = 0;
      FUN_00547cac(&local_178,"Attempted to specify an empty rid.",0x22);
      puVar17 = local_158;
      local_158[0] = local_180._0_4_;
      if ((char)uStack_161 < '\0') {
        FUN_005478d8(&local_150,local_178,pcStack_170);
      }
      else {
        local_140 = CONCAT17((char)uStack_161,CONCAT25(uStack_163,local_168));
        pcStack_148 = pcStack_170;
        local_150 = local_178;
      }
      puVar19 = local_158;
      local_138 = CONCAT13(uStack_15d,uStack_161._1_3_);
      uStack_134 = (undefined3)
                   (CONCAT13(uStack_15a,CONCAT12(uStack_15b,CONCAT11(uStack_15c,uStack_15d))) >> 8);
      uVar14 = FUN_005ecd5c(local_158);
      local_80[0] = FUN_005eceec(local_158[0]);
      FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x2433,uVar14,&DAT_001a2df6,local_80,
                   &DAT_001ca519);
      *param_1 = local_158[0];
      if (local_140 < 0) {
        FUN_005478d8(param_1 + 2,local_150,pcStack_148);
        param_1[8] = local_138;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_134,local_138._3_1_);
        pvVar6 = local_150;
        lVar22 = local_140;
        goto joined_r0x00c264f0;
      }
LAB_00c261fc:
      uVar23 = *(undefined8 *)(puVar17 + 2);
      uVar14 = *(undefined8 *)(puVar17 + 6);
      uVar2 = puVar19[8];
      uVar3 = *(undefined4 *)((long)puVar19 + 0x23);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar17 + 4);
      *(undefined8 *)(param_1 + 2) = uVar23;
      *(undefined8 *)(param_1 + 6) = uVar14;
      param_1[8] = uVar2;
      *(undefined4 *)((long)param_1 + 0x23) = uVar3;
    }
    else {
      if (sVar15 == 0) goto LAB_00c263f8;
LAB_00c25fb8:
      if (puVar10 != puVar8) {
        __n = puVar20[1];
        if (-1 < cVar5) {
          __n = sVar15;
        }
        puVar21 = puVar10 + 0x14;
        do {
          bVar4 = *(byte *)((long)puVar21 + 0x17);
          sVar15 = puVar21[1];
          if (-1 < (char)bVar4) {
            sVar15 = (ulong)bVar4;
          }
          if (sVar15 == __n) {
            puVar1 = (undefined8 *)*puVar21;
            if (-1 < (char)bVar4) {
              puVar1 = puVar21;
            }
            __s2 = (undefined8 *)*puVar20;
            if (-1 < cVar5) {
              __s2 = puVar20;
            }
            iVar9 = memcmp(puVar1,__s2,__n);
            if (iVar9 == 0) goto code_r0x00c2602c;
          }
          puVar1 = puVar21 + 0x12;
          puVar21 = puVar21 + 0x26;
          if (puVar1 == puVar8) break;
        } while( true );
      }
      uStack_15a = 0;
      local_180 = (long *)CONCAT44(local_180._4_4_,3);
      pcStack_170 = (code *)0x0;
      local_168 = 0;
      local_178 = (void *)0x0;
      uStack_163 = 0;
      uStack_161 = 0;
      uStack_15d = 0;
      uStack_15c = 0;
      FUN_00547cac(&local_178,"Attempted to specify a rid not configured.",0x2a);
      puVar17 = local_1a8;
      local_1a8[0] = local_180._0_4_;
      if ((char)uStack_161 < '\0') {
        FUN_005478d8(&local_1a0,local_178,pcStack_170);
      }
      else {
        local_190 = CONCAT17((char)uStack_161,CONCAT25(uStack_163,local_168));
        pcStack_198 = pcStack_170;
        local_1a0 = local_178;
      }
      puVar19 = local_1a8;
      local_188 = CONCAT13(uStack_15d,uStack_161._1_3_);
      uStack_184 = (undefined3)
                   (CONCAT13(uStack_15a,CONCAT12(uStack_15b,CONCAT11(uStack_15c,uStack_15d))) >> 8);
      uVar14 = FUN_005ecd5c(local_1a8);
      local_80[0] = FUN_005eceec(local_1a8[0]);
      FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_sender.cc",0x246b,uVar14,&DAT_001a2df6,local_80,
                   &DAT_001ca519);
      *param_1 = local_1a8[0];
      if (-1 < local_190) goto LAB_00c261fc;
      FUN_005478d8(param_1 + 2,local_1a0,pcStack_198);
      param_1[8] = local_188;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_184,local_188._3_1_);
      pvVar6 = local_1a0;
      lVar22 = local_190;
joined_r0x00c264f0:
      if (lVar22 < 0) {
        operator_delete(pvVar6);
      }
    }
    if ((char)uStack_161 < '\0') {
      operator_delete(local_178);
    }
    goto LAB_00c2639c;
  }
LAB_00c26038:
  lVar22 = param_2[0x51];
  plVar18 = (long *)param_2[9];
  if (lVar22 != 0) {
    FUN_00d0f740(1,lVar22);
    puVar16 = (undefined8 *)*param_3;
    puVar13 = (undefined8 *)param_3[1];
  }
  uVar11 = (long)puVar13 - (long)puVar16;
  if (uVar11 == 0) {
    puVar10 = (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar11 >> 3) * -0x5555555555555555)) goto LAB_00c26528;
    puVar10 = (undefined8 *)operator_new(uVar11);
    puVar20 = puVar10;
    do {
      if (puVar20 == (undefined8 *)0x0) goto LAB_00c26500;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        FUN_005478d8(puVar20,*puVar16,puVar16[1]);
      }
      else {
        uVar23 = puVar16[1];
        uVar14 = *puVar16;
        puVar20[2] = puVar16[2];
        puVar20[1] = uVar23;
        *puVar20 = uVar14;
      }
      puVar16 = puVar16 + 3;
      puVar20 = puVar20 + 3;
    } while (puVar16 != puVar13);
  }
  lVar7 = param_2[10];
  plVar12 = (long *)operator_new(0x28);
  uVar11 = (long)puVar20 - (long)puVar10;
  *plVar12 = (long)param_2;
  plVar12[1] = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  if (uVar11 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar11 >> 3) * -0x5555555555555555)) {
LAB_00c26528:
                    /* WARNING: Subroutine does not return */
      FUN_00625650();
    }
    puVar13 = (undefined8 *)operator_new(uVar11);
    plVar12[1] = (long)puVar13;
    plVar12[2] = (long)puVar13;
    plVar12[3] = (long)puVar13 + uVar11;
    puVar16 = puVar10;
    do {
      if (puVar13 == (undefined8 *)0x0) {
LAB_00c26500:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        FUN_005478d8(puVar13,*puVar16,puVar16[1]);
      }
      else {
        uVar23 = puVar16[1];
        uVar14 = *puVar16;
        puVar13[2] = puVar16[2];
        puVar13[1] = uVar23;
        *puVar13 = uVar14;
      }
      puVar16 = puVar16 + 3;
      puVar13 = puVar13 + 3;
    } while (puVar16 != puVar20);
    plVar12[2] = (long)puVar13;
  }
  *(int *)(plVar12 + 4) = (int)lVar7;
  local_180 = (long *)operator_new(0x30);
  *local_180 = lVar22;
  local_180[4] = (long)FUN_00c2a200;
  local_180[5] = (long)FUN_00c2a194;
  local_180[2] = (long)plVar12;
  pcStack_170 = FUN_005db390;
  local_168 = 0x5db348;
  uStack_163 = 0;
  uStack_161 = uStack_161 & 0xffffff00;
  (**(code **)(*plVar18 + 8))(plVar18,&local_180,local_80,&uStack_1a9);
  (*pcStack_170)(0,&local_180,&local_180);
  if (puVar10 != (undefined8 *)0x0) {
    while (puVar20 != puVar10) {
      puVar20 = puVar20 + -3;
      if (puVar20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(puVar10);
  }
  FUN_005ecd48(param_1);
LAB_00c2639c:
  FUN_0066981c(&local_130);
  return;
code_r0x00c2602c:
  puVar20 = puVar20 + 3;
  if (puVar20 == puVar13) goto LAB_00c26038;
  goto LAB_00c25f9c;
}


// ===== 00c2652c  FUN_00c2652c =====

void FUN_00c2652c(long param_1)

{
  undefined2 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_88 [2];
  long local_80;
  undefined1 **ppuStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  int local_50;
  undefined1 *local_40;
  undefined4 *puStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = 0xaaaaaaaa;
  FUN_0088a500(&local_60);
  plVar3 = *(long **)(param_1 + 0x210);
  if (plVar3 == (long *)0x0) {
    plVar2 = (long *)(**(code **)(lRam0000000000000000 + 0x58))();
  }
  else {
    (**(code **)*plVar3)(plVar3);
    plVar2 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    uStack_58 = (undefined1 *)
                (CONCAT26(uStack_58._6_2_,CONCAT24(uVar1,(undefined4)uStack_58)) &
                 0xffff0001ffffffff | 0x10000000000);
    uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
    local_60 = (undefined1 *)CONCAT62(local_60._2_6_,uVar1);
  }
  local_50 = *(int *)(param_1 + 0x298);
  if (local_50 - 1U < 3) {
    uStack_58._0_6_ =
         CONCAT24((short)(0x10101010100 >> ((ulong)((local_50 - 1U) * 0x10) & 0x3f)),
                  (undefined4)uStack_58);
  }
  local_88[0] = *(undefined4 *)(param_1 + 0x50);
  local_68 = *(undefined8 *)(param_1 + 0x210);
  ppuStack_78 = &local_60;
  local_40 = local_14;
  local_70 = &local_68;
  puStack_38 = local_88;
  local_14[0] = 0xaa;
  local_80 = param_1;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
            (*(long **)(param_1 + 0x48),&local_40,FUN_00c2a2e0,&uStack_11);
  FUN_0088a51c(&local_60);
  return;
}


// ===== 00c26680  FUN_00c26680 =====

void FUN_00c26680(long param_1)

{
  undefined1 uStack_21;
  undefined4 local_20 [2];
  long local_18;
  
  local_20[0] = *(undefined4 *)(param_1 + 0x50);
  local_18 = param_1;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x60))
            (*(long **)(param_1 + 0x48),local_20,FUN_00c2a350,&uStack_21);
  return;
}


// ===== 00c266d0  FUN_00c266d0 =====

void FUN_00c266d0(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x208) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00c2671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2,0,0);
    return;
  }
  return;
}


// ===== 00c26724  FUN_00c26724 =====

void FUN_00c26724(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x210);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c26744  FUN_00c26744 =====

void FUN_00c26744(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x218);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2675c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c26764  FUN_00c26764 =====

undefined4 FUN_00c26764(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}


// ===== 00c26770  FUN_00c26770 =====

void FUN_00c26770(undefined8 *param_1,long param_2)

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


// ===== 00c2679c  FUN_00c2679c =====

void FUN_00c2679c(undefined8 param_1,long param_2)

{
  FUN_00843ef4(param_1,param_2 + 0x80);
  return;
}


// ===== 00c267ac  FUN_00c267ac =====

void FUN_00c267ac(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0xf8);
  lVar1 = *(long *)(param_2 + 0x100);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    if (0xd79435e50d7943 < (ulong)(((long)uVar2 >> 4) * -0x79435e50d79435e5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066a5d8();
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
      FUN_00669028(pvVar3,lVar4);
      lVar4 = lVar4 + 0x130;
      pvVar3 = (void *)((long)pvVar3 + 0x130);
    } while (lVar4 != lVar1);
    param_1[1] = pvVar3;
  }
  return;
}


// ===== 00c26878  FUN_00c26878 =====

void FUN_00c26878(long *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x220);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c26890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 00c26898  thunk_FUN_005ecd48 =====

void thunk_FUN_005ecd48(void)

{
  FUN_005ecd48();
  return;
}


// ===== 00c268a0  FUN_00c268a0 =====

void FUN_00c268a0(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0xf8) != param_2) {
    FUN_00b6211c((long *)(param_1 + 0xf8),*param_2,param_2[1],
                 (param_2[1] - *param_2 >> 4) * -0x79435e50d79435e5);
    return;
  }
  return;
}


// ===== 00c268dc  FUN_00c268dc =====

void FUN_00c268dc(long param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  if (*(long **)(param_1 + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 8))();
  }
  *(undefined8 **)(param_1 + 0x218) = param_2;
  return;
}


// ===== 00c26930  FUN_00c26930 =====

undefined4 FUN_00c26930(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}


// ===== 00c2693c  FUN_00c2693c =====

void FUN_00c2693c(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0x1f0) != param_2) {
    FUN_0088fd38((long *)(param_1 + 0x1f0),*param_2,param_2[1],
                 (param_2[1] - *param_2 >> 3) * -0x7b425ed097b425ed);
    return;
  }
  return;
}


// ===== 00c26978  FUN_00c26978 =====

void FUN_00c26978(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x1f0);
  lVar1 = *(long *)(param_2 + 0x1f8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = lVar1 - lVar4;
  if (uVar2 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar2 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
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
      FUN_00890830(pvVar3,lVar4);
      lVar4 = lVar4 + 0xd8;
      pvVar3 = (void *)((long)pvVar3 + 0xd8);
    } while (lVar4 != lVar1);
    param_1[1] = pvVar3;
  }
  return;
}


// ===== 00c26a44  FUN_00c26a44 =====

void FUN_00c26a44(void)

{
  return;
}


// ===== 00c26a4c  FUN_00c26a4c =====

void FUN_00c26a4c(void)

{
  return;
}


// ===== 00c26a54  FUN_00c26a54 =====

void FUN_00c26a54(void)

{
  return;
}


// ===== 00c26a5c  FUN_00c26a5c =====

void FUN_00c26a5c(void)

{
  return;
}


// ===== 00c26a64  FUN_00c26a64 =====

void FUN_00c26a64(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c26a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 00c26a7c  FUN_00c26a7c =====

undefined4 FUN_00c26a7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 00c26a88  FUN_00c26a88 =====

void FUN_00c26a88(undefined8 param_1)

{
  FUN_005d3510(param_1,*(undefined8 *)PTR_PTR_s_audio_00d52d40);
  return;
}


// ===== 00c26aa0  FUN_00c26aa0 =====

void FUN_00c26aa0(undefined8 param_1)

{
  FUN_005d3510(param_1,*(undefined8 *)PTR_PTR_s_audio_00d52d40);
  return;
}


// ===== 00c26ab8  FUN_00c26ab8 =====

void FUN_00c26ab8(undefined8 param_1)

{
  FUN_005d3510(param_1,*(undefined8 *)PTR_PTR_s_video_00d52d38);
  return;
}


// ===== 00c26ad0  FUN_00c26ad0 =====

void FUN_00c26ad0(void)

{
  return;
}


// ===== 00c26ad8  FUN_00c26ad8 =====

void FUN_00c26ad8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc26ae0);
  (*pcVar1)();
}


// ===== 00c26ae0  FUN_00c26ae0 =====

void FUN_00c26ae0(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_18;
  
  lVar1 = *(long *)(param_1 + 2);
  uVar4 = **(undefined8 **)(param_1 + 4);
  **(undefined8 **)(param_1 + 4) = 0;
  plVar3 = *(long **)(lVar1 + 0x220);
  *(undefined8 *)(lVar1 + 0x220) = uVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(lVar1 + 0x208);
  if (plVar3 != (long *)0x0) {
    local_18 = *(long **)(lVar1 + 0x220);
    uVar2 = *param_1;
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)();
    }
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar2,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return;
}


// ===== 00c26b80  FUN_00c26b80 =====

void FUN_00c26b80(undefined4 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 2) + 0x208);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c26ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(plVar1,*param_1,*(undefined8 *)(*(long *)(param_1 + 2) + 0x280));
    return;
  }
  return;
}


// ===== 00c26bac  FUN_00c26bac =====

void FUN_00c26bac(undefined8 *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [168];
  
  puVar2 = (undefined4 *)param_1[1];
  plVar1 = *(long **)(*(long *)(puVar2 + 2) + 0x208);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x98))(auStack_d8,plVar1,*puVar2);
    FUN_00b618b4(*(undefined8 *)(puVar2 + 4),auStack_d8);
    FUN_0066981c(auStack_d8);
  }
  *(bool *)*param_1 = plVar1 != (long *)0x0;
  return;
}


// ===== 00c26c2c  FUN_00c26c2c =====

void FUN_00c26c2c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_218 [168];
  undefined8 local_170;
  undefined1 **ppuStack_168;
  code *local_160;
  code *pcStack_158;
  undefined1 auStack_148 [168];
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
  
  lVar3 = *(long *)(param_1 + 2);
  if (*(long *)(lVar3 + 0x208) != 0) {
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
    uVar2 = *(undefined8 *)(lVar3 + 0x208);
    uVar1 = *param_1;
    FUN_0066953c(auStack_148,*(undefined8 *)(param_1 + 4));
    local_170 = *(undefined8 *)(param_1 + 6);
    local_160 = FUN_004473ec;
    pcStack_158 = FUN_00c27430;
    ppuStack_168 = &local_a0;
    FUN_00c26d54(uVar2,lVar3 + 0x1f0,lVar3 + 0x248,lVar3 + 0x18,uVar1,auStack_148,&local_170);
    (*local_160)(0,&local_170,&local_170);
    FUN_0066981c(auStack_148);
    FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
    if (**(int **)(param_1 + 6) == 0) {
      (**(code **)(**(long **)(lVar3 + 0x208) + 0x98))
                (auStack_218,*(long **)(lVar3 + 0x208),*param_1);
      FUN_00b618b4(*(undefined8 *)(param_1 + 8),auStack_218);
      FUN_0066981c(auStack_218);
    }
    FUN_0066f2b0(&local_a0);
  }
  return;
}


// ===== 00c26d54  FUN_00c26d54 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00c26d54(long *param_1,long *param_2,long *param_3,long param_4,undefined4 param_5,
                 long param_6,long param_7)

{
  undefined8 *__s2;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  size_t __n;
  undefined8 *******pppppppuVar5;
  undefined1 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 auStack_570 [16];
  code *local_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [8];
  void *local_548;
  char cStack_531;
  int local_528 [2];
  void *local_520;
  long lStack_518;
  long local_510;
  undefined4 local_508;
  undefined3 uStack_504;
  undefined4 local_500 [2];
  undefined8 *******local_4f8;
  ulong uStack_4f0;
  undefined7 local_4e8;
  byte bStack_4e1;
  undefined4 local_4e0;
  undefined3 uStack_4dc;
  int local_4d8 [2];
  void *local_4d0;
  undefined8 uStack_4c8;
  long local_4c0;
  undefined4 local_4b8;
  undefined3 uStack_4b4;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined1 *local_498;
  undefined8 local_490;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 *puStack_438;
  undefined1 *puStack_430;
  undefined1 *puStack_428;
  undefined1 *local_420;
  undefined1 *puStack_418;
  undefined1 *local_410;
  undefined1 *puStack_408;
  undefined1 *local_400;
  undefined1 *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d0;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *local_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined1 *local_390;
  undefined1 *puStack_388;
  undefined1 *puStack_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined1 *local_350;
  undefined1 *puStack_348;
  undefined1 *puStack_340;
  undefined1 *puStack_338;
  undefined1 *local_330;
  undefined1 auStack_320 [8];
  int local_318;
  byte local_248;
  undefined1 local_240 [216];
  char local_168;
  undefined8 local_160;
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
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_330 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_398 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_388 = &DAT_aaaaaaaaaaaaaaaa;
  local_390 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_380 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
  local_370 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_360 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_348 = &DAT_aaaaaaaaaaaaaaaa;
  local_350 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_338 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_340 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x98))(&local_3d0,param_1,param_5);
  local_3e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
  local_480 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_470 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_438 = &DAT_aaaaaaaaaaaaaaaa;
  local_440 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_428 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_430 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
  local_420 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_408 = &DAT_aaaaaaaaaaaaaaaa;
  local_410 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_400 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3f0 = &DAT_aaaaaaaaaaaaaaaa;
  if (*param_3 == param_3[1]) {
    FUN_0066953c(&local_480,param_6);
  }
  else {
    if ((param_3[1] - *param_3 >> 3) * -0x5555555555555555 +
        (*(long *)(param_6 + 0x68) - *(long *)(param_6 + 0x60) >> 4) * -0x79435e50d79435e5 !=
        ((long)puStack_368 - (long)local_370 >> 4) * -0x79435e50d79435e5) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/rtp_sender.cc",0x66,
                   "parameters.encodings.size() + removed_rids.size() == all_layers.size()",
                   &DAT_001fb920);
    }
    FUN_0066953c(&local_480,param_6);
    puVar9 = local_420;
    puVar10 = puStack_418;
    puVar18 = local_370;
    puVar6 = puStack_368;
    while (local_370 = puVar18, puStack_368 = puVar6, puVar9 != puVar10) {
      puVar10 = puVar10 + -0x130;
      if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0066919c(puVar10);
      puVar18 = local_370;
      puVar6 = puStack_368;
    }
    puStack_418 = puVar9;
    if (puVar18 != puVar6) {
      uVar15 = 0;
      do {
        puVar12 = (undefined8 *)*param_3;
        puVar2 = (undefined8 *)param_3[1];
        puStack_418 = puVar9;
        if (puVar12 != puVar2) {
          __n = *(size_t *)(puVar18 + 0xa8);
          __s2 = *(undefined8 **)(puVar18 + 0xa0);
          if (-1 < (char)puVar18[0xb7]) {
            __n = (ulong)(byte)puVar18[0xb7];
            __s2 = (undefined8 *)(puVar18 + 0xa0);
          }
          do {
            bVar3 = *(byte *)((long)puVar12 + 0x17);
            sVar1 = puVar12[1];
            if (-1 < (char)bVar3) {
              sVar1 = (ulong)bVar3;
            }
            if (sVar1 == __n) {
              __s1 = (undefined8 *)*puVar12;
              if (-1 < (char)bVar3) {
                __s1 = puVar12;
              }
              iVar8 = memcmp(__s1,__s2,__n);
              if (iVar8 == 0) {
                if (puVar12 != puVar2) {
                  puVar10 = puVar18;
                  if (puVar9 < local_410) goto joined_r0x00c26f28;
                  goto LAB_00c26fa0;
                }
                break;
              }
            }
            puVar12 = puVar12 + 3;
          } while (puVar12 != puVar2);
        }
        if ((ulong)((*(long *)(param_6 + 0x68) - *(long *)(param_6 + 0x60) >> 4) *
                   -0x79435e50d79435e5) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        puVar10 = (undefined1 *)(*(long *)(param_6 + 0x60) + uVar15 * 0x130);
        uVar15 = uVar15 + 1;
        if (puVar9 < local_410) {
joined_r0x00c26f28:
          if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00669028(puVar9,puVar10);
          puVar9 = puVar9 + 0x130;
        }
        else {
LAB_00c26fa0:
          puVar9 = (undefined1 *)FUN_00b6c788(&local_420,puVar10);
        }
        puVar18 = puVar18 + 0x130;
        puStack_418 = puVar9;
      } while (puVar18 != puVar6);
    }
  }
  puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_498 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_490 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b6bfe4(&local_4b0,&local_3d0,&local_480,*(undefined8 *)(param_4 + 8));
  if ((int)local_4b0 == 0) {
    (**(code **)(*param_1 + 0x28))(auStack_320,param_1);
    bVar11 = false;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = 0xaaaaaaaaaaaaaa00;
    local_88 = 0xaaaaaaaaaaaaaa00;
    if ((local_248 == 1) && (local_318 == 1)) {
      lVar17 = *param_2;
      lVar13 = param_2[1];
      lVar16 = lVar17;
      if (lVar17 != lVar13) {
        do {
          if ((local_248 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          uVar15 = thunk_FUN_00894770(auStack_320,lVar16);
          lVar17 = lVar16;
        } while (((uVar15 & 1) == 0) && (lVar16 = lVar16 + 0xd8, lVar17 = lVar13, lVar16 != lVar13))
        ;
        lVar13 = param_2[1];
      }
      if (lVar17 == lVar13) {
        bVar11 = false;
      }
      else {
        FUN_00890830(&local_160,lVar17);
        bVar11 = true;
        local_88 = CONCAT71(local_88._1_7_,1);
      }
    }
    local_240[0] = 0;
    local_168 = 0;
    lVar17 = param_2[1] - *param_2;
    lVar16 = 0;
    if (lVar17 != 0) {
      lVar16 = *param_2;
    }
    if (bVar11) {
      FUN_00890830(local_240,&local_160);
    }
    local_168 = bVar11;
    FUN_00b6af8c(local_500,&local_480,lVar16,(lVar17 >> 3) * -0x7b425ed097b425ed,local_240);
    if (local_168 == '\x01') {
      FUN_00890cb8(local_240);
    }
    if ((char)local_88 == '\x01') {
      FUN_00890cb8(&local_160);
    }
    plVar14 = (long *)((ulong)&local_4b0 | 8);
    local_4b0 = (undefined1 *)CONCAT44(local_4b0._4_4_,local_500[0]);
    if ((long)local_498 < 0) {
      pppppppuVar5 = local_4f8;
      if (-1 < (char)bStack_4e1) {
        uStack_4f0 = (ulong)bStack_4e1;
        pppppppuVar5 = &local_4f8;
      }
      FUN_00547f08(plVar14,pppppppuVar5,uStack_4f0);
LAB_00c2722c:
      local_490._0_3_ = (undefined3)local_4e0;
      local_490._0_7_ = CONCAT43(CONCAT31(uStack_4dc,local_4e0._3_1_),(undefined3)local_490);
      if ((char)bStack_4e1 < '\0') {
        operator_delete(local_4f8);
      }
    }
    else {
      if ((char)bStack_4e1 < '\0') {
        FUN_00547fc0(plVar14,local_4f8,uStack_4f0);
        goto LAB_00c2722c;
      }
      plVar14[2] = CONCAT17(bStack_4e1,local_4e8);
      plVar14[1] = uStack_4f0;
      *plVar14 = (long)local_4f8;
      local_490._0_3_ = (undefined3)local_4e0;
      local_490._0_7_ = CONCAT43(CONCAT31(uStack_4dc,local_4e0._3_1_),(undefined3)local_490);
    }
    if (local_248 == 1) {
      FUN_00890cb8(auStack_320);
    }
    if ((int)local_4b0 == 0) {
      (**(code **)(param_7 + 0x10))(1,param_7,auStack_570);
      uStack_558 = *(undefined8 *)(param_7 + 0x18);
      local_560 = *(code **)(param_7 + 0x10);
      *(code **)(param_7 + 0x10) = FUN_00433984;
      *(undefined8 *)(param_7 + 0x18) = 0;
      (**(code **)(*param_1 + 0x80))(auStack_550,param_1,param_5,&local_480,auStack_570);
      if (cStack_531 < '\0') {
        operator_delete(local_548);
      }
      (*local_560)(0,auStack_570,auStack_570);
      goto LAB_00c27360;
    }
    local_528[0] = (int)local_4b0;
    if ((long)local_498 < 0) {
      FUN_005478d8(&local_520,puStack_4a8,puStack_4a0);
    }
    else {
      lStack_518 = plVar14[1];
      local_520 = (void *)*plVar14;
      local_510 = plVar14[2];
    }
    uStack_504 = (undefined3)((ulong)local_490 >> 0x20);
    local_508 = (undefined4)local_490;
    (**(code **)(param_7 + 0x18))(param_7,local_528);
    pvVar7 = local_520;
    lVar16 = local_510;
  }
  else {
    local_4d8[0] = (int)local_4b0;
    if ((long)local_498 < 0) {
      FUN_005478d8(&local_4d0,puStack_4a8,puStack_4a0);
    }
    else {
      puVar12 = (undefined8 *)((ulong)&local_4b0 | 8);
      uStack_4c8 = puVar12[1];
      local_4d0 = (void *)*puVar12;
      local_4c0 = puVar12[2];
    }
    uStack_4b4 = (undefined3)((ulong)local_490 >> 0x20);
    local_4b8 = (undefined4)local_490;
    (**(code **)(param_7 + 0x18))(param_7,local_4d8);
    pvVar7 = local_4d0;
    lVar16 = local_4c0;
  }
  if (lVar16 < 0) {
    operator_delete(pvVar7);
  }
LAB_00c27360:
  if ((long)local_498 < 0) {
    operator_delete(puStack_4a8);
  }
  FUN_0066981c(&local_480);
  FUN_0066981c(&local_3d0);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c27430  FUN_00c27430 =====

void FUN_00c27430(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined8 **local_50;
  ulong uStack_48;
  ulong local_40;
  undefined4 local_38;
  undefined3 uStack_34;
  
  local_58[0] = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_50,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_48 = *(ulong *)(param_2 + 4);
    local_50 = *(undefined8 ***)(param_2 + 2);
    local_40 = *(ulong *)(param_2 + 6);
  }
  puVar3 = (undefined4 *)*param_1;
  local_38._0_3_ = (undefined3)param_2[8];
  local_38._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_34 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  plVar4 = (long *)(puVar3 + 2);
  *puVar3 = local_58[0];
  if (puVar3 != local_58) {
    if (*(char *)((long)puVar3 + 0x1f) < '\0') {
      uVar1 = uStack_48;
      pppuVar2 = (undefined8 ***)local_50;
      if (-1 < (long)local_40) {
        uVar1 = local_40 >> 0x38;
        pppuVar2 = &local_50;
      }
      FUN_00547f08(plVar4,pppuVar2,uVar1);
    }
    else if ((long)local_40 < 0) {
      FUN_00547fc0(plVar4,local_50,uStack_48);
    }
    else {
      *(ulong *)(puVar3 + 6) = local_40;
      *(ulong *)(puVar3 + 4) = uStack_48;
      *plVar4 = (long)local_50;
    }
  }
  *(uint *)((long)puVar3 + 0x23) = CONCAT31(uStack_34,local_38._3_1_);
  puVar3[8] = local_38;
  FUN_0066f2dc(param_1[1]);
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 00c27544  FUN_00c27544 =====

void FUN_00c27544(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined8 **local_50;
  ulong uStack_48;
  ulong local_40;
  undefined4 local_38;
  undefined3 uStack_34;
  
  local_58[0] = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_50,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_48 = *(ulong *)(param_2 + 4);
    local_50 = *(undefined8 ***)(param_2 + 2);
    local_40 = *(ulong *)(param_2 + 6);
  }
  puVar3 = (undefined4 *)param_1[1];
  local_38._0_3_ = (undefined3)param_2[8];
  local_38._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_34 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  plVar4 = (long *)(puVar3 + 2);
  *puVar3 = local_58[0];
  if (puVar3 != local_58) {
    if (*(char *)((long)puVar3 + 0x1f) < '\0') {
      uVar1 = uStack_48;
      pppuVar2 = (undefined8 ***)local_50;
      if (-1 < (long)local_40) {
        uVar1 = local_40 >> 0x38;
        pppuVar2 = &local_50;
      }
      FUN_00547f08(plVar4,pppuVar2,uVar1);
    }
    else if ((long)local_40 < 0) {
      FUN_00547fc0(plVar4,local_50,uStack_48);
    }
    else {
      *(ulong *)(puVar3 + 6) = local_40;
      *(ulong *)(puVar3 + 4) = uStack_48;
      *plVar4 = (long)local_50;
    }
  }
  *(uint *)((long)puVar3 + 0x23) = CONCAT31(uStack_34,local_38._3_1_);
  puVar3[8] = local_38;
  FUN_0066f2dc(*param_1);
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 00c27658  FUN_00c27658 =====

void FUN_00c27658(void)

{
  FUN_00c27660();
  return;
}


// ===== 00c27660  FUN_00c27660 =====

void FUN_00c27660(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  undefined1 local_112;
  undefined8 *local_110 [2];
  code *local_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [168];
  
  lVar5 = param_1[0x36];
  lVar4 = *(long *)(lVar5 + 0x208);
  if (lVar4 == 0) {
    local_112 = 0;
    local_138[0] = 6;
    local_128 = 0;
    uStack_120 = 0;
    local_130 = 0;
    local_11b = 0;
    uStack_118 = 0;
    FUN_00c27798(param_1,local_138);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x35);
    FUN_0066953c(auStack_e8,param_1 + 0x20);
    puVar2 = (undefined8 *)operator_new(0x100);
    uVar6 = *param_1;
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar6;
    uVar7 = param_1[4];
    uVar6 = param_1[3];
    puVar2[2] = uVar3;
    puVar2[4] = uVar7;
    puVar2[3] = uVar6;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_0066953c(puVar2 + 5,param_1 + 5);
    (*(code *)param_1[0x1c])(1,param_1 + 0x1a,puVar2 + 0x1a);
    uVar6 = param_1[0x1d];
    uVar3 = param_1[0x1c];
    param_1[0x1c] = FUN_00433984;
    param_1[0x1d] = 0;
    *(undefined4 *)(puVar2 + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
    puVar2[0x1d] = uVar6;
    puVar2[0x1c] = uVar3;
    local_100 = FUN_00c27af0;
    pcStack_f8 = FUN_00c27a58;
    local_110[0] = puVar2;
    FUN_00c26d54(lVar4,lVar5 + 0x1f0,lVar5 + 0x248,lVar5 + 0x18,uVar1,auStack_e8,local_110);
    (*local_100)(0,local_110,local_110);
    FUN_0066981c(auStack_e8);
  }
  return;
}


// ===== 00c27798  FUN_00c27798 =====

void FUN_00c27798(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined5 uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  long *local_1a0 [2];
  code *local_190;
  code *pcStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  void *pvStack_168;
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
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  code *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar11 = *param_1;
  pvStack_168 = (void *)param_1[3];
  local_170 = param_1[2];
  param_1[3] = 0;
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
  local_a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  lStack_178 = CONCAT71(0xaaaaaaaaaaaaaa,(char)param_1[1]);
  local_180 = lVar11;
  FUN_0066953c(&local_160,param_1 + 5);
  (*(code *)param_1[0x1c])(1,param_1 + 0x1a,&puStack_b0);
  puStack_98 = (undefined1 *)param_1[0x1d];
  local_a0 = (code *)param_1[0x1c];
  param_1[0x1c] = (long)FUN_00433984;
  param_1[0x1d] = 0;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,(int)param_1[0x1e]);
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*param_2);
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_80,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    puStack_78 = *(undefined1 **)(param_2 + 4);
    local_80 = *(undefined1 **)(param_2 + 2);
    local_70 = *(undefined1 **)(param_2 + 6);
  }
  uVar2 = CONCAT14(uStack_68._7_1_,*(undefined4 *)((long)param_2 + 0x23));
  uStack_68 = (undefined1 *)CONCAT44((int)((uint5)uVar2 >> 8),param_2[8]);
  uVar8 = FUN_007e18fc(*(undefined8 *)(lVar11 + 0x48));
  if ((uVar8 & 1) == 0) {
    plVar10 = *(long **)(lVar11 + 0x48);
    lVar11 = param_1[4];
    param_1[4] = 0;
    plVar9 = (long *)operator_new(0x120);
    pvVar3 = pvStack_168;
    pvStack_168 = (void *)0x0;
    plVar9[1] = lStack_178;
    *plVar9 = local_180;
    plVar9[2] = local_170;
    plVar9[3] = (long)pvVar3;
    FUN_0066953c(plVar9 + 4,&local_160);
    (*local_a0)(1,&puStack_b0,plVar9 + 0x1a);
    puVar5 = puStack_98;
    pcVar4 = local_a0;
    local_a0 = FUN_00433984;
    puStack_98 = (undefined1 *)0x0;
    plVar9[0x1d] = (long)puVar5;
    plVar9[0x1c] = (long)pcVar4;
    *(undefined4 *)(plVar9 + 0x1e) = local_90._0_4_;
    *(undefined4 *)(plVar9 + 0x1f) = local_88._0_4_;
    if ((long)local_70 < 0) {
      FUN_005478d8(plVar9 + 0x20,local_80,puStack_78);
    }
    else {
      plVar9[0x21] = (long)puStack_78;
      plVar9[0x20] = (long)local_80;
      plVar9[0x22] = (long)local_70;
    }
    uVar6 = (undefined4)uStack_68;
    *(undefined4 *)(plVar9 + 0x23) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x11b) = uStack_68._3_4_;
    local_1a0[0] = (long *)operator_new(0x30);
    *local_1a0[0] = lVar11;
    local_1a0[0][4] = (long)FUN_00c280ac;
    local_1a0[0][5] = (long)FUN_00c280a0;
    local_1a0[0][2] = (long)plVar9;
    local_190 = FUN_005db390;
    pcStack_188 = FUN_005db348;
    (**(code **)(*plVar10 + 8))(plVar10,local_1a0,&uStack_1a1,&uStack_1a2);
    (*local_190)(0,local_1a0,local_1a0);
  }
  else {
    FUN_00c27bbc(&local_180);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  (*local_a0)(0,&puStack_b0,&puStack_b0);
  FUN_0066981c(&local_160);
  pvVar3 = pvStack_168;
  if ((pvStack_168 != (void *)0x0) && (iVar7 = FUN_00d0f7a0(0xffffffff,pvStack_168), iVar7 == 1)) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c27a58  FUN_00c27a58 =====

void FUN_00c27a58(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  local_48[0] = *param_2;
  uVar1 = *param_1;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_40,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 4);
    local_40 = *(void **)(param_2 + 2);
    local_30 = *(long *)(param_2 + 6);
  }
  local_28 = (undefined3)param_2[8];
  uStack_25 = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  FUN_00c27798(uVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00c27af0  FUN_00c27af0 =====

void FUN_00c27af0(uint param_1,undefined8 *param_2,undefined8 *param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc27bbc);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      (**(code **)((long)pvVar3 + 0xe0))(0,(long)pvVar3 + 0xd0,(long)pvVar3 + 0xd0);
      FUN_0066981c((long)pvVar3 + 0x28);
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      pvVar4 = *(void **)((long)pvVar3 + 0x18);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00c27bbc  FUN_00c27bbc =====

void FUN_00c27bbc(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_1d1;
  undefined4 local_1d0 [2];
  void *local_1c8;
  long lStack_1c0;
  long local_1b8;
  undefined3 local_1b0;
  undefined1 uStack_1ad;
  undefined3 uStack_1ac;
  undefined1 uStack_1a1;
  long *local_1a0 [2];
  code *local_190;
  code *pcStack_188;
  long local_180 [2];
  undefined1 auStack_170 [16];
  code *local_160;
  long lStack_158;
  undefined4 local_150;
  void *local_148;
  long lStack_140;
  long local_138;
  undefined4 local_130;
  undefined3 uStack_12c;
  void *local_128;
  undefined1 auStack_120 [184];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *param_1;
  if ((int)param_1[0x1f] == 0) {
    (**(code **)(**(long **)(lVar8 + 0x208) + 0x98))
              (local_180,*(long **)(lVar8 + 0x208),(int)param_1[0x1e]);
    pvVar6 = operator_new(0xa8);
    FUN_0066953c(pvVar6,local_180);
    FUN_0066981c(local_180);
  }
  else {
    pvVar6 = (void *)0x0;
  }
  if ((char)param_1[1] == '\x01') {
    pvVar4 = *(void **)param_1[2];
    *(void **)param_1[2] = pvVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_0066981c(pvVar4);
      operator_delete(pvVar4);
    }
    local_1d0[0] = (undefined4)param_1[0x1f];
    if (*(char *)((long)param_1 + 0x117) < '\0') {
      FUN_005478d8(&local_1c8,param_1[0x20],param_1[0x21]);
    }
    else {
      lStack_1c0 = param_1[0x21];
      local_1c8 = (void *)param_1[0x20];
      local_1b8 = param_1[0x22];
    }
    local_1b0 = (undefined3)(int)param_1[0x23];
    uStack_1ad = (undefined1)*(undefined4 *)((long)param_1 + 0x11b);
    uStack_1ac = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x11b) >> 8);
    (*(code *)param_1[0x1d])(param_1 + 0x1a,local_1d0);
    if (local_1b8 < 0) {
      operator_delete(local_1c8);
    }
  }
  else {
    plVar5 = *(long **)(lVar8 + 0x40);
    lVar7 = param_1[3];
    param_1[3] = 0;
    local_180[0] = lVar8;
    (*(code *)param_1[0x1c])(1,param_1 + 0x1a,auStack_170);
    lStack_158 = param_1[0x1d];
    local_160 = (code *)param_1[0x1c];
    local_150 = (undefined4)param_1[0x1f];
    param_1[0x1c] = (long)FUN_00433984;
    param_1[0x1d] = 0;
    if (*(char *)((long)param_1 + 0x117) < '\0') {
      FUN_005478d8(&local_148,param_1[0x20],param_1[0x21]);
    }
    else {
      lStack_140 = param_1[0x21];
      local_148 = (void *)param_1[0x20];
      local_138 = param_1[0x22];
    }
    local_130._0_3_ = (undefined3)(int)param_1[0x23];
    local_130._3_1_ = (undefined1)*(undefined4 *)((long)param_1 + 0x11b);
    uStack_12c = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x11b) >> 8);
    local_128 = pvVar6;
    FUN_0066953c(auStack_120,param_1 + 4);
    plVar3 = (long *)operator_new(0x110);
    *plVar3 = local_180[0];
    (*local_160)(1,auStack_170,plVar3 + 2);
    lVar8 = lStack_158;
    pcVar2 = local_160;
    local_160 = FUN_00433984;
    lStack_158 = 0;
    plVar3[5] = lVar8;
    plVar3[4] = (long)pcVar2;
    *(undefined4 *)(plVar3 + 6) = local_150;
    if (local_138 < 0) {
      FUN_005478d8(plVar3 + 7,local_148,lStack_140);
    }
    else {
      plVar3[8] = lStack_140;
      plVar3[7] = (long)local_148;
      plVar3[9] = local_138;
    }
    pvVar6 = local_128;
    local_128 = (void *)0x0;
    *(undefined4 *)(plVar3 + 10) = local_130;
    *(uint *)((long)plVar3 + 0x53) = CONCAT31(uStack_12c,local_130._3_1_);
    plVar3[0xb] = (long)pvVar6;
    FUN_0066953c(plVar3 + 0xc,auStack_120);
    local_1a0[0] = (long *)operator_new(0x30);
    *local_1a0[0] = lVar7;
    local_1a0[0][4] = (long)FUN_00c27fec;
    local_1a0[0][5] = (long)FUN_00c27ef8;
    local_1a0[0][2] = (long)plVar3;
    local_190 = FUN_005db390;
    pcStack_188 = FUN_005db348;
    (**(code **)(*plVar5 + 8))(plVar5,local_1a0,&uStack_1a1,&uStack_1d1);
    (*local_190)(0,local_1a0,local_1a0);
    FUN_0066981c(auStack_120);
    pvVar6 = local_128;
    local_128 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      FUN_0066981c(pvVar6);
      operator_delete(pvVar6);
    }
    if (local_138 < 0) {
      operator_delete(local_148);
    }
    (*local_160)(0,auStack_170,auStack_170);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c27ef8  FUN_00c27ef8 =====

void FUN_00c27ef8(long *param_1)

{
  long lVar1;
  undefined4 local_48 [2];
  void *local_40;
  long lStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (long *)*param_1;
  if ((int)param_1[6] == 0) {
    lVar1 = *param_1;
    FUN_00b618b4(lVar1 + 0x98,param_1 + 0xc);
    if (*(char *)(lVar1 + 0x1e8) == '\x01') {
      FUN_00b618b4();
    }
    else {
      if (lVar1 == -0x140) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0066953c(lVar1 + 0x140,param_1[0xb]);
      *(undefined1 *)(lVar1 + 0x1e8) = 1;
    }
  }
  local_48[0] = (undefined4)param_1[6];
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    FUN_005478d8(&local_40,param_1[7],param_1[8]);
  }
  else {
    lStack_38 = param_1[8];
    local_40 = (void *)param_1[7];
    local_30 = param_1[9];
  }
  local_28 = (undefined3)(int)param_1[10];
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x53);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x53) >> 8);
  (*(code *)param_1[5])(param_1 + 2,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00c27fec  FUN_00c27fec =====

void FUN_00c27fec(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc280a0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_0066981c((long)pvVar2 + 0x60);
      pvVar3 = *(void **)((long)pvVar2 + 0x58);
      *(undefined8 *)((long)pvVar2 + 0x58) = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_0066981c(pvVar3);
        operator_delete(pvVar3);
      }
      if (*(char *)((long)pvVar2 + 0x4f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 0x38));
      }
      (**(code **)((long)pvVar2 + 0x20))(0,(long)pvVar2 + 0x10,(long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00c280a0  FUN_00c280a0 =====

void FUN_00c280a0(undefined8 *param_1)

{
  FUN_00c27bbc(*param_1);
  return;
}


// ===== 00c280ac  FUN_00c280ac =====

void FUN_00c280ac(uint param_1,undefined8 *param_2,undefined8 *param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc28168);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      if (*(char *)((long)pvVar3 + 0x117) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 0x100));
      }
      (**(code **)((long)pvVar3 + 0xe0))(0,(long)pvVar3 + 0xd0,(long)pvVar3 + 0xd0);
      FUN_0066981c((long)pvVar3 + 0x20);
      pvVar4 = *(void **)((long)pvVar3 + 0x18);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00c28168  FUN_00c28168 =====

void FUN_00c28168(undefined8 *param_1)

{
  FUN_00c27660(*param_1);
  return;
}


// ===== 00c28174  FUN_00c28174 =====

void FUN_00c28174(uint param_1,undefined8 *param_2,undefined8 *param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc28248);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      FUN_0066981c((long)pvVar3 + 0x100);
      (**(code **)((long)pvVar3 + 0xe0))(0,(long)pvVar3 + 0xd0,(long)pvVar3 + 0xd0);
      FUN_0066981c((long)pvVar3 + 0x28);
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      pvVar4 = *(void **)((long)pvVar3 + 0x18);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00c28248  FUN_00c28248 =====

void FUN_00c28248(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_120;
  undefined8 *puStack_118;
  undefined1 *local_110;
  undefined5 uStack_108;
  undefined2 uStack_103;
  undefined4 uStack_101;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 auStack_f8 [168];
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  puVar7 = (undefined4 *)param_1[1];
  lVar8 = *(long *)(puVar7 + 2);
  plVar3 = *(long **)(lVar8 + 0x208);
  puStack_118 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_108 = 0xaaaaaaaaaa;
  uStack_103 = 0xaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_101 = 0xaaaaaaaa;
  uStack_fd = 0xaa;
  uStack_fc = 0xaa;
  uStack_fb = 0xaa;
  uStack_fa = 0xaa;
  uStack_f9 = 0xaa;
  if (plVar3 == (long *)0x0) {
    local_120._0_4_ = 6;
    uStack_fa = 0;
    local_120 = (undefined1 *)0xaaaaaaaa00000006;
    local_110 = (undefined1 *)0x0;
    uStack_108 = 0;
    puStack_118 = (undefined8 *)0x0;
    uStack_103 = 0;
    uStack_101 = 0;
    uStack_fd = 0;
    uStack_fc = 0;
  }
  else {
    local_40 = FUN_00433984;
    uStack_38 = 0;
    (**(code **)(*plVar3 + 0x80))(&local_120,plVar3,*puVar7,*(undefined8 *)(puVar7 + 4),auStack_50);
    (*local_40)(0,auStack_50,auStack_50);
    if ((int)local_120 == 0) {
      plVar3 = *(long **)(lVar8 + 0x208);
      (**(code **)(*plVar3 + 0x98))(auStack_f8,plVar3,*puVar7);
      FUN_00b618b4(*(undefined8 *)(puVar7 + 6),auStack_f8);
      FUN_0066981c(auStack_f8);
    }
  }
  piVar6 = (int *)*param_1;
  piVar4 = piVar6 + 2;
  *piVar6 = (int)local_120;
  if ((undefined1 **)piVar6 != &local_120) {
    puVar5 = (undefined8 *)((ulong)&local_120 | 8);
    if (*(char *)((long)piVar6 + 0x1f) < '\0') {
      puVar1 = local_110;
      puVar2 = puStack_118;
      if (-1 < (char)(byte)uStack_101) {
        puVar1 = (undefined1 *)(ulong)(byte)uStack_101;
        puVar2 = puVar5;
      }
      FUN_00547f08(piVar4,puVar2,puVar1);
    }
    else if ((char)(byte)uStack_101 < '\0') {
      FUN_00547fc0(piVar4,puStack_118,local_110);
    }
    else {
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      *(undefined8 *)(piVar6 + 6) = puVar5[2];
      *(undefined8 *)(piVar6 + 4) = uVar10;
      *(undefined8 *)piVar4 = uVar9;
    }
  }
  *(uint *)((long)piVar6 + 0x23) =
       CONCAT13(uStack_fa,CONCAT12(uStack_fb,CONCAT11(uStack_fc,uStack_fd)));
  piVar6[8] = CONCAT13(uStack_fd,uStack_101._1_3_);
  if ((char)(byte)uStack_101 < '\0') {
    operator_delete(puStack_118);
  }
  return;
}


// ===== 00c283b8  FUN_00c283b8 =====

void FUN_00c283b8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  undefined3 uStack_5c;
  undefined4 local_58 [2];
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  undefined3 uStack_34;
  
  uVar1 = *param_2;
  plVar3 = (long *)*param_1;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_78,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_70 = *(undefined8 *)(param_2 + 4);
    local_78 = *(void **)(param_2 + 2);
    local_68 = *(long *)(param_2 + 6);
  }
  local_60._0_3_ = (undefined3)param_2[8];
  local_60._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_5c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  lVar2 = *plVar3;
  if (*(char *)(lVar2 + 0x240) == '\x01') {
    if (*(char *)(lVar2 + 0x23f) < '\0') {
      operator_delete(*(void **)(lVar2 + 0x228));
    }
    *(undefined1 *)(lVar2 + 0x240) = 0;
  }
  local_58[0] = uVar1;
  if (local_68 < 0) {
    FUN_005478d8(&local_50,local_78,uStack_70);
  }
  else {
    uStack_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
  }
  local_38 = local_60;
  uStack_34 = uStack_5c;
  (*(code *)plVar3[5])(plVar3 + 2,local_58);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}


// ===== 00c284f4  FUN_00c284f4 =====

void FUN_00c284f4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc28568);
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


// ===== 00c28568  FUN_00c28568 =====

void FUN_00c28568(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *local_118;
  undefined1 auStack_110 [16];
  code *local_100;
  undefined8 uStack_f8;
  long *local_e8;
  void *local_e0;
  char cStack_c9;
  
  lVar3 = *(long *)(param_1 + 2);
  if (**(char **)(param_1 + 4) == '\x01') {
    (**(code **)(**(long **)(lVar3 + 0x208) + 0x98))(&local_e8,*(long **)(lVar3 + 0x208),*param_1);
    FUN_00b618b4(*(undefined8 *)(param_1 + 6),&local_e8);
    FUN_0066981c(&local_e8);
    lVar9 = *(long *)(param_1 + 6);
    lVar8 = *(long *)(lVar3 + 0xf8);
    uVar11 = *(long *)(lVar9 + 0x68) - *(long *)(lVar9 + 0x60);
    uVar10 = *(long *)(lVar3 + 0x100) - lVar8;
    if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/rtp_sender.cc",0x2ce,
                   "current_parameters.encodings.size() >= init_parameters_.encodings.size()",
                   &DAT_001fb920,((long)uVar11 >> 4) * -0x79435e50d79435e5,
                   ((long)uVar10 >> 4) * -0x79435e50d79435e5);
    }
    if (*(long *)(lVar3 + 0x100) != lVar8) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 6) + 0x60);
        if ((ulong)((*(long *)(*(long *)(param_1 + 6) + 0x68) - lVar4 >> 4) * -0x79435e50d79435e5)
            <= uVar10) {
LAB_00c288c4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        puVar1 = (undefined4 *)(lVar4 + lVar9);
        uVar5 = *puVar1;
        *(undefined1 *)((undefined4 *)(lVar8 + lVar9) + 1) = *(undefined1 *)(puVar1 + 1);
        *(undefined4 *)(lVar8 + lVar9) = uVar5;
        lVar8 = *(long *)(*(long *)(param_1 + 6) + 0x60);
        if (((ulong)((*(long *)(*(long *)(param_1 + 6) + 0x68) - lVar8 >> 4) * -0x79435e50d79435e5)
             <= uVar10) ||
           (lVar4 = *(long *)(lVar3 + 0xf8),
           (ulong)((*(long *)(lVar3 + 0x100) - lVar4 >> 4) * -0x79435e50d79435e5) <= uVar10))
        goto LAB_00c288c4;
        if (lVar4 != lVar8) {
          lVar4 = lVar4 + lVar9;
          lVar2 = lVar8 + lVar9;
          bVar6 = *(byte *)(lVar8 + lVar9 + 0xb7);
          plVar7 = (long *)(lVar2 + 0xa0);
          if (*(char *)(lVar4 + 0xb7) < '\0') {
            uVar11 = *(ulong *)(lVar8 + lVar9 + 0xa8);
            plVar12 = (long *)*plVar7;
            if (-1 < (char)bVar6) {
              uVar11 = (ulong)bVar6;
              plVar12 = plVar7;
            }
            FUN_00547f08(lVar4 + 0xa0,plVar12,uVar11);
          }
          else if ((char)bVar6 < '\0') {
            FUN_00547fc0(lVar4 + 0xa0,*plVar7,*(undefined8 *)(lVar8 + lVar9 + 0xa8));
          }
          else {
            uVar14 = *(undefined8 *)(lVar2 + 0xa8);
            uVar13 = *plVar7;
            *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar2 + 0xb0);
            *(undefined8 *)(lVar4 + 0xa8) = uVar14;
            *(undefined8 *)(lVar4 + 0xa0) = uVar13;
          }
        }
        if (((ulong)((*(long *)(lVar3 + 0x100) - *(long *)(lVar3 + 0xf8) >> 4) * -0x79435e50d79435e5
                    ) <= uVar10) ||
           (lVar8 = *(long *)(*(long *)(param_1 + 6) + 0x60),
           (ulong)((*(long *)(*(long *)(param_1 + 6) + 0x68) - lVar8 >> 4) * -0x79435e50d79435e5) <=
           uVar10)) goto LAB_00c288c4;
        FUN_00b62384(lVar8 + lVar9,*(long *)(lVar3 + 0xf8) + lVar9);
        lVar8 = *(long *)(lVar3 + 0xf8);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x130;
      } while (uVar10 < (ulong)((*(long *)(lVar3 + 0x100) - lVar8 >> 4) * -0x79435e50d79435e5));
      lVar9 = *(long *)(param_1 + 6);
    }
    uVar5 = *(undefined4 *)(lVar3 + 0x138);
    *(undefined1 *)(lVar9 + 0xa4) = *(undefined1 *)(lVar3 + 0x13c);
    *(undefined4 *)(lVar9 + 0xa0) = uVar5;
    local_100 = FUN_00433984;
    uStack_f8 = 0;
    (**(code **)(**(long **)(lVar3 + 0x208) + 0x80))
              (&local_e8,*(long **)(lVar3 + 0x208),*param_1,*(undefined8 *)(param_1 + 6),auStack_110
              );
    *(bool *)*(undefined8 *)(param_1 + 8) = (int)local_e8 == 0;
    if (cStack_c9 < '\0') {
      operator_delete(local_e0);
    }
    (*local_100)(0,auStack_110,auStack_110);
    if ((**(byte **)(param_1 + 8) & 1) != 0) {
      (**(code **)(**(long **)(lVar3 + 0x208) + 0x98))(&local_e8,*(long **)(lVar3 + 0x208),*param_1)
      ;
      FUN_00b618b4(*(undefined8 *)(param_1 + 6),&local_e8);
      FUN_0066981c(&local_e8);
    }
  }
  plVar7 = *(long **)(lVar3 + 0x220);
  if (plVar7 != (long *)0x0) {
    plVar12 = *(long **)(lVar3 + 0x208);
    uVar5 = *param_1;
    local_e8 = plVar7;
    (**(code **)*plVar7)();
    (**(code **)(*plVar12 + 0x78))(plVar12,uVar5,&local_e8);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 8))();
    }
  }
  plVar7 = *(long **)(lVar3 + 0x278);
  if (plVar7 != (long *)0x0) {
    plVar12 = *(long **)(lVar3 + 0x208);
    uVar5 = *param_1;
    local_118 = plVar7;
    (**(code **)*plVar7)();
    (**(code **)(*plVar12 + 0x88))(plVar12,uVar5,&local_118);
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x280) != 0) {
    (**(code **)(**(long **)(lVar3 + 0x208) + 0x90))(*(long **)(lVar3 + 0x208),*param_1);
  }
  return;
}


// ===== 00c28918  FUN_00c28918 =====

void FUN_00c28918(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (*(char *)(param_1 + 1) == '\x01') {
    (**(code **)(*plVar1 + 0x160))(plVar1,*(undefined4 *)((long)param_1 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x00c28968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1,0);
  return;
}


// ===== 00c2896c  FUN_00c2896c =====

void FUN_00c2896c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (*(char *)(param_1 + 1) == '\x01') {
    (**(code **)(*plVar1 + 0x160))(plVar1,*(undefined4 *)((long)param_1 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x00c289bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1,0);
  return;
}


// ===== 00c289c0  FUN_00c289c0 =====

void FUN_00c289c0(undefined4 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *local_28;
  
  plVar2 = *(long **)(*(long *)(param_1 + 2) + 0x208);
  if (plVar2 != (long *)0x0) {
    local_28 = *(long **)(*(long *)(param_1 + 2) + 0x278);
    uVar1 = *param_1;
    if (local_28 != (long *)0x0) {
      (**(code **)*local_28)(local_28);
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,uVar1,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  return;
}


// ===== 00c28a40  FUN_00c28a40 =====

void FUN_00c28a40(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + 1;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  param_1[2] = &PTR_FUN_00d4c300;
  param_1[3] = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x55]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x58];
  param_1[0x58] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 8))();
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
  }
  FUN_00c21194(plVar2);
  return;
}


// ===== 00c28ae4  FUN_00c28ae4 =====

void FUN_00c28ae4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + 1;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  param_1[2] = &PTR_FUN_00d4c300;
  param_1[3] = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x55]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x58];
  param_1[0x58] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 8))();
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
  }
  FUN_00c21194(plVar2);
  operator_delete(param_1);
  return;
}


// ===== 00c28b94  FUN_00c28b94 =====

void FUN_00c28b94(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x2c8);
  return;
}


// ===== 00c28bb8  FUN_00c28bb8 =====

bool FUN_00c28bb8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x59);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c28c10  FUN_00c28c10 =====

bool FUN_00c28c10(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x2c8) == 1;
}


// ===== 00c28c28  FUN_00c28c28 =====

void FUN_00c28c28(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x2c0);
  return;
}


// ===== 00c28c4c  FUN_00c28c4c =====

bool FUN_00c28c4c(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -8);
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x2c0);
  if ((plVar2 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return iVar1 != 1;
}


// ===== 00c28ca4  FUN_00c28ca4 =====

void FUN_00c28ca4(long *param_1)

{
  long *plVar1;
  
  param_1[-1] = (long)&PTR_FUN_00d4c0e0;
  *param_1 = (long)&PTR_FUN_00d4c168;
  param_1[1] = (long)&PTR_FUN_00d4c300;
  param_1[2] = (long)&PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x54]);
  (**(code **)(*param_1 + 0xe8))(param_1);
  plVar1 = (long *)param_1[0x57];
  param_1[0x57] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  FUN_00c21194(param_1);
  return;
}


// ===== 00c28d40  FUN_00c28d40 =====

void FUN_00c28d40(long param_1)

{
  FUN_00c28ae4(param_1 + -8);
  return;
}


// ===== 00c28d4c  FUN_00c28d4c =====

void FUN_00c28d4c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-2] = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + -1;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  *param_1 = &PTR_FUN_00d4c300;
  param_1[1] = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x53]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  FUN_00c21194(plVar2);
  return;
}


// ===== 00c28df0  FUN_00c28df0 =====

void FUN_00c28df0(long param_1)

{
  FUN_00c28ae4(param_1 + -0x10);
  return;
}


// ===== 00c28dfc  FUN_00c28dfc =====

void FUN_00c28dfc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-3] = &PTR_FUN_00d4c0e0;
  plVar2 = param_1 + -2;
  *plVar2 = (long)&PTR_FUN_00d4c168;
  param_1[-1] = &PTR_FUN_00d4c300;
  *param_1 = &PTR_FUN_00d4c328;
  FUN_00c2a404(param_1[0x52]);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  plVar1 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
  }
  FUN_00c21194(plVar2);
  return;
}


// ===== 00c28ea0  FUN_00c28ea0 =====

void FUN_00c28ea0(long param_1)

{
  FUN_00c28ae4(param_1 + -0x18);
  return;
}


// ===== 00c28eac  FUN_00c28eac =====

void FUN_00c28eac(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x18);
  return;
}


// ===== 00c28ed0  FUN_00c28ed0 =====

bool FUN_00c28ed0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 3);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c28f28  FUN_00c28f28 =====

void FUN_00c28f28(undefined8 *param_1)

{
  undefined8 *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = &PTR_FUN_00d4c878;
  pcStack_90 = FUN_00c298a8;
  local_88 = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = param_1;
  FUN_0066f1ac((long)&local_80 + 4);
  FUN_00c298e4(&local_98,param_1[1]);
  FUN_0066f2b0((long)&local_80 + 4);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  return;
}


// ===== 00c28fb4  FUN_00c28fb4 =====

void FUN_00c28fb4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_00d4c878;
  local_c0 = FUN_00c298a8;
  local_b8 = 0;
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
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[1];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c299a8;
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
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00c290d4  FUN_00c290d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c290d4(long param_1,undefined8 param_2)

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
  local_c0 = *(long *)(param_1 + 0x10);
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
  uStack_b0 = _UNK_001f31d8;
  local_b8 = _DAT_001f31d0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00c299ec;
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


// ===== 00c29210  FUN_00c29210 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c29210(long param_1)

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
  
  local_c0 = *(long *)(param_1 + 0x10);
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
  uStack_b0 = _UNK_001f46e8;
  local_b8 = _DAT_001f46e0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c29a38;
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


// ===== 00c2930c  FUN_00c2930c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c2930c(long param_1)

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
  
  local_c0 = *(long *)(param_1 + 0x10);
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
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c29a7c;
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


// ===== 00c2941c  FUN_00c2941c =====

void FUN_00c2941c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


// ===== 00c29430  FUN_00c29430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00c29430(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
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
  undefined1 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_d0 = *(undefined8 *)(param_1 + 0x10);
  local_a8 = &uStack_24;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_a0 = &local_28;
  local_98 = &local_2c;
  uStack_c0 = _UNK_001f2798;
  local_c8 = _DAT_001f2790;
  uStack_b0 = param_2;
  local_2c = param_5;
  local_28 = param_4;
  uStack_24 = param_3;
  FUN_0066f1ac(&puStack_90);
  uVar1 = FUN_00c29acc(&local_d0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&puStack_90);
  return uVar1 & 1;
}


// ===== 00c294dc  FUN_00c294dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c294dc(undefined8 param_1,long param_2)

{
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
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
  
  local_c0 = *(undefined8 *)(param_2 + 0x10);
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
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
  uStack_b0 = _UNK_001f2338;
  local_b8 = _DAT_001f2330;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00c29c0c(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  return;
}


// ===== 00c2957c  FUN_00c2957c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c2957c(long param_1)

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
  
  local_c8 = *(long *)(param_1 + 0x10);
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
  uStack_b8 = _UNK_001f3ab8;
  local_c0 = _DAT_001f3ab0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c29d90;
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


// ===== 00c29680  FUN_00c29680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c29680(long param_1)

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
  
  local_c8 = *(long *)(param_1 + 0x10);
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
  uStack_b8 = _UNK_001f3d98;
  local_c0 = _DAT_001f3d90;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c29d90;
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


// ===== 00c29784  FUN_00c29784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00c29784(long param_1)

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
  
  local_c8 = *(long *)(param_1 + 0x10);
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
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00c29d90;
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


// ===== 00c29888  FUN_00c29888 =====

bool FUN_00c29888(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 00c298a0  FUN_00c298a0 =====

void FUN_00c298a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc298a8);
  (*pcVar1)();
}


// ===== 00c298a8  FUN_00c298a8 =====

void FUN_00c298a8(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00c298e4  FUN_00c298e4 =====

void FUN_00c298e4(long *param_1,long *param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar1 = FUN_007e18fc(param_2);
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[1];
    if ((param_1[2] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_1 + (param_1[2] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00c29934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_00c299a8;
  local_40[0] = param_1;
  (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
  (*local_30)(0,local_40,local_40);
  FUN_0066f318((long)param_1 + 0x1c,0x7fffffffffffffff,3000000);
  return;
}


// ===== 00c299a8  FUN_00c299a8 =====

void FUN_00c299a8(undefined8 *param_1)

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


// ===== 00c299ec  FUN_00c299ec =====

void FUN_00c299ec(undefined8 *param_1)

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


// ===== 00c29a38  FUN_00c29a38 =====

void FUN_00c29a38(undefined8 *param_1)

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


// ===== 00c29a7c  FUN_00c29a7c =====

void FUN_00c29a7c(undefined8 *param_1)

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


// ===== 00c29acc  FUN_00c29acc =====

byte FUN_00c29acc(long *param_1,long *param_2)

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
    pcStack_28 = FUN_00c29ba8;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 8,0x7fffffffffffffff,3000000);
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    pcVar4 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    bVar2 = (*pcVar4)(plVar1,param_1[4],*(undefined4 *)param_1[5],*(undefined4 *)param_1[6],
                      *(undefined4 *)param_1[7]);
    *(byte *)(param_1 + 3) = bVar2 & 1;
  }
  return bVar2 & 1;
}


// ===== 00c29ba8  FUN_00c29ba8 =====

void FUN_00c29ba8(undefined8 *param_1)

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
  bVar2 = (*pcVar3)(plVar1,plVar4[4],*(undefined4 *)plVar4[5],*(undefined4 *)plVar4[6],
                    *(undefined4 *)plVar4[7]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 8);
  return;
}


// ===== 00c29c0c  FUN_00c29c0c =====

void FUN_00c29c0c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c29d14;
    local_50 = param_2;
    (**(code **)(*param_3 + 8))(param_3,&local_50,&uStack_11,&uStack_12);
    (*local_40)(0,&local_50,&local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar3)(&local_50);
    if (*(char *)((long)param_2 + 0x2f) < '\0') {
      operator_delete((void *)param_2[3]);
    }
    param_2[4] = lStack_48;
    param_2[3] = (long)local_50;
    param_2[5] = (long)local_40;
  }
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  lVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = lVar5;
  *param_1 = lVar4;
  param_1[2] = lVar2;
  param_2[3] = 0;
  return;
}


// ===== 00c29d14  FUN_00c29d14 =====

void FUN_00c29d14(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long local_38;
  long lStack_30;
  long local_28;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)(&local_38);
  if (*(char *)((long)plVar2 + 0x2f) < '\0') {
    operator_delete((void *)plVar2[3]);
  }
  plVar2[5] = local_28;
  plVar2[4] = lStack_30;
  plVar2[3] = local_38;
  FUN_0066f2dc((long)plVar2 + 0x34);
  return;
}


// ===== 00c29d90  FUN_00c29d90 =====

void FUN_00c29d90(undefined8 *param_1)

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


// ===== 00c29ddc  FUN_00c29ddc =====

void FUN_00c29ddc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)param_1[1] + 0x210);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
    plVar1 = (long *)(**(code **)(*plVar1 + 200))();
  }
  *(byte *)*param_1 = (byte)plVar1 & 1;
  return;
}


// ===== 00c29e34  FUN_00c29e34 =====

void FUN_00c29e34(undefined8 *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  plVar1 = *(long **)(*(long *)(puVar2 + 2) + 0x210);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
    plVar1 = (long *)(**(code **)(*plVar1 + 0xd0))
                               (plVar1,*puVar2,**(undefined4 **)(puVar2 + 4),
                                **(undefined4 **)(puVar2 + 6));
  }
  *(byte *)*param_1 = (byte)plVar1 & 1;
  return;
}


// ===== 00c29e9c  FUN_00c29e9c =====

void FUN_00c29e9c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)param_1[1];
  lVar4 = *(long *)(puVar3 + 2);
  plVar1 = *(long **)(lVar4 + 0x210);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
    lVar2 = *(long *)(lVar4 + 0x2c0);
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = lVar2 + 8;
    }
    plVar1 = (long *)(**(code **)(*plVar1 + 0xc0))
                               (plVar1,*puVar3,**(undefined1 **)(puVar3 + 4),
                                *(undefined8 *)(puVar3 + 6),lVar4);
  }
  *(byte *)*param_1 = (byte)plVar1 & 1;
  return;
}


// ===== 00c29f18  FUN_00c29f18 =====

void FUN_00c29f18(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c29f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 2) + 0x50))(*(long **)(param_1 + 2),*param_1);
  return;
}


// ===== 00c29f34  FUN_00c29f34 =====

void FUN_00c29f34(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x29c);
  return;
}


// ===== 00c29f58  FUN_00c29f58 =====

bool FUN_00c29f58(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x29c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c29fb0  FUN_00c29fb0 =====

void FUN_00c29fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c350;
  param_1[1] = &PTR_FUN_00d4c4f0;
  param_1[2] = &PTR_FUN_00d4c518;
  FUN_00c23bb8();
  FUN_00c21194(param_1);
  return;
}


// ===== 00c29ff4  FUN_00c29ff4 =====

void FUN_00c29ff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c350;
  param_1[1] = &PTR_FUN_00d4c4f0;
  param_1[2] = &PTR_FUN_00d4c518;
  FUN_00c23bb8();
  FUN_00c21194(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c2a044  FUN_00c2a044 =====

bool FUN_00c2a044(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x29c) == 1;
}


// ===== 00c2a05c  FUN_00c2a05c =====

void FUN_00c2a05c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c4f0;
  param_1[1] = &PTR_FUN_00d4c518;
  param_1 = param_1 + -1;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  return;
}


// ===== 00c2a0a4  FUN_00c2a0a4 =====

void FUN_00c2a0a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4c4f0;
  param_1[1] = &PTR_FUN_00d4c518;
  param_1 = param_1 + -1;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c2a0f8  FUN_00c2a0f8 =====

void FUN_00c2a0f8(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d4c4f0;
  *param_1 = &PTR_FUN_00d4c518;
  param_1 = param_1 + -2;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  return;
}


// ===== 00c2a140  FUN_00c2a140 =====

void FUN_00c2a140(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d4c4f0;
  *param_1 = &PTR_FUN_00d4c518;
  param_1 = param_1 + -2;
  *param_1 = &PTR_FUN_00d4c350;
  FUN_00c23bb8(param_1);
  FUN_00c21194(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00c2a194  FUN_00c2a194 =====

void FUN_00c2a194(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  lVar3 = *param_1;
  lVar1 = (**(code **)(**(long **)(lVar3 + 0x208) + 0x10))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(lVar3 + 0x208) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00c2a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xd0))(plVar2,(int)param_1[4],param_1 + 1);
    return;
  }
  return;
}


// ===== 00c2a200  FUN_00c2a200 =====

/* WARNING: Removing unreachable block (ram,0x00c2a284) */

void FUN_00c2a200(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc2a2e0);
      (*pcVar1)();
    }
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar4 + 8);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar4 + 0x10);
        pvVar2 = pvVar5;
        if (pvVar5 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0x18);
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          } while (pvVar3 != pvVar5);
          pvVar2 = *(void **)((long)pvVar4 + 8);
        }
        *(void **)((long)pvVar4 + 0x10) = pvVar5;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 00c2a2e0  FUN_00c2a2e0 =====

void FUN_00c2a2e0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[1];
  plVar2 = *(long **)(*(long *)(puVar3 + 2) + 0x208);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
    lVar1 = 0;
    if (**(long **)(puVar3 + 6) != 0) {
      lVar1 = **(long **)(puVar3 + 6) + 0x10;
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(plVar2,*puVar3,*(undefined8 *)(puVar3 + 4),lVar1)
    ;
  }
  *(byte *)*param_1 = (byte)plVar2 & 1;
  return;
}


// ===== 00c2a350  FUN_00c2a350 =====

void FUN_00c2a350(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2a368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 2) + 0x160))(*(long **)(param_1 + 2),*param_1);
  return;
}


// ===== 00c2a36c  FUN_00c2a36c =====

void FUN_00c2a36c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)operator_new(0x58);
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    uVar1 = DAT_001f4f68;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 8) = 2000;
    puVar2[7] = uVar1;
    puVar2[9] = 0;
    *puVar2 = &PTR_FUN_00d4cb60;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    *param_1 = puVar2;
    puVar2[6] = 0;
    puVar2[5] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar2 + 10);
    }
  }
  return;
}


// ===== 00c2a404  FUN_00c2a404 =====

void FUN_00c2a404(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_007ebdcc();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00c2a438  FUN_00c2a438 =====

void FUN_00c2a438(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc2a440);
  (*pcVar1)();
}


// ===== 00c2a440  FUN_00c2a440 =====

void FUN_00c2a440(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 00c2a44c  FUN_00c2a44c =====

void FUN_00c2a44c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 00c2a458  FUN_00c2a458 =====

void FUN_00c2a458(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2a46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
  return;
}


// ===== 00c2a474  FUN_00c2a474 =====

undefined4 FUN_00c2a474(long *param_1,long *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  if (((param_3 - 0x1771U < 0xffffe8b7) || (param_4 < 0x1e)) || (param_5 < 0x1e)) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f613f,"../../pc/dtmf_sender.cc",0x3e3,
                   "InsertDtmf is called with invalid duration or tones gap. The duration cannot be more than "
                   ,6000,"ms or less than ",0x28,"ms. The gap between tones must be at least ",0x1e,
                   &DAT_0019c2e7);
      return 0;
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x30))();
    if ((uVar3 & 1) != 0) {
      if (param_1 + 4 != param_2) {
        bVar1 = *(byte *)((long)param_2 + 0x17);
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          uVar3 = param_2[1];
          plVar6 = (long *)*param_2;
          if (-1 < (char)bVar1) {
            uVar3 = (ulong)bVar1;
            plVar6 = param_2;
          }
          FUN_00547f08(param_1 + 4,plVar6,uVar3);
        }
        else if ((char)bVar1 < '\0') {
          FUN_00547fc0(param_1 + 4,*param_2,param_2[1]);
        }
        else {
          lVar8 = param_2[1];
          lVar7 = *param_2;
          param_1[6] = param_2[2];
          param_1[5] = lVar8;
          param_1[4] = lVar7;
        }
      }
      *(int *)(param_1 + 7) = param_3;
      *(int *)((long)param_1 + 0x3c) = param_4;
      *(int *)(param_1 + 8) = param_5;
      if (param_1[9] != 0) {
        FUN_007ebdcc();
      }
      FUN_007ebca0(local_60);
      plVar6 = local_60[0];
      pvVar4 = (void *)param_1[9];
      local_60[0] = (long *)0x0;
      param_1[9] = (long)plVar6;
      if (pvVar4 != (void *)0x0) {
        iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4);
        if (iVar2 == 1) {
          operator_delete(pvVar4);
        }
        plVar6 = local_60[0];
        if ((local_60[0] != (long *)0x0) &&
           (iVar2 = FUN_00d0f7a0(0xffffffff,local_60[0]), iVar2 == 1)) {
          operator_delete(plVar6);
        }
        plVar6 = (long *)param_1[9];
      }
      plVar5 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        FUN_00d0f740(1,plVar6);
      }
      local_60[0] = (long *)operator_new(0x30);
      *local_60[0] = (long)plVar6;
      local_60[0][4] = (long)FUN_004473ec;
      local_60[0][5] = (long)FUN_00c2ace8;
      local_60[0][2] = (long)param_1;
      local_50 = FUN_005db390;
      pcStack_48 = FUN_005db348;
      local_24[0] = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,local_60,1000,local_24,&uStack_21);
      (*local_50)(0,local_60,local_60);
      return 1;
    }
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/dtmf_sender.cc",0x433,
                   "InsertDtmf is called on DtmfSender that can\'t send DTMF.");
      return 0;
    }
  }
  return 0;
}


// ===== 00c2a6f0  FUN_00c2a6f0 =====

void FUN_00c2a6f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return;
}


// ===== 00c2a71c  FUN_00c2a71c =====

undefined4 FUN_00c2a71c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 00c2a728  FUN_00c2a728 =====

undefined4 FUN_00c2a728(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// ===== 00c2a734  FUN_00c2a734 =====

undefined4 FUN_00c2a734(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 00c2a740  FUN_00c2a740 =====

void FUN_00c2a740(long param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 local_80;
  undefined7 uStack_7f;
  char cStack_69;
  undefined1 uStack_61;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  code *pcStack_48;
  
  cVar3 = *(char *)(param_1 + 0x37);
  uVar11 = (ulong)cVar3;
  if ((long)uVar11 < 0) {
    lVar12 = *(long *)(param_1 + 0x20);
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  else {
    lVar12 = param_1 + 0x20;
    uVar5 = uVar11;
  }
  if (uVar5 != 0) {
    uVar13 = 0;
    do {
      uVar4 = *(byte *)(lVar12 + uVar13) - 0x2a;
      if (((uVar4 < 0x3b) && ((0x78000000780ffc5U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) ||
         (*(byte *)(lVar12 + uVar13) == 0x23)) {
        if ((uVar5 != uVar13) && (uVar13 != 0xffffffffffffffff)) {
          if (cVar3 < '\0') {
            uVar11 = *(ulong *)(param_1 + 0x28);
          }
          if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:1360: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
                      );
          }
          lVar12 = param_1 + 0x20;
          if (cVar3 < '\0') {
            lVar12 = *(long *)(param_1 + 0x20);
          }
          bVar2 = *(byte *)(lVar12 + uVar13);
          uVar4 = (uint)bVar2;
          if (0xffffffe5 < bVar2 - 0x7b) {
            uVar4 = bVar2 ^ 0x20;
          }
          pvVar6 = memchr(",0123456789*#ABCD",uVar4,0x12);
          if (pvVar6 == (void *)0x0) {
            iVar8 = 0;
LAB_00c2a8fc:
            plVar14 = *(long **)(param_1 + 0x18);
            if (plVar14 == (long *)0x0) {
              uVar11 = FUN_004249b0(0,iVar8);
              if ((uVar11 & 1) != 0) {
                return;
              }
              pcVar10 = "The DtmfProvider has been destroyed.";
              uVar9 = 0x6d3;
LAB_00c2aa54:
              FUN_00623bb0(&DAT_001f4e98,"../../pc/dtmf_sender.cc",uVar9,pcVar10);
              return;
            }
            iVar1 = *(int *)(param_1 + 0x3c);
            uVar11 = (**(code **)(*plVar14 + 8))(plVar14,iVar8,*(undefined4 *)(param_1 + 0x38));
            if ((uVar11 & 1) == 0) {
              uVar11 = FUN_004249b0();
              if ((uVar11 & 1) != 0) {
                return;
              }
              pcVar10 = "The DtmfProvider can no longer send DTMF.";
              uVar9 = 0x703;
              goto LAB_00c2aa54;
            }
            uVar4 = *(int *)(param_1 + 0x38) + iVar1;
            puVar7 = *(undefined8 **)(param_1 + 8);
          }
          else {
            iVar8 = (int)pvVar6 + -0x2591e9;
            if (iVar8 != -1) goto LAB_00c2a8fc;
            uVar4 = *(uint *)(param_1 + 0x40);
            puVar7 = *(undefined8 **)(param_1 + 8);
          }
          if (puVar7 != (undefined8 *)0x0) {
            FUN_00547e10(&local_60,param_1 + 0x20,uVar13,1,&local_80);
            FUN_00547e10(&local_80,param_1 + 0x20,uVar13 + 1,0xffffffffffffffff,&uStack_61);
            (**(code **)*puVar7)(puVar7,&local_60,&local_80);
            if (cStack_69 < '\0') {
              operator_delete((void *)CONCAT71(uStack_7f,local_80));
            }
            if ((long)local_50 < 0) {
              operator_delete(local_60);
            }
            plVar14 = *(long **)(param_1 + 8);
            FUN_00547e10(&local_60,param_1 + 0x20,uVar13,1,&local_80);
            (**(code **)(*plVar14 + 8))(plVar14,&local_60);
            if (local_50._7_1_ < '\0') {
              operator_delete(local_60);
            }
          }
          lVar12 = uVar13 + 1;
          if (*(char *)(param_1 + 0x37) < '\0') {
            if (lVar12 == -1) {
              *(undefined8 *)(param_1 + 0x28) = 0;
              **(undefined1 **)(param_1 + 0x20) = 0;
              goto LAB_00c2aa88;
            }
          }
          else if (lVar12 == -1) {
            *(undefined1 *)(param_1 + 0x37) = 0;
            *(undefined1 *)(param_1 + 0x20) = 0;
            goto LAB_00c2aa88;
          }
          FUN_005481a4(param_1 + 0x20,0,lVar12);
LAB_00c2aa88:
          lVar12 = *(long *)(param_1 + 0x48);
          plVar14 = *(long **)(param_1 + 0x10);
          if (lVar12 != 0) {
            FUN_00d0f740(1,lVar12);
          }
          local_60 = (long *)operator_new(0x30);
          *local_60 = lVar12;
          local_60[4] = (long)FUN_004473ec;
          local_60[5] = (long)FUN_00c2ace8;
          local_80 = 1;
          local_60[2] = param_1;
          local_50 = FUN_005db390;
          pcStack_48 = FUN_005db348;
          (**(code **)(*plVar14 + 0x10))(plVar14,&local_60,(ulong)uVar4 * 1000,&local_80,&uStack_61)
          ;
          (*local_50)(0,&local_60,&local_60);
          return;
        }
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
  }
  if (cVar3 < '\0') {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    puVar7 = *(undefined8 **)(param_1 + 8);
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
    puVar7 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    local_60 = (long *)0x0;
    uStack_58 = 0;
    local_50 = (code *)0x0;
    (**(code **)*puVar7)(puVar7,&local_60,param_1 + 0x20);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    local_60 = (long *)0x0;
    uStack_58 = 0;
    local_50 = (code *)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 8))(*(long **)(param_1 + 8),&local_60);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
  }
  return;
}


// ===== 00c2ab48  FUN_00c2ab48 =====

void FUN_00c2ab48(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x50);
  return;
}


// ===== 00c2ab6c  FUN_00c2ab6c =====

bool FUN_00c2ab6c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 10);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00c2abc4  FUN_00c2abc4 =====

void FUN_00c2abc4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d4cae8;
  if (param_1[9] != 0) {
    FUN_007ebdcc();
    pvVar2 = (void *)param_1[9];
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
  }
  if (-1 < *(char *)((long)param_1 + 0x37)) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 00c2ac4c  FUN_00c2ac4c =====

void FUN_00c2ac4c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d4cae8;
  if (param_1[9] != 0) {
    FUN_007ebdcc();
    pvVar2 = (void *)param_1[9];
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c2acd0  FUN_00c2acd0 =====

bool FUN_00c2acd0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x50) == 1;
}


// ===== 00c2ace8  FUN_00c2ace8 =====

void FUN_00c2ace8(undefined8 *param_1)

{
  FUN_00c2a740(*param_1);
  return;
}


// ===== 00c2acf4  FUN_00c2acf4 =====

void FUN_00c2acf4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  *param_1 = &PTR_FUN_00d4cbe0;
  param_1[1] = &PTR_FUN_00d4cce0;
  param_1[2] = &PTR_FUN_00d4cd18;
  if (((DAT_00dbaed8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbaed8), iVar1 != 0)) {
    DAT_00dbaed0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbaed8);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbaed0 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbaed0,"BaseChannel::~BaseChannel",0,0,0,0,0,0);
    local_40 = DAT_00dbaed0;
    pcStack_38 = "BaseChannel::~BaseChannel";
  }
  FUN_007ebdcc(param_1[8]);
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  FUN_00898e5c(param_1 + 0x2c);
  pvVar7 = (void *)param_1[0x29];
  if (pvVar7 != (void *)0x0) {
    pvVar6 = (void *)param_1[0x2a];
    pvVar2 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x20);
        if (pvVar6 == (void *)0x0) goto LAB_00c2afc0;
        FUN_00668f8c(pvVar6);
      } while (pvVar6 != pvVar7);
      pvVar2 = (void *)param_1[0x29];
    }
    param_1[0x2a] = pvVar7;
    operator_delete(pvVar2);
  }
  pvVar7 = (void *)param_1[0x26];
  if (pvVar7 != (void *)0x0) {
    if (param_1[0x27] - 1 < (ulong)(param_1[0x27] - (long)pvVar7)) goto LAB_00c2afc0;
    param_1[0x27] = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x22];
  if (pvVar7 != (void *)0x0) {
    pvVar6 = (void *)param_1[0x23];
    pvVar2 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x90);
        if (pvVar6 == (void *)0x0) goto LAB_00c2afc0;
        FUN_0088d578(pvVar6);
      } while (pvVar6 != pvVar7);
      pvVar2 = (void *)param_1[0x22];
    }
    param_1[0x23] = pvVar7;
    operator_delete(pvVar2);
  }
  pvVar7 = (void *)param_1[0x1f];
  if (pvVar7 != (void *)0x0) {
    pvVar6 = (void *)param_1[0x20];
    pvVar2 = pvVar7;
    if (pvVar7 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x90);
        if (pvVar6 == (void *)0x0) goto LAB_00c2afc0;
        FUN_0088d578(pvVar6);
      } while (pvVar6 != pvVar7);
      pvVar2 = (void *)param_1[0x1f];
    }
    param_1[0x20] = pvVar7;
    operator_delete(pvVar2);
  }
  pvVar7 = (void *)param_1[0x1a];
  if (pvVar7 == (void *)0x0) {
LAB_00c2af54:
    pvVar7 = (void *)param_1[0x17];
    if (pvVar7 == (void *)0x0) {
LAB_00c2afe4:
      (*(code *)param_1[0x14])(0,param_1 + 0x12,param_1 + 0x12);
      (*(code *)param_1[0x10])(0,param_1 + 0xe,param_1 + 0xe);
      (*(code *)param_1[0xc])(0,param_1 + 10,param_1 + 10);
      pvVar7 = (void *)param_1[8];
      if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
        operator_delete(pvVar7);
      }
      plVar3 = (long *)param_1[4];
      param_1[4] = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = (long *)param_1[3];
      param_1[3] = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      return;
    }
    pvVar6 = (void *)param_1[0x18];
    uVar5 = (ulong)((long)pvVar6 + (-8 - ((long)pvVar6 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar7 - (long)pvVar6 << 0x3d) - ((long)pvVar7 - (long)pvVar6)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar7 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar6 == pvVar7) {
        param_1[0x18] = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00c2afe4;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    pvVar6 = (void *)param_1[0x1b];
    uVar5 = (ulong)((long)pvVar6 + (-8 - ((long)pvVar6 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar7 - (long)pvVar6 << 0x3d) - ((long)pvVar7 - (long)pvVar6)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar7 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar6 == pvVar7) {
        param_1[0x1b] = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00c2af54;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
LAB_00c2afc0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c2b0c0  FUN_00c2b0c0 =====

void FUN_00c2b0c0(long param_1)

{
  FUN_00c2acf4(param_1 + -8);
  return;
}


// ===== 00c2b0cc  FUN_00c2b0cc =====

void FUN_00c2b0cc(long param_1)

{
  FUN_00c2acf4(param_1 + -0x10);
  return;
}


// ===== 00c2b0d8  FUN_00c2b0d8 =====

void FUN_00c2b0d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc2b0e0);
  (*pcVar1)();
}


// ===== 00c2b0e0  FUN_00c2b0e0 =====

void FUN_00c2b0e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc2b0e8);
  (*pcVar1)();
}


// ===== 00c2b0e8  FUN_00c2b0e8 =====

void FUN_00c2b0e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc2b0f0);
  (*pcVar1)();
}


// ===== 00c2b0f0  FUN_00c2b0f0 =====

uint FUN_00c2b0f0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *local_58;
  code *pcStack_50;
  code *local_48;
  
  uVar1 = (**(code **)(*param_2 + 0x68))(param_2,param_1 + 0x160,param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(long **)(param_1 + 0xb0) = param_2;
    local_58 = (long *)operator_new(0x20);
    *local_58 = param_1;
    local_58[2] = (long)FUN_004473ec;
    local_58[3] = (long)FUN_00c31e48;
    pcStack_50 = FUN_00c3145c;
    local_48 = FUN_00c3146c;
    FUN_007b5b08(param_2 + 1,param_1,&local_58);
    lVar2 = *(long *)(param_1 + 0xb0);
    local_58 = (long *)operator_new(0x20);
    *local_58 = param_1;
    local_58[2] = (long)FUN_004473ec;
    local_58[3] = (long)FUN_00c31e88;
    pcStack_50 = FUN_00bc89e0;
    local_48 = FUN_00bc8a20;
    FUN_007b5b08(lVar2 + 0x70,param_1,&local_58);
    lVar2 = *(long *)(param_1 + 0xb0);
    local_58 = (long *)operator_new(0x20);
    *local_58 = param_1;
    local_58[2] = (long)FUN_004473ec;
    local_58[3] = (long)FUN_00c31ec4;
    pcStack_50 = FUN_00c3145c;
    local_48 = FUN_00c3146c;
    FUN_007b5b08(lVar2 + 0x90,param_1,&local_58);
    lVar2 = *(long *)(param_1 + 0xb0);
    local_58 = (long *)operator_new(0x20);
    *local_58 = param_1;
    local_58[2] = (long)FUN_004473ec;
    local_58[3] = (long)FUN_00c31ed8;
    pcStack_50 = FUN_00c314ac;
    local_48 = FUN_00c314bc;
    FUN_007b5b08(lVar2 + 0xb0,param_1,&local_58);
  }
  return uVar1 & 1;
}


