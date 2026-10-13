// ===== 0023078c  FUN_0023078c =====

void FUN_0023078c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00230794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x88))();
  return;
}


// ===== 00230798  sqlite3_snprintf =====

long sqlite3_snprintf(int param_1,long param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  long lStack_50;
  int local_48;
  ulong local_44;
  undefined2 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c8 = param_4;
  uStack_c0 = param_5;
  local_b8 = param_6;
  uStack_b0 = param_7;
  local_a8 = param_8;
  if (0 < param_1) {
    local_58 = 0;
    local_44 = 0;
    local_3c = 0;
    uStack_68 = 0xffffff80ffffffd8;
    local_80 = (undefined1 *)register0x00000008;
    puStack_78 = &stack0xffffffffffffff60;
    puStack_70 = auStack_d0;
    lStack_50 = param_2;
    local_48 = param_1;
    sqlite3_str_vappendf(&local_58,param_3,&local_80);
    *(undefined1 *)(param_2 + (local_44 >> 0x20)) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00230864  sqlite3_free =====

void sqlite3_free(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)(DAT_00316f08);
    }
    iVar1 = (*DAT_00313868)();
    DAT_00316e60 = DAT_00316e60 - iVar1;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(param_1);
    if (DAT_00316f08 == 0) {
      return;
    }
    puVar2 = &DAT_003138c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00230908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


// ===== 0023091c  FUN_0023091c =====

undefined8 FUN_0023091c(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(lVar8 + 0x40) == 0) {
    lVar4 = *(long *)(lVar8 + 0x20);
    if (lVar4 != 0) {
      puVar7 = &DAT_003138b0;
      goto LAB_00230a9c;
    }
  }
  else {
    if (DAT_00313834 == '\0') {
      lVar4 = 0;
LAB_00230994:
      bVar2 = true;
    }
    else {
      lVar4 = (*DAT_003138a0)(0xb);
      if (lVar4 == 0) goto LAB_00230994;
      (*DAT_003138b0)(lVar4);
      bVar2 = false;
    }
    if (0 < (int)DAT_00317288) {
      uVar10 = 0;
      do {
        if (*(long *)(DAT_00317290 + uVar10 * 8) == lVar8) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            (*DAT_003138b0)();
          }
          lVar9 = DAT_00317290;
          if (*(int *)(lVar8 + 0x38) == 1) {
            lVar6 = (long)(int)DAT_00317288;
            uVar5 = (uint)(lVar6 + -1);
            DAT_00317288 = uVar5;
            *(undefined8 *)(DAT_00317290 + uVar10 * 8) =
                 *(undefined8 *)(DAT_00317290 + (lVar6 + -1) * 8);
            if (uVar5 == 0) {
              puVar7 = &DAT_00313858;
              if (DAT_00313830 == 0) {
LAB_00230a80:
                (*(code *)*puVar7)(lVar9);
              }
              else {
                if (DAT_00316f08 != 0) {
                  (*DAT_003138b0)();
                }
                iVar3 = (*DAT_00313868)(lVar9);
                DAT_00316e60 = DAT_00316e60 - iVar3;
                DAT_00316ea8 = DAT_00316ea8 + -1;
                (*DAT_00313858)(lVar9);
                if (DAT_00316f08 != 0) {
                  puVar7 = &DAT_003138c0;
                  lVar9 = DAT_00316f08;
                  goto LAB_00230a80;
                }
              }
              DAT_00317290 = 0;
            }
          }
          break;
        }
        uVar10 = uVar10 + 1;
      } while (DAT_00317288 != uVar10);
    }
    if (!bVar2) {
      puVar7 = &DAT_003138c0;
LAB_00230a9c:
      (*(code *)*puVar7)(lVar4);
    }
  }
  iVar3 = *(int *)(lVar8 + 0x38);
  iVar1 = iVar3 + -1;
  *(int *)(lVar8 + 0x38) = iVar1;
  if (iVar1 != 0 && 0 < iVar3) {
    lVar8 = *(long *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      return 0;
    }
    puVar7 = &DAT_003138c0;
    goto LAB_00230bf8;
  }
  if (((*(byte *)(lVar8 + 0x2c) & 1) != 0) && (lVar4 = *(long *)(lVar8 + 0x18), lVar4 != 0)) {
    puVar7 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(lVar4);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar4);
      if (DAT_00316f08 == 0) goto LAB_00230b48;
      puVar7 = &DAT_003138c0;
      lVar4 = DAT_00316f08;
    }
    (*(code *)*puVar7)(lVar4);
  }
LAB_00230b48:
  if ((*(long *)(lVar8 + 0x20) != 0) && ((*DAT_003138c0)(), *(long *)(lVar8 + 0x20) != 0)) {
    (*DAT_003138a8)();
  }
  puVar7 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    iVar3 = (*DAT_00313868)(lVar8);
    DAT_00316e60 = DAT_00316e60 - iVar3;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(lVar8);
    if (DAT_00316f08 == 0) {
      return 0;
    }
    puVar7 = &DAT_003138c0;
    lVar8 = DAT_00316f08;
  }
LAB_00230bf8:
  (*(code *)*puVar7)(lVar8);
  return 0;
}


// ===== 00230c20  FUN_00230c20 =====

undefined4 FUN_00230c20(long param_1,void *param_2,int param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4[4] != 0) {
    (*DAT_003138b0)();
  }
  sVar2 = (size_t)param_3;
  if (*plVar4 < (long)(sVar2 + param_4)) {
    memset(param_2,0,sVar2);
    sVar2 = *plVar4 - param_4;
    if (sVar2 != 0 && param_4 <= *plVar4) {
      memcpy(param_2,(void *)(plVar4[3] + param_4),sVar2);
    }
    lVar1 = plVar4[4];
    uVar3 = 0x20a;
  }
  else {
    memcpy(param_2,(void *)(plVar4[3] + param_4),sVar2);
    lVar1 = plVar4[4];
    uVar3 = 0;
  }
  if (lVar1 != 0) {
    (*DAT_003138c0)();
  }
  return uVar3;
}


// ===== 00230cdc  FUN_00230cdc =====

undefined8 FUN_00230cdc(long param_1,void *param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6[4] != 0) {
    (*DAT_003138b0)();
  }
  if ((*(uint *)((long)plVar6 + 0x2c) >> 2 & 1) != 0) {
    lVar2 = plVar6[4];
    uVar5 = 0x30a;
    goto joined_r0x00230d70;
  }
  lVar4 = *plVar6;
  lVar2 = param_3 + param_4;
  if (lVar4 < lVar2) {
    if (plVar6[1] < lVar2) {
      if ((((*(uint *)((long)plVar6 + 0x2c) >> 1 & 1) == 0) || (0 < (int)plVar6[5])) ||
         (lVar4 = plVar6[2], lVar4 < lVar2)) {
        uVar5 = 0xd;
      }
      else {
        lVar1 = lVar2 * 2;
        if (lVar4 <= lVar2 * 2) {
          lVar1 = lVar4;
        }
        lVar3 = FUN_0022b604(plVar6[3],lVar1);
        if (lVar3 != 0) {
          lVar4 = *plVar6;
          plVar6[3] = lVar3;
          plVar6[1] = lVar1;
          goto LAB_00230dc8;
        }
        uVar5 = 0xc0a;
      }
      lVar2 = plVar6[4];
      goto joined_r0x00230d70;
    }
LAB_00230dc8:
    if (param_4 - lVar4 != 0 && lVar4 <= param_4) {
      memset((void *)(plVar6[3] + lVar4),0,param_4 - lVar4);
    }
    *plVar6 = lVar2;
  }
  memcpy((void *)(plVar6[3] + param_4),param_2,(long)param_3);
  lVar2 = plVar6[4];
  uVar5 = 0;
joined_r0x00230d70:
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return uVar5;
}


// ===== 00230e18  FUN_00230e18 =====

undefined4 FUN_00230e18(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3[4] != 0) {
    (*DAT_003138b0)();
  }
  if (*plVar3 < param_2) {
    uVar2 = 0xb;
    lVar1 = plVar3[4];
  }
  else {
    uVar2 = 0;
    *plVar3 = param_2;
    lVar1 = plVar3[4];
  }
  if (lVar1 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 00230e90  FUN_00230e90 =====

undefined8 FUN_00230e90(void)

{
  return 0;
}


// ===== 00230e98  FUN_00230e98 =====

undefined8 FUN_00230e98(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2[4] == 0) {
    *param_2 = *puVar2;
  }
  else {
    (*DAT_003138b0)();
    lVar1 = puVar2[4];
    *param_2 = *puVar2;
    if (lVar1 != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 00230ef8  FUN_00230ef8 =====

undefined4 FUN_00230ef8(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == param_2) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x20) != 0) {
    (*DAT_003138b0)(*(long *)(lVar3 + 0x20));
  }
  if (param_2 < 2) {
    if (param_2 == 1) {
      if (1 < *(int *)(param_1 + 0x10)) {
        *(undefined4 *)(lVar3 + 0x34) = 0;
        goto LAB_00230fbc;
      }
      if (*(int *)(lVar3 + 0x34) != 0) goto LAB_00230ff4;
      iVar1 = *(int *)(lVar3 + 0x30) + 1;
    }
    else {
      if (1 < *(int *)(param_1 + 0x10)) {
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
      iVar1 = *(int *)(lVar3 + 0x30) + -1;
    }
    *(int *)(lVar3 + 0x30) = iVar1;
  }
  else {
    if ((*(byte *)(lVar3 + 0x2c) >> 2 & 1) != 0) {
      uVar2 = 8;
      lVar3 = *(long *)(lVar3 + 0x20);
      goto joined_r0x00230ffc;
    }
    if (*(int *)(param_1 + 0x10) < 2) {
      if (*(int *)(lVar3 + 0x34) != 0) {
LAB_00230ff4:
        uVar2 = 5;
        lVar3 = *(long *)(lVar3 + 0x20);
        goto joined_r0x00230ffc;
      }
      *(undefined4 *)(lVar3 + 0x34) = 1;
    }
  }
LAB_00230fbc:
  uVar2 = 0;
  *(int *)(param_1 + 0x10) = param_2;
  lVar3 = *(long *)(lVar3 + 0x20);
joined_r0x00230ffc:
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 00231010  FUN_00231010 =====

undefined4 FUN_00231010(long param_1,int param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4[4] != 0) {
    (*DAT_003138b0)();
  }
  if (param_2 == 0x24) {
    lVar2 = *param_3;
    if ((lVar2 < *plVar4) && (bVar1 = lVar2 < 0, lVar2 = *plVar4, bVar1)) {
      lVar2 = plVar4[2];
    }
    plVar4[2] = lVar2;
    *param_3 = lVar2;
    lVar2 = plVar4[4];
  }
  else {
    if (param_2 != 0xc) {
      uVar3 = 0xc;
      lVar2 = plVar4[4];
      goto joined_r0x0023109c;
    }
    lVar2 = sqlite3_mprintf("memdb(%p,%lld)",plVar4[3],*plVar4);
    *param_3 = lVar2;
    lVar2 = plVar4[4];
  }
  uVar3 = 0;
joined_r0x0023109c:
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return uVar3;
}


// ===== 002310dc  FUN_002310dc =====

undefined8 FUN_002310dc(void)

{
  return 0x1601;
}


// ===== 002310e4  FUN_002310e4 =====

undefined8 FUN_002310e4(long param_1,long param_2,int param_3,long *param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1[4] != 0) {
    (*DAT_003138b0)();
  }
  if ((*plVar1 < param_2 + param_3) || ((*(byte *)((long)plVar1 + 0x2c) >> 1 & 1) != 0)) {
    param_2 = 0;
  }
  else {
    *(int *)(plVar1 + 5) = (int)plVar1[5] + 1;
    param_2 = plVar1[3] + param_2;
  }
  *param_4 = param_2;
  if (plVar1[4] != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 00231178  FUN_00231178 =====

undefined8 FUN_00231178(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x20) == 0) {
    *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
  }
  else {
    (*DAT_003138b0)();
    *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
    if (*(long *)(lVar1 + 0x20) != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 002311dc  sqlite3_mprintf =====

void sqlite3_mprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 **ppuStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  uint local_88;
  undefined2 local_84;
  undefined1 auStack_7e [70];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_138 = param_2;
  uStack_130 = param_3;
  local_128 = param_4;
  uStack_120 = param_5;
  local_118 = param_6;
  uStack_110 = param_7;
  local_108 = param_8;
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    ppuStack_f8 = &local_100;
    puStack_f0 = auStack_140;
    uStack_e8 = 0xffffff80ffffffc8;
    local_100 = (undefined1 *)register0x00000008;
    iVar2 = sqlite3_initialize();
    if (iVar2 == 0) {
      local_98 = auStack_7e;
      local_88 = 0;
      local_90 = DAT_00177f38;
      local_a0 = 0;
      local_84 = 0;
      ppuStack_b8 = ppuStack_f8;
      local_c0 = local_100;
      uStack_a8 = uStack_e8;
      puStack_b0 = puStack_f0;
      sqlite3_str_vappendf(&local_a0,param_1,&local_c0);
      puVar3 = local_98;
      if (local_98 != (undefined1 *)0x0) {
        local_98[local_88] = 0;
        if ((local_90._4_4_ != 0) && ((local_84._1_1_ >> 2 & 1) == 0)) {
          puVar3 = (undefined1 *)FUN_0022a544(&local_a0);
        }
      }
      goto LAB_00231260;
    }
  }
  puVar3 = (undefined1 *)0x0;
LAB_00231260:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
}


// ===== 002312f0  FUN_002312f0 =====

/* WARNING: Removing unreachable block (ram,0x002317ec) */

void FUN_002312f0(long param_1,long *param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  char cVar9;
  __pid_t _Var10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  size_t sVar15;
  undefined4 *puVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *plVar23;
  undefined *puVar24;
  ushort uVar25;
  long *plVar26;
  ulong uVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  long local_510;
  long lStack_508;
  uint local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  long local_488;
  long lStack_480;
  undefined1 uStack_281;
  long local_280;
  long lStack_278;
  uint local_270;
  undefined4 local_268;
  undefined4 local_264;
  long local_70;
  
  iVar11 = DAT_00317280;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar1 = param_4 & 0xfff00;
  if (((param_4 >> 2 & 1) == 0) ||
     (((bVar6 = true, uVar1 != 0x800 && (uVar1 != 0x4000)) && (uVar1 != 0x80000)))) {
    bVar6 = false;
  }
  _Var10 = getpid();
  if (iVar11 != _Var10) {
    DAT_00317280 = getpid();
    iVar11 = sqlite3_initialize();
    if (iVar11 == 0) {
      if ((DAT_00313834 == '\0') || (lVar13 = (*DAT_003138a0)(5), lVar13 == 0)) {
        DAT_00316f28 = 0;
      }
      else {
        (*DAT_003138b0)();
        DAT_00316f28 = 0;
        (*DAT_003138c0)(lVar13);
      }
    }
  }
  param_3[0xe] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  plVar23 = param_2;
  if (uVar1 == 0x100) {
    if (DAT_00316fb0 != 0) {
      (*DAT_003138b0)();
    }
    if (((DAT_00317278 == (long *)0x0) ||
        (iVar11 = (*(code *)PTR_stat_00313d18)(param_2,&local_488), iVar11 != 0)) ||
       (plVar26 = DAT_00317278, DAT_00317278 == (long *)0x0)) {
      piVar28 = (int *)0x0;
    }
    else {
      do {
        if ((*plVar26 == local_488) && (plVar26[1] == lStack_480)) {
          if (plVar26[2] != 0) {
            (*DAT_003138b0)();
          }
          plVar18 = plVar26 + 5;
          piVar28 = (int *)*plVar18;
          if (piVar28 == (int *)0x0) goto LAB_002314f4;
          if (piVar28[1] == (param_4 & 3)) goto LAB_002314ec;
          goto LAB_002314d0;
        }
        plVar18 = plVar26 + 8;
        plVar26 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
      piVar28 = (int *)0x0;
    }
    goto joined_r0x0023143c;
  }
  if (param_2 == (long *)0x0) {
    uVar19 = FUN_00234150(*(undefined4 *)(param_1 + 8),&local_488);
    if ((int)uVar19 != 0) goto LAB_00231c6c;
    iVar11 = -1;
    plVar23 = &local_488;
  }
  else {
    iVar11 = -1;
  }
  goto LAB_00231540;
  while (piVar28[1] != (param_4 & 3)) {
LAB_002314d0:
    piVar29 = piVar28;
    piVar28 = *(int **)(piVar29 + 2);
    if (piVar28 == (int *)0x0) goto LAB_002314f4;
  }
  plVar18 = (long *)(piVar29 + 2);
LAB_002314ec:
  *plVar18 = *(long *)(piVar28 + 2);
LAB_002314f4:
  if (plVar26[2] != 0) {
    (*DAT_003138c0)();
  }
joined_r0x0023143c:
  if (DAT_00316fb0 != 0) {
    (*DAT_003138c0)();
  }
  if (piVar28 == (int *)0x0) {
    iVar11 = sqlite3_initialize();
    if ((iVar11 != 0) || (lVar13 = FUN_0022a6ac(0x10), lVar13 == 0)) {
      uVar19 = 7;
      goto LAB_00231c6c;
    }
    iVar11 = -1;
    param_3[6] = lVar13;
  }
  else {
    iVar11 = *piVar28;
    param_3[6] = piVar28;
  }
LAB_00231540:
  uVar2 = param_4 & 8;
  uVar30 = param_4 & 1;
  if (iVar11 < 0) {
    uVar3 = param_4 & 0x80800;
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        if (((param_4 >> 6 & 1) != 0) &&
           (lVar13 = sqlite3_uri_parameter(plVar23,"modeof"), lVar13 != 0)) {
          uVar19 = (*(code *)PTR_stat_00313d18)(lVar13,&local_280);
          iVar11 = (int)uVar19;
          uVar21 = local_268;
          uVar22 = local_264;
          goto joined_r0x00231748;
        }
        uVar22 = 0;
        uVar21 = 0;
        uVar17 = 0;
      }
      else {
        uVar22 = 0;
        uVar21 = 0;
        uVar17 = 0x180;
      }
    }
    else {
      if (plVar23 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        sVar15 = strlen((char *)plVar23);
        uVar8 = sVar15 & 0x3fffffff;
      }
      do {
        uVar27 = uVar8;
        if (((long)uVar27 < 2) || (cVar9 = *(char *)((long)plVar23 + (uVar27 - 1)), cVar9 == '.')) {
          uVar17 = 0;
          uVar21 = 0;
          uVar22 = 0;
          goto LAB_002319a0;
        }
        uVar8 = uVar27 - 1;
      } while (cVar9 != '-');
      __memcpy_chk(&local_280,plVar23,uVar27 - 1,0x201);
      (&uStack_281)[uVar27] = 0;
      uVar19 = (*(code *)PTR_stat_00313d18)(&local_280,&local_510);
      iVar11 = (int)uVar19;
      local_270 = local_500;
      uVar21 = local_4f8;
      uVar22 = uStack_4f4;
joined_r0x00231748:
      if (iVar11 != 0) {
        uVar19 = 0x70a;
        goto LAB_00231c6c;
      }
      uVar17 = local_270 & 0x1ff;
      if ((int)uVar19 != 0) goto LAB_00231c6c;
    }
LAB_002319a0:
    uVar4 = (param_4 & 0x10) << 3 | (param_4 & 4) << 4 | param_4 & 2 | 0x28000;
    iVar11 = FUN_00234d54(plVar23,uVar4);
    if (-1 < iVar11) {
LAB_002319e4:
      if (((uVar17 != 0) && (uVar3 != 0)) &&
         (iVar12 = (*(code *)PTR_geteuid_00313eb0)(), iVar12 == 0)) {
        (*(code *)PTR_fchown_00313e98)(iVar11,uVar21,uVar22);
      }
      goto LAB_00231550;
    }
    piVar28 = (int *)__errno();
    iVar11 = *piVar28;
    bVar7 = false;
    if (iVar11 == 0xd) {
      bVar7 = bVar6;
    }
    if (bVar7) {
      iVar11 = (*(code *)PTR_access_00313ce8)(plVar23,0);
      if (iVar11 == 0) {
        iVar11 = *piVar28;
        goto LAB_00231a84;
      }
      uVar19 = 0x608;
    }
    else {
LAB_00231a84:
      uVar19 = 0xe;
      if (((param_4 & 2) != 0) && (iVar11 != 0x15)) {
        iVar11 = FUN_00234d54(plVar23,uVar4 & 0x28080,uVar17);
        if (-1 < iVar11) {
          uVar30 = 1;
          param_4 = param_4 & 0xfffffff8 | 1;
          goto LAB_002319e4;
        }
        uVar19 = 0xe;
      }
    }
    sqlite3_log(uVar19,0xe,"%s at line %d of [%.10s]","cannot open file",0xa78b,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    plVar26 = (long *)&DAT_0016f7d1;
    if (plVar23 != (long *)0x0) {
      plVar26 = plVar23;
    }
    sqlite3_log(0xe,"os_unix.c:%d: (%d) %s(%s) - %s",0xa78b,*piVar28,&DAT_0016eb6b,plVar26);
LAB_00231be0:
    plVar23 = (long *)param_3[6];
    if (plVar23 != (long *)0x0) {
      puVar20 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != (long *)0x0) {
          (*DAT_003138b0)();
        }
        iVar11 = (*DAT_00313868)(plVar23);
        DAT_00316e60 = DAT_00316e60 - iVar11;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(plVar23);
        if (DAT_00316f08 == (long *)0x0) goto LAB_00231c6c;
        puVar20 = &DAT_003138c0;
        plVar23 = DAT_00316f08;
      }
      (*(code *)*puVar20)(plVar23);
    }
  }
  else {
LAB_00231550:
    if (param_5 != (uint *)0x0) {
      *param_5 = param_4;
    }
    piVar28 = (int *)param_3[6];
    if (piVar28 != (int *)0x0) {
      *piVar28 = iVar11;
      piVar28[1] = param_4 & 3;
    }
    if (uVar2 != 0) {
      (*(code *)PTR_unlink_00313e38)(plVar23);
    }
    *(int *)(param_3 + 3) = iVar11;
    uVar3 = uVar2 << 2;
    if (uVar30 != 0) {
      uVar3 = uVar2 << 2 | 2;
    }
    param_3[1] = param_1;
    param_3[7] = param_2;
    if (uVar1 != 0x100) {
      uVar3 = uVar3 | 0x80;
    }
    uVar1 = uVar3 | 8;
    if (!bVar6) {
      uVar1 = uVar3;
    }
    uVar25 = (ushort)uVar1 | (ushort)(param_4 & 0x40);
    *(ushort *)((long)param_3 + 0x1e) = uVar25;
    plVar23 = (long *)0x0;
    if ((param_4 & 0x40) != 0) {
      plVar23 = param_2;
    }
    param_3[0xc] = DAT_00313958;
    lVar13 = sqlite3_uri_parameter(plVar23,&DAT_00176e77);
    if ((lVar13 == 0) || (cVar9 = FUN_00234eac(lVar13,1,1), cVar9 != '\0')) {
      uVar25 = uVar25 | 0x10;
      *(ushort *)((long)param_3 + 0x1e) = uVar25;
    }
    iVar12 = strcmp(*(char **)(param_1 + 0x18),"unix-excl");
    if (iVar12 == 0) {
      *(ushort *)((long)param_3 + 0x1e) = uVar25 | 1;
      if (uVar1 >> 7 == 0) goto LAB_00231620;
code_r0x002316ac:
      puVar14 = &DAT_0030b020;
LAB_002316b0:
      *(undefined4 *)(param_3 + 4) = 0;
    }
    else {
      if (uVar1 >> 7 != 0) goto code_r0x002316ac;
LAB_00231620:
      puVar14 = (undefined *)(*(code *)**(undefined8 **)(param_1 + 0x20))(param_2,param_3);
      if (puVar14 == &DAT_0030af88) {
        if (DAT_00316fb0 != 0) {
          (*DAT_003138b0)();
        }
        iVar12 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_3 + 3),&local_280);
        if (iVar12 == 0) {
          lStack_508 = lStack_278;
          local_510 = local_280;
          for (plVar23 = DAT_00317278; plVar23 != (long *)0x0; plVar23 = (long *)plVar23[8]) {
            if (local_280 == *plVar23 && lStack_278 == plVar23[1]) {
              *(int *)(plVar23 + 6) = (int)plVar23[6] + 1;
              plVar26 = DAT_00317278;
              goto LAB_00231ccc;
            }
          }
          iVar12 = sqlite3_initialize();
          if ((iVar12 != 0) || (plVar23 = (long *)FUN_0022a6ac(0x50), plVar23 == (long *)0x0)) {
LAB_00231850:
            uVar19 = 7;
            goto LAB_00231854;
          }
          plVar23[3] = 0;
          plVar23[2] = 0;
          plVar23[5] = 0;
          plVar23[4] = 0;
          plVar23[7] = 0;
          plVar23[6] = 0;
          plVar23[9] = 0;
          plVar23[8] = 0;
          plVar23[1] = lStack_508;
          *plVar23 = local_510;
          if (DAT_00313834 != '\0') {
            iVar12 = sqlite3_initialize();
            if (iVar12 == 0) {
              lVar13 = (*DAT_003138a0)();
              plVar23[2] = lVar13;
              if (lVar13 != 0) goto LAB_00231cb0;
            }
            else {
              plVar23[2] = 0;
            }
            puVar20 = &DAT_00313858;
            if (DAT_00313830 != 0) {
              if (DAT_00316f08 != (long *)0x0) {
                (*DAT_003138b0)();
              }
              iVar12 = (*DAT_00313868)(plVar23);
              DAT_00316e60 = DAT_00316e60 - iVar12;
              DAT_00316ea8 = DAT_00316ea8 + -1;
              (*DAT_00313858)(plVar23);
              if (DAT_00316f08 == (long *)0x0) goto LAB_00231850;
              puVar20 = &DAT_003138c0;
              plVar23 = DAT_00316f08;
            }
            (*(code *)*puVar20)(plVar23);
            goto LAB_00231850;
          }
LAB_00231cb0:
          *(undefined4 *)(plVar23 + 6) = 1;
          plVar23[8] = (long)DAT_00317278;
          plVar23[9] = 0;
          plVar26 = plVar23;
          if (DAT_00317278 != (long *)0x0) {
            DAT_00317278[9] = (long)plVar23;
          }
LAB_00231ccc:
          DAT_00317278 = plVar26;
          uVar19 = 0;
          param_3[2] = plVar23;
        }
        else {
          puVar16 = (undefined4 *)__errno();
          uVar19 = 10;
          *(undefined4 *)(param_3 + 4) = *puVar16;
LAB_00231854:
          iVar11 = (*(code *)PTR_close_00313cd0)(iVar11);
          if (iVar11 != 0) {
            if (param_3 == (undefined8 *)0x0) {
              puVar14 = (undefined *)0x0;
            }
            else {
              puVar14 = (undefined *)param_3[7];
            }
            puVar16 = (undefined4 *)__errno();
            puVar24 = &DAT_0016f7d1;
            if (puVar14 != (undefined *)0x0) {
              puVar24 = puVar14;
            }
            sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa57d,*puVar16,"close",puVar24);
          }
          iVar11 = -1;
        }
        if (DAT_00316fb0 != 0) {
          (*DAT_003138c0)();
        }
        puVar14 = &DAT_0030af88;
        *(undefined4 *)(param_3 + 4) = 0;
        iVar12 = (int)uVar19;
      }
      else {
        if (puVar14 != &DAT_0030b0b8) goto LAB_002316b0;
        sVar15 = strlen((char *)param_2);
        iVar12 = sqlite3_initialize();
        if (iVar12 == 0) {
          iVar12 = (int)sVar15 + 6;
          lVar13 = FUN_0022a6ac((long)iVar12);
          if (lVar13 == 0) goto LAB_0023166c;
          sqlite3_snprintf(iVar12,lVar13,"%s.lock",param_2);
          uVar19 = 0;
        }
        else {
          lVar13 = 0;
LAB_0023166c:
          uVar19 = 7;
        }
        puVar14 = &DAT_0030b0b8;
        param_3[5] = lVar13;
        *(undefined4 *)(param_3 + 4) = 0;
        iVar12 = (int)uVar19;
      }
      if (iVar12 != 0) {
        if ((-1 < iVar11) && (iVar11 = (*(code *)PTR_close_00313cd0)(iVar11), iVar11 != 0)) {
          puVar24 = (undefined *)param_3[7];
          puVar16 = (undefined4 *)__errno();
          puVar14 = &DAT_0016f7d1;
          if (puVar24 != (undefined *)0x0) {
            puVar14 = puVar24;
          }
          sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa5d2,*puVar16,"close",puVar14);
        }
        goto LAB_00231be0;
      }
    }
    *param_3 = puVar14;
    FUN_00234fec(param_3);
    uVar19 = 0;
  }
LAB_00231c6c:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar19);
  }
  return;
}


// ===== 00231ce4  FUN_00231ce4 =====

void FUN_00231ce4(undefined8 param_1,undefined *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = (*(code *)PTR_unlink_00313e38)(param_2);
  if (iVar3 == -1) {
    piVar4 = (int *)__errno();
    if (*piVar4 == 2) {
      uVar6 = 0x170a;
    }
    else {
      puVar1 = &DAT_0016f7d1;
      if (param_2 != (undefined *)0x0) {
        puVar1 = param_2;
      }
      sqlite3_log(0xa0a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa816,*piVar4,"unlink",puVar1);
      uVar6 = 0xa0a;
    }
  }
  else if (((param_3 & 1) == 0) ||
          (iVar3 = (*(code *)PTR_FUN_00313e50)(param_2,&local_3c), iVar3 != 0)) {
    uVar6 = 0;
  }
  else {
    iVar3 = fsync(local_3c);
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined4 *)__errno();
      puVar1 = &DAT_0016f7d1;
      if (param_2 != (undefined *)0x0) {
        puVar1 = param_2;
      }
      uVar6 = 0x50a;
      sqlite3_log(0x50a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa820,*puVar5,"fsync",puVar1);
    }
    iVar3 = (*(code *)PTR_close_00313cd0)(local_3c);
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)__errno();
      sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa822,*puVar5,"close",&DAT_0016f7d1,
                  &DAT_0016f7d1);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 00231e50  FUN_00231e50 =====

undefined8 FUN_00231e50(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_a8 [16];
  uint local_98;
  long local_78;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    iVar2 = (*(code *)PTR_stat_00313d18)(param_2,auStack_a8);
    if (iVar2 == 0) {
      uVar3 = (uint)((local_98 & 0xf000) != 0x8000 || 0 < local_78);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    iVar2 = (*(code *)PTR_access_00313ce8)(param_2,6);
    uVar3 = (uint)(iVar2 == 0);
  }
  *param_4 = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00231ef4  FUN_00231ef4 =====

int FUN_00231ef4(undefined8 param_1,char *param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 local_1058;
  long lStack_1050;
  undefined4 local_1048;
  int local_1044;
  undefined1 auStack_103a [4098];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_1058 = 0;
  local_1044 = 0;
  lStack_1050 = param_4;
  local_1048 = param_3;
  if (*param_2 != '/') {
    lVar2 = (*(code *)PTR_getcwd_00313d00)(auStack_103a,0x1000);
    if (lVar2 == 0) {
      iVar4 = 0xe;
      sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa8c7,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
      puVar3 = (undefined4 *)__errno();
      sqlite3_log(0xe,"os_unix.c:%d: (%d) %s(%s) - %s",0xa8c7,*puVar3,"getcwd",param_2,&DAT_0016f7d1
                 );
      goto LAB_00232014;
    }
    FUN_0023499c(&local_1058,auStack_103a);
  }
  FUN_0023499c(&local_1058,param_2);
  *(undefined1 *)(param_4 + local_1044) = 0;
  if ((local_1044 < 2) || ((int)local_1058 != 0)) {
    iVar4 = 0xe;
    sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa8cd,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  }
  else {
    iVar4 = (uint)(local_1058._4_4_ != 0) << 9;
  }
LAB_00232014:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00232044  FUN_00232044 =====

void FUN_00232044(undefined8 param_1,undefined8 param_2)

{
  dlopen(param_2,0x102);
  return;
}


// ===== 00232050  FUN_00232050 =====

void FUN_00232050(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (DAT_00316fb0 != 0) {
    (*DAT_003138b0)();
  }
  lVar1 = dlerror();
  if (lVar1 != 0) {
    sqlite3_snprintf(param_2,param_3,&DAT_001716ae,lVar1);
  }
  if (DAT_00316fb0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x002320bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_003138c0)();
    return;
  }
  return;
}


// ===== 002320d0  FUN_002320d0 =====

void FUN_002320d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  dlsym(param_2,param_3);
  return;
}


// ===== 002320dc  FUN_002320dc =====

void FUN_002320dc(undefined8 param_1,undefined8 param_2)

{
  dlclose(param_2);
  return;
}


// ===== 002320e4  FUN_002320e4 =====

int FUN_002320e4(undefined8 param_1,int param_2,time_t *param_3)

{
  long lVar1;
  __pid_t _Var2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  time_t local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  memset(param_3,0,(long)param_2);
  DAT_00317280 = getpid();
  do {
    while (uVar3 = (*(code *)PTR_open_00313cb8)("/dev/urandom",0x80000,0x1a4), -1 < (int)uVar3) {
      if (2 < uVar3) goto LAB_002321f4;
      (*(code *)PTR_close_00313cd0)(uVar3);
      sqlite3_log(0x1c,"attempt to open \"%s\" as file descriptor %d","/dev/urandom",uVar3);
      iVar4 = (*(code *)PTR_open_00313cb8)("/dev/null",0,0);
      if (iVar4 < 0) goto LAB_002321cc;
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
LAB_002321cc:
  time(&local_70);
  _Var2 = DAT_00317280;
  param_2 = 0xc;
  *param_3 = local_70;
  *(__pid_t *)(param_3 + 1) = _Var2;
  goto LAB_00232260;
  while (piVar5 = (int *)__errno(), *piVar5 == 4) {
LAB_002321f4:
    iVar4 = (*(code *)PTR_read_00313d78)(uVar3,param_3,(long)param_2);
    if (-1 < iVar4) break;
  }
  iVar4 = (*(code *)PTR_close_00313cd0)(uVar3);
  if (iVar4 != 0) {
    puVar6 = (undefined4 *)__errno();
    sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa932,*puVar6,"close",&DAT_0016f7d1,
                &DAT_0016f7d1);
  }
LAB_00232260:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00232298  FUN_00232298 =====

int FUN_00232298(undefined8 param_1,int param_2)

{
  uint __seconds;
  
  __seconds = (param_2 + 999999) / 1000000;
  sleep(__seconds);
  return __seconds * 1000000;
}


// ===== 002322e0  FUN_002322e0 =====

undefined8 FUN_002322e0(undefined8 param_1,double *param_2)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  *param_2 = (double)(local_38.tv_usec / 1000 + local_38.tv_sec * 1000 + 0xbfc83e532200) /
             86400000.0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00232388  FUN_00232388 =====

undefined4 FUN_00232388(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}


// ===== 002323a0  FUN_002323a0 =====

undefined8 FUN_002323a0(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  *param_2 = local_38.tv_usec / 1000 + local_38.tv_sec * 1000 + 0xbfc83e532200;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00232434  FUN_00232434 =====

undefined8 FUN_00232434(undefined8 param_1,char *param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  
  if (param_2 == (char *)0x0) {
    lVar3 = 0;
    do {
      if (*(long *)((long)&DAT_00313cc0 + lVar3) != 0) {
        *(long *)((long)&PTR_open_00313cb8 + lVar3) = *(long *)((long)&DAT_00313cc0 + lVar3);
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0x2b8);
    return 0;
  }
  lVar3 = 0;
  ppuVar4 = &PTR_DAT_00313cb0;
  do {
    iVar1 = strcmp(param_2,*ppuVar4);
    if (iVar1 == 0) {
      puVar2 = (undefined *)(&DAT_00313cc0)[lVar3 * 3];
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (&PTR_open_00313cb8)[lVar3 * 3];
        (&DAT_00313cc0)[lVar3 * 3] = puVar2;
      }
      if (param_3 != (undefined *)0x0) {
        puVar2 = param_3;
      }
      (&PTR_open_00313cb8)[lVar3 * 3] = puVar2;
      return 0;
    }
    lVar3 = lVar3 + 1;
    ppuVar4 = ppuVar4 + 3;
  } while (lVar3 != 0x1d);
  return 0xc;
}


// ===== 00232510  FUN_00232510 =====

undefined * FUN_00232510(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = 0;
  ppuVar3 = &PTR_DAT_00313cb0;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) {
      return (&PTR_open_00313cb8)[lVar2 * 3];
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar2 != 0x1d);
  return (undefined *)0x0;
}


// ===== 00232578  FUN_00232578 =====

undefined * FUN_00232578(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  
  if (param_2 == (char *)0x0) {
    lVar3 = -1;
  }
  else {
    lVar3 = 0;
    ppuVar4 = &PTR_DAT_00313cb0;
    do {
      iVar1 = strcmp(param_2,*ppuVar4);
      if (iVar1 == 0) break;
      lVar3 = lVar3 + 1;
      ppuVar4 = ppuVar4 + 3;
    } while (lVar3 != 0x1c);
    lVar3 = (long)(int)lVar3;
  }
  ppuVar4 = &PTR_close_00313cd0 + (long)(int)lVar3 * 3;
  do {
    if (lVar3 == 0x1c) {
      return (undefined *)0x0;
    }
    puVar2 = *ppuVar4;
    lVar3 = lVar3 + 1;
    ppuVar4 = ppuVar4 + 3;
  } while (puVar2 == (undefined *)0x0);
  return (&PTR_DAT_00313cb0)[lVar3 * 3];
}


// ===== 00232614  FUN_00232614 =====

undefined * FUN_00232614(void)

{
  return &DAT_0030b0b8;
}


// ===== 00232620  FUN_00232620 =====

undefined8 FUN_00232620(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = (*(code *)PTR_rmdir_00313e80)();
    if (iVar1 < 0) {
      piVar3 = (int *)__errno();
      if (*piVar3 != 2) {
        *(int *)(param_1 + 0x20) = *piVar3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (lVar2 != 0) {
    puVar4 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)(DAT_00316f08);
      }
      iVar1 = (*DAT_00313868)();
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar2);
      if (DAT_00316f08 == 0) goto LAB_002326fc;
      puVar4 = &DAT_003138c0;
    }
    (*(code *)*puVar4)();
  }
LAB_002326fc:
  FUN_00234820(param_1);
  return 0;
}


// ===== 00232718  FUN_00232718 =====

undefined8 FUN_00232718(long param_1,void *param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  __off64_t _Var3;
  int *piVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  size_t __n;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 - param_4 != 0 && param_4 <= lVar7) {
    if ((int)param_3 + param_4 <= lVar7) {
      memcpy(param_2,(void *)(*(long *)(param_1 + 0x68) + param_4),(long)(int)param_3);
      return 0;
    }
    iVar9 = (int)(lVar7 - param_4);
    __n = (size_t)iVar9;
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x68) + param_4),__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - iVar9;
    param_4 = __n + param_4;
  }
  iVar9 = 0;
  pvVar8 = param_2;
  uVar10 = param_3;
  do {
    while( true ) {
      _Var3 = lseek64(*(int *)(param_1 + 0x18),param_4,0);
      if (_Var3 < 0) {
        puVar5 = (uint *)__errno();
        uVar10 = *puVar5;
        *(uint *)(param_1 + 0x20) = uVar10;
        if (param_3 != 0xffffffff) goto joined_r0x00232818;
        goto LAB_00232854;
      }
      uVar2 = (*(code *)PTR_read_00313d78)(*(undefined4 *)(param_1 + 0x18),pvVar8,(long)(int)uVar10)
      ;
      uVar1 = uVar10 - uVar2;
      if (uVar1 == 0) goto LAB_00232848;
      if (-1 < (int)uVar2) break;
      piVar4 = (int *)__errno();
      if (*piVar4 != 4) {
        iVar9 = 0;
        *(int *)(param_1 + 0x20) = *piVar4;
        uVar10 = uVar2;
        goto LAB_00232848;
      }
    }
    uVar10 = uVar2;
    if (uVar2 == 0) {
LAB_00232848:
      uVar10 = iVar9 + uVar10;
      if (param_3 - uVar10 == 0) {
LAB_00232854:
        uVar6 = 0;
      }
      else if ((int)uVar10 < 0) {
        uVar10 = *(uint *)(param_1 + 0x20);
joined_r0x00232818:
        if ((uVar10 < 0x23) && ((1L << ((ulong)uVar10 & 0x3f) & 0x400000060U) != 0)) {
          return 0x210a;
        }
        uVar6 = 0x10a;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 0;
        memset((void *)((long)param_2 + (ulong)uVar10),0,(long)(int)(param_3 - uVar10));
        uVar6 = 0x20a;
      }
      return uVar6;
    }
    iVar9 = iVar9 + uVar2;
    param_4 = (ulong)uVar2 + param_4;
    pvVar8 = (void *)((long)pvVar8 + (ulong)uVar2);
    uVar10 = uVar1;
  } while( true );
}


// ===== 002328cc  FUN_002328cc =====

undefined8 FUN_002328cc(long param_1,long param_2,uint param_3,long param_4)

{
  int __fd;
  uint uVar1;
  __off64_t _Var2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  
  do {
    __fd = *(int *)(param_1 + 0x18);
LAB_00232900:
    _Var2 = lseek64(__fd,param_4,0);
    if (_Var2 < 0) {
      piVar3 = (int *)__errno();
      iVar5 = *piVar3;
      uVar1 = 0xffffffff;
      goto LAB_00232970;
    }
    uVar1 = (*(code *)PTR_write_00313dc0)(__fd,param_2,param_3 & 0x1ffff);
    if ((int)uVar1 < 0) break;
    if ((param_3 - uVar1 == 0 || (int)param_3 < (int)uVar1) || (uVar1 == 0)) {
      if ((int)uVar1 < (int)param_3) {
LAB_00232984:
        uVar4 = 0xd;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else {
LAB_002329a8:
        uVar4 = 0;
      }
      return uVar4;
    }
    param_4 = (ulong)uVar1 + param_4;
    param_2 = param_2 + (ulong)uVar1;
    param_3 = param_3 - uVar1;
  } while( true );
  piVar3 = (int *)__errno();
  iVar5 = *piVar3;
  if (iVar5 != 4) {
LAB_00232970:
    *(int *)(param_1 + 0x20) = iVar5;
    if ((int)param_3 <= (int)uVar1) goto LAB_002329a8;
    if (iVar5 != 0x1c) {
      return 0x30a;
    }
    goto LAB_00232984;
  }
  goto LAB_00232900;
}


// ===== 002329c4  FUN_002329c4 =====

undefined4 FUN_002329c4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    lVar2 = 0;
    if (uVar5 != 0) {
      lVar2 = (long)(param_2 + uVar5 + -1) / (long)uVar5;
    }
    param_2 = lVar2 * uVar5;
  }
  if (param_2 < 0x80000000) {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    do {
      iVar3 = (*(code *)PTR_ftruncate_00313d48)(uVar6,param_2);
      if (-1 < iVar3) {
        if (iVar3 == 0) goto LAB_00232a04;
        piVar4 = (int *)__errno();
        iVar3 = *piVar4;
        break;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
    } while (iVar3 == 4);
    puVar1 = &DAT_0016f7d1;
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x20) = iVar3;
    uVar6 = 0x60a;
    sqlite3_log(0x60a,"os_unix.c:%d: (%d) %s(%s) - %s",0x9e07,iVar3,"ftruncate",puVar1);
  }
  else {
LAB_00232a04:
    if (param_2 < *(long *)(param_1 + 0x50)) {
      uVar6 = 0;
      *(long *)(param_1 + 0x50) = param_2;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


// ===== 00232aac  FUN_00232aac =====

undefined4 FUN_00232aac(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar4 = fsync(*(int *)(param_1 + 0x18));
  if (iVar4 == 0) {
    if ((*(ushort *)(param_1 + 0x1e) >> 3 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      iVar4 = (*(code *)PTR_FUN_00313e50)(*(undefined8 *)(param_1 + 0x38),&local_3c);
      if (iVar4 == 0) {
        fsync(local_3c);
        iVar4 = (*(code *)PTR_close_00313cd0)(local_3c);
        if (iVar4 != 0) {
          puVar7 = *(undefined **)(param_1 + 0x38);
          puVar5 = (undefined4 *)__errno();
          puVar1 = &DAT_0016f7d1;
          if (puVar7 != (undefined *)0x0) {
            puVar1 = puVar7;
          }
          sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0x9de8,*puVar5,"close",puVar1);
        }
      }
      uVar6 = 0;
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfff7;
    }
  }
  else {
    puVar5 = (undefined4 *)__errno();
    uVar2 = *puVar5;
    puVar1 = &DAT_0016f7d1;
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x38);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    uVar6 = 0x40a;
    sqlite3_log(0x40a,"os_unix.c:%d: (%d) %s(%s) - %s",0x9dda,uVar2,"full_fsync",puVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00232bd8  FUN_00232bd8 =====

void FUN_00232bd8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_b8 [48];
  long local_88;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_1 + 0x18),auStack_b8);
  if ((int)uVar3 == 0) {
    lVar1 = 0;
    if (local_88 != 1) {
      lVar1 = local_88;
    }
    *param_2 = lVar1;
  }
  else {
    puVar4 = (undefined4 *)__errno();
    uVar3 = 0x70a;
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00232c68  FUN_00232c68 =====

undefined8 FUN_00232c68(long param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar2 = (*(code *)PTR_mkdir_00313e68)(*(char **)(param_1 + 0x28),0x1ff);
    if ((int)uVar2 < 0) {
      puVar3 = (uint *)__errno();
      uVar1 = *puVar3;
      uVar2 = 5;
      if (uVar1 < 0x26) {
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x2000032810U) != 0) {
          return 5;
        }
        if ((ulong)uVar1 == 1) {
          *(uint *)(param_1 + 0x20) = uVar1;
          return 3;
        }
      }
      if (uVar1 != 0x6e) {
        uVar2 = 0xf0a;
        *(uint *)(param_1 + 0x20) = uVar1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = param_2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = param_2;
    utimes(*(char **)(param_1 + 0x28),(timeval *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00232d20  FUN_00232d20 =====

undefined8 FUN_00232d20(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (*(byte *)(param_1 + 0x1c) == param_2) {
    return 0;
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    return 0;
  }
  iVar1 = (*(code *)PTR_rmdir_00313e80)(*(undefined8 *)(param_1 + 0x28));
  if (iVar1 < 0) {
    piVar3 = (int *)__errno();
    if (*piVar3 == 2) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80a;
      *(int *)(param_1 + 0x20) = *piVar3;
    }
  }
  else {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return uVar2;
}


// ===== 00232dac  FUN_00232dac =====

undefined8 FUN_00232dac(long param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00313ce8)(*(undefined8 *)(param_1 + 0x28),0);
  *param_2 = (uint)(iVar1 == 0);
  return 0;
}


// ===== 00232df0  FUN_00232df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00232df0(long param_1,int param_2,uint *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  __off64_t _Var9;
  int *piVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_c0;
  int local_b8;
  long local_68;
  
  lVar7 = DAT_00313960;
  lVar3 = tpidr_el0;
  uVar6 = 0xc;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0xc) {
    if (param_2 < 5) {
      if (param_2 == 1) {
        uVar12 = (ulong)*(byte *)(param_1 + 0x1c);
      }
      else {
        if (param_2 != 4) goto LAB_00233254;
        uVar12 = (ulong)*(uint *)(param_1 + 0x20);
      }
LAB_00233130:
      uVar6 = 0;
      *param_3 = (uint)uVar12;
    }
    else if (param_2 == 5) {
      lVar7 = *(long *)param_3;
      if (0 < *(int *)(param_1 + 0x48)) {
        iVar5 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_1 + 0x18),&local_f0);
        if (iVar5 != 0) {
          uVar6 = 0x70a;
          goto LAB_00233254;
        }
        lVar13 = (long)*(int *)(param_1 + 0x48);
        lVar14 = 0;
        if (lVar13 != 0) {
          lVar14 = (lVar7 + lVar13 + -1) / lVar13;
        }
        lVar14 = lVar14 * lVar13;
        if (lVar14 - local_c0 != 0 && local_c0 <= lVar14) {
          lVar15 = (long)local_b8;
          lVar13 = 0;
          if (lVar15 != 0) {
            lVar13 = local_c0 / lVar15;
          }
          for (lVar13 = local_c0 + lVar15 + ~(local_c0 - lVar13 * lVar15);
              lVar13 < lVar14 + -1 + lVar15; lVar13 = lVar13 + lVar15) {
            iVar5 = *(int *)(param_1 + 0x18);
            if (lVar14 <= lVar13) {
              lVar13 = lVar14 + -1;
            }
            while( true ) {
              _Var9 = lseek64(iVar5,lVar13,0);
              if (_Var9 < 0) {
                puVar11 = (undefined4 *)__errno();
                uVar6 = 0x30a;
                *(undefined4 *)(param_1 + 0x20) = *puVar11;
                goto LAB_00233254;
              }
              iVar4 = (*(code *)PTR_write_00313dc0)(iVar5,&DAT_0016f7d1,1);
              if (-1 < iVar4) break;
              piVar10 = (int *)__errno();
              if (*piVar10 != 4) {
                *(int *)(param_1 + 0x20) = *piVar10;
                uVar6 = 0x30a;
                goto LAB_00233254;
              }
            }
            if (iVar4 != 1) {
              uVar6 = 0x30a;
              goto LAB_00233254;
            }
          }
        }
      }
      if ((*(long *)(param_1 + 0x60) < 1) || (lVar7 <= *(long *)(param_1 + 0x50)))
      goto LAB_00233250;
      if ((*(int *)(param_1 + 0x48) < 1) && (lVar7 < 0x80000000)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        do {
          iVar5 = (*(code *)PTR_ftruncate_00313d48)(uVar2,lVar7);
          if (-1 < iVar5) {
            if (iVar5 == 0) goto LAB_00233240;
            piVar10 = (int *)__errno(param_1);
            iVar5 = *piVar10;
            break;
          }
          piVar10 = (int *)__errno();
          iVar5 = *piVar10;
        } while (iVar5 == 4);
        puVar1 = &DAT_0016f7d1;
        if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
          puVar1 = *(undefined **)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x20) = iVar5;
        uVar6 = 0x60a;
        sqlite3_log(0x60a,"os_unix.c:%d: (%d) %s(%s) - %s",0x9e80,iVar5,"ftruncate",puVar1);
      }
      else {
LAB_00233240:
        uVar6 = FUN_00233c4c(param_1,lVar7);
      }
    }
    else if (param_2 == 6) {
      uVar6 = 0;
      *(uint *)(param_1 + 0x48) = *param_3;
    }
    else if (param_2 == 10) {
      if ((int)*param_3 < 0) {
        uVar6 = 0;
        *param_3 = *(ushort *)(param_1 + 0x1e) >> 2 & 1;
      }
      else {
        uVar6 = 0;
        if (*param_3 == 0) {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfffb;
        }
        else {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 4;
        }
      }
    }
  }
  else if (param_2 < 0x12) {
    if (param_2 == 0xc) {
      uVar8 = sqlite3_mprintf(&DAT_001716ae,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
      uVar6 = 0;
      *(undefined8 *)param_3 = uVar8;
    }
    else if (param_2 == 0xd) {
      if ((int)*param_3 < 0) {
        uVar6 = 0;
        *param_3 = *(ushort *)(param_1 + 0x1e) >> 4 & 1;
      }
      else {
        uVar6 = 0;
        if (*param_3 == 0) {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xffef;
        }
        else {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x10;
        }
      }
    }
    else if (param_2 == 0x10) {
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 8);
      iVar4 = sqlite3_initialize();
      if ((iVar4 != 0) || (lVar7 = FUN_0022a6ac((long)iVar5), lVar7 == 0)) goto LAB_00233250;
      FUN_00234150(*(undefined4 *)(*(long *)(param_1 + 8) + 8),lVar7);
      uVar6 = 0;
      *(long *)param_3 = lVar7;
    }
  }
  else if (param_2 == 0x12) {
    lVar14 = *(long *)param_3;
    lVar13 = *(long *)(param_1 + 0x60);
    uVar6 = 0;
    *(long *)param_3 = lVar13;
    if (lVar7 <= lVar14) {
      lVar14 = lVar7;
    }
    if ((-1 < lVar14) && (lVar14 != lVar13)) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        *(long *)(param_1 + 0x60) = lVar14;
        if (0 < *(long *)(param_1 + 0x50)) {
          if (*(long *)(param_1 + 0x68) != 0) {
            (*(code *)PTR_munmap_00313ee0)
                      (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(long *)(param_1 + 0x50) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            uVar12 = FUN_00233c4c(param_1,0xffffffffffffffff);
            return uVar12;
          }
          goto LAB_00233350;
        }
      }
LAB_00233250:
      uVar6 = 0;
    }
  }
  else {
    if (param_2 == 0x14) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      if (uVar12 != 0) {
        iVar5 = (*(code *)PTR_stat_00313d18)(*(undefined8 *)(param_1 + 0x38),&local_f0);
        if (iVar5 == 0) {
          uVar12 = (ulong)(lStack_e8 != *(long *)(*(long *)(param_1 + 0x10) + 8));
        }
        else {
          uVar12 = 1;
        }
      }
      goto LAB_00233130;
    }
    if (param_2 == 0x28) {
      *param_3 = 0;
      if (*(long **)(param_1 + 0x40) == (long *)0x0) goto LAB_00233250;
      lVar7 = **(long **)(param_1 + 0x40);
      uStack_d8 = 0;
      uStack_e0 = _UNK_00177648;
      lStack_e8 = _DAT_00177640;
      local_f0 = 1;
      if (*(long *)(lVar7 + 8) != 0) {
        (*DAT_003138b0)();
      }
      iVar5 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(lVar7 + 0x18),5,&local_f0);
      if (iVar5 < 0) {
        uVar6 = 0xf0a;
        lVar7 = *(long *)(lVar7 + 8);
      }
      else {
        uVar6 = 0;
        *param_3 = (uint)((short)local_f0 != 2);
        lVar7 = *(long *)(lVar7 + 8);
      }
      if (lVar7 != 0) {
        (*DAT_003138c0)();
      }
    }
  }
LAB_00233254:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return (ulong)uVar6;
  }
LAB_00233350:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00233354  FUN_00233354 =====

int FUN_00233354(long param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    return *(int *)(param_1 + 0x70);
  }
  if ((*(ushort *)(param_1 + 0x1e) >> 4 & 1) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x1000;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x1000;
  return 0x1000;
}


// ===== 00233388  FUN_00233388 =====

undefined4 FUN_00233388(long param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    return *(undefined4 *)(param_1 + 0x74);
  }
  if ((*(ushort *)(param_1 + 0x1e) >> 4 & 1) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x1000;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x1000;
  return *(undefined4 *)(param_1 + 0x74);
}


// ===== 002333bc  FUN_002333bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002333bc(long param_1,uint param_2,int param_3,uint param_4)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ushort uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  int iVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 local_88 [2];
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar23 = *(long **)(param_1 + 0x40);
  if ((plVar23 == (long *)0x0) || (lVar22 = *plVar23, lVar22 == 0)) {
    uVar12 = 0x140a;
    goto LAB_00233738;
  }
  uVar18 = param_3 + param_2;
  uVar4 = 1 << (ulong)(param_2 & 0x1f);
  lVar3 = lVar22 + 0x40;
  if (*(long *)(lVar22 + 8) != 0) {
    (*DAT_003138b0)(*(long *)(lVar22 + 8));
  }
  uVar5 = (1 << (ulong)(uVar18 & 0x1f)) - uVar4;
  uVar9 = (ushort)uVar5;
  if ((param_4 & 1) == 0) {
    if ((param_4 >> 2 & 1) == 0) {
      if (0 < param_3) {
        lVar15 = (long)(int)param_2;
        do {
          if (((*(ushort *)((long)plVar23 + 0x14) >> (ulong)((uint)lVar15 & 0x1f) & 1) == 0) &&
             (*(int *)(lVar3 + lVar15 * 4) != 0)) goto LAB_002336e0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uVar18);
      }
      iVar11 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
      if (-1 < iVar11) {
        local_80 = (long)(int)(param_2 + 0x78);
        local_88[0] = 1;
        lStack_78 = (long)param_3;
        iVar11 = (*(code *)PTR_fcntl_00313d60)(iVar11,6,local_88);
        if (iVar11 == -1) {
LAB_002336e0:
          uVar12 = 5;
          goto LAB_00233718;
        }
      }
      *(ushort *)((long)plVar23 + 0x14) = *(ushort *)((long)plVar23 + 0x14) | uVar9;
      if (0 < param_3) {
        if ((int)uVar18 <= (int)(param_2 + 1)) {
          uVar18 = param_2 + 1;
        }
        memset((void *)(lVar22 + (long)(int)param_2 * 4 + 0x40),0xff,
               (ulong)(uVar18 + ~param_2) * 4 + 4);
      }
LAB_002335c8:
      uVar12 = 0;
    }
    else {
      uVar13 = *(ushort *)((long)plVar23 + 0x12);
      if ((uVar5 & uVar13) != 0) goto LAB_002335c8;
      iVar11 = *(int *)(lVar3 + (long)(int)param_2 * 4);
      if (iVar11 < 0) goto LAB_002336e0;
      if (iVar11 == 0) {
        uVar12 = FUN_002340d4(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18),
                              param_2 + 0x78,param_3);
        if ((int)uVar12 == 0) {
          uVar13 = *(ushort *)((long)plVar23 + 0x12);
          iVar11 = *(int *)(lVar3 + (long)(int)param_2 * 4);
          goto LAB_00233528;
        }
      }
      else {
LAB_00233528:
        uVar12 = 0;
        *(ushort *)((long)plVar23 + 0x12) = uVar13 | uVar9;
        *(int *)(lVar3 + (long)(int)param_2 * 4) = iVar11 + 1;
      }
    }
  }
  else {
    uVar13 = *(ushort *)((long)plVar23 + 0x14);
    uVar14 = *(ushort *)((long)plVar23 + 0x12);
    if ((uVar5 & (uVar14 | uVar13)) == 0) goto LAB_002335c8;
    if (param_3 < 1) {
LAB_0023369c:
      iVar11 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
      if (-1 < iVar11) {
        local_80 = (long)(int)(param_2 + 0x78);
        lStack_78 = (long)param_3;
        local_88[0] = 2;
        iVar11 = (*(code *)PTR_fcntl_00313d60)(iVar11,6,local_88);
        if (iVar11 == -1) goto LAB_002336e0;
      }
      memset((void *)(lVar3 + (long)(int)param_2 * 4),0,(long)param_3 << 2);
      uVar13 = *(ushort *)((long)plVar23 + 0x14);
      uVar14 = *(ushort *)((long)plVar23 + 0x12);
    }
    else {
      lVar17 = (long)(int)uVar18;
      lVar16 = (long)(int)param_2;
      lVar15 = lVar17;
      if (lVar17 < lVar16 + 1) {
        lVar15 = lVar16 + 1;
      }
      uVar12 = lVar15 - lVar16;
      if (uVar12 < 8) {
        uVar24 = 1;
        lVar15 = lVar16;
LAB_00233678:
        do {
          uVar18 = (uint)lVar15;
          lVar1 = lVar15 * 4;
          lVar15 = lVar15 + 1;
          uVar10 = 0;
          if (*(int *)(lVar3 + lVar1) <= (int)(uVar14 >> (ulong)(uVar18 & 0x1f) & 1)) {
            uVar10 = uVar24;
          }
          uVar24 = uVar10;
        } while (lVar15 < lVar17);
      }
      else {
        bVar33 = 1;
        bVar34 = 1;
        bVar35 = 1;
        bVar36 = 1;
        auVar26._0_4_ = param_2 + (int)_DAT_001776a0;
        auVar26._4_4_ = param_2 + (int)((ulong)_DAT_001776a0 >> 0x20);
        auVar26._8_4_ = param_2 + (int)_UNK_001776a8;
        auVar26._12_4_ = param_2 + (int)((ulong)_UNK_001776a8 >> 0x20);
        bVar29 = 1;
        bVar30 = 1;
        bVar31 = 1;
        bVar32 = 1;
        uVar19 = uVar12 & 0xfffffffffffffff8;
        pauVar20 = (undefined1 (*) [16])(lVar22 + lVar16 * 4 + 0x50);
        uVar21 = uVar19;
        do {
          auVar37 = NEON_neg(auVar26,4);
          auVar40._0_4_ = -4 - auVar26._0_4_;
          iVar11 = auVar26._4_4_;
          auVar40._4_4_ = -4 - iVar11;
          iVar27 = auVar26._8_4_;
          auVar40._8_4_ = -4 - iVar27;
          iVar28 = auVar26._12_4_;
          auVar40._12_4_ = -4 - iVar28;
          uVar21 = uVar21 - 8;
          pauVar2 = pauVar20 + -1;
          auVar7 = *pauVar20;
          auVar26._0_4_ = auVar26._0_4_ + 8;
          auVar26._4_4_ = iVar11 + 8;
          auVar26._8_4_ = iVar27 + 8;
          auVar26._12_4_ = iVar28 + 8;
          pauVar20 = pauVar20 + 2;
          auVar38._4_2_ = uVar14;
          auVar38._0_4_ = CONCAT22(0,uVar14);
          auVar38._6_2_ = 0;
          auVar38._8_2_ = uVar14;
          auVar38._10_2_ = 0;
          auVar38._12_2_ = uVar14;
          auVar38._14_2_ = 0;
          auVar38 = NEON_ushl(auVar38,auVar37,4);
          auVar37._4_2_ = uVar14;
          auVar37._0_4_ = CONCAT22(0,uVar14);
          auVar37._6_2_ = 0;
          auVar37._8_2_ = uVar14;
          auVar37._10_2_ = 0;
          auVar37._12_2_ = uVar14;
          auVar37._14_2_ = 0;
          auVar37 = NEON_ushl(auVar37,auVar40,4);
          auVar39._0_5_ = CONCAT14(auVar38[4],(uint)(auVar38[0] & 1)) & 0x100ffffff;
          auVar39._5_3_ = 0;
          auVar39[8] = auVar38[8] & 1;
          auVar39._9_3_ = 0;
          auVar39[0xc] = auVar38[0xc] & 1;
          auVar39._13_3_ = 0;
          auVar41._0_5_ = CONCAT14(auVar37[4],(uint)(auVar37[0] & 1)) & 0x100ffffff;
          auVar41._5_3_ = 0;
          auVar41[8] = auVar37[8] & 1;
          auVar41._9_3_ = 0;
          auVar41[0xc] = auVar37[0xc] & 1;
          auVar41._13_3_ = 0;
          auVar38 = NEON_cmgt(*pauVar2,auVar39,4);
          auVar37 = NEON_cmgt(auVar7,auVar41,4);
          bVar33 = bVar33 & ~auVar38[0];
          bVar34 = bVar34 & ~auVar38[4];
          bVar35 = bVar35 & ~auVar38[8];
          bVar36 = bVar36 & ~auVar38[0xc];
          bVar29 = bVar29 & ~auVar37[0];
          bVar30 = bVar30 & ~auVar37[4];
          bVar31 = bVar31 & ~auVar37[8];
          bVar32 = bVar32 & ~auVar37[0xc];
        } while (uVar21 != 0);
        auVar25._8_4_ = 1;
        auVar25._0_8_ = 0x100000001;
        auVar25._12_4_ = 1;
        auVar8._1_3_ = 0;
        auVar8[0] = bVar33;
        auVar8[4] = bVar34;
        auVar8._5_3_ = 0;
        auVar8[8] = bVar35;
        auVar8._9_3_ = 0;
        auVar8[0xc] = bVar36;
        auVar8._13_3_ = 0;
        auVar38 = NEON_cmeq(auVar8,auVar25,4);
        auVar7._1_3_ = 0;
        auVar7[0] = bVar29;
        auVar7[4] = bVar30;
        auVar7._5_3_ = 0;
        auVar7[8] = bVar31;
        auVar7._9_3_ = 0;
        auVar7[0xc] = bVar32;
        auVar7._13_3_ = 0;
        auVar26 = NEON_cmeq(auVar7,auVar25,4);
        uVar24 = NEON_umaxv(CONCAT26(CONCAT11(~auVar38[0xd] | ~auVar26[0xd],
                                              ~auVar38[0xc] | ~auVar26[0xc]),
                                     CONCAT24(CONCAT11(~auVar38[9] | ~auVar26[9],
                                                       ~auVar38[8] | ~auVar26[8]),
                                              CONCAT22(CONCAT11(~auVar38[5] | ~auVar26[5],
                                                                ~auVar38[4] | ~auVar26[4]),
                                                       CONCAT11(~auVar38[1] | ~auVar26[1],
                                                                ~auVar38[0] | ~auVar26[0])))),2);
        uVar24 = (uVar24 ^ 0xffff) & 1;
        if (uVar12 != uVar19) {
          lVar15 = uVar19 + lVar16;
          goto LAB_00233678;
        }
      }
      if (uVar24 != 0) goto LAB_0023369c;
      if ((uVar4 & uVar14) != 0) {
        *(int *)(lVar3 + lVar16 * 4) = *(int *)(lVar3 + lVar16 * 4) + -1;
      }
    }
    uVar12 = 0;
    *(ushort *)((long)plVar23 + 0x14) = uVar13 & (uVar9 ^ 0xffff);
    *(ushort *)((long)plVar23 + 0x12) = uVar14 & (uVar9 ^ 0xffff);
  }
LAB_00233718:
  if (*(long *)(lVar22 + 8) != 0) {
    uVar12 = uVar12 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(lVar22 + 8));
  }
LAB_00233738:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


// ===== 002337b0  FUN_002337b0 =====

void FUN_002337b0(void)

{
  DataMemoryBarrier(2,3);
  if (DAT_00316fb0 != 0) {
    (*DAT_003138b0)();
    if (DAT_00316fb0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x002337f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_003138c0)();
      return;
    }
  }
  return;
}


// ===== 00233800  FUN_00233800 =====

undefined8 FUN_00233800(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar8 = *plVar7;
  if (*(long *)(lVar8 + 8) != 0) {
    (*DAT_003138b0)();
  }
  iVar2 = DAT_00313830;
  plVar1 = (long *)(lVar8 + 0x38);
  do {
    plVar4 = plVar1;
    plVar5 = (long *)*plVar4;
    plVar1 = plVar5 + 1;
  } while (plVar5 != plVar7);
  puVar6 = &DAT_00313858;
  *plVar4 = plVar7[1];
  if (iVar2 != 0) {
    if (DAT_00316f08 != (long *)0x0) {
      (*DAT_003138b0)();
    }
    iVar2 = (*DAT_00313868)(plVar7);
    DAT_00316e60 = DAT_00316e60 - iVar2;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(plVar7);
    if (DAT_00316f08 == (long *)0x0) goto LAB_002338dc;
    puVar6 = &DAT_003138c0;
    plVar7 = DAT_00316f08;
  }
  (*(code *)*puVar6)(plVar7);
LAB_002338dc:
  lVar3 = *(long *)(lVar8 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  if (DAT_00316fb0 != 0) {
    (*DAT_003138b0)();
  }
  iVar2 = *(int *)(lVar8 + 0x30) + -1;
  *(int *)(lVar8 + 0x30) = iVar2;
  if (iVar2 == 0) {
    if ((param_2 != 0) && (-1 < *(int *)(lVar8 + 0x18))) {
      (*(code *)PTR_unlink_00313e38)(*(undefined8 *)(lVar8 + 0x10));
    }
    FUN_00233e20(param_1);
  }
  if (DAT_00316fb0 != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 00233968  FUN_00233968 =====

int FUN_00233968(long param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  *param_4 = 0;
  if (0 < lVar2) {
    if (*(long *)(param_1 + 0x68) == 0) {
      iVar1 = FUN_00233c4c(param_1,0xffffffffffffffff);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (param_2 + param_3 <= *(long *)(param_1 + 0x50)) {
      iVar1 = *(int *)(param_1 + 0x4c);
      *param_4 = *(long *)(param_1 + 0x68) + param_2;
      *(int *)(param_1 + 0x4c) = iVar1 + 1;
      return 0;
    }
  }
  return 0;
}


// ===== 00233a10  FUN_00233a10 =====

undefined8 FUN_00233a10(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    return 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (*(code *)PTR_munmap_00313ee0)(*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return 0;
}


// ===== 00233a6c  <EXTERNAL>::open =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0030dbc0)((int)__file,__oflag);
  return iVar1;
}


// ===== 00233a70  FUN_00233a70 =====

undefined4 FUN_00233a70(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  char local_25c [516];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sqlite3_snprintf(0x200,local_25c,&DAT_001716ae,param_1);
  uVar3 = __strlen_chk(local_25c,0x201);
  if (0 < (int)uVar3) {
    do {
      uVar7 = (ulong)uVar3;
      if (local_25c[uVar7] == '/') goto LAB_00233b00;
      bVar1 = 1 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if (local_25c[0] != '/') {
    local_25c[0] = '.';
  }
  uVar7 = 1;
LAB_00233b00:
  local_25c[uVar7] = '\0';
  do {
    while( true ) {
      uVar3 = (*(code *)PTR_open_00313cb8)(local_25c,0x80000,0x1a4);
      if (-1 < (int)uVar3) break;
      piVar5 = (int *)__errno();
      if (*piVar5 != 4) {
LAB_00233b98:
        *param_2 = uVar3;
        uVar8 = 0xe;
        sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0x9db1,
                    "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
        puVar6 = (undefined4 *)__errno();
        sqlite3_log(0xe,"os_unix.c:%d: (%d) %s(%s) - %s",0x9db1,*puVar6,"openDirectory",local_25c,
                    &DAT_0016f7d1);
LAB_00233c00:
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return uVar8;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    if (2 < uVar3) {
      uVar8 = 0;
      *param_2 = uVar3;
      goto LAB_00233c00;
    }
    (*(code *)PTR_close_00313cd0)(uVar3);
    sqlite3_log(0x1c,"attempt to open \"%s\" as file descriptor %d",local_25c,uVar3);
    iVar4 = (*(code *)PTR_open_00313cb8)("/dev/null",0,0);
  } while (-1 < iVar4);
  uVar3 = 0xffffffff;
  goto LAB_00233b98;
}


// ===== 00233c34  FUN_00233c34 =====

void FUN_00233c34(void)

{
  sysconf(0x27);
  return;
}


// ===== 00233c4c  FUN_00233c4c =====

void FUN_00233c4c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined1 auStack_d8 [48];
  long local_a8;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x4c) < 1) {
    if ((param_2 < 0) &&
       (iVar4 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_1 + 0x18),auStack_d8),
       param_2 = local_a8, iVar4 != 0)) {
      uVar5 = 0x70a;
      goto LAB_00233c84;
    }
    lVar9 = *(long *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x60) <= param_2) {
      param_2 = *(long *)(param_1 + 0x60);
    }
    if (param_2 != lVar9) {
      lVar11 = *(long *)(param_1 + 0x68);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      if (lVar11 == 0) {
        pcVar10 = "mmap";
LAB_00233d78:
        lVar6 = (*(code *)PTR_mmap_00313ec8)(0,param_2,1,1,uVar2,0);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x58) - lVar9;
        if (lVar6 != 0) {
          (*(code *)PTR_munmap_00313ee0)(lVar11 + lVar9,lVar6);
        }
        lVar6 = (*(code *)PTR_mremap_00313ef8)(lVar11,lVar9,param_2,1);
        if (lVar6 + 1U < 2) {
          (*(code *)PTR_munmap_00313ee0)(lVar11,lVar9);
          pcVar10 = "mremap";
          if (lVar6 == 0) goto LAB_00233d78;
        }
        else {
          pcVar10 = "mremap";
        }
      }
      if (lVar6 == -1) {
        puVar8 = *(undefined **)(param_1 + 0x38);
        puVar7 = (undefined4 *)__errno();
        puVar1 = &DAT_0016f7d1;
        if (puVar8 != (undefined *)0x0) {
          puVar1 = puVar8;
        }
        sqlite3_log(0,"os_unix.c:%d: (%d) %s(%s) - %s",0xa386,*puVar7,pcVar10,puVar1);
        lVar6 = 0;
        param_2 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      *(long *)(param_1 + 0x68) = lVar6;
      uVar5 = 0;
      *(long *)(param_1 + 0x50) = param_2;
      *(long *)(param_1 + 0x58) = param_2;
      goto LAB_00233c84;
    }
  }
  uVar5 = 0;
LAB_00233c84:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 00233e20  FUN_00233e20 =====

void FUN_00233e20(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x38);
  if (plVar7 == (long *)0x0) {
    return;
  }
  if ((int)plVar7[6] != 0) {
    return;
  }
  uVar3 = (*(code *)PTR_FUN_00313f10)();
  uVar2 = uVar3 >> 0xf;
  if ((int)uVar3 < 0x8000) {
    uVar2 = 1;
  }
  if (plVar7[1] != 0) {
    (*DAT_003138a8)();
  }
  if ((short)plVar7[4] != 0) {
    uVar10 = 0;
    do {
      if ((int)plVar7[3] < 0) {
        plVar8 = *(long **)(plVar7[5] + uVar10 * 8);
        if (plVar8 != (long *)0x0) {
          puVar6 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != (long *)0x0) {
              (*DAT_003138b0)();
            }
            iVar4 = (*DAT_00313868)(plVar8);
            DAT_00316e60 = DAT_00316e60 - iVar4;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(plVar8);
            if (DAT_00316f08 == (long *)0x0) goto LAB_00233ef0;
            puVar6 = &DAT_003138c0;
            plVar8 = DAT_00316f08;
          }
          (*(code *)*puVar6)(plVar8);
        }
      }
      else {
        (*(code *)PTR_munmap_00313ee0)
                  (*(undefined8 *)(plVar7[5] + uVar10 * 8),(long)*(int *)((long)plVar7 + 0x1c));
      }
LAB_00233ef0:
      uVar10 = uVar10 + uVar2;
    } while (uVar10 < *(ushort *)(plVar7 + 4));
  }
  plVar8 = (long *)plVar7[5];
  if (plVar8 != (long *)0x0) {
    puVar6 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (long *)0x0) {
        (*DAT_003138b0)();
      }
      iVar4 = (*DAT_00313868)(plVar8);
      DAT_00316e60 = DAT_00316e60 - iVar4;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(plVar8);
      if (DAT_00316f08 == (long *)0x0) goto LAB_00233fe8;
      puVar6 = &DAT_003138c0;
      plVar8 = DAT_00316f08;
    }
    (*(code *)*puVar6)(plVar8);
  }
LAB_00233fe8:
  if (-1 < (int)plVar7[3]) {
    iVar4 = (*(code *)PTR_close_00313cd0)();
    if (iVar4 != 0) {
      if (param_1 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = *(undefined **)(param_1 + 0x38);
      }
      puVar5 = (undefined4 *)__errno();
      puVar1 = &DAT_0016f7d1;
      if (puVar9 != (undefined *)0x0) {
        puVar1 = puVar9;
      }
      sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa0af,*puVar5,"close",puVar1);
    }
    *(undefined4 *)(plVar7 + 3) = 0xffffffff;
  }
  iVar4 = DAT_00313830;
  puVar6 = &DAT_00313858;
  *(undefined8 *)(*plVar7 + 0x38) = 0;
  if (iVar4 != 0) {
    if (DAT_00316f08 != (long *)0x0) {
      (*DAT_003138b0)();
    }
    iVar4 = (*DAT_00313868)(plVar7);
    DAT_00316e60 = DAT_00316e60 - iVar4;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(plVar7);
    if (DAT_00316f08 == (long *)0x0) {
      return;
    }
    puVar6 = &DAT_003138c0;
    plVar7 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x002340d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar7);
  return;
}


// ===== 002340d4  FUN_002340d4 =====

void FUN_002340d4(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48 [2];
  long local_40;
  long lStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((int)param_1 < 0) {
    uVar3 = 0;
  }
  else {
    local_40 = (long)param_2;
    lStack_38 = (long)param_3;
    local_48[0] = 0;
    iVar2 = (*(code *)PTR_fcntl_00313d60)(param_1,6,local_48);
    uVar3 = 5;
    if (iVar2 != -1) {
      uVar3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 00234150  FUN_00234150 =====

undefined8 FUN_00234150(int param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_e8 [2];
  uint local_d8;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  if ((DAT_00313834 != '\0') && (lVar3 = (*DAT_003138a0)(0xb), lVar3 != 0)) {
    (*DAT_003138b0)();
  }
  lVar4 = *(long *)PTR_sqlite3_temp_directory_0030d4a8;
  lVar3 = 0;
  while( true ) {
    if ((((lVar4 != 0) && (iVar2 = (*(code *)PTR_stat_00313d18)(lVar4,local_e8), iVar2 == 0)) &&
        ((local_d8 & 0xf000) == 0x4000)) &&
       (iVar2 = (*(code *)PTR_access_00313ce8)(lVar4,3), iVar2 == 0)) {
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_002342a4;
    }
    if (lVar3 == 0x30) break;
    lVar4 = *(long *)((long)&DAT_00313f68 + lVar3);
    lVar3 = lVar3 + 8;
  }
  uVar5 = 0x190a;
  goto LAB_00234234;
  while( true ) {
    uVar6 = uVar6 + 1;
    iVar2 = (*(code *)PTR_access_00313ce8)(param_2,0);
    if (iVar2 != 0) break;
LAB_002342a4:
    sqlite3_randomness(8,local_e8);
    param_2[(long)param_1 + -2] = 0;
    sqlite3_snprintf(param_1,param_2,"%s/etilqs_%llx%c",lVar4,local_e8[0],0);
    if ((param_2[(long)param_1 + -2] != '\0') || (10 < uVar6)) goto LAB_00234234;
  }
  uVar5 = 0;
LAB_00234234:
  if ((DAT_00313834 != '\0') && (lVar3 = (*DAT_003138a0)(0xb), lVar3 != 0)) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00234304  sqlite3_randomness =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqlite3_randomness(uint param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long local_c0;
  void *local_b0;
  
  iVar6 = sqlite3_initialize();
  if (iVar6 != 0) {
    return;
  }
  if ((DAT_00313834 == '\0') || (local_c0 = (*DAT_003138a0)(5), local_c0 == 0)) {
    if (((int)param_1 < 1) || (param_2 == (void *)0x0)) {
      _DAT_00316f28 = _DAT_00316f28 & 0xffffffff00000000;
      return;
    }
    local_c0 = 0;
    bVar5 = true;
  }
  else {
    (*DAT_003138b0)();
    if (((int)param_1 < 1) || (param_2 == (void *)0x0)) {
      _DAT_00316f28 = _DAT_00316f28 & 0xffffffff00000000;
      goto LAB_00234748;
    }
    bVar5 = false;
  }
  local_b0 = param_2;
  if (DAT_00316f28 == 0) {
    iVar6 = sqlite3_initialize();
    if (iVar6 == 0) {
      lVar19 = DAT_00316f00;
      if ((DAT_00313834 != '\0') && (lVar7 = (*DAT_003138a0)(2), lVar19 = DAT_00316f00, lVar7 != 0))
      {
        (*DAT_003138b0)();
        lVar19 = DAT_00316f00;
        (*DAT_003138c0)(lVar7);
      }
      uVar26._0_1_ = s_expand_32_byte_k_001776b0[8];
      uVar26._1_1_ = s_expand_32_byte_k_001776b0[9];
      uVar26._2_1_ = s_expand_32_byte_k_001776b0[10];
      uVar26._3_1_ = s_expand_32_byte_k_001776b0[0xb];
      uVar26._4_1_ = s_expand_32_byte_k_001776b0[0xc];
      uVar26._5_1_ = s_expand_32_byte_k_001776b0[0xd];
      uVar26._6_1_ = s_expand_32_byte_k_001776b0[0xe];
      uVar26._7_1_ = s_expand_32_byte_k_001776b0[0xf];
      uVar25._0_1_ = s_expand_32_byte_k_001776b0[0];
      uVar25._1_1_ = s_expand_32_byte_k_001776b0[1];
      uVar25._2_1_ = s_expand_32_byte_k_001776b0[2];
      uVar25._3_1_ = s_expand_32_byte_k_001776b0[3];
      uVar25._4_1_ = s_expand_32_byte_k_001776b0[4];
      uVar25._5_1_ = s_expand_32_byte_k_001776b0[5];
      uVar25._6_1_ = s_expand_32_byte_k_001776b0[6];
      uVar25._7_1_ = s_expand_32_byte_k_001776b0[7];
      DAT_00316f30._0_1_ = s_expand_32_byte_k_001776b0[8];
      DAT_00316f30._1_1_ = s_expand_32_byte_k_001776b0[9];
      DAT_00316f30._2_1_ = s_expand_32_byte_k_001776b0[10];
      DAT_00316f30._3_1_ = s_expand_32_byte_k_001776b0[0xb];
      DAT_00316f34._0_1_ = s_expand_32_byte_k_001776b0[0xc];
      DAT_00316f34._1_1_ = s_expand_32_byte_k_001776b0[0xd];
      DAT_00316f34._2_1_ = s_expand_32_byte_k_001776b0[0xe];
      DAT_00316f34._3_1_ = s_expand_32_byte_k_001776b0[0xf];
      DAT_00316f28._0_1_ = s_expand_32_byte_k_001776b0[0];
      DAT_00316f28._1_1_ = s_expand_32_byte_k_001776b0[1];
      DAT_00316f28._2_1_ = s_expand_32_byte_k_001776b0[2];
      DAT_00316f28._3_1_ = s_expand_32_byte_k_001776b0[3];
      DAT_00316f2c._0_1_ = s_expand_32_byte_k_001776b0[4];
      DAT_00316f2c._1_1_ = s_expand_32_byte_k_001776b0[5];
      DAT_00316f2c._2_1_ = s_expand_32_byte_k_001776b0[6];
      DAT_00316f2c._3_1_ = s_expand_32_byte_k_001776b0[7];
      if (lVar19 == 0) goto LAB_00234420;
      if (DAT_003139e0 == 0) {
        (**(code **)(lVar19 + 0x68))(lVar19,0x2c,&DAT_00316f38);
        DAT_00316f64 = DAT_00316f58;
      }
      else {
        DAT_00316f5c = 0;
        DAT_00316f54 = 0;
        DAT_00316f4c = 0;
        DAT_00316f50 = 0;
        DAT_00316f44 = 0;
        DAT_00316f48 = 0;
        DAT_00316f3c = 0;
        DAT_00316f40 = 0;
        DAT_00316f64 = 0;
        _DAT_00316f28 = uVar25;
        _DAT_00316f30 = uVar26;
        DAT_00316f38 = DAT_003139e0;
      }
    }
    else {
LAB_00234420:
      DAT_00316f5c = 0;
      DAT_00316f40 = 0;
      DAT_00316f44 = 0;
      DAT_00316f38 = 0;
      DAT_00316f3c = 0;
      DAT_00316f50 = 0;
      DAT_00316f54 = 0;
      DAT_00316f48 = 0;
      DAT_00316f4c = 0;
      DAT_00316f64 = 0;
      _DAT_00316f28 = s_expand_32_byte_k_001776b0._0_8_;
      _DAT_00316f30 = s_expand_32_byte_k_001776b0._8_8_;
    }
    uVar13 = 0;
    DAT_00316f58 = 0;
    DAT_00316fa8 = 0;
    if (param_1 != 0) goto LAB_00234460;
  }
  else {
    uVar13 = (uint)DAT_00316fa8;
    if (DAT_00316fa8 < param_1) {
LAB_00234460:
      do {
        if (uVar13 != 0) {
          memcpy(local_b0,&DAT_00316f68,(ulong)uVar13);
          param_1 = param_1 - DAT_00316fa8;
          local_b0 = (void *)((long)local_b0 + (ulong)DAT_00316fa8);
        }
        DAT_00316f58 = DAT_00316f58 + 1;
        iVar6 = 10;
        uVar22 = (uint)DAT_00316f5c;
        uVar17 = DAT_00316f28;
        uVar16 = DAT_00316f2c;
        uVar14 = DAT_00316f38;
        uVar15 = DAT_00316f3c;
        uVar21 = DAT_00316f48;
        uVar18 = DAT_00316f4c;
        uVar11 = DAT_00316f30;
        uVar10 = DAT_00316f34;
        uVar9 = DAT_00316f40;
        uVar8 = DAT_00316f44;
        uVar13 = DAT_00316f50;
        uVar24 = DAT_00316f54;
        uVar23 = DAT_00316f5c._4_4_;
        uVar20 = DAT_00316f64;
        uVar12 = DAT_00316f58;
        do {
          uVar12 = uVar12 ^ uVar17 + uVar14;
          uVar22 = uVar22 ^ uVar16 + uVar15;
          uVar23 = uVar23 ^ uVar11 + uVar9;
          uVar1 = uVar12 >> 0x10 | uVar12 << 0x10;
          uVar20 = uVar20 ^ uVar10 + uVar8;
          uVar2 = uVar22 >> 0x10 | uVar22 << 0x10;
          uVar3 = uVar23 >> 0x10 | uVar23 << 0x10;
          uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
          uVar21 = uVar1 + uVar21;
          iVar6 = iVar6 + -1;
          uVar18 = uVar2 + uVar18;
          uVar13 = uVar3 + uVar13;
          uVar12 = uVar21 ^ uVar14;
          uVar22 = uVar18 ^ uVar15;
          uVar24 = uVar20 + uVar24;
          uVar23 = uVar13 ^ uVar9;
          uVar4 = uVar12 >> 0x14 | uVar12 << 0xc;
          uVar22 = uVar22 >> 0x14 | uVar22 << 0xc;
          uVar12 = uVar24 ^ uVar8;
          uVar23 = uVar23 >> 0x14 | uVar23 << 0xc;
          uVar12 = uVar12 >> 0x14 | uVar12 << 0xc;
          uVar17 = uVar4 + uVar17 + uVar14;
          uVar16 = uVar22 + uVar16 + uVar15;
          uVar11 = uVar23 + uVar11 + uVar9;
          uVar10 = uVar12 + uVar10 + uVar8;
          uVar1 = uVar17 ^ uVar1;
          uVar2 = uVar16 ^ uVar2;
          uVar3 = uVar11 ^ uVar3;
          uVar15 = uVar1 >> 0x18 | uVar1 << 8;
          uVar20 = uVar10 ^ uVar20;
          uVar9 = uVar2 >> 0x18 | uVar2 << 8;
          uVar8 = uVar3 >> 0x18 | uVar3 << 8;
          uVar20 = uVar20 >> 0x18 | uVar20 << 8;
          uVar21 = uVar15 + uVar21;
          uVar18 = uVar9 + uVar18;
          uVar13 = uVar8 + uVar13;
          uVar4 = uVar21 ^ uVar4;
          uVar22 = uVar18 ^ uVar22;
          uVar24 = uVar20 + uVar24;
          uVar23 = uVar13 ^ uVar23;
          uVar22 = uVar22 >> 0x19 | uVar22 << 7;
          uVar12 = uVar24 ^ uVar12;
          uVar23 = uVar23 >> 0x19 | uVar23 << 7;
          uVar12 = uVar12 >> 0x19 | uVar12 << 7;
          uVar14 = uVar4 >> 0x19 | uVar4 << 7;
          uVar17 = uVar22 + uVar17;
          uVar16 = uVar23 + uVar16;
          uVar11 = uVar12 + uVar11;
          uVar10 = uVar10 + uVar14;
          uVar20 = uVar20 ^ uVar17;
          uVar15 = uVar16 ^ uVar15;
          uVar9 = uVar11 ^ uVar9;
          uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
          uVar8 = uVar10 ^ uVar8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
          uVar13 = uVar20 + uVar13;
          uVar21 = uVar9 + uVar21;
          uVar24 = uVar15 + uVar24;
          uVar22 = uVar13 ^ uVar22;
          uVar12 = uVar21 ^ uVar12;
          uVar18 = uVar8 + uVar18;
          uVar23 = uVar24 ^ uVar23;
          uVar1 = uVar22 >> 0x14 | uVar22 << 0xc;
          uVar14 = uVar18 ^ uVar14;
          uVar2 = uVar12 >> 0x14 | uVar12 << 0xc;
          uVar3 = uVar23 >> 0x14 | uVar23 << 0xc;
          uVar14 = uVar14 >> 0x14 | uVar14 << 0xc;
          uVar17 = uVar1 + uVar17;
          uVar11 = uVar2 + uVar11;
          uVar16 = uVar3 + uVar16;
          uVar10 = uVar14 + uVar10;
          uVar20 = uVar17 ^ uVar20;
          uVar9 = uVar11 ^ uVar9;
          uVar15 = uVar16 ^ uVar15;
          uVar20 = uVar20 >> 0x18 | uVar20 << 8;
          uVar8 = uVar10 ^ uVar8;
          uVar22 = uVar9 >> 0x18 | uVar9 << 8;
          uVar12 = uVar15 >> 0x18 | uVar15 << 8;
          uVar23 = uVar8 >> 0x18 | uVar8 << 8;
          uVar13 = uVar20 + uVar13;
          uVar21 = uVar22 + uVar21;
          uVar24 = uVar12 + uVar24;
          uVar1 = uVar13 ^ uVar1;
          uVar2 = uVar21 ^ uVar2;
          uVar18 = uVar23 + uVar18;
          uVar3 = uVar24 ^ uVar3;
          uVar15 = uVar1 >> 0x19 | uVar1 << 7;
          uVar14 = uVar18 ^ uVar14;
          uVar9 = uVar3 >> 0x19 | uVar3 << 7;
          uVar8 = uVar2 >> 0x19 | uVar2 << 7;
          uVar14 = uVar14 >> 0x19 | uVar14 << 7;
        } while (iVar6 != 0);
        DAT_00316f68 = uVar17 + DAT_00316f28;
        DAT_00316f6c = uVar16 + DAT_00316f2c;
        DAT_00316f70 = uVar11 + DAT_00316f30;
        DAT_00316f74 = uVar10 + DAT_00316f34;
        DAT_00316f78 = uVar14 + DAT_00316f38;
        DAT_00316f7c = uVar15 + DAT_00316f3c;
        DAT_00316f80 = uVar9 + DAT_00316f40;
        DAT_00316f84 = uVar8 + DAT_00316f44;
        DAT_00316f88 = uVar21 + DAT_00316f48;
        DAT_00316f8c = uVar18 + DAT_00316f4c;
        DAT_00316f90 = uVar13 + DAT_00316f50;
        DAT_00316f94 = uVar24 + DAT_00316f54;
        DAT_00316f98 = uVar12 + DAT_00316f58;
        DAT_00316f9c = uVar22 + (uint)DAT_00316f5c;
        DAT_00316fa0 = uVar23 + DAT_00316f5c._4_4_;
        DAT_00316fa4 = uVar20 + DAT_00316f64;
        uVar13 = 0x40;
        DAT_00316fa8 = 0x40;
      } while (0x40 < (int)param_1);
    }
  }
  memcpy(local_b0,(void *)((long)&DAT_00316f68 + (long)(int)(uVar13 - param_1)),(long)(int)param_1);
  DAT_00316fa8 = DAT_00316fa8 - (char)param_1;
  if (bVar5) {
    return;
  }
LAB_00234748:
                    /* WARNING: Could not recover jumptable at 0x00234764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_003138c0)(local_c0);
  return;
}


// ===== 00234820  FUN_00234820 =====

void FUN_00234820(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_1[0xd] != 0) {
    (*(code *)PTR_munmap_00313ee0)(param_1[0xd],param_1[0xb]);
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (-1 < *(int *)(param_1 + 3)) {
    iVar2 = (*(code *)PTR_close_00313cd0)();
    if (iVar2 != 0) {
      puVar5 = (undefined *)param_1[7];
      puVar3 = (undefined4 *)__errno();
      puVar1 = &DAT_0016f7d1;
      if (puVar5 != (undefined *)0x0) {
        puVar1 = puVar5;
      }
      sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0x975c,*puVar3,"close",puVar1);
    }
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
  }
  lVar6 = param_1[6];
  if (lVar6 != 0) {
    puVar4 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar2 = (*DAT_00313868)(lVar6);
      DAT_00316e60 = DAT_00316e60 - iVar2;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar6);
      if (DAT_00316f08 == 0) goto LAB_00234934;
      puVar4 = &DAT_003138c0;
      lVar6 = DAT_00316f08;
    }
    (*(code *)*puVar4)(lVar6);
  }
LAB_00234934:
  param_1[0xe] = 0;
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
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 0023495c  FUN_0023495c =====

undefined * FUN_0023495c(void)

{
  return &DAT_0030b020;
}


// ===== 00234968  FUN_00234968 =====

undefined8 FUN_00234968(void)

{
  FUN_00234820();
  return 0;
}


// ===== 00234980  FUN_00234980 =====

undefined8 FUN_00234980(void)

{
  return 0;
}


// ===== 00234988  FUN_00234988 =====

undefined8 FUN_00234988(void)

{
  return 0;
}


// ===== 00234990  FUN_00234990 =====

undefined8 FUN_00234990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}


// ===== 0023499c  FUN_0023499c =====

void FUN_0023499c(int *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  undefined *puVar13;
  undefined1 auStack_10f8 [16];
  uint local_10e8;
  char local_1074 [4100];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  iVar5 = 0;
  do {
    lVar10 = (long)iVar5;
    cVar2 = *(char *)(param_2 + lVar10);
    lVar1 = lVar10;
    while ((cVar2 != '\0' && (cVar2 != '/'))) {
      lVar1 = lVar1 + 1;
      cVar2 = *(char *)(param_2 + lVar1);
    }
    iVar12 = (int)lVar1;
    if (iVar5 < iVar12) {
      pcVar11 = (char *)(param_2 + lVar10);
      uVar3 = iVar12 - iVar5;
      if (*pcVar11 == '.') {
        if (uVar3 != 1) {
          uVar9 = param_1[5];
          if ((uVar3 != 2) || (pcVar11[1] != '.')) goto LAB_00234a8c;
          if (1 < (int)uVar9) {
            pcVar11 = (char *)(*(long *)(param_1 + 2) + (ulong)uVar9);
            do {
              uVar9 = uVar9 - 1;
              pcVar11 = pcVar11 + -1;
              param_1[5] = uVar9;
            } while (*pcVar11 != '/');
            goto LAB_002349ec;
          }
          goto LAB_002349e8;
        }
      }
      else {
        uVar9 = param_1[5];
LAB_00234a8c:
        if ((int)(uVar3 + uVar9 + 2) < param_1[4]) {
          param_1[5] = uVar9 + 1;
          *(undefined1 *)(*(long *)(param_1 + 2) + (long)(int)uVar9) = 0x2f;
          memcpy((void *)(*(long *)(param_1 + 2) + (long)param_1[5]),pcVar11,(long)(int)uVar3);
          lVar10 = (long)param_1[5] + (long)(int)uVar3;
          param_1[5] = (int)lVar10;
          if (*param_1 == 0) {
            *(undefined1 *)(*(long *)(param_1 + 2) + lVar10) = 0;
            puVar13 = *(undefined **)(param_1 + 2);
            iVar5 = (*(code *)PTR_lstat_00313f40)(puVar13,auStack_10f8);
            if (iVar5 == 0) {
              if ((local_10e8 & 0xf000) == 0xa000) {
                iVar5 = param_1[1];
                param_1[1] = iVar5 + 1;
                if (200 < iVar5) {
                  sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa888,
                              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
                  goto LAB_00234bb0;
                }
                lVar10 = (*(code *)PTR_readlink_00313f28)(puVar13,local_1074,0x1000);
                if (lVar10 - 0x1000U < 0xfffffffffffff001) {
                  sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa88d,
                              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
                  piVar6 = (int *)__errno();
                  iVar5 = *piVar6;
                  puVar8 = &DAT_0016f7d1;
                  if (puVar13 != (undefined *)0x0) {
                    puVar8 = puVar13;
                  }
                  uVar7 = 0xa88d;
                  pcVar11 = "readlink";
                  goto LAB_00234b60;
                }
                local_1074[lVar10] = '\0';
                iVar5 = 0;
                if (local_1074[0] != '/') {
                  iVar5 = param_1[5] + ~uVar3;
                }
                param_1[5] = iVar5;
                FUN_0023499c(param_1,local_1074);
              }
            }
            else {
              piVar6 = (int *)__errno();
              if (*piVar6 != 2) {
                sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa882,
                            "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
                iVar5 = *piVar6;
                puVar8 = &DAT_0016f7d1;
                if (puVar13 != (undefined *)0x0) {
                  puVar8 = puVar13;
                }
                uVar7 = 0xa882;
                pcVar11 = "lstat";
LAB_00234b60:
                sqlite3_log(0xe,"os_unix.c:%d: (%d) %s(%s) - %s",uVar7,iVar5,pcVar11,puVar8);
LAB_00234bb0:
                *param_1 = 0xe;
              }
            }
          }
        }
        else {
LAB_002349e8:
          *param_1 = 1;
        }
      }
    }
LAB_002349ec:
    iVar5 = iVar12 + 1;
    if (*(char *)(param_2 + lVar1) == '\0') {
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 00234ca8  sqlite3_uri_parameter =====

char * sqlite3_uri_parameter(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    do {
      do {
        pcVar3 = param_1;
        param_1 = pcVar3 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
    do {
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
      if (pcVar3 == (char *)0x0) {
        return (char *)0x0;
      }
      if (*pcVar3 == '\0') {
        return (char *)0x0;
      }
      iVar1 = strcmp(pcVar3,param_2);
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
    } while (iVar1 != 0);
  }
  return pcVar3;
}


// ===== 00234d54  FUN_00234d54 =====

uint FUN_00234d54(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_e8 [16];
  uint local_d8;
  long local_b8;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = 0x1a4;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  do {
    while( true ) {
      uVar3 = (*(code *)PTR_open_00313cb8)(param_1,param_2 | 0x80000,uVar1);
      if (-1 < (int)uVar3) break;
      piVar5 = (int *)__errno();
      if (*piVar5 != 4) goto LAB_00234e74;
    }
    if (2 < uVar3) {
      if ((((param_3 != 0) && (iVar4 = (*(code *)PTR_fstat_00313d30)(uVar3,auStack_e8), iVar4 == 0))
          && (local_b8 == 0)) && ((local_d8 & 0x1ff) != param_3)) {
        (*(code *)PTR_fchmod_00313e08)(uVar3,param_3);
      }
      goto LAB_00234e74;
    }
    (*(code *)PTR_close_00313cd0)(uVar3);
    sqlite3_log(0x1c,"attempt to open \"%s\" as file descriptor %d",param_1,uVar3);
    iVar4 = (*(code *)PTR_open_00313cb8)("/dev/null",0,param_3);
  } while (-1 < iVar4);
  uVar3 = 0xffffffff;
LAB_00234e74:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00234eac  FUN_00234eac =====

uint FUN_00234eac(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  char cVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((ulong)*param_1 - 0x3a < 0xfffffffffffffff6) {
    sVar4 = strlen((char *)param_1);
    uVar1 = (uint)sVar4 & 0x3fffffff;
    lVar6 = 0;
    do {
      if (uVar1 == (byte)(&DAT_00177fe8)[lVar6]) {
        if ((sVar4 & 0x3fffffff) != 0) {
          pbVar7 = (byte *)("onoffalseyestruextrafull" + (byte)(&DAT_00177fb0)[lVar6]);
          pbVar8 = param_1;
          uVar9 = uVar1 + 1;
          do {
            if ((ulong)*pbVar7 == 0) {
              cVar5 = '\0';
              cVar2 = (&DAT_0017d228)[*pbVar8];
LAB_00234f88:
              if (cVar5 != cVar2) goto LAB_00234f1c;
              break;
            }
            cVar5 = (&DAT_0017d228)[*pbVar7];
            cVar2 = (&DAT_0017d228)[*pbVar8];
            if (cVar5 != cVar2) goto LAB_00234f88;
            uVar9 = uVar9 - 1;
            pbVar7 = pbVar7 + 1;
            pbVar8 = pbVar8 + 1;
          } while (1 < uVar9);
        }
        if ((param_2 == 0) || (((uint)lVar6 | 0xfffffff8) < 0xfffffffe)) {
          param_3 = (uint)(byte)(&DAT_00177f80)[lVar6];
          break;
        }
      }
LAB_00234f1c:
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  else {
    local_3c = 0;
    FUN_002366d8(param_1,&local_3c);
    param_3 = local_3c;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 00234fec  FUN_00234fec =====

void FUN_00234fec(long param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [20];
  int local_124;
  undefined1 auStack_b8 [8];
  long local_b0;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_1 + 0x1e) >> 7 & 1) == 0) {
    iVar2 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_1 + 0x18),auStack_138);
    if (iVar2 == 0) {
      if (local_124 == 1) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           ((iVar2 = (*(code *)PTR_stat_00313d18)(*(undefined8 *)(param_1 + 0x38),auStack_b8),
            iVar2 == 0 && (local_b0 == *(long *)(*(long *)(param_1 + 0x10) + 8)))))
        goto LAB_00235044;
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        pcVar3 = "file renamed while open: %s";
      }
      else if (local_124 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        pcVar3 = "file unlinked while open: %s";
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        pcVar3 = "multiple links to file: %s";
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      pcVar3 = "cannot fstat db file %s";
    }
    sqlite3_log(0x1c,pcVar3,uVar4);
  }
LAB_00235044:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002350e0  FUN_002350e0 =====

undefined8 FUN_002350e0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  FUN_00234fec();
  FUN_00235808(param_1,0);
  if (DAT_00316fb0 != 0) {
    (*DAT_003138b0)();
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    (*DAT_003138b0)();
  }
  if (*(int *)(lVar7 + 0x1c) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    *(long *)(*(long *)(param_1 + 0x10) + 0x28) = lVar5;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(lVar5 + 8) = uVar6;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    (*DAT_003138c0)();
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x30) + -1;
    *(int *)(lVar7 + 0x30) = iVar3;
    if (iVar3 == 0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_003138b0)();
      }
      FUN_00236594(param_1);
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_003138c0)();
      }
      lVar5 = *(long *)(lVar7 + 0x40);
      lVar2 = *(long *)(lVar7 + 0x48);
      plVar1 = &DAT_00317278;
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0x40);
      }
      *plVar1 = lVar5;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x48) = lVar2;
      }
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_003138a8)();
      }
      puVar4 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar3 = (*DAT_00313868)(lVar7);
        DAT_00316e60 = DAT_00316e60 - iVar3;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar7);
        if (DAT_00316f08 == 0) goto LAB_00235264;
        puVar4 = &DAT_003138c0;
        lVar7 = DAT_00316f08;
      }
      (*(code *)*puVar4)(lVar7);
    }
  }
LAB_00235264:
  FUN_00234820(param_1);
  if (DAT_00316fb0 != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 00235294  FUN_00235294 =====

void FUN_00235294(long param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  byte bVar11;
  ushort local_a8 [4];
  long local_a0;
  undefined8 local_98;
  undefined4 local_88 [2];
  long local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar11 = *(byte *)(param_1 + 0x1c);
  if (param_2 <= (int)(uint)bVar11) {
    uVar5 = 0;
    goto LAB_002357d4;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    (*DAT_003138b0)();
    bVar11 = *(byte *)(param_1 + 0x1c);
  }
  bVar2 = *(byte *)(lVar8 + 0x20);
  if ((bVar11 != bVar2) && ((uVar5 = 5, 1 < param_2 || (2 < bVar2)))) goto LAB_002357b4;
  if (param_2 == 1) {
    if (bVar2 - 1 < 2) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(ulong *)(lVar8 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar8 + 0x18) + 1);
      goto LAB_002357b4;
    }
LAB_00235378:
    local_98 = 1;
    local_a8[1] = 0;
    local_a0 = (long)DAT_00313ca8;
    local_a8[0] = (ushort)(param_2 != 1);
    if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(char *)(lVar9 + 0x21) != '\0') goto LAB_00235450;
      local_80 = local_a0 + 2;
      uStack_78 = 0x1fe;
      local_88[0] = 1;
      iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_88);
      if (-1 < iVar4) {
        *(undefined1 *)(lVar9 + 0x21) = 1;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        goto LAB_00235408;
      }
LAB_0023540c:
      puVar6 = (uint *)__errno();
      uVar10 = *puVar6;
      uVar5 = 5;
      if (uVar10 < 0x26) {
        if ((1L << ((ulong)uVar10 & 0x3f) & 0x2000012810U) == 0) {
          if ((ulong)uVar10 != 1) goto LAB_00235618;
          uVar5 = 3;
          *(uint *)(param_1 + 0x20) = uVar10;
        }
      }
      else {
LAB_00235618:
        if (uVar10 != 0x6e) {
          uVar5 = 0xf0a;
          *(uint *)(param_1 + 0x20) = uVar10;
        }
      }
    }
    else {
      iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_a8);
LAB_00235408:
      if (iVar4 != 0) goto LAB_0023540c;
LAB_00235450:
      if (param_2 != 1) goto LAB_00235458;
      local_a0 = (long)DAT_00313ca8 + 2;
      local_98 = 0x1fe;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        lVar9 = *(long *)(param_1 + 0x10);
        bVar11 = 1;
        if (*(char *)(lVar9 + 0x21) == '\0') {
          uStack_78 = 0x1fe;
          local_88[0] = 1;
          local_80 = local_a0;
          uVar5 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_88);
          if (-1 < (int)uVar5) {
            *(undefined1 *)(lVar9 + 0x21) = 1;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if ((int)uVar5 == 0) goto LAB_00235694;
          }
LAB_002355d0:
          puVar6 = (uint *)__errno();
          uVar10 = *puVar6;
          bVar11 = 0;
          uVar5 = 5;
          if (uVar10 < 0x26) {
            if ((1L << ((ulong)uVar10 & 0x3f) & 0x2000012810U) == 0) {
              if ((ulong)uVar10 != 1) goto LAB_00235744;
              bVar11 = 0;
              uVar5 = 3;
            }
          }
          else {
LAB_00235744:
            if (uVar10 != 0x6e) {
              bVar11 = 0;
              uVar5 = 0xf0a;
            }
          }
        }
        else {
          uVar5 = 0;
          uVar10 = 0;
        }
      }
      else {
        uVar5 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_a8);
        if ((int)uVar5 != 0) goto LAB_002355d0;
LAB_00235694:
        uVar10 = 0;
        bVar11 = 1;
      }
      local_a0 = (long)DAT_00313ca8;
      local_98 = 1;
      local_a8[0] = 2;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar9 + 0x21) == '\0') {
          local_80 = local_a0 + 2;
          uStack_78 = 0x1fe;
          local_88[0] = 1;
          iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_88);
          if (iVar4 < 0) {
            iVar4 = 1;
          }
          else {
            *(undefined1 *)(lVar9 + 0x21) = 1;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
          goto LAB_00235760;
        }
      }
      else {
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_a8);
LAB_00235760:
        uVar5 = uVar5 & 0xffffffff;
        bVar1 = (bool)(bVar11 ^ 1);
        if (iVar4 == 0) {
          bVar1 = true;
        }
        if (!bVar1) {
          puVar7 = (undefined4 *)__errno();
          uVar5 = 0x80a;
          *(undefined4 *)(param_1 + 0x20) = *puVar7;
          goto LAB_002357b4;
        }
      }
      if ((int)uVar5 != 0) {
        if ((int)uVar5 != 5) {
          *(uint *)(param_1 + 0x20) = uVar10;
        }
        goto LAB_002357b4;
      }
      *(undefined4 *)(lVar8 + 0x18) = 1;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
LAB_002357a8:
      uVar5 = 0;
      *(char *)(param_1 + 0x1c) = (char)param_2;
      *(char *)(lVar8 + 0x20) = (char)param_2;
    }
  }
  else {
    local_a8[1] = 0;
    local_98 = 1;
    if (param_2 == 4) {
      if (bVar11 < 3) goto LAB_00235378;
LAB_00235460:
      if (*(int *)(lVar8 + 0x18) < 2) {
LAB_002354a8:
        iVar4 = DAT_00313ca8 + 2;
        local_98 = 0x1fe;
        goto LAB_002354b0;
      }
      uVar5 = 5;
    }
    else {
LAB_00235458:
      if (param_2 == 4) goto LAB_00235460;
      if (param_2 != 2) goto LAB_002354a8;
      iVar4 = DAT_00313ca8 + 1;
      local_98 = 1;
LAB_002354b0:
      local_a8[0] = 1;
      local_a0 = (long)iVar4;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar9 + 0x21) != '\0') goto LAB_002357a8;
        local_80 = (long)(DAT_00313ca8 + 2);
        local_88[0] = 1;
        uStack_78 = 0x1fe;
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_88);
        if (-1 < iVar4) {
          *(undefined1 *)(lVar9 + 0x21) = 1;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          goto LAB_00235534;
        }
      }
      else {
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_a8);
LAB_00235534:
        if (iVar4 == 0) goto LAB_002357a8;
      }
      puVar6 = (uint *)__errno();
      uVar10 = *puVar6;
      uVar5 = 5;
      if (uVar10 < 0x26) {
        if ((1L << ((ulong)uVar10 & 0x3f) & 0x2000012810U) == 0) {
          if ((ulong)uVar10 != 1) goto LAB_0023562c;
          uVar5 = 3;
          goto LAB_00235638;
        }
      }
      else {
LAB_0023562c:
        if (uVar10 != 0x6e) {
          uVar5 = 0xf0a;
LAB_00235638:
          *(uint *)(param_1 + 0x20) = uVar10;
        }
      }
      if (param_2 != 4) goto LAB_002357b4;
    }
    *(undefined1 *)(param_1 + 0x1c) = 3;
    *(undefined1 *)(lVar8 + 0x20) = 3;
  }
LAB_002357b4:
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar5 = uVar5 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(lVar8 + 0x10));
  }
LAB_002357d4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 00235808  FUN_00235808 =====

void FUN_00235808(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_98 [2];
  long local_90;
  undefined8 uStack_88;
  undefined4 local_78 [2];
  long local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((int)(uint)bVar1 <= param_2) {
    iVar4 = 0;
    goto LAB_00235af8;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    (*DAT_003138b0)();
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if (bVar1 < 2) {
LAB_002359d4:
    if (param_2 == 0) {
      iVar4 = *(int *)(lVar6 + 0x18) + -1;
      *(int *)(lVar6 + 0x18) = iVar4;
      if (iVar4 == 0) {
        local_90 = 0;
        uStack_88 = 0;
        local_98[0] = 2;
        if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
          lVar7 = *(long *)(param_1 + 0x10);
          if (*(char *)(lVar7 + 0x21) != '\0') goto LAB_00235aa8;
          local_78[0] = 1;
          local_70 = (long)DAT_00313ca8 + 2;
          uStack_68 = 0x1fe;
          iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_78);
          if (-1 < iVar4) {
            *(undefined1 *)(lVar7 + 0x21) = 1;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            goto LAB_00235a84;
          }
        }
        else {
          iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_98);
LAB_00235a84:
          if (iVar4 == 0) {
LAB_00235aa8:
            iVar4 = 0;
            *(undefined1 *)(lVar6 + 0x20) = 0;
            goto LAB_00235ab0;
          }
        }
        puVar5 = (undefined4 *)__errno();
        iVar4 = 0x80a;
        *(undefined4 *)(param_1 + 0x20) = *puVar5;
        *(undefined1 *)(lVar6 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x1c) = 0;
      }
      else {
        iVar4 = 0;
      }
LAB_00235ab0:
      iVar2 = *(int *)(lVar6 + 0x1c) + -1;
      *(int *)(lVar6 + 0x1c) = iVar2;
      if (iVar2 == 0) {
        FUN_00236594(param_1);
      }
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    if (param_2 == 1) {
      local_98[0] = 0;
      local_90 = (long)DAT_00313ca8 + 2;
      uStack_88 = 0x1fe;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        if (*(char *)(lVar7 + 0x21) != '\0') goto LAB_00235924;
        uStack_68 = 0x1fe;
        local_78[0] = 1;
        local_70 = local_90;
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_78);
        if (-1 < iVar4) {
          *(undefined1 *)(lVar7 + 0x21) = 1;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          goto LAB_00235908;
        }
      }
      else {
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_98);
LAB_00235908:
        if (iVar4 == 0) {
          lVar7 = *(long *)(param_1 + 0x10);
          goto LAB_00235924;
        }
      }
      puVar5 = (undefined4 *)__errno();
      iVar4 = 0x90a;
    }
    else {
LAB_00235924:
      local_90 = (long)DAT_00313ca8;
      local_98[0] = 2;
      uStack_88 = 2;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        if (*(char *)(lVar7 + 0x21) != '\0') goto LAB_002359cc;
        local_70 = (long)(DAT_00313ca8 + 2);
        local_78[0] = 1;
        uStack_68 = 0x1fe;
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_78);
        if (-1 < iVar4) {
          *(undefined1 *)(lVar7 + 0x21) = 1;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          goto LAB_002359b0;
        }
      }
      else {
        iVar4 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),6,local_98);
LAB_002359b0:
        if (iVar4 == 0) {
LAB_002359cc:
          *(undefined1 *)(lVar6 + 0x20) = 1;
          goto LAB_002359d4;
        }
      }
      puVar5 = (undefined4 *)__errno();
      iVar4 = 0x80a;
    }
    *(undefined4 *)(param_1 + 0x20) = *puVar5;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    (*DAT_003138c0)(*(long *)(lVar6 + 0x10));
  }
  if (iVar4 == 0) {
    *(char *)(param_1 + 0x1c) = (char)param_2;
  }
LAB_00235af8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


// ===== 00235b28  FUN_00235b28 =====

undefined4 FUN_00235b28(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_68 [2];
  long local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar4 + 0x10) != 0) {
    (*DAT_003138b0)();
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (*(byte *)(lVar4 + 0x20) < 2) {
    if (*(char *)(lVar4 + 0x21) == '\0') {
      local_68[0] = 1;
      local_60 = (long)DAT_00313ca8 + 1;
      uStack_58 = 1;
      iVar2 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_1 + 0x18),5,local_68);
      if (iVar2 == 0) {
        uVar5 = 0;
        uVar6 = (uint)((short)local_68[0] != 2);
      }
      else {
        puVar3 = (undefined4 *)__errno();
        uVar6 = 0;
        uVar5 = 0xe0a;
        *(undefined4 *)(param_1 + 0x20) = *puVar3;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      goto joined_r0x00235c48;
    }
    uVar6 = 0;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    uVar6 = 1;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  uVar5 = 0;
joined_r0x00235c48:
  if (lVar4 != 0) {
    (*DAT_003138c0)();
  }
  *param_2 = uVar6;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


// ===== 00235c54  FUN_00235c54 =====

int FUN_00235c54(long param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  __off64_t _Var11;
  int *piVar12;
  void *__s;
  undefined4 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined *puVar20;
  long lVar21;
  size_t sVar22;
  undefined4 uVar23;
  char *__s_00;
  undefined1 auStack_e8 [16];
  uint local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_b8;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar9 = (*(code *)PTR_FUN_00313f10)();
  uVar19 = (uint)(uVar9 >> 0xf) & 0x1ffff;
  plVar15 = *(long **)(param_1 + 0x40);
  if ((int)uVar9 < 0x8000) {
    uVar19 = 1;
  }
  if (plVar15 == (long *)0x0) {
    iVar7 = sqlite3_initialize();
    if ((iVar7 != 0) || (puVar10 = (undefined8 *)FUN_0022a6ac(0x18), puVar10 == (undefined8 *)0x0))
    {
      iVar7 = 7;
      goto LAB_00235f38;
    }
    *puVar10 = 0;
    lVar17 = DAT_00316fb0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    if (lVar17 != 0) {
      (*DAT_003138b0)();
    }
    lVar17 = *(long *)(param_1 + 0x10);
    plVar15 = *(long **)(lVar17 + 0x38);
    if (plVar15 != (long *)0x0) {
      iVar7 = 0;
LAB_00235d80:
      *puVar10 = plVar15;
      lVar17 = DAT_00316fb0;
      *(int *)(plVar15 + 6) = (int)plVar15[6] + 1;
      *(undefined8 **)(param_1 + 0x40) = puVar10;
      if (lVar17 != 0) {
        (*DAT_003138c0)();
      }
      if (plVar15[1] == 0) {
        puVar10[1] = plVar15[7];
        plVar15[7] = (long)puVar10;
      }
      else {
        (*DAT_003138b0)();
        lVar17 = plVar15[1];
        puVar10[1] = plVar15[7];
        plVar15[7] = (long)puVar10;
        if (lVar17 != 0) {
          (*DAT_003138c0)();
        }
      }
      if (iVar7 != 0) goto LAB_00235f38;
      plVar15 = *(long **)(param_1 + 0x40);
      goto LAB_00235cb4;
    }
    __s_00 = *(char **)(param_1 + 0x38);
    iVar7 = (*(code *)PTR_fstat_00313d30)(*(undefined4 *)(param_1 + 0x18),auStack_e8);
    if (iVar7 == 0) {
      sVar22 = strlen(__s_00);
      iVar7 = sqlite3_initialize();
      if (iVar7 == 0) {
        iVar7 = (int)sVar22;
        plVar15 = (long *)FUN_0022a6ac((long)iVar7 + 0x66);
        if (plVar15 != (long *)0x0) {
          memset(plVar15,0,(long)iVar7 + 0x66);
          plVar1 = plVar15 + 0xc;
          plVar15[2] = (long)plVar1;
          sqlite3_snprintf(iVar7 + 6,plVar1,"%s-shm",__s_00);
          *(undefined4 *)(plVar15 + 3) = 0xffffffff;
          lVar21 = *(long *)(param_1 + 0x10);
          *(long **)(lVar21 + 0x38) = plVar15;
          *plVar15 = lVar21;
          if (DAT_00313834 == '\0') {
LAB_0023621c:
            if (*(char *)(lVar17 + 0x21) == '\0') {
              iVar7 = sqlite3_uri_boolean(*(undefined8 *)(param_1 + 0x38),"readonly_shm",0);
              if (iVar7 == 0) {
                iVar7 = FUN_00234d54(plVar1,0x8042,local_d8 & 0x1ff);
                *(int *)(plVar15 + 3) = iVar7;
              }
              else {
                iVar7 = (int)plVar15[3];
              }
              if (iVar7 < 0) {
                iVar7 = FUN_00234d54(plVar1,0x8000,local_d8 & 0x1ff);
                *(int *)(plVar15 + 3) = iVar7;
                if (iVar7 < 0) {
                  iVar7 = 0xe;
                  sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xa165,
                              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
                  FUN_0023637c(0xe,&DAT_0016eb6b,plVar1,0xa165);
                  goto LAB_0023606c;
                }
                *(undefined1 *)((long)plVar15 + 0x22) = 1;
              }
              iVar6 = (*(code *)PTR_geteuid_00313eb0)();
              if (iVar6 == 0) {
                (*(code *)PTR_fchown_00313e98)(iVar7,local_d0,uStack_cc);
              }
              iVar7 = FUN_002363e0(param_1,plVar15);
              if ((iVar7 != 0x508) && (iVar7 != 0)) goto LAB_0023606c;
            }
            else {
              iVar7 = 0;
            }
            goto LAB_00235d80;
          }
          iVar7 = sqlite3_initialize();
          if (iVar7 == 0) {
            lVar21 = (*DAT_003138a0)();
            plVar15[1] = lVar21;
            if (lVar21 != 0) goto LAB_0023621c;
          }
          else {
            plVar15[1] = 0;
          }
        }
      }
      iVar7 = 7;
    }
    else {
      iVar7 = 0x70a;
    }
LAB_0023606c:
    FUN_00233e20(param_1);
    puVar18 = &DAT_00313858;
    if (DAT_00313830 == 0) {
LAB_002360e8:
      (*(code *)*puVar18)(puVar10);
      lVar17 = DAT_00316fb0;
    }
    else {
      if (DAT_00316f08 != (undefined8 *)0x0) {
        (*DAT_003138b0)();
      }
      iVar6 = (*DAT_00313868)(puVar10);
      DAT_00316e60 = DAT_00316e60 - iVar6;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(puVar10);
      lVar17 = DAT_00316fb0;
      if (DAT_00316f08 != (undefined8 *)0x0) {
        puVar18 = &DAT_003138c0;
        puVar10 = DAT_00316f08;
        goto LAB_002360e8;
      }
    }
  }
  else {
LAB_00235cb4:
    lVar21 = *plVar15;
    if (*(long *)(lVar21 + 8) != 0) {
      (*DAT_003138b0)();
    }
    if (*(char *)(lVar21 + 0x23) == '\0') {
LAB_00235ce8:
      iVar7 = 0;
      if (uVar19 != 0) {
        iVar7 = (int)(uVar19 + param_2) / (int)uVar19;
      }
      iVar7 = iVar7 * uVar19;
      if ((int)(uint)*(ushort *)(lVar21 + 0x20) < iVar7) {
        *(int *)(lVar21 + 0x1c) = param_3;
        if (-1 < *(int *)(lVar21 + 0x18)) {
          iVar6 = (*(code *)PTR_fstat_00313d30)(*(int *)(lVar21 + 0x18),auStack_e8);
          if (iVar6 != 0) {
            iVar6 = 0x130a;
            goto LAB_00235eec;
          }
          iVar6 = iVar7 * param_3;
          if (local_b8 < iVar6) {
            if (param_4 == 0) goto LAB_00235ee8;
            lVar17 = local_b8 + 0xfff;
            if (-1 < local_b8) {
              lVar17 = local_b8;
            }
            iVar2 = iVar6 + 0xfff;
            if (-1 < iVar6) {
              iVar2 = iVar6;
            }
            iVar6 = (int)(lVar17 >> 0xc);
            if (iVar6 < iVar2 >> 0xc) {
              lVar17 = (long)iVar6;
              do {
                iVar6 = *(int *)(lVar21 + 0x18);
                while( true ) {
                  _Var11 = lseek64(iVar6,(long)(int)((int)lVar17 << 0xc | 0xfff),0);
                  if (_Var11 < 0) goto LAB_00236104;
                  iVar8 = (*(code *)PTR_write_00313dc0)(iVar6,&DAT_0016f7d1,1);
                  if (-1 < iVar8) break;
                  piVar12 = (int *)__errno();
                  if (*piVar12 != 4) goto LAB_00236104;
                }
                if (iVar8 != 1) {
LAB_00236104:
                  puVar20 = *(undefined **)(lVar21 + 0x10);
                  puVar13 = (undefined4 *)__errno();
                  puVar3 = &DAT_0016f7d1;
                  if (puVar20 != (undefined *)0x0) {
                    puVar3 = puVar20;
                  }
                  sqlite3_log(0x130a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa1f5,*puVar13,"write",puVar3
                             );
                  iVar6 = 0x130a;
                  goto LAB_00235eec;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != iVar2 >> 0xc);
            }
          }
        }
        uVar16 = *(undefined8 *)(lVar21 + 0x28);
        iVar6 = sqlite3_initialize();
        if ((iVar6 == 0) &&
           (lVar17 = FUN_0022b604(uVar16,iVar7 * 8 & (iVar7 * 8 >> 0x1f ^ 0xffffffffU)), lVar17 != 0
           )) {
          uVar14 = (uint)*(ushort *)(lVar21 + 0x20);
          *(long *)(lVar21 + 0x28) = lVar17;
          if (iVar7 <= (int)(uint)*(ushort *)(lVar21 + 0x20)) goto LAB_00235ee8;
          sVar22 = (size_t)(int)(uVar19 * param_3);
          do {
            if (*(int *)(lVar21 + 0x18) < 0) {
              iVar6 = sqlite3_initialize();
              if ((iVar6 != 0) || (__s = (void *)FUN_0022a6ac(sVar22), __s == (void *)0x0)) {
                iVar6 = 7;
                break;
              }
              memset(__s,0,sVar22);
            }
            else {
              uVar23 = 3;
              if (*(char *)(lVar21 + 0x22) != '\0') {
                uVar23 = 1;
              }
              __s = (void *)(*(code *)PTR_mmap_00313ec8)
                                      (0,sVar22,uVar23,1,*(int *)(lVar21 + 0x18),
                                       (long)(int)(uVar14 & 0xffff) * (long)param_3);
              if (__s == (void *)0xffffffffffffffff) {
                puVar20 = *(undefined **)(lVar21 + 0x10);
                puVar13 = (undefined4 *)__errno();
                puVar3 = &DAT_0016f7d1;
                if (puVar20 != (undefined *)0x0) {
                  puVar3 = puVar20;
                }
                sqlite3_log(0x150a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa210,*puVar13,&DAT_0017061d,
                            puVar3);
                iVar6 = 0x150a;
                break;
              }
            }
            uVar4 = *(ushort *)(lVar21 + 0x20);
            if (uVar19 != 0) {
              lVar17 = (ulong)uVar4 << 3;
              uVar9 = (ulong)uVar19;
              do {
                uVar9 = uVar9 - 1;
                *(void **)(*(long *)(lVar21 + 0x28) + lVar17) = __s;
                lVar17 = lVar17 + 8;
                __s = (void *)((long)__s + (long)param_3);
              } while (uVar9 != 0);
            }
            uVar14 = uVar4 + uVar19;
            iVar6 = 0;
            *(short *)(lVar21 + 0x20) = (short)uVar14;
          } while ((int)(uVar14 & 0xffff) < iVar7);
        }
        else {
          iVar6 = 0xc0a;
        }
      }
      else {
LAB_00235ee8:
        iVar6 = 0;
      }
    }
    else {
      iVar6 = FUN_002363e0(param_1,lVar21);
      if (iVar6 == 0) {
        *(undefined1 *)(lVar21 + 0x23) = 0;
        goto LAB_00235ce8;
      }
    }
LAB_00235eec:
    if (param_2 < (int)(uint)*(ushort *)(lVar21 + 0x20)) {
      uVar16 = *(undefined8 *)(*(long *)(lVar21 + 0x28) + (long)param_2 * 8);
    }
    else {
      uVar16 = 0;
    }
    *param_5 = uVar16;
    lVar17 = *(long *)(lVar21 + 8);
    iVar7 = 8;
    if (*(char *)(lVar21 + 0x22) == '\0' || iVar6 != 0) {
      iVar7 = iVar6;
    }
  }
  if (lVar17 != 0) {
    (*DAT_003138c0)(lVar17);
  }
LAB_00235f38:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}


// ===== 00236334  sqlite3_uri_boolean =====

bool sqlite3_uri_boolean(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = sqlite3_uri_parameter();
  bVar1 = param_3 == 0;
  if (lVar3 != 0) {
    cVar2 = FUN_00234eac(lVar3,1,!bVar1);
    bVar1 = cVar2 == '\0';
  }
  return !bVar1;
}


// ===== 0023637c  FUN_0023637c =====

undefined4 FUN_0023637c(undefined4 param_1,undefined8 param_2,undefined *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)__errno();
  puVar1 = &DAT_0016f7d1;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  sqlite3_log(param_1,"os_unix.c:%d: (%d) %s(%s) - %s",param_4,*puVar2,param_2,puVar1);
  return param_1;
}


// ===== 002363e0  FUN_002363e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002363e0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  uVar4 = _UNK_00177738;
  uVar3 = _DAT_00177730;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_78 = _UNK_00177738;
  local_80 = _DAT_00177730;
  local_88[0] = 1;
  iVar5 = (*(code *)PTR_fcntl_00313d60)(*(undefined4 *)(param_2 + 0x18),5,local_88);
  if (iVar5 != 0) {
    uVar7 = 0xf0a;
    goto LAB_00236444;
  }
  if ((local_88[0] & 0xffff) == 1) {
LAB_00236500:
    uVar7 = 5;
  }
  else {
    if ((local_88[0] & 0xffff) != 2) {
LAB_0023654c:
      iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
      if (iVar5 < 0) {
        uVar7 = 0;
      }
      else {
        local_68[0] = 0;
        uStack_58 = uVar4;
        local_60 = uVar3;
        iVar5 = (*(code *)PTR_fcntl_00313d60)(iVar5,6,local_68);
        uVar7 = 5;
        if (iVar5 != -1) {
          uVar7 = 0;
        }
      }
      goto LAB_00236444;
    }
    if (*(char *)(param_2 + 0x22) != '\0') {
      uVar7 = 0x508;
      *(undefined1 *)(param_2 + 0x23) = 1;
      goto LAB_00236444;
    }
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
    if (-1 < iVar5) {
      local_68[0] = 1;
      uStack_58 = uVar4;
      local_60 = uVar3;
      iVar5 = (*(code *)PTR_fcntl_00313d60)(iVar5,6,local_68);
      if (iVar5 == -1) goto LAB_00236500;
    }
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    do {
      iVar5 = (*(code *)PTR_ftruncate_00313d48)(uVar7,3);
      if (-1 < iVar5) {
        if (iVar5 == 0) goto LAB_0023654c;
        piVar6 = (int *)__errno();
        break;
      }
      piVar6 = (int *)__errno();
    } while (*piVar6 == 4);
    puVar1 = &DAT_0016f7d1;
    if (*(undefined **)(param_2 + 0x10) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_2 + 0x10);
    }
    sqlite3_log(0x120a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa0e8,*piVar6,"ftruncate",puVar1);
    uVar7 = 0x120a;
  }
LAB_00236444:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 00236594  FUN_00236594 =====

void FUN_00236594(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar6 = *(undefined4 **)(lVar4 + 0x28);
  if (puVar6 != (undefined4 *)0x0) {
    do {
      puVar7 = *(undefined4 **)(puVar6 + 2);
      iVar2 = (*(code *)PTR_close_00313cd0)(*puVar6);
      if (iVar2 != 0) {
        puVar8 = *(undefined **)(param_1 + 0x38);
        puVar3 = (undefined4 *)__errno();
        puVar1 = &DAT_0016f7d1;
        if (puVar8 != (undefined *)0x0) {
          puVar1 = puVar8;
        }
        sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0x944c,*puVar3,"close",puVar1,
                    &DAT_0016f7d1);
      }
      puVar5 = &DAT_00313858;
      if (DAT_00313830 == 0) {
LAB_002365f4:
        (*(code *)*puVar5)(puVar6);
      }
      else {
        if (DAT_00316f08 != (undefined4 *)0x0) {
          (*DAT_003138b0)();
        }
        iVar2 = (*DAT_00313868)(puVar6);
        DAT_00316e60 = DAT_00316e60 - iVar2;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(puVar6);
        if (DAT_00316f08 != (undefined4 *)0x0) {
          puVar5 = &DAT_003138c0;
          puVar6 = DAT_00316f08;
          goto LAB_002365f4;
        }
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)0x0);
  }
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}


// ===== 002366d8  FUN_002366d8 =====

/* WARNING: Removing unreachable block (ram,0x002368a0) */

undefined8 FUN_002366d8(byte *param_1,uint *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  bVar2 = *param_1;
  if (bVar2 == 0x2d) {
    param_1 = param_1 + 1;
    lVar5 = -1;
  }
  else if (bVar2 == 0x30) {
    if (((param_1[1] | 0x20) == 0x78) &&
       (pbVar4 = param_1 + 2, ((byte)(&DAT_0017d382)[param_1[2]] >> 3 & 1) != 0)) {
      do {
        pbVar8 = pbVar4;
        bVar2 = *pbVar8;
        pbVar4 = pbVar8 + 1;
      } while ((ulong)bVar2 == 0x30);
      if (((byte)(&DAT_0017d382)[bVar2] >> 3 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        bVar3 = pbVar8[1];
        uVar6 = ((uint)(int)(char)(bVar2 << 1) >> 7 & 0xfffffff9) + (uint)bVar2 & 0xf;
        if (((byte)(&DAT_0017d382)[bVar3] >> 3 & 1) != 0) {
          bVar2 = pbVar8[2];
          uVar6 = ((uint)(int)(char)(bVar3 << 1) >> 7 & 0xfffffff9) + (uint)bVar3 & 0xf | uVar6 << 4
          ;
          if (((byte)(&DAT_0017d382)[bVar2] >> 3 & 1) != 0) {
            bVar3 = pbVar8[3];
            uVar6 = ((uint)(int)(char)(bVar2 << 1) >> 7 & 0xfffffff9) + (uint)bVar2 & 0xf |
                    uVar6 << 4;
            if (((byte)(&DAT_0017d382)[bVar3] >> 3 & 1) != 0) {
              bVar2 = pbVar8[4];
              uVar6 = ((uint)(int)(char)(bVar3 << 1) >> 7 & 0xfffffff9) + (uint)bVar3 & 0xf |
                      uVar6 << 4;
              if (((byte)(&DAT_0017d382)[bVar2] >> 3 & 1) != 0) {
                bVar3 = pbVar8[5];
                uVar6 = ((uint)(int)(char)(bVar2 << 1) >> 7 & 0xfffffff9) + (uint)bVar2 & 0xf |
                        uVar6 << 4;
                if (((byte)(&DAT_0017d382)[bVar3] >> 3 & 1) != 0) {
                  bVar2 = pbVar8[6];
                  uVar6 = ((uint)(int)(char)(bVar3 << 1) >> 7 & 0xfffffff9) + (uint)bVar3 & 0xf |
                          uVar6 << 4;
                  if (((byte)(&DAT_0017d382)[bVar2] >> 3 & 1) != 0) {
                    bVar3 = pbVar8[7];
                    uVar6 = ((uint)(int)(char)(bVar2 << 1) >> 7 & 0xfffffff9) + (uint)bVar2 & 0xf |
                            uVar6 << 4;
                    if ((((byte)(&DAT_0017d382)[bVar3] >> 3 & 1) != 0) &&
                       (uVar6 = ((uint)(int)(char)(bVar3 << 1) >> 7 & 0xfffffff9) + (uint)bVar3 &
                                0xf | uVar6 << 4, ((&DAT_0017d382)[pbVar8[8]] & 8) != 0)) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (-1 < (int)uVar6) {
        *param_2 = uVar6;
        return 1;
      }
      return 0;
    }
    lVar5 = 0;
  }
  else {
    if (bVar2 != 0x2b) {
      lVar5 = 0;
      bVar3 = bVar2;
      goto LAB_0023673c;
    }
    lVar5 = 0;
    param_1 = param_1 + 1;
  }
  bVar3 = *param_1;
LAB_0023673c:
  uVar7 = (ulong)bVar3;
  if (uVar7 - 0x3a < 0xfffffffffffffff6) {
    return 0;
  }
  while (uVar6 = (uint)uVar7, uVar6 == 0x30) {
    param_1 = param_1 + 1;
    uVar7 = (ulong)*param_1;
  }
  if (uVar6 - 0x30 < 10) {
    uVar7 = (ulong)(uVar6 & 0xf);
    if (param_1[1] - 0x30 < 10) {
      uVar7 = ((ulong)param_1[1] & 0xf) + uVar7 * 10;
      if (param_1[2] - 0x30 < 10) {
        uVar7 = ((ulong)param_1[2] & 0xf) + uVar7 * 10;
        if (param_1[3] - 0x30 < 10) {
          uVar7 = ((ulong)param_1[3] & 0xf) + uVar7 * 10;
          if (param_1[4] - 0x30 < 10) {
            uVar7 = ((ulong)param_1[4] & 0xf) + uVar7 * 10;
            if (param_1[5] - 0x30 < 10) {
              uVar7 = ((ulong)param_1[5] & 0xf) + uVar7 * 10;
              if (param_1[6] - 0x30 < 10) {
                uVar7 = ((ulong)param_1[6] & 0xf) + uVar7 * 10;
                if (param_1[7] - 0x30 < 10) {
                  uVar7 = ((ulong)param_1[7] & 0xf) + uVar7 * 10;
                  if (param_1[8] - 0x30 < 10) {
                    uVar7 = ((ulong)param_1[8] & 0xf) + uVar7 * 10;
                    if (param_1[9] - 0x30 < 10) {
                      if (param_1[10] - 0x30 < 10) {
                        return 0;
                      }
                      uVar7 = ((ulong)param_1[9] & 0xf) + uVar7 * 10;
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
    uVar7 = 0;
  }
  if ((long)(uVar7 + lVar5) < 0x80000000) {
    uVar1 = (ulong)(uint)-(int)uVar7;
    if (bVar2 != 0x2d) {
      uVar1 = uVar7;
    }
    *param_2 = (uint)uVar1;
    return 1;
  }
  return 0;
}


// ===== 00236a48  FUN_00236a48 =====

undefined * FUN_00236a48(void)

{
  return &DAT_0030af88;
}


// ===== 00236a54  FUN_00236a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00236a54(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  uRam00000000003172b0 = 0;
  _DAT_003172a8 = 0;
  uRam00000000003172c0 = 0;
  _DAT_003172b8 = 0;
  uRam00000000003172d0 = 0;
  _DAT_003172c8 = 0;
  uRam00000000003172e0 = 0;
  _DAT_003172d8 = 0;
  bVar3 = DAT_00313968 == 0 || DAT_00313834 != '\0';
  _DAT_003172f0 = 0;
  DAT_00317300 = 0;
  _DAT_003172f8 = 0;
  DAT_00317310 = 0;
  DAT_00317308 = 0;
  _DAT_00317320 = 0;
  DAT_00317318 = 0;
  uRam00000000003172a0 = 0;
  DAT_00317298 = 0;
  _DAT_003172e8 = (ulong)bVar3 << 0x20;
  if (DAT_00313834 != '\0') {
    DAT_00317298 = (*DAT_003138a0)(6);
    if (DAT_00313834 == '\0') {
      DAT_00317310 = 0;
    }
    else {
      DAT_00317310 = (*DAT_003138a0)(7);
    }
    bVar3 = DAT_003172ec != 0;
  }
  bVar2 = false;
  if (DAT_00313974 != 0) {
    bVar2 = bVar3;
  }
  _DAT_003172a8 = CONCAT44(DAT_003172a8_4,10);
  iVar1 = DAT_00313974;
  if (!(bool)(bVar2 & DAT_00313968 == 0)) {
    iVar1 = 0;
  }
  _DAT_003172f0 = CONCAT44(DAT_003172f4,iVar1);
  _DAT_003172e8 = CONCAT44(DAT_003172ec,1);
  return 0;
}


// ===== 00236b48  FUN_00236b48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00236b48(void)

{
  uRam00000000003172b0 = 0;
  _DAT_003172a8 = 0;
  uRam00000000003172c0 = 0;
  _DAT_003172b8 = 0;
  uRam00000000003172d0 = 0;
  _DAT_003172c8 = 0;
  uRam00000000003172e0 = 0;
  _DAT_003172d8 = 0;
  _DAT_003172f0 = 0;
  _DAT_003172e8 = 0;
  DAT_00317300 = 0;
  _DAT_003172f8 = 0;
  DAT_00317310 = 0;
  DAT_00317308 = 0;
  _DAT_00317320 = 0;
  DAT_00317318 = 0;
  uRam00000000003172a0 = 0;
  DAT_00317298 = 0;
  return;
}


// ===== 00236b6c  FUN_00236b6c =====

undefined8 * FUN_00236b6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *__s;
  size_t __n;
  undefined8 *puVar3;
  
  __n = (size_t)(DAT_003172ec * 0x50 + 0x58);
  __s = (undefined8 *)FUN_0022a6ac(__n);
  if (__s != (undefined8 *)0x0) {
    memset(__s,0,__n);
    puVar3 = &DAT_00317298;
    if (DAT_003172ec != 0) {
      puVar3 = __s + 0xb;
      *(undefined4 *)(__s + 0xd) = 10;
    }
    if (*(short *)((long)puVar3 + 0x2e) == 0) {
      *(undefined2 *)((long)puVar3 + 0x2e) = 1;
      puVar3[8] = puVar3 + 3;
      puVar3[9] = puVar3 + 3;
    }
    *__s = puVar3;
    *(int *)(__s + 2) = param_1;
    *(int *)((long)__s + 0x14) = param_2;
    *(int *)(__s + 3) = param_1 + param_2 + 0x38;
    *(uint *)((long)__s + 0x1c) = (uint)(param_3 != 0);
    FUN_002378c8(__s);
    if (param_3 == 0) {
      puVar3 = __s + 6;
    }
    else {
      iVar1 = *(int *)(puVar3 + 1);
      iVar2 = *(int *)((long)puVar3 + 0xc);
      *(undefined4 *)(__s + 4) = 10;
      *(int *)((long)puVar3 + 0xc) = iVar2 + 10;
      *(int *)(puVar3 + 2) = iVar1 - iVar2;
      puVar3 = (undefined8 *)((long)puVar3 + 0x14);
    }
    __s[1] = puVar3;
    if (*(int *)((long)__s + 0x3c) == 0) {
      FUN_00236eb8(__s);
      __s = (undefined8 *)0x0;
    }
  }
  return __s;
}


// ===== 00236c74  FUN_00236c74 =====

void FUN_00236c74(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    lVar3 = *param_1;
    uVar1 = (*(int *)((long)param_1 + 0x24) - *(int *)(lVar3 + 8)) + 0x7fff0000;
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    iVar2 = (uVar1 - *(int *)((long)param_1 + 0x24)) + *(int *)(lVar3 + 8);
    *(int *)(lVar3 + 8) = iVar2;
    *(int *)(lVar3 + 0x10) = (iVar2 - *(int *)(lVar3 + 0xc)) + 10;
    *(uint *)((long)param_1 + 0x24) = uVar1;
    *(uint *)(param_1 + 5) = (uVar1 * 9) / 10;
    FUN_002370d0();
    return;
  }
  return;
}


// ===== 00236cd4  FUN_00236cd4 =====

undefined4 FUN_00236cd4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 00236cdc  FUN_00236cdc =====

long FUN_00236cdc(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_2 / uVar1;
  }
  for (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)(param_2 - uVar3 * uVar1) * 8);
      lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
    if (*(uint *)(lVar4 + 0x10) == param_2) {
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar4 + 0x20);
        lVar6 = *(long *)(lVar4 + 0x30);
        iVar2 = *(int *)(lVar7 + 0x34);
        *(long *)(lVar6 + 0x28) = lVar5;
        *(long *)(lVar5 + 0x30) = lVar6;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(int *)(lVar7 + 0x34) = iVar2 + -1;
      }
      return lVar4;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = FUN_0023750c(param_1);
  return lVar4;
}


// ===== 00236d4c  FUN_00236d4c =====

void FUN_00236d4c(long *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if ((param_3 == 0) && (lVar5 = *param_1, *(uint *)(lVar5 + 0x14) <= *(uint *)(lVar5 + 8))) {
    param_2[6] = lVar5 + 0x18;
    lVar11 = *(long *)(lVar5 + 0x40);
    param_2[5] = lVar11;
    *(undefined8 **)(lVar11 + 0x30) = param_2;
    iVar8 = 1;
    *(undefined8 **)(lVar5 + 0x40) = param_2;
    piVar7 = (int *)((long)param_1 + 0x34);
  }
  else {
    lVar5 = param_2[4];
    uVar1 = *(uint *)(lVar5 + 0x3c);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(uint *)(param_2 + 2) / uVar1;
    }
    puVar4 = (undefined8 *)
             (*(long *)(lVar5 + 0x40) + (ulong)(*(uint *)(param_2 + 2) - uVar3 * uVar1) * 8);
    do {
      puVar9 = puVar4;
      puVar10 = (undefined8 *)*puVar9;
      puVar4 = puVar10 + 3;
    } while (puVar10 != param_2);
    iVar8 = *(int *)(lVar5 + 0x38);
    *puVar9 = param_2[3];
    sVar2 = *(short *)((long)param_2 + 0x14);
    lVar11 = param_2[4];
    *(int *)(lVar5 + 0x38) = iVar8 + -1;
    if (sVar2 == 0) {
      FUN_00237244(*param_2);
    }
    else {
      uVar6 = *(undefined8 *)(lVar11 + 0x48);
      *(undefined8 **)(lVar11 + 0x48) = param_2;
      param_2[3] = uVar6;
    }
    piVar7 = *(int **)(lVar11 + 8);
    iVar8 = -1;
  }
  *piVar7 = *piVar7 + iVar8;
  return;
}


// ===== 00236e1c  FUN_00236e1c =====

void FUN_00236e1c(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_3 / uVar1;
  }
  plVar4 = (long *)(*(long *)(param_1 + 0x40) + (ulong)(param_3 - uVar3 * uVar1) * 8);
  do {
    plVar6 = plVar4;
    lVar7 = *plVar6;
    plVar4 = (long *)(lVar7 + 0x18);
  } while (lVar7 != param_2);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_4 / uVar1;
  }
  *(uint *)(param_2 + 0x10) = param_4;
  *plVar6 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar7 = (ulong)(param_4 - uVar3 * uVar1) * 8;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar5 + lVar7);
  *(long *)(lVar5 + lVar7) = param_2;
  if (uVar2 < param_4) {
    *(uint *)(param_1 + 0x2c) = param_4;
  }
  return;
}


// ===== 00236e80  FUN_00236e80 =====

void FUN_00236e80(long param_1,uint param_2)

{
  if (param_2 <= *(uint *)(param_1 + 0x2c)) {
    FUN_002373e4();
    *(uint *)(param_1 + 0x2c) = param_2 - 1;
  }
  return;
}


// ===== 00236eb8  FUN_00236eb8 =====

void FUN_00236eb8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if ((int)param_1[7] != 0) {
    FUN_002373e4(param_1,0);
  }
  uVar5 = NEON_rev64(param_1[4],4);
  iVar4 = (int)*(undefined8 *)(lVar2 + 8) - (int)uVar5;
  iVar6 = (int)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) - (int)((ulong)uVar5 >> 0x20);
  *(ulong *)(lVar2 + 8) = CONCAT44(iVar6,iVar4);
  *(int *)(lVar2 + 0x10) = (iVar4 - iVar6) + 10;
  FUN_002370d0(param_1);
  plVar3 = (long *)param_1[10];
  if (plVar3 != (long *)0x0) {
    puVar1 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (long *)0x0) {
        (*DAT_003138b0)();
      }
      iVar4 = (*DAT_00313868)(plVar3);
      DAT_00316e60 = DAT_00316e60 - iVar4;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(plVar3);
      if (DAT_00316f08 == (long *)0x0) goto LAB_00236fa4;
      puVar1 = &DAT_003138c0;
      plVar3 = DAT_00316f08;
    }
    (*(code *)*puVar1)(plVar3);
  }
LAB_00236fa4:
  plVar3 = (long *)param_1[8];
  if (plVar3 != (long *)0x0) {
    puVar1 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (long *)0x0) {
        (*DAT_003138b0)();
      }
      iVar4 = (*DAT_00313868)(plVar3);
      DAT_00316e60 = DAT_00316e60 - iVar4;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(plVar3);
      if (DAT_00316f08 == (long *)0x0) goto LAB_00237014;
      puVar1 = &DAT_003138c0;
      plVar3 = DAT_00316f08;
    }
    (*(code *)*puVar1)(plVar3);
  }
LAB_00237014:
  puVar1 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != (long *)0x0) {
      (*DAT_003138b0)();
    }
    iVar4 = (*DAT_00313868)(param_1);
    DAT_00316e60 = DAT_00316e60 - iVar4;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(param_1);
    if (DAT_00316f08 == (long *)0x0) {
      return;
    }
    puVar1 = &DAT_003138c0;
    param_1 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x00237084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1);
  return;
}


// ===== 0023709c  FUN_0023709c =====

void FUN_0023709c(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    lVar2 = *param_1;
    uVar1 = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(lVar2 + 8) = 0;
    FUN_002370d0();
    *(undefined4 *)(lVar2 + 8) = uVar1;
  }
  return;
}


// ===== 002370d0  FUN_002370d0 =====

void FUN_002370d0(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *param_1;
  while ((*(uint *)(lVar13 + 8) < *(uint *)(lVar13 + 0x14) &&
         (puVar8 = *(undefined8 **)(lVar13 + 0x48), *(short *)((long)puVar8 + 0x16) == 0))) {
    lVar1 = puVar8[4];
    lVar14 = puVar8[5];
    uVar2 = *(uint *)(puVar8 + 2);
    lVar12 = puVar8[6];
    uVar3 = *(uint *)(lVar1 + 0x3c);
    *(long *)(lVar12 + 0x28) = lVar14;
    *(long *)(lVar14 + 0x30) = lVar12;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    puVar8[5] = 0;
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    puVar6 = (undefined8 *)(*(long *)(lVar1 + 0x40) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
    do {
      puVar10 = puVar6;
      puVar11 = (undefined8 *)*puVar10;
      puVar6 = puVar11 + 3;
    } while (puVar11 != puVar8);
    iVar7 = *(int *)(lVar1 + 0x38);
    *puVar10 = puVar8[3];
    sVar4 = *(short *)((long)puVar8 + 0x14);
    lVar14 = puVar8[4];
    *(int *)(lVar1 + 0x38) = iVar7 + -1;
    if (sVar4 == 0) {
      FUN_00237244(*puVar8);
    }
    else {
      uVar9 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined8 **)(lVar14 + 0x48) = puVar8;
      puVar8[3] = uVar9;
    }
    **(int **)(lVar14 + 8) = **(int **)(lVar14 + 8) + -1;
  }
  if ((int)param_1[7] != 0) {
    return;
  }
  lVar13 = param_1[10];
  if (lVar13 == 0) {
    return;
  }
  puVar8 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    iVar7 = (*DAT_00313868)(lVar13);
    DAT_00316e60 = DAT_00316e60 - iVar7;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(lVar13);
    if (DAT_00316f08 == 0) goto LAB_00237230;
    puVar8 = &DAT_003138c0;
    lVar13 = DAT_00316f08;
  }
  (*(code *)*puVar8)(lVar13);
LAB_00237230:
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


// ===== 00237244  FUN_00237244 =====

void FUN_00237244(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((param_1 < DAT_00317300) || (DAT_00317308 <= param_1)) {
    iVar2 = (*DAT_00313868)(param_1);
    if (DAT_00317310 == (undefined8 *)0x0) {
      DAT_00316e70 = DAT_00316e70 - iVar2;
    }
    else {
      (*DAT_003138b0)();
      DAT_00316e70 = DAT_00316e70 - iVar2;
      if (DAT_00317310 != (undefined8 *)0x0) {
        (*DAT_003138c0)();
      }
    }
    puVar3 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (undefined8 *)0x0) {
        (*DAT_003138b0)();
      }
      iVar2 = (*DAT_00313868)(param_1);
      DAT_00316e60 = DAT_00316e60 - iVar2;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_1);
      if (DAT_00316f08 == (undefined8 *)0x0) {
        return;
      }
      puVar3 = &DAT_003138c0;
      param_1 = DAT_00316f08;
    }
  }
  else {
    if (DAT_00317310 != (undefined8 *)0x0) {
      (*DAT_003138b0)();
    }
    puVar1 = DAT_00317310;
    DAT_00316e68 = DAT_00316e68 + -1;
    puVar3 = param_1;
    *param_1 = DAT_00317318;
    DAT_00317318 = puVar3;
    DAT_00317320 = DAT_00317320 + 1;
    DAT_00317324 = (uint)(DAT_00317320 < DAT_003172fc);
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = &DAT_003138c0;
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x002373e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}


// ===== 002373e4  FUN_002373e4 =====

void FUN_002373e4(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  
  uVar9 = *(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar9 - param_2 < uVar1) {
    uVar8 = 0;
    if (uVar1 != 0) {
      uVar8 = param_2 / uVar1;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar9 / uVar1;
    }
    uVar8 = param_2 - uVar8 * uVar1;
    uVar9 = uVar9 - uVar3 * uVar1;
  }
  else {
    uVar8 = uVar1 >> 1;
    uVar9 = uVar8 - 1;
  }
  do {
    plVar10 = (long *)(*(long *)(param_1 + 0x40) + (ulong)uVar8 * 8);
    puVar4 = (undefined8 *)*plVar10;
    while (puVar4 != (undefined8 *)0x0) {
      while (*(uint *)(puVar4 + 2) < param_2) {
        plVar10 = puVar4 + 3;
        puVar4 = (undefined8 *)*plVar10;
        if (puVar4 == (undefined8 *)0x0) goto LAB_002374f0;
      }
      iVar2 = *(int *)(param_1 + 0x38);
      *plVar10 = puVar4[3];
      lVar5 = puVar4[5];
      *(int *)(param_1 + 0x38) = iVar2 + -1;
      if (lVar5 == 0) {
        lVar11 = puVar4[4];
        if (*(short *)((long)puVar4 + 0x14) == 0) goto LAB_002374d0;
LAB_002374b4:
        uVar6 = *(undefined8 *)(lVar11 + 0x48);
        *(undefined8 **)(lVar11 + 0x48) = puVar4;
        puVar4[3] = uVar6;
      }
      else {
        lVar11 = puVar4[4];
        lVar7 = puVar4[6];
        iVar2 = *(int *)(lVar11 + 0x34);
        *(long *)(lVar7 + 0x28) = lVar5;
        *(long *)(lVar5 + 0x30) = lVar7;
        puVar4[5] = 0;
        *(int *)(lVar11 + 0x34) = iVar2 + -1;
        if (*(short *)((long)puVar4 + 0x14) != 0) goto LAB_002374b4;
LAB_002374d0:
        FUN_00237244(*puVar4);
      }
      **(int **)(lVar11 + 8) = **(int **)(lVar11 + 8) + -1;
      puVar4 = (undefined8 *)*plVar10;
    }
LAB_002374f0:
    if (uVar8 == uVar9) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uVar8 + 1) / uVar1;
    }
    uVar8 = (uVar8 + 1) - uVar3 * uVar1;
  } while( true );
}


// ===== 0023750c  FUN_0023750c =====

long * FUN_0023750c(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  
  lVar15 = *param_1;
  if (param_3 == 1) {
    uVar3 = *(uint *)(param_1 + 7) - *(uint *)((long)param_1 + 0x34);
    if (*(uint *)(lVar15 + 0x10) <= uVar3) {
      return (long *)0x0;
    }
    if (*(uint *)(param_1 + 5) <= uVar3) {
      return (long *)0x0;
    }
    if ((DAT_003172f8 == 0) || (DAT_003172f4 < *(int *)((long)param_1 + 0x14) + (int)param_1[2])) {
      if (DAT_00316f20 != 0) goto LAB_00237594;
    }
    else if (DAT_00317324 != 0) {
LAB_00237594:
      if (*(uint *)((long)param_1 + 0x34) < uVar3) {
        return (long *)0x0;
      }
    }
  }
  if (*(uint *)((long)param_1 + 0x3c) <= *(uint *)(param_1 + 7)) {
    FUN_002378c8(param_1);
  }
  iVar8 = *(int *)((long)param_1 + 0x1c);
  if ((iVar8 != 0) && (plVar7 = *(long **)(lVar15 + 0x48), *(short *)((long)plVar7 + 0x16) == 0)) {
    if ((int)param_1[7] + 1U < *(uint *)((long)param_1 + 0x24)) {
      iVar10 = DAT_00316f20;
      if ((DAT_003172f8 != 0) && (*(int *)((long)param_1 + 0x14) + (int)param_1[2] <= DAT_003172f4))
      {
        iVar10 = DAT_00317324;
      }
      if (iVar10 == 0) goto LAB_002375cc;
    }
    lVar11 = plVar7[4];
    uVar3 = *(uint *)(lVar11 + 0x3c);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(plVar7 + 2) / uVar3;
    }
    plVar9 = (long *)(*(long *)(lVar11 + 0x40) + (ulong)(*(uint *)(plVar7 + 2) - uVar4 * uVar3) * 8)
    ;
    do {
      plVar13 = plVar9;
      plVar14 = (long *)*plVar13;
      plVar9 = plVar14 + 3;
    } while (plVar14 != plVar7);
    iVar10 = *(int *)(lVar11 + 0x38);
    lVar5 = param_1[3];
    *plVar13 = plVar7[3];
    lVar17 = plVar7[4];
    lVar1 = plVar7[5];
    lVar2 = plVar7[6];
    *(int *)(lVar11 + 0x38) = iVar10 + -1;
    iVar10 = *(int *)(lVar17 + 0x34);
    iVar6 = *(int *)(lVar17 + 0x18);
    *(long *)(lVar2 + 0x28) = lVar1;
    *(long *)(lVar1 + 0x30) = lVar2;
    plVar7[5] = 0;
    *(int *)(lVar17 + 0x34) = iVar10 + -1;
    if (iVar6 == (int)lVar5) {
      piVar16 = (int *)(lVar15 + 0x14);
      iVar10 = *piVar16;
      iVar8 = iVar8 - *(int *)(lVar17 + 0x1c);
      goto LAB_0023764c;
    }
    if (*(short *)((long)plVar7 + 0x14) == 0) {
      FUN_00237244(*plVar7);
    }
    else {
      lVar15 = *(long *)(lVar17 + 0x48);
      *(long **)(lVar17 + 0x48) = plVar7;
      plVar7[3] = lVar15;
    }
    **(int **)(lVar17 + 8) = **(int **)(lVar17 + 8) + -1;
  }
LAB_002375cc:
  plVar7 = (long *)param_1[9];
  if (plVar7 == (long *)0x0) {
    if ((((int)param_1[7] == 0) && (DAT_003172f0 != 0)) && (2 < *(uint *)((long)param_1 + 0x24))) {
      if (DAT_00317330 != (code *)0x0) {
        (*DAT_00317330)();
      }
      if ((int)DAT_003172f0 < 1) {
        lVar11 = (long)(int)param_1[3];
        lVar15 = (long)(int)DAT_003172f0 * -0x400;
      }
      else {
        lVar11 = (long)(int)param_1[3];
        lVar15 = lVar11 * (ulong)DAT_003172f0;
      }
      lVar11 = lVar11 * (ulong)*(uint *)((long)param_1 + 0x24);
      if (lVar11 <= lVar15) {
        lVar15 = lVar11;
      }
      lVar15 = FUN_0022a6ac(lVar15);
      param_1[10] = lVar15;
      if (DAT_00317338 != (code *)0x0) {
        (*DAT_00317338)();
      }
      if (lVar15 == 0) {
        plVar7 = (long *)param_1[9];
        if (plVar7 == (long *)0x0) goto LAB_002375ec;
      }
      else {
        iVar6 = (*DAT_00313868)(lVar15);
        iVar8 = (int)param_1[3];
        lVar11 = param_1[2];
        plVar7 = (long *)param_1[9];
        iVar10 = 0;
        if (iVar8 != 0) {
          iVar10 = iVar6 / iVar8;
        }
        do {
          plVar9 = (long *)(lVar15 + (int)lVar11);
          iVar10 = iVar10 + -1;
          plVar9[3] = (long)plVar7;
          *plVar9 = lVar15;
          plVar9[1] = (long)(plVar9 + 7);
          lVar15 = lVar15 + iVar8;
          *(undefined4 *)((long)plVar9 + 0x14) = 1;
          plVar9[6] = 0;
          plVar7 = plVar9;
        } while (iVar10 != 0);
        plVar7 = (long *)(lVar15 + ((long)(int)lVar11 - (long)iVar8));
      }
      goto LAB_002375d4;
    }
LAB_002375ec:
    if (param_3 == 1) {
      if (DAT_00317330 != (code *)0x0) {
        (*DAT_00317330)();
      }
      lVar15 = FUN_00237a40((int)param_1[3]);
      if (DAT_00317338 != (code *)0x0) {
        (*DAT_00317338)();
      }
    }
    else {
      lVar15 = FUN_00237a40((int)param_1[3]);
    }
    if (lVar15 == 0) {
      return (long *)0x0;
    }
    plVar7 = (long *)(lVar15 + (int)param_1[2]);
    *(undefined4 *)((long)plVar7 + 0x14) = 0;
    *plVar7 = lVar15;
    plVar7[1] = (long)(plVar7 + 7);
    plVar9 = plVar7 + 6;
  }
  else {
LAB_002375d4:
    plVar9 = plVar7 + 3;
    param_1[9] = *plVar9;
  }
  *plVar9 = 0;
  iVar10 = 1;
  piVar16 = (int *)param_1[1];
  iVar8 = *piVar16;
LAB_0023764c:
  puVar12 = (undefined8 *)plVar7[1];
  *piVar16 = iVar8 + iVar10;
  lVar15 = param_1[7];
  uVar3 = *(uint *)((long)param_1 + 0x3c);
  *(uint *)(plVar7 + 2) = param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = param_2 / uVar3;
  }
  *(int *)(param_1 + 7) = (int)lVar15 + 1;
  lVar15 = (ulong)(param_2 - uVar4 * uVar3) * 8;
  lVar11 = *(long *)(param_1[8] + lVar15);
  plVar7[4] = (long)param_1;
  plVar7[5] = 0;
  plVar7[3] = lVar11;
  uVar3 = *(uint *)((long)param_1 + 0x2c);
  *puVar12 = 0;
  *(long **)(param_1[8] + lVar15) = plVar7;
  if (uVar3 < param_2) {
    *(uint *)((long)param_1 + 0x2c) = param_2;
  }
  return plVar7;
}


// ===== 002378c8  FUN_002378c8 =====

void FUN_002378c8(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *__s;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(int *)(param_1 + 0x3c) << 1;
  if (uVar2 < 0x101) {
    uVar2 = 0x100;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (DAT_00317330 != (code *)0x0)) {
    (*DAT_00317330)();
  }
  __s = (void *)FUN_0022a6ac((ulong)uVar2 << 3);
  if (__s != (void *)0x0) {
    memset(__s,0,(ulong)uVar2 << 3);
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (DAT_00317338 != (code *)0x0)) {
    (*DAT_00317338)();
  }
  if (__s == (void *)0x0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x40) + uVar7 * 8);
      while (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0x18);
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = *(uint *)(lVar9 + 0x10) / uVar2;
        }
        lVar3 = (ulong)(*(uint *)(lVar9 + 0x10) - uVar4 * uVar2) * 8;
        *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)((long)__s + lVar3);
        *(long *)((long)__s + lVar3) = lVar9;
        lVar9 = lVar8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 != 0) {
    puVar6 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar5 = (*DAT_00313868)(lVar9);
      DAT_00316e60 = DAT_00316e60 - iVar5;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar9);
      if (DAT_00316f08 == 0) goto LAB_00237a24;
      puVar6 = &DAT_003138c0;
      lVar9 = DAT_00316f08;
    }
    (*(code *)*puVar6)(lVar9);
  }
LAB_00237a24:
  *(void **)(param_1 + 0x40) = __s;
  *(uint *)(param_1 + 0x3c) = uVar2;
  return;
}


// ===== 00237a40  FUN_00237a40 =====

long * FUN_00237a40(int param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 <= DAT_003172f4) {
    if (DAT_00317310 != 0) {
      (*DAT_003138b0)();
    }
    plVar3 = DAT_00317318;
    if (DAT_00317318 != (long *)0x0) {
      DAT_00317318 = (long *)*DAT_00317318;
      iVar2 = DAT_00317320 + -1;
      DAT_00317324 = (uint)(DAT_00317320 <= DAT_003172fc);
      if (DAT_00316ee8 < param_1) {
        DAT_00316ee8 = (long)param_1;
      }
      lVar4 = DAT_00316e68 + 1;
      bVar1 = DAT_00316eb8 <= DAT_00316e68;
      DAT_00316e68 = lVar4;
      DAT_00317320 = iVar2;
      if (bVar1) {
        DAT_00316eb8 = lVar4;
      }
    }
    if (DAT_00317310 != 0) {
      (*DAT_003138c0)();
    }
    if (plVar3 != (long *)0x0) {
      return plVar3;
    }
  }
  lVar4 = (long)param_1;
  plVar3 = (long *)FUN_0022a6ac(lVar4);
  if (plVar3 != (long *)0x0) {
    iVar2 = (*DAT_00313868)(plVar3);
    if (DAT_00317310 != 0) {
      (*DAT_003138b0)(DAT_00317310);
    }
    if (DAT_00316ee8 < lVar4) {
      DAT_00316ee8 = lVar4;
    }
    DAT_00316e70 = DAT_00316e70 + iVar2;
    if (DAT_00316ec0 < DAT_00316e70) {
      DAT_00316ec0 = DAT_00316e70;
    }
    if (DAT_00317310 != 0) {
      (*DAT_003138c0)();
    }
  }
  return plVar3;
}


// ===== 00237bb4  FUN_00237bb4 =====

void FUN_00237bb4(undefined8 param_1)

{
  FUN_0023d018(param_1,PTR_sqlite3_version_0030d4a0,0xffffffff,1,0);
  return;
}


// ===== 00237bcc  FUN_00237bcc =====

void FUN_00237bcc(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_3;
  if (lVar5 == 0) {
LAB_00237c40:
    lVar5 = 0;
  }
  else if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar5 + 0x16) == '\x01')) {
    lVar5 = *(long *)(lVar5 + 8);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_00237c40;
    lVar5 = FUN_0022ae18(lVar5,1);
  }
  local_40 = 0;
  lVar3 = *(long *)(*param_1 + 0x18);
  if ((*(byte *)(lVar3 + 0x32) >> 1 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0023c180(*param_1,"not authorized",0xffffffffffffffff,1,0xffffffffffffffff);
      return;
    }
    goto LAB_00237de0;
  }
  if ((param_2 == 2) && (lVar6 = param_3[1], lVar6 != 0)) {
    if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + 0x16) == '\x01')
       ) {
      uVar4 = *(undefined8 *)(lVar6 + 8);
    }
    else {
      if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_00237d00;
      uVar4 = FUN_0022ae18(lVar6,1);
    }
  }
  else {
LAB_00237d00:
    uVar4 = 0;
  }
  if ((lVar5 != 0) && (iVar2 = sqlite3_load_extension(lVar3,lVar5,uVar4,&local_40), iVar2 != 0)) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_0023c180(*param_1,local_40,0xffffffffffffffff,1,0xffffffffffffffff);
    lVar5 = local_40;
    if (local_40 != 0) {
      puVar7 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar2 = (*DAT_00313868)(lVar5);
        DAT_00316e60 = DAT_00316e60 - iVar2;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar5);
        if (DAT_00316f08 == 0) goto LAB_00237dbc;
        puVar7 = &DAT_003138c0;
        lVar5 = DAT_00316f08;
      }
      (*(code *)*puVar7)(lVar5);
    }
  }
LAB_00237dbc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00237de0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00237de4  FUN_00237de4 =====

void FUN_00237de4(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  lVar3 = *param_3;
  if (lVar3 != 0) {
    if ((((*(ushort *)(lVar3 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar3 + 0x16) == '\x01')
       ) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    else {
      if ((*(ushort *)(lVar3 + 0x14) & 1) != 0) {
        return;
      }
      lVar3 = FUN_0022ae18(lVar3,1);
    }
    if (lVar3 != 0) {
      uVar1 = sqlite3_compileoption_used();
      puVar2 = (ulong *)*param_1;
      if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) {
        FUN_0023c114();
        return;
      }
      *puVar2 = uVar1 & 0xffffffff;
      *(undefined2 *)((long)puVar2 + 0x14) = 4;
    }
  }
  return;
}


// ===== 00237e7c  FUN_00237e7c =====

void FUN_00237e7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_3;
  uVar1 = (ushort)puVar4[5];
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = FUN_0022ad28(*(undefined8 *)puVar4);
      goto joined_r0x00237eec;
    }
    if (((uVar1 & 0x12) != 0) && (*(long *)(puVar4 + 2) != 0)) {
      uVar2 = FUN_0022ad58(puVar4);
      goto joined_r0x00237eec;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar4;
joined_r0x00237eec:
    if (0x23 < uVar2) {
      puVar3 = (undefined *)0x0;
      goto LAB_00237f08;
    }
  }
  puVar3 = (&PTR_s_ATOMIC_INTRINSICS_1_0030d0d0)[uVar2];
LAB_00237f08:
  FUN_0023d018(param_1,puVar3,0xffffffff,1,0);
  return;
}


// ===== 00237f20  FUN_00237f20 =====

void FUN_00237f20(long *param_1,int param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  void *__s1;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  ulong uVar19;
  uint uVar20;
  
  lVar9 = *param_3;
  uVar2 = *(ushort *)(lVar9 + 0x14);
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
    return;
  }
  if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar9 + 0x16) == '\x01')) {
    __s1 = *(void **)(lVar9 + 8);
  }
  else {
    if ((uVar2 & 1) != 0) {
      return;
    }
    __s1 = (void *)FUN_0022ae18(lVar9,1);
  }
  if (__s1 == (void *)0x0) {
    return;
  }
  piVar6 = (int *)*param_3;
  uVar2 = *(ushort *)(piVar6 + 5);
  if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar6 + 0x16) != '\x01')) {
    if ((uVar2 >> 4 & 1) != 0) {
      uVar4 = piVar6[4];
      if ((uVar2 >> 10 & 1) != 0) {
        uVar4 = *piVar6 + uVar4;
      }
      goto joined_r0x00238010;
    }
    if ((uVar2 & 1) == 0) {
      uVar4 = FUN_0023c158(piVar6,1);
      goto joined_r0x00238010;
    }
    uVar4 = 0;
    if (param_2 == 1) goto LAB_00238030;
LAB_00237fc4:
    lVar9 = param_3[1];
    if (lVar9 == 0) {
      return;
    }
    if ((((*(ushort *)(lVar9 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar9 + 0x16) == '\x01')
       ) {
      pbVar7 = *(byte **)(lVar9 + 8);
    }
    else {
      if ((*(ushort *)(lVar9 + 0x14) & 1) != 0) {
        return;
      }
      pbVar7 = (byte *)FUN_0022ae18(lVar9,1);
    }
    if (pbVar7 == (byte *)0x0) {
      return;
    }
    bVar12 = *pbVar7;
    if (bVar12 == 0) goto LAB_002382fc;
    uVar17 = 0;
    pbVar11 = pbVar7;
    do {
      if (bVar12 < 0xc0) {
        pbVar11 = pbVar11 + 1;
        bVar12 = *pbVar11;
      }
      else {
        do {
          pbVar11 = pbVar11 + 1;
          bVar12 = *pbVar11;
        } while ((bVar12 & 0xc0) == 0x80);
      }
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (bVar12 != 0);
    lVar9 = uVar17 * 0xc;
    lVar14 = (long)*(int *)(*(long *)(*param_1 + 0x18) + 0x88);
    if (lVar9 - lVar14 != 0 && lVar14 <= lVar9) {
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
      return;
    }
    ppuVar8 = (undefined **)FUN_0022a6ac(lVar9);
    if (ppuVar8 == (undefined **)0x0) {
      sqlite3_result_error_nomem(param_1);
      return;
    }
    if (*pbVar7 == 0) goto LAB_002382fc;
    ppuVar18 = ppuVar8 + uVar17;
    uVar17 = 0;
    do {
      ppuVar8[uVar17] = pbVar7;
      pbVar13 = pbVar7 + 1;
      pbVar11 = pbVar7;
      if (0xbf < *pbVar7) {
        do {
          pbVar13 = pbVar11 + 1;
          pbVar11 = pbVar13;
        } while ((*pbVar13 & 0xc0) == 0x80);
      }
      *(int *)((long)ppuVar18 + uVar17 * 4) = (int)pbVar13 - (int)pbVar7;
      uVar17 = uVar17 + 1;
      pbVar7 = pbVar13;
    } while (*pbVar13 != 0);
    if ((int)uVar17 == 0) goto LAB_002382fc;
  }
  else {
    uVar4 = piVar6[4];
joined_r0x00238010:
    if (param_2 != 1) goto LAB_00237fc4;
LAB_00238030:
    ppuVar18 = (undefined **)&DAT_0017dae4;
    ppuVar8 = &PTR_DAT_0030cec0;
    uVar17 = 1;
  }
  uVar20 = *(uint *)(param_1[1] + 8);
  if (((uVar20 & 1) == 0) || (uVar4 == 0)) {
LAB_002380c0:
    if (((uVar20 >> 1 & 1) != 0) && (uVar4 != 0)) {
      uVar20 = (uint)uVar17;
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      ppuVar15 = ppuVar18;
      ppuVar16 = ppuVar8;
      uVar17 = (ulong)uVar20;
      do {
        while( true ) {
          uVar3 = *(uint *)ppuVar15;
          if (uVar3 <= uVar4) break;
LAB_002380dc:
          uVar17 = uVar17 - 1;
          ppuVar15 = (undefined **)((long)ppuVar15 + 4);
          ppuVar16 = ppuVar16 + 1;
          if (uVar17 == 0) goto LAB_00238120;
        }
        uVar1 = uVar4 - uVar3;
        iVar5 = memcmp((void *)((long)__s1 + (ulong)uVar1),*ppuVar16,(ulong)uVar3);
        if (iVar5 != 0) goto LAB_002380dc;
        ppuVar15 = ppuVar18;
        ppuVar16 = ppuVar8;
        uVar17 = (ulong)uVar20;
        uVar4 = uVar1;
      } while (uVar1 != 0);
      uVar4 = 0;
    }
  }
  else {
    ppuVar15 = ppuVar8;
    ppuVar16 = ppuVar18;
    uVar19 = uVar17 & 0xffffffff;
    uVar3 = uVar4;
    do {
      while( true ) {
        uVar4 = uVar3;
        uVar1 = *(uint *)ppuVar16;
        if ((uVar1 <= uVar4) && (iVar5 = memcmp(__s1,*ppuVar15,(ulong)uVar1), iVar5 == 0)) break;
        uVar19 = uVar19 - 1;
        ppuVar15 = ppuVar15 + 1;
        ppuVar16 = (undefined **)((long)ppuVar16 + 4);
        uVar3 = uVar4;
        if (uVar19 == 0) goto LAB_002380c0;
      }
      uVar3 = uVar4 - uVar1;
      __s1 = (void *)((long)__s1 + (ulong)uVar1);
      uVar4 = 0;
      ppuVar15 = ppuVar8;
      ppuVar16 = ppuVar18;
      uVar19 = uVar17 & 0xffffffff;
    } while (uVar3 != 0);
  }
LAB_00238120:
  if (param_2 != 1) {
    puVar10 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (undefined **)0x0) {
        (*DAT_003138b0)();
      }
      iVar5 = (*DAT_00313868)(ppuVar8);
      DAT_00316e60 = DAT_00316e60 - iVar5;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(ppuVar8);
      if (DAT_00316f08 == (undefined **)0x0) goto LAB_002382fc;
      puVar10 = &DAT_003138c0;
      ppuVar8 = DAT_00316f08;
    }
    (*(code *)*puVar10)(ppuVar8);
  }
LAB_002382fc:
  FUN_0023d018(param_1,__s1,uVar4,1,0xffffffffffffffff);
  return;
}


// ===== 00238354  FUN_00238354 =====

void FUN_00238354(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  
  lVar2 = *param_3;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 8);
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)(lVar2 + 0x14) & 0x3f) & 1) != 0) {
    return;
  }
  if (1 < (int)param_2) {
    iVar5 = 0;
    uVar6 = 1;
    uVar4 = *(undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x18) + 0x88) + (long)*(int *)(param_1 + 0x20) * 0x18 +
             -8);
    do {
      if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)(param_3[uVar6] + 0x14) & 0x3f) & 1) != 0) {
        return;
      }
      uVar1 = FUN_0023d3c8(param_3[iVar5],param_3[uVar6],uVar4);
      if (-1 < (int)(uVar1 ^ -(uint)(lVar3 != 0))) {
        iVar5 = (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    lVar2 = param_3[iVar5];
  }
  sqlite3_result_value(param_1,lVar2);
  return;
}


// ===== 00238438  FUN_00238438 =====

void FUN_00238438(long *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)*param_3;
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar4 = *(undefined8 **)(param_1[2] + 8);
  }
  else {
    puVar4 = (undefined8 *)FUN_0023ce88(param_1,0x38);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)((long)puVar6 + 0x14) & 0x3f) & 1) == 0) {
    if (*(short *)((long)puVar4 + 0x14) == 0) {
      puVar4[3] = *(undefined8 *)(*param_1 + 0x18);
    }
    else {
      lVar7 = *(long *)(param_1[1] + 8);
      iVar3 = FUN_0023d3c8(puVar4,puVar6,
                           *(undefined8 *)
                            (*(long *)(param_1[3] + 0x88) + (long)(int)param_1[4] * 0x18 + -8));
      bVar2 = iVar3 < 1;
      if (lVar7 != 0) {
        bVar2 = -1 < iVar3;
      }
      if (bVar2) goto LAB_00238500;
      if ((*(ushort *)((long)puVar4 + 0x14) & 0x9000) != 0) {
        FUN_0022c2ec(puVar4);
      }
    }
    uVar5 = puVar6[2];
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    puVar4[2] = uVar5;
    puVar4[1] = uVar9;
    *puVar4 = uVar8;
    uVar1 = (ushort)(uVar5 >> 0x20) & 0xefff;
    *(ushort *)((long)puVar4 + 0x14) = uVar1;
    if (((uVar5 & 0x1200000000) != 0) && ((*(ushort *)((long)puVar6 + 0x14) >> 0xd & 1) == 0)) {
      *(ushort *)((long)puVar4 + 0x14) = uVar1 | 0x4000;
      FUN_0023cdc0(puVar4);
      return;
    }
  }
  else {
    if (*(short *)((long)puVar4 + 0x14) == 0) {
      return;
    }
LAB_00238500:
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
  }
  return;
}


// ===== 0023857c  FUN_0023857c =====

void FUN_0023857c(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0);
  }
  if ((lVar1 != 0) &&
     (((*(short *)(lVar1 + 0x14) != 0 &&
       (sqlite3_result_value(param_1,lVar1), (*(ushort *)(lVar1 + 0x14) & 0x9000) != 0)) ||
      (*(int *)(lVar1 + 0x20) != 0)))) {
    FUN_0022c29c(lVar1);
    return;
  }
  return;
}


// ===== 00238600  FUN_00238600 =====

void FUN_00238600(long param_1)

{
  long lVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0);
  }
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x14) != 0)) {
    sqlite3_result_value(param_1);
    return;
  }
  return;
}


// ===== 00238660  FUN_00238660 =====

void FUN_00238660(undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_0023d018(param_1,(&PTR_DAT_0030cec0)
                       [(byte)(&DAT_0017d33a)[(ulong)*(ushort *)(*param_3 + 0x14) & 0x3f]],
               0xffffffff,1,0);
  return;
}


// ===== 00238698  FUN_00238698 =====

void FUN_00238698(long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((*(ushort *)(*param_3 + 0x14) >> 0xb & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(byte *)(*param_3 + 0x17);
  }
  puVar1 = (ulong *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar1 = uVar2;
  *(undefined2 *)((long)puVar1 + 0x14) = 4;
  return;
}


// ===== 002386d8  FUN_002386d8 =====

void FUN_002386d8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined2 uVar7;
  int *piVar8;
  byte *pbVar9;
  
  piVar8 = (int *)*param_3;
  uVar4 = *(ushort *)(piVar8 + 5);
  bVar3 = (&DAT_0017d33a)[(ulong)uVar4 & 0x3f];
  if (bVar3 - 1 < 2) {
LAB_00238718:
    if (((uVar4 >> 1 & 1) == 0) || (*(char *)((long)piVar8 + 0x16) != '\x01')) {
      if ((uVar4 >> 4 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          iVar6 = FUN_0023c158(piVar8,1);
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = piVar8[4];
        if ((uVar4 >> 10 & 1) != 0) {
          iVar6 = *piVar8 + iVar6;
        }
      }
    }
    else {
      iVar6 = piVar8[4];
    }
    param_1 = (long *)*param_1;
    uVar4 = *(ushort *)((long)param_1 + 0x14);
  }
  else {
    if (bVar3 != 3) {
      if (bVar3 != 4) {
        param_1 = (long *)*param_1;
        if ((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) {
          FUN_0022c2ec();
          return;
        }
        uVar7 = 1;
        goto LAB_00238870;
      }
      goto LAB_00238718;
    }
    if ((((uVar4 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar8 + 0x16) == '\x01')) {
      pbVar9 = *(byte **)(piVar8 + 2);
    }
    else {
      if ((uVar4 & 1) != 0) {
        return;
      }
      pbVar9 = (byte *)FUN_0022ae18(piVar8,1);
    }
    if (pbVar9 == (byte *)0x0) {
      return;
    }
    bVar3 = *pbVar9;
    pbVar1 = pbVar9;
    while (bVar3 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar2 = *pbVar9;
      bVar5 = 0xbf < bVar3;
      bVar3 = bVar2;
      if (bVar5) {
        while (bVar3 = bVar2, (bVar2 & 0xc0) == 0x80) {
          pbVar9 = pbVar9 + 1;
          pbVar1 = pbVar1 + 1;
          bVar2 = *pbVar9;
        }
      }
    }
    param_1 = (long *)*param_1;
    iVar6 = (int)pbVar9 - (int)pbVar1;
    uVar4 = *(ushort *)((long)param_1 + 0x14);
  }
  if ((uVar4 & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *param_1 = (long)iVar6;
  uVar7 = 4;
LAB_00238870:
  *(undefined2 *)((long)param_1 + 0x14) = uVar7;
  return;
}


// ===== 00238880  FUN_00238880 =====

void FUN_00238880(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *__s1;
  byte *__s2;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  
  piVar12 = (int *)*param_3;
  piVar14 = (int *)param_3[1];
  uVar2 = *(ushort *)(piVar12 + 5);
  uVar3 = *(ushort *)(piVar14 + 5);
  uVar13 = (ulong)uVar3;
  if ((((uint)(0xaaaaaaaaaaaaaaaa >> ((ulong)uVar2 & 0x3f)) |
       (uint)(0xaaaaaaaaaaaaaaaa >> (uVar13 & 0x3f))) & 1) != 0) {
    return;
  }
  if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar12 + 0x16) != '\x01')) {
    if ((uVar2 >> 4 & 1) == 0) {
      if ((uVar2 & 1) != 0) {
        iVar8 = 0;
        goto joined_r0x002388d8;
      }
      iVar8 = FUN_0023c158(piVar12,1);
      piVar14 = (int *)param_3[1];
      uVar3 = *(ushort *)(piVar14 + 5);
    }
    else {
      iVar8 = piVar12[4];
      if ((uVar2 >> 10 & 1) != 0) {
        iVar8 = *piVar12 + iVar8;
      }
    }
    uVar9 = (uint)uVar3;
    if ((uVar3 >> 1 & 1) != 0) goto LAB_00238944;
LAB_00238958:
    if ((uVar9 >> 4 & 1) != 0) {
      iVar4 = piVar14[4];
      if ((uVar9 >> 10 & 1) != 0) {
        iVar4 = *piVar14 + iVar4;
      }
      goto LAB_0023898c;
    }
    if ((uVar9 & 1) == 0) {
      iVar4 = FUN_0023c158(piVar14,1);
      goto LAB_0023898c;
    }
LAB_002389f8:
    piVar12 = (int *)0x0;
    piVar14 = (int *)0x0;
    uVar13 = 1;
  }
  else {
    iVar8 = piVar12[4];
joined_r0x002388d8:
    uVar9 = (uint)uVar3;
    if ((uVar3 >> 1 & 1) == 0) goto LAB_00238958;
LAB_00238944:
    uVar9 = (uint)uVar3;
    if (*(char *)((long)piVar14 + 0x16) != '\x01') goto LAB_00238958;
    iVar4 = piVar14[4];
LAB_0023898c:
    if (iVar4 < 1) goto LAB_002389f8;
    uVar10 = (ulong)uVar2 & 0x3f;
    uVar13 = uVar13 & 0x3f;
    uVar9 = (uint)(0x1000000010001 >> uVar10) & (uint)(0x1000000010001 >> uVar13);
    if ((uVar9 & 1) == 0) {
      lVar7 = *param_3;
      if (((0xfffefffffffefffeU >> uVar10 & 1) != 0) && ((0xfffefffffffefffeU >> uVar13 & 1) != 0))
      {
        if (lVar7 == 0) {
LAB_00238b0c:
          __s1 = (byte *)0x0;
          lVar7 = param_3[1];
        }
        else if ((((*(ushort *)(lVar7 + 0x14) ^ 0xffff) & 0x202) == 0) &&
                (*(char *)(lVar7 + 0x16) == '\x01')) {
          __s1 = *(byte **)(lVar7 + 8);
          lVar7 = param_3[1];
        }
        else {
          if ((*(ushort *)(lVar7 + 0x14) & 1) != 0) goto LAB_00238b0c;
          __s1 = (byte *)FUN_0022ae18(lVar7,1);
          lVar7 = param_3[1];
        }
        if (lVar7 != 0) {
          if ((((*(ushort *)(lVar7 + 0x14) ^ 0xffff) & 0x202) == 0) &&
             (*(char *)(lVar7 + 0x16) == '\x01')) {
            __s2 = *(byte **)(lVar7 + 8);
            if (__s2 != (byte *)0x0) goto LAB_002389d8;
          }
          else if ((*(ushort *)(lVar7 + 0x14) & 1) == 0) {
            __s2 = (byte *)FUN_0022ae18(lVar7,1);
            goto joined_r0x00238b50;
          }
        }
        goto LAB_00238b54;
      }
      piVar12 = (int *)sqlite3_value_dup();
      if (piVar12 == (int *)0x0) {
LAB_00238b58:
        piVar14 = (int *)0x0;
      }
      else {
        if ((((*(ushort *)(piVar12 + 5) ^ 0xffff) & 0x202) == 0) &&
           (*(char *)((long)piVar12 + 0x16) == '\x01')) {
          __s1 = *(byte **)(piVar12 + 2);
        }
        else {
          if ((*(ushort *)(piVar12 + 5) & 1) != 0) goto LAB_00238b58;
          __s1 = (byte *)FUN_0022ae18(piVar12,1);
        }
        if (__s1 == (byte *)0x0) goto LAB_00238b58;
        uVar2 = *(ushort *)(piVar12 + 5);
        if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar12 + 0x16) != '\x01')) {
          if ((uVar2 >> 4 & 1) == 0) {
            if ((uVar2 & 1) == 0) {
              iVar8 = FUN_0023c158(piVar12,1);
            }
            else {
              iVar8 = 0;
            }
          }
          else {
            iVar8 = piVar12[4];
            if ((uVar2 >> 10 & 1) != 0) {
              iVar8 = *piVar12 + iVar8;
            }
          }
        }
        else {
          iVar8 = piVar12[4];
        }
        piVar14 = (int *)sqlite3_value_dup(param_3[1]);
        if (piVar14 != (int *)0x0) {
          if ((((*(ushort *)(piVar14 + 5) ^ 0xffff) & 0x202) == 0) &&
             (*(char *)((long)piVar14 + 0x16) == '\x01')) {
            __s2 = *(byte **)(piVar14 + 2);
          }
          else {
            if ((*(ushort *)(piVar14 + 5) & 1) != 0) goto LAB_00238b5c;
            __s2 = (byte *)FUN_0022ae18(piVar14,1);
          }
          if (__s2 != (byte *)0x0) {
            uVar2 = *(ushort *)(piVar14 + 5);
            if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar14 + 0x16) != '\x01')) {
              if ((uVar2 >> 4 & 1) == 0) {
                if ((uVar2 & 1) == 0) {
                  iVar4 = FUN_0023c158(piVar14,1);
                }
                else {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = piVar14[4];
                if ((uVar2 >> 10 & 1) != 0) {
                  iVar4 = *piVar14 + iVar4;
                }
              }
            }
            else {
              iVar4 = piVar14[4];
            }
            goto LAB_002389e8;
          }
        }
      }
LAB_00238b5c:
      sqlite3_result_error_nomem(param_1);
      goto LAB_00238b64;
    }
    __s1 = (byte *)sqlite3_value_blob(*param_3);
    __s2 = (byte *)sqlite3_value_blob(param_3[1]);
joined_r0x00238b50:
    if (__s2 == (byte *)0x0) {
LAB_00238b54:
      piVar12 = (int *)0x0;
      goto LAB_00238b58;
    }
LAB_002389d8:
    piVar12 = (int *)0x0;
    piVar14 = (int *)0x0;
    if ((iVar8 != 0) && (__s1 == (byte *)0x0)) goto LAB_00238b5c;
LAB_002389e8:
    if (iVar8 < iVar4) {
      uVar13 = 0;
    }
    else {
      bVar1 = *__s2;
      uVar15 = 1;
      do {
        if ((*__s1 == bVar1) && (iVar5 = memcmp(__s1,__s2,(long)iVar4), iVar5 == 0))
        goto LAB_00238c78;
        uVar15 = uVar15 + 1;
        iVar5 = iVar8 + 1;
        do {
          iVar11 = iVar5;
          __s1 = __s1 + 1;
          iVar5 = iVar8;
          if ((uVar9 & 1) != 0) break;
          iVar5 = iVar11 + -1;
        } while ((*__s1 & 0xc0) == 0x80);
        iVar8 = iVar11 + -2;
      } while (iVar4 < iVar5);
      uVar15 = 0;
LAB_00238c78:
      uVar13 = (ulong)uVar15;
    }
  }
  puVar6 = (ulong *)*param_1;
  if ((*(ushort *)((long)puVar6 + 0x14) & 0x9000) == 0) {
    *puVar6 = uVar13;
    *(undefined2 *)((long)puVar6 + 0x14) = 4;
  }
  else {
    FUN_0023c114();
  }
LAB_00238b64:
  if (piVar12 != (int *)0x0) {
    if (((*(ushort *)(piVar12 + 5) & 0x9000) != 0) || (piVar12[8] != 0)) {
      FUN_0022c29c(piVar12);
    }
    FUN_0022a888(*(undefined8 *)(piVar12 + 6),piVar12);
  }
  if (piVar14 == (int *)0x0) {
    return;
  }
  if (((*(ushort *)(piVar14 + 5) & 0x9000) != 0) || (piVar14[8] != 0)) {
    FUN_0022c29c(piVar14);
  }
  FUN_0022a888(*(undefined8 *)(piVar14 + 6),piVar14);
  return;
}


// ===== 00238d58  FUN_00238d58 =====

void FUN_00238d58(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_78;
  long local_70;
  undefined4 local_68;
  int local_64;
  uint local_60;
  undefined2 local_5c;
  int local_58;
  undefined4 uStack_54;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((0 < param_2) && (lVar2 = *param_3, lVar2 != 0)) {
    lVar4 = *(long *)(*param_1 + 0x18);
    if ((((*(ushort *)(lVar2 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar2 + 0x16) == '\x01')
       ) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    else {
      if ((*(ushort *)(lVar2 + 0x14) & 1) != 0) goto LAB_00238e64;
      lVar2 = FUN_0022ae18(lVar2,1);
    }
    if (lVar2 != 0) {
      local_50 = param_3 + 1;
      local_64 = *(int *)(lVar4 + 0x88);
      uStack_54 = 0;
      local_68 = 0;
      local_70 = 0;
      local_60 = 0;
      local_5c = 0x200;
      local_78 = lVar4;
      local_58 = param_2 + -1;
      sqlite3_str_appendf(&local_78,lVar2,&local_58);
      uVar3 = (ulong)local_60;
      lVar2 = local_70;
      if (((local_70 != 0) && (*(undefined1 *)(local_70 + uVar3) = 0, local_64 != 0)) &&
         ((local_5c._1_1_ >> 2 & 1) == 0)) {
        lVar2 = FUN_0022a544(&local_78);
      }
      FUN_0023d018(param_1,lVar2,uVar3,1,FUN_0023cd80);
    }
  }
LAB_00238e64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00238e90  FUN_00238e90 =====

void FUN_00238e90(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    if ((((*(ushort *)(lVar2 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar2 + 0x16) == '\x01')
       ) {
      pbVar3 = *(byte **)(lVar2 + 8);
    }
    else {
      if ((*(ushort *)(lVar2 + 0x14) & 1) != 0) {
        return;
      }
      pbVar3 = (byte *)FUN_0022ae18(lVar2,1);
    }
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      if (bVar1 != 0) {
        uVar5 = (uint)bVar1;
        if (0xbf < bVar1) {
          uVar5 = (uint)pbVar3[1];
          uVar4 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
          if ((pbVar3[1] & 0xc0) == 0x80) {
            pbVar3 = pbVar3 + 2;
            do {
              uVar4 = uVar5 & 0x3f | uVar4 << 6;
              uVar5 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while ((uVar5 & 0xc0) == 0x80);
          }
          uVar5 = 0xfffd;
          if ((0x7f < uVar4 && uVar4 >> 1 != 0x7fff) && uVar4 >> 0xb != 0x1b) {
            uVar5 = uVar4;
          }
        }
        param_1 = (long *)*param_1;
        if ((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) {
          FUN_0023c114();
          return;
        }
        *param_1 = (long)(int)uVar5;
        *(undefined2 *)((long)param_1 + 0x14) = 4;
      }
    }
  }
  return;
}


// ===== 00238f94  FUN_00238f94 =====

void FUN_00238f94(undefined8 *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  iVar3 = sqlite3_initialize();
  if ((iVar3 != 0) ||
     (pbVar5 = (byte *)FUN_0022a6ac((long)(int)(param_2 << 2 | 1)), pbVar5 == (byte *)0x0)) {
    sqlite3_result_error_nomem(param_1);
    return;
  }
  pbVar11 = pbVar5;
  if (0 < (int)param_2) {
    uVar10 = (ulong)param_2;
    pbVar12 = pbVar5;
    do {
      puVar6 = (ulong *)*param_3;
      uVar2 = *(ushort *)((long)puVar6 + 0x14);
      if ((uVar2 & 0x24) == 0) {
        if ((uVar2 >> 3 & 1) != 0) {
          uVar7 = FUN_0022ad28(*puVar6);
          goto LAB_00239060;
        }
        if ((uVar2 & 0x12) == 0) {
          pbVar11 = pbVar12 + 1;
          *pbVar12 = 0;
          goto LAB_00239018;
        }
        uVar8 = puVar6[1];
        if (uVar8 != 0) {
          uVar7 = FUN_0022ad58();
          goto LAB_00239060;
        }
LAB_00239014:
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar8;
      }
      else {
        uVar7 = *puVar6;
LAB_00239060:
        if (uVar7 >> 0x10 < 0x11) {
          uVar4 = (uint)uVar7;
          uVar1 = uVar4 & 0x1fffff;
          uVar8 = (ulong)uVar1;
          if (uVar1 < 0x80) goto LAB_00239014;
          if (uVar1 < 0x800) {
            *pbVar12 = (byte)(uVar7 >> 6) | 0xc0;
            pbVar11 = pbVar12 + 2;
            pbVar12[1] = (byte)uVar7 & 0x3f | 0x80;
          }
          else {
            if (uVar1 >> 0x10 == 0) goto LAB_00239070;
            *pbVar12 = (byte)(uVar7 >> 0x12) | 0xf0;
            pbVar11 = pbVar12 + 4;
            pbVar12[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
            pbVar12[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            pbVar12[3] = (byte)uVar7 & 0x3f | 0x80;
          }
        }
        else {
          uVar8 = 0xfffd;
LAB_00239070:
          pbVar11 = pbVar12 + 3;
          *pbVar12 = (byte)(uVar8 >> 0xc) | 0xe0;
          pbVar12[1] = (byte)((uint)uVar8 >> 6) & 0x3f | 0x80;
          pbVar12[2] = (byte)uVar8 & 0x3f | 0x80;
        }
      }
LAB_00239018:
      uVar10 = uVar10 - 1;
      param_3 = param_3 + 1;
      pbVar12 = pbVar11;
    } while (uVar10 != 0);
  }
  if ((ulong)((long)pbVar11 - (long)pbVar5) >> 0x1f == 0) {
    FUN_0023d018(param_1,pbVar5,(long)pbVar11 - (long)pbVar5,1,PTR_sqlite3_free_0030d498);
    return;
  }
  if (PTR_sqlite3_free_0030d498 != (undefined *)0xffffffffffffffff) {
    puVar9 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (byte *)0x0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(pbVar5);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(pbVar5);
      if (DAT_00316f08 == (byte *)0x0) goto LAB_002391bc;
      puVar9 = &DAT_003138c0;
      pbVar5 = DAT_00316f08;
    }
    (*(code *)*puVar9)(pbVar5);
  }
LAB_002391bc:
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
  return;
}


// ===== 00239220  FUN_00239220 =====

void FUN_00239220(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  double dVar2;
  undefined2 uVar3;
  double *pdVar4;
  double dVar5;
  
  pdVar4 = (double *)*param_3;
  uVar1 = *(ushort *)((long)pdVar4 + 0x14);
  if ((&DAT_0017d33a)[(ulong)uVar1 & 0x3f] == '\x05') {
    pdVar4 = (double *)*param_1;
    if ((*(ushort *)((long)pdVar4 + 0x14) & 0x9000) != 0) {
      FUN_0022c2ec();
      return;
    }
    uVar3 = 1;
    goto LAB_002393f4;
  }
  if ((&DAT_0017d33a)[(ulong)uVar1 & 0x3f] != '\x01') {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 & 0x12) == 0) {
          dVar2 = 0.0;
        }
        else {
          dVar2 = (double)FUN_0022adb8(pdVar4);
        }
      }
      else {
        dVar2 = (double)(long)*pdVar4;
      }
    }
    else {
      dVar2 = *pdVar4;
    }
    pdVar4 = (double *)*param_1;
    dVar5 = -dVar2;
    if (0.0 <= dVar2) {
      dVar5 = dVar2;
    }
    if ((*(ushort *)((long)pdVar4 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)pdVar4 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec(pdVar4);
    }
    if (((((ulong)dVar5 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) &&
       (((ulong)dVar5 & 0xfffffffffffff) != 0)) {
      return;
    }
    *pdVar4 = dVar5;
    *(undefined2 *)((long)pdVar4 + 0x14) = 8;
    return;
  }
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      dVar2 = (double)FUN_0022ad28(*pdVar4);
      goto joined_r0x00239354;
    }
    if (((uVar1 & 0x12) != 0) && (pdVar4[1] != 0.0)) {
      dVar2 = (double)FUN_0022ad58(pdVar4);
      goto joined_r0x00239354;
    }
    dVar2 = 0.0;
  }
  else {
    dVar2 = *pdVar4;
joined_r0x00239354:
    if ((long)dVar2 < 0) {
      if (dVar2 == -0.0) {
        *(undefined4 *)((long)param_1 + 0x24) = 1;
        FUN_0023c180(*param_1,"integer overflow",0xffffffffffffffff,1,0xffffffffffffffff);
        return;
      }
      dVar2 = (double)-(long)dVar2;
    }
  }
  pdVar4 = (double *)*param_1;
  if ((*(ushort *)((long)pdVar4 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  uVar3 = 4;
  *pdVar4 = dVar2;
LAB_002393f4:
  *(undefined2 *)((long)pdVar4 + 0x14) = uVar3;
  return;
}


// ===== 00239410  FUN_00239410 =====

void FUN_00239410(long *param_1,int param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double dVar8;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 == 2) {
    puVar6 = (undefined8 *)param_3[1];
    uVar1 = *(ushort *)((long)puVar6 + 0x14);
    if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if (((uVar1 & 0x12) == 0) || (puVar6[1] == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0022ad58(puVar6);
          }
        }
        else {
          uVar3 = FUN_0022ad28(*puVar6);
        }
      }
      else {
        uVar3 = (uint)*puVar6;
      }
      if (0x1d < (int)uVar3) {
        uVar3 = 0x1e;
      }
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      goto LAB_002394d0;
    }
  }
  else {
    uVar3 = 0;
LAB_002394d0:
    pdVar7 = (double *)*param_3;
    uVar1 = *(ushort *)((long)pdVar7 + 0x14);
    if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 & 0x24) == 0) {
          if ((uVar1 & 0x12) == 0) {
            local_50 = 0.0;
          }
          else {
            local_50 = (double)FUN_0022adb8(pdVar7);
          }
        }
        else {
          local_50 = (double)(long)*pdVar7;
        }
      }
      else {
        local_50 = *pdVar7;
      }
      if ((-4503599627370496.0 <= local_50) &&
         (local_50 == 4503599627370496.0 || local_50 < 4503599627370496.0 != NAN(local_50))) {
        if (uVar3 == 0) {
          dVar8 = -0.5;
          if (0.0 <= local_50) {
            dVar8 = 0.5;
          }
          local_50 = (double)(long)(local_50 + dVar8);
        }
        else {
          __s = (char *)sqlite3_mprintf(&DAT_0016f287,uVar3);
          if (__s == (char *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_48) {
              sqlite3_result_error_nomem(param_1);
              return;
            }
            goto LAB_002396e0;
          }
          sVar5 = strlen(__s);
          FUN_0022c3dc(__s,&local_50,(uint)sVar5 & 0x3fffffff,1);
          puVar6 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != (char *)0x0) {
              (*DAT_003138b0)();
            }
            iVar4 = (*DAT_00313868)(__s);
            DAT_00316e60 = DAT_00316e60 - iVar4;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(__s);
            if (DAT_00316f08 == (char *)0x0) goto LAB_0023962c;
            puVar6 = &DAT_003138c0;
            __s = DAT_00316f08;
          }
          (*(code *)*puVar6)(__s);
        }
      }
LAB_0023962c:
      dVar8 = local_50;
      pdVar7 = (double *)*param_1;
      if ((*(ushort *)((long)pdVar7 + 0x14) & 0x9000) == 0) {
        *(undefined2 *)((long)pdVar7 + 0x14) = 1;
      }
      else {
        FUN_0022c2ec(pdVar7);
      }
      if (((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
         (((ulong)dVar8 & 0xfffffffffffff) == 0)) {
        *pdVar7 = dVar8;
        *(undefined2 *)((long)pdVar7 + 0x14) = 8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_002396e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002396e4  FUN_002396e4 =====

void FUN_002396e4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  piVar4 = (int *)*param_3;
  uVar1 = *(ushort *)(piVar4 + 5);
  if ((((uVar1 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar4 + 0x16) == '\x01')) {
    pbVar7 = *(byte **)(piVar4 + 2);
  }
  else if ((uVar1 & 1) == 0) {
    pbVar7 = (byte *)FUN_0022ae18(piVar4,1);
    piVar4 = (int *)*param_3;
    uVar1 = *(ushort *)(piVar4 + 5);
  }
  else {
    pbVar7 = (byte *)0x0;
  }
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) != '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar2 = FUN_0023c158(piVar4,1);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        uVar2 = *piVar4 + uVar2;
      }
    }
  }
  else {
    uVar2 = piVar4[4];
  }
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  if (*(int *)(*(long *)(*param_1 + 0x18) + 0x88) <= (int)uVar2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  pbVar3 = (byte *)FUN_0022a6ac((long)(int)uVar2 + 1);
  if (pbVar3 == (byte *)0x0) {
    sqlite3_result_error_nomem(param_1);
    return;
  }
  if (0 < (int)uVar2) {
    uVar5 = (ulong)uVar2;
    pbVar6 = pbVar3;
    do {
      uVar5 = uVar5 - 1;
      *pbVar6 = *pbVar7 & (~(&DAT_0017d382)[*pbVar7] | 0xdf);
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar5 != 0);
  }
  FUN_0023d018(param_1,pbVar3,uVar2,1,PTR_sqlite3_free_0030d498);
  return;
}


// ===== 0023987c  FUN_0023987c =====

void FUN_0023987c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  piVar4 = (int *)*param_3;
  uVar1 = *(ushort *)(piVar4 + 5);
  if ((((uVar1 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar4 + 0x16) == '\x01')) {
    pbVar7 = *(byte **)(piVar4 + 2);
  }
  else if ((uVar1 & 1) == 0) {
    pbVar7 = (byte *)FUN_0022ae18(piVar4,1);
    piVar4 = (int *)*param_3;
    uVar1 = *(ushort *)(piVar4 + 5);
  }
  else {
    pbVar7 = (byte *)0x0;
  }
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) != '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar2 = FUN_0023c158(piVar4,1);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        uVar2 = *piVar4 + uVar2;
      }
    }
  }
  else {
    uVar2 = piVar4[4];
  }
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  if (*(int *)(*(long *)(*param_1 + 0x18) + 0x88) <= (int)uVar2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  puVar3 = (undefined1 *)FUN_0022a6ac((long)(int)uVar2 + 1);
  if (puVar3 == (undefined1 *)0x0) {
    sqlite3_result_error_nomem(param_1);
    return;
  }
  if (0 < (int)uVar2) {
    uVar5 = (ulong)uVar2;
    puVar6 = puVar3;
    do {
      uVar5 = uVar5 - 1;
      *puVar6 = (&DAT_0017d228)[*pbVar7];
      puVar6 = puVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar5 != 0);
  }
  FUN_0023d018(param_1,puVar3,uVar2,1,PTR_sqlite3_free_0030d498);
  return;
}


// ===== 00239a08  FUN_00239a08 =====

void FUN_00239a08(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int *piVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  
  pbVar6 = (byte *)sqlite3_value_blob(*param_3);
  piVar8 = (int *)*param_3;
  uVar2 = *(ushort *)(piVar8 + 5);
  if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar8 + 0x16) != '\x01')) {
    if ((uVar2 >> 4 & 1) == 0) {
      if ((uVar2 & 1) == 0) {
        iVar5 = FUN_0023c158(piVar8,1);
      }
      else {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = piVar8[4];
      if ((uVar2 >> 10 & 1) != 0) {
        iVar5 = *piVar8 + iVar5;
      }
    }
  }
  else {
    iVar5 = piVar8[4];
  }
  uVar9 = (long)iVar5 << 1 | 1;
  if ((long)uVar9 <= (long)*(int *)(*(long *)(*param_1 + 0x18) + 0x88)) {
    pcVar7 = (char *)FUN_0022a6ac(uVar9);
    if (pcVar7 == (char *)0x0) {
      sqlite3_result_error_nomem(param_1);
      return;
    }
    pcVar10 = pcVar7;
    pcVar11 = pcVar7;
    iVar3 = iVar5;
    if (0 < iVar5) {
      do {
        bVar1 = *pbVar6;
        iVar3 = iVar3 + -1;
        *pcVar11 = "0123456789ABCDEF!"[bVar1 >> 4];
        pcVar10 = pcVar11 + 2;
        pcVar11[1] = "0123456789ABCDEF!"[(ulong)bVar1 & 0xf];
        pcVar11 = pcVar10;
        pbVar6 = pbVar6 + 1;
      } while (iVar3 != 0);
    }
    puVar4 = PTR_sqlite3_free_0030d498;
    *pcVar10 = '\0';
    FUN_0023d018(param_1,pcVar7,iVar5 << 1,1,puVar4);
    return;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
  return;
}


// ===== 00239b64  FUN_00239b64 =====

void FUN_00239b64(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sqlite3_randomness(8,&local_30);
  if ((long)local_30 < 0) {
    local_30 = -(local_30 & 0x7fffffffffffffff);
  }
  puVar2 = (ulong *)*param_1;
  if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
    *puVar2 = local_30;
    *(undefined2 *)((long)puVar2 + 0x14) = 4;
  }
  else {
    FUN_0023c114();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00239bf0  FUN_00239bf0 =====

void FUN_00239bf0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)*param_3;
  uVar1 = *(ushort *)((long)puVar4 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (puVar4[1] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0022ad58(puVar4);
      }
    }
    else {
      uVar2 = FUN_0022ad28(*puVar4);
    }
  }
  else {
    uVar2 = *puVar4;
  }
  if ((long)uVar2 < 2) {
    uVar2 = 1;
  }
  if ((long)*(int *)(*(long *)(*param_1 + 0x18) + 0x88) < (long)uVar2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  lVar3 = FUN_0022a6ac(uVar2);
  if (lVar3 != 0) {
    sqlite3_randomness(uVar2 & 0xffffffff,lVar3);
    FUN_0023d018(param_1,lVar3,uVar2 & 0xffffffff,0,PTR_sqlite3_free_0030d498);
    return;
  }
  sqlite3_result_error_nomem(param_1);
  return;
}


// ===== 00239cf8  FUN_00239cf8 =====

void FUN_00239cf8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0023d3c8(*param_3,param_3[1],
                       *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x18) + 0x88) +
                         (long)*(int *)(param_1 + 0x20) * 0x18 + -8));
  if (iVar1 != 0) {
    sqlite3_result_value(param_1,*param_3);
    return;
  }
  return;
}


// ===== 00239d54  FUN_00239d54 =====

void FUN_00239d54(undefined8 param_1)

{
  FUN_0023d018(param_1,&DAT_00176e06,0xffffffff,1,0);
  return;
}


// ===== 00239d6c  FUN_00239d6c =====

void FUN_00239d6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = (ulong *)*param_3;
  uVar1 = *(ushort *)((long)puVar2 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (puVar2[1] == 0)) {
        uVar5 = 0;
        lVar3 = param_3[1];
        goto joined_r0x00239dd8;
      }
      uVar5 = FUN_0022ad58();
    }
    else {
      uVar5 = FUN_0022ad28(*puVar2);
    }
    lVar3 = param_3[1];
  }
  else {
    uVar5 = *puVar2;
    lVar3 = param_3[1];
  }
joined_r0x00239dd8:
  if (lVar3 != 0) {
    if ((((*(ushort *)(lVar3 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar3 + 0x16) == '\x01')
       ) {
      uVar4 = *(undefined8 *)(lVar3 + 8);
      goto LAB_00239e28;
    }
    if ((*(ushort *)(lVar3 + 0x14) & 1) == 0) {
      uVar4 = FUN_0022ae18(lVar3,1);
      goto LAB_00239e28;
    }
  }
  uVar4 = 0;
LAB_00239e28:
  sqlite3_log(uVar5 & 0xffffffff,&DAT_001716ae,uVar4);
  return;
}


// ===== 00239e40  FUN_00239e40 =====

void FUN_00239e40(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  double *pdVar13;
  ulong uVar14;
  double dVar15;
  long local_70;
  undefined1 *local_68;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  undefined2 local_54;
  double local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  pdVar13 = (double *)*param_3;
  local_58 = 0;
  local_70 = *(long *)(*param_1 + 0x18);
  local_54 = 0;
  uVar3 = *(ushort *)((long)pdVar13 + 0x14);
  local_68 = (undefined1 *)0x0;
  local_5c = *(int *)(local_70 + 0x88);
  bVar2 = (&DAT_0017d33a)[(ulong)uVar3 & 0x3f];
  local_60 = 0;
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      if ((uVar3 & 0x24) == 0) {
        if ((uVar3 >> 3 & 1) == 0) {
          if (((uVar3 & 0x12) == 0) || (pdVar13[1] == 0.0)) {
            dVar15 = 0.0;
          }
          else {
            dVar15 = (double)FUN_0022ad58(pdVar13);
          }
        }
        else {
          dVar15 = (double)FUN_0022ad28(*pdVar13);
        }
      }
      else {
        dVar15 = *pdVar13;
      }
      puVar9 = &DAT_0016e7ab;
LAB_0023a128:
      sqlite3_str_appendf(&local_70,puVar9,dVar15);
    }
    else if (bVar2 == 2) {
      if ((uVar3 >> 3 & 1) == 0) {
        if ((uVar3 & 0x24) == 0) {
          if ((uVar3 & 0x12) == 0) {
            dVar15 = 0.0;
          }
          else {
            dVar15 = (double)FUN_0022adb8(pdVar13);
          }
        }
        else {
          dVar15 = (double)(long)*pdVar13;
        }
      }
      else {
        dVar15 = *pdVar13;
      }
      sqlite3_str_appendf(dVar15,&local_70,"%!.15g");
      puVar8 = local_68;
      if (((local_58 != 0) && (local_68[local_58] = 0, local_68 != (undefined1 *)0x0)) &&
         (FUN_0022c3dc(local_68,&local_50,local_58,1), dVar15 != local_50)) {
        if ((local_54._1_1_ >> 2 & 1) != 0) {
          FUN_0022a888(local_70,puVar8);
          local_54 = local_54 & 0xfbff;
        }
        local_60 = 0;
        local_58 = 0;
        local_68 = (undefined1 *)0x0;
        sqlite3_str_appendf(dVar15,&local_70,"%!.20e");
      }
    }
    else {
LAB_00239f0c:
      FUN_0022acc8(&local_70,&DAT_0016d844,4);
    }
  }
  else {
    if (bVar2 == 3) {
      if ((((uVar3 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)pdVar13 + 0x16) == '\x01')) {
        dVar15 = pdVar13[1];
      }
      else if ((uVar3 & 1) == 0) {
        dVar15 = (double)FUN_0022ae18(pdVar13,1);
      }
      else {
        dVar15 = 0.0;
      }
      puVar9 = &DAT_00170475;
      goto LAB_0023a128;
    }
    if (bVar2 != 4) goto LAB_00239f0c;
    pbVar7 = (byte *)sqlite3_value_blob(pdVar13);
    uVar3 = *(ushort *)((long)pdVar13 + 0x14);
    if (((uVar3 >> 1 & 1) == 0) || (*(char *)((long)pdVar13 + 0x16) != '\x01')) {
      if ((uVar3 >> 4 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          uVar14 = FUN_0023c158(pdVar13,1);
          uVar14 = uVar14 & 0xffffffff;
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = (ulong)*(uint *)(pdVar13 + 2);
        if ((uVar3 >> 10 & 1) != 0) {
          uVar14 = (ulong)(*(int *)pdVar13 + *(uint *)(pdVar13 + 2));
        }
      }
    }
    else {
      uVar14 = (ulong)*(uint *)(pdVar13 + 2);
    }
    uVar4 = uVar14 << 1;
    uVar5 = uVar14 >> 0x1f;
    iVar12 = (int)uVar4;
    FUN_0022b13c(&local_70,iVar12 + 4);
    if ((byte)local_54 == '\0') {
      if (0 < (int)uVar14) {
        pcVar10 = local_68 + 3;
        do {
          uVar14 = uVar14 - 1;
          pcVar10[-1] = "0123456789ABCDEF!"[*pbVar7 >> 4];
          *pcVar10 = "0123456789ABCDEF!"[(ulong)*pbVar7 & 0xf];
          pcVar10 = pcVar10 + 2;
          pbVar7 = pbVar7 + 1;
        } while (uVar14 != 0);
      }
      lVar1 = (-uVar5 & 0xfffffffe00000000 | uVar4) + 3;
      local_68[(long)iVar12 + 2] = 0x27;
      local_68[lVar1] = 0;
      *local_68 = 0x58;
      local_68[1] = 0x27;
      local_58 = (uint)lVar1;
    }
  }
  puVar8 = local_68;
  if (((local_68 != (undefined1 *)0x0) && (local_68[local_58] = 0, local_5c != 0)) &&
     ((local_54._1_1_ >> 2 & 1) == 0)) {
    puVar8 = (undefined1 *)FUN_0022a544(&local_70);
  }
  FUN_0023d018(param_1,puVar8,local_58,1,FUN_0023cd80);
  if ((byte)local_54 == 0) goto LAB_0023a238;
  if ((*(ushort *)(*param_1 + 0x14) & 0x9000) == 0) {
    *(uint *)((long)param_1 + 0x24) = (uint)(byte)local_54;
    *(undefined2 *)(*param_1 + 0x14) = 1;
    if ((byte)local_54 != 100) goto LAB_0023a1c0;
LAB_0023a1e8:
    pcVar10 = "another row available";
  }
  else {
    FUN_0022c2ec();
    uVar3 = *(ushort *)(*param_1 + 0x14);
    uVar11 = (uint)(byte)local_54;
    if (uVar11 == 0) {
      uVar11 = 0xffffffff;
    }
    *(uint *)((long)param_1 + 0x24) = uVar11;
    if ((uVar3 & 1) == 0) goto LAB_0023a238;
    if ((byte)local_54 == 100) goto LAB_0023a1e8;
LAB_0023a1c0:
    if ((byte)local_54 == 0x65) {
      pcVar10 = "no more rows available";
    }
    else if (((byte)local_54 < 0x1d) && ((0x1410004U >> ((ulong)(byte)local_54 & 0x3f) & 1) == 0)) {
      pcVar10 = (&PTR_s_not_an_error_0030cfd8)[(byte)local_54];
    }
    else {
      pcVar10 = "unknown error";
    }
  }
  FUN_0023d018(param_1,pcVar10,0xffffffff,1,0);
LAB_0023a238:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0023a270  FUN_0023a270 =====

void FUN_0023a270(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar1 = *(undefined8 *)(puVar1[3] + 0x38);
  *(undefined2 *)((long)puVar1 + 0x14) = 4;
  return;
}


// ===== 0023a2a0  FUN_0023a2a0 =====

void FUN_0023a2a0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar1 = *(undefined8 *)(puVar1[3] + 0x78);
  *(undefined2 *)((long)puVar1 + 0x14) = 4;
  return;
}


// ===== 0023a2d0  FUN_0023a2d0 =====

void FUN_0023a2d0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar1 = *(undefined8 *)(puVar1[3] + 0x80);
  *(undefined2 *)((long)puVar1 + 0x14) = 4;
  return;
}


// ===== 0023a300  FUN_0023a300 =====

void FUN_0023a300(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *__s2;
  void *__src;
  long lVar13;
  int iVar14;
  int iVar15;
  long local_88;
  uint local_7c;
  int local_70;
  
  lVar12 = *param_3;
  if (lVar12 != 0) {
    lVar13 = *(long *)(*param_1 + 0x18);
    if ((((*(ushort *)(lVar12 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(lVar12 + 0x16) == '\x01')) {
      lVar12 = *(long *)(lVar12 + 8);
    }
    else {
      if ((*(ushort *)(lVar12 + 0x14) & 1) != 0) {
        return;
      }
      lVar12 = FUN_0022ae18(lVar12,1);
    }
    if (lVar12 != 0) {
      piVar9 = (int *)*param_3;
      uVar3 = *(ushort *)(piVar9 + 5);
      if (((uVar3 >> 1 & 1) == 0) || (*(char *)((long)piVar9 + 0x16) != '\x01')) {
        if ((uVar3 >> 4 & 1) == 0) {
          if ((uVar3 & 1) == 0) {
            uVar6 = FUN_0023c158(piVar9,1);
            lVar10 = param_3[1];
          }
          else {
            uVar6 = 0;
            lVar10 = param_3[1];
          }
        }
        else {
          uVar6 = piVar9[4];
          if ((uVar3 >> 10 & 1) != 0) {
            uVar6 = *piVar9 + uVar6;
          }
          lVar10 = param_3[1];
        }
      }
      else {
        uVar6 = piVar9[4];
        lVar10 = param_3[1];
      }
      if (lVar10 != 0) {
        if ((((*(ushort *)(lVar10 + 0x14) ^ 0xffff) & 0x202) == 0) &&
           (*(char *)(lVar10 + 0x16) == '\x01')) {
          __s2 = *(char **)(lVar10 + 8);
        }
        else {
          if ((*(ushort *)(lVar10 + 0x14) & 1) != 0) {
            return;
          }
          __s2 = (char *)FUN_0022ae18(lVar10,1);
        }
        if (__s2 != (char *)0x0) {
          if (*__s2 == '\0') {
            sqlite3_result_value(param_1,*param_3);
            return;
          }
          piVar9 = (int *)param_3[1];
          uVar3 = *(ushort *)(piVar9 + 5);
          if (((uVar3 >> 1 & 1) == 0) || (*(char *)((long)piVar9 + 0x16) != '\x01')) {
            if ((uVar3 >> 4 & 1) == 0) {
              if ((uVar3 & 1) == 0) {
                iVar7 = FUN_0023c158(piVar9,1);
              }
              else {
                iVar7 = 0;
              }
            }
            else {
              iVar7 = piVar9[4];
              if ((uVar3 >> 10 & 1) != 0) {
                iVar7 = *piVar9 + iVar7;
              }
            }
          }
          else {
            iVar7 = piVar9[4];
          }
          lVar10 = param_3[2];
          if (lVar10 != 0) {
            if ((((*(ushort *)(lVar10 + 0x14) ^ 0xffff) & 0x202) == 0) &&
               (*(char *)(lVar10 + 0x16) == '\x01')) {
              __src = *(void **)(lVar10 + 8);
            }
            else {
              if ((*(ushort *)(lVar10 + 0x14) & 1) != 0) {
                return;
              }
              __src = (void *)FUN_0022ae18(lVar10,1);
            }
            if (__src != (void *)0x0) {
              piVar9 = (int *)param_3[2];
              uVar3 = *(ushort *)(piVar9 + 5);
              if (((uVar3 >> 1 & 1) == 0) || (*(char *)((long)piVar9 + 0x16) != '\x01')) {
                if ((uVar3 >> 4 & 1) == 0) {
                  if ((uVar3 & 1) == 0) {
                    local_70 = FUN_0023c158(piVar9,1);
                  }
                  else {
                    local_70 = 0;
                  }
                }
                else {
                  local_70 = piVar9[4];
                  if ((uVar3 >> 10 & 1) != 0) {
                    local_70 = *piVar9 + local_70;
                  }
                }
              }
              else {
                local_70 = piVar9[4];
              }
              if (*(int *)(*(long *)(*param_1 + 0x18) + 0x88) <= (int)uVar6) {
                *(undefined4 *)((long)param_1 + 0x24) = 0x12;
                FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
                return;
              }
              local_88 = (long)(int)(uVar6 + 1);
              lVar10 = FUN_0022a6ac();
              if (lVar10 == 0) {
                sqlite3_result_error_nomem(param_1);
                return;
              }
              if ((int)(uVar6 - iVar7) < 0) {
                iVar14 = 0;
                iVar15 = 0;
              }
              else {
                local_7c = 0;
                iVar15 = 0;
                iVar14 = 0;
                do {
                  cVar2 = *(char *)(lVar12 + iVar14);
                  if ((cVar2 == *__s2) &&
                     (iVar8 = memcmp((char *)(lVar12 + iVar14),__s2,(long)iVar7), iVar8 == 0)) {
                    lVar11 = lVar10;
                    if (iVar7 < local_70) {
                      local_88 = local_88 + (local_70 - iVar7);
                      if ((long)*(int *)(lVar13 + 0x88) < local_88 + -1) {
                        *(undefined4 *)((long)param_1 + 0x24) = 0x12;
                        FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
LAB_0023a7cc:
                        sqlite3_free(lVar10);
                        return;
                      }
                      uVar1 = local_7c + 1;
                      uVar4 = uVar1 & local_7c;
                      local_7c = uVar1;
                      if ((uVar4 == 0) &&
                         (lVar11 = FUN_0022b604(lVar10,local_88 + (int)~uVar6 + (long)(int)local_88)
                         , lVar11 == 0)) {
                        sqlite3_result_error_nomem(param_1);
                        goto LAB_0023a7cc;
                      }
                    }
                    lVar10 = lVar11;
                    memcpy((void *)(lVar10 + iVar15),__src,(long)local_70);
                    iVar15 = iVar15 + local_70;
                    iVar8 = iVar7 + -1 + iVar14;
                  }
                  else {
                    *(char *)(lVar10 + iVar15) = cVar2;
                    iVar15 = iVar15 + 1;
                    iVar8 = iVar14;
                  }
                  iVar14 = iVar8 + 1;
                } while (iVar8 < (int)(uVar6 - iVar7));
              }
              memcpy((void *)(lVar10 + iVar15),(void *)(lVar12 + iVar14),(long)(int)(uVar6 - iVar14)
                    );
              puVar5 = PTR_sqlite3_free_0030d498;
              lVar12 = (long)iVar15 + (long)(int)(uVar6 - iVar14);
              *(undefined1 *)(lVar10 + lVar12) = 0;
              FUN_0023d018(param_1,lVar10,lVar12,1,puVar5);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 0023a7f0  FUN_0023a7f0 =====

void FUN_0023a7f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar3 = (ulong *)*param_3;
  uVar1 = *(ushort *)((long)puVar3 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (puVar3[1] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0022ad58(puVar3);
      }
    }
    else {
      uVar2 = FUN_0022ad28(*puVar3);
    }
  }
  else {
    uVar2 = *puVar3;
  }
  puVar4 = (uint *)*param_1;
  uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  if ((ulong)(long)*(int *)(*(long *)(puVar4 + 6) + 0x88) < uVar2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(puVar4,"string or blob too big",0xffffffffffffffff,1,0);
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    if ((*(ushort *)(*param_1 + 0x14) & 1) != 0) {
      FUN_0023d018(param_1,"string or blob too big",0xffffffff,1,0);
      return;
    }
  }
  else {
    if (((puVar4[5] & 0x9000) != 0) || (puVar4[8] != 0)) {
      FUN_0022c29c(puVar4);
    }
    uVar5 = (uint)uVar2;
    puVar4[4] = 0;
    *(undefined2 *)(puVar4 + 5) = 0x410;
    *puVar4 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)((long)puVar4 + 0x16) = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  return;
}


// ===== 0023a918  FUN_0023a918 =====

void FUN_0023a918(long *param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  
  puVar8 = (undefined8 *)param_3[1];
  uVar2 = *(ushort *)((long)puVar8 + 0x14);
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
    return;
  }
  if ((param_2 == 3) &&
     ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)(param_3[2] + 0x14) & 0x3f) & 1) != 0)) {
    return;
  }
  piVar14 = (int *)*param_3;
  uVar3 = *(ushort *)(piVar14 + 5);
  if ((uVar2 & 0x24) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if (((uVar2 & 0x12) == 0) || (puVar8[1] == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0022ad58(puVar8);
        piVar14 = (int *)*param_3;
      }
    }
    else {
      iVar5 = FUN_0022ad28(*puVar8);
    }
  }
  else {
    iVar5 = (int)*puVar8;
  }
  uVar16 = 0x1000000010001 >> (uVar3 & 0x3f);
  if ((uVar16 & 1) == 0) {
    if (piVar14 == (int *)0x0) {
      return;
    }
    if ((((*(ushort *)(piVar14 + 5) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)((long)piVar14 + 0x16) == '\x01')) {
      pbVar15 = *(byte **)(piVar14 + 2);
    }
    else {
      if ((*(ushort *)(piVar14 + 5) & 1) != 0) {
        return;
      }
      pbVar15 = (byte *)FUN_0022ae18(piVar14,1);
    }
    if (pbVar15 == (byte *)0x0) {
      return;
    }
    if ((iVar5 < 0) && (bVar12 = *pbVar15, bVar12 != 0)) {
      iVar6 = 0;
      pbVar13 = pbVar15;
      do {
        if (bVar12 < 0xc0) {
          pbVar13 = pbVar13 + 1;
          bVar12 = *pbVar13;
        }
        else {
          do {
            pbVar13 = pbVar13 + 1;
            bVar12 = *pbVar13;
          } while ((bVar12 & 0xc0) == 0x80);
        }
        iVar6 = iVar6 + 1;
      } while (bVar12 != 0);
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    uVar2 = *(ushort *)(piVar14 + 5);
    if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar14 + 0x16) != '\x01')) {
      if ((uVar2 >> 4 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          iVar6 = FUN_0023c158(piVar14,1);
          piVar14 = (int *)*param_3;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = piVar14[4];
        if ((uVar2 >> 10 & 1) != 0) {
          iVar6 = *piVar14 + iVar6;
        }
      }
    }
    else {
      iVar6 = piVar14[4];
    }
    pbVar15 = (byte *)sqlite3_value_blob(piVar14);
    if (pbVar15 == (byte *)0x0) {
      return;
    }
  }
  if (param_2 == 3) {
    puVar9 = (ulong *)param_3[2];
    uVar2 = *(ushort *)((long)puVar9 + 0x14);
    if ((uVar2 & 0x24) == 0) {
      if ((uVar2 >> 3 & 1) == 0) {
        if (((uVar2 & 0x12) == 0) || (puVar9[1] == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_0022ad58(puVar9);
        }
      }
      else {
        uVar10 = FUN_0022ad28(*puVar9);
      }
    }
    else {
      uVar10 = *puVar9;
    }
    bVar4 = (uVar10 & 0x80000000) == 0;
    uVar11 = -(long)(int)uVar10;
    if (bVar4) {
      uVar11 = (long)(int)uVar10;
    }
    if (iVar5 < 0) goto LAB_0023abf4;
LAB_0023ab3c:
    if (iVar5 == 0) {
      uVar10 = 0;
      uVar11 = uVar11 - (0 < (long)uVar11);
    }
    else {
      uVar10 = (long)iVar5 - 1;
    }
  }
  else {
    bVar4 = true;
    uVar11 = (ulong)*(int *)(*(long *)(*param_1 + 0x18) + 0x88);
    if (-1 < iVar5) goto LAB_0023ab3c;
LAB_0023abf4:
    uVar10 = (long)iVar5 + (long)iVar6;
    if ((long)uVar10 < 0) {
      uVar11 = uVar11 + uVar10;
      uVar10 = 0;
      uVar11 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  uVar1 = uVar10;
  if ((long)uVar11 <= (long)uVar10) {
    uVar1 = uVar11;
  }
  if (!bVar4) {
    uVar10 = uVar10 - uVar11 & ((long)(uVar10 - uVar11) >> 0x3f ^ 0xffffffffffffffffU);
    uVar11 = uVar1;
  }
  if ((uVar16 & 1) == 0) {
    bVar12 = *pbVar15;
    if (bVar12 != 0) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        if (bVar12 < 0xc0) {
          pbVar15 = pbVar15 + 1;
          bVar12 = *pbVar15;
        }
        else {
          do {
            pbVar15 = pbVar15 + 1;
            bVar12 = *pbVar15;
          } while ((bVar12 & 0xc0) == 0x80);
        }
        if (bVar12 == 0) break;
      }
    }
    pbVar13 = pbVar15;
    if (bVar12 != 0) {
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        if (bVar12 < 0xc0) {
          pbVar13 = pbVar13 + 1;
          bVar12 = *pbVar13;
        }
        else {
          do {
            pbVar13 = pbVar13 + 1;
            bVar12 = *pbVar13;
          } while ((bVar12 & 0xc0) == 0x80);
        }
        if (bVar12 == 0) break;
      }
    }
    uVar16 = (long)pbVar13 - (long)pbVar15;
    if (uVar16 >> 0x1f != 0) {
LAB_0023acd4:
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
      return;
    }
    uVar7 = 1;
  }
  else {
    uVar16 = (long)iVar6 - uVar10;
    uVar16 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
    if ((long)(uVar11 + uVar10) <= (long)iVar6) {
      uVar16 = uVar11;
    }
    if (uVar16 >> 0x1f != 0) goto LAB_0023acd4;
    pbVar15 = pbVar15 + uVar10;
    uVar7 = 0;
  }
  FUN_0023d018(param_1,pbVar15,uVar16,uVar7,0xffffffffffffffff);
  return;
}


// ===== 0023ad38  FUN_0023ad38 =====

void FUN_0023ad38(long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    pdVar3 = *(double **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    pdVar3 = (double *)FUN_0023ce88(param_1,0x20);
  }
  iVar2 = sqlite3_value_numeric_type(*param_3);
  if (pdVar3 == (double *)0x0) {
    return;
  }
  if (iVar2 == 5) {
    return;
  }
  pdVar4 = (double *)*param_3;
  uVar1 = *(ushort *)((long)pdVar4 + 0x14);
  pdVar3[2] = (double)((long)pdVar3[2] + 1);
  if (iVar2 != 1) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 & 0x12) == 0) {
          dVar5 = 0.0;
        }
        else {
          dVar5 = (double)FUN_0022adb8();
        }
      }
      else {
        dVar5 = (double)(long)*pdVar4;
      }
    }
    else {
      dVar5 = *pdVar4;
    }
    *(undefined1 *)((long)pdVar3 + 0x19) = 1;
    *pdVar3 = dVar5 + *pdVar3;
    return;
  }
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (pdVar4[1] == 0.0)) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = (double)FUN_0022ad58();
      }
    }
    else {
      dVar5 = (double)FUN_0022ad28(*pdVar4);
    }
  }
  else {
    dVar5 = *pdVar4;
  }
  *pdVar3 = *pdVar3 + (double)(long)dVar5;
  if (*(char *)(pdVar3 + 3) != '\0' || *(char *)((long)pdVar3 + 0x19) != '\0') {
    return;
  }
  dVar6 = pdVar3[1];
  if ((long)dVar5 < 0) {
    if ((-1 < (long)dVar6) || (-0x7fffffffffffffff - (long)dVar6 <= (long)dVar5 + 1))
    goto LAB_0023ae8c;
  }
  else if (((long)dVar6 < 1) || ((long)dVar5 <= (long)((ulong)dVar6 ^ 0x7fffffffffffffff))) {
LAB_0023ae8c:
    pdVar3[1] = (double)((long)dVar6 + (long)dVar5);
    return;
  }
  *(undefined2 *)(pdVar3 + 3) = 0x101;
  return;
}


// ===== 0023aea8  FUN_0023aea8 =====

void FUN_0023aea8(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar1 = *(ulong **)(param_1[2] + 8);
  }
  else {
    puVar1 = (ulong *)FUN_0023ce88(param_1,0);
  }
  if ((puVar1 != (ulong *)0x0) && (0 < (long)puVar1[2])) {
    if ((char)puVar1[3] != '\0') {
      *(undefined4 *)((long)param_1 + 0x24) = 1;
      FUN_0023c180(*param_1,"integer overflow",0xffffffffffffffff,1,0xffffffffffffffff);
      return;
    }
    if (*(char *)((long)puVar1 + 0x19) == '\0') {
      puVar2 = (ulong *)*param_1;
      if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) {
        FUN_0023c114(puVar2);
        return;
      }
      *puVar2 = puVar1[1];
      *(undefined2 *)((long)puVar2 + 0x14) = 4;
    }
    else {
      puVar2 = (ulong *)*param_1;
      uVar3 = *puVar1;
      if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
        *(undefined2 *)((long)puVar2 + 0x14) = 1;
      }
      else {
        FUN_0022c2ec(puVar2);
      }
      if ((((uVar3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
         ((uVar3 & 0xfffffffffffff) == 0)) {
        *puVar2 = uVar3;
        *(undefined2 *)((long)puVar2 + 0x14) = 8;
      }
    }
  }
  return;
}


// ===== 0023afcc  FUN_0023afcc =====

void FUN_0023afcc(long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    pdVar3 = *(double **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    pdVar3 = (double *)FUN_0023ce88(param_1,0x20);
  }
  iVar2 = sqlite3_value_numeric_type(*param_3);
  if ((pdVar3 != (double *)0x0) && (iVar2 != 5)) {
    pdVar3[2] = (double)((long)pdVar3[2] + -1);
    if ((iVar2 == 1) && (*(char *)((long)pdVar3 + 0x19) == '\0')) {
      param_3 = (long *)*param_3;
      uVar1 = *(ushort *)((long)param_3 + 0x14);
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if (((uVar1 & 0x12) == 0) || (param_3[1] == 0)) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_0022ad58();
          }
        }
        else {
          lVar5 = FUN_0022ad28(*param_3);
        }
      }
      else {
        lVar5 = *param_3;
      }
      dVar6 = (double)lVar5;
      dVar7 = *pdVar3;
      pdVar3[1] = (double)((long)pdVar3[1] - lVar5);
    }
    else {
      pdVar4 = (double *)*param_3;
      uVar1 = *(ushort *)((long)pdVar4 + 0x14);
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 & 0x24) == 0) {
          if ((uVar1 & 0x12) == 0) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = (double)FUN_0022adb8();
          }
        }
        else {
          dVar6 = (double)(long)*pdVar4;
        }
      }
      else {
        dVar6 = *pdVar4;
      }
      dVar7 = *pdVar3;
    }
    *pdVar3 = dVar7 - dVar6;
  }
  return;
}


// ===== 0023b0ec  FUN_0023b0ec =====

void FUN_0023b0ec(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar1 = *(ulong **)(param_1[2] + 8);
  }
  else {
    puVar1 = (ulong *)FUN_0023ce88(param_1,0);
  }
  if (puVar1 == (ulong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (ulong *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)((long)puVar1 + 0x14) = 1;
  }
  else {
    FUN_0022c2ec(puVar1);
  }
  if ((((uVar2 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) || ((uVar2 & 0xfffffffffffff) == 0)
     ) {
    *puVar1 = uVar2;
    *(undefined2 *)((long)puVar1 + 0x14) = 8;
  }
  return;
}


// ===== 0023b180  FUN_0023b180 =====

void FUN_0023b180(long *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    pdVar1 = *(double **)(param_1[2] + 8);
  }
  else {
    pdVar1 = (double *)FUN_0023ce88(param_1,0);
  }
  if ((pdVar1 != (double *)0x0) && (0 < (long)pdVar1[2])) {
    pdVar2 = (double *)*param_1;
    dVar3 = *pdVar1 / (double)(long)pdVar1[2];
    if ((*(ushort *)((long)pdVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)pdVar2 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec(pdVar2);
    }
    if ((((ulong)dVar3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0 ||
        ((ulong)dVar3 & 0xfffffffffffff) == 0) {
      *pdVar2 = dVar3;
      *(undefined2 *)((long)pdVar2 + 0x14) = 8;
    }
  }
  return;
}


// ===== 0023b234  FUN_0023b234 =====

void FUN_0023b234(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,8);
  }
  if (((param_2 == 0) ||
      ((0x5555555555555555U >> ((ulong)*(ushort *)(*param_3 + 0x14) & 0x3f) & 1) != 0)) &&
     (plVar1 != (long *)0x0)) {
    *plVar1 = *plVar1 + 1;
  }
  return;
}


// ===== 0023b29c  FUN_0023b29c =====

void FUN_0023b29c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar1 = *(undefined8 **)(param_1[2] + 8);
  }
  else {
    puVar1 = (undefined8 *)FUN_0023ce88(param_1,0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) == 0) {
    *puVar1 = uVar2;
    *(undefined2 *)((long)puVar1 + 0x14) = 4;
    return;
  }
  FUN_0023c114();
  return;
}


// ===== 0023b314  FUN_0023b314 =====

void FUN_0023b314(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    plVar1 = (long *)FUN_0023ce88(param_1,8);
  }
  if (((param_2 == 0) ||
      ((0x5555555555555555U >> ((ulong)*(ushort *)(*param_3 + 0x14) & 0x3f) & 1) != 0)) &&
     (plVar1 != (long *)0x0)) {
    *plVar1 = *plVar1 + -1;
  }
  return;
}


// ===== 0023b37c  FUN_0023b37c =====

void FUN_0023b37c(long *param_1,int param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  byte bVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)(*param_3 + 0x14) & 0x3f) & 1) != 0) {
    return;
  }
  if (*(short *)(param_1[2] + 0x14) < 0) {
    puVar9 = *(undefined8 **)(param_1[2] + 8);
  }
  else {
    puVar9 = (undefined8 *)FUN_0023ce88(param_1,0x30);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  iVar8 = *(int *)((long)puVar9 + 0x14);
  *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)(*(long *)(*param_1 + 0x18) + 0x88);
  if (param_2 == 1) {
    if (iVar8 == 0) {
      *(undefined4 *)((long)puVar9 + 0x24) = 1;
    }
    else {
      if ((ulong)*(uint *)(puVar9 + 3) + 1 < (ulong)*(uint *)(puVar9 + 2)) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0022b13c(puVar9,1);
        if (iVar8 < 1) goto LAB_0023b64c;
      }
      uVar12 = iVar8 + 1;
      do {
        uVar3 = *(uint *)(puVar9 + 3);
        uVar12 = uVar12 - 1;
        *(uint *)(puVar9 + 3) = uVar3 + 1;
        *(undefined1 *)(puVar9[1] + (ulong)uVar3) = 0x2c;
      } while (1 < uVar12);
    }
    goto LAB_0023b64c;
  }
  piVar13 = (int *)param_3[1];
  if (iVar8 == 0) {
    uVar5 = *(ushort *)(piVar13 + 5);
    if (((uVar5 >> 1 & 1) == 0) || (*(char *)((long)piVar13 + 0x16) != '\x01')) {
      if ((uVar5 >> 4 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          iVar8 = FUN_0023c158(piVar13,1);
        }
        else {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = piVar13[4];
        if ((uVar5 >> 10 & 1) != 0) {
          iVar8 = *piVar13 + iVar8;
        }
      }
    }
    else {
      iVar8 = piVar13[4];
    }
    *(int *)((long)puVar9 + 0x24) = iVar8;
    goto LAB_0023b64c;
  }
  uVar5 = *(ushort *)(piVar13 + 5);
  uVar12 = (uint)uVar5;
  if ((((uVar5 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar13 + 0x16) == '\x01')) {
    pvVar10 = *(void **)(piVar13 + 2);
joined_r0x0023b4f4:
    if ((uVar5 >> 1 & 1) == 0) goto LAB_0023b50c;
LAB_0023b4f8:
    uVar12 = (uint)uVar5;
    if (*(char *)((long)piVar13 + 0x16) != '\x01') goto LAB_0023b50c;
    iVar8 = piVar13[4];
  }
  else {
    if ((uVar5 & 1) != 0) {
      pvVar10 = (void *)0x0;
      goto joined_r0x0023b4f4;
    }
    pvVar10 = (void *)FUN_0022ae18(piVar13,1);
    piVar13 = (int *)param_3[1];
    uVar5 = *(ushort *)(piVar13 + 5);
    uVar12 = (uint)uVar5;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0023b4f8;
LAB_0023b50c:
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 & 1) == 0) {
        iVar8 = FUN_0023c158(piVar13,1);
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = piVar13[4];
      if ((uVar12 >> 10 & 1) != 0) {
        iVar8 = *piVar13 + iVar8;
      }
    }
  }
  if (pvVar10 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar9 + 3);
    uVar12 = uVar3 + iVar8;
    if (uVar12 < *(uint *)(puVar9 + 2)) {
      if (iVar8 != 0) {
        *(uint *)(puVar9 + 3) = uVar12;
        memcpy((void *)(puVar9[1] + (ulong)uVar3),pvVar10,(long)iVar8);
      }
    }
    else {
      FUN_0022acc8(puVar9,pvVar10,iVar8);
    }
  }
  lVar17 = puVar9[5];
  if (iVar8 == *(int *)((long)puVar9 + 0x24)) {
    if (lVar17 == 0) goto LAB_0023b64c;
LAB_0023b5c0:
    iVar6 = *(int *)(puVar9 + 4);
    iVar7 = sqlite3_initialize();
    if ((iVar7 != 0) || (lVar17 = FUN_0022b604(lVar17,(long)iVar6 << 2), lVar17 == 0)) {
LAB_0023b600:
      *(undefined1 *)((long)puVar9 + 0x1c) = 7;
      if (*(int *)((long)puVar9 + 0x14) != 0) {
        bVar11 = *(byte *)((long)puVar9 + 0x1d);
        if ((bVar11 >> 2 & 1) != 0) {
          if (puVar9[1] != 0) {
            FUN_0022a888(*puVar9);
            bVar11 = *(byte *)((long)puVar9 + 0x1d);
          }
          *(byte *)((long)puVar9 + 0x1d) = bVar11 & 0xfb;
        }
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        puVar9[1] = 0;
      }
      goto LAB_0023b64c;
    }
  }
  else {
    if (lVar17 != 0) goto LAB_0023b5c0;
    iVar6 = *(int *)(puVar9 + 4);
    iVar7 = sqlite3_initialize();
    if ((iVar7 != 0) || (lVar17 = FUN_0022a6ac((long)iVar6 * 4 + 4), lVar17 == 0))
    goto LAB_0023b600;
    uVar12 = *(uint *)(puVar9 + 4);
    uVar3 = uVar12 - 1;
    uVar14 = (ulong)uVar3;
    if (uVar3 != 0 && 0 < (int)uVar12) {
      uVar4 = *(undefined4 *)((long)puVar9 + 0x24);
      if (uVar12 < 9) {
        uVar15 = 0;
      }
      else {
        lVar16 = 0;
        uVar15 = uVar14 & 0x7ffffff8;
        do {
          puVar2 = (undefined8 *)(lVar17 + lVar16);
          lVar16 = lVar16 + 0x20;
          puVar2[1] = CONCAT44(uVar4,uVar4);
          *puVar2 = CONCAT44(uVar4,uVar4);
          puVar2[3] = CONCAT44(uVar4,uVar4);
          puVar2[2] = CONCAT44(uVar4,uVar4);
        } while (((ulong)(uVar3 >> 3) & 0xfffffff) * 0x20 - lVar16 != 0);
        if (uVar15 == uVar14) goto LAB_0023b5dc;
      }
      do {
        uVar1 = uVar15 + 1;
        *(undefined4 *)(lVar17 + uVar15 * 4) = uVar4;
        uVar15 = uVar1;
      } while (uVar14 != uVar1);
    }
  }
LAB_0023b5dc:
  if (0 < *(int *)(puVar9 + 4)) {
    *(int *)(lVar17 + (ulong)(*(int *)(puVar9 + 4) - 1) * 4) = iVar8;
  }
  puVar9[5] = lVar17;
LAB_0023b64c:
  piVar13 = (int *)*param_3;
  uVar5 = *(ushort *)(piVar13 + 5);
  *(int *)(puVar9 + 4) = *(int *)(puVar9 + 4) + 1;
  if ((((uVar5 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)piVar13 + 0x16) == '\x01')) {
    pvVar10 = *(void **)(piVar13 + 2);
  }
  else if ((uVar5 & 1) == 0) {
    pvVar10 = (void *)FUN_0022ae18(piVar13,1);
    piVar13 = (int *)*param_3;
    uVar5 = *(ushort *)(piVar13 + 5);
  }
  else {
    pvVar10 = (void *)0x0;
  }
  if (((uVar5 >> 1 & 1) == 0) || (*(char *)((long)piVar13 + 0x16) != '\x01')) {
    if ((uVar5 >> 4 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        iVar8 = FUN_0023c158(piVar13,1);
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = piVar13[4];
      if ((uVar5 >> 10 & 1) != 0) {
        iVar8 = *piVar13 + iVar8;
      }
    }
  }
  else {
    iVar8 = piVar13[4];
  }
  if (pvVar10 != (void *)0x0) {
    uVar3 = *(uint *)(puVar9 + 3);
    uVar12 = uVar3 + iVar8;
    if (*(uint *)(puVar9 + 2) <= uVar12) {
      FUN_0022acc8(puVar9);
      return;
    }
    if (iVar8 != 0) {
      *(uint *)(puVar9 + 3) = uVar12;
      memcpy((void *)(puVar9[1] + (ulong)uVar3),pvVar10,(long)iVar8);
      return;
    }
  }
  return;
}


// ===== 0023b7ec  FUN_0023b7ec =====

void FUN_0023b7ec(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar2 = FUN_0023ce88(param_1,0);
  }
  if (lVar2 != 0) {
    FUN_0023d0e4(param_1,lVar2);
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 != 0) {
      puVar3 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar1 = (*DAT_00313868)(lVar2);
        DAT_00316e60 = DAT_00316e60 - iVar1;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar2);
        if (DAT_00316f08 == 0) {
          return;
        }
        puVar3 = &DAT_003138c0;
        lVar2 = DAT_00316f08;
      }
                    /* WARNING: Could not recover jumptable at 0x0023b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(lVar2);
      return;
    }
  }
  return;
}


// ===== 0023b8dc  FUN_0023b8dc =====

void FUN_0023b8dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_1[2] + 0x14) < 0) {
    lVar1 = *(long *)(param_1[2] + 8);
  }
  else {
    lVar1 = FUN_0023ce88(param_1,0);
  }
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x1c) == '\a') {
    sqlite3_result_error_nomem(param_1);
    return;
  }
  if (*(char *)(lVar1 + 0x1c) != '\x12') {
    if (*(uint *)(lVar1 + 0x18) == 0) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(*(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x18)) = 0;
      uVar2 = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
    }
    FUN_0023d018(param_1,uVar2,uVar3,1,0xffffffffffffffff);
    return;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
  return;
}


// ===== 0023b9a4  FUN_0023b9a4 =====

void FUN_0023b9a4(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((0xaaaaaaaaaaaaaaaaU >> ((ulong)*(ushort *)(*param_3 + 0x14) & 0x3f) & 1) != 0) {
    return;
  }
  if (*(short *)(*(long *)(param_1 + 0x10) + 0x14) < 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  else {
    lVar4 = FUN_0023ce88(param_1,0x30);
  }
  if (lVar4 == 0) {
    return;
  }
  piVar5 = (int *)*param_3;
  uVar2 = *(ushort *)(piVar5 + 5);
  uVar6 = (uint)uVar2;
  if (((uVar2 ^ 0xffff) & 0x202) == 0) {
    if (((uVar2 & 1) == 0) && (*(char *)((long)piVar5 + 0x16) != '\x01')) {
LAB_0023ba20:
      FUN_0022ae18(piVar5,1);
      piVar5 = (int *)*param_3;
      uVar6 = (uint)*(ushort *)(piVar5 + 5);
    }
  }
  else if ((uVar2 & 1) == 0) goto LAB_0023ba20;
  if (((uVar6 >> 1 & 1) == 0) || (*(char *)((long)piVar5 + 0x16) != '\x01')) {
    if ((uVar6 >> 4 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        iVar3 = FUN_0023c158(piVar5,1);
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = piVar5[4];
      if ((uVar6 >> 10 & 1) != 0) {
        iVar3 = *piVar5 + iVar3;
      }
    }
  }
  else {
    iVar3 = piVar5[4];
  }
  iVar1 = *(int *)(lVar4 + 0x20);
  piVar5 = *(int **)(lVar4 + 0x28);
  *(int *)(lVar4 + 0x20) = iVar1 + -1;
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)(lVar4 + 0x24) + iVar3;
  }
  else if (1 < iVar1) {
    iVar3 = *piVar5 + iVar3;
    memmove(piVar5,piVar5 + 1,(ulong)(iVar1 - 2) << 2);
  }
  uVar6 = *(int *)(lVar4 + 0x18) - iVar3;
  if (uVar6 == 0 || *(int *)(lVar4 + 0x18) < iVar3) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  else {
    *(uint *)(lVar4 + 0x18) = uVar6;
    memmove(*(void **)(lVar4 + 8),(void *)((long)*(void **)(lVar4 + 8) + (long)iVar3),(ulong)uVar6);
    if (*(int *)(lVar4 + 0x18) != 0) {
      return;
    }
  }
  lVar8 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(lVar4 + 0x14) = 0;
  if (lVar8 != 0) {
    puVar7 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(lVar8);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar8);
      if (DAT_00316f08 == 0) goto LAB_0023bb6c;
      puVar7 = &DAT_003138c0;
      lVar8 = DAT_00316f08;
    }
    (*(code *)*puVar7)(lVar8);
  }
LAB_0023bb6c:
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}


// ===== 0023bb80  FUN_0023bb80 =====

void FUN_0023bb80(long *param_1,int param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulong *puVar6;
  char *pcVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  piVar5 = (int *)*param_3;
  uVar2 = *(ushort *)(piVar5 + 5);
  lVar15 = *(long *)(*param_1 + 0x18);
  puVar14 = *(uint **)(param_1[1] + 8);
  if (((uVar2 >> 1 & 1) == 0) || (*(char *)((long)piVar5 + 0x16) != '\x01')) {
    if ((uVar2 >> 4 & 1) == 0) {
      if ((uVar2 & 1) == 0) {
        iVar4 = FUN_0023c158(piVar5,1);
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = piVar5[4];
      if ((uVar2 >> 10 & 1) != 0) {
        iVar4 = *piVar5 + iVar4;
      }
    }
  }
  else {
    iVar4 = piVar5[4];
  }
  if (*(int *)(lVar15 + 0xa8) < iVar4) {
    puVar6 = (ulong *)*param_1;
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    if (*(long *)(lVar3 + 0x28) == local_48) {
      pcVar7 = "LIKE or GLOB pattern too complex";
      goto LAB_0023bc44;
    }
    goto LAB_0023beec;
  }
  if (param_2 == 3) {
    puVar6 = (ulong *)param_3[2];
    if (puVar6 != (ulong *)0x0) {
      if ((((*(ushort *)((long)puVar6 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(byte *)((long)puVar6 + 0x16) == 1)) {
        puVar6 = (ulong *)puVar6[1];
        if (puVar6 != (ulong *)0x0) {
LAB_0023bd94:
          if (puVar6 != (ulong *)0xffffffffffffffff) {
            bVar1 = (byte)*puVar6;
            if (bVar1 != 0) {
              puVar9 = puVar6;
              iVar4 = 0;
              bVar11 = bVar1;
              do {
                iVar13 = iVar4;
                if (bVar11 < 0xc0) {
                  puVar9 = (ulong *)((long)puVar9 + 1);
                  bVar11 = *(byte *)puVar9;
                }
                else {
                  do {
                    puVar9 = (ulong *)((long)puVar9 + 1);
                    bVar11 = *(byte *)puVar9;
                  } while ((bVar11 & 0xc0) == 0x80);
                }
              } while ((bVar11 != 0) && (iVar4 = iVar13 + 1, puVar9 != (ulong *)0xffffffffffffffff))
              ;
              if (iVar13 == 0) {
                uVar10 = (uint)bVar1;
                if (0xbf < bVar1) {
                  uVar10 = (uint)*(byte *)((long)puVar6 + 1);
                  uVar8 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
                  if ((*(byte *)((long)puVar6 + 1) & 0xc0) == 0x80) {
                    pbVar12 = (byte *)((long)puVar6 + 2);
                    do {
                      uVar8 = uVar10 & 0x3f | uVar8 << 6;
                      uVar10 = (uint)*pbVar12;
                      pbVar12 = pbVar12 + 1;
                    } while ((uVar10 & 0xc0) == 0x80);
                  }
                  uVar10 = 0xfffd;
                  if ((0x7f < uVar8 && uVar8 >> 1 != 0x7fff) && uVar8 >> 0xb != 0x1b) {
                    uVar10 = uVar8;
                  }
                }
                if ((uVar10 == (byte)*puVar14) || (uVar10 == *(byte *)((long)puVar14 + 1))) {
                  uVar8 = *puVar14;
                  local_4c = uVar8;
                  if (uVar10 == (uVar8 & 0xff)) {
                    local_4c = uVar8 & 0xffffff00;
                  }
                  if (uVar10 == (uVar8 >> 8 & 0xff)) {
                    local_4c._0_2_ = (ushort)(byte)local_4c;
                  }
                  puVar14 = &local_4c;
                }
                goto LAB_0023bca4;
              }
            }
          }
          puVar6 = (ulong *)*param_1;
          *(undefined4 *)((long)param_1 + 0x24) = 1;
          if (*(long *)(lVar3 + 0x28) == local_48) {
            pcVar7 = "ESCAPE expression must be a single character";
LAB_0023bc44:
            FUN_0023c180(puVar6,pcVar7,0xffffffffffffffff,1,0xffffffffffffffff);
            return;
          }
          goto LAB_0023beec;
        }
        puVar6 = (ulong *)0x0;
      }
      else if (((*(ushort *)((long)puVar6 + 0x14) & 1) == 0) &&
              (puVar6 = (ulong *)FUN_0022ae18(puVar6,1), puVar6 != (ulong *)0x0)) goto LAB_0023bd94;
    }
  }
  else {
    uVar10 = (uint)*(byte *)((long)puVar14 + 2);
LAB_0023bca4:
    lVar15 = *param_3;
    if (lVar15 == 0) {
LAB_0023bcfc:
      lVar15 = 0;
      puVar6 = (ulong *)param_3[1];
    }
    else if ((((*(ushort *)(lVar15 + 0x14) ^ 0xffff) & 0x202) == 0) &&
            (*(char *)(lVar15 + 0x16) == '\x01')) {
      lVar15 = *(long *)(lVar15 + 8);
      puVar6 = (ulong *)param_3[1];
    }
    else {
      if ((*(ushort *)(lVar15 + 0x14) & 1) != 0) goto LAB_0023bcfc;
      lVar15 = FUN_0022ae18(lVar15,1);
      puVar6 = (ulong *)param_3[1];
    }
    if (puVar6 != (ulong *)0x0) {
      if ((((*(ushort *)((long)puVar6 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(byte *)((long)puVar6 + 0x16) == 1)) {
        puVar9 = (ulong *)puVar6[1];
      }
      else {
        if ((*(ushort *)((long)puVar6 + 0x14) & 1) != 0) goto LAB_0023be1c;
        puVar6 = (ulong *)FUN_0022ae18(puVar6,1);
        puVar9 = puVar6;
      }
      if ((puVar9 != (ulong *)0x0) && (lVar15 != 0)) {
        iVar4 = FUN_0023c540(lVar15,puVar9,puVar14,uVar10);
        puVar6 = (ulong *)*param_1;
        if ((*(ushort *)((long)puVar6 + 0x14) & 0x9000) == 0) {
          *puVar6 = (ulong)(iVar4 == 0);
          ((byte *)((long)puVar6 + 0x14))[0] = 4;
          ((byte *)((long)puVar6 + 0x14))[1] = 0;
        }
        else {
          puVar6 = (ulong *)FUN_0023c114();
        }
      }
    }
  }
LAB_0023be1c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0023beec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6);
}


// ===== 0023bef0  FUN_0023bef0 =====

void FUN_0023bef0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  int iVar2;
  double *pdVar3;
  ulong *puVar4;
  ulong uVar5;
  double dVar6;
  
  iVar2 = sqlite3_value_numeric_type(*param_3);
  if (0xfffffffd < iVar2 - 3U) {
    pdVar3 = (double *)*param_3;
    uVar1 = *(ushort *)((long)pdVar3 + 0x14);
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 & 0x24) == 0) {
        if ((uVar1 & 0x12) == 0) {
          dVar6 = 0.0;
        }
        else {
          dVar6 = (double)FUN_0022adb8();
        }
      }
      else {
        dVar6 = (double)(long)*pdVar3;
      }
    }
    else {
      dVar6 = *pdVar3;
    }
    puVar4 = (ulong *)*param_1;
    uVar5 = (ulong)(dVar6 != 0.0 && dVar6 < 0.0 == NAN(dVar6));
    if (dVar6 < 0.0) {
      uVar5 = 0xffffffffffffffff;
    }
    if ((*(ushort *)((long)puVar4 + 0x14) & 0x9000) != 0) {
      FUN_0023c114();
      return;
    }
    *puVar4 = uVar5;
    *(undefined2 *)((long)puVar4 + 0x14) = 4;
  }
  return;
}


// ===== 0023bfa4  sqlite3_value_numeric_type =====

void sqlite3_value_numeric_type(double *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  ulong uVar7;
  double dVar8;
  uint uVar9;
  ulong uVar10;
  double local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  uVar9 = (uint)uVar3;
  uVar10 = (ulong)uVar3 & 0x3f;
  if ((0x4000400040004U >> ((ulong)uVar3 & 0x3f) & 1) == 0) goto code_r0x0023c0d0;
  uVar2 = *(undefined1 *)((long)param_1 + 0x16);
  dVar8 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  iVar5 = FUN_0022c3dc(dVar8,&local_60,uVar1,uVar2);
  if (iVar5 < 1) goto code_r0x0023c0d0;
  if (iVar5 == 1) {
    if (local_60 <= -9.223372036854776e+18) {
      dVar6 = -0.0;
    }
    else if (local_60 < 9.223372036854776e+18 == NAN(local_60)) {
      dVar6 = NAN;
    }
    else {
      dVar6 = (double)(long)local_60;
    }
    if ((local_60 == 0.0) ||
       ((0xffe < (long)dVar6 + 0xfff8000000000000U >> 0x34 && (local_60 == (double)(long)dVar6)))) {
      *param_1 = dVar6;
      uVar7 = (ulong)(uVar3 | 4);
    }
    else {
      iVar5 = FUN_0022c964(dVar8,param_1,uVar1,uVar2);
      uVar9 = (uint)*(ushort *)((long)param_1 + 0x14);
      if (iVar5 != 0) goto LAB_0023c0b4;
      uVar7 = (ulong)(uVar9 | 4);
    }
  }
  else {
LAB_0023c0b4:
    uVar7 = (ulong)(uVar9 | 8);
    *param_1 = local_60;
  }
  uVar10 = uVar7 & 0x3d;
  *(ushort *)((long)param_1 + 0x14) = (ushort)uVar7 & 0xfffd;
code_r0x0023c0d0:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((&DAT_0017d33a)[uVar10]);
}


// ===== 0023c114  FUN_0023c114 =====

void FUN_0023c114(undefined8 *param_1,undefined8 param_2)

{
  if ((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) {
    FUN_0022c2ec(param_1);
  }
  *param_1 = param_2;
  *(undefined2 *)((long)param_1 + 0x14) = 4;
  return;
}


// ===== 0023c158  FUN_0023c158 =====

ulong FUN_0023c158(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0022ae18();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  }
  return uVar1;
}


// ===== 0023c180  FUN_0023c180 =====

undefined8 FUN_0023c180(long param_1,char *param_2,size_t param_3,byte param_4,code *param_5)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  void *__dest;
  undefined8 uVar9;
  size_t sVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_2 == (char *)0x0) {
    if ((*(ushort *)(param_1 + 0x14) & 0x9000) != 0) {
      FUN_0022c2ec(param_1);
      return 0;
    }
    uVar12 = 1;
LAB_0023c510:
    uVar9 = 0;
    *(ushort *)(param_1 + 0x14) = uVar12;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x18);
    if (lVar14 == 0) {
      uVar15 = 1000000000;
      if ((long)param_3 < 0) goto LAB_0023c228;
LAB_0023c1b0:
      uVar12 = 0x10;
      if (param_4 != 0) {
        uVar12 = 2;
      }
      if (param_4 < 2) {
        param_4 = 1;
      }
      sVar8 = param_3;
      if ((long)uVar15 < (long)param_3) {
LAB_0023c1d4:
        if ((code *)0x1 < param_5 + 1) {
          if (param_5 == FUN_0023cd80) {
            FUN_0022a888(lVar14,param_2);
          }
          else {
            (*param_5)(param_2);
          }
        }
        if ((*(ushort *)(param_1 + 0x14) & 0x9000) == 0) {
          *(undefined2 *)(param_1 + 0x14) = 1;
          lVar14 = *(long *)(param_1 + 0x18);
        }
        else {
          FUN_0022c2ec(param_1);
          lVar14 = *(long *)(param_1 + 0x18);
        }
        if (lVar14 != 0) {
          lVar14 = *(long *)(lVar14 + 0x158);
          if (lVar14 == 0) {
            return 0x12;
          }
          *(undefined4 *)(lVar14 + 0x18) = 0x12;
          *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
          return 0x12;
        }
        return 0x12;
      }
    }
    else {
      uVar15 = (ulong)*(int *)(lVar14 + 0x88);
      if (-1 < (long)param_3) goto LAB_0023c1b0;
LAB_0023c228:
      if (param_4 == 1) {
        sVar8 = strlen(param_2);
        param_4 = 1;
      }
      else {
        sVar10 = 0;
        sVar8 = sVar10;
        if (-1 < (long)uVar15) {
          do {
            sVar8 = sVar10;
            if ((param_2 + sVar10)[1] == '\0' && param_2[sVar10] == '\0') break;
            sVar10 = sVar10 + 2;
            sVar8 = (uVar15 & 0x7ffffffffffffffe) + 2;
          } while ((long)sVar10 <= (long)uVar15);
        }
      }
      uVar12 = 0x202;
      if ((long)uVar15 < (long)sVar8) goto LAB_0023c1d4;
    }
    if (param_5 == (code *)0xffffffffffffffff) {
      lVar14 = 1;
      if (param_4 != 1) {
        lVar14 = 2;
      }
      lVar2 = 0;
      if ((long)param_3 < 0) {
        lVar2 = lVar14;
      }
      sVar10 = lVar2 + sVar8;
      sVar3 = sVar10;
      if ((long)sVar10 < 0x21) {
        sVar3 = 0x20;
      }
      if ((int)sVar3 <= *(int *)(param_1 + 0x20)) {
        __dest = *(void **)(param_1 + 0x28);
        *(void **)(param_1 + 8) = __dest;
        *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0x2d;
LAB_0023c3e0:
        memcpy(__dest,param_2,sVar10);
        goto LAB_0023c3f0;
      }
      iVar7 = FUN_0022b8a0(param_1,sVar3,0);
      if (iVar7 == 0) {
        __dest = *(void **)(param_1 + 8);
        goto LAB_0023c3e0;
      }
    }
    else {
      if (((*(ushort *)(param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
        FUN_0022c29c(param_1);
      }
      *(char **)(param_1 + 8) = param_2;
      if (param_5 == FUN_0023cd80) {
        lVar14 = *(long *)(param_1 + 0x18);
        *(char **)(param_1 + 0x28) = param_2;
        if ((lVar14 == 0) || (*(char **)(lVar14 + 0x1f0) <= param_2)) {
LAB_0023c3a8:
          uVar6 = (*DAT_00313868)(param_2);
          *(undefined4 *)(param_1 + 0x20) = uVar6;
        }
        else if (param_2 < *(char **)(lVar14 + 0x1d8)) {
          if (param_2 < *(char **)(lVar14 + 0x1e0)) goto LAB_0023c3a8;
          *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(lVar14 + 0x19e);
        }
        else {
          *(undefined4 *)(param_1 + 0x20) = 0x80;
        }
      }
      else {
        uVar11 = 0x2000;
        if (param_5 != (code *)0x0) {
          uVar11 = 0x1000;
        }
        *(code **)(param_1 + 0x30) = param_5;
        uVar12 = uVar12 | uVar11;
      }
LAB_0023c3f0:
      uVar1 = (uint)sVar8 & 0x7fffffff;
      *(uint *)(param_1 + 0x10) = uVar1;
      *(ushort *)(param_1 + 0x14) = uVar12;
      *(byte *)(param_1 + 0x16) = param_4;
      if (param_4 < 2) {
        return 0;
      }
      if (uVar1 < 2) {
        return 0;
      }
      cVar4 = **(char **)(param_1 + 8);
      cVar5 = (*(char **)(param_1 + 8))[1];
      if ((cVar4 == -1) && (cVar5 == -2)) {
        uVar13 = 2;
      }
      else {
        if (cVar4 != -2) {
          return 0;
        }
        if (cVar5 != -1) {
          return 0;
        }
        uVar13 = 3;
      }
      iVar7 = FUN_0023cdc0(param_1);
      if (iVar7 == 0) {
        sVar10 = (long)*(int *)(param_1 + 0x10) - 2;
        *(int *)(param_1 + 0x10) = (int)sVar10;
        memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + 2),sVar10);
        *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x10)) = 0;
        *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x10) + 1) = 0;
        *(undefined1 *)(param_1 + 0x16) = uVar13;
        uVar12 = *(ushort *)(param_1 + 0x14) | 0x200;
        goto LAB_0023c510;
      }
    }
    uVar9 = 7;
  }
  return uVar9;
}


// ===== 0023c540  FUN_0023c540 =====

uint FUN_0023c540(byte *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  byte *local_78;
  char local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  long local_68;
  
  lVar2 = tpidr_el0;
  pbVar11 = (byte *)0x0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar17 = param_3[3];
LAB_0023c59c:
  do {
    local_78 = param_1 + 1;
    uVar9 = (uint)*param_1;
    uVar8 = (uint)param_3[1];
    if ((char)*param_1 < '\0') {
      if (uVar9 < 0xc0) goto LAB_0023c614;
      uVar15 = (uint)*local_78;
      uVar9 = (uint)(byte)(&DAT_0017da6c)[uVar9 - 0xc0];
      if ((*local_78 & 0xc0) == 0x80) {
        do {
          local_78 = local_78 + 1;
          uVar9 = uVar15 & 0x3f | uVar9 << 6;
          uVar15 = (uint)*local_78;
        } while ((uVar15 & 0xc0) == 0x80);
      }
      uVar10 = 0xfffd;
      if (((uVar9 >> 1 != 0x7fff) && (0x7f < uVar9)) && ((uVar9 & 0xfffff800) != 0xd800))
      goto LAB_0023c614;
    }
    else {
      if (uVar9 == 0) {
        uVar9 = (uint)(*param_2 != 0);
        goto LAB_0023ca28;
      }
LAB_0023c614:
      if (uVar9 == *param_3) goto LAB_0023ca6c;
      uVar10 = (ulong)uVar9;
    }
    uVar9 = 0xfffd;
    if ((uint)uVar10 == (uint)param_4) {
      if (param_3[2] != 0) {
        pbVar7 = param_2 + 1;
        bVar1 = *param_2;
        if (bVar1 < 0xc0) {
          uVar15 = (uint)bVar1;
          if (bVar1 == 0) goto LAB_0023ca24;
        }
        else {
          uVar15 = (uint)*pbVar7;
          uVar8 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
          if ((*pbVar7 & 0xc0) == 0x80) {
            do {
              pbVar7 = pbVar7 + 1;
              uVar8 = uVar15 & 0x3f | uVar8 << 6;
              uVar15 = (uint)*pbVar7;
            } while ((uVar15 & 0xc0) == 0x80);
          }
          uVar15 = uVar9;
          if ((0x7f < uVar8 && uVar8 >> 1 != 0x7fff) && uVar8 >> 0xb != 0x1b) {
            uVar15 = uVar8;
          }
        }
        pbVar5 = local_78 + 1;
        bVar1 = *local_78;
        uVar8 = uVar9;
        if (bVar1 < 0xc0) {
          if (bVar1 == 0x5e) {
            pbVar5 = local_78 + 2;
            bVar1 = local_78[1];
            if (0xbf < bVar1) {
              uVar13 = (uint)*pbVar5;
              uVar16 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
              if ((*pbVar5 & 0xc0) == 0x80) {
                do {
                  pbVar5 = pbVar5 + 1;
                  uVar16 = uVar13 & 0x3f | uVar16 << 6;
                  uVar13 = (uint)*pbVar5;
                } while ((uVar13 & 0xc0) == 0x80);
              }
              bVar4 = false;
              if ((0x7f < uVar16 && uVar16 >> 1 != 0x7fff) && uVar16 >> 0xb != 0x1b) {
                uVar8 = uVar16;
              }
              bVar12 = true;
              local_78 = pbVar5;
              goto LAB_0023c7f8;
            }
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          if (bVar1 == 0x5d) {
            local_78 = pbVar5 + 1;
            bVar4 = uVar15 == 0x5d;
            bVar1 = *pbVar5;
            uVar8 = (uint)bVar1;
            if (0xbf < bVar1) {
              uVar8 = (uint)*local_78;
              uVar16 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
              if ((*local_78 & 0xc0) == 0x80) {
                do {
                  local_78 = local_78 + 1;
                  uVar16 = uVar8 & 0x3f | uVar16 << 6;
                  uVar8 = (uint)*local_78;
                } while ((uVar8 & 0xc0) == 0x80);
              }
              uVar8 = uVar9;
              if ((0x7f < uVar16 && uVar16 >> 1 != 0x7fff) && uVar16 >> 0xb != 0x1b) {
                uVar8 = uVar16;
              }
            }
          }
          else {
            bVar4 = false;
            local_78 = pbVar5;
            uVar8 = (uint)bVar1;
          }
        }
        else {
          uVar13 = (uint)*pbVar5;
          uVar16 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
          if ((*pbVar5 & 0xc0) == 0x80) {
            do {
              pbVar5 = pbVar5 + 1;
              uVar16 = uVar13 & 0x3f | uVar16 << 6;
              uVar13 = (uint)*pbVar5;
            } while ((uVar13 & 0xc0) == 0x80);
          }
          bVar12 = false;
          bVar4 = false;
          local_78 = pbVar5;
          if ((0x7f < uVar16 && uVar16 >> 1 != 0x7fff) && uVar16 >> 0xb != 0x1b) {
            uVar8 = uVar16;
          }
        }
LAB_0023c7f8:
        uVar16 = 0;
        param_1 = local_78;
LAB_0023c818:
        if (uVar8 == 0x2d) {
          bVar1 = *param_1;
          if (((bVar1 == 0x5d) || (uVar16 == 0)) || (bVar1 == 0)) goto LAB_0023c83c;
          param_1 = param_1 + 1;
          uVar8 = (uint)bVar1;
          if (0xbf < bVar1) {
            uVar8 = (uint)*param_1;
            uVar13 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
            if ((*param_1 & 0xc0) == 0x80) {
              do {
                param_1 = param_1 + 1;
                uVar13 = uVar8 & 0x3f | uVar13 << 6;
                uVar8 = (uint)*param_1;
              } while ((uVar8 & 0xc0) == 0x80);
            }
            uVar8 = uVar9;
            if ((0x7f < uVar13 && uVar13 >> 1 != 0x7fff) && uVar13 >> 0xb != 0x1b) {
              uVar8 = uVar13;
            }
          }
          bVar3 = uVar16 <= uVar15;
          uVar16 = 0;
          if (uVar15 <= uVar8 && bVar3) {
            bVar4 = true;
          }
        }
        else {
          if (uVar8 == 0) goto LAB_0023ca24;
          if (uVar8 == 0x5d) goto LAB_0023c8fc;
LAB_0023c83c:
          uVar16 = uVar8;
          if (uVar15 == uVar8) {
            bVar4 = true;
          }
        }
        pbVar5 = param_1 + 1;
        bVar1 = *param_1;
        param_1 = pbVar5;
        uVar8 = (uint)bVar1;
        if (0xbf < bVar1) {
          uVar8 = (uint)*pbVar5;
          uVar10 = (ulong)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
          if ((*pbVar5 & 0xc0) == 0x80) {
            do {
              pbVar5 = pbVar5 + 1;
              uVar13 = uVar8 & 0x3f;
              uVar8 = (uint)*pbVar5;
              uVar10 = (ulong)(uVar13 | (int)uVar10 << 6);
            } while ((uVar8 & 0xc0) == 0x80);
          }
          uVar13 = (uint)uVar10;
          param_1 = pbVar5;
          uVar8 = uVar9;
          if ((0x7f < uVar13 && (int)(uVar10 >> 1) != 0x7fff) && uVar13 >> 0xb != 0x1b) {
            uVar8 = uVar13;
          }
        }
        goto LAB_0023c818;
      }
      pbVar11 = local_78 + 1;
      bVar1 = *local_78;
      uVar10 = (ulong)bVar1;
      if (bVar1 < 0xc0) {
        local_78 = pbVar11;
        if (bVar1 == 0) goto LAB_0023ca24;
      }
      else {
        uVar16 = (uint)*pbVar11;
        uVar15 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
        if ((*pbVar11 & 0xc0) == 0x80) {
          do {
            pbVar11 = pbVar11 + 1;
            uVar15 = uVar16 & 0x3f | uVar15 << 6;
            uVar16 = (uint)*pbVar11;
          } while ((uVar16 & 0xc0) == 0x80);
        }
        uVar16 = uVar9;
        if ((0x7f < uVar15 && uVar15 >> 1 != 0x7fff) && uVar15 >> 0xb != 0x1b) {
          uVar16 = uVar15;
        }
        uVar10 = (ulong)uVar16;
        local_78 = pbVar11;
      }
    }
    pbVar7 = param_2 + 1;
    bVar1 = *param_2;
    uVar14 = (ulong)bVar1;
    param_2 = pbVar7;
    if (0xbf < bVar1) {
      uVar16 = (uint)*pbVar7;
      uVar15 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
      if ((*pbVar7 & 0xc0) == 0x80) {
        do {
          pbVar7 = pbVar7 + 1;
          uVar15 = uVar16 & 0x3f | uVar15 << 6;
          uVar16 = (uint)*pbVar7;
        } while ((uVar16 & 0xc0) == 0x80);
      }
      if ((0x7f < uVar15 && uVar15 >> 1 != 0x7fff) && uVar15 >> 0xb != 0x1b) {
        uVar9 = uVar15;
      }
      uVar14 = (ulong)uVar9;
      param_2 = pbVar7;
    }
    uVar9 = (uint)uVar10;
    uVar15 = (uint)uVar14;
    param_1 = local_78;
    if ((uVar9 != uVar15) &&
       (((bVar17 == 0 || (0x7f < (uVar15 | uVar9))) ||
        ((&DAT_0017d228)[uVar10 & 0xff] != (&DAT_0017d228)[uVar14 & 0xff])))) {
      if (uVar9 != uVar8) goto LAB_0023ca24;
      uVar9 = 1;
      if ((uVar15 == 0) || (local_78 == pbVar11)) goto LAB_0023ca28;
    }
  } while( true );
  while( true ) {
    if (bVar17 < 0xc0) {
      param_2 = param_2 + 1;
      bVar17 = *param_2;
    }
    else {
      do {
        param_2 = param_2 + 1;
        bVar17 = *param_2;
      } while ((bVar17 & 0xc0) == 0x80);
    }
    uVar9 = 2;
    param_4 = uVar10;
    if (bVar17 == 0) break;
LAB_0023cb54:
    uVar9 = FUN_0023c540(pbVar11,param_2,param_3,param_4);
    if (uVar9 != 1) break;
  }
  goto LAB_0023ca28;
  while ((param_2 = pbVar7, uVar9 != uVar15 ||
         (uVar9 = FUN_0023c540(pbVar11,pbVar7,param_3,uVar10), uVar9 == 1))) {
LAB_0023cc00:
    pbVar7 = param_2 + 1;
    uVar9 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      if (0xbf < uVar9) {
        uVar16 = (uint)*pbVar7;
        uVar8 = (uint)(byte)(&DAT_0017da6c)[uVar9 - 0xc0];
        if ((*pbVar7 & 0xc0) == 0x80) {
          do {
            pbVar7 = pbVar7 + 1;
            uVar8 = uVar16 & 0x3f | uVar8 << 6;
            uVar16 = (uint)*pbVar7;
          } while ((uVar16 & 0xc0) == 0x80);
        }
        uVar9 = 0xfffd;
        if ((0x7f < uVar8 && uVar8 >> 1 != 0x7fff) && uVar8 >> 0xb != 0x1b) {
          uVar9 = uVar8;
        }
      }
    }
    else if (uVar9 == 0) goto LAB_0023ccec;
  }
  goto LAB_0023ca28;
  while( true ) {
    param_2 = param_2 + sVar6 + 1;
    uVar9 = FUN_0023c540(pbVar11,param_2,param_3,uVar10);
    if (uVar9 != 1) break;
LAB_0023cca8:
    sVar6 = strcspn((char *)param_2,&local_6c);
    if (param_2[sVar6] == 0) goto LAB_0023ccec;
  }
  goto LAB_0023ca28;
LAB_0023c8fc:
  param_2 = pbVar7;
  local_78 = param_1;
  if (bVar4 == bVar12) goto LAB_0023ca24;
  goto LAB_0023c59c;
LAB_0023ca24:
  uVar9 = 1;
  goto LAB_0023ca28;
  while (param_2 = pbVar11, bVar1 != 0) {
LAB_0023ca6c:
    do {
      pbVar11 = local_78 + 1;
      bVar1 = *local_78;
      uVar15 = (uint)bVar1;
      local_78 = pbVar11;
      if (0xbf < bVar1) {
        uVar15 = (uint)*pbVar11;
        uVar9 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
        if ((*pbVar11 & 0xc0) == 0x80) {
          do {
            pbVar11 = pbVar11 + 1;
            uVar9 = uVar15 & 0x3f | uVar9 << 6;
            uVar15 = (uint)*pbVar11;
          } while ((uVar15 & 0xc0) == 0x80);
        }
        uVar15 = 0xfffd;
        local_78 = pbVar11;
        if ((0x7f < uVar9 && uVar9 >> 1 != 0x7fff) && uVar9 >> 0xb != 0x1b) {
          uVar15 = uVar9;
        }
      }
      if ((uVar15 != *param_3) && (uVar8 == 0 || uVar15 != uVar8)) {
        if (uVar15 == 0) {
          uVar9 = 0;
          goto LAB_0023ca28;
        }
        uVar10 = param_4 & 0xffffffff;
        if (uVar15 == (uint)param_4) {
          if (param_3[2] != 0) {
            bVar17 = *param_2;
            if (bVar17 != 0) {
              pbVar11 = local_78 + -1;
              goto LAB_0023cb54;
            }
            goto LAB_0023ccec;
          }
          uVar15 = FUN_0023ccf8(&local_78);
          if (uVar15 == 0) goto LAB_0023ccec;
        }
        pbVar11 = local_78;
        if (0x7f < uVar15) goto LAB_0023cc00;
        if (bVar17 == 0) {
          local_6b = 0;
        }
        else {
          local_6a = 0;
          local_6b = (&DAT_0017d228)[uVar15];
          uVar15 = uVar15 & (~(uint)(byte)(&DAT_0017d382)[uVar15] | 0xffffffdf);
        }
        local_6c = (char)uVar15;
        goto LAB_0023cca8;
      }
    } while (uVar15 != uVar8);
    pbVar11 = param_2 + 1;
    bVar1 = *param_2;
    if (0xbf < bVar1) {
      bVar1 = *pbVar11;
      while (param_2 = pbVar11, (bVar1 & 0xc0) == 0x80) {
        pbVar11 = pbVar11 + 1;
        bVar1 = *pbVar11;
      }
      goto LAB_0023ca6c;
    }
  }
LAB_0023ccec:
  uVar9 = 2;
LAB_0023ca28:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0023ccf8  FUN_0023ccf8 =====

uint FUN_0023ccf8(long *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)*param_1;
  *param_1 = (long)(pbVar3 + 1);
  bVar1 = *pbVar3;
  uVar2 = (uint)bVar1;
  if (0xbf < bVar1) {
    uVar4 = (uint)(byte)(&DAT_0017da6c)[bVar1 - 0xc0];
    if ((pbVar3[1] & 0xc0) == 0x80) {
      pbVar3 = pbVar3 + 2;
      do {
        *param_1 = (long)pbVar3;
        bVar1 = *pbVar3;
        uVar4 = pbVar3[-1] & 0x3f | uVar4 << 6;
        pbVar3 = pbVar3 + 1;
      } while ((bVar1 & 0xc0) == 0x80);
    }
    uVar2 = 0xfffd;
    if ((0x7f < uVar4 && uVar4 >> 1 != 0x7fff) && uVar4 >> 0xb != 0x1b) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}


// ===== 0023cd80  FUN_0023cd80 =====

void FUN_0023cd80(long param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x67) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    iVar1 = *(int *)(param_1 + 0x198) + -1;
    *(int *)(param_1 + 0x198) = iVar1;
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0x19c) = 0;
      return;
    }
    *(undefined2 *)(param_1 + 0x19c) = *(undefined2 *)(param_1 + 0x19e);
    return;
  }
  return;
}


// ===== 0023cdc0  FUN_0023cdc0 =====

undefined8 FUN_0023cdc0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 5);
  if ((uVar3 & 0x12) == 0) goto LAB_0023ce70;
  if ((uVar3 >> 10 & 1) != 0) {
    iVar1 = *param_1 + param_1[4];
    if (iVar1 == 0 || iVar1 < 0 != SCARRY4(*param_1,param_1[4])) {
      if ((uVar3 >> 4 & 1) == 0) goto LAB_0023ce48;
      iVar1 = 1;
    }
    iVar1 = FUN_0022b8a0(param_1,iVar1,1);
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
    uVar3 = *(ushort *)(param_1 + 5) & 63999;
    param_1[4] = param_1[4] + *param_1;
    *(ushort *)(param_1 + 5) = uVar3;
  }
LAB_0023ce48:
  if ((param_1[8] == 0) || (*(long *)(param_1 + 2) != *(long *)(param_1 + 10))) {
    uVar2 = FUN_0022c22c(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = *(ushort *)(param_1 + 5);
  }
LAB_0023ce70:
  *(ushort *)(param_1 + 5) = uVar3 & 0xbfff;
  return 0;
}


// ===== 0023ce88  FUN_0023ce88 =====

undefined8 FUN_0023ce88(long param_1,uint param_2)

{
  void *__s;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)puVar2 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec(puVar2);
    }
    uVar1 = 0;
    puVar2[1] = 0;
  }
  else {
    if (*(int *)(puVar2 + 4) < (int)param_2) {
      FUN_0022b8a0(puVar2,(ulong)param_2,0);
      __s = (void *)puVar2[1];
    }
    else {
      __s = (void *)puVar2[5];
      puVar2[1] = __s;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined2 *)((long)puVar2 + 0x14) = 0x8000;
    *puVar2 = uVar1;
    if (__s == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      memset(__s,0,(ulong)param_2);
      uVar1 = puVar2[1];
    }
  }
  return uVar1;
}


// ===== 0023cf4c  sqlite3_result_error_nomem =====

void sqlite3_result_error_nomem(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((*(ushort *)(lVar1 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)(lVar1 + 0x14) = 1;
  }
  else {
    FUN_0022c2ec();
    lVar1 = *param_1;
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  *(undefined4 *)((long)param_1 + 0x24) = 7;
  if ((*(char *)(lVar1 + 0x67) == '\0') && (*(char *)(lVar1 + 0x68) == '\0')) {
    *(undefined1 *)(lVar1 + 0x67) = 1;
    if (0 < *(int *)(lVar1 + 0xdc)) {
      *(undefined4 *)(lVar1 + 400) = 1;
    }
    *(undefined2 *)(lVar1 + 0x19c) = 0;
    *(int *)(lVar1 + 0x198) = *(int *)(lVar1 + 0x198) + 1;
    if (*(long *)(lVar1 + 0x158) != 0) {
      FUN_0022aac0(*(long *)(lVar1 + 0x158),"out of memory");
      lVar2 = *(long *)(*(long *)(lVar1 + 0x158) + 0x100);
      *(undefined4 *)(*(long *)(lVar1 + 0x158) + 0x18) = 7;
      for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x100)) {
        *(undefined4 *)(lVar2 + 0x18) = 7;
        *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
      }
    }
  }
  return;
}


// ===== 0023d018  FUN_0023d018 =====

void FUN_0023d018(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  iVar1 = FUN_0023c180(piVar3,param_2,(long)param_3);
  if (iVar1 != 0) {
    if (iVar1 != 0x12) {
      sqlite3_result_error_nomem(param_1);
      return;
    }
LAB_0023d0ac:
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  uVar2 = (uint)*(ushort *)(piVar3 + 5);
  if ((*(ushort *)(piVar3 + 5) >> 1 & 1) == 0) {
    *(char *)((long)piVar3 + 0x16) = *(char *)(param_1 + 5);
  }
  else if (*(char *)((long)piVar3 + 0x16) != *(char *)(param_1 + 5)) {
    FUN_0022bb2c(piVar3);
    uVar2 = (uint)*(ushort *)(piVar3 + 5);
  }
  if ((uVar2 & 0x12) != 0) {
    iVar1 = piVar3[4];
    if ((uVar2 >> 10 & 1) != 0) {
      iVar1 = *piVar3 + iVar1;
    }
    if (*(int *)(*(long *)(piVar3 + 6) + 0x88) < iVar1) goto LAB_0023d0ac;
  }
  return;
}


// ===== 0023d0e4  FUN_0023d0e4 =====

void FUN_0023d0e4(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_2 + 0x1c);
  if (bVar3 == 0) {
    if ((*(byte *)((long)param_2 + 0x1d) >> 2 & 1) != 0) {
      FUN_0023d018(param_1,param_2[1],*(undefined4 *)(param_2 + 3),1,FUN_0023cd80);
      return;
    }
    pcVar1 = "";
    uVar2 = 0;
  }
  else {
    *(uint *)((long)param_1 + 0x24) = (uint)bVar3;
    if ((*(ushort *)(*param_1 + 0x14) & 1) == 0) goto LAB_0023d1b0;
    if (bVar3 == 100) {
      pcVar1 = "another row available";
    }
    else if (bVar3 == 0x65) {
      pcVar1 = "no more rows available";
    }
    else {
      if ((bVar3 < 0x1d) && ((0x1410004U >> ((ulong)bVar3 & 0x3f) & 1) == 0)) {
        uVar2 = 0xffffffff;
        pcVar1 = (&PTR_s_not_an_error_0030cfd8)[bVar3];
        goto LAB_0023d1a4;
      }
      pcVar1 = "unknown error";
    }
    uVar2 = 0xffffffff;
  }
LAB_0023d1a4:
  FUN_0023d018(param_1,pcVar1,uVar2,1,0);
LAB_0023d1b0:
  bVar3 = *(byte *)((long)param_2 + 0x1d);
  if ((bVar3 >> 2 & 1) != 0) {
    if (param_2[1] != 0) {
      FUN_0022a888(*param_2);
      bVar3 = *(byte *)((long)param_2 + 0x1d);
    }
    *(byte *)((long)param_2 + 0x1d) = bVar3 & 0xfb;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[1] = 0;
  return;
}


// ===== 0023d1ec  sqlite3_value_blob =====

undefined8 sqlite3_value_blob(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 5);
  if ((uVar4 & 0x12) == 0) {
    if ((((uVar4 ^ 0xffff) & 0x202) != 0) || (*(char *)((long)param_1 + 0x16) != '\x01')) {
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      uVar2 = FUN_0022ae18(param_1,1);
      return uVar2;
    }
    goto LAB_0023d290;
  }
  iVar1 = param_1[4];
  if ((uVar4 >> 10 & 1) != 0) {
    iVar3 = *param_1 + iVar1;
    if (iVar3 == 0 || iVar3 < 0 != SCARRY4(*param_1,iVar1)) {
      if ((uVar4 >> 4 & 1) == 0) goto LAB_0023d268;
      iVar3 = 1;
    }
    iVar1 = FUN_0022b8a0(param_1,iVar3,1);
    if (iVar1 != 0) {
      return 0;
    }
    memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
    iVar1 = param_1[4] + *param_1;
    uVar4 = *(ushort *)(param_1 + 5) & 63999;
    param_1[4] = iVar1;
  }
LAB_0023d268:
  *(ushort *)(param_1 + 5) = uVar4 | 0x10;
  if (iVar1 == 0) {
    return 0;
  }
LAB_0023d290:
  return *(undefined8 *)(param_1 + 2);
}


// ===== 0023d2bc  sqlite3_result_value =====

void sqlite3_result_value(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  piVar4 = (int *)*param_1;
  if ((*(ushort *)(piVar4 + 5) & 0x9000) != 0) {
    FUN_0022c2ec(piVar4);
  }
  uVar2 = param_2[2];
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(ulong *)(piVar4 + 4) = uVar2;
  *(undefined8 *)(piVar4 + 2) = uVar6;
  *(undefined8 *)piVar4 = uVar5;
  uVar1 = (uint)(uVar2 >> 0x20) & 0xefff;
  *(ushort *)(piVar4 + 5) = (ushort)uVar1;
  if (((uVar2 & 0x1200000000) != 0) && ((*(ushort *)((long)param_2 + 0x14) >> 0xd & 1) == 0)) {
    *(ushort *)(piVar4 + 5) = (ushort)uVar1 | 0x4000;
    FUN_0023cdc0(piVar4);
    uVar1 = (uint)*(ushort *)(piVar4 + 5);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    *(char *)((long)piVar4 + 0x16) = *(char *)(param_1 + 5);
  }
  else if (*(char *)((long)piVar4 + 0x16) != *(char *)(param_1 + 5)) {
    FUN_0022bb2c(piVar4);
    uVar1 = (uint)*(ushort *)(piVar4 + 5);
  }
  if ((uVar1 & 0x12) != 0) {
    iVar3 = piVar4[4];
    if ((uVar1 >> 10 & 1) != 0) {
      iVar3 = *piVar4 + iVar3;
    }
    if (*(int *)(*(long *)(piVar4 + 6) + 0x88) < iVar3) {
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
      return;
    }
  }
  return;
}


// ===== 0023d3c8  FUN_0023d3c8 =====

ulong FUN_0023d3c8(double *param_1,double *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(ushort *)((long)param_1 + 0x14);
  uVar2 = *(ushort *)((long)param_2 + 0x14);
  uVar3 = uVar2 | uVar1;
  if ((uVar3 & 1) != 0) {
    return (ulong)((uVar2 & 1) - (uVar1 & 1));
  }
  if ((uVar3 & 0x2c) == 0) {
    if ((uVar3 >> 1 & 1) != 0) {
      if ((uVar1 >> 1 & 1) == 0) {
        return 1;
      }
      if ((uVar2 >> 1 & 1) == 0) {
        return 0xffffffff;
      }
      if (param_3 != 0) {
        uVar9 = FUN_0023d560();
        return uVar9;
      }
    }
    uVar9 = FUN_0023d74c();
    return uVar9;
  }
  if ((uVar2 & uVar1 & 0x24) == 0) {
    if (((uVar2 & uVar1) >> 3 & 1) != 0) {
      dVar10 = *param_1;
      dVar11 = *param_2;
      bVar4 = NAN(dVar10) || NAN(dVar11);
      bVar6 = dVar10 == dVar11;
      bVar5 = dVar10 < dVar11;
      if (bVar5) {
        return 0xffffffff;
      }
      goto LAB_0023d484;
    }
    if ((uVar1 & 0x24) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        return 1;
      }
      if ((uVar2 & 0x24) == 0) {
        return 0xffffffff;
      }
      dVar10 = *param_1;
      uVar13 = FUN_00227bd8(*param_2);
      uVar14 = FUN_00226904(dVar10);
      iVar7 = FUN_00221f28(uVar13,uVar14);
      uVar12 = -(uint)(0 < iVar7);
      iVar7 = FUN_00221e88(uVar13,uVar14);
      if (iVar7 < 0) {
        uVar12 = 1;
      }
      return (ulong)uVar12;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      dVar10 = *param_2;
      uVar13 = FUN_00227bd8(*param_1);
      uVar14 = FUN_00226904(dVar10);
      iVar7 = FUN_00221f28(uVar13,uVar14);
      iVar8 = FUN_00221e88(uVar13,uVar14);
      uVar12 = (uint)(0 < iVar7);
      if (iVar8 < 0) {
        uVar12 = 0xffffffff;
      }
      return (ulong)uVar12;
    }
    if ((uVar2 & 0x24) == 0) {
      return 0xffffffff;
    }
  }
  dVar10 = *param_1;
  dVar11 = *param_2;
  bVar4 = SBORROW8((long)dVar10,(long)dVar11);
  bVar5 = (long)dVar10 - (long)dVar11 < 0;
  bVar6 = dVar10 == dVar11;
  if ((long)dVar10 < (long)dVar11) {
    return 0xffffffff;
  }
LAB_0023d484:
  return (ulong)(!bVar6 && bVar5 == bVar4);
}


// ===== 0023d560  FUN_0023d560 =====

ulong FUN_0023d560(undefined8 *param_1,undefined8 *param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar5 = *(char *)(param_3 + 8);
  if (*(char *)((long)param_1 + 0x16) == cVar5) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0023d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_1 + 2),param_1[1],
                         *(undefined4 *)(param_2 + 2),param_2[1]);
      return uVar2;
    }
    goto LAB_0023d748;
  }
  local_60 = param_1[2];
  local_98 = param_1[3];
  lStack_68 = param_1[1];
  local_70 = *param_1;
  local_50 = 0;
  local_90 = 0;
  if ((*(byte *)((long)param_1 + 0x15) >> 5 & 1) == 0) {
    local_60 = local_60 & 0xffff8fffffffffff | 0x400000000000;
  }
  lStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_a0 = param_2[2];
  if ((*(byte *)((long)param_2 + 0x15) >> 5 & 1) == 0) {
    local_a0 = local_a0 & 0xffff8fffffffffff | 0x400000000000;
  }
  uStack_58 = local_98;
  if ((((local_60._4_2_ ^ 0xffff) & 0x202) != 0) || (lVar3 = lStack_68, local_60._6_1_ != cVar5)) {
    if ((local_60 & 0x100000000) == 0) {
      lVar3 = FUN_0022ae18(&local_70,cVar5);
      cVar5 = *(char *)(param_3 + 8);
    }
    else {
      lVar3 = 0;
    }
  }
  if ((((local_a0._4_2_ ^ 0xffff) & 0x202) == 0) && (local_a0._6_1_ == cVar5)) {
    lVar4 = lStack_a8;
    if (lVar3 == 0) goto LAB_0023d6f0;
LAB_0023d6d0:
    if (lVar4 == 0) goto LAB_0023d6f0;
    uVar2 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x10),local_60 & 0xffffffff,lVar3,
                       local_a0 & 0xffffffff);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    if (((local_a0 & 0x100000000) == 0) && (lVar4 = FUN_0022ae18(&local_b0,cVar5), lVar3 != 0))
    goto LAB_0023d6d0;
LAB_0023d6f0:
    uVar2 = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 7;
    }
  }
  if (local_50 != 0) {
    FUN_0022c29c(&local_70);
  }
  if (local_90 != 0) {
    FUN_0022c29c(&local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
LAB_0023d748:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0023d74c  FUN_0023d74c =====

int FUN_0023d74c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  
  uVar4 = *(ushort *)(param_1 + 5);
  uVar2 = param_1[4];
  uVar7 = (ulong)uVar2;
  uVar3 = param_2[4];
  uVar9 = (ulong)uVar3;
  if (((*(ushort *)(param_2 + 5) | uVar4) >> 10 & 1) == 0) {
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    iVar5 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)(int)uVar1);
    iVar6 = uVar2 - uVar3;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
  }
  else if ((uVar4 & 0x400 & *(ushort *)(param_2 + 5)) == 0) {
    if ((uVar4 & 0x400) == 0) {
      if (0 < (int)uVar2) {
        pcVar8 = *(char **)(param_1 + 2);
        do {
          if (*pcVar8 != '\0') {
            return 1;
          }
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      iVar6 = uVar2 - *param_2;
    }
    else {
      if (0 < (int)uVar3) {
        pcVar8 = *(char **)(param_2 + 2);
        do {
          if (*pcVar8 != '\0') {
            return -1;
          }
          uVar9 = uVar9 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar9 != 0);
      }
      iVar6 = *param_1 - uVar3;
    }
  }
  else {
    iVar6 = *param_1 - *param_2;
  }
  return iVar6;
}


// ===== 0023d824  sqlite3_value_dup =====

undefined8 * sqlite3_value_dup(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)FUN_0022a6ac(0x38);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = param_1[2];
    uVar6 = param_1[1];
    uVar5 = *param_1;
    puVar3[2] = uVar4;
    puVar3[3] = 0;
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    uVar1 = (ushort)(uVar4 >> 0x20);
    *(ushort *)((long)puVar3 + 0x14) = uVar1 & 0xefff;
    if ((uVar4 & 0x1200000000) == 0) {
      if ((uVar4 & 0x100000000) == 0) {
        return puVar3;
      }
      *(ushort *)((long)puVar3 + 0x14) = uVar1 & 0xe5ed;
      return puVar3;
    }
    *(ushort *)((long)puVar3 + 0x14) = uVar1 & 0x8fff | 0x4000;
    iVar2 = FUN_0023cdc0();
    if (iVar2 == 0) {
      return puVar3;
    }
    if (((*(ushort *)((long)puVar3 + 0x14) & 0x9000) != 0) || (*(int *)(puVar3 + 4) != 0)) {
      FUN_0022c29c(puVar3);
    }
    FUN_0022a888(puVar3[3]);
  }
  return (undefined8 *)0x0;
}


// ===== 0023d8fc  sqlite3_compileoption_used =====

undefined8 sqlite3_compileoption_used(byte *param_1)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *__s;
  
  if (param_1 == (byte *)0x0) {
    __s = (byte *)0x0;
    uVar8 = 0;
    goto LAB_0023dac4;
  }
  bVar1 = *param_1;
  if (bVar1 == 0) {
    cVar6 = '\0';
    pcVar5 = "SQLITE_";
LAB_0023da98:
    lVar4 = 7;
    if (cVar6 != (&DAT_0017d228)[(byte)*pcVar5]) {
      lVar4 = 0;
    }
  }
  else {
    if ((bVar1 & 0xdf) != 0x53) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "SQLITE_";
LAB_0023da94:
      cVar6 = *pcVar7;
      goto LAB_0023da98;
    }
    bVar1 = param_1[1];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "QLITE_";
      goto LAB_0023da98;
    }
    if ((bVar1 & 0xdf) != 0x51) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "QLITE_";
      goto LAB_0023da94;
    }
    bVar1 = param_1[2];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "LITE_";
      goto LAB_0023da98;
    }
    if ((bVar1 & 0xdf) != 0x4c) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "LITE_";
      goto LAB_0023da94;
    }
    bVar1 = param_1[3];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "ITE_";
      goto LAB_0023da98;
    }
    if ((bVar1 & 0xdf) != 0x49) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "ITE_";
      goto LAB_0023da94;
    }
    bVar1 = param_1[4];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "TE_";
      goto LAB_0023da98;
    }
    if ((bVar1 & 0xdf) != 0x54) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "TE_";
      goto LAB_0023da94;
    }
    bVar1 = param_1[5];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "E_";
      goto LAB_0023da98;
    }
    if ((bVar1 & 0xdf) != 0x45) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "E_";
      goto LAB_0023da94;
    }
    bVar1 = param_1[6];
    if (bVar1 == 0) {
      cVar6 = '\0';
      pcVar5 = "_";
      goto LAB_0023da98;
    }
    if (bVar1 != 0x5f) {
      pcVar7 = &DAT_0017d228 + bVar1;
      pcVar5 = "_";
      goto LAB_0023da94;
    }
    lVar4 = 7;
  }
  __s = param_1 + lVar4;
  sVar3 = strlen((char *)__s);
  uVar8 = (uint)sVar3 & 0x3fffffff;
LAB_0023dac4:
  lVar4 = 0;
  do {
    pbVar9 = (&PTR_s_ATOMIC_INTRINSICS_1_0030d0d0)[lVar4];
    if (param_1 == (byte *)0x0) {
      if (pbVar9 == (byte *)0x0) goto LAB_0023dae8;
    }
    else if (pbVar9 != (byte *)0x0) {
      pbVar10 = pbVar9;
      pbVar12 = __s;
      uVar11 = uVar8 + 1;
      if (uVar8 != 0) {
        do {
          if ((ulong)*pbVar12 == 0) {
            cVar6 = '\0';
            cVar2 = (&DAT_0017d228)[*pbVar10];
LAB_0023db70:
            if (cVar6 != cVar2) goto LAB_0023daf8;
            break;
          }
          cVar6 = (&DAT_0017d228)[*pbVar12];
          cVar2 = (&DAT_0017d228)[*pbVar10];
          if (cVar6 != cVar2) goto LAB_0023db70;
          uVar11 = uVar11 - 1;
          pbVar10 = pbVar10 + 1;
          pbVar12 = pbVar12 + 1;
        } while (1 < uVar11);
      }
LAB_0023dae8:
      if (((&DAT_0017d382)[pbVar9[uVar8]] & 0x46) == 0) {
        return 1;
      }
    }
LAB_0023daf8:
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x24) {
      return 0;
    }
  } while( true );
}


// ===== 0023db98  sqlite3_load_extension =====

void sqlite3_load_extension(long *param_1,byte *param_2,char *param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  code *pcVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  void *__s;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  char cVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1[3] != 0) {
    (*DAT_003138b0)();
  }
  lVar19 = *param_1;
  local_70 = (char *)0x0;
  sVar4 = strlen((char *)param_2);
  if (param_4 == (long *)0x0) {
    if ((*(byte *)((long)param_1 + 0x32) & 1) != 0) goto LAB_0023dc28;
    goto LAB_0023e284;
  }
  *param_4 = 0;
  if ((*(byte *)((long)param_1 + 0x32) & 1) == 0) {
    lVar19 = sqlite3_mprintf("not authorized");
    uVar11 = 1;
    *param_4 = lVar19;
  }
  else {
LAB_0023dc28:
    pcVar18 = "sqlite3_extension_init";
    if (param_3 != (char *)0x0) {
      pcVar18 = param_3;
    }
    if (0x1000 < sVar4) {
LAB_0023dc44:
      if (param_4 != (long *)0x0) {
        iVar3 = sqlite3_initialize();
        if (iVar3 == 0) {
          lVar8 = FUN_0022a6ac(sVar4 + 300);
          *param_4 = lVar8;
          if (lVar8 != 0) {
            sqlite3_snprintf(sVar4 + 300 & 0xffffffff,lVar8,"unable to open shared library [%.*s]",
                             0x1000,param_2);
            (**(code **)(lVar19 + 0x50))(lVar19,(int)sVar4 + 299,lVar8);
          }
        }
        else {
          *param_4 = 0;
        }
      }
      goto LAB_0023e284;
    }
    lVar8 = (**(code **)(lVar19 + 0x48))(lVar19,param_2);
    if (lVar8 == 0) {
      pcVar9 = (char *)sqlite3_mprintf("%s.%s",param_2,&DAT_0016f9fc);
      if (pcVar9 != (char *)0x0) {
        lVar8 = (**(code **)(lVar19 + 0x48))(lVar19,pcVar9);
        puVar15 = &DAT_00313858;
        if (DAT_00313830 == 0) {
LAB_0023de38:
          (*(code *)*puVar15)(pcVar9);
        }
        else {
          if (DAT_00316f08 != (char *)0x0) {
            (*DAT_003138b0)();
          }
          iVar3 = (*DAT_00313868)(pcVar9);
          DAT_00316e60 = DAT_00316e60 - iVar3;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(pcVar9);
          if (DAT_00316f08 != (char *)0x0) {
            puVar15 = &DAT_003138c0;
            pcVar9 = DAT_00316f08;
            goto LAB_0023de38;
          }
        }
        if (lVar8 == 0) goto LAB_0023dc44;
        goto LAB_0023dc70;
      }
LAB_0023dfb0:
      uVar11 = 7;
    }
    else {
LAB_0023dc70:
      pcVar5 = (code *)(**(code **)(lVar19 + 0x58))(lVar19,lVar8,pcVar18);
      if (param_3 == (char *)0x0 && pcVar5 == (code *)0x0) {
        if (param_2 == (byte *)0x0) {
          uVar20 = 0;
          iVar3 = sqlite3_initialize();
        }
        else {
          sVar6 = strlen((char *)param_2);
          uVar20 = (uint)sVar6 & 0x3fffffff;
          iVar3 = sqlite3_initialize();
        }
        if ((iVar3 != 0) || (pcVar9 = (char *)FUN_0022a6ac(uVar20 + 0x1e), pcVar9 == (char *)0x0)) {
          (**(code **)(lVar19 + 0x60))(lVar19,lVar8);
          uVar11 = 7;
          goto LAB_0023e288;
        }
        builtin_strncpy(pcVar9,"sqlite3_",8);
        uVar10 = (ulong)uVar20;
        do {
          uVar13 = uVar10;
          if ((long)uVar13 < 1) {
            uVar13 = 0;
            pbVar16 = param_2;
            iVar3 = 0;
            if (param_2 == (byte *)0x0) goto LAB_0023e0ec;
            goto LAB_0023dfc8;
          }
          uVar10 = uVar13 - 1;
        } while (param_2[uVar13 - 1] != 0x2f);
        pbVar16 = param_2 + (uVar13 & 0xffffffff);
LAB_0023dfc8:
        bVar1 = *pbVar16;
        iVar12 = (int)uVar13;
        if (bVar1 == 0) {
          cVar17 = '\0';
          pbVar16 = &DAT_0016f9ff;
LAB_0023e0c8:
          iVar3 = iVar12 + 3;
          if (cVar17 != (&DAT_0017d228)[*pbVar16]) {
            iVar3 = iVar12;
          }
        }
        else {
          if ((bVar1 & 0xdf) != 0x4c) {
            pcVar18 = &DAT_0017d228 + bVar1;
            pbVar16 = &DAT_0016f9ff;
LAB_0023e0c4:
            cVar17 = *pcVar18;
            goto LAB_0023e0c8;
          }
          bVar1 = pbVar16[1];
          if (bVar1 == 0) {
            cVar17 = '\0';
            pbVar16 = &DAT_0016fa00;
            goto LAB_0023e0c8;
          }
          if ((bVar1 & 0xdf) != 0x49) {
            pcVar18 = &DAT_0017d228 + bVar1;
            pbVar16 = &DAT_0016fa00;
            goto LAB_0023e0c4;
          }
          bVar1 = pbVar16[2];
          if (bVar1 == 0) {
            cVar17 = '\0';
            pbVar16 = &DAT_0016fa01;
            goto LAB_0023e0c8;
          }
          if ((bVar1 & 0xdf) != 0x42) {
            pcVar18 = &DAT_0017d228 + bVar1;
            pbVar16 = &DAT_0016fa01;
            goto LAB_0023e0c4;
          }
          iVar3 = iVar12 + 3;
        }
LAB_0023e0ec:
        pbVar16 = param_2 + iVar3;
        iVar3 = 8;
        while( true ) {
          pbVar14 = pbVar16 + 1;
          bVar1 = *pbVar16;
          if ((bVar1 == 0) || (bVar1 == 0x2e)) break;
          pbVar16 = pbVar14;
          if (((byte)(&DAT_0017d382)[bVar1] >> 1 & 1) != 0) {
            pcVar9[iVar3] = (&DAT_0017d228)[bVar1];
            iVar3 = iVar3 + 1;
          }
        }
        builtin_strncpy(pcVar9 + iVar3,"_init",6);
        pcVar5 = (code *)(**(code **)(lVar19 + 0x58))(lVar19,lVar8,pcVar9);
        pcVar18 = pcVar9;
        if (pcVar5 != (code *)0x0) {
          puVar15 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != (char *)0x0) {
              (*DAT_003138b0)();
            }
            iVar3 = (*DAT_00313868)(pcVar9);
            DAT_00316e60 = DAT_00316e60 - iVar3;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(pcVar9);
            if (DAT_00316f08 == (char *)0x0) goto code_r0x0023dcb4;
            puVar15 = &DAT_003138c0;
            pcVar9 = DAT_00316f08;
          }
          (*(code *)*puVar15)(pcVar9);
          goto code_r0x0023dcb4;
        }
joined_r0x0023df14:
        if (param_4 != (long *)0x0) {
          sVar6 = strlen(pcVar18);
          iVar3 = sqlite3_initialize();
          if (iVar3 == 0) {
            uVar10 = sVar4 + sVar6 + 300;
            lVar7 = FUN_0022a6ac(uVar10);
            *param_4 = lVar7;
            if (lVar7 != 0) {
              sqlite3_snprintf(uVar10 & 0xffffffff,lVar7,
                               "no entry point [%s] in shared library [%s]",pcVar18,param_2);
              (**(code **)(lVar19 + 0x50))(lVar19,(int)uVar10 + -1,lVar7);
            }
          }
          else {
            *param_4 = 0;
          }
        }
        (**(code **)(lVar19 + 0x60))(lVar19,lVar8);
        if (pcVar9 != (char *)0x0) {
          puVar15 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != (char *)0x0) {
              (*DAT_003138b0)();
            }
            iVar3 = (*DAT_00313868)(pcVar9);
            DAT_00316e60 = DAT_00316e60 - iVar3;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(pcVar9);
            if (DAT_00316f08 == (char *)0x0) goto LAB_0023e284;
            puVar15 = &DAT_003138c0;
            pcVar9 = DAT_00316f08;
          }
          (*(code *)*puVar15)(pcVar9);
        }
LAB_0023e284:
        uVar11 = 1;
      }
      else {
        if (pcVar5 == (code *)0x0) {
          pcVar9 = (char *)0x0;
          goto joined_r0x0023df14;
        }
code_r0x0023dcb4:
        iVar3 = (*pcVar5)(param_1,&local_70,&PTR_sqlite3_aggregate_context_0030c220);
        if (iVar3 == 0) {
          lVar19 = (long)*(int *)((long)param_1 + 0xe4) * 8;
          __s = (void *)FUN_0022a5f4(param_1,lVar19 + 8);
          if (__s == (void *)0x0) goto LAB_0023dfb0;
          memset(__s,0,lVar19 + 8);
          if (0 < (int)*(uint *)((long)param_1 + 0xe4)) {
            memcpy(__s,(void *)param_1[0x1d],(ulong)*(uint *)((long)param_1 + 0xe4) << 3);
          }
          if (param_1[0x1d] != 0) {
            FUN_0022a888(param_1);
          }
          iVar3 = *(int *)((long)param_1 + 0xe4);
          param_1[0x1d] = (long)__s;
          *(long *)((long)__s + (long)iVar3 * 8) = lVar8;
          *(int *)((long)param_1 + 0xe4) = iVar3 + 1;
        }
        else if (iVar3 != 0x100) {
          if (param_4 != (long *)0x0) {
            lVar7 = sqlite3_mprintf("error during initialization: %s",local_70);
            *param_4 = lVar7;
          }
          pcVar18 = local_70;
          if (local_70 != (char *)0x0) {
            puVar15 = &DAT_00313858;
            if (DAT_00313830 != 0) {
              if (DAT_00316f08 != (char *)0x0) {
                (*DAT_003138b0)();
              }
              iVar3 = (*DAT_00313868)(pcVar18);
              DAT_00316e60 = DAT_00316e60 - iVar3;
              DAT_00316ea8 = DAT_00316ea8 + -1;
              (*DAT_00313858)(pcVar18);
              if (DAT_00316f08 == (char *)0x0) goto LAB_0023dd70;
              puVar15 = &DAT_003138c0;
              pcVar18 = DAT_00316f08;
            }
            (*(code *)*puVar15)(pcVar18);
          }
LAB_0023dd70:
          (**(code **)(lVar19 + 0x60))(lVar19,lVar8);
          goto LAB_0023e284;
        }
        uVar11 = 0;
        uVar10 = 0;
        if (*(char *)((long)param_1 + 0x67) == '\0') goto LAB_0023e290;
      }
    }
  }
LAB_0023e288:
  uVar10 = FUN_0023e2e4(param_1,uVar11);
LAB_0023e290:
  if (param_1[3] != 0) {
    uVar10 = uVar10 & 0xffffffff;
    (*DAT_003138c0)(param_1[3]);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


// ===== 0023e2e4  FUN_0023e2e4 =====

uint FUN_0023e2e4(long param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if ((param_2 == 0xc0a) || (*(char *)(param_1 + 0x67) != '\0')) {
    if ((*(char *)(param_1 + 0x67) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) {
      *(undefined1 *)(param_1 + 0x67) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
      iVar1 = *(int *)(param_1 + 0x198) + -1;
      *(int *)(param_1 + 0x198) = iVar1;
      uVar2 = 0;
      if (iVar1 == 0) {
        uVar2 = *(undefined2 *)(param_1 + 0x19e);
      }
      *(undefined2 *)(param_1 + 0x19c) = uVar2;
    }
    param_2 = 7;
    *(undefined4 *)(param_1 + 0x50) = 7;
    FUN_0023e358(param_1,7);
  }
  else {
    param_2 = *(uint *)(param_1 + 0x58) & param_2;
  }
  return param_2;
}


// ===== 0023e358  FUN_0023e358 =====

void FUN_0023e358(long *param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = param_1[0x31];
  if (lVar2 != 0) {
    if ((*(ushort *)(lVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar2 + 0x14) = 1;
    }
    else {
      FUN_0022c2ec();
    }
  }
  if ((param_2 != 0xc0a) && ((param_2 & 0xfb) == 10)) {
    pcVar3 = *(code **)(*param_1 + 0x80);
    if (pcVar3 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*pcVar3)(*param_1,0,0);
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar1;
  }
  return;
}


// ===== 0023e3e4  sqlite3_aggregate_context =====

undefined8 sqlite3_aggregate_context(long param_1)

{
  undefined8 uVar1;
  
  if (-1 < *(short *)(*(long *)(param_1 + 0x10) + 0x14)) {
    uVar1 = FUN_0023ce88();
    return uVar1;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
}


// ===== 0023e3fc  sqlite3_aggregate_count =====

undefined4 sqlite3_aggregate_count(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
}


// ===== 0023e408  sqlite3_bind_blob =====

void sqlite3_bind_blob(void)

{
  FUN_002d48f0();
  return;
}


// ===== 0023e414  sqlite3_bind_double =====

ulong sqlite3_bind_double(ulong param_1,long *param_2,int param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ushort *puVar3;
  
  uVar1 = FUN_002d3e54(param_2,(long)param_3 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    puVar2 = (ulong *)(param_2[0x10] + ((long)param_3 - 1U) * 0x38);
    puVar3 = (ushort *)((long)puVar2 + 0x14);
    if ((*puVar3 & 0x9000) == 0) {
      *puVar3 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_0022c2ec(puVar2);
    }
    if ((((param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
       ((param_1 & 0xfffffffffffff) == 0)) {
      *puVar2 = param_1;
      *puVar3 = 8;
    }
    if (*(long *)(*param_2 + 0x18) != 0) {
      uVar1 = uVar1 & 0xffffffff;
      (*DAT_003138c0)(*(long *)(*param_2 + 0x18));
    }
  }
  return uVar1;
}


// ===== 0023e4e0  sqlite3_bind_int =====

ulong sqlite3_bind_int(long *param_1,int param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_002d3e54(param_1,(long)param_2 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    plVar2 = (long *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    if ((*(ushort *)((long)plVar2 + 0x14) & 0x9000) == 0) {
      *plVar2 = (long)param_3;
      *(ushort *)((long)plVar2 + 0x14) = 4;
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_0023c114(plVar2);
    }
    if (*(long *)(*param_1 + 0x18) != 0) {
      uVar1 = uVar1 & 0xffffffff;
      (*DAT_003138c0)(*(long *)(*param_1 + 0x18));
    }
  }
  return uVar1;
}


// ===== 0023e584  sqlite3_bind_int64 =====

ulong sqlite3_bind_int64(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_002d3e54(param_1,(long)param_2 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined8 *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *puVar2 = param_3;
      *(ushort *)((long)puVar2 + 0x14) = 4;
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_0023c114(puVar2,param_3);
    }
    if (*(long *)(*param_1 + 0x18) != 0) {
      uVar1 = uVar1 & 0xffffffff;
      (*DAT_003138c0)(*(long *)(*param_1 + 0x18));
    }
  }
  return uVar1;
}


// ===== 0023e628  sqlite3_bind_null =====

ulong sqlite3_bind_null(long *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_002d3e54(param_1,param_2 + -1);
  if (((int)uVar1 == 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    uVar1 = uVar1 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(*param_1 + 0x18));
  }
  return uVar1;
}


// ===== 0023e674  sqlite3_bind_parameter_count =====

long sqlite3_bind_parameter_count(long param_1)

{
  if (param_1 != 0) {
    param_1 = (long)*(short *)(param_1 + 0x20);
  }
  return param_1;
}


// ===== 0023e680  sqlite3_bind_parameter_index =====

undefined4 sqlite3_bind_parameter_index(long param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  sVar4 = strlen(param_2);
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0xb0), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 4);
    iVar6 = 2;
    do {
      puVar1 = (undefined4 *)(lVar5 + (long)iVar6 * 4);
      iVar3 = strncmp((char *)(puVar1 + 2),param_2,sVar4 & 0x3fffffff);
      if ((iVar3 == 0) && (*(char *)((long)(puVar1 + 2) + (sVar4 & 0x3fffffff)) == '\0')) {
        return *puVar1;
      }
      iVar6 = puVar1[1] + iVar6;
    } while (iVar6 < iVar2);
  }
  return 0;
}


// ===== 0023e728  sqlite3_bind_parameter_name =====

int * sqlite3_bind_parameter_name(int *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    lVar2 = *(long *)(param_1 + 0x2c);
    if (lVar2 != 0) {
      iVar3 = 2;
      do {
        piVar1 = (int *)(lVar2 + (long)iVar3 * 4);
        if (*piVar1 == param_2) {
          return piVar1 + 2;
        }
        iVar3 = piVar1[1] + iVar3;
      } while (iVar3 < *(int *)(lVar2 + 4));
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}


// ===== 0023e76c  sqlite3_bind_text =====

void sqlite3_bind_text(void)

{
  FUN_002d48f0();
  return;
}


// ===== 0023e778  sqlite3_bind_text16 =====

void sqlite3_bind_text16(void)

{
  FUN_002d48f0();
  return;
}


// ===== 0023e784  sqlite3_bind_value =====

ulong sqlite3_bind_value(long *param_1,undefined8 param_2,double *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  ushort *puVar10;
  uint *puVar11;
  double dVar12;
  
  uVar2 = *(ushort *)((long)param_3 + 0x14);
  bVar1 = (&DAT_0017d33a)[(ulong)uVar2 & 0x3f];
  iVar6 = (int)param_2;
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      dVar12 = *param_3;
      uVar5 = FUN_002d3e54(param_1,(long)iVar6 - 1U & 0xffffffff);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      pdVar8 = (double *)(param_1[0x10] + ((long)iVar6 - 1U) * 0x38);
      if ((*(ushort *)((long)pdVar8 + 0x14) & 0x9000) == 0) {
        *pdVar8 = dVar12;
        *(ushort *)((long)pdVar8 + 0x14) = 4;
      }
      else {
        FUN_0023c114(pdVar8,dVar12);
      }
    }
    else {
      if (bVar1 != 2) goto LAB_0023e85c;
      if ((uVar2 >> 3 & 1) == 0) {
        dVar12 = (double)(long)*param_3;
      }
      else {
        dVar12 = *param_3;
      }
      uVar5 = FUN_002d3e54(param_1,(long)iVar6 - 1U & 0xffffffff);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      pdVar8 = (double *)(param_1[0x10] + ((long)iVar6 - 1U) * 0x38);
      puVar10 = (ushort *)((long)pdVar8 + 0x14);
      if ((*puVar10 & 0x9000) == 0) {
        *puVar10 = 1;
      }
      else {
        FUN_0022c2ec(pdVar8);
      }
      if (((((ulong)dVar12 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
         (((ulong)dVar12 & 0xfffffffffffff) == 0)) {
        *pdVar8 = dVar12;
        *puVar10 = 8;
      }
    }
  }
  else {
    if (bVar1 == 3) {
      uVar5 = FUN_002d48f0(param_1,param_2,param_3[1],(long)(int)*(uint *)(param_3 + 2),
                           0xffffffffffffffff,*(undefined1 *)((long)param_3 + 0x16));
      return uVar5;
    }
    if (bVar1 == 4) {
      if ((uVar2 >> 10 & 1) == 0) {
        dVar12 = param_3[1];
        uVar3 = *(uint *)(param_3 + 2);
        uVar5 = FUN_002d3e54(param_1,(long)iVar6 - 1U & 0xffffffff);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (dVar12 == 0.0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0023c180(param_1[0x10] + ((long)iVar6 - 1U) * 0x38,dVar12,(long)(int)uVar3,0,
                               0xffffffffffffffff);
          if ((int)uVar5 != 0) {
            lVar4 = *param_1;
            *(int *)(lVar4 + 0x50) = (int)uVar5;
            FUN_0023e358(lVar4,uVar5 & 0xffffffff);
            uVar5 = FUN_0023e2e4(*param_1,uVar5 & 0xffffffff);
          }
        }
        if (*(long *)(*param_1 + 0x18) == 0) {
          return uVar5;
        }
        (*DAT_003138c0)(*(long *)(*param_1 + 0x18));
        return uVar5 & 0xffffffff;
      }
      uVar3 = *(uint *)param_3;
      uVar9 = (long)iVar6 - 1;
      uVar5 = FUN_002d3e54(param_1,uVar9 & 0xffffffff);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar4 = param_1[0x10];
      puVar11 = (uint *)(lVar4 + uVar9 * 0x38);
      if (((puVar11[5] & 0x9000) != 0) || (*(int *)(lVar4 + uVar9 * 0x38 + 0x20) != 0)) {
        FUN_0022c29c(puVar11);
      }
      lVar4 = lVar4 + uVar9 * 0x38;
      *puVar11 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      lVar7 = *param_1;
      *(undefined2 *)(puVar11 + 5) = 0x410;
      lVar7 = *(long *)(lVar7 + 0x18);
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined1 *)(lVar4 + 0x16) = 1;
      *(undefined8 *)(lVar4 + 8) = 0;
      if (lVar7 == 0) {
        return 0;
      }
      goto LAB_0023ea08;
    }
LAB_0023e85c:
    uVar5 = FUN_002d3e54(param_1,iVar6 + -1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (*(long *)(*param_1 + 0x18) == 0) {
    return 0;
  }
LAB_0023ea08:
  (*DAT_003138c0)();
  return 0;
}


// ===== 0023ea5c  sqlite3_busy_handler =====

undefined8 sqlite3_busy_handler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x280) = param_2;
    *(undefined8 *)(param_1 + 0x288) = param_3;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  else {
    (*DAT_003138b0)();
    *(undefined8 *)(param_1 + 0x280) = param_2;
    *(undefined8 *)(param_1 + 0x288) = param_3;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 0023ead8  sqlite3_busy_timeout =====

undefined8 sqlite3_busy_timeout(long param_1,int param_2)

{
  if (param_2 < 1) {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      *(undefined4 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
    else {
      (*DAT_003138b0)();
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      *(undefined4 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_003138c0)();
      }
    }
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    *(long *)(param_1 + 0x288) = param_1;
    *(code **)(param_1 + 0x280) = FUN_002f3704;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(int *)(param_1 + 0x2e4) = param_2;
  }
  else {
    (*DAT_003138b0)();
    *(code **)(param_1 + 0x280) = FUN_002f3704;
    *(long *)(param_1 + 0x288) = param_1;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
    *(int *)(param_1 + 0x2e4) = param_2;
  }
  return 0;
}


// ===== 0023ebb0  sqlite3_changes =====

undefined4 sqlite3_changes(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}


// ===== 0023ebb8  sqlite3_close =====

void sqlite3_close(undefined8 param_1)

{
  FUN_002d4bc8(param_1,0);
  return;
}


// ===== 0023ebc0  sqlite3_collation_needed =====

undefined8 sqlite3_collation_needed(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x170) = param_3;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = param_2;
  }
  else {
    (*DAT_003138b0)();
    *(undefined8 *)(param_1 + 0x170) = param_3;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 0023ec2c  sqlite3_collation_needed16 =====

undefined8 sqlite3_collation_needed16(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = param_3;
    *(undefined8 *)(param_1 + 0x180) = param_2;
  }
  else {
    (*DAT_003138b0)();
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = param_3;
    *(undefined8 *)(param_1 + 0x180) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 0023ec98  sqlite3_column_blob =====

undefined8 sqlite3_column_blob(long *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x50) = 0x19;
      FUN_0023e358(lVar4,0x19);
      puVar2 = &DAT_0017db90;
    }
    else {
      puVar2 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
    }
    uVar3 = sqlite3_value_blob(puVar2);
    lVar4 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0023e2e4(lVar4);
      lVar4 = *param_1;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar1;
    if (lVar4 != 0) {
      (*DAT_003138c0)(lVar4);
    }
    return uVar3;
  }
  uVar3 = sqlite3_value_blob(&DAT_0017db90);
  return uVar3;
}


// ===== 0023ed6c  sqlite3_column_bytes =====

int sqlite3_column_bytes(long *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      piVar4 = (int *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)(piVar4 + 5);
      goto joined_r0x0023ede4;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_0023e358(lVar5,0x19);
  }
  piVar4 = (int *)&DAT_0017db90;
  uVar1 = DAT_0017dba4;
joined_r0x0023ede4:
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) != '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        iVar2 = FUN_0023c158(piVar4,1);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        iVar2 = *piVar4 + iVar2;
      }
    }
  }
  else {
    iVar2 = piVar4[4];
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0023e2e4(lVar5);
      lVar5 = *param_1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar3;
    if (lVar5 != 0) {
      (*DAT_003138c0)(lVar5);
    }
  }
  return iVar2;
}


// ===== 0023ee90  sqlite3_column_bytes16 =====

int sqlite3_column_bytes16(long *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      piVar4 = (int *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)(piVar4 + 5);
      goto joined_r0x0023ef08;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_0023e358(lVar5,0x19);
  }
  piVar4 = (int *)&DAT_0017db90;
  uVar1 = DAT_0017dba4;
joined_r0x0023ef08:
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) == '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        iVar2 = FUN_0023c158(piVar4,2);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        iVar2 = *piVar4 + iVar2;
      }
    }
  }
  else {
    iVar2 = piVar4[4];
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0023e2e4(lVar5);
      lVar5 = *param_1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar3;
    if (lVar5 != 0) {
      (*DAT_003138c0)(lVar5);
    }
  }
  return iVar2;
}


// ===== 0023efb8  sqlite3_column_count =====

ulong sqlite3_column_count(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(ushort *)(param_1 + 0xc0);
  }
  return param_1;
}


// ===== 0023efc4  sqlite3_column_decltype =====

void sqlite3_column_decltype(undefined8 param_1,undefined8 param_2)

{
  FUN_002f3584(param_1,param_2,0,1);
  return;
}


// ===== 0023efd0  sqlite3_column_decltype16 =====

void sqlite3_column_decltype16(undefined8 param_1,undefined8 param_2)

{
  FUN_002f3584(param_1,param_2,1,1);
  return;
}


// ===== 0023efdc  sqlite3_column_double =====

undefined1  [16] sqlite3_column_double(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  double *pdVar3;
  long lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      pdVar3 = (double *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)pdVar3 + 0x14);
      goto joined_r0x0023f060;
    }
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x50) = 0x19;
    FUN_0023e358(lVar4,0x19);
  }
  pdVar3 = (double *)&DAT_0017db90;
  uVar1 = DAT_0017dba4;
joined_r0x0023f060:
  if ((uVar1 >> 3 & 1) == 0) {
    if ((uVar1 & 0x24) == 0) {
      if ((uVar1 & 0x12) == 0) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = (double)FUN_0022adb8();
      }
    }
    else {
      dVar6 = (double)(long)*pdVar3;
    }
  }
  else {
    dVar6 = *pdVar3;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0023e2e4(lVar4);
      lVar4 = *param_1;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    if (lVar4 != 0) {
      (*DAT_003138c0)(lVar4);
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  return auVar5;
}


// ===== 0023f0fc  sqlite3_column_int =====

ulong sqlite3_column_int(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar3 = (ulong *)(param_1[0x14] + (ulong)param_2 * 0x38);
      goto LAB_0023f168;
    }
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x50) = 0x19;
    FUN_0023e358(lVar4,0x19);
  }
  puVar3 = &DAT_0017db90;
LAB_0023f168:
  uVar1 = *(ushort *)((long)puVar3 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (puVar3[1] == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0022ad58();
      }
    }
    else {
      uVar5 = FUN_0022ad28(*puVar3);
    }
  }
  else {
    uVar5 = *puVar3;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0023e2e4(lVar4);
      lVar4 = *param_1;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    if (lVar4 != 0) {
      (*DAT_003138c0)(lVar4);
    }
  }
  return uVar5 & 0xffffffff;
}


// ===== 0023f214  sqlite3_column_int64 =====

undefined8 sqlite3_column_int64(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar3 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      goto LAB_0023f280;
    }
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x50) = 0x19;
    FUN_0023e358(lVar4,0x19);
  }
  puVar3 = &DAT_0017db90;
LAB_0023f280:
  uVar1 = *(ushort *)((long)puVar3 + 0x14);
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (puVar3[1] == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0022ad58();
      }
    }
    else {
      uVar5 = FUN_0022ad28(*puVar3);
    }
  }
  else {
    uVar5 = *puVar3;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0023e2e4(lVar4);
      lVar4 = *param_1;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    if (lVar4 != 0) {
      (*DAT_003138c0)(lVar4);
    }
  }
  return uVar5;
}


// ===== 0023f32c  sqlite3_column_name =====

void sqlite3_column_name(undefined8 param_1,undefined8 param_2)

{
  FUN_002f3584(param_1,param_2,0,0);
  return;
}


// ===== 0023f338  sqlite3_column_name16 =====

void sqlite3_column_name16(undefined8 param_1,undefined8 param_2)

{
  FUN_002f3584(param_1,param_2,1,0);
  return;
}


// ===== 0023f344  sqlite3_column_text =====

undefined8 sqlite3_column_text(long *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar2 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      goto LAB_0023f3b0;
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50) = 0x19;
    FUN_0023e358(lVar3,0x19);
  }
  puVar2 = &DAT_0017db90;
LAB_0023f3b0:
  if ((((*(ushort *)((long)puVar2 + 0x14) ^ 0xffff) & 0x202) == 0) &&
     (*(char *)((long)puVar2 + 0x16) == '\x01')) {
    uVar4 = puVar2[1];
  }
  else if ((*(ushort *)((long)puVar2 + 0x14) & 1) == 0) {
    uVar4 = FUN_0022ae18(puVar2,1);
  }
  else {
    uVar4 = 0;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0023e2e4(lVar3);
      lVar3 = *param_1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar1;
    if (lVar3 != 0) {
      (*DAT_003138c0)(lVar3);
    }
  }
  return uVar4;
}


// ===== 0023f44c  sqlite3_column_text16 =====

undefined8 sqlite3_column_text16(long *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar2 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      goto LAB_0023f4b8;
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50) = 0x19;
    FUN_0023e358(lVar3,0x19);
  }
  puVar2 = &DAT_0017db90;
LAB_0023f4b8:
  if ((((*(ushort *)((long)puVar2 + 0x14) ^ 0xffff) & 0x202) == 0) &&
     (*(char *)((long)puVar2 + 0x16) == '\x02')) {
    uVar4 = puVar2[1];
  }
  else if ((*(ushort *)((long)puVar2 + 0x14) & 1) == 0) {
    uVar4 = FUN_0022ae18(puVar2,2);
  }
  else {
    uVar4 = 0;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0023e2e4(lVar3);
      lVar3 = *param_1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar1;
    if (lVar3 != 0) {
      (*DAT_003138c0)(lVar3);
    }
  }
  return uVar4;
}


// ===== 0023f554  sqlite3_column_type =====

undefined1 sqlite3_column_type(long *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  
  if (param_1 == (long *)0x0) {
    uVar4 = 5;
  }
  else {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 0x50) = 0x19;
      FUN_0023e358(lVar3,0x19);
      puVar2 = &DAT_0017db90;
    }
    else {
      puVar2 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
    }
    uVar4 = (&DAT_0017d33a)[(ulong)*(ushort *)((long)puVar2 + 0x14) & 0x3f];
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0023e2e4(lVar3);
      lVar3 = *param_1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar1;
    if (lVar3 != 0) {
      (*DAT_003138c0)(lVar3);
    }
  }
  return uVar4;
}


// ===== 0023f630  sqlite3_column_value =====

undefined8 * sqlite3_column_value(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar4 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x0023f6a8;
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50) = 0x19;
    FUN_0023e358(lVar3,0x19);
  }
  puVar4 = &DAT_0017db90;
  uVar1 = DAT_0017dba4;
joined_r0x0023f6a8:
  if ((uVar1 >> 0xd & 1) != 0) {
    *(ushort *)((long)puVar4 + 0x14) = uVar1 & 0x9fff | 0x4000;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0023e2e4(lVar3);
      lVar3 = *param_1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    if (lVar3 != 0) {
      (*DAT_003138c0)(lVar3);
    }
  }
  return puVar4;
}


// ===== 0023f710  sqlite3_commit_hook =====

undefined8 sqlite3_commit_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = param_3;
    *(undefined8 *)(param_1 + 0x118) = param_2;
  }
  else {
    (*DAT_003138b0)();
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = param_3;
    *(undefined8 *)(param_1 + 0x118) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return uVar1;
}


// ===== 0023f77c  sqlite3_complete =====

bool sqlite3_complete(byte *param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  
  uVar8 = 0;
LAB_0023f870:
  bVar9 = *param_1;
  uVar4 = (uint)bVar9;
  if (bVar9 < 0x27) {
    if (0xb < bVar9) {
      if ((uVar4 - 0xc < 2) || (uVar4 == 0x20)) goto LAB_0023f860;
      if (bVar9 == 0x22) goto LAB_0023f914;
LAB_0023f97c:
      if (((&DAT_0017d382)[bVar9] & 0x46) == 0) goto LAB_0023f928;
      lVar13 = 0;
      do {
        lVar2 = lVar13 + 1;
        lVar13 = lVar13 + 1;
      } while (((&DAT_0017d382)[param_1[lVar2]] & 0x46) != 0);
      uVar10 = (ulong)(uVar4 - 0x43);
      iVar12 = (int)lVar13;
      if (uVar4 - 0x43 < 0x32) {
        if ((1L << (uVar10 & 0x3f) & 0x100000001U) == 0) {
          if ((1L << (uVar10 & 0x3f) & 0x400000004U) == 0) {
            lVar13 = 2;
            if ((1L << (uVar10 & 0x3f) & 0x2000000020000U) != 0) {
              if (iVar12 == 4) {
                if ((bVar9 & 0xdf) == 0x54) {
                  bVar9 = param_1[1];
                  uVar10 = (ulong)bVar9;
                  if (bVar9 != 0) {
                    if ((bVar9 & 0xdf) != 0x45) {
                      pbVar5 = &DAT_0017d228 + uVar10;
                      pbVar6 = &DAT_00171f2e;
                      goto LAB_0023fe68;
                    }
                    bVar9 = param_1[2];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pbVar6 = &DAT_00171f2f;
                      goto LAB_0023fe6c;
                    }
                    if ((bVar9 & 0xdf) != 0x4d) {
                      pbVar5 = &DAT_0017d228 + uVar10;
                      pbVar6 = &DAT_00171f2f;
                      goto LAB_0023fe68;
                    }
                    bVar9 = param_1[3];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pbVar6 = &DAT_00171f30;
                      goto LAB_0023fe6c;
                    }
                    if ((bVar9 & 0xdf) != 0x50) {
                      pbVar5 = &DAT_0017d228 + uVar10;
                      pbVar6 = &DAT_00171f30;
                      goto LAB_0023fe68;
                    }
                    goto LAB_00240070;
                  }
                  pbVar6 = &DAT_00171f2e;
                }
                else {
                  pbVar5 = &DAT_0017d228 + bVar9;
                  pbVar6 = &DAT_00171f2d;
LAB_0023fe68:
                  uVar10 = (ulong)*pbVar5;
                }
LAB_0023fe6c:
                if ((uint)uVar10 != (uint)(byte)(&DAT_0017d228)[*pbVar6]) goto LAB_00240078;
              }
              else {
                if (iVar12 != 9) {
                  if (iVar12 != 7) goto LAB_00240078;
                  if ((uVar4 & 0xffffffdf) == 0x54) {
                    bVar9 = param_1[1];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pcVar7 = (char *)(byte *)0x170be4;
                      goto LAB_0023fffc;
                    }
                    if ((bVar9 & 0xdf) != 0x52) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      pcVar7 = "rigger";
                      goto LAB_0023fff8;
                    }
                    bVar9 = param_1[2];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pcVar7 = (char *)(byte *)0x170be5;
                      goto LAB_0023fffc;
                    }
                    if ((bVar9 & 0xdf) != 0x49) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      pcVar7 = "igger";
                      goto LAB_0023fff8;
                    }
                    bVar9 = param_1[3];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pcVar7 = (char *)(byte *)0x170be6;
                      goto LAB_0023fffc;
                    }
                    if ((bVar9 & 0xdf) != 0x47) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      pcVar7 = "gger";
                      goto LAB_0023fff8;
                    }
                    bVar9 = param_1[4];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pcVar7 = (char *)(byte *)0x170be7;
                      goto LAB_0023fffc;
                    }
                    if ((bVar9 & 0xdf) != 0x47) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      pcVar7 = "ger";
                      goto LAB_0023fff8;
                    }
                    bVar9 = param_1[5];
                    uVar10 = (ulong)bVar9;
                    if (bVar9 == 0) {
                      pcVar7 = (char *)(byte *)0x170be8;
                      goto LAB_0023fffc;
                    }
                    if ((bVar9 & 0xdf) != 0x45) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      pcVar7 = (char *)(byte *)0x170be8;
                      goto LAB_0023fff8;
                    }
                    bVar9 = param_1[6];
                    uVar10 = (ulong)bVar9;
                    pcVar7 = (char *)(byte *)0x170be9;
                    if (bVar9 == 0) goto LAB_0023fffc;
                    if ((bVar9 & 0xdf) != 0x52) {
                      pbVar6 = &DAT_0017d228 + uVar10;
                      goto LAB_0023fff8;
                    }
                  }
                  else {
                    pbVar6 = &DAT_0017d228 + bVar9;
                    pcVar7 = "trigger";
LAB_0023fff8:
                    uVar10 = (ulong)*pbVar6;
LAB_0023fffc:
                    if ((uint)uVar10 != (uint)(byte)(&DAT_0017d228)[(byte)*pcVar7])
                    goto LAB_00240078;
                  }
                  lVar13 = 6;
                  goto LAB_0024007c;
                }
                if ((bVar9 & 0xdf) == 0x54) {
                  bVar9 = param_1[1];
                  if (bVar9 != 0) {
                    if ((bVar9 & 0xdf) == 0x45) {
                      bVar9 = param_1[2];
                      if (bVar9 == 0) {
                        cVar3 = '\0';
                        pcVar11 = "mporary";
                        goto LAB_00240060;
                      }
                      if ((bVar9 & 0xdf) == 0x4d) {
                        bVar9 = param_1[3];
                        if (bVar9 == 0) {
                          cVar3 = '\0';
                          pcVar11 = "porary";
                          goto LAB_00240060;
                        }
                        if ((bVar9 & 0xdf) == 0x50) {
                          bVar9 = param_1[4];
                          if (bVar9 == 0) {
                            cVar3 = '\0';
                            pcVar11 = "orary";
                            goto LAB_00240060;
                          }
                          if ((bVar9 & 0xdf) == 0x4f) {
                            bVar9 = param_1[5];
                            if (bVar9 == 0) {
                              cVar3 = '\0';
                              pcVar11 = "rary";
                              goto LAB_00240060;
                            }
                            if ((bVar9 & 0xdf) == 0x52) {
                              bVar9 = param_1[6];
                              if (bVar9 == 0) {
                                cVar3 = '\0';
                                pcVar11 = "ary";
                                goto LAB_00240060;
                              }
                              if ((bVar9 & 0xdf) == 0x41) {
                                bVar9 = param_1[7];
                                if (bVar9 == 0) {
                                  cVar3 = '\0';
                                  pcVar11 = "ry";
                                  goto LAB_00240060;
                                }
                                if ((bVar9 & 0xdf) == 0x52) {
                                  bVar9 = param_1[8];
                                  pcVar11 = (char *)(byte *)0x1716b9;
                                  if (bVar9 == 0) {
                                    cVar3 = '\0';
                                    goto LAB_00240060;
                                  }
                                  if ((bVar9 & 0xdf) == 0x59) goto LAB_00240070;
                                  pcVar7 = &DAT_0017d228 + bVar9;
                                }
                                else {
                                  pcVar7 = &DAT_0017d228 + bVar9;
                                  pcVar11 = (char *)(byte *)0x1716b8;
                                }
                              }
                              else {
                                pcVar7 = &DAT_0017d228 + bVar9;
                                pcVar11 = "ary";
                              }
                            }
                            else {
                              pcVar7 = &DAT_0017d228 + bVar9;
                              pcVar11 = "rary";
                            }
                          }
                          else {
                            pcVar7 = &DAT_0017d228 + bVar9;
                            pcVar11 = "orary";
                          }
                        }
                        else {
                          pcVar7 = &DAT_0017d228 + bVar9;
                          pcVar11 = "porary";
                        }
                      }
                      else {
                        pcVar7 = &DAT_0017d228 + bVar9;
                        pcVar11 = "mporary";
                      }
                    }
                    else {
                      pcVar7 = &DAT_0017d228 + bVar9;
                      pcVar11 = "emporary";
                    }
                    goto LAB_0024005c;
                  }
                  cVar3 = '\0';
                  pcVar11 = "emporary";
                }
                else {
                  pcVar7 = &DAT_0017d228 + bVar9;
                  pcVar11 = "temporary";
LAB_0024005c:
                  cVar3 = *pcVar7;
                }
LAB_00240060:
                if (cVar3 != (&DAT_0017d228)[(byte)*pcVar11]) goto LAB_00240078;
              }
LAB_00240070:
              lVar13 = 5;
            }
          }
          else if (iVar12 == 7) {
            if ((bVar9 & 0xdf) == 0x45) {
              bVar9 = param_1[1];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "xplain";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x58) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "xplain";
                goto LAB_0023ffac;
              }
              bVar9 = param_1[2];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "plain";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x50) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "plain";
                goto LAB_0023ffac;
              }
              bVar9 = param_1[3];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "lain";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x4c) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "lain";
                goto LAB_0023ffac;
              }
              bVar9 = param_1[4];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "ain";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x41) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "ain";
                goto LAB_0023ffac;
              }
              bVar9 = param_1[5];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "in";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x49) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "in";
                goto LAB_0023ffac;
              }
              bVar9 = param_1[6];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pcVar7 = "n";
                goto LAB_0023ffb0;
              }
              if ((bVar9 & 0xdf) != 0x4e) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pcVar7 = "n";
                goto LAB_0023ffac;
              }
            }
            else {
              pbVar6 = &DAT_0017d228 + bVar9;
              pcVar7 = "explain";
LAB_0023ffac:
              uVar10 = (ulong)*pbVar6;
LAB_0023ffb0:
              if ((uint)uVar10 != (uint)(byte)(&DAT_0017d228)[(byte)*pcVar7]) goto LAB_00240078;
            }
            lVar13 = 3;
          }
          else {
            if (iVar12 != 3) goto LAB_00240078;
            if ((bVar9 & 0xdf) == 0x45) {
              bVar9 = param_1[1];
              uVar10 = (ulong)bVar9;
              pbVar5 = &DAT_00175be6;
              if (bVar9 == 0) goto LAB_0023fd84;
              if ((bVar9 & 0xdf) != 0x4e) {
                pbVar6 = &DAT_0017d228 + uVar10;
                goto LAB_0023fd80;
              }
              bVar9 = param_1[2];
              uVar10 = (ulong)bVar9;
              if (bVar9 == 0) {
                pbVar5 = &DAT_00175be7;
                goto LAB_0023fd84;
              }
              if ((bVar9 & 0xdf) != 0x44) {
                pbVar6 = &DAT_0017d228 + uVar10;
                pbVar5 = &DAT_00175be7;
                goto LAB_0023fd80;
              }
            }
            else {
              pbVar6 = &DAT_0017d228 + bVar9;
              pbVar5 = &DAT_00175be5;
LAB_0023fd80:
              uVar10 = (ulong)*pbVar6;
LAB_0023fd84:
              if ((uint)uVar10 != (uint)(byte)(&DAT_0017d228)[*pbVar5]) goto LAB_00240078;
            }
            lVar13 = 7;
          }
        }
        else {
          if (iVar12 != 6) goto LAB_00240078;
          if ((uVar4 & 0xffffffdf) == 0x43) {
            bVar9 = param_1[1];
            uVar10 = (ulong)bVar9;
            if (bVar9 == 0) {
              pcVar7 = "reate";
              goto LAB_0023ff20;
            }
            if ((bVar9 & 0xdf) != 0x52) {
              pbVar6 = &DAT_0017d228 + uVar10;
              pcVar7 = "reate";
              goto LAB_0023ff1c;
            }
            bVar9 = param_1[2];
            uVar10 = (ulong)bVar9;
            if (bVar9 == 0) {
              pcVar7 = "eate";
              goto LAB_0023ff20;
            }
            if ((bVar9 & 0xdf) != 0x45) {
              pbVar6 = &DAT_0017d228 + uVar10;
              pcVar7 = "eate";
              goto LAB_0023ff1c;
            }
            bVar9 = param_1[3];
            uVar10 = (ulong)bVar9;
            if (bVar9 == 0) {
              pcVar7 = "ate";
              goto LAB_0023ff20;
            }
            if ((bVar9 & 0xdf) != 0x41) {
              pbVar6 = &DAT_0017d228 + uVar10;
              pcVar7 = "ate";
              goto LAB_0023ff1c;
            }
            bVar9 = param_1[4];
            uVar10 = (ulong)bVar9;
            if (bVar9 == 0) {
              pcVar7 = "te";
              goto LAB_0023ff20;
            }
            if ((bVar9 & 0xdf) != 0x54) {
              pbVar6 = &DAT_0017d228 + uVar10;
              pcVar7 = "te";
              goto LAB_0023ff1c;
            }
            bVar9 = param_1[5];
            uVar10 = (ulong)bVar9;
            if (bVar9 == 0) {
              pcVar7 = "e";
              goto LAB_0023ff20;
            }
            if ((bVar9 & 0xdf) != 0x45) {
              pbVar6 = &DAT_0017d228 + uVar10;
              pcVar7 = "e";
              goto LAB_0023ff1c;
            }
          }
          else {
            pbVar6 = &DAT_0017d228 + bVar9;
            pcVar7 = "create";
LAB_0023ff1c:
            uVar10 = (ulong)*pbVar6;
LAB_0023ff20:
            if ((uint)uVar10 != (uint)(byte)(&DAT_0017d228)[(byte)*pcVar7]) goto LAB_00240078;
          }
          lVar13 = 4;
        }
      }
      else {
LAB_00240078:
        lVar13 = 2;
      }
LAB_0024007c:
      param_1 = param_1 + (iVar12 + -1);
      goto LAB_0023f864;
    }
    if (1 < bVar9 - 9) {
      if (bVar9 == 0) {
LAB_0024009c:
        return uVar8 == 1;
      }
      goto LAB_0023f97c;
    }
    goto LAB_0023f860;
  }
  if (bVar9 < 0x3b) {
    if (bVar9 == 0x27) {
LAB_0023f914:
      do {
        param_1 = param_1 + 1;
        bVar1 = *param_1;
        if (bVar1 == 0) break;
      } while (bVar1 != bVar9);
      if (bVar1 == 0) {
        return false;
      }
    }
    else if (uVar4 == 0x2d) {
      if (param_1[1] == 0x2d) {
        bVar9 = 0x2d;
        while (bVar9 != 10) {
          param_1 = param_1 + 1;
          bVar9 = *param_1;
          if (bVar9 == 0) goto LAB_0024009c;
        }
        goto LAB_0023f860;
      }
    }
    else {
      if (uVar4 != 0x2f) goto LAB_0023f97c;
      if (param_1[1] == 0x2a) {
        param_1 = param_1 + 2;
        do {
          if (*param_1 == 0x2a) {
            if (param_1[1] == 0x2f) goto LAB_0023fa80;
          }
          else if (*param_1 == 0) {
            return false;
          }
          param_1 = param_1 + 1;
        } while( true );
      }
    }
  }
  else {
    if (uVar4 == 0x3b) {
      lVar13 = 0;
      goto LAB_0023f864;
    }
    if (uVar4 != 0x5b) {
      if (bVar9 != 0x60) goto LAB_0023f97c;
      goto LAB_0023f914;
    }
    do {
      param_1 = param_1 + 1;
      if (*param_1 == 0) {
        return false;
      }
    } while (*param_1 != 0x5d);
  }
LAB_0023f928:
  lVar13 = 2;
  goto LAB_0023f864;
LAB_0023fa80:
  param_1 = param_1 + 1;
LAB_0023f860:
  lVar13 = 1;
LAB_0023f864:
  param_1 = param_1 + 1;
  uVar8 = (uint)(byte)(&DAT_0017d8db)[lVar13 + (ulong)uVar8 * 8];
  goto LAB_0023f870;
}


// ===== 002400c0  sqlite3_complete16 =====

ulong sqlite3_complete16(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = sqlite3_initialize();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  puVar2 = (undefined8 *)FUN_0022a6ac(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    return 7;
  }
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined2 *)((long)puVar2 + 0x14) = 1;
  FUN_0023c180(puVar2,param_1,0xffffffffffffffff,2,0);
  if ((((*(ushort *)((long)puVar2 + 0x14) ^ 0xffff) & 0x202) == 0) &&
     (*(char *)((long)puVar2 + 0x16) == '\x01')) {
    lVar3 = puVar2[1];
joined_r0x0024014c:
    if (lVar3 != 0) {
      uVar1 = sqlite3_complete();
      goto LAB_0024015c;
    }
  }
  else if ((*(ushort *)((long)puVar2 + 0x14) & 1) == 0) {
    lVar3 = FUN_0022ae18(puVar2,1);
    goto joined_r0x0024014c;
  }
  uVar1 = 7;
LAB_0024015c:
  if (((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) || (*(int *)(puVar2 + 4) != 0)) {
    FUN_0022c29c(puVar2);
  }
  FUN_0022a888(puVar2[3],puVar2);
  return uVar1 & 0xffffffff;
}


// ===== 002401a4  sqlite3_create_collation =====

undefined4
sqlite3_create_collation
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_3 = param_3 & 0xffffffff;
    (*DAT_003138b0)();
  }
  iVar1 = FUN_002eede0(param_1,param_2,param_3,param_4,param_5,0);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar2 = FUN_0023e2e4(param_1,iVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 00240254  sqlite3_create_collation16 =====

undefined4
sqlite3_create_collation16
          (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  local_50 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  lStack_78 = 0;
  local_80 = 0;
  lStack_68 = param_1;
  FUN_0023c180(&local_80,param_2,0xffffffffffffffff,2,0);
  if ((local_70._4_2_ >> 1 & 1) == 0) {
    local_70._0_7_ = CONCAT16(1,(undefined6)local_70);
  }
  else if (local_70._6_1_ != '\x01') {
    FUN_0022bb2c(&local_80,1);
  }
  lVar4 = lStack_78;
  if (*(char *)(param_1 + 0x67) == '\0') {
    if (lStack_78 == 0) goto LAB_00240360;
    iVar2 = FUN_002eede0(param_1,lStack_78,param_3,param_4,param_5,0);
    FUN_0022a888(param_1,lVar4);
    if (iVar2 == 0) goto LAB_00240368;
  }
  else {
    if ((local_70 & 0x900000000000) != 0 || (int)local_60 != 0) {
      FUN_0022c29c(&local_80);
    }
LAB_00240360:
    iVar2 = 0;
LAB_00240368:
    if (*(char *)(param_1 + 0x67) == '\0') {
      uVar3 = 0;
      lVar4 = *(long *)(param_1 + 0x18);
      goto joined_r0x00240394;
    }
  }
  uVar3 = FUN_0023e2e4(param_1,iVar2);
  lVar4 = *(long *)(param_1 + 0x18);
joined_r0x00240394:
  if (lVar4 != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 002403d4  sqlite3_create_function =====

undefined4
sqlite3_create_function
          (long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_4 = param_4 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    (*DAT_003138b0)();
  }
  iVar1 = FUN_002a163c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0,0);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar2 = FUN_0023e2e4(param_1,iVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 002404b0  sqlite3_create_function16 =====

void sqlite3_create_function16
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  local_70 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  lStack_88 = param_1;
  FUN_0023c180(&local_a0,param_2,0xffffffffffffffff,2,0);
  if ((local_90._4_2_ >> 1 & 1) == 0) {
    local_90._0_7_ = CONCAT16(1,(undefined6)local_90);
  }
  else if (local_90._6_1_ != '\x01') {
    FUN_0022bb2c(&local_a0,1);
  }
  lVar4 = lStack_98;
  if (*(char *)(param_1 + 0x67) == '\0') {
    iVar2 = FUN_002a163c(param_1,lStack_98,param_3,param_4,param_5,param_6,param_7,param_8,0,0,0);
    if (lVar4 != 0) {
      FUN_0022a888(param_1,lVar4);
    }
    if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
      uVar3 = 0;
      lVar4 = *(long *)(param_1 + 0x18);
      goto joined_r0x00240670;
    }
  }
  else {
    if ((local_90 & 0x900000000000) != 0 || (int)local_80 != 0) {
      FUN_0022c29c(&local_a0);
    }
    iVar2 = 0x15;
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2a8ab,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  }
  uVar3 = FUN_0023e2e4(param_1,iVar2);
  lVar4 = *(long *)(param_1 + 0x18);
joined_r0x00240670:
  if (lVar4 != 0) {
    uVar3 = uVar3 & 0xffffffff;
    (*DAT_003138c0)(lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0024067c  sqlite3_create_module =====

undefined4
sqlite3_create_module(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  FUN_0028cc08(param_1,param_2,param_3,param_4,0);
  if (*(char *)(param_1 + 0x67) == '\0') {
    uVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_0023e2e4(param_1,0);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return uVar1;
}


// ===== 00240718  sqlite3_data_count =====

ulong sqlite3_data_count(ulong param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      return 0;
    }
    param_1 = (ulong)*(ushort *)(param_1 + 0xc0);
  }
  return param_1;
}


// ===== 00240734  sqlite3_db_handle =====

long * sqlite3_db_handle(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00240740  sqlite3_declare_vtab =====

undefined4 sqlite3_declare_vtab(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long local_1f8;
  long local_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  plVar13 = *(long **)(param_1 + 0x238);
  if ((plVar13 == (long *)0x0) || ((int)plVar13[3] != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0x15;
    FUN_0023e358(param_1,0x15);
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
    uVar10 = 0x15;
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x24906,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  }
  else {
    lVar14 = plVar13[1];
    local_60 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_168 = 0;
    local_170 = 0;
    lStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    auStack_d0 = (undefined1  [8])0x0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_f8 = *(undefined8 *)(param_1 + 0x158);
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    *(long **)(param_1 + 0x158) = &local_1f8;
    local_1f8 = param_1;
    if (*(char *)(param_1 + 0x67) != '\0') {
      FUN_0022aac0(&local_1f8,"out of memory");
    }
    uVar4 = *(undefined1 *)(param_1 + 0xc5);
    auStack_d0[4] = 1;
    local_120 = CONCAT17(1,(undefined7)local_120);
    *(undefined1 *)(param_1 + 0xc5) = 0;
    uStack_128 = CONCAT44(uStack_128._4_4_,1);
    iVar9 = FUN_0024b7d8(&local_1f8,param_2);
    lVar7 = local_a0;
    if ((((iVar9 == 0) && (local_a0 != 0)) && (*(char *)(param_1 + 0x67) == '\0')) &&
       (*(char *)(local_a0 + 0x3f) == '\0')) {
      if (*(long *)(lVar14 + 8) == 0) {
        *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(local_a0 + 8);
        if (*(long *)(local_a0 + 0x50) != 0) {
          FUN_0022e47c(param_1);
        }
        uVar2 = *(uint *)(lVar7 + 0x30);
        uVar5 = *(undefined2 *)(lVar7 + 0x36);
        uVar3 = *(uint *)(lVar14 + 0x30);
        bVar8 = false;
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined2 *)(lVar14 + 0x36) = uVar5;
        *(undefined2 *)(lVar14 + 0x38) = uVar5;
        *(uint *)(lVar14 + 0x30) = uVar3 | uVar2 & 0x280;
        *(undefined2 *)(lVar7 + 0x36) = 0;
        if (*(char *)(lVar7 + 0x30) < '\0') {
          if (*(long *)(**(long **)(*plVar13 + 8) + 0x68) == 0) {
            bVar8 = false;
          }
          else {
            plVar12 = (long *)(lVar7 + 0x10);
            do {
              lVar11 = *plVar12;
              plVar12 = (long *)(lVar11 + 0x28);
            } while ((*(ushort *)(lVar11 + 99) & 3) != 2);
            bVar8 = *(short *)(lVar11 + 0x5e) != 1;
          }
        }
        lVar11 = *(long *)(lVar7 + 0x10);
        if (lVar11 != 0) {
          *(long *)(lVar14 + 0x10) = lVar11;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(long *)(lVar11 + 0x18) = lVar14;
        }
      }
      else {
        bVar8 = false;
      }
      *(undefined4 *)(plVar13 + 3) = 1;
    }
    else {
      bVar8 = true;
      puVar1 = (undefined *)0x0;
      if (local_1f0 != 0) {
        puVar1 = &DAT_001716ae;
      }
      FUN_0024b53c(param_1,1,puVar1);
      if (local_1f0 != 0) {
        FUN_0022a888(param_1);
      }
    }
    auStack_d0[4] = 0;
    if (lStack_1e8 != 0) {
      FUN_0024cea8();
    }
    if ((local_a0 != 0) &&
       ((*(long *)(param_1 + 0x300) != 0 ||
        (iVar9 = *(int *)(local_a0 + 0x2c) + -1, *(int *)(local_a0 + 0x2c) = iVar9, iVar9 == 0)))) {
      FUN_0022d4a8(param_1);
    }
    FUN_0024cf4c(&local_1f8);
    *(undefined1 *)(param_1 + 0xc5) = uVar4;
    if ((bVar8 == false) && (*(char *)(param_1 + 0x67) == '\0')) {
      uVar10 = 0;
      lVar14 = *(long *)(param_1 + 0x18);
    }
    else {
      uVar10 = FUN_0023e2e4(param_1,bVar8);
      lVar14 = *(long *)(param_1 + 0x18);
    }
    if (lVar14 != 0) {
      (*DAT_003138c0)();
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00240a58  sqlite3_enable_shared_cache =====

undefined8 sqlite3_enable_shared_cache(undefined4 param_1)

{
  DAT_0031397c = param_1;
  return 0;
}


// ===== 00240a6c  sqlite3_errcode =====

uint sqlite3_errcode(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x71);
    if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2abe3,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      return *(uint *)(param_1 + 0x58) & *(uint *)(param_1 + 0x50);
    }
  }
  return 7;
}


// ===== 00240b00  sqlite3_errmsg =====

char * sqlite3_errmsg(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    return "out of memory";
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2ab94,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    return "bad parameter or other API misuse";
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)(*(long *)(param_1 + 0x18));
  }
  if (*(char *)(param_1 + 0x67) != '\0') {
    pcVar5 = "out of memory";
    goto LAB_00240b5c;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if (uVar4 == 0) {
    uVar3 = 0;
LAB_00240c10:
    if ((0x1410004U >> (uVar3 & 0x3f) & 1) == 0) {
      pcVar5 = (&PTR_s_not_an_error_0030cfd8)[uVar3];
      goto LAB_00240b5c;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar2 != 0) {
      if ((((*(ushort *)(lVar2 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(char *)(lVar2 + 0x16) == '\x01')) {
        pcVar5 = *(char **)(lVar2 + 8);
      }
      else {
        if ((*(ushort *)(lVar2 + 0x14) & 1) != 0) goto LAB_00240c54;
        pcVar5 = (char *)FUN_0022ae18(lVar2,1);
      }
      if (pcVar5 != (char *)0x0) goto LAB_00240b5c;
      uVar4 = *(uint *)(param_1 + 0x50);
    }
LAB_00240c54:
    if (uVar4 == 0x204) {
      pcVar5 = "abort due to ROLLBACK";
      goto LAB_00240b5c;
    }
    if (uVar4 == 0x65) {
      pcVar5 = "no more rows available";
      goto LAB_00240b5c;
    }
    if (uVar4 == 100) {
      pcVar5 = "another row available";
      goto LAB_00240b5c;
    }
    uVar3 = (ulong)(uVar4 & 0xff);
    if ((uVar4 & 0xff) < 0x1d) goto LAB_00240c10;
  }
  pcVar5 = "unknown error";
LAB_00240b5c:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return pcVar5;
}


// ===== 00240ca8  sqlite3_errmsg16 =====

wchar16 * sqlite3_errmsg16(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  wchar16 *pwVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined2 uVar8;
  
  if (param_1 == 0) {
    return L"out of memory";
  }
  cVar2 = *(char *)(param_1 + 0x71);
  if (((cVar2 != 'm') && (cVar2 != 'v')) && (cVar2 != -0x46)) {
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    return L"bad parameter or other API misuse";
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(char *)(param_1 + 0x67) != '\0') {
    pwVar4 = L"out of memory";
    goto LAB_00240cfc;
  }
  lVar5 = *(long *)(param_1 + 0x188);
  if (lVar5 == 0) {
LAB_00240d94:
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0x204) {
      pcVar7 = "abort due to ROLLBACK";
    }
    else if (uVar1 == 0x65) {
      pcVar7 = "no more rows available";
    }
    else if (uVar1 == 100) {
      pcVar7 = "another row available";
    }
    else if (((uint)(uVar6 & 0xff) < 0x1d) && ((0x1410004U >> (uVar6 & 0x3f) & 1) == 0)) {
      pcVar7 = (&PTR_s_not_an_error_0030cfd8)[uVar6 & 0xff];
    }
    else {
      pcVar7 = "unknown error";
    }
    FUN_0024b53c(param_1,uVar6,pcVar7);
    pwVar4 = *(wchar16 **)(param_1 + 0x188);
    if (pwVar4 != (wchar16 *)0x0) {
      if ((((pwVar4[10] ^ 0xffffU) & 0x202U) == 0) && ((char)pwVar4[0xb] == '\x02')) {
        pwVar4 = *(wchar16 **)(pwVar4 + 4);
      }
      else if ((pwVar4[10] & 1U) == 0) {
        pwVar4 = (wchar16 *)FUN_0022ae18(pwVar4,2);
      }
      else {
        pwVar4 = (wchar16 *)0x0;
      }
    }
  }
  else {
    if ((((*(ushort *)(lVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar5 + 0x16) == '\x02')
       ) {
      pwVar4 = *(wchar16 **)(lVar5 + 8);
    }
    else {
      if ((*(ushort *)(lVar5 + 0x14) & 1) != 0) goto LAB_00240d94;
      pwVar4 = (wchar16 *)FUN_0022ae18(lVar5,2);
    }
    if (pwVar4 == (wchar16 *)0x0) goto LAB_00240d94;
  }
  if ((*(char *)(param_1 + 0x67) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    iVar3 = *(int *)(param_1 + 0x198) + -1;
    *(int *)(param_1 + 0x198) = iVar3;
    uVar8 = 0;
    if (iVar3 == 0) {
      uVar8 = *(undefined2 *)(param_1 + 0x19e);
    }
    *(undefined2 *)(param_1 + 0x19c) = uVar8;
  }
LAB_00240cfc:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)(*(long *)(param_1 + 0x18));
  }
  return pwVar4;
}


// ===== 00240e84  sqlite3_exec =====

int sqlite3_exec(long param_1,byte *param_2,code *param_3,undefined8 param_4,undefined8 *param_5)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  void *__dest;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long local_78;
  byte *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  if (param_1 == 0) {
    pcVar8 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        pbVar12 = &DAT_0016f7d1;
        if (param_2 != (byte *)0x0) {
          pbVar12 = param_2;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_003138b0)();
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        if (*(long *)(param_1 + 0x188) == 0) {
          *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        }
        else {
          FUN_0023e358(param_1,0);
        }
LAB_00240fc0:
        if (*pbVar12 == 0) {
          iVar4 = 0;
        }
        else {
          local_78 = 0;
          iVar4 = FUN_0024aa58(param_1,pbVar12,0xffffffff,0x80,0,&local_78,&local_70);
          if (iVar4 == 0) {
            if (local_78 != 0) {
              lVar10 = 0;
              bVar3 = false;
              uVar14 = 0;
              lVar13 = 0;
              lVar11 = local_78;
LAB_00241014:
              iVar4 = sqlite3_step(lVar11);
              if (param_3 == (code *)0x0) goto LAB_0024100c;
              if (iVar4 == 100) {
                if (!bVar3) goto LAB_00241048;
LAB_002410a8:
                lVar13 = lVar10 + (ulong)uVar14 * 8;
                if (uVar14 != 0) {
                  uVar15 = 0;
LAB_002410cc:
                  lVar7 = sqlite3_column_text(local_78,uVar15 & 0xffffffff);
                  lVar11 = local_78;
                  *(long *)(lVar13 + uVar15 * 8) = lVar7;
                  if ((lVar7 != 0) ||
                     (iVar5 = sqlite3_column_type(local_78,uVar15 & 0xffffffff), iVar5 == 5))
                  goto LAB_002410c0;
                  if ((*(char *)(param_1 + 0x67) == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
                    *(undefined1 *)(param_1 + 0x67) = 1;
                    if (0 < *(int *)(param_1 + 0xdc)) {
                      *(undefined4 *)(param_1 + 400) = 1;
                    }
                    *(undefined2 *)(param_1 + 0x19c) = 0;
                    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
                    if (*(long *)(param_1 + 0x158) != 0) {
                      FUN_0022aac0(*(long *)(param_1 + 0x158),"out of memory");
                      lVar13 = *(long *)(*(long *)(param_1 + 0x158) + 0x100);
                      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
                      for (; lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x100)) {
                        *(undefined4 *)(lVar13 + 0x18) = 7;
                        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
                      }
                    }
                  }
                  iVar4 = 100;
                  goto joined_r0x00241194;
                }
                uVar15 = 0;
                goto LAB_00241108;
              }
              if (((iVar4 == 0x65) && (!bVar3)) && ((*(byte *)(param_1 + 0x31) & 1) != 0)) {
LAB_00241048:
                if (lVar11 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (uint)*(ushort *)(lVar11 + 0xc0);
                }
                lVar10 = FUN_0022a5f4(param_1,uVar14 << 4 | 8);
                if (lVar10 != 0) {
                  if (uVar14 != 0) {
                    uVar15 = 0;
                    do {
                      uVar6 = FUN_002f3584(lVar11,uVar15 & 0xffffffff,0,0);
                      *(undefined8 *)(lVar10 + uVar15 * 8) = uVar6;
                      uVar15 = uVar15 + 1;
                    } while (uVar14 != uVar15);
                  }
                  if (iVar4 == 100) goto LAB_002410a8;
                  goto LAB_0024110c;
                }
                goto joined_r0x00241194;
              }
              goto LAB_0024113c;
            }
            iVar4 = 0;
            pbVar12 = local_70;
            goto LAB_00241178;
          }
        }
        goto LAB_00241308;
      }
      if (cVar1 != 'm') {
        pcVar8 = "invalid";
        goto LAB_00240f48;
      }
    }
    pcVar8 = "unopened";
  }
LAB_00240f48:
  iVar4 = 0x15;
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar8);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x1ffa2,
              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  goto LAB_00240f84;
LAB_002410c0:
  uVar15 = uVar15 + 1;
  if (uVar14 == uVar15) goto LAB_002410fc;
  goto LAB_002410cc;
LAB_002410fc:
  uVar15 = (ulong)uVar14;
LAB_00241108:
  *(undefined8 *)(lVar13 + uVar15 * 8) = 0;
LAB_0024110c:
  iVar5 = (*param_3)(param_4,uVar14,lVar13,lVar10);
  if (iVar5 != 0) {
    FUN_0024cea8(local_78);
    iVar4 = 4;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0x50) = 4;
    FUN_0023e358(param_1,4);
    goto LAB_002411cc;
  }
  bVar3 = true;
  lVar11 = local_78;
LAB_0024100c:
  if (iVar4 != 100) goto LAB_0024113c;
  goto LAB_00241014;
LAB_0024113c:
  iVar4 = FUN_0024cea8(lVar11);
  local_78 = 0;
  pbVar12 = local_70 + -1;
  do {
    pbVar12 = pbVar12 + 1;
  } while (((&DAT_0017d382)[*pbVar12] & 1) != 0);
  if (lVar10 != 0) {
    FUN_0022a888(param_1,lVar10);
  }
LAB_00241178:
  if (iVar4 != 0) goto LAB_00241308;
  goto LAB_00240fc0;
LAB_00241308:
  lVar10 = 0;
  lVar11 = local_78;
joined_r0x00241194:
  if (lVar11 != 0) {
    FUN_0024cea8(lVar11);
  }
  if (lVar10 == 0) {
    if (iVar4 != 0) goto LAB_002411fc;
LAB_002411dc:
    if (*(char *)(param_1 + 0x67) != '\0') goto LAB_002411fc;
    iVar4 = 0;
LAB_002411ec:
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
LAB_002411cc:
    FUN_0022a888(param_1,lVar10);
    if (iVar4 == 0) goto LAB_002411dc;
LAB_002411fc:
    iVar4 = FUN_0023e2e4(param_1,iVar4);
    if ((param_5 == (undefined8 *)0x0) || (iVar4 == 0)) goto LAB_002411ec;
    pcVar8 = (char *)sqlite3_errmsg(param_1);
    if (pcVar8 == (char *)0x0) {
LAB_0024125c:
      iVar4 = 7;
      *(undefined4 *)(param_1 + 0x50) = 7;
      *param_5 = 0;
      FUN_0023e358(param_1,7);
    }
    else {
      sVar9 = strlen(pcVar8);
      __dest = (void *)FUN_0022a6ac(sVar9 + 1);
      if (__dest == (void *)0x0) goto LAB_0024125c;
      memcpy(__dest,pcVar8,sVar9 + 1);
      *param_5 = __dest;
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
LAB_00240f84:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


// ===== 0024131c  sqlite3_expired =====

bool sqlite3_expired(long param_1)

{
  if (param_1 != 0) {
    return (*(byte *)(param_1 + 0xc6) & 3) != 0;
  }
  return true;
}


// ===== 00241338  sqlite3_finalize =====

ulong sqlite3_finalize(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) goto LAB_00241454;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    param_1 = (long *)0x15;
    sqlite3_log(0x15,"API called with finalized prepared statement");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x15545,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    goto LAB_00241454;
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (0 < param_1[0x17]) {
    FUN_002f3280(lVar4,param_1);
  }
  lVar5 = *param_1;
  if (*(char *)((long)param_1 + 0xc5) == '\x02') {
    FUN_0024d000(param_1);
  }
  if ((int)param_1[6] < 0) {
LAB_002413bc:
    lVar3 = param_1[0x15];
  }
  else {
    if ((*(long *)(lVar5 + 0x188) != 0) || (param_1[0x15] != 0)) {
      FUN_0024d6fc(param_1);
      goto LAB_002413bc;
    }
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)((long)param_1 + 0x34);
    lVar3 = param_1[0x15];
  }
  if (lVar3 != 0) {
    FUN_0022a888(lVar5);
    param_1[0x15] = 0;
  }
  uVar1 = *(uint *)(lVar5 + 0x58);
  param_1[0x14] = 0;
  uVar1 = uVar1 & *(uint *)((long)param_1 + 0x34);
  FUN_0022d74c(param_1);
  if ((uVar1 == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
    param_1 = (long *)0x0;
  }
  else {
    uVar2 = FUN_0023e2e4(lVar4,uVar1);
    param_1 = (long *)(uVar2 & 0xffffffff);
  }
  FUN_002d4f18(lVar4);
LAB_00241454:
  return (ulong)param_1 & 0xffffffff;
}


// ===== 0024147c  sqlite3_free_table =====

void sqlite3_free_table(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = param_1 + -1;
  if (1 < (int)*puVar3) {
    lVar5 = (*puVar3 & 0xffffffff) - 1;
    do {
      puVar4 = (ulong *)*param_1;
      if (puVar4 != (ulong *)0x0) {
        puVar2 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != (ulong *)0x0) {
            (*DAT_003138b0)();
          }
          iVar1 = (*DAT_00313868)(puVar4);
          DAT_00316e60 = DAT_00316e60 - iVar1;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(puVar4);
          if (DAT_00316f08 == (ulong *)0x0) goto LAB_002414e8;
          puVar2 = &DAT_003138c0;
          puVar4 = DAT_00316f08;
        }
        (*(code *)*puVar2)(puVar4);
      }
LAB_002414e8:
      lVar5 = lVar5 + -1;
      param_1 = param_1 + 1;
    } while (lVar5 != 0);
  }
  puVar2 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != (ulong *)0x0) {
      (*DAT_003138b0)();
    }
    iVar1 = (*DAT_00313868)(puVar3);
    DAT_00316e60 = DAT_00316e60 - iVar1;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(puVar3);
    if (DAT_00316f08 == (ulong *)0x0) {
      return;
    }
    puVar2 = &DAT_003138c0;
    puVar3 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x002415d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(puVar3);
  return;
}


// ===== 002415f0  sqlite3_get_autocommit =====

undefined1 sqlite3_get_autocommit(long param_1)

{
  return *(undefined1 *)(param_1 + 0x65);
}


// ===== 002415f8  sqlite3_get_auxdata =====

undefined8 sqlite3_get_auxdata(long param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 0x128);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[1] == param_2) && ((param_2 < 0 || (*piVar1 == *(int *)(param_1 + 0x20))))) break;
    piVar1 = *(int **)(piVar1 + 6);
  }
  return *(undefined8 *)(piVar1 + 2);
}


// ===== 0024163c  sqlite3_get_table =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqlite3_get_table(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                      undefined4 *param_5,long *param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  local_88 = 0;
  local_70 = 0;
  uStack_78 = _UNK_00177968;
  local_80 = _DAT_00177960;
  iVar2 = sqlite3_initialize();
  if ((iVar2 == 0) && (local_90 = (ulong *)FUN_0022a6ac(0xa0), local_90 != (ulong *)0x0)) {
    *local_90 = 0;
    uVar3 = sqlite3_exec(param_1,param_2,FUN_002f336c,&local_90,param_6);
    lVar6 = local_88;
    *local_90 = uStack_78 >> 0x20;
    if ((uVar3 & 0xff) != 4) {
      if (local_88 != 0) {
        puVar5 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != 0) {
            (*DAT_003138b0)();
          }
          iVar2 = (*DAT_00313868)(lVar6);
          DAT_00316e60 = DAT_00316e60 - iVar2;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(lVar6);
          if (DAT_00316f08 == 0) goto LAB_00241918;
          puVar5 = &DAT_003138c0;
          lVar6 = DAT_00316f08;
        }
        (*(code *)*puVar5)(lVar6);
      }
LAB_00241918:
      if (uVar3 != 0) {
        sqlite3_free_table(local_90 + 1);
        goto LAB_002416c0;
      }
      puVar4 = local_90;
      if (((uint)local_80 <= uStack_78._4_4_) ||
         (puVar4 = (ulong *)FUN_0022b604(local_90,(ulong)uStack_78._4_4_ << 3),
         puVar4 != (ulong *)0x0)) {
        *param_3 = puVar4 + 1;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (undefined4)uStack_78;
        }
        uVar3 = 0;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_80._4_4_;
        }
        goto LAB_002416c0;
      }
      sqlite3_free_table(local_90 + 1);
      goto LAB_002416b8;
    }
    sqlite3_free_table(local_90 + 1);
    uVar3 = local_70;
    if (local_88 != 0) {
      if (param_6 != (long *)0x0) {
        lVar6 = *param_6;
        if (lVar6 != 0) {
          puVar5 = &DAT_00313858;
          if (DAT_00313830 != 0) {
            if (DAT_00316f08 != 0) {
              (*DAT_003138b0)();
            }
            iVar2 = (*DAT_00313868)(lVar6);
            DAT_00316e60 = DAT_00316e60 - iVar2;
            DAT_00316ea8 = DAT_00316ea8 + -1;
            (*DAT_00313858)(lVar6);
            if (DAT_00316f08 == 0) goto LAB_002417d8;
            puVar5 = &DAT_003138c0;
            lVar6 = DAT_00316f08;
          }
          (*(code *)*puVar5)(lVar6);
        }
LAB_002417d8:
        lVar6 = sqlite3_mprintf(&DAT_001716ae,local_88);
        *param_6 = lVar6;
        uVar3 = local_70;
        if (local_88 == 0) goto LAB_002416bc;
      }
      lVar6 = local_88;
      puVar5 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar2 = (*DAT_00313868)(lVar6);
        DAT_00316e60 = DAT_00316e60 - iVar2;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar6);
        uVar3 = local_70;
        if (DAT_00316f08 == 0) goto LAB_002416bc;
        puVar5 = &DAT_003138c0;
        lVar6 = DAT_00316f08;
      }
      (*(code *)*puVar5)(lVar6);
      uVar3 = local_70;
    }
  }
  else {
LAB_002416b8:
    uVar3 = 7;
  }
LAB_002416bc:
  *(uint *)(param_1 + 0x50) = uVar3;
LAB_002416c0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00241990  sqlite3_interrupt =====

void sqlite3_interrupt(long param_1)

{
  *(undefined4 *)(param_1 + 400) = 1;
  return;
}


// ===== 0024199c  sqlite3_last_insert_rowid =====

undefined8 sqlite3_last_insert_rowid(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 002419a4  sqlite3_libversion =====

undefined * sqlite3_libversion(void)

{
  return PTR_sqlite3_version_0030d4a0;
}


// ===== 002419b0  sqlite3_libversion_number =====

undefined8 sqlite3_libversion_number(void)

{
  return 0x2e6300;
}


// ===== 002419bc  sqlite3_malloc =====

undefined8 sqlite3_malloc(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if ((0 < param_1) && (iVar1 == 0)) {
    uVar2 = FUN_0022a6ac(param_1);
    return uVar2;
  }
  return 0;
}


// ===== 002419fc  sqlite3_open =====

void sqlite3_open(undefined8 param_1,undefined8 param_2)

{
  FUN_002ee5b4(param_1,param_2,6,0);
  return;
}


// ===== 00241a08  sqlite3_open16 =====

ulong sqlite3_open16(undefined *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_2 = 0;
  uVar3 = sqlite3_initialize();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  puVar4 = (undefined8 *)FUN_0022a6ac(0x38);
  if (puVar4 == (undefined8 *)0x0) {
    return 7;
  }
  puVar1 = &UNK_0017da2c;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  *(undefined2 *)((long)puVar4 + 0x14) = 1;
  FUN_0023c180(puVar4,puVar1,0xffffffffffffffff,2,0);
  if ((((*(ushort *)((long)puVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
     (*(char *)((long)puVar4 + 0x16) == '\x01')) {
    lVar5 = puVar4[1];
joined_r0x00241aac:
    if (lVar5 != 0) {
      uVar2 = FUN_002ee5b4(lVar5,param_2,6,0);
      if (uVar2 == 0) {
        lVar5 = *(long *)(*(long *)(*param_2 + 0x20) + 0x18);
        if ((*(ushort *)(lVar5 + 0x72) & 1) == 0) {
          uVar2 = 0;
          *(undefined1 *)(*param_2 + 100) = 2;
          *(undefined1 *)(lVar5 + 0x71) = 2;
        }
        else {
          uVar2 = 0;
        }
      }
      goto LAB_00241af4;
    }
  }
  else if ((*(ushort *)((long)puVar4 + 0x14) & 1) == 0) {
    lVar5 = FUN_0022ae18(puVar4,1);
    goto joined_r0x00241aac;
  }
  uVar2 = 7;
LAB_00241af4:
  if (((*(ushort *)((long)puVar4 + 0x14) & 0x9000) != 0) || (*(int *)(puVar4 + 4) != 0)) {
    FUN_0022c29c(puVar4);
  }
  FUN_0022a888(puVar4[3],puVar4);
  return (ulong)(uVar2 & 0xff);
}


// ===== 00241b44  sqlite3_prepare =====

void sqlite3_prepare(void)

{
  FUN_0024aa58();
  return;
}


// ===== 00241b58  sqlite3_prepare16 =====

void sqlite3_prepare16(void)

{
  FUN_002d4038();
  return;
}


// ===== 00241b68  sqlite3_profile =====

undefined8 sqlite3_profile(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (*DAT_003138b0)();
    lVar2 = *(long *)(param_1 + 0x18);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  *(long *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  bVar1 = *(byte *)(param_1 + 0x6e) & 0xf;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x6e) & 0xf | 0x80;
  }
  *(byte *)(param_1 + 0x6e) = bVar1;
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return uVar3;
}


// ===== 00241be4  sqlite3_progress_handler =====

void sqlite3_progress_handler(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (*DAT_003138b0)();
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if ((int)param_2 < 1) {
    param_3 = 0;
  }
  *(undefined8 *)(param_1 + 0x208) = param_3;
  if ((int)param_2 < 1) {
    param_4 = 0;
  }
  *(uint *)(param_1 + 0x218) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined8 *)(param_1 + 0x210) = param_4;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00241c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_003138c0)();
    return;
  }
  return;
}


// ===== 00241c64  sqlite3_realloc =====

undefined8 sqlite3_realloc(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0022b604(param_1,param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  return uVar2;
}


// ===== 00241ca4  sqlite3_reset =====

ulong sqlite3_reset(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (0 < param_1[0x17]) {
    FUN_002f3280(lVar4,param_1);
  }
  lVar5 = *param_1;
  if (*(char *)((long)param_1 + 0xc5) == '\x02') {
    FUN_0024d000(param_1);
  }
  if (-1 < (int)param_1[6]) {
    if ((*(long *)(lVar5 + 0x188) == 0) && (param_1[0x15] == 0)) {
      *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)((long)param_1 + 0x34);
      lVar3 = param_1[0x15];
      goto joined_r0x00241d28;
    }
    FUN_0024d6fc(param_1);
  }
  lVar3 = param_1[0x15];
joined_r0x00241d28:
  if (lVar3 != 0) {
    FUN_0022a888(lVar5);
    param_1[0x15] = 0;
  }
  uVar1 = *(uint *)(lVar5 + 0x58);
  *(undefined2 *)((long)param_1 + 0xc2) = 0xff02;
  param_1[0x14] = 0;
  uVar1 = uVar1 & *(uint *)((long)param_1 + 0x34);
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0xc5) = 1;
  param_1[6] = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  if ((uVar1 != 0) || (uVar2 = 0, *(char *)(lVar4 + 0x67) != '\0')) {
    uVar2 = FUN_0023e2e4(lVar4,uVar1);
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    uVar2 = uVar2 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(lVar4 + 0x18));
  }
  return uVar2;
}


// ===== 00241dcc  sqlite3_result_blob =====

void sqlite3_result_blob(void)

{
  FUN_0023d018();
  return;
}


// ===== 00241dd8  sqlite3_result_double =====

void sqlite3_result_double(ulong param_1,long *param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)*param_2;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)((long)puVar1 + 0x14) = 1;
  }
  else {
    FUN_0022c2ec(puVar1);
  }
  if ((((param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) ||
     ((param_1 & 0xfffffffffffff) == 0)) {
    *puVar1 = param_1;
    *(undefined2 *)((long)puVar1 + 0x14) = 8;
  }
  return;
}


// ===== 00241e48  sqlite3_result_error =====

void sqlite3_result_error(undefined8 *param_1,undefined8 param_2,int param_3)

{
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,param_2,(long)param_3,1,0xffffffffffffffff);
  return;
}


// ===== 00241e68  sqlite3_result_error16 =====

void sqlite3_result_error16(undefined8 *param_1,undefined8 param_2,int param_3)

{
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  FUN_0023c180(*param_1,param_2,(long)param_3,2,0xffffffffffffffff);
  return;
}


// ===== 00241e88  sqlite3_result_int =====

void sqlite3_result_int(long *param_1,int param_2)

{
  param_1 = (long *)*param_1;
  if ((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *param_1 = (long)param_2;
  *(undefined2 *)((long)param_1 + 0x14) = 4;
  return;
}


// ===== 00241eb4  sqlite3_result_int64 =====

void sqlite3_result_int64(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
    FUN_0023c114();
    return;
  }
  *puVar1 = param_2;
  *(undefined2 *)((long)puVar1 + 0x14) = 4;
  return;
}


// ===== 00241edc  sqlite3_result_null =====

void sqlite3_result_null(long *param_1)

{
  if ((*(ushort *)(*param_1 + 0x14) & 0x9000) != 0) {
    FUN_0022c2ec();
    return;
  }
  *(undefined2 *)(*param_1 + 0x14) = 1;
  return;
}


// ===== 00241f00  sqlite3_result_text =====

void sqlite3_result_text(void)

{
  FUN_0023d018();
  return;
}


// ===== 00241f0c  sqlite3_result_text16 =====

void sqlite3_result_text16(void)

{
  FUN_0023d018();
  return;
}


// ===== 00241f18  sqlite3_result_text16be =====

void sqlite3_result_text16be(void)

{
  FUN_0023d018();
  return;
}


// ===== 00241f24  sqlite3_result_text16le =====

void sqlite3_result_text16le(void)

{
  FUN_0023d018();
  return;
}


// ===== 00241f30  sqlite3_rollback_hook =====

undefined8 sqlite3_rollback_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = param_3;
    *(undefined8 *)(param_1 + 0x128) = param_2;
  }
  else {
    (*DAT_003138b0)();
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = param_3;
    *(undefined8 *)(param_1 + 0x128) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return uVar1;
}


// ===== 00241f9c  sqlite3_set_authorizer =====

undefined8 sqlite3_set_authorizer(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  *(long *)(param_1 + 0x1f8) = param_2;
  *(undefined8 *)(param_1 + 0x200) = param_3;
  if (param_2 != 0) {
    for (lVar1 = *(long *)(param_1 + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      *(byte *)(lVar1 + 0xc6) = *(byte *)(lVar1 + 0xc6) & 0xfc | 2;
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 0024201c  sqlite3_set_auxdata =====

void sqlite3_set_auxdata(long param_1,int param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
  piVar3 = (int *)plVar5[0x25];
  do {
    if (piVar3 == (int *)0x0) {
      if (*plVar5 == 0) {
        piVar3 = (int *)FUN_0022a6ac(0x20);
      }
      else {
        piVar3 = (int *)FUN_0022a5f4(*plVar5,0x20);
      }
      if (piVar3 == (int *)0x0) {
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002420fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_3);
          return;
        }
      }
      else {
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x24);
        lVar4 = plVar5[0x25];
        plVar5[0x25] = (long)piVar3;
        *piVar3 = iVar1;
        piVar3[1] = param_2;
        *(long *)(piVar3 + 6) = lVar4;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
        }
LAB_0024210c:
        *(undefined8 *)(piVar3 + 2) = param_3;
        *(code **)(piVar3 + 4) = UNRECOVERED_JUMPTABLE;
      }
      return;
    }
    if ((piVar3[1] == param_2) && ((param_2 < 0 || (*piVar3 == *(int *)(param_1 + 0x20))))) {
      if (*(code **)(piVar3 + 4) != (code *)0x0) {
        (**(code **)(piVar3 + 4))(*(undefined8 *)(piVar3 + 2));
      }
      goto LAB_0024210c;
    }
    piVar3 = *(int **)(piVar3 + 6);
  } while( true );
}


// ===== 00242124  sqlite3_step =====

uint sqlite3_step(long *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  ushort uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  size_t sVar14;
  void *pvVar15;
  byte bVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  byte bVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  undefined2 uVar31;
  uint *puVar32;
  undefined4 uVar33;
  char *pcVar34;
  undefined8 *puVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  char *pcVar40;
  long lVar41;
  int iVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  void *local_1b8;
  double local_1b0;
  long lStack_1a8;
  uint local_1a0;
  undefined8 local_19c;
  undefined2 local_194;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  if (param_1 == (long *)0x0) {
    pcVar34 = "API called with NULL prepared statement";
  }
  else {
    lVar18 = *param_1;
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x18) != 0) {
        (*DAT_003138b0)();
      }
      uVar8 = DAT_00177ea8;
      iVar42 = 0;
LAB_002421a0:
      cVar4 = *(char *)((long)param_1 + 0xc5);
      puVar35 = (undefined8 *)*param_1;
      if (cVar4 == '\x02') {
LAB_002422c0:
        if ((*(byte *)((long)param_1 + 0xc6) & 0xc) == 0) {
          *(int *)((long)puVar35 + 0xdc) = *(int *)((long)puVar35 + 0xdc) + 1;
          uVar11 = FUN_002d5670(param_1);
          *(int *)((long)puVar35 + 0xdc) = *(int *)((long)puVar35 + 0xdc) + -1;
          if (uVar11 == 100) {
LAB_00243390:
            uVar11 = 100;
            *(undefined4 *)(puVar35 + 10) = 100;
            goto LAB_002433b8;
          }
        }
        else {
          lVar13 = *param_1;
          if ((*(byte *)((long)param_1 + 0xc6) & 0xc) == 4) {
            bVar16 = 1;
          }
          else {
            bVar16 = *(byte *)(lVar13 + 0x33) & 1;
          }
          lVar20 = param_1[0xd];
          lVar39 = *(long *)(lVar20 + 0x50);
          if (*(long *)(lVar39 + 0x300) == 0) {
            uVar30 = 0;
            do {
              lVar41 = lVar20 + uVar30;
              if ((*(ushort *)(lVar41 + 0x4c) & 0x9000) == 0) {
                if (*(int *)(lVar41 + 0x58) != 0) {
                  FUN_0022d9c8(lVar39,*(undefined8 *)(lVar20 + uVar30 + 0x60));
                  *(undefined4 *)(lVar41 + 0x58) = 0;
                  goto LAB_00242470;
                }
              }
              else {
                FUN_0022c29c(lVar41 + 0x38);
LAB_00242470:
                *(undefined2 *)(lVar41 + 0x4c) = 0;
              }
              uVar30 = uVar30 + 0x38;
            } while (uVar30 < 0x1c0);
          }
          else {
            if ((*(int *)(lVar20 + 0x58) != 0) && (*(long *)(lVar20 + 0x60) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x90) != 0) && (*(long *)(lVar20 + 0x98) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 200) != 0) && (*(long *)(lVar20 + 0xd0) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x100) != 0) && (*(long *)(lVar20 + 0x108) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x138) != 0) && (*(long *)(lVar20 + 0x140) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x170) != 0) && (*(long *)(lVar20 + 0x178) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x1a8) != 0) && (*(long *)(lVar20 + 0x1b0) != 0)) {
              FUN_0022a888(lVar39);
            }
            if ((*(int *)(lVar20 + 0x1e0) != 0) && (*(long *)(lVar20 + 0x1e8) != 0)) {
              FUN_0022a888(lVar39);
            }
          }
          param_1[0x14] = 0;
          if (*(int *)((long)param_1 + 0x34) == 7) {
            if ((*(char *)(lVar13 + 0x67) == '\0') && (*(char *)(lVar13 + 0x68) == '\0')) {
              *(undefined1 *)(lVar13 + 0x67) = 1;
              if (0 < *(int *)(lVar13 + 0xdc)) {
                *(undefined4 *)(lVar13 + 400) = 1;
              }
              *(undefined2 *)(lVar13 + 0x19c) = 0;
              *(int *)(lVar13 + 0x198) = *(int *)(lVar13 + 0x198) + 1;
              if (*(long *)(lVar13 + 0x158) != 0) {
                FUN_0022aac0(*(long *)(lVar13 + 0x158),"out of memory");
                lVar39 = *(long *)(*(long *)(lVar13 + 0x158) + 0x100);
                *(undefined4 *)(*(long *)(lVar13 + 0x158) + 0x18) = 7;
                if (lVar39 != 0) {
                  do {
                    *(undefined4 *)(lVar39 + 0x18) = 7;
                    uVar11 = 1;
                    *(int *)(lVar39 + 0x30) = *(int *)(lVar39 + 0x30) + 1;
                    lVar39 = *(long *)(lVar39 + 0x100);
                  } while (lVar39 != 0);
                  goto LAB_00242e2c;
                }
              }
            }
            uVar11 = 1;
          }
          else {
            if (bVar16 == 0) {
              bVar21 = *(byte *)((long)param_1 + 0xc6);
              iVar10 = (int)param_1[0x12];
              lVar39 = 0;
LAB_002424c0:
              uVar30 = 0;
              puVar19 = (undefined8 *)0x0;
            }
            else {
              lVar41 = param_1[0xd];
              bVar21 = *(byte *)((long)param_1 + 0xc6);
              iVar10 = (int)param_1[0x12];
              lVar39 = lVar41 + 0x1f8;
              if ((*(ushort *)(lVar41 + 0x20c) >> 4 & 1) == 0) goto LAB_002424c0;
              puVar19 = *(undefined8 **)(lVar41 + 0x200);
              uVar11 = *(int *)(lVar41 + 0x208) >> 3;
              uVar30 = (ulong)uVar11;
              if (0 < (int)uVar11) {
                if (uVar11 != 1) {
                  uVar22 = 0;
                  iVar17 = 0;
                  uVar24 = uVar30 & 0x7ffffffe;
                  do {
                    plVar25 = puVar19 + uVar22;
                    uVar22 = uVar22 + 2;
                    iVar10 = *(int *)(*plVar25 + 8) + iVar10;
                    iVar17 = *(int *)(plVar25[1] + 8) + iVar17;
                    if (uVar24 == uVar22) goto LAB_00243270;
                  } while( true );
                }
                uVar24 = 0;
                do {
                  plVar25 = puVar19 + uVar24;
                  uVar24 = uVar24 + 1;
                  iVar17 = *(int *)(*plVar25 + 8);
LAB_00243270:
                  iVar10 = iVar17 + iVar10;
                } while (uVar30 != uVar24);
              }
            }
            iVar36 = (int)param_1[6];
            iVar17 = iVar36 + 1;
            iVar37 = iVar17;
            if (iVar36 < iVar10) {
              lVar41 = lVar20 + 0x38;
LAB_0024250c:
              iVar29 = iVar36 - (int)param_1[0x12];
              plVar25 = param_1 + 0x11;
              iVar27 = iVar36;
              if ((int)param_1[0x12] <= iVar36) {
                plVar25 = (long *)*puVar19;
                iVar26 = (int)plVar25[1];
                iVar27 = iVar29;
                puVar7 = puVar19;
                if (iVar26 <= iVar29) {
                  do {
                    plVar25 = (long *)puVar7[1];
                    iVar29 = iVar29 - iVar26;
                    iVar26 = (int)plVar25[1];
                    iVar27 = iVar29;
                    puVar7 = puVar7 + 1;
                  } while (iVar26 <= iVar29);
                }
              }
              lVar28 = *plVar25;
              if ((bVar16 != 0) && (*(char *)(lVar28 + (long)iVar27 * 0x18 + 1) == -4)) {
                iVar29 = (int)uVar30;
                if (iVar29 < 1) {
                  uVar22 = 0;
LAB_002425b0:
                  if ((int)uVar22 != iVar29) goto LAB_00242640;
                }
                else {
                  uVar22 = 0;
                  do {
                    if (puVar19[uVar22] == *(long *)(lVar28 + (long)iVar27 * 0x18 + 0x10))
                    goto LAB_002425b0;
                    uVar22 = uVar22 + 1;
                  } while (uVar30 != uVar22);
                }
                iVar26 = (iVar29 + 1U) * 8;
                iVar9 = FUN_0022b8a0(lVar39,iVar26,iVar29 != 0);
                *(int *)((long)param_1 + 0x34) = iVar9;
                if (iVar9 != 0) {
                  uVar11 = 1;
                  goto LAB_00242680;
                }
                lVar23 = lVar28 + (long)iVar27 * 0x18;
                puVar19 = *(undefined8 **)(lVar39 + 8);
                uVar30 = (ulong)(iVar29 + 1U);
                puVar19[iVar29] = *(undefined8 *)(lVar23 + 0x10);
                *(int *)(lVar39 + 0x10) = iVar26;
                *(ushort *)(lVar39 + 0x14) = *(ushort *)(lVar39 + 0x14) & 0xf240 | 0x10;
                iVar10 = *(int *)(*(long *)(lVar23 + 0x10) + 8) + iVar10;
              }
LAB_00242640:
              iVar29 = iVar17;
              if ((((bVar21 & 0xc) == 8) &&
                  (cVar4 = *(char *)(lVar28 + (long)iVar27 * 0x18), iVar29 = iVar37, cVar4 != -0x47)
                  ) && ((iVar36 < 1 || (cVar4 != '\b')))) goto LAB_00242500;
              *(int *)(param_1 + 6) = iVar29;
              if (*(int *)(lVar13 + 400) != 0) {
                *(undefined4 *)((long)param_1 + 0x34) = 9;
                FUN_0024de48(param_1,"interrupted");
                uVar11 = 1;
                goto LAB_00242e2c;
              }
              local_1a0 = 0;
              local_19c = uVar8;
              local_194 = 0;
              lStack_1a8 = 0;
              local_1b0 = 0.0;
              cVar4 = *(char *)(lVar28 + (long)iVar27 * 0x18 + 1);
              iVar10 = (int)cVar4;
              iVar17 = (int)cVar4;
              if (iVar10 == -9 || iVar10 + 9 < 0 != SCARRY4(iVar10,9)) {
                if (iVar17 == -0xd || iVar17 + 0xd < 0 != SCARRY4(iVar17,0xd)) {
                  if (iVar17 == -0xf) {
                    pcVar34 = *(char **)(*(long *)(lVar28 + (long)iVar27 * 0x18 + 0x10) + 8);
LAB_00242a64:
                    sqlite3_str_appendf(&local_1b0,"%s(%d)",*(undefined8 *)(pcVar34 + 0x38),
                                        (long)*pcVar34);
                  }
                  else if (iVar17 == -0xe) {
                    puVar32 = *(uint **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                    uVar11 = *puVar32;
                    if (uVar11 == 0) goto LAB_00242ad4;
                    uVar38 = 1;
                    do {
                      uVar33 = 0x5b;
                      if (uVar38 != 1) {
                        uVar33 = 0x2c;
                      }
                      sqlite3_str_appendf(&local_1b0,&DAT_00171b13,uVar33,puVar32[uVar38]);
                      uVar38 = uVar38 + 1;
                    } while (uVar38 <= uVar11);
                    uVar30 = (ulong)local_19c._4_4_;
                    if (local_19c._4_4_ + 1 < local_1a0) {
                      local_19c = CONCAT44(local_19c._4_4_ + 1,(int)local_19c);
                      *(undefined1 *)(lStack_1a8 + uVar30) = 0x5d;
                    }
                    else {
LAB_00242ad4:
                      FUN_0022acc8(&local_1b0,&DAT_001733ab,1);
                    }
                  }
                  else {
                    if (iVar17 != -0xd) goto LAB_00242ac4;
                    puVar19 = *(undefined8 **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
LAB_00242834:
                    sqlite3_str_appendf(&local_1b0,&DAT_0016e7ab,*puVar19);
                  }
                }
                else {
                  if (iVar17 == -0xc) {
                    puVar19 = *(undefined8 **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                  }
                  else {
                    if (iVar17 == -0xb) {
                      sqlite3_str_appendf(&local_1b0,"vtab:%p",
                                          *(undefined8 *)
                                           (*(long *)(lVar28 + (long)iVar27 * 0x18 + 0x10) + 0x10));
                      goto LAB_00242b40;
                    }
                    if (iVar17 != -10) goto LAB_00242ac4;
                    puVar19 = *(undefined8 **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                    uVar5 = *(ushort *)((long)puVar19 + 0x14);
                    if ((uVar5 >> 1 & 1) != 0) {
                      plVar25 = puVar19 + 1;
                      goto LAB_00242af4;
                    }
                    if ((uVar5 & 0x24) != 0) goto LAB_00242834;
                    if ((uVar5 >> 3 & 1) == 0) {
                      pcVar34 = "(blob)";
                      if ((uVar5 & 1) != 0) {
                        pcVar34 = "NULL";
                      }
                      goto LAB_00242afc;
                    }
                  }
                  sqlite3_str_appendf(*puVar19,&local_1b0,"%.16g");
                }
                goto LAB_00242b40;
              }
              if (iVar17 == -5 || iVar17 + 5 < 0 != SCARRY4(iVar17,5)) {
                if (iVar17 == -8) {
                  lVar39 = *(long *)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                  sqlite3_str_appendf(&local_1b0,&DAT_001711c6,*(undefined2 *)(lVar39 + 6));
                  pcVar34 = "";
                  if (*(short *)(lVar39 + 6) != 0) {
                    uVar30 = 0;
                    do {
                      puVar19 = *(undefined8 **)(lVar39 + 0x20 + uVar30 * 8);
                      pcVar40 = pcVar34;
                      if (puVar19 != (undefined8 *)0x0) {
                        pcVar40 = (char *)*puVar19;
                      }
                      iVar10 = strcmp(pcVar40,"BINARY");
                      bVar16 = *(byte *)(*(long *)(lVar39 + 0x18) + uVar30);
                      pcVar2 = "B";
                      if (iVar10 != 0) {
                        pcVar2 = pcVar40;
                      }
                      pcVar40 = pcVar34;
                      if ((bVar16 & 1) != 0) {
                        pcVar40 = "-";
                      }
                      pcVar3 = pcVar34;
                      if ((bVar16 & 2) != 0) {
                        pcVar3 = "N.";
                      }
                      sqlite3_str_appendf(&local_1b0,",%s%s%s",pcVar40,pcVar3,pcVar2);
                      uVar30 = uVar30 + 1;
                    } while (uVar30 < *(ushort *)(lVar39 + 6));
                  }
                  uVar30 = (ulong)local_19c._4_4_;
                  if (local_19c._4_4_ + 1 < local_1a0) {
                    local_19c = CONCAT44(local_19c._4_4_ + 1,(int)local_19c);
                    *(undefined1 *)(lStack_1a8 + uVar30) = 0x29;
                  }
                  else {
                    FUN_0022acc8(&local_1b0,&DAT_00170a9f,1);
                  }
                  goto LAB_00242b40;
                }
                if (iVar17 == -7) {
                  pcVar34 = *(char **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                  goto LAB_00242a64;
                }
                if (iVar17 != -5) goto LAB_00242ac4;
                plVar25 = *(long **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
LAB_00242af4:
                pcVar34 = (char *)*plVar25;
                if ((char *)*plVar25 == (char *)0x0) goto LAB_00242b40;
              }
              else {
                if (iVar17 != -4) {
                  if (iVar17 == -3) {
                    sqlite3_str_appendf(&local_1b0,&DAT_001745ae,
                                        *(undefined4 *)(lVar28 + (long)iVar27 * 0x18 + 0x10));
                  }
                  else {
                    if (iVar17 != -2) {
LAB_00242ac4:
                      plVar25 = (long *)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                      goto LAB_00242af4;
                    }
                    puVar19 = *(undefined8 **)(lVar28 + (long)iVar27 * 0x18 + 0x10);
                    sqlite3_str_appendf(&local_1b0,"%.18s-%s",*puVar19,
                                        (&PTR_DAT_0030b280)[*(byte *)(puVar19 + 1)]);
                  }
                  goto LAB_00242b40;
                }
                pcVar34 = "program";
              }
LAB_00242afc:
              sVar14 = strlen(pcVar34);
              FUN_0022acc8(&local_1b0,pcVar34,(uint)sVar14 & 0x3fffffff);
LAB_00242b40:
              if ((((local_194 & 7) != 0) && (*(char *)(lVar13 + 0x67) == '\0')) &&
                 (*(char *)(lVar13 + 0x68) == '\0')) {
                *(undefined1 *)(lVar13 + 0x67) = 1;
                if (0 < *(int *)(lVar13 + 0xdc)) {
                  *(undefined4 *)(lVar13 + 400) = 1;
                }
                *(undefined2 *)(lVar13 + 0x19c) = 0;
                *(int *)(lVar13 + 0x198) = *(int *)(lVar13 + 0x198) + 1;
                if (*(long *)(lVar13 + 0x158) != 0) {
                  FUN_0022aac0(*(long *)(lVar13 + 0x158),"out of memory");
                  lVar39 = *(long *)(*(long *)(lVar13 + 0x158) + 0x100);
                  *(undefined4 *)(*(long *)(lVar13 + 0x158) + 0x18) = 7;
                  for (; lVar39 != 0; lVar39 = *(long *)(lVar39 + 0x100)) {
                    *(undefined4 *)(lVar39 + 0x18) = 7;
                    *(int *)(lVar39 + 0x30) = *(int *)(lVar39 + 0x30) + 1;
                  }
                }
              }
              lVar39 = lStack_1a8;
              if (lStack_1a8 != 0) {
                *(undefined1 *)(lStack_1a8 + (local_19c >> 0x20)) = 0;
                if (((int)local_19c != 0) && ((local_194._1_1_ >> 2 & 1) == 0)) {
                  lVar39 = FUN_0022a544(&local_1b0);
                }
              }
              if ((*(byte *)((long)param_1 + 0xc6) & 0xc) == 8) {
                if ((*(ushort *)(lVar20 + 0x4c) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0x38) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 4);
                  *(undefined2 *)(lVar20 + 0x4c) = 4;
                }
                else {
                  FUN_0023c114(lVar41);
                }
                if ((*(ushort *)(lVar20 + 0x84) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0x70) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 8);
                  *(undefined2 *)(lVar20 + 0x84) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0x70);
                }
                if ((*(ushort *)(lVar20 + 0xbc) & 0x9000) == 0) {
                  lVar23 = 4;
                  *(long *)(lVar20 + 0xa8) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 0xc);
                  uVar31 = 4;
                  *(undefined2 *)(lVar20 + 0xbc) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0xa8);
                  lVar23 = 4;
                  uVar31 = 4;
                }
              }
              else {
                if ((*(ushort *)(lVar20 + 0x4c) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0x38) = (long)iVar27;
                  *(undefined2 *)(lVar20 + 0x4c) = 4;
                }
                else {
                  FUN_0023c114(lVar41,(long)iVar27);
                }
                FUN_0023c180(lVar20 + 0x70,
                             (&PTR_s_Savepoint_0030b2a0)[*(byte *)(lVar28 + (long)iVar27 * 0x18)],
                             0xffffffffffffffff,1,0);
                if ((*(ushort *)(lVar20 + 0xbc) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0xa8) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 4);
                  *(undefined2 *)(lVar20 + 0xbc) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0xa8);
                }
                if ((*(ushort *)(lVar20 + 0xf4) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0xe0) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 8);
                  *(undefined2 *)(lVar20 + 0xf4) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0xe0);
                }
                if ((*(ushort *)(lVar20 + 300) & 0x9000) == 0) {
                  *(long *)(lVar20 + 0x118) = (long)*(int *)(lVar28 + (long)iVar27 * 0x18 + 0xc);
                  *(undefined2 *)(lVar20 + 300) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0x118);
                }
                if ((*(ushort *)(lVar20 + 0x19c) & 0x9000) == 0) {
                  *(ulong *)(lVar20 + 0x188) = (ulong)*(ushort *)(lVar28 + (long)iVar27 * 0x18 + 2);
                  *(undefined2 *)(lVar20 + 0x19c) = 4;
                }
                else {
                  FUN_0023c114(lVar20 + 0x188);
                }
                if ((*(ushort *)(lVar20 + 0x1d4) & 0x9000) == 0) {
                  *(undefined2 *)(lVar20 + 0x1d4) = 1;
                }
                else {
                  FUN_0022c2ec(lVar20 + 0x1c0);
                }
                uVar31 = 8;
                lVar23 = 6;
              }
              uVar11 = 1;
              FUN_0023c180(lVar20 + lVar23 * 0x38,lVar39,0xffffffffffffffff,1,
                           PTR_sqlite3_free_0030d498);
              *(undefined2 *)(param_1 + 0x18) = uVar31;
              param_1[0x14] = lVar41;
              cVar4 = *(char *)(lVar13 + 0x67);
              uVar33 = 0;
              if (cVar4 != '\0') {
                uVar33 = 7;
              }
              *(undefined4 *)((long)param_1 + 0x34) = uVar33;
              if (cVar4 == '\0') goto LAB_00243390;
              goto LAB_00242e2c;
            }
LAB_00242674:
            uVar11 = 0x65;
            *(undefined4 *)((long)param_1 + 0x34) = 0;
LAB_00242680:
            *(int *)(param_1 + 6) = iVar37;
          }
        }
LAB_00242e2c:
        if (0 < param_1[0x17]) {
          FUN_002f3280(puVar35,param_1);
        }
        if (uVar11 == 0x65) {
          if (*(char *)((long)puVar35 + 0x65) != '\0') {
            if (*(int *)(puVar35 + 5) < 1) {
              *(undefined4 *)((long)param_1 + 0x34) = 0;
            }
            else {
              lVar39 = 0;
              lVar13 = 0;
              iVar10 = 0;
              do {
                lVar20 = *(long *)(puVar35[4] + lVar39 + 8);
                if (lVar20 != 0) {
                  if ((*(char *)(lVar20 + 0x11) != '\0') &&
                     (*(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1,
                     *(char *)(lVar20 + 0x12) == '\0')) {
                    FUN_0022eb3c(lVar20);
                  }
                  lVar41 = *(long *)(**(long **)(lVar20 + 8) + 0x128);
                  if (lVar41 == 0) {
                    iVar17 = 0;
                    cVar4 = *(char *)(lVar20 + 0x11);
                  }
                  else {
                    iVar17 = *(int *)(lVar41 + 0x18);
                    *(undefined4 *)(lVar41 + 0x18) = 0;
                    cVar4 = *(char *)(lVar20 + 0x11);
                  }
                  if ((cVar4 != '\0') &&
                     (iVar36 = *(int *)(lVar20 + 0x14) + -1, *(int *)(lVar20 + 0x14) = iVar36,
                     iVar36 == 0)) {
                    FUN_0022eb04(lVar20);
                  }
                  if (((0 < iVar17) && ((code *)puVar35[0x2c] != (code *)0x0)) && (iVar10 == 0)) {
                    iVar10 = (*(code *)puVar35[0x2c])
                                       (puVar35[0x2d],puVar35,*(undefined8 *)(puVar35[4] + lVar39),
                                        iVar17);
                  }
                }
                lVar13 = lVar13 + 1;
                lVar39 = lVar39 + 0x20;
              } while (lVar13 < *(int *)(puVar35 + 5));
              *(int *)((long)param_1 + 0x34) = iVar10;
              if (iVar10 != 0) {
                uVar11 = 1;
                goto LAB_00242f74;
              }
            }
          }
          uVar11 = 0x65;
        }
        else if (*(char *)((long)param_1 + 0xc4) < '\0') {
          uVar11 = FUN_0024d6fc(param_1);
        }
LAB_00242f74:
        *(uint *)(puVar35 + 10) = uVar11;
        if (((*(int *)((long)param_1 + 0x34) != 0) || (*(char *)(*param_1 + 0x67) != '\0')) &&
           ((iVar10 = FUN_0023e2e4(), iVar10 == 7 &&
            (*(undefined4 *)((long)param_1 + 0x34) = 7, *(char *)((long)param_1 + 0xc4) < '\0')))) {
          uVar11 = 7;
        }
      }
      else {
        while (cVar4 == '\x03') {
          sqlite3_reset(param_1);
          cVar4 = *(char *)((long)param_1 + 0xc5);
        }
        if (cVar4 != '\x01') goto LAB_002422c0;
        if ((*(byte *)((long)param_1 + 0xc6) & 3) == 0) {
          if (*(int *)(puVar35 + 0x1a) == 0) {
            *(undefined4 *)(puVar35 + 0x32) = 0;
          }
          if ((((*(byte *)((long)puVar35 + 0x6e) & 0x82) != 0) &&
              (*(char *)((long)puVar35 + 0xc5) == '\0')) && (param_1[0x1f] != 0)) {
            piVar12 = (int *)*puVar35;
            if ((*piVar12 < 2) || (*(code **)(piVar12 + 0x22) == (code *)0x0)) {
              (**(code **)(piVar12 + 0x1e))(piVar12,&local_1b0);
              param_1[0x17] = (long)(local_1b0 * 86400000.0);
            }
            else {
              (**(code **)(piVar12 + 0x22))(piVar12,param_1 + 0x17);
            }
          }
          *(int *)(puVar35 + 0x1a) = *(int *)(puVar35 + 0x1a) + 1;
          bVar16 = *(byte *)((long)param_1 + 0xc6);
          if ((bVar16 >> 6 & 1) == 0) {
            *(int *)(puVar35 + 0x1b) = *(int *)(puVar35 + 0x1b) + 1;
            bVar16 = *(byte *)((long)param_1 + 0xc6);
          }
          if ((char)bVar16 < '\0') {
            *(int *)((long)puVar35 + 0xd4) = *(int *)((long)puVar35 + 0xd4) + 1;
          }
          *(undefined4 *)(param_1 + 6) = 0;
          *(undefined1 *)((long)param_1 + 0xc5) = 2;
          goto LAB_002422c0;
        }
        *(undefined4 *)((long)param_1 + 0x34) = 0x11;
        if (*(char *)((long)param_1 + 0xc4) < '\0') {
          uVar11 = FUN_0024d6fc(param_1);
        }
        else {
          uVar11 = 1;
        }
      }
      uVar11 = *(uint *)(puVar35 + 0xb) & uVar11;
      if (uVar11 != 0x11) goto LAB_002433b8;
      if (iVar42 == 0x32) {
        uVar11 = 0x11;
        goto LAB_002433b8;
      }
      lVar39 = *param_1;
      lVar13 = param_1[6];
      iVar10 = FUN_0024aa58(lVar39,param_1[0x1f],0xffffffff,*(undefined1 *)((long)param_1 + 0xc4),
                            param_1,&local_1b8,0);
      pvVar15 = local_1b8;
      if (iVar10 == 0) {
        memcpy(&local_1b0,local_1b8,0x130);
        memcpy(pvVar15,param_1,0x130);
        memcpy(param_1,&local_1b0,0x130);
        lVar39 = param_1[1];
        lVar41 = *(long *)((long)pvVar15 + 0x10);
        lVar20 = *(long *)((long)pvVar15 + 8);
        *(long *)((long)pvVar15 + 0x10) = param_1[2];
        *(long *)((long)pvVar15 + 8) = lVar39;
        param_1[2] = lVar41;
        param_1[1] = lVar20;
        lVar39 = *(long *)((long)pvVar15 + 0xf8);
        *(long *)((long)pvVar15 + 0xf8) = param_1[0x1f];
        param_1[0x1f] = lVar39;
        *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)((long)pvVar15 + 0x11c);
        *(undefined1 *)((long)param_1 + 0xc4) = *(undefined1 *)((long)pvVar15 + 0xc4);
        lVar28 = *(long *)((long)pvVar15 + 0xd8);
        lVar41 = *(long *)((long)pvVar15 + 0xd0);
        lVar20 = *(long *)((long)pvVar15 + 0xe8);
        lVar39 = *(long *)((long)pvVar15 + 0xe0);
        *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((long)pvVar15 + 0xf0);
        param_1[0x1b] = lVar28;
        param_1[0x1a] = lVar41;
        param_1[0x1d] = lVar20;
        param_1[0x1c] = lVar39;
        *(int *)((long)param_1 + 0xe4) = *(int *)((long)param_1 + 0xe4) + 1;
        if (*(long *)(*param_1 + 0x18) != 0) {
          (*DAT_003138b0)();
        }
        if (0 < *(short *)((long)pvVar15 + 0x20)) {
          lVar20 = 0;
          lVar39 = 0;
          do {
            lVar41 = *(long *)((long)pvVar15 + 0x80);
            puVar35 = (undefined8 *)(param_1[0x10] + lVar20);
            if (((*(ushort *)((long)puVar35 + 0x14) & 0x9000) != 0) || (*(int *)(puVar35 + 4) != 0))
            {
              FUN_0022c29c(puVar35);
            }
            puVar19 = (undefined8 *)(lVar41 + lVar20);
            lVar39 = lVar39 + 1;
            uVar48 = puVar19[3];
            uVar47 = puVar19[2];
            uVar44 = puVar19[5];
            uVar43 = puVar19[4];
            uVar46 = puVar19[1];
            uVar45 = *puVar19;
            lVar41 = lVar41 + lVar20;
            lVar20 = lVar20 + 0x38;
            puVar35[6] = puVar19[6];
            puVar35[3] = uVar48;
            puVar35[2] = uVar47;
            puVar35[5] = uVar44;
            puVar35[4] = uVar43;
            puVar35[1] = uVar46;
            *puVar35 = uVar45;
            *(undefined2 *)(lVar41 + 0x14) = 1;
            *(undefined4 *)(lVar41 + 0x20) = 0;
          } while (lVar39 < *(short *)((long)pvVar15 + 0x20));
        }
        if (*(long *)(*param_1 + 0x18) != 0) {
          (*DAT_003138c0)();
        }
        *(undefined4 *)((long)pvVar15 + 0x34) = 0;
        FUN_0024cea8(pvVar15);
LAB_002431c0:
        iVar42 = iVar42 + 1;
        sqlite3_reset(param_1);
        if (-1 < (int)lVar13) {
          *(undefined1 *)((long)param_1 + 0xc3) = 0xfe;
        }
        goto LAB_002421a0;
      }
      if (iVar10 != 7) {
LAB_0024306c:
        if (iVar10 != 0) goto LAB_002432cc;
        goto LAB_002431c0;
      }
      if ((*(char *)(lVar39 + 0x67) == '\0') && (*(char *)(lVar39 + 0x68) == '\0')) {
        *(undefined1 *)(lVar39 + 0x67) = 1;
        if (0 < *(int *)(lVar39 + 0xdc)) {
          *(undefined4 *)(lVar39 + 400) = 1;
        }
        *(undefined2 *)(lVar39 + 0x19c) = 0;
        *(int *)(lVar39 + 0x198) = *(int *)(lVar39 + 0x198) + 1;
        if (*(long *)(lVar39 + 0x158) != 0) {
          FUN_0022aac0(*(long *)(lVar39 + 0x158),"out of memory");
          lVar20 = *(long *)(*(long *)(lVar39 + 0x158) + 0x100);
          *(undefined4 *)(*(long *)(lVar39 + 0x158) + 0x18) = 7;
          if (lVar20 != 0) {
            do {
              *(undefined4 *)(lVar20 + 0x18) = 7;
              *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
              lVar20 = *(long *)(lVar20 + 0x100);
            } while (lVar20 != 0);
            goto LAB_0024306c;
          }
        }
      }
      iVar10 = 7;
LAB_002432cc:
      lVar13 = *(long *)(lVar18 + 0x188);
      if (lVar13 == 0) {
LAB_00243328:
        pcVar34 = (char *)0x0;
        lVar13 = param_1[0x15];
      }
      else if ((((*(ushort *)(lVar13 + 0x14) ^ 0xffff) & 0x202) == 0) &&
              (*(char *)(lVar13 + 0x16) == '\x01')) {
        pcVar34 = *(char **)(lVar13 + 8);
        lVar13 = param_1[0x15];
      }
      else {
        if ((*(ushort *)(lVar13 + 0x14) & 1) != 0) goto LAB_00243328;
        pcVar34 = (char *)FUN_0022ae18(lVar13,1);
        lVar13 = param_1[0x15];
      }
      if (lVar13 != 0) {
        FUN_0022a888(lVar18);
      }
      if (*(char *)(lVar18 + 0x67) == '\0') {
        if (pcVar34 == (char *)0x0) {
          pvVar15 = (void *)0x0;
        }
        else {
          sVar14 = strlen(pcVar34);
          pvVar15 = (void *)FUN_0022a5f4(lVar18,sVar14 + 1);
          if (pvVar15 != (void *)0x0) {
            memcpy(pvVar15,pcVar34,sVar14 + 1);
          }
        }
        param_1[0x15] = (long)pvVar15;
        uVar11 = FUN_0023e2e4(lVar18,iVar10);
        *(uint *)((long)param_1 + 0x34) = uVar11;
      }
      else {
        uVar11 = 7;
        param_1[0x15] = 0;
        *(undefined4 *)((long)param_1 + 0x34) = 7;
      }
LAB_002433b8:
      if (*(long *)(lVar18 + 0x18) != 0) {
        (*DAT_003138c0)();
      }
      goto LAB_002433d4;
    }
    pcVar34 = "API called with finalized prepared statement";
  }
  uVar11 = 0x15;
  sqlite3_log(0x15,pcVar34);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x157f4,
              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
LAB_002433d4:
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00242500:
  iVar29 = iVar37 + 1;
  bVar1 = iVar10 <= iVar37;
  iVar36 = iVar37;
  iVar37 = iVar29;
  if (bVar1) goto LAB_00242674;
  goto LAB_0024250c;
}


// ===== 00243410  sqlite3_table_column_metadata =====

undefined4
sqlite3_table_column_metadata
          (long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,undefined8 *param_5,
          undefined8 *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  undefined *puVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  size_t sVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  bool bVar21;
  bool bVar22;
  char *pcVar23;
  long local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_70 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_0022d2b8(param_1);
  }
  uVar14 = *(uint *)(param_1 + 0x2c);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(lVar11 + 0x71);
  if (((*(byte *)(lVar11 + 0x72) & 1) == 0) &&
     (iVar8 = FUN_0028b86c(param_1,0,&local_70,0), iVar8 != 0)) {
LAB_00243510:
    bVar21 = true;
    cVar3 = *(char *)(param_1 + 0x6f);
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x28);
    if (1 < (int)uVar18) {
      lVar11 = (ulong)uVar18 * 0x20 + -8;
      uVar19 = (ulong)uVar18;
      do {
        if (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + lVar11) + 0x72) & 1) == 0) &&
           (iVar8 = FUN_0028b86c(param_1,(int)uVar19 + -1,&local_70,0), iVar8 != 0))
        goto LAB_00243510;
        lVar11 = lVar11 + -0x20;
        bVar21 = 2 < uVar19;
        uVar19 = uVar19 - 1;
      } while (bVar21);
    }
    if ((uVar14 & 1) == 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
    }
    lVar11 = FUN_0028c0b8(param_1,param_3,param_2);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x3f) != '\x02')) {
      if (param_4 == (byte *)0x0) goto LAB_00243864;
      sVar6 = *(short *)(lVar11 + 0x36);
      if (0 < sVar6) {
        lVar20 = 0;
LAB_002436dc:
        pbVar15 = *(byte **)(*(long *)(lVar11 + 8) + lVar20 * 0x10);
        pbVar13 = param_4;
        do {
          bVar4 = *pbVar15;
          if (bVar4 == *pbVar13) {
            if (bVar4 == 0) {
              plVar17 = (long *)(*(long *)(lVar11 + 8) + lVar20 * 0x10);
              if ((int)lVar20 != (int)sVar6) goto LAB_00243738;
              goto LAB_00243770;
            }
          }
          else if ((&DAT_0017d228)[bVar4] != (&DAT_0017d228)[*pbVar13]) goto LAB_0024371c;
          pbVar15 = pbVar15 + 1;
          pbVar13 = pbVar13 + 1;
        } while( true );
      }
      lVar20 = 0;
      plVar17 = (long *)0x0;
      if (sVar6 != 0) {
LAB_00243738:
        uVar14 = (uint)lVar20;
        goto joined_r0x00243848;
      }
LAB_00243770:
      if (-1 < *(char *)(lVar11 + 0x30)) {
        pbVar15 = &DAT_00175558;
        pbVar13 = param_4;
        do {
          uVar14 = (uint)*pbVar13;
          if (uVar14 == *pbVar15) {
            if (uVar14 == 0) goto LAB_00243834;
          }
          else if ((&DAT_0017d228)[uVar14] != (&DAT_0017d228)[(uint)*pbVar15])
          goto code_r0x002437bc;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
        } while( true );
      }
    }
LAB_00243570:
    bVar21 = false;
    iVar8 = 0;
    cVar3 = *(char *)(param_1 + 0x6f);
  }
  bVar22 = false;
  uVar16 = 0;
  uVar14 = 0;
  uVar18 = 0;
  pcVar2 = (char *)0x0;
  pcVar23 = (char *)0x0;
  goto joined_r0x00243894;
LAB_0024371c:
  lVar20 = lVar20 + 1;
  if (lVar20 == sVar6) goto LAB_00243770;
  goto LAB_002436dc;
code_r0x002437bc:
  pcVar23 = "ROWID";
  pbVar15 = param_4;
  do {
    uVar14 = (uint)*pbVar15;
    if (uVar14 == (byte)*pcVar23) {
      if (uVar14 == 0) goto LAB_00243834;
    }
    else if ((&DAT_0017d228)[uVar14] != (&DAT_0017d228)[(uint)(byte)*pcVar23]) break;
    pbVar15 = pbVar15 + 1;
    pcVar23 = (char *)((byte *)pcVar23 + 1);
  } while( true );
  pbVar15 = &DAT_001734d1;
  pbVar13 = param_4;
  do {
    bVar4 = *pbVar13;
    if (bVar4 == *pbVar15) {
      if (bVar4 == 0) break;
    }
    else if ((&DAT_0017d228)[bVar4] != (&DAT_0017d228)[*pbVar15]) goto LAB_00243570;
    pbVar13 = pbVar13 + 1;
    pbVar15 = pbVar15 + 1;
  } while( true );
LAB_00243834:
  uVar5 = *(ushort *)(lVar11 + 0x34);
  if ((short)uVar5 < 0) {
LAB_00243864:
    uVar16 = 0;
    pcVar12 = (char *)0x0;
    uVar14 = 0;
    uVar18 = 1;
    pcVar23 = "INTEGER";
  }
  else {
    uVar14 = (uint)uVar5;
    plVar17 = (long *)(*(long *)(lVar11 + 8) + (ulong)uVar5 * 0x10);
joined_r0x00243848:
    if (plVar17 == (long *)0x0) goto LAB_00243864;
    uVar5 = *(ushort *)((long)plVar17 + 0xe);
    if ((uVar5 >> 2 & 1) == 0) {
      if (0xf < *(byte *)(plVar17 + 1)) {
        pcVar23 = (&PTR_DAT_00313f98)[(*(byte *)(plVar17 + 1) >> 4) - 1];
        goto joined_r0x002438c0;
      }
      pcVar23 = (char *)0x0;
      if ((uVar5 >> 9 & 1) != 0) goto LAB_002438e4;
LAB_002438c4:
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar23 = (char *)*plVar17;
      sVar10 = strlen(pcVar23);
      pcVar23 = pcVar23 + sVar10 + 1;
joined_r0x002438c0:
      if ((uVar5 >> 9 & 1) == 0) goto LAB_002438c4;
LAB_002438e4:
      pcVar12 = (char *)(*plVar17 + -1);
      do {
        pcVar12 = pcVar12 + 1;
      } while (*pcVar12 != '\0');
      if ((uVar5 >> 2 & 1) != 0) {
        do {
          pcVar12 = pcVar12 + 1;
        } while (*pcVar12 != '\0');
      }
      pcVar12 = pcVar12 + 1;
    }
    uVar16 = (uint)((*(byte *)(plVar17 + 1) & 0xf) != 0);
    uVar18 = uVar5 & 1;
    if (uVar14 == (int)*(short *)(lVar11 + 0x34)) {
      uVar14 = *(uint *)(lVar11 + 0x30) >> 3 & 1;
    }
    else {
      uVar14 = 0;
    }
  }
  bVar21 = false;
  iVar8 = 0;
  pcVar2 = "BINARY";
  if (pcVar12 != (char *)0x0) {
    pcVar2 = pcVar12;
  }
  bVar22 = true;
  cVar3 = *(char *)(param_1 + 0x6f);
joined_r0x00243894:
  if (cVar3 == '\0') {
    FUN_0022d348(param_1);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = pcVar23;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = pcVar2;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar16;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar18;
  }
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar14;
  }
  if (!bVar21 && !bVar22) {
    if (local_70 != 0) {
      FUN_0022a888(param_1,local_70);
    }
    local_70 = FUN_00255dd0(param_1,"no such table column: %s.%s",param_3,param_4);
    iVar8 = 1;
  }
  puVar1 = (undefined *)0x0;
  if (local_70 != 0) {
    puVar1 = &DAT_001716ae;
  }
  FUN_0024b53c(param_1,iVar8,puVar1);
  if (local_70 != 0) {
    FUN_0022a888(param_1);
  }
  if ((iVar8 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar9 = 0;
    lVar11 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar9 = FUN_0023e2e4(param_1,iVar8);
    lVar11 = *(long *)(param_1 + 0x18);
  }
  if (lVar11 != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00243938  sqlite3_thread_cleanup =====

void sqlite3_thread_cleanup(void)

{
  return;
}


// ===== 0024393c  sqlite3_total_changes =====

undefined4 sqlite3_total_changes(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


// ===== 00243944  sqlite3_trace =====

undefined8 sqlite3_trace(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (*DAT_003138b0)();
    lVar1 = *(long *)(param_1 + 0x18);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf0) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  *(char *)(param_1 + 0x6e) = (param_2 != 0) << 6;
  if (lVar1 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 002439b4  sqlite3_transfer_bindings =====

long sqlite3_transfer_bindings(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(short *)(param_1 + 0x20) != (short)param_2[4]) {
    return 1;
  }
  if (*(int *)((long)param_2 + 0x11c) != 0) {
    *(byte *)((long)param_2 + 0xc6) = *(byte *)((long)param_2 + 0xc6) & 0xfc | 1;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0xfc | 1;
  }
  if (*(long *)(*param_2 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (0 < *(short *)(param_1 + 0x20)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x80);
      puVar2 = (undefined8 *)(param_2[0x10] + lVar4);
      if (((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) || (*(int *)(puVar2 + 4) != 0)) {
        FUN_0022c29c(puVar2);
      }
      puVar1 = (undefined8 *)(lVar6 + lVar4);
      lVar5 = lVar5 + 1;
      uVar12 = puVar1[3];
      uVar11 = puVar1[2];
      uVar8 = puVar1[5];
      uVar7 = puVar1[4];
      uVar10 = puVar1[1];
      uVar9 = *puVar1;
      puVar2[6] = puVar1[6];
      lVar6 = lVar6 + lVar4;
      lVar4 = lVar4 + 0x38;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      puVar2[1] = uVar10;
      *puVar2 = uVar9;
      sVar3 = *(short *)(param_1 + 0x20);
      *(undefined2 *)(lVar6 + 0x14) = 1;
      *(undefined4 *)(lVar6 + 0x20) = 0;
    } while (lVar5 < sVar3);
  }
  lVar5 = *(long *)(*param_2 + 0x18);
  if (lVar5 != 0) {
    (*DAT_003138c0)();
    lVar5 = 0;
  }
  return lVar5;
}


// ===== 00243af0  sqlite3_update_hook =====

undefined8 sqlite3_update_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = param_3;
    *(undefined8 *)(param_1 + 0x138) = param_2;
  }
  else {
    (*DAT_003138b0)();
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = param_3;
    *(undefined8 *)(param_1 + 0x138) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return uVar1;
}


// ===== 00243b5c  sqlite3_user_data =====

undefined8 sqlite3_user_data(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}


// ===== 00243b68  sqlite3_value_bytes =====

ulong sqlite3_value_bytes(int *param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 5);
  if (((uVar1 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x16) == '\x01')) {
    return (ulong)(uint)param_1[4];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_0023c158(param_1,1);
      return uVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[4];
    if ((uVar1 >> 10 & 1) != 0) {
      return (ulong)(*param_1 + uVar3);
    }
  }
  return (ulong)uVar3;
}


// ===== 00243bb4  sqlite3_value_bytes16 =====

ulong sqlite3_value_bytes16(int *param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 5);
  if (((uVar1 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x16) != '\x01')) {
    return (ulong)(uint)param_1[4];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_0023c158(param_1,2);
      return uVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[4];
    if ((uVar1 >> 10 & 1) != 0) {
      return (ulong)(*param_1 + uVar3);
    }
  }
  return (ulong)uVar3;
}


// ===== 00243c04  sqlite3_value_double =====

undefined1  [16] sqlite3_value_double(ulong *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar1 >> 3 & 1) != 0) {
    auVar3._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if ((uVar1 & 0x24) != 0) {
    auVar2._0_8_ = (double)(long)*param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    auVar3 = FUN_0022adb8();
    return auVar3;
  }
  return ZEXT816(0);
}


// ===== 00243c44  sqlite3_value_int =====

undefined8 sqlite3_value_int(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar1 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar1 >> 3 & 1) == 0) {
    if (((uVar1 & 0x12) != 0) && (param_1[1] != 0)) {
      uVar2 = FUN_0022ad58();
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_0022ad28(*param_1);
  return uVar2;
}


// ===== 00243ca8  sqlite3_value_int64 =====

undefined8 sqlite3_value_int64(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar1 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar1 >> 3 & 1) == 0) {
    if (((uVar1 & 0x12) != 0) && (param_1[1] != 0)) {
      uVar2 = FUN_0022ad58();
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_0022ad28(*param_1);
  return uVar2;
}


// ===== 00243cec  sqlite3_value_text =====

long sqlite3_value_text(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x01')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_0022ae18(param_1,1);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00243d28  sqlite3_value_text16 =====

long sqlite3_value_text16(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x02')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_0022ae18(param_1,2);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00243d64  sqlite3_value_text16be =====

long sqlite3_value_text16be(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x03')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_0022ae18(param_1,3);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00243da0  sqlite3_value_text16le =====

long sqlite3_value_text16le(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x02')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_0022ae18(param_1,2);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00243ddc  sqlite3_value_type =====

undefined1 sqlite3_value_type(long param_1)

{
  return (&DAT_0017d33a)[(ulong)*(ushort *)(param_1 + 0x14) & 0x3f];
}


// ===== 00243df4  sqlite3_vmprintf =====

void sqlite3_vmprintf(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  uint local_88;
  undefined2 local_84;
  undefined1 auStack_7e [70];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    local_98 = auStack_7e;
    local_88 = 0;
    local_90 = DAT_00177f38;
    uStack_b8 = param_2[1];
    local_c0 = *param_2;
    uStack_a8 = param_2[3];
    uStack_b0 = param_2[2];
    local_a0 = 0;
    local_84 = 0;
    sqlite3_str_vappendf(&local_a0,param_1,&local_c0);
    puVar3 = local_98;
    if (local_98 != (undefined1 *)0x0) {
      local_98[local_88] = 0;
      if ((local_90._4_4_ != 0) && ((local_84._1_1_ >> 2 & 1) == 0)) {
        puVar3 = (undefined1 *)FUN_0022a544(&local_a0);
      }
    }
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
}


// ===== 00243eb8  sqlite3_overload_function =====

undefined8 sqlite3_overload_function(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  lVar1 = FUN_00288e64(param_1,param_2,param_3,1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)(*(long *)(param_1 + 0x18));
  }
  if (lVar1 == 0) {
    lVar1 = sqlite3_mprintf(param_2);
    if (lVar1 == 0) {
      uVar2 = 7;
    }
    else {
      uVar2 = FUN_002d3bec(param_1,param_2,param_3,1,lVar1,FUN_002f2e64,0,0,0,0,
                           PTR_sqlite3_free_0030d498);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00243f90  sqlite3_prepare_v2 =====

void sqlite3_prepare_v2(void)

{
  FUN_0024aa58();
  return;
}


// ===== 00243fa4  sqlite3_prepare16_v2 =====

void sqlite3_prepare16_v2(void)

{
  FUN_002d4038();
  return;
}


// ===== 00243fb4  sqlite3_clear_bindings =====

undefined8 sqlite3_clear_bindings(long *param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(*param_1 + 0x18);
  if (lVar4 != 0) {
    (*DAT_003138b0)(lVar4);
  }
  sVar2 = (short)param_1[4];
  if (0 < sVar2) {
    lVar3 = param_1[0x10];
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (((*(ushort *)(lVar3 + lVar5 + 0x14) & 0x9000) != 0) ||
         (*(int *)(lVar3 + lVar5 + 0x20) != 0)) {
        FUN_0022c29c();
        lVar3 = param_1[0x10];
        sVar2 = (short)param_1[4];
      }
      lVar6 = lVar6 + 1;
      lVar1 = lVar3 + lVar5;
      lVar5 = lVar5 + 0x38;
      *(undefined2 *)(lVar1 + 0x14) = 1;
    } while (lVar6 < sVar2);
  }
  if (*(int *)((long)param_1 + 0x11c) != 0) {
    *(byte *)((long)param_1 + 0xc6) = *(byte *)((long)param_1 + 0xc6) & 0xfc | 1;
  }
  if (lVar4 != 0) {
    (*DAT_003138c0)(lVar4);
  }
  return 0;
}


// ===== 00244090  sqlite3_create_module_v2 =====

int sqlite3_create_module_v2
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  FUN_0028cc08(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x67) == '\0') {
    iVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_0023e2e4(param_1,0);
    if ((param_5 != (code *)0x0) && (iVar1 != 0)) {
      (*param_5)(param_4);
    }
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  return iVar1;
}


// ===== 00244148  sqlite3_bind_zeroblob =====

ulong sqlite3_bind_zeroblob(long *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  
  uVar3 = (long)param_2 - 1;
  uVar1 = FUN_002d3e54(param_1,uVar3 & 0xffffffff);
  if ((int)uVar1 == 0) {
    lVar5 = param_1[0x10];
    puVar4 = (uint *)(lVar5 + uVar3 * 0x38);
    if (((puVar4[5] & 0x9000) != 0) || (*(int *)(lVar5 + uVar3 * 0x38 + 0x20) != 0)) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_0022c29c(puVar4);
    }
    lVar5 = lVar5 + uVar3 * 0x38;
    *puVar4 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    lVar2 = *param_1;
    *(undefined2 *)(puVar4 + 5) = 0x410;
    lVar2 = *(long *)(lVar2 + 0x18);
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined1 *)(lVar5 + 0x16) = 1;
    *(undefined8 *)(lVar5 + 8) = 0;
    if (lVar2 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      (*DAT_003138c0)(lVar2);
    }
  }
  return uVar1;
}


// ===== 00244220  sqlite3_blob_bytes =====

uint * sqlite3_blob_bytes(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    if (*(long *)(param_1 + 6) == 0) {
      return (uint *)0x0;
    }
    param_1 = (uint *)(ulong)*param_1;
  }
  return param_1;
}


// ===== 0024423c  sqlite3_blob_close =====

void sqlite3_blob_close(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    FUN_0022a888(lVar2,param_1);
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
    sqlite3_finalize(uVar1);
    return;
  }
  return;
}


// ===== 002442a8  sqlite3_blob_open =====

undefined4
sqlite3_blob_open(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  int *piVar22;
  undefined8 *puVar23;
  short *psVar24;
  uint uVar25;
  undefined4 *puVar26;
  long lVar27;
  undefined1 *puVar28;
  uint uVar29;
  long local_228;
  long local_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  *param_7 = 0;
  local_228 = 0;
  uVar15 = (uint)(param_6 != 0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  puVar10 = (undefined8 *)FUN_0022a5f4(param_1,0x38);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[6] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
  }
  iVar8 = 0;
  uVar29 = 0;
  do {
    local_120 = *(undefined8 *)(param_1 + 0x158);
    local_148 = 0;
    *(long **)(param_1 + 0x158) = &local_220;
    local_88 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    local_1f8 = 0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    local_220 = param_1;
    if (*(char *)(param_1 + 0x67) != '\0') {
      FUN_0022aac0(&local_220,"out of memory");
    }
    if (puVar10 == (undefined8 *)0x0) goto LAB_002448ac;
    if (local_228 != 0) {
      FUN_0022a888(param_1);
    }
    local_228 = 0;
    if (*(char *)(param_1 + 0x6f) == '\0') {
      FUN_0022d2b8(param_1);
    }
    puVar11 = (undefined8 *)FUN_0028a230(&local_220,0,param_3,param_2);
    if (puVar11 == (undefined8 *)0x0) {
LAB_002448fc:
      if (local_218 != 0) {
        local_228 = local_218;
        local_218 = 0;
      }
      if (*(char *)(param_1 + 0x6f) == '\0') {
        FUN_0022d348(param_1);
      }
      iVar8 = 1;
      goto LAB_00244960;
    }
    if (*(char *)((long)puVar11 + 0x3f) == '\x01') {
      pcVar13 = "cannot open virtual table: %s";
LAB_002448f0:
      FUN_0022aac0(&local_220,pcVar13,param_3);
      goto LAB_002448fc;
    }
    if (*(char *)(puVar11 + 6) < '\0') {
      pcVar13 = "cannot open table without rowid: %s";
      goto LAB_002448f0;
    }
    if (*(char *)((long)puVar11 + 0x3f) == '\x02') {
      pcVar13 = "cannot open view: %s";
      goto LAB_002448f0;
    }
    lVar20 = puVar11[0xc];
    lVar18 = *(long *)(param_1 + 0x20);
    puVar10[6] = puVar11;
    if (lVar20 == 0) {
      iVar7 = -0x8000;
    }
    else {
      iVar7 = -1;
      plVar12 = (long *)(lVar18 + 0x18);
      do {
        lVar27 = *plVar12;
        iVar7 = iVar7 + 1;
        plVar12 = plVar12 + 4;
      } while (lVar27 != lVar20);
    }
    sVar5 = *(short *)((long)puVar11 + 0x36);
    puVar10[5] = *(undefined8 *)(lVar18 + (long)iVar7 * 0x20);
    if (0 < sVar5) {
      lVar18 = 0;
LAB_002444a4:
      pbVar21 = *(byte **)(puVar11[1] + lVar18 * 0x10);
      pbVar14 = param_4;
      do {
        bVar3 = *pbVar21;
        if (bVar3 == *pbVar14) {
          if (bVar3 == 0) goto LAB_002444f8;
        }
        else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[*pbVar14]) goto LAB_002444e4;
        pbVar21 = pbVar21 + 1;
        pbVar14 = pbVar14 + 1;
      } while( true );
    }
    lVar18 = 0;
LAB_002444f8:
    iVar7 = (int)lVar18;
    if (iVar7 == sVar5) {
LAB_002448c0:
      pcVar13 = "no such column: \"%s\"";
LAB_0024493c:
      local_228 = FUN_00255dd0(param_1,pcVar13,param_4);
      if (*(char *)(param_1 + 0x6f) == '\0') {
        FUN_0022d348(param_1);
      }
      iVar8 = 1;
      goto joined_r0x0024495c;
    }
    if (param_6 != 0) {
      if (((*(byte *)(param_1 + 0x31) >> 6 & 1) == 0) || (lVar20 = puVar11[9], lVar20 == 0)) {
        pbVar21 = (byte *)0x0;
      }
      else {
        pbVar21 = (byte *)0x0;
        do {
          uVar19 = (ulong)*(uint *)(lVar20 + 0x28);
          if (0 < (int)*(uint *)(lVar20 + 0x28)) {
            pbVar14 = pbVar21;
            piVar22 = (int *)(lVar20 + 0x40);
            do {
              pbVar21 = (byte *)"foreign key";
              if (*piVar22 != iVar7) {
                pbVar21 = pbVar14;
              }
              uVar19 = uVar19 - 1;
              pbVar14 = pbVar21;
              piVar22 = piVar22 + 4;
            } while (uVar19 != 0);
          }
          lVar20 = *(long *)(lVar20 + 8);
        } while (lVar20 != 0);
      }
      for (lVar20 = puVar11[2]; lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x28)) {
        uVar19 = (ulong)*(ushort *)(lVar20 + 0x5e);
        if (uVar19 != 0) {
          pbVar14 = pbVar21;
          psVar24 = *(short **)(lVar20 + 8);
          do {
            pbVar21 = (byte *)"indexed";
            if (iVar7 != *psVar24 && *psVar24 != -2) {
              pbVar21 = pbVar14;
            }
            uVar19 = uVar19 - 1;
            pbVar14 = pbVar21;
            psVar24 = psVar24 + 1;
          } while (uVar19 != 0);
        }
      }
      if (pbVar21 != (byte *)0x0) {
        pcVar13 = "cannot open %s column for writing";
        param_4 = pbVar21;
        goto LAB_0024493c;
      }
    }
    plVar12 = (long *)FUN_0028e948(&local_220);
    puVar10[3] = plVar12;
    if (plVar12 != (long *)0x0) {
      puVar17 = (undefined4 *)puVar11[0xc];
      if (puVar17 == (undefined4 *)0x0) {
        uVar25 = 0xffff8000;
      }
      else {
        uVar25 = 0xffffffff;
        puVar23 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        do {
          puVar26 = (undefined4 *)*puVar23;
          uVar25 = uVar25 + 1;
          puVar23 = puVar23 + 4;
        } while (puVar26 != puVar17);
      }
      iVar7 = (int)plVar12[0x12];
      uVar9 = *puVar17;
      uVar2 = puVar17[1];
      if (iVar7 < *(int *)((long)plVar12 + 0x94)) {
        puVar17 = (undefined4 *)(plVar12[0x11] + (long)iVar7 * 0x18);
        *(int *)(plVar12 + 0x12) = iVar7 + 1;
        *puVar17 = 2;
        puVar17[1] = uVar25;
        *(undefined8 *)(puVar17 + 4) = 0;
        puVar17[2] = uVar15;
        puVar17[3] = uVar9;
      }
      else {
        iVar7 = FUN_0028ea68(plVar12,2,uVar25,uVar15);
      }
      if (*(char *)(*plVar12 + 0x67) == '\0') {
        lVar20 = plVar12[0x11] + (long)iVar7 * 0x18;
        *(undefined1 *)(lVar20 + 1) = 0xfd;
        *(undefined4 *)(lVar20 + 0x10) = uVar2;
      }
      uVar16 = *(uint *)(plVar12 + 0x12);
      if (0 < (int)uVar16) {
        *(undefined2 *)(plVar12[0x11] + (ulong)uVar16 * 0x18 + -0x16) = 1;
      }
      if (*(int *)((long)plVar12 + 0x94) < (int)(uVar16 + 6)) {
        iVar7 = FUN_0028eecc(plVar12);
        if (iVar7 == 0) {
          uVar16 = *(uint *)(plVar12 + 0x12);
          goto LAB_002446cc;
        }
        puVar28 = (undefined1 *)0x0;
      }
      else {
LAB_002446cc:
        puVar28 = (undefined1 *)(plVar12[0x11] + (long)(int)uVar16 * 0x18);
        *(undefined8 *)(puVar28 + 9) = 0;
        *(undefined8 *)(puVar28 + 1) = 0;
        *(undefined8 *)(puVar28 + 0x10) = 0;
        *(undefined8 *)(puVar28 + 0x21) = 0;
        *(undefined8 *)(puVar28 + 0x19) = 0;
        *(undefined8 *)(puVar28 + 0x28) = 0;
        *(undefined8 *)(puVar28 + 0x30) = 0x1f;
        lVar20 = plVar12[0x12];
        *puVar28 = 0xa9;
        puVar28[0x18] = 0x70;
        *(undefined8 *)(puVar28 + 0x40) = 0;
        *(int *)(puVar28 + 0x38) = (int)lVar20 + 5;
        *(undefined4 *)(puVar28 + 0x3c) = 1;
        puVar28[0x48] = 0x5e;
        *(undefined4 *)(puVar28 + 0x4c) = 0;
        *(undefined4 *)(puVar28 + 0x50) = 0;
        *(undefined8 *)(puVar28 + 0x58) = 0;
        *(undefined8 *)(puVar28 + 0x68) = 0;
        *(undefined8 *)(puVar28 + 0x70) = 0;
        *(undefined8 *)(puVar28 + 0x88) = 0;
        *(undefined8 *)(puVar28 + 0x79) = 0;
        *(undefined8 *)(puVar28 + 0x81) = 0;
        puVar28[0x60] = 0x54;
        lVar20 = plVar12[0x12];
        *(undefined4 *)(puVar28 + 0x54) = 1;
        puVar28[0x49] = 0;
        *(undefined2 *)(puVar28 + 0x4a) = 0;
        *(undefined4 *)(puVar28 + 100) = 1;
        puVar28[0x61] = 0;
        *(undefined2 *)(puVar28 + 0x62) = 0;
        puVar28[0x78] = 0x46;
        *(int *)(plVar12 + 0x12) = (int)lVar20 + 6;
      }
      uVar16 = 1 << (ulong)(uVar25 & 0x1f);
      *(uint *)(plVar12 + 0x19) = *(uint *)(plVar12 + 0x19) | uVar16;
      if ((uVar25 != 1) &&
         (*(char *)(*(long *)(*(long *)(*plVar12 + 0x20) + (long)(int)uVar25 * 0x20 + 8) + 0x11) !=
          '\0')) {
        *(uint *)((long)plVar12 + 0xcc) = *(uint *)((long)plVar12 + 0xcc) | uVar16;
      }
      if (*(char *)(param_1 + 0x67) == '\0') {
        uVar9 = *(undefined4 *)(puVar11 + 5);
        cVar4 = *(char *)(*plVar12 + 0x67);
        *(uint *)(puVar28 + 4) = uVar25;
        *(undefined4 *)(puVar28 + 8) = uVar9;
        *(uint *)(puVar28 + 0xc) = uVar15;
        if ((cVar4 != '\0') ||
           (FUN_0028ed40(plVar12,plVar12[0x11] + 0x30,*puVar11,0), *(char *)(param_1 + 0x67) == '\0'
           )) {
          if (param_6 != 0) {
            puVar28[0x18] = 0x71;
          }
          sVar5 = *(short *)((long)puVar11 + 0x36);
          uVar9 = *(undefined4 *)(puVar11 + 5);
          puVar28[0x19] = 0xfd;
          *(undefined4 *)(puVar28 + 0x20) = uVar9;
          *(uint *)(puVar28 + 0x24) = uVar25;
          *(int *)(puVar28 + 0x28) = sVar5 + 1;
          local_f8 = local_f8 & 0xffffffffffff0000;
          uStack_1ec = 1;
          uStack_1e8 = 1;
          *(int *)(puVar28 + 0x50) = (int)*(short *)((long)puVar11 + 0x36);
          FUN_002d0ecc(plVar12,&local_220);
        }
      }
    }
    cVar4 = *(char *)(param_1 + 0x6f);
    *(short *)(puVar10 + 1) = (short)lVar18;
    puVar10[4] = param_1;
    if (cVar4 == '\0') {
      FUN_0022d348(param_1);
    }
    if (((*(char *)(param_1 + 0x67) != '\0') ||
        (iVar8 = FUN_002d54b0(puVar10,param_5,&local_228), 0x30 < uVar29)) || (iVar8 != 0x11))
    goto LAB_002448a8;
    uVar29 = uVar29 + 1;
    FUN_0024cf4c(&local_220);
    iVar8 = 0x11;
  } while( true );
LAB_002444e4:
  lVar18 = lVar18 + 1;
  if (lVar18 == sVar5) goto LAB_002448c0;
  goto LAB_002444a4;
LAB_002448a8:
  if (iVar8 == 0) {
LAB_002448ac:
    if (*(char *)(param_1 + 0x67) == '\0') {
      iVar8 = 0;
      *param_7 = puVar10;
      goto LAB_00244978;
    }
    iVar8 = 0;
joined_r0x0024495c:
    if (puVar10 == (undefined8 *)0x0) goto LAB_00244978;
  }
LAB_00244960:
  if (puVar10[3] != 0) {
    FUN_0024cea8();
  }
  FUN_0022a888(param_1,puVar10);
LAB_00244978:
  lVar18 = local_228;
  puVar1 = (undefined *)0x0;
  if (local_228 != 0) {
    puVar1 = &DAT_001716ae;
  }
  FUN_0024b53c(param_1,iVar8,puVar1,local_228);
  if (lVar18 != 0) {
    FUN_0022a888(param_1,lVar18);
  }
  FUN_0024cf4c(&local_220);
  if ((iVar8 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar9 = 0;
    lVar18 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar9 = FUN_0023e2e4(param_1,iVar8);
    lVar18 = *(long *)(param_1 + 0x18);
  }
  if (lVar18 != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00244a34  sqlite3_blob_read =====

void sqlite3_blob_read(void)

{
  FUN_002f3024();
  return;
}


// ===== 00244a40  sqlite3_blob_write =====

void sqlite3_blob_write(void)

{
  FUN_002f3024();
  return;
}


// ===== 00244a4c  sqlite3_create_collation_v2 =====

undefined4
sqlite3_create_collation_v2
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_3 = param_3 & 0xffffffff;
    (*DAT_003138b0)();
  }
  iVar1 = FUN_002eede0(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar2 = FUN_0023e2e4(param_1,iVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  return uVar2;
}


// ===== 00244b00  sqlite3_file_control =====

undefined4 sqlite3_file_control(long param_1,byte *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (param_2 == (byte *)0x0) {
    lVar7 = *(long *)(param_1 + 0x20);
LAB_00244c00:
    uVar10 = 0;
LAB_00244c0c:
    lVar7 = *(long *)(lVar7 + uVar10 * 0x20 + 8);
    if (lVar7 != 0) {
      if ((*(char *)(lVar7 + 0x11) != '\0') &&
         (*(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1, *(char *)(lVar7 + 0x12) == '\0')) {
        FUN_0022eb3c(lVar7);
      }
      puVar8 = *(undefined8 **)(lVar7 + 8);
      puVar11 = (undefined8 *)*puVar8;
      plVar6 = (long *)puVar11[9];
      if (param_3 < 0x1c) {
        if (param_3 == 7) {
          *(long **)param_4 = plVar6;
          cVar4 = *(char *)(lVar7 + 0x11);
          goto joined_r0x00244cf4;
        }
        if (param_3 == 0x1b) {
          uVar5 = 0;
          *(undefined8 *)param_4 = *puVar11;
          cVar4 = *(char *)(lVar7 + 0x11);
        }
        else {
LAB_00244d28:
          uVar2 = *(undefined4 *)(param_1 + 0x290);
          if (*plVar6 == 0) {
            uVar5 = 0xc;
          }
          else {
            uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,param_3,param_4);
          }
          *(undefined4 *)(param_1 + 0x290) = uVar2;
          cVar4 = *(char *)(lVar7 + 0x11);
        }
      }
      else {
        if (param_3 == 0x1c) {
          puVar8 = puVar11 + 10;
          if (puVar11[0x25] != 0) {
            puVar8 = (undefined8 *)(puVar11[0x25] + 0x10);
          }
          *(undefined8 *)param_4 = *puVar8;
          cVar4 = *(char *)(lVar7 + 0x11);
        }
        else if (param_3 == 0x23) {
          *param_4 = *(uint *)((long)puVar11 + 0x84);
          cVar4 = *(char *)(lVar7 + 0x11);
        }
        else {
          if (param_3 != 0x26) goto LAB_00244d28;
          uVar1 = *param_4;
          if (*(char *)(lVar7 + 0x11) == '\0') {
            uVar14 = (uint)*(byte *)((long)puVar8 + 0x26);
            uVar16 = *(undefined8 *)((long)puVar8 + 0x34);
          }
          else {
            iVar9 = *(int *)(lVar7 + 0x14);
            *(int *)(lVar7 + 0x14) = iVar9 + 1;
            if (*(char *)(lVar7 + 0x12) == '\0') {
              FUN_0022eb3c(lVar7);
              bVar3 = *(byte *)(*(long *)(lVar7 + 8) + 0x26);
              uVar14 = (uint)bVar3;
              uVar16 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x34);
              if (*(char *)(lVar7 + 0x11) == '\0') goto LAB_00244da8;
              iVar9 = *(int *)(lVar7 + 0x14) + -1;
              *(int *)(lVar7 + 0x14) = iVar9;
            }
            else {
              bVar3 = *(byte *)((long)puVar8 + 0x26);
              uVar14 = (uint)bVar3;
              uVar16 = *(undefined8 *)((long)puVar8 + 0x34);
              *(int *)(lVar7 + 0x14) = iVar9;
            }
            if (iVar9 == 0) {
              uVar14 = (uint)bVar3;
              FUN_0022eb04(lVar7);
            }
          }
LAB_00244da8:
          uVar15 = (int)uVar16 - (int)((ulong)uVar16 >> 0x20);
          if ((int)uVar15 <= (int)uVar14) {
            uVar15 = uVar14;
          }
          *param_4 = uVar15;
          if (uVar1 < 0x100) {
            FUN_002995c4(lVar7,0,uVar1,0);
          }
          cVar4 = *(char *)(lVar7 + 0x11);
        }
joined_r0x00244cf4:
        uVar5 = 0;
      }
      if ((cVar4 != '\0') &&
         (iVar9 = *(int *)(lVar7 + 0x14) + -1, *(int *)(lVar7 + 0x14) = iVar9, iVar9 == 0)) {
        FUN_0022eb04(lVar7);
      }
      goto LAB_00244e00;
    }
  }
  else {
    uVar10 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar7 = *(long *)(param_1 + 0x20);
      uVar5 = 1;
      puVar8 = (undefined8 *)(lVar7 + uVar10 * 0x20);
      do {
        pbVar12 = (byte *)*puVar8;
        iVar9 = (int)uVar10;
        pbVar13 = param_2;
        if (pbVar12 != (byte *)0x0) {
          do {
            bVar3 = *pbVar12;
            if (bVar3 == *pbVar13) {
              if (bVar3 == 0) {
                if (iVar9 < 0) goto LAB_00244ca0;
                goto LAB_00244c0c;
              }
            }
            else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[*pbVar13]) break;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        pbVar12 = param_2;
        pbVar13 = &DAT_00171f77;
        if (iVar9 == 0) {
          do {
            bVar3 = *pbVar13;
            if (bVar3 == *pbVar12) {
              if (bVar3 == 0) goto LAB_00244c00;
            }
            else if ((&DAT_0017d228)[bVar3] != (&DAT_0017d228)[*pbVar12]) break;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        uVar10 = (ulong)(iVar9 - 1);
        puVar8 = puVar8 + -4;
      } while (0 < iVar9);
      goto LAB_00244e00;
    }
  }
LAB_00244ca0:
  uVar5 = 1;
LAB_00244e00:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return uVar5;
}


// ===== 00244e30  sqlite3_memory_highwater =====

undefined8 sqlite3_memory_highwater(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = DAT_00316f08;
  if (DAT_00316f08 != 0) {
    (*DAT_003138b0)(DAT_00316f08);
  }
  uVar1 = DAT_00316eb0;
  if (param_1 != 0) {
    DAT_00316eb0 = DAT_00316e60;
  }
  if (lVar2 != 0) {
    (*DAT_003138c0)(lVar2);
  }
  return uVar1;
}


// ===== 00244ea4  sqlite3_memory_used =====

undefined8 sqlite3_memory_used(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_00316f08;
  uVar2 = DAT_00316e60;
  if (DAT_00316f08 != 0) {
    (*DAT_003138b0)(DAT_00316f08);
    uVar2 = DAT_00316e60;
    (*DAT_003138c0)(lVar1);
  }
  return uVar2;
}


// ===== 00244f08  sqlite3_mutex_alloc =====

undefined8 sqlite3_mutex_alloc(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 < 2) {
    iVar2 = sqlite3_initialize();
  }
  else {
    if (DAT_003138a0 == (code *)0x0) {
      DAT_003138d0 = 0;
      bVar1 = DAT_00313834 != '\0';
      DAT_00313890 = FUN_0022f75c;
      if (bVar1) {
        DAT_00313890 = FUN_0022f764;
      }
      DAT_00313898 = FUN_0022f76c;
      if (bVar1) {
        DAT_00313898 = FUN_0022f774;
      }
      DAT_003138c8 = 0;
      DAT_003138a8 = FUN_0022f77c;
      if (bVar1) {
        DAT_003138a8 = FUN_0022f780;
      }
      DAT_003138b0 = FUN_0022f838;
      if (bVar1) {
        DAT_003138b0 = pthread_mutex_lock;
      }
      DAT_003138b8 = FUN_0022f840;
      if (bVar1) {
        DAT_003138b8 = FUN_0022f848;
      }
      DAT_003138c0 = FUN_0022f868;
      if (bVar1) {
        DAT_003138c0 = pthread_mutex_unlock;
      }
      DAT_003138a0 = FUN_0022f870;
      if (bVar1) {
        DAT_003138a0 = FUN_0022f878;
      }
      DataMemoryBarrier(2,3);
    }
    iVar2 = (*DAT_00313890)();
    DataMemoryBarrier(2,3);
  }
  if (iVar2 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00245030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*DAT_003138a0)(param_1);
  return uVar3;
}


// ===== 00245034  sqlite3_mutex_free =====

void sqlite3_mutex_free(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00245040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_003138a8)();
    return;
  }
  return;
}


// ===== 00245048  sqlite3_mutex_try =====

void sqlite3_mutex_try(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00245054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_003138b8)();
    return;
  }
  return;
}


// ===== 0024505c  sqlite3_open_v2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqlite3_open_v2(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined4 uVar15;
  char *pcVar16;
  int iVar17;
  char cVar18;
  long *plStack_88;
  char *pcStack_80;
  char *pcStack_78;
  uint uStack_6c;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  pcStack_80 = (char *)0x0;
  pcStack_78 = (char *)0x0;
  *param_2 = 0;
  uVar8 = sqlite3_initialize();
  if ((int)uVar8 != 0) goto LAB_002ee9b0;
  cVar18 = '\0';
  if ((((param_3 >> 0xf & 1) == 0) && (DAT_00313834 != '\0')) &&
     (cVar18 = DAT_00313835, (param_3 >> 0x10 & 1) != 0)) {
    cVar18 = '\x01';
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_002ee644;
LAB_002ee624:
    if (DAT_0031397c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_002ee624;
LAB_002ee644:
    param_3 = param_3 & 0xfffdffff;
  }
  uStack_6c = param_3 & 0xfff600e7;
  pcVar9 = (char *)FUN_0022a6ac(0x308);
  if (pcVar9 == (char *)0x0) {
LAB_002ee8dc:
    uVar8 = 7;
LAB_002ee8e0:
    FUN_002d4bc8(pcVar9,0);
    pcVar9 = (char *)0x0;
  }
  else {
    memset(pcVar9,0,0x308);
    if (cVar18 != '\0') {
      if (DAT_00313834 != '\0') {
        lVar10 = (*DAT_003138a0)(1);
        *(long *)(pcVar9 + 0x18) = lVar10;
        if (lVar10 != 0) {
          (*DAT_003138b0)();
          uVar8 = *(ulong *)(pcVar9 + 0x30);
          goto LAB_002ee74c;
        }
      }
      puVar12 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != (char *)0x0) {
          (*DAT_003138b0)();
        }
        iVar7 = (*DAT_00313868)(pcVar9);
        DAT_00316e60 = DAT_00316e60 - iVar7;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(pcVar9);
        pcVar9 = DAT_00316f08;
        if (DAT_00316f08 == (char *)0x0) goto LAB_002ee8dc;
        puVar12 = &DAT_003138c0;
      }
      (*(code *)*puVar12)(pcVar9);
      pcVar9 = (char *)0x0;
      goto LAB_002ee8dc;
    }
    uVar8 = 0;
LAB_002ee74c:
    uVar6 = _DAT_0017da0c;
    uVar5 = _UNK_0017da04;
    uVar4 = _DAT_0017d9fc;
    plStack_88 = (long *)(pcVar9 + 0x18);
    uVar11 = CONCAT44(_DAT_0017da18,_UNK_0017da14);
    uVar15 = 0xff;
    if ((param_3 & 0x2000000) != 0) {
      uVar15 = 0xffffffff;
    }
    pcVar9[0x6a] = -1;
    *(undefined4 *)(pcVar9 + 0x58) = uVar15;
    *(undefined8 *)(pcVar9 + 0x90) = uVar5;
    *(undefined8 *)(pcVar9 + 0x88) = uVar4;
    uVar5 = _UNK_0017da20;
    uVar4 = CONCAT44(_UNK_0017da1c,_DAT_0017da18);
    *(undefined8 *)(pcVar9 + 0xa0) = uVar11;
    *(undefined8 *)(pcVar9 + 0x98) = uVar6;
    *(undefined8 *)(pcVar9 + 0xac) = uVar5;
    *(undefined8 *)(pcVar9 + 0xa4) = uVar4;
    uVar11 = DAT_00313958;
    pcVar9[0x28] = '\x02';
    pcVar9[0x29] = '\0';
    pcVar9[0x2a] = '\0';
    pcVar9[0x2b] = '\0';
    pcVar9[0x71] = 'm';
    *(undefined8 *)(pcVar9 + 0x40) = uVar11;
    *(ulong *)(pcVar9 + 0x30) = uVar8 | 0xe00480e0;
    *(char **)(pcVar9 + 0x20) = pcVar9 + 0x298;
    pcVar9[0x198] = '\x01';
    pcVar9[0x199] = '\0';
    pcVar9[0x19a] = '\0';
    pcVar9[0x19b] = '\0';
    pcVar9[0x19c] = '\0';
    pcVar9[0x19d] = '\0';
    pcVar9[0xb4] = '\0';
    pcVar9[0xb5] = '\0';
    pcVar9[0xb6] = '\0';
    pcVar9[0xb7] = '\0';
    pcVar9[0x65] = '\x01';
    pcVar9[0x74] = '\0';
    pcVar9[0x75] = '\0';
    pcVar9[0x76] = '\0';
    pcVar9[0x77] = '\0';
    *(undefined ***)(pcVar9 + 200) = &PTR_DAT_00313f98;
    pcVar9[0x278] = '\0';
    pcVar9[0x279] = '\0';
    pcVar9[0x27a] = '\0';
    pcVar9[0x27b] = '\0';
    pcVar9[0x27c] = '\0';
    pcVar9[0x27d] = '\0';
    pcVar9[0x27e] = '\0';
    pcVar9[0x27f] = '\0';
    pcVar9[0x270] = '\0';
    pcVar9[0x271] = '\0';
    pcVar9[0x272] = '\0';
    pcVar9[0x273] = '\0';
    pcVar9[0x274] = '\0';
    pcVar9[0x275] = '\0';
    pcVar9[0x276] = '\0';
    pcVar9[0x277] = '\0';
    pcVar9[0x268] = '\0';
    pcVar9[0x269] = '\0';
    pcVar9[0x26a] = '\0';
    pcVar9[0x26b] = '\0';
    pcVar9[0x26c] = '\0';
    pcVar9[0x26d] = '\0';
    pcVar9[0x26e] = '\0';
    pcVar9[0x26f] = '\0';
    pcVar9[0x230] = '\0';
    pcVar9[0x231] = '\0';
    pcVar9[0x232] = '\0';
    pcVar9[0x233] = '\0';
    pcVar9[0x234] = '\0';
    pcVar9[0x235] = '\0';
    pcVar9[0x236] = '\0';
    pcVar9[0x237] = '\0';
    pcVar9[0x228] = '\0';
    pcVar9[0x229] = '\0';
    pcVar9[0x22a] = '\0';
    pcVar9[0x22b] = '\0';
    pcVar9[0x22c] = '\0';
    pcVar9[0x22d] = '\0';
    pcVar9[0x22e] = '\0';
    pcVar9[0x22f] = '\0';
    pcVar9[0x220] = '\0';
    pcVar9[0x221] = '\0';
    pcVar9[0x222] = '\0';
    pcVar9[0x223] = '\0';
    pcVar9[0x224] = '\0';
    pcVar9[0x225] = '\0';
    pcVar9[0x226] = '\0';
    pcVar9[0x227] = '\0';
    FUN_002eede0(pcVar9,"BINARY",1,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"BINARY",3,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"BINARY",2,0,FUN_002bd0ac,0);
    FUN_002eede0(pcVar9,"NOCASE",1,0,FUN_002ef194,0);
    FUN_002eede0(pcVar9,"RTRIM",1,0,FUN_002ef21c,0);
    if (pcVar9[0x67] != '\0') goto LAB_002ee8a0;
    *(uint *)(pcVar9 + 0x4c) = param_3 & 0xfff600e7;
    if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
      iVar7 = 0x15;
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2aeb9,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
LAB_002eeae4:
      pcVar16 = pcStack_80;
      puVar2 = (undefined *)0x0;
      if (pcStack_80 != (char *)0x0) {
        puVar2 = &DAT_001716ae;
      }
      FUN_0024b53c(pcVar9,iVar7,puVar2,pcStack_80);
      if (pcVar16 != (char *)0x0) {
        puVar12 = &DAT_00313858;
        if (DAT_00313830 != 0) {
          if (DAT_00316f08 != (char *)0x0) {
            (*DAT_003138b0)();
          }
          iVar7 = (*DAT_00313868)(pcVar16);
          DAT_00316e60 = DAT_00316e60 - iVar7;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(pcVar16);
          if (DAT_00316f08 == (char *)0x0) goto LAB_002ee8a0;
          puVar12 = &DAT_003138c0;
          pcVar16 = DAT_00316f08;
        }
        pcVar13 = (code *)*puVar12;
        goto LAB_002eeb88;
      }
    }
    else {
      iVar7 = FUN_0029e200(param_4,param_1,&uStack_6c,pcVar9,&pcStack_78,&pcStack_80);
      if (iVar7 != 0) {
        if (iVar7 == 7) {
          if ((pcVar9[0x67] == '\0') && (pcVar9[0x68] == '\0')) {
            pcVar9[0x67] = '\x01';
            if (0 < *(int *)(pcVar9 + 0xdc)) {
              pcVar9[400] = '\x01';
              pcVar9[0x191] = '\0';
              pcVar9[0x192] = '\0';
              pcVar9[0x193] = '\0';
            }
            iVar7 = 7;
            pcVar9[0x19c] = '\0';
            pcVar9[0x19d] = '\0';
            *(int *)(pcVar9 + 0x198) = *(int *)(pcVar9 + 0x198) + 1;
            if (*(long *)(pcVar9 + 0x158) != 0) {
              FUN_0022aac0(*(long *)(pcVar9 + 0x158),"out of memory");
              lVar10 = *(long *)(*(long *)(pcVar9 + 0x158) + 0x100);
              *(undefined4 *)(*(long *)(pcVar9 + 0x158) + 0x18) = 7;
              for (; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x100)) {
                *(undefined4 *)(lVar10 + 0x18) = 7;
                *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
              }
            }
          }
          else {
            iVar7 = 7;
          }
        }
        goto LAB_002eeae4;
      }
      iVar7 = FUN_002981e8(*(undefined8 *)pcVar9,pcStack_78,pcVar9,*(long *)(pcVar9 + 0x20) + 8,0,
                           uStack_6c | 0x100);
      if (iVar7 != 0) {
        iVar17 = 7;
        if (iVar7 != 0xc0a) {
          iVar17 = iVar7;
        }
        *(int *)(pcVar9 + 0x50) = iVar17;
        FUN_0023e358(pcVar9);
        goto LAB_002ee8a0;
      }
      FUN_002ef2a4(*(undefined8 *)(*(long *)(pcVar9 + 0x20) + 8));
      lVar10 = FUN_0029ea98(pcVar9,*(undefined8 *)(*(long *)(pcVar9 + 0x20) + 8));
      lVar14 = *(long *)(pcVar9 + 0x20);
      cVar18 = pcVar9[0x67];
      *(long *)(lVar14 + 0x18) = lVar10;
      if (cVar18 == '\0') {
        FUN_002a14f8(pcVar9,*(undefined1 *)(lVar10 + 0x71));
        lVar14 = *(long *)(pcVar9 + 0x20);
      }
      lVar10 = *(long *)(lVar14 + 8);
      if ((*(char *)(lVar10 + 0x11) != '\0') &&
         (iVar7 = *(int *)(lVar10 + 0x14) + -1, *(int *)(lVar10 + 0x14) = iVar7, iVar7 == 0)) {
        FUN_0022eb04();
      }
      uVar11 = FUN_0029ea98(pcVar9,0);
      puVar12 = *(undefined8 **)(pcVar9 + 0x20);
      *puVar12 = &DAT_00171f77;
      *(undefined1 *)(puVar12 + 2) = 3;
      cVar18 = pcVar9[0x67];
      puVar12[4] = &DAT_00171f2d;
      puVar12[7] = uVar11;
      *(undefined1 *)(puVar12 + 6) = 1;
      pcVar9[0x71] = 'v';
      if (cVar18 != '\0') goto LAB_002ee8a0;
      pcVar9[0x50] = '\0';
      pcVar9[0x51] = '\0';
      pcVar9[0x52] = '\0';
      pcVar9[0x53] = '\0';
      if (*(long *)(pcVar9 + 0x188) == 0) {
        pcVar9[0x54] = -1;
        pcVar9[0x55] = -1;
        pcVar9[0x56] = -1;
        pcVar9[0x57] = -1;
      }
      else {
        FUN_0023e358(pcVar9,0);
      }
      FUN_002ef2c8(pcVar9);
      iVar7 = sqlite3_errcode(pcVar9);
      if (iVar7 == 0) {
        lVar10 = 0;
        do {
          iVar7 = (*(code *)(&PTR_FUN_0030d0c0)[lVar10])(pcVar9);
          iVar17 = (int)lVar10;
          lVar10 = lVar10 + 1;
        } while (iVar7 == 0 && iVar17 == 0);
        if (iVar7 != 0) goto LAB_002eed54;
        FUN_002ef410(pcVar9);
        iVar7 = sqlite3_errcode(pcVar9);
        if (iVar7 != 0) goto LAB_002ee8a0;
      }
      else {
LAB_002eed54:
        *(int *)(pcVar9 + 0x50) = iVar7;
        FUN_0023e358(pcVar9);
      }
      FUN_002ee060(pcVar9,0,DAT_00313844,DAT_00313848);
      if (*(long *)(pcVar9 + 0x18) == 0) {
        *(code **)(pcVar9 + 0x160) = FUN_002a15d0;
        pcVar9[0x168] = -0x18;
        pcVar9[0x169] = '\x03';
        pcVar9[0x16a] = '\0';
        pcVar9[0x16b] = '\0';
        pcVar9[0x16c] = '\0';
        pcVar9[0x16d] = '\0';
        pcVar9[0x16e] = '\0';
        pcVar9[0x16f] = '\0';
        goto LAB_002ee8a0;
      }
      (*DAT_003138b0)();
      pcVar16 = *(char **)(pcVar9 + 0x18);
      *(code **)(pcVar9 + 0x160) = FUN_002a15d0;
      pcVar9[0x168] = -0x18;
      pcVar9[0x169] = '\x03';
      pcVar9[0x16a] = '\0';
      pcVar9[0x16b] = '\0';
      pcVar9[0x16c] = '\0';
      pcVar9[0x16d] = '\0';
      pcVar9[0x16e] = '\0';
      pcVar9[0x16f] = '\0';
      pcVar13 = DAT_003138c0;
      if (pcVar16 == (char *)0x0) goto LAB_002ee8a0;
LAB_002eeb88:
      (*pcVar13)(pcVar16);
    }
LAB_002ee8a0:
    if (*plStack_88 != 0) {
      (*DAT_003138c0)();
    }
    cVar18 = pcVar9[0x71];
    if (((cVar18 == 'm') || (cVar18 == 'v')) || (cVar18 == -0x46)) {
      if (pcVar9[0x67] != '\0') goto LAB_002ee8dc;
      uVar1 = *(uint *)(pcVar9 + 0x58) & *(uint *)(pcVar9 + 0x50);
      uVar8 = (ulong)uVar1;
      if ((uVar1 & 0xff) != 7) {
        if (uVar1 != 0) goto LAB_002eeaa8;
        goto LAB_002ee8f4;
      }
      goto LAB_002ee8e0;
    }
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2abe3,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    uVar8 = 0x15;
LAB_002eeaa8:
    pcVar9[0x71] = -0x46;
  }
LAB_002ee8f4:
  *param_2 = pcVar9;
  pcVar9 = pcStack_78;
  if (pcStack_78 != (char *)0x0) {
    do {
      do {
        pcVar16 = pcVar9;
        pcVar9 = pcVar16 + -1;
      } while (*pcVar9 != '\0');
    } while (((pcVar16[-2] != '\0') || (pcVar16[-3] != '\0')) || (pcVar16[-4] != '\0'));
    pcVar16 = pcVar16 + -4;
    puVar12 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (char *)0x0) {
        (*DAT_003138b0)();
      }
      iVar7 = (*DAT_00313868)(pcVar16);
      DAT_00316e60 = DAT_00316e60 - iVar7;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(pcVar16);
      if (DAT_00316f08 == (char *)0x0) goto LAB_002ee9b0;
      puVar12 = &DAT_003138c0;
      pcVar16 = DAT_00316f08;
    }
    (*(code *)*puVar12)(pcVar16);
  }
LAB_002ee9b0:
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 00245060  sqlite3_release_memory =====

undefined8 sqlite3_release_memory(void)

{
  return 0;
}


// ===== 00245068  sqlite3_result_error_toobig =====

void sqlite3_result_error_toobig(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
  return;
}


// ===== 00245090  sqlite3_sleep =====

int sqlite3_sleep(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    lVar1 = DAT_00316f00;
    if ((DAT_00313834 != '\0') && (lVar3 = (*DAT_003138a0)(2), lVar1 = DAT_00316f00, lVar3 != 0)) {
      (*DAT_003138b0)();
      lVar1 = DAT_00316f00;
      (*DAT_003138c0)(lVar3);
    }
    if (lVar1 != 0) {
      iVar2 = (**(code **)(lVar1 + 0x70))(lVar1,param_1 * 1000);
      return iVar2 / 1000;
    }
  }
  return 0;
}


// ===== 0024514c  sqlite3_soft_heap_limit =====

void sqlite3_soft_heap_limit(uint param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    uVar3 = (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU));
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    DAT_00316f10 = DAT_00316f18;
    if ((long)uVar3 <= (long)DAT_00316f18 && 0 < (int)param_1 || (long)DAT_00316f18 < 1) {
      DAT_00316f10 = uVar3;
    }
    DAT_00316f20 = (uint)(0 < (long)DAT_00316f10 && (long)DAT_00316f10 <= DAT_00316e60);
    if ((DAT_00316f08 != 0) && ((*DAT_003138c0)(), lVar1 = DAT_00316f08, DAT_00316f08 != 0)) {
      (*DAT_003138b0)(DAT_00316f08);
                    /* WARNING: Could not recover jumptable at 0x00245210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_003138c0)(lVar1);
      return;
    }
  }
  return;
}


// ===== 00245214  sqlite3_vfs_register =====

undefined8 sqlite3_vfs_register(long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = sqlite3_initialize();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (DAT_00313834 == '\0') {
    lVar3 = 0;
LAB_00245274:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_003138a0)(2);
    if (lVar3 == 0) goto LAB_00245274;
    (*DAT_003138b0)();
    bVar1 = false;
  }
  if (param_1 != 0) {
    if (DAT_00316f00 == param_1) {
      puVar4 = &DAT_00316f00;
    }
    else {
      lVar7 = DAT_00316f00;
      if (DAT_00316f00 == 0) {
        plVar5 = &DAT_00316f00;
        goto LAB_002452f4;
      }
      do {
        lVar6 = lVar7;
        lVar7 = *(long *)(lVar6 + 0x10);
        if (lVar7 == 0) break;
      } while (lVar7 != param_1);
      if (lVar7 != param_1) goto code_r0x002452d0;
      puVar4 = (undefined8 *)(lVar6 + 0x10);
    }
    *puVar4 = *(undefined8 *)(param_1 + 0x10);
  }
code_r0x002452d0:
  plVar5 = &DAT_00316f00;
  lVar7 = DAT_00316f00;
  if ((param_2 == 0) && (DAT_00316f00 != 0)) {
    plVar5 = (long *)(DAT_00316f00 + 0x10);
    lVar7 = *plVar5;
  }
LAB_002452f4:
  *(long *)(param_1 + 0x10) = lVar7;
  *plVar5 = param_1;
  if (!bVar1) {
    (*DAT_003138c0)(lVar3);
  }
  return 0;
}


// ===== 00245320  sqlite3_vfs_unregister =====

undefined8 sqlite3_vfs_unregister(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = sqlite3_initialize();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (DAT_00313834 == '\0') {
    lVar3 = 0;
LAB_0024537c:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_003138a0)(2);
    if (lVar3 == 0) goto LAB_0024537c;
    (*DAT_003138b0)();
    bVar1 = false;
  }
  if (param_1 == 0) goto LAB_002453c4;
  puVar6 = &DAT_00316f00;
  if (DAT_00316f00 != param_1) {
    lVar5 = DAT_00316f00;
    if (DAT_00316f00 == 0) goto LAB_002453c4;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) break;
    } while (lVar5 != param_1);
    if (lVar5 != param_1) goto LAB_002453c4;
    puVar6 = (undefined8 *)(lVar4 + 0x10);
  }
  *puVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_002453c4:
  if (!bVar1) {
    (*DAT_003138c0)(lVar3);
  }
  return 0;
}


// ===== 002453e4  sqlite3_threadsafe =====

undefined8 sqlite3_threadsafe(void)

{
  return 1;
}


// ===== 002453ec  sqlite3_result_zeroblob =====

void sqlite3_result_zeroblob(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)(*(long *)(puVar1 + 6) + 0x88) < param_2) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(puVar1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  if (((puVar1[5] & 0x9000) != 0) || (puVar1[8] != 0)) {
    FUN_0022c29c(puVar1);
  }
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 5) = 0x410;
  *puVar1 = param_2;
  *(undefined1 *)((long)puVar1 + 0x16) = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}


// ===== 00245488  sqlite3_result_error_code =====

void sqlite3_result_error_code(long *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  uVar2 = *(ushort *)(*param_1 + 0x14);
  *(uint *)((long)param_1 + 0x24) = uVar1;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 == 0x204) {
    pcVar3 = "abort due to ROLLBACK";
  }
  else if (param_2 == 0x65) {
    pcVar3 = "no more rows available";
  }
  else if (param_2 == 100) {
    pcVar3 = "another row available";
  }
  else {
    param_2 = param_2 & 0xff;
    if ((param_2 < 0x1d) && ((0x1410004U >> ((ulong)param_2 & 0x3f) & 1) == 0)) {
      pcVar3 = (&PTR_s_not_an_error_0030cfd8)[param_2];
    }
    else {
      pcVar3 = "unknown error";
    }
  }
  FUN_0023d018(param_1,pcVar3,0xffffffff,1,0);
  return;
}


// ===== 00245524  sqlite3_test_control =====

/* WARNING: Removing unreachable block (ram,0x00245bf0) */
/* WARNING: Removing unreachable block (ram,0x00245a44) */
/* WARNING: Removing unreachable block (ram,0x00245a54) */
/* WARNING: Removing unreachable block (ram,0x00245dcc) */
/* WARNING: Removing unreachable block (ram,0x00245dd8) */
/* WARNING: Removing unreachable block (ram,0x00245c60) */
/* WARNING: Removing unreachable block (ram,0x002459ac) */
/* WARNING: Removing unreachable block (ram,0x002459bc) */
/* WARNING: Removing unreachable block (ram,0x00245d74) */
/* WARNING: Removing unreachable block (ram,0x00245d98) */
/* WARNING: Removing unreachable block (ram,0x00245cf8) */
/* WARNING: Removing unreachable block (ram,0x00245d08) */
/* WARNING: Removing unreachable block (ram,0x00245c40) */
/* WARNING: Removing unreachable block (ram,0x00245c9c) */
/* WARNING: Removing unreachable block (ram,0x00245a90) */
/* WARNING: Removing unreachable block (ram,0x00245d24) */
/* WARNING: Removing unreachable block (ram,0x00245d48) */
/* WARNING: Removing unreachable block (ram,0x00245d58) */
/* WARNING: Removing unreachable block (ram,0x00245ce4) */
/* WARNING: Removing unreachable block (ram,0x00245c80) */
/* WARNING: Removing unreachable block (ram,0x00245bb8) */
/* WARNING: Removing unreachable block (ram,0x00245bc8) */
/* WARNING: Removing unreachable block (ram,0x00245cbc) */
/* WARNING: Removing unreachable block (ram,0x00245ad0) */
/* WARNING: Removing unreachable block (ram,0x00245ae0) */
/* WARNING: Removing unreachable block (ram,0x00246384) */
/* WARNING: Removing unreachable block (ram,0x00245dc4) */
/* WARNING: Removing unreachable block (ram,0x00246090) */
/* WARNING: Removing unreachable block (ram,0x00245e3c) */
/* WARNING: Removing unreachable block (ram,0x00246394) */
/* WARNING: Removing unreachable block (ram,0x002463a4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb0 : 0x00245c00 */
/* WARNING: Removing unreachable block (ram,0x0024616c) */
/* WARNING: Removing unreachable block (ram,0x00246220) */
/* WARNING: Removing unreachable block (ram,0x00246268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void sqlite3_test_control(int param_1,code *param_2,ulong *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  void *__s;
  void *__dest;
  undefined8 *puVar11;
  code **ppcVar12;
  undefined4 uVar13;
  uint uVar14;
  short sVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  byte *pbVar21;
  ulong *puVar22;
  long lVar23;
  uint uVar24;
  uint *puVar25;
  size_t __n;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double local_150;
  code *local_d0;
  ulong *puStack_c8;
  ulong *local_c0;
  uint local_74;
  long local_70;
  
  uVar9 = 0;
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (0x1c < param_1 - 5U) goto switchD_002455bc_caseD_7;
  local_d0._0_4_ = (uint)param_2;
  switch(param_1) {
  case 5:
    puVar11 = (undefined8 *)&DAT_00316f28;
    puVar16 = (undefined8 *)&DAT_00317380;
    uVar13 = _DAT_00316fa8;
    goto LAB_0024580c;
  case 6:
    puVar11 = (undefined8 *)&DAT_00317380;
    puVar16 = (undefined8 *)&DAT_00316f28;
    uVar13 = DAT_00317400;
LAB_0024580c:
    uVar9 = 0;
    uVar28 = puVar11[0xd];
    uVar27 = puVar11[0xc];
    uVar30 = puVar11[0xf];
    uVar29 = puVar11[0xe];
    *(undefined4 *)(puVar16 + 0x10) = uVar13;
    puVar16[0xd] = uVar28;
    puVar16[0xc] = uVar27;
    puVar16[0xf] = uVar30;
    puVar16[0xe] = uVar29;
    uVar29 = puVar11[4];
    uVar28 = puVar11[7];
    uVar27 = puVar11[6];
    puVar16[5] = puVar11[5];
    puVar16[4] = uVar29;
    puVar16[7] = uVar28;
    puVar16[6] = uVar27;
    uVar27 = puVar11[8];
    uVar29 = puVar11[0xb];
    uVar28 = puVar11[10];
    puVar16[9] = puVar11[9];
    puVar16[8] = uVar27;
    puVar16[0xb] = uVar29;
    puVar16[10] = uVar28;
    uVar27 = *puVar11;
    uVar29 = puVar11[3];
    uVar28 = puVar11[2];
    puVar16[1] = puVar11[1];
    *puVar16 = uVar27;
    puVar16[3] = uVar29;
    puVar16[2] = uVar28;
    break;
  case 8:
    puVar10 = (uint *)FUN_0022a6ac(0x200);
    if (puVar10 != (uint *)0x0) {
      *puVar10 = (uint)local_d0;
      puVar10[0x7e] = 0;
      puVar10[0x7f] = 0;
      puVar10[0x7c] = 0;
      puVar10[0x7d] = 0;
      puVar10[0x3f] = 0;
      puVar10[0x40] = 0;
      puVar10[0x3d] = 0;
      puVar10[0x3e] = 0;
      puVar10[0x3b] = 0;
      puVar10[0x3c] = 0;
      puVar10[0x39] = 0;
      puVar10[0x3a] = 0;
      puVar10[0x37] = 0;
      puVar10[0x38] = 0;
      puVar10[0x35] = 0;
      puVar10[0x36] = 0;
      puVar10[0x33] = 0;
      puVar10[0x34] = 0;
      puVar10[0x31] = 0;
      puVar10[0x32] = 0;
      puVar10[0x2f] = 0;
      puVar10[0x30] = 0;
      puVar10[0x2d] = 0;
      puVar10[0x2e] = 0;
      puVar10[0x2b] = 0;
      puVar10[0x2c] = 0;
      puVar10[0x29] = 0;
      puVar10[0x2a] = 0;
      puVar10[0x27] = 0;
      puVar10[0x28] = 0;
      puVar10[0x25] = 0;
      puVar10[0x26] = 0;
      puVar10[0x23] = 0;
      puVar10[0x24] = 0;
      puVar10[0x21] = 0;
      puVar10[0x22] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x20] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x17] = 0;
      puVar10[0x18] = 0;
      puVar10[0x15] = 0;
      puVar10[0x16] = 0;
      puVar10[0x13] = 0;
      puVar10[0x14] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[0x47] = 0;
      puVar10[0x48] = 0;
      puVar10[0x45] = 0;
      puVar10[0x46] = 0;
      puVar10[0x4b] = 0;
      puVar10[0x4c] = 0;
      puVar10[0x49] = 0;
      puVar10[0x4a] = 0;
      puVar10[0x4f] = 0;
      puVar10[0x50] = 0;
      puVar10[0x4d] = 0;
      puVar10[0x4e] = 0;
      puVar10[0x53] = 0;
      puVar10[0x54] = 0;
      puVar10[0x51] = 0;
      puVar10[0x52] = 0;
      puVar10[0x57] = 0;
      puVar10[0x58] = 0;
      puVar10[0x55] = 0;
      puVar10[0x56] = 0;
      puVar10[0x5b] = 0;
      puVar10[0x5c] = 0;
      puVar10[0x59] = 0;
      puVar10[0x5a] = 0;
      puVar10[0x5f] = 0;
      puVar10[0x60] = 0;
      puVar10[0x5d] = 0;
      puVar10[0x5e] = 0;
      puVar10[99] = 0;
      puVar10[100] = 0;
      puVar10[0x61] = 0;
      puVar10[0x62] = 0;
      puVar10[0x67] = 0;
      puVar10[0x68] = 0;
      puVar10[0x65] = 0;
      puVar10[0x66] = 0;
      puVar10[0x6b] = 0;
      puVar10[0x6c] = 0;
      puVar10[0x69] = 0;
      puVar10[0x6a] = 0;
      puVar10[0x6f] = 0;
      puVar10[0x70] = 0;
      puVar10[0x6d] = 0;
      puVar10[0x6e] = 0;
      puVar10[0x73] = 0;
      puVar10[0x74] = 0;
      puVar10[0x71] = 0;
      puVar10[0x72] = 0;
      puVar10[0x77] = 0;
      puVar10[0x78] = 0;
      puVar10[0x75] = 0;
      puVar10[0x76] = 0;
      puVar10[0x7b] = 0;
      puVar10[0x7c] = 0;
      puVar10[0x79] = 0;
      puVar10[0x7a] = 0;
      puVar10[0x43] = 0;
      puVar10[0x44] = 0;
      puVar10[0x41] = 0;
      puVar10[0x42] = 0;
    }
    iVar8 = (uint)local_d0 + 0xe;
    if ((int)((uint)local_d0 + 7) < 0 == SCARRY4((uint)local_d0,7)) {
      iVar8 = (uint)local_d0 + 7;
    }
    __n = (size_t)((iVar8 >> 3) + 1);
    __s = (void *)FUN_0022a6ac(__n);
    if (__s != (void *)0x0) {
      memset(__s,0,__n);
    }
    iVar8 = sqlite3_initialize();
    if (iVar8 == 0) {
      __dest = (void *)FUN_0022a6ac(0x200);
      uVar14 = 0xffffffff;
      if (((puVar10 != (uint *)0x0) && (__s != (void *)0x0)) && (__dest != (void *)0x0)) {
        lVar26 = 0;
        local_74 = 0;
LAB_00245eb8:
        do {
          puVar25 = (uint *)((long)puStack_c8 + lVar26 * 4);
          uVar14 = *puVar25;
          if (uVar14 - 1 < 2 || uVar14 == 5) {
            local_74 = puVar25[2] - 1;
            lVar23 = 4;
            puVar25[2] = puVar25[3] + puVar25[2];
          }
          else {
            if (uVar14 == 0) {
              uVar4 = *puVar10;
              puVar25 = puVar10;
              uVar14 = (uint)local_d0;
              if ((uint)local_d0 < uVar4) goto LAB_002462c4;
              uVar14 = 0;
              goto LAB_0024654c;
            }
            sqlite3_randomness(4,&local_74);
            lVar23 = 2;
          }
          iVar8 = 0;
          if ((uint)local_d0 != 0) {
            iVar8 = (int)(local_74 & 0x7fffffff) / (int)(uint)local_d0;
          }
          local_74 = (local_74 & 0x7fffffff) - iVar8 * (uint)local_d0;
          uVar4 = puVar25[1];
          uVar19 = uVar4 - 1;
          puVar25[1] = uVar19;
          uVar9 = (ulong)(local_74 + 1 >> 3);
          lVar2 = 0;
          if (uVar19 == 0 || (int)uVar4 < 1) {
            lVar2 = lVar23;
          }
          lVar26 = lVar2 + lVar26;
          bVar20 = (byte)(1 << (ulong)(local_74 + 1 & 7));
          if ((uVar14 & 1) == 0) {
            *(byte *)((long)__s + uVar9) = *(byte *)((long)__s + uVar9) & (bVar20 ^ 0xff);
            puVar25 = puVar10;
            uVar14 = local_74;
            do {
              uVar4 = puVar25[2];
              if (uVar4 == 0) {
                if (*puVar25 < 0xf81) {
                  *(byte *)((long)puVar25 + (ulong)(uVar14 >> 3) + 0x10) =
                       *(byte *)((long)puVar25 + (ulong)(uVar14 >> 3) + 0x10) &
                       ((byte)(1 << (ulong)(uVar14 & 7)) ^ 0xff);
                }
                else {
                  puVar1 = puVar25 + 4;
                  memcpy(__dest,puVar1,0x1f0);
                  lVar23 = 0;
                  puVar25[1] = 0;
                  puVar25[6] = 0;
                  puVar25[7] = 0;
                  puVar25[4] = 0;
                  puVar25[5] = 0;
                  puVar25[10] = 0;
                  puVar25[0xb] = 0;
                  puVar25[8] = 0;
                  puVar25[9] = 0;
                  puVar25[0xe] = 0;
                  puVar25[0xf] = 0;
                  puVar25[0xc] = 0;
                  puVar25[0xd] = 0;
                  puVar25[0x12] = 0;
                  puVar25[0x13] = 0;
                  puVar25[0x10] = 0;
                  puVar25[0x11] = 0;
                  puVar25[0x16] = 0;
                  puVar25[0x17] = 0;
                  puVar25[0x14] = 0;
                  puVar25[0x15] = 0;
                  puVar25[0x1a] = 0;
                  puVar25[0x1b] = 0;
                  puVar25[0x18] = 0;
                  puVar25[0x19] = 0;
                  puVar25[0x1e] = 0;
                  puVar25[0x1f] = 0;
                  puVar25[0x1c] = 0;
                  puVar25[0x1d] = 0;
                  puVar25[0x22] = 0;
                  puVar25[0x23] = 0;
                  puVar25[0x20] = 0;
                  puVar25[0x21] = 0;
                  puVar25[0x26] = 0;
                  puVar25[0x27] = 0;
                  puVar25[0x24] = 0;
                  puVar25[0x25] = 0;
                  puVar25[0x2a] = 0;
                  puVar25[0x2b] = 0;
                  puVar25[0x28] = 0;
                  puVar25[0x29] = 0;
                  puVar25[0x2e] = 0;
                  puVar25[0x2f] = 0;
                  puVar25[0x2c] = 0;
                  puVar25[0x2d] = 0;
                  puVar25[0x32] = 0;
                  puVar25[0x33] = 0;
                  puVar25[0x30] = 0;
                  puVar25[0x31] = 0;
                  puVar25[0x36] = 0;
                  puVar25[0x37] = 0;
                  puVar25[0x34] = 0;
                  puVar25[0x35] = 0;
                  puVar25[0x3a] = 0;
                  puVar25[0x3b] = 0;
                  puVar25[0x38] = 0;
                  puVar25[0x39] = 0;
                  puVar25[0x3e] = 0;
                  puVar25[0x3f] = 0;
                  puVar25[0x3c] = 0;
                  puVar25[0x3d] = 0;
                  puVar25[0x42] = 0;
                  puVar25[0x43] = 0;
                  puVar25[0x40] = 0;
                  puVar25[0x41] = 0;
                  puVar25[0x46] = 0;
                  puVar25[0x47] = 0;
                  puVar25[0x44] = 0;
                  puVar25[0x45] = 0;
                  puVar25[0x4a] = 0;
                  puVar25[0x4b] = 0;
                  puVar25[0x48] = 0;
                  puVar25[0x49] = 0;
                  puVar25[0x4e] = 0;
                  puVar25[0x4f] = 0;
                  puVar25[0x4c] = 0;
                  puVar25[0x4d] = 0;
                  puVar25[0x52] = 0;
                  puVar25[0x53] = 0;
                  puVar25[0x50] = 0;
                  puVar25[0x51] = 0;
                  puVar25[0x56] = 0;
                  puVar25[0x57] = 0;
                  puVar25[0x54] = 0;
                  puVar25[0x55] = 0;
                  puVar25[0x5a] = 0;
                  puVar25[0x5b] = 0;
                  puVar25[0x58] = 0;
                  puVar25[0x59] = 0;
                  puVar25[0x5e] = 0;
                  puVar25[0x5f] = 0;
                  puVar25[0x5c] = 0;
                  puVar25[0x5d] = 0;
                  puVar25[0x62] = 0;
                  puVar25[99] = 0;
                  puVar25[0x60] = 0;
                  puVar25[0x61] = 0;
                  puVar25[0x66] = 0;
                  puVar25[0x67] = 0;
                  puVar25[100] = 0;
                  puVar25[0x65] = 0;
                  puVar25[0x6a] = 0;
                  puVar25[0x6b] = 0;
                  puVar25[0x68] = 0;
                  puVar25[0x69] = 0;
                  puVar25[0x6e] = 0;
                  puVar25[0x6f] = 0;
                  puVar25[0x6c] = 0;
                  puVar25[0x6d] = 0;
                  puVar25[0x72] = 0;
                  puVar25[0x73] = 0;
                  puVar25[0x70] = 0;
                  puVar25[0x71] = 0;
                  puVar25[0x76] = 0;
                  puVar25[0x77] = 0;
                  puVar25[0x74] = 0;
                  puVar25[0x75] = 0;
                  puVar25[0x7a] = 0;
                  puVar25[0x7b] = 0;
                  puVar25[0x78] = 0;
                  puVar25[0x79] = 0;
                  puVar25[0x7e] = 0;
                  puVar25[0x7f] = 0;
                  puVar25[0x7c] = 0;
                  puVar25[0x7d] = 0;
                  do {
                    iVar8 = *(int *)((long)__dest + lVar23 * 4);
                    if ((iVar8 != 0) && (iVar8 != uVar14 + 1)) {
                      uVar9 = (ulong)((iVar8 - 1U) % 0x7c);
                      uVar4 = puVar1[uVar9];
                      puVar25[1] = puVar25[1] + 1;
                      while (uVar4 != 0) {
                        uVar4 = 0;
                        if ((int)uVar9 + 1U < 0x7c) {
                          uVar4 = (int)uVar9 + 1;
                        }
                        uVar9 = (ulong)uVar4;
                        uVar4 = puVar1[uVar9];
                      }
                      puVar1[uVar9] = *(uint *)((long)__dest + lVar23 * 4);
                    }
                    lVar23 = lVar23 + 1;
                  } while (lVar23 != 0x7c);
                }
                break;
              }
              uVar19 = 0;
              if (uVar4 != 0) {
                uVar19 = uVar14 / uVar4;
              }
              uVar14 = uVar14 - uVar19 * uVar4;
              puVar25 = *(uint **)(puVar25 + (ulong)uVar19 * 2 + 4);
            } while (puVar25 != (uint *)0x0);
            goto LAB_00245eb8;
          }
          *(byte *)((long)__s + uVar9) = *(byte *)((long)__s + uVar9) | bVar20;
        } while ((uVar14 == 5) || (iVar8 = FUN_00250f48(puVar10,local_74 + 1), iVar8 == 0));
        uVar14 = 0xffffffff;
      }
      goto LAB_00246648;
    }
    uVar14 = 0xffffffff;
    goto LAB_002466dc;
  case 9:
    DAT_003139c0 = local_d0;
    uVar9 = 0;
    if (local_d0 != (code *)0x0) {
      uVar9 = (*local_d0)(0);
    }
    break;
  case 10:
    DAT_00317338 = puStack_c8;
    uVar9 = 0;
    DAT_00317330 = param_2;
    break;
  case 0xb:
    uVar9 = (ulong)DAT_00313ca8;
    if ((uint)local_d0 != 0) {
      DAT_00313ca8 = (uint)local_d0;
    }
    break;
  case 0xc:
    local_74 = 0;
    uVar9 = 0;
    break;
  case 0xd:
    uVar9 = (ulong)param_2 & 0xffffffff;
    break;
  case 0xf:
    uVar9 = 0;
    *(int *)(param_2 + 0x60) = (int)puStack_c8;
    break;
  case 0x11:
    uVar9 = 0;
    *(uint *)(local_d0 + 0x2c) = *(uint *)(local_d0 + 0x2c) ^ 0x20;
    break;
  case 0x12:
    DAT_003139c8 = (uint)local_d0;
    if ((uint)local_d0 == 2) {
      DAT_003139d0 = puStack_c8;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      DAT_003139d0 = (ulong *)0x0;
    }
    break;
  case 0x13:
    DAT_003139d8 = (uint)local_d0;
    uVar9 = 0;
    break;
  case 0x14:
    DAT_00313840 = (uint)local_d0;
    uVar9 = 0;
    break;
  case 0x16:
    uVar9 = 0x1e212;
    break;
  case 0x17:
    uVar9 = (ulong)(DAT_00313984 == 0);
    break;
  case 0x18:
    uVar9 = 0;
    *(int *)(param_2 + 0xb8) = (int)puStack_c8;
    break;
  case 0x19:
    if (*(long *)(local_d0 + 0x18) != 0) {
      (*DAT_003138b0)();
    }
    if ((param_3 != (ulong *)0x0) &&
       (uVar9 = (ulong)(*(int *)(local_d0 + 0x28) - 1), 0 < *(int *)(local_d0 + 0x28))) {
      puVar11 = (undefined8 *)(*(long *)(local_d0 + 0x20) + uVar9 * 0x20);
      do {
        pbVar21 = (byte *)*puVar11;
        iVar8 = (int)uVar9;
        puVar22 = param_3;
        if (pbVar21 != (byte *)0x0) {
          do {
            bVar20 = *pbVar21;
            if (bVar20 == (byte)*puVar22) {
              if (bVar20 == 0) {
                if (-1 < iVar8) goto LAB_00246164;
                goto LAB_0024628c;
              }
            }
            else if ((&DAT_0017d228)[bVar20] != (&DAT_0017d228)[(byte)*puVar22]) break;
            pbVar21 = pbVar21 + 1;
            puVar22 = (ulong *)((long)puVar22 + 1);
          } while( true );
        }
        puVar22 = param_3;
        pbVar21 = &DAT_00171f77;
        if (iVar8 == 0) {
LAB_00246144:
          bVar20 = *pbVar21;
          if (bVar20 == (byte)*puVar22) {
            if (bVar20 != 0) goto LAB_0024613c;
            iVar8 = 0;
LAB_00246164:
            local_d0[0xc4] = SUB41(iVar8,0);
            local_d0[0xc5] = SUB41(param_4 & 1,0);
            local_d0[0xc6] = (code)((byte)local_d0[0xc6] & 0xfd | (byte)((param_4 & 1) << 1));
            *(int *)(local_d0 + 0xc0) = param_5;
            if (((param_4 & 1) == 0) && (param_5 != 0)) {
              FUN_002561f4(local_d0);
            }
            break;
          }
          if ((&DAT_0017d228)[bVar20] == (&DAT_0017d228)[(byte)*puVar22]) goto LAB_0024613c;
        }
        uVar9 = (ulong)(iVar8 - 1);
        puVar11 = puVar11 + -4;
      } while (0 < iVar8);
    }
LAB_0024628c:
    uVar9 = *(ulong *)(local_d0 + 0x18);
    if (uVar9 != 0) {
      (*DAT_003138c0)();
      uVar9 = 0;
    }
    break;
  case 0x1b:
    uVar5 = *(ushort *)(*(long *)local_d0 + 0x14);
    if ((uVar5 >> 2 & 1) != 0) {
      uVar9 = 0;
      *(ushort *)(*(long *)local_d0 + 0x14) = uVar5 & 0xfffb | 0x20;
      break;
    }
    goto LAB_00245d90;
  case 0x1c:
    DAT_003139e0 = (uint)local_d0;
    if ((puStack_c8 != (ulong *)0x0) &&
       (DAT_003139e0 = (uint)local_d0, **(uint **)(puStack_c8[4] + 0x18) != 0)) {
      DAT_003139e0 = **(uint **)(puStack_c8[4] + 0x18);
    }
    iVar8 = sqlite3_initialize(0);
    if (iVar8 == 0) {
      if (DAT_00313834 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = (*DAT_003138a0)(5);
        if (uVar9 != 0) {
          (*DAT_003138b0)();
          DAT_00316f28 = 0;
          (*DAT_003138c0)(uVar9);
          uVar9 = 0;
          break;
        }
      }
      DAT_00316f28 = 0;
      break;
    }
LAB_00245d90:
    uVar9 = 0;
    break;
  case 0x1d:
    uVar9 = 0;
    DAT_00313839 = SUB81(param_2,0);
    break;
  case 0x1e:
    uVar9 = 0;
    *puStack_c8 = 0;
    break;
  case 0x1f:
    uVar9 = 0;
    local_c0 = puStack_c8;
    if ((int)(uint)local_d0 < 2) {
      iVar8 = DAT_00317090;
      if ((uint)local_d0 != 0) {
        if ((uint)local_d0 == 1) {
          DAT_00317090 = (int)*puStack_c8;
          uVar9 = 0;
        }
        break;
      }
    }
    else {
      iVar8 = DAT_00317094;
      if ((uint)local_d0 != 2) {
        if ((uint)local_d0 == 3) {
          DAT_00317094 = (int)*puStack_c8;
          uVar9 = 0;
        }
        break;
      }
    }
    goto LAB_002464c0;
  case 0x21:
    if (local_150 <= 1.0) {
LAB_00246188:
      sVar15 = 0;
    }
    else if (local_150 <= 2000000000.0) {
      uVar9 = (ulong)local_150;
      if (uVar9 < 8) {
        if (uVar9 < 2) goto LAB_00246188;
        sVar15 = 0x28;
        uVar17 = uVar9;
        do {
          uVar9 = uVar17 << 1;
          bVar7 = uVar17 < 4;
          sVar15 = sVar15 + -10;
          uVar17 = uVar9;
        } while (bVar7);
      }
      else {
        sVar15 = 0x28;
        uVar17 = uVar9;
        if (0xff < uVar9) {
          do {
            uVar9 = uVar17 >> 4;
            sVar15 = sVar15 + 0x28;
            bVar7 = 0xfff < uVar17;
            uVar17 = uVar9;
          } while (bVar7);
        }
        uVar17 = uVar9;
        if (0xf < uVar9) {
          do {
            uVar9 = uVar17 >> 1;
            sVar15 = sVar15 + 10;
            bVar7 = 0x1f < uVar17;
            uVar17 = uVar9;
          } while (bVar7);
        }
      }
      sVar15 = sVar15 + (&DAT_001776e0)[uVar9 & 7] + -10;
    }
    else {
      sVar15 = (ushort)((ulong)local_150 >> 0x34) * 10 + -0x27ec;
    }
    iVar8 = (int)sVar15;
    *(int *)param_2 = iVar8;
    if (iVar8 < 0x262) {
      lVar23 = (long)(short)(iVar8 % 10);
      uVar14 = iVar8 % 10 & 0xffff;
      lVar26 = 0;
      if (uVar14 != 0) {
        lVar26 = lVar23 + -1;
      }
      lVar23 = lVar23 + -2;
      if (uVar14 < 5) {
        lVar23 = lVar26;
      }
      uVar9 = lVar23 + 8U << ((ulong)(iVar8 / 10 - 3) & 0x3f);
      if (iVar8 < 0x1e) {
        uVar9 = lVar23 + 8U >> ((ulong)(3 - iVar8 / 10) & 0x3f);
      }
      *param_3 = uVar9;
      if (7 < uVar9) {
        if (0xff < uVar9) goto LAB_002463c8;
        sVar15 = 0x28;
        goto joined_r0x00246484;
      }
      if (uVar9 < 2) {
        iVar8 = 0;
        goto LAB_002464c0;
      }
      sVar15 = 0x28;
      uVar17 = uVar9;
      do {
        uVar9 = uVar17 << 1;
        bVar7 = uVar17 < 4;
        sVar15 = sVar15 + -10;
        uVar17 = uVar9;
      } while (bVar7);
    }
    else {
      uVar9 = 0x7fffffffffffffff;
      *param_3 = 0x7fffffffffffffff;
LAB_002463c8:
      sVar15 = 0x28;
      uVar17 = uVar9;
      do {
        uVar9 = uVar17 >> 4;
        sVar15 = sVar15 + 0x28;
        bVar7 = 0xfff < uVar17;
        uVar17 = uVar9;
      } while (bVar7);
joined_r0x00246484:
      uVar17 = uVar9;
      if (0xf < uVar9) {
        do {
          uVar9 = uVar17 >> 1;
          sVar15 = sVar15 + 10;
          bVar7 = 0x1f < uVar17;
          uVar17 = uVar9;
        } while (bVar7);
      }
    }
    iVar8 = (int)(short)(sVar15 + (&DAT_001776e0)[uVar9 & 7] + -10);
LAB_002464c0:
    uVar9 = 0;
    *(int *)local_c0 = iVar8;
  }
  goto switchD_002455bc_caseD_7;
LAB_0024613c:
  puVar22 = (ulong *)((long)puVar22 + 1);
  pbVar21 = pbVar21 + 1;
  goto LAB_00246144;
  while( true ) {
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = uVar14 / uVar19;
    }
    puVar1 = puVar25 + (ulong)uVar18 * 2 + 4;
    puVar25 = *(uint **)puVar1;
    uVar14 = uVar14 - uVar18 * uVar19;
    if (*(uint **)puVar1 == (uint *)0x0) break;
LAB_002462c4:
    uVar19 = puVar25[2];
    if (uVar19 == 0) {
      if (*puVar25 < 0xf81) {
        uVar14 = *(byte *)((long)puVar25 + (ulong)(uVar14 >> 3) + 0x10) >> (ulong)(uVar14 & 7) & 1;
        goto LAB_0024654c;
      }
      uVar19 = puVar25[(ulong)(uVar14 % 0x7c) + 4];
      if (uVar19 != 0) {
        uVar18 = uVar14 % 0x7c;
        goto LAB_00246528;
      }
      break;
    }
  }
  goto LAB_002462e0;
  while( true ) {
    uVar3 = 0;
    if (uVar24 != 0x7b) {
      uVar3 = uVar24 + 1;
    }
    uVar18 = puVar25[(ulong)uVar3 + 4];
    uVar24 = uVar3;
    if (uVar18 == 0) break;
LAB_0024661c:
    if (uVar18 == uVar14 + 1) {
      bVar20 = 1;
      goto LAB_002465a0;
    }
  }
LAB_0024659c:
  bVar20 = 0;
LAB_002465a0:
  uVar14 = local_74;
  if (((*(byte *)((long)__s + (ulong)(local_74 >> 3)) >> (ulong)(local_74 & 7) & 1) != bVar20) ||
     (bVar7 = local_74 == (uint)local_d0, local_74 = local_74 + 1, uVar14 = uVar19, bVar7))
  goto LAB_00246648;
  goto LAB_00246570;
  while( true ) {
    uVar24 = 0;
    if (uVar18 != 0x7b) {
      uVar24 = uVar18 + 1;
    }
    uVar19 = puVar25[(ulong)uVar24 + 4];
    uVar18 = uVar24;
    if (uVar19 == 0) break;
LAB_00246528:
    if (uVar19 == uVar14 + 1) {
      uVar14 = 1;
      goto LAB_0024654c;
    }
  }
LAB_002462e0:
  uVar14 = 0;
LAB_0024654c:
  uVar19 = (uVar14 - (uint)local_d0) + uVar4;
  local_74 = 1;
  uVar14 = uVar19;
  if (0 < (int)(uint)local_d0) {
LAB_00246570:
    uVar14 = local_74 - 1;
    puVar25 = puVar10;
    if (uVar14 < uVar4) {
      do {
        uVar18 = puVar25[2];
        if (uVar18 == 0) {
          if (*puVar25 < 0xf81) {
            bVar20 = *(byte *)((long)puVar25 + (ulong)(uVar14 >> 3) + 0x10) >> (ulong)(uVar14 & 7) &
                     1;
            goto LAB_002465a0;
          }
          uVar18 = puVar25[(ulong)(uVar14 % 0x7c) + 4];
          if (uVar18 != 0) {
            uVar24 = uVar14 % 0x7c;
            goto LAB_0024661c;
          }
          break;
        }
        uVar24 = 0;
        if (uVar18 != 0) {
          uVar24 = uVar14 / uVar18;
        }
        uVar14 = uVar14 - uVar24 * uVar18;
        puVar1 = puVar25 + (ulong)uVar24 * 2 + 4;
        puVar25 = *(uint **)puVar1;
      } while (*(uint **)puVar1 != (uint *)0x0);
    }
    goto LAB_0024659c;
  }
LAB_00246648:
  if (__dest != (void *)0x0) {
    ppcVar12 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (void *)0x0) {
        (*DAT_003138b0)();
      }
      iVar8 = (*DAT_00313868)(__dest);
      DAT_00316e60 = DAT_00316e60 - iVar8;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(__dest);
      if (DAT_00316f08 == (void *)0x0) goto LAB_002466dc;
      ppcVar12 = &DAT_003138c0;
      __dest = DAT_00316f08;
    }
    (**ppcVar12)(__dest);
  }
LAB_002466dc:
  uVar9 = (ulong)uVar14;
  if (__s != (void *)0x0) {
    ppcVar12 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (void *)0x0) {
        (*DAT_003138b0)();
      }
      iVar8 = (*DAT_00313868)(__s);
      DAT_00316e60 = DAT_00316e60 - iVar8;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(__s);
      if (DAT_00316f08 == (void *)0x0) goto LAB_00246764;
      ppcVar12 = &DAT_003138c0;
      __s = DAT_00316f08;
    }
    (**ppcVar12)(__s);
  }
LAB_00246764:
  FUN_00250a50(puVar10);
switchD_002455bc_caseD_7:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


// ===== 002467a4  sqlite3_context_db_handle =====

undefined8 sqlite3_context_db_handle(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


// ===== 002467b0  sqlite3_extended_result_codes =====

undefined8 sqlite3_extended_result_codes(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0xff;
    if (param_2 != 0) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  else {
    (*DAT_003138b0)();
    uVar1 = 0xff;
    if (param_2 != 0) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return 0;
}


// ===== 00246820  sqlite3_limit =====

int sqlite3_limit(long param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (0xb < param_2) {
    return -1;
  }
  piVar4 = (int *)(param_1 + (ulong)param_2 * 4 + 0x88);
  iVar3 = *piVar4;
  if (-1 < param_3) {
    iVar2 = param_3;
    if (param_3 == 0 && param_2 == 0) {
      iVar2 = 1;
    }
    iVar1 = *(int *)(&DAT_0017d9fc + (ulong)param_2 * 4);
    if (param_3 <= *(int *)(&DAT_0017d9fc + (ulong)param_2 * 4)) {
      iVar1 = iVar2;
    }
    *piVar4 = iVar1;
  }
  return iVar3;
}


// ===== 00246864  sqlite3_next_stmt =====

undefined8 sqlite3_next_stmt(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_2 + 0x10);
    }
    uVar2 = *puVar1;
  }
  else {
    (*DAT_003138b0)();
    puVar1 = (undefined8 *)(param_1 + 8);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_2 + 0x10);
    }
    uVar2 = *puVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return uVar2;
}


// ===== 002468dc  sqlite3_sql =====

long sqlite3_sql(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xf8);
  }
  return param_1;
}


// ===== 002468e8  sqlite3_backup_finish =====

int sqlite3_backup_finish(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar8 = param_1[4];
  if (*(long *)(lVar8 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  lVar4 = param_1[5];
  if ((*(char *)(lVar4 + 0x11) != '\0') &&
     (*(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1, *(char *)(lVar4 + 0x12) == '\0')) {
    FUN_0022eb3c();
  }
  if ((*param_1 != 0) && ((*(long *)(*param_1 + 0x18) == 0 || ((*DAT_003138b0)(), *param_1 != 0))))
  {
    *(int *)(param_1[5] + 0x18) = *(int *)(param_1[5] + 0x18) + -1;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    plVar2 = (long *)(**(long **)(param_1[5] + 8) + 0x70);
    do {
      plVar6 = plVar2;
      plVar7 = (long *)*plVar6;
      plVar2 = plVar7 + 8;
    } while (plVar7 != param_1);
    *plVar6 = param_1[8];
  }
  FUN_00256070(param_1[1],0,0);
  lVar4 = *param_1;
  iVar1 = 0;
  if ((int)param_1[6] != 0x65) {
    iVar1 = (int)param_1[6];
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x50) = iVar1;
    iVar3 = iVar1;
    if (iVar1 == 0) {
      if (*(long *)(lVar4 + 0x188) != 0) {
        iVar3 = 0;
        goto LAB_002469e0;
      }
      *(undefined4 *)(lVar4 + 0x54) = 0xffffffff;
    }
    else {
LAB_002469e0:
      FUN_0023e358(lVar4,iVar3);
      lVar4 = *param_1;
    }
    FUN_002d4f18(lVar4);
  }
  lVar4 = param_1[5];
  if ((*(char *)(lVar4 + 0x11) != '\0') &&
     (iVar3 = *(int *)(lVar4 + 0x14) + -1, *(int *)(lVar4 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_0022eb04();
  }
  if (*param_1 != 0) {
    puVar5 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != (long *)0x0) {
        (*DAT_003138b0)();
      }
      iVar3 = (*DAT_00313868)(param_1);
      DAT_00316e60 = DAT_00316e60 - iVar3;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_1);
      if (DAT_00316f08 == (long *)0x0) goto LAB_00246a90;
      puVar5 = &DAT_003138c0;
      param_1 = DAT_00316f08;
    }
    (*(code *)*puVar5)(param_1);
  }
LAB_00246a90:
  FUN_002d4f18(lVar8);
  return iVar1;
}


// ===== 00246ac4  sqlite3_backup_init =====

long * sqlite3_backup_init(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (param_3 == param_1) {
    FUN_0024b53c(param_3,1,"source and destination must be distinct");
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)FUN_0022a6ac(0x48);
    if (plVar2 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 7;
      FUN_0023e358(param_1,7);
    }
    else {
      plVar2[8] = 0;
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      lVar3 = FUN_002ee39c(param_1,param_3,param_4);
      plVar2[5] = lVar3;
      lVar3 = FUN_002ee39c(param_1,param_1,param_2);
      lVar4 = plVar2[5];
      *plVar2 = param_1;
      plVar2[1] = lVar3;
      plVar2[4] = param_3;
      *(undefined4 *)(plVar2 + 3) = 1;
      *(undefined4 *)((long)plVar2 + 0x3c) = 0;
      if ((lVar4 != 0) && (lVar3 != 0)) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
          goto LAB_00246c58;
        }
        FUN_0024b53c(param_1,1,"destination database is in use");
      }
      puVar5 = &DAT_00313858;
      if (DAT_00313830 != 0) {
        if (DAT_00316f08 != (long *)0x0) {
          (*DAT_003138b0)();
        }
        iVar1 = (*DAT_00313868)(plVar2);
        DAT_00316e60 = DAT_00316e60 - iVar1;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(plVar2);
        plVar2 = DAT_00316f08;
        if (DAT_00316f08 == (long *)0x0) goto LAB_00246c58;
        puVar5 = &DAT_003138c0;
      }
      (*(code *)*puVar5)(plVar2);
      plVar2 = (long *)0x0;
    }
  }
LAB_00246c58:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(param_3 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return plVar2;
}


// ===== 00246c94  sqlite3_backup_pagecount =====

undefined4 sqlite3_backup_pagecount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 00246c9c  sqlite3_backup_remaining =====

undefined4 sqlite3_backup_remaining(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}


// ===== 00246ca4  sqlite3_backup_step =====

uint sqlite3_backup_step(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  lVar11 = param_1[5];
  if ((*(char *)(lVar11 + 0x11) != '\0') &&
     (*(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1, *(char *)(lVar11 + 0x12) == '\0')) {
    FUN_0022eb3c();
  }
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*DAT_003138b0)();
  }
  uVar10 = *(uint *)(param_1 + 6);
  if ((6 < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x61U) == 0)) goto LAB_00247394;
  lVar11 = param_1[5];
  lVar16 = **(long **)(lVar11 + 8);
  lVar13 = **(long **)(param_1[1] + 8);
  if ((*param_1 == 0) || (*(char *)((long)*(long **)(lVar11 + 8) + 0x24) != '\x02')) {
    bVar7 = *(char *)(lVar11 + 0x10) != '\0';
    if (*(char *)(lVar11 + 0x10) == '\0') {
      uVar10 = FUN_0024bf6c(lVar11,0,0);
    }
    else {
      uVar10 = 0;
    }
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 == 0 && uVar10 == 0) {
      uVar10 = FUN_002995c4(param_1[1],*(undefined4 *)(*(long *)(param_1[5] + 8) + 0x34),0,0);
      if (uVar10 != 7) {
        iVar2 = *(int *)((long)param_1 + 0x14);
LAB_00246df0:
        if (iVar2 == 0) {
          uVar10 = FUN_0024bf6c(param_1[1],2,param_1 + 2);
          if (uVar10 == 0) {
            *(undefined4 *)((long)param_1 + 0x14) = 1;
          }
        }
        else {
          uVar10 = 0;
        }
      }
    }
    else if (uVar10 == 0) goto LAB_00246df0;
  }
  else {
    uVar10 = 5;
    bVar7 = true;
  }
  iVar4 = *(int *)(*(long *)(param_1[5] + 8) + 0x34);
  lVar11 = (long)iVar4;
  iVar2 = *(int *)((long)*(long **)(param_1[1] + 8) + 0x34);
  uVar19 = *(uint *)(*(long *)(param_1[5] + 8) + 0x40);
  cVar3 = *(char *)(**(long **)(param_1[1] + 8) + 9);
  uVar9 = (uint)(iVar4 != iVar2) << 3;
  if (cVar3 != '\x05' || uVar10 != 0) {
    uVar9 = uVar10;
  }
  if (param_2 != 0) {
    uVar10 = *(uint *)(param_1 + 3);
    iVar1 = 1;
    do {
      iVar12 = iVar1;
      if ((uVar19 < uVar10) || (uVar9 != 0)) break;
      uVar9 = *(uint *)(*(long *)(param_1[5] + 8) + 0x34);
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = DAT_00313ca8 / uVar9;
      }
      if (uVar10 == uVar5 + 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(lVar16 + 0x110))(lVar16,uVar10,&local_70,2);
        if ((uVar9 == 0) &&
           (uVar9 = FUN_00254da0(param_1,uVar10,*(undefined8 *)(local_70 + 8),0), local_70 != 0)) {
          if ((*(ushort *)(local_70 + 0x34) >> 5 & 1) == 0) {
            FUN_0024ac68(local_70);
          }
          else {
            lVar18 = *(long *)(local_70 + 0x28);
            *(int *)(lVar18 + 0x98) = *(int *)(lVar18 + 0x98) + -1;
            *(undefined8 *)(local_70 + 0x20) = *(undefined8 *)(lVar18 + 0xa8);
            *(long *)(lVar18 + 0xa8) = local_70;
            (**(code **)(**(long **)(lVar18 + 0x48) + 0x90))
                      (*(long **)(lVar18 + 0x48),
                       *(long *)(lVar18 + 200) * (ulong)(*(int *)(local_70 + 0x30) - 1),
                       *(undefined8 *)(local_70 + 8));
          }
        }
        uVar10 = *(uint *)(param_1 + 3);
      }
      uVar10 = uVar10 + 1;
      iVar1 = iVar12 + 1;
      *(uint *)(param_1 + 3) = uVar10;
    } while ((param_2 < 0) || (iVar12 < param_2));
  }
  if (uVar9 == 0x65) {
LAB_00246f70:
    if (uVar19 == 0) {
      lVar18 = param_1[1];
      if ((*(char *)(lVar18 + 0x11) != '\0') &&
         (*(int *)(lVar18 + 0x14) = *(int *)(lVar18 + 0x14) + 1, *(char *)(lVar18 + 0x12) == '\0'))
      {
        FUN_0022eb3c(lVar18);
      }
      *(undefined4 *)(*(long *)(lVar18 + 8) + 0x40) = 0;
      uVar9 = FUN_0024f1e4();
      if ((*(char *)(lVar18 + 0x11) != '\0') &&
         (iVar1 = *(int *)(lVar18 + 0x14) + -1, *(int *)(lVar18 + 0x14) = iVar1, iVar1 == 0)) {
        FUN_0022eb04(lVar18);
      }
      uVar19 = 1;
      if ((uVar9 != 0x65) && (uVar9 != 0)) goto LAB_00247354;
    }
    uVar9 = FUN_002e0eec(param_1[1],1,(int)param_1[2] + 1);
    if (uVar9 == 0) {
      if (*param_1 != 0) {
        FUN_002561f4();
      }
      if ((cVar3 != '\x05') || (uVar9 = FUN_002e6828(param_1[1],2), uVar9 == 0)) {
        if (iVar4 < iVar2) {
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = iVar2 / iVar4;
          }
          lVar18 = (long)iVar4 * (long)(int)uVar19;
          uVar10 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = DAT_00313ca8 / uVar10;
          }
          iVar12 = 0;
          if (iVar1 != 0) {
            iVar12 = (int)(uVar19 + iVar1 + -1) / iVar1;
          }
          uVar19 = *(uint *)(lVar13 + 0x20);
          plVar20 = *(long **)(lVar13 + 0x48);
          uVar10 = iVar12 - (uint)(iVar12 == uVar9 + 1);
          if (uVar19 < uVar10) {
LAB_00247128:
            uVar9 = FUN_0025a340(lVar13,0,1);
          }
          else {
            do {
              uVar9 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = DAT_00313ca8 / uVar9;
              }
              if (uVar10 == uVar5 + 1) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(lVar13 + 0x110))(lVar13,uVar10,&local_70,0);
                if (uVar9 == 0) {
                  lVar14 = *(long *)(local_70 + 0x28);
                  if (((*(ushort *)(local_70 + 0x34) >> 2 & 1) == 0) ||
                     (*(uint *)(lVar14 + 0x20) < *(uint *)(local_70 + 0x30))) {
                    uVar9 = *(uint *)(lVar14 + 0x30);
                    if (uVar9 == 0) {
                      if (*(uint *)(lVar14 + 200) < *(uint *)(lVar14 + 0xb8)) {
                        uVar9 = FUN_0024f748();
                      }
                      else {
                        uVar9 = FUN_0024fb20(local_70);
                      }
                    }
                  }
                  else if (*(int *)(lVar14 + 0x80) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = FUN_0024f40c(local_70);
                  }
                  if (local_70 != 0) {
                    if ((*(ushort *)(local_70 + 0x34) >> 5 & 1) == 0) {
                      FUN_0024ac68(local_70);
                    }
                    else {
                      lVar14 = *(long *)(local_70 + 0x28);
                      *(int *)(lVar14 + 0x98) = *(int *)(lVar14 + 0x98) + -1;
                      *(undefined8 *)(local_70 + 0x20) = *(undefined8 *)(lVar14 + 0xa8);
                      *(long *)(lVar14 + 0xa8) = local_70;
                      (**(code **)(**(long **)(lVar14 + 0x48) + 0x90))
                                (*(long **)(lVar14 + 0x48),
                                 *(long *)(lVar14 + 200) * (ulong)(*(int *)(local_70 + 0x30) - 1),
                                 *(undefined8 *)(local_70 + 8));
                    }
                  }
                }
              }
            } while ((uVar9 == 0) && (uVar10 = uVar10 + 1, uVar10 <= uVar19));
            if (uVar9 == 0) goto LAB_00247128;
          }
          lVar14 = lVar18;
          if ((int)(DAT_00313ca8 + iVar2) <= lVar18) {
            lVar14 = (long)(int)(DAT_00313ca8 + iVar2);
          }
          bVar8 = uVar9 == 0;
          if ((uVar9 == 0) && (lVar17 = (long)(int)(DAT_00313ca8 + iVar4), lVar17 < lVar14)) {
            do {
              iVar2 = 0;
              if (lVar11 != 0) {
                iVar2 = (int)(lVar17 / lVar11);
              }
              local_70 = 0;
              uVar9 = (**(code **)(lVar16 + 0x110))(lVar16,iVar2 + 1,&local_70,0);
              if (uVar9 == 0) {
                uVar9 = (**(code **)(*plVar20 + 0x18))
                                  (plVar20,*(undefined8 *)(local_70 + 8),iVar4,lVar17);
              }
              if (local_70 != 0) {
                if ((*(ushort *)(local_70 + 0x34) >> 5 & 1) == 0) {
                  FUN_0024ac68(local_70);
                }
                else {
                  lVar15 = *(long *)(local_70 + 0x28);
                  *(int *)(lVar15 + 0x98) = *(int *)(lVar15 + 0x98) + -1;
                  *(undefined8 *)(local_70 + 0x20) = *(undefined8 *)(lVar15 + 0xa8);
                  *(long *)(lVar15 + 0xa8) = local_70;
                  (**(code **)(**(long **)(lVar15 + 0x48) + 0x90))
                            (*(long **)(lVar15 + 0x48),
                             *(long *)(lVar15 + 200) * (ulong)(*(int *)(local_70 + 0x30) - 1),
                             *(undefined8 *)(local_70 + 8));
                }
              }
              lVar17 = lVar17 + lVar11;
              bVar8 = uVar9 == 0;
            } while (bVar8 && lVar17 < lVar14);
          }
          if (((!bVar8) || (uVar9 = (**(code **)(*plVar20 + 0x30))(plVar20,&local_70), uVar9 != 0))
             || ((lVar18 < local_70 &&
                 (uVar9 = (**(code **)(*plVar20 + 0x20))(plVar20,lVar18), uVar9 != 0))))
          goto LAB_00247354;
          uVar9 = FUN_0025b98c(lVar13,0);
        }
        else {
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          *(uint *)(lVar13 + 0x20) = iVar1 * uVar19;
          uVar9 = FUN_0025a340(lVar13,0,0);
        }
        if (uVar9 == 0) {
          uVar10 = FUN_0024cd08(param_1[1],0);
          uVar9 = 0x65;
          if (uVar10 != 0) {
            uVar9 = uVar10;
          }
        }
      }
    }
  }
  else if (uVar9 == 0) {
    *(uint *)((long)param_1 + 0x34) = (uVar19 - *(uint *)(param_1 + 3)) + 1;
    *(uint *)(param_1 + 7) = uVar19;
    if (uVar19 < *(uint *)(param_1 + 3)) goto LAB_00246f70;
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      lVar11 = **(long **)(param_1[5] + 8);
      param_1[8] = *(long *)(lVar11 + 0x70);
      *(long **)(lVar11 + 0x70) = param_1;
      *(undefined4 *)((long)param_1 + 0x3c) = 1;
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
    }
  }
LAB_00247354:
  if (!bVar7) {
    FUN_0024c8b8(param_1[5],0);
    FUN_0024cd08(param_1[5],0);
  }
  uVar10 = 7;
  if (uVar9 != 0xc0a) {
    uVar10 = uVar9;
  }
  *(uint *)(param_1 + 6) = uVar10;
LAB_00247394:
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*DAT_003138c0)();
  }
  lVar11 = param_1[5];
  if ((*(char *)(lVar11 + 0x11) != '\0') &&
     (iVar2 = *(int *)(lVar11 + 0x14) + -1, *(int *)(lVar11 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_0022eb04();
  }
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0024741c  sqlite3_compileoption_get =====

undefined * sqlite3_compileoption_get(uint param_1)

{
  if (param_1 < 0x24) {
    return (&PTR_s_ATOMIC_INTRINSICS_1_0030d0d0)[param_1];
  }
  return (undefined *)0x0;
}


// ===== 0024743c  sqlite3_create_function_v2 =====

void sqlite3_create_function_v2(void)

{
  FUN_002d3bec();
  return;
}


// ===== 00247464  sqlite3_db_config =====

/* WARNING: Removing unreachable block (ram,0x002477c0) */
/* WARNING: Removing unreachable block (ram,0x002477d0) */
/* WARNING: Removing unreachable block (ram,0x002477e0) */
/* WARNING: Removing unreachable block (ram,0x002477a0) */
/* WARNING: Removing unreachable block (ram,0x002476b0) */
/* WARNING: Removing unreachable block (ram,0x002476c0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x002477ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
sqlite3_db_config(long param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int local_88;
  undefined4 uStack_80;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  lVar4 = 0;
  switch(param_2) {
  case 1000:
    uVar2 = 0;
    **(undefined8 **)(param_1 + 0x20) = param_3;
    goto LAB_0024774c;
  case 0x3e9:
    uStack_80 = SUB84(param_4,0);
    uVar2 = FUN_002ee060(param_1,param_3,uStack_80,param_5);
    goto LAB_0024774c;
  case 0x3eb:
    lVar4 = 1;
    break;
  case 0x3ec:
    lVar4 = 3;
    break;
  case 0x3ed:
    lVar4 = 4;
    break;
  case 0x3ee:
    lVar4 = 5;
    break;
  case 0x3ef:
    lVar4 = 6;
    break;
  case 0x3f0:
    lVar4 = 7;
    break;
  case 0x3f1:
    lVar4 = 8;
    break;
  case 0x3f2:
    lVar4 = 9;
  case 0x3ea:
    break;
  case 0x3f3:
    lVar4 = 10;
    break;
  case 0x3f4:
    lVar4 = 0xb;
    break;
  case 0x3f5:
    lVar4 = 0xd;
    break;
  case 0x3f6:
    lVar4 = 0xc;
    break;
  case 0x3f7:
    lVar4 = 2;
    break;
  case 0x3f8:
    lVar4 = 0xe;
    break;
  case 0x3f9:
    lVar4 = 0xf;
    break;
  default:
    uVar2 = 1;
    goto LAB_0024774c;
  }
  local_88 = (int)param_3;
  uVar7 = *(ulong *)(param_1 + 0x30);
  if (local_88 < 1) {
    if (local_88 == 0) {
      uVar5 = uVar7 & ((ulong)*(uint *)(&UNK_0017d920 + lVar4 * 8) ^ 0xffffffffffffffff);
      goto LAB_002476f0;
    }
  }
  else {
    uVar5 = uVar7 | *(uint *)(&UNK_0017d920 + lVar4 * 8);
LAB_002476f0:
    *(ulong *)(param_1 + 0x30) = uVar5;
    if (uVar7 != uVar5) {
      for (lVar6 = *(long *)(param_1 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
        *(byte *)(lVar6 + 0xc6) = *(byte *)(lVar6 + 0xc6) & 0xfc | 1;
      }
    }
  }
  uVar2 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((*(ulong *)(param_1 + 0x30) & (ulong)*(uint *)(&UNK_0017d920 + lVar4 * 8)) !=
                     0);
  }
LAB_0024774c:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


// ===== 00247804  sqlite3_db_mutex =====

undefined8 sqlite3_db_mutex(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0024780c  sqlite3_extended_errcode =====

undefined4 sqlite3_extended_errcode(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x71);
    if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2abec,
                  "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      return *(undefined4 *)(param_1 + 0x50);
    }
  }
  return 7;
}


// ===== 00247898  sqlite3_soft_heap_limit64 =====

long sqlite3_soft_heap_limit64(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    lVar2 = DAT_00316f10;
    if (param_1 < 0) {
      lVar3 = DAT_00316f08;
      if (DAT_00316f08 == 0) {
        return DAT_00316f10;
      }
    }
    else {
      lVar3 = DAT_00316f18;
      if (param_1 <= DAT_00316f18 && param_1 != 0 || DAT_00316f18 < 1) {
        lVar3 = param_1;
      }
      DAT_00316f20 = (uint)(0 < lVar3 && lVar3 <= DAT_00316e60);
      if (DAT_00316f08 == 0) {
        DAT_00316f10 = lVar3;
        return lVar2;
      }
      DAT_00316f10 = lVar3;
      (*DAT_003138c0)(DAT_00316f08);
      lVar3 = DAT_00316f08;
      if (DAT_00316f08 == 0) {
        return lVar2;
      }
      (*DAT_003138b0)(DAT_00316f08);
    }
    (*DAT_003138c0)(lVar3);
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}


// ===== 00247980  sqlite3_sourceid =====

undefined * sqlite3_sourceid(void)

{
  return &DAT_00176e06;
}


// ===== 0024798c  sqlite3_stmt_status =====

void sqlite3_stmt_status(long *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 99) {
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 0x18) != 0) {
      (*DAT_003138b0)(*(long *)(lVar3 + 0x18));
    }
    local_3c = 0;
    *(undefined4 **)(lVar3 + 0x300) = &local_3c;
    *(undefined8 *)(lVar3 + 0x1e8) = *(undefined8 *)(lVar3 + 0x1e0);
    FUN_0022d74c(param_1);
    *(undefined8 *)(lVar3 + 0x300) = 0;
    *(undefined8 *)(lVar3 + 0x1e8) = *(undefined8 *)(lVar3 + 0x1f0);
    if (*(long *)(lVar3 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  else {
    puVar2 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 0xd0);
    local_3c = *puVar2;
    if (param_3 != 0) {
      *puVar2 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}


// ===== 00247a54  sqlite3_strnicmp =====

int sqlite3_strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (0 < param_3) {
    uVar2 = param_3 + 1;
    do {
      if ((ulong)*param_1 == 0) {
        uVar3 = 0;
        bVar1 = (&DAT_0017d228)[*param_2];
LAB_00247ac8:
        return uVar3 - bVar1;
      }
      uVar3 = (uint)(byte)(&DAT_0017d228)[*param_1];
      bVar1 = (&DAT_0017d228)[*param_2];
      if ((&DAT_0017d228)[*param_1] != bVar1) goto LAB_00247ac8;
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (1 < uVar2);
  }
  return 0;
}


// ===== 00247ad0  sqlite3_wal_autocheckpoint =====

undefined8 sqlite3_wal_autocheckpoint(long param_1,uint param_2)

{
  long lVar1;
  
  if ((int)param_2 < 1) {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      return 0;
    }
    (*DAT_003138b0)();
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(code **)(param_1 + 0x160) = FUN_002a15d0;
      *(ulong *)(param_1 + 0x168) = (ulong)param_2;
      return 0;
    }
    (*DAT_003138b0)();
    lVar1 = *(long *)(param_1 + 0x18);
    *(code **)(param_1 + 0x160) = FUN_002a15d0;
    *(ulong *)(param_1 + 0x168) = (ulong)param_2;
  }
  if (lVar1 != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 00247b6c  sqlite3_wal_checkpoint =====

void sqlite3_wal_checkpoint(undefined8 param_1,undefined8 param_2)

{
  sqlite3_wal_checkpoint_v2(param_1,param_2,0,0,0);
  return;
}


// ===== 00247b7c  sqlite3_wal_hook =====

undefined8 sqlite3_wal_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x160) = param_2;
    *(undefined8 *)(param_1 + 0x168) = param_3;
  }
  else {
    (*DAT_003138b0)();
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x160) = param_2;
    *(undefined8 *)(param_1 + 0x168) = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*DAT_003138c0)();
    }
  }
  return uVar1;
}


// ===== 00247be8  sqlite3_blob_reopen =====

undefined4 sqlite3_blob_reopen(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    uVar4 = 0x15;
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x182a4,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    goto LAB_00247cf4;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar5 + 0x18) != 0) {
    (*DAT_003138b0)(*(long *)(lVar5 + 0x18));
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar3 = 4;
LAB_00247cd0:
    uVar4 = FUN_0023e2e4(lVar5,iVar3);
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x34) = 0;
    iVar3 = FUN_002d54b0(param_1,param_2,&local_40);
    if (iVar3 != 0) {
      puVar1 = (undefined *)0x0;
      if (local_40 != 0) {
        puVar1 = &DAT_001716ae;
      }
      FUN_0024b53c(lVar5,iVar3,puVar1,local_40);
      if (local_40 != 0) {
        FUN_0022a888(lVar5,local_40);
      }
      goto LAB_00247cd0;
    }
    uVar4 = 0;
    if (*(char *)(lVar5 + 0x67) != '\0') goto LAB_00247cd0;
  }
  if (*(long *)(lVar5 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
LAB_00247cf4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00247d20  sqlite3_vtab_config =====

/* WARNING: Removing unreachable block (ram,0x00247eb8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x00247ec4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sqlite3_vtab_config(long param_1,int param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  plVar4 = *(long **)(param_1 + 0x238);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0x24af1;
LAB_00247e64:
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar5,
                "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
    uVar5 = 0x15;
    *(undefined4 *)(param_1 + 0x50) = 0x15;
    FUN_0023e358(param_1,0x15);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    if (param_2 == 3) {
      *(undefined1 *)(*plVar4 + 0x1d) = 2;
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else {
      if (param_2 == 2) {
        uVar5 = 0;
        *(undefined1 *)(*plVar4 + 0x1d) = 0;
        lVar2 = *(long *)(param_1 + 0x18);
        goto joined_r0x00247e18;
      }
      if (param_2 != 1) {
        uVar5 = 0x24b03;
        goto LAB_00247e64;
      }
      *(undefined1 *)(*plVar4 + 0x1c) = param_3;
      lVar2 = *(long *)(param_1 + 0x18);
    }
    uVar5 = 0;
  }
joined_r0x00247e18:
  if (lVar2 != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


// ===== 00247ee4  sqlite3_vtab_on_conflict =====

undefined1 sqlite3_vtab_on_conflict(long param_1)

{
  return (&DAT_0017d481)[*(byte *)(param_1 + 0x6c)];
}


// ===== 00247efc  sqlite3_close_v2 =====

void sqlite3_close_v2(undefined8 param_1)

{
  FUN_002d4bc8(param_1,1);
  return;
}


// ===== 00247f04  sqlite3_db_filename =====

undefined * sqlite3_db_filename(long param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (param_2 == (byte *)0x0) {
    lVar3 = *(long *)(param_1 + 0x20);
LAB_00247fc8:
    uVar5 = 0;
LAB_00247fd4:
    lVar3 = *(long *)(lVar3 + uVar5 * 0x20 + 8);
    if (lVar3 == 0) {
      return (undefined *)0x0;
    }
    lVar3 = **(long **)(lVar3 + 8);
    if (*(char *)(lVar3 + 0x13) != '\0') {
      return &DAT_0017da33;
    }
    puVar2 = *(undefined **)(lVar3 + 0xd8);
  }
  else {
    uVar5 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    if (*(int *)(param_1 + 0x28) < 1) {
      return (undefined *)0x0;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    puVar6 = (undefined8 *)(lVar3 + uVar5 * 0x20);
    do {
      pbVar7 = (byte *)*puVar6;
      iVar4 = (int)uVar5;
      pbVar8 = param_2;
      if (pbVar7 != (byte *)0x0) {
        do {
          bVar1 = *pbVar7;
          if (bVar1 == *pbVar8) {
            if (bVar1 == 0) {
              if (iVar4 < 0) {
                return (undefined *)0x0;
              }
              goto LAB_00247fd4;
            }
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar8]) break;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      pbVar7 = param_2;
      pbVar8 = &DAT_00171f77;
      if (iVar4 == 0) {
        do {
          bVar1 = *pbVar8;
          if (bVar1 == *pbVar7) {
            if (bVar1 == 0) goto LAB_00247fc8;
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar7]) break;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      puVar2 = (undefined *)0x0;
      uVar5 = (ulong)(iVar4 - 1);
      puVar6 = puVar6 + -4;
    } while (0 < iVar4);
  }
  return puVar2;
}


// ===== 00248010  sqlite3_db_readonly =====

uint sqlite3_db_readonly(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (param_2 == (byte *)0x0) {
    lVar3 = *(long *)(param_1 + 0x20);
LAB_002480d4:
    uVar5 = 0;
LAB_002480e0:
    lVar3 = *(long *)(lVar3 + uVar5 * 0x20 + 8);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    uVar2 = *(ushort *)(*(long *)(lVar3 + 8) + 0x28) & 1;
  }
  else {
    uVar5 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    if (*(int *)(param_1 + 0x28) < 1) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = 0xffffffff;
    puVar6 = (undefined8 *)(lVar3 + uVar5 * 0x20);
    do {
      pbVar7 = (byte *)*puVar6;
      iVar4 = (int)uVar5;
      pbVar8 = param_2;
      if (pbVar7 != (byte *)0x0) {
        do {
          bVar1 = *pbVar7;
          if (bVar1 == *pbVar8) {
            if (bVar1 == 0) {
              if (iVar4 < 0) {
                return 0xffffffff;
              }
              goto LAB_002480e0;
            }
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar8]) break;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      pbVar7 = param_2;
      pbVar8 = &DAT_00171f77;
      if (iVar4 == 0) {
        do {
          bVar1 = *pbVar8;
          if (bVar1 == *pbVar7) {
            if (bVar1 == 0) goto LAB_002480d4;
          }
          else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar7]) break;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      uVar5 = (ulong)(iVar4 - 1);
      puVar6 = puVar6 + -4;
    } while (0 < iVar4);
  }
  return uVar2;
}


// ===== 00248108  sqlite3_db_release_memory =====

undefined8 sqlite3_db_release_memory(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_0022d2b8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
      if (lVar2 != 0) {
        (*DAT_00313938)(*(undefined8 *)(*(long *)(**(long **)(lVar2 + 8) + 0x120) + 0x40));
        iVar1 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < iVar1);
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_0022d348(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 002481d0  sqlite3_errstr =====

char * sqlite3_errstr(uint param_1)

{
  if (param_1 == 0x204) {
    return "abort due to ROLLBACK";
  }
  if (param_1 == 0x65) {
    return "no more rows available";
  }
  if (param_1 == 100) {
    return "another row available";
  }
  param_1 = param_1 & 0xff;
  if ((param_1 < 0x1d) && ((0x1410004U >> ((ulong)param_1 & 0x3f) & 1) == 0)) {
    return (&PTR_s_not_an_error_0030cfd8)[param_1];
  }
  return "unknown error";
}


// ===== 00248244  sqlite3_stmt_busy =====

ulong sqlite3_stmt_busy(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(char *)(param_1 + 0xc5) == '\x02');
  }
  return param_1;
}


// ===== 00248258  sqlite3_stmt_readonly =====

byte sqlite3_stmt_readonly(long param_1)

{
  if (param_1 != 0) {
    return *(byte *)(param_1 + 0xc6) >> 6 & 1;
  }
  return 1;
}


// ===== 00248270  sqlite3_stricmp =====

ulong sqlite3_stricmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    return (ulong)-(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    do {
      bVar1 = *param_1;
      if (bVar1 == *param_2) {
        if (bVar1 == 0) {
          return (ulong)bVar1;
        }
      }
      else if ((uint)(byte)(&DAT_0017d228)[bVar1] - (uint)(byte)(&DAT_0017d228)[*param_2] != 0) {
        return (ulong)((uint)(byte)(&DAT_0017d228)[bVar1] - (uint)(byte)(&DAT_0017d228)[*param_2]);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while( true );
  }
  return 1;
}


// ===== 002482d0  sqlite3_uri_int64 =====

undefined8 sqlite3_uri_int64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = sqlite3_uri_parameter();
  uVar4 = param_3;
  if ((lVar3 != 0) && (iVar2 = FUN_00299d90(lVar3,&local_30), uVar4 = local_30, iVar2 != 0)) {
    uVar4 = param_3;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 00248334  sqlite3_vsnprintf =====

long sqlite3_vsnprintf(int param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  long lStack_40;
  int local_38;
  ulong local_34;
  undefined2 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < param_1) {
    uStack_68 = param_4[1];
    local_70 = *param_4;
    uStack_58 = param_4[3];
    uStack_60 = param_4[2];
    local_48 = 0;
    local_34 = 0;
    local_2c = 0;
    lStack_40 = param_2;
    local_38 = param_1;
    sqlite3_str_vappendf(&local_48,param_3,&local_70);
    *(undefined1 *)(param_2 + (local_34 >> 0x20)) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002483b8  sqlite3_wal_checkpoint_v2 =====

/* WARNING: Removing unreachable block (ram,0x0024864c) */

ulong sqlite3_wal_checkpoint_v2
                (long param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xffffffff;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0xffffffff;
  }
  if (3 < param_3) {
    return 0x15;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    uVar8 = 0xc;
LAB_00248500:
    iVar7 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x290) = 0;
    if (iVar7 < 1) {
      *(undefined4 *)(param_1 + 0x50) = 0;
LAB_00248598:
      if (*(long *)(param_1 + 0x188) != 0) {
        iVar3 = 0;
        goto LAB_002485a4;
      }
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
    else {
      uVar9 = 0;
      bVar2 = false;
      lVar10 = 8;
      do {
        if (((int)uVar8 == 0xc) || (uVar8 == uVar9)) {
          iVar3 = FUN_002d4a28(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10),param_3,param_4,
                               param_5);
          iVar7 = *(int *)(param_1 + 0x28);
          param_4 = (undefined4 *)0x0;
          param_5 = (undefined4 *)0x0;
          if (iVar3 == 5) {
            bVar2 = true;
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0;
        }
        uVar9 = uVar9 + 1;
      } while (((long)uVar9 < (long)iVar7) && (lVar10 = lVar10 + 0x20, iVar3 == 0));
      if ((iVar3 == 0) && (bVar2)) {
        iVar3 = 5;
        *(undefined4 *)(param_1 + 0x50) = 5;
      }
      else {
        *(int *)(param_1 + 0x50) = iVar3;
        if (iVar3 == 0) goto LAB_00248598;
      }
LAB_002485a4:
      FUN_0023e358(param_1,iVar3);
      if (iVar3 != 0) goto LAB_002485ec;
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      uVar8 = 0;
      iVar7 = *(int *)(param_1 + 0xd0);
      goto joined_r0x002485c4;
    }
  }
  else {
    uVar8 = (ulong)(*(int *)(param_1 + 0x28) - 1);
    if (0 < *(int *)(param_1 + 0x28)) {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar8 * 0x20);
      do {
        pbVar5 = (byte *)*puVar4;
        iVar7 = (int)uVar8;
        pbVar6 = param_2;
        if (pbVar5 != (byte *)0x0) {
          do {
            bVar1 = *pbVar5;
            if (bVar1 == *pbVar6) {
              if (bVar1 == 0) {
                if (iVar7 < 0) goto LAB_002485d0;
                goto LAB_00248500;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar6]) break;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
          } while( true );
        }
        pbVar5 = param_2;
        pbVar6 = &DAT_00171f77;
        if (iVar7 == 0) {
          do {
            bVar1 = *pbVar6;
            if (bVar1 == *pbVar5) {
              if (bVar1 == 0) {
                uVar8 = 0;
                goto LAB_00248500;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar5]) break;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
          } while( true );
        }
        puVar4 = puVar4 + -4;
        uVar8 = (ulong)(iVar7 - 1);
      } while (0 < iVar7);
    }
LAB_002485d0:
    iVar3 = 1;
    FUN_0024b53c(param_1,1,"unknown database: %s",param_2);
  }
LAB_002485ec:
  uVar8 = FUN_0023e2e4(param_1,iVar3);
  iVar7 = *(int *)(param_1 + 0xd0);
joined_r0x002485c4:
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar8 = uVar8 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(param_1 + 0x18));
  }
  return uVar8;
}


// ===== 00248650  sqlite3_auto_extension =====

undefined8 sqlite3_auto_extension(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = sqlite3_initialize();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (DAT_00313834 == '\0') {
    lVar5 = 0;
LAB_002486b0:
    bVar1 = true;
  }
  else {
    lVar5 = (*DAT_003138a0)(2);
    if (lVar5 == 0) goto LAB_002486b0;
    (*DAT_003138b0)(lVar5);
    bVar1 = false;
  }
  lVar6 = DAT_00316fc0;
  uVar2 = DAT_00316fb8;
  if (DAT_00316fb8 == 0) {
    uVar7 = 0;
LAB_002486f4:
    if ((uint)uVar7 == DAT_00316fb8) {
      iVar3 = sqlite3_initialize();
      goto joined_r0x00248708;
    }
  }
  else {
    uVar7 = 0;
    do {
      if (*(long *)(DAT_00316fc0 + uVar7 * 8) == param_1) goto LAB_002486f4;
      uVar7 = uVar7 + 1;
    } while (DAT_00316fb8 != uVar7);
    iVar3 = sqlite3_initialize();
joined_r0x00248708:
    if ((iVar3 != 0) || (lVar6 = FUN_0022b604(lVar6,(ulong)(uVar2 + 1) << 3), lVar6 == 0)) {
      uVar4 = 7;
      goto joined_r0x00248780;
    }
    DAT_00316fc0 = lVar6;
    *(long *)(lVar6 + (ulong)DAT_00316fb8 * 8) = param_1;
    DAT_00316fb8 = DAT_00316fb8 + 1;
  }
  uVar4 = 0;
joined_r0x00248780:
  if (!bVar1) {
    (*DAT_003138c0)(lVar5);
  }
  return uVar4;
}


// ===== 00248788  sqlite3_bind_blob64 =====

void sqlite3_bind_blob64(void)

{
  FUN_002d48f0();
  return;
}


// ===== 00248790  sqlite3_bind_text64 =====

void sqlite3_bind_text64(void)

{
  FUN_002d48f0();
  return;
}


// ===== 002487a4  sqlite3_cancel_auto_extension =====

undefined4 sqlite3_cancel_auto_extension(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (DAT_00313834 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = (*DAT_003138a0)(2);
    if (lVar3 != 0) {
      (*DAT_003138b0)();
      bVar2 = false;
      goto LAB_002487f8;
    }
  }
  bVar2 = true;
LAB_002487f8:
  uVar4 = (ulong)DAT_00316fb8;
  do {
    if ((int)uVar4 < 1) {
      uVar5 = 0;
      if (bVar2) {
        return 0;
      }
      goto LAB_00248850;
    }
    lVar1 = uVar4 * 8;
    uVar4 = uVar4 - 1;
  } while (*(long *)(DAT_00316fc0 + -8 + lVar1) != param_1);
  DAT_00316fb8 = DAT_00316fb8 - 1;
  uVar5 = 1;
  *(undefined8 *)(DAT_00316fc0 + uVar4 * 8) =
       *(undefined8 *)(DAT_00316fc0 + (ulong)DAT_00316fb8 * 8);
  if (!bVar2) {
LAB_00248850:
    (*DAT_003138c0)(lVar3);
  }
  return uVar5;
}


// ===== 0024886c  sqlite3_malloc64 =====

undefined8 sqlite3_malloc64(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0022a6ac(param_1);
  return uVar2;
}


// ===== 002488a4  sqlite3_realloc64 =====

undefined8 sqlite3_realloc64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0022b604(param_1,param_2);
  return uVar2;
}


// ===== 002488e4  sqlite3_reset_auto_extension =====

void sqlite3_reset_auto_extension(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return;
  }
  if (DAT_00313834 == '\0') {
    lVar3 = 0;
LAB_00248940:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_003138a0)(2);
    if (lVar3 == 0) goto LAB_00248940;
    (*DAT_003138b0)(lVar3);
    bVar1 = false;
  }
  lVar5 = DAT_00316fc0;
  if (DAT_00316fc0 != 0) {
    puVar4 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar2 = (*DAT_00313868)(lVar5);
      DAT_00316e60 = DAT_00316e60 - iVar2;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(lVar5);
      if (DAT_00316f08 == 0) goto LAB_002489d0;
      puVar4 = &DAT_003138c0;
      lVar5 = DAT_00316f08;
    }
    (*(code *)*puVar4)(lVar5);
  }
LAB_002489d0:
  DAT_00316fc0 = 0;
  DAT_00316fb8 = 0;
  if (bVar1) {
    DAT_00316fc0 = 0;
    DAT_00316fb8 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00248a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_003138c0)(lVar3);
  return;
}


// ===== 00248a14  sqlite3_result_blob64 =====

void sqlite3_result_blob64(undefined8 *param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  if (param_3 >> 0x1f != 0) {
    if ((code *)0x1 < param_4 + 1) {
      (*param_4)(param_2);
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  FUN_0023d018();
  return;
}


// ===== 00248a84  sqlite3_result_text64 =====

void sqlite3_result_text64(undefined8 *param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  if (param_3 >> 0x1f != 0) {
    if ((code *)0x1 < param_4 + 1) {
      (*param_4)(param_2);
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(*param_1,"string or blob too big",0xffffffffffffffff,1,0);
    return;
  }
  FUN_0023d018();
  return;
}


// ===== 00248b04  sqlite3_strglob =====

ulong sqlite3_strglob(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = FUN_0023c540(param_1,param_2,&DAT_0017d37a,0x5b);
    return uVar1;
  }
  return 1;
}


// ===== 00248b30  sqlite3_value_free =====

void sqlite3_value_free(long param_1)

{
  if (param_1 != 0) {
    if (((*(ushort *)(param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
      FUN_0022c29c(param_1);
    }
    FUN_0022a888(*(undefined8 *)(param_1 + 0x18),param_1);
    return;
  }
  return;
}


// ===== 00248b7c  sqlite3_result_zeroblob64 =====

undefined4 sqlite3_result_zeroblob64(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  puVar1 = (uint *)*param_1;
  if ((ulong)(long)*(int *)(*(long *)(puVar1 + 6) + 0x88) < param_2) {
    uVar2 = 0x12;
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    FUN_0023c180(puVar1,"string or blob too big",0xffffffffffffffff,1,0);
  }
  else {
    if (((puVar1[5] & 0x9000) != 0) || (puVar1[8] != 0)) {
      FUN_0022c29c(puVar1);
    }
    uVar2 = 0;
    *(undefined2 *)(puVar1 + 5) = 0x410;
    puVar1[4] = 0;
    *puVar1 = (uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)((long)puVar1 + 0x16) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return uVar2;
}


// ===== 00248c24  sqlite3_bind_zeroblob64 =====

ulong sqlite3_bind_zeroblob64(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_003138b0)();
    lVar4 = *param_1;
  }
  if ((ulong)(long)*(int *)(lVar4 + 0x88) < param_3) {
    iVar1 = 0x12;
  }
  else {
    uVar3 = (long)param_2 - 1;
    iVar1 = FUN_002d3e54(param_1,uVar3 & 0xffffffff);
    if (iVar1 == 0) {
      lVar6 = param_1[0x10];
      puVar5 = (uint *)(lVar6 + uVar3 * 0x38);
      if (((puVar5[5] & 0x9000) != 0) || (*(int *)(lVar6 + uVar3 * 0x38 + 0x20) != 0)) {
        FUN_0022c29c(puVar5);
      }
      lVar6 = lVar6 + uVar3 * 0x38;
      *puVar5 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
      lVar4 = *param_1;
      *(undefined2 *)(puVar5 + 5) = 0x410;
      lVar2 = *(long *)(lVar4 + 0x18);
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(undefined1 *)(lVar6 + 0x16) = 1;
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar2 != 0) {
        (*DAT_003138c0)();
        lVar4 = *param_1;
      }
      iVar1 = 0;
      uVar3 = 0;
      if (*(char *)(lVar4 + 0x67) == '\0') goto LAB_00248d30;
    }
    else {
      lVar4 = *param_1;
    }
  }
  uVar3 = FUN_0023e2e4(lVar4,iVar1);
  lVar4 = *param_1;
LAB_00248d30:
  if (*(long *)(lVar4 + 0x18) != 0) {
    uVar3 = uVar3 & 0xffffffff;
    (*DAT_003138c0)(*(long *)(lVar4 + 0x18));
  }
  return uVar3;
}


// ===== 00248d64  sqlite3_value_subtype =====

undefined1 sqlite3_value_subtype(long param_1)

{
  if ((*(ushort *)(param_1 + 0x14) >> 0xb & 1) == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x17);
}


// ===== 00248d7c  sqlite3_result_subtype =====

void sqlite3_result_subtype(long *param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x17) = param_2;
  *(ushort *)(lVar1 + 0x14) = *(ushort *)(lVar1 + 0x14) | 0x800;
  return;
}


// ===== 00248d94  sqlite3_strlike =====

ulong sqlite3_strlike(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = FUN_0023c540(param_1,param_2,&DAT_0017d37e,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 00248dc0  sqlite3_db_cacheflush =====

/* WARNING: Removing unreachable block (ram,0x00248ebc) */

int sqlite3_db_cacheflush(long param_1)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_0022d2b8(param_1);
  }
  bVar3 = false;
  lVar7 = 0;
  do {
    while( true ) {
      lVar6 = lVar7;
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 <= lVar6) {
        iVar8 = 0;
        goto LAB_00248ec4;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + lVar6 * 0x20 + 8);
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) == '\x02')) break;
      lVar7 = lVar6 + 1;
    }
    lVar7 = **(long **)(lVar7 + 8);
    iVar4 = *(int *)(lVar7 + 0x30);
    if (*(char *)(lVar7 + 0x13) == '\0') {
      lVar5 = FUN_00251cd8(**(undefined8 **)(lVar7 + 0x120));
      while (iVar4 == 0) {
        while( true ) {
          if (lVar5 == 0) goto LAB_00248e54;
          psVar1 = (short *)(lVar5 + 0x36);
          lVar5 = *(long *)(lVar5 + 0x20);
          if (*psVar1 == 0) break;
          iVar4 = 0;
        }
        iVar4 = FUN_0029973c(lVar7);
      }
    }
LAB_00248e54:
    if (iVar4 == 5) {
      bVar3 = true;
    }
    iVar8 = 0;
    if (iVar4 != 5) {
      iVar8 = iVar4;
    }
    lVar7 = lVar6 + 1;
  } while (iVar8 == 0);
LAB_00248ec4:
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_0022d348(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  iVar4 = 5;
  if (!bVar3 || lVar6 < iVar2) {
    iVar4 = iVar8;
  }
  return iVar4;
}


// ===== 00248f0c  sqlite3_system_errno =====

ulong sqlite3_system_errno(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x5c);
  }
  return param_1;
}


// ===== 00248f18  sqlite3_trace_v2 =====

undefined8 sqlite3_trace_v2(long param_1,int param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    (*DAT_003138b0)();
    lVar3 = *(long *)(param_1 + 0x18);
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_3;
  }
  *(long *)(param_1 + 0xf0) = lVar2;
  *(undefined8 *)(param_1 + 0xf8) = param_4;
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = param_2;
  }
  *(char *)(param_1 + 0x6e) = (char)iVar1;
  if (lVar3 != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 00248f8c  sqlite3_expanded_sql =====

long * sqlite3_expanded_sql(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  if (param_1 != (long *)0x0) {
    lVar2 = param_1[0x1f];
    if (lVar2 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_003138b0)();
      }
      plVar1 = (long *)FUN_002d4374(param_1,lVar2);
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_003138c0)(*(long *)(*param_1 + 0x18));
      }
    }
  }
  return plVar1;
}


// ===== 00249004  sqlite3_set_last_insert_rowid =====

void sqlite3_set_last_insert_rowid(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
  }
  else {
    (*DAT_003138b0)();
    *(undefined8 *)(param_1 + 0x38) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00249048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_003138c0)();
      return;
    }
  }
  return;
}


// ===== 0024905c  sqlite3_prepare_v3 =====

void sqlite3_prepare_v3(void)

{
  FUN_0024aa58();
  return;
}


// ===== 00249078  sqlite3_prepare16_v3 =====

void sqlite3_prepare16_v3(void)

{
  FUN_002d4038();
  return;
}


// ===== 00249088  sqlite3_bind_pointer =====

int sqlite3_bind_pointer
              (long *param_1,int param_2,undefined8 param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar3 = FUN_002d3e54(param_1,(long)param_2 - 1U & 0xffffffff);
  if (iVar3 == 0) {
    puVar5 = (undefined8 *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    FUN_0022c29c(puVar5);
    puVar1 = &DAT_0016f7d1;
    if (param_4 != (undefined *)0x0) {
      puVar1 = param_4;
    }
    *puVar5 = puVar1;
    puVar5[1] = param_3;
    lVar4 = *param_1;
    *(undefined2 *)((long)puVar5 + 0x14) = 0x1a01;
    *(undefined1 *)((long)puVar5 + 0x17) = 0x70;
    lVar4 = *(long *)(lVar4 + 0x18);
    pcVar2 = FUN_002d3e50;
    if (param_5 != (code *)0x0) {
      pcVar2 = param_5;
    }
    puVar5[6] = pcVar2;
    if (lVar4 != 0) {
      (*DAT_003138c0)();
    }
  }
  else if (param_5 != (code *)0x0) {
    (*param_5)(param_3);
  }
  return iVar3;
}


// ===== 00249154  sqlite3_result_pointer =====

void sqlite3_result_pointer(undefined8 *param_1,undefined8 param_2,undefined *param_3,code *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 4) != 0)) {
    FUN_0022c29c(param_1);
  }
  *(undefined2 *)((long)param_1 + 0x14) = 1;
  FUN_0022c29c(param_1);
  puVar1 = &DAT_0016f7d1;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  *param_1 = puVar1;
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x17) = 0x70;
  pcVar2 = FUN_002d3e50;
  if (param_4 != (code *)0x0) {
    pcVar2 = param_4;
  }
  *(undefined2 *)((long)param_1 + 0x14) = 0x1a01;
  param_1[6] = pcVar2;
  return;
}


// ===== 002491ec  sqlite3_value_pointer =====

undefined8 sqlite3_value_pointer(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 != (char *)0x0) && ((*(ushort *)((long)param_1 + 0x14) & 0xfbf) == 0xa01)) &&
     (*(char *)((long)param_1 + 0x17) == 'p')) {
    iVar1 = strcmp((char *)*param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = param_1[1];
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}


// ===== 00249254  sqlite3_vtab_nochange =====

bool sqlite3_vtab_nochange(long *param_1)

{
  return ((*(ushort *)(*param_1 + 0x14) ^ 0xffff) & 0x401) == 0;
}


// ===== 0024926c  sqlite3_value_nochange =====

bool sqlite3_value_nochange(long param_1)

{
  return ((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x401) == 0;
}


// ===== 00249280  sqlite3_vtab_collation =====

char * sqlite3_vtab_collation(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (((int)param_2 < 0) || (*param_1 <= (int)param_2)) {
    return (char *)0x0;
  }
  if ((*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) +
                          (long)*(int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0xc + 8) * 0x38)
                + 0x10) != 0) &&
     (puVar1 = (undefined8 *)FUN_002b7e9c(*(undefined8 *)(param_1 + 0x1a)),
     puVar1 != (undefined8 *)0x0)) {
    return (char *)*puVar1;
  }
  return "BINARY";
}


// ===== 002492f4  sqlite3_keyword_count =====

undefined8 sqlite3_keyword_count(void)

{
  return 0x93;
}


// ===== 002492fc  sqlite3_keyword_name =====

undefined8 sqlite3_keyword_name(uint param_1,long *param_2,uint *param_3)

{
  if (0x92 < param_1) {
    return 1;
  }
  *param_2 = (long)(
                   "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
                   + *(ushort *)
                      (
                      "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
                      + (ulong)param_1 * 2 + 0x29b));
  *param_3 = (uint)(byte)(&DAT_0017d848)[param_1];
  return 0;
}


// ===== 00249344  sqlite3_keyword_check =====

undefined8 sqlite3_keyword_check(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  if (1 < (int)param_2) {
    bVar1 = (&DAT_0017dcc8)
            [((uint)(byte)(&DAT_0017d228)[param_1[(ulong)param_2 - 1]] * 3 ^
              (uint)(byte)(&DAT_0017d228)[*param_1] << 2 ^ param_2) % 0x7f];
    if (bVar1 != 0) {
      do {
        uVar3 = (ulong)(bVar1 - 1);
        if ((((byte)(&DAT_0017d848)[uVar3] == param_2) &&
            (uVar4 = (ulong)*(ushort *)
                             (
                             "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
                             + uVar3 * 2 + 0x29b),
            (*param_1 & 0xdf) ==
            "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
            [uVar4])) &&
           ((param_1[1] & 0xdf) ==
            "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
            [uVar4 + 1])) {
          if (param_2 == 2) {
            return 1;
          }
          pbVar2 = param_1 + 2;
          pbVar5 = (byte *)(
                           "REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMATERIALIZEDEFERREDISTINCTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEABORTAFTERENAMEANDROPARTITIONAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERETURNINGRIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
                           + uVar4 + 2);
          lVar6 = (ulong)param_2 - 2;
          while( true ) {
            if ((*pbVar2 & 0xdf) != *pbVar5) break;
            lVar6 = lVar6 + -1;
            pbVar2 = pbVar2 + 1;
            pbVar5 = pbVar5 + 1;
            if (lVar6 == 0) {
              return 1;
            }
          }
        }
        bVar1 = (&DAT_0017ddda)[uVar3];
      } while (bVar1 != 0);
    }
  }
  return 0;
}


// ===== 00249460  sqlite3_str_new =====

undefined8 * sqlite3_str_new(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar2 = (undefined8 *)FUN_0022a6ac(0x20), puVar2 != (undefined8 *)0x0)) {
    if (param_1 == 0) {
      uVar3 = 1000000000;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x88);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)((long)puVar2 + 0x14) = uVar3;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined2 *)((long)puVar2 + 0x1c) = 0;
  }
  else {
    puVar2 = (undefined8 *)&DAT_003139e8;
  }
  return puVar2;
}


// ===== 002494c0  sqlite3_str_finish =====

undefined8 sqlite3_str_finish(undefined *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_003139e8)) {
    if ((*(long *)(param_1 + 8) == 0) ||
       ((*(undefined1 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18)) = 0,
        *(int *)(param_1 + 0x14) == 0 || (((byte)param_1[0x1d] >> 2 & 1) != 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar3 = FUN_0022a544();
    }
    puVar2 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)(DAT_00316f08);
      }
      iVar1 = (*DAT_00313868)();
      DAT_00316e60 = DAT_00316e60 - iVar1;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_1);
      if (DAT_00316f08 == 0) {
        return uVar3;
      }
      puVar2 = &DAT_003138c0;
    }
    (*(code *)*puVar2)();
  }
  return uVar3;
}


// ===== 002495bc  sqlite3_str_append =====

void sqlite3_str_append(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar2 + param_3;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_0022acc8();
    return;
  }
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x18) = uVar1;
    memcpy((void *)(*(long *)(param_1 + 8) + (ulong)uVar2),param_2,(long)param_3);
    return;
  }
  return;
}


// ===== 002495f4  sqlite3_str_appendall =====

void sqlite3_str_appendall(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  if (param_2 == (char *)0x0) {
    if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x18)) {
      param_2 = (char *)0x0;
      uVar4 = 0;
      goto LAB_00249688;
    }
  }
  else {
    sVar3 = strlen(param_2);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar4 = (uint)sVar3 & 0x3fffffff;
    uVar1 = uVar4 + uVar2;
    if (*(uint *)(param_1 + 0x10) <= uVar1) {
LAB_00249688:
      FUN_0022acc8(param_1,param_2,uVar4);
      return;
    }
    if ((sVar3 & 0x3fffffff) != 0) {
      *(uint *)(param_1 + 0x18) = uVar1;
      memcpy((void *)(*(long *)(param_1 + 8) + (ulong)uVar2),param_2,sVar3 & 0x3fffffff);
      return;
    }
  }
  return;
}


// ===== 00249694  sqlite3_str_appendchar =====

void sqlite3_str_appendchar(long param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((long)((ulong)*(uint *)(param_1 + 0x18) + (long)param_2) <
      (long)(ulong)*(uint *)(param_1 + 0x10)) {
    if (param_2 < 1) {
      return;
    }
  }
  else {
    param_2 = FUN_0022b13c(param_1);
    if (param_2 < 1) {
      return;
    }
  }
  uVar2 = param_2 + 1;
  do {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar2 - 1;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)uVar1) = param_3;
  } while (1 < uVar2);
  return;
}


// ===== 0024970c  sqlite3_str_reset =====

void sqlite3_str_reset(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x1d);
  if ((bVar1 >> 2 & 1) != 0) {
    if (param_1[1] != 0) {
      FUN_0022a888(*param_1);
      bVar1 = *(byte *)((long)param_1 + 0x1d);
    }
    *(byte *)((long)param_1 + 0x1d) = bVar1 & 0xfb;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  return;
}


// ===== 00249760  sqlite3_str_errcode =====

undefined1 sqlite3_str_errcode(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x1c);
  }
  return 7;
}


// ===== 00249774  sqlite3_str_length =====

ulong sqlite3_str_length(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x18);
  }
  return param_1;
}


// ===== 00249780  sqlite3_str_value =====

long sqlite3_str_value(long param_1)

{
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18)) = 0;
      return *(long *)(param_1 + 8);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 002497a4  sqlite3_create_window_function =====

void sqlite3_create_window_function(void)

{
  FUN_002d3bec();
  return;
}


// ===== 002497dc  sqlite3_stmt_isexplain =====

ulong sqlite3_stmt_isexplain(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(byte *)(param_1 + 0xc6) >> 2 & 3);
  }
  return param_1;
}


// ===== 002497ec  sqlite3_value_frombind =====

ushort sqlite3_value_frombind(long param_1)

{
  return *(ushort *)(param_1 + 0x14) >> 6 & 1;
}


// ===== 002497f8  sqlite3_drop_modules =====

undefined8 sqlite3_drop_modules(long param_1,long *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x228);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = plVar3[2];
      plVar3 = (long *)*plVar3;
      if ((param_2 != (long *)0x0) && (__s1 = (char *)*param_2, __s1 != (char *)0x0)) {
        __s2 = *(char **)(lVar4 + 8);
        plVar5 = param_2 + 1;
        do {
          iVar1 = strcmp(__s1,__s2);
          if (iVar1 == 0) goto LAB_00249834;
          __s1 = (char *)*plVar5;
          plVar5 = plVar5 + 1;
        } while (__s1 != (char *)0x0);
      }
      uVar2 = *(undefined8 *)(lVar4 + 8);
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_003138b0)();
      }
      FUN_0028cc08(param_1,uVar2,0,0,0);
      if (*(char *)(param_1 + 0x67) != '\0') {
        FUN_0023e2e4(param_1,0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_003138c0)();
      }
LAB_00249834:
    } while (plVar3 != (long *)0x0);
  }
  return 0;
}


// ===== 002498dc  sqlite3_hard_heap_limit64 =====

long sqlite3_hard_heap_limit64(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    if (DAT_00316f08 != 0) {
      (*DAT_003138b0)();
    }
    lVar2 = DAT_00316f18;
    if (-1 < param_1) {
      DAT_00316f18 = param_1;
      if ((param_1 < DAT_00316f10) || (DAT_00316f10 == 0)) {
        DAT_00316f10 = param_1;
      }
    }
    if (DAT_00316f08 != 0) {
      (*DAT_003138c0)(DAT_00316f08);
    }
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}


// ===== 00249970  sqlite3_uri_key =====

char * sqlite3_uri_key(char *param_1,int param_2)

{
  bool bVar1;
  size_t sVar2;
  char cVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  
  pcVar4 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (-1 < param_2)) {
    do {
      do {
        pcVar6 = param_1;
        param_1 = pcVar6 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar6[-2] != '\0') || (pcVar6[-3] != '\0')) || (pcVar6[-4] != '\0'));
    sVar2 = strlen(pcVar6);
    pcVar6 = pcVar6 + (sVar2 & 0x3fffffff) + 1;
    cVar3 = *pcVar6;
    if ((cVar3 != '\0') && (0 < param_2)) {
      do {
        sVar2 = strlen(pcVar6);
        pcVar6 = pcVar6 + (sVar2 & 0x3fffffff) + 1;
        if (pcVar6 == (char *)0x0) {
          uVar5 = 0;
        }
        else {
          sVar2 = strlen(pcVar6);
          uVar5 = sVar2 & 0x3fffffff;
        }
        pcVar6 = pcVar6 + uVar5 + 1;
        cVar3 = *pcVar6;
        bVar1 = 1 < param_2;
        param_2 = param_2 + -1;
      } while (cVar3 != '\0' && bVar1);
    }
    pcVar4 = (char *)0x0;
    if (cVar3 != '\0') {
      pcVar4 = pcVar6;
    }
  }
  return pcVar4;
}


// ===== 00249a2c  sqlite3_filename_database =====

char * sqlite3_filename_database(char *param_1)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    do {
      do {
        pcVar1 = param_1;
        param_1 = pcVar1 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar1[-2] != '\0') || (pcVar1[-3] != '\0')) || (pcVar1[-4] != '\0'));
    return pcVar1;
  }
  return (char *)0x0;
}


// ===== 00249a68  sqlite3_filename_journal =====

char * sqlite3_filename_journal(char *param_1)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char *__s_00;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    do {
      __s_00 = param_1;
      param_1 = __s_00 + -1;
    } while (*param_1 != '\0');
  } while (((__s_00[-2] != '\0') || (__s_00[-3] != '\0')) || (__s_00[-4] != '\0'));
  do {
    sVar1 = strlen(__s_00);
    uVar2 = sVar1 & 0x3fffffff;
    while( true ) {
      __s = __s_00 + uVar2 + 1;
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        return __s_00 + uVar2 + 2;
      }
      sVar1 = strlen(__s);
      __s_00 = __s + (sVar1 & 0x3fffffff) + 1;
      if (__s_00 != (char *)0x0) break;
      uVar2 = 0;
    }
  } while( true );
}


// ===== 00249af4  sqlite3_filename_wal =====

char * sqlite3_filename_wal(char *param_1)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    do {
      pcVar3 = param_1;
      param_1 = pcVar3 + -1;
    } while (*param_1 != '\0');
  } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
  do {
    sVar1 = strlen(pcVar3);
    uVar2 = sVar1 & 0x3fffffff;
    while( true ) {
      __s = pcVar3 + uVar2 + 1;
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        pcVar3 = pcVar3 + uVar2 + 2;
        if (pcVar3 != (char *)0x0) {
          sVar1 = strlen(pcVar3);
          return pcVar3 + (sVar1 & 0x3fffffff) + 1;
        }
        return (char *)0x0;
      }
      sVar1 = strlen(__s);
      pcVar3 = __s + (sVar1 & 0x3fffffff) + 1;
      if (pcVar3 != (char *)0x0) break;
      uVar2 = 0;
    }
  } while( true );
}


// ===== 00249ba0  sqlite3_create_filename =====

undefined4 *
sqlite3_create_filename(char *param_1,char *param_2,char *param_3,int param_4,undefined8 *param_5)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined4 *__dest_00;
  long lVar8;
  char *__s;
  ulong uVar9;
  undefined8 *puVar10;
  
  sVar4 = strlen(param_1);
  sVar5 = strlen(param_2);
  sVar6 = strlen(param_3);
  uVar2 = param_4 * 2;
  lVar8 = sVar4 + sVar5 + sVar6 + 10;
  if (0 < param_4) {
    uVar1 = uVar2;
    if ((int)uVar2 < 2) {
      uVar1 = 1;
    }
    uVar9 = (ulong)uVar1;
    puVar10 = param_5;
    do {
      sVar4 = strlen((char *)*puVar10);
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + sVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
  }
  iVar3 = sqlite3_initialize();
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)FUN_0022a6ac(lVar8);
    __dest_00 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      __dest_00 = puVar7 + 1;
      *puVar7 = 0;
      sVar4 = strlen(param_1);
      memcpy(__dest_00,param_1,sVar4 + 1);
      lVar8 = (long)__dest_00 + sVar4;
      if (0 < param_4) {
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        uVar9 = (ulong)uVar2;
        do {
          __s = (char *)*param_5;
          sVar4 = strlen(__s);
          memcpy((void *)(lVar8 + 1),__s,sVar4 + 1);
          lVar8 = lVar8 + 1 + sVar4;
          uVar9 = uVar9 - 1;
          param_5 = param_5 + 1;
        } while (uVar9 != 0);
      }
      *(undefined1 *)(lVar8 + 1) = 0;
      sVar4 = strlen(param_2);
      memcpy((void *)(lVar8 + 2),param_2,sVar4 + 1);
      __dest = (void *)(sVar4 + 1 + lVar8 + 2);
      sVar4 = strlen(param_3);
      memcpy(__dest,param_3,sVar4 + 1);
      *(undefined2 *)((long)__dest + sVar4 + 1) = 0;
    }
  }
  else {
    __dest_00 = (undefined4 *)0x0;
  }
  return __dest_00;
}


// ===== 00249d20  sqlite3_free_filename =====

void sqlite3_free_filename(char *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  do {
    do {
      pcVar3 = param_1;
      param_1 = pcVar3 + -1;
    } while (*param_1 != '\0');
  } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
  pcVar3 = pcVar3 + -4;
  puVar2 = &DAT_00313858;
  if (DAT_00313830 != 0) {
    if (DAT_00316f08 != (char *)0x0) {
      (*DAT_003138b0)();
    }
    iVar1 = (*DAT_00313868)(pcVar3);
    DAT_00316e60 = DAT_00316e60 - iVar1;
    DAT_00316ea8 = DAT_00316ea8 + -1;
    (*DAT_00313858)(pcVar3);
    if (DAT_00316f08 == (char *)0x0) {
      return;
    }
    puVar2 = &DAT_003138c0;
    pcVar3 = DAT_00316f08;
  }
                    /* WARNING: Could not recover jumptable at 0x00249de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(pcVar3);
  return;
}


// ===== 00249df8  sqlite3_database_file_object =====

undefined8 sqlite3_database_file_object(char *param_1)

{
  char *pcVar1;
  
  do {
    do {
      pcVar1 = param_1;
      param_1 = pcVar1 + -1;
    } while (*param_1 != '\0');
  } while (((pcVar1[-2] != '\0') || (pcVar1[-3] != '\0')) || (pcVar1[-4] != '\0'));
  return *(undefined8 *)(*(long *)(pcVar1 + -0xc) + 0x48);
}


// ===== 00249e28  sqlite3_txn_state =====

int sqlite3_txn_state(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (param_2 == (byte *)0x0) {
    iVar7 = iVar7 + -1;
    iVar3 = 0;
    if (-1 < iVar7) {
LAB_00249f64:
      lVar2 = *(long *)(param_1 + 0x20);
      iVar7 = iVar7 + 1;
      lVar5 = (long)iVar3;
LAB_00249f70:
      iVar7 = iVar7 - (int)lVar5;
      puVar6 = (ulong *)(lVar2 + lVar5 * 0x20 + 8);
      iVar3 = -1;
      do {
        uVar4 = *puVar6;
        if (uVar4 != 0) {
          uVar4 = (ulong)*(byte *)(uVar4 + 0x10);
        }
        puVar6 = puVar6 + 4;
        iVar11 = (int)uVar4;
        if ((int)uVar4 <= iVar3) {
          iVar11 = iVar3;
        }
        iVar7 = iVar7 + -1;
        iVar3 = iVar11;
      } while (iVar7 != 0);
      goto LAB_00249f30;
    }
  }
  else {
    uVar4 = (ulong)(iVar7 - 1);
    if (0 < iVar7) {
      lVar2 = *(long *)(param_1 + 0x20);
      iVar11 = -1;
      puVar8 = (undefined8 *)(lVar2 + uVar4 * 0x20);
      do {
        pbVar9 = (byte *)*puVar8;
        iVar3 = (int)uVar4;
        pbVar10 = param_2;
        if (pbVar9 != (byte *)0x0) {
          do {
            bVar1 = *pbVar9;
            if (bVar1 == *pbVar10) {
              if (bVar1 == 0) {
                iVar7 = iVar3 + (iVar3 >> 0x1f);
                if (iVar7 < iVar3) goto LAB_00249f2c;
                goto LAB_00249f64;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar10]) break;
            pbVar9 = pbVar9 + 1;
            pbVar10 = pbVar10 + 1;
          } while( true );
        }
        pbVar9 = param_2;
        pbVar10 = &DAT_00171f77;
        if (iVar3 == 0) {
          do {
            bVar1 = *pbVar10;
            if (bVar1 == *pbVar9) {
              if (bVar1 == 0) {
                lVar5 = 0;
                iVar7 = 1;
                goto LAB_00249f70;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar9]) break;
            pbVar9 = pbVar9 + 1;
            pbVar10 = pbVar10 + 1;
          } while( true );
        }
        uVar4 = (ulong)(iVar3 - 1);
        puVar8 = puVar8 + -4;
      } while (0 < iVar3);
      goto LAB_00249f30;
    }
  }
LAB_00249f2c:
  iVar11 = -1;
LAB_00249f30:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return iVar11;
}


// ===== 00249fa8  sqlite3_changes64 =====

undefined8 sqlite3_changes64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


// ===== 00249fb0  sqlite3_total_changes64 =====

undefined8 sqlite3_total_changes64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}


// ===== 00249fb8  sqlite3_autovacuum_pages =====

undefined8
sqlite3_autovacuum_pages(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if (*(code **)(param_1 + 0x148) != (code *)0x0) {
    (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x140));
  }
  *(undefined8 *)(param_1 + 0x148) = param_4;
  *(undefined8 *)(param_1 + 0x150) = param_2;
  *(undefined8 *)(param_1 + 0x140) = param_3;
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  return 0;
}


// ===== 0024a02c  sqlite3_error_offset =====

undefined4 sqlite3_error_offset(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if (param_1 != 0) {
    cVar2 = *(char *)(param_1 + 0x71);
    if (((cVar2 != 'm') && (cVar2 != 'v')) && (cVar2 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        return *(undefined4 *)(param_1 + 0x54);
      }
      (*DAT_003138b0)(*(long *)(param_1 + 0x18));
      uVar1 = *(undefined4 *)(param_1 + 0x54);
      if (*(long *)(param_1 + 0x18) == 0) {
        return uVar1;
      }
      (*DAT_003138c0)(*(long *)(param_1 + 0x18));
      return uVar1;
    }
  }
  return 0xffffffff;
}


// ===== 0024a0dc  sqlite3_vtab_rhs_value =====

int sqlite3_vtab_rhs_value(int *param_1,uint param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (((int)param_2 < 0) || (*param_1 <= (int)param_2)) {
    lVar3 = 0;
    iVar2 = 0x15;
  }
  else {
    plVar4 = (long *)(param_1 + (ulong)param_2 * 2 + 0x20);
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) +
                                 (long)*(int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0xc + 8) *
                                 0x38) + 0x18);
      if (lVar3 == 0) {
        iVar2 = 0;
        lVar3 = 0;
      }
      else {
        iVar2 = FUN_0028696c(**(long **)(param_1 + 0x1a),lVar3,
                             *(undefined1 *)(**(long **)(param_1 + 0x1a) + 100),0x41,plVar4);
        lVar3 = *plVar4;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  *param_3 = lVar3;
  iVar1 = 0xc;
  if (lVar3 != 0 || iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


// ===== 0024a1a0  sqlite3_vtab_distinct =====

undefined4 sqlite3_vtab_distinct(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}


// ===== 0024a1a8  sqlite3_vtab_in =====

undefined8 sqlite3_vtab_in(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if (0x1f < (int)param_2) {
    uVar1 = 0;
  }
  if ((*(uint *)(param_1 + 0x74) & uVar1) != 0) {
    if (param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x78) & (uVar1 ^ 0xffffffff);
    }
    else {
      if (param_3 < 1) {
        return 1;
      }
      uVar1 = *(uint *)(param_1 + 0x78) | uVar1;
    }
    *(uint *)(param_1 + 0x78) = uVar1;
    return 1;
  }
  return 0;
}


// ===== 0024a1f8  sqlite3_vtab_in_first =====

void sqlite3_vtab_in_first(undefined8 param_1,undefined8 param_2)

{
  FUN_002d1428(param_1,param_2,0);
  return;
}


// ===== 0024a200  sqlite3_vtab_in_next =====

void sqlite3_vtab_in_next(undefined8 param_1,undefined8 param_2)

{
  FUN_002d1428(param_1,param_2,1);
  return;
}


// ===== 0024a208  sqlite3_deserialize =====

int sqlite3_deserialize(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                       uint param_6)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138b0)();
  }
  if ((param_2 == 0) && (param_2 = **(long **)(param_1 + 0x20), param_2 == 0)) {
LAB_0024a328:
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(int *)(param_1 + 0x28) - 1;
    uVar10 = (ulong)uVar9;
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar6 = (long *)(*(long *)(param_1 + 0x20) + uVar10 * 0x20);
      do {
        uVar9 = (uint)uVar10;
        if (*plVar6 != 0) {
          lVar8 = 0;
          do {
            bVar1 = *(byte *)(*plVar6 + lVar8);
            if (bVar1 == *(byte *)(param_2 + lVar8)) {
              if (bVar1 == 0) goto LAB_0024a32c;
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(param_2 + lVar8)]) break;
            lVar8 = lVar8 + 1;
          } while( true );
        }
        if (uVar9 == 0) {
          lVar8 = 0;
          do {
            bVar1 = (&DAT_00171f77)[lVar8];
            if (bVar1 == *(byte *)(param_2 + lVar8)) {
              if (bVar1 == 0) {
                uVar9 = 0;
                goto LAB_0024a344;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*(byte *)(param_2 + lVar8)]) break;
            lVar8 = lVar8 + 1;
          } while( true );
        }
        plVar6 = plVar6 + -4;
        uVar10 = (ulong)(uVar9 - 1);
      } while (0 < (int)uVar9);
      goto LAB_0024a328;
    }
  }
LAB_0024a32c:
  if (((int)uVar9 < 2) && (uVar9 != 0)) {
    uVar5 = 0;
    iVar3 = 1;
  }
  else {
LAB_0024a344:
    lVar8 = sqlite3_mprintf("ATTACH x AS %Q",param_2);
    if (lVar8 == 0) {
      iVar3 = 7;
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_0024aa58(param_1,lVar8,0xffffffff,0x80,0,&local_78,0);
      puVar7 = &DAT_00313858;
      if (DAT_00313830 == 0) {
LAB_0024a3f8:
        (*(code *)*puVar7)(lVar8);
      }
      else {
        if (DAT_00316f08 != 0) {
          (*DAT_003138b0)();
        }
        iVar4 = (*DAT_00313868)(lVar8);
        DAT_00316e60 = DAT_00316e60 - iVar4;
        DAT_00316ea8 = DAT_00316ea8 + -1;
        (*DAT_00313858)(lVar8);
        if (DAT_00316f08 != 0) {
          puVar7 = &DAT_003138c0;
          lVar8 = DAT_00316f08;
          goto LAB_0024a3f8;
        }
      }
      uVar5 = local_78;
      if (iVar3 == 0) {
        *(char *)(param_1 + 0xc4) = (char)uVar9;
        *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) | 4;
        iVar3 = sqlite3_step(local_78);
        *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0xfb;
        if (iVar3 == 0x65) {
          local_70 = (long *)0x0;
          iVar3 = sqlite3_file_control(param_1,param_2,7,&local_70);
          if ((iVar3 == 0) && ((undefined *)*local_70 == &DAT_0030b150)) {
            lVar8 = local_70[1];
            if (*(long *)(lVar8 + 0x20) != 0) {
              (*DAT_003138b0)();
            }
            if (*(long *)(lVar8 + 0x40) != 0) {
              local_70 = (long *)0x0;
            }
            if (*(long *)(lVar8 + 0x20) != 0) {
              (*DAT_003138c0)(*(long *)(lVar8 + 0x20));
            }
            lVar8 = DAT_003139b8;
            if (local_70 == (long *)0x0) {
              iVar3 = 1;
            }
            else {
              puVar7 = (undefined8 *)local_70[1];
              iVar3 = 0;
              *puVar7 = param_4;
              puVar7[1] = param_5;
              if (lVar8 <= param_5) {
                lVar8 = param_5;
              }
              *(uint *)((long)puVar7 + 0x2c) = param_6;
              puVar7[2] = lVar8;
              puVar7[3] = param_3;
              param_3 = 0;
            }
            goto LAB_0024a47c;
          }
        }
        iVar3 = 1;
      }
    }
  }
LAB_0024a47c:
  sqlite3_finalize(uVar5);
  if (((param_6 & 1) != 0) && (param_3 != 0)) {
    puVar7 = &DAT_00313858;
    if (DAT_00313830 != 0) {
      if (DAT_00316f08 != 0) {
        (*DAT_003138b0)();
      }
      iVar4 = (*DAT_00313868)(param_3);
      DAT_00316e60 = DAT_00316e60 - iVar4;
      DAT_00316ea8 = DAT_00316ea8 + -1;
      (*DAT_00313858)(param_3);
      if (DAT_00316f08 == 0) goto LAB_0024a508;
      puVar7 = &DAT_003138c0;
      param_3 = DAT_00316f08;
    }
    (*(code *)*puVar7)(param_3);
  }
LAB_0024a508:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_003138c0)();
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


// ===== 0024a5d8  sqlite3_serialize =====

void sqlite3_serialize(long param_1,byte *param_2,size_t *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  size_t sVar14;
  size_t *psVar15;
  void *__dest_00;
  long lVar16;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  if (param_2 == (byte *)0x0) {
    param_2 = (byte *)**(undefined8 **)(param_1 + 0x20);
  }
  local_70 = (long *)0x0;
  iVar4 = sqlite3_file_control(param_1,param_2,7,&local_70);
  plVar7 = (long *)0x0;
  if (iVar4 == 0) {
    if ((undefined *)*local_70 == &DAT_0030b150) {
      lVar16 = local_70[1];
      if (*(long *)(lVar16 + 0x20) != 0) {
        (*DAT_003138b0)();
      }
      if (*(long *)(lVar16 + 0x40) != 0) {
        local_70 = (long *)0x0;
      }
      plVar7 = local_70;
      if (*(long *)(lVar16 + 0x20) != 0) {
        (*DAT_003138c0)();
        plVar7 = local_70;
      }
      goto joined_r0x0024a8e8;
    }
    plVar7 = (long *)0x0;
    if (param_2 == (byte *)0x0) goto LAB_0024a788;
LAB_0024a648:
    uVar11 = *(int *)(param_1 + 0x28) - 1;
    uVar10 = (ulong)uVar11;
    if (0 < *(int *)(param_1 + 0x28)) {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar10 * 0x20);
      do {
        uVar9 = (uint)uVar10;
        pbVar12 = (byte *)*puVar8;
        pbVar13 = param_2;
        if (pbVar12 != (byte *)0x0) {
          do {
            bVar1 = *pbVar12;
            if (bVar1 == *pbVar13) {
              uVar11 = uVar9;
              if (bVar1 == 0) goto joined_r0x0024a704;
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar13]) break;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        pbVar12 = param_2;
        pbVar13 = &DAT_00171f77;
        if (uVar9 == 0) {
          do {
            bVar1 = *pbVar13;
            if (bVar1 == *pbVar12) {
              if (bVar1 == 0) {
                uVar11 = 0;
                goto joined_r0x0024a704;
              }
            }
            else if ((&DAT_0017d228)[bVar1] != (&DAT_0017d228)[*pbVar12]) break;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        uVar10 = (ulong)(uVar9 - 1);
        puVar8 = puVar8 + -4;
        uVar11 = 0xffffffff;
      } while (0 < (int)uVar9);
    }
  }
  else {
joined_r0x0024a8e8:
    if (param_2 != (byte *)0x0) goto LAB_0024a648;
LAB_0024a788:
    uVar11 = 0xffffffff;
  }
joined_r0x0024a704:
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0xffffffffffffffff;
  }
  if (-1 < (int)uVar11) {
    if (plVar7 == (long *)0x0) {
      lVar16 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 0x20 + 8);
      if (lVar16 != 0) {
        sVar14 = (size_t)*(int *)(*(long *)(lVar16 + 8) + 0x34);
        __dest = (void *)sqlite3_mprintf("PRAGMA \"%w\".page_count",param_2);
        if (__dest == (void *)0x0) goto LAB_0024a87c;
        iVar4 = FUN_0024aa58(param_1,__dest,0xffffffff,0x80,0,&local_78,0);
        puVar8 = &DAT_00313858;
        if (DAT_00313830 == 0) {
LAB_0024a860:
          (*(code *)*puVar8)(__dest);
        }
        else {
          if (DAT_00316f08 != (void *)0x0) {
            (*DAT_003138b0)();
          }
          iVar5 = (*DAT_00313868)(__dest);
          DAT_00316e60 = DAT_00316e60 - iVar5;
          DAT_00316ea8 = DAT_00316ea8 + -1;
          (*DAT_00313858)(__dest);
          if (DAT_00316f08 != (void *)0x0) {
            puVar8 = &DAT_003138c0;
            __dest = DAT_00316f08;
            goto LAB_0024a860;
          }
        }
        uVar3 = local_78;
        if (iVar4 == 0) {
          iVar4 = sqlite3_step(local_78);
          if (iVar4 == 100) {
            lVar6 = sqlite3_column_int64(uVar3,0);
            if (param_3 != (size_t *)0x0) {
              *param_3 = lVar6 * sVar14;
            }
            if ((((param_4 & 1) != 0) || (iVar4 = sqlite3_initialize(), iVar4 != 0)) ||
               (__dest = (void *)FUN_0022a6ac(lVar6 * sVar14), __dest == (void *)0x0))
            goto LAB_0024a928;
            iVar4 = sqlite3_column_int(uVar3,0);
            if (0 < iVar4) {
              uVar10 = 1;
              lVar16 = **(long **)(lVar16 + 8);
              __dest_00 = __dest;
              do {
                local_70 = (long *)0x0;
                iVar5 = (**(code **)(lVar16 + 0x110))(lVar16,uVar10 & 0xffffffff,&local_70,0);
                plVar7 = local_70;
                if (iVar5 == 0) {
                  memcpy(__dest_00,(void *)local_70[1],sVar14);
LAB_0024a9e0:
                  if ((*(ushort *)((long)plVar7 + 0x34) >> 5 & 1) == 0) {
                    FUN_0024ac68(plVar7);
                  }
                  else {
                    lVar6 = plVar7[5];
                    *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + -1;
                    plVar7[4] = *(long *)(lVar6 + 0xa8);
                    *(long **)(lVar6 + 0xa8) = plVar7;
                    (**(code **)(**(long **)(lVar6 + 0x48) + 0x90))
                              (*(long **)(lVar6 + 0x48),
                               *(long *)(lVar6 + 200) * (ulong)((int)plVar7[6] - 1),plVar7[1]);
                  }
                }
                else {
                  memset(__dest_00,0,sVar14);
                  plVar7 = local_70;
                  if (local_70 != (long *)0x0) goto LAB_0024a9e0;
                }
                uVar10 = uVar10 + 1;
                __dest_00 = (void *)((long)__dest_00 + sVar14);
              } while (iVar4 + 1 != uVar10);
            }
          }
          else {
LAB_0024a928:
            __dest = (void *)0x0;
          }
          sqlite3_finalize(uVar3);
          goto LAB_0024a87c;
        }
      }
    }
    else {
      psVar15 = (size_t *)plVar7[1];
      if (param_3 != (size_t *)0x0) {
        *param_3 = *psVar15;
      }
      if ((param_4 & 1) != 0) {
        __dest = (void *)psVar15[3];
        goto LAB_0024a87c;
      }
      sVar14 = *psVar15;
      iVar4 = sqlite3_initialize();
      if (iVar4 == 0) {
        __dest = (void *)FUN_0022a6ac(sVar14);
        if (__dest != (void *)0x0) {
          memcpy(__dest,(void *)psVar15[3],*psVar15);
        }
        goto LAB_0024a87c;
      }
    }
  }
  __dest = (void *)0x0;
LAB_0024a87c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}


// ===== 0024aa30  sqlite3_db_name =====

undefined8 sqlite3_db_name(long param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x20);
  }
  return 0;
}


// ===== 0024aa58  FUN_0024aa58 =====

undefined4
FUN_0024aa58(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  *param_6 = 0;
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != -0x46) {
      if (cVar2 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_003138b0)();
          }
          if (*(char *)(param_1 + 0x6f) == '\0') {
            FUN_0022d2b8(param_1);
          }
          iVar6 = 0;
          do {
            while( true ) {
              iVar3 = FUN_0024ad44(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
              if ((iVar3 == 0) || (*(char *)(param_1 + 0x67) != '\0')) goto LAB_0024ac10;
              if (iVar3 != 0x11) break;
              if ((*(int *)(param_1 + 0x48) == 0) && (iVar3 = *(int *)(param_1 + 0x28), 0 < iVar3))
              {
                lVar7 = 0;
                lVar8 = 0x18;
                do {
                  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + lVar8) + 0x72) >> 3 & 1) !=
                      0) {
                    FUN_0024b414();
                    iVar3 = *(int *)(param_1 + 0x28);
                  }
                  lVar7 = lVar7 + 1;
                  lVar8 = lVar8 + 0x20;
                } while (lVar7 < iVar3);
              }
              bVar1 = iVar6 != 0;
              iVar6 = 1;
              if (bVar1) {
                iVar3 = 0x11;
LAB_0024ac10:
                if (*(char *)(param_1 + 0x6f) == '\0') {
                  FUN_0022d348(param_1);
                }
                if ((iVar3 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = FUN_0023e2e4(param_1,iVar3);
                }
                *(undefined4 *)(param_1 + 0x290) = 0;
                if (*(long *)(param_1 + 0x18) == 0) {
                  return uVar4;
                }
                (*DAT_003138c0)();
                return uVar4;
              }
            }
            if (iVar3 != 0x201) goto LAB_0024ac10;
            bVar1 = iVar6 < 0x19;
            iVar6 = iVar6 + 1;
          } while (bVar1);
          iVar3 = 0x201;
          goto LAB_0024ac10;
        }
        goto LAB_0024abb8;
      }
      if (cVar2 != 'm') {
        pcVar5 = "invalid";
        goto LAB_0024aba8;
      }
    }
    pcVar5 = "unopened";
  }
LAB_0024aba8:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
LAB_0024abb8:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2174e,
              "89c459e766ea7e9165d0beeb124708b955a4950d0f4792f457465d71b158d318");
  return 0x15;
}


// ===== 0024ac68  FUN_0024ac68 =====

void FUN_0024ac68(undefined8 *param_1)

{
  ushort uVar1;
  short sVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar3 = (long *)param_1[3];
  lVar5 = plVar3[3];
  sVar2 = *(short *)((long)param_1 + 0x36) + -1;
  *(short *)((long)param_1 + 0x36) = sVar2;
  *(int *)(plVar3 + 3) = (int)lVar5 + -1;
  if (sVar2 != 0) {
    return;
  }
  uVar1 = *(ushort *)((long)param_1 + 0x34);
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)plVar3 + 0x2c) == '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0024acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00313918)(plVar3[8],*param_1,0);
    return;
  }
  puVar6 = (undefined8 *)param_1[8];
  puVar4 = (undefined8 *)plVar3[2];
  if ((undefined8 *)plVar3[2] == param_1) {
    plVar3[2] = (long)puVar6;
    puVar4 = puVar6;
  }
  lVar5 = param_1[7];
  if (lVar5 == 0) {
    plVar3[1] = (long)puVar6;
    if (puVar6 != (undefined8 *)0x0) goto LAB_0024acf8;
    *(undefined1 *)((long)plVar3 + 0x2d) = 2;
    param_1[7] = 0;
    param_1[8] = 0;
LAB_0024ad1c:
    plVar3[1] = (long)param_1;
    if (*(char *)((long)plVar3 + 0x2c) != '\0') {
      *(undefined1 *)((long)plVar3 + 0x2d) = 1;
    }
  }
  else {
    *(undefined8 **)(lVar5 + 0x40) = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      param_1[7] = lVar5;
      param_1[8] = 0;
    }
    else {
LAB_0024acf8:
      puVar6[7] = lVar5;
      lVar5 = *plVar3;
      param_1[7] = lVar5;
      param_1[8] = 0;
      if (lVar5 == 0) goto LAB_0024ad1c;
    }
    *(undefined8 **)(lVar5 + 0x40) = param_1;
  }
  *plVar3 = (long)param_1;
  if (((uVar1 >> 3 & 1) == 0) && (puVar4 == (undefined8 *)0x0)) {
    plVar3[2] = (long)param_1;
    return;
  }
  return;
}


