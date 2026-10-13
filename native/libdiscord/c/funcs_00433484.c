// ===== 00433484  FUN_00433484 =====

void FUN_00433484(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  pvVar4 = operator_new(0x70);
  FUN_007ebdf4();
  FUN_007e0c24(param_1,pvVar4,0);
  param_1[0x1b] = param_2;
  param_1[0x1c] = param_3;
  *param_1 = &PTR_FUN_00d1bf70;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = param_1[0x1b];
  }
  puVar5 = (undefined8 *)calloc(1,0x80);
  param_1[0x1d] = puVar5;
  *puVar5 = param_1;
  puVar5 = (undefined8 *)calloc(1,0x98);
  param_1[0x1e] = puVar5;
  *puVar5 = param_1;
  uVar6 = FUN_0051452c(param_2);
  FUN_005d089c(uVar6,param_1[0x1e]);
  uVar6 = FUN_0051452c(param_1[0x1b]);
  FUN_005cdda4(uVar6,param_1[0x1d],FUN_00433594);
  FUN_007e0dfc(param_1);
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
      return;
    }
  }
  return;
}


// ===== 00433594  FUN_00433594 =====

void FUN_00433594(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    FUN_005d0af4(plVar3[0x1e]);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    while (iVar1 == 0) {
      FUN_007e0734(plVar3,0);
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if ((iVar1 != -1) && ((uVar2 & 1) == 0)) {
      FUN_005d08e0(plVar3[0x1e],FUN_004338e0,(long)iVar1 + 1,0);
      return;
    }
  }
  return;
}


// ===== 00433638  FUN_00433638 =====

void FUN_00433638(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_FUN_00d1bf70;
  FUN_007e121c();
  FUN_005d0af4(param_1[0x1e]);
  puVar2 = (undefined8 *)param_1[0x1d];
  puVar3 = (undefined8 *)param_1[0x1e];
  *puVar2 = 0;
  *puVar3 = 0;
  puVar6 = PTR_free_00d51ac0;
  FUN_005ce374(puVar2,PTR_free_00d51ac0);
  FUN_005ce374(param_1[0x1e],puVar6);
  FUN_005d0af4(param_1[0x1e]);
  iVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  while (iVar7 == 0) {
    FUN_007e0734(param_1,0);
    iVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  }
  uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((iVar7 != -1) && ((uVar8 & 1) == 0)) {
    FUN_005d08e0(param_1[0x1e],FUN_004338e0,(long)iVar7 + 1,0);
  }
  plVar10 = (long *)param_1[0x1c];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  FUN_007e0e18(param_1);
  return;
}


// ===== 0043374c  FUN_0043374c =====

void FUN_0043374c(void *param_1)

{
  FUN_00433638();
  operator_delete(param_1);
  return;
}


// ===== 00433770  FUN_00433770 =====

void FUN_00433770(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(param_2 + 0x10))(1,param_2,auStack_70);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  local_60 = *(code **)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_007e1498(param_1,auStack_70,param_3,param_4);
  (*local_60)(0,auStack_70,auStack_70);
  FUN_005ce108(*(undefined8 *)(param_1 + 0xe8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00433824  FUN_00433824 =====

void FUN_00433824(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(param_2 + 0x10))(1,param_2,auStack_70);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  local_60 = *(code **)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_007e1508(param_1,auStack_70,param_3,param_4,param_5);
  (*local_60)(0,auStack_70,auStack_70);
  FUN_005ce108(*(undefined8 *)(param_1 + 0xe8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004338e0  FUN_004338e0 =====

void FUN_004338e0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    FUN_005d0af4(plVar3[0x1e]);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    while (iVar1 == 0) {
      FUN_007e0734(plVar3,0);
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if ((iVar1 != -1) && ((uVar2 & 1) == 0)) {
      FUN_005d08e0(plVar3[0x1e],FUN_004338e0,(long)iVar1 + 1,0);
      return;
    }
  }
  return;
}


// ===== 00433984  FUN_00433984 =====

void FUN_00433984(void)

{
  return;
}


// ===== 00433988  FUN_00433988 =====

void FUN_00433988(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_00420564(param_1 + 0x11,50000,100000);
  param_1[0x3c] = param_4;
  param_1[0x3d] = param_3;
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined1 *)((long)param_1 + 0x1fa) = 0;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x3e] = uVar3;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x42] = FUN_00402980;
  param_1[0x43] = &DAT_001f1910;
  puVar1 = (undefined8 *)operator_new(0x88);
  param_1[0x44] = puVar1;
  puVar1[0x10] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00d1bfe8;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0xc2c80000c2c80000;
  puVar1[6] = 0xc2c80000c2c80000;
  *(undefined4 *)(puVar1 + 5) = 0xc2c80000;
  puVar1[9] = 0xc2c80000c2c80000;
  puVar1[8] = 0xc2c80000c2c80000;
  puVar1[0xb] = 0xc2c80000c2c80000;
  puVar1[10] = 0xc2c80000c2c80000;
  puVar1[3] = FUN_0041c32c;
  puVar1[4] = &DAT_001f1910;
  puVar2 = (undefined8 *)*param_2;
  puVar1[0xd] = 0xc2c80000c2c80000;
  puVar1[0xc] = 0xc2c80000c2c80000;
  puVar1[0xf] = 0xc2c80000c2c80000;
  puVar1[0xe] = 0xc2c80000c2c80000;
  param_1[0x45] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  return;
}


// ===== 00433a9c  FUN_00433a9c =====

void FUN_00433a9c(long param_1,int param_2,ulong param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,uint param_8,long param_9)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  int local_150 [2];
  long lStack_148;
  long lStack_140;
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
  undefined1 local_e0 [8];
  long lStack_d8;
  long lStack_d0;
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
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_2 == 0) {
    pvVar8 = operator_new(0x3c60);
    FUN_00658c48();
    FUN_00658e5c(pvVar8,param_9);
    uVar6 = *(undefined8 *)(param_1 + 0x1e0);
    puVar9 = (undefined8 *)operator_new(0x20);
    puVar9[2] = pvVar8;
    *(undefined1 *)(puVar9 + 3) = 1;
    *puVar9 = &PTR_FUN_00d1c018;
    puVar9[1] = param_1;
    FUN_00512cf8(uVar6,puVar9);
    FUN_0065f054(local_e0);
    (**(code **)(**(long **)(param_1 + 0x228) + 0xf8))(local_150);
    uStack_98 = uStack_108;
    local_a0 = local_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    uStack_78 = uStack_e8;
    local_80 = local_f0;
    lStack_d8 = lStack_148;
    uStack_c8 = uStack_138;
    lStack_d0 = lStack_140;
    uStack_b8 = uStack_128;
    local_c0 = local_130;
    uStack_a8 = uStack_118;
    uStack_b0 = uStack_120;
    FUN_0065f0c8(local_150);
    uVar14 = 0x80000000;
    if (uStack_78._4_1_ != '\0') {
      uVar14 = (undefined4)uStack_78;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar14;
  }
  else {
    FUN_0065f054(local_e0);
  }
  FUN_00433e44(param_1,param_2,param_9,local_e0);
  lVar13 = *(long *)(param_9 + 0x18);
  lVar15 = *(long *)(param_9 + 0x28);
  iVar2 = *(int *)(param_9 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x220);
  uVar6 = FUN_00659108(param_9);
  FUN_0048637c(uVar11,uVar6,lVar13,lVar15);
  if ((param_3 & 1) != 0) {
    FUN_006592d8(param_9);
  }
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x1e8);
LAB_00433c70:
    *(undefined1 *)(lVar10 + 0x10) = 0;
    if (param_2 == 0) {
      uVar14 = *(undefined4 *)(param_9 + 0x34);
LAB_00433c98:
      uVar7 = FUN_0065901c(param_9);
      if (((uVar7 & 1) == 0) || (*(int *)(param_1 + 0x230) < 10)) {
        uVar1 = 0;
        if ((param_8 & 1) == 0) {
          uVar1 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x228) + 0xc0))(*(long **)(param_1 + 0x228),uVar1);
        (**(code **)(**(long **)(param_1 + 0x228) + 0xd0))(*(long **)(param_1 + 0x228),param_7 & 1);
        lStack_140 = (long)(iVar2 / 100);
        local_150[0] = iVar2;
        lStack_148 = lVar15;
        lVar15 = FUN_005183d8();
        plVar12 = *(long **)(param_1 + 0x228);
        uVar6 = FUN_00659108(param_9);
        uVar11 = FUN_006591a0(param_9);
        (**(code **)(*plVar12 + 0x80))(plVar12,uVar6,local_150,local_150,uVar11);
        lVar10 = FUN_005183d8();
        plVar12 = (long *)(param_1 + 0x60);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + (lVar10 - lVar15) / 1000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar12 = (long *)(param_1 + 0x68);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar2 = 0;
        if ((param_3 & 1) != 0) {
          iVar2 = *(int *)(param_1 + 0x230) + 1;
        }
        *(int *)(param_1 + 0x230) = iVar2;
      }
      *(undefined4 *)(param_9 + 0x34) = uVar14;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar13;
      pvVar8 = operator_new(0x3c60);
      FUN_00658c48();
      FUN_00658e5c(pvVar8,param_9);
      uVar6 = *(undefined8 *)(param_1 + 0x1e0);
      puVar9 = (undefined8 *)operator_new(0x20);
      puVar9[2] = pvVar8;
      *(undefined1 *)(puVar9 + 3) = 0;
      *puVar9 = &PTR_FUN_00d1c018;
      puVar9[1] = param_1;
      FUN_00512cf8(uVar6,puVar9);
      goto LAB_00433e04;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x1e8);
    if ((*(byte *)(param_1 + 0x1fa) & 1) != 0) goto LAB_00433c70;
    *(byte *)(lVar10 + 0x10) = *(byte *)(param_1 + 0x1f9) & 1;
    if (param_2 == 0) {
      uVar14 = *(undefined4 *)(param_9 + 0x34);
      if (((*(byte *)(param_1 + 0x1f9) & 1) == 0) &&
         ((uVar7 = FUN_0065901c(param_9), (uVar7 & 1) == 0 || (*(int *)(param_1 + 0x230) < 10)))) {
        uVar11 = *(undefined8 *)(param_1 + 0x1f0);
        uVar6 = FUN_006591a0(param_9);
        FUN_0041f560(uVar11,uVar6,lVar13,lVar15 << 1,lVar15,iVar2);
      }
      goto LAB_00433c98;
    }
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar13;
LAB_00433e04:
  FUN_0065f0c8(local_e0);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00433e44  FUN_00433e44 =====

/* WARNING: Removing unreachable block (ram,0x0043464c) */
/* WARNING: Removing unreachable block (ram,0x0043421c) */
/* WARNING: Removing unreachable block (ram,0x0043411c) */
/* WARNING: Removing unreachable block (ram,0x00434134) */
/* WARNING: Removing unreachable block (ram,0x00434690) */
/* WARNING: Removing unreachable block (ram,0x00434140) */
/* WARNING: Removing unreachable block (ram,0x00434128) */
/* WARNING: Removing unreachable block (ram,0x0043415c) */
/* WARNING: Removing unreachable block (ram,0x00434168) */
/* WARNING: Removing unreachable block (ram,0x00434668) */
/* WARNING: Removing unreachable block (ram,0x00434174) */
/* WARNING: Removing unreachable block (ram,0x0043465c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffee8 : 0x00434530 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00433e44(long *param_1,int param_2,long param_3,long param_4)

{
  char *pcVar1;
  char **ppcVar2;
  char ***pppcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  char **ppcVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_fffffffffffffdb0;
  undefined8 uVar27;
  undefined4 uVar28;
  char *local_1e8;
  char **ppcStack_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  char *local_1c8;
  char **ppcStack_1c0;
  char *local_1b8;
  char **ppcStack_1b0;
  char *local_1a8;
  char **ppcStack_1a0;
  long local_198;
  char **ppcStack_190;
  char *local_188;
  long *plStack_180;
  ulong local_178;
  char **ppcStack_170;
  char *local_168;
  ulong *puStack_160;
  char *local_158;
  char **ppcStack_150;
  char *local_148;
  char **ppcStack_140;
  char *local_138;
  char **ppcStack_130;
  char **local_128;
  char **ppcStack_120;
  char *local_118;
  char ***local_110;
  char *local_108;
  char **ppcStack_100;
  char **local_f8;
  char *local_f0;
  undefined1 local_e8;
  char **local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  char *local_b8;
  char **ppcStack_b0;
  undefined1 *local_a8;
  char *local_a0;
  char **ppcStack_98;
  char **local_90;
  char **local_88;
  long local_80;
  
  lVar15 = tpidr_el0;
  local_80 = *(long *)(lVar15 + 0x28);
  uVar24 = (ulong)(param_2 != 0);
  lVar16 = FUN_005183d8();
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffdb0 >> 0x20);
  uVar17 = lVar16 - param_1[uVar24 * 4 + 3];
  if (10000000000 < (long)uVar17) {
    fVar26 = (float)(ulong)param_1[uVar24 * 4 + 4] / (float)(uVar17 / 1000000000);
    if ((0 < *(int *)(param_3 + 0x20)) && (fVar26 != 0.0 && fVar26 < 0.0 == NAN(fVar26))) {
      fVar25 = (float)*(int *)(param_3 + 0x20);
      *(int *)(param_1 + uVar24 * 4 + 6) = (int)(((fVar26 - fVar25) * 100.0) / fVar25 + 0.5);
    }
    lVar23 = *(long *)(param_3 + 0x28) * *(long *)(param_3 + 0x18);
    if (lVar23 != 0) {
      lVar18 = 0;
      do {
        FUN_00659108(param_3);
        uVar28 = (undefined4)((ulong)in_stack_fffffffffffffdb0 >> 0x20);
        lVar18 = lVar18 + 1;
      } while (lVar23 - lVar18 != 0);
    }
    if (param_2 == 0) {
      lVar23 = *(long *)(param_1[0x3e] + 0xa0);
      uVar19 = *(ulong *)(param_1[0x3e] + 0x98) / 1000;
      pcVar22 = (char *)param_1[0xd];
      pcVar21 = (char *)((ulong)param_1[0xc] / 1000);
      uVar17 = FUN_00417e08();
      if ((uVar17 & 1) != 0) goto LAB_00433f98;
LAB_00434000:
      local_b8 = "../../discord_native_lib/src/media/captured_audio_processor.cpp";
      ppcStack_b0 = (char **)0x581;
      local_a8 = auStack_1d0;
      pcVar1 = "game";
      if (param_2 != 1) {
        pcVar1 = "?";
      }
      local_1b8 = "voice";
      if (param_2 != 0) {
        local_1b8 = pcVar1;
      }
      ppcStack_1b0 = &local_1c8;
      ppcStack_1c0 = &local_b8;
      local_118 = (char *)(double)fVar26;
      ppcStack_1a0 = &local_1b8;
      local_1c8 = "Audio stream: ";
      ppcStack_190 = &local_1a8;
      local_1a8 = ", frames processed: ";
      plStack_180 = &local_198;
      ppcStack_170 = &local_188;
      local_188 = ", noise canceller process time: ";
      puStack_160 = &local_178;
      ppcStack_150 = &local_168;
      local_168 = " [ms], APM frames processed: ";
      ppcStack_140 = &local_158;
      ppcStack_130 = &local_148;
      local_148 = ", APM process time: ";
      ppcStack_120 = &local_138;
      ppcStack_1e0 = &local_118;
      local_128 = (char **)0x1ca51b;
      local_110 = &local_128;
      local_1e8 = " [Hz], sample rate diff: ";
      local_198 = lVar23;
      local_178 = uVar19;
      local_158 = pcVar22;
      local_138 = pcVar21;
      FUN_00434e78(&local_108,param_1 + uVar24 * 4 + 6);
      local_88 = &local_1e8;
      ppcStack_98 = ppcStack_100;
      local_a0 = local_108;
      local_90 = local_f8;
      puVar12 = *(undefined8 **)(ppcStack_1e0[1] + 8);
      puVar13 = (undefined8 *)puVar12[1];
      puVar4 = (undefined8 *)puVar13[1];
      puVar5 = (undefined8 *)puVar4[1];
      puVar6 = (undefined8 *)puVar5[1];
      uVar27 = *puVar6;
      puVar6 = (undefined8 *)puVar6[1];
      puVar7 = (undefined8 *)puVar6[1];
      puVar8 = (undefined8 *)puVar7[1];
      puVar9 = (undefined8 *)puVar8[1];
      puVar10 = (undefined8 *)puVar9[1];
      puVar11 = (undefined8 *)puVar10[1];
      FUN_00623bb0(*ppcStack_1e0,&DAT_001f5f60,*puVar11,puVar11[1],*puVar10,*puVar9,*puVar8,*puVar7,
                   *puVar6,uVar27,*puVar5,*puVar4,*puVar13,*puVar12,*(undefined8 *)ppcStack_1e0[1],
                   local_1e8,&local_a0,&DAT_001ef44c);
      uVar28 = (undefined4)((ulong)uVar27 >> 0x20);
      uVar17 = FUN_00417e08();
    }
    else {
      uVar19 = 0;
      pcVar21 = (char *)0x0;
      pcVar22 = (char *)0x0;
      lVar23 = param_1[uVar24 * 4 + 5];
      uVar17 = FUN_00417e08();
      if ((uVar17 & 1) == 0) goto LAB_00434000;
LAB_00433f98:
      uVar17 = FUN_00417e08();
    }
    if ((uVar17 & 1) == 0) {
      local_a0 = "../../discord_native_lib/src/media/captured_audio_processor.cpp";
      ppcStack_98 = (char **)0x5c1;
      ppcStack_120 = &local_a0;
      local_b8 = *(char **)(param_3 + 0x28);
      local_90 = &local_138;
      local_118 = *(char **)(param_3 + 0x18);
      local_128 = (char **)0x1b07c1;
      ppcStack_1e0 = &local_118;
      local_110 = &local_128;
      local_1e8 = ", channels: ";
      ppcStack_b0 = &local_1e8;
      ppcStack_100 = &local_b8;
      local_108 = ", rate: ";
      FUN_00623bb0(&DAT_001f5f71,"../../discord_native_lib/src/media/captured_audio_processor.cpp",
                   0x5c1);
    }
    if ((param_2 == 0) && (uVar17 = FUN_00417e08(), (uVar17 & 1) == 0)) {
      local_90 = &local_168;
      local_a0 = "../../discord_native_lib/src/media/captured_audio_processor.cpp";
      ppcStack_98 = (char **)0x5f9;
      ppcStack_150 = &local_a0;
      local_158 = "Audio stream: ";
      ppcStack_140 = &local_158;
      local_148 = "voice";
      ppcStack_130 = &local_148;
      local_138 = ", echo: delay_ms: ";
      if (*(char *)(param_4 + 0x6c) == '\0') {
        local_108 = (char *)0x0;
        ppcStack_100 = (char **)0x0;
        local_f8 = (char **)0x0;
      }
      else {
        FUN_005490bc(&local_108,*(undefined4 *)(param_4 + 0x68));
      }
      local_128 = &local_108;
      ppcStack_120 = &local_138;
      local_110 = &local_128;
      local_118 = ", erl: ";
      if (*(char *)(param_4 + 0x10) == '\0') {
        local_b8 = (char *)0x0;
        ppcStack_b0 = (char **)0x0;
        local_a8 = (undefined1 *)0x0;
        if (*(char *)(param_4 + 0x20) != '\0') goto LAB_00434388;
LAB_004343ac:
        pcVar21 = ", erl: ";
        local_1e8 = (char *)0x0;
        ppcStack_1e0 = (char **)0x0;
        local_1d8 = 0;
      }
      else {
        FUN_005494f4(&local_b8,*(undefined8 *)(param_4 + 8));
        if (*(char *)(param_4 + 0x20) == '\0') goto LAB_004343ac;
LAB_00434388:
        FUN_005494f4(&local_1e8,*(undefined8 *)(param_4 + 0x18));
        pcVar21 = local_118;
      }
      pcVar22 = local_110[1][1];
      puVar12 = *(undefined8 **)(pcVar22 + 8);
      puVar13 = (undefined8 *)puVar12[1];
      ppcVar20 = &local_b8;
      FUN_00623bb0("\r\t\t\t\n\t\n\t\n",*puVar13,puVar13[1],*puVar12,*(undefined8 *)pcVar22,
                   *local_110[1],*local_110,pcVar21,ppcVar20,", erle: ",&local_1e8);
      uVar28 = (undefined4)((ulong)ppcVar20 >> 0x20);
      if (local_1d8 < 0) {
        operator_delete(local_1e8);
      }
    }
    param_1[uVar24 * 4 + 3] = lVar16;
    param_1[uVar24 * 4 + 4] = 0;
  }
  if ((param_2 != 0) || (lVar16 - *param_1 < 0x3b9aca01)) goto LAB_004345f8;
  if (((*(byte *)(param_1 + 0x3f) & 1) == 0) ||
     ((*(long *)(param_1[0x3e] + 0xa0) == param_1[1] ||
      (*(long *)(param_1[0x3e] + 0x98) == param_1[2])))) {
LAB_004345d0:
    *(undefined4 *)((long)param_1 + 0x1fc) = 0;
  }
  else {
    ppcVar20 = (char **)(*(long *)(param_1[0x3e] + 0xa0) - param_1[1]);
    pcVar21 = (char *)(*(long *)(param_1[0x3e] + 0x98) - param_1[2]);
    uVar17 = 0;
    if (ppcVar20 != (char **)0x0) {
      uVar17 = (ulong)pcVar21 / (ulong)ppcVar20;
    }
    if (uVar17 >> 3 < 0x465) goto LAB_004345d0;
    iVar14 = *(int *)((long)param_1 + 0x1fc);
    *(int *)((long)param_1 + 0x1fc) = iVar14 + 1;
    if (1 < iVar14) {
      FUN_005467a4((long)param_1 + 0x234);
      uVar17 = FUN_004022fc();
      if ((uVar17 & 1) == 0) {
        local_90 = &local_148;
        ppcStack_1e0 = &local_118;
        ppcStack_100 = &local_b8;
        local_a0 = "../../discord_native_lib/src/media/captured_audio_processor.cpp";
        ppcStack_98 = (char **)0x6c2;
        ppcStack_130 = &local_a0;
        local_138 = "Noise canceller CPU overuse (";
        ppcStack_120 = &local_138;
        local_108 = (char *)(ulong)*(uint *)(param_3 + 0x20);
        local_118 = " frames / ";
        ppcStack_b0 = &local_1e8;
        local_b8 = " us, rate ";
        ppcVar2 = *local_110;
        pppcVar3 = local_110 + 1;
        pcVar22 = (*pppcVar3)[1];
        local_1e8 = pcVar21;
        local_128 = ppcVar20;
        local_110 = &local_128;
        FUN_00623bb0(&DAT_001f5f87,*(undefined8 *)pcVar22,*(undefined8 *)(pcVar22 + 8),**pppcVar3,
                     ppcVar2," frames / ",pcVar21," us, rate ",
                     CONCAT44(uVar28,*(uint *)(param_3 + 0x20))," Hz, setup count ",
                     *(undefined8 *)(param_1[0x3e] + 0xa8),&DAT_001ca519);
      }
      *(undefined4 *)(param_1 + 0x3f) = 0;
      *(undefined4 *)((long)param_1 + 0x1fc) = 0;
      if (*(char *)(param_1[0x43] + 0x10) == '\0') {
        local_d0 = *(undefined4 *)(param_3 + 0x20);
        local_e8 = 1;
        local_d8 = 1;
        local_cc = 1;
        local_c8 = *(undefined8 *)(param_1[0x3e] + 0xa8);
        local_c0 = 1;
        local_f0 = pcVar21;
        local_e0 = ppcVar20;
        (*(code *)param_1[0x42])(param_1 + 0x40,1,&local_f0);
      }
      FUN_005467c8((long)param_1 + 0x234);
    }
  }
  *param_1 = lVar16;
  param_1[1] = *(long *)(param_1[0x3e] + 0xa0);
  param_1[2] = *(long *)(param_1[0x3e] + 0x98);
LAB_004345f8:
  *(undefined4 *)((long)param_1 + uVar24 * 0x20 + 0x34) = *(undefined4 *)(param_3 + 0x20);
  if (*(long *)(lVar15 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00434698  FUN_00434698 =====

void FUN_00434698(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  
  pvVar6 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  piVar7 = *(int **)((long)pvVar6 + 0x40);
  if (piVar7 != (int *)0x0) {
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar8 = *(void **)(piVar7 + 2);
      if (pvVar8 != (void *)0x0) {
        pvVar4 = pvVar8;
        pvVar5 = *(void **)(piVar7 + 4);
        if (*(void **)(piVar7 + 4) != pvVar8) {
          do {
            pvVar4 = *(void **)((long)pvVar5 + -0x60);
            pvVar9 = (void *)((long)pvVar5 + -0x68);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar5 + -0x58) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar5 = pvVar9;
          } while (pvVar9 != pvVar8);
          pvVar4 = *(void **)(piVar7 + 2);
        }
        *(void **)(piVar7 + 4) = pvVar8;
        operator_delete(pvVar4);
      }
      operator_delete(piVar7);
    }
  }
  operator_delete(pvVar6);
  return;
}


// ===== 00434748  FUN_00434748 =====

void FUN_00434748(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/captured_audio_processor.cpp",
                 0x7b1,"SetNoiseCancellation: ",param_2 & 1);
  }
  *(uint *)(param_1 + 0x1f8) = param_2 & 1;
  FUN_004347a4(param_1);
  return;
}


// ===== 004347a4  FUN_004347a4 =====

void FUN_004347a4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x3f) & 1) == 0) {
    FUN_0041f4c4();
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00434880:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_0041ef1c(param_1[0x3e]);
    if ((uVar2 & 1) == 0) {
      FUN_005467a4((long)param_1 + 0x234);
      *(undefined4 *)(param_1 + 0x3f) = 0;
      if (*(char *)(param_1[0x43] + 0x10) == '\0') {
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        (*(code *)param_1[0x42])(param_1 + 0x40,5,&local_70);
      }
      FUN_005467c8((long)param_1 + 0x234);
    }
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00434880;
  }
  return;
}


// ===== 00434884  FUN_00434884 =====

void FUN_00434884(long param_1)

{
  FUN_0041fc94(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 0043488c  FUN_0043488c =====

void FUN_0043488c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1f9) = param_2;
  return;
}


// ===== 00434898  FUN_00434898 =====

void FUN_00434898(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1fa) = param_2;
  return;
}


// ===== 004348a0  FUN_004348a0 =====

void FUN_004348a0(long param_1)

{
  FUN_0041f00c(*(undefined8 *)(param_1 + 0x1f0));
  return;
}


// ===== 004348a8  FUN_004348a8 =====

void FUN_004348a8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *local_a8;
  char *local_a0;
  float local_98;
  undefined8 local_90;
  char local_88;
  undefined1 auStack_80 [40];
  long local_58;
  
  uVar3 = (ulong)(param_3 != 0);
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1 + uVar3 * 0x20;
  FUN_004df1c8(auStack_80,*(undefined8 *)(lVar4 + 0x30));
  local_a0 = "sampleRateMismatchPercent";
  uVar2 = FUN_004e148c(param_2,&local_a0);
  FUN_004dfa04(uVar2,auStack_80);
  FUN_004df880(auStack_80);
  FUN_004df1c8(auStack_80,*(undefined8 *)(lVar4 + 0x34));
  local_a0 = "currentSampleRate";
  uVar2 = FUN_004e148c(param_2,&local_a0);
  FUN_004dfa04(uVar2,auStack_80);
  FUN_004df880(auStack_80);
  if (*(int *)(param_1 + uVar3 * 0x18 + 0x58) != -0x80000000) {
    FUN_004df1c8(auStack_80);
    local_a0 = "echo_delay_ms";
    uVar2 = FUN_004e148c(param_2,&local_a0);
    FUN_004dfa04(uVar2,auStack_80);
    FUN_004df880(auStack_80);
  }
  lVar4 = param_1 + uVar3 * 0x18;
  FUN_004df230(auStack_80,*(ulong *)(lVar4 + 0x60) / 1000);
  local_a0 = "apmProcessTime";
  uVar2 = FUN_004e148c(param_2,&local_a0);
  FUN_004dfa04(uVar2,auStack_80);
  FUN_004df880(auStack_80);
  FUN_004df230(auStack_80,*(undefined8 *)(lVar4 + 0x68));
  local_a0 = "apmFramesProcessed";
  uVar2 = FUN_004e148c(param_2,&local_a0);
  FUN_004dfa04(uVar2,auStack_80);
  FUN_004df880(auStack_80);
  if (param_3 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x1f0) + 0x88) != 0) {
      FUN_004df5b4(auStack_80,1);
      local_a0 = "noiseCancellerIsEnabled";
      uVar2 = FUN_004e148c(param_2,&local_a0);
      FUN_004dfa04(uVar2,auStack_80);
      FUN_004df880(auStack_80);
      FUN_004df230(auStack_80,*(ulong *)(*(long *)(param_1 + 0x1f0) + 0x98) / 1000);
      local_a0 = "noiseCancellerProcessTime";
      uVar2 = FUN_004e148c(param_2,&local_a0);
      FUN_004dfa04(uVar2,auStack_80);
      FUN_004df880(auStack_80);
      FUN_004df230(auStack_80,*(undefined8 *)(*(long *)(param_1 + 0x1f0) + 0xa0));
      local_a0 = "noiseCancellerFrames";
      uVar2 = FUN_004e148c(param_2,&local_a0);
      FUN_004dfa04(uVar2,auStack_80);
      FUN_004df880(auStack_80);
    }
    FUN_0042189c(&local_a0,param_1 + 0x88);
    if (local_88 != '\0') {
      if ((long)local_a0 < 0) {
        uVar3 = -((ulong)-(long)local_a0 / 1000) - (ulong)(500 < (ulong)-(long)local_a0 % 1000);
      }
      else {
        uVar3 = (ulong)local_a0 / 1000;
        if (499 < (ulong)local_a0 % 1000) {
          uVar3 = uVar3 + 1;
        }
      }
      FUN_004df210(auStack_80,uVar3);
      local_a8 = "captureProcessingDelayMs";
      uVar2 = FUN_004e148c(param_2,&local_a8);
      FUN_004dfa04(uVar2,auStack_80);
      FUN_004df880(auStack_80);
      if (local_88 != '\0') {
        FUN_004df250((double)local_98,auStack_80);
        local_a8 = "captureProcessingCorrelation";
        uVar2 = FUN_004e148c(param_2,&local_a8);
        FUN_004dfa04(uVar2,auStack_80);
        FUN_004df880(auStack_80);
        if (local_88 != '\0') {
          FUN_004df230(auStack_80,local_90);
          local_a8 = "captureProcessingMeasurements";
          uVar2 = FUN_004e148c(param_2,&local_a8);
          FUN_004dfa04(uVar2,auStack_80);
          FUN_004df880(auStack_80);
          goto LAB_00434c30;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3a7,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
  }
LAB_00434c30:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00434c88  FUN_00434c88 =====

void FUN_00434c88(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_2[2];
  local_38 = (undefined8 *)param_2[3];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x220);
  if ((code *)*local_38 != (code *)0x0) {
    local_50 = (*(code *)*local_38)(*param_2);
  }
  FUN_0048664c(uVar2,&local_50);
  if ((code *)local_38[1] != (code *)0x0) {
    (*(code *)local_38[1])(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00434d14  FUN_00434d14 =====

void FUN_00434d14(long param_1)

{
  FUN_004866f4(*(undefined8 *)(param_1 + 0x220));
  return;
}


// ===== 00434d1c  FUN_00434d1c =====

void FUN_00434d1c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_005467a4(param_1 + 0x234);
  *(code **)(param_1 + 0x210) = FUN_00402980;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x218) + 8);
  *(undefined8 **)(param_1 + 0x218) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x200));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x208) = param_2[1];
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x210) = param_2[2];
  *(undefined8 *)(param_1 + 0x218) = param_2[3];
  param_2[2] = FUN_00402980;
  param_2[3] = &DAT_001f1910;
  FUN_005467c8(param_1 + 0x234);
  return;
}


// ===== 00434da8  FUN_00434da8 =====

void FUN_00434da8(long param_1)

{
  FUN_004866fc(*(undefined8 *)(param_1 + 0x220));
  return;
}


// ===== 00434db0  FUN_00434db0 =====

void FUN_00434db0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1bfe8;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00434dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 00434dd4  FUN_00434dd4 =====

void FUN_00434dd4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1bfe8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00434e14  FUN_00434e14 =====

undefined8 FUN_00434e14(void)

{
  return 0;
}


// ===== 00434e1c  FUN_00434e1c =====

void FUN_00434e1c(void)

{
  return;
}


// ===== 00434e20  FUN_00434e20 =====

void FUN_00434e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c018;
  FUN_00434698(param_1 + 2);
  return;
}


// ===== 00434e30  FUN_00434e30 =====

void FUN_00434e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c018;
  FUN_00434698(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00434e60  FUN_00434e60 =====

void FUN_00434e60(long param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00420f04();
    return;
  }
  FUN_004210a8(*(long *)(param_1 + 8) + 0x88,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00434e78  FUN_00434e78 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00434e78(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar2 = tpidr_el0;
  ppuVar3 = local_178 + 1;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar6,ppuVar3);
  local_178[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar3);
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0054bae0(local_178,*param_2);
  FUN_0054d504(param_1,ppuVar3);
  local_178[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar3);
  FUN_0054b3d4(local_178,puVar5 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00434fcc  FUN_00434fcc =====

void FUN_00434fcc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,undefined8 param_6,long *param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  byte bVar22;
  long lVar23;
  long *plVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_118 [8];
  undefined8 *local_110 [2];
  code *local_100;
  undefined **local_f8;
  undefined8 *local_f0 [2];
  code *local_e0;
  undefined **local_d8;
  undefined8 *local_d0 [2];
  code *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  long local_90;
  undefined8 *puStack_88;
  code *local_80;
  undefined8 *local_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  *param_1 = &PTR_FUN_00d1c040;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d1c0a0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  FUN_007b5d10(param_1 + 9);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  uVar15 = FUN_005183d8();
  param_1[0x12] = param_3;
  param_1[0x13] = param_4;
  param_1[0x10] = uVar15;
  param_1[0x11] = param_2;
  param_1[0x14] = param_5;
  if (param_5 != (long *)0x0) {
    plVar24 = param_5 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar9) {
        *plVar24 = *plVar24 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  param_1[0x15] = param_6;
  param_1[0x16] = param_7;
  if (param_7 != (long *)0x0) {
    plVar24 = param_7 + 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar9) {
        *plVar24 = *plVar24 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    param_6 = param_1[0x15];
  }
  uVar15 = FUN_0051452c(param_6);
  FUN_005156ac(param_1 + 0x17,uVar15,param_1);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  puVar1 = PTR_DAT_00d51b58;
  param_1[0x28] = FUN_00442f08;
  param_1[0x29] = &DAT_001f1910;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = FUN_0040dec4;
  param_1[0x2d] = &DAT_001f1910;
  uVar15 = *(undefined8 *)(puVar1 + 0x10);
  puVar16 = *(undefined8 **)(puVar1 + 0x18);
  uVar27 = *(undefined8 *)puVar1;
  param_1[0x30] = *(undefined8 *)(puVar1 + 8);
  param_1[0x2f] = uVar27;
  param_1[0x31] = uVar15;
  param_1[0x32] = puVar16;
  pcVar17 = (code *)*puVar16;
  if (pcVar17 != (code *)0x0) {
    uVar15 = (*pcVar17)(*(undefined8 *)puVar1);
    param_1[0x2f] = uVar15;
  }
  uVar15 = *(undefined8 *)(puVar1 + 0x28);
  uVar5 = puVar1[0x30];
  *(undefined *)(param_1 + 0x33) = puVar1[0x20];
  uVar4 = *(undefined4 *)(puVar1 + 0x38);
  param_1[0x34] = uVar15;
  uVar6 = puVar1[0x3c];
  *(undefined1 *)(param_1 + 0x35) = uVar5;
  uVar5 = puVar1[0x44];
  *(undefined4 *)(param_1 + 0x36) = uVar4;
  uVar4 = *(undefined4 *)(puVar1 + 0x48);
  *(undefined1 *)((long)param_1 + 0x1b4) = uVar6;
  uVar6 = puVar1[0x4c];
  *(undefined1 *)((long)param_1 + 0x1bc) = uVar5;
  uVar5 = puVar1[0x50];
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  uVar7 = puVar1[0x51];
  *(undefined1 *)((long)param_1 + 0x1c4) = uVar6;
  uVar6 = puVar1[0x58];
  uVar25 = *(undefined4 *)(puVar1 + 0x40);
  *(undefined1 *)(param_1 + 0x39) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1c9) = uVar7;
  uVar5 = puVar1[0x60];
  *(undefined1 *)(param_1 + 0x3a) = uVar6;
  uVar6 = puVar1[0x68];
  uVar4 = *(undefined4 *)(puVar1 + 0x5c);
  *(undefined4 *)(param_1 + 0x37) = uVar25;
  *(undefined1 *)(param_1 + 0x3b) = uVar5;
  uVar25 = *(undefined4 *)(puVar1 + 0x70);
  *(undefined1 *)(param_1 + 0x3c) = uVar6;
  uVar5 = puVar1[0x74];
  uVar26 = *(undefined4 *)(puVar1 + 0x54);
  *(undefined4 *)((long)param_1 + 0x1d4) = uVar4;
  *(undefined4 *)(param_1 + 0x3d) = uVar25;
  uVar6 = puVar1[0x78];
  *(undefined1 *)((long)param_1 + 0x1ec) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1cc) = uVar26;
  *(undefined1 *)(param_1 + 0x3e) = uVar6;
  FUN_00435de4(param_1 + 0x3f,PTR_DAT_00d51b60);
  puVar13 = PTR_DAT_00d51b70;
  puVar12 = PTR_DAT_00d51b68;
  puVar1 = PTR_DAT_00d51b68 + 0x18;
  uVar4 = *(undefined4 *)PTR_DAT_00d51b70;
  uVar5 = PTR_DAT_00d51b70[4];
  *(undefined8 *)((long)param_1 + 0x2e4) = *(undefined8 *)(PTR_DAT_00d51b68 + 4);
  uVar25 = *(undefined4 *)(puVar13 + 8);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  puVar14 = PTR_DAT_00d51b78;
  uVar6 = puVar13[0xc];
  *(undefined1 *)((long)param_1 + 0x2c4) = uVar5;
  uVar4 = *(undefined4 *)(puVar13 + 0x10);
  *(undefined4 *)(param_1 + 0x59) = uVar25;
  uVar5 = puVar13[0x14];
  *(undefined1 *)((long)param_1 + 0x2cc) = uVar6;
  uVar6 = puVar14[4];
  uVar7 = *puVar12;
  *(undefined4 *)(param_1 + 0x5a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2d4) = uVar5;
  uVar5 = puVar12[1];
  *(undefined1 *)((long)param_1 + 0x2dc) = uVar6;
  uVar4 = *(undefined4 *)(puVar12 + 0xc);
  uVar25 = *(undefined4 *)puVar14;
  *(undefined1 *)(param_1 + 0x5c) = uVar7;
  *(undefined1 *)((long)param_1 + 0x2e1) = uVar5;
  uVar5 = puVar12[0x10];
  *(undefined4 *)((long)param_1 + 0x2ec) = uVar4;
  *(undefined4 *)(param_1 + 0x5b) = uVar25;
  *(undefined1 *)(param_1 + 0x5e) = uVar5;
  FUN_00441c84(param_1 + 0x5f,puVar1);
  puVar16 = *(undefined8 **)(puVar12 + 0x68);
  uVar5 = puVar12[0x48];
  uVar27 = *(undefined8 *)(puVar12 + 0x58);
  uVar15 = *(undefined8 *)(puVar12 + 0x50);
  param_1[0x68] = *(undefined8 *)(puVar12 + 0x60);
  *(undefined1 *)(param_1 + 0x65) = uVar5;
  param_1[0x67] = uVar27;
  param_1[0x66] = uVar15;
  param_1[0x69] = puVar16;
  pcVar17 = (code *)*puVar16;
  if (pcVar17 != (code *)0x0) {
    uVar15 = (*pcVar17)(*(undefined8 *)(puVar12 + 0x50));
    param_1[0x66] = uVar15;
  }
  puVar16 = *(undefined8 **)(puVar12 + 0x90);
  uVar5 = puVar12[0x70];
  uVar27 = *(undefined8 *)(puVar12 + 0x80);
  uVar15 = *(undefined8 *)(puVar12 + 0x78);
  param_1[0x6d] = *(undefined8 *)(puVar12 + 0x88);
  *(undefined1 *)(param_1 + 0x6a) = uVar5;
  param_1[0x6c] = uVar27;
  param_1[0x6b] = uVar15;
  param_1[0x6e] = puVar16;
  pcVar17 = (code *)*puVar16;
  if (pcVar17 != (code *)0x0) {
    uVar15 = (*pcVar17)(*(undefined8 *)(puVar12 + 0x78));
    param_1[0x6b] = uVar15;
  }
  uVar5 = puVar12[0x98];
  *(undefined4 *)(param_1 + 0x73) = 0;
  uVar4 = *(undefined4 *)(puVar12 + 0xa0);
  param_1[0x82] = 0;
  uVar6 = puVar12[0xa4];
  *(undefined1 *)(param_1 + 0x6f) = uVar5;
  uVar25 = *(undefined4 *)(puVar12 + 0xa8);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  uVar5 = puVar12[0xac];
  *(undefined1 *)((long)param_1 + 900) = uVar6;
  *(undefined4 *)(param_1 + 0x71) = uVar25;
  uVar4 = *(undefined4 *)(puVar12 + 0xb0);
  *(undefined1 *)((long)param_1 + 0x38c) = uVar5;
  uVar5 = puVar12[0xb4];
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x72) = uVar4;
  *(undefined1 *)((long)param_1 + 0x394) = uVar5;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x89) = 0x3f800000;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  uVar15 = DAT_001f4f70;
  *(undefined4 *)(param_1 + 0x8c) = 10000000;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x422) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  *(undefined1 *)((long)param_1 + 0x426) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x454) = 0;
  param_1[0x8b] = uVar15;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  *(undefined8 *)((long)param_1 + 0x4ac) = 0;
  uVar15 = *(undefined8 *)(param_8 + 0x80);
  param_1[0x99] = *(undefined8 *)(param_8 + 0x88);
  param_1[0x98] = uVar15;
  param_1[0x9a] = *(undefined8 *)(param_8 + 0x90);
  lVar18 = *(long *)(param_8 + 0x98);
  param_1[0x9b] = lVar18;
  if (*(long *)(lVar18 + 8) != 0) {
    *(code **)(param_8 + 0x90) = FUN_0040eaac;
    *(undefined8 **)(param_8 + 0x98) = &DAT_001f1910;
  }
  uVar15 = *(undefined8 *)(param_8 + 0xa0);
  param_1[0x9d] = *(undefined8 *)(param_8 + 0xa8);
  param_1[0x9c] = uVar15;
  param_1[0x9e] = *(undefined8 *)(param_8 + 0xb0);
  lVar18 = *(long *)(param_8 + 0xb8);
  param_1[0x9f] = lVar18;
  if (*(long *)(lVar18 + 8) != 0) {
    *(code **)(param_8 + 0xb0) = FUN_0040eab8;
    *(undefined8 **)(param_8 + 0xb8) = &DAT_001f1910;
  }
  uVar4 = *(undefined4 *)(param_8 + 0xd8);
  *(undefined2 *)((long)param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  param_1[0xa4] = FUN_00442f14;
  param_1[0xa5] = &DAT_001f1910;
  param_1[0xa8] = FUN_00442f20;
  param_1[0xa9] = &DAT_001f1910;
  param_1[0xad] = &DAT_001f1910;
  param_1[0xb1] = &DAT_001f1910;
  param_1[0xac] = FUN_00442f2c;
  param_1[0xb5] = &DAT_001f1910;
  param_1[0xb9] = &DAT_001f1910;
  param_1[0xbd] = &DAT_001f1910;
  param_1[0xb0] = FUN_00442f38;
  param_1[0xc1] = &DAT_001f1910;
  param_1[0xc5] = &DAT_001f1910;
  param_1[0xc9] = &DAT_001f1910;
  param_1[0xb4] = FUN_00442f44;
  param_1[0xcc] = FUN_00442d38;
  param_1[0xcd] = &DAT_001f1910;
  param_1[0xd1] = &DAT_001f1910;
  param_1[0xb8] = FUN_0041c32c;
  param_1[0xbc] = FUN_0040dec4;
  param_1[0xc0] = FUN_00442f50;
  param_1[0xc4] = FUN_00410008;
  param_1[200] = FUN_00410008;
  param_1[0xd0] = FUN_00410008;
  local_a0 = *(undefined8 *)(param_8 + 0x70);
  local_98 = *(undefined8 **)(param_8 + 0x78);
  uStack_a8 = *(undefined8 *)(param_8 + 0x68);
  local_b0 = *(undefined8 *)(param_8 + 0x60);
  if ((code *)*local_98 != (code *)0x0) {
    local_b0 = (*(code *)*local_98)(*(undefined8 *)(param_8 + 0x60));
  }
  local_c0 = FUN_00442d44;
  local_b8 = &PTR_FUN_00d1c318;
  local_d0[0] = (undefined8 *)operator_new(0x18);
  local_d0[0][2] = param_1;
  *local_d0[0] = FUN_00436000;
  local_d0[0][1] = 0;
  FUN_004b6d68(param_1 + 0xd2,param_2 + 0x1a18,&local_b0,local_d0);
  if ((code *)local_b8[1] != (code *)0x0) {
    (*(code *)local_b8[1])(local_d0[0]);
  }
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0);
  }
  local_e0 = FUN_00442d44;
  local_d8 = &PTR_FUN_00d1c318;
  local_f0[0] = (undefined8 *)operator_new(0x18);
  *local_f0[0] = FUN_00436000;
  local_f0[0][1] = 0;
  local_f0[0][2] = param_1;
  local_f8 = &PTR_FUN_00d1c338;
  local_100 = FUN_00442eb0;
  local_110[0] = (undefined8 *)operator_new(0x18);
  local_110[0][2] = param_1;
  *local_110[0] = FUN_00436124;
  local_110[0][1] = 0;
  FUN_004b78b0(param_1 + 0xd6,local_f0,local_110);
  if ((code *)local_f8[1] != (code *)0x0) {
    (*(code *)local_f8[1])(local_110[0]);
  }
  if ((code *)local_d8[1] != (code *)0x0) {
    (*(code *)local_d8[1])(local_f0[0]);
  }
  uVar15 = FUN_0089fec0();
  param_1[0xda] = uVar15;
  param_1[0xe2] = &DAT_001f1910;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe1] = FUN_0041829c;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  param_1[0xea] = FUN_00442f5c;
  param_1[0xeb] = &DAT_001f1910;
  param_1[0xef] = &DAT_001f1910;
  param_1[0xee] = FUN_00442f68;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  if (*(char *)(param_8 + 0x58) == '\0') {
    local_90 = FUN_0051452c(param_1[0x15]);
    auVar28 = FUN_00443044(auStack_118,&local_90);
    plVar24 = (long *)param_1[0x20];
    *(undefined1 (*) [16])(param_1 + 0x1f) = auVar28;
    if (plVar24 != (long *)0x0) {
      plVar3 = plVar24 + 1;
      do {
        lVar18 = *plVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_004356b0;
    }
  }
  else {
    puVar16 = (undefined8 *)operator_new(0x20);
    plVar24 = (long *)param_1[0x20];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = &PTR_FUN_00d1c368;
    puVar16[3] = &PTR_FUN_00d1c3a0;
    param_1[0x1f] = puVar16 + 3;
    param_1[0x20] = puVar16;
    if (plVar24 != (long *)0x0) {
      plVar3 = plVar24 + 1;
      do {
        lVar18 = *plVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_004356b0:
      if (lVar18 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        FUN_005466cc(plVar24);
      }
    }
  }
  (**(code **)(*(long *)param_1[0x1f] + 0x28))((long *)param_1[0x1f],param_1);
  lVar23 = param_1[0x11];
  lVar18 = lVar23 + 0x208;
  FUN_005467a4(lVar18);
  if (*(char *)(lVar23 + 0x250) != '\0') {
    puVar16 = param_1 + 0xf4;
    FUN_007b5a0c(lVar23 + 0x230,param_1,param_1,FUN_004432a4);
    FUN_005467c8(lVar18);
    plVar24 = (long *)param_1[0xf5];
    local_80 = FUN_004432ac;
    local_78 = (undefined8 *)&DAT_001f5fa8;
    local_90 = lVar18;
    puStack_88 = param_1;
    if (plVar24 < (long *)param_1[0xf6]) {
      if (plVar24 == (long *)0x0) goto LAB_00435db8;
      plVar24[1] = (long)param_1;
      *plVar24 = lVar18;
      plVar24[2] = (long)FUN_004432ac;
      plVar24[3] = (long)&DAT_001f5fa8;
      if (DAT_001f5fb0 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      param_1[0xf5] = plVar24 + 4;
    }
    else {
      FUN_004313e8(puVar16,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar23 = param_1[0x11];
    lVar18 = lVar23 + 600;
    FUN_005467a4(lVar18);
    if (*(char *)(lVar23 + 0x2a0) == '\0') goto LAB_00435d90;
    FUN_007b5a0c(lVar23 + 0x280,param_1,param_1,FUN_00443310);
    FUN_005467c8(lVar18);
    plVar24 = (long *)param_1[0xf5];
    local_80 = FUN_00443364;
    local_78 = (undefined8 *)&DAT_001f5fc8;
    local_90 = lVar18;
    if (plVar24 < (long *)param_1[0xf6]) {
      if (plVar24 == (long *)0x0) goto LAB_00435db8;
      plVar24[1] = (long)param_1;
      *plVar24 = lVar18;
      plVar24[2] = (long)FUN_00443364;
      plVar24[3] = (long)&DAT_001f5fc8;
      if (DAT_001f5fd0 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      param_1[0xf5] = plVar24 + 4;
      puStack_88 = param_1;
    }
    else {
      puStack_88 = param_1;
      FUN_004313e8(puVar16,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    plVar3 = *(long **)(param_8 + 0x30);
    for (plVar24 = *(long **)(param_8 + 0x28); plVar24 != plVar3; plVar24 = plVar24 + 3) {
      bVar22 = *(byte *)((long)plVar24 + 0x17);
      plVar20 = (long *)*plVar24;
      uVar21 = plVar24[1];
      uVar19 = (ulong)bVar22;
      uVar2 = uVar21;
      plVar11 = plVar20;
      if (-1 < (char)bVar22) {
        uVar2 = uVar19;
        plVar11 = plVar24;
      }
      if (plVar11 == (long *)0x0 && uVar2 != 0) {
LAB_00435d68:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      if ((uVar2 == 0xe) &&
         (*plVar11 == 0x697463656e6e6f63 && *(long *)((long)plVar11 + 6) == 0x676f6c5f6e6f6974)) {
        FUN_00436418(param_1);
        bVar22 = *(byte *)((long)plVar24 + 0x17);
        uVar19 = (ulong)bVar22;
        plVar20 = (long *)*plVar24;
        uVar21 = plVar24[1];
      }
      uVar2 = uVar21;
      plVar11 = plVar20;
      if (-1 < (char)bVar22) {
        uVar2 = uVar19;
        plVar11 = plVar24;
      }
      if ((plVar11 == (long *)0x0) && (uVar2 != 0)) goto LAB_00435d68;
      if ((uVar2 == 0x20) &&
         (((*plVar11 == 0x615f646c756f6873 && plVar11[1] == 0x755f657a796c616e) &&
          plVar11[2] == 0x63696f765f726573) && plVar11[3] == 0x656d756c6f765f65)) {
        *(undefined1 *)((long)param_1 + 0x504) = 1;
        bVar22 = *(byte *)((long)plVar24 + 0x17);
        uVar19 = (ulong)bVar22;
        plVar20 = (long *)*plVar24;
        uVar21 = plVar24[1];
      }
      uVar2 = uVar21;
      plVar11 = plVar20;
      if (-1 < (char)bVar22) {
        uVar2 = uVar19;
        plVar11 = plVar24;
      }
      if ((plVar11 == (long *)0x0) && (uVar2 != 0)) goto LAB_00435d68;
      if ((uVar2 == 0x25) &&
         ((((*plVar11 == 0x696d655f746e6f64 && plVar11[1] == 0x656d756c6f765f74) &&
           plVar11[2] == 0x70735f796c6e6f5f) && plVar11[3] == 0x655f676e696b6165) &&
          *(long *)((long)plVar11 + 0x1d) == 0x73746e6576655f67)) {
        *(undefined1 *)((long)param_1 + 0x505) = 1;
        bVar22 = *(byte *)((long)plVar24 + 0x17);
        uVar19 = (ulong)bVar22;
        plVar20 = (long *)*plVar24;
        uVar21 = plVar24[1];
      }
      uVar2 = uVar21;
      plVar11 = plVar20;
      if (-1 < (char)bVar22) {
        uVar2 = uVar19;
        plVar11 = plVar24;
      }
      if ((plVar11 == (long *)0x0) && (uVar2 != 0)) goto LAB_00435d68;
      if ((uVar2 == 0x20) &&
         (((*plVar11 == 0x656469765f736f69 && plVar11[1] == 0x6c69626174735f6f) &&
          plVar11[2] == 0x5f6e6f6974617a69) && plVar11[3] == 0x647261646e617473)) {
        *(undefined4 *)(param_1 + 0xa1) = 1;
        bVar22 = *(byte *)((long)plVar24 + 0x17);
        uVar19 = (ulong)bVar22;
        plVar20 = (long *)*plVar24;
        uVar21 = plVar24[1];
      }
      if (-1 < (char)bVar22) {
        uVar21 = uVar19;
        plVar20 = plVar24;
      }
      if ((plVar20 == (long *)0x0) && (uVar21 != 0)) goto LAB_00435d68;
      if ((uVar21 == 0x23) &&
         ((((*plVar20 == 0x656469765f736f69 && plVar20[1] == 0x6c69626174735f6f) &&
           plVar20[2] == 0x5f6e6f6974617a69) && plVar20[3] == 0x6574616c5f776f6c) &&
          *(long *)((long)plVar20 + 0x1b) == 0x79636e6574616c5f)) {
        *(undefined4 *)(param_1 + 0xa1) = 2;
      }
    }
    FUN_004366f8(param_1,param_1[0x11]);
    FUN_00515708(param_1 + 0x17,FUN_00436938,100,100);
    lVar23 = param_1[0x11];
    lVar18 = lVar23 + 200;
    FUN_005467a4(lVar18);
    if (*(char *)(lVar23 + 0x110) != '\0') {
      FUN_007b5a0c(lVar23 + 0xf0,param_1,param_1,FUN_004433c8);
      FUN_005467c8(lVar18);
      plVar24 = (long *)param_1[0xf5];
      local_80 = FUN_004433e0;
      local_78 = (undefined8 *)&DAT_001f5fe8;
      local_90 = lVar18;
      if (plVar24 < (long *)param_1[0xf6]) {
        if (plVar24 == (long *)0x0) {
LAB_00435db8:
          puStack_88 = param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar24[1] = (long)param_1;
        *plVar24 = lVar18;
        plVar24[2] = (long)FUN_004433e0;
        plVar24[3] = (long)&DAT_001f5fe8;
        if (DAT_001f5ff0 != 0) {
          local_80 = FUN_0040dec4;
          local_78 = &DAT_001f1910;
        }
        param_1[0xf5] = plVar24 + 4;
        puStack_88 = param_1;
      }
      else {
        puStack_88 = param_1;
        FUN_004313e8(puVar16,&local_90);
      }
      if ((code *)local_78[1] != (code *)0x0) {
        (*(code *)local_78[1])(local_90);
      }
      if (*(long *)(param_1[0x12] + 200) != 0) {
        FUN_004317b8();
      }
      FUN_004369b0(param_1,param_8 + 0xc0);
      if (param_7 != (long *)0x0) {
        plVar24 = param_7 + 1;
        do {
          lVar18 = *plVar24;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*param_7 + 0x10))(param_7);
          FUN_005466cc(param_7);
        }
      }
      if (param_5 != (long *)0x0) {
        plVar24 = param_5 + 1;
        do {
          lVar18 = *plVar24;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*param_5 + 0x10))(param_5);
          FUN_005466cc(param_5);
        }
      }
      if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_00435d90:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00435de4  FUN_00435de4 =====

void FUN_00435de4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *__src;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long *__dest;
  long lVar5;
  long lVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = param_2[1] - *param_2;
  if (uVar2 != 0) {
    if (0x492492492492492 < (ulong)(((long)uVar2 >> 3) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(uVar2);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (void *)((long)pvVar4 + ((long)uVar2 >> 3) * 8);
    lVar6 = param_2[1];
    for (lVar5 = *param_2; lVar5 != lVar6; lVar5 = lVar5 + 0x38) {
      FUN_00441364(pvVar4,lVar5);
      pvVar4 = (void *)((long)pvVar4 + 0x38);
    }
    param_1[1] = pvVar4;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  FUN_00441984(param_1 + 4,param_2 + 4);
  lVar3 = param_2[0xb];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  lVar5 = param_2[0xc];
  lVar6 = param_2[0xd];
  *(char *)(param_1 + 0xb) = (char)lVar3;
  uVar2 = lVar6 - lVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(uVar2);
    param_1[0xc] = pvVar4;
    param_1[0xd] = pvVar4;
    param_1[0xe] = (void *)((long)pvVar4 + ((long)uVar2 >> 6) * 0x40);
    lVar6 = param_2[0xd];
    for (lVar5 = param_2[0xc]; lVar5 != lVar6; lVar5 = lVar5 + 0x40) {
      FUN_00441b00(pvVar4,lVar5);
      pvVar4 = (void *)((long)pvVar4 + 0x40);
    }
    param_1[0xd] = pvVar4;
  }
  __dest = param_1 + 0x11;
  lVar5 = param_2[0x10];
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  *(char *)(param_1 + 0x10) = (char)lVar5;
  if (*(char *)((long)param_2 + 0x9f) < '\0') {
    __src = (long *)param_2[0x11];
    uVar2 = param_2[0x12];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x9f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (long *)operator_new(uVar1);
      param_1[0x11] = __dest;
      param_1[0x12] = uVar2;
      param_1[0x13] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (long *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    lVar6 = param_2[0x12];
    lVar5 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = lVar6;
    *__dest = lVar5;
  }
  lVar6 = param_2[0x15];
  lVar5 = param_2[0x14];
  *(short *)(param_1 + 0x16) = (short)param_2[0x16];
  param_1[0x15] = lVar6;
  param_1[0x14] = lVar5;
  *(char *)(param_1 + 0x17) = (char)param_2[0x17];
  *(short *)(param_1 + 0x18) = (short)param_2[0x18];
  *(undefined2 *)((long)param_1 + 0xc2) = *(undefined2 *)((long)param_2 + 0xc2);
  return;
}


// ===== 00436000  FUN_00436000 =====

void FUN_00436000(long param_1,undefined4 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined4 local_90;
  undefined1 local_8c;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x668) + 0x10) == '\0') {
    local_90 = *param_2;
    local_8c = *(undefined1 *)(param_2 + 1);
    *(undefined1 *)(param_2 + 1) = 0;
    uStack_80 = *(undefined8 *)(param_2 + 4);
    local_88 = *(void **)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    local_78 = *(long *)(param_2 + 6);
    local_58 = *(long *)(param_2 + 0xe);
    uStack_60 = *(undefined8 *)(param_2 + 0xc);
    local_68 = *(void **)(param_2 + 10);
    local_70 = *(undefined1 *)(param_2 + 8);
    local_38 = *(long *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 6) = 0;
    local_50 = *(undefined1 *)(param_2 + 0x10);
    uStack_40 = *(undefined8 *)(param_2 + 0x14);
    local_48 = *(void **)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 0xe) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x16) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    pcVar2 = *(code **)(param_1 + 0x660);
    *(undefined1 *)(param_2 + 0x10) = 0;
    local_30 = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x18) = 0;
    (*pcVar2)(param_1 + 0x650,&local_90);
    if (local_38 < 0) {
      operator_delete(local_48);
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    if (local_78 < 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00436124  FUN_00436124 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00436124(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *******__src;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *******__dest;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long local_f0;
  undefined8 *******local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 *******local_c0;
  ulong uStack_b8;
  ulong local_b0;
  void *local_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  char cStack_92;
  char cStack_91;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  __dest = &local_e8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_2;
    uVar5 = param_2[1];
    if (uVar5 < 0x17) {
      local_d8 = CONCAT17((char)uVar5,(undefined7)local_d8);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar2);
      local_d8 = uVar2 | 0x8000000000000000;
      local_e8 = __dest;
      uStack_e0 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar5 + 1)))
    goto LAB_004363e8;
    memmove(__dest,__src,uVar5 + 1);
    lVar11 = *(long *)(lVar12 + 0x58);
  }
  else {
    uStack_e0 = param_2[1];
    local_e8 = (undefined8 *******)*param_2;
    local_d8 = param_2[2];
    lVar11 = *(long *)(lVar12 + 0x58);
  }
  local_f0 = lVar4;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x78);
    if (lVar12 == 0) {
      puVar10 = (undefined8 *)operator_new(0x30);
      puVar10[2] = lVar4;
      *puVar10 = &PTR_FUN_00d1c300;
      puVar10[1] = uVar3;
      puVar10[4] = uStack_e0;
      puVar10[3] = local_e8;
      local_f0 = 0;
      puVar10[5] = local_d8;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_00512cf8(lVar11,puVar10);
    }
    else {
      uVar9 = FUN_005ce36c();
      local_b0 = local_d8;
      uStack_b8 = uStack_e0;
      local_c0 = local_e8;
      local_d8 = 0;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      cStack_91 = '\x16';
      local_f0 = 0;
      local_d0 = uVar3;
      local_c8 = lVar4;
      if ((&local_a8 < (void **)0x1eca48) && ("OnVideoDecoderFallback" < &cStack_92)) {
LAB_004363e8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      cStack_92 = '\0';
      uStack_a0._0_1_ = s_OnVideoDecoderFallback_001eca47[8];
      uStack_a0._1_1_ = s_OnVideoDecoderFallback_001eca47[9];
      uStack_a0._2_1_ = s_OnVideoDecoderFallback_001eca47[10];
      uStack_a0._3_1_ = s_OnVideoDecoderFallback_001eca47[0xb];
      uStack_a0._4_1_ = s_OnVideoDecoderFallback_001eca47[0xc];
      uStack_a0._5_1_ = s_OnVideoDecoderFallback_001eca47[0xd];
      local_a8 = (void *)s_OnVideoDecoderFallback_001eca47._0_8_;
      uStack_9a._0_1_ = s_OnVideoDecoderFallback_001eca47[0xe];
      uStack_9a._1_1_ = s_OnVideoDecoderFallback_001eca47[0xf];
      uStack_98._0_1_ = s_OnVideoDecoderFallback_001eca47[0x10];
      uStack_98._1_1_ = s_OnVideoDecoderFallback_001eca47[0x11];
      uStack_98._2_1_ = s_OnVideoDecoderFallback_001eca47[0x12];
      uStack_98._3_1_ = s_OnVideoDecoderFallback_001eca47[0x13];
      uStack_98._4_1_ = s_OnVideoDecoderFallback_001eca47[0x14];
      uStack_98._5_1_ = s_OnVideoDecoderFallback_001eca47[0x15];
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar12;
      local_70 = uVar9;
      puVar10 = (undefined8 *)operator_new(0x70);
      puVar10[2] = lVar4;
      puVar10[4] = uStack_b8;
      puVar10[3] = local_c0;
      *puVar10 = &PTR_FUN_00d1c2d8;
      puVar10[1] = uVar3;
      puVar10[0xb] = FUN_0040e7ec;
      puVar10[0xc] = &DAT_001f4e70;
      puVar10[7] = CONCAT26(uStack_9a,uStack_a0);
      puVar10[6] = local_a8;
      puVar10[5] = local_b0;
      puVar10[0xd] = uVar9;
      puVar10[10] = uStack_88;
      puVar10[9] = local_90;
      puVar10[8] = CONCAT17(cStack_91,CONCAT16(cStack_92,uStack_98));
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = (undefined8 *******)0x0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      uStack_9a = 0;
      uStack_98 = 0;
      cStack_92 = '\0';
      cStack_91 = '\0';
      FUN_00512cf8(lVar11,puVar10);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (cStack_91 < '\0') {
        operator_delete(local_a8);
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != 0) {
        FUN_005466cc();
      }
    }
  }
  if ((long)local_d8 < 0) {
    operator_delete(local_e8);
  }
  if (local_f0 != 0) {
    FUN_005466cc();
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00436418  FUN_00436418 =====

/* WARNING: Removing unreachable block (ram,0x004366b8) */

void FUN_00436418(long param_1)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  long lVar3;
  void **ppvVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  void *local_c0;
  ulong uStack_b8;
  byte local_a9;
  undefined8 ***local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 ***local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 ***local_70;
  size_t local_68;
  byte local_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(param_1 + 0x88);
  bVar2 = *(byte *)(lVar9 + 0x2df);
  uVar11 = *(ulong *)(lVar9 + 0x2d0);
  uVar1 = uVar11;
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    FUN_005125b4(&local_90);
  }
  else if ((char)bVar2 < '\0') {
    ppppuVar6 = *(undefined8 *****)(lVar9 + 0x2c8);
    if (uVar11 < 0x17) {
      ppppuVar5 = &local_90;
      local_80 = CONCAT17((char)uVar11,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar11 | 0xf) + 1;
      ppppuVar5 = (undefined8 ****)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = ppppuVar5;
      uStack_88 = uVar11;
    }
    if ((ppppuVar5 <= ppppuVar6) && (ppppuVar6 < (undefined8 ****)((long)ppppuVar5 + uVar11 + 1)))
    goto LAB_004366c4;
    memmove(ppppuVar5,ppppuVar6,uVar11 + 1);
  }
  else {
    uStack_88 = *(ulong *)(lVar9 + 0x2d0);
    local_90 = *(undefined8 ****)(lVar9 + 0x2c8);
    local_80 = *(ulong *)(lVar9 + 0x2d8);
  }
  FUN_004d7b58(&local_70,&local_90);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  __n = local_68;
  if (-1 < (char)local_59) {
    __n = (ulong)local_59;
  }
  uVar1 = __n + 0xf;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar1 < 0x17) {
    local_a0 = 0;
    ppppuVar6 = &local_a8;
    local_a8 = (undefined8 ****)0x0;
    uStack_98 = uVar1 << 0x38;
  }
  else {
    uVar11 = (uVar1 | 0xf) + 1;
    ppppuVar6 = (undefined8 ****)operator_new(uVar11);
    uStack_98 = uVar11 | 0x8000000000000000;
    local_a8 = ppppuVar6;
    local_a0 = uVar1;
  }
  ppppuVar5 = (undefined8 ****)((long)ppppuVar6 + __n);
  if (-1 < (char)local_59) {
    local_70 = &local_70;
  }
  if ((local_70 < ppppuVar6) || (ppppuVar5 <= local_70)) {
    if (__n != 0) {
      memmove(ppppuVar6,local_70,__n);
    }
    if (("connection_log_" < ppppuVar5) || ((char *)((long)ppppuVar5 + 0xfU) < "onnection_log_")) {
      *(char *)((long)ppppuVar5 + 0xf) = '\0';
      *ppppuVar5 = (undefined8 ***)
                   CONCAT17(s_connection_log__001ab31d[7],s_connection_log__001ab31d._0_7_);
      *(ulong *)((long)ppppuVar5 + 7) =
           CONCAT71(s_connection_log__001ab31d._8_7_,s_connection_log__001ab31d[7]);
      FUN_005ce36c();
      FUN_00549320(&local_c0);
      ppvVar4 = (void **)local_c0;
      if (-1 < (char)local_a9) {
        uStack_b8 = (ulong)local_a9;
        ppvVar4 = &local_c0;
      }
      puVar7 = (undefined8 *)FUN_00547cac(&local_a8,ppvVar4,uStack_b8);
      uStack_88 = puVar7[1];
      local_90 = (undefined8 ***)*puVar7;
      local_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      pvVar8 = operator_new(0x10);
      FUN_004473f8(pvVar8,&local_90,0);
      pvVar10 = *(void **)(param_1 + 0xd0);
      *(void **)(param_1 + 0xd0) = pvVar8;
      if (pvVar10 != (void *)0x0) {
        FUN_0044745c(pvVar10);
        operator_delete(pvVar10);
      }
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if ((char)local_a9 < '\0') {
        operator_delete(local_c0);
      }
      if ((long)uStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_004366c4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004366f8  FUN_004366f8 =====

void FUN_004366f8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *local_1c8 [5];
  long *local_1a0;
  long local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_10f;
  long *local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0xe0) == 0) {
    FUN_0042fd98(*(undefined8 *)(param_1 + 0x90));
    lStack_f8 = 0;
    local_100 = (long *)0x0;
    local_e8 = 0;
    uStack_f0 = 0;
    if (*(long *)(param_2 + 0x17f0) != 0) {
      lStack_f8 = *(long *)(param_2 + 0x17f0);
    }
    if (*(long *)(param_2 + 0x1810) != 0) {
      local_e8 = *(long *)(param_2 + 0x1810);
    }
    lStack_e0 = param_1 + 0x18;
    FUN_008b60e8(local_1c8,&local_100);
    if (local_100 != (long *)0x0) {
      plVar6 = local_100 + 1;
      do {
        iVar3 = (int)*plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_100 + 8))();
      }
    }
    FUN_0084228c(&local_100,local_1c8,0);
    if (local_1c8[0] != (long *)0x0) {
      plVar6 = local_1c8[0] + 1;
      do {
        iVar3 = (int)*plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_1c8[0] + 8))();
      }
    }
    local_d0 = *(undefined4 *)(param_1 + 0x460);
    local_d8 = NEON_rev64(*(undefined8 *)(param_1 + 0x458),4);
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x80);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
    }
    local_168 = puVar8;
    if (local_c8 != (long *)0x0) {
      lVar7 = *local_c8;
      local_c8 = puVar8;
      (**(code **)(lVar7 + 8))();
      local_168 = local_c8;
    }
    uStack_148 = local_a8;
    local_1a0 = local_100;
    local_c8 = (long *)0x0;
    local_100 = (long *)0x0;
    uStack_190 = uStack_f0;
    local_198 = lStack_f8;
    lStack_180 = lStack_e0;
    local_188 = local_e8;
    uStack_158 = uStack_b8;
    local_160 = local_c0;
    uStack_10f = uStack_6f;
    local_170 = local_d0;
    local_178 = local_d8;
    uStack_138 = uStack_98;
    local_140 = local_a0;
    local_a8 = 0;
    uStack_128 = uStack_88;
    local_130 = uStack_90;
    uStack_120 = uStack_80;
    local_150 = local_b0;
    uVar5 = FUN_005ddce4(&local_1a0);
    plVar6 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0xe8))();
    }
    FUN_008423b8(&local_1a0);
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))
              (*(long **)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xe0));
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x78))(*(long **)(param_1 + 0xe0),0,0);
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x78))(*(long **)(param_1 + 0xe0),1,0);
    FUN_008423b8(&local_100);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00436938  FUN_00436938 =====

void FUN_00436938(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  local_40 = FUN_005183d8();
  puVar4 = *(undefined8 **)(lVar3 + 1000);
  for (puVar2 = *(undefined8 **)(lVar3 + 0x3e0); puVar2 != puVar4; puVar2 = puVar2 + 2) {
    FUN_004816b8(*puVar2,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004369b0  FUN_004369b0 =====

void FUN_004369b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 **__dest;
  long *plVar5;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  __dest = &local_80;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_004a2934();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = (undefined1 *)__dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined1 *)*param_2;
    local_70 = param_2[2];
  }
  local_58 = FUN_004465dc;
  local_50 = &DAT_001f60c8;
  local_68[0] = param_1;
  uVar4 = FUN_004f2b9c(uVar4,&local_80,local_68);
  plVar5 = *(long **)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x6d8) = uVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00436b20  FUN_00436b20 =====

void FUN_00436b20(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined4 *local_90;
  undefined4 *puStack_88;
  code *local_80;
  undefined8 *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_0044746c(*(long *)(param_1 + 0xd0),param_2);
    local_90 = (undefined4 *)operator_new(4);
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    puStack_88 = local_90 + 1;
    *local_90 = param_4;
    local_80 = (code *)puStack_88;
    FUN_00447618(uVar6,param_2,param_3,&local_90);
    if (local_90 != (undefined4 *)0x0) {
      puStack_88 = local_90;
      operator_delete(local_90);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  pvVar5 = operator_new(0x2300);
  puStack_88 = (undefined4 *)param_2[1];
  local_90 = (undefined4 *)*param_2;
  local_80 = (code *)param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_0045fcf0(pvVar5,param_1,uVar6,uVar3,&local_90,param_3,param_4,param_5,param_6);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  pvVar8 = *(void **)(param_1 + 0x3d8);
  *(void **)(param_1 + 0x3d8) = pvVar5;
  if (pvVar8 != (void *)0x0) {
    FUN_00461378(pvVar8);
    operator_delete(pvVar8);
    pvVar5 = *(void **)(param_1 + 0x3d8);
  }
  puVar2 = (undefined4 *)((long)pvVar5 + 0x1f38);
  FUN_005467a4(puVar2);
  if (*(char *)((long)pvVar5 + 0x1f80) != '\0') {
    lVar1 = param_1 + 0x7a0;
    FUN_007b5a0c((long)pvVar5 + 0x1f60,param_1,param_1,FUN_00443444);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0x7a8);
    local_80 = FUN_004438b0;
    local_78 = (undefined8 *)&DAT_001f6008;
    local_90 = puVar2;
    puStack_88 = (undefined4 *)param_1;
    if (plVar7 < *(long **)(param_1 + 0x7b0)) {
      if (plVar7 == (long *)0x0) goto LAB_0043714c;
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_004438b0;
      plVar7[3] = (long)&DAT_001f6008;
      if (DAT_001f6010 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x7a8) = plVar7 + 4;
    }
    else {
      FUN_004313e8(lVar1,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar9 = *(long *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)(lVar9 + 0x1fb8);
    FUN_005467a4(puVar2);
    if (*(char *)(lVar9 + 0x2000) == '\0') goto LAB_00437124;
    FUN_007b5a0c(lVar9 + 0x1fe0,param_1,param_1,FUN_00443914);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0x7a8);
    local_80 = FUN_00443e78;
    local_78 = (undefined8 *)&DAT_001f6028;
    local_90 = puVar2;
    if (plVar7 < *(long **)(param_1 + 0x7b0)) {
      if (plVar7 == (long *)0x0) goto LAB_0043714c;
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_00443e78;
      plVar7[3] = (long)&DAT_001f6028;
      if (DAT_001f6030 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x7a8) = plVar7 + 4;
      puStack_88 = (undefined4 *)param_1;
    }
    else {
      puStack_88 = (undefined4 *)param_1;
      FUN_004313e8(lVar1,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar9 = *(long *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)(lVar9 + 0x2008);
    FUN_005467a4(puVar2);
    if (*(char *)(lVar9 + 0x2050) == '\0') goto LAB_00437124;
    FUN_007b5a0c(lVar9 + 0x2030,param_1,param_1,FUN_00443edc);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0x7a8);
    local_80 = FUN_00444398;
    local_78 = (undefined8 *)&DAT_001f6048;
    local_90 = puVar2;
    if (plVar7 < *(long **)(param_1 + 0x7b0)) {
      if (plVar7 == (long *)0x0) goto LAB_0043714c;
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_00444398;
      plVar7[3] = (long)&DAT_001f6048;
      if (DAT_001f6050 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x7a8) = plVar7 + 4;
      puStack_88 = (undefined4 *)param_1;
    }
    else {
      puStack_88 = (undefined4 *)param_1;
      FUN_004313e8(lVar1,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar9 = *(long *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)(lVar9 + 0x2058);
    FUN_005467a4(puVar2);
    if (*(char *)(lVar9 + 0x20a0) == '\0') goto LAB_00437124;
    FUN_007b5a0c(lVar9 + 0x2080,param_1,param_1,FUN_004443fc);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0x7a8);
    local_80 = FUN_00444890;
    local_78 = (undefined8 *)&DAT_001f6068;
    local_90 = puVar2;
    if (plVar7 < *(long **)(param_1 + 0x7b0)) {
      if (plVar7 == (long *)0x0) goto LAB_0043714c;
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_00444890;
      plVar7[3] = (long)&DAT_001f6068;
      if (DAT_001f6070 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x7a8) = plVar7 + 4;
      puStack_88 = (undefined4 *)param_1;
    }
    else {
      puStack_88 = (undefined4 *)param_1;
      FUN_004313e8(lVar1,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar9 = *(long *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)(lVar9 + 0x20a8);
    FUN_005467a4(puVar2);
    if (*(char *)(lVar9 + 0x20f0) == '\0') goto LAB_00437124;
    FUN_007b5a0c(lVar9 + 0x20d0,param_1,param_1,FUN_004448f4);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0x7a8);
    local_80 = FUN_00444f48;
    local_78 = (undefined8 *)&DAT_001f6088;
    local_90 = puVar2;
    if (plVar7 < *(long **)(param_1 + 0x7b0)) {
      if (plVar7 == (long *)0x0) goto LAB_0043714c;
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_00444f48;
      plVar7[3] = (long)&DAT_001f6088;
      if (DAT_001f6090 != 0) {
        local_80 = FUN_0040dec4;
        local_78 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x7a8) = plVar7 + 4;
      puStack_88 = (undefined4 *)param_1;
    }
    else {
      puStack_88 = (undefined4 *)param_1;
      FUN_004313e8(lVar1,&local_90);
    }
    if ((code *)local_78[1] != (code *)0x0) {
      (*(code *)local_78[1])(local_90);
    }
    lVar9 = *(long *)(param_1 + 0x3d8);
    puVar2 = (undefined4 *)(lVar9 + 0x20f8);
    FUN_005467a4(puVar2);
    if (*(char *)(lVar9 + 0x2140) != '\0') {
      FUN_007b5a0c(lVar9 + 0x2120,param_1,param_1,FUN_00444fac);
      FUN_005467c8(puVar2);
      plVar7 = *(long **)(param_1 + 0x7a8);
      local_80 = FUN_00445690;
      local_78 = (undefined8 *)&DAT_001f60a8;
      local_90 = puVar2;
      if (plVar7 < *(long **)(param_1 + 0x7b0)) {
        if (plVar7 == (long *)0x0) {
LAB_0043714c:
          puStack_88 = (undefined4 *)param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar7[1] = param_1;
        *plVar7 = (long)puVar2;
        plVar7[2] = (long)FUN_00445690;
        plVar7[3] = (long)&DAT_001f60a8;
        if (DAT_001f60b0 != 0) {
          local_80 = FUN_0040dec4;
          local_78 = &DAT_001f1910;
        }
        *(long **)(param_1 + 0x7a8) = plVar7 + 4;
        puStack_88 = (undefined4 *)param_1;
      }
      else {
        puStack_88 = (undefined4 *)param_1;
        FUN_004313e8(lVar1,&local_90);
      }
      if ((code *)local_78[1] != (code *)0x0) {
        (*(code *)local_78[1])(local_90);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_00437124:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00437178  FUN_00437178 =====

/* WARNING: Removing unreachable block (ram,0x004374ac) */
/* WARNING: Removing unreachable block (ram,0x00437438) */
/* WARNING: Removing unreachable block (ram,0x00437620) */

void FUN_00437178(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  void *pvVar14;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar6 = tpidr_el0;
  puVar1 = (undefined8 *)(param_1 + 0x788);
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_004312b4(puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x7a0);
  FUN_004312b4(puVar2);
  FUN_0042fd90(*(undefined8 *)(param_1 + 0x90));
  FUN_00515738(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0xc0),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  pvVar9 = *(void **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_00461378(pvVar9);
    operator_delete(pvVar9);
  }
  lVar13 = *(long *)(param_1 + 1000);
  lVar11 = *(long *)(param_1 + 0x3e0);
  while (lVar13 != lVar11) {
    plVar10 = *(long **)(lVar13 + -8);
    lVar13 = lVar13 + -0x10;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_005466cc(plVar10);
      }
    }
  }
  *(long *)(param_1 + 1000) = lVar11;
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_0042fe70(*(undefined8 *)(param_1 + 0x90));
  }
  lVar11 = param_1 + 0x20;
  FUN_005467a4(lVar11);
  if (*(char *)(param_1 + 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b6160(param_1 + 0x48,auStack_60,FUN_00441e10);
  FUN_005467c8(lVar11);
  FUN_004312b4(puVar2);
  pvVar9 = *(void **)(param_1 + 0x7a0);
  if (pvVar9 != (void *)0x0) {
    pvVar14 = pvVar9;
    pvVar12 = *(void **)(param_1 + 0x7a8);
    if (*(void **)(param_1 + 0x7a8) != pvVar9) {
      do {
        pvVar14 = (void *)((long)pvVar12 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar12 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar12 + -0x20));
        }
        pvVar12 = pvVar14;
      } while (pvVar14 != pvVar9);
      pvVar14 = (void *)*puVar2;
    }
    *(void **)(param_1 + 0x7a8) = pvVar9;
    operator_delete(pvVar14);
  }
  FUN_004312b4(puVar1);
  pvVar9 = (void *)*puVar1;
  if (pvVar9 != (void *)0x0) {
    pvVar14 = pvVar9;
    pvVar12 = *(void **)(param_1 + 0x790);
    if (*(void **)(param_1 + 0x790) != pvVar9) {
      do {
        pvVar14 = (void *)((long)pvVar12 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar12 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar12 + -0x20));
        }
        pvVar12 = pvVar14;
      } while (pvVar14 != pvVar9);
      pvVar14 = (void *)*puVar1;
    }
    *(void **)(param_1 + 0x790) = pvVar9;
    operator_delete(pvVar14);
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x778) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x760));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x758) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x740));
  }
  if ((*(char *)(param_1 + 0x738) != '\0') && (*(char *)(param_1 + 0x737) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x710) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x6f8));
  }
  if (*(char *)(param_1 + 0x6f7) < '\0') {
    operator_delete(*(void **)(param_1 + 0x6e0));
  }
  plVar10 = *(long **)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar10 = *(long **)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  pvVar9 = *(void **)(param_1 + 0x6b8);
  *(undefined ***)(param_1 + 0x6b0) = &PTR_FUN_00d1e940;
  if (pvVar9 != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + 0x6c0);
    pvVar14 = pvVar9;
    if (pvVar12 != pvVar9) {
      do {
        plVar10 = *(long **)((long)pvVar12 + -8);
        *(undefined8 *)((long)pvVar12 + -8) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        pvVar12 = (void *)((long)pvVar12 + -0x20);
      } while (pvVar12 != pvVar9);
      pvVar14 = *(void **)(param_1 + 0x6b8);
    }
    *(void **)(param_1 + 0x6c0) = pvVar9;
    operator_delete(pvVar14);
  }
  pvVar9 = *(void **)(param_1 + 0x698);
  *(undefined ***)(param_1 + 0x690) = &PTR_FUN_00d1e8f8;
  if (pvVar9 != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + 0x6a0);
    pvVar14 = pvVar9;
    if (pvVar12 != pvVar9) {
      do {
        plVar10 = *(long **)((long)pvVar12 + -8);
        *(undefined8 *)((long)pvVar12 + -8) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x30))();
        }
        pvVar12 = (void *)((long)pvVar12 + -0x20);
      } while (pvVar12 != pvVar9);
      pvVar14 = *(void **)(param_1 + 0x698);
    }
    *(void **)(param_1 + 0x6a0) = pvVar9;
    operator_delete(pvVar14);
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x688) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x670));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x668) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x650));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x648) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x630));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x628) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x610));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x608) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x5f0));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x5e8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x5d0));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x5c8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x5b0));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x5a8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x590));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x588) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x570));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x568) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x550));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x548) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x530));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x528) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x510));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x4f8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x4e0));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x4d8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x4c0));
  }
  if (*(char *)(param_1 + 0x4b7) < '\0') {
    operator_delete(*(void **)(param_1 + 0x4a0));
  }
  pvVar9 = *(void **)(param_1 + 0x468);
  if (pvVar9 != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + 0x470);
    pvVar14 = pvVar9;
    if (pvVar12 != pvVar9) {
      do {
        pvVar12 = (void *)((long)pvVar12 + -0x30);
      } while (pvVar12 != pvVar9);
      pvVar14 = *(void **)(param_1 + 0x468);
    }
    *(void **)(param_1 + 0x470) = pvVar9;
    operator_delete(pvVar14);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x438);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar9 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar9;
  }
  pvVar9 = *(void **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x408);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar9 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar9;
  }
  pvVar9 = *(void **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x3e0);
  if (pvVar9 != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + 1000);
    pvVar14 = pvVar9;
    if (pvVar12 != pvVar9) {
      do {
        plVar10 = *(long **)((long)pvVar12 + -8);
        pvVar12 = (void *)((long)pvVar12 + -0x10);
        if (plVar10 != (long *)0x0) {
          plVar3 = plVar10 + 1;
          do {
            lVar13 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            FUN_005466cc(plVar10);
          }
        }
      } while (pvVar12 != pvVar9);
      pvVar14 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar9;
    operator_delete(pvVar14);
  }
  pvVar9 = *(void **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_00461378(pvVar9);
    operator_delete(pvVar9);
  }
  FUN_00546ab0(param_1 + 0x3b0);
  plVar10 = *(long **)(param_1 + 0x3a8);
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar13 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x370) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x358));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x348) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x330));
  }
  pvVar9 = *(void **)(param_1 + 0x310);
  if (pvVar9 != (void *)0x0) {
    *(void **)(param_1 + 0x318) = pvVar9;
    operator_delete(pvVar9);
  }
  if (*(char *)(param_1 + 0x30f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x2f8));
  }
  FUN_004379f4(param_1 + 0x1f8);
  pcVar7 = *(code **)(*(long *)(param_1 + 400) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x178));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x168) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x150));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x148) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x130));
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x118);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar9 = (void *)*puVar1;
    if (puVar1[4] != 0) {
      FUN_005466cc();
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar9;
  }
  pvVar9 = *(void **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  plVar10 = *(long **)(param_1 + 0x100);
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar13 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0xf0);
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar13 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0xe8))();
  }
  pvVar9 = *(void **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_00448128(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_0044745c(pvVar9);
    operator_delete(pvVar9);
  }
  *(undefined ***)(param_1 + 0xb8) = &PTR_FUN_00d193e8;
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0xc0),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  plVar10 = *(long **)(param_1 + 0xb0);
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar13 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  plVar10 = *(long **)(param_1 + 0xa0);
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar13 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    FUN_007b5d24(param_1 + 0x48);
  }
  FUN_00546ab0(lVar11);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_005466cc();
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004379ec  FUN_004379ec =====

void FUN_004379ec(long param_1)

{
  FUN_0042fd90(*(undefined8 *)(param_1 + 0x90));
  return;
}


// ===== 004379f4  FUN_004379f4 =====

/* WARNING: Removing unreachable block (ram,0x00437a6c) */
/* WARNING: Removing unreachable block (ram,0x00437ae0) */

void FUN_004379f4(long *param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
    pvVar3 = (void *)param_1[0xc];
  }
  else {
    pvVar3 = (void *)param_1[0xc];
  }
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    if ((void *)param_1[0xd] != pvVar3) {
      lVar2 = param_1[0xd] + -0x18;
      do {
        FUN_00441e1c(lVar2,*(undefined8 *)(lVar2 + 8));
        pvVar1 = (void *)(lVar2 + -0x28);
        lVar2 = lVar2 + -0x40;
      } while (pvVar1 != pvVar3);
      pvVar1 = (void *)param_1[0xc];
    }
    param_1[0xd] = (long)pvVar3;
    operator_delete(pvVar1);
  }
  FUN_00441e1c(param_1 + 8,param_1[9]);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar3 = (void *)*param_1;
  }
  else {
    pvVar3 = (void *)*param_1;
  }
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    if ((void *)param_1[1] != pvVar3) {
      lVar2 = param_1[1] + -0x18;
      do {
        FUN_00441e1c(lVar2,*(undefined8 *)(lVar2 + 8));
        pvVar1 = (void *)(lVar2 + -0x20);
        lVar2 = lVar2 + -0x38;
      } while (pvVar1 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = (long)pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00437b24  FUN_00437b24 =====

void FUN_00437b24(long param_1)

{
  FUN_00437178(param_1 + -0x18);
  return;
}


// ===== 00437b2c  FUN_00437b2c =====

void FUN_00437b2c(void *param_1)

{
  FUN_00437178();
  operator_delete(param_1);
  return;
}


// ===== 00437b50  FUN_00437b50 =====

void FUN_00437b50(long param_1)

{
  FUN_00437178((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 00437b78  FUN_00437b78 =====

void FUN_00437b78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  uVar1 = FUN_0051452c(*(undefined8 *)(param_1 + 0xa8));
  pvVar2 = operator_new(0x90);
  FUN_00447f4c(pvVar2,param_2,uVar1,param_1);
  pvVar3 = *(void **)(param_1 + 0xd8);
  *(void **)(param_1 + 0xd8) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    FUN_00448128(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00437bf0  FUN_00437bf0 =====

void FUN_00437bf0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0044822c(*(undefined8 *)(param_1 + 0xd8));
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../discord_native_lib/src/media/connection.cpp",0x10d,
               "connectionLogPlayer_->Start()",&DAT_001f5fa0);
}


// ===== 00437c2c  FUN_00437c2c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00437c2c(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 *******__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *******__dest;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 *******local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      __dest = &local_b0;
      local_a0 = CONCAT17((char)uVar2,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      local_b0 = __dest;
      uStack_a8 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *******)*param_3;
    local_a0 = param_3[2];
  }
  local_c0 = param_5[2];
  puStack_c8 = (undefined8 *)param_5[1];
  local_d0 = (undefined8 *)*param_5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uStack_88 = param_6[1];
  local_90 = *param_6;
  local_80 = param_6[2];
  local_78 = param_6[3];
  if (*(long *)(local_78 + 8) != 0) {
    param_6[2] = FUN_00419a50;
    param_6[3] = &DAT_001f1910;
  }
  FUN_0042f938(param_1,uVar7,&local_b0,param_4,&local_d0,&local_90);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90);
  }
  puVar5 = local_d0;
  puVar8 = puStack_c8;
  if (local_d0 != (undefined8 *)0x0) {
    while (puVar4 = puVar8, puVar4 != puVar5) {
      puVar8 = puVar4 + -3;
      pvVar6 = (void *)*puVar8;
      if (pvVar6 != (void *)0x0) {
        puVar4[-2] = pvVar6;
        operator_delete(pvVar6);
      }
    }
    puStack_c8 = puVar5;
    operator_delete(local_d0);
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(*(long *)(param_2 + 0x90) + 200) != 0) {
    FUN_004317b8();
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00437e38  FUN_00437e38 =====

void FUN_00437e38(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_58 = param_2[1];
    local_60 = (undefined1 *)*param_2;
    local_50 = param_2[2];
  }
  FUN_0042fc78(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00437f50  FUN_00437f50 =====

void FUN_00437f50(long param_1,uint param_2,long param_3,undefined1 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [8];
  char *local_70;
  long local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_2 != 0) {
    uVar13 = (ulong)param_2;
    uVar8 = *(ulong *)(param_1 + 0x110);
    if (uVar8 != 0) {
      uVar16 = NEON_cnt(uVar8,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      if (uVar9 < 2) {
        uVar10 = (ulong)((int)uVar8 - 1U & param_2);
      }
      else {
        uVar10 = uVar13;
        if (uVar8 <= uVar13) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar13 / uVar8;
          }
          uVar10 = uVar13 - uVar10 * uVar8;
        }
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0x108) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
LAB_00438000:
        uVar12 = plVar11[1];
        if (uVar12 == uVar13) {
          if (*(uint *)(plVar11 + 2) != param_2) goto LAB_00437ff8;
          if (param_4 == (undefined1 *)0x0) goto LAB_00438078;
          plVar6 = (long *)FUN_005466fc(param_4);
          if ((plVar6 == (long *)0x0) || (param_3 == 0)) {
            if (plVar6 == (long *)0x0) goto LAB_00438070;
            goto LAB_0043820c;
          }
          if (plVar11[4] == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)FUN_005466fc();
            if ((plVar7 != (long *)0x0) && (lVar14 = plVar11[3], lVar14 != 0)) {
              if (lVar14 != param_3) {
                uVar8 = FUN_004022fc();
                if ((uVar8 & 1) == 0) {
                  local_60 = auStack_78;
                  local_70 = "../../discord_native_lib/src/media/connection.cpp";
                  local_68 = 0xbd2;
                  FUN_00623bb0(&DAT_001f6128,"../../discord_native_lib/src/media/connection.cpp",
                               0xbd2,"Linking ",param_2," to user ",param_3 + 0x20,
                               ", overriding user ",lVar14 + 0x20,"Linking ",&local_70);
                }
                plVar1 = (long *)(param_4 + 0x10);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = *plVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                lVar14 = plVar11[4];
                plVar11[3] = param_3;
                plVar11[4] = (long)param_4;
                if (lVar14 != 0) {
                  FUN_005466cc();
                }
              }
              goto LAB_004381dc;
            }
          }
          uVar8 = FUN_004022fc();
          if ((uVar8 & 1) == 0) {
            FUN_00623bb0(&DAT_001f6130,"../../discord_native_lib/src/media/connection.cpp",0xc2a,
                         "Linking ",uVar13," to user ",param_3 + 0x20,
                         ", overriding user was already freed.");
          }
          plVar1 = (long *)(param_4 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar14 = plVar11[4];
          plVar11[3] = param_3;
          plVar11[4] = (long)param_4;
          if (lVar14 != 0) {
            FUN_005466cc();
          }
          if (plVar7 != (long *)0x0) {
LAB_004381dc:
            plVar11 = plVar7 + 1;
            do {
              lVar14 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              FUN_005466cc(plVar7);
            }
          }
LAB_0043820c:
          plVar11 = plVar6 + 1;
          do {
            lVar14 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_005466cc(plVar6);
          }
          goto LAB_00438070;
        }
        if (uVar9 < 2) {
          uVar12 = uVar12 & uVar8 - 1;
        }
        else if (uVar8 <= uVar12) {
          uVar4 = 0;
          if (uVar8 != 0) {
            uVar4 = uVar12 / uVar8;
          }
          uVar12 = uVar12 - uVar4 * uVar8;
        }
        if (uVar12 == uVar10) goto LAB_00437ff8;
      }
    }
LAB_00438034:
    local_70 = (char *)CONCAT44(local_70._4_4_,param_2);
    if (param_4 != (undefined1 *)0x0) {
      plVar11 = (long *)(param_4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_68 = param_3;
    local_60 = param_4;
    FUN_004456f4((long *)(param_1 + 0x108),&local_70,&local_70);
    if (local_60 != (undefined1 *)0x0) {
      FUN_005466cc();
    }
  }
  if (param_4 != (undefined1 *)0x0) {
LAB_00438070:
    FUN_005466cc(param_4);
  }
LAB_00438078:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00437ff8:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_00438034;
  goto LAB_00438000;
}


// ===== 00438244  FUN_00438244 =====

void FUN_00438244(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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


// ===== 0043829c  FUN_0043829c =====

void FUN_0043829c(long param_1,uint param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  undefined1 auStack_88 [4];
  uint local_84;
  char *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_84 = param_2;
  if (param_2 != 0) {
    if (param_4 == 0) {
      FUN_00445c34(param_1 + 0x3f8,&local_84);
      goto LAB_00438440;
    }
    uVar15 = (ulong)param_2;
    plVar7 = (long *)FUN_005466fc(param_4);
    if ((plVar7 != (long *)0x0) && (param_3 != 0)) {
      uVar9 = *(ulong *)(param_1 + 0x110);
      if (uVar9 != 0) {
        plVar1 = (long *)(param_1 + 0x108);
        uVar17 = NEON_cnt(uVar9,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        if (uVar10 < 2) {
          uVar12 = (ulong)((int)uVar9 - 1U & param_2);
        }
        else {
          uVar12 = uVar15;
          if (uVar9 <= uVar15) {
            uVar12 = 0;
            if (uVar9 != 0) {
              uVar12 = uVar15 / uVar9;
            }
            uVar12 = uVar15 - uVar12 * uVar9;
          }
        }
        plVar13 = *(long **)(*plVar1 + uVar12 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
LAB_00438380:
          uVar14 = plVar13[1];
          if (uVar14 == uVar15) {
            if (*(uint *)(plVar13 + 2) != param_2) goto LAB_00438378;
            if (plVar13[4] == 0) {
              plVar8 = (long *)0x0;
LAB_00438534:
              uVar9 = FUN_004022fc();
              if ((uVar9 & 1) == 0) {
                FUN_00623bb0(&DAT_001f6130,"../../discord_native_lib/src/media/connection.cpp",0xd4a
                             ,"Unlinking ",uVar15," from user ",param_3 + 0x20,
                             ", but owned by user that was already freed.");
              }
              FUN_00445b00(&local_80,plVar1,plVar13);
              pcVar6 = local_80;
              local_80 = (char *)0x0;
              if (pcVar6 != (char *)0x0) {
                if (((char)local_70 != '\0') && (*(long *)(pcVar6 + 0x20) != 0)) {
                  FUN_005466cc();
                }
                operator_delete(pcVar6);
              }
              if (plVar8 == (long *)0x0) goto LAB_004383f4;
            }
            else {
              plVar8 = (long *)FUN_005466fc();
              if ((plVar8 == (long *)0x0) || (lVar11 = plVar13[3], lVar11 == 0)) goto LAB_00438534;
              if ((lVar11 != param_3) && (uVar15 = FUN_00417e08(), (uVar15 & 1) == 0)) {
                local_70 = auStack_88;
                local_80 = "../../discord_native_lib/src/media/connection.cpp";
                uStack_78 = 0xcf1;
                FUN_00623bb0(&DAT_001f6128,"../../discord_native_lib/src/media/connection.cpp",0xcf1
                             ,"Unlinking ",param_2," from user ",param_3 + 0x20,", but owned by ",
                             lVar11 + 0x20,"Unlinking ",&local_80);
              }
              FUN_00445b00(&local_80,plVar1,plVar13);
              pcVar6 = local_80;
              local_80 = (char *)0x0;
              if (pcVar6 != (char *)0x0) {
                if (((char)local_70 != '\0') && (*(long *)(pcVar6 + 0x20) != 0)) {
                  FUN_005466cc();
                }
                operator_delete(pcVar6);
              }
            }
            plVar1 = plVar8 + 1;
            do {
              lVar11 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              FUN_005466cc(plVar8);
            }
            goto LAB_004383f4;
          }
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar9 - 1;
          }
          else if (uVar9 <= uVar14) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar14 / uVar9;
            }
            uVar14 = uVar14 - uVar4 * uVar9;
          }
          if (uVar14 == uVar12) goto LAB_00438378;
        }
      }
LAB_004383b4:
      uVar9 = FUN_004022fc();
      if ((uVar9 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6130,"../../discord_native_lib/src/media/connection.cpp",0xcc2,
                     "Unlinking ",uVar15," from user ",param_3 + 0x20,", but not linked to anyone");
      }
    }
LAB_004383f4:
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_005466cc(plVar7);
      }
    }
  }
  FUN_00445c34(param_1 + 0x3f8,&local_84);
  if (param_4 != 0) {
    FUN_005466cc(param_4);
  }
LAB_00438440:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00438378:
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_004383b4;
  goto LAB_00438380;
}


// ===== 004385e8  FUN_004385e8 =====

void FUN_004385e8(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar1 = (long *)(param_1 + 0x3f8);
  uVar5 = *(ulong *)(param_1 + 0x400);
  local_4c = param_2;
  if (uVar5 != 0) {
    uVar7 = (ulong)param_2;
    uVar16 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar16,1);
    uVar6 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar7;
      if (uVar5 <= uVar7) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar7 / uVar5;
        }
        uVar8 = uVar7 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar11 = plVar9[1];
        if (uVar11 == uVar7) {
          if (*(uint *)(plVar9 + 2) == param_2) {
            if ((param_3 & 1) != 0) goto LAB_004387bc;
            FUN_00445c34(plVar1,&local_4c);
            goto LAB_004386d4;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar3 * uVar5;
          }
          if (uVar11 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  if ((param_3 & 1) != 0) {
    FUN_00445e74(plVar1,&local_4c,&local_4c);
LAB_004386d4:
    plVar9 = *(long **)(param_1 + 0x3e0);
    plVar12 = *(long **)(param_1 + 1000);
    if (plVar9 != plVar12) {
      lVar13 = *(long *)(param_1 + 0x410);
      do {
        uVar15 = 0x3f800000;
        if (lVar13 != 0) {
          uVar5 = *(ulong *)(param_1 + 0x400);
          if (uVar5 != 0) {
            uVar2 = *(uint *)(*plVar9 + 0x1da0);
            uVar7 = (ulong)uVar2;
            uVar16 = NEON_cnt(uVar5,1);
            uVar14 = NEON_uaddlv(uVar16,1);
            uVar6 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar14) & 0xffffffff;
            if (uVar6 < 2) {
              uVar8 = (ulong)((int)uVar5 - 1U & uVar2);
            }
            else {
              uVar8 = uVar7;
              if (uVar5 <= uVar7) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar7 / uVar5;
                }
                uVar8 = uVar7 - uVar8 * uVar5;
              }
            }
            plVar10 = *(long **)(*plVar1 + uVar8 * 8);
            if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
              do {
                uVar11 = plVar10[1];
                if (uVar11 == uVar7) {
                  if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_004386f0;
                }
                else {
                  if (uVar6 < 2) {
                    uVar11 = uVar11 & uVar5 - 1;
                  }
                  else if (uVar5 <= uVar11) {
                    uVar3 = 0;
                    if (uVar5 != 0) {
                      uVar3 = uVar11 / uVar5;
                    }
                    uVar11 = uVar11 - uVar3 * uVar5;
                  }
                  if (uVar11 != uVar8) break;
                }
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
          }
          uVar15 = *(undefined4 *)(param_1 + 0x2d8);
        }
LAB_004386f0:
        FUN_0047e974(uVar15);
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar12);
    }
  }
LAB_004387bc:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004387f8  FUN_004387f8 =====

/* WARNING: Removing unreachable block (ram,0x00438ad0) */

void FUN_004387f8(long param_1,char *param_2,int param_3,long *param_4,uint param_5)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  char *__s2;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  uint **ppuVar18;
  uint *puVar19;
  int *piVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint *local_a8;
  uint *local_a0;
  int *local_98;
  int *local_90;
  undefined8 local_88;
  uint *local_80;
  uint *puStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  plVar22 = *(long **)(param_1 + 0x3e0);
  plVar24 = *(long **)(param_1 + 1000);
  if (plVar22 == plVar24) {
LAB_004388e4:
    plVar23 = plVar22;
    if ((param_3 != 0) || (plVar22 == plVar24)) goto LAB_00438958;
    uVar15 = FUN_00417e08();
    if ((uVar15 & 1) == 0) {
      if (*(long *)(lVar9 + 0x28) == local_68) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0xee9,
                     "Ignoring ConnectUser call for existing user with audio SSRC argument = 0");
        return;
      }
      goto LAB_00438f30;
    }
    goto LAB_00438eb0;
  }
  bVar5 = param_2[0x17];
  __n = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar5) {
    __n = (ulong)bVar5;
  }
  do {
    lVar16 = *plVar22;
    bVar6 = *(byte *)(lVar16 + 0x37);
    uVar15 = (ulong)bVar6;
    sVar1 = *(size_t *)(lVar16 + 0x28);
    if (-1 < (char)bVar6) {
      sVar1 = uVar15;
    }
    if (sVar1 == __n) {
      pcVar17 = (char *)(lVar16 + 0x20);
      __s1 = *(char **)pcVar17;
      if (-1 < (char)bVar6) {
        __s1 = pcVar17;
      }
      __s2 = *(char **)param_2;
      if (-1 < (char)bVar5) {
        __s2 = param_2;
      }
      if ((char)bVar6 < '\0') {
        if ((__n == 0) || (iVar11 = memcmp(__s1,__s2,__n), iVar11 == 0)) goto LAB_004388e4;
      }
      else {
        if (bVar6 == 0) goto LAB_004388e4;
        while (*pcVar17 == *__s2) {
          uVar15 = uVar15 - 1;
          pcVar17 = pcVar17 + 1;
          __s2 = __s2 + 1;
          if (uVar15 == 0) goto LAB_004388e4;
        }
      }
    }
    plVar22 = plVar22 + 2;
    plVar23 = plVar24;
  } while (plVar22 != plVar24);
LAB_00438958:
  uVar15 = FUN_00417e08();
  if ((uVar15 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/connection.cpp",0xf11,
                 "Creating remote user: ",param_2);
  }
  if (plVar23 != *(long **)(param_1 + 1000)) {
    lVar16 = *plVar23;
    puVar14 = (uint *)plVar23[1];
    if (puVar14 != (uint *)0x0) {
      puVar12 = puVar14 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar8) {
          *(long *)puVar12 = *(long *)puVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if ((param_3 != 0) && (iVar11 = *(int *)(lVar16 + 0x1da0), iVar11 != param_3)) {
      if (puVar14 != (uint *)0x0) {
        puVar12 = puVar14 + 4;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_0043829c(param_1,iVar11,lVar16,puVar14);
      FUN_0047ec38(lVar16,param_3);
      if (puVar14 != (uint *)0x0) {
        puVar12 = puVar14 + 4;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_00437f50(param_1,param_3,lVar16,puVar14);
    }
    plVar22 = *(long **)(lVar16 + 0x1d58);
    local_80 = (uint *)0x0;
    puStack_78 = (uint *)0x0;
    local_70 = 0;
    for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
      FUN_00441e88(&local_80,plVar22 + 2);
    }
    FUN_005163c4(local_80,puStack_78,&local_98);
    FUN_005163c4(*param_4,param_4[1],&local_98);
    puVar10 = puStack_78;
    local_98 = (int *)0x0;
    local_90 = (int *)0x0;
    local_a8 = (uint *)*param_4;
    puVar3 = (uint *)param_4[1];
    local_88 = 0;
    puVar12 = local_80;
    while (local_a0 = puVar12, puVar12 != puVar10) {
      if (local_a8 == puVar3) goto LAB_00438bc4;
      if (*puVar12 < *local_a8) {
        FUN_00441e88(&local_98,puVar12);
        ppuVar18 = &local_a0;
        puVar19 = puVar12;
      }
      else {
        puVar19 = local_a8;
        if (*local_a8 < *puVar12) {
          ppuVar18 = &local_a8;
        }
        else {
          local_a0 = puVar12 + 1;
          ppuVar18 = &local_a8;
        }
      }
      *ppuVar18 = puVar19 + 1;
      puVar12 = local_a0;
    }
    goto LAB_00438bcc;
  }
  FUN_00438f34(param_1,param_2);
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_00447618(*(long *)(param_1 + 0xd0),param_2,param_3,param_4);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puVar12 = (uint *)operator_new(0x1ef0);
  puVar14 = puVar12 + 6;
  puStack_78 = *(uint **)(param_2 + 8);
  local_80 = *(uint **)param_2;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  *(undefined ***)puVar12 = &PTR_FUN_00d1c438;
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  FUN_0047ca88(puVar14,param_1,uVar13,uVar2,&local_80,param_3,param_5 & 1);
  local_80 = puVar14;
  puStack_78 = puVar12;
  if (*(char *)(param_1 + 0x454) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x450);
    if ((uVar4 & 0xffff) == 0) {
LAB_00438d70:
      uVar13 = 0;
    }
    else {
      plVar22 = *(long **)(param_1 + 0x6d8);
      if (plVar22 == (long *)0x0) {
        uVar15 = FUN_004022fc();
        if ((uVar15 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x1bda,
                       "Cannot make user key ratchet: MLS session not initialized");
        }
        goto LAB_00438d70;
      }
      uVar13 = (**(code **)(*plVar22 + 0x60))(plVar22,puVar12 + 0xe);
    }
    FUN_00481bdc(puVar14,uVar13);
    FUN_00481c48(puVar14,uVar4 == 0);
  }
  piVar20 = (int *)*param_4;
  piVar21 = (int *)param_4[1];
  if (piVar20 != piVar21) {
    puVar3 = puVar12 + 4;
    do {
      iVar11 = *piVar20;
      if (iVar11 != 0) {
        thunk_FUN_0047ec88(puVar14,iVar11);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar8) {
            *(long *)puVar3 = *(long *)puVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_00437f50(param_1,iVar11,puVar14,puVar12);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar8) {
            *(long *)puVar3 = *(long *)puVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_00437f50(param_1,iVar11 + 1,puVar14,puVar12);
      }
      piVar20 = piVar20 + 1;
    } while (piVar20 != piVar21);
  }
  puVar3 = puVar12 + 4;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *(long *)puVar3 = *(long *)puVar3 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_00437f50(param_1,param_3,puVar14,puVar12);
  plVar22 = *(long **)(param_1 + 1000);
  if (plVar22 < *(long **)(param_1 + 0x3f0)) {
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    plVar24 = plVar22 + 2;
    *plVar22 = (long)puVar14;
    plVar22[1] = (long)puVar12;
    local_80 = (uint *)0x0;
    puStack_78 = (uint *)0x0;
    *(long **)(param_1 + 1000) = plVar24;
  }
  else {
    FUN_00441fa0((undefined8 *)(param_1 + 0x3e0),&local_80);
    plVar24 = *(long **)(param_1 + 1000);
  }
  puVar14 = puStack_78;
  if (*(long **)(param_1 + 0x3e0) == plVar24) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  if (puStack_78 != (uint *)0x0) {
    puVar12 = puStack_78 + 2;
    do {
      lVar16 = *(long *)puVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar8) {
        *(long *)puVar12 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puStack_78 + 0x10))(puStack_78);
LAB_00438eac:
      FUN_005466cc(puVar14);
    }
  }
  goto LAB_00438eb0;
LAB_00438bc4:
  for (; puVar12 != puVar10; puVar12 = puVar12 + 1) {
    FUN_00441e88(&local_98,puVar12);
  }
LAB_00438bcc:
  piVar20 = local_90;
  if (local_98 != local_90) {
    puVar12 = puVar14 + 4;
    piVar21 = local_98;
    do {
      iVar11 = *piVar21;
      thunk_FUN_0047df80(lVar16,iVar11);
      if (puVar14 == (uint *)0x0) {
        FUN_0043829c(param_1,iVar11,lVar16,0);
      }
      else {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_0043829c(param_1,iVar11,lVar16,puVar14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_0043829c(param_1,iVar11 + 1,lVar16,puVar14);
      piVar21 = piVar21 + 1;
    } while (piVar21 != piVar20);
  }
  piVar20 = (int *)*param_4;
  piVar21 = (int *)param_4[1];
  if (piVar20 != piVar21) {
    puVar12 = puVar14 + 4;
    do {
      iVar11 = *piVar20;
      thunk_FUN_0047ec88(lVar16,iVar11);
      if (puVar14 == (uint *)0x0) {
        FUN_00437f50(param_1,iVar11,lVar16,0);
      }
      else {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_00437f50(param_1,iVar11,lVar16,puVar14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar8) {
            *(long *)puVar12 = *(long *)puVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_00437f50(param_1,iVar11 + 1,lVar16,puVar14);
      piVar20 = piVar20 + 1;
    } while (piVar20 != piVar21);
  }
  if (local_98 != (int *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (uint *)0x0) {
    puStack_78 = local_80;
    operator_delete(local_80);
  }
  if (puVar14 != (uint *)0x0) {
    puVar12 = puVar14 + 2;
    do {
      lVar16 = *(long *)puVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar8) {
        *(long *)puVar12 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)puVar14 + 0x10))(puVar14);
      goto LAB_00438eac;
    }
  }
LAB_00438eb0:
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
LAB_00438f30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00438f34  FUN_00438f34 =====

void FUN_00438f34(long param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  char *__s2;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  int *local_60;
  int *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  plVar18 = *(long **)(param_1 + 0x3e0);
  plVar19 = *(long **)(param_1 + 1000);
  if (plVar18 == plVar19) {
LAB_00439008:
    if (plVar18 != plVar19) {
      uVar3 = *(undefined4 *)(*plVar18 + 0x1da0);
      if (plVar18[1] != 0) {
        plVar19 = (long *)(plVar18[1] + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = *plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_0043829c(param_1,uVar3);
      local_60 = (int *)0x0;
      local_58 = (int *)0x0;
      local_50 = 0;
      plVar19 = *(long **)(*plVar18 + 0x1d58);
      if (plVar19 != (long *)0x0) {
        do {
          FUN_00441e88(&local_60,plVar19 + 2);
          piVar10 = local_58;
          plVar19 = (long *)*plVar19;
          piVar8 = local_60;
          piVar9 = local_58;
        } while (plVar19 != (long *)0x0);
        for (; piVar8 != piVar10; piVar8 = piVar8 + 1) {
          lVar13 = *plVar18;
          iVar11 = *piVar8;
          if (plVar18[1] != 0) {
            plVar19 = (long *)(plVar18[1] + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = *plVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_0043829c(param_1,iVar11,lVar13);
          lVar13 = *plVar18;
          if (plVar18[1] != 0) {
            plVar19 = (long *)(plVar18[1] + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = *plVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_0043829c(param_1,iVar11 + 1,lVar13);
          piVar9 = local_60;
        }
        if (piVar9 != (int *)0x0) {
          local_58 = piVar9;
          operator_delete(piVar9);
        }
      }
      plVar19 = *(long **)(param_1 + 1000);
      if (plVar19 == plVar18) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x630,
                   "__position != end()",
                   "vector::erase(iterator) called with a non-dereferenceable iterator");
      }
      plVar17 = plVar18 + 2;
      if (plVar17 != plVar19) {
        do {
          lVar20 = plVar17[1];
          lVar13 = *plVar17;
          *plVar17 = 0;
          plVar17[1] = 0;
          plVar16 = (long *)plVar18[1];
          plVar18[1] = lVar20;
          *plVar18 = lVar13;
          if (plVar16 != (long *)0x0) {
            plVar1 = plVar16 + 1;
            do {
              lVar13 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              FUN_005466cc(plVar16);
            }
          }
          plVar17 = plVar17 + 2;
          plVar18 = plVar18 + 2;
        } while (plVar17 != plVar19);
        plVar19 = *(long **)(param_1 + 1000);
      }
      while (plVar19 != plVar18) {
        plVar17 = (long *)plVar19[-1];
        plVar19 = plVar19 + -2;
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 1;
          do {
            lVar13 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            FUN_005466cc(plVar17);
          }
        }
      }
      *(long **)(param_1 + 1000) = plVar18;
    }
  }
  else {
    __s2 = *(char **)param_2;
    __n = *(size_t *)(param_2 + 8);
    if (-1 < param_2[0x17]) {
      __s2 = param_2;
      __n = (ulong)(byte)param_2[0x17];
    }
    do {
      lVar13 = *plVar18;
      bVar4 = *(byte *)(lVar13 + 0x37);
      uVar12 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar13 + 0x28);
      if (-1 < (char)bVar4) {
        sVar2 = uVar12;
      }
      if (sVar2 == __n) {
        pcVar14 = (char *)(lVar13 + 0x20);
        if ((char)bVar4 < '\0') {
          if ((__n == 0) || (iVar11 = memcmp(*(void **)pcVar14,__s2,__n), iVar11 == 0))
          goto LAB_00439008;
        }
        else {
          pcVar15 = __s2;
          if (bVar4 == 0) goto LAB_00439008;
          while (*pcVar14 == *pcVar15) {
            uVar12 = uVar12 - 1;
            pcVar14 = pcVar14 + 1;
            pcVar15 = pcVar15 + 1;
            if (uVar12 == 0) goto LAB_00439008;
          }
        }
      }
      plVar18 = plVar18 + 2;
    } while (plVar18 != plVar19);
  }
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00439204  FUN_00439204 =====

void FUN_00439204(long param_1,uint param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if ((param_2 & 0xffff) == 0) {
    if (*(char *)(param_1 + 0x426) != '\0') {
      *(undefined1 *)(param_1 + 0x426) = 0;
    }
    if (*(char *)(param_1 + 0x422) != '\0') {
      *(undefined1 *)(param_1 + 0x422) = 0;
    }
    if (*(long *)(param_1 + 0x440) != 0) {
      puVar1 = (undefined8 *)*(void **)(param_1 + 0x438);
      while (puVar1 != (undefined8 *)0x0) {
        pvVar4 = (void *)*puVar1;
        operator_delete(puVar1);
        puVar1 = (undefined8 *)pvVar4;
      }
      lVar2 = *(long *)(param_1 + 0x430);
      *(undefined8 *)(param_1 + 0x438) = 0;
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x428) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      *(undefined8 *)(param_1 + 0x440) = 0;
    }
  }
  FUN_004392c0(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x004392bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4);
  return;
}


// ===== 004392c0  FUN_004392c0 =====

void FUN_004392c0(long param_1,short param_2,ushort param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint local_70;
  short local_6c [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = (uint)param_3;
  plVar7 = *(long **)(param_1 + 1000);
  plVar3 = *(long **)(param_1 + 0x3e0);
  local_6c[0] = param_2;
  do {
    if (plVar3 == plVar7) {
      local_70 = 0x10000;
      if ((param_4 & 1) == 0) {
        local_70 = 0;
      }
      local_70 = local_70 | uVar1;
      FUN_004465fc(param_1 + 0x428,local_6c,local_6c,&local_70);
      if (local_6c[0] == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/connection.cpp",0x1b41,
                       "Init transition immediately setting encryptor key ratchet for protocol version: "
                       ,uVar1);
        }
        FUN_004396b4(param_1,local_6c[0]);
      }
      *(short *)(param_1 + 0x420) = local_6c[0];
      *(undefined1 *)(param_1 + 0x422) = 1;
      if (*(char *)(param_1 + 0x454) == '\0') {
        *(undefined1 *)(param_1 + 0x454) = 1;
      }
      *(uint *)(param_1 + 0x450) = uVar1;
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/media/connection.cpp",0x1ae1,
                   "Setting decryptor key ratchet for user: ",*plVar3 + 0x20,", protocol version: ",
                   uVar1);
    }
    if (param_3 == 0) {
LAB_00439338:
      lVar6 = 0;
    }
    else {
      plVar5 = *(long **)(param_1 + 0x6d8);
      if (plVar5 == (long *)0x0) {
        uVar4 = FUN_004022fc();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x1bda,
                       "Cannot make user key ratchet: MLS session not initialized");
        }
        goto LAB_00439338;
      }
      lVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,*plVar3 + 0x20);
    }
    FUN_00481c48(*plVar3,param_3 == 0 && lVar6 == 0);
    FUN_00481bdc(*plVar3,lVar6);
    plVar3 = plVar3 + 2;
  } while( true );
}


// ===== 004394a8  FUN_004394a8 =====

void FUN_004394a8(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_68 [8];
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    local_50 = auStack_68;
    local_60 = "../../discord_native_lib/src/media/connection.cpp";
    uStack_58 = 0x1299;
    FUN_00623bb0(&DAT_001f6137,"../../discord_native_lib/src/media/connection.cpp",0x1299,
                 "Preparing secure frames epoch: ",param_2,", protocol version: ",param_3 & 0xffff,
                 ", group ID: ",param_4,"Preparing secure frames epoch: ",&local_60);
  }
  plVar5 = *(long **)(param_1 + 0x6d8);
  if (param_2 == 1) {
    lVar4 = *(long *)(param_1 + 0x3d8);
    uVar3 = FUN_0044de5c(*(undefined8 *)(param_1 + 0x88),param_3);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_3,param_4,lVar4 + 0x20,uVar3);
    FUN_004395c4(param_1);
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004395c4  FUN_004395c4 =====

void FUN_004395c4(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  short sVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  sVar4 = FUN_0046a3d8(*(undefined8 *)(param_1 + 0x3d8));
  if (sVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 0x6f7);
    uVar1 = *(ulong *)(param_1 + 0x6e8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      if ((char)bVar2 < '\0') {
        **(undefined1 **)(param_1 + 0x6e0) = 0;
        *(undefined8 *)(param_1 + 0x6e8) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x6e0) = 0;
        *(undefined1 *)(param_1 + 0x6f7) = 0;
      }
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x6d8) + 0x30))(&local_50);
    FUN_00511324(&local_68,local_50,(long)local_48 - (long)local_50);
    if (*(char *)(param_1 + 0x6f7) < '\0') {
      operator_delete(*(void **)(param_1 + 0x6e0));
    }
    *(undefined8 *)(param_1 + 0x6f0) = local_58;
    *(undefined8 *)(param_1 + 0x6e8) = uStack_60;
    *(undefined8 *)(param_1 + 0x6e0) = local_68;
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  FUN_0043a538(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004396b4  FUN_004396b4 =====

void FUN_004396b4(long param_1,ushort param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  void *local_70 [3];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar2 = (uint)param_2;
  uVar17 = (ulong)uVar2;
  if (((param_2 == 0) || (*(char *)(param_1 + 0x426) == '\0')) ||
     (*(char *)(param_1 + 0x422) == '\0')) {
LAB_00439728:
    uVar10 = *(ulong *)(param_1 + 0x430);
    if (uVar10 != 0) {
      plVar1 = (long *)(param_1 + 0x428);
      uVar19 = NEON_cnt(uVar10,1);
      uVar18 = NEON_uaddlv(uVar19,1);
      uVar11 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
      if (uVar11 < 2) {
        uVar12 = (ulong)((int)uVar10 - 1U & uVar2);
      }
      else {
        uVar12 = uVar17;
        if (uVar10 <= uVar17) {
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = uVar17 / uVar10;
          }
          uVar12 = uVar17 - uVar12 * uVar10;
        }
      }
      plVar13 = *(long **)(*plVar1 + uVar12 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        do {
          uVar14 = plVar13[1];
          if (uVar14 == uVar17) {
            if (*(ushort *)(plVar13 + 2) == uVar2) {
              FUN_004462c0(local_70,plVar1);
              pvVar8 = local_70[0];
              if (local_70[0] != (void *)0x0) {
                sVar5 = *(short *)((long)local_70[0] + 0x12);
                if (sVar5 == 0) {
                  uVar17 = FUN_00417e08();
                  if ((uVar17 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",
                                 0x13f1,"Resetting MLS session since DAVE protocol is off");
                  }
                  (**(code **)(**(long **)(param_1 + 0x6d8) + 0x18))();
                  *(undefined1 *)(param_1 + 0x780) = 0;
                  uVar17 = FUN_00417e08();
                  if ((uVar17 & 1) == 0) goto LAB_0043991c;
LAB_00439870:
                  if (sVar5 == 0) goto LAB_0043999c;
LAB_00439950:
                  plVar13 = *(long **)(param_1 + 0x6d8);
                  if (plVar13 == (long *)0x0) {
                    uVar17 = FUN_004022fc();
                    if ((uVar17 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp"
                                   ,0x1bda,
                                   "Cannot make user key ratchet: MLS session not initialized");
                    }
                    goto LAB_0043999c;
                  }
                  lVar16 = (**(code **)(*plVar13 + 0x60))(plVar13,*(long *)(param_1 + 0x3d8) + 0x20)
                  ;
                }
                else {
                  uVar17 = FUN_00417e08();
                  if ((uVar17 & 1) != 0) goto LAB_00439870;
LAB_0043991c:
                  FUN_00623bb0(&DAT_001f6148,"../../discord_native_lib/src/media/connection.cpp",
                               0x1431,"Setting encryptor key ratchet from transition ",param_2,
                               " for protocol version ",sVar5);
                  if (sVar5 != 0) goto LAB_00439950;
LAB_0043999c:
                  lVar16 = 0;
                }
                FUN_0046a3d0(*(undefined8 *)(param_1 + 0x3d8),sVar5 == 0 && lVar16 == 0);
                FUN_0046a368(*(undefined8 *)(param_1 + 0x3d8),lVar16);
                FUN_004395c4(param_1);
                bVar15 = *(byte *)((long)pvVar8 + 0x14);
                if (*(char *)(param_1 + 0x426) == '\0') goto LAB_00439a54;
                plVar13 = *(long **)(param_1 + 0x438);
                goto joined_r0x004399d8;
              }
              break;
            }
          }
          else {
            if (uVar11 < 2) {
              uVar14 = uVar14 & uVar10 - 1;
            }
            else if (uVar10 <= uVar14) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar6 * uVar10;
            }
            if (uVar14 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
    uVar17 = FUN_004022fc();
    if ((uVar17 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/media/connection.cpp",0x13c2,
                   "Transition ID ",param_2," not found, ignoring.");
    }
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x424);
    if ((uint)*(ushort *)(param_1 + 0x420) < (uint)uVar4) {
      if (uVar2 <= uVar4) goto LAB_00439720;
      goto LAB_00439728;
    }
    if (uVar4 < uVar2) {
LAB_00439720:
      if (uVar2 <= *(ushort *)(param_1 + 0x420)) goto LAB_00439728;
    }
    uVar17 = FUN_004022fc();
    if ((uVar17 & 1) == 0) {
      if ((*(char *)(param_1 + 0x426) == '\0') || (*(char *)(param_1 + 0x422) == '\0')) {
LAB_00439a78:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3c2,
                   "this->has_value()","optional operator* called on a disengaged value");
      }
      if (*(long *)(lVar7 + 0x28) == local_58) {
        FUN_00623bb0(&DAT_001f613f,"../../discord_native_lib/src/media/connection.cpp",0x1382,
                     "Transition ID ",param_2," is outside the range (",
                     *(undefined2 *)(param_1 + 0x424),&DAT_001b07f5,*(undefined2 *)(param_1 + 0x420)
                     ,&DAT_0019fa9e);
        return;
      }
      goto LAB_00439aa0;
    }
  }
LAB_004398ac:
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
LAB_00439aa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
joined_r0x004399d8:
  if (plVar13 != (long *)0x0) {
    do {
      if (*(char *)(param_1 + 0x426) == '\0') goto LAB_00439a78;
      uVar4 = *(ushort *)(plVar13 + 2);
      if (uVar2 < *(ushort *)(param_1 + 0x424)) {
        if (uVar2 < uVar4) goto LAB_00439a14;
      }
      else {
        if (uVar2 < uVar4) goto LAB_004399e0;
LAB_00439a14:
        if ((uint)uVar4 <= (uint)*(ushort *)(param_1 + 0x424)) goto LAB_004399e0;
      }
      bVar3 = *(byte *)((long)plVar13 + 0x14);
      plVar13 = (long *)*plVar13;
      FUN_004462c0(local_70,plVar1);
      pvVar9 = local_70[0];
      local_70[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      bVar15 = bVar3 | bVar15 & 1;
      if (plVar13 == (long *)0x0) break;
    } while( true );
  }
  bVar15 = bVar15 & 1;
LAB_00439a54:
  *(ushort *)(param_1 + 0x424) = param_2;
  *(undefined1 *)(param_1 + 0x426) = 1;
  if (bVar15 != 0) {
    FUN_0046a3e0(*(undefined8 *)(param_1 + 0x3d8));
  }
  operator_delete(pvVar8);
  goto LAB_004398ac;
LAB_004399e0:
  plVar13 = (long *)*plVar13;
  goto joined_r0x004399d8;
}


// ===== 00439aa4  FUN_00439aa4 =====

void FUN_00439aa4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  if (*(long **)(param_2 + 0x6d8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00439ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x6d8) + 0x58))(param_1);
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x1542,
                 "Cannot get MLS key package: MLS session not initialized");
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00439b10  FUN_00439b10 =====

void FUN_00439b10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)(param_1 + 0x6d8);
  if (plVar1 != (long *)0x0) {
    if (*(char *)(param_1 + 0x78) == '\0') {
      lVar2 = FUN_005183d8();
      if (*(char *)(param_1 + 0x78) == '\0') {
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
      plVar1 = *(long **)(param_1 + 0x6d8);
      *(long *)(param_1 + 0x70) = lVar2 / 1000000;
    }
                    /* WARNING: Could not recover jumptable at 0x00439b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    return;
  }
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x1592,
               "Cannot update MLS external sender: MLS session not initialized");
  return;
}


// ===== 00439bc0  FUN_00439bc0 =====

void FUN_00439bc0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  void *local_78;
  void *local_70;
  char local_60;
  long local_58;
  undefined1 *puVar15;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar11 = *(long **)(param_1 + 0x6d8);
  if (plVar11 == (long *)0x0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x1682,
                     "Cannot process MLS proposals: MLS session not initialized");
        return;
      }
      goto LAB_00439dd0;
    }
  }
  else {
    puVar15 = (undefined1 *)*param_2;
    puVar2 = (undefined1 *)param_2[1];
    local_88 = (undefined1 *)0x0;
    local_80 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    uVar5 = (long)puVar2 - (long)puVar15;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_90 = (undefined1 *)operator_new(uVar5);
      local_80 = local_90 + uVar5;
      puVar6 = local_90;
      if ((0x1f < uVar5) && (0x1f < (ulong)((long)local_90 - (long)puVar15))) {
        uVar7 = uVar5 & 0xffffffffffffffe0;
        puVar8 = (undefined8 *)(puVar15 + 0x10);
        puVar6 = local_90 + uVar7;
        puVar15 = puVar15 + uVar7;
        puVar9 = (undefined8 *)(local_90 + 0x10);
        uVar10 = uVar7;
        do {
          puVar4 = puVar8 + -1;
          uVar16 = puVar8[-2];
          uVar18 = puVar8[1];
          uVar17 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar10 = uVar10 - 0x20;
          puVar9[-1] = *puVar4;
          puVar9[-2] = uVar16;
          puVar9[1] = uVar18;
          *puVar9 = uVar17;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        local_88 = puVar6;
        if (uVar5 == uVar7) goto LAB_00439c90;
      }
      do {
        puVar14 = puVar15 + 1;
        local_88 = puVar6 + 1;
        *puVar6 = *puVar15;
        puVar6 = local_88;
        puVar15 = puVar14;
      } while (puVar14 != puVar2);
    }
LAB_00439c90:
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = &local_a0;
    if (*(long *)(param_1 + 0x3d8) != 0) {
      lVar1 = *(long *)(param_1 + 0x3d8) + 0x20;
      FUN_00446444(&local_a8,lVar1,lVar1);
    }
    plVar12 = *(long **)(param_1 + 1000);
    for (plVar13 = *(long **)(param_1 + 0x3e0); plVar13 != plVar12; plVar13 = plVar13 + 2) {
      FUN_00446444(&local_a8,*plVar13 + 0x20,*plVar13 + 0x20);
    }
    (**(code **)(*plVar11 + 0x40))(&local_78,plVar11,&local_90,&local_a8);
    FUN_004463f4(&local_a8,local_a0);
    if (local_90 != (undefined1 *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
    if (((local_60 != '\0') && ((**(code **)(param_3 + 0x10))(param_3,&local_78), local_60 != '\0'))
       && (local_78 != (void *)0x0)) {
      local_70 = local_78;
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00439dd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00439dd4  FUN_00439dd4 =====

void FUN_00439dd4(long param_1,undefined4 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  long *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  byte bVar18;
  undefined1 *puVar19;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  char local_a0;
  long *local_98;
  long local_90;
  long local_88;
  char local_80;
  long *plStack_78;
  long local_70;
  long lStack_68;
  byte local_60;
  long local_58;
  undefined1 *puVar20;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar20 = (undefined1 *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  local_c8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  plVar17 = *(long **)(param_1 + 0x6d8);
  local_d0 = (undefined1 *)0x0;
  uVar4 = (long)puVar3 - (long)puVar20;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_d0 = (undefined1 *)operator_new(uVar4);
    local_c0 = local_d0 + uVar4;
    puVar11 = local_d0;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)local_d0 - (long)puVar20))) {
      uVar12 = uVar4 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(puVar20 + 0x10);
      puVar11 = local_d0 + uVar12;
      puVar20 = puVar20 + uVar12;
      puVar15 = (undefined8 *)(local_d0 + 0x10);
      uVar16 = uVar12;
      do {
        puVar6 = puVar14 + -1;
        uVar21 = puVar14[-2];
        uVar23 = puVar14[1];
        uVar22 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 0x20;
        puVar15[-1] = *puVar6;
        puVar15[-2] = uVar21;
        puVar15[1] = uVar23;
        *puVar15 = uVar22;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
      local_c8 = puVar11;
      if (uVar4 == uVar12) goto LAB_00439ea4;
    }
    do {
      puVar19 = puVar20 + 1;
      local_c8 = puVar11 + 1;
      *puVar11 = *puVar20;
      puVar11 = local_c8;
      puVar20 = puVar19;
    } while (puVar19 != puVar3);
  }
LAB_00439ea4:
  (**(code **)(*plVar17 + 0x48))(&plStack_78,plVar17,&local_d0);
  if (local_d0 != (undefined1 *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  bVar7 = local_60;
  local_98 = (long *)((ulong)local_98 & 0xffffffffffffff00);
  local_80 = '\0';
  if (local_60 == 2) {
    local_98 = plStack_78;
    local_90 = local_70;
    local_88 = lStack_68;
    if (lStack_68 == 0) {
      bVar18 = 0;
      local_98 = &local_90;
    }
    else {
      *(long **)(local_70 + 0x10) = &local_90;
      bVar18 = 0;
      local_70 = 0;
      lStack_68 = 0;
      plVar17 = plStack_78;
      while (plStack_78 = &local_70, plVar17 != &local_90) {
        plVar1 = plVar17 + 5;
        plVar2 = plVar17 + 6;
        if (*plVar1 != *plVar2) {
          bVar18 = 1;
          break;
        }
        plVar13 = plVar17;
        plVar8 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) {
          do {
            plVar17 = (long *)plVar13[2];
            bVar9 = (long *)*plVar17 != plVar13;
            plVar13 = plVar17;
          } while (bVar9);
        }
        else {
          do {
            plVar17 = plVar8;
            plVar8 = (long *)*plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
        bVar18 = *plVar1 != *plVar2 | bVar18;
      }
    }
    local_80 = '\x01';
    uVar10 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x28))();
    FUN_004392c0(param_1,param_2,uVar10,bVar18);
  }
  if ((bVar7 != 1) && (*(char *)(*(long *)(param_4 + 0x18) + 0x10) == '\0')) {
    local_b8[0] = 0;
    local_a0 = '\0';
    if (local_80 != '\0') {
      FUN_00442154(local_b8,&local_98);
    }
    uVar10 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x28))();
    (**(code **)(param_4 + 0x10))(param_4,local_b8,uVar10);
    if (local_a0 != '\0') {
      FUN_00442104(local_b8,local_b0);
    }
  }
  if (local_80 != '\0') {
    FUN_00442104(&local_98,local_90);
  }
  if ((ulong)local_60 != 0xff) {
    (*(code *)(&PTR_FUN_00d1c0d0)[local_60])(&local_98,&plStack_78);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0043a090  FUN_0043a090 =====

void FUN_0043a090(long param_1,undefined4 param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  char local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  char local_60;
  long local_58;
  undefined1 *puVar16;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(param_1 + 0x6d8);
  if (plVar12 == (long *)0x0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/connection.cpp",0x17f2,
                     "Cannot process MLS welcome: MLS session not initialized");
        return;
      }
      goto LAB_0043a314;
    }
  }
  else {
    puVar16 = (undefined1 *)*param_3;
    puVar2 = (undefined1 *)param_3[1];
    local_a8 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    uVar6 = (long)puVar2 - (long)puVar16;
    if (uVar6 != 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_b0 = (undefined1 *)operator_new(uVar6);
      local_a0 = local_b0 + uVar6;
      puVar7 = local_b0;
      if ((0x1f < uVar6) && (0x1f < (ulong)((long)local_b0 - (long)puVar16))) {
        uVar8 = uVar6 & 0xffffffffffffffe0;
        puVar9 = (undefined8 *)(puVar16 + 0x10);
        puVar7 = local_b0 + uVar8;
        puVar16 = puVar16 + uVar8;
        puVar10 = (undefined8 *)(local_b0 + 0x10);
        uVar11 = uVar8;
        do {
          puVar4 = puVar9 + -1;
          uVar17 = puVar9[-2];
          uVar19 = puVar9[1];
          uVar18 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar11 = uVar11 - 0x20;
          puVar10[-1] = *puVar4;
          puVar10[-2] = uVar17;
          puVar10[1] = uVar19;
          *puVar10 = uVar18;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        local_a8 = puVar7;
        if (uVar6 == uVar8) goto LAB_0043a164;
      }
      do {
        puVar15 = puVar16 + 1;
        local_a8 = puVar7 + 1;
        *puVar7 = *puVar16;
        puVar7 = local_a8;
        puVar16 = puVar15;
      } while (puVar15 != puVar2);
    }
LAB_0043a164:
    local_c0 = 0;
    uStack_b8 = 0;
    local_c8 = &local_c0;
    if (*(long *)(param_1 + 0x3d8) != 0) {
      lVar1 = *(long *)(param_1 + 0x3d8) + 0x20;
      FUN_00446444(&local_c8,lVar1,lVar1);
    }
    plVar14 = *(long **)(param_1 + 1000);
    for (plVar13 = *(long **)(param_1 + 0x3e0); plVar13 != plVar14; plVar13 = plVar13 + 2) {
      FUN_00446444(&local_c8,*plVar13 + 0x20,*plVar13 + 0x20);
    }
    (**(code **)(*plVar12 + 0x50))(auStack_78,plVar12,&local_b0,&local_c8);
    FUN_004463f4(&local_c8,local_c0);
    if (local_b0 != (undefined1 *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
    if (local_60 != '\0') {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x28))();
      FUN_004392c0(param_1,param_2,uVar5,1);
    }
    if (*(char *)(*(long *)(param_4 + 0x18) + 0x10) == '\0') {
      local_98[0] = 0;
      local_80 = '\0';
      if (local_60 != '\0') {
        FUN_00442154(local_98,auStack_78);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x28))();
      (**(code **)(param_4 + 0x10))(param_4,local_98,uVar5);
      if (local_80 != '\0') {
        FUN_00442104(local_98,local_90);
      }
    }
    if (local_60 != '\0') {
      FUN_00442104(auStack_78,local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_0043a314:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043a318  FUN_0043a318 =====

void FUN_0043a318(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = param_4[2];
  local_48 = (undefined8 *)param_4[3];
  uStack_58 = param_4[1];
  local_60 = *param_4;
  plVar2 = *(long **)(param_1 + 0x6d8);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*param_4);
  }
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043a3c4  FUN_0043a3c4 =====

void FUN_0043a3c4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x708) = FUN_0041829c;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x710) + 8);
  *(undefined8 **)(param_1 + 0x710) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x6f8));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x700) = param_2[1];
  *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  *(undefined8 *)(param_1 + 0x708) = param_2[2];
  *(undefined8 *)(param_1 + 0x710) = param_2[3];
  param_2[2] = FUN_0041829c;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043a440  FUN_0043a440 =====

void FUN_0043a440(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x750) = FUN_00442f5c;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x758) + 8);
  *(undefined8 **)(param_1 + 0x758) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x740));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x748) = param_2[1];
  *(undefined8 *)(param_1 + 0x740) = uVar2;
  *(undefined8 *)(param_1 + 0x750) = param_2[2];
  *(undefined8 *)(param_1 + 0x758) = param_2[3];
  param_2[2] = FUN_00442f5c;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043a4bc  FUN_0043a4bc =====

void FUN_0043a4bc(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x770) = FUN_00442f68;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x778) + 8);
  *(undefined8 **)(param_1 + 0x778) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x760));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x768) = param_2[1];
  *(undefined8 *)(param_1 + 0x760) = uVar2;
  *(undefined8 *)(param_1 + 0x770) = param_2[2];
  *(undefined8 *)(param_1 + 0x778) = param_2[3];
  param_2[2] = FUN_00442f68;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043a538  FUN_0043a538 =====

void FUN_0043a538(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  long lVar6;
  char ***__src;
  int iVar7;
  char ****ppppcVar8;
  ushort uVar9;
  ulong uVar10;
  char *pcVar11;
  ushort local_98 [4];
  char ***local_90;
  ulong uStack_88;
  undefined8 local_80;
  ushort local_78 [4];
  char ***local_70;
  size_t sStack_68;
  ulong local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x758) + 0x10) != '\0') goto LAB_0043a72c;
  local_70 = (char ***)0x0;
  sStack_68 = 0;
  local_60 = 0;
  local_78[0] = FUN_0046a3d8(*(undefined8 *)(param_1 + 0x3d8));
  if (local_78[0] != 0) {
    FUN_00411268(&local_70,param_1 + 0x6e0);
  }
  uVar9 = local_78[0];
  if ((*(char *)(param_1 + 0x738) == '\0') ||
     (uVar5 = *(ushort *)(param_1 + 0x718), uVar5 != local_78[0])) {
LAB_0043a644:
    sVar1 = sStack_68;
    __src = local_70;
    ppppcVar8 = &local_90;
    local_98[0] = uVar9;
    if ((long)local_60 < 0) {
      if (sStack_68 < 0x17) {
        local_80 = CONCAT17((char)sStack_68,(undefined7)local_80);
      }
      else {
        if (0x7fffffffffffffef < sStack_68) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar10 = (sStack_68 | 0xf) + 1;
        ppppcVar8 = (char ****)operator_new(uVar10);
        local_80 = uVar10 | 0x8000000000000000;
        uStack_88 = sVar1;
        local_90 = (char ***)ppppcVar8;
      }
      sVar1 = sVar1 + 1;
      if ((ppppcVar8 <= __src) && (__src < (char ****)((long)ppppcVar8 + sVar1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(ppppcVar8,__src,sVar1);
    }
    else {
      uStack_88 = sStack_68;
      local_90 = local_70;
      local_80 = local_60;
    }
    (**(code **)(param_1 + 0x750))(param_1 + 0x740,local_98);
    if ((long)local_80 < 0) {
      operator_delete(local_90);
      cVar4 = *(char *)(param_1 + 0x738);
    }
    else {
      cVar4 = *(char *)(param_1 + 0x738);
    }
    if (cVar4 == '\0') {
      FUN_004425b0((ushort *)(param_1 + 0x718),local_78);
    }
    else {
      *(ushort *)(param_1 + 0x718) = local_78[0];
      FUN_00411268(param_1 + 0x720,&local_70);
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x737);
    uVar10 = (ulong)bVar3;
    sVar1 = *(size_t *)(param_1 + 0x728);
    if (-1 < (char)bVar3) {
      sVar1 = uVar10;
    }
    sVar2 = sStack_68;
    if (-1 < (long)local_60) {
      sVar2 = local_60 >> 0x38;
    }
    uVar9 = uVar5;
    if (sVar1 != sVar2) goto LAB_0043a644;
    pcVar11 = (char *)(param_1 + 0x720);
    __s1 = *(char **)pcVar11;
    if (-1 < (char)bVar3) {
      __s1 = pcVar11;
    }
    ppppcVar8 = (char ****)local_70;
    if (-1 < (long)local_60) {
      ppppcVar8 = &local_70;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar7 = memcmp(__s1,ppppcVar8,sVar1), iVar7 != 0)) goto LAB_0043a644;
    }
    else if (bVar3 != 0) {
      do {
        if (*pcVar11 != *(char *)ppppcVar8) goto LAB_0043a644;
        uVar10 = uVar10 - 1;
        pcVar11 = pcVar11 + 1;
        ppppcVar8 = (char ****)((long)ppppcVar8 + 1);
      } while (uVar10 != 0);
    }
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
LAB_0043a72c:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043a79c  FUN_0043a79c =====

long * FUN_0043a79c(long param_1,char *param_2)

{
  char *__s2;
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (((DAT_00d60218 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d60218), iVar3 != 0)) {
    __cxa_atexit(FUN_00438244,&DAT_00d60208,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d60218);
  }
  plVar9 = *(long **)(param_1 + 0x3e0);
  plVar10 = *(long **)(param_1 + 1000);
  if (plVar9 == plVar10) {
LAB_0043a87c:
    plVar8 = (long *)&DAT_00d60208;
    if (plVar9 != plVar10) {
      plVar8 = plVar9;
    }
  }
  else {
    bVar2 = param_2[0x17];
    __s2 = *(char **)param_2;
    if (-1 < (char)bVar2) {
      __s2 = param_2;
    }
    __n = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    do {
      lVar5 = *plVar9;
      bVar2 = *(byte *)(lVar5 + 0x37);
      uVar4 = (ulong)bVar2;
      sVar1 = *(size_t *)(lVar5 + 0x28);
      if (-1 < (char)bVar2) {
        sVar1 = uVar4;
      }
      if (sVar1 == __n) {
        pcVar6 = (char *)(lVar5 + 0x20);
        if ((char)bVar2 < '\0') {
          if ((__n == 0) || (iVar3 = memcmp(*(void **)pcVar6,__s2,__n), iVar3 == 0))
          goto LAB_0043a87c;
        }
        else {
          pcVar7 = __s2;
          if (bVar2 == 0) goto LAB_0043a87c;
          while (*pcVar6 == *pcVar7) {
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
            if (uVar4 == 0) goto LAB_0043a87c;
          }
        }
      }
      plVar9 = plVar9 + 2;
      plVar8 = (long *)&DAT_00d60208;
    } while (plVar9 != plVar10);
  }
  return plVar8;
}


// ===== 0043a8e0  FUN_0043a8e0 =====

void FUN_0043a8e0(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x4d8) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043a8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x4d0))(param_1 + 0x4c0);
  return;
}


// ===== 0043a900  FUN_0043a900 =====

void FUN_0043a900(long param_1,long param_2)

{
  if ((param_2 != 0) && (*(char *)(*(long *)(param_1 + 0x4f8) + 0x10) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0043a91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x4f0))(param_1 + 0x4e0);
    return;
  }
  return;
}


// ===== 0043a924  FUN_0043a924 =====

/* WARNING: Removing unreachable block (ram,0x0043aa40) */
/* WARNING: Removing unreachable block (ram,0x0043ab4c) */

void FUN_0043a924(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  void *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  byte local_81;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x510);
  lVar9 = *(long *)(param_1 + 0x528);
  *(undefined8 **)(param_1 + 0x528) = &DAT_001f1910;
  *(code **)(param_1 + 0x520) = FUN_00442f14;
  pcVar10 = *(code **)(lVar9 + 8);
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(*puVar1);
  }
  uVar15 = *param_2;
  *(undefined8 *)(param_1 + 0x518) = param_2[1];
  *puVar1 = uVar15;
  *(undefined8 *)(param_1 + 0x520) = param_2[2];
  *(undefined8 *)(param_1 + 0x528) = param_2[3];
  param_2[2] = FUN_00442f14;
  param_2[3] = &DAT_001f1910;
  lVar9 = *(long *)(param_1 + 0x3d8);
  uVar8 = FUN_00469528(lVar9);
  lVar12 = *(long *)(param_1 + 0x3d8);
  FUN_00469548(&local_80,lVar12);
  if (*(char *)(*(long *)(param_1 + 0x528) + 0x10) == '\0') {
    uVar3 = *(ulong *)(lVar12 + 0x1f18);
    if (-1 < (char)*(byte *)(lVar12 + 0x1f27)) {
      uVar3 = (ulong)*(byte *)(lVar12 + 0x1f27);
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar8;
    }
    (**(code **)(param_1 + 0x520))(puVar1,lVar9 + 0x20,uVar2,lVar12 + 0x1f10,&local_80);
  }
  if (local_80 != (undefined4 *)0x0) {
    for (; local_78 != local_80; local_78 = local_78 + -0x12) {
    }
    local_78 = local_80;
    operator_delete(local_80);
  }
  plVar14 = *(long **)(param_1 + 1000);
  for (plVar13 = *(long **)(param_1 + 0x3e0); plVar13 != plVar14; plVar13 = plVar13 + 2) {
    local_80 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_70 = 0;
    plVar11 = *(long **)(*plVar13 + 0x1d58);
    if (plVar11 != (long *)0x0) {
      do {
        FUN_00441e88(&local_80,plVar11 + 2);
        puVar7 = local_78;
        plVar11 = (long *)*plVar11;
        puVar5 = local_80;
        puVar6 = local_78;
      } while (plVar11 != (long *)0x0);
      for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
        uVar8 = *puVar5;
        lVar9 = *plVar13;
        FUN_0047f6fc(&local_98,lVar9,uVar8);
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_b0 = (void *)0x0;
        if (*(char *)(*(long *)(param_1 + 0x528) + 0x10) == '\0') {
          uVar3 = local_90;
          if (-1 < (char)local_81) {
            uVar3 = (ulong)local_81;
          }
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar8;
          }
          (**(code **)(param_1 + 0x520))(puVar1,lVar9 + 0x20,uVar2,&local_98,&local_b0);
          if (local_b0 != (void *)0x0) {
            for (; local_a8 != local_b0; local_a8 = (void *)((long)local_a8 + -0x48)) {
            }
            local_a8 = local_b0;
            operator_delete(local_b0);
          }
        }
        if ((char)local_81 < '\0') {
          operator_delete(local_98);
        }
        puVar6 = local_80;
      }
      if (puVar6 != (undefined4 *)0x0) {
        local_78 = puVar6;
        operator_delete(puVar6);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043abc4  FUN_0043abc4 =====

void FUN_0043abc4(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x528) + 0x10) != '\0') {
    return;
  }
  uVar2 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_4 + 0x17);
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0043abfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x520))(param_1 + 0x510,param_2,uVar1);
  return;
}


// ===== 0043ac00  FUN_0043ac00 =====

void FUN_0043ac00(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x540) = FUN_00442f20;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x548) + 8);
  *(undefined8 **)(param_1 + 0x548) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x530));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x538) = param_2[1];
  *(undefined8 *)(param_1 + 0x530) = uVar2;
  *(undefined8 *)(param_1 + 0x540) = param_2[2];
  *(undefined8 *)(param_1 + 0x548) = param_2[3];
  param_2[2] = FUN_00442f20;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043ac7c  FUN_0043ac7c =====

void FUN_0043ac7c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x560) = FUN_00442f2c;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x568) + 8);
  *(undefined8 **)(param_1 + 0x568) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x550));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x558) = param_2[1];
  *(undefined8 *)(param_1 + 0x550) = uVar2;
  *(undefined8 *)(param_1 + 0x560) = param_2[2];
  *(undefined8 *)(param_1 + 0x568) = param_2[3];
  param_2[2] = FUN_00442f2c;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043acf8  FUN_0043acf8 =====

void FUN_0043acf8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x580) = FUN_00442f38;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x588) + 8);
  *(undefined8 **)(param_1 + 0x588) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x570));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x578) = param_2[1];
  *(undefined8 *)(param_1 + 0x570) = uVar2;
  *(undefined8 *)(param_1 + 0x580) = param_2[2];
  *(undefined8 *)(param_1 + 0x588) = param_2[3];
  param_2[2] = FUN_00442f38;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043ad74  FUN_0043ad74 =====

void FUN_0043ad74(long param_1)

{
  undefined1 extraout_w1;
  long in_x4;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(*(long *)(param_1 + 0x548) + 0x10) == '\0') {
    (**(code **)(param_1 + 0x540))(param_1 + 0x530);
  }
  if (*(char *)(*(long *)(param_1 + 0x568) + 0x10) != '\0' || *(char *)(param_1 + 0x780) == '\0') {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined1 *)(in_x4 + 0x48) = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(in_x4 + 0x40) = uVar1;
  uVar1 = FUN_00485f70(*(undefined8 *)(param_1 + 0x3d8));
  *(undefined8 *)(in_x4 + 0x60) = uVar1;
  *(undefined1 *)(in_x4 + 0x68) = extraout_w1;
  puVar3 = *(undefined8 **)(param_1 + 1000);
  for (puVar2 = *(undefined8 **)(param_1 + 0x3e0); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    auVar4 = FUN_00485f70(*puVar2);
    if (((auVar4 & (undefined1  [16])0xff) != (undefined1  [16])0x0) &&
       ((*(char *)(in_x4 + 0x58) == '\0' || (auVar4._0_8_ < *(ulong *)(in_x4 + 0x50))))) {
      *(ulong *)(in_x4 + 0x50) = auVar4._0_8_;
      *(char *)(in_x4 + 0x58) = auVar4[8];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0043ae5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x560))(param_1 + 0x550,in_x4);
  return;
}


// ===== 0043ae60  FUN_0043ae60 =====

void FUN_0043ae60(long param_1,long param_2)

{
  undefined1 extraout_w1;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(*(long *)(param_1 + 0x588) + 0x10) != '\0' || *(char *)(param_1 + 0x780) == '\0') {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = FUN_00485f70(*(undefined8 *)(param_1 + 0x3d8));
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined1 *)(param_2 + 0x48) = extraout_w1;
  puVar3 = *(undefined8 **)(param_1 + 1000);
  for (puVar2 = *(undefined8 **)(param_1 + 0x3e0); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    auVar4 = FUN_00485f70(*puVar2);
    if (((auVar4 & (undefined1  [16])0xff) != (undefined1  [16])0x0) &&
       ((*(char *)(param_2 + 0x38) == '\0' || (auVar4._0_8_ < *(ulong *)(param_2 + 0x30))))) {
      *(ulong *)(param_2 + 0x30) = auVar4._0_8_;
      *(char *)(param_2 + 0x38) = auVar4[8];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0043af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x580))(param_1 + 0x570,param_2);
  return;
}


// ===== 0043af34  FUN_0043af34 =====

void FUN_0043af34(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x680) = FUN_00410008;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x688) + 8);
  *(undefined8 **)(param_1 + 0x688) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x670));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x678) = param_2[1];
  *(undefined8 *)(param_1 + 0x670) = uVar2;
  *(undefined8 *)(param_1 + 0x680) = param_2[2];
  *(undefined8 *)(param_1 + 0x688) = param_2[3];
  param_2[2] = FUN_00410008;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043afb0  FUN_0043afb0 =====

void FUN_0043afb0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x5a0) = FUN_00442f44;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x5a8) + 8);
  *(undefined8 **)(param_1 + 0x5a8) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x590));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x598) = param_2[1];
  *(undefined8 *)(param_1 + 0x590) = uVar2;
  *(undefined8 *)(param_1 + 0x5a0) = param_2[2];
  *(undefined8 *)(param_1 + 0x5a8) = param_2[3];
  param_2[2] = FUN_00442f44;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b02c  FUN_0043b02c =====

void FUN_0043b02c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x5c0) = FUN_0041c32c;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x5c8) + 8);
  *(undefined8 **)(param_1 + 0x5c8) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x5b0));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x5b8) = param_2[1];
  *(undefined8 *)(param_1 + 0x5b0) = uVar2;
  *(undefined8 *)(param_1 + 0x5c0) = param_2[2];
  *(undefined8 *)(param_1 + 0x5c8) = param_2[3];
  param_2[2] = FUN_0041c32c;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b0a8  FUN_0043b0a8 =====

void FUN_0043b0a8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x5e0) = FUN_0040dec4;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x5e8) + 8);
  *(undefined8 **)(param_1 + 0x5e8) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x5d0));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x5d8) = param_2[1];
  *(undefined8 *)(param_1 + 0x5d0) = uVar2;
  *(undefined8 *)(param_1 + 0x5e0) = param_2[2];
  *(undefined8 *)(param_1 + 0x5e8) = param_2[3];
  param_2[2] = FUN_0040dec4;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b124  FUN_0043b124 =====

void FUN_0043b124(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x600) = FUN_00442f50;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x608) + 8);
  *(undefined8 **)(param_1 + 0x608) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x5f0));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x5f8) = param_2[1];
  *(undefined8 *)(param_1 + 0x5f0) = uVar2;
  *(undefined8 *)(param_1 + 0x600) = param_2[2];
  *(undefined8 *)(param_1 + 0x608) = param_2[3];
  param_2[2] = FUN_00442f50;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b1a0  FUN_0043b1a0 =====

void FUN_0043b1a0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x620) = FUN_00410008;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x628) + 8);
  *(undefined8 **)(param_1 + 0x628) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x610));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x618) = param_2[1];
  *(undefined8 *)(param_1 + 0x610) = uVar2;
  *(undefined8 *)(param_1 + 0x620) = param_2[2];
  *(undefined8 *)(param_1 + 0x628) = param_2[3];
  param_2[2] = FUN_00410008;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b21c  FUN_0043b21c =====

void FUN_0043b21c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x628) + 0x10) == '\0') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __src = (undefined1 *)*param_2;
      uVar2 = param_2[1];
      if (uVar2 < 0x17) {
        local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar2 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar1);
        local_50 = uVar1 | 0x8000000000000000;
        local_60 = (undefined1 *)__dest;
        uStack_58 = uVar2;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar2 + 1);
    }
    else {
      uStack_58 = param_2[1];
      local_60 = (undefined1 *)*param_2;
      local_50 = param_2[2];
    }
    (**(code **)(param_1 + 0x620))(param_1 + 0x610,&local_60);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043b344  FUN_0043b344 =====

void FUN_0043b344(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x640) = FUN_00410008;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x648) + 8);
  *(undefined8 **)(param_1 + 0x648) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x630));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x638) = param_2[1];
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  *(undefined8 *)(param_1 + 0x640) = param_2[2];
  *(undefined8 *)(param_1 + 0x648) = param_2[3];
  param_2[2] = FUN_00410008;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b3c0  FUN_0043b3c0 =====

void FUN_0043b3c0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x660) = FUN_00442d38;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x668) + 8);
  *(undefined8 **)(param_1 + 0x668) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x650));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x658) = param_2[1];
  *(undefined8 *)(param_1 + 0x650) = uVar2;
  *(undefined8 *)(param_1 + 0x660) = param_2[2];
  *(undefined8 *)(param_1 + 0x668) = param_2[3];
  param_2[2] = FUN_00442d38;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 0043b43c  FUN_0043b43c =====

void FUN_0043b43c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_170;
  undefined1 local_16f;
  undefined4 local_16c;
  undefined1 local_168;
  undefined4 local_164;
  undefined1 local_160;
  char local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined4 local_7f;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (*(char *)(param_2 + 4) != '\0') {
    uVar12 = param_2[2];
    puVar10 = (undefined8 *)param_2[3];
    uVar7 = *param_2;
    uVar2 = param_2[1];
    pcVar11 = (code *)*puVar10;
    if (pcVar11 != (code *)0x0) {
      uVar7 = (*pcVar11)();
    }
    lVar13 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = uVar12;
    *(undefined8 **)(param_1 + 0x148) = puVar10;
    uVar12 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uVar7;
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    pcVar11 = *(code **)(lVar13 + 8);
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar12);
    }
    lVar13 = *(long *)(param_1 + 0x3d8);
    if (*(char *)(*(long *)(param_1 + 0x148) + 0x10) == '\0') {
      (**(code **)(param_1 + 0x140))
                (*(ulong *)(lVar13 + 0x1d38) & 0xffffffff,param_1 + 0x130,lVar13 + 0x20,
                 *(undefined4 *)(lVar13 + 0x40),*(char *)(lVar13 + 0x3d) != '\0');
    }
  }
  if (*(char *)(param_2 + 9) != '\0') {
    uVar12 = param_2[7];
    puVar10 = (undefined8 *)param_2[8];
    uVar7 = param_2[5];
    uVar2 = param_2[6];
    pcVar11 = (code *)*puVar10;
    if (pcVar11 != (code *)0x0) {
      uVar7 = (*pcVar11)();
    }
    lVar13 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x160) = uVar12;
    *(undefined8 **)(param_1 + 0x168) = puVar10;
    uVar12 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = uVar7;
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    pcVar11 = *(code **)(lVar13 + 8);
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar12);
    }
  }
  if (*(char *)(param_2 + 99) != '\0') {
    uStack_1b8 = *(undefined2 *)(param_2 + 0x37);
    uStack_1ac = *(undefined4 *)((long)param_2 + 0x1c4);
    local_1c0 = CONCAT35(local_1c0._5_3_,*(undefined5 *)(param_2 + 0x36));
    local_1a0 = *(undefined4 *)(param_2 + 0x3a);
    uStack_1b4 = (undefined4)*(undefined8 *)((long)param_2 + 0x1bc);
    uStack_1b0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x1bc) >> 0x20);
    local_190 = *(undefined1 *)(param_2 + 0x3c);
    local_198 = param_2[0x3b];
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,*(undefined1 *)(param_2 + 0x39));
    local_188 = CONCAT31(local_188._1_3_,*(undefined1 *)(param_2 + 0x3d));
    FUN_004426bc(&local_180,param_2 + 0x3e);
    local_90 = *(undefined1 *)(param_2 + 0x5c);
    local_88 = *(undefined4 *)(param_2 + 0x5d);
    local_84 = *(undefined1 *)((long)param_2 + 0x2ec);
    local_80 = *(undefined1 *)(param_2 + 0x5e);
    local_7f = *(undefined4 *)((long)param_2 + 0x2f1);
    FUN_0040d960(auStack_78,param_2 + 0x5f);
    FUN_00464438(*(undefined8 *)(param_1 + 0x3d8),&local_1c0);
    FUN_0043ba38(&local_1c0);
  }
  if (*(char *)((long)param_2 + 0xe1) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x3d8) + 0x1d79) = *(undefined1 *)(param_2 + 0x1c);
  }
  if ((*(char *)((long)param_2 + 0x54) != '\0') &&
     (iVar3 = *(int *)(param_2 + 10), iVar3 != *(int *)(param_1 + 0x170))) {
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6148,"../../discord_native_lib/src/media/connection.cpp",0x23f9,
                   "Changing audio input mode from: ",*(undefined4 *)(param_1 + 0x170)," to: ",iVar3
                  );
    }
    FUN_005467a4(param_1 + 0x3b0);
    uVar12 = *(undefined8 *)(param_1 + 0x98);
    if (*(long *)(param_1 + 0xa0) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 0xa0) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = (long *)FUN_004021cc(iVar3,param_1 + 0x178,uVar12);
    puVar10 = (undefined8 *)operator_new(0x20);
    plVar16 = *(long **)(param_1 + 0x3a8);
    puVar10[2] = 0;
    puVar10[3] = plVar9;
    *(long **)(param_1 + 0x3a0) = plVar9;
    *(undefined8 **)(param_1 + 0x3a8) = puVar10;
    *puVar10 = &PTR_FUN_00d1c470;
    puVar10[1] = 0;
    if (plVar16 != (long *)0x0) {
      plVar9 = plVar16 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_005466cc(plVar16);
      }
      plVar9 = *(long **)(param_1 + 0x3a0);
    }
    if (plVar9 != (long *)0x0) {
      lVar13 = *(long *)(param_1 + 0x88);
      local_1d0 = *(undefined8 *)(lVar13 + 0x428);
      local_1c8 = *(undefined8 **)(lVar13 + 0x430);
      uStack_1d8 = *(undefined8 *)(lVar13 + 0x420);
      local_1e0 = *(undefined8 *)(lVar13 + 0x418);
      if ((code *)*local_1c8 != (code *)0x0) {
        local_1e0 = (*(code *)*local_1c8)(*(undefined8 *)(lVar13 + 0x418));
      }
      (**(code **)(*plVar9 + 0x48))(plVar9,&local_1e0);
      if ((code *)local_1c8[1] != (code *)0x0) {
        (*(code *)local_1c8[1])(local_1e0);
      }
    }
    FUN_005467c8(param_1 + 0x3b0);
    uVar12 = *(undefined8 *)(param_1 + 0x1a0);
    if (*(int *)(param_1 + 0x170) != 1) {
      uVar12 = 0;
    }
    FUN_00468078(*(undefined8 *)(param_1 + 0x3d8),uVar12);
    *(int *)(param_1 + 0x170) = iVar3;
  }
  if (*(char *)(param_2 + 0x1b) != '\0') {
    local_1a8 = (undefined8 *)param_2[0xe];
    uVar12 = param_2[0xc];
    local_1c0 = param_2[0xb];
    uStack_1b8 = (undefined2)uVar12;
    uStack_1b6 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_1b4 = (undefined4)((ulong)uVar12 >> 0x20);
    uStack_1b0 = (undefined4)param_2[0xd];
    uStack_1ac = (undefined4)((ulong)param_2[0xd] >> 0x20);
    if ((code *)*local_1a8 != (code *)0x0) {
      local_1c0 = (*(code *)*local_1a8)(param_2[0xb]);
    }
    local_198 = param_2[0x10];
    local_190 = *(undefined1 *)(param_2 + 0x11);
    local_1a0 = CONCAT31(local_1a0._1_3_,*(undefined1 *)(param_2 + 0xf));
    local_188 = *(undefined4 *)(param_2 + 0x12);
    local_184 = *(undefined1 *)((long)param_2 + 0x94);
    local_17c = *(undefined1 *)((long)param_2 + 0x9c);
    local_178 = *(undefined4 *)(param_2 + 0x14);
    local_174 = *(undefined1 *)((long)param_2 + 0xa4);
    local_170 = *(undefined1 *)(param_2 + 0x15);
    local_16f = *(undefined1 *)((long)param_2 + 0xa9);
    local_168 = *(undefined1 *)(param_2 + 0x16);
    local_164 = *(undefined4 *)((long)param_2 + 0xb4);
    local_160 = *(undefined1 *)(param_2 + 0x17);
    local_158 = *(char *)(param_2 + 0x18);
    local_180 = *(undefined4 *)(param_2 + 0x13);
    local_150 = *(undefined4 *)(param_2 + 0x19);
    local_14c = *(undefined1 *)((long)param_2 + 0xcc);
    local_148 = *(undefined1 *)(param_2 + 0x1a);
    local_16c = *(undefined4 *)((long)param_2 + 0xac);
    FUN_00489dac(param_1 + 0x178,&local_1c0);
    plVar9 = *(long **)(param_1 + 0x3a0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x40))(plVar9,&local_1c0);
    }
    if (local_158 != '\0') {
      FUN_0044fb58(*(undefined8 *)(param_1 + 0x88),&local_1c0);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x1a0);
    if (*(int *)(param_1 + 0x170) != 1) {
      uVar12 = 0;
    }
    FUN_00468078(*(undefined8 *)(param_1 + 0x3d8),uVar12);
    if ((code *)local_1a8[1] != (code *)0x0) {
      (*(code *)local_1a8[1])(local_1c0);
    }
  }
  if (*(char *)(param_2 + 0x35) != '\0') {
    FUN_00489874(param_1 + 0x2e0,param_2 + 0x1e);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_00487934(*(long *)(param_1 + 0xe8),param_2 + 0x1e);
    }
  }
  if (*(char *)(param_2 + 0x1d) != '\0') {
    iVar3 = *(int *)((long)param_2 + 0xe4);
    puVar10 = *(undefined8 **)(param_1 + 0x3e0);
    puVar14 = *(undefined8 **)(param_1 + 1000);
    if (499 < iVar3) {
      iVar3 = 500;
    }
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x398) = iVar3;
    for (; puVar10 != puVar14; puVar10 = puVar10 + 2) {
      FUN_00481bc4(*puVar10,*(undefined4 *)(param_1 + 0x398));
    }
  }
  cVar4 = *(char *)((long)param_2 + 0x414);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x82);
  }
  bVar5 = *(char *)((long)param_2 + 0x41c) != '\0';
  if (bVar5) {
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x83);
  }
  bVar1 = *(char *)((long)param_2 + 0x424) != '\0';
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x84);
  }
  if ((bVar1 || (bVar5 || cVar4 != '\0')) && (*(long **)(param_1 + 0xe0) != (long *)0x0)) {
    local_1c0 = NEON_rev64(*(undefined8 *)(param_1 + 0x458),4);
    uStack_1b8 = (undefined2)*(undefined4 *)(param_1 + 0x460);
    uStack_1b6 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x460) >> 0x10);
    plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0xe0) + 0x68))();
    (**(code **)(*plVar9 + 0xb8))(plVar9,&local_1c0);
  }
  if (*(char *)(param_2 + 0x81) != '\0') {
    puVar10 = param_2 + 0x68;
    FUN_00489e98(param_1 + 0x1f8,puVar10);
    FUN_004659d8(*(undefined8 *)(param_1 + 0x3d8),puVar10);
    puVar15 = *(undefined8 **)(param_1 + 1000);
    for (puVar14 = *(undefined8 **)(param_1 + 0x3e0); puVar14 != puVar15; puVar14 = puVar14 + 2) {
      FUN_00481898(*puVar14,puVar10);
    }
  }
  if (*(char *)(param_2 + 0x67) != '\0') {
    FUN_00489c44(param_1 + 0x2c0,param_2 + 100);
  }
  if (*(char *)(param_2 + 0x86) != '\0') {
    FUN_00489fa0(param_1 + 0x2d8,param_2 + 0x85);
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0043ba14  FUN_0043ba14 =====

void FUN_0043ba14(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (*(char *)(*(long *)(param_1 + 0x148) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043ba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x140))(param_1 + 0x130,param_2,param_3,param_4 & 1);
  return;
}


// ===== 0043ba38  FUN_0043ba38 =====

/* WARNING: Removing unreachable block (ram,0x0043ba80) */
/* WARNING: Removing unreachable block (ram,0x0043bb04) */

void FUN_0043ba38(long param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x148);
  if (pvVar4 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x150);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x48);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x148);
    }
    *(void **)(param_1 + 0x150) = pvVar4;
    operator_delete(pvVar2);
  }
  if (*(char *)(param_1 + 0x11f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x108));
    pvVar4 = *(void **)(param_1 + 0xe0);
  }
  else {
    pvVar4 = *(void **)(param_1 + 0xe0);
  }
  if (pvVar4 == (void *)0x0) {
    cVar1 = *(char *)(param_1 + 0xd7);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0xe8);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0xe0);
    }
    *(void **)(param_1 + 0xe8) = pvVar4;
    operator_delete(pvVar2);
    cVar1 = *(char *)(param_1 + 0xd7);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0xc0));
    cVar1 = *(char *)(param_1 + 0xb7);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb7);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0xa0));
  return;
}


// ===== 0043bb48  FUN_0043bb48 =====

long FUN_0043bb48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df1c8(auStack_88,0);
  FUN_004e169c(auStack_60,param_1,"headerBytes",auStack_88);
  lVar2 = FUN_004e0124(auStack_60);
  FUN_004df1c8(auStack_d8,0);
  FUN_004e169c(auStack_b0,param_1,"payloadBytes",auStack_d8);
  lVar3 = FUN_004e0124(auStack_b0);
  FUN_004df1c8(auStack_128,0);
  FUN_004e169c(auStack_100,param_1,"paddingBytes",auStack_128);
  lVar4 = FUN_004e0124(auStack_100);
  lVar4 = lVar3 + lVar2 + lVar4;
  FUN_004df880(auStack_100);
  FUN_004df880(auStack_128);
  FUN_004df880(auStack_b0);
  FUN_004df880(auStack_d8);
  FUN_004df880(auStack_60);
  FUN_004df880(auStack_88);
  uVar5 = FUN_004e1714(param_1,"transmitted");
  if ((uVar5 & 1) != 0) {
    FUN_004e12e0(param_1,"transmitted");
    lVar2 = FUN_0043bb48();
    lVar4 = lVar2 + lVar4;
  }
  uVar5 = FUN_004e1714(param_1,"retransmitted");
  if ((uVar5 & 1) != 0) {
    FUN_004e12e0(param_1,"retransmitted");
    lVar2 = FUN_0043bb48();
    lVar4 = lVar2 + lVar4;
  }
  uVar5 = FUN_004e1714(param_1,&DAT_001d5dc2);
  if ((uVar5 & 1) != 0) {
    FUN_004e12e0(param_1,&DAT_001d5dc2);
    lVar2 = FUN_0043bb48();
    lVar4 = lVar2 + lVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043bcdc  FUN_0043bcdc  [FAILED] =====
/* decompilation failed: Exception while decompiling 0043bcdc: process: timeout
 */

// ===== 0043ebb0  FUN_0043ebb0 =====

void FUN_0043ebb0(undefined1 (*param_1) [12],long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [12];
  uint local_70;
  int iStack_6c;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(param_2 + 0x3e0);
  *(undefined8 *)*param_1 = 0;
  puVar4 = *(undefined8 **)(param_2 + 1000);
  *(undefined4 *)(*param_1 + 8) = 0;
  *(undefined8 *)(param_1[1] + 4) = 0;
  *(undefined4 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined8 *)(param_1[3] + 4) = 0;
  if (puVar2 != puVar4) {
    lVar7 = 0;
    lVar8 = 0;
    lVar5 = 0;
    iVar6 = 0;
    do {
      puVar3 = puVar2 + 2;
      FUN_00481594(&local_70,*puVar2);
      lVar7 = lVar7 + local_68;
      lVar8 = lVar8 + lStack_60;
      lVar5 = lVar5 + (ulong)local_70;
      iVar6 = iVar6 + iStack_6c;
      *(long *)(param_1[1] + 4) = lVar5;
      *(int *)param_1[2] = iVar6;
      *(long *)(param_1[3] + 4) = lVar8;
      *(long *)(param_1[2] + 8) = lVar7;
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
  }
  if (*(long *)(param_2 + 0x3d8) != 0) {
    auVar9 = FUN_00467f3c();
    *param_1 = auVar9;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043ec98  FUN_0043ec98 =====

void FUN_0043ec98(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = 0;
  lVar7 = 0;
  puVar2 = *(undefined8 **)(param_2 + 0x3e0);
  param_1[6] = 0;
  puVar4 = *(undefined8 **)(param_2 + 1000);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (puVar2 != puVar4) {
    lVar8 = 0;
    lVar9 = 0;
    lVar5 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      puVar3 = puVar2 + 2;
      FUN_00481620(&local_80,*puVar2);
      lVar6 = lVar6 + local_80;
      lVar7 = lVar7 + lStack_78;
      lVar5 = lVar5 + local_50;
      param_1[6] = lVar5;
      lVar8 = lVar8 + lStack_70;
      lVar9 = lVar9 + lStack_68;
      lVar10 = lVar10 + local_60;
      lVar11 = lVar11 + lStack_58;
      param_1[1] = lVar7;
      *param_1 = lVar6;
      param_1[3] = lVar9;
      param_1[2] = lVar8;
      param_1[5] = lVar11;
      param_1[4] = lVar10;
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0043ed78  FUN_0043ed78 =====

void FUN_0043ed78(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_98 [12];
  void *local_68;
  void *local_60;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x3d8) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_0043ee54;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_00467db0(param_1);
    plVar2 = *(long **)(param_2 + 0xe0);
    param_1[6] = (*(long *)(param_2 + 0x470) - *(long *)(param_2 + 0x468) >> 4) *
                 -0x5555555555555555;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x70))(local_98);
      *(undefined4 *)(param_1 + 7) = local_98[0];
      if (local_50 != (void *)0x0) {
        local_48 = local_50;
        operator_delete(local_50);
      }
      if (local_68 != (void *)0x0) {
        local_60 = local_68;
        operator_delete(local_68);
      }
    }
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_0043ee54:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 0043ee58  FUN_0043ee58 =====

void FUN_0043ee58(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = (long *)FUN_0043a79c();
  lVar6 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar6 == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/connection.cpp",0x3372,
                   "[SpatialAudio] SetUserPosition: User not found: ",param_2);
    }
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x1da0);
    if (iVar1 == 0) {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/connection.cpp",0x33aa,
                     "[SpatialAudio] SetUserPosition: User ",param_2," has no audio SSRC");
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0xb8);
      if ((lVar6 != 0) && (plVar7 = *(long **)(lVar6 + 0x138), plVar7 != (long *)0x0)) {
        (**(code **)*plVar7)(plVar7);
        FUN_00485b1c(plVar7,iVar1,param_3);
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
      return;
    }
  }
  return;
}


// ===== 0043efa8  FUN_0043efa8 =====

void FUN_0043efa8(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_68;
  long lStack_60;
  code *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  lVar7 = param_1 + 0x788;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004312b4(lVar7);
  if (param_3 != (long *)0x0) {
    plVar8 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0xf0);
  *(long *)(param_1 + 0xe8) = param_2;
  *(long **)(param_1 + 0xf0) = param_3;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
    }
    param_2 = *(long *)(param_1 + 0xe8);
  }
  if (param_2 == 0) {
    uVar5 = 0;
    lVar7 = *(long *)(param_1 + 0xf0);
    plVar8 = *(long **)(param_1 + 0xf8);
joined_r0x0043f0f8:
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,uVar5);
    if (param_3 != (long *)0x0) {
      plVar8 = param_3 + 1;
      do {
        lVar7 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
        FUN_005466cc(param_3);
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_00487934(param_2,param_1 + 0x2e0);
  lVar9 = *(long *)(param_1 + 0xe8);
  lVar6 = lVar9 + 0x130;
  FUN_005467a4(lVar6);
  if (*(char *)(lVar9 + 0x178) != '\0') {
    FUN_007b5a0c(lVar9 + 0x158,param_1,param_1,FUN_004472dc);
    FUN_005467c8(lVar6);
    plVar8 = *(long **)(param_1 + 0x790);
    local_58 = FUN_004472e4;
    local_50 = (undefined8 *)&DAT_001f60e8;
    local_68 = lVar6;
    lStack_60 = param_1;
    if (plVar8 < *(long **)(param_1 + 0x798)) {
      if (plVar8 == (long *)0x0) goto LAB_0043f294;
      plVar8[1] = param_1;
      *plVar8 = lVar6;
      plVar8[2] = (long)FUN_004472e4;
      plVar8[3] = (long)&DAT_001f60e8;
      if (DAT_001f60f0 != 0) {
        local_58 = FUN_0040dec4;
        local_50 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0x790) = plVar8 + 4;
    }
    else {
      FUN_004313e8(lVar7,&local_68);
    }
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68);
    }
    lVar9 = *(long *)(param_1 + 0xe8);
    lVar6 = lVar9 + 0x180;
    FUN_005467a4(lVar6);
    if (*(char *)(lVar9 + 0x1c8) != '\0') {
      FUN_007b5a0c(lVar9 + 0x1a8,param_1,param_1,FUN_00447348);
      FUN_005467c8(lVar6);
      plVar8 = *(long **)(param_1 + 0x790);
      local_58 = FUN_00447380;
      local_50 = (undefined8 *)&DAT_001f6108;
      local_68 = lVar6;
      if (plVar8 < *(long **)(param_1 + 0x798)) {
        if (plVar8 == (long *)0x0) {
LAB_0043f294:
          lStack_60 = param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar8[1] = param_1;
        *plVar8 = lVar6;
        plVar8[2] = (long)FUN_00447380;
        plVar8[3] = (long)&DAT_001f6108;
        if (DAT_001f6110 != 0) {
          local_58 = FUN_0040dec4;
          local_50 = &DAT_001f1910;
        }
        *(long **)(param_1 + 0x790) = plVar8 + 4;
        lStack_60 = param_1;
      }
      else {
        lStack_60 = param_1;
        FUN_004313e8(lVar7,&local_68);
      }
      if ((code *)local_50[1] != (code *)0x0) {
        (*(code *)local_50[1])(local_68);
      }
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
      lVar7 = *(long *)(param_1 + 0xf0);
      plVar8 = *(long **)(param_1 + 0xf8);
      goto joined_r0x0043f0f8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0043f2c0  FUN_0043f2c0 =====

void FUN_0043f2c0(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x168) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x160))(param_1 + 0x150);
  return;
}


// ===== 0043f2e0  FUN_0043f2e0 =====

/* WARNING: Removing unreachable block (ram,0x0043fae0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0043f2e0(long param_1,int param_2,void *param_3,size_t param_4,undefined8 param_5,
                 uint param_6)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *pvVar18;
  char *******pppppppcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  char *******pppppppcVar23;
  ulong uVar24;
  long *plVar25;
  char *******pppppppcVar26;
  ulong uVar27;
  char **ppcVar28;
  ulong uVar29;
  undefined8 *puVar30;
  char **ppcVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  char *******pppppppcVar34;
  char **ppcVar35;
  long lVar36;
  undefined2 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 in_stack_fffffffffffffd60;
  undefined4 uVar40;
  long local_230;
  undefined8 local_228;
  size_t sStack_220;
  char *pcStack_218;
  char *local_210;
  char *******pppppppcStack_208;
  char *local_200;
  char **local_1f8;
  undefined4 local_1f0;
  uint uStack_1ec;
  char local_1d9;
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  long local_1c8;
  undefined8 local_1c0;
  char **local_1b8;
  char *******local_1b0;
  undefined1 *puStack_1a8;
  char **local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  long local_188;
  undefined1 auStack_180 [40];
  undefined1 local_158 [40];
  undefined1 local_130 [40];
  char *local_108;
  undefined8 local_100;
  char **local_f8;
  char **local_f0;
  char **local_e8;
  long local_e0;
  long lStack_d8;
  long local_70;
  
  uVar40 = (undefined4)((ulong)in_stack_fffffffffffffd60 >> 0x20);
  lVar8 = tpidr_el0;
  pppppppcVar34 = (char *******)(ulong)param_6;
  local_70 = *(long *)(lVar8 + 0x28);
  if (*(long **)(param_1 + 0xe0) == (long *)0x0) {
    uVar13 = 0;
    lVar14 = *(long *)(param_1 + 0xd0);
  }
  else {
    uVar13 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x60))();
    lVar14 = *(long *)(param_1 + 0xd0);
  }
  if (lVar14 != 0) {
    FUN_0044780c(lVar14,param_3,param_4);
  }
  if (param_2 == 2) {
    lVar14 = FUN_0062589c();
    puVar30 = *(undefined8 **)(param_1 + 0x470);
    puVar16 = (undefined8 *)(param_1 + 0x468);
    lVar14 = lVar14 * 1000;
    puVar21 = *(undefined8 **)(param_1 + 0x468);
    puVar20 = *(undefined8 **)(param_1 + 0x468);
    do {
      puVar32 = puVar20;
      puVar33 = puVar21;
      if (puVar32 == puVar30) goto LAB_0043f5b0;
      puVar20 = puVar32 + 6;
      lVar22 = puVar32[5];
      puVar21 = puVar30;
    } while ((lVar22 != -0x8000000000000000) &&
            ((lVar22 == 0x7fffffffffffffff || (lVar14 - lVar22 < 0x2dc6c1))));
    puVar33 = puVar32;
    if ((puVar32 != puVar30) && (puVar20 != puVar30)) {
      do {
        lVar22 = puVar20[5];
        if ((lVar22 != -0x8000000000000000) &&
           ((lVar22 == 0x7fffffffffffffff || (lVar14 - lVar22 < 0x2dc6c1)))) {
          if (*(char *)((long)puVar32 + 0x17) < '\0') {
            operator_delete((void *)*puVar32);
          }
          uVar38 = puVar20[1];
          uVar13 = *puVar20;
          puVar32[2] = puVar20[2];
          puVar32[1] = uVar38;
          *puVar32 = uVar13;
          *(undefined1 *)((long)puVar20 + 0x17) = 0;
          uVar38 = puVar20[4];
          uVar13 = puVar20[3];
          *(undefined1 *)puVar20 = 0;
          puVar32[5] = puVar20[5];
          puVar32[4] = uVar38;
          puVar32[3] = uVar13;
          puVar32 = puVar32 + 6;
        }
        puVar20 = puVar20 + 6;
      } while (puVar20 != puVar30);
      puVar21 = *(undefined8 **)(param_1 + 0x470);
      puVar33 = puVar32;
    }
LAB_0043f5b0:
    FUN_0044062c(puVar16,puVar33,puVar21);
    local_1c0 = (char *)(((ulong)local_1c0 >> 0x18 & 0xff) << 0x18);
    local_1b8 = (char **)0x0;
    if (param_4 != 0) {
      ppcVar35 = (char **)0x0;
      bVar6 = false;
      pvVar18 = param_3;
      do {
        lVar22 = (long)((long)param_3 + param_4) - (long)pvVar18;
        uVar17 = FUN_007cd9ac(&local_1c0,pvVar18,lVar22);
        if ((uVar17 & 1) == 0) break;
        iVar12 = FUN_00623870();
        if ((iVar12 == 0) && ((char)local_1c0 == -0x37)) {
          FUN_007cef74(&local_108);
          uVar17 = FUN_007cf150(&local_108,&local_1c0);
          if ((uVar17 & 1) != 0) {
            uVar17 = FUN_0044075c();
            ppcVar31 = local_f8;
            ppcVar28 = local_f0;
            if ((uVar17 & 1) == 0) {
              local_1b0 = (char *******)0x1a2db8;
              puStack_1a8 = (undefined1 *)0x37d0;
              local_1a0 = (char **)local_130;
              FUN_00623bb0(&DAT_001f620c,"../../discord_native_lib/src/media/connection.cpp",0x37d0,
                           "Received RTCP RR with sender ssrc: ",local_100 & 0xffffffff,", blocks: "
                           ,((long)local_f0 - (long)local_f8 >> 2) * 0x6db6db6db6db6db7);
              ppcVar31 = local_f8;
              ppcVar28 = local_f0;
            }
            for (; ppcVar31 != ppcVar28; ppcVar31 = (char **)((long)ppcVar31 + 0x1c)) {
              uVar17 = FUN_0044075c();
              if ((uVar17 & 1) == 0) {
                FUN_00440764(&local_1b0,ppcVar31);
                FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/connection.cpp",
                             0x37f0,"  Block: ",&local_1b0);
                if ((long)local_1a0 < 0) {
                  operator_delete(local_1b0);
                }
              }
            }
          }
          FUN_007cef94(&local_108);
        }
        else {
          iVar12 = FUN_00623870();
          if ((iVar12 == 0) && ((char)local_1c0 == -0x38)) {
            FUN_007d10f0(&local_108);
            uVar17 = FUN_007d12d4(&local_108,&local_1c0);
            if ((uVar17 & 1) != 0) {
              uVar17 = FUN_0044075c();
              lVar36 = local_e0;
              lVar22 = lStack_d8;
              if ((uVar17 & 1) == 0) {
                local_1b0 = (char *******)0x1a2db8;
                puStack_1a8 = (undefined1 *)0x3830;
                local_1a0 = (char **)local_130;
                FUN_00623bb0(&DAT_001f620c,"../../discord_native_lib/src/media/connection.cpp",
                             0x3830,"Received RTCP SR with sender ssrc: ",local_100 & 0xffffffff,
                             ", blocks: ",(lStack_d8 - local_e0 >> 2) * 0x6db6db6db6db6db7);
                lVar36 = local_e0;
                lVar22 = lStack_d8;
              }
              for (; lVar36 != lVar22; lVar36 = lVar36 + 0x1c) {
                uVar17 = FUN_0044075c();
                if ((uVar17 & 1) == 0) {
                  FUN_00440764(&local_1b0,lVar36);
                  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/connection.cpp",
                               0x3850,"  Block: ",&local_1b0);
                  if ((long)local_1a0 < 0) {
                    operator_delete(local_1b0);
                  }
                }
              }
            }
            FUN_007d1118(&local_108);
          }
          else if ((char)local_1c0 == -0x33) {
            if (local_1c0._1_1_ != '\x01') goto LAB_0043fb44;
            FUN_007ce040(&local_108);
            uVar17 = FUN_007ce1d4(&local_108,&local_1c0);
            if ((uVar17 & 1) != 0) {
              uVar17 = FUN_00417e08();
              if ((uVar17 & 1) == 0) {
                FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/connection.cpp",
                             0x39b9,"Received NACK for ssrc: ",local_100._4_4_);
              }
            }
            FUN_007ce060(&local_108);
          }
          else if ((char)local_1c0 == -0x32) {
            if (local_1c0._1_1_ == '\x01') {
              FUN_007ceda8(&local_108);
              uVar17 = FUN_007cedd0(&local_108,&local_1c0);
              if ((uVar17 & 1) != 0) {
                uVar17 = FUN_00417e08();
                if ((uVar17 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f621a,"../../discord_native_lib/src/media/connection.cpp",
                               0x3979,"Received PLI for ssrc: ",local_100._4_4_," from ",
                               local_100 & 0xffffffff);
                }
              }
              FUN_007cedbc(&local_108);
            }
            else {
              if (local_1c0._1_1_ != '\x0f') goto LAB_0043fb44;
              FUN_007cf824(&local_108);
              uVar17 = FUN_007cf9bc(&local_108,&local_1c0);
              ppcVar28 = local_e8;
              if ((uVar17 & 1) != 0) {
                local_1d8 = (undefined1  [8])0x0;
                uStack_1d0 = (char **)0x0;
                local_1c8 = 0;
                ppcVar31 = local_f0;
                if (!bVar6 || (long)ppcVar35 < (long)local_f8) {
                  bVar6 = true;
                  ppcVar35 = local_f8;
                }
                for (; ppcVar31 != ppcVar28; ppcVar31 = (char **)((long)ppcVar31 + 4)) {
                  FUN_0054923c(local_130,*(undefined4 *)ppcVar31);
                  plVar25 = (long *)FUN_00547994(local_130,0,&DAT_001d5e07,1);
                  puStack_1a8 = (undefined1 *)plVar25[1];
                  local_1b0 = (char *******)*plVar25;
                  local_1a0 = (char **)plVar25[2];
                  plVar25[1] = 0;
                  plVar25[2] = 0;
                  *plVar25 = 0;
                  puVar3 = puStack_1a8;
                  pppppppcVar34 = local_1b0;
                  if (-1 < (long)local_1a0) {
                    puVar3 = (undefined1 *)((ulong)local_1a0 >> 0x38);
                    pppppppcVar34 = (char *******)&local_1b0;
                  }
                  FUN_00547cac(local_1d8,pppppppcVar34,puVar3);
                  if ((long)local_1a0 < 0) {
                    operator_delete(local_1b0);
                  }
                }
                uVar17 = FUN_00417e08();
                if ((uVar17 & 1) == 0) {
                  local_1b0 = (char *******)0x1a2db8;
                  puStack_1a8 = (undefined1 *)0x38d9;
                  local_1a0 = &local_200;
                  auVar39 = FUN_0048952c(*(undefined4 *)(param_1 + 0x500));
                  local_130._0_8_ = local_158;
                  local_130._8_8_ = &local_1b0;
                  local_158._0_16_ = auVar39;
                  FUN_00623bb0(&DAT_001f6212,local_1b0,puStack_1a8,local_158,
                               "Received REMB for ssrcs:",local_1d8,&DAT_001c4dc3,local_f8," [bps]")
                  ;
                }
                if (*(char *)(*(long *)(param_1 + 0x778) + 0x10) == '\0') {
                  FUN_004df134(&local_1b0,6);
                  ppcVar31 = local_e8;
                  for (ppcVar28 = local_f0; ppcVar28 != ppcVar31;
                      ppcVar28 = (char **)((long)ppcVar28 + 4)) {
                    FUN_004df1ec(local_130,*(undefined4 *)ppcVar28);
                    FUN_004e1528(&local_1b0,local_130);
                    FUN_004df880(local_130);
                  }
                  FUN_004df134(local_130,7);
                  local_158._0_8_ = "ssrcs";
                  uVar13 = FUN_004e148c(local_130,local_158);
                  FUN_004df948(uVar13,&local_1b0);
                  FUN_004df230(local_158,local_f8);
                  local_200 = "bitrate";
                  uVar13 = FUN_004e148c(local_130,&local_200);
                  FUN_004dfa04(uVar13,local_158);
                  FUN_004df880(local_158);
                  local_1d9 = '\x04';
                  if (&local_1f0 < &UNK_00197496 &&
                      &UNK_00197495 < (undefined *)((ulong)&local_1f0 | 4)) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                               ,0xec,"__s2 < __s1 || __s2 >= __s1+__n",
                               "char_traits::copy overlapped range");
                  }
                  uStack_1ec = uStack_1ec & 0xffffff00;
                  local_1f0 = 0x626d6572;
                  FUN_004df5d8(auStack_180,local_130);
                  (**(code **)(param_1 + 0x770))(param_1 + 0x760,&local_1f0,auStack_180);
                  FUN_004df880(auStack_180);
                  if (local_1d9 < '\0') {
                    operator_delete((void *)CONCAT44(uStack_1ec,local_1f0));
                  }
                  FUN_004df880(local_130);
                  FUN_004df880(&local_1b0);
                }
                if (local_1c8 < 0) {
                  operator_delete((void *)local_1d8);
                }
              }
              FUN_007cf840(&local_108);
            }
          }
          else {
LAB_0043fb44:
            iVar12 = FUN_00623870();
            if ((iVar12 < 1) && ((char)local_1c0 == -0x33)) {
              if (local_1c0._1_1_ == '\x0f') {
                FUN_007d1f70(&local_108);
                uVar17 = FUN_007d2be0(&local_108,&local_1c0);
                if ((uVar17 & 1) != 0) {
                  uVar17 = FUN_0044075c();
                  if ((uVar17 & 1) == 0) {
                    local_200 = (char *)(local_100 >> 0x20);
                    pppppppcStack_208 = (char *******)&local_1b0;
                    local_1b0 = (char *******)0x1a2db8;
                    puStack_1a8 = (undefined1 *)0x39f8;
                    local_1a0 = &pcStack_218;
                    local_210 = "Received transport feedback for ssrc: ";
                    local_1f8 = &local_210;
                    uStack_1d0 = &local_200;
                    local_1d8 = (undefined1  [8])0x1d01d0;
                    uVar11 = FUN_007d2b14(&local_108);
                    local_130._8_8_ = local_158;
                    local_158._8_8_ = local_1d8;
                    local_158._0_8_ = ZEXT28(uVar11);
                    local_130._0_8_ = ", packets: ";
                    puVar20 = *(undefined8 **)(uStack_1d0[1] + 8);
                    FUN_00623bb0(&DAT_001f6224,*puVar20,puVar20[1],*(undefined8 *)uStack_1d0[1],
                                 *(undefined4 *)uStack_1d0,local_1d8,uVar11,", packets: ",
                                 (ulong)local_f8 >> 0x10 & 0xffff,", size: ",lVar22," [bytes]");
                  }
                }
                FUN_007d2198(&local_108);
              }
            }
            else if ((char)local_1c0 == -0x34) {
              FUN_007cd680(&local_108);
              uVar15 = FUN_007cd718(&local_108,&local_1c0);
              lVar22 = local_e0;
              uVar17 = local_100;
              if ((uVar15 & 1) != 0) {
                uVar9 = (uint)local_100;
                if ((int)local_f8 == 0x58534944) {
                  uVar17 = *(ulong *)(param_1 + 0x110);
                  uVar15 = local_100 & 0xffffffff;
                  if (uVar17 != 0) {
                    uVar13 = NEON_cnt(uVar17,1);
                    uVar37 = NEON_uaddlv(uVar13,1);
                    uVar29 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar37) & 0xffffffff;
                    if (uVar29 < 2) {
                      uVar24 = (ulong)((int)uVar17 - 1U & (uint)local_100);
                    }
                    else {
                      uVar24 = uVar15;
                      if (uVar17 <= uVar15) {
                        uVar24 = 0;
                        if (uVar17 != 0) {
                          uVar24 = uVar15 / uVar17;
                        }
                        uVar24 = uVar15 - uVar24 * uVar17;
                      }
                    }
                    plVar25 = *(long **)(*(long *)(param_1 + 0x108) + uVar24 * 8);
                    if ((plVar25 != (long *)0x0) &&
                       (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
                      do {
                        uVar27 = plVar25[1];
                        if (uVar27 == uVar15) {
                          if (*(uint *)(plVar25 + 2) == (uint)local_100) {
                            lVar22 = plVar25[3];
                            lVar36 = plVar25[4];
                            if (lVar36 != 0) {
                              plVar25 = (long *)(lVar36 + 0x10);
                              do {
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                                if (bVar5) {
                                  *plVar25 = *plVar25 + 1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                            }
                            goto LAB_0043ff90;
                          }
                        }
                        else {
                          if (uVar29 < 2) {
                            uVar27 = uVar27 & uVar17 - 1;
                          }
                          else if (uVar17 <= uVar27) {
                            uVar7 = 0;
                            if (uVar17 != 0) {
                              uVar7 = uVar27 / uVar17;
                            }
                            uVar27 = uVar27 - uVar7 * uVar17;
                          }
                          if (uVar27 != uVar24) break;
                        }
                        plVar25 = (long *)*plVar25;
                      } while (plVar25 != (long *)0x0);
                    }
                  }
                  lVar36 = 0;
                  lVar22 = 0;
LAB_0043ff90:
                  uVar17 = FUN_00417e08();
                  if ((uVar17 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f6220,"../../discord_native_lib/src/media/connection.cpp",
                                 0x3b79,"Received Video Reset Request: ssrc ",uVar15);
                  }
                  if (lVar36 != 0) {
                    plVar25 = (long *)FUN_005466fc(lVar36);
                    if ((plVar25 == (long *)0x0) || (lVar22 == 0)) {
                      if (plVar25 != (long *)0x0) goto LAB_0043ffe0;
                    }
                    else {
                      FUN_0047d28c(lVar22);
LAB_0043ffe0:
                      plVar1 = plVar25 + 1;
                      do {
                        lVar22 = *plVar1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar5) {
                          *plVar1 = lVar22 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar22 == 0) {
                        (**(code **)(*plVar25 + 0x10))(plVar25);
                        FUN_005466cc(plVar25);
                      }
                    }
                    FUN_005466cc(lVar36);
                  }
                }
                else if ((int)local_f8 == 0x31534944) {
                  uVar17 = FUN_00417e08();
                  if ((uVar17 & 1) == 0) {
                    local_1b0 = (char *******)0x1a2db8;
                    puStack_1a8 = (undefined1 *)0x3b39;
                    local_1a0 = &local_200;
                    auVar39 = FUN_0048952c(*(undefined4 *)(param_1 + 0x500));
                    local_158._8_8_ = &local_1b0;
                    local_130._8_8_ = local_158;
                    local_158._0_8_ = local_1d8;
                    local_130._0_8_ = "Received inbound estimate: ";
                    _local_1d8 = auVar39;
                    uVar13 = FUN_005106ec((ulong)*(byte *)(lVar22 + 8) << 0x10 |
                                          (ulong)*(byte *)(lVar22 + 9) << 8 |
                                          (ulong)*(byte *)(lVar22 + 10));
                    FUN_00623bb0((double)((uint)*(byte *)(lVar22 + 0xb) * 100) * 0.00390625,
                                 &DAT_001f6236,**(undefined8 **)(local_130._8_8_ + 8),
                                 (*(undefined8 **)(local_130._8_8_ + 8))[1],
                                 *(undefined8 *)local_130._8_8_,local_130._0_8_,uVar13,
                                 " [bps], loss rate: ",&DAT_0019cad3);
                  }
                  uVar13 = FUN_005106ec((ulong)*(byte *)(lVar22 + 8) << 0x10 |
                                        (ulong)*(byte *)(lVar22 + 9) << 8 |
                                        (ulong)*(byte *)(lVar22 + 10));
                  *(undefined8 *)(param_1 + 0x498) = uVar13;
                }
                else if ((int)local_f8 == 0x30534944) {
                  bVar10 = local_100._4_1_;
                  uVar29 = (ulong)local_100._4_1_;
                  uVar15 = FUN_00417e08();
                  if ((uVar15 & 1) == 0) {
                    local_1b0 = (char *******)0x1a2db8;
                    puStack_1a8 = (undefined1 *)0x3a61;
                    local_1a0 = (char **)local_158;
                    auVar39 = FUN_0048952c(*(undefined4 *)(param_1 + 0x500));
                    local_130._0_16_ = auVar39;
                    FUN_00623bb0(&DAT_001f622f,local_1b0,puStack_1a8,local_130,
                                 "Received receiver count for ssrc: ",uVar17 & 0xffffffff,
                                 &DAT_001c4dc3,uVar29);
                  }
                  FUN_00469e04(*(undefined8 *)(param_1 + 0x3d8),uVar17 & 0xffffffff,bVar10 != 0);
                  puVar30 = *(undefined8 **)(param_1 + 0x470);
                  puVar21 = *(undefined8 **)(param_1 + 0x468);
                  puVar20 = *(undefined8 **)(param_1 + 0x468);
                  do {
                    puVar32 = puVar20;
                    puVar33 = puVar21;
                    if (puVar32 == puVar30) goto LAB_00440024;
                    puVar20 = puVar32 + 6;
                    puVar21 = puVar30;
                  } while (*(uint *)((long)puVar32 + 0x24) != uVar9);
                  puVar21 = puVar32;
                  puVar33 = puVar30;
                  if ((puVar32 != puVar30) && (puVar20 != puVar30)) {
                    do {
                      if (*(uint *)((long)puVar20 + 0x24) != uVar9) {
                        if (*(char *)((long)puVar32 + 0x17) < '\0') {
                          operator_delete((void *)*puVar32);
                        }
                        uVar38 = puVar20[1];
                        uVar13 = *puVar20;
                        puVar32[2] = puVar20[2];
                        puVar32[1] = uVar38;
                        *puVar32 = uVar13;
                        *(undefined1 *)((long)puVar20 + 0x17) = 0;
                        uVar38 = puVar20[4];
                        uVar13 = puVar20[3];
                        *(undefined1 *)puVar20 = 0;
                        puVar32[5] = puVar20[5];
                        puVar32[4] = uVar38;
                        puVar32[3] = uVar13;
                        puVar32 = puVar32 + 6;
                      }
                      puVar20 = puVar20 + 6;
                    } while (puVar20 != puVar30);
                    puVar21 = puVar32;
                    puVar33 = *(undefined8 **)(param_1 + 0x470);
                  }
LAB_00440024:
                  FUN_0044062c(puVar16,puVar21,puVar33);
                  if (bVar10 != 0) {
                    lVar22 = 0;
                    do {
                      puVar2 = (ulong *)(local_e0 + lVar22);
                      uVar17 = (*puVar2 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar2 & 0xff00ff00ff00ff) << 8;
                      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar17 & 0xffff0000ffff) << 0x10;
                      FUN_00549320(&local_1b0,uVar17 >> 0x20 | uVar17 << 0x20);
                      local_198 = FUN_005106ec((ulong)(byte)puVar2[1] << 0x10 |
                                               (ulong)*(byte *)((long)puVar2 + 9) << 8 |
                                               (ulong)*(byte *)((long)puVar2 + 10));
                      puVar20 = *(undefined8 **)(param_1 + 0x470);
                      uStack_18c = uVar9;
                      uStack_190 = CONCAT31(uStack_190._1_3_,*(undefined1 *)((long)puVar2 + 0xb));
                      local_188 = lVar14;
                      if (puVar20 < *(undefined8 **)(param_1 + 0x478)) {
                        if (puVar20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                          std::__Cr::__libcpp_verbose_abort
                                    ("%s:%d: assertion %s failed: %s",
                                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                                     ,0x23,"__location != nullptr",
                                     "null pointer given to construct_at");
                        }
                        puVar20[2] = local_1a0;
                        puVar20[1] = puStack_1a8;
                        *puVar20 = local_1b0;
                        puStack_1a8 = (undefined1 *)0x0;
                        local_1a0 = (char **)0x0;
                        local_1b0 = (char *******)0x0;
                        puVar21 = puVar20 + 6;
                        puVar20[4] = CONCAT44(uVar9,uStack_190);
                        puVar20[3] = local_198;
                        puVar20[5] = lVar14;
                        *(undefined8 **)(param_1 + 0x470) = puVar21;
                      }
                      else {
                        FUN_00442b88(puVar16,&local_1b0);
                        puVar21 = *(undefined8 **)(param_1 + 0x470);
                      }
                      if ((undefined8 *)*puVar16 == puVar21) {
                    /* WARNING: Subroutine does not return */
                        std::__Cr::__libcpp_verbose_abort
                                  ("%s:%d: assertion %s failed: %s",
                                   "../../discord_common/native/third_party/llvm/libcxx/include/vector"
                                   ,0x22a,"!empty()","back() called on an empty vector");
                      }
                      if ((long)local_1a0 < 0) {
                        operator_delete(local_1b0);
                      }
                      lVar22 = lVar22 + 0xc;
                    } while (uVar29 * 0xc - lVar22 != 0);
                  }
                }
              }
              FUN_007cd6a8(&local_108);
            }
          }
        }
        pvVar18 = (void *)((long)local_1b8 +
                          ((ulong)local_1c0 >> 0x10 & 0xff) + ((ulong)local_1c0 >> 0x20));
      } while (pvVar18 != (void *)((long)param_3 + param_4));
      if (bVar6) {
        *(char ***)(param_1 + 0x490) = ppcVar35;
      }
    }
    if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
      puVar16 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xe0) + 0x60))();
      FUN_007b54d0(&local_230,param_4,param_4);
      if (local_230 != 0) {
        memcpy(*(void **)(local_230 + 0x10),param_3,param_4);
        local_228 = 0;
        sStack_220 = param_4;
      }
      (**(code **)*puVar16)(puVar16,&local_230);
      FUN_007b5554(&local_230);
    }
  }
  else if (param_2 == 1) {
    pppppppcVar19 = *(char ********)(param_1 + 0x110);
    if (pppppppcVar19 != (char *******)0x0) {
      uVar38 = NEON_cnt(pppppppcVar19,1);
      uVar37 = NEON_uaddlv(uVar38,1);
      uVar17 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
      if (uVar17 < 2) {
        pppppppcVar23 = (char *******)(ulong)((int)pppppppcVar19 - 1U & param_6);
      }
      else {
        pppppppcVar23 = pppppppcVar34;
        if (pppppppcVar19 <= pppppppcVar34) {
          uVar15 = 0;
          if (pppppppcVar19 != (char *******)0x0) {
            uVar15 = (ulong)pppppppcVar34 / (ulong)pppppppcVar19;
          }
          pppppppcVar23 = (char *******)((long)pppppppcVar34 - uVar15 * (long)pppppppcVar19);
        }
      }
      plVar25 = *(long **)(*(long *)(param_1 + 0x108) + (long)pppppppcVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
LAB_0043f560:
        pppppppcVar26 = (char *******)plVar25[1];
        if (pppppppcVar26 == pppppppcVar34) {
          if (*(uint *)(plVar25 + 2) != param_6) goto LAB_0043f558;
          lVar14 = plVar25[4];
          if (lVar14 != 0) {
            lVar22 = plVar25[3];
            plVar25 = (long *)(lVar14 + 0x10);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = *plVar25 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar25 = (long *)FUN_005466fc(lVar14);
            bVar6 = false;
            if ((plVar25 == (long *)0x0) || (lVar22 == 0)) goto LAB_00440250;
            if (*(uint *)(lVar22 + 0x1da0) == param_6) {
              FUN_0047e57c(lVar22,param_3,param_4,param_5,
                           *(undefined1 *)(*(long *)(param_1 + 0x3d8) + 0x1d79),uVar13);
LAB_004404a4:
              bVar6 = false;
            }
            else {
              uVar17 = FUN_0047f90c(lVar22,pppppppcVar34);
              if ((uVar17 & 1) != 0) {
                FUN_0047e750(lVar22,param_3,param_4,param_5,uVar13);
                goto LAB_004404a4;
              }
              *(int *)(param_1 + 0x4b8) = *(int *)(param_1 + 0x4b8) + 1;
              FUN_00440530(param_1,param_3,param_4,param_5);
              iVar12 = *(int *)(param_1 + 0x4b8) + -1;
              if (0x418937 < ((uint)(iVar12 * 0x26e978d5) >> 3 | iVar12 * -0x60000000))
              goto LAB_004404a4;
              uVar17 = FUN_00417e08();
              if ((uVar17 & 1) == 0) {
                local_f8 = &local_200;
                local_108 = "../../discord_native_lib/src/media/connection.cpp";
                local_100 = 0x36b1;
                local_1b8 = &local_108;
                local_1d8 = (undefined1  [8])(lVar22 + 0x20);
                uStack_1d0 = (char **)&local_1c0;
                local_1c0 = "RTP packet not routed to user ";
                local_158._8_8_ = local_1d8;
                puStack_1a8 = local_130;
                local_158._0_8_ = " with ssrc: ";
                local_130._8_8_ = local_158;
                local_1b0 = (char *******)0x199dbf;
                local_130._0_8_ = pppppppcVar34;
                FUN_00623bb0(&DAT_001f61f8,"../../discord_native_lib/src/media/connection.cpp",
                             0x36b1);
              }
              bVar6 = false;
            }
            goto LAB_00440310;
          }
        }
        else {
          if (uVar17 < 2) {
            pppppppcVar26 = (char *******)((ulong)pppppppcVar26 & (long)pppppppcVar19 - 1U);
          }
          else if (pppppppcVar19 <= pppppppcVar26) {
            uVar15 = 0;
            if (pppppppcVar19 != (char *******)0x0) {
              uVar15 = (ulong)pppppppcVar26 / (ulong)pppppppcVar19;
            }
            pppppppcVar26 = (char *******)((long)pppppppcVar26 - uVar15 * (long)pppppppcVar19);
          }
          if (pppppppcVar26 == pppppppcVar23) goto LAB_0043f558;
        }
      }
    }
LAB_00440244:
    plVar25 = (long *)0x0;
    lVar14 = 0;
    bVar6 = true;
LAB_00440250:
    *(int *)(param_1 + 0x4b8) = *(int *)(param_1 + 0x4b8) + 1;
    FUN_00440530(param_1,param_3,param_4,param_5);
    iVar12 = *(int *)(param_1 + 0x4b8) + -1;
    if ((((uint)(iVar12 * 0x26e978d5) >> 3 | iVar12 * -0x60000000) < 0x418938) &&
       (uVar17 = FUN_00417e08(), (uVar17 & 1) == 0)) {
      local_f8 = (char **)local_158;
      local_108 = "../../discord_native_lib/src/media/connection.cpp";
      local_100 = 0x3701;
      local_130._8_8_ = &local_108;
      puStack_1a8 = local_130;
      local_130._0_8_ = "RTP packet not routed with ssrc: ";
      local_1b0 = pppppppcVar34;
      FUN_00623bb0(&DAT_001f6203,"../../discord_native_lib/src/media/connection.cpp",0x3701,
                   "RTP packet not routed with ssrc: ",pppppppcVar34,", size: ",param_4,
                   " (total routing failures: ",CONCAT44(uVar40,*(undefined4 *)(param_1 + 0x4b8)),
                   &DAT_001ca519);
    }
    if (plVar25 != (long *)0x0) {
LAB_00440310:
      plVar1 = plVar25 + 1;
      do {
        lVar22 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        FUN_005466cc(plVar25);
      }
    }
    if (!bVar6) {
      FUN_005466cc(lVar14);
    }
  }
  else {
    *(int *)(param_1 + 0x4b8) = *(int *)(param_1 + 0x4b8) + 1;
    uVar17 = FUN_00417e08();
    if ((uVar17 & 1) == 0) {
      if (*(long *)(lVar8 + 0x28) == local_70) {
        FUN_00623bb0(&DAT_001f620c,"../../discord_native_lib/src/media/connection.cpp",0x3c01,
                     "Packet not routed with ssrc: ",pppppppcVar34,", size: ",param_4);
        return;
      }
      goto LAB_0044052c;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
LAB_0044052c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0043f558:
  plVar25 = (long *)*plVar25;
  if (plVar25 == (long *)0x0) goto LAB_00440244;
  goto LAB_0043f560;
}


// ===== 00440530  FUN_00440530 =====

void FUN_00440530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_190 [16];
  code *local_180;
  code *pcStack_178;
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(param_1 + 0xe0) != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0xe0) + 0x60))(), plVar2 != (long *)0x0))
  {
    uVar3 = FUN_004846b8();
    FUN_007dc060(auStack_d8,uVar3,param_4);
    FUN_007da040(auStack_d8,param_2,param_3);
    FUN_007dc0a0(auStack_168,auStack_d8);
    local_180 = FUN_004473ec;
    pcStack_178 = FUN_004473e4;
    (**(code **)(*plVar2 + 8))(plVar2,4,auStack_168,auStack_190);
    (*local_180)(0,auStack_190,auStack_190);
    FUN_007dc1b4(auStack_168);
    FUN_007dc1b4(auStack_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044062c  FUN_0044062c =====

/* WARNING: Removing unreachable block (ram,0x00440728) */

undefined8 * FUN_0044062c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
               "__first <= __last","vector::erase(first, last) called with invalid range");
  }
  if (param_2 == param_3) {
    return param_2;
  }
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)((long)param_2 + ((long)param_3 - (long)param_2));
  puVar4 = param_2;
  if (puVar2 == puVar5) {
    if (puVar2 == param_2) goto LAB_004406f4;
  }
  else {
    lVar1 = (long)param_3 - (long)param_2 >> 4;
    do {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        operator_delete((void *)*puVar4);
      }
      puVar2 = puVar4 + lVar1 * 2;
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      uVar9 = puVar2[4];
      uVar8 = puVar2[3];
      uVar3 = puVar2[5];
      puVar4[2] = puVar2[2];
      puVar4[1] = uVar7;
      *puVar4 = uVar6;
      puVar4[4] = uVar9;
      puVar4[3] = uVar8;
      puVar4[5] = uVar3;
      puVar4 = puVar4 + 6;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
      *(undefined1 *)puVar2 = 0;
    } while (puVar4 + lVar1 * 2 != puVar5);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == puVar4) goto LAB_004406f4;
  }
  do {
    puVar2 = puVar2 + -6;
  } while (puVar2 != puVar4);
LAB_004406f4:
  *(undefined8 **)(param_1 + 8) = puVar4;
  return param_2;
}


// ===== 0044075c  FUN_0044075c =====

void FUN_0044075c(void)

{
  FUN_00623b7c(0);
  return;
}


// ===== 00440764  FUN_00440764 =====

/* WARNING: Removing unreachable block (ram,0x00440be8) */
/* WARNING: Removing unreachable block (ram,0x00440bc8) */
/* WARNING: Removing unreachable block (ram,0x00440bb8) */
/* WARNING: Removing unreachable block (ram,0x00440b98) */
/* WARNING: Removing unreachable block (ram,0x00440b88) */
/* WARNING: Removing unreachable block (ram,0x00440b68) */
/* WARNING: Removing unreachable block (ram,0x00440b58) */
/* WARNING: Removing unreachable block (ram,0x00440bf8) */

void FUN_00440764(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_268;
  ulong uStack_260;
  byte local_251;
  undefined8 ***local_250;
  ulong uStack_248;
  byte local_239;
  undefined8 ***local_238;
  ulong uStack_230;
  byte local_221;
  undefined8 ***local_220;
  ulong uStack_218;
  byte local_209;
  undefined8 ***local_208;
  ulong uStack_200;
  byte local_1f1;
  undefined8 ***local_1f0;
  ulong uStack_1e8;
  byte local_1d9;
  void *local_1d8 [2];
  char local_1c1;
  void *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  void *local_1a0;
  undefined8 uStack_198;
  long local_190;
  void *local_180;
  undefined8 uStack_178;
  long local_170;
  void *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0054923c(local_1d8,*param_2);
  puVar3 = (undefined8 *)FUN_00547994(local_1d8,0,"source ssrc: ",0xd);
  uStack_1b8 = puVar3[1];
  local_1c0 = (void *)*puVar3;
  local_1b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_1c0,", fraction_lost: ",0x11);
  uStack_198 = puVar3[1];
  local_1a0 = (void *)*puVar3;
  local_190 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_005490bc(&local_1f0,*(undefined1 *)(param_2 + 1));
  ppppuVar2 = (undefined8 ****)local_1f0;
  if (-1 < (char)local_1d9) {
    uStack_1e8 = (ulong)local_1d9;
    ppppuVar2 = &local_1f0;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_1a0,ppppuVar2,uStack_1e8);
  uStack_178 = puVar3[1];
  local_180 = (void *)*puVar3;
  local_170 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_180,", cumulative_lost: ",0x13);
  uStack_158 = puVar3[1];
  local_160 = (void *)*puVar3;
  local_150 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_005490bc(&local_208,param_2[2]);
  ppppuVar2 = (undefined8 ****)local_208;
  if (-1 < (char)local_1f1) {
    uStack_200 = (ulong)local_1f1;
    ppppuVar2 = &local_208;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_160,ppppuVar2,uStack_200);
  uStack_138 = puVar3[1];
  local_140 = *puVar3;
  local_130 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_140,", jitter: ",10);
  uStack_118 = puVar3[1];
  local_120 = *puVar3;
  local_110 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_0054923c(&local_220,param_2[4]);
  ppppuVar2 = (undefined8 ****)local_220;
  if (-1 < (char)local_209) {
    uStack_218 = (ulong)local_209;
    ppppuVar2 = &local_220;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_120,ppppuVar2,uStack_218);
  uStack_f8 = puVar3[1];
  local_100 = *puVar3;
  local_f0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_100,", extended_high_seq_num: ",0x19);
  uStack_d8 = puVar3[1];
  local_e0 = *puVar3;
  local_d0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_0054923c(&local_238,param_2[3]);
  ppppuVar2 = (undefined8 ****)local_238;
  if (-1 < (char)local_221) {
    uStack_230 = (ulong)local_221;
    ppppuVar2 = &local_238;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_e0,ppppuVar2,uStack_230);
  uStack_b8 = puVar3[1];
  local_c0 = *puVar3;
  local_b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_c0,", last_sr: ",0xb);
  uStack_98 = puVar3[1];
  local_a0 = *puVar3;
  local_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_0054923c(&local_250,param_2[5]);
  ppppuVar2 = (undefined8 ****)local_250;
  if (-1 < (char)local_239) {
    uStack_248 = (ulong)local_239;
    ppppuVar2 = &local_250;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_a0,ppppuVar2,uStack_248);
  uStack_78 = puVar3[1];
  local_80 = *puVar3;
  local_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_80,", delay_since_last_sr: ",0x17);
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  local_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_0054923c(&local_268,param_2[6]);
  ppppuVar2 = (undefined8 ****)local_268;
  if (-1 < (char)local_251) {
    uStack_260 = (ulong)local_251;
    ppppuVar2 = &local_268;
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_60,ppppuVar2,uStack_260);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if ((char)local_251 < '\0') {
    operator_delete(local_268);
  }
  if ((char)local_239 < '\0') {
    operator_delete(local_250);
  }
  if ((char)local_221 < '\0') {
    operator_delete(local_238);
  }
  if ((char)local_209 < '\0') {
    operator_delete(local_220);
  }
  if ((char)local_1f1 < '\0') {
    operator_delete(local_208);
  }
  if (local_150 < 0) {
    operator_delete(local_160);
  }
  if (local_170 < 0) {
    operator_delete(local_180);
  }
  if ((char)local_1d9 < '\0') {
    operator_delete(local_1f0);
  }
  if (local_190 < 0) {
    operator_delete(local_1a0);
  }
  if (local_1b0 < 0) {
    operator_delete(local_1c0);
  }
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00440c78  FUN_00440c78 =====

void FUN_00440c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00411268(param_1 + 0x4a0,param_3);
  return;
}


// ===== 00440c84  FUN_00440c84 =====

/* WARNING: Removing unreachable block (ram,0x00440ee0) */
/* WARNING: Removing unreachable block (ram,0x00440f00) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00440c84(long param_1,undefined8 param_2,char *******param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  char ******__n;
  char ******ppppppcVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 *******__dest;
  char *******pppppppcVar7;
  char *__s2;
  char ******ppppppcVar8;
  undefined8 *******__src;
  char *******__src_00;
  char ******ppppppcVar9;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined8 *******local_a0;
  char ******ppppppcStack_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  char *******local_70;
  char ******ppppppcStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)((long)param_3 + 0x17);
  ppppppcVar8 = (char ******)(ulong)bVar3;
  bVar4 = *(byte *)(param_1 + 0x4b7);
  ppppppcVar9 = param_3[1];
  __n = ppppppcVar9;
  if (-1 < (char)bVar3) {
    __n = ppppppcVar8;
  }
  ppppppcVar2 = *(char *******)(param_1 + 0x4a8);
  if (-1 < (char)bVar4) {
    ppppppcVar2 = (char ******)(ulong)bVar4;
  }
  if (__n == ppppppcVar2) {
    __src_00 = (char *******)*param_3;
    pppppppcVar7 = __src_00;
    if (-1 < (char)bVar3) {
      pppppppcVar7 = param_3;
    }
    __s2 = *(char **)(param_1 + 0x4a0);
    if (-1 < (char)bVar4) {
      __s2 = (char *)(param_1 + 0x4a0);
    }
    if ((char)bVar3 < '\0') {
      if ((__n != (char ******)0x0) && (iVar6 = memcmp(pppppppcVar7,__s2,(size_t)__n), iVar6 != 0))
      goto LAB_00440d78;
      if (ppppppcVar9 < (char ******)0x17) {
        pppppppcVar7 = (char *******)&local_70;
        local_60 = (char ******)CONCAT17((char)ppppppcVar9,(undefined7)local_60);
      }
      else {
        if ((char ******)0x7fffffffffffffef < ppppppcVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = ((ulong)ppppppcVar9 | 0xf) + 1;
        pppppppcVar7 = (char *******)operator_new(uVar1);
        local_60 = (char ******)(uVar1 | 0x8000000000000000);
        local_70 = pppppppcVar7;
        ppppppcStack_68 = ppppppcVar9;
      }
      if ((pppppppcVar7 <= __src_00) &&
         (__src_00 < (char *******)((long)pppppppcVar7 + (long)ppppppcVar9 + 1U)))
      goto LAB_00440f38;
      memmove(pppppppcVar7,__src_00,(long)ppppppcVar9 + 1U);
    }
    else {
      pppppppcVar7 = param_3;
      if (bVar3 != 0) {
        do {
          if (*(char *)pppppppcVar7 != *__s2) goto LAB_00440d54;
          ppppppcVar8 = (char ******)((long)ppppppcVar8 + -1);
          __s2 = __s2 + 1;
          pppppppcVar7 = (char *******)((long)pppppppcVar7 + 1);
        } while (ppppppcVar8 != (char ******)0x0);
      }
      ppppppcStack_68 = param_3[1];
      local_70 = (char *******)*param_3;
      local_60 = param_3[2];
    }
    local_88 = (void *)0x0;
    local_80 = (void *)0x0;
    local_78 = 0;
    FUN_00436b20(param_1,&local_70,param_4,param_5,param_6,&local_88);
    if (local_88 != (void *)0x0) {
      for (; local_80 != local_88; local_80 = (void *)((long)local_80 + -0x48)) {
      }
      local_80 = local_88;
      operator_delete(local_88);
    }
  }
  else {
LAB_00440d54:
    if ((char)bVar3 < '\0') {
LAB_00440d78:
      __src = (undefined8 *******)*param_3;
      if (ppppppcVar9 < (char ******)0x17) {
        __dest = &local_a0;
        local_90 = (char ******)CONCAT17((char)ppppppcVar9,(undefined7)local_90);
      }
      else {
        if ((char ******)0x7fffffffffffffef < ppppppcVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = ((ulong)ppppppcVar9 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar1);
        local_90 = (char ******)(uVar1 | 0x8000000000000000);
        local_a0 = __dest;
        ppppppcStack_98 = ppppppcVar9;
      }
      if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + (long)ppppppcVar9 + 1U))
         ) {
LAB_00440f38:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,(long)ppppppcVar9 + 1U);
    }
    else {
      ppppppcStack_98 = param_3[1];
      local_a0 = (undefined8 *******)*param_3;
      local_90 = param_3[2];
    }
    local_b8 = (undefined4 *)operator_new(4);
    local_b0 = local_b8 + 1;
    *local_b8 = param_5;
    puStack_a8 = local_b0;
    FUN_004387f8(param_1,&local_a0,param_4,&local_b8,0);
    if (local_b8 != (undefined4 *)0x0) {
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00440f6c  FUN_00440f6c =====

void FUN_00440f6c(void)

{
  return;
}


// ===== 00440f70  FUN_00440f70 =====

void FUN_00440f70(void)

{
  return;
}


// ===== 00440f74  FUN_00440f74 =====

void FUN_00440f74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  uVar6 = FUN_005105e4(param_3,param_4);
  bVar5 = (uVar6 & 1) == 0;
  lVar1 = 4;
  if (bVar5) {
    lVar1 = 8;
  }
  lVar2 = 5;
  if (bVar5) {
    lVar2 = 9;
  }
  lVar3 = 6;
  if (bVar5) {
    lVar3 = 10;
  }
  lVar4 = 7;
  if (bVar5) {
    lVar4 = 0xb;
  }
  uVar7 = 1;
  if (!bVar5) {
    uVar7 = 2;
  }
  FUN_0043f2e0(param_1,uVar7,param_3,param_4,param_2,
               (uint)*(byte *)(param_3 + lVar1) << 0x18 | (uint)*(byte *)(param_3 + lVar2) << 0x10 |
               (uint)*(byte *)(param_3 + lVar3) << 8 | (uint)*(byte *)(param_3 + lVar4));
  return;
}


// ===== 0044101c  FUN_0044101c =====

void FUN_0044101c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  switch(uVar3) {
  case 7:
  case 8:
    *(int *)(param_1 + 0x488) = (int)param_2[2];
    break;
  case 0xf:
    local_40 = (undefined1 *)CONCAT17(7,(undefined7)local_40);
    if ((&local_50 < (char **)0x1ef523) && ("Unknown" < (char *)((ulong)&local_50 | 7))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    iVar1 = *(int *)((long)param_2 + 0x14);
    local_50 = (char *)0x6e776f6e6b6e55;
    if (iVar1 == 2) {
      local_40 = (undefined1 *)CONCAT17(7,(undefined7)local_40);
      local_50 = (char *)0x74756f656d6954;
      uVar4 = FUN_00417e08();
    }
    else {
      if (iVar1 == 1) {
        pcVar7 = "InvalidSendReceiveRatio";
        uVar5 = 1;
        uVar6 = 0x17;
      }
      else {
        if (iVar1 != 0) {
          uVar4 = FUN_00417e08();
          goto joined_r0x00441240;
        }
        pcVar7 = "InvalidSendReceiveInterval";
        uVar5 = 4;
        uVar6 = 0x1a;
      }
      FUN_00547540(&local_50,0x16,uVar5,7,0,7,uVar6,pcVar7);
      uVar4 = FUN_00417e08();
    }
joined_r0x00441240:
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f623e,"../../discord_native_lib/src/media/connection.cpp",0x4101,
                   "Bitrate probe failed id: ",(int)param_2[2],", reason: ",&local_50);
    }
    if ((long)local_40 < 0) {
      operator_delete(local_50);
    }
    break;
  case 0x10:
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      local_40 = auStack_58;
      local_50 = "../../discord_native_lib/src/media/connection.cpp";
      uStack_48 = 0x4131;
      FUN_00623bb0(&DAT_001f4ea6,"../../discord_native_lib/src/media/connection.cpp",0x4131,
                   "Bitrate probed id: ",(int)param_2[2],", bitrate: ",
                   *(undefined4 *)((long)param_2 + 0x14)," [bps]");
    }
  }
  (**(code **)(*param_2 + 8))(param_2);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00441274  FUN_00441274 =====

void FUN_00441274(long param_1)

{
  FUN_0044101c(param_1 + -0x18);
  return;
}


// ===== 0044127c  FUN_0044127c =====

undefined1  [16] FUN_0044127c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  FUN_005467a4(param_1 + 0x3b0);
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x3a0);
  if (*(long *)(param_1 + 0x3a8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x3a8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_005467c8(param_1 + 0x3b0);
  return auVar4;
}


// ===== 004412dc  FUN_004412dc =====

undefined8 FUN_004412dc(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 1;
}


// ===== 00441304  FUN_00441304 =====

void FUN_00441304(void)

{
  return;
}


// ===== 00441308  FUN_00441308 =====

undefined8 FUN_00441308(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 1;
}


// ===== 00441330  FUN_00441330 =====

void FUN_00441330(void)

{
  return;
}


// ===== 00441334  FUN_00441334 =====

void FUN_00441334(long *param_1,long param_2)

{
  (**(code **)(*param_1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00441360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}


// ===== 00441364  FUN_00441364 =====

void FUN_00441364(undefined2 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)(param_1 + 4);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar5 = *(undefined8 **)(param_2 + 4);
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 4) = puVar6;
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_1 + 0xc) = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar5) && (puVar5 < (undefined8 *)((long)puVar6 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar6,puVar5,uVar2 + 1);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = uVar9;
    *puVar6 = uVar8;
  }
  puVar5 = (undefined8 *)(param_1 + 0x14);
  *puVar5 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  while( true ) {
    if (puVar6 == (undefined8 *)(param_2 + 0x14)) {
      return;
    }
    FUN_004414e0(param_1 + 0x10,puVar5,puVar6 + 4,puVar6 + 4);
    if (puVar6 == (undefined8 *)0x0) break;
    puVar3 = (undefined8 *)puVar6[1];
    puVar7 = puVar6;
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar7[2];
        bVar4 = (undefined8 *)*puVar6 != puVar7;
        puVar7 = puVar6;
      } while (bVar4);
    }
    else {
      do {
        puVar6 = puVar3;
        puVar3 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 004414e0  FUN_004414e0 =====

undefined8 * FUN_004414e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_004415b8(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x50);
    FUN_00441814(puVar5 + 4,param_4);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 004415b8  FUN_004415b8 =====

long * FUN_004415b8(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
                   )

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    uVar3 = FUN_0041d7a0(param_5,param_2 + 4);
    if ((uVar3 >> 7 & 1) == 0) {
      uVar3 = FUN_0041d7a0(param_2 + 4,param_5);
      if ((uVar3 >> 7 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar6 = param_2 + 1;
      plVar4 = (long *)*plVar6;
      plVar7 = param_2;
      plVar5 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = (long *)*plVar8 != plVar7;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (plVar8 != plVar1) {
        uVar3 = FUN_0041d7a0(param_5,plVar8 + 4);
        if ((uVar3 >> 7 & 1) == 0) {
          plVar5 = (long *)*plVar1;
          plVar8 = plVar1;
          while (plVar7 = plVar8, plVar5 != (long *)0x0) {
            while( true ) {
              plVar7 = plVar5;
              uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
              if ((uVar3 >> 7 & 1) != 0) break;
              uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
              if ((uVar3 >> 7 & 1) == 0) goto LAB_00441700;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_00441700;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_00441700;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_00441700;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar8 = param_2;
    plVar5 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar2 = (long *)*plVar7 == plVar8;
        plVar8 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
    if ((uVar3 >> 7 & 1) == 0) {
      plVar5 = (long *)*plVar1;
      plVar8 = plVar1;
      while (plVar7 = plVar8, plVar5 != (long *)0x0) {
        while( true ) {
          plVar7 = plVar5;
          uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
          if ((uVar3 >> 7 & 1) != 0) break;
          uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
          if ((uVar3 >> 7 & 1) == 0) goto LAB_00441700;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_00441700;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_00441700;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_00441700:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 00441814  FUN_00441814 =====

void FUN_00441814(undefined8 *param_1,undefined8 *param_2)

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
    goto LAB_00441954;
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
  if (-1 < *(char *)((long)param_2 + 0x2f)) {
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    *puVar4 = uVar5;
    return;
  }
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
  if ((puVar3 < puVar4) || ((undefined8 *)((long)puVar4 + uVar2 + 1) <= puVar3)) {
    memmove(puVar4,puVar3,uVar2 + 1);
    return;
  }
LAB_00441954:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 00441984  FUN_00441984 =====

void FUN_00441984(undefined2 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)(param_1 + 4);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar5 = *(undefined8 **)(param_2 + 4);
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar6 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 4) = puVar6;
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_1 + 0xc) = uVar1 | 0x8000000000000000;
    }
    if ((puVar6 <= puVar5) && (puVar5 < (undefined8 *)((long)puVar6 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar6,puVar5,uVar2 + 1);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = uVar9;
    *puVar6 = uVar8;
  }
  puVar5 = (undefined8 *)(param_1 + 0x14);
  *puVar5 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  while( true ) {
    if (puVar6 == (undefined8 *)(param_2 + 0x14)) {
      return;
    }
    FUN_004414e0(param_1 + 0x10,puVar5,puVar6 + 4,puVar6 + 4);
    if (puVar6 == (undefined8 *)0x0) break;
    puVar3 = (undefined8 *)puVar6[1];
    puVar7 = puVar6;
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar7[2];
        bVar4 = (undefined8 *)*puVar6 != puVar7;
        puVar7 = puVar6;
      } while (bVar4);
    }
    else {
      do {
        puVar6 = puVar3;
        puVar3 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00441b00  FUN_00441b00 =====

void FUN_00441b00(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  if ((char)param_2[0x1f] < '\0') {
    puVar7 = *(undefined8 **)(param_2 + 8);
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 < 0x17) {
      param_1[0x1f] = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 8) = puVar5;
      *(ulong *)(param_1 + 0x10) = uVar2;
      *(ulong *)(param_1 + 0x18) = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= puVar7) && (puVar7 < (undefined8 *)((long)puVar5 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar5,puVar7,uVar2 + 1);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    *puVar5 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  *puVar7 = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar7;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  while( true ) {
    if (puVar5 == (undefined8 *)(param_2 + 0x30)) {
      return;
    }
    FUN_004414e0(param_1 + 0x28,puVar7,puVar5 + 4,puVar5 + 4);
    if (puVar5 == (undefined8 *)0x0) break;
    puVar3 = (undefined8 *)puVar5[1];
    puVar8 = puVar5;
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar8[2];
        bVar4 = (undefined8 *)*puVar5 != puVar8;
        puVar8 = puVar5;
      } while (bVar4);
    }
    else {
      do {
        puVar5 = puVar3;
        puVar3 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00441c84  FUN_00441c84 =====

void FUN_00441c84(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar10 = (undefined8 *)*param_2;
    uVar8 = param_2[1];
    if (uVar8 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar8;
      puVar3 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = (uVar8 | 0xf) + 1;
      puVar3 = (undefined8 *)operator_new(uVar11);
      *param_1 = puVar3;
      param_1[1] = uVar8;
      param_1[2] = uVar11 | 0x8000000000000000;
    }
    if ((puVar3 <= puVar10) && (puVar10 < (undefined8 *)((long)puVar3 + uVar8 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar3,puVar10,uVar8 + 1);
  }
  else {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar13;
    *param_1 = uVar12;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  uVar8 = param_2[4] - param_2[3];
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar4;
  param_1[4] = puVar4;
  param_1[5] = puVar4 + uVar8;
  puVar6 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar5 = puVar4;
  if (puVar6 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar6;
    puVar7 = puVar6;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar4 - (long)puVar6))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar4 + 0x10);
      puVar4 = puVar4 + uVar9;
      puVar7 = puVar6 + uVar9;
      puVar3 = (undefined8 *)(puVar6 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar3 + -1;
        uVar12 = puVar3[-2];
        uVar14 = puVar3[1];
        uVar13 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar5 = puVar4;
      if (uVar8 == uVar9) goto LAB_00441dc8;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar5;
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
  }
LAB_00441dc8:
  param_1[4] = puVar5;
  return;
}


// ===== 00441e10  FUN_00441e10 =====

void FUN_00441e10(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00441e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2);
  return;
}


// ===== 00441e1c  FUN_00441e1c =====

void FUN_00441e1c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00441e1c(param_1,*param_2);
    FUN_00441e1c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x4f) < '\0') {
      operator_delete((void *)param_2[7]);
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    else {
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00441e88  FUN_00441e88 =====

void FUN_00441e88(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 == (undefined4 *)param_1[2]) {
    __src = (void *)*param_1;
    __n = (long)puVar3 - (long)__src;
    uVar1 = ((long)__n >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = __n >> 1;
    if (__n >> 1 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffffb < __n) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) goto LAB_00441f70;
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar2 * 4);
    puVar3 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar3 = *param_2;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = puVar3 + 1;
    param_1[2] = (void *)((long)__dest + uVar2 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00441f70:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  return;
}


// ===== 00441fa0  FUN_00441fa0 =====

void FUN_00441fa0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar12;
  
  lVar15 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar15 + 1;
  if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = param_1[2] - *param_1;
  uVar10 = uVar7 >> 3;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffef < uVar7) {
    uVar10 = 0xfffffffffffffff;
  }
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar6 = operator_new(uVar10 * 0x10);
  uVar17 = param_2[1];
  uVar16 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar14 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)pvVar6 + lVar15 * 0x10);
  pvVar6 = (void *)((long)pvVar6 + uVar10 * 0x10);
  puVar3[1] = uVar17;
  *puVar3 = uVar16;
  puVar8 = puVar3;
  if (puVar11 == puVar14) {
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar3 + 2);
    param_1[2] = (long)pvVar6;
  }
  else {
    do {
      puVar12 = puVar11 + -2;
      uVar16 = *puVar12;
      puVar9 = puVar8 + -2;
      puVar8[-1] = puVar11[-1];
      *puVar9 = uVar16;
      *puVar12 = 0;
      puVar11[-1] = 0;
      puVar8 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != puVar14);
    puVar11 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar9;
    param_1[1] = (long)(puVar3 + 2);
    param_1[2] = (long)pvVar6;
    while (puVar14 != puVar11) {
      plVar13 = (long *)puVar14[-1];
      puVar14 = puVar14 + -2;
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          lVar15 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_005466cc(plVar13);
        }
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 00442104  FUN_00442104 =====

void FUN_00442104(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00442104(param_1,*param_2);
    FUN_00442104(param_1,param_2[1]);
    pvVar1 = (void *)param_2[5];
    if (pvVar1 != (void *)0x0) {
      param_2[6] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00442154  FUN_00442154 =====

void FUN_00442154(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 3) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
               "!has_value()","__construct called for engaged __optional_storage");
  }
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    FUN_0044224c(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 0044224c  FUN_0044224c =====

undefined8 * FUN_0044224c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  undefined1 *puVar15;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined8 *)FUN_004423c0(param_1,param_2,&local_60,auStack_68,param_3);
  puVar13 = (undefined8 *)*puVar5;
  if (puVar13 != (undefined8 *)0x0) {
    uVar7 = 0;
    goto LAB_00442388;
  }
  puVar13 = (undefined8 *)operator_new(0x40);
  puVar15 = (undefined1 *)param_4[1];
  puVar1 = (undefined1 *)param_4[2];
  puVar13[6] = 0;
  puVar13[7] = 0;
  uVar2 = (long)puVar1 - (long)puVar15;
  puVar13[4] = *param_4;
  puVar13[5] = 0;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar6 = (undefined1 *)operator_new(uVar2);
    puVar13[5] = puVar6;
    puVar13[6] = puVar6;
    puVar13[7] = puVar6 + uVar2;
    if ((uVar2 < 0x20) || ((ulong)((long)puVar6 - (long)puVar15) < 0x20)) {
LAB_00442334:
      do {
        puVar14 = puVar15 + 1;
        puVar9 = puVar6 + 1;
        *puVar6 = *puVar15;
        puVar6 = puVar9;
        puVar15 = puVar14;
      } while (puVar14 != puVar1);
    }
    else {
      uVar10 = uVar2 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar15 + 0x10);
      puVar9 = puVar6 + uVar10;
      puVar15 = puVar15 + uVar10;
      puVar11 = (undefined8 *)(puVar6 + 0x10);
      uVar12 = uVar10;
      do {
        puVar4 = puVar8 + -1;
        uVar7 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 0x20;
        puVar11[-1] = *puVar4;
        puVar11[-2] = uVar7;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      puVar6 = puVar9;
      if (uVar2 != uVar10) goto LAB_00442334;
    }
    puVar13[6] = puVar9;
  }
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = local_60;
  *puVar5 = puVar13;
  puVar8 = puVar13;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar8 = (undefined8 *)*puVar5;
  }
  puVar5 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar8);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
LAB_00442388:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar5,uVar7);
  }
  return puVar13;
}


// ===== 004423c0  FUN_004423c0 =====

long * FUN_004423c0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,ulong *param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    uVar5 = *param_5;
    if ((ulong)param_2[4] <= uVar5) {
      if (uVar5 <= (ulong)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar2 = param_2 + 1;
      plVar7 = (long *)*plVar2;
      plVar8 = param_2;
      plVar6 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar8[2];
          bVar1 = (long *)*plVar3 != plVar8;
          plVar8 = plVar3;
        } while (bVar1);
      }
      else {
        do {
          plVar3 = plVar6;
          plVar6 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((plVar3 != plVar4) && ((ulong)plVar3[4] <= uVar5)) {
        plVar6 = (long *)*plVar4;
        plVar8 = plVar4;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, uVar5 < (ulong)plVar8[4]) {
            plVar4 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_00442558;
          }
          if (uVar5 <= (ulong)plVar8[4]) break;
          plVar4 = plVar8 + 1;
          plVar6 = (long *)*plVar4;
        }
LAB_00442558:
        *param_3 = (long)plVar8;
        return plVar4;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar3;
        return plVar3;
      }
      goto LAB_004424cc;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar6 = (long *)*param_2;
    plVar2 = param_2;
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar2[2];
        bVar1 = (long *)*plVar8 == plVar2;
        plVar2 = plVar8;
      } while (bVar1);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    uVar5 = *param_5;
    if (uVar5 <= (ulong)plVar8[4]) {
      plVar6 = (long *)*plVar4;
      plVar8 = plVar4;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, uVar5 < (ulong)plVar8[4]) {
          plVar4 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_004424bc;
        }
        if (uVar5 <= (ulong)plVar8[4]) break;
        plVar4 = plVar8 + 1;
        plVar6 = (long *)*plVar4;
      }
LAB_004424bc:
      *param_3 = (long)plVar8;
      return plVar4;
    }
  }
  plVar2 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_004424cc:
  *param_3 = (long)param_2;
  return plVar2;
}


// ===== 0044259c  FUN_0044259c =====

void FUN_0044259c(void)

{
  return;
}


// ===== 004425a0  FUN_004425a0 =====

void FUN_004425a0(void)

{
  return;
}


// ===== 004425a4  FUN_004425a4 =====

void FUN_004425a4(undefined8 param_1,long param_2)

{
  FUN_00442104(param_2,*(undefined8 *)(param_2 + 8));
  return;
}


// ===== 004425b0  FUN_004425b0 =====

void FUN_004425b0(undefined2 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
               "!has_value()","__construct called for engaged __optional_storage");
  }
  __dest = (undefined8 *)(param_1 + 4);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    __src = *(undefined8 **)(param_2 + 4);
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 4) = __dest;
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_1 + 0xc) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *__dest = uVar3;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


// ===== 004426bc  FUN_004426bc =====

void FUN_004426bc(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[6];
  *param_1 = *param_2;
  uVar7 = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 1) = uVar6;
  uVar5 = param_2[0x12];
  param_1[6] = uVar4;
  uVar6 = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 7) = uVar7;
  uVar4 = param_2[2];
  param_1[0x12] = uVar5;
  uVar7 = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 0x13) = uVar6;
  uVar5 = param_2[8];
  param_1[2] = uVar4;
  uVar6 = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 3) = uVar7;
  uVar4 = param_2[4];
  param_1[8] = uVar5;
  uVar7 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 9) = uVar6;
  uVar5 = param_2[10];
  param_1[4] = uVar4;
  uVar6 = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 5) = uVar7;
  uVar4 = param_2[0xe];
  param_1[10] = uVar5;
  uVar7 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0xb) = uVar6;
  uVar5 = param_2[0xc];
  param_1[0xe] = uVar4;
  uVar6 = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0xf) = uVar7;
  uVar4 = param_2[0x10];
  param_1[0xc] = uVar5;
  uVar7 = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0xd) = uVar6;
  uVar5 = param_2[0x14];
  param_1[0x10] = uVar4;
  uVar6 = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x11) = uVar7;
  uVar7 = *(undefined1 *)(param_2 + 0x16);
  param_1[0x14] = uVar5;
  uVar8 = *(undefined1 *)((long)param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x15) = uVar6;
  *(undefined1 *)(param_1 + 0x16) = uVar7;
  *(undefined1 *)((long)param_1 + 0x59) = uVar8;
  puVar9 = (undefined8 *)(param_1 + 0x18);
  if (*(char *)((long)param_2 + 0x77) < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 0x18);
    uVar3 = *(ulong *)(param_2 + 0x1a);
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x77) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar9 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 0x18) = puVar9;
      *(ulong *)(param_1 + 0x1a) = uVar3;
      *(ulong *)(param_1 + 0x1c) = uVar1 | 0x8000000000000000;
    }
    if ((puVar9 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar9 + uVar3 + 1)))
    goto LAB_0044296c;
    memmove(puVar9,puVar2,uVar3 + 1);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x1a);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1a) = uVar11;
    *puVar9 = uVar10;
  }
  puVar9 = (undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  if (*(char *)((long)param_2 + 0x97) < '\0') {
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
      puVar9 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 0x20) = puVar9;
      *(ulong *)(param_1 + 0x22) = uVar3;
      *(ulong *)(param_1 + 0x24) = uVar1 | 0x8000000000000000;
    }
    if ((puVar9 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar9 + uVar3 + 1)))
    goto LAB_0044296c;
    memmove(puVar9,puVar2,uVar3 + 1);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x22);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar11;
    *puVar9 = uVar10;
  }
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  FUN_0040d7e4(param_1 + 0x28,param_2 + 0x28);
  puVar9 = (undefined8 *)(param_1 + 0x32);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  if (*(char *)((long)param_2 + 0xdf) < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 0x32);
    uVar3 = *(ulong *)(param_2 + 0x34);
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0xdf) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar9 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 0x32) = puVar9;
      *(ulong *)(param_1 + 0x34) = uVar3;
      *(ulong *)(param_1 + 0x36) = uVar1 | 0x8000000000000000;
    }
    if ((puVar9 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar9 + uVar3 + 1))) {
LAB_0044296c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar9,puVar2,uVar3 + 1);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x34);
    uVar10 = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x34) = uVar11;
    *puVar9 = uVar10;
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
  return;
}


// ===== 004429a0  FUN_004429a0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004429a0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar7 = PTR_PTR_00d51b50;
  puVar6 = PTR_DAT_00d51b48;
  lVar3 = tpidr_el0;
  ppuVar5 = local_178 + 1;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar10 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar10,ppuVar5);
  local_178[0] = puVar6 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar10) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar10) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar5);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  uVar8 = FUN_00428964(local_178,"Receiver: ",10);
  uVar2 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uVar8 = FUN_00428964(uVar8,puVar4,uVar2);
  uVar8 = FUN_00428964(uVar8,", bitrate: ",0xb);
  uVar8 = FUN_0054c088(uVar8,param_2[3]);
  plVar9 = (long *)FUN_00428964(uVar8," [bps], loss: ",0xe);
  *(undefined8 *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x10) = 2;
  dVar11 = (double)NEON_ucvtf((ulong)*(byte *)(param_2 + 4));
  uVar8 = FUN_0054c610(dVar11 * 100.0 * 0.00390625);
  FUN_00428964(uVar8,&DAT_0019cad3,4);
  FUN_0054d504(param_1,ppuVar5);
  local_178[0] = *(undefined **)puVar7;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar7 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar5);
  FUN_0054b3d4(local_178,puVar7 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00442b88  FUN_00442b88 =====

/* WARNING: Removing unreachable block (ram,0x00442ce0) */

void FUN_00442b88(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = param_1[2] - *param_1 >> 4;
  uVar9 = lVar8 * 0x5555555555555556;
  if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
    uVar9 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar9 = 0x555555555555555;
  }
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x555555555555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar9 * 0x30);
  uVar15 = param_2[1];
  uVar14 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar7 = param_2[2];
  puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 0x10);
  param_2[2] = 0;
  pvVar12 = (void *)*param_1;
  pvVar13 = (void *)param_1[1];
  pvVar2 = (void *)((long)pvVar2 + uVar9 * 0x30);
  uVar10 = param_2[5];
  puVar4[1] = uVar15;
  *puVar4 = uVar14;
  uVar15 = param_2[4];
  uVar14 = param_2[3];
  puVar4[2] = uVar7;
  puVar4[5] = uVar10;
  puVar4[4] = uVar15;
  puVar4[3] = uVar14;
  puVar5 = puVar4;
  if (pvVar13 == pvVar12) {
    *param_1 = (long)puVar4;
    param_1[1] = (long)(puVar4 + 6);
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      uVar10 = *(undefined8 *)((long)pvVar13 + -0x28);
      uVar7 = *(undefined8 *)((long)pvVar13 + -0x30);
      pvVar11 = (void *)((long)pvVar13 + -0x30);
      puVar5[-4] = *(undefined8 *)((long)pvVar13 + -0x20);
      puVar6 = puVar5 + -6;
      puVar5[-5] = uVar10;
      puVar5[-6] = uVar7;
      *(undefined8 *)((long)pvVar13 + -0x28) = 0;
      *(undefined8 *)((long)pvVar13 + -0x20) = 0;
      *(undefined8 *)((long)pvVar13 + -0x30) = 0;
      uVar10 = *(undefined8 *)((long)pvVar13 + -0x10);
      uVar7 = *(undefined8 *)((long)pvVar13 + -0x18);
      puVar5[-1] = *(undefined8 *)((long)pvVar13 + -8);
      puVar5[-2] = uVar10;
      puVar5[-3] = uVar7;
      puVar5 = puVar6;
      pvVar13 = pvVar11;
    } while (pvVar11 != pvVar12);
    pvVar13 = (void *)*param_1;
    pvVar12 = (void *)param_1[1];
    *param_1 = (long)puVar6;
    param_1[1] = (long)(puVar4 + 6);
    param_1[2] = (long)pvVar2;
    for (; pvVar12 != pvVar13; pvVar12 = (void *)((long)pvVar12 + -0x30)) {
    }
  }
  if (pvVar13 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar13);
  return;
}


// ===== 00442d38  FUN_00442d38 =====

void FUN_00442d38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442d44  FUN_00442d44 =====

void FUN_00442d44(long *param_1,undefined8 param_2)

{
  FUN_00442d54(*param_1,*param_1 + 0x10,param_2);
  return;
}


// ===== 00442d54  FUN_00442d54 =====

void FUN_00442d54(long *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined4 local_90;
  undefined1 local_8c;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  undefined1 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar3 = (code *)*param_1;
  plVar1 = (long *)(*param_2 + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_90 = *param_3;
  uStack_80 = *(undefined8 *)(param_3 + 4);
  local_88 = *(void **)(param_3 + 2);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  local_8c = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(param_3 + 1) = 0;
  local_78 = *(long *)(param_3 + 6);
  uStack_60 = *(undefined8 *)(param_3 + 0xc);
  local_68 = *(void **)(param_3 + 10);
  local_70 = *(undefined1 *)(param_3 + 8);
  uStack_40 = *(undefined8 *)(param_3 + 0x14);
  local_48 = *(void **)(param_3 + 0x12);
  *(undefined8 *)(param_3 + 6) = 0;
  local_58 = *(long *)(param_3 + 0xe);
  *(undefined1 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  local_50 = *(undefined1 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined1 *)(param_3 + 0x10) = 0;
  local_38 = *(long *)(param_3 + 0x16);
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  local_30 = *(undefined1 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined1 *)(param_3 + 0x18) = 0;
  (*pcVar3)(plVar1,&local_90);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00442e78  FUN_00442e78 =====

void FUN_00442e78(undefined8 *param_1)

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


// ===== 00442eac  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00442eb0  FUN_00442eb0 =====

void FUN_00442eb0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*plVar1;
  if ((plVar1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(plVar1[2] + (plVar1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00442ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00442ed0  FUN_00442ed0 =====

void FUN_00442ed0(undefined8 *param_1)

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


// ===== 00442f04  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00442f08  FUN_00442f08 =====

void FUN_00442f08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f14  FUN_00442f14 =====

void FUN_00442f14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f20  FUN_00442f20 =====

void FUN_00442f20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f2c  FUN_00442f2c =====

void FUN_00442f2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f38  FUN_00442f38 =====

void FUN_00442f38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f44  FUN_00442f44 =====

void FUN_00442f44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f50  FUN_00442f50 =====

void FUN_00442f50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f5c  FUN_00442f5c =====

void FUN_00442f5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f68  FUN_00442f68 =====

void FUN_00442f68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00442f74  FUN_00442f74 =====

void FUN_00442f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c368;
  FUN_005466c0();
  return;
}


// ===== 00442f84  FUN_00442f84 =====

void FUN_00442f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c368;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00442fb4  FUN_00442fb4 =====

void FUN_00442fb4(void)

{
  return;
}


// ===== 00442fb8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00442fbc  FUN_00442fbc =====

undefined8 FUN_00442fbc(void)

{
  return 1;
}


// ===== 00442fc4  FUN_00442fc4 =====

undefined8 FUN_00442fc4(void)

{
  return 1;
}


// ===== 00442fcc  FUN_00442fcc =====

void FUN_00442fcc(void)

{
  return;
}


// ===== 00442fd0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00442fd4  FUN_00442fd4 =====

void FUN_00442fd4(void)

{
  return;
}


// ===== 00442fd8  FUN_00442fd8 =====

void FUN_00442fd8(void)

{
  return;
}


// ===== 00442fdc  FUN_00442fdc =====

void FUN_00442fdc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
      return;
    }
  }
  return;
}


// ===== 00443034  FUN_00443034 =====

void FUN_00443034(void)

{
  return;
}


// ===== 00443038  FUN_00443038 =====

void FUN_00443038(void)

{
  return;
}


// ===== 0044303c  FUN_0044303c =====

undefined8 FUN_0044303c(void)

{
  return 1;
}


// ===== 00443044  FUN_00443044 =====

undefined1  [16] FUN_00443044(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar4 = (long *)operator_new(0xd0);
  puVar3 = PTR_DAT_00d51b90;
  uVar5 = *param_2;
  *plVar4 = (long)&PTR_FUN_00d1c400;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[0xc] = 0;
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar9 = plVar4 + 2;
  *plVar9 = 0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = (long)(plVar4 + 0xb);
  FUN_00512b50(plVar4 + 0xd,uVar5);
  plVar4[0x19] = 0;
  if (plVar4[5] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) goto LAB_00443150;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
    FUN_005466cc();
  }
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
LAB_00443150:
  auVar10._8_8_ = plVar4;
  auVar10._0_8_ = plVar7;
  return auVar10;
}


// ===== 00443168  FUN_00443168 =====

void FUN_00443168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c400;
  FUN_005466c0();
  return;
}


// ===== 00443178  FUN_00443178 =====

void FUN_00443178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c400;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004431a8  FUN_004431a8 =====

void FUN_004431a8(long param_1)

{
  FUN_004431b4(param_1 + 0x18);
  return;
}


// ===== 004431b0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004431b4  FUN_004431b4 =====

void FUN_004431b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  FUN_00512bf4(param_1 + 0x50);
  FUN_00443264(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  plVar5 = *(long **)(param_1 + 0x20);
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
      lVar4 = *(long *)(param_1 + 0x10);
      goto joined_r0x0044322c;
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
joined_r0x0044322c:
  if (lVar4 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00443264  FUN_00443264 =====

void FUN_00443264(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00443264(param_1,*param_2);
    FUN_00443264(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004432a4  FUN_004432a4 =====

void FUN_004432a4(undefined8 *param_1)

{
  FUN_004366f8(*param_1);
  return;
}


// ===== 004432ac  FUN_004432ac =====

void FUN_004432ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00443310  FUN_00443310 =====

void FUN_00443310(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0xe0) != 0) {
    FUN_0042fe70(*(undefined8 *)(lVar2 + 0x90));
  }
  FUN_00469784(*(undefined8 *)(lVar2 + 0x3d8));
  plVar1 = *(long **)(lVar2 + 0xe0);
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00443354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xe8))();
    return;
  }
  return;
}


// ===== 00443364  FUN_00443364 =====

void FUN_00443364(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004433c8  FUN_004433c8 =====

void FUN_004433c8(long *param_1)

{
  if (*(long *)(*(long *)(*param_1 + 0x90) + 200) != 0) {
    FUN_004317b8();
    return;
  }
  return;
}


// ===== 004433e0  FUN_004433e0 =====

void FUN_004433e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00443444  FUN_00443444 =====

/* WARNING: Removing unreachable block (ram,0x004435bc) */

void FUN_00443444(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar10 = *param_1;
  uVar2 = *(undefined8 *)(lVar10 + 8);
  lVar3 = *(long *)(lVar10 + 0x10);
  lVar10 = *(long *)(lVar10 + 0xa8);
  if (lVar3 == 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 != 0) goto LAB_004434d0;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_58) {
        FUN_005466cc(lVar3);
        return;
      }
      goto LAB_00443660;
    }
LAB_004434d0:
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x18);
      puVar9[2] = lVar3;
      *puVar9 = &PTR_FUN_00d1c120;
      puVar9[1] = uVar2;
      if (*(long *)(lVar6 + 0x28) == local_58) {
        FUN_00512cf8(lVar11,puVar9);
        return;
      }
      goto LAB_00443660;
    }
    uVar8 = FUN_005ce36c();
    local_88 = CONCAT17(10,(undefined7)local_88);
    if ((&local_98 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_90 + 2U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar7 = (ulong)uStack_90 >> 0x10;
    uStack_90 = CONCAT62((uint6)uVar7 & 0xffffffffff00,0x2928);
    local_98 = (void *)s_operator___001e15cf._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar10;
    local_60 = uVar8;
    puVar9 = (undefined8 *)operator_new(0x58);
    puVar9[2] = lVar3;
    puVar9[4] = uStack_90;
    puVar9[3] = local_98;
    *puVar9 = &PTR_FUN_00d1c0f8;
    puVar9[1] = uVar2;
    puVar9[8] = FUN_0040e7ec;
    puVar9[9] = &DAT_001f4e70;
    puVar9[7] = uStack_78;
    puVar9[6] = local_80;
    puVar9[5] = local_88;
    puVar9[10] = uVar8;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_00512cf8(lVar11,puVar9);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00443660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00443664  FUN_00443664 =====

void FUN_00443664(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1c0f8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004436cc  FUN_004436cc =====

void FUN_004436cc(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1c0f8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00443734  FUN_00443734 =====

void FUN_00443734(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar5 == (long *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_004437ac;
    }
    else {
      FUN_0043a538();
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_004437ac:
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004437d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar6);
  return;
}


// ===== 004437dc  FUN_004437dc =====

void FUN_004437dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c120;
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004437fc  FUN_004437fc =====

void FUN_004437fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c120;
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00443834  FUN_00443834 =====

void FUN_00443834(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = (long *)FUN_005466fc();
    if ((plVar4 == (long *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    else {
      FUN_0043a538();
    }
    plVar1 = plVar4 + 1;
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


// ===== 004438b0  FUN_004438b0 =====

void FUN_004438b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00443914  FUN_00443914 =====

/* WARNING: Removing unreachable block (ram,0x00443ac8) */

void FUN_00443914(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar4 = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(param_3 + 1) = 0;
  lVar11 = *param_1;
  uVar13 = *param_3;
  uVar2 = *(undefined8 *)(lVar11 + 8);
  lVar3 = *(long *)(lVar11 + 0x10);
  lVar11 = *(long *)(lVar11 + 0xa8);
  if (lVar3 == 0) {
    lVar12 = *(long *)(lVar11 + 0x58);
    if (lVar12 != 0) goto LAB_004439b8;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = *(long *)(lVar11 + 0x58);
    if (lVar12 == 0) {
      if (*(long *)(lVar7 + 0x28) == local_68) {
        FUN_005466cc(lVar3);
        return;
      }
      goto LAB_00443b80;
    }
LAB_004439b8:
    lVar11 = *(long *)(lVar11 + 0x78);
    if (lVar11 == 0) {
      puVar10 = (undefined8 *)operator_new(0x30);
      puVar10[2] = lVar3;
      *(undefined4 *)(puVar10 + 3) = param_2;
      *puVar10 = &PTR_FUN_00d1c170;
      puVar10[1] = uVar2;
      puVar10[4] = uVar13;
      *(undefined1 *)(puVar10 + 5) = uVar4;
      if (*(long *)(lVar7 + 0x28) == local_68) {
        FUN_00512cf8(lVar12,puVar10);
        return;
      }
      goto LAB_00443b80;
    }
    uVar9 = FUN_005ce36c();
    local_98 = CONCAT17(10,(undefined7)local_98);
    if ((&local_a8 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a0 + 2U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar8 = (ulong)uStack_a0 >> 0x10;
    uStack_a0 = CONCAT62((uint6)uVar8 & 0xffffffffff00,0x2928);
    local_a8 = (void *)s_operator___001e15cf._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar11;
    local_70 = uVar9;
    puVar10 = (undefined8 *)operator_new(0x70);
    puVar10[2] = lVar3;
    *puVar10 = &PTR_FUN_00d1c148;
    puVar10[1] = uVar2;
    puVar10[7] = uStack_a0;
    puVar10[6] = local_a8;
    *(undefined4 *)(puVar10 + 3) = param_2;
    puVar10[8] = local_98;
    puVar10[4] = uVar13;
    *(undefined1 *)(puVar10 + 5) = uVar4;
    puVar10[10] = uStack_88;
    puVar10[9] = local_90;
    puVar10[0xb] = FUN_0040e7ec;
    puVar10[0xc] = &DAT_001f4e70;
    puVar10[0xd] = uVar9;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_00512cf8(lVar12,puVar10);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_00443b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00443b84  FUN_00443b84 =====

void FUN_00443b84(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c148;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00443bec  FUN_00443bec =====

void FUN_00443bec(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c148;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00443c54  FUN_00443c54 =====

void FUN_00443c54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar6 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar6 == (long *)0x0) || (lVar8 = *(long *)(param_1 + 8), lVar8 == 0)) {
      if (plVar6 == (long *)0x0) goto LAB_00443d08;
    }
    else if (*(char *)(*(long *)(lVar8 + 0x5a8) + 0x10) == '\0') {
      local_48 = *(undefined8 *)(param_1 + 0x20);
      local_40 = *(undefined1 *)(param_1 + 0x28);
      (**(code **)(lVar8 + 0x5a0))(lVar8 + 0x590,*(undefined4 *)(param_1 + 0x18),&local_48);
    }
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
LAB_00443d08:
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar5,uVar7);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00443d50  FUN_00443d50 =====

void FUN_00443d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c170;
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00443d70  FUN_00443d70 =====

void FUN_00443d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c170;
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00443da8  FUN_00443da8 =====

void FUN_00443da8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc();
    if ((plVar5 == (long *)0x0) || (lVar6 = *(long *)(param_1 + 8), lVar6 == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_00443e50;
    }
    else if (*(char *)(*(long *)(lVar6 + 0x5a8) + 0x10) == '\0') {
      local_48 = *(undefined8 *)(param_1 + 0x20);
      local_40 = *(undefined1 *)(param_1 + 0x28);
      (**(code **)(lVar6 + 0x5a0))(lVar6 + 0x590,*(undefined4 *)(param_1 + 0x18),&local_48);
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_00443e50:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00443e78  FUN_00443e78 =====

void FUN_00443e78(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00443edc  FUN_00443edc =====

/* WARNING: Removing unreachable block (ram,0x00444068) */

void FUN_00443edc(long *param_1,byte param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
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
  lVar10 = *param_1;
  uVar2 = *(undefined8 *)(lVar10 + 8);
  lVar3 = *(long *)(lVar10 + 0x10);
  lVar10 = *(long *)(lVar10 + 0xa8);
  if (lVar3 == 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 != 0) goto LAB_00443f70;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_68) {
        FUN_005466cc(lVar3);
        return;
      }
      goto LAB_00444118;
    }
LAB_00443f70:
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x20);
      puVar9[2] = lVar3;
      *(byte *)(puVar9 + 3) = param_2 & 1;
      *puVar9 = &PTR_FUN_00d1c1c0;
      puVar9[1] = uVar2;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        FUN_00512cf8(lVar11,puVar9);
        return;
      }
      goto LAB_00444118;
    }
    uVar8 = FUN_005ce36c();
    local_98 = CONCAT17(10,(undefined7)local_98);
    if ((&local_a8 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a0 + 2U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar7 = (ulong)uStack_a0 >> 0x10;
    uStack_a0 = CONCAT62((uint6)uVar7 & 0xffffffffff00,0x2928);
    local_a8 = (void *)s_operator___001e15cf._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar10;
    local_70 = uVar8;
    puVar9 = (undefined8 *)operator_new(0x60);
    puVar9[2] = lVar3;
    *puVar9 = &PTR_FUN_00d1c198;
    puVar9[1] = uVar2;
    puVar9[5] = uStack_a0;
    puVar9[4] = local_a8;
    *(byte *)(puVar9 + 3) = param_2 & 1;
    puVar9[6] = local_98;
    puVar9[8] = uStack_88;
    puVar9[7] = local_90;
    puVar9[9] = FUN_0040e7ec;
    puVar9[10] = &DAT_001f4e70;
    puVar9[0xb] = uVar8;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_00512cf8(lVar11,puVar9);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_00444118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044411c  FUN_0044411c =====

void FUN_0044411c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c198;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00444184  FUN_00444184 =====

void FUN_00444184(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1c198;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004441ec  FUN_004441ec =====

void FUN_004441ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar5 == (long *)0x0) || (lVar7 = *(long *)(param_1 + 8), lVar7 == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_0044427c;
    }
    else if (*(char *)(*(long *)(lVar7 + 0x5c8) + 0x10) == '\0') {
      (**(code **)(lVar7 + 0x5c0))(lVar7 + 0x5b0,*(undefined1 *)(param_1 + 0x18));
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_0044427c:
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004442a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar4,uVar6);
  return;
}


// ===== 004442ac  FUN_004442ac =====

void FUN_004442ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c1c0;
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004442cc  FUN_004442cc =====

void FUN_004442cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c1c0;
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00444304  FUN_00444304 =====

void FUN_00444304(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = (long *)FUN_005466fc();
    if ((plVar4 == (long *)0x0) || (lVar5 = *(long *)(param_1 + 8), lVar5 == 0)) {
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    else if (*(char *)(*(long *)(lVar5 + 0x5c8) + 0x10) == '\0') {
      (**(code **)(lVar5 + 0x5c0))(lVar5 + 0x5b0,*(undefined1 *)(param_1 + 0x18));
    }
    plVar1 = plVar4 + 1;
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


// ===== 00444398  FUN_00444398 =====

void FUN_00444398(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004443fc  FUN_004443fc =====

/* WARNING: Removing unreachable block (ram,0x00444574) */

void FUN_004443fc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar10 = *param_1;
  uVar2 = *(undefined8 *)(lVar10 + 8);
  lVar3 = *(long *)(lVar10 + 0x10);
  lVar10 = *(long *)(lVar10 + 0xa8);
  if (lVar3 == 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 != 0) goto LAB_00444488;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar10 + 0x58);
    if (lVar11 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_58) {
        FUN_005466cc(lVar3);
        return;
      }
      goto LAB_00444618;
    }
LAB_00444488:
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)operator_new(0x18);
      puVar9[2] = lVar3;
      *puVar9 = &PTR_FUN_00d1c210;
      puVar9[1] = uVar2;
      if (*(long *)(lVar6 + 0x28) == local_58) {
        FUN_00512cf8(lVar11,puVar9);
        return;
      }
      goto LAB_00444618;
    }
    uVar8 = FUN_005ce36c();
    local_88 = CONCAT17(10,(undefined7)local_88);
    if ((&local_98 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_90 + 2U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar7 = (ulong)uStack_90 >> 0x10;
    uStack_90 = CONCAT62((uint6)uVar7 & 0xffffffffff00,0x2928);
    local_98 = (void *)s_operator___001e15cf._0_8_;
    local_70 = FUN_0040e7ec;
    local_68 = &DAT_001f4e70;
    local_80 = lVar10;
    local_60 = uVar8;
    puVar9 = (undefined8 *)operator_new(0x58);
    puVar9[2] = lVar3;
    puVar9[4] = uStack_90;
    puVar9[3] = local_98;
    *puVar9 = &PTR_FUN_00d1c1e8;
    puVar9[1] = uVar2;
    puVar9[8] = FUN_0040e7ec;
    puVar9[9] = &DAT_001f4e70;
    puVar9[7] = uStack_78;
    puVar9[6] = local_80;
    puVar9[5] = local_88;
    puVar9[10] = uVar8;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_00512cf8(lVar11,puVar9);
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00444618:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044461c  FUN_0044461c =====

void FUN_0044461c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1c1e8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00444684  FUN_00444684 =====

void FUN_00444684(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1c1e8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004446ec  FUN_004446ec =====

void FUN_004446ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar5 == (long *)0x0) || (lVar7 = *(long *)(param_1 + 8), lVar7 == 0)) {
      if (plVar5 == (long *)0x0) goto LAB_00444778;
    }
    else if (*(char *)(*(long *)(lVar7 + 0x5e8) + 0x10) == '\0') {
      (**(code **)(lVar7 + 0x5e0))(lVar7 + 0x5d0);
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
LAB_00444778:
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004447a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar6);
  return;
}


// ===== 004447a8  FUN_004447a8 =====

void FUN_004447a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c210;
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004447c8  FUN_004447c8 =====

void FUN_004447c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c210;
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00444800  FUN_00444800 =====

void FUN_00444800(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = (long *)FUN_005466fc();
    if ((plVar4 == (long *)0x0) || (lVar5 = *(long *)(param_1 + 8), lVar5 == 0)) {
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    else if (*(char *)(*(long *)(lVar5 + 0x5e8) + 0x10) == '\0') {
      (**(code **)(lVar5 + 0x5e0))(lVar5 + 0x5d0);
    }
    plVar1 = plVar4 + 1;
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


// ===== 00444890  FUN_00444890 =====

void FUN_00444890(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004448f4  FUN_004448f4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004448f4(long *param_1,undefined4 param_2,undefined8 *param_3,byte param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *******__src;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  byte bVar9;
  undefined8 *******__dest;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_118;
  undefined8 *******local_108;
  ulong uStack_100;
  undefined8 local_f8;
  byte local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined8 *******local_d0;
  ulong uStack_c8;
  ulong local_c0;
  byte local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar12 = *param_1;
  uVar3 = *(undefined8 *)(lVar12 + 8);
  lVar4 = *(long *)(lVar12 + 0x10);
  lVar12 = *(long *)(lVar12 + 0xa8);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  __dest = &local_108;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_3;
    uVar5 = param_3[1];
    if (uVar5 < 0x17) {
      local_f8 = CONCAT17((char)uVar5,(undefined7)local_f8);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar2);
      local_f8 = uVar2 | 0x8000000000000000;
      local_108 = __dest;
      uStack_100 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar5 + 1)))
    goto LAB_00444bf0;
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_100 = param_3[1];
    local_108 = (undefined8 *******)*param_3;
    local_f8 = param_3[2];
  }
  param_4 = param_4 & 1;
  lVar13 = *(long *)(lVar12 + 0x58);
  local_118 = lVar4;
  local_f0 = param_4;
  if (lVar13 != 0) {
    lVar12 = *(long *)(lVar12 + 0x78);
    if (lVar12 == 0) {
      puVar11 = (undefined8 *)operator_new(0x40);
      puVar11[2] = lVar4;
      *puVar11 = &PTR_FUN_00d1c260;
      puVar11[1] = uVar3;
      *(undefined4 *)(puVar11 + 3) = param_2;
      puVar11[5] = uStack_100;
      puVar11[4] = local_108;
      puVar11[6] = local_f8;
      *(byte *)(puVar11 + 7) = param_4;
      local_118 = 0;
      local_108 = (undefined8 *******)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      FUN_00512cf8(lVar13,puVar11);
    }
    else {
      uVar10 = FUN_005ce36c();
      bVar9 = local_f0;
      local_c0 = local_f8;
      uStack_c8 = uStack_100;
      local_d0 = local_108;
      local_f8 = 0;
      local_a0 = CONCAT17(10,(undefined7)local_a0);
      local_108 = (undefined8 *******)0x0;
      uStack_100 = 0;
      local_118 = 0;
      local_b8 = local_f0;
      local_e8 = uVar3;
      local_e0 = lVar4;
      local_d8 = param_2;
      if ((&local_b0 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a8 + 2U))) {
LAB_00444bf0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar5 = (ulong)uStack_a8 >> 0x10;
      uStack_a8 = CONCAT62((uint6)uVar5 & 0xffffffffff00,0x2928);
      local_b0 = (void *)s_operator___001e15cf._0_8_;
      local_88 = FUN_0040e7ec;
      local_80 = &DAT_001f4e70;
      local_98 = lVar12;
      local_78 = uVar10;
      puVar11 = (undefined8 *)operator_new(0x80);
      puVar11[2] = lVar4;
      *puVar11 = &PTR_FUN_00d1c238;
      puVar11[1] = uVar3;
      puVar11[5] = uStack_c8;
      puVar11[4] = local_d0;
      *(undefined4 *)(puVar11 + 3) = param_2;
      puVar11[6] = local_c0;
      puVar11[9] = uStack_a8;
      puVar11[8] = local_b0;
      *(byte *)(puVar11 + 7) = bVar9;
      puVar11[10] = local_a0;
      puVar11[0xc] = uStack_90;
      puVar11[0xb] = local_98;
      puVar11[0xf] = uVar10;
      local_e8 = 0;
      local_e0 = 0;
      puVar11[0xd] = FUN_0040e7ec;
      puVar11[0xe] = &DAT_001f4e70;
      local_d0 = (undefined8 *******)0x0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b0 = (void *)0x0;
      FUN_00512cf8(lVar13,puVar11);
      if (*(code **)(local_80 + 8) != (code *)0x0) {
        (**(code **)(local_80 + 8))(local_98);
      }
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
      if (local_e0 != 0) {
        FUN_005466cc();
      }
    }
  }
  if ((long)local_f8 < 0) {
    operator_delete(local_108);
  }
  if (local_118 != 0) {
    FUN_005466cc();
  }
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00444c20  FUN_00444c20 =====

void FUN_00444c20(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1c238;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[4]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00444ca0  FUN_00444ca0 =====

void FUN_00444ca0(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1c238;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[4]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00444d20  FUN_00444d20 =====

void FUN_00444d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00444d78(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00444d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))
            (param_1 + 0x58,param_1 + 0x40,*(undefined8 *)(param_1 + 0x78),uVar1,uVar2);
  return;
}


// ===== 00444d78  FUN_00444d78 =====

void FUN_00444d78(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  long *plVar9;
  long lVar10;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  char local_49;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (param_1[1] != 0) {
    plVar9 = (long *)FUN_005466fc();
    if ((plVar9 == (long *)0x0) || (lVar10 = *param_1, lVar10 == 0)) {
      if (plVar9 == (long *)0x0) goto LAB_00444e70;
    }
    else {
      cVar4 = *(char *)((long)param_1 + 0x2f);
      pvVar2 = (void *)param_1[3];
      lVar3 = param_1[4];
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[3] = 0;
      local_48 = (undefined7)lVar3;
      uStack_41 = (undefined1)*(undefined8 *)((long)param_1 + 0x27);
      uVar7 = uStack_41;
      uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x27) >> 8);
      uVar8 = uStack_40;
      if (*(char *)(*(long *)(lVar10 + 0x608) + 0x10) == '\0') {
        uStack_58 = local_48;
        local_48 = 0;
        uStack_41 = 0;
        uStack_40 = 0;
        local_60 = pvVar2;
        local_51 = uVar7;
        uStack_50 = uVar8;
        local_49 = cVar4;
        (**(code **)(lVar10 + 0x600))
                  (lVar10 + 0x5f0,(int)param_1[2],&local_60,(char)param_1[6] != '\0');
        pvVar2 = local_60;
        cVar4 = local_49;
      }
      if (cVar4 < '\0') {
        operator_delete(pvVar2);
      }
    }
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
LAB_00444e70:
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00444e98  FUN_00444e98 =====

void FUN_00444e98(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c260;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00444eec  FUN_00444eec =====

void FUN_00444eec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c260;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00444f40  FUN_00444f40 =====

void FUN_00444f40(long param_1)

{
  FUN_00444d78(param_1 + 8);
  return;
}


// ===== 00444f48  FUN_00444f48 =====

void FUN_00444f48(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00444fac  FUN_00444fac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00444fac(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *******__src;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *******__dest;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long local_f0;
  undefined8 *******local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 *******local_c0;
  ulong uStack_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  lVar11 = *param_1;
  uVar3 = *(undefined8 *)(lVar11 + 8);
  lVar4 = *(long *)(lVar11 + 0x10);
  lVar11 = *(long *)(lVar11 + 0xa8);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  __dest = &local_e8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *******)*param_2;
    uVar5 = param_2[1];
    if (uVar5 < 0x17) {
      local_d8 = CONCAT17((char)uVar5,(undefined7)local_d8);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar2);
      local_d8 = uVar2 | 0x8000000000000000;
      local_e8 = __dest;
      uStack_e0 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar5 + 1)))
    goto LAB_00445274;
    memmove(__dest,__src,uVar5 + 1);
    lVar12 = *(long *)(lVar11 + 0x58);
  }
  else {
    uStack_e0 = param_2[1];
    local_e8 = (undefined8 *******)*param_2;
    local_d8 = param_2[2];
    lVar12 = *(long *)(lVar11 + 0x58);
  }
  local_f0 = lVar4;
  if (lVar12 != 0) {
    lVar11 = *(long *)(lVar11 + 0x78);
    if (lVar11 == 0) {
      puVar10 = (undefined8 *)operator_new(0x30);
      puVar10[2] = lVar4;
      *puVar10 = &PTR_FUN_00d1c2b0;
      puVar10[1] = uVar3;
      puVar10[4] = uStack_e0;
      puVar10[3] = local_e8;
      local_f0 = 0;
      puVar10[5] = local_d8;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_00512cf8(lVar12,puVar10);
    }
    else {
      uVar9 = FUN_005ce36c();
      local_b0 = local_d8;
      uStack_b8 = uStack_e0;
      local_c0 = local_e8;
      local_d8 = 0;
      local_e8 = (undefined8 *******)0x0;
      uStack_e0 = 0;
      local_98 = CONCAT17(10,(undefined7)local_98);
      local_f0 = 0;
      local_d0 = uVar3;
      local_c8 = lVar4;
      if ((&local_a8 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a0 + 2U))) {
LAB_00445274:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar5 = (ulong)uStack_a0 >> 0x10;
      uStack_a0 = CONCAT62((uint6)uVar5 & 0xffffffffff00,0x2928);
      local_a8 = (void *)s_operator___001e15cf._0_8_;
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar11;
      local_70 = uVar9;
      puVar10 = (undefined8 *)operator_new(0x70);
      puVar10[2] = lVar4;
      puVar10[4] = uStack_b8;
      puVar10[3] = local_c0;
      *puVar10 = &PTR_FUN_00d1c288;
      puVar10[1] = uVar3;
      puVar10[0xb] = FUN_0040e7ec;
      puVar10[0xc] = &DAT_001f4e70;
      puVar10[7] = uStack_a0;
      puVar10[6] = local_a8;
      puVar10[5] = local_b0;
      puVar10[0xd] = uVar9;
      puVar10[10] = uStack_88;
      puVar10[9] = local_90;
      puVar10[8] = local_98;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = (undefined8 *******)0x0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_00512cf8(lVar12,puVar10);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != 0) {
        FUN_005466cc();
      }
    }
  }
  if ((long)local_d8 < 0) {
    operator_delete(local_e8);
  }
  if (local_f0 != 0) {
    FUN_005466cc();
  }
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004452a4  FUN_004452a4 =====

void FUN_004452a4(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c288;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00445324  FUN_00445324 =====

void FUN_00445324(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c288;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004453a4  FUN_004453a4 =====

void FUN_004453a4(long param_1)

{
  long *plVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  char local_49;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar9 = FUN_005ce36c();
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar10 = (long *)FUN_005466fc(*(long *)(param_1 + 0x10));
    if ((plVar10 == (long *)0x0) || (lVar12 = *(long *)(param_1 + 8), lVar12 == 0)) {
      if (plVar10 == (long *)0x0) goto LAB_00445494;
    }
    else {
      cVar3 = *(char *)(param_1 + 0x2f);
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_48 = (undefined7)uVar11;
      uVar6 = local_48;
      uStack_41 = (undefined1)*(undefined8 *)(param_1 + 0x27);
      uVar7 = uStack_41;
      uStack_40 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x27) >> 8);
      uVar8 = uStack_40;
      if (*(char *)(*(long *)(lVar12 + 0x688) + 0x10) == '\0') {
        local_48 = 0;
        uStack_58 = uVar6;
        uStack_41 = 0;
        uStack_40 = 0;
        local_60 = pvVar2;
        local_51 = uVar7;
        uStack_50 = uVar8;
        local_49 = cVar3;
        (**(code **)(lVar12 + 0x680))(lVar12 + 0x670,&local_60);
        pvVar2 = local_60;
        cVar3 = local_49;
      }
      if (cVar3 < '\0') {
        operator_delete(pvVar2);
      }
    }
    plVar1 = plVar10 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
LAB_00445494:
  uVar11 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar9,uVar11);
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004454dc  FUN_004454dc =====

void FUN_004454dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c2b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00445530  FUN_00445530 =====

void FUN_00445530(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c2b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00445584  FUN_00445584 =====

void FUN_00445584(long param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  long *plVar10;
  long lVar11;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  char local_49;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar10 = (long *)FUN_005466fc();
    if ((plVar10 == (long *)0x0) || (lVar11 = *(long *)(param_1 + 8), lVar11 == 0)) {
      if (plVar10 == (long *)0x0) goto LAB_00445668;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x2f);
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_48 = (undefined7)uVar3;
      uVar7 = local_48;
      uStack_41 = (undefined1)*(undefined8 *)(param_1 + 0x27);
      uVar8 = uStack_41;
      uStack_40 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x27) >> 8);
      uVar9 = uStack_40;
      if (*(char *)(*(long *)(lVar11 + 0x688) + 0x10) == '\0') {
        local_48 = 0;
        uStack_58 = uVar7;
        uStack_41 = 0;
        uStack_40 = 0;
        local_60 = pvVar2;
        local_51 = uVar8;
        uStack_50 = uVar9;
        local_49 = cVar4;
        (**(code **)(lVar11 + 0x680))(lVar11 + 0x670,&local_60);
        pvVar2 = local_60;
        cVar4 = local_49;
      }
      if (cVar4 < '\0') {
        operator_delete(pvVar2);
      }
    }
    plVar1 = plVar10 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
LAB_00445668:
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00445690  FUN_00445690 =====

void FUN_00445690(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004456f4  FUN_004456f4 =====

undefined1  [16] FUN_004456f4(long *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  uVar11 = param_1[1];
  uVar1 = *param_2;
  uVar10 = (ulong)uVar1;
  if (uVar11 != 0) {
    uVar13 = NEON_cnt(uVar11,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar11 <= uVar10) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar10 / uVar11;
        }
        unaff_x24 = uVar10 - uVar7 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004457b4;
        uVar7 = plVar9[1];
        if (uVar7 != uVar10) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar11 - 1;
          }
          else if (uVar11 <= uVar7) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar7 / uVar11;
            }
            uVar7 = uVar7 - uVar3 * uVar11;
          }
          if (uVar7 != unaff_x24) goto LAB_004457b4;
        }
      } while (*(uint *)(plVar9 + 2) != uVar1);
      uVar13 = 0;
      goto LAB_0044598c;
    }
  }
LAB_004457b4:
  plVar9 = (long *)operator_new(0x28);
  lVar15 = *(long *)(param_3 + 4);
  lVar8 = *(long *)(param_3 + 2);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  lVar4 = param_1[3];
  uVar2 = *param_3;
  *plVar9 = 0;
  plVar9[1] = uVar10;
  plVar9[4] = lVar15;
  plVar9[3] = lVar8;
  fVar14 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar9 + 2) = uVar2;
  if ((uVar11 == 0) || (fVar14 * (float)uVar11 < (float)(lVar4 + 1))) {
    if (uVar11 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar6 = uVar6 | uVar11 << 1;
    uVar11 = (ulong)((float)(lVar4 + 1) / fVar14);
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = FUN_005204f8(uVar6);
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar6) {
LAB_004458d4:
      FUN_004459a4(param_1,uVar6);
    }
    else if (uVar6 < uVar11) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar11 < 3) {
LAB_004458c0:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar13 = NEON_cnt(uVar11,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff)) goto LAB_004458c0;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar11) goto LAB_004458d4;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        unaff_x24 = uVar10 - uVar6 * uVar11;
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar8 = *plVar5;
    *plVar5 = (long)plVar9;
    *plVar9 = lVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar9 != 0) {
      uVar10 = *(ulong *)(*plVar9 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar6 * uVar11;
      }
      plVar5 = (long *)(*param_1 + uVar10 * 8);
      goto LAB_00445978;
    }
  }
  else {
    *plVar9 = *plVar5;
LAB_00445978:
    *plVar5 = (long)plVar9;
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0044598c:
  auVar16._8_8_ = uVar13;
  auVar16._0_8_ = plVar9;
  return auVar16;
}


// ===== 004459a4  FUN_004459a4 =====

void FUN_004459a4(long *param_1,ulong param_2)

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


// ===== 00445b00  FUN_00445b00 =====

void FUN_00445b00(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00445bcc;
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
    if (uVar9 == uVar3) goto LAB_00445bcc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00445bcc:
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


// ===== 00445c34  FUN_00445c34 =====

void FUN_00445c34(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
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
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & uVar1);
    }
    else {
      uVar8 = uVar7;
      if (uVar5 <= uVar7) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar7 / uVar5;
        }
        uVar8 = uVar7 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if (*(uint *)(plVar9 + 2) == uVar1) {
            FUN_00445d40(local_40);
            pvVar4 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
            uVar12 = 1;
            goto LAB_00445cfc;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar2 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_00445cfc:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 00445d40  FUN_00445d40 =====

void FUN_00445d40(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00445e0c;
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
    if (uVar9 == uVar3) goto LAB_00445e0c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00445e0c:
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


// ===== 00445e74  FUN_00445e74 =====

undefined1  [16] FUN_00445e74(long *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  uVar10 = param_1[1];
  uVar1 = *param_2;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar13 = NEON_cnt(uVar10,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00445f34;
        uVar7 = plVar9[1];
        if (uVar7 != uVar11) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar10 - 1;
          }
          else if (uVar10 <= uVar7) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar3 * uVar10;
          }
          if (uVar7 != unaff_x24) goto LAB_00445f34;
        }
      } while (*(uint *)(plVar9 + 2) != uVar1);
      uVar13 = 0;
      goto LAB_00446100;
    }
  }
LAB_00445f34:
  plVar9 = (long *)operator_new(0x18);
  lVar4 = param_1[3];
  uVar2 = *param_3;
  *plVar9 = 0;
  plVar9[1] = uVar11;
  fVar14 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar9 + 2) = uVar2;
  if ((uVar10 == 0) || (fVar14 * (float)uVar10 < (float)(lVar4 + 1))) {
    if (uVar10 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar6 = uVar6 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar4 + 1) / fVar14);
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = FUN_005204f8(uVar6);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar6) {
LAB_00446048:
      FUN_00446118(param_1,uVar6);
    }
    else if (uVar6 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00446034:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar13 = NEON_cnt(uVar10,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff)) goto LAB_00446034;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar10) goto LAB_00446048;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar8 = *plVar5;
    *plVar5 = (long)plVar9;
    *plVar9 = lVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar6 * uVar10;
      }
      plVar5 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_004460ec;
    }
  }
  else {
    *plVar9 = *plVar5;
LAB_004460ec:
    *plVar5 = (long)plVar9;
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00446100:
  auVar15._8_8_ = uVar13;
  auVar15._0_8_ = plVar9;
  return auVar15;
}


// ===== 00446118  FUN_00446118 =====

void FUN_00446118(long *param_1,ulong param_2)

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


// ===== 00446274  FUN_00446274 =====

void FUN_00446274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c438;
  FUN_005466c0();
  return;
}


// ===== 00446284  FUN_00446284 =====

void FUN_00446284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1c438;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004462b4  FUN_004462b4 =====

void FUN_004462b4(long param_1)

{
  FUN_0047db64(param_1 + 0x18);
  return;
}


// ===== 004462bc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004462c0  FUN_004462c0 =====

void FUN_004462c0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_0044638c;
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
    if (uVar9 == uVar3) goto LAB_0044638c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0044638c:
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


// ===== 004463f4  FUN_004463f4 =====

void FUN_004463f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004463f4(param_1,*param_2);
    FUN_004463f4(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00446444  FUN_00446444 =====

undefined1  [16] FUN_00446444(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  plVar6 = (long *)param_1[1];
  plVar8 = param_1 + 1;
  while (plVar9 = plVar8, plVar6 != (long *)0x0) {
    while( true ) {
      plVar9 = plVar6;
      uVar3 = FUN_0041d7a0(param_2,plVar9 + 4);
      if ((uVar3 >> 7 & 1) != 0) break;
      uVar3 = FUN_0041d7a0(plVar9 + 4,param_2);
      if ((uVar3 >> 7 & 1) == 0) {
        puVar4 = (undefined8 *)*plVar8;
        if (puVar4 == (undefined8 *)0x0) goto LAB_004464c0;
        uVar7 = 0;
        goto LAB_00446594;
      }
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      if ((long *)*plVar8 == (long *)0x0) goto LAB_004464c0;
    }
    plVar8 = plVar9;
    plVar6 = (long *)*plVar9;
  }
LAB_004464c0:
  puVar4 = (undefined8 *)operator_new(0x38);
  puVar5 = puVar4 + 4;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x37) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      puVar4[4] = puVar5;
      puVar4[5] = uVar2;
      puVar4[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= __src) && (__src < (undefined8 *)((long)puVar5 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar5,__src,uVar2 + 1);
  }
  else {
    uVar10 = *param_3;
    uVar7 = param_3[2];
    puVar4[5] = param_3[1];
    *puVar5 = uVar10;
    puVar4[6] = uVar7;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar9;
  *plVar8 = (long)puVar4;
  puVar5 = puVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*plVar8;
  }
  FUN_0041dcd0(param_1[1],puVar5);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
LAB_00446594:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = puVar4;
  return auVar11;
}


// ===== 004465dc  FUN_004465dc =====

void FUN_004465dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(*(long *)(lVar1 + 0x710) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004465f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x708))(lVar1 + 0x6f8);
  return;
}


// ===== 004465fc  FUN_004465fc =====

undefined1  [16] FUN_004465fc(long *param_1,ushort *param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar9 = param_1[1];
  uVar10 = (ulong)*param_2;
  if (uVar9 != 0) {
    uVar12 = NEON_cnt(uVar9,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = (int)uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_004466c4;
        uVar6 = plVar8[1];
        if (uVar6 != uVar10) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar9 - 1;
          }
          else if (uVar9 <= uVar6) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar2 * uVar9;
          }
          if (uVar6 != unaff_x25) goto LAB_004466c4;
        }
      } while (*(ushort *)(plVar8 + 2) != *param_2);
      uVar12 = 0;
      goto LAB_00446898;
    }
  }
LAB_004466c4:
  plVar8 = (long *)operator_new(0x18);
  lVar3 = param_1[3];
  uVar11 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  uVar1 = *param_4;
  fVar13 = *(float *)(param_1 + 4);
  *(undefined2 *)(plVar8 + 2) = uVar11;
  *(undefined4 *)((long)plVar8 + 0x12) = uVar1;
  if ((uVar9 == 0) || (fVar13 * (float)uVar9 < (float)(lVar3 + 1))) {
    if (uVar9 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 << 1;
    uVar6 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = FUN_005204f8(uVar5);
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar5) {
LAB_004467e0:
      FUN_004468b4(param_1,uVar5);
    }
    else if (uVar5 < uVar9) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar9 < 3) {
LAB_004467cc:
        uVar6 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar9,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_004467cc;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar9) goto LAB_004467e0;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = (int)uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar7 = *plVar4;
    *plVar4 = (long)plVar8;
    *plVar8 = lVar7;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar4;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar5 * uVar9;
      }
      plVar4 = (long *)(*param_1 + uVar10 * 8);
      goto LAB_00446884;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_00446884:
    *plVar4 = (long)plVar8;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00446898:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar8;
  return auVar14;
}


// ===== 004468b4  FUN_004468b4 =====

void FUN_004468b4(long *param_1,ulong param_2)

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


// ===== 00446a10  FUN_00446a10 =====

void FUN_00446a10(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c2d8;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00446a90  FUN_00446a90 =====

void FUN_00446a90(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1c2d8;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    lVar2 = param_1[2];
  }
  else {
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00446b10  FUN_00446b10 =====

void FUN_00446b10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00446b68(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00446b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 00446b68  FUN_00446b68 =====

void FUN_00446b68(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined1 **__dest;
  long lVar8;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (param_1[1] != 0) {
    plVar7 = (long *)FUN_005466fc();
    if ((plVar7 == (long *)0x0) || (lVar8 = *param_1, lVar8 == 0)) {
      if (plVar7 == (long *)0x0) goto LAB_00446c90;
    }
    else if (*(char *)(*(long *)(lVar8 + 0x648) + 0x10) == '\0') {
      if (*(char *)((long)param_1 + 0x27) < '\0') {
        __src = (undefined1 *)param_1[2];
        uVar3 = param_1[3];
        if (uVar3 < 0x17) {
          local_50 = CONCAT17((char)uVar3,(undefined7)local_50);
        }
        else {
          if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar3 | 0xf) + 1;
          __dest = (undefined1 **)operator_new(uVar1);
          local_50 = uVar1 | 0x8000000000000000;
          local_60 = (undefined1 *)__dest;
          uStack_58 = uVar3;
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
        uStack_58 = param_1[3];
        local_60 = (undefined1 *)param_1[2];
        local_50 = param_1[4];
      }
      (**(code **)(lVar8 + 0x640))(lVar8 + 0x630,&local_60);
      if ((long)local_50 < 0) {
        operator_delete(local_60);
      }
    }
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
LAB_00446c90:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00446ce8  FUN_00446ce8 =====

void FUN_00446ce8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c300;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00446d3c  FUN_00446d3c =====

void FUN_00446d3c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00d1c300;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    lVar1 = param_1[2];
  }
  else {
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00446d90  FUN_00446d90 =====

void FUN_00446d90(long param_1)

{
  FUN_00446b68(param_1 + 8);
  return;
}


// ===== 00446d98  FUN_00446d98 =====

void FUN_00446d98(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00446dbc  FUN_00446dbc =====

void FUN_00446dbc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00446dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00446dd4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00446dd8  FUN_00446dd8 =====

void FUN_00446dd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)puVar1[0xb];
    pvVar3 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[0xc] = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)puVar1[8];
    if (pvVar2 != (void *)0x0) {
      puVar1[9] = pvVar2;
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)puVar1[5];
    if (pvVar2 != (void *)0x0) {
      puVar1[6] = pvVar2;
      operator_delete(pvVar2);
    }
    if (*(char *)((long)puVar1 + 0x27) < '\0') {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 00446e78  FUN_00446e78 =====

long * FUN_00446e78(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  uVar7 = FUN_00427058(auStack_70,puVar5,uVar7);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar14 = NEON_cnt(uVar10,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar11 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar7;
    }
    else {
      uVar12 = uVar7;
      if (uVar10 <= uVar7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar7 / uVar10;
        }
        uVar12 = uVar7 - uVar12 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar12 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        puVar5 = (undefined8 *)*param_2;
        __n = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          puVar5 = param_2;
          __n = (ulong)*(byte *)((long)param_2 + 0x17);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
            bVar2 = *(byte *)((long)plVar8 + 0x27);
            sVar1 = plVar8[3];
            if (-1 < (char)bVar2) {
              sVar1 = (ulong)bVar2;
            }
            if (sVar1 == __n) {
              if ((char)bVar2 < '\0') {
                if ((__n == 0) || (iVar6 = memcmp((void *)plVar8[2],puVar5,__n), iVar6 == 0)) break;
              }
              else {
                if (bVar2 == 0) break;
                uVar9 = 0;
                while (*(char *)((long)plVar8 + uVar9 + 0x10) == *(char *)((long)puVar5 + uVar9)) {
                  uVar9 = uVar9 + 1;
                  if (bVar2 == uVar9) goto LAB_00446ffc;
                }
              }
            }
          }
          else {
            if (uVar11 < 2) {
              uVar9 = uVar9 & uVar10 - 1;
            }
            else if (uVar10 <= uVar9) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar3 * uVar10;
            }
            if (uVar9 != uVar12) goto LAB_00446ff8;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_00446ffc;
    }
  }
LAB_00446ff8:
  plVar8 = (long *)0x0;
LAB_00446ffc:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00447034  FUN_00447034 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00447034(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar2 = tpidr_el0;
  ppuVar3 = local_178 + 1;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar6,ppuVar3);
  local_178[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar3);
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0054c088(local_178,*param_2);
  FUN_0054d504(param_1,ppuVar3);
  local_178[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar3);
  FUN_0054b3d4(local_178,puVar5 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00447188  FUN_00447188 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00447188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_178 [9];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [30];
  long local_70;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar4 = PTR_DAT_00d51b48;
  lVar2 = tpidr_el0;
  ppuVar3 = local_178 + 1;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_00d51b50 + 8);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
  FUN_00520e8c((long)local_178 + lVar6,ppuVar3);
  local_178[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
  local_108[0] = puVar1;
  FUN_0054a4c8(ppuVar3);
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004e76c4(local_178,param_2);
  FUN_0054d504(param_1,ppuVar3);
  local_178[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_178[1] = puVar1;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar3);
  FUN_0054b3d4(local_178,puVar5 + 8);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004472dc  FUN_004472dc =====

void FUN_004472dc(undefined8 *param_1)

{
  FUN_0043f2e0(*param_1);
  return;
}


// ===== 004472e4  FUN_004472e4 =====

void FUN_004472e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00447348  FUN_00447348 =====

void FUN_00447348(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*param_1 + 0xf8);
  uVar1 = FUN_004624c4(*(undefined8 *)(*param_1 + 0x3d8));
                    /* WARNING: Could not recover jumptable at 0x0044737c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,uVar1);
  return;
}


// ===== 00447380  FUN_00447380 =====

void FUN_00447380(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_005467a4(lVar1);
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_007b5df8(lVar1 + 0x28,lVar2);
    FUN_005467c8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004473e4  FUN_004473e4 =====

undefined8 FUN_004473e4(void)

{
  return 1;
}


// ===== 004473ec  FUN_004473ec =====

void FUN_004473ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = uVar1;
  return;
}


// ===== 004473f8  FUN_004473f8 =====

void FUN_004473f8(undefined8 *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *__modes;
  FILE *pFVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  pcVar1 = "rb+";
  if (param_3 != 1) {
    pcVar1 = (char *)0x0;
  }
  __modes = "wb+";
  if (param_3 != 0) {
    __modes = pcVar1;
  }
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  pFVar2 = fopen(pcVar1,__modes);
  *param_1 = pFVar2;
  uVar3 = FUN_005ce36c();
  param_1[1] = uVar3;
  return;
}


// ===== 0044745c  FUN_0044745c =====

int FUN_0044745c(undefined8 *param_1)

{
  int iVar1;
  
  if ((FILE *)*param_1 != (FILE *)0x0) {
    iVar1 = fclose((FILE *)*param_1);
    return iVar1;
  }
  return 0;
}


// ===== 0044746c  FUN_0044746c =====

void FUN_0044746c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(auStack_60,7);
  FUN_004df478(auStack_88,param_2);
  uVar2 = FUN_004e1438(auStack_60,"userId");
  FUN_004dfa04(uVar2,auStack_88);
  FUN_004df880(auStack_88);
  FUN_0044750c(param_1,0,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044750c  FUN_0044750c =====

void FUN_0044750c(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  size_t __size;
  undefined8 ***__ptr;
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 **local_88;
  size_t sStack_80;
  byte local_71;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  char local_51;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004e36c8(&local_70);
  FUN_004e36e0(&local_88,&local_70,param_3);
  local_70 = &PTR_FUN_00d1f540;
  if (local_51 < '\0') {
    operator_delete((void *)CONCAT44(uStack_64,local_68));
  }
  FUN_004e36c0(&local_70);
  bVar2 = local_71;
  __ptr = (undefined8 ***)local_88;
  __size = sStack_80;
  if (-1 < (char)local_71) {
    __size = (ulong)local_71;
  }
  lVar3 = FUN_005ce36c();
  local_68 = param_2 & 0xff;
  uStack_64 = (undefined4)__size;
  local_70 = (undefined **)(lVar3 - param_1[1]);
  if ((FILE *)*param_1 != (FILE *)0x0) {
    if (-1 < (char)bVar2) {
      __ptr = &local_88;
    }
    fwrite(&local_70,0x10,1,(FILE *)*param_1);
    fwrite(__ptr,__size,1,(FILE *)*param_1);
  }
  if ((char)local_71 < '\0') {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00447618  FUN_00447618 =====

void FUN_00447618(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  long local_68;
  int *piVar9;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_004df134(auStack_90,6);
  FUN_004df134(auStack_b8,6);
  piVar1 = (int *)param_4[1];
  if ((int *)*param_4 == piVar1) {
    iVar6 = 0;
  }
  else {
    iVar7 = 0;
    piVar8 = (int *)*param_4;
    iVar5 = 0;
    do {
      piVar9 = piVar8 + 1;
      iVar2 = *piVar8;
      iVar6 = iVar2;
      if (iVar5 != 0) {
        iVar6 = iVar5;
      }
      FUN_004df1ec(auStack_e0,iVar2);
      uVar4 = FUN_004e0998(auStack_90,iVar7);
      FUN_004dfa04(uVar4,auStack_e0);
      FUN_004df880(auStack_e0);
      FUN_004df1ec(auStack_e0,iVar2 + 1);
      uVar4 = FUN_004e0998(auStack_b8,iVar7);
      FUN_004dfa04(uVar4,auStack_e0);
      FUN_004df880(auStack_e0);
      iVar7 = iVar7 + 1;
      piVar8 = piVar9;
      iVar5 = iVar6;
    } while (piVar9 != piVar1);
  }
  FUN_004df134(auStack_e0,7);
  FUN_004df478(auStack_108,param_2);
  uVar4 = FUN_004e1438(auStack_e0,"userId");
  FUN_004dfa04(uVar4,auStack_108);
  FUN_004df880(auStack_108);
  FUN_004df1ec(auStack_108,param_3);
  uVar4 = FUN_004e1438(auStack_e0,"audioSsrc");
  FUN_004dfa04(uVar4,auStack_108);
  FUN_004df880(auStack_108);
  FUN_004df1ec(auStack_108,iVar6);
  uVar4 = FUN_004e1438(auStack_e0,"videoSsrc");
  FUN_004dfa04(uVar4,auStack_108);
  FUN_004df880(auStack_108);
  uVar4 = FUN_004e1438(auStack_e0,"videoSsrcs");
  FUN_004df948(uVar4,auStack_90);
  uVar4 = FUN_004e1438(auStack_e0,"rtxSsrcs");
  FUN_004df948(uVar4,auStack_b8);
  FUN_0044750c(param_1,1,auStack_e0);
  FUN_004df880(auStack_e0);
  FUN_004df880(auStack_b8);
  FUN_004df880(auStack_90);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0044780c  FUN_0044780c =====

void FUN_0044780c(undefined8 *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = FUN_005ce36c();
  uStack_3c = (undefined4)param_3;
  local_40 = 4;
  local_48 = local_48 - param_1[1];
  if ((FILE *)*param_1 == (FILE *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    fwrite(&local_48,0x10,1,(FILE *)*param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      fwrite(param_2,param_3,1,(FILE *)*param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004478c0  FUN_004478c0 =====

uint FUN_004478c0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  code *pcVar5;
  ulong __size;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  if ((FILE *)*param_1 == (FILE *)0x0) {
    uVar2 = 0;
    goto LAB_004479a4;
  }
  sVar3 = fread(&local_48,0x10,1,(FILE *)*param_1);
  if (sVar3 == 1) {
    __size = (ulong)local_3c;
    uVar4 = (long)local_58 - (long)local_60;
    if (uVar4 < __size) {
      FUN_00432ba8(&local_60,__size - uVar4);
    }
    else if (__size < uVar4) {
      local_58 = (void *)((long)local_60 + __size);
    }
    sVar3 = fread(local_60,__size,1,(FILE *)*param_1);
    if (sVar3 != 1) goto LAB_00447990;
    if (local_40 < 3) {
      uVar2 = FUN_00447a20(1,param_2,&local_48,&local_60);
    }
    else {
      if (local_40 == 3) {
        pcVar5 = *(code **)(*param_2 + 0x18);
LAB_00447a04:
        (*pcVar5)(param_2,local_48,local_60,(long)local_58 - (long)local_60);
      }
      else if (local_40 == 4) {
        pcVar5 = *(code **)(*param_2 + 0x20);
        goto LAB_00447a04;
      }
      uVar2 = 1;
    }
  }
  else {
LAB_00447990:
    uVar2 = 0;
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
LAB_004479a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00447a20  FUN_00447a20 =====

undefined4 FUN_00447a20(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  void *local_150 [2];
  char local_139;
  void *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  ulong local_100;
  long local_f8;
  void *local_f0;
  char local_d9;
  void *local_b0;
  char local_99;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_004df134(auStack_90,0);
  uVar14 = *param_4;
  uVar2 = param_4[1];
  FUN_004d9768(local_150);
  uVar8 = FUN_004d9ab0(local_150,uVar14,uVar2,auStack_90,1);
  if ((uVar8 & 1) == 0) {
    if (local_99 < '\0') {
      operator_delete(local_b0);
    }
    if (local_d9 < '\0') {
      operator_delete(local_f0);
    }
    puVar13 = local_118;
    if (local_110 != local_118) {
      uVar8 = local_f8 + local_100;
      plVar16 = local_118 + local_100 / 0x49;
      lVar11 = local_118[uVar8 / 0x49];
      lVar9 = *plVar16;
      lVar1 = lVar9 + (local_100 % 0x49) * 0x38;
      puVar13 = local_110;
      while (local_110 = puVar13, lVar1 != lVar11 + (uVar8 % 0x49) * 0x38) {
        if (lVar1 == 0) goto LAB_00447f20;
        if (*(char *)(lVar1 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x18));
          lVar9 = *plVar16;
        }
        lVar1 = lVar1 + 0x38;
        puVar13 = local_110;
        if (lVar1 - lVar9 == 0xff8) {
          plVar16 = plVar16 + 1;
          lVar9 = *plVar16;
          lVar1 = lVar9;
        }
      }
    }
    local_f8 = 0;
    uVar8 = (long)puVar13 - (long)local_118;
    while (0x10 < uVar8) {
      operator_delete((void *)*local_118);
      local_118 = local_118 + 1;
      puVar13 = local_110;
      uVar8 = (long)local_110 - (long)local_118;
    }
    if (uVar8 >> 3 == 1) {
      local_100 = 0x24;
    }
    else if (uVar8 >> 3 == 2) {
      local_100 = 0x49;
    }
    puVar12 = local_118;
    if (local_118 != puVar13) {
      do {
        puVar15 = puVar12 + 1;
        operator_delete((void *)*puVar12);
        puVar12 = puVar15;
      } while (puVar15 != puVar13);
      if (local_110 != local_118) {
        local_110 = (undefined8 *)
                    ((long)local_110 +
                    ((long)local_118 + (7 - (long)local_110) & 0xfffffffffffffff8U));
      }
    }
    if (local_120 != (void *)0x0) {
      operator_delete(local_120);
    }
    FUN_004491b8(local_150);
  }
  else {
    uVar8 = FUN_004e05d4(auStack_90);
    if (local_99 < '\0') {
      operator_delete(local_b0);
    }
    if (local_d9 < '\0') {
      operator_delete(local_f0);
    }
    puVar13 = local_118;
    if (local_110 != local_118) {
      uVar10 = local_f8 + local_100;
      plVar16 = local_118 + local_100 / 0x49;
      lVar11 = local_118[uVar10 / 0x49];
      lVar9 = *plVar16;
      lVar1 = lVar9 + (local_100 % 0x49) * 0x38;
      puVar13 = local_110;
      while (local_110 = puVar13, lVar1 != lVar11 + (uVar10 % 0x49) * 0x38) {
        if (lVar1 == 0) {
LAB_00447f20:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        if (*(char *)(lVar1 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x18));
          lVar9 = *plVar16;
        }
        lVar1 = lVar1 + 0x38;
        puVar13 = local_110;
        if (lVar1 - lVar9 == 0xff8) {
          plVar16 = plVar16 + 1;
          lVar9 = *plVar16;
          lVar1 = lVar9;
        }
      }
    }
    local_f8 = 0;
    uVar10 = (long)puVar13 - (long)local_118;
    while (0x10 < uVar10) {
      operator_delete((void *)*local_118);
      local_118 = local_118 + 1;
      puVar13 = local_110;
      uVar10 = (long)local_110 - (long)local_118;
    }
    if (uVar10 >> 3 == 1) {
      local_100 = 0x24;
    }
    else if (uVar10 >> 3 == 2) {
      local_100 = 0x49;
    }
    puVar12 = local_118;
    if (local_118 != puVar13) {
      do {
        puVar15 = puVar12 + 1;
        operator_delete((void *)*puVar12);
        puVar12 = puVar15;
      } while (puVar15 != puVar13);
      if (local_110 != local_118) {
        local_110 = (undefined8 *)
                    ((long)local_110 +
                    ((long)local_118 + (7 - (long)local_110) & 0xfffffffffffffff8U));
      }
    }
    if (local_120 != (void *)0x0) {
      operator_delete(local_120);
    }
    FUN_004491b8(local_150);
    if ((uVar8 & 1) != 0) {
      iVar3 = *(int *)(param_3 + 1);
      if (iVar3 == 2) {
        uVar14 = *param_3;
        FUN_004e1438(auStack_90,"codec");
        FUN_004dfbf8(local_150);
        FUN_004e1438(auStack_90,"payloadType");
        uVar5 = FUN_004dff08();
        (**(code **)(*param_2 + 0x10))(param_2,uVar14,local_150,uVar5);
      }
      else if (iVar3 == 1) {
        uVar14 = *param_3;
        FUN_004e1438(auStack_90,"userId");
        FUN_004dfbf8(local_150);
        FUN_004e1438(auStack_90,"audioSsrc");
        uVar5 = FUN_004dff08();
        FUN_004e1438(auStack_90,"videoSsrc");
        uVar6 = FUN_004dff08();
        FUN_004e1438(auStack_90,"rtxSsrc");
        uVar7 = FUN_004dff08();
        (**(code **)(*param_2 + 8))(param_2,uVar14,local_150,uVar5,uVar6,uVar7);
      }
      else {
        if (iVar3 != 0) goto LAB_00447dec;
        uVar14 = *param_3;
        FUN_004e1438(auStack_90,"userId");
        FUN_004dfbf8(local_150);
        (**(code **)*param_2)(param_2,uVar14,local_150);
      }
      if (local_139 < '\0') {
        operator_delete(local_150[0]);
      }
      uVar5 = 1;
      goto LAB_00447df0;
    }
  }
LAB_00447dec:
  uVar5 = 0;
LAB_00447df0:
  FUN_004df880(auStack_90);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


// ===== 00447f4c  FUN_00447f4c =====

void FUN_00447f4c(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *__filename;
  byte bVar1;
  undefined8 *puVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  __filename = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __filename = param_2;
  }
  pFVar3 = fopen(__filename,"rb+");
  *puVar2 = pFVar3;
  uVar4 = FUN_005ce36c();
  puVar2[1] = uVar4;
  *param_1 = puVar2;
  param_1[1] = param_4;
  FUN_005156ac(param_1 + 2,param_3,param_1);
  param_1[7] = &PTR_FUN_00d1c4a8;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  do {
    bVar1 = FUN_004478c0(*param_1,param_1 + 7);
    *(byte *)(param_1 + 5) = (bVar1 ^ 0xff) & 1;
    if ((~bVar1 & 1) != 0) break;
  } while ((ulong)param_1[0xd] < 1000);
  if ((param_1[0xd] != 0) && (*(char *)(param_1 + 0x11) == '\0')) {
    uVar5 = param_1[0xc];
    do {
      lVar6 = *(long *)(param_1[9] + (uVar5 / 0x55) * 8) + (uVar5 % 0x55) * 0x30;
      (**(code **)(lVar6 + 0x28))(lVar6 + 0x10,0x10,param_1);
      lVar6 = *(long *)(param_1[9] + ((ulong)param_1[0xc] / 0x55) * 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      lVar6 = lVar6 + ((ulong)param_1[0xc] % 0x55) * 0x30;
      puVar2 = (undefined8 *)(lVar6 + 0x20);
      (*(code *)*puVar2)(puVar2,3,lVar6 + 0x10,0x10,0,0);
      lVar6 = param_1[0xd] + -1;
      uVar5 = param_1[0xc] + 1;
      param_1[0xc] = uVar5;
      param_1[0xd] = lVar6;
      if (0xa9 < uVar5) {
        operator_delete(*(void **)param_1[9]);
        lVar6 = param_1[0xd];
        uVar5 = param_1[0xc] - 0x55;
        param_1[9] = param_1[9] + 8;
        param_1[0xc] = uVar5;
      }
    } while ((lVar6 != 0) && (*(char *)(param_1 + 0x11) == '\0'));
  }
  return;
}


// ===== 00448128  FUN_00448128 =====

void FUN_00448128(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_00515738(param_1 + 2);
  if (param_1[3] != 0) {
    FUN_005ce374(param_1[3],PTR_free_00d51ac0);
    param_1[3] = 0;
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  param_1[7] = &PTR_FUN_00d1c4a8;
  FUN_00449314(param_1 + 8);
  puVar3 = (undefined8 *)param_1[10];
  puVar4 = (undefined8 *)param_1[9];
  if ((undefined8 *)param_1[9] != puVar3) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar3);
    lVar1 = param_1[10];
    if (lVar1 != param_1[9]) {
      param_1[10] = lVar1 + ((param_1[9] - lVar1) + 7U & 0xfffffffffffffff8);
    }
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  param_1[2] = &PTR_FUN_00d193e8;
  if (param_1[3] != 0) {
    FUN_005ce374(param_1[3],PTR_free_00d51ac0);
    param_1[3] = 0;
  }
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if ((FILE *)*puVar3 != (FILE *)0x0) {
      fclose((FILE *)*puVar3);
    }
    operator_delete(puVar3);
    return;
  }
  return;
}


// ===== 0044822c  FUN_0044822c =====

bool FUN_0044822c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)*param_1;
  if (lVar2 != 0) {
    FUN_00515708(param_1 + 2,FUN_0044827c,1,1);
    uVar1 = FUN_005ce36c();
    param_1[6] = uVar1;
  }
  return lVar2 != 0;
}


// ===== 0044827c  FUN_0044827c =====

void FUN_0044827c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0044828c();
    return;
  }
  return;
}


// ===== 0044828c  FUN_0044828c =====

void FUN_0044828c(undefined8 *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = FUN_005ce36c();
  uVar4 = param_1[0xd];
  while (uVar4 != 0) {
    uVar6 = (ulong)param_1[0xc] % 0x55;
    lVar5 = *(long *)(param_1[9] + ((ulong)param_1[0xc] / 0x55) * 8);
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (uVar2 < (ulong)(param_1[6] + *(long *)(lVar5 + uVar6 * 0x30)))) break;
    lVar5 = lVar5 + uVar6 * 0x30;
    (**(code **)(lVar5 + 0x28))(lVar5 + 0x10,0x10,param_1);
    lVar5 = *(long *)(param_1[9] + ((ulong)param_1[0xc] / 0x55) * 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
    }
    lVar5 = lVar5 + ((ulong)param_1[0xc] % 0x55) * 0x30;
    puVar3 = (undefined8 *)(lVar5 + 0x20);
    (*(code *)*puVar3)(puVar3,3,lVar5 + 0x10,0x10,0,0);
    lVar5 = param_1[0xc];
    uVar4 = param_1[0xd] - 1;
    param_1[0xc] = lVar5 + 1U;
    param_1[0xd] = uVar4;
    if (0xa9 < lVar5 + 1U) {
      operator_delete(*(void **)param_1[9]);
      uVar4 = param_1[0xd];
      param_1[9] = param_1[9] + 8;
      param_1[0xc] = param_1[0xc] + -0x55;
    }
  }
  if ((*(char *)(param_1 + 5) == '\0') && (uVar4 < 1000)) {
    do {
      bVar1 = FUN_004478c0(*param_1,param_1 + 7);
      *(byte *)(param_1 + 5) = (bVar1 ^ 0xff) & 1;
      if ((~bVar1 & 1) != 0) {
        return;
      }
    } while ((ulong)param_1[0xd] < 1000);
  }
  return;
}


// ===== 00448418  FUN_00448418 =====

void FUN_00448418(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 ***__src;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 **local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  code *local_80 [3];
  long local_68;
  
  pppuVar7 = &local_f0;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_e0 = CONCAT17((char)uVar3,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = (uVar3 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar10);
      local_e0 = uVar10 | 0x8000000000000000;
      local_f0 = pppuVar7;
      uStack_e8 = uVar3;
    }
    if ((pppuVar7 <= __src) && (__src < (undefined8 ***)((long)pppuVar7 + uVar3 + 1)))
    goto LAB_004486f8;
    memmove(pppuVar7,__src,uVar3 + 1);
  }
  else {
    uStack_e8 = param_3[1];
    local_f0 = (undefined8 **)*param_3;
    local_e0 = param_3[2];
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar11 = 0;
  if (lVar9 != lVar8) {
    lVar11 = (lVar9 - lVar8 >> 3) * 0x55 + -1;
  }
  local_d8 = param_2;
  if (lVar11 == *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) {
    FUN_00449478(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  uVar3 = uStack_e8;
  ppuVar5 = local_f0;
  if (lVar9 == lVar8) {
LAB_00448720:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar10 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(lVar8 + (uVar10 / 0x55) * 8);
  if (lVar11 == 0) goto LAB_00448720;
  if ((long)local_e0 < 0) {
    if (uStack_e8 < 0x17) {
      pppuVar7 = &local_b0;
      local_a0 = CONCAT17((char)uStack_e8,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uStack_e8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_e8 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      uStack_a8 = uVar3;
      local_b0 = pppuVar7;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar7 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar7 + sVar2)))
    goto LAB_004486f8;
    memmove(pppuVar7,ppuVar5,sVar2);
  }
  else {
    uStack_a8 = uStack_e8;
    local_b0 = local_f0;
    local_a0 = local_e0;
  }
  uVar3 = uStack_a8;
  ppuVar5 = local_b0;
  uVar6 = local_d8;
  local_98 = local_d8;
  if ((long)local_a0 < 0) {
    if (uStack_a8 < 0x17) {
      pppuVar7 = &local_d0;
      local_c0 = CONCAT17((char)uStack_a8,(undefined7)local_c0);
    }
    else {
      if (0x7fffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_a8 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar1);
      local_c0 = uVar1 | 0x8000000000000000;
      uStack_c8 = uVar3;
      local_d0 = pppuVar7;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar7 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar7 + sVar2))) {
LAB_004486f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar7,ppuVar5,sVar2);
    local_b8 = uVar6;
    operator_delete(ppuVar5);
  }
  else {
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    local_c0 = local_a0;
    local_b8 = local_d8;
  }
  uVar10 = uVar10 % 0x55;
  FUN_00449e64(&local_d0,local_80,auStack_90,0x10);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  *(undefined8 *)(lVar11 + uVar10 * 0x30) = param_2;
  lVar11 = lVar11 + uVar10 * 0x30;
  (*local_80[0])(lVar11 + 0x20,0,auStack_90,0x10,lVar11 + 0x10,0x10);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00448758  FUN_00448758 =====

void FUN_00448758(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 ***__src;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 **local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 **local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 **local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 auStack_90 [16];
  code *local_80 [2];
  long local_70;
  
  pppuVar6 = &local_120;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_110 = CONCAT17((char)uVar3,(undefined7)local_110);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar3 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar9);
      local_110 = uVar9 | 0x8000000000000000;
      local_120 = pppuVar6;
      uStack_118 = uVar3;
    }
    if ((pppuVar6 <= __src) && (__src < (undefined8 ***)((long)pppuVar6 + uVar3 + 1)))
    goto LAB_00448a78;
    memmove(pppuVar6,__src,uVar3 + 1);
  }
  else {
    uStack_118 = param_3[1];
    local_120 = (undefined8 **)*param_3;
    local_110 = param_3[2];
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  lVar10 = 0;
  if (lVar8 != lVar7) {
    lVar10 = (lVar8 - lVar7 >> 3) * 0x55 + -1;
  }
  local_108 = param_2;
  uStack_100 = param_4;
  uStack_fc = param_5;
  local_f8 = param_6;
  if (lVar10 == *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) {
    FUN_00449478(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  uVar3 = uStack_118;
  ppuVar5 = local_120;
  if (lVar8 == lVar7) {
LAB_00448aa0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar9 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  lVar10 = *(long *)(lVar7 + (uVar9 / 0x55) * 8);
  if (lVar10 == 0) goto LAB_00448aa0;
  if ((long)local_110 < 0) {
    if (uStack_118 < 0x17) {
      pppuVar6 = &local_c0;
      local_b0 = CONCAT17((char)uStack_118,(undefined7)local_b0);
    }
    else {
      if (0x7fffffffffffffef < uStack_118) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_118 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      local_b0 = uVar1 | 0x8000000000000000;
      uStack_b8 = uVar3;
      local_c0 = pppuVar6;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar6 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar6 + sVar2)))
    goto LAB_00448a78;
    memmove(pppuVar6,ppuVar5,sVar2);
  }
  else {
    uStack_b8 = uStack_118;
    local_c0 = local_120;
    local_b0 = local_110;
  }
  uVar3 = uStack_b8;
  ppuVar5 = local_c0;
  uStack_a0 = CONCAT44(uStack_fc,uStack_100);
  local_a8 = local_108;
  local_98 = local_f8;
  if ((long)local_b0 < 0) {
    if (uStack_b8 < 0x17) {
      pppuVar6 = &local_f0;
      local_e0 = CONCAT17((char)uStack_b8,(undefined7)local_e0);
    }
    else {
      if (0x7fffffffffffffef < uStack_b8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_b8 | 0xf) + 1;
      pppuVar6 = (undefined8 ***)operator_new(uVar1);
      local_e0 = uVar1 | 0x8000000000000000;
      uStack_e8 = uVar3;
      local_f0 = pppuVar6;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar6 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar6 + sVar2))) {
LAB_00448a78:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar6,ppuVar5,sVar2);
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    local_d8 = local_108;
    local_c8 = local_f8;
    operator_delete(ppuVar5);
  }
  else {
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    uStack_e8 = uStack_b8;
    local_f0 = local_c0;
    local_e0 = local_b0;
    local_d8 = local_108;
    local_c8 = local_f8;
  }
  uVar9 = uVar9 % 0x55;
  FUN_0044a2b0(&local_f0,local_80,auStack_90,0x10);
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  *(undefined8 *)(lVar10 + uVar9 * 0x30) = param_2;
  lVar10 = lVar10 + uVar9 * 0x30;
  (*local_80[0])(lVar10 + 0x20,0,auStack_90,0x10,lVar10 + 0x10,0x10);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  if ((long)local_110 < 0) {
    operator_delete(local_120);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00448ad8  FUN_00448ad8 =====

void FUN_00448ad8(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 ***__src;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 **local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 **local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 auStack_90 [16];
  code *local_80 [2];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pppuVar7 = &local_100;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_f0 = CONCAT17((char)uVar3,(undefined7)local_f0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = (uVar3 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar10);
      local_f0 = uVar10 | 0x8000000000000000;
      local_100 = pppuVar7;
      uStack_f8 = uVar3;
    }
    if ((pppuVar7 <= __src) && (__src < (undefined8 ***)((long)pppuVar7 + uVar3 + 1)))
    goto LAB_00448e00;
    memmove(pppuVar7,__src,uVar3 + 1);
  }
  else {
    uStack_f8 = param_3[1];
    local_100 = (undefined8 **)*param_3;
    local_f0 = param_3[2];
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar11 = 0;
  if (lVar9 != lVar8) {
    lVar11 = (lVar9 - lVar8 >> 3) * 0x55 + -1;
  }
  local_e8 = param_4;
  if (lVar11 == *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) {
    FUN_00449478(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  uVar3 = uStack_f8;
  ppuVar5 = local_100;
  if (lVar9 == lVar8) {
LAB_00448e28:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar10 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(lVar8 + (uVar10 / 0x55) * 8);
  if (lVar11 == 0) goto LAB_00448e28;
  pppuVar7 = &local_b0;
  local_b8 = param_2;
  if ((long)local_f0 < 0) {
    if (uStack_f8 < 0x17) {
      local_a0 = CONCAT17((char)uStack_f8,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_f8 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      uStack_a8 = uVar3;
      local_b0 = pppuVar7;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar7 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar7 + sVar2)))
    goto LAB_00448e00;
    memmove(pppuVar7,ppuVar5,sVar2);
  }
  else {
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    local_a0 = local_f0;
  }
  uVar3 = uStack_a8;
  ppuVar5 = local_b0;
  uVar6 = local_e8;
  pppuVar7 = &local_d8;
  local_98 = local_e8;
  local_e0 = param_2;
  if ((long)local_a0 < 0) {
    if (uStack_a8 < 0x17) {
      local_c8 = CONCAT17((char)uStack_a8,(undefined7)local_c8);
    }
    else {
      if (0x7fffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_a8 | 0xf) + 1;
      pppuVar7 = (undefined8 ***)operator_new(uVar1);
      local_c8 = uVar1 | 0x8000000000000000;
      uStack_d0 = uVar3;
      local_d8 = pppuVar7;
    }
    sVar2 = uVar3 + 1;
    if ((pppuVar7 <= ppuVar5) && (ppuVar5 < (undefined8 ***)((long)pppuVar7 + sVar2))) {
LAB_00448e00:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar7,ppuVar5,sVar2);
    local_c0 = uVar6;
    operator_delete(ppuVar5);
  }
  else {
    local_c0 = local_e8;
    uStack_d0 = uStack_a8;
    local_d8 = local_b0;
    local_c8 = local_a0;
  }
  uVar10 = uVar10 % 0x55;
  FUN_0044a7c8(&local_e0,local_80,auStack_90,0x10);
  if ((long)local_c8 < 0) {
    operator_delete(local_d8);
  }
  *(undefined8 *)(lVar11 + uVar10 * 0x30) = param_2;
  lVar11 = lVar11 + uVar10 * 0x30;
  (*local_80[0])(lVar11 + 0x20,0,auStack_90,0x10,lVar11 + 0x10,0x10);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  if ((long)local_f0 < 0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00448e60  FUN_00448e60 =====

void FUN_00448e60(long param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 **local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  code *local_70;
  code *pcStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __dest = operator_new__(param_4);
  memcpy(__dest,param_3,param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar6 = 0;
  if (lVar5 != lVar4) {
    lVar6 = (lVar5 - lVar4 >> 3) * 0x55 + -1;
  }
  if (lVar6 == *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) {
    FUN_00449478(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 != lVar4) {
    uVar1 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(lVar4 + (uVar1 / 0x55) * 8);
    if (lVar6 != 0) {
      local_90 = local_80;
      uStack_88 = 0x10;
      puVar3 = (undefined8 *)FUN_00546754(8,0x18,&local_90,&uStack_88);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)operator_new(0x18);
        local_70 = FUN_0044ada0;
        pcStack_68 = FUN_0044ae44;
        local_80[0] = puVar3;
      }
      else {
        local_70 = FUN_0044abac;
        pcStack_68 = FUN_0044ad28;
      }
      *puVar3 = __dest;
      puVar3[1] = param_2;
      puVar3[2] = param_4;
      puVar3 = (undefined8 *)(lVar6 + (uVar1 % 0x55) * 0x30);
      *puVar3 = param_2;
      (*local_70)(puVar3 + 4,0,local_80,0x10,puVar3 + 2,0x10);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 0044900c  FUN_0044900c =====

void FUN_0044900c(long param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 **local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  code *local_70;
  code *pcStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __dest = operator_new__(param_4);
  memcpy(__dest,param_3,param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar6 = 0;
  if (lVar5 != lVar4) {
    lVar6 = (lVar5 - lVar4 >> 3) * 0x55 + -1;
  }
  if (lVar6 == *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) {
    FUN_00449478(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 != lVar4) {
    uVar1 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(lVar4 + (uVar1 / 0x55) * 8);
    if (lVar6 != 0) {
      local_90 = local_80;
      uStack_88 = 0x10;
      puVar3 = (undefined8 *)FUN_00546754(8,0x18,&local_90,&uStack_88);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)operator_new(0x18);
        local_70 = FUN_0044b058;
        pcStack_68 = FUN_0044b0fc;
        local_80[0] = puVar3;
      }
      else {
        local_70 = FUN_0044ae64;
        pcStack_68 = FUN_0044afe0;
      }
      *puVar3 = __dest;
      puVar3[1] = param_2;
      puVar3[2] = param_4;
      puVar3 = (undefined8 *)(lVar6 + (uVar1 % 0x55) * 0x30);
      *puVar3 = param_2;
      (*local_70)(puVar3 + 4,0,local_80,0x10,puVar3 + 2,0x10);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004491b8  FUN_004491b8 =====

void FUN_004491b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  uVar2 = (long)puVar1 - (long)puVar8;
  if (uVar2 != 0) {
    uVar5 = param_1[4];
    plVar4 = puVar8 + (uVar5 >> 9);
    lVar6 = *plVar4;
    lVar7 = lVar6 + (uVar5 & 0x1ff) * 8;
    while (lVar7 != *(long *)((long)puVar8 + (param_1[5] + uVar5 >> 6 & 0x3fffffffffffff8)) +
                    (param_1[5] + uVar5 & 0x1ff) * 8) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      lVar7 = lVar7 + 8;
      if (lVar7 - lVar6 == 0x1000) {
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
        lVar7 = lVar6;
      }
    }
  }
  param_1[5] = 0;
  while (0x10 < uVar2) {
    operator_delete((void *)*puVar8);
    puVar1 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar8;
    uVar2 = (long)puVar1 - (long)puVar8;
  }
  if (uVar2 >> 3 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar2 >> 3 != 2) goto LAB_0044928c;
    uVar3 = 0x200;
  }
  param_1[4] = uVar3;
LAB_0044928c:
  if (puVar8 != puVar1) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != puVar1);
    lVar7 = param_1[2];
    if (lVar7 != param_1[1]) {
      param_1[2] = lVar7 + ((param_1[1] - lVar7) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00449314  FUN_00449314 =====

void FUN_00449314(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar1) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(long *)(param_1 + 0x28) + uVar5;
    plVar7 = puVar1 + uVar5 / 0x55;
    lVar6 = *plVar7 + (uVar5 % 0x55) * 0x30;
    lVar8 = puVar1[uVar3 / 0x55] + (uVar3 % 0x55) * 0x30;
    if (lVar6 != lVar8) {
      do {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        (**(code **)(lVar6 + 0x20))((undefined8 *)(lVar6 + 0x20),3,lVar6 + 0x10,0x10,0,0);
        lVar6 = lVar6 + 0x30;
        if (lVar6 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          lVar6 = *plVar7;
        }
      } while (lVar6 != lVar8);
      puVar1 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar3 = (long)puVar4 - (long)puVar1;
  while (0x10 < uVar3) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  if (uVar3 >> 3 == 1) {
    uVar2 = 0x2a;
  }
  else {
    if (uVar3 >> 3 != 2) {
      return;
    }
    uVar2 = 0x55;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}


// ===== 00449478  FUN_00449478 =====

void FUN_00449478(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x55) {
    plVar3 = param_1 + 3;
    lVar4 = *plVar3;
    lVar7 = lVar4 - *param_1;
    uVar8 = param_1[2] - param_1[1] >> 3;
    if ((ulong)(lVar7 >> 3) <= uVar8) {
      uVar6 = lVar7 >> 2;
      if (lVar4 == *param_1) {
        uVar6 = 1;
      }
      local_40 = plVar3;
      if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      local_60 = operator_new(uVar6 * 8);
      pvStack_58 = (void *)((long)local_60 + uVar8 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar6 * 8);
      local_50 = pvStack_58;
      local_68 = operator_new(0xff0);
      FUN_00449b1c(&local_60,&local_68);
      lVar4 = param_1[2];
      lVar7 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar7 = lVar7 + -8;
          FUN_00449ccc(&local_60,lVar7);
        } while (lVar7 != param_1[1]);
        lVar4 = param_1[2];
      }
      pvVar2 = (void *)*param_1;
      lVar5 = param_1[3];
      param_1[1] = (long)pvStack_58;
      *param_1 = (long)local_60;
      param_1[3] = (long)pvStack_48;
      param_1[2] = (long)local_50;
      local_50 = (void *)lVar4;
      if (lVar4 != lVar7) {
        local_50 = (void *)(lVar4 + ((lVar7 - lVar4) + 7U & 0xfffffffffffffff8));
      }
      local_60 = pvVar2;
      pvStack_58 = (void *)lVar7;
      pvStack_48 = (void *)lVar5;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      goto LAB_004495f8;
    }
    if (lVar4 != param_1[2]) {
      local_60 = operator_new(0xff0);
      FUN_004497d4(param_1,&local_60);
      goto LAB_004495f8;
    }
    local_60 = operator_new(0xff0);
    FUN_00449984(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x55;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00449624(param_1,&local_60);
LAB_004495f8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00449624  FUN_00449624 =====

void FUN_00449624(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00449778;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00449778;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_00449760;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00449760:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00449778:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 004497d4  FUN_004497d4 =====

void FUN_004497d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00449928;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00449928;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_00449910;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00449910:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00449928:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 00449984  FUN_00449984 =====

void FUN_00449984(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_00449aec;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_00449aec;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_00449ad4;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_00449ad4:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_00449aec:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 00449b1c  FUN_00449b1c =====

void FUN_00449b1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00449c70;
  puVar2 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar2 <= __src && (long)__src - (long)puVar2 != 0) {
    lVar6 = (long)__src - (long)puVar2 >> 3;
    uVar7 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    uVar7 = uVar7 >> 1;
    memmove(__src + -uVar7,__src,(long)puVar11 - (long)__src);
    puVar11 = puVar11 + -uVar7;
    param_1[1] = param_1[1] + uVar7 * -8;
    param_1[2] = puVar11;
    goto LAB_00449c70;
  }
  uVar7 = (long)puVar11 - (long)puVar2 >> 2;
  if ((long)puVar11 - (long)puVar2 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar12 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar1 = (undefined8 *)((long)pvVar5 + uVar12 * 8);
  uVar3 = (long)puVar11 - (long)__src;
  puVar11 = puVar1;
  if (uVar3 != 0) {
    puVar11 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
    puVar8 = puVar1;
    if ((0x37 < uVar3 - 8) && (0x1f < (long)pvVar5 + (uVar12 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      uVar3 = (uVar3 - 8 >> 3) + 1;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar12 * 8 + 0x10);
      uVar9 = uVar3 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar13 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar1 + uVar9;
      if (uVar3 == uVar9) goto LAB_00449c58;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00449c58:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00449c70:
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  *puVar11 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 00449ccc  FUN_00449ccc =====

void FUN_00449ccc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_00449e34;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar1 = lVar4 + 1;
    }
    __n = uVar2 - (long)__src;
    __dest = (undefined8 *)(uVar2 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_00449e34;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  uVar2 = uVar2 - (long)__src;
  puVar6 = __dest;
  if (uVar2 != 0) {
    puVar6 = (undefined8 *)((long)__dest + (uVar2 & 0xfffffffffffffff8));
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < uVar2 - 8) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      uVar2 = (uVar2 - 8 >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_00449e1c;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_00449e1c:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_00449e34:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 00449e64  FUN_00449e64 =====

void FUN_00449e64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = param_3;
  uStack_50 = param_4;
  puVar4 = (undefined8 *)FUN_00546754(8,0x20,&local_58,&uStack_50);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x20);
    pcVar5 = FUN_0044a1c8;
    pcVar6 = FUN_0044a26c;
    *param_3 = puVar4;
  }
  else {
    pcVar5 = FUN_00449fc8;
    pcVar6 = FUN_0044a0f8;
  }
  *param_2 = pcVar5;
  param_2[1] = pcVar6;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined8 *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x17) = (char)uVar2;
      __dest = puVar4;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *puVar4 = __dest;
      puVar4[1] = uVar2;
      puVar4[2] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar8 = param_1[1];
    uVar7 = *param_1;
    puVar4[2] = param_1[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  puVar4[3] = param_1[3];
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00449fc8  FUN_00449fc8 =====

void FUN_00449fc8(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x0044a00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044a010 + (ulong)(byte)(&DAT_001f6244)[param_2] * 4))();
  return;
}


// ===== 0044a0f8  FUN_0044a0f8 =====

void FUN_0044a0f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  lVar2 = FUN_00546754(8,0x20,&local_48,&uStack_40);
  FUN_00411268(param_3 + 0x70,lVar2);
  (**(code **)**(undefined8 **)(param_3 + 8))
            (*(undefined8 **)(param_3 + 8),*(undefined8 *)(lVar2 + 0x18),lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044a184  FUN_0044a184 =====

void FUN_0044a184(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  if (param_2 < 2) {
    *param_1 = FUN_0044a184;
    param_1[1] = FUN_0044a1bc;
    return;
  }
  if (param_2 - 2 < 2) {
    return;
  }
  *param_5 = 1;
  return;
}


// ===== 0044a1bc  FUN_0044a1bc =====

void FUN_0044a1bc(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0044a1c8  FUN_0044a1c8 =====

void FUN_0044a1c8(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0044a1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044a1f8 + (ulong)(byte)(&DAT_001f6249)[param_2] * 4))();
  return;
}


// ===== 0044a26c  FUN_0044a26c =====

void FUN_0044a26c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00411268(param_3 + 0x70,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0044a2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_3 + 8))
            (*(undefined8 **)(param_3 + 8),*(undefined8 *)(lVar1 + 0x18),lVar1);
  return;
}


// ===== 0044a2b0  FUN_0044a2b0 =====

void FUN_0044a2b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = param_3;
  uStack_50 = param_4;
  puVar4 = (undefined8 *)FUN_00546754(8,0x30,&local_58,&uStack_50);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x30);
    pcVar5 = FUN_0044a65c;
    pcVar6 = FUN_0044a700;
    *param_3 = puVar4;
  }
  else {
    pcVar5 = FUN_0044a41c;
    pcVar6 = FUN_0044a54c;
  }
  *param_2 = pcVar5;
  param_2[1] = pcVar6;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __src = (undefined8 *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x17) = (char)uVar2;
      __dest = puVar4;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *puVar4 = __dest;
      puVar4[1] = uVar2;
      puVar4[2] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar8 = param_1[1];
    uVar7 = *param_1;
    puVar4[2] = param_1[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  uVar8 = param_1[4];
  uVar7 = param_1[3];
  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_1 + 5);
  puVar4[4] = uVar8;
  puVar4[3] = uVar7;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044a41c  FUN_0044a41c =====

void FUN_0044a41c(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x0044a460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044a464 + (ulong)(byte)(&DAT_001f624e)[param_2] * 4))();
  return;
}


// ===== 0044a54c  FUN_0044a54c =====

void FUN_0044a54c(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *__s2;
  ulong uVar7;
  char *pcVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  pcVar6 = (char *)FUN_00546754(8,0x30,&local_48,&uStack_40);
  bVar2 = pcVar6[0x17];
  uVar7 = (ulong)bVar2;
  __n = *(size_t *)(pcVar6 + 8);
  if (-1 < (char)bVar2) {
    __n = uVar7;
  }
  if (__n != 0) {
    bVar3 = *(byte *)(param_3 + 0x87);
    sVar1 = *(size_t *)(param_3 + 0x78);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s2 = *(char **)(param_3 + 0x70);
      if (-1 < (char)bVar3) {
        __s2 = (char *)(param_3 + 0x70);
      }
      if ((char)bVar2 < '\0') {
        iVar5 = memcmp(*(void **)pcVar6,__s2,__n);
        if (iVar5 != 0) goto LAB_0044a614;
      }
      else {
        pcVar8 = pcVar6;
        if (bVar2 != 0) {
          do {
            if (*pcVar8 != *__s2) goto LAB_0044a614;
            uVar7 = uVar7 - 1;
            __s2 = __s2 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar7 != 0);
        }
      }
      *(undefined1 *)(param_3 + 0x88) = 1;
    }
  }
LAB_0044a614:
  (**(code **)(**(long **)(param_3 + 8) + 8))
            (*(long **)(param_3 + 8),*(undefined8 *)(pcVar6 + 0x18),pcVar6,
             *(undefined4 *)(pcVar6 + 0x20),*(undefined4 *)(pcVar6 + 0x24),
             *(undefined4 *)(pcVar6 + 0x28));
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0044a65c  FUN_0044a65c =====

void FUN_0044a65c(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0044a688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044a68c + (ulong)(byte)(&DAT_001f6253)[param_2] * 4))();
  return;
}


// ===== 0044a700  FUN_0044a700 =====

void FUN_0044a700(undefined8 *param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)*param_1;
  bVar2 = pcVar7[0x17];
  uVar6 = (ulong)bVar2;
  __n = *(size_t *)(pcVar7 + 8);
  if (-1 < (char)bVar2) {
    __n = uVar6;
  }
  if (__n != 0) {
    bVar3 = *(byte *)(param_3 + 0x87);
    sVar1 = *(size_t *)(param_3 + 0x78);
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s2 = *(char **)(param_3 + 0x70);
      if (-1 < (char)bVar3) {
        __s2 = (char *)(param_3 + 0x70);
      }
      if ((char)bVar2 < '\0') {
        iVar4 = memcmp(*(void **)pcVar7,__s2,__n);
        if (iVar4 != 0) goto LAB_0044a7a0;
      }
      else {
        pcVar5 = pcVar7;
        if (bVar2 != 0) {
          do {
            if (*pcVar5 != *__s2) goto LAB_0044a7a0;
            uVar6 = uVar6 - 1;
            __s2 = __s2 + 1;
            pcVar5 = pcVar5 + 1;
          } while (uVar6 != 0);
        }
      }
      *(undefined1 *)(param_3 + 0x88) = 1;
    }
  }
LAB_0044a7a0:
                    /* WARNING: Could not recover jumptable at 0x0044a7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 8) + 8))
            (*(long **)(param_3 + 8),*(undefined8 *)(pcVar7 + 0x18),pcVar7,
             *(undefined4 *)(pcVar7 + 0x20),*(undefined4 *)(pcVar7 + 0x24),
             *(undefined4 *)(pcVar7 + 0x28));
  return;
}


// ===== 0044a7c8  FUN_0044a7c8 =====

void FUN_0044a7c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = param_3;
  uStack_50 = param_4;
  puVar4 = (undefined8 *)FUN_00546754(8,0x28,&local_58,&uStack_50);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x28);
    pcVar5 = FUN_0044aae4;
    pcVar6 = FUN_0044ab88;
    *param_3 = puVar4;
  }
  else {
    pcVar5 = FUN_0044a938;
    pcVar6 = FUN_0044aa68;
  }
  *param_2 = pcVar5;
  param_2[1] = pcVar6;
  __dest = puVar4 + 1;
  *puVar4 = *param_1;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined8 *)param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x1f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      puVar4[1] = __dest;
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uVar8 = param_1[2];
    uVar7 = param_1[1];
    puVar4[3] = param_1[3];
    puVar4[2] = uVar8;
    *__dest = uVar7;
  }
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 4);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044a938  FUN_0044a938 =====

void FUN_0044a938(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x0044a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044a980 + (ulong)(byte)(&DAT_001f6258)[param_2] * 4))();
  return;
}


// ===== 0044aa68  FUN_0044aa68 =====

void FUN_0044aa68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1;
  uStack_30 = param_2;
  puVar2 = (undefined8 *)FUN_00546754(8,0x28,&local_38,&uStack_30);
  (**(code **)(**(long **)(param_3 + 8) + 0x10))
            (*(long **)(param_3 + 8),*puVar2,puVar2 + 1,*(undefined4 *)(puVar2 + 4));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044aae4  FUN_0044aae4 =====

void FUN_0044aae4(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0044ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044ab14 + (ulong)(byte)(&DAT_001f625d)[param_2] * 4))();
  return;
}


// ===== 0044ab88  FUN_0044ab88 =====

void FUN_0044ab88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0044aba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 8) + 0x10))
            (*(long **)(param_3 + 8),*param_1,param_1 + 1,*(undefined4 *)(param_1 + 4));
  return;
}


// ===== 0044abac  FUN_0044abac =====

void FUN_0044abac(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x0044abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044abf4 + (ulong)(byte)(&DAT_001f6262)[param_2] * 4))();
  return;
}


// ===== 0044ad28  FUN_0044ad28 =====

void FUN_0044ad28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1;
  uStack_30 = param_2;
  puVar2 = (undefined8 *)FUN_00546754(8,0x18,&local_38,&uStack_30);
  (**(code **)(**(long **)(param_3 + 8) + 0x18))
            (*(long **)(param_3 + 8),puVar2[1],*puVar2,puVar2[2]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044ada0  FUN_0044ada0 =====

void FUN_0044ada0(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0044adcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044add0 + (ulong)(byte)(&DAT_001f6267)[param_2] * 4))();
  return;
}


// ===== 0044ae44  FUN_0044ae44 =====

void FUN_0044ae44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0044ae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 8) + 0x18))
            (*(long **)(param_3 + 8),param_1[1],*param_1,param_1[2]);
  return;
}


// ===== 0044ae64  FUN_0044ae64 =====

void FUN_0044ae64(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
                    /* WARNING: Could not recover jumptable at 0x0044aea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044aeac + (ulong)(byte)(&DAT_001f626c)[param_2] * 4))();
  return;
}


// ===== 0044afe0  FUN_0044afe0 =====

void FUN_0044afe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1;
  uStack_30 = param_2;
  puVar2 = (undefined8 *)FUN_00546754(8,0x18,&local_38,&uStack_30);
  (**(code **)(**(long **)(param_3 + 8) + 0x20))
            (*(long **)(param_3 + 8),puVar2[1],*puVar2,puVar2[2]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044b058  FUN_0044b058 =====

void FUN_0044b058(undefined8 param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0044b084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0044b088 + (ulong)(byte)(&DAT_001f6271)[param_2] * 4))();
  return;
}


// ===== 0044b0fc  FUN_0044b0fc =====

void FUN_0044b0fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0044b118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 8) + 0x20))
            (*(long **)(param_3 + 8),param_1[1],*param_1,param_1[2]);
  return;
}


// ===== 0044b11c  FUN_0044b11c =====

void FUN_0044b11c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_00d1c4e0;
  puVar1 = (undefined8 *)operator_new(0x140);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  return;
}


// ===== 0044b180  FUN_0044b180 =====

void FUN_0044b180(long param_1,long param_2)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    FUN_0041f804(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0044b198  FUN_0044b198 =====

void FUN_0044b198(void)

{
  return;
}


// ===== 0044b19c  FUN_0044b19c =====

void FUN_0044b19c(char *param_1)

{
  undefined8 uVar1;
  
  param_1[0x17] = '\r';
  if ((param_1 < "iscordCustom") && ("DiscordCustom" < param_1 + 0xd)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar1 = CONCAT53(s_DiscordCustom_001de5ea._8_5_,s_DiscordCustom_001de5ea._5_3_);
  *(ulong *)param_1 = CONCAT35(s_DiscordCustom_001de5ea._5_3_,s_DiscordCustom_001de5ea._0_5_);
  *(undefined8 *)(param_1 + 5) = uVar1;
  param_1[0xd] = '\0';
  return;
}


// ===== 0044b20c  FUN_0044b20c =====

void FUN_0044b20c(void)

{
  return;
}


// ===== 0044b210  FUN_0044b210 =====

void FUN_0044b210(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0044b288(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0044b24c  FUN_0044b24c =====

void FUN_0044b24c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 8);
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0044b288(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0044b288  FUN_0044b288 =====

void FUN_0044b288(long param_1)

{
  void *pvVar1;
  
  FUN_0041f4c4();
  FUN_00546ab0(param_1 + 0xb4);
  pvVar1 = *(void **)(param_1 + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x28) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0044b2f8  FUN_0044b2f8 =====

void FUN_0044b2f8(long param_1,undefined8 param_2)

{
  FUN_005467a4();
  FUN_0061f470(param_1 + 0x30,param_2);
  FUN_005467c8(param_1);
  return;
}


// ===== 0044b32c  FUN_0044b32c =====

void FUN_0044b32c(long param_1,undefined1 param_2)

{
  FUN_005467a4();
  *(undefined1 *)(param_1 + 0x28) = param_2;
  FUN_005467c8(param_1);
  return;
}


// ===== 0044b358  FUN_0044b358 =====

void FUN_0044b358(undefined8 param_1,long param_2)

{
  FUN_005467a4();
  FUN_0061f310(param_1,param_2 + 0x30);
  FUN_005467c8(param_2);
  return;
}


// ===== 0044b38c  FUN_0044b38c =====

void FUN_0044b38c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *param_1 = &PTR_FUN_00d1c520;
  param_1[1] = param_2;
  return;
}


// ===== 0044b3a4  FUN_0044b3a4 =====

undefined8 *
FUN_0044b3a4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_2d0 [236];
  undefined1 local_1e4;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  FUN_005467a4(lVar5);
  cVar1 = *(char *)(lVar5 + 0x28);
  FUN_005467c8(lVar5);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)operator_new(8);
    *puVar4 = &PTR_FUN_00d1c550;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    FUN_005467a4(lVar5);
    FUN_0061f310(auStack_2d0,lVar5 + 0x30);
    FUN_005467c8(lVar5);
    if (*(int *)(param_1 + 0x18) == 1) {
      local_1e4 = 1;
    }
    plVar3 = (long *)operator_new(0x4e0);
    FUN_005d269c(plVar3,auStack_2d0);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3,param_4,param_5);
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044b4cc  FUN_0044b4cc =====

void FUN_0044b4cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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


// ===== 0044b524  FUN_0044b524 =====

void FUN_0044b524(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)((long)param_1 + 0x10);
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


// ===== 0044b57c  FUN_0044b57c =====

void FUN_0044b57c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0044b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 0044b588  FUN_0044b588 =====

void FUN_0044b588(void)

{
  return;
}


// ===== 0044b58c  FUN_0044b58c =====

void FUN_0044b58c(void)

{
  return;
}


// ===== 0044b590  FUN_0044b590 =====

void FUN_0044b590(void)

{
  return;
}


// ===== 0044b594  FUN_0044b594 =====

void FUN_0044b594(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/echo_canceller_factory.cpp",
                   0x112,
                   "NoopEchoControl::ProcessCapture overload with linear_output called. NoopEchoControl cannot provide this data"
                  );
      return;
    }
  }
  return;
}


// ===== 0044b5d0  FUN_0044b5d0 =====

void FUN_0044b5d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0044b5dc  FUN_0044b5dc =====

void FUN_0044b5dc(void)

{
  return;
}


// ===== 0044b5e0  FUN_0044b5e0 =====

void FUN_0044b5e0(void)

{
  return;
}


// ===== 0044b5e4  FUN_0044b5e4 =====

undefined8 FUN_0044b5e4(void)

{
  return 0;
}


// ===== 0044b5ec  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0044b5f0  FUN_0044b5f0 =====

void FUN_0044b5f0(void)

{
  return;
}


// ===== 0044b5f4  FUN_0044b5f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b5f4(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  undefined1 *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_00d1c5b0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0x40ad4c0000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00546e6c((long)param_1 + 0x1c);
  puVar14 = param_1 + 0x15;
  param_1[0x16] = 0;
  *puVar14 = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  local_50 = (char *)operator_new(0x30);
  uVar7 = s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._16_8_;
  uVar6 = s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._8_8_;
  uVar8 = s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._0_8_;
  lStack_40 = _UNK_001f2358;
  local_48 = _DAT_001f2350;
  if (("ebRTC-Bwe-RobustThroughputEstimatorSettings" <= local_50) ||
     (local_50 + 0x2c <= "WebRTC-Bwe-RobustThroughputEstimatorSettings")) {
    uVar4 = CONCAT44(s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._28_4_,
                     s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._24_4_);
    local_50[0x2c] = '\0';
    uVar9 = s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._36_8_;
    uVar5 = CONCAT44(s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._32_4_,
                     s_WebRTC_Bwe_RobustThroughputEstim_001a87ad._28_4_);
    *(undefined8 *)(local_50 + 8) = uVar6;
    *(undefined8 *)local_50 = uVar8;
    *(undefined8 *)(local_50 + 0x18) = uVar4;
    *(undefined8 *)(local_50 + 0x10) = uVar7;
    *(undefined8 *)(local_50 + 0x24) = uVar9;
    *(undefined8 *)(local_50 + 0x1c) = uVar5;
    local_30 = (undefined1 *)&local_50;
    lVar10 = FUN_00455014(puVar14,&local_50,&DAT_001f6429,&local_30,auStack_38);
    if (*(char *)(lVar10 + 0x3f) < '\0') {
      pcVar11 = *(char **)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x30) = 0xc;
    }
    else {
      pcVar11 = (char *)(lVar10 + 0x28);
      *(undefined1 *)(lVar10 + 0x3f) = 0xc;
    }
    pcVar11[0xc] = '\0';
    uVar8 = s_enabled_true_001a5ca2._0_8_;
    pcVar11[8] = 't';
    pcVar11[9] = 'r';
    pcVar11[10] = 'u';
    pcVar11[0xb] = 'e';
    *(undefined8 *)pcVar11 = uVar8;
    if (lStack_40 < 0) {
      operator_delete(local_50);
    }
    local_50 = (char *)operator_new(0x20);
    uVar8 = s_WebRTC_Video_H26xPacketBuffer_001d01db._0_8_;
    lStack_40 = _UNK_001f3af8;
    local_48 = _DAT_001f3af0;
    if (("ebRTC-Video-H26xPacketBuffer" <= local_50) ||
       (local_50 + 0x1d <= "WebRTC-Video-H26xPacketBuffer")) {
      uVar6 = CONCAT35(s_WebRTC_Video_H26xPacketBuffer_001d01db._13_3_,
                       s_WebRTC_Video_H26xPacketBuffer_001d01db._8_5_);
      local_50[0x1d] = '\0';
      uVar4 = s_WebRTC_Video_H26xPacketBuffer_001d01db._21_8_;
      uVar7 = CONCAT53(s_WebRTC_Video_H26xPacketBuffer_001d01db._16_5_,
                       s_WebRTC_Video_H26xPacketBuffer_001d01db._13_3_);
      *(undefined8 *)(local_50 + 8) = uVar6;
      *(undefined8 *)local_50 = uVar8;
      *(undefined8 *)(local_50 + 0x15) = uVar4;
      *(undefined8 *)(local_50 + 0xd) = uVar7;
      local_30 = (undefined1 *)&local_50;
      lVar10 = FUN_00455014(puVar14,&local_50,&DAT_001f6429,&local_30,auStack_38);
      if (*(char *)(lVar10 + 0x3f) < '\0') {
        puVar12 = *(undefined4 **)(lVar10 + 0x28);
        *(undefined8 *)(lVar10 + 0x30) = 7;
      }
      else {
        puVar12 = (undefined4 *)(lVar10 + 0x28);
        *(undefined1 *)(lVar10 + 0x3f) = 7;
      }
      *(undefined1 *)((long)puVar12 + 7) = 0;
      *(undefined4 *)((long)puVar12 + 3) = 0x64656c62;
      *puVar12 = 0x62616e45;
      if (lStack_40 < 0) {
        operator_delete(local_50);
      }
      local_50 = (char *)operator_new(0x30);
      uVar7 = s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._16_8_;
      uVar6 = s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._8_8_;
      uVar8 = s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._0_8_;
      lStack_40 = _UNK_001f2eb8;
      local_48 = _DAT_001f2eb0;
      if (("ebRTC-Audio-NetEqDecisionLogicConfig" <= local_50) ||
         (local_50 + 0x25 <= "WebRTC-Audio-NetEqDecisionLogicConfig")) {
        uVar4 = CONCAT35(s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._29_3_,
                         s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._24_5_);
        local_50[0x25] = '\0';
        uVar5 = CONCAT53(s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._32_5_,
                         s_WebRTC_Audio_NetEqDecisionLogicC_001b0860._29_3_);
        *(undefined8 *)(local_50 + 8) = uVar6;
        *(undefined8 *)local_50 = uVar8;
        *(undefined8 *)(local_50 + 0x18) = uVar4;
        *(undefined8 *)(local_50 + 0x10) = uVar7;
        *(undefined8 *)(local_50 + 0x1d) = uVar5;
        local_30 = (undefined1 *)&local_50;
        lVar10 = FUN_00455014(puVar14,&local_50,&DAT_001f6429,&local_30,auStack_38);
        uVar6 = s_reinit_after_expands_100_001b3491._16_8_;
        uVar8 = s_reinit_after_expands_100_001b3491._0_8_;
        bVar2 = *(byte *)(lVar10 + 0x3f);
        uVar13 = (*(ulong *)(lVar10 + 0x38) & 0x7fffffffffffffff) - 1;
        if (-1 < (char)bVar2) {
          uVar13 = 0x16;
        }
        if (uVar13 < 0x18) {
          uVar1 = *(ulong *)(lVar10 + 0x30);
          if (-1 < (char)bVar2) {
            uVar1 = (ulong)bVar2;
          }
          FUN_00547540((char *)(lVar10 + 0x28),uVar13,0x18 - uVar13,uVar1,0,uVar1,0x18,
                       "reinit_after_expands:100");
        }
        else {
          pcVar11 = *(char **)(lVar10 + 0x28);
          if (-1 < (char)bVar2) {
            pcVar11 = (char *)(lVar10 + 0x28);
          }
          *(undefined8 *)(pcVar11 + 8) = s_reinit_after_expands_100_001b3491._8_8_;
          *(undefined8 *)pcVar11 = uVar8;
          *(undefined8 *)(pcVar11 + 0x10) = uVar6;
          if (-1 < *(char *)(lVar10 + 0x3f)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          *(undefined8 *)(lVar10 + 0x30) = 0x18;
          pcVar11[0x18] = '\0';
        }
        if (lStack_40 < 0) {
          operator_delete(local_50);
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 0044b968  FUN_0044b968 =====

void FUN_0044b968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00546e88(param_1 + 0x1c);
  local_50 = param_2;
  lVar2 = FUN_00455560(param_1 + 0xa8,param_2,&DAT_001f6429,&local_50,auStack_58);
  FUN_00411268(lVar2 + 0x28,param_3);
  FUN_00546f3c(param_1 + 0x1c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044ba04  FUN_0044ba04 =====

void FUN_0044ba04(char *param_1,long param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *__dest;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_70 [2];
  char local_59;
  void *local_58;
  size_t sStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = param_3;
  sStack_50 = param_4;
  switch(param_4 - 0x19 >> 1 | param_4 - 0x19 << 0x3f) {
  case 0:
    iVar4 = memcmp(param_3,"WebRTC-Bwe-LossBasedBweV2",param_4);
    if (iVar4 == 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x711,
                     "DiscordFieldTrials::Lookup(WebRTC-Bwe-LossBasedBweV2) ",
                     *(undefined1 *)(param_2 + 8));
      }
      if (*(char *)(param_2 + 8) != '\0') {
        param_1[0x17] = '\f';
        uVar9 = s_Enabled_true_001ca5c1._0_8_;
        if ((param_1 < "nabled:true") && ("Enabled:true" < param_1 + 0xc)) goto LAB_0044bd94;
        param_1[0xc] = '\0';
        *(undefined8 *)param_1 = uVar9;
        param_1[8] = 't';
        param_1[9] = 'r';
        param_1[10] = 'u';
        param_1[0xb] = 'e';
        goto LAB_0044bc78;
      }
    }
    else {
      if (param_4 == 0x25) goto switchD_0044ba60_caseD_6;
      if (param_4 == 0x1f) goto switchD_0044ba60_caseD_3;
      if (param_4 == 0x1d) goto switchD_0044ba60_caseD_2;
    }
    break;
  case 2:
switchD_0044ba60_caseD_2:
    iVar4 = memcmp(param_3,"WebRTC-BweWindowSizeInPackets",param_4);
    if (iVar4 == 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x761,
                     "DiscordFieldTrials::Lookup(WebRTC-BweWindowSizeInPackets) ",
                     *(undefined4 *)(param_2 + 0xc));
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_005490bc(local_70);
        pcVar8 = "Enabled-";
        uVar9 = 8;
        goto LAB_0044bcf0;
      }
    }
    else {
      if (param_4 == 0x1f) goto switchD_0044ba60_caseD_3;
      if (param_4 == 0x25) goto switchD_0044ba60_caseD_6;
    }
    break;
  case 3:
switchD_0044ba60_caseD_3:
    iVar4 = memcmp(param_3,"WebRTC-BweAimdRateControlConfig",param_4);
    if (iVar4 == 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x801,
                     "DiscordFieldTrials::Lookup(WebRTC-BweAimdRateControlConfig) ",
                     *(undefined1 *)(param_2 + 0x18));
      }
      if (*(char *)(param_2 + 0x18) != '\0') {
        param_1[0x17] = '\x16';
        uVar9 = s_link_capacity_fix_true_001ab32d._0_8_;
        if ((param_1 < "ink_capacity_fix:true") && ("link_capacity_fix:true" < param_1 + 0x16))
        goto LAB_0044bd94;
        uVar10 = CONCAT26(s_link_capacity_fix_true_001ab32d._14_2_,
                          s_link_capacity_fix_true_001ab32d._8_6_);
        param_1[0x16] = '\0';
        uVar3 = CONCAT62(s_link_capacity_fix_true_001ab32d._16_6_,
                         s_link_capacity_fix_true_001ab32d._14_2_);
        *(undefined8 *)(param_1 + 8) = uVar10;
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 0xe) = uVar3;
        goto LAB_0044bc78;
      }
    }
    break;
  case 6:
switchD_0044ba60_caseD_6:
    iVar4 = memcmp(param_3,"WebRTC-Bwe-TrendlineEstimatorSettings",param_4);
    if (iVar4 == 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(*(undefined8 *)(param_2 + 0x10),&DAT_001f6471,
                     "../../discord_native_lib/src/media/engine.cpp",0x7b1,
                     "DiscordFieldTrials::Lookup(WebRTC-BWE-TrendlineEstimatorSettings) ",
                     &DAT_001e9f22);
      }
      if (*(double *)(param_2 + 0x10) != 0.0) {
        FUN_005494f4(local_70);
        pcVar8 = "window_size:1000,min_window_size:50,max_window_duration_ms:";
        uVar9 = 0x3b;
LAB_0044bcf0:
        puVar7 = (undefined8 *)FUN_00547994(local_70,0,pcVar8,uVar9);
        uVar10 = puVar7[1];
        uVar9 = *puVar7;
        *(undefined8 *)(param_1 + 0x10) = puVar7[2];
        *(undefined8 *)(param_1 + 8) = uVar10;
        *(undefined8 *)param_1 = uVar9;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        if (local_59 < '\0') {
          operator_delete(local_70[0]);
        }
        goto LAB_0044bc78;
      }
    }
    else if (param_4 == 0x1f) goto switchD_0044ba60_caseD_3;
  }
  FUN_00546f6c(param_2 + 0x1c);
  lVar5 = FUN_004559e0(param_2 + 0xa8,&local_58);
  if (lVar5 == 0) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  else if (*(char *)(lVar5 + 0x3f) < '\0') {
    pcVar8 = *(char **)(lVar5 + 0x28);
    uVar6 = *(ulong *)(lVar5 + 0x30);
    if (uVar6 < 0x17) {
      param_1[0x17] = (char)uVar6;
      __dest = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      __dest = (char *)operator_new(uVar1);
      *(char **)param_1 = __dest;
      *(ulong *)(param_1 + 8) = uVar6;
      *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= pcVar8) && (pcVar8 < __dest + uVar6 + 1)) {
LAB_0044bd94:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,pcVar8,uVar6 + 1);
  }
  else {
    uVar10 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar5 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar10;
    *(undefined8 *)param_1 = uVar9;
  }
  FUN_00547018(param_2 + 0x1c);
LAB_0044bc78:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044bdc4  FUN_0044bdc4 =====

void FUN_0044bdc4(long param_1,undefined8 *param_2)

{
  size_t __n;
  long *plVar1;
  long *plVar2;
  long *__s1;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    if (plVar1 == plVar2) {
      return;
    }
    __n = plVar1[1];
    __s1 = (long *)*plVar1;
    if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
      __n = (ulong)*(byte *)((long)plVar1 + 0x17);
      __s1 = plVar1;
    }
    if (__s1 == (long *)0x0 && __n != 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    switch(__n) {
    case 0x11:
      if ((*__s1 != 0x7361622d73736f6c || __s1[1] != 0x762d6577622d6465) || (char)__s1[2] != '2')
      goto switchD_0044be7c_caseD_12;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x909,
                     "DiscordFieldTrials activating Loss Based Bwe v2 experiment");
      }
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_0044be34;
    default:
      goto switchD_0044be7c_caseD_12;
    case 0x15:
      iVar3 = memcmp(__s1,"trendline-window-size",__n);
      if (iVar3 == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x951,
                       "DiscordFieldTrials activating Trendline Window Size experiment");
        }
        *(undefined4 *)(param_1 + 0xc) = 100;
        goto LAB_0044be34;
      }
switchD_0044be7c_caseD_12:
      uVar4 = FUN_0044c324(plVar1,"trendline-window-duration-5000");
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xaa1,
                       "DiscordFieldTrials activating Trendline Window Duration 5000ms experiment");
        }
        uVar5 = 0x40b3880000000000;
        break;
      }
      uVar4 = FUN_0044c324(plVar1,"trendline-window-duration-6250");
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xac9,
                       "DiscordFieldTrials activating Trendline Window Duration 6250ms experiment");
        }
        uVar5 = 0x40b86a0000000000;
        break;
      }
      uVar4 = FUN_0044c324(plVar1,"trendline-window-duration-7500");
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xaf1,
                       "DiscordFieldTrials activating Trendline Window Duration 7500ms experiment");
        }
        uVar5 = 0x40bd4c0000000000;
        break;
      }
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine.cpp",0xb1a,
                     "Unrecognized experiment ",plVar1);
      }
      goto LAB_0044be34;
    case 0x1c:
      iVar3 = memcmp(__s1,"trendline-window-duration-50",__n);
      if (iVar3 != 0) goto switchD_0044be7c_caseD_12;
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x989,
                     "DiscordFieldTrials activating Trendline Window Duration 50ms experiment");
      }
      uVar5 = 0x4049000000000000;
      break;
    case 0x1d:
      iVar3 = memcmp(__s1,"trendline-window-duration-100",__n);
      if (iVar3 == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x9b1,
                       "DiscordFieldTrials activating Trendline Window Duration 100ms experiment");
        }
        uVar5 = 0x4059000000000000;
      }
      else if (((*__s1 == 0x6e696c646e657274 && __s1[1] == 0x776f646e69772d65) &&
               __s1[2] == 0x6f6974617275642d) && *(long *)((long)__s1 + 0x15) == 0x3035322d6e6f6974)
      {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x9d9,
                       "DiscordFieldTrials activating Trendline Window Duration 250ms experiment");
        }
        uVar5 = 0x406f400000000000;
      }
      else {
        if (((*__s1 != 0x6e696c646e657274 || __s1[1] != 0x776f646e69772d65) ||
            __s1[2] != 0x6f6974617275642d) || *(long *)((long)__s1 + 0x15) != 0x3030352d6e6f6974)
        goto switchD_0044be7c_caseD_12;
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xa01,
                       "DiscordFieldTrials activating Trendline Window Duration 500ms experiment");
        }
        uVar5 = 0x407f400000000000;
      }
      break;
    case 0x1e:
      iVar3 = memcmp(__s1,"rate-control-link-capacity-fix",__n);
      if (iVar3 == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x929,
                       "DiscordFieldTrials activating Rate Control Link Capacity Fix experiment");
        }
        *(undefined1 *)(param_1 + 0x18) = 1;
        goto LAB_0044be34;
      }
      iVar3 = memcmp(__s1,"trendline-window-duration-1000",__n);
      if (iVar3 == 0) {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xa29,
                       "DiscordFieldTrials activating Trendline Window Duration 1000ms experiment");
        }
        uVar5 = 0x408f400000000000;
      }
      else if (((*__s1 == 0x6e696c646e657274 && __s1[1] == 0x776f646e69772d65) &&
               __s1[2] == 0x6f6974617275642d) && *(long *)((long)__s1 + 0x16) == 0x303035322d6e6f69)
      {
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xa51,
                       "DiscordFieldTrials activating Trendline Window Duration 2500ms experiment");
        }
        uVar5 = 0x40a3880000000000;
      }
      else {
        if (((*__s1 != 0x6e696c646e657274 || __s1[1] != 0x776f646e69772d65) ||
            __s1[2] != 0x6f6974617275642d) || *(long *)((long)__s1 + 0x16) != 0x303537332d6e6f69)
        goto switchD_0044be7c_caseD_12;
        uVar4 = FUN_00417e08();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0xa79,
                       "DiscordFieldTrials activating Trendline Window Duration 3750ms experiment");
        }
        uVar5 = 0x40ad4c0000000000;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar5;
LAB_0044be34:
    plVar1 = plVar1 + 3;
  } while( true );
}


// ===== 0044c324  FUN_0044c324 =====

bool FUN_0044c324(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined8 *__s1;
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  __n = param_1[1];
  __s1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_1 + 0x17);
    __s1 = param_1;
  }
  if (__s1 == (undefined8 *)0x0 && __n != 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0xff,
               "__s != nullptr",
               "null pointer passed to non-null argument of char_traits<...>::length");
  }
  sVar3 = strlen(param_2);
  if (__n == sVar3) {
    if ((__n == 0) || (iVar2 = memcmp(__s1,param_2,__n), iVar2 == 0)) {
      iVar2 = 0;
    }
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 0044c3fc  FUN_0044c3fc =====

/* WARNING: Removing unreachable block (ram,0x0044ca14) */
/* WARNING: Removing unreachable block (ram,0x0044cbcc) */
/* WARNING: Removing unreachable block (ram,0x0044d520) */
/* WARNING: Removing unreachable block (ram,0x0044d59c) */
/* WARNING: Removing unreachable block (ram,0x0044d41c) */
/* WARNING: Removing unreachable block (ram,0x0044d570) */
/* WARNING: Removing unreachable block (ram,0x0044d560) */
/* WARNING: Removing unreachable block (ram,0x0044c6b0) */
/* WARNING: Removing unreachable block (ram,0x0044d580) */
/* WARNING: Removing unreachable block (ram,0x0044d5ac) */
/* WARNING: Removing unreachable block (ram,0x0044cbdc) */
/* WARNING: Removing unreachable block (ram,0x0044c8d0) */
/* WARNING: Removing unreachable block (ram,0x0044cffc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0044c3fc(long *****param_1,long ****param_2,long ****param_3,long ****param_4,long param_5)

{
  size_t sVar1;
  ulong uVar2;
  long *******ppppppplVar3;
  char **ppcVar4;
  undefined4 uVar5;
  size_t __n;
  long *******ppppppplVar6;
  int iVar7;
  undefined8 *__src;
  long *****ppppplVar8;
  undefined8 *******pppppppuVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  byte bVar14;
  long ******pppppplVar15;
  ulong uVar16;
  long *******ppppppplVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  undefined8 *__dest;
  undefined8 *puVar21;
  long ****pppplVar22;
  long lVar23;
  long ***ppplVar24;
  long *****ppppplVar25;
  undefined8 *******pppppppuVar26;
  long *******ppppppplVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  long *******local_148;
  undefined8 *******pppppppuStack_140;
  undefined8 local_138;
  undefined8 local_130;
  tm *local_128;
  char *pcStack_120;
  undefined1 auStack_118 [8];
  char *local_110;
  char **ppcStack_108;
  time_t local_100;
  undefined8 local_f8;
  long *******local_f0;
  char **local_e8;
  ulong uStack_e0;
  long *******local_d8;
  size_t local_d0;
  byte local_c1;
  char *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *******local_88;
  undefined8 local_80;
  long local_78;
  
  lVar13 = tpidr_el0;
  local_78 = *(long *)(lVar13 + 0x28);
  *param_1 = (long ****)0x0;
  param_1[1] = (long ****)0x0;
  param_1[4] = (long ****)0x0;
  param_1[3] = (long ****)0x0;
  param_1[2] = (long ****)(param_1 + 3);
  param_1[8] = (long ****)0x0;
  param_1[7] = (long ****)0x0;
  param_1[10] = (long ****)0x0;
  param_1[9] = (long ****)0x0;
  param_1[0xc] = (long ****)0x0;
  param_1[0xb] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  ppppplVar25 = param_1 + 5;
  param_1[6] = (long ****)0x0;
  *ppppplVar25 = (long ****)0x0;
  FUN_007b5d10();
  bVar14 = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0x10] = (long ****)0x0;
  param_1[0xf] = (long ****)0x0;
  param_1[0x12] = (long ****)0x0;
  param_1[0x11] = (long ****)0x0;
  param_1[0x14] = (long ****)0x0;
  param_1[0x13] = (long ****)0x0;
  param_1[0x16] = (long ****)0x0;
  param_1[0x15] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0xb9) = 0;
  *(undefined8 *)((long)param_1 + 0xb1) = 0;
  FUN_007b5d10(param_1 + 0x14);
  param_1[0x1a] = (long ****)0x0;
  param_1[0x19] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x1c] = (long ****)0x0;
  param_1[0x1b] = (long ****)0x0;
  param_1[0x1e] = (long ****)0x0;
  param_1[0x1d] = (long ****)0x0;
  param_1[0x20] = (long ****)0x0;
  param_1[0x1f] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x109) = 0;
  *(undefined8 *)((long)param_1 + 0x101) = 0;
  FUN_007b5d10(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x24] = (long ****)0x0;
  param_1[0x23] = (long ****)0x0;
  param_1[0x26] = (long ****)0x0;
  param_1[0x25] = (long ****)0x0;
  param_1[0x28] = (long ****)0x0;
  param_1[0x27] = (long ****)0x0;
  param_1[0x2a] = (long ****)0x0;
  param_1[0x29] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined8 *)((long)param_1 + 0x151) = 0;
  FUN_007b5d10(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2e] = (long ****)0x0;
  param_1[0x2d] = (long ****)0x0;
  param_1[0x30] = (long ****)0x0;
  param_1[0x2f] = (long ****)0x0;
  param_1[0x32] = (long ****)0x0;
  param_1[0x31] = (long ****)0x0;
  param_1[0x34] = (long ****)0x0;
  param_1[0x33] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x1a9) = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  FUN_007b5d10(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x38] = (long ****)0x0;
  param_1[0x37] = (long ****)0x0;
  param_1[0x3a] = (long ****)0x0;
  param_1[0x39] = (long ****)0x0;
  param_1[0x3c] = (long ****)0x0;
  param_1[0x3b] = (long ****)0x0;
  param_1[0x3e] = (long ****)0x0;
  param_1[0x3d] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x1f9) = 0;
  *(undefined8 *)((long)param_1 + 0x1f1) = 0;
  FUN_007b5d10(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x40) = 1;
  param_1[0x42] = (long ****)0x0;
  param_1[0x41] = (long ****)0x0;
  param_1[0x44] = (long ****)0x0;
  param_1[0x43] = (long ****)0x0;
  param_1[0x46] = (long ****)0x0;
  param_1[0x45] = (long ****)0x0;
  param_1[0x48] = (long ****)0x0;
  param_1[0x47] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x249) = 0;
  *(undefined8 *)((long)param_1 + 0x241) = 0;
  FUN_007b5d10(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x4c] = (long ****)0x0;
  param_1[0x4b] = (long ****)0x0;
  param_1[0x4e] = (long ****)0x0;
  param_1[0x4d] = (long ****)0x0;
  param_1[0x50] = (long ****)0x0;
  param_1[0x4f] = (long ****)0x0;
  param_1[0x52] = (long ****)0x0;
  param_1[0x51] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x299) = 0;
  *(undefined8 *)((long)param_1 + 0x291) = 0;
  FUN_007b5d10(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = 1;
  FUN_0044d668(param_1 + 0x55,param_5);
  FUN_00623890(1);
  FUN_00623880(1);
  uVar28 = 0;
  switch(*(undefined4 *)(param_5 + 4)) {
  case 0:
  case 1:
    break;
  case 2:
    uVar28 = 1;
    break;
  case 3:
    uVar28 = 2;
    break;
  default:
    uVar28 = 3;
    break;
  case 5:
    bVar14 = 0;
    uVar28 = 4;
  }
  uVar5 = 4;
  if (*(char *)(param_5 + 0x82) != '\0') {
    uVar5 = uVar28;
  }
  FUN_006238a0(uVar5);
  FUN_00623960(0);
  bVar10 = *(byte *)(param_5 + 0x37);
  pppppppuVar26 = *(undefined8 ********)(param_5 + 0x28);
  pppppppuVar18 = pppppppuVar26;
  if (-1 < (char)bVar10) {
    pppppppuVar18 = (undefined8 *******)(ulong)bVar10;
  }
  if (pppppppuVar18 == (undefined8 *******)0x0) {
    FUN_005125b4(&local_a0);
  }
  else if ((char)bVar10 < '\0') {
    ppppppplVar27 = *(long ********)(param_5 + 0x20);
    if (pppppppuVar26 < (undefined8 *******)0x17) {
      ppppppplVar17 = (long *******)&local_a0;
      local_90 = (code *)CONCAT17((char)pppppppuVar26,(undefined7)local_90);
    }
    else {
      if ((undefined8 *******)0x7fffffffffffffef < pppppppuVar26) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = ((ulong)pppppppuVar26 | 0xf) + 1;
      ppppppplVar17 = (long *******)operator_new(uVar16);
      local_90 = (code *)(uVar16 | 0x8000000000000000);
      local_a0 = ppppppplVar17;
      uStack_98 = pppppppuVar26;
    }
    if ((ppppppplVar17 <= ppppppplVar27) &&
       (ppppppplVar27 < (long *******)((long)ppppppplVar17 + (long)pppppppuVar26 + 1U)))
    goto LAB_0044d5c8;
    memmove(ppppppplVar17,ppppppplVar27,(long)pppppppuVar26 + 1U);
  }
  else {
    uStack_98 = *(undefined8 ********)(param_5 + 0x28);
    local_a0 = *(long ********)(param_5 + 0x20);
    local_90 = *(code **)(param_5 + 0x30);
  }
  FUN_004d7b58(&local_d8,&local_a0);
  bVar12 = (bool)(bVar14 ^ 1);
  if (*(int *)(param_5 + 4) < 0) {
    bVar12 = true;
  }
  if (bVar12) {
LAB_0044c764:
    pppplVar22 = (long ****)0x0;
  }
  else {
    sVar1 = local_d0;
    if (-1 < (char)local_c1) {
      sVar1 = (ulong)local_c1;
    }
    if ((sVar1 == 0) || (uVar16 = FUN_004d7ae8(&local_d8), bVar14 = local_c1, (uVar16 & 1) == 0))
    goto LAB_0044c764;
    sVar1 = local_d0;
    if (-1 < (char)local_c1) {
      sVar1 = (ulong)local_c1;
    }
    __n = 7;
    ppppppplVar27 = (long *******)"discord";
    if (*(char *)(param_5 + 0x85) != '\0') {
      __n = 0x12;
      ppppppplVar27 = (long *******)"discord-standalone";
    }
    pppppppuVar18 = (undefined8 *******)(sVar1 + __n);
    if ((undefined8 *******)0x7fffffffffffffef < pppppppuVar18) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (pppppppuVar18 < (undefined8 *******)0x17) {
      pppppppuStack_140 = (undefined8 *******)0x0;
      ppppppplVar17 = (long *******)&local_148;
      local_148 = (long *******)0x0;
      local_138 = (undefined8 *******)((long)pppppppuVar18 << 0x38);
    }
    else {
      uVar16 = ((ulong)pppppppuVar18 | 0xf) + 1;
      ppppppplVar17 = (long *******)operator_new(uVar16);
      local_138 = (undefined8 *******)(uVar16 | 0x8000000000000000);
      local_148 = ppppppplVar17;
      pppppppuStack_140 = pppppppuVar18;
    }
    ppppppplVar3 = (long *******)((long)ppppppplVar17 + sVar1);
    ppppppplVar6 = local_d8;
    if (-1 < (char)bVar14) {
      ppppppplVar6 = (long *******)&local_d8;
    }
    if ((ppppppplVar17 <= ppppppplVar6) && (ppppppplVar6 < ppppppplVar3)) goto LAB_0044d5c8;
    if (sVar1 != 0) {
      memmove(ppppppplVar17,ppppppplVar6,sVar1);
    }
    if ((ppppppplVar3 <= ppppppplVar27) &&
       (ppppppplVar27 < (long *******)((long)ppppppplVar3 + __n))) goto LAB_0044d5c8;
    memcpy(ppppppplVar3,ppppppplVar27,__n);
    *(char *)((long)ppppppplVar3 + __n) = '\0';
    puVar21 = (undefined8 *)FUN_00547cac(&local_148,"-webrtc_0",9);
    bVar14 = local_c1;
    local_90 = (code *)puVar21[2];
    uStack_98 = (undefined8 *******)puVar21[1];
    local_a0 = (long *******)*puVar21;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    sVar1 = local_d0;
    if (-1 < (char)local_c1) {
      sVar1 = (ulong)local_c1;
    }
    ppcVar4 = (char **)(sVar1 + __n);
    if ((char **)0x7fffffffffffffef < ppcVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (ppcVar4 < (char **)0x17) {
      local_e8 = (char **)0x0;
      ppppppplVar17 = (long *******)&local_f0;
      local_f0 = (long *******)0x0;
      uStack_e0 = (long)ppcVar4 << 0x38;
    }
    else {
      uVar16 = ((ulong)ppcVar4 | 0xf) + 1;
      ppppppplVar17 = (long *******)operator_new(uVar16);
      uStack_e0 = uVar16 | 0x8000000000000000;
      local_f0 = ppppppplVar17;
      local_e8 = ppcVar4;
    }
    ppppppplVar3 = (long *******)((long)ppppppplVar17 + sVar1);
    ppppppplVar6 = local_d8;
    if (-1 < (char)bVar14) {
      ppppppplVar6 = (long *******)&local_d8;
    }
    if ((ppppppplVar17 <= ppppppplVar6) && (ppppppplVar6 < ppppppplVar3)) goto LAB_0044d5c8;
    if (sVar1 != 0) {
      memmove(ppppppplVar17,ppppppplVar6,sVar1);
    }
    if ((ppppppplVar3 <= ppppppplVar27) &&
       (ppppppplVar27 < (long *******)((long)ppppppplVar3 + __n))) goto LAB_0044d5c8;
    memcpy(ppppppplVar3,ppppppplVar27,__n);
    *(char *)((long)ppppppplVar3 + __n) = '\0';
    puVar21 = (undefined8 *)FUN_00547cac(&local_f0,"-last-webrtc_0",0xe);
    uStack_b8 = puVar21[1];
    local_c0 = (char *)*puVar21;
    local_b0 = (undefined1 *)puVar21[2];
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    FUN_004d7df8(&local_a0,&local_c0);
    if ((long)local_138 < 0) {
      operator_delete(local_148);
    }
    bVar14 = local_c1;
    sVar1 = local_d0;
    if (-1 < (char)local_c1) {
      sVar1 = (ulong)local_c1;
    }
    pppppppuVar18 = (undefined8 *******)(sVar1 + __n);
    if ((undefined8 *******)0x7fffffffffffffef < pppppppuVar18) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (pppppppuVar18 < (undefined8 *******)0x17) {
      pppppppuStack_140 = (undefined8 *******)0x0;
      ppppppplVar17 = (long *******)&local_148;
      local_148 = (long *******)0x0;
      local_138 = (undefined8 *******)((long)pppppppuVar18 << 0x38);
    }
    else {
      uVar16 = ((ulong)pppppppuVar18 | 0xf) + 1;
      ppppppplVar17 = (long *******)operator_new(uVar16);
      local_138 = (undefined8 *******)(uVar16 | 0x8000000000000000);
      local_148 = ppppppplVar17;
      pppppppuStack_140 = pppppppuVar18;
    }
    ppppppplVar3 = (long *******)((long)ppppppplVar17 + sVar1);
    ppppppplVar6 = local_d8;
    if (-1 < (char)bVar14) {
      ppppppplVar6 = (long *******)&local_d8;
    }
    if ((ppppppplVar17 <= ppppppplVar6) && (ppppppplVar6 < ppppppplVar3)) goto LAB_0044d5c8;
    if (sVar1 != 0) {
      memmove(ppppppplVar17,ppppppplVar6,sVar1);
    }
    if ((ppppppplVar3 <= ppppppplVar27) &&
       (ppppppplVar27 < (long *******)((long)ppppppplVar3 + __n))) goto LAB_0044d5c8;
    memcpy(ppppppplVar3,ppppppplVar27,__n);
    *(char *)((long)ppppppplVar3 + __n) = '\0';
    puVar21 = (undefined8 *)FUN_00547cac(&local_148,"-webrtc_1",9);
    bVar14 = local_c1;
    local_90 = (code *)puVar21[2];
    uStack_98 = (undefined8 *******)puVar21[1];
    local_a0 = (long *******)*puVar21;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    sVar1 = local_d0;
    if (-1 < (char)local_c1) {
      sVar1 = (ulong)local_c1;
    }
    ppcVar4 = (char **)(sVar1 + __n);
    if ((char **)0x7fffffffffffffef < ppcVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (ppcVar4 < (char **)0x17) {
      local_e8 = (char **)0x0;
      ppppppplVar17 = (long *******)&local_f0;
      local_f0 = (long *******)0x0;
      uStack_e0 = (long)ppcVar4 << 0x38;
    }
    else {
      uVar16 = ((ulong)ppcVar4 | 0xf) + 1;
      ppppppplVar17 = (long *******)operator_new(uVar16);
      uStack_e0 = uVar16 | 0x8000000000000000;
      local_f0 = ppppppplVar17;
      local_e8 = ppcVar4;
    }
    ppppppplVar3 = (long *******)((long)ppppppplVar17 + sVar1);
    ppppppplVar6 = local_d8;
    if (-1 < (char)bVar14) {
      ppppppplVar6 = (long *******)&local_d8;
    }
    if ((ppppppplVar17 <= ppppppplVar6) && (ppppppplVar6 < ppppppplVar3)) goto LAB_0044d5c8;
    if (sVar1 != 0) {
      memmove(ppppppplVar17,ppppppplVar6,sVar1);
    }
    if ((ppppppplVar3 <= ppppppplVar27) &&
       (ppppppplVar27 < (long *******)((long)ppppppplVar3 + __n))) goto LAB_0044d5c8;
    memcpy(ppppppplVar3,ppppppplVar27,__n);
    *(char *)((long)ppppppplVar3 + __n) = '\0';
    puVar21 = (undefined8 *)FUN_00547cac(&local_f0,"-last-webrtc_1",0xe);
    uStack_b8 = puVar21[1];
    local_c0 = (char *)*puVar21;
    local_b0 = (undefined1 *)puVar21[2];
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    FUN_004d7df8(&local_a0,&local_c0);
    if ((long)local_138 < 0) {
      operator_delete(local_148);
    }
    local_138 = (undefined8 *******)CONCAT17(7,(undefined7)local_138);
    if ((&local_148 < &UNK_001e72ea) && (&UNK_001e72e9 < (undefined *)((ulong)&local_148 | 7)))
    goto LAB_0044d5c8;
    local_148 = (long *******)0x6374726265772d;
    puVar21 = (undefined8 *)FUN_00547994(&local_148,0,ppppppplVar27,__n);
    uStack_98 = (undefined8 *******)puVar21[1];
    local_a0 = (long *******)*puVar21;
    local_90 = (code *)puVar21[2];
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = 0;
    pppplVar22 = (long ****)operator_new(0x20);
    if (-1 < (char)local_c1) {
      local_d0 = (ulong)local_c1;
      local_d8 = (long *******)&local_d8;
    }
    if (((local_d8 == (long *******)0x0) && (local_d0 != 0)) ||
       ((&stack0x00000000 == (undefined1 *)0xa0 && ((ulong)local_90 >> 0x38 != 0)))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    FUN_005f0fb8(pppplVar22);
    if ((long)local_138 < 0) {
      operator_delete(local_148);
    }
    (*(code *)(*pppplVar22)[9])(pppplVar22);
    FUN_005f1260(pppplVar22);
    FUN_00623970(pppplVar22,uVar28);
  }
  local_f8 = FUN_00518300();
  local_100 = FUN_005183a4(&local_f8);
  uVar16 = FUN_00417e08();
  if ((uVar16 & 1) == 0) {
    local_b0 = auStack_118;
    local_c0 = "../../discord_native_lib/src/media/engine.cpp";
    uStack_b8 = 0xcb9;
    ppcStack_108 = &local_c0;
    local_110 = "Created native engine";
    local_e8 = &local_110;
    local_f0 = (long *******)0x1b08b5;
    local_128 = localtime(&local_100);
    pcStack_120 = "%c %Z";
    FUN_00454548(&local_148,&local_128);
    pppppppuVar18 = pppppppuStack_140;
    ppppppplVar27 = local_148;
    if ((long)local_138 < 0) {
      if (pppppppuStack_140 < (undefined8 *******)0x17) {
        ppppppplVar17 = (long *******)&local_a0;
        local_90 = (code *)CONCAT17((char)pppppppuStack_140,(undefined7)local_90);
      }
      else {
        if ((undefined8 *******)0x7fffffffffffffef < pppppppuStack_140) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar16 = ((ulong)pppppppuStack_140 | 0xf) + 1;
        ppppppplVar17 = (long *******)operator_new(uVar16);
        local_90 = (code *)(uVar16 | 0x8000000000000000);
        uStack_98 = pppppppuVar18;
        local_a0 = ppppppplVar17;
      }
      sVar1 = (long)pppppppuVar18 + 1;
      if ((ppppppplVar17 <= ppppppplVar27) &&
         (ppppppplVar27 < (long *******)((long)ppppppplVar17 + sVar1))) goto LAB_0044d5c8;
      memmove(ppppppplVar17,ppppppplVar27,sVar1);
      local_88 = (long *******)&local_f0;
      operator_delete(ppppppplVar27);
    }
    else {
      uStack_98 = pppppppuStack_140;
      local_a0 = local_148;
      local_90 = (code *)local_138;
      local_88 = (long *******)&local_f0;
    }
    ppppplVar8 = local_88[1][1];
    FUN_00623bb0(&DAT_001f6468,*ppppplVar8,ppppplVar8[1],*local_88[1],*local_88,&local_a0,
                 ", logPath: ",&local_d8,", logLevel: ",*(undefined4 *)(param_5 + 4));
  }
  param_1[0x66] = pppplVar22;
  param_1[0x67] = param_2;
  param_1[0x68] = param_3;
  if (param_3 != (long ****)0x0) {
    pppplVar22 = param_3 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
      if (bVar12) {
        *pppplVar22 = (long ***)((long)*pppplVar22 + 1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  *(undefined2 *)(param_1 + 0x70) = 0x101;
  param_1[0x69] = param_4;
  param_1[0x6b] = (long ****)0x0;
  param_1[0x6a] = (long ****)0x0;
  param_1[0x6d] = (long ****)0x0;
  param_1[0x6c] = (long ****)0x0;
  *(undefined4 *)((long)param_1 + 900) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x75) = 0x3f800000;
  param_1[0x6f] = (long ****)0x0;
  param_1[0x6e] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  param_1[0x72] = (long ****)0x0;
  param_1[0x78] = (long ****)FUN_004547f0;
  param_1[0x74] = (long ****)0x0;
  param_1[0x73] = (long ****)0x0;
  param_1[0x79] = (long ****)&DAT_001f1910;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x85] = (long ****)FUN_00402980;
  param_1[0x7b] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((long)param_1 + 0x404) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)((long)param_1 + 0x40c) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x86] = (long ****)&DAT_001f1910;
  param_1[0x88] = (long ****)0x0;
  param_1[0x87] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x89) = 1;
  pppplVar22 = (long ****)operator_new(8);
  FUN_004a2230();
  param_1[0x8a] = pppplVar22;
  local_90 = (code *)CONCAT17(0xc,(undefined7)local_90);
  if ((&local_a0 < "dev/urandom") && ("/dev/urandom" < (char *)((long)&uStack_98 + 4U))) {
LAB_0044d5c8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar16 = (ulong)uStack_98 >> 0x20;
  uStack_98 = (undefined8 *******)CONCAT44((uint)uVar16 & 0xffffff00,0x6d6f646e);
  local_a0 = (long *******)s__dev_urandom_001adbe7._0_8_;
  FUN_00546c98(param_1 + 0x8b,&local_a0);
  uVar16 = FUN_00546d98(param_1 + 0x8b);
  pppplVar22 = (long ****)(uVar16 & 0xffffffff);
  lVar23 = 0x8d;
  param_1[0x8c] = pppplVar22;
  do {
    pppplVar22 = (long ****)
                 (ulong)(((int)lVar23 +
                         ((uint)((ulong)pppplVar22 >> 0x1e) ^ (uint)pppplVar22) * 0x6c078965) - 0x8c
                        );
    param_1[lVar23] = pppplVar22;
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x2fc);
  param_1[0x2fc] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x2fd) = 0xffff0000;
  pppppppuVar18 = (undefined8 *******)operator_new(0xd0);
  FUN_0044b5f4();
  param_1[0x2fe] = (long ****)pppppppuVar18;
  local_80 = 0;
  local_a0 = (long *******)0x0;
  local_88 = (long *******)0x0;
  local_90 = (code *)0x0;
  uStack_98 = pppppppuVar18;
  FUN_008b60e8(param_1 + 0x2ff,&local_a0);
  if (local_a0 != (long *******)0x0) {
    ppppppplVar27 = local_a0 + 1;
    do {
      iVar7 = *(int *)ppppppplVar27;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
      if (bVar12) {
        *(int *)ppppppplVar27 = iVar7 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar7 + -1 == 0) {
      (*(code *)(*local_a0)[1])();
    }
  }
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined2 *)((long)param_1 + 0x1824) = *(undefined2 *)(param_5 + 0x80);
  uVar19 = FUN_0051452c(param_1[0x67]);
  FUN_005156ac(param_1 + 0x305,uVar19,param_1);
  *(undefined4 *)(param_1 + 0x30c) = 0;
  param_1[0x30f] = (long ****)FUN_0041bca0;
  param_1[0x310] = (long ****)&DAT_001f1910;
  param_1[0x30b] = (long ****)0x0;
  param_1[0x30a] = (long ****)0x0;
  param_1[0x309] = (long ****)0x0;
  param_1[0x308] = (long ****)0x0;
  param_1[0x312] = (long ****)0x0;
  param_1[0x311] = (long ****)0x0;
  param_1[0x314] = (long ****)0x0;
  param_1[0x313] = (long ****)0x0;
  param_1[0x316] = (long ****)0x0;
  param_1[0x315] = (long ****)0x0;
  param_1[0x318] = (long ****)0x0;
  param_1[0x317] = (long ****)0x0;
  *(undefined8 *)((long)param_1 + 0x18c9) = 0;
  *(undefined8 *)((long)param_1 + 0x18c1) = 0;
  FUN_007b5d10(param_1 + 0x316);
  param_1[0x332] = (long ****)&DAT_001f1910;
  *(undefined1 *)(param_1 + 0x31a) = 1;
  param_1[0x31c] = (long ****)0x0;
  param_1[0x31b] = (long ****)0x0;
  param_1[0x31e] = (long ****)0x0;
  param_1[0x31d] = (long ****)0x0;
  param_1[0x321] = (long ****)0x0;
  param_1[800] = (long ****)0x0;
  *(undefined4 *)(param_1 + 799) = 0x3f800000;
  param_1[0x323] = (long ****)0x0;
  param_1[0x322] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x324) = 0x3f800000;
  param_1[0x326] = (long ****)0x0;
  param_1[0x325] = (long ****)0x0;
  param_1[0x328] = (long ****)0x0;
  param_1[0x327] = (long ****)0x0;
  param_1[0x32a] = (long ****)0x0;
  param_1[0x329] = (long ****)0x0;
  param_1[0x32c] = (long ****)0x0;
  param_1[0x32b] = (long ****)0x0;
  param_1[0x32e] = (long ****)0x0;
  param_1[0x32d] = (long ****)0x0;
  param_1[0x331] = (long ****)FUN_0041bfe0;
  pppppppuVar18 = &pppppppuStack_140;
  local_148 = (long *******)CONCAT71(local_148._1_7_,*(undefined1 *)(param_5 + 0x40));
  if (*(char *)(param_5 + 0x5f) < '\0') {
    pppppppuVar26 = *(undefined8 ********)(param_5 + 0x48);
    pppppppuVar9 = *(undefined8 ********)(param_5 + 0x50);
    if (pppppppuVar9 < (undefined8 *******)0x17) {
      local_130 = CONCAT17((char)pppppppuVar9,(undefined7)local_130);
    }
    else {
      if ((undefined8 *******)0x7fffffffffffffef < pppppppuVar9) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = ((ulong)pppppppuVar9 | 0xf) + 1;
      pppppppuVar18 = (undefined8 *******)operator_new(uVar16);
      local_130 = uVar16 | 0x8000000000000000;
      pppppppuStack_140 = pppppppuVar18;
      local_138 = pppppppuVar9;
    }
    if ((pppppppuVar18 <= pppppppuVar26) &&
       (pppppppuVar26 < (undefined8 *******)((long)pppppppuVar18 + (long)pppppppuVar9 + 1U)))
    goto LAB_0044d5c8;
    memmove(pppppppuVar18,pppppppuVar26,(long)pppppppuVar9 + 1U);
  }
  else {
    local_138 = *(undefined8 ********)(param_5 + 0x50);
    pppppppuStack_140 = *(undefined8 ********)(param_5 + 0x48);
    local_130 = *(ulong *)(param_5 + 0x58);
  }
  uVar19 = FUN_004ba140(&local_148);
  pppplVar22 = (long ****)operator_new(0x50);
  local_90 = FUN_00455b74;
  local_88 = (long *******)&PTR_FUN_00d1c6e0;
  local_a0 = (long *******)operator_new(0x18);
  ((long ******)local_a0)[2] = param_1;
  *local_a0 = (long ******)FUN_0044d9a4;
  ((long ******)local_a0)[1] = (long *****)0x0;
  FUN_004ba490(pppplVar22,uVar19,&local_a0);
  if (local_88[1] != (long ******)0x0) {
    (*(code *)local_88[1])(local_a0);
  }
  param_1[0x333] = pppplVar22;
  if ((long)local_130 < 0) {
    operator_delete(pppppppuStack_140);
  }
  FUN_004b2cdc(param_1 + 0x334);
  param_1[0x347] = (long ****)0x0;
  param_1[0x343] = (long ****)0x0;
  param_1[0x346] = (long ****)0x0;
  param_1[0x345] = (long ****)0x0;
  param_1[0x34b] = (long ****)&DAT_001f1910;
  *(undefined8 *)((long)param_1 + 0x1a1d) = 0;
  param_1[0x34f] = (long ****)&DAT_001f1910;
  param_1[0x34a] = (long ****)FUN_0041c320;
  param_1[0x353] = (long ****)&DAT_001f1910;
  param_1[0x354] = (long ****)0x0;
  param_1[0x34e] = (long ****)FUN_0041c32c;
  param_1[0x352] = (long ****)FUN_00410008;
  FUN_007c0604();
  pppplVar22 = (long ****)operator_new(0xf8);
  if (param_3 != (long ****)0x0) {
    pppplVar20 = param_3 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppplVar20,0x10);
      if (bVar12) {
        *pppplVar20 = (long ***)((long)*pppplVar20 + 1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  FUN_00433484(pppplVar22,param_2,param_3);
  pppplVar20 = param_1[0x6b];
  param_1[0x6b] = pppplVar22;
  if (pppplVar20 != (long ****)0x0) {
    (*(code *)(*pppplVar20)[4])();
  }
  uVar19 = FUN_007e03ac();
  FUN_007e08e0(uVar19,param_1[0x6b]);
  pppplVar22 = (long ****)operator_new(0x20);
  FUN_004bf568();
  pppplVar20 = param_1[0x354];
  param_1[0x354] = pppplVar22;
  if (pppplVar20 != (long ****)0x0) {
    FUN_004bf578(pppplVar20);
    operator_delete(pppplVar20);
  }
  FUN_004f0500(FUN_004547fc);
  pppppplVar15 = (long ******)local_a0;
  pppplVar20 = param_1[99];
  local_90 = (code *)0x0;
  local_88 = (long *******)0x0;
  pppplVar22 = param_1[0x62];
  uStack_98 = (undefined8 *******)0x0;
  uVar16 = (long)pppplVar20 - (long)pppplVar22;
  local_a0._6_2_ = SUB82(pppppplVar15,6);
  local_a0._0_6_ =
       CONCAT15(*(undefined1 *)(param_1 + 0x61),
                CONCAT14(*(undefined1 *)((long)param_1 + 0x32b),*(undefined4 *)(param_1 + 0x55)));
  if (uVar16 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar16 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pppppppuVar18 = (undefined8 *******)operator_new(uVar16);
    lVar23 = 0;
    local_88 = pppppppuVar18 + ((long)uVar16 >> 3);
    uStack_98 = pppppppuVar18;
    do {
      puVar21 = (undefined8 *)((long)pppplVar22 + lVar23);
      __dest = (undefined8 *)((long)pppppppuVar18 + lVar23);
      if (*(char *)((long)puVar21 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar21;
        uVar16 = puVar21[1];
        if (uVar16 < 0x17) {
          *(char *)((long)pppppppuVar18 + lVar23 + 0x17) = (char)uVar16;
        }
        else {
          if (0x7fffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar2 = (uVar16 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar2);
          puVar21 = (undefined8 *)((long)pppppppuVar18 + lVar23);
          puVar21[1] = uVar16;
          puVar21[2] = uVar2 | 0x8000000000000000;
          *puVar21 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar16 + 1)))
        goto LAB_0044d5c8;
        memmove(__dest,__src,uVar16 + 1);
      }
      else {
        uVar29 = puVar21[1];
        uVar19 = *puVar21;
        __dest[2] = puVar21[2];
        __dest[1] = uVar29;
        *__dest = uVar19;
      }
      lVar23 = lVar23 + 0x18;
    } while ((long ****)((long)pppplVar22 + lVar23) != pppplVar20);
    local_90 = (code *)((long)pppppppuVar18 + lVar23);
  }
  local_80 = FUN_0051452c(param_1[0x67]);
  pppplVar22 = (long ****)
               FUN_0044db50(param_1,param_1[0x69],&local_a0,param_5 + 8,
                            (undefined2 *)((long)param_1 + 0x1824),(long)param_1 + 0x1825);
  pppplVar20 = param_1[0x6c];
  param_1[0x6c] = pppplVar22;
  if (pppplVar20 != (long ****)0x0) {
    FUN_0042dcd8(pppplVar20);
    operator_delete(pppplVar20);
  }
  puVar21 = (undefined8 *)operator_new(0x28);
  *puVar21 = param_1;
  puVar21[3] = FUN_00410828;
  puVar21[4] = &DAT_001f1910;
  FUN_005467a4(ppppplVar25);
  if (*(char *)(param_1 + 0xe) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b5a0c(param_1 + 10,puVar21,puVar21,FUN_00455e40);
  FUN_005467c8(ppppplVar25);
  local_148 = (long *******)0x0;
  FUN_0044e610(param_1 + 0x308,puVar21);
  FUN_0044e610(&local_148,0);
  FUN_00515708(param_1 + 0x305,FUN_0044dd08,0,1000);
  if (*(char *)(param_5 + 0x84) != '\0') {
    FUN_0044dd44(param_1);
  }
  FUN_004baa98(param_1[0x333]);
  *(undefined1 *)((long)param_1 + 0x1a24) = 1;
  FUN_004a2250(param_1[0x8a]);
  if (uStack_98 != (undefined8 *******)0x0) {
    for (; (undefined8 *******)local_90 != uStack_98; local_90 = (code *)((long)local_90 + -0x18)) {
    }
    local_90 = (code *)uStack_98;
    operator_delete(uStack_98);
  }
  if (param_3 != (long ****)0x0) {
    pppplVar22 = param_3 + 1;
    do {
      ppplVar24 = *pppplVar22;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppplVar22,0x10);
      if (bVar12) {
        *pppplVar22 = (long ***)((long)ppplVar24 + -1);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (ppplVar24 == (long ***)0x0) {
      (*(code *)(*param_3)[2])(param_3);
      FUN_005466cc(param_3);
    }
  }
  if (*(long *)(lVar13 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044d668  FUN_0044d668 =====

void FUN_0044d668(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *__src;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar7 = param_1 + 1;
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar9 = (undefined8 *)param_2[1];
    uVar6 = param_2[2];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[1] = puVar7;
      param_1[2] = uVar6;
      param_1[3] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1)))
    goto LAB_0044d968;
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[2];
    uVar10 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar12;
    *puVar7 = uVar10;
  }
  puVar7 = param_1 + 4;
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar9 = (undefined8 *)param_2[4];
    uVar6 = param_2[5];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[4] = puVar7;
      param_1[5] = uVar6;
      param_1[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1)))
    goto LAB_0044d968;
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[5];
    uVar10 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar12;
    *puVar7 = uVar10;
  }
  puVar7 = param_1 + 9;
  uVar10 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar10;
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    puVar9 = (undefined8 *)param_2[9];
    uVar6 = param_2[10];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x5f) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[9] = puVar7;
      param_1[10] = uVar6;
      param_1[0xb] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1))) {
LAB_0044d968:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[10];
    uVar10 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar12;
    *puVar7 = uVar10;
  }
  uVar5 = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  lVar2 = param_2[0xd];
  lVar3 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xc) = uVar5;
  uVar6 = lVar3 - lVar2;
  if (uVar6 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar6 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar6);
    param_1[0xd] = pvVar8;
    param_1[0xe] = pvVar8;
    param_1[0xf] = (void *)((long)pvVar8 + ((long)uVar6 >> 3) * 8);
    lVar2 = param_2[0xd];
    lVar3 = param_2[0xe];
    if (lVar2 != lVar3) {
      lVar11 = 0;
      do {
        puVar7 = (undefined8 *)(lVar2 + lVar11);
        puVar9 = (undefined8 *)((long)pvVar8 + lVar11);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar7;
          uVar6 = puVar7[1];
          if (uVar6 < 0x17) {
            *(char *)((long)pvVar8 + lVar11 + 0x17) = (char)uVar6;
          }
          else {
            if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar6 | 0xf) + 1;
            puVar9 = (undefined8 *)operator_new(uVar1);
            puVar7 = (undefined8 *)((long)pvVar8 + lVar11);
            puVar7[1] = uVar6;
            puVar7[2] = uVar1 | 0x8000000000000000;
            *puVar7 = puVar9;
          }
          if ((puVar9 <= __src) && (__src < (undefined8 *)((long)puVar9 + uVar6 + 1)))
          goto LAB_0044d968;
          memmove(puVar9,__src,uVar6 + 1);
        }
        else {
          uVar12 = puVar7[1];
          uVar10 = *puVar7;
          puVar9[2] = puVar7[2];
          puVar9[1] = uVar12;
          *puVar9 = uVar10;
        }
        lVar11 = lVar11 + 0x18;
      } while (lVar2 + lVar11 != lVar3);
      pvVar8 = (void *)((long)pvVar8 + lVar11);
    }
    param_1[0xe] = pvVar8;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x84) = *(undefined2 *)((long)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}


// ===== 0044d9a4  FUN_0044d9a4 =====

/* WARNING: Removing unreachable block (ram,0x0044dab4) */
/* WARNING: Removing unreachable block (ram,0x0044dac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d9a4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(param_1 + 0x338);
  pvVar1 = (void *)*param_2;
  pvVar11 = (void *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar12 = param_2[2];
  param_2[2] = 0;
  lVar10 = *(long *)(lVar9 + 0x58);
  if (lVar10 == 0) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    for (; pvVar11 != pvVar1; pvVar11 = (void *)((long)pvVar11 + -0x38)) {
    }
    operator_delete(pvVar1);
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x78);
  if (lVar9 == 0) {
    puVar8 = (undefined8 *)operator_new(0x28);
    puVar8[2] = pvVar1;
    puVar8[3] = pvVar11;
    *puVar8 = &PTR_FUN_00d1c6c8;
    puVar8[1] = param_1;
    puVar8[4] = uVar12;
  }
  else {
    uVar6 = FUN_005ce36c();
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = s_OnVideoInputDevicesChanged_0019fb7c._18_8_;
    uVar4 = s_OnVideoInputDevicesChanged_0019fb7c._0_8_;
    if ((pcVar7 < "nVideoInputDevicesChanged") && ("OnVideoInputDevicesChanged" < pcVar7 + 0x1a)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT62(s_OnVideoInputDevicesChanged_0019fb7c._10_6_,
                     s_OnVideoInputDevicesChanged_0019fb7c._8_2_);
    uVar3 = CONCAT26(s_OnVideoInputDevicesChanged_0019fb7c._16_2_,
                     s_OnVideoInputDevicesChanged_0019fb7c._10_6_);
    pcVar7[0x1a] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar4;
    *(undefined8 *)(pcVar7 + 0x12) = uVar5;
    *(undefined8 *)(pcVar7 + 10) = uVar3;
    puVar8 = (undefined8 *)operator_new(0x68);
    puVar8[2] = pvVar1;
    puVar8[3] = pvVar11;
    uVar5 = _UNK_001f1e68;
    uVar4 = _DAT_001f1e60;
    puVar8[4] = uVar12;
    puVar8[5] = pcVar7;
    *puVar8 = &PTR_FUN_00d1c6a0;
    puVar8[1] = param_1;
    puVar8[8] = lVar9;
    puVar8[7] = uVar5;
    puVar8[6] = uVar4;
    puVar8[0xc] = uVar6;
    puVar8[10] = FUN_0040e7ec;
    puVar8[0xb] = &DAT_001f4e70;
  }
  FUN_00512cf8(lVar10);
  return;
}


// ===== 0044db50  FUN_0044db50 =====

/* WARNING: Removing unreachable block (ram,0x0044dc8c) */

void * FUN_0044db50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   undefined1 *param_5,undefined1 *param_6)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 **__dest;
  undefined1 *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [8];
  void *local_88;
  void *local_80;
  long local_68;
  
  __dest = &local_b0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0x180);
  FUN_0042db4c(auStack_90,param_3);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    __src = (undefined1 *)*param_4;
    uVar2 = param_4[1];
    if (uVar2 < 0x17) {
      local_a0 = CONCAT17((char)uVar2,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      local_b0 = (undefined1 *)__dest;
      uStack_a8 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_a8 = param_4[1];
    local_b0 = (undefined1 *)*param_4;
    local_a0 = param_4[2];
  }
  FUN_0042caa8(pvVar4,param_1,param_2,auStack_90,&local_b0,*param_5,*param_6);
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (local_88 != (void *)0x0) {
    for (; local_80 != local_88; local_80 = (void *)((long)local_80 + -0x18)) {
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044dd08  FUN_0044dd08 =====

void FUN_0044dd08(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    FUN_0044f34c(lVar1);
    FUN_0044f680(lVar1);
    return;
  }
  return;
}


// ===== 0044dd44  FUN_0044dd44 =====

void FUN_0044dd44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58 [2];
  code *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x1928) == 0) {
    pvVar5 = operator_new(0x80);
    local_48 = FUN_0040df64;
    local_40 = &DAT_001f1910;
    local_68 = FUN_0040dec4;
    local_60 = &DAT_001f1910;
    FUN_00513ef0(pvVar5,"VideoInputDevice",local_58,local_78);
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78[0]);
    }
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
    puVar6 = (undefined8 *)operator_new(0x20);
    plVar8 = *(long **)(param_1 + 0x1930);
    puVar6[2] = 0;
    puVar6[3] = pvVar5;
    *(void **)(param_1 + 0x1928) = pvVar5;
    *(undefined8 **)(param_1 + 0x1930) = puVar6;
    *puVar6 = &PTR_FUN_00d1c748;
    puVar6[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_005466cc(plVar8);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044de5c  FUN_0044de5c =====

undefined8 * FUN_0044de5c(long param_1,ushort param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)*puVar4;
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    do {
      while (puVar1 = puVar2, puVar4 = puVar1, param_2 < *(ushort *)(puVar1 + 4)) {
        puVar2 = (undefined8 *)*puVar1;
        puVar5 = puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_0044deb8;
      }
      if (param_2 <= *(ushort *)(puVar1 + 4)) goto LAB_0044df08;
      puVar2 = (undefined8 *)puVar1[1];
    } while ((undefined8 *)puVar1[1] != (undefined8 *)0x0);
    puVar5 = puVar1 + 1;
  }
LAB_0044deb8:
  puVar1 = (undefined8 *)operator_new(0x38);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = puVar4;
  *puVar5 = puVar1;
  plVar3 = *(long **)(param_1 + 0x10);
  *(ushort *)(puVar1 + 4) = param_2;
  puVar2 = puVar1;
  if (*plVar3 != 0) {
    *(long *)(param_1 + 0x10) = *plVar3;
    puVar2 = (undefined8 *)*puVar5;
  }
  FUN_0041dcd0(*(undefined8 *)(param_1 + 0x18),puVar2);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_0044df08:
  return puVar1 + 5;
}


// ===== 0044df20  FUN_0044df20 =====

/* WARNING: Removing unreachable block (ram,0x0044e134) */
/* WARNING: Removing unreachable block (ram,0x0044e120) */
/* WARNING: Removing unreachable block (ram,0x0044e498) */

void FUN_0044df20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  code *pcVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  
  FUN_004a2254(*(undefined8 *)(param_1 + 0x450));
  FUN_00623a50(*(undefined8 *)(param_1 + 0x330));
  FUN_0044e610(param_1 + 0x1840,0);
  if (*(long *)(param_1 + 0x1830) != 0) {
    FUN_00515738(param_1 + 0x1828);
    if (*(long *)(param_1 + 0x1830) != 0) {
      FUN_005ce374(*(long *)(param_1 + 0x1830),PTR_free_00d51ac0);
      *(undefined8 *)(param_1 + 0x1830) = 0;
    }
  }
  plVar5 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  pvVar9 = *(void **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_0042dcd8(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x1aa0);
  *(undefined8 *)(param_1 + 0x1aa0) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004bf578(pvVar9);
    operator_delete(pvVar9);
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x1a98) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x1a80));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x1a78) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x1a60));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x1a58) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x1a40));
  }
  pvVar9 = *(void **)(param_1 + 0x1a28);
  if (pvVar9 != (void *)0x0) {
    pvVar6 = pvVar9;
    pvVar10 = *(void **)(param_1 + 0x1a30);
    if (*(void **)(param_1 + 0x1a30) != pvVar9) {
      do {
        pvVar6 = (void *)((long)pvVar10 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar10 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar10 + -0x20));
        }
        pvVar10 = pvVar6;
      } while (pvVar6 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x1a28);
    }
    *(void **)(param_1 + 0x1a30) = pvVar9;
    operator_delete(pvVar6);
  }
  FUN_004b2d14(param_1 + 0x19a0);
  pvVar9 = *(void **)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1998) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004ba7e4(pvVar9);
    operator_delete(pvVar9);
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x1990) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x1978));
  }
  pvVar9 = *(void **)(param_1 + 0x1960);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)(param_1 + 0x1968);
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar10 + -0x68);
        FUN_004548a8(pvVar10);
      } while (pvVar10 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x1960);
    }
    *(void **)(param_1 + 0x1968) = pvVar9;
    operator_delete(pvVar6);
  }
  pvVar9 = *(void **)(param_1 + 0x1948);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)(param_1 + 0x1950);
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar10 + -0x38);
      } while (pvVar10 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x1948);
    }
    *(void **)(param_1 + 0x1950) = pvVar9;
    operator_delete(pvVar6);
  }
  plVar5 = *(long **)(param_1 + 0x1940);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      plVar5 = *(long **)(param_1 + 0x1930);
      goto joined_r0x0044e170;
    }
  }
  plVar5 = *(long **)(param_1 + 0x1930);
joined_r0x0044e170:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_00455db4(param_1 + 0x1900);
  FUN_00455d08(param_1 + 0x18d8);
  if (*(char *)(param_1 + 0x18d0) != '\0') {
    FUN_007b5d24(param_1 + 0x18b0);
  }
  FUN_00546ab0(param_1 + 0x1888);
  pcVar7 = *(code **)(*(long *)(param_1 + 0x1880) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x1868));
  }
  pvVar9 = *(void **)(param_1 + 0x1848);
  if (pvVar9 != (void *)0x0) {
    pvVar6 = pvVar9;
    pvVar10 = *(void **)(param_1 + 0x1850);
    if (*(void **)(param_1 + 0x1850) != pvVar9) {
      do {
        pvVar6 = (void *)((long)pvVar10 + -0x20);
        pcVar7 = *(code **)(*(long *)((long)pvVar10 + -8) + 8);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(*(undefined8 *)((long)pvVar10 + -0x20));
        }
        pvVar10 = pvVar6;
      } while (pvVar6 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x1848);
    }
    *(void **)(param_1 + 0x1850) = pvVar9;
    operator_delete(pvVar6);
  }
  FUN_0044e610(param_1 + 0x1840,0);
  *(undefined ***)(param_1 + 0x1828) = &PTR_FUN_00d193e8;
  if (*(long *)(param_1 + 0x1830) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1830),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1830) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x17f8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x17f0);
  *(undefined8 *)(param_1 + 0x17f0) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_00546d7c(param_1 + 0x458);
  pvVar9 = *(void **)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x450) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004a2238(pvVar9);
    operator_delete(pvVar9);
  }
  plVar5 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x430) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x418));
  }
  pcVar7 = *(code **)(*(long *)(param_1 + 0x3c8) + 8);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(param_1 + 0x3b0));
  }
  pvVar9 = *(void **)(param_1 + 0x390);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)(param_1 + 0x398);
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar10 + -0xf8);
        FUN_00411fac(pvVar10);
      } while (pvVar10 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x390);
    }
    *(void **)(param_1 + 0x398) = pvVar9;
    operator_delete(pvVar6);
  }
  pvVar9 = *(void **)(param_1 + 0x368);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)(param_1 + 0x370);
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar10 + -0xf8);
        FUN_00411fac(pvVar10);
      } while (pvVar10 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x368);
    }
    *(void **)(param_1 + 0x370) = pvVar9;
    operator_delete(pvVar6);
  }
  pvVar9 = *(void **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_0042dcd8(pvVar9);
    operator_delete(pvVar9);
  }
  plVar5 = *(long **)(param_1 + 0x358);
  *(undefined8 *)(param_1 + 0x358) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(param_1 + 0x340);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  pvVar9 = *(void **)(param_1 + 0x310);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = *(void **)(param_1 + 0x318);
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar10 + -0x18);
      } while (pvVar10 != pvVar9);
      pvVar6 = *(void **)(param_1 + 0x310);
    }
    *(void **)(param_1 + 0x318) = pvVar9;
    operator_delete(pvVar6);
  }
  if (*(char *)(param_1 + 0x307) < '\0') {
    operator_delete(*(void **)(param_1 + 0x2f0));
    cVar2 = *(char *)(param_1 + 0x2df);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2df);
  }
  if (cVar2 < '\0') {
    operator_delete(*(void **)(param_1 + 0x2c8));
    cVar2 = *(char *)(param_1 + 0x2c7);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2c7);
  }
  if (cVar2 < '\0') {
    operator_delete(*(void **)(param_1 + 0x2b0));
  }
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    FUN_007b5d24(param_1 + 0x280);
  }
  FUN_00546ab0(param_1 + 600);
  if (*(char *)(param_1 + 0x250) != '\0') {
    FUN_007b5d24(param_1 + 0x230);
  }
  FUN_00546ab0(param_1 + 0x208);
  if (*(char *)(param_1 + 0x200) != '\0') {
    FUN_007b5d24(param_1 + 0x1e0);
  }
  FUN_00546ab0(param_1 + 0x1b8);
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    FUN_007b5d24(param_1 + 400);
  }
  FUN_00546ab0(param_1 + 0x168);
  if (*(char *)(param_1 + 0x160) != '\0') {
    FUN_007b5d24(param_1 + 0x140);
  }
  FUN_00546ab0(param_1 + 0x118);
  if (*(char *)(param_1 + 0x110) != '\0') {
    FUN_007b5d24(param_1 + 0xf0);
  }
  FUN_00546ab0(param_1 + 200);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_007b5d24(param_1 + 0xa0);
  }
  FUN_00546ab0(param_1 + 0x78);
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_007b5d24(param_1 + 0x50);
  }
  FUN_00546ab0(param_1 + 0x28);
  FUN_00455c90(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 0044e610  FUN_0044e610 =====

void FUN_0044e610(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  FUN_005467a4(lVar2 + 0x28);
  if (*(char *)(lVar2 + 0x70) != '\0') {
    FUN_007b5df8(lVar2 + 0x50,plVar1);
    FUN_005467c8(lVar2 + 0x28);
    if (*(code **)(plVar1[4] + 8) != (code *)0x0) {
      (**(code **)(plVar1[4] + 8))(plVar1[1]);
    }
    operator_delete(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0044e6b8  FUN_0044e6b8 =====

undefined1  [16] FUN_0044e6b8(long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *__src;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined1 **__dest;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  __dest = &local_90;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_70 = param_3;
  local_68 = param_4;
  auVar9 = FUN_004562dc(auStack_60,param_1,*(undefined8 *)(param_1 + 0x360),&local_70,
                        param_1 + 0x338,param_2);
  lVar8 = auVar9._0_8_;
  FUN_005467a4(lVar8 + 0x20);
  if (*(char *)(lVar8 + 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b5a0c(lVar8 + 0x48,param_1,param_1,FUN_00456468);
  FUN_005467c8(lVar8 + 0x20);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_80 = CONCAT17((char)uVar3,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar3;
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
    uStack_88 = param_2[1];
    local_90 = (undefined1 *)*param_2;
    local_80 = param_2[2];
  }
  FUN_00436b20(lVar8,&local_90,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
               *(undefined4 *)(param_2 + 4),param_2 + 8);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  plVar7 = local_68;
  plVar2 = (long *)(param_1 + 0x350);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = *plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      FUN_005466cc(plVar7);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044e8c4  FUN_0044e8c4 =====

undefined1  [16]
FUN_0044e8c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60 = param_4;
  local_58 = param_5;
  auVar7 = FUN_004562dc(auStack_50,param_1,*(undefined8 *)(param_1 + 0x360),&local_60,
                        param_1 + 0x338,param_3);
  lVar6 = auVar7._0_8_;
  FUN_005467a4(lVar6 + 0x20);
  if (*(char *)(lVar6 + 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  FUN_007b5a0c(lVar6 + 0x48,param_1,param_1,FUN_004564f0);
  FUN_005467c8(lVar6 + 0x20);
  FUN_00437b78(lVar6,param_2);
  plVar5 = local_58;
  plVar1 = (long *)(param_1 + 0x350);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
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
      (**(code **)(*local_58 + 0x10))(local_58);
      FUN_005466cc(plVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044ea04  FUN_0044ea04 =====

undefined4 FUN_0044ea04(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_001f6450 + (long)(int)param_1 * 4);
  }
  return 3;
}


// ===== 0044ea24  FUN_0044ea24 =====

void FUN_0044ea24(long param_1,uint param_2)

{
  undefined1 *__src;
  long lVar1;
  ulong uVar2;
  undefined1 **__dest;
  long lVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  char acStack_60 [23];
  char local_49;
  long local_48;
  
  ppuVar4 = &local_80;
  __dest = &local_80;
  lVar1 = tpidr_el0;
  uVar5 = (ulong)param_2;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x16e1,
                 "Setting audio input device index: ",uVar5);
  }
  if (param_2 == 0xffffffff) {
    local_49 = '\a';
    if ((acStack_60 < "efault") && ("default" < (char *)((ulong)acStack_60 | 7))) {
LAB_0044ebe8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    builtin_strncpy(acStack_60 + 4,"ult",4);
    ppuVar4 = (undefined1 **)acStack_60;
    builtin_strncpy(acStack_60,"defa",4);
    FUN_0044ec18(param_1,acStack_60);
    if (-1 < local_49) goto LAB_0044eb44;
  }
  else {
    if (((int)param_2 < 0) ||
       (uVar2 = (*(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x368) >> 3) * -0x1084210842108421
       , uVar2 < uVar5 || uVar2 - uVar5 == 0)) goto LAB_0044eb44;
    lVar3 = *(long *)(param_1 + 0x368) + uVar5 * 0xf8;
    if (*(char *)(lVar3 + 0x2f) < '\0') {
      __src = *(undefined1 **)(lVar3 + 0x18);
      uVar2 = *(ulong *)(lVar3 + 0x20);
      if (uVar2 < 0x17) {
        local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = (uVar2 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar5);
        local_70 = uVar5 | 0x8000000000000000;
        local_80 = (undefined1 *)__dest;
        uStack_78 = uVar2;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1)))
      goto LAB_0044ebe8;
      memmove(__dest,__src,uVar2 + 1);
    }
    else {
      local_70 = *(ulong *)(lVar3 + 0x28);
      uStack_78 = *(ulong *)(lVar3 + 0x20);
      local_80 = *(undefined1 **)(lVar3 + 0x18);
    }
    FUN_0044ec18(param_1,&local_80);
    if (-1 < (long)local_70) goto LAB_0044eb44;
  }
  operator_delete(*ppuVar4);
LAB_0044eb44:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0044ec18  FUN_0044ec18 =====

void FUN_0044ec18(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  long lVar2;
  ulong uVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/engine.cpp",0x1741,
                 "Setting audio input device id: \'",param_2,&DAT_001c1d3e);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x360);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_50 = CONCAT17((char)uVar3,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar3;
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
    uStack_58 = param_2[1];
    local_60 = (undefined1 *)*param_2;
    local_50 = param_2[2];
  }
  FUN_0042e4b4(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044ed6c  FUN_0044ed6c =====

void FUN_0044ed6c(long param_1,uint param_2)

{
  undefined1 *__src;
  long lVar1;
  ulong uVar2;
  undefined1 **__dest;
  long lVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  char acStack_60 [23];
  char local_49;
  long local_48;
  
  ppuVar4 = &local_80;
  __dest = &local_80;
  lVar1 = tpidr_el0;
  uVar5 = (ulong)param_2;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/engine.cpp",0x1771,
                 "Setting audio output device index: ",uVar5);
  }
  if (param_2 == 0xffffffff) {
    local_49 = '\a';
    if ((acStack_60 < "efault") && ("default" < (char *)((ulong)acStack_60 | 7))) {
LAB_0044ef30:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    builtin_strncpy(acStack_60 + 4,"ult",4);
    ppuVar4 = (undefined1 **)acStack_60;
    builtin_strncpy(acStack_60,"defa",4);
    FUN_0044ef60(param_1,acStack_60);
    if (-1 < local_49) goto LAB_0044ee8c;
  }
  else {
    if (((int)param_2 < 0) ||
       (uVar2 = (*(long *)(param_1 + 0x398) - *(long *)(param_1 + 0x390) >> 3) * -0x1084210842108421
       , uVar2 < uVar5 || uVar2 - uVar5 == 0)) goto LAB_0044ee8c;
    lVar3 = *(long *)(param_1 + 0x390) + uVar5 * 0xf8;
    if (*(char *)(lVar3 + 0x2f) < '\0') {
      __src = *(undefined1 **)(lVar3 + 0x18);
      uVar2 = *(ulong *)(lVar3 + 0x20);
      if (uVar2 < 0x17) {
        local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = (uVar2 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar5);
        local_70 = uVar5 | 0x8000000000000000;
        local_80 = (undefined1 *)__dest;
        uStack_78 = uVar2;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1)))
      goto LAB_0044ef30;
      memmove(__dest,__src,uVar2 + 1);
    }
    else {
      local_70 = *(ulong *)(lVar3 + 0x28);
      uStack_78 = *(ulong *)(lVar3 + 0x20);
      local_80 = *(undefined1 **)(lVar3 + 0x18);
    }
    FUN_0044ef60(param_1,&local_80);
    if (-1 < (long)local_70) goto LAB_0044ee8c;
  }
  operator_delete(*ppuVar4);
LAB_0044ee8c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0044ef60  FUN_0044ef60 =====

void FUN_0044ef60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  undefined8 uVar4;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x360);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_50 = CONCAT17((char)uVar2,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_50 = uVar1 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_58 = param_2[1];
    local_60 = (undefined1 *)*param_2;
    local_50 = param_2[2];
  }
  FUN_0042e754(uVar4,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044f078  FUN_0044f078 =====

undefined4 FUN_0044f078(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x360) + 8);
}


// ===== 0044f084  FUN_0044f084 =====

void FUN_0044f084(void)

{
  return;
}


// ===== 0044f088  FUN_0044f088 =====

void FUN_0044f088(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 local_40;
  undefined7 uStack_3f;
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_29 = '\0';
  local_40 = 0;
  (**(code **)(param_2 + 0x10))(param_2,&local_40);
  if (local_29 < '\0') {
    operator_delete((void *)CONCAT71(uStack_3f,local_40));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044f0f0  FUN_0044f0f0 =====

void FUN_0044f0f0(void)

{
  return;
}


// ===== 0044f0f4  FUN_0044f0f4 =====

void FUN_0044f0f4(float param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar2 = NEON_fminnm(param_1,0x3f800000);
  *(undefined4 *)(param_2 + 900) = uVar2;
  FUN_005467a4(param_2 + 0x118);
  if (*(char *)(param_2 + 0x160) != '\0') {
    local_40 = param_2;
    FUN_007b6160(param_2 + 0x140,&local_40,FUN_00430140);
    FUN_005467c8(param_2 + 0x118);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0044f1b0  FUN_0044f1b0 =====

void FUN_0044f1b0(undefined4 param_1,long param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_2 + 0x3a8) = param_1;
  FUN_005467a4(param_2 + 0x168);
  if (*(char *)(param_2 + 0x1b0) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_40 = param_2;
  FUN_007b6160(param_2 + 400,&local_40,FUN_00430140);
  FUN_005467c8(param_2 + 0x168);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044f25c  FUN_0044f25c =====

undefined8 FUN_0044f25c(void)

{
  return 1;
}


// ===== 0044f264  FUN_0044f264 =====

long FUN_0044f264(long param_1)

{
  return param_1 + 0x368;
}


// ===== 0044f26c  FUN_0044f26c =====

void FUN_0044f26c(long param_1)

{
  FUN_0042e384(*(undefined8 *)(param_1 + 0x360));
  return;
}


// ===== 0044f274  FUN_0044f274 =====

long FUN_0044f274(long param_1)

{
  return param_1 + 0x390;
}


// ===== 0044f27c  FUN_0044f27c =====

void FUN_0044f27c(long param_1)

{
  FUN_0042e3cc(*(undefined8 *)(param_1 + 0x360));
  return;
}


// ===== 0044f284  FUN_0044f284 =====

void FUN_0044f284(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2[3] + 0x10) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1863) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0044f2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[2])(param_2);
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1850);
  if (*(undefined8 **)(param_1 + 0x1858) <= puVar1) {
    FUN_004313e8(param_1 + 0x1848);
    return;
  }
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar1[2] = param_2[2];
    lVar2 = *(long *)(param_2[3] + 8);
    puVar1[3] = param_2[3];
    if (lVar2 != 0) {
      param_2[2] = FUN_0040dec4;
      param_2[3] = &DAT_001f1910;
    }
    *(undefined8 **)(param_1 + 0x1850) = puVar1 + 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 0044f34c  FUN_0044f34c =====

void FUN_0044f34c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined1 local_108;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(ulong *)(param_1 + 0x370);
  if (uVar4 == *(ulong *)(param_1 + 0x368)) {
    local_108 = 0;
    local_f0 = 0;
    local_138 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    uStack_130 = 0x700000000000000;
    uStack_114 = 0x7000000;
    local_140 = 0x746c7561666564;
    local_128 = 0x746c7561666564;
    if (uVar4 < *(ulong *)(param_1 + 0x378)) {
      if (uVar4 == 0) goto LAB_0044f654;
      FUN_004243d4(uVar4,&local_140);
      lVar5 = uVar4 + 0xf8;
      *(long *)(param_1 + 0x370) = lVar5;
    }
    else {
      FUN_00454984((long *)(param_1 + 0x368),&local_140);
      lVar5 = *(long *)(param_1 + 0x370);
    }
    if (*(long *)(param_1 + 0x368) == lVar5) goto LAB_0044f604;
    FUN_00411fac(&local_140);
    uVar4 = *(ulong *)(param_1 + 0x398);
    if (uVar4 == *(ulong *)(param_1 + 0x390)) goto LAB_0044f468;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x398);
    if (uVar4 != *(ulong *)(param_1 + 0x390)) goto LAB_0044f560;
LAB_0044f468:
    local_138 = 0;
    uStack_118 = 0;
    uStack_130 = 0x700000000000000;
    uStack_114 = 0x7000000;
    local_108 = 0;
    local_f0 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    local_140 = 0x746c7561666564;
    local_128 = 0x746c7561666564;
    if (uVar4 < *(ulong *)(param_1 + 0x3a0)) {
      if (uVar4 == 0) {
LAB_0044f654:
        local_128 = 0x746c7561666564;
        uStack_114 = 0x7000000;
        uStack_130 = 0x700000000000000;
        local_140 = 0x746c7561666564;
        local_50 = 0;
        local_68 = 0;
        local_70 = 0;
        local_88 = 0;
        local_90 = 0;
        local_a8 = 0;
        local_b0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_108 = 0;
        uStack_118 = 0;
        uStack_11c = 0;
        uStack_120 = 0;
        local_138 = 0;
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      FUN_004243d4(uVar4,&local_140);
      lVar5 = uVar4 + 0xf8;
      *(long *)(param_1 + 0x398) = lVar5;
    }
    else {
      FUN_00454984((long *)(param_1 + 0x390),&local_140);
      lVar5 = *(long *)(param_1 + 0x398);
    }
    if (*(long *)(param_1 + 0x390) == lVar5) {
LAB_0044f604:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    FUN_00411fac(&local_140);
  }
  FUN_005467a4(param_1 + 0x28);
  if (*(char *)(param_1 + 0x70) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_140 = param_1;
  FUN_007b6160(param_1 + 0x50,&local_140,FUN_00430140);
  FUN_005467c8(param_1 + 0x28);
LAB_0044f560:
  if (*(char *)(param_1 + 0x1863) == '\0') {
    lVar5 = *(long *)(param_1 + 0x1848);
    lVar6 = *(long *)(param_1 + 0x1850);
    *(char *)(param_1 + 0x1863) = '\x01';
    if (lVar5 != lVar6) {
      do {
        (**(code **)(lVar5 + 0x10))(lVar5);
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar6);
      lVar5 = *(long *)(param_1 + 0x1848);
      lVar6 = *(long *)(param_1 + 0x1850);
      while (lVar2 = lVar6, lVar2 != lVar5) {
        pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 8);
        lVar6 = lVar2 + -0x20;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar2 + -0x20));
        }
      }
    }
    *(long *)(param_1 + 0x1850) = lVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044f680  FUN_0044f680 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0044f680(long param_1)

{
  ulong uVar1;
  char *******__src;
  undefined8 *******__src_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  char *******__dest;
  undefined8 *******__dest_00;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  double dVar12;
  undefined8 *******local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  char *******local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  lVar5 = FUN_005ce36c();
  puVar10 = *(undefined8 **)(param_1 + 0x1960);
  puVar8 = *(undefined8 **)(param_1 + 0x1968);
  if (puVar10 != puVar8) {
    do {
      if (puVar10[1] != 0) {
        plVar6 = (long *)FUN_005466fc();
        if ((plVar6 == (long *)0x0) || (plVar11 = (long *)*puVar10, plVar11 == (long *)0x0)) {
          if (plVar6 == (long *)0x0) goto LAB_0044f6ec;
        }
        else {
          lVar9 = puVar10[9];
          uVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
          if ((((uVar7 & 1) != 0) && (5000000000 < (ulong)(lVar5 - lVar9))) && (puVar10[10] == 0)) {
            *(undefined1 *)(puVar10 + 0xb) = 1;
            uVar7 = FUN_00417e08();
            if ((uVar7 & 1) == 0) {
              if (*(char *)((long)puVar10 + 0x27) < '\0') {
                __src = (char *******)puVar10[2];
                uVar7 = puVar10[3];
                if (uVar7 < 0x17) {
                  __dest = (char *******)&local_c0;
                  local_b0 = (undefined1 *)CONCAT17((char)uVar7,(undefined7)local_b0);
                }
                else {
                  if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar1 = (uVar7 | 0xf) + 1;
                  __dest = (char *******)operator_new(uVar1);
                  local_b0 = (undefined1 *)(uVar1 | 0x8000000000000000);
                  local_c0 = __dest;
                  uStack_b8 = uVar7;
                }
                if ((__dest <= __src) && (__src < (char *******)((long)__dest + uVar7 + 1)))
                goto LAB_0044fb24;
                memmove(__dest,__src,uVar7 + 1);
              }
              else {
                uStack_b8 = puVar10[3];
                local_c0 = (char *******)puVar10[2];
                local_b0 = (undefined1 *)puVar10[4];
              }
              FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/engine.cpp",0x5509,
                           "Video input device: ",&local_c0," timed out");
              if ((long)local_b0 < 0) {
                operator_delete(local_c0);
              }
            }
            local_7c = 0;
            local_80 = 0;
            uStack_b8 = 0;
            local_c0 = (char *******)0x0;
            local_a8 = (void *)0x0;
            local_b0 = (undefined1 *)0x0;
            lStack_98 = 0;
            local_a0 = 0;
            local_88 = 0;
            local_90 = 0;
            FUN_00411268(&local_c0,puVar10 + 2);
            FUN_00411268(&local_a8,puVar10 + 5);
            local_90 = puVar10[8];
            local_80 = 1;
            if (*(char *)(*(long *)(param_1 + 0x1990) + 0x10) == '\0') {
              (**(code **)(param_1 + 0x1988))(param_1 + 0x1978,&local_c0);
            }
            if (lStack_98 < 0) {
              operator_delete(local_a8);
            }
            if ((long)local_b0 < 0) {
              operator_delete(local_c0);
            }
          }
          if ((*(char *)(puVar10 + 0xb) == '\0') &&
             (uVar7 = FUN_004b53e4(puVar10[0xc]), (uVar7 & 0xff00000000) != 0)) {
            *(undefined1 *)(puVar10 + 0xb) = 1;
            (**(code **)(*plVar11 + 0x18))(plVar11,puVar10[0xc]);
            uVar7 = FUN_00417e08();
            if ((uVar7 & 1) == 0) {
              local_c0 = (char *******)0x1b64fb;
              uStack_b8 = 0x5599;
              local_b0 = auStack_c8;
              if (*(char *)((long)puVar10 + 0x27) < '\0') {
                __src_00 = (undefined8 *******)puVar10[2];
                uVar7 = puVar10[3];
                if (uVar7 < 0x17) {
                  __dest_00 = &local_e0;
                  local_d0 = CONCAT17((char)uVar7,(undefined7)local_d0);
                }
                else {
                  if (0x7fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar1 = (uVar7 | 0xf) + 1;
                  __dest_00 = (undefined8 *******)operator_new(uVar1);
                  local_d0 = uVar1 | 0x8000000000000000;
                  local_e0 = __dest_00;
                  uStack_d8 = uVar7;
                }
                if ((__dest_00 <= __src_00) &&
                   (__src_00 < (undefined8 *******)((long)__dest_00 + uVar7 + 1))) {
LAB_0044fb24:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s:%d: assertion %s failed: %s",
                             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                             ,0xec,"__s2 < __s1 || __s2 >= __s1+__n",
                             "char_traits::copy overlapped range");
                }
                memmove(__dest_00,__src_00,uVar7 + 1);
              }
              else {
                uStack_d8 = puVar10[3];
                local_e0 = (undefined8 *******)puVar10[2];
                local_d0 = puVar10[4];
              }
              uVar7 = FUN_004b53e4(puVar10[0xc]);
              dVar12 = -1.0;
              if ((uVar7 & 0xff00000000) != 0) {
                dVar12 = (double)(float)uVar7;
              }
              FUN_00623bb0(dVar12,&DAT_001f64af,local_c0,uStack_b8,"Video input device: ",&local_e0,
                           ", entropy: ");
              if ((long)local_d0 < 0) {
                operator_delete(local_e0);
              }
            }
            local_7c = 0;
            local_80 = 0;
            uStack_b8 = 0;
            local_c0 = (char *******)0x0;
            local_a8 = (void *)0x0;
            local_b0 = (undefined1 *)0x0;
            lStack_98 = 0;
            local_a0 = 0;
            local_88 = 0;
            local_90 = 0;
            FUN_00411268(&local_c0,puVar10 + 2);
            FUN_00411268(&local_a8,puVar10 + 5);
            local_90 = puVar10[8];
            local_88 = puVar10[10];
            uVar7 = FUN_004b53e4(puVar10[0xc]);
            local_7c = 0xbf800000;
            if ((uVar7 & 0xff00000000) != 0) {
              local_7c = (int)uVar7;
            }
            if (*(char *)(*(long *)(param_1 + 0x1990) + 0x10) == '\0') {
              (**(code **)(param_1 + 0x1988))(param_1 + 0x1978,&local_c0);
            }
            if (lStack_98 < 0) {
              operator_delete(local_a8);
            }
            if ((long)local_b0 < 0) {
              operator_delete(local_c0);
            }
          }
        }
        plVar11 = plVar6 + 1;
        do {
          lVar9 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_005466cc(plVar6);
        }
      }
LAB_0044f6ec:
      puVar10 = puVar10 + 0xd;
    } while (puVar10 != puVar8);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0044fb58  FUN_0044fb58 =====

void FUN_0044fb58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  puVar1 = (undefined8 *)(param_1 + 0x3b0);
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00489c90(puVar1);
  lVar3 = *(long *)(param_1 + 0x438);
  if (lVar3 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x3b8);
    local_a0 = *puVar1;
    local_90 = *(undefined8 *)(param_1 + 0x3c0);
    local_88 = *(undefined8 **)(param_1 + 0x3c8);
    if ((code *)*local_88 != (code *)0x0) {
      local_a0 = (*(code *)*local_88)(*puVar1);
    }
    local_80 = *(undefined1 *)(param_1 + 0x3d0);
    local_78 = *(undefined8 *)(param_1 + 0x3d8);
    local_70 = *(undefined1 *)(param_1 + 0x3e0);
    local_68 = *(undefined4 *)(param_1 + 1000);
    local_64 = *(undefined1 *)(param_1 + 0x3ec);
    local_5c = *(undefined1 *)(param_1 + 0x3f4);
    local_58 = *(undefined4 *)(param_1 + 0x3f8);
    local_54 = *(undefined1 *)(param_1 + 0x3fc);
    local_60 = *(undefined4 *)(param_1 + 0x3f0);
    local_4f = *(undefined1 *)(param_1 + 0x401);
    local_48 = *(undefined1 *)(param_1 + 0x408);
    local_50 = *(undefined1 *)(param_1 + 0x400);
    local_4c = *(undefined4 *)(param_1 + 0x404);
    local_44 = *(undefined4 *)(param_1 + 0x40c);
    local_40 = *(undefined1 *)(param_1 + 0x410);
    FUN_0046eb34(lVar3,&local_a0);
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044fc7c  FUN_0044fc7c =====

void FUN_0044fc7c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x438);
  if (*(char *)(*(long *)(param_2 + 0x18) + 0x10) == '\0') {
    if (plVar2 == (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x360);
      pvVar3 = operator_new(0xe8);
      FUN_0046de5c(pvVar3,param_1,uVar5,0,0,param_2);
      plVar2 = *(long **)(param_1 + 0x438);
      *(void **)(param_1 + 0x438) = pvVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        pvVar3 = *(void **)(param_1 + 0x438);
      }
      uStack_a8 = *(undefined8 *)(param_1 + 0x3b8);
      local_b0 = *(undefined8 *)(param_1 + 0x3b0);
      local_a0 = *(undefined8 *)(param_1 + 0x3c0);
      local_98 = *(undefined8 **)(param_1 + 0x3c8);
      if ((code *)*local_98 != (code *)0x0) {
        local_b0 = (*(code *)*local_98)(*(undefined8 *)(param_1 + 0x3b0));
      }
      local_90 = *(undefined1 *)(param_1 + 0x3d0);
      local_88 = *(undefined8 *)(param_1 + 0x3d8);
      local_80 = *(undefined1 *)(param_1 + 0x3e0);
      local_78 = *(undefined4 *)(param_1 + 1000);
      local_74 = *(undefined1 *)(param_1 + 0x3ec);
      local_6c = *(undefined1 *)(param_1 + 0x3f4);
      local_68 = *(undefined4 *)(param_1 + 0x3f8);
      local_64 = *(undefined1 *)(param_1 + 0x3fc);
      local_70 = *(undefined4 *)(param_1 + 0x3f0);
      local_5f = *(undefined1 *)(param_1 + 0x401);
      local_58 = *(undefined1 *)(param_1 + 0x408);
      local_60 = *(undefined1 *)(param_1 + 0x400);
      local_5c = *(undefined4 *)(param_1 + 0x404);
      local_54 = *(undefined4 *)(param_1 + 0x40c);
      local_50 = *(undefined1 *)(param_1 + 0x410);
      FUN_0046eb34(pvVar3,&local_b0);
      if ((code *)local_98[1] != (code *)0x0) {
        (*(code *)local_98[1])(local_b0);
      }
    }
  }
  else if ((plVar2 != (long *)0x0) && ((int)plVar2[0xb] == 0)) {
    lVar4 = *plVar2;
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0044fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))();
      return;
    }
    goto LAB_0044fe30;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0044fe30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044fe34  FUN_0044fe34 =====

void FUN_0044fe34(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x438);
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (plVar4 != (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0044ffb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
      goto LAB_0044ffe4;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x360);
    uVar2 = FUN_0051452c(*(undefined8 *)(param_1 + 0x338));
    pvVar3 = operator_new(0xe8);
    FUN_0046de5c(pvVar3,param_1,uVar5,1,uVar2,param_3);
    plVar4 = *(long **)(param_1 + 0x438);
    *(void **)(param_1 + 0x438) = pvVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      pvVar3 = *(void **)(param_1 + 0x438);
    }
    uStack_a8 = *(undefined8 *)(param_1 + 0x3b8);
    local_b0 = *(undefined8 *)(param_1 + 0x3b0);
    local_a0 = *(undefined8 *)(param_1 + 0x3c0);
    local_98 = *(undefined8 **)(param_1 + 0x3c8);
    if ((code *)*local_98 != (code *)0x0) {
      local_b0 = (*(code *)*local_98)(*(undefined8 *)(param_1 + 0x3b0));
    }
    local_90 = *(undefined1 *)(param_1 + 0x3d0);
    local_88 = *(undefined8 *)(param_1 + 0x3d8);
    local_80 = *(undefined1 *)(param_1 + 0x3e0);
    local_78 = *(undefined4 *)(param_1 + 1000);
    local_74 = *(undefined1 *)(param_1 + 0x3ec);
    local_6c = *(undefined1 *)(param_1 + 0x3f4);
    local_68 = *(undefined4 *)(param_1 + 0x3f8);
    local_64 = *(undefined1 *)(param_1 + 0x3fc);
    local_70 = *(undefined4 *)(param_1 + 0x3f0);
    local_5f = *(undefined1 *)(param_1 + 0x401);
    local_58 = *(undefined1 *)(param_1 + 0x408);
    local_60 = *(undefined1 *)(param_1 + 0x400);
    local_5c = *(undefined4 *)(param_1 + 0x404);
    local_54 = *(undefined4 *)(param_1 + 0x40c);
    local_50 = *(undefined1 *)(param_1 + 0x410);
    FUN_0046eb34(pvVar3,&local_b0);
    if ((code *)local_98[1] != (code *)0x0) {
      (*(code *)local_98[1])(local_b0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0044ffe4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0044ffe8  FUN_0044ffe8 =====

void FUN_0044ffe8(long param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_58 [2];
  code *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x440) = 0;
    if (plVar3 != (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x004500b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))();
        return;
      }
      goto LAB_004500d8;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x360);
    pvVar2 = operator_new(0xe8);
    local_48 = FUN_004547f0;
    local_40 = &DAT_001f1910;
    FUN_0046de5c(pvVar2,param_1,uVar4,0,0,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
    plVar3 = *(long **)(param_1 + 0x440);
    *(void **)(param_1 + 0x440) = pvVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004500d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004500dc  FUN_004500dc =====

void FUN_004500dc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  void *local_c8;
  ulong local_c0;
  byte local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x360);
  pvVar2 = operator_new(0xe8);
  FUN_0046de5c(pvVar2,param_1,uVar4,2,0,param_3);
  plVar3 = *(long **)(param_1 + 0x438);
  *(void **)(param_1 + 0x438) = pvVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    pvVar2 = *(void **)(param_1 + 0x438);
  }
  uStack_a8 = *(undefined8 *)(param_1 + 0x3b8);
  local_b0 = *(undefined8 *)(param_1 + 0x3b0);
  local_a0 = *(undefined8 *)(param_1 + 0x3c0);
  local_98 = *(undefined8 **)(param_1 + 0x3c8);
  if ((code *)*local_98 != (code *)0x0) {
    local_b0 = (*(code *)*local_98)(*(undefined8 *)(param_1 + 0x3b0));
  }
  local_90 = *(undefined1 *)(param_1 + 0x3d0);
  local_88 = *(undefined8 *)(param_1 + 0x3d8);
  local_80 = *(undefined1 *)(param_1 + 0x3e0);
  local_78 = *(undefined4 *)(param_1 + 1000);
  local_74 = *(undefined1 *)(param_1 + 0x3ec);
  local_6c = *(undefined1 *)(param_1 + 0x3f4);
  local_68 = *(undefined4 *)(param_1 + 0x3f8);
  local_64 = *(undefined1 *)(param_1 + 0x3fc);
  local_70 = *(undefined4 *)(param_1 + 0x3f0);
  local_5f = *(undefined1 *)(param_1 + 0x401);
  local_58 = *(undefined1 *)(param_1 + 0x408);
  local_60 = *(undefined1 *)(param_1 + 0x400);
  local_54 = *(undefined4 *)(param_1 + 0x40c);
  local_5c = *(undefined4 *)(param_1 + 0x404);
  local_50 = *(undefined1 *)(param_1 + 0x410);
  FUN_0046eb34(pvVar2,&local_b0);
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0);
  }
  if (*(char *)(*(long *)(param_2 + 0x18) + 0x10) == '\0') {
    FUN_0046f494(&local_c8,*(undefined8 *)(param_1 + 0x438));
    if (-1 < (char)local_b1) {
      local_c0 = (ulong)local_b1;
    }
    (**(code **)(param_2 + 0x10))(param_2,local_c0 != 0);
    if ((char)local_b1 < '\0') {
      operator_delete(local_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00450290  FUN_00450290 =====

void FUN_00450290(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x438) == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/engine.cpp",0x226a,
                   "Recording stream does not exist.");
    }
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x438) + 0x58) == 2) {
      FUN_0046f414();
      FUN_0046f494(&local_68,*(undefined8 *)(param_1 + 0x438));
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
      uVar2 = FUN_0046f5c8(*(undefined8 *)(param_1 + 0x438));
    }
    else {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../discord_native_lib/src/media/engine.cpp",0x2232,
                     "Loopback audio stream type mismatch, expected ",2,", received: ",
                     *(undefined4 *)(*(long *)(param_1 + 0x438) + 0x58));
      }
      uVar2 = 0;
    }
    plVar4 = *(long **)(param_1 + 0x438);
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)(*(long *)(param_2 + 0x18) + 0x10) == '\0') {
    (**(code **)(param_2 + 0x10))(param_2,&local_50,uVar2);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004503f0  FUN_004503f0 =====

bool FUN_004503f0(long param_1)

{
  if ((*(char *)(param_1 + 0x380) != '\0') && (*(long *)(param_1 + 0x360) != 0)) {
    return *(char *)(*(long *)(param_1 + 0x360) + 0x68) != '\0';
  }
  return false;
}


// ===== 00450418  FUN_00450418 =====

void FUN_00450418(long param_1,byte param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(byte *)(param_1 + 0x380) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x380) = param_2 & 1;
    FUN_005467a4(param_1 + 0x78);
    if (*(char *)(param_1 + 0xc0) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_40 = param_1;
    FUN_007b6160(param_1 + 0xa0,&local_40,FUN_00430140);
    FUN_005467c8(param_1 + 0x78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004504d4  FUN_004504d4 =====

bool FUN_004504d4(long param_1)

{
  if ((*(char *)(param_1 + 0x381) != '\0') && (*(long *)(param_1 + 0x360) != 0)) {
    return *(char *)(*(long *)(param_1 + 0x360) + 0x68) != '\0';
  }
  return false;
}


// ===== 004504fc  FUN_004504fc =====

void FUN_004504fc(long param_1)

{
  FUN_00471d40(*(undefined8 *)(*(long *)(param_1 + 0x360) + 0xb0));
  return;
}


// ===== 00450508  FUN_00450508 =====

void FUN_00450508(long param_1)

{
  *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  return;
}


// ===== 0045051c  FUN_0045051c =====

void FUN_0045051c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  uVar2 = *(undefined8 *)(param_1 + 0x360);
  if (*(long *)(local_38 + 8) != 0) {
    param_2[2] = FUN_00419a50;
    param_2[3] = &DAT_001f1910;
  }
  FUN_0042e1f4(uVar2,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004505ac  FUN_004505ac =====

void FUN_004505ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = param_2[2];
  puVar1 = (undefined8 *)param_2[3];
  uVar3 = *param_2;
  uVar2 = param_2[1];
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
  }
  lVar5 = *(long *)(param_1 + 0x1880);
  *(undefined8 *)(param_1 + 0x1878) = uVar4;
  *(undefined8 **)(param_1 + 0x1880) = puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x1868);
  *(undefined8 *)(param_1 + 0x1868) = uVar3;
  *(undefined8 *)(param_1 + 0x1870) = uVar2;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00450604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4);
    return;
  }
  return;
}


// ===== 00450618  FUN_00450618 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00450618(long param_1,byte *param_2,int param_3)

{
  bool bVar1;
  void *pvVar2;
  size_t __n;
  size_t __n_00;
  byte *pbVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******__s;
  void *__s1;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined8 *******local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 *******local_b0;
  size_t sStack_a8;
  undefined8 local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 local_80;
  long local_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001f647d,"../../discord_native_lib/src/media/engine.cpp",0x2431,
                 "Audio input device (id: ",param_2,") initialized in ",param_3 / 1000000," [ms]");
  }
  puVar13 = *(undefined8 **)(param_1 + 0x368);
  puVar11 = *(undefined8 **)(param_1 + 0x370);
  puVar14 = puVar13;
  do {
    if (puVar13 == puVar11) {
LAB_00450960:
      if (puVar14 == *(undefined8 **)(param_1 + 0x370)) {
        uVar9 = FUN_004022fc();
        if ((uVar9 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/engine.cpp",0x24ca,
                       "Audio input device not found: ",param_2);
        }
      }
      else {
        local_80 = 0;
        local_78 = (long)param_3;
        pvStack_98 = (void *)0x0;
        local_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
        sStack_a8 = 0;
        local_b0 = (undefined8 *******)0x0;
        FUN_00411268(&local_b0,puVar14);
        FUN_00411268(&pvStack_98,puVar14 + 3);
        local_80 = *(undefined4 *)(puVar14 + 6);
        if (*(char *)(*(long *)(param_1 + 0x1880) + 0x10) == '\0') {
          (**(code **)(param_1 + 0x1878))(param_1 + 0x1868,&local_b0);
        }
        if (lStack_88 < 0) {
          operator_delete(pvStack_98);
        }
        if ((long)local_a0 < 0) {
          operator_delete(local_b0);
        }
      }
      if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(char *)((long)puVar13 + 0x2f) < '\0') {
      pppppppuVar4 = (undefined8 *******)puVar13[3];
      uVar9 = puVar13[4];
      if (uVar9 < 0x17) {
        pppppppuVar10 = &local_b0;
        local_a0 = CONCAT17((char)uVar9,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar12 = (uVar9 | 0xf) + 1;
        pppppppuVar10 = (undefined8 *******)operator_new(uVar12);
        local_a0 = uVar12 | 0x8000000000000000;
        local_b0 = pppppppuVar10;
        sStack_a8 = uVar9;
      }
      if ((pppppppuVar10 <= pppppppuVar4) &&
         (pppppppuVar4 < (undefined8 *******)((long)pppppppuVar10 + uVar9 + 1))) goto LAB_00450a64;
      memmove(pppppppuVar10,pppppppuVar4,uVar9 + 1);
    }
    else {
      sStack_a8 = puVar13[4];
      local_b0 = (undefined8 *******)puVar13[3];
      local_a0 = puVar13[5];
    }
    pppppppuVar4 = local_b0;
    bVar5 = param_2[0x17];
    uVar6 = (uint)(char)local_a0._7_1_;
    __n = sStack_a8;
    if (-1 < (int)uVar6) {
      __n = (ulong)local_a0._7_1_;
    }
    __n_00 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar5) {
      __n_00 = (ulong)bVar5;
    }
    puVar14 = puVar13;
    if (__n == __n_00) {
      pppppppuVar10 = local_b0;
      if (-1 < (int)uVar6) {
        pppppppuVar10 = &local_b0;
      }
      pbVar3 = *(byte **)param_2;
      if (-1 < (char)bVar5) {
        pbVar3 = param_2;
      }
      if ((int)uVar6 < 0) {
        if ((__n == 0) || (iVar8 = memcmp(pppppppuVar10,pbVar3,__n), iVar8 == 0)) {
          operator_delete(pppppppuVar4);
          goto LAB_00450960;
        }
      }
      else {
        if (uVar6 == 0) goto LAB_00450960;
        uVar9 = 0;
        while (*(byte *)((long)&local_b0 + uVar9) == pbVar3[uVar9]) {
          uVar9 = uVar9 + 1;
          if (local_a0._7_1_ == uVar9) goto LAB_00450960;
        }
      }
    }
    if (*(char *)((long)puVar13 + 0x17) < '\0') {
      pppppppuVar4 = (undefined8 *******)*puVar13;
      uVar9 = puVar13[1];
      if (uVar9 < 0x17) {
        pppppppuVar10 = &local_d0;
        local_c0 = CONCAT17((char)uVar9,(undefined7)local_c0);
      }
      else {
        if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar12 = (uVar9 | 0xf) + 1;
        pppppppuVar10 = (undefined8 *******)operator_new(uVar12);
        local_c0 = uVar12 | 0x8000000000000000;
        local_d0 = pppppppuVar10;
        uStack_c8 = uVar9;
      }
      if ((pppppppuVar10 <= pppppppuVar4) &&
         (pppppppuVar4 < (undefined8 *******)((long)pppppppuVar10 + uVar9 + 1))) {
LAB_00450a64:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(pppppppuVar10,pppppppuVar4,uVar9 + 1);
    }
    else {
      local_c0 = puVar13[2];
      uStack_c8 = puVar13[1];
      local_d0 = (undefined8 *******)*puVar13;
    }
    uVar9 = local_c0;
    pppppppuVar10 = local_d0;
    pppppppuVar4 = local_d0;
    if (-1 < (long)local_c0) {
      pppppppuVar4 = &local_d0;
    }
    pbVar3 = *(byte **)param_2;
    if (-1 < (char)bVar5) {
      pbVar3 = param_2;
    }
    if (__n_00 == 0) {
      bVar1 = true;
    }
    else {
      uVar12 = uStack_c8;
      if (-1 < (long)local_c0) {
        uVar12 = local_c0 >> 0x38;
      }
      if ((long)uVar12 < (long)__n_00) {
        bVar1 = false;
      }
      else {
        pvVar2 = (void *)((long)pppppppuVar4 + uVar12);
        bVar5 = *pbVar3;
        __s = pppppppuVar4;
        do {
          pvVar15 = pvVar2;
          if (((0xfffffffffffffffe < uVar12 - __n_00) ||
              (__s1 = memchr(__s,(uint)bVar5,(uVar12 - __n_00) + 1), __s1 == (void *)0x0)) ||
             (iVar8 = memcmp(__s1,pbVar3,__n_00), pvVar15 = __s1, iVar8 == 0)) break;
          __s = (undefined8 *******)((long)__s1 + 1);
          uVar12 = (long)pvVar2 - (long)__s;
          pvVar15 = pvVar2;
        } while ((long)__n_00 <= (long)uVar12);
        bVar1 = pvVar15 != pvVar2 && (long)pvVar15 - (long)pppppppuVar4 != -1;
      }
    }
    if ((long)uVar9 < 0) {
      operator_delete(pppppppuVar10);
      if ((long)local_a0 < 0) goto LAB_004506cc;
    }
    else if ((uVar6 >> 7 & 1) != 0) {
LAB_004506cc:
      operator_delete(local_b0);
    }
    if (bVar1) goto LAB_00450960;
    puVar13 = puVar13 + 0x1f;
    puVar14 = puVar11;
  } while( true );
}


// ===== 00450a98  FUN_00450a98 =====

void FUN_00450a98(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = param_2[3];
  lVar4 = *(long *)(param_1 + 0x1840);
  uVar7 = param_2[2];
  uVar6 = param_2[1];
  if (*(long *)(lVar3 + 8) != 0) {
    param_2[2] = FUN_00410828;
    param_2[3] = &DAT_001f1910;
  }
  lVar2 = *(long *)(lVar4 + 0x20);
  uVar5 = *param_2;
  *(code **)(lVar4 + 0x18) = FUN_00410828;
  *(undefined8 **)(lVar4 + 0x20) = &DAT_001f1910;
  pcVar1 = *(code **)(lVar2 + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(lVar4 + 8));
  }
  *(undefined8 *)(lVar4 + 8) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(long *)(lVar4 + 0x20) = lVar3;
  return;
}


// ===== 00450b1c  FUN_00450b1c =====

undefined4 FUN_00450b1c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x360) + 0xc);
}


// ===== 00450b28  FUN_00450b28 =====

void FUN_00450b28(void)

{
  return;
}


