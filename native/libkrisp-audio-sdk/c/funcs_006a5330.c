// ===== 006a5330  FUN_006a5330 =====

bool FUN_006a5330(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *__s2;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  uVar8 = (ulong)(bVar3 >> 1);
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        return false;
      }
      pbVar7 = param_1 + 1;
      do {
        uVar8 = uVar8 - 1;
        bVar5 = *pbVar7 != *__s2;
        if (*pbVar7 != *__s2) {
          return bVar5;
        }
        __s2 = __s2 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      return bVar5;
    }
    iVar6 = memcmp(*(void **)(param_1 + 0x10),__s2,*(size_t *)(param_1 + 8));
    return iVar6 != 0;
  }
  return true;
}


// ===== 006a53e0  FUN_006a53e0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006a53e0(long param_1,long param_2,long param_3,undefined1 *param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  size_t __n;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  byte local_158 [16];
  void *local_148;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined2 local_b8;
  undefined6 uStack_b6;
  byte *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  byte local_90;
  undefined5 uStack_8f;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  void *local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  pbVar16 = *(byte **)(param_3 + 8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  pbVar18 = (byte *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  bVar6 = *pbVar18;
  uVar4 = (ulong)(pbVar16[0x18] >> 1);
  if ((pbVar16[0x18] & 1) != 0) {
    uVar4 = *(ulong *)(pbVar16 + 0x20);
  }
  uVar1 = (ulong)(*pbVar16 >> 1);
  if ((*pbVar16 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar16 + 8);
  }
  uVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar18 + 8);
  }
                    /* try { // try from 006a5474 to 006a5507 has its CatchHandler @ 006a5a84 */
  FUN_00712ea8(&local_a8,uVar2 + (uVar4 - uVar1));
  lVar17 = *(long *)(param_3 + 8);
  lVar12 = lVar17 + 0x19;
  if ((*(byte *)(lVar17 + 0x18) & 1) != 0) {
    lVar12 = *(long *)(lVar17 + 0x28);
  }
  FUN_0071302c(&local_a8,lVar12,uVar4 - uVar1);
  pbVar18 = (byte *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  uVar4 = *(ulong *)(pbVar18 + 8);
  pbVar16 = *(byte **)(pbVar18 + 0x10);
  if ((*pbVar18 & 1) == 0) {
    pbVar16 = pbVar18 + 1;
    uVar4 = (ulong)(*pbVar18 >> 1);
  }
  FUN_0071302c(&local_a8,pbVar16,uVar4);
  lVar12 = FUN_006a1acc(param_5,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,&local_a8);
  *(long *)(param_4 + 8) = lVar12;
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(long *)(param_4 + 0x10) = param_3;
  *(undefined4 *)(param_4 + 4) = uVar5;
  FUN_00699700(param_1,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,lVar12 + 0x18,param_2);
  *(undefined8 *)(param_4 + 0x18) = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar3 = PTR_PTR_007a3450;
    if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_2 + 0x20);
    }
    __n = strlen("google.protobuf.EnumValueOptions");
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar9 + 0x28) == local_78) {
                    /* try { // try from 006a5948 to 006a594f has its CatchHandler @ 006a5a78 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_c0);
      }
      goto LAB_006a5ab0;
    }
    if (__n < 0x17) {
      pbVar16 = (byte *)((ulong)&local_c0 | 1);
      local_c0 = (byte)((int)__n << 1);
      if (__n != 0) goto LAB_006a5590;
    }
    else {
      uVar4 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar4 = __n | 7;
      }
      lVar12 = uVar4 + 1;
                    /* try { // try from 006a5578 to 006a557f has its CatchHandler @ 006a5a78 */
      pbVar16 = (byte *)FUN_00759c3c(lVar12);
      local_c0 = (byte)lVar12 | 1;
      local_b8 = (undefined2)__n;
      uStack_b6 = (undefined6)(__n >> 0x10);
      bStack_bf = (byte)((ulong)lVar12 >> 8);
      uStack_be = (undefined6)((ulong)lVar12 >> 0x10);
      local_b0 = pbVar16;
LAB_006a5590:
      memcpy(pbVar16,"google.protobuf.EnumValueOptions",__n);
    }
    pbVar16[__n] = 0;
                    /* try { // try from 006a55a8 to 006a55c3 has its CatchHandler @ 006a5a50 */
    FUN_006a5c84(param_1,puVar3,param_4,3,&local_c0,param_5);
    if ((local_c0 & 1) != 0) {
      free(local_b0);
    }
  }
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  *param_4 = 5;
                    /* try { // try from 006a55e4 to 006a55f7 has its CatchHandler @ 006a5a7c */
  uVar10 = FUN_006985c8(param_1,*(long *)(param_4 + 8) + 0x18,uVar15);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  param_4[1] = 6;
                    /* try { // try from 006a560c to 006a560f has its CatchHandler @ 006a5a80 */
  uVar11 = FUN_0068a168(uVar15);
  if (((uVar10 | uVar11 ^ 0xffffffff) & 1) == 0) {
    local_c0 = 0;
    bStack_bf = 0;
    uStack_be = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    local_b0 = (byte *)0x0;
    if (*(long *)(param_3 + 0x18) == 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    }
    else {
      lVar12 = *(long *)(*(long *)(param_3 + 0x18) + 8) + 0x18;
    }
                    /* try { // try from 006a563c to 006a5643 has its CatchHandler @ 006a5a60 */
    FUN_007139b0(&local_c0,lVar12);
    uVar4 = (ulong)(local_c0 >> 1);
    if ((local_c0 & 1) != 0) {
      uVar4 = CONCAT62(uStack_b6,local_b8);
    }
    if (uVar4 == 0) {
                    /* try { // try from 006a56e0 to 006a56ef has its CatchHandler @ 006a5a60 */
      FUN_0071396c(&local_c0,"the global scope");
    }
    else {
                    /* try { // try from 006a5660 to 006a5673 has its CatchHandler @ 006a5964 */
      FUN_00714534(&local_e0,&DAT_001e5312,&local_c0);
                    /* try { // try from 006a5674 to 006a5683 has its CatchHandler @ 006a5950 */
      pbVar18 = (byte *)FUN_00713bdc(&local_e0,&DAT_001e5312);
      bVar6 = *pbVar18;
      bVar7 = pbVar18[1];
      local_90 = (byte)*(undefined8 *)(pbVar18 + 2);
      uStack_8f = (undefined5)((ulong)*(undefined8 *)(pbVar18 + 2) >> 8);
      pbVar16 = *(byte **)(pbVar18 + 0x10);
      uStack_8a = (undefined2)*(undefined8 *)(pbVar18 + 8);
      uStack_88 = (undefined6)((ulong)*(undefined8 *)(pbVar18 + 8) >> 0x10);
      pbVar18[8] = 0;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      pbVar18[0] = 0;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      if ((local_c0 & 1) != 0) {
        free(local_b0);
      }
      uStack_be = CONCAT51(uStack_8f,local_90);
      local_b8 = uStack_8a;
      uStack_b6 = uStack_88;
      local_c0 = bVar6;
      bStack_bf = bVar7;
      local_b0 = pbVar16;
      if (((byte)local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    lVar12 = *(long *)(param_4 + 8);
                    /* try { // try from 006a56f4 to 006a5707 has its CatchHandler @ 006a5a4c */
    FUN_00714534(local_158,
                 "Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of it.  Therefore, \""
                 ,lVar12);
                    /* try { // try from 006a5708 to 006a5717 has its CatchHandler @ 006a5a34 */
    puVar13 = (ulong *)FUN_00713bdc(local_158,"\" must be unique within ");
    local_130 = (void *)puVar13[2];
    uStack_138 = puVar13[1];
    local_140 = *puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    uVar4 = CONCAT62(uStack_b6,local_b8);
    pbVar16 = local_b0;
    if ((local_c0 & 1) == 0) {
      uVar4 = (ulong)(local_c0 >> 1);
      pbVar16 = &bStack_bf;
    }
                    /* try { // try from 006a574c to 006a5753 has its CatchHandler @ 006a5a24 */
    puVar13 = (ulong *)FUN_0071302c(&local_140,pbVar16,uVar4);
    local_110 = (void *)puVar13[2];
    uStack_118 = puVar13[1];
    local_120 = *puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
                    /* try { // try from 006a576c to 006a577b has its CatchHandler @ 006a5a14 */
    puVar13 = (ulong *)FUN_00713bdc(&local_120,", not just within \"");
    local_f0 = (void *)puVar13[2];
    uStack_f8 = puVar13[1];
    local_100 = *puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    pbVar18 = *(byte **)(param_3 + 8);
    uVar4 = *(ulong *)(pbVar18 + 8);
    pbVar16 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar16 = pbVar18 + 1;
      uVar4 = (ulong)(*pbVar18 >> 1);
    }
                    /* try { // try from 006a57b0 to 006a57b7 has its CatchHandler @ 006a59d4 */
    puVar14 = (undefined8 *)FUN_0071302c(&local_100,pbVar16,uVar4);
    local_80 = (void *)puVar14[2];
    uVar15 = *puVar14;
    uStack_88 = (undefined6)puVar14[1];
    uStack_82 = (undefined2)((ulong)puVar14[1] >> 0x30);
    local_90 = (byte)uVar15;
    uStack_8f = (undefined5)((ulong)uVar15 >> 8);
    uStack_8a = (undefined2)((ulong)uVar15 >> 0x30);
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
                    /* try { // try from 006a57d0 to 006a57df has its CatchHandler @ 006a59b4 */
    puVar13 = (ulong *)FUN_00713bdc(&local_90,&DAT_001f097e);
    local_d0 = (void *)puVar13[2];
    uStack_d8 = puVar13[1];
    local_e0 = *puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
                    /* try { // try from 006a57f8 to 006a580f has its CatchHandler @ 006a5968 */
    FUN_00695b70(param_1,lVar12 + 0x18,param_2,0,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
    if ((local_100 & 1) != 0) {
      free(local_f0);
    }
    if ((local_120 & 1) != 0) {
      free(local_110);
    }
    if ((local_140 & 1) != 0) {
      free(local_130);
    }
    if ((local_158[0] & 1) != 0) {
      free(local_148);
    }
    if ((local_c0 & 1) != 0) {
      free(local_b0);
    }
  }
  iVar8 = *(int *)(*(long *)(*(long *)(param_4 + 0x10) + 0x28) + 4);
  lVar12 = *(long *)(param_1 + 0x58);
  if ((*(int *)(param_4 + 4) < iVar8) ||
     ((long)*(short *)(*(long *)(param_4 + 0x10) + 2) + (long)iVar8 < (long)*(int *)(param_4 + 4)))
  {
    local_c0 = (byte)param_4;
    bStack_bf = (byte)((ulong)param_4 >> 8);
    uStack_be = (undefined6)((ulong)param_4 >> 0x10);
    *param_4 = 5;
                    /* try { // try from 006a5888 to 006a5893 has its CatchHandler @ 006a5a80 */
    FUN_0068aab0(lVar12 + 0x70,&local_c0);
  }
  if ((local_a8 & 1) != 0) {
    free(local_98);
  }
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
LAB_006a5ab0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a5ab4  FUN_006a5ab4 =====

void FUN_006a5ab4(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *__src;
  undefined4 *__dest;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  size_t __n;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
                    /* try { // try from 006a5b00 to 006a5b6b has its CatchHandler @ 006a5c4c */
  FUN_00694180(param_3,&local_80);
  __src = local_80;
  if (local_78 < local_70) {
    puVar5 = local_78 + 1;
    *local_78 = param_4;
  }
  else {
    __n = (long)local_78 - (long)local_80;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x3e != 0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006a5c80;
      FUN_004b6308(&local_80);
LAB_006a5c34:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_006a5c80;
    }
    uVar3 = (long)local_70 - (long)local_80 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)local_70 - (long)local_80)) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (undefined4 *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_006a5c34;
      __dest = (undefined4 *)FUN_00759c3c(uVar3 << 2);
    }
    puVar5 = __dest + lVar4 + 1;
    __dest[lVar4] = param_4;
    memcpy(__dest,__src,__n);
    local_80 = __dest;
    local_70 = __dest + uVar3;
    if (__src != (undefined4 *)0x0) {
      local_78 = puVar5;
      free(__src);
    }
  }
                    /* try { // try from 006a5bc0 to 006a5c4b has its CatchHandler @ 006a5c4c */
  local_78 = puVar5;
  FUN_006ba068(param_1,*(long *)(param_3 + 8) + 0x18,*(long *)(param_3 + 8) + 0x18,param_2,param_3,
               &local_80,param_5,param_6);
  if (local_80 != (undefined4 *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_006a5c80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a5c84  FUN_006a5c84 =====

void FUN_006a5c84(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *__src;
  undefined4 *__dest;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  size_t __n;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
                    /* try { // try from 006a5cd0 to 006a5d3b has its CatchHandler @ 006a5e1c */
  FUN_00694710(param_3,&local_80);
  __src = local_80;
  if (local_78 < local_70) {
    puVar5 = local_78 + 1;
    *local_78 = param_4;
  }
  else {
    __n = (long)local_78 - (long)local_80;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x3e != 0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006a5e50;
      FUN_004b6308(&local_80);
LAB_006a5e04:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_006a5e50;
    }
    uVar3 = (long)local_70 - (long)local_80 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)local_70 - (long)local_80)) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (undefined4 *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_006a5e04;
      __dest = (undefined4 *)FUN_00759c3c(uVar3 << 2);
    }
    puVar5 = __dest + lVar4 + 1;
    __dest[lVar4] = param_4;
    memcpy(__dest,__src,__n);
    local_80 = __dest;
    local_70 = __dest + uVar3;
    if (__src != (undefined4 *)0x0) {
      local_78 = puVar5;
      free(__src);
    }
  }
                    /* try { // try from 006a5d90 to 006a5e1b has its CatchHandler @ 006a5e1c */
  local_78 = puVar5;
  FUN_006ba5c4(param_1,*(long *)(param_3 + 8) + 0x18,*(long *)(param_3 + 8) + 0x18,param_2,param_3,
               &local_80,param_5,param_6);
  if (local_80 != (undefined4 *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_006a5e50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a5e54  FUN_006a5e54 =====

void FUN_006a5e54(undefined8 param_1,long param_2,long param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(param_3 + 8);
  uVar5 = *(ulong *)(param_2 + 0x18);
  *(long *)(param_4 + 0x10) = param_3;
  lVar4 = FUN_006a18e8(param_1,lVar4 + 0x18,uVar5 & 0xfffffffffffffffc,param_5);
  uVar5 = *(ulong *)(param_2 + 0x18);
  *(long *)(param_4 + 8) = lVar4;
  FUN_00699700(param_1,uVar5 & 0xfffffffffffffffc,lVar4 + 0x18,param_2);
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  if ((*(byte *)(param_2 + 0x10) >> 3 & 1) != 0) {
    puVar1 = PTR_PTR_007a3490;
    if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_2 + 0x30);
    }
    __n = strlen("google.protobuf.MethodOptions");
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006a604c;
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_006a5f60;
    }
    else {
      uVar5 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar5 = __n | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = __n;
      local_70 = __dest;
LAB_006a5f60:
      memcpy(__dest,"google.protobuf.MethodOptions",__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006a5f78 to 006a5f93 has its CatchHandler @ 006a6020 */
    FUN_006a6220(param_1,puVar1,param_4,4,&local_80,param_5);
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  param_4[1] = *(undefined1 *)(param_2 + 0x38);
  uVar2 = *(undefined1 *)(param_2 + 0x39);
  *param_4 = 8;
  param_4[2] = uVar2;
  FUN_006985c8(param_1,*(long *)(param_4 + 8) + 0x18,param_3);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_006a604c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a6050  FUN_006a6050 =====

void FUN_006a6050(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *__src;
  undefined4 *__dest;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  size_t __n;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
                    /* try { // try from 006a609c to 006a6107 has its CatchHandler @ 006a61e8 */
  FUN_00694568(param_3,&local_80);
  __src = local_80;
  if (local_78 < local_70) {
    puVar5 = local_78 + 1;
    *local_78 = param_4;
  }
  else {
    __n = (long)local_78 - (long)local_80;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x3e != 0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006a621c;
      FUN_004b6308(&local_80);
LAB_006a61d0:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_006a621c;
    }
    uVar3 = (long)local_70 - (long)local_80 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)local_70 - (long)local_80)) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (undefined4 *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_006a61d0;
      __dest = (undefined4 *)FUN_00759c3c(uVar3 << 2);
    }
    puVar5 = __dest + lVar4 + 1;
    __dest[lVar4] = param_4;
    memcpy(__dest,__src,__n);
    local_80 = __dest;
    local_70 = __dest + uVar3;
    if (__src != (undefined4 *)0x0) {
      local_78 = puVar5;
      free(__src);
    }
  }
                    /* try { // try from 006a615c to 006a61e7 has its CatchHandler @ 006a61e8 */
  local_78 = puVar5;
  FUN_006bab20(param_1,*(long *)(param_3 + 8) + 0x18,*(long *)(param_3 + 8) + 0x18,param_2,param_3,
               &local_80,param_5,param_6);
  if (local_80 != (undefined4 *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_006a621c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a6220  FUN_006a6220 =====

void FUN_006a6220(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *__src;
  undefined4 *__dest;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  size_t __n;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
                    /* try { // try from 006a626c to 006a62d7 has its CatchHandler @ 006a63b8 */
  FUN_006943c4(param_3,&local_80);
  __src = local_80;
  if (local_78 < local_70) {
    puVar5 = local_78 + 1;
    *local_78 = param_4;
  }
  else {
    __n = (long)local_78 - (long)local_80;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x3e != 0) {
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006a63ec;
      FUN_004b6308(&local_80);
LAB_006a63a0:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_006a63ec;
    }
    uVar3 = (long)local_70 - (long)local_80 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)local_70 - (long)local_80)) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (undefined4 *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_006a63a0;
      __dest = (undefined4 *)FUN_00759c3c(uVar3 << 2);
    }
    puVar5 = __dest + lVar4 + 1;
    __dest[lVar4] = param_4;
    memcpy(__dest,__src,__n);
    local_80 = __dest;
    local_70 = __dest + uVar3;
    if (__src != (undefined4 *)0x0) {
      local_78 = puVar5;
      free(__src);
    }
  }
                    /* try { // try from 006a632c to 006a63b7 has its CatchHandler @ 006a63b8 */
  local_78 = puVar5;
  FUN_006bb07c(param_1,*(long *)(param_3 + 8) + 0x18,*(long *)(param_3 + 8) + 0x18,param_2,param_3,
               &local_80,param_5,param_6);
  if (local_80 != (undefined4 *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_006a63ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a63f0  FUN_006a63f0 =====

/* WARNING: Removing unreachable block (ram,0x006a66e4) */
/* WARNING: Removing unreachable block (ram,0x006a6af8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_006a63f0(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  ulong *puVar8;
  size_t sVar9;
  void *pvVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  undefined8 uVar25;
  uint uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong local_2b8;
  size_t local_2b0;
  void *local_2a8;
  byte local_2a0 [16];
  void *local_290;
  ulong local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong uStack_268;
  void *local_260;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_100;
  undefined4 local_f8;
  byte *local_d0;
  ulong local_c8;
  void *local_c0;
  byte *local_a0;
  undefined8 uStack_98;
  void *local_90;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_2 + 0x20) == 0) {
    *(undefined **)(param_2 + 0x20) = PTR_PTR_007a33b0;
  }
  if (0 < *(int *)(param_2 + 0x70)) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      FUN_006a63f0(param_1,*(long *)(param_2 + 0x38) + lVar20,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar21 * 8 + 8));
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x88;
    } while (lVar21 < *(int *)(param_2 + 0x70));
  }
  puVar6 = PTR_PTR_007a3450;
  puVar5 = PTR_PTR_007a3430;
  uVar29 = *(uint *)(param_2 + 0x74);
  if (0 < (int)uVar29) {
    uVar15 = 0;
    lVar21 = *(long *)(param_2 + 0x40);
    do {
      lVar20 = lVar21 + uVar15 * 0x48;
      if (*(long *)(lVar20 + 0x20) == 0) {
        *(undefined **)(lVar20 + 0x20) = puVar5;
        uVar2 = *(uint *)(lVar20 + 4);
      }
      else {
        uVar2 = *(uint *)(lVar20 + 4);
      }
      if (0 < (int)uVar2) {
        uVar19 = (ulong)uVar2;
        plVar16 = (long *)(*(long *)(lVar20 + 0x28) + 0x18);
        do {
          if (*plVar16 == 0) {
            *plVar16 = (long)puVar6;
          }
          uVar19 = uVar19 - 1;
          plVar16 = plVar16 + 4;
        } while (uVar19 != 0);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar29);
  }
  if (0 < *(int *)(param_2 + 4)) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      FUN_006a6f94(param_1,*(long *)(param_2 + 0x28) + lVar20,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar21 * 8 + 8));
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x48;
    } while (lVar21 < *(int *)(param_2 + 4));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      FUN_006a6f94(param_1,*(long *)(param_2 + 0x50) + lVar20,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar21 * 8 + 8));
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x48;
    } while (lVar21 < *(int *)(param_2 + 0x7c));
  }
  puVar5 = PTR_PTR_007a3380;
  uVar29 = *(uint *)(param_2 + 0x78);
  uVar15 = (ulong)uVar29;
  if (0 < (int)uVar29) {
    lVar21 = *(long *)(param_2 + 0x48);
    if (uVar29 < 5) {
      lVar17 = 0;
    }
    else {
      uVar19 = 4;
      if ((uVar29 & 3) != 0) {
        uVar19 = uVar15 & 3;
      }
      puVar18 = (undefined8 *)(lVar21 + 0x28);
      lVar17 = uVar15 - uVar19;
      lVar20 = lVar17;
      do {
        auVar26._0_8_ = puVar18[-4];
        auVar26._8_8_ = puVar18[-2];
        auVar26 = NEON_cmeq(auVar26,0,8);
        if ((auVar26 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          if ((auVar26 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_006a6de8;
LAB_006a6e14:
          puVar18[-2] = puVar5;
          auVar28._0_8_ = *puVar18;
          auVar28._8_8_ = puVar18[2];
          auVar26 = NEON_cmeq(auVar28,0,8);
          uVar29 = auVar26._8_4_;
        }
        else {
          puVar18[-4] = puVar5;
          if ((auVar26 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006a6e14;
LAB_006a6de8:
          auVar27._0_8_ = *puVar18;
          auVar27._8_8_ = puVar18[2];
          auVar26 = NEON_cmeq(auVar27,0,8);
          uVar29 = auVar26._8_4_;
        }
        if ((auVar26 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          *puVar18 = puVar5;
        }
        if ((ZEXT416(uVar29) << 0x20 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
          puVar18[2] = puVar5;
        }
        lVar20 = lVar20 + -4;
        puVar18 = puVar18 + 8;
      } while (lVar20 != 0);
    }
    lVar20 = uVar15 - lVar17;
    plVar16 = (long *)(lVar21 + lVar17 * 0x10 + 8);
    do {
      if (*plVar16 == 0) {
        *plVar16 = (long)puVar5;
      }
      lVar20 = lVar20 + -1;
      plVar16 = plVar16 + 2;
    } while (lVar20 != 0);
  }
  iVar12 = *(int *)(param_2 + 4);
  if (0 < iVar12) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      lVar17 = *(long *)(param_2 + 0x28);
      if (((*(byte *)(lVar17 + lVar20 + 1) >> 4 & 1) != 0) &&
         (lVar23 = *(long *)(lVar17 + lVar20 + 0x28), lVar23 != 0)) {
        if (0 < *(int *)(lVar23 + 4)) {
          lVar22 = 0;
          if ((*(byte *)(lVar17 + lVar20 + -0x47) & 0x10) != 0) {
            lVar22 = *(long *)(lVar17 + lVar20 + -0x20);
          }
          if (lVar22 != lVar23) {
            lVar22 = *(long *)(param_2 + 8);
            bVar3 = *(byte *)(lVar22 + 0x18);
            sVar9 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar9 = *(size_t *)(lVar22 + 0x20);
            }
            sVar7 = strlen(".");
            uVar15 = sVar9 + sVar7;
            if (0xfffffffffffffff7 < uVar15) {
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_288);
              }
              goto LAB_006a6f90;
            }
            if (uVar15 < 0x17) {
              local_280 = 0;
              local_278 = (void *)0x0;
              local_288 = (ulong)(byte)(((uint)uVar15 & 0xff) << 1);
              pvVar10 = (void *)((ulong)&local_288 | 1);
            }
            else {
              uVar19 = (uVar15 & 0xfffffffffffffff8) + 8;
              if ((uVar15 | 7) != 0x17) {
                uVar19 = uVar15 | 7;
              }
              local_278 = (void *)FUN_00759c3c(uVar19 + 1);
              local_288 = uVar19 + 1 | 1;
              local_280 = uVar15;
              pvVar10 = local_278;
            }
            if (sVar9 != 0) {
              pvVar1 = (void *)(lVar22 + 0x19);
              if ((bVar3 & 1) != 0) {
                pvVar1 = *(void **)(lVar22 + 0x28);
              }
              memmove(pvVar10,pvVar1,sVar9);
            }
            if (sVar7 != 0) {
              memcpy((void *)((long)pvVar10 + sVar9),&DAT_001c773b,sVar7);
            }
            *(undefined1 *)((long)((long)pvVar10 + sVar9) + sVar7) = 0;
            pbVar13 = *(byte **)(lVar17 + lVar20 + -0x40);
            uVar15 = *(ulong *)(pbVar13 + 8);
            pbVar14 = *(byte **)(pbVar13 + 0x10);
            if ((*pbVar13 & 1) == 0) {
              pbVar14 = pbVar13 + 1;
              uVar15 = (ulong)(*pbVar13 >> 1);
            }
                    /* try { // try from 006a6794 to 006a679b has its CatchHandler @ 006a6f34 */
            puVar8 = (ulong *)FUN_0071302c(&local_288,pbVar14,uVar15);
            local_260 = (void *)puVar8[2];
            local_270 = *puVar8;
            uStack_268 = puVar8[1];
            puVar8[1] = 0;
            puVar8[2] = 0;
            *puVar8 = 0;
            uVar25 = *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar21 * 8);
            sVar9 = strlen(
                          "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                          );
            if (0xfffffffffffffff7 < sVar9) {
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006a6e70 to 006a6e77 has its CatchHandler @ 006a6eb8 */
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_2b8);
              }
              goto LAB_006a6f90;
            }
            if (sVar9 < 0x17) {
              local_2b8 = CONCAT71(local_2b8._1_7_,(char)((int)sVar9 << 1));
              pvVar10 = (void *)((ulong)&local_2b8 | 1);
              if (sVar9 != 0) goto LAB_006a6830;
            }
            else {
              uVar15 = (sVar9 & 0xfffffffffffffff8) + 8;
              if ((sVar9 | 7) != 0x17) {
                uVar15 = sVar9 | 7;
              }
                    /* try { // try from 006a6810 to 006a6817 has its CatchHandler @ 006a6e94 */
              pvVar10 = (void *)FUN_00759c3c(uVar15 + 1);
              local_2b8 = uVar15 + 1 | 1;
              local_2b0 = sVar9;
              local_2a8 = pvVar10;
LAB_006a6830:
              memcpy(pvVar10,
                     "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                     ,sVar9);
            }
            *(undefined1 *)((long)pvVar10 + sVar9) = 0;
            pbVar14 = *(byte **)(*(long *)(param_2 + 0x28) + lVar20 + -0x40);
            local_a0 = *(byte **)(pbVar14 + 0x10);
            if ((*pbVar14 & 1) == 0) {
              local_a0 = pbVar14 + 1;
            }
            uVar29 = (uint)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar29 = (uint)*(undefined8 *)(pbVar14 + 8);
            }
            uStack_98 = CONCAT44(uStack_98._4_4_,uVar29);
            pbVar14 = *(byte **)(lVar23 + 8);
            local_d0 = *(byte **)(pbVar14 + 0x10);
            if ((*pbVar14 & 1) == 0) {
              local_d0 = pbVar14 + 1;
            }
            local_100 = 0;
            local_f8 = 0xffffffff;
            local_130 = 0;
            local_128 = 0xffffffff;
            uVar29 = (uint)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar29 = (uint)*(undefined8 *)(pbVar14 + 8);
            }
            local_160 = 0;
            local_158 = 0xffffffff;
            local_190 = 0;
            local_188 = 0xffffffff;
            local_1c0 = 0;
            local_1b8 = 0xffffffff;
            local_1f0 = 0;
            local_1e8 = 0xffffffff;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_250 = 0;
            local_c8 = CONCAT44(local_c8._4_4_,uVar29);
            local_248 = 0xffffffff;
                    /* try { // try from 006a68f0 to 006a692b has its CatchHandler @ 006a6f04 */
            FUN_006ea3ec(local_2a0,&local_2b8,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                         &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
                    /* try { // try from 006a692c to 006a6947 has its CatchHandler @ 006a6ec8 */
            FUN_00695b70(param_1,&local_270,uVar25,2,local_2a0);
            if ((local_2a0[0] & 1) != 0) {
              free(local_290);
            }
            if ((local_2b8 & 1) != 0) {
              free(local_2a8);
            }
            if ((local_270 & 1) != 0) {
              free(local_260);
            }
            if ((local_288 & 1) != 0) {
              free(local_278);
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x30) +
                 (long)((int)((ulong)(lVar23 - *(long *)(*(long *)(lVar23 + 0x10) + 0x30)) >> 3) *
                       -0x33333333) * 0x28;
        iVar12 = *(int *)(lVar17 + 4);
        if (iVar12 == 0) {
          *(long *)(lVar17 + 0x20) = *(long *)(param_2 + 0x28) + lVar20;
          bVar3 = *(byte *)(param_1 + 0x30);
        }
        else {
          bVar3 = *(byte *)(param_1 + 0x30);
        }
        if (((bVar3 & 1) == 0) &&
           (*(long *)(param_2 + 0x28) + lVar20 != *(long *)(lVar17 + 0x20) + (long)iVar12 * 0x48)) {
          FUN_00675e64(&local_a0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x189c);
                    /* try { // try from 006a69f0 to 006a6a03 has its CatchHandler @ 006a6ea8 */
          uVar25 = FUN_00675a58(&local_a0,
                                "CHECK failed: (out_oneof_decl.fields_ + out_oneof_decl.field_count_) == (message->field(i)): "
                               );
                    /* try { // try from 006a6a04 to 006a6a0b has its CatchHandler @ 006a6ea4 */
          FUN_00675ac0(&local_d0,uVar25);
          FUN_00675e7c(&local_a0);
          iVar12 = *(int *)(lVar17 + 4);
        }
        *(int *)(lVar17 + 4) = iVar12 + 1;
        iVar12 = *(int *)(param_2 + 4);
      }
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x48;
    } while (lVar21 < iVar12);
  }
  uVar15 = (ulong)*(uint *)(param_2 + 0x68);
  if (0 < (int)*(uint *)(param_2 + 0x68)) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      lVar23 = *(long *)(param_2 + 0x30);
      lVar17 = lVar23 + lVar20;
      if (*(int *)(lVar17 + 4) == 0) {
        lVar22 = *(long *)(param_2 + 8);
        bVar3 = *(byte *)(lVar22 + 0x18);
        sVar9 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar9 = *(size_t *)(lVar22 + 0x20);
        }
        sVar7 = strlen(".");
        uVar15 = sVar9 + sVar7;
        if (0xfffffffffffffff7 < uVar15) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_d0);
          }
          goto LAB_006a6f90;
        }
        if (uVar15 < 0x17) {
          local_c8 = 0;
          local_c0 = (void *)0x0;
          local_d0 = (byte *)(ulong)(byte)(((uint)uVar15 & 0xff) << 1);
          pvVar10 = (void *)((ulong)&local_d0 | 1);
        }
        else {
          uVar19 = (uVar15 & 0xfffffffffffffff8) + 8;
          if ((uVar15 | 7) != 0x17) {
            uVar19 = uVar15 | 7;
          }
          local_c0 = (void *)FUN_00759c3c(uVar19 + 1);
          local_d0 = (byte *)(uVar19 + 1 | 1);
          local_c8 = uVar15;
          pvVar10 = local_c0;
        }
        if (sVar9 != 0) {
          pvVar1 = (void *)(lVar22 + 0x19);
          if ((bVar3 & 1) != 0) {
            pvVar1 = *(void **)(lVar22 + 0x28);
          }
          memmove(pvVar10,pvVar1,sVar9);
        }
        if (sVar7 != 0) {
          memcpy((void *)((long)pvVar10 + sVar9),&DAT_001c773b,sVar7);
        }
        *(undefined1 *)((long)((long)pvVar10 + sVar9) + sVar7) = 0;
        pbVar13 = *(byte **)(lVar23 + lVar20 + 8);
        uVar15 = *(ulong *)(pbVar13 + 8);
        pbVar14 = *(byte **)(pbVar13 + 0x10);
        if ((*pbVar13 & 1) == 0) {
          pbVar14 = pbVar13 + 1;
          uVar15 = (ulong)(*pbVar13 >> 1);
        }
                    /* try { // try from 006a6ba0 to 006a6ba7 has its CatchHandler @ 006a6f60 */
        pauVar11 = (undefined1 (*) [16])FUN_0071302c(&local_d0,pbVar14,uVar15);
        local_90 = *(void **)pauVar11[1];
        uStack_98 = SUB168(*pauVar11,8);
        local_a0 = SUB168(*pauVar11,0);
        *(undefined8 *)(*pauVar11 + 8) = 0;
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)*pauVar11 = 0;
                    /* try { // try from 006a6bd4 to 006a6be7 has its CatchHandler @ 006a6f48 */
        FUN_00695cf0(param_1,&local_a0,*(undefined8 *)(*(long *)(param_3 + 0xa0) + lVar21 * 8 + 8),0
                     ,"Oneof must have at least one field.");
        if (((ulong)local_a0 & 1) != 0) {
          free(local_90);
        }
        if (((ulong)local_d0 & 1) != 0) {
          free(local_c0);
        }
      }
      if (*(long *)(lVar17 + 0x18) == 0) {
        *(undefined **)(lVar17 + 0x18) = PTR_PTR_007a3400;
      }
      uVar15 = (ulong)*(int *)(param_2 + 0x68);
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x28;
    } while (lVar21 < (long)uVar15);
    iVar12 = *(int *)(param_2 + 4);
  }
  if (0 < iVar12) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      lVar17 = *(long *)(param_2 + 0x28) + lVar20;
      bVar3 = *(byte *)(lVar17 + 1);
      if (((bVar3 >> 1 & 1) != 0) &&
         (((((bVar3 >> 4 & 1) == 0 || (lVar17 = *(long *)(lVar17 + 0x28), lVar17 == 0)) ||
           (*(int *)(lVar17 + 4) != 1)) || ((*(byte *)(*(long *)(lVar17 + 0x20) + 1) >> 1 & 1) == 0)
          ))) {
        FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,
                     *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar21 * 8 + 8),10,
                     "Fields with proto3_optional set must be a member of a one-field oneof");
        iVar12 = *(int *)(param_2 + 4);
      }
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x48;
    } while (lVar21 < iVar12);
    uVar15 = (ulong)*(uint *)(param_2 + 0x68);
  }
  iVar12 = (int)uVar15;
  if (0 < (int)uVar15) {
    lVar20 = 0;
    lVar21 = 0;
    iVar24 = -1;
    do {
      lVar17 = *(long *)(param_2 + 0x30) + lVar20;
      iVar12 = iVar24;
      if ((*(int *)(lVar17 + 4) == 1) && ((*(byte *)(*(long *)(lVar17 + 0x20) + 1) >> 1 & 1) != 0))
      {
        iVar12 = (int)lVar21;
        if (iVar24 != -1) {
          iVar12 = iVar24;
        }
      }
      else if (iVar24 != -1) {
        FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,
                     *(undefined8 *)(*(long *)(param_3 + 0xa0) + lVar21 * 8 + 8),10,
                     "Synthetic oneofs must be after all other oneofs");
        uVar15 = (ulong)*(uint *)(param_2 + 0x68);
      }
      iVar24 = iVar12;
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x28;
    } while (lVar21 < (int)uVar15);
    iVar12 = (int)uVar15;
    if (iVar24 != -1) {
      iVar12 = iVar24;
    }
  }
  *(int *)(param_2 + 0x6c) = iVar12;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_006a6f90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a6f94  FUN_006a6f94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006a6f94(long *param_1,byte *******param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  size_t __n;
  byte ******ppppppbVar10;
  ulong uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  char cVar16;
  byte bVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  byte ******ppppppbVar20;
  byte *pbVar21;
  long lVar22;
  byte *****pppppbVar23;
  byte ****ppppbVar24;
  byte *pbVar25;
  uint uVar26;
  int *piVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  void *pvVar32;
  byte *******pppppppbVar33;
  byte *pbVar34;
  ulong local_2a0;
  size_t local_298;
  void *local_290;
  ulong local_288;
  size_t local_280;
  void *local_278;
  undefined1 local_270 [8];
  byte ****ppppbStack_268;
  byte *******local_260;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_160;
  undefined4 local_158;
  byte *******local_130;
  uint local_128;
  void *local_120;
  byte *******local_100;
  undefined8 uStack_f8;
  void *local_f0;
  byte *******local_d0;
  uint local_c8;
  undefined1 auStack_c4 [4];
  void *local_c0;
  byte *******local_a0;
  undefined8 uStack_98;
  void *local_90;
  byte ******local_88;
  uint local_80;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (param_2[7] == (byte ******)0x0) {
    param_2[7] = (byte ******)PTR_PTR_007a33e0;
    if ((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) goto LAB_006a733c;
LAB_006a6ff4:
    pbVar25 = (byte *)(*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
    ppppppbVar10 = (byte ******)FUN_00696e18(param_1,pbVar25,param_2[1] + 3,0,1);
    cVar16 = *(char *)ppppppbVar10;
    if (cVar16 == '\0') {
      lVar22 = *param_1;
      if (*(char *)(lVar22 + 0x2a) != '\0') {
        uVar11 = *(ulong *)(pbVar25 + 8);
        pbVar34 = *(byte **)(pbVar25 + 0x10);
        if ((*pbVar25 & 1) == 0) {
          pbVar34 = pbVar25 + 1;
          uVar11 = (ulong)(*pbVar25 >> 1);
        }
        if ((long)uVar11 < 0) {
          FUN_00676318(uVar11,"string length exceeds max size");
          ppppppbVar10 = (byte ******)FUN_006972c8(lVar22,pbVar34,uVar11,2);
          cVar16 = *(char *)ppppppbVar10;
        }
        else {
          ppppppbVar10 = (byte ******)FUN_006972c8(lVar22,pbVar34,uVar11,2);
          cVar16 = *(char *)ppppppbVar10;
        }
        if (cVar16 != '\0') goto LAB_006a7020;
      }
      if (*(long *)(lVar7 + 0x28) == local_68) {
        FUN_00695e48(param_1,param_2[1] + 3,param_3,3,
                     *(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
        return;
      }
      goto LAB_006a81b0;
    }
LAB_006a7020:
    if (cVar16 == '\x01') {
      param_2[4] = ppppppbVar10;
      uVar11 = (ulong)*(uint *)(ppppppbVar10 + 0xf);
      if (0 < (int)*(uint *)(ppppppbVar10 + 0xf)) {
        piVar27 = (int *)((long)ppppppbVar10[9] + 4);
        do {
          if ((piVar27[-1] <= *(int *)((long)param_2 + 4)) &&
             (*(int *)((long)param_2 + 4) < *piVar27)) goto LAB_006a733c;
          uVar11 = uVar11 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar11 != 0);
      }
      if (*(char *)(*param_1 + 0x2a) != '\0') {
        pbVar25 = (byte *)(*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
        __n = strlen("google.protobuf.bridge.MessageSet");
        bVar17 = *pbVar25;
        sVar12 = (ulong)(bVar17 >> 1);
        if ((bVar17 & 1) != 0) {
          sVar12 = *(size_t *)(pbVar25 + 8);
        }
        if (__n == sVar12) {
          if (__n == 0xffffffffffffffff) {
            if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 006a8510 to 006a8517 has its CatchHandler @ 006a85e4 */
                    /* WARNING: Subroutine does not return */
              FUN_0030b8f4(pbVar25);
            }
            goto LAB_006a81b0;
          }
          pbVar34 = *(byte **)(pbVar25 + 0x10);
          if ((bVar17 & 1) == 0) {
            pbVar34 = pbVar25 + 1;
          }
          iVar9 = memcmp(pbVar34,"google.protobuf.bridge.MessageSet",__n);
          if (iVar9 == 0) goto LAB_006a733c;
        }
      }
      ppppppbVar10 = param_2[1];
      sVar12 = strlen("\"$0\" does not declare $1 as an extension number.");
      if (0xfffffffffffffff7 < sVar12) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_288);
        }
        goto LAB_006a81b0;
      }
      if (sVar12 < 0x17) {
        pvVar32 = (void *)((ulong)&local_288 | 1);
        local_288 = CONCAT71(local_288._1_7_,(char)((int)sVar12 << 1));
        if (sVar12 != 0) goto LAB_006a7224;
      }
      else {
        uVar11 = (sVar12 & 0xfffffffffffffff8) + 8;
        if ((sVar12 | 7) != 0x17) {
          uVar11 = sVar12 | 7;
        }
        pvVar32 = (void *)FUN_00759c3c(uVar11 + 1);
        local_288 = uVar11 + 1 | 1;
        local_280 = sVar12;
        local_278 = pvVar32;
LAB_006a7224:
        memcpy(pvVar32,"\"$0\" does not declare $1 as an extension number.",sVar12);
      }
      *(undefined1 *)((long)pvVar32 + sVar12) = 0;
      pppppbVar18 = param_2[4][1];
      uVar26 = (uint)(*(byte *)(pppppbVar18 + 3) >> 1);
      local_a0 = (byte *******)((long)pppppbVar18 + 0x19);
      if ((*(byte *)(pppppbVar18 + 3) & 1) != 0) {
        uVar26 = (uint)pppppbVar18[4];
        local_a0 = (byte *******)pppppbVar18[5];
      }
      uStack_98 = (byte *******)CONCAT44(uStack_98._4_4_,uVar26);
                    /* try { // try from 006a7270 to 006a7277 has its CatchHandler @ 006a8638 */
      local_d0 = (byte *******)FUN_0067764c(*(undefined4 *)((long)param_2 + 4),auStack_c4);
      sVar12 = strlen((char *)local_d0);
      local_100 = (byte *******)0x0;
      local_c8 = (uint)sVar12;
      uStack_f8 = CONCAT44(uStack_f8._4_4_,0xffffffff);
      local_130 = (byte *******)0x0;
      local_128 = 0xffffffff;
      local_160 = 0;
      local_158 = 0xffffffff;
      local_190 = 0;
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
                    /* try { // try from 006a72c8 to 006a7303 has its CatchHandler @ 006a8634 */
      FUN_006ea3ec(local_270,&local_288,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                   &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
                    /* try { // try from 006a7304 to 006a731b has its CatchHandler @ 006a861c */
      FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,1,local_270);
      if (((ulong)local_270 & 1) != 0) {
        free(local_260);
      }
      if ((local_288 & 1) != 0) {
        free(local_278);
      }
      goto LAB_006a733c;
    }
    ppppppbVar10 = param_2[1];
    FUN_00714534(&local_d0,&DAT_001e5312,*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
                    /* try { // try from 006a708c to 006a709b has its CatchHandler @ 006a86a4 */
    puVar13 = (undefined8 *)FUN_00713bdc(&local_d0,"\" is not a message type.");
    local_90 = (void *)puVar13[2];
    uStack_98 = (byte *******)puVar13[1];
    local_a0 = (byte *******)*puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
                    /* try { // try from 006a70b4 to 006a70cb has its CatchHandler @ 006a868c */
    FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,3,&local_a0);
    goto LAB_006a7f40;
  }
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) != 0) goto LAB_006a6ff4;
LAB_006a733c:
  if ((((*(byte *)((long)param_2 + 1) & 0x60) != 0x20) &&
      ((*(byte *)((long)param_2 + 1) >> 4 & 1) != 0)) && (param_2[5] != (byte ******)0x0)) {
    FUN_00695cf0(param_1,param_2[1] + 3,param_3,0,
                 "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
  }
  if ((*(uint *)(param_3 + 0x10) >> 2 & 1) == 0) {
    ppppppbVar10 = param_2[3];
    if ((ppppppbVar10 != (byte ******)0x0) &&
       (local_100 = (byte *******)PTR_thunk_FUN_006af330_007a32d0, local_130 = param_2,
       *ppppppbVar10 != (byte *****)0xffffffffffffffff)) {
      local_a0 = (byte *******)&local_100;
      uStack_98 = (byte *******)&local_130;
      local_d0 = (byte *******)&local_a0;
      FUN_00710f84(ppppppbVar10,&local_d0,FUN_00685640);
    }
    bVar17 = *(byte *)((long)param_2 + 2);
    if ((bVar17 & 0xfe) != 10) {
      ppppppbVar10 = param_2[3];
      if (ppppppbVar10 != (byte ******)0x0) {
        local_100 = (byte *******)PTR_thunk_FUN_006af330_007a32d0;
        local_130 = param_2;
        if (*ppppppbVar10 != (byte *****)0xffffffffffffffff) {
          local_a0 = (byte *******)&local_100;
          uStack_98 = (byte *******)&local_130;
          local_d0 = (byte *******)&local_a0;
          FUN_00710f84(ppppppbVar10,&local_d0,FUN_00685640);
        }
        bVar17 = *(byte *)((long)param_2 + 2);
      }
      if (bVar17 != 0xe) goto LAB_006a744c;
    }
    ppppppbVar10 = param_2[1];
    pcVar15 = "Field with message or enum type missing type_name.";
LAB_006a7438:
    uVar14 = 2;
LAB_006a7448:
    FUN_00695cf0(param_1,ppppppbVar10 + 3,param_3,uVar14,pcVar15);
LAB_006a744c:
    ppppppbVar10 = param_2[4];
    lVar22 = param_1[0xb];
    if (((ppppppbVar10 == (byte ******)0x0) ||
        (uVar26 = *(uint *)((long)param_2 + 4), (int)uVar26 < 1)) ||
       (*(ushort *)((long)ppppppbVar10 + 2) < uVar26)) {
      *(byte *)param_2 = 2;
      local_a0 = param_2;
      uVar11 = FUN_0068aab0(lVar22 + 0x48,&local_a0);
      if ((uVar11 & 1) == 0) {
        lVar22 = param_1[0xb];
        ppppppbVar10 = param_2[4];
        uVar26 = *(uint *)((long)param_2 + 4);
        goto LAB_006a7498;
      }
      if (((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) ||
         (uVar11 = FUN_0068afcc(param_1[1],param_2), (uVar11 & 1) != 0)) goto LAB_006a7f60;
      ppppppbVar10 = param_2[4];
      plVar30 = *(long **)(param_1[1] + 0x140);
      if (plVar30 == (long *)0x0) {
LAB_006a7eb8:
        lVar22 = 0;
      }
      else {
        plVar1 = (long *)(param_1[1] + 0x140);
        plVar29 = plVar1;
        do {
          plVar28 = plVar30;
          if ((byte ******)plVar28[4] < ppppppbVar10) {
            plVar31 = plVar28 + 1;
            plVar28 = plVar29;
          }
          else {
            plVar31 = plVar28;
            if (((byte ******)plVar28[4] <= ppppppbVar10) &&
               ((int)plVar28[5] < *(int *)((long)param_2 + 4))) {
              plVar31 = plVar28 + 1;
              plVar28 = plVar29;
            }
          }
          plVar29 = plVar28;
          plVar30 = (long *)*plVar31;
        } while ((long *)*plVar31 != (long *)0x0);
        if ((plVar28 == plVar1) || (ppppppbVar10 < (byte ******)plVar28[4])) goto LAB_006a7eb8;
        plVar30 = plVar28;
        if ((ppppppbVar10 <= (byte ******)plVar28[4]) &&
           (plVar30 = plVar1, (int)plVar28[5] <= *(int *)((long)param_2 + 4))) {
          plVar30 = plVar28;
        }
        if (plVar30 == plVar1) goto LAB_006a7eb8;
        lVar22 = plVar30[6];
      }
      if (ppppppbVar10 == (byte ******)0x0) {
        ppppbVar24 = (byte ****)strlen("unknown");
        if ((byte ****)0xfffffffffffffff7 < ppppbVar24) {
LAB_006a84d0:
          if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(local_270);
          }
          goto LAB_006a81b0;
        }
        if (ppppbVar24 < (byte ****)0x17) {
          pppppppbVar33 = (byte *******)((ulong)local_270 | 1);
          local_270[0] = (char)((int)ppppbVar24 << 1);
          if (ppppbVar24 != (byte ****)0x0) goto LAB_006a81e4;
        }
        else {
          uVar11 = ((ulong)ppppbVar24 & 0xfffffffffffffff8) + 8;
          if (((ulong)ppppbVar24 | 7) != 0x17) {
            uVar11 = (ulong)ppppbVar24 | 7;
          }
          pppppppbVar33 = (byte *******)FUN_00759c3c(uVar11 + 1);
          local_270 = (undefined1  [8])(uVar11 + 1 | 1);
          ppppbStack_268 = ppppbVar24;
          local_260 = pppppppbVar33;
LAB_006a81e4:
          memcpy(pppppppbVar33,"unknown",(size_t)ppppbVar24);
        }
        *(undefined1 *)((long)pppppppbVar33 + (long)ppppbVar24) = 0;
      }
      else {
        pppppbVar18 = ppppppbVar10[1];
        if (((ulong)pppppbVar18[3] & 1) == 0) {
          ppppbStack_268 = pppppbVar18[4];
          local_270 = (undefined1  [8])pppppbVar18[3];
          local_260 = (byte *******)pppppbVar18[5];
        }
        else {
          FUN_002fb36c(local_270,pppppbVar18[5],pppppbVar18[4]);
        }
      }
      sVar12 = strlen(
                     "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
                     );
      if (0xfffffffffffffff7 < sVar12) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 006a84f8 to 006a84ff has its CatchHandler @ 006a8618 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_2a0);
        }
        goto LAB_006a81b0;
      }
      if (sVar12 < 0x17) {
        pvVar32 = (void *)((ulong)&local_2a0 | 1);
        local_2a0 = CONCAT71(local_2a0._1_7_,(char)((int)sVar12 << 1));
        if (sVar12 != 0) goto LAB_006a8264;
      }
      else {
        uVar11 = (sVar12 & 0xfffffffffffffff8) + 8;
        if ((sVar12 | 7) != 0x17) {
          uVar11 = sVar12 | 7;
        }
                    /* try { // try from 006a824c to 006a8253 has its CatchHandler @ 006a8618 */
        pvVar32 = (void *)FUN_00759c3c(uVar11 + 1);
        local_2a0 = uVar11 + 1 | 1;
        local_298 = sVar12;
        local_290 = pvVar32;
LAB_006a8264:
        memcpy(pvVar32,
               "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
               ,sVar12);
      }
      *(undefined1 *)((long)pvVar32 + sVar12) = 0;
                    /* try { // try from 006a8284 to 006a828b has its CatchHandler @ 006a8600 */
      local_a0 = (byte *******)FUN_0067764c(*(undefined4 *)((long)param_2 + 4),(long)&uStack_98 + 4)
      ;
      sVar12 = strlen((char *)local_a0);
      local_c8 = (uint)ppppbStack_268;
      uStack_98 = (byte *******)CONCAT44(uStack_98._4_4_,(int)sVar12);
      local_d0 = local_260;
      if (((ulong)local_270 & 1) == 0) {
        local_c8 = (uint)(local_270[0] >> 1);
        local_d0 = (byte *******)(local_270 + 1);
      }
      lVar6 = *(long *)(lVar22 + 8);
      local_100 = (byte *******)(lVar6 + 0x19);
      uVar26 = (uint)(*(byte *)(lVar6 + 0x18) >> 1);
      if ((*(byte *)(lVar6 + 0x18) & 1) != 0) {
        local_100 = *(byte ********)(lVar6 + 0x28);
        uVar26 = (uint)*(undefined8 *)(lVar6 + 0x20);
      }
      uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar26);
      pbVar25 = *(byte **)(*(long *)(lVar22 + 0x10) + 8);
      local_130 = *(byte ********)(pbVar25 + 0x10);
      local_160 = 0;
      bVar8 = (*pbVar25 & 1) == 0;
      local_158 = 0xffffffff;
      if (bVar8) {
        local_130 = (byte *******)(pbVar25 + 1);
      }
      local_190 = 0;
      local_128 = (uint)(*pbVar25 >> 1);
      if (!bVar8) {
        local_128 = (uint)*(undefined8 *)(pbVar25 + 8);
      }
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
                    /* try { // try from 006a833c to 006a8377 has its CatchHandler @ 006a85fc */
      FUN_006ea3ec(&local_288,&local_2a0,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                   &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
      if ((local_2a0 & 1) != 0) {
        free(local_290);
      }
                    /* try { // try from 006a838c to 006a83a3 has its CatchHandler @ 006a85e8 */
      FUN_00696484(param_1,param_2[1] + 3,param_3,1,&local_288);
      pvVar32 = local_278;
      uVar11 = local_288;
    }
    else {
      if (((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) &&
         ((byte *******)(ppppppbVar10[5] + (ulong)uVar26 * 9 + -9) == param_2)) goto LAB_006a7f60;
LAB_006a7498:
      if ((ppppppbVar10 == (byte ******)0x0) ||
         (((int)uVar26 < 1 || (*(ushort *)((long)ppppppbVar10 + 2) < uVar26)))) {
        local_d0 = (byte *******)&local_a0;
        uStack_98 = (byte *******)0x0;
        local_90 = (void *)0x0;
        local_a0 = (byte *******)CONCAT71(local_a0._1_7_,0xb);
        local_88 = ppppppbVar10;
        local_80 = uVar26;
        lVar22 = FUN_006afd90(lVar22 + 0x48,&local_d0);
        if (lVar22 == 0) {
          pppppbVar18 = (byte *****)0x0;
          ppppppbVar10 = param_2[4];
        }
        else {
          pppppbVar18 = *(byte ******)(lVar22 + 0x10);
          if (*(char *)pppppbVar18 != '\x02') {
            pppppbVar18 = (byte *****)0x0;
          }
          ppppppbVar10 = param_2[4];
        }
        if (ppppppbVar10 != (byte ******)0x0) {
          pppppbVar19 = ppppppbVar10[1];
          pppppbVar23 = pppppbVar19 + 3;
          bVar17 = *(byte *)pppppbVar23;
          goto joined_r0x006a7500;
        }
        ppppbVar24 = (byte ****)strlen("unknown");
        if ((byte ****)0xfffffffffffffff7 < ppppbVar24) goto LAB_006a84d0;
        if (ppppbVar24 < (byte ****)0x17) {
          pppppppbVar33 = (byte *******)((ulong)local_270 | 1);
          local_270[0] = (char)((int)ppppbVar24 << 1);
          if (ppppbVar24 != (byte ****)0x0) goto LAB_006a7e5c;
        }
        else {
          uVar11 = ((ulong)ppppbVar24 & 0xfffffffffffffff8) + 8;
          if (((ulong)ppppbVar24 | 7) != 0x17) {
            uVar11 = (ulong)ppppbVar24 | 7;
          }
          pppppppbVar33 = (byte *******)FUN_00759c3c(uVar11 + 1);
          local_270 = (undefined1  [8])(uVar11 + 1 | 1);
          ppppbStack_268 = ppppbVar24;
          local_260 = pppppppbVar33;
LAB_006a7e5c:
          memcpy(pppppppbVar33,"unknown",(size_t)ppppbVar24);
        }
        *(undefined1 *)((long)pppppppbVar33 + (long)ppppbVar24) = 0;
        bVar17 = *(byte *)((long)param_2 + 1);
        ppppppbVar10 = param_2[1];
joined_r0x006a7e7c:
        if ((bVar17 >> 3 & 1) != 0) goto LAB_006a77a0;
LAB_006a7520:
        sVar12 = strlen("Field number $0 has already been used in \"$1\" by field \"$2\".");
        if (0xfffffffffffffff7 < sVar12) {
          if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 006a8498 to 006a849f has its CatchHandler @ 006a86bc */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_2a0);
          }
          goto LAB_006a81b0;
        }
        if (sVar12 < 0x17) {
          pvVar32 = (void *)((ulong)&local_2a0 | 1);
          local_2a0 = CONCAT71(local_2a0._1_7_,(char)((int)sVar12 << 1));
          if (sVar12 != 0) goto LAB_006a7808;
        }
        else {
          uVar11 = (sVar12 & 0xfffffffffffffff8) + 8;
          if ((sVar12 | 7) != 0x17) {
            uVar11 = sVar12 | 7;
          }
                    /* try { // try from 006a77f0 to 006a77f7 has its CatchHandler @ 006a86bc */
          pvVar32 = (void *)FUN_00759c3c(uVar11 + 1);
          local_2a0 = uVar11 + 1 | 1;
          local_298 = sVar12;
          local_290 = pvVar32;
LAB_006a7808:
          memcpy(pvVar32,"Field number $0 has already been used in \"$1\" by field \"$2\".",sVar12);
        }
        *(undefined1 *)((long)pvVar32 + sVar12) = 0;
                    /* try { // try from 006a7828 to 006a782f has its CatchHandler @ 006a8674 */
        local_a0 = (byte *******)
                   FUN_0067764c(*(undefined4 *)((long)param_2 + 4),(long)&uStack_98 + 4);
        sVar12 = strlen((char *)local_a0);
        uStack_98 = (byte *******)CONCAT44(uStack_98._4_4_,(int)sVar12);
        local_c8 = (uint)ppppbStack_268;
        local_d0 = local_260;
        if (((ulong)local_270 & 1) == 0) {
          local_d0 = (byte *******)(local_270 + 1);
          local_c8 = (uint)(local_270[0] >> 1);
        }
        ppppbVar24 = pppppbVar18[1];
        local_100 = (byte *******)ppppbVar24[2];
        local_130 = (byte *******)0x0;
        bVar8 = (*(byte *)ppppbVar24 & 1) == 0;
        local_128 = 0xffffffff;
        if (bVar8) {
          local_100 = (byte *******)((long)ppppbVar24 + 1);
        }
        local_160 = 0;
        uVar26 = (uint)(*(byte *)ppppbVar24 >> 1);
        if (!bVar8) {
          uVar26 = (uint)ppppbVar24[1];
        }
        local_158 = 0xffffffff;
        local_190 = 0;
        local_188 = 0xffffffff;
        local_1c0 = 0;
        local_1b8 = 0xffffffff;
        local_1f0 = 0;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar26);
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
                    /* try { // try from 006a78c0 to 006a78fb has its CatchHandler @ 006a866c */
        FUN_006ea3ec(&local_288,&local_2a0,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                     &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
                    /* try { // try from 006a78fc to 006a7913 has its CatchHandler @ 006a8650 */
        FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,1,&local_288);
      }
      else {
        pppppbVar18 = ppppppbVar10[5] + (ulong)uVar26 * 9 + -9;
        pppppbVar19 = ppppppbVar10[1];
        pppppbVar23 = pppppbVar19 + 3;
        bVar17 = *(byte *)pppppbVar23;
joined_r0x006a7500:
        if ((bVar17 & 1) == 0) {
          ppppbStack_268 = pppppbVar23[1];
          local_270 = (undefined1  [8])*pppppbVar23;
          local_260 = (byte *******)pppppbVar23[2];
          bVar17 = *(byte *)((long)param_2 + 1);
          ppppppbVar10 = param_2[1];
          goto joined_r0x006a7e7c;
        }
        FUN_002fb36c(local_270,pppppbVar19[5],pppppbVar19[4]);
        ppppppbVar10 = param_2[1];
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) goto LAB_006a7520;
LAB_006a77a0:
        sVar12 = strlen("Extension number $0 has already been used in \"$1\" by extension \"$2\".");
        if (0xfffffffffffffff7 < sVar12) {
          if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 006a84b0 to 006a84b7 has its CatchHandler @ 006a86b8 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_2a0);
          }
          goto LAB_006a81b0;
        }
        if (sVar12 < 0x17) {
          pvVar32 = (void *)((ulong)&local_2a0 | 1);
          local_2a0 = CONCAT71(local_2a0._1_7_,(char)((int)sVar12 << 1));
          if (sVar12 != 0) goto LAB_006a7948;
        }
        else {
          uVar11 = (sVar12 & 0xfffffffffffffff8) + 8;
          if ((sVar12 | 7) != 0x17) {
            uVar11 = sVar12 | 7;
          }
                    /* try { // try from 006a7930 to 006a7937 has its CatchHandler @ 006a86b8 */
          pvVar32 = (void *)FUN_00759c3c(uVar11 + 1);
          local_2a0 = uVar11 + 1 | 1;
          local_298 = sVar12;
          local_290 = pvVar32;
LAB_006a7948:
          memcpy(pvVar32,"Extension number $0 has already been used in \"$1\" by extension \"$2\".",
                 sVar12);
        }
        *(undefined1 *)((long)pvVar32 + sVar12) = 0;
                    /* try { // try from 006a7968 to 006a796f has its CatchHandler @ 006a8670 */
        local_a0 = (byte *******)
                   FUN_0067764c(*(undefined4 *)((long)param_2 + 4),(long)&uStack_98 + 4);
        sVar12 = strlen((char *)local_a0);
        uStack_98 = (byte *******)CONCAT44(uStack_98._4_4_,(int)sVar12);
        bVar8 = ((ulong)local_270 & 1) == 0;
        local_130 = (byte *******)0x0;
        local_d0 = local_260;
        if (bVar8) {
          local_d0 = (byte *******)(local_270 + 1);
        }
        local_160 = 0;
        local_c8 = (uint)(local_270[0] >> 1);
        if (!bVar8) {
          local_c8 = (uint)ppppbStack_268;
        }
        ppppbVar24 = pppppbVar18[1];
        local_128 = 0xffffffff;
        local_158 = 0xffffffff;
        local_190 = 0;
        local_188 = 0xffffffff;
        local_1c0 = 0;
        local_1f0 = 0;
        uVar26 = (uint)(*(byte *)(ppppbVar24 + 3) >> 1);
        local_100 = (byte *******)((long)ppppbVar24 + 0x19);
        if ((*(byte *)(ppppbVar24 + 3) & 1) != 0) {
          uVar26 = (uint)ppppbVar24[4];
          local_100 = (byte *******)ppppbVar24[5];
        }
        local_1b8 = 0xffffffff;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar26);
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
                    /* try { // try from 006a7a04 to 006a7a3f has its CatchHandler @ 006a8668 */
        FUN_006ea3ec(&local_288,&local_2a0,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                     &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
                    /* try { // try from 006a7a40 to 006a7a57 has its CatchHandler @ 006a864c */
        FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,1,&local_288);
      }
      pvVar32 = local_290;
      uVar11 = local_2a0;
      if ((local_288 & 1) != 0) {
        free(local_278);
        pvVar32 = local_290;
        uVar11 = local_2a0;
      }
    }
    if ((uVar11 & 1) != 0) {
      free(pvVar32);
    }
    if (((ulong)local_270 & 1) != 0) {
      free(local_260);
      if (*(long *)(lVar7 + 0x28) == local_68) {
        return;
      }
      goto LAB_006a81b0;
    }
  }
  else {
    uVar26 = *(uint *)(param_3 + 0x10) >> 3 & 1;
    if (*(int *)(param_3 + 0x58) == 0xe) {
      uVar26 = 1;
    }
    if ((*(byte *)(*param_1 + 0x2b) & 1) == 0) {
      puVar3 = PTR_PTR_007a33e0;
      if (*(undefined **)(param_3 + 0x40) != (undefined *)0x0) {
        puVar3 = *(undefined **)(param_3 + 0x40);
      }
      bVar17 = puVar3[0x54];
    }
    else {
      bVar17 = 0;
    }
    pbVar25 = (byte *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
    bVar5 = bVar17;
    if (*(char *)(*param_1 + 0x29) == '\0') {
      bVar5 = 1;
    }
    ppppppbVar10 = (byte ******)FUN_00696e18(param_1,pbVar25,param_2[1] + 3,1,bVar5);
    cVar16 = *(char *)ppppppbVar10;
    if (cVar16 == '\0') {
      lVar22 = *param_1;
      if (*(char *)(lVar22 + 0x2a) != '\0') {
        uVar11 = *(ulong *)(pbVar25 + 8);
        pbVar34 = *(byte **)(pbVar25 + 0x10);
        if ((*pbVar25 & 1) == 0) {
          pbVar34 = pbVar25 + 1;
          uVar11 = (ulong)(*pbVar25 >> 1);
        }
        if ((long)uVar11 < 0) {
          FUN_00676318(uVar11,"string length exceeds max size");
          ppppppbVar10 = (byte ******)FUN_006972c8(lVar22,pbVar34,uVar11,uVar26);
          cVar16 = *(char *)ppppppbVar10;
        }
        else {
          ppppppbVar10 = (byte ******)FUN_006972c8(lVar22,pbVar34,uVar11,uVar26);
          cVar16 = *(char *)ppppppbVar10;
        }
        if (cVar16 != '\0') goto LAB_006a7660;
      }
      if ((bVar5 & 1) != 0) {
        if (bVar17 != 0) {
          pppppppbVar33 = (byte *******)strlen("google.protobuf.Empty");
          if ((byte *******)0xfffffffffffffff7 < pppppppbVar33) {
            if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_a0);
            }
            goto LAB_006a81b0;
          }
          if (pppppppbVar33 < (byte *******)0x17) {
            pvVar32 = (void *)((ulong)&local_a0 | 1);
            local_a0 = (byte *******)CONCAT71(local_a0._1_7_,(char)((int)pppppppbVar33 << 1));
            if (pppppppbVar33 != (byte *******)0x0) goto LAB_006a8134;
          }
          else {
            uVar11 = ((ulong)pppppppbVar33 & 0xfffffffffffffff8) + 8;
            if (((ulong)pppppppbVar33 | 7) != 0x17) {
              uVar11 = (ulong)pppppppbVar33 | 7;
            }
            pvVar32 = (void *)FUN_00759c3c(uVar11 + 1);
            local_a0 = (byte *******)(uVar11 + 1 | 1);
            uStack_98 = pppppppbVar33;
            local_90 = pvVar32;
LAB_006a8134:
            memcpy(pvVar32,"google.protobuf.Empty",(size_t)pppppppbVar33);
          }
          *(undefined1 *)((long)pvVar32 + (long)pppppppbVar33) = 0;
                    /* try { // try from 006a814c to 006a815b has its CatchHandler @ 006a85c0 */
          ppppppbVar10 = (byte ******)FUN_00696a6c(param_1,&local_a0,1);
          if (((ulong)local_a0 & 1) != 0) {
            free(local_90);
          }
          cVar16 = *(char *)ppppppbVar10;
          if (cVar16 != '\0') goto LAB_006a7660;
        }
        FUN_00695e48(param_1,param_2[1] + 3,param_3,2,
                     *(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
        if (*(long *)(lVar7 + 0x28) == local_68) {
          return;
        }
        goto LAB_006a81b0;
      }
      pbVar34 = (byte *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
      pbVar25 = (byte *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
      bVar17 = *pbVar25;
      uVar26 = (uint)(*pbVar34 >> 1);
      if ((*pbVar34 & 1) != 0) {
        uVar26 = *(uint *)(pbVar34 + 8);
      }
      uVar2 = (uint)(bVar17 >> 1);
      if ((bVar17 & 1) != 0) {
        uVar2 = *(uint *)(pbVar25 + 8);
      }
      ppppppbVar10 = (byte ******)FUN_0068b190(param_1[1],uVar26 + uVar2 + 10);
      *ppppppbVar10 = (byte *****)0x0;
      param_2[3] = ppppppbVar10;
      uVar11 = *(ulong *)(pbVar34 + 8);
      pbVar25 = *(byte **)(pbVar34 + 0x10);
      if ((*pbVar34 & 1) == 0) {
        pbVar25 = pbVar34 + 1;
        uVar11 = (ulong)(*pbVar34 >> 1);
      }
      memcpy(ppppppbVar10 + 1,pbVar25,uVar11 + 1);
      pbVar21 = (byte *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
      pbVar25 = *(byte **)(pbVar21 + 0x10);
      uVar11 = (ulong)(*pbVar34 >> 1);
      if ((*pbVar34 & 1) != 0) {
        uVar11 = *(ulong *)(pbVar34 + 8);
      }
      bVar8 = (*pbVar21 & 1) == 0;
      if (bVar8) {
        pbVar25 = pbVar21 + 1;
      }
      uVar4 = (ulong)(*pbVar21 >> 1);
      if (!bVar8) {
        uVar4 = *(ulong *)(pbVar21 + 8);
      }
      memcpy((void *)((long)(ppppppbVar10 + 1) + uVar11 + 1),pbVar25,uVar4 + 1);
      lVar22 = param_1[0xb];
      if (((param_2[4] == (byte ******)0x0) || ((int)*(uint *)((long)param_2 + 4) < 1)) ||
         ((uint)*(ushort *)((long)param_2[4] + 2) < *(uint *)((long)param_2 + 4))) {
        *(byte *)param_2 = 2;
        local_a0 = param_2;
        FUN_0068aab0(lVar22 + 0x48,&local_a0);
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) != 0) {
        FUN_0068afcc(param_1[1],param_2);
        if (*(long *)(lVar7 + 0x28) == local_68) {
          return;
        }
        goto LAB_006a81b0;
      }
    }
    else {
LAB_006a7660:
      if ((*(byte *)(param_3 + 0x11) >> 2 & 1) == 0) {
        if (cVar16 == '\x01') {
          bVar17 = 0xb;
        }
        else {
          if (cVar16 != '\x04') {
            ppppppbVar10 = param_2[1];
            FUN_00714534(&local_d0,&DAT_001e5312,*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
                    /* try { // try from 006a7ccc to 006a7cdb has its CatchHandler @ 006a85e0 */
            puVar13 = (undefined8 *)FUN_00713bdc(&local_d0,"\" is not a type.");
            local_90 = (void *)puVar13[2];
            uStack_98 = (byte *******)puVar13[1];
            local_a0 = (byte *******)*puVar13;
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = 0;
                    /* try { // try from 006a7cf4 to 006a7d0b has its CatchHandler @ 006a85dc */
            FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,2,&local_a0);
            goto LAB_006a7f40;
          }
          bVar17 = 0xe;
        }
        *(byte *)((long)param_2 + 2) = bVar17;
      }
      ppppppbVar20 = param_2[3];
      if ((ppppppbVar20 != (byte ******)0x0) &&
         (local_100 = (byte *******)PTR_thunk_FUN_006af330_007a32d0, local_130 = param_2,
         *ppppppbVar20 != (byte *****)0xffffffffffffffff)) {
        local_a0 = (byte *******)&local_100;
        uStack_98 = (byte *******)&local_130;
        local_d0 = (byte *******)&local_a0;
        FUN_00710f84(ppppppbVar20,&local_d0,FUN_00685640);
      }
      bVar17 = *(byte *)((long)param_2 + 2);
      if ((bVar17 & 0xfe) != 10) {
        ppppppbVar20 = param_2[3];
        if (ppppppbVar20 != (byte ******)0x0) {
          local_100 = (byte *******)PTR_thunk_FUN_006af330_007a32d0;
          local_130 = param_2;
          if (*ppppppbVar20 != (byte *****)0xffffffffffffffff) {
            local_a0 = (byte *******)&local_100;
            uStack_98 = (byte *******)&local_130;
            local_d0 = (byte *******)&local_a0;
            FUN_00710f84(ppppppbVar20,&local_d0,FUN_00685640);
          }
          bVar17 = *(byte *)((long)param_2 + 2);
        }
        if (bVar17 != 0xe) {
          ppppppbVar10 = param_2[1];
          pcVar15 = "Field with primitive type has type_name.";
          goto LAB_006a7438;
        }
        cVar16 = *(char *)ppppppbVar10;
        ppppppbVar20 = ppppppbVar10;
        if (cVar16 != '\x04') {
          ppppppbVar20 = (byte ******)0x0;
        }
        param_2[6] = ppppppbVar20;
        if (cVar16 != '\x04') {
          ppppppbVar10 = param_2[1];
          FUN_00714534(&local_d0,&DAT_001e5312,*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
                    /* try { // try from 006a7f00 to 006a7f0f has its CatchHandler @ 006a85d8 */
          puVar13 = (undefined8 *)FUN_00713bdc(&local_d0,"\" is not an enum type.");
          local_90 = (void *)puVar13[2];
          uStack_98 = (byte *******)puVar13[1];
          local_a0 = (byte *******)*puVar13;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
                    /* try { // try from 006a7f28 to 006a7f3f has its CatchHandler @ 006a85d4 */
          FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,2,&local_a0);
          goto LAB_006a7f40;
        }
        ppppppbVar20 = param_2[3];
        if (ppppppbVar20 != (byte ******)0x0) {
          local_100 = param_2;
          if (*ppppppbVar20 != (byte *****)0xffffffffffffffff) {
            uStack_98 = (byte *******)&local_100;
            local_a0 = (byte *******)PTR_thunk_FUN_006af330_007a32d0;
            local_d0 = (byte *******)&local_a0;
            FUN_00710f84(ppppppbVar20,&local_d0,FUN_006bd98c);
          }
          ppppppbVar10 = param_2[6];
        }
        bVar17 = *(byte *)((long)param_2 + 1);
        if (((ulong)*ppppppbVar10 & 0x100) != 0) {
          bVar5 = bVar17 & 0xfe;
          bVar17 = 0;
          *(byte *)((long)param_2 + 1) = bVar5;
        }
        if ((bVar17 & 1) == 0) {
          lVar22 = FUN_0068f648(param_2);
          if (0 < *(int *)(lVar22 + 4)) {
            lVar22 = FUN_0068f648(param_2);
            param_2[8] = *(byte *******)(lVar22 + 0x28);
          }
          goto LAB_006a744c;
        }
        uVar11 = FUN_006de3f0(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
        if ((uVar11 & 1) == 0) {
          ppppppbVar10 = param_2[1];
          pcVar15 = "Default value for an enum field must be an identifier.";
          goto LAB_006a7b30;
        }
        uVar11 = *(ulong *)(param_3 + 0x30);
        lVar22 = FUN_0068f648(param_2);
        ppppppbVar10 = (byte ******)
                       FUN_00696e18(param_1,uVar11 & 0xfffffffffffffffc,*(long *)(lVar22 + 8) + 0x18
                                    ,0,1);
        if (*(char *)ppppppbVar10 == '\x05') {
LAB_006a802c:
          pppppbVar19 = ppppppbVar10[2];
          pppppbVar18 = (byte *****)FUN_0068f648(param_2);
          if (pppppbVar19 == pppppbVar18) {
            param_2[8] = ppppppbVar10;
            goto LAB_006a744c;
          }
        }
        else if (*(char *)ppppppbVar10 == '\x06') {
          ppppppbVar10 = (byte ******)((long)ppppppbVar10 + -1);
          goto LAB_006a802c;
        }
        ppppppbVar10 = param_2[1];
        lVar22 = FUN_0068f648(param_2);
        FUN_00714534(&local_130,"Enum type \"",*(long *)(lVar22 + 8) + 0x18);
                    /* try { // try from 006a8064 to 006a8073 has its CatchHandler @ 006a85ac */
        puVar13 = (undefined8 *)FUN_00713bdc(&local_130,"\" has no value named \"");
        local_f0 = (void *)puVar13[2];
        uStack_f8 = puVar13[1];
        local_100 = (byte *******)*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
                    /* try { // try from 006a8090 to 006a809f has its CatchHandler @ 006a858c */
        FUN_00696434(&local_d0,&local_100,*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
                    /* try { // try from 006a80a0 to 006a80af has its CatchHandler @ 006a856c */
        puVar13 = (undefined8 *)FUN_00713bdc(&local_d0,&DAT_001f097e);
        local_90 = (void *)puVar13[2];
        uStack_98 = (byte *******)puVar13[1];
        local_a0 = (byte *******)*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
                    /* try { // try from 006a80c8 to 006a80df has its CatchHandler @ 006a8530 */
        FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,4,&local_a0);
        if (((ulong)local_a0 & 1) != 0) {
          free(local_90);
        }
        if (((ulong)local_d0 & 1) != 0) {
          free(local_c0);
        }
        if (((ulong)local_100 & 1) != 0) {
          free(local_f0);
        }
        if (((ulong)local_130 & 1) != 0) {
          free(local_120);
        }
        goto LAB_006a744c;
      }
      cVar16 = *(char *)ppppppbVar10;
      if (cVar16 != '\x01') {
        ppppppbVar10 = (byte ******)0x0;
      }
      param_2[6] = ppppppbVar10;
      if (cVar16 == '\x01') {
        if (((ulong)*param_2 & 0x100) != 0) {
          ppppppbVar10 = param_2[1];
          pcVar15 = "Messages can\'t have default values.";
LAB_006a7b30:
          uVar14 = 4;
          goto LAB_006a7448;
        }
        goto LAB_006a744c;
      }
      ppppppbVar10 = param_2[1];
      FUN_00714534(&local_d0,&DAT_001e5312,*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
                    /* try { // try from 006a7c5c to 006a7c6b has its CatchHandler @ 006a8614 */
      puVar13 = (undefined8 *)FUN_00713bdc(&local_d0,"\" is not a message type.");
      local_90 = (void *)puVar13[2];
      uStack_98 = (byte *******)puVar13[1];
      local_a0 = (byte *******)*puVar13;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
                    /* try { // try from 006a7c84 to 006a7c9b has its CatchHandler @ 006a8610 */
      FUN_00695b70(param_1,ppppppbVar10 + 3,param_3,2,&local_a0);
LAB_006a7f40:
      if (((ulong)local_a0 & 1) != 0) {
        free(local_90);
      }
      if (((ulong)local_d0 & 1) != 0) {
        free(local_c0);
      }
    }
  }
LAB_006a7f60:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_006a81b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a86e8  FUN_006a86e8 =====

void FUN_006a86e8(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  char cVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    *(undefined ***)(param_2 + 0x38) = &PTR_PTR_FUN_007aa818;
  }
  pbVar9 = (byte *)(*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
  pcVar3 = (char *)FUN_00696e18(param_1,pbVar9,*(long *)(param_2 + 8) + 0x18,0,
                                *(char *)(*param_1 + 0x29) == '\0');
  cVar6 = *pcVar3;
  if (cVar6 == '\0') {
    lVar8 = *param_1;
    if (*(char *)(lVar8 + 0x2a) != '\0') {
      uVar1 = *(ulong *)(pbVar9 + 8);
      pbVar7 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar7 = pbVar9 + 1;
        uVar1 = (ulong)(*pbVar9 >> 1);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
        pcVar3 = (char *)FUN_006972c8(lVar8,pbVar7,uVar1,0);
        cVar6 = *pcVar3;
      }
      else {
        pcVar3 = (char *)FUN_006972c8();
        cVar6 = *pcVar3;
      }
      if (cVar6 != '\0') goto LAB_006a8764;
    }
    if ((*(byte *)(*param_1 + 0x29) & 1) == 0) {
      FUN_00695e48(param_1,*(long *)(param_2 + 8) + 0x18,param_3,5,
                   *(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
    }
    else {
      pbVar7 = (byte *)(*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
      uVar1 = *(ulong *)(pbVar7 + 8);
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
        uVar1 = (ulong)(*pbVar7 >> 1);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
      }
      FUN_006a8c60(param_2 + 0x18,pbVar9,uVar1,param_1[10]);
    }
  }
  else {
LAB_006a8764:
    if (cVar6 == '\x01') {
      if (*(long *)(param_2 + 0x20) != 0) {
        FUN_00675e64(&local_80,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x2070);
                    /* try { // try from 006a8790 to 006a87a3 has its CatchHandler @ 006a8bc4 */
        uVar4 = FUN_00675a58(&local_80,"CHECK failed: !once_: ");
                    /* try { // try from 006a87a4 to 006a87ab has its CatchHandler @ 006a8bc0 */
        FUN_00675ac0(local_98,uVar4);
        FUN_00675e7c(&local_80);
      }
      *(char **)(param_2 + 0x18) = pcVar3;
    }
    else {
      lVar8 = *(long *)(param_2 + 8);
      FUN_00714534(local_98,&DAT_001e5312,*(ulong *)(param_3 + 0x20) & 0xfffffffffffffffc);
                    /* try { // try from 006a87dc to 006a87eb has its CatchHandler @ 006a8c34 */
      puVar5 = (ulong *)FUN_00713bdc(local_98,"\" is not a message type.");
      local_70 = (void *)puVar5[2];
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 006a8804 to 006a881b has its CatchHandler @ 006a8bf8 */
      FUN_00695b70(param_1,lVar8 + 0x18,param_3,5,&local_80);
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      if ((local_98[0] & 1) != 0) {
        free(local_88);
      }
    }
  }
  pbVar9 = (byte *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
  pcVar3 = (char *)FUN_00696e18(param_1,pbVar9,*(long *)(param_2 + 8) + 0x18,0,
                                *(char *)(*param_1 + 0x29) == '\0');
  cVar6 = *pcVar3;
  if (cVar6 == '\0') {
    lVar8 = *param_1;
    if (*(char *)(lVar8 + 0x2a) != '\0') {
      uVar1 = *(ulong *)(pbVar9 + 8);
      pbVar7 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar7 = pbVar9 + 1;
        uVar1 = (ulong)(*pbVar9 >> 1);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
        pcVar3 = (char *)FUN_006972c8(lVar8,pbVar7,uVar1,0);
        cVar6 = *pcVar3;
      }
      else {
        pcVar3 = (char *)FUN_006972c8();
        cVar6 = *pcVar3;
      }
      if (cVar6 != '\0') goto LAB_006a8910;
    }
    if ((*(byte *)(*param_1 + 0x29) & 1) == 0) {
      FUN_00695e48(param_1,*(long *)(param_2 + 8) + 0x18,param_3,6,
                   *(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
    }
    else {
      pbVar7 = (byte *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
      uVar1 = *(ulong *)(pbVar7 + 8);
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
        uVar1 = (ulong)(*pbVar7 >> 1);
      }
      if ((long)uVar1 < 0) {
        FUN_00676318(uVar1,"string length exceeds max size");
      }
      FUN_006a8c60(param_2 + 0x28,pbVar9,uVar1,param_1[10]);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
    }
  }
  else {
LAB_006a8910:
    if (cVar6 == '\x01') {
      if (*(long *)(param_2 + 0x30) != 0) {
        FUN_00675e64(&local_80,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x2070);
                    /* try { // try from 006a893c to 006a894f has its CatchHandler @ 006a8bbc */
        uVar4 = FUN_00675a58(&local_80,"CHECK failed: !once_: ");
                    /* try { // try from 006a8950 to 006a8957 has its CatchHandler @ 006a8bb8 */
        FUN_00675ac0(local_98,uVar4);
        FUN_00675e7c(&local_80);
      }
      *(char **)(param_2 + 0x28) = pcVar3;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
    }
    else {
      lVar8 = *(long *)(param_2 + 8);
      FUN_00714534(local_98,&DAT_001e5312,*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
                    /* try { // try from 006a8998 to 006a89a7 has its CatchHandler @ 006a8be8 */
      puVar5 = (ulong *)FUN_00713bdc(local_98,"\" is not a message type.");
      local_70 = (void *)puVar5[2];
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 006a89c0 to 006a89d7 has its CatchHandler @ 006a8be4 */
      FUN_00695b70(param_1,lVar8 + 0x18,param_3,6,&local_80);
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      if ((local_98[0] & 1) == 0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return;
        }
      }
      else {
        free(local_88);
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a8c60  FUN_006a8c60 =====

void FUN_006a8c60(long *param_1,void *param_2,size_t param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*param_1 != 0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x2077);
                    /* try { // try from 006a8cb4 to 006a8cc7 has its CatchHandler @ 006a8e80 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: !descriptor_: ");
                    /* try { // try from 006a8cc8 to 006a8ccf has its CatchHandler @ 006a8e7c */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
  }
  if (param_1[1] != 0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x2078);
                    /* try { // try from 006a8cf8 to 006a8d0b has its CatchHandler @ 006a8e78 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: !once_: ");
                    /* try { // try from 006a8d0c to 006a8d13 has its CatchHandler @ 006a8e74 */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
  }
  if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x2079);
                    /* try { // try from 006a8d54 to 006a8d67 has its CatchHandler @ 006a8e68 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: file && file->pool_: ");
                    /* try { // try from 006a8d68 to 006a8d6f has its CatchHandler @ 006a8e64 */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
    bVar1 = *(byte *)(*(long *)(param_4 + 0x18) + 0x29);
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_4 + 0x18) + 0x29);
  }
  if ((bVar1 & 1) == 0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x207a);
                    /* try { // try from 006a8d9c to 006a8daf has its CatchHandler @ 006a8e60 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: file->pool_->lazily_build_dependencies_: ");
                    /* try { // try from 006a8db0 to 006a8db7 has its CatchHandler @ 006a8e5c */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
    cVar2 = *(char *)(param_4 + 2);
  }
  else {
    cVar2 = *(char *)(param_4 + 2);
  }
  if (cVar2 != '\0') {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x207b);
                    /* try { // try from 006a8de0 to 006a8df3 has its CatchHandler @ 006a8e70 */
    uVar4 = FUN_00675a58(auStack_78,"CHECK failed: !file->finished_building_: ");
                    /* try { // try from 006a8df4 to 006a8dfb has its CatchHandler @ 006a8e6c */
    FUN_00675ac0(&uStack_79,uVar4);
    FUN_00675e7c(auStack_78);
  }
  puVar5 = (undefined8 *)
           FUN_0068b190(*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x20),(int)param_3 + 9);
  *puVar5 = 0;
  param_1[1] = (long)puVar5;
  memcpy(puVar5 + 1,param_2,param_3);
  *(undefined1 *)((long)(puVar5 + 1) + param_3) = 0;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006a8ea8  FUN_006a8ea8 =====

void FUN_006a8ea8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  void *__dest;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_280;
  size_t local_278;
  void *local_270;
  byte local_268 [16];
  void *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_d0;
  undefined4 local_c8;
  char *local_a0;
  undefined4 local_98;
  undefined1 auStack_94 [36];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (0 < *(int *)(param_2 + 4)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_006a9750(param_1,*(long *)(param_2 + 0x28) + lVar6,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar8 < *(int *)(param_2 + 4));
  }
  if (0 < *(int *)(param_2 + 0x70)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_006a8ea8(param_1,*(long *)(param_2 + 0x38) + lVar6,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x88;
    } while (lVar8 < *(int *)(param_2 + 0x70));
  }
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_006a92c4(param_1,*(long *)(param_2 + 0x40) + lVar6,
                   *(undefined8 *)(*(long *)(param_3 + 0x58) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar8 < *(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_006a9750(param_1,*(long *)(param_2 + 0x50) + lVar6,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar8 < *(int *)(param_2 + 0x7c));
  }
  iVar4 = *(int *)(param_2 + 0x78);
  lVar8 = 0x1fffffff;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    lVar8 = 0x7fffffff;
  }
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 4;
    do {
      if (lVar8 + 1 < (long)*(int *)(*(long *)(param_2 + 0x48) + lVar7)) {
        lVar5 = *(long *)(param_2 + 8);
        uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar6 * 8 + 8);
        sVar3 = strlen("Extension numbers cannot be greater than $0.");
        if (0xfffffffffffffff7 < sVar3) {
          if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_280);
          }
          goto LAB_006a92c0;
        }
        if (sVar3 < 0x17) {
          local_280 = CONCAT71(local_280._1_7_,(char)((int)sVar3 << 1));
          __dest = (void *)((ulong)&local_280 | 1);
          if (sVar3 != 0) goto LAB_006a90fc;
        }
        else {
          uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
          if ((sVar3 | 7) != 0x17) {
            uVar1 = sVar3 | 7;
          }
          __dest = (void *)FUN_00759c3c(uVar1 + 1);
          local_280 = uVar1 + 1 | 1;
          local_278 = sVar3;
          local_270 = __dest;
LAB_006a90fc:
          memcpy(__dest,"Extension numbers cannot be greater than $0.",sVar3);
        }
        *(undefined1 *)((long)__dest + sVar3) = 0;
                    /* try { // try from 006a9114 to 006a911f has its CatchHandler @ 006a9244 */
        local_a0 = (char *)FUN_0067758c(lVar8,auStack_94);
        sVar3 = strlen(local_a0);
        local_d0 = 0;
        local_98 = (undefined4)sVar3;
        local_c8 = 0xffffffff;
        local_100 = 0;
        local_f8 = 0xffffffff;
        local_130 = 0;
        local_128 = 0xffffffff;
        local_160 = 0;
        local_158 = 0xffffffff;
        local_190 = 0;
        local_188 = 0xffffffff;
        local_1c0 = 0;
        local_1b8 = 0xffffffff;
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
                    /* try { // try from 006a9178 to 006a91b3 has its CatchHandler @ 006a9298 */
        FUN_006ea3ec(local_268,&local_280,&local_a0,&local_d0,&local_100,&local_130,&local_160,
                     &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
                    /* try { // try from 006a91b8 to 006a91cf has its CatchHandler @ 006a9254 */
        FUN_00695b70(param_1,lVar5 + 0x18,uVar9,1,local_268);
        if ((local_268[0] & 1) != 0) {
          free(local_258);
        }
        if ((local_280 & 1) != 0) {
          free(local_270);
        }
        iVar4 = *(int *)(param_2 + 0x78);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < iVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_006a92c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006a92c4  FUN_006a92c4 =====

void FUN_006a92c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  ulong *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  byte local_f8 [16];
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 ****local_88;
  undefined8 ****local_80;
  long local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (((*(byte *)(*(long *)(param_2 + 0x20) + 0x28) & 1) == 0) ||
     ((*(byte *)(*(long *)(param_2 + 0x20) + 0x48) & 1) == 0)) {
    local_80 = (undefined8 *****)0x0;
    local_78 = 0;
    local_88 = &local_80;
    if (0 < *(int *)(param_2 + 4)) {
      lVar13 = 0;
      do {
        lVar12 = *(long *)(param_2 + 0x28) + lVar13 * 0x20;
        iVar3 = *(int *)(lVar12 + 4);
        pppppuVar10 = &local_80;
        pppppuVar11 = (undefined8 *****)local_80;
        if ((undefined8 *****)local_80 == (undefined8 *****)0x0) {
          lVar12 = *(long *)(lVar12 + 8) + 0x18;
          pppppuVar11 = &local_80;
LAB_006a94c0:
                    /* try { // try from 006a94c0 to 006a94c7 has its CatchHandler @ 006a9720 */
          pppppuVar9 = (undefined8 *****)FUN_00759c3c(0x40);
          pppppuVar9[6] = (undefined8 ****)0x0;
          pppppuVar9[7] = (undefined8 ****)0x0;
          pppppuVar9[5] = (undefined8 ****)0x0;
          *pppppuVar9 = (undefined8 ****)0x0;
          pppppuVar9[1] = (undefined8 ****)0x0;
          pppppuVar9[2] = pppppuVar11;
          *pppppuVar10 = pppppuVar9;
          *(int *)(pppppuVar9 + 4) = iVar3;
          pppppuVar11 = pppppuVar9;
          if ((undefined8 *****)*local_88 != (undefined8 *****)0x0) {
            pppppuVar11 = (undefined8 *****)*pppppuVar10;
            local_88 = (undefined8 ****)*local_88;
          }
          FUN_00328410(local_80,pppppuVar11);
          local_78 = local_78 + 1;
LAB_006a9358:
                    /* try { // try from 006a9358 to 006a9363 has its CatchHandler @ 006a9720 */
          FUN_007139b0(pppppuVar9 + 5,lVar12);
        }
        else {
          do {
            pppppuVar9 = pppppuVar11;
            pppppuVar14 = pppppuVar10;
            iVar4 = *(int *)(pppppuVar9 + 4);
            lVar1 = 8;
            if (iVar3 <= iVar4) {
              lVar1 = 0;
            }
            pppppuVar10 = pppppuVar14;
            if (iVar3 <= iVar4) {
              pppppuVar10 = pppppuVar9;
            }
            pppppuVar11 = *(undefined8 ******)((long)pppppuVar9 + lVar1);
          } while (*(undefined8 ******)((long)pppppuVar9 + lVar1) != (undefined8 *****)0x0);
          if (pppppuVar10 == &local_80) {
LAB_006a950c:
            lVar12 = *(long *)(lVar12 + 8) + 0x18;
            pppppuVar14 = (undefined8 *****)local_80;
            do {
              while (pppppuVar9 = pppppuVar14, pppppuVar11 = pppppuVar9,
                    *(int *)(pppppuVar9 + 4) <= iVar3) {
                if (iVar3 <= *(int *)(pppppuVar9 + 4)) goto LAB_006a9358;
                pppppuVar14 = (undefined8 *****)pppppuVar9[1];
                if ((undefined8 *****)pppppuVar9[1] == (undefined8 *****)0x0) {
                  pppppuVar10 = pppppuVar9 + 1;
                  goto LAB_006a94c0;
                }
              }
              pppppuVar14 = (undefined8 *****)*pppppuVar9;
              pppppuVar10 = pppppuVar9;
            } while ((undefined8 *****)*pppppuVar9 != (undefined8 *****)0x0);
            goto LAB_006a94c0;
          }
          if (iVar3 <= iVar4) {
            pppppuVar14 = pppppuVar9;
          }
          pppppuVar11 = &local_80;
          if (*(int *)(pppppuVar14 + 4) <= iVar3) {
            pppppuVar11 = pppppuVar10;
          }
          if (&local_80 == pppppuVar11) goto LAB_006a950c;
                    /* try { // try from 006a93d8 to 006a93eb has its CatchHandler @ 006a96f4 */
          FUN_00714534(local_f8,&DAT_001e5312,*(long *)(lVar12 + 8) + 0x18);
                    /* try { // try from 006a93ec to 006a93fb has its CatchHandler @ 006a96b0 */
          puVar8 = (ulong *)FUN_00713bdc(local_f8,"\" uses the same enum value as \"");
          local_d0 = (void *)puVar8[2];
          uStack_d8 = puVar8[1];
          local_e0 = *puVar8;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          iVar3 = *(int *)(lVar12 + 4);
          pppppuVar10 = (undefined8 *****)local_80;
          pppppuVar11 = &local_80;
          pppppuVar14 = &local_80;
          if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
            do {
              while (pppppuVar9 = pppppuVar10, pppppuVar11 = pppppuVar9,
                    iVar3 < *(int *)(pppppuVar9 + 4)) {
                pppppuVar10 = (undefined8 *****)*pppppuVar9;
                pppppuVar14 = pppppuVar9;
                if ((undefined8 *****)*pppppuVar9 == (undefined8 *****)0x0) goto LAB_006a945c;
              }
              if (iVar3 <= *(int *)(pppppuVar9 + 4)) goto LAB_006a954c;
              pppppuVar10 = (undefined8 *****)pppppuVar9[1];
            } while ((undefined8 *****)pppppuVar9[1] != (undefined8 *****)0x0);
            pppppuVar14 = pppppuVar9 + 1;
          }
LAB_006a945c:
                    /* try { // try from 006a945c to 006a9463 has its CatchHandler @ 006a96f8 */
          pppppuVar9 = (undefined8 *****)FUN_00759c3c(0x40);
          pppppuVar9[6] = (undefined8 ****)0x0;
          pppppuVar9[7] = (undefined8 ****)0x0;
          pppppuVar9[5] = (undefined8 ****)0x0;
          *pppppuVar9 = (undefined8 ****)0x0;
          pppppuVar9[1] = (undefined8 ****)0x0;
          pppppuVar9[2] = pppppuVar11;
          *pppppuVar14 = pppppuVar9;
          *(int *)(pppppuVar9 + 4) = iVar3;
          pppppuVar10 = pppppuVar9;
          if ((undefined8 *****)*local_88 != (undefined8 *****)0x0) {
            pppppuVar10 = (undefined8 *****)*pppppuVar14;
            local_88 = (undefined8 ****)*local_88;
          }
          FUN_00328410(local_80,pppppuVar10);
          local_78 = local_78 + 1;
LAB_006a954c:
          ppppuVar2 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar9 + 5) >> 1);
          ppppuVar7 = (undefined8 ****)((long)pppppuVar9 + 0x29);
          if ((*(byte *)(pppppuVar9 + 5) & 1) != 0) {
            ppppuVar2 = pppppuVar9[6];
            ppppuVar7 = pppppuVar9[7];
          }
                    /* try { // try from 006a9568 to 006a956f has its CatchHandler @ 006a96f8 */
          puVar8 = (ulong *)FUN_0071302c(&local_e0,ppppuVar7,ppppuVar2);
          local_b0 = (void *)puVar8[2];
          uStack_b8 = puVar8[1];
          local_c0 = *puVar8;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
                    /* try { // try from 006a9588 to 006a9593 has its CatchHandler @ 006a96c0 */
          puVar8 = (ulong *)FUN_00713bdc(&local_c0,
                                         "\". If this is intended, set \'option allow_alias = true;\' to the enum definition."
                                        );
          local_90 = (void *)puVar8[2];
          uStack_98 = puVar8[1];
          local_a0 = *puVar8;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          if ((local_c0 & 1) == 0) {
            if ((local_e0 & 1) != 0) goto LAB_006a95e4;
LAB_006a95bc:
            if ((local_f8[0] & 1) != 0) goto LAB_006a95f4;
LAB_006a95c4:
            bVar5 = *(byte *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          else {
            free(local_b0);
            if ((local_e0 & 1) == 0) goto LAB_006a95bc;
LAB_006a95e4:
            free(local_d0);
            if ((local_f8[0] & 1) == 0) goto LAB_006a95c4;
LAB_006a95f4:
            free(local_e8);
            bVar5 = *(byte *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          if ((bVar5 & 1) == 0) {
                    /* try { // try from 006a961c to 006a962b has its CatchHandler @ 006a9698 */
            FUN_00695b70(param_1,*(long *)(param_2 + 8) + 0x18,
                         *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar13 * 8 + 8),1,&local_a0);
          }
          if ((local_a0 & 1) != 0) {
            free(local_90);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_2 + 4));
    }
    FUN_006bcee0(&local_88,local_80);
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006a9750  FUN_006a9750 =====

void FUN_006a9750(long *param_1,undefined *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  long lVar4;
  undefined **ppuVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  char *pcVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined8 local_98;
  undefined **local_90;
  char *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(char *)(*param_1 + 0x29) != '\0') {
    if (param_2 == (undefined *)0x0) goto LAB_006a9bb8;
    plVar8 = *(long **)(param_2 + 0x18);
    if ((plVar8 != (long *)0x0) && (local_78 = param_2, *plVar8 != -1)) {
      local_90 = &local_78;
      local_98 = (undefined **)PTR_thunk_FUN_006af330_007a32d0;
      local_70 = &local_98;
      FUN_00710f84(plVar8,&local_70,FUN_006bd98c);
    }
    if (((param_2[2] & 0xfe) != 10) || (*(long *)(param_2 + 0x30) == 0)) goto LAB_006a9bb8;
  }
  if (((*(byte *)(*(long *)(param_2 + 0x38) + 0x51) & 1) != 0) ||
     (*(char *)(*(long *)(param_2 + 0x38) + 0x52) != '\0')) {
    plVar8 = *(long **)(param_2 + 0x18);
    if ((plVar8 != (long *)0x0) &&
       (local_78 = PTR_thunk_FUN_006af330_007a32d0, local_80 = param_2, *plVar8 != -1)) {
      local_98 = &local_78;
      local_90 = &local_80;
      local_70 = &local_98;
      FUN_00710f84(plVar8,&local_70,FUN_00685640);
    }
    if (param_2[2] != '\v') {
      FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                   "[lazy = true] can only be specified for submessage fields.");
    }
  }
  if (*(char *)(*(long *)(param_2 + 0x38) + 0x50) != '\0') {
    if (((param_2[1] ^ 0xff) & 0x60) == 0) {
      plVar8 = *(long **)(param_2 + 0x18);
      if ((plVar8 != (long *)0x0) &&
         (local_78 = PTR_thunk_FUN_006af330_007a32d0, local_80 = param_2, *plVar8 != -1)) {
        local_98 = &local_78;
        local_90 = &local_80;
        local_70 = &local_98;
        FUN_00710f84(plVar8,&local_70,FUN_00685640);
      }
      if ((byte)param_2[2] - 0xd < 0xfffffffc) goto LAB_006a990c;
    }
    FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                 "[packed = true] can only be specified for repeated primitive fields.");
  }
LAB_006a990c:
  if (((*(long *)(param_2 + 0x20) != 0) &&
      (puVar12 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x20), puVar12 != PTR_PTR_007a33b0)) &&
     (puVar12[0x48] != '\0')) {
    if (((byte)param_2[1] >> 3 & 1) == 0) {
      lVar13 = *(long *)(param_2 + 8);
      pcVar10 = "MessageSets cannot have fields, only extensions.";
      uVar11 = 0;
    }
    else {
      if ((param_2[1] & 0x60) == 0x20) {
        plVar8 = *(long **)(param_2 + 0x18);
        if ((plVar8 != (long *)0x0) &&
           (local_78 = PTR_thunk_FUN_006af330_007a32d0, local_80 = param_2, *plVar8 != -1)) {
          local_98 = &local_78;
          local_90 = &local_80;
          local_70 = &local_98;
          FUN_00710f84(plVar8,&local_70,FUN_00685640);
        }
        if (param_2[2] == '\v') goto LAB_006a99d4;
      }
      lVar13 = *(long *)(param_2 + 8);
      pcVar10 = "Extensions of MessageSets must be optional messages.";
      uVar11 = 2;
    }
    FUN_00695cf0(param_1,lVar13 + 0x18,param_3,uVar11,pcVar10);
  }
LAB_006a99d4:
  if ((((*(long *)(param_2 + 0x10) != 0) &&
       (puVar12 = *(undefined **)(*(long *)(param_2 + 0x10) + 0x78), puVar12 != PTR_PTR_007a3358))
      && ((*(int *)(puVar12 + 0xa0) == 3 && (*(long *)(param_2 + 0x20) != 0)))) &&
     (((lVar13 = *(long *)(*(long *)(param_2 + 0x20) + 0x10), lVar13 == 0 ||
       (puVar12 = *(undefined **)(lVar13 + 0x78), puVar12 == PTR_PTR_007a3358)) ||
      (*(int *)(puVar12 + 0xa0) != 3)))) {
    FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,3,
                 "Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a non-lite type to contain a lite type, but the reverse is allowed."
                );
  }
  plVar8 = *(long **)(param_2 + 0x18);
  if ((plVar8 != (long *)0x0) &&
     (local_78 = PTR_thunk_FUN_006af330_007a32d0, local_80 = param_2, *plVar8 != -1)) {
    local_98 = &local_78;
    local_90 = &local_80;
    local_70 = &local_98;
    FUN_00710f84(plVar8,&local_70,FUN_00685640);
  }
  if (((param_2[2] == '\v') &&
      (*(char *)(*(long *)(*(long *)(param_2 + 0x30) + 0x20) + 0x4b) != '\0')) &&
     (uVar9 = FUN_006aa920(param_1,param_2,param_3), (uVar9 & 1) == 0)) {
    FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                 "map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.");
  }
  FUN_006aac54(param_1,param_2,param_3);
  if (((param_2[1] ^ 0xff) & 0xc) == 0) {
    lVar13 = *(long *)(param_2 + 8);
    uVar9 = (ulong)((byte)param_2[3] >> 4) & 7;
    pbVar16 = (byte *)(lVar13 + uVar9 * 0x18);
    FUN_006aadec(&local_98,lVar13);
    ppuVar5 = local_98;
    bVar3 = *pbVar16;
    ppuVar15 = (undefined **)(ulong)(bVar3 >> 1);
    ppuVar1 = ppuVar15;
    if ((bVar3 & 1) != 0) {
      ppuVar1 = *(undefined ***)(pbVar16 + 8);
    }
    ppuVar2 = (undefined **)((ulong)local_98 >> 1 & 0x7f);
    if (((ulong)local_98 & 1) != 0) {
      ppuVar2 = local_90;
    }
    if (ppuVar1 == ppuVar2) {
      pcVar10 = local_88;
      if (((ulong)local_98 & 1) == 0) {
        pcVar10 = (char *)((long)&local_98 + 1);
      }
      if ((bVar3 & 1) == 0) {
        if (bVar3 < 2) {
          bVar6 = false;
        }
        else {
          pcVar14 = (char *)(lVar13 + uVar9 * 0x18);
          do {
            ppuVar15 = (undefined **)((long)ppuVar15 + -1);
            pcVar14 = pcVar14 + 1;
            bVar6 = *pcVar14 != *pcVar10;
            if (bVar6) break;
            pcVar10 = pcVar10 + 1;
          } while (ppuVar15 != (undefined **)0x0);
        }
      }
      else {
        iVar7 = memcmp(*(void **)(pbVar16 + 0x10),pcVar10,(size_t)*(undefined ***)(pbVar16 + 8));
        bVar6 = iVar7 != 0;
      }
    }
    else {
      bVar6 = true;
    }
    if (((ulong)ppuVar5 & 1) != 0) {
      free(local_88);
    }
    if (bVar6) {
      FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,7,
                   "option json_name is not allowed on extension fields.");
    }
  }
LAB_006a9bb8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006a9c20  FUN_006a9c20 =====

void FUN_006a9c20(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_2 + 4)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_006a9d64(param_1,*(long *)(param_2 + 0x70) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while (lVar4 < *(int *)(param_2 + 4));
  }
  if (0 < *(int *)(param_2 + 0x34)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_006aa310(param_1,*(long *)(param_2 + 0x58) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x88;
    } while (lVar4 < *(int *)(param_2 + 0x34));
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x60) + lVar3;
      if ((0 < *(int *)(lVar1 + 4)) && (*(int *)(*(long *)(lVar1 + 0x28) + 4) != 0)) {
        FUN_00695cf0(param_1,*(long *)(*(long *)(param_2 + 0x60) + lVar3 + 8) + 0x18,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x58) + lVar4 * 8 + 8) + 0x28) + 8),1
                     ,"The first enum value must be zero in proto3.");
        iVar2 = *(int *)(param_2 + 0x38);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while (lVar4 < iVar2);
  }
  return;
}


// ===== 006a9d64  FUN_006a9d64 =====

/* WARNING: Removing unreachable block (ram,0x006a9f34) */
/* WARNING: Type propagation algorithm not settling */

void FUN_006a9d64(undefined8 param_1,undefined8 *******param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  int iVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *puVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******local_e8 [2];
  void *local_d8;
  undefined8 *******local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 *******local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 *******local_90;
  undefined8 *******pppppppuStack_88;
  void *local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  undefined8 *******pppppppuStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
LAB_006a9dd8:
    bVar2 = *(byte *)((long)param_2 + 1);
    if ((bVar2 & 0x60) != 0x40) goto LAB_006a9de8;
LAB_006a9ec0:
    FUN_00695cf0(param_1,param_2[1] + 3,param_3,2,"Required fields are not allowed in proto3.");
    if (((ulong)*param_2 & 0x100) == 0) goto LAB_006a9dec;
LAB_006a9ee8:
    FUN_00695cf0(param_1,param_2[1] + 3,param_3,4,
                 "Explicit default values are not allowed in proto3.");
    ppppppuVar8 = param_2[3];
    if (ppppppuVar8 != (undefined8 ******)0x0) goto LAB_006a9dfc;
LAB_006a9f18:
    cVar3 = *(char *)((long)param_2 + 2);
    if (cVar3 != '\x0e') goto LAB_006aa170;
    ppppppuVar8 = (undefined8 ******)0x0;
    pppppppuVar12 = (undefined8 *******)PTR_thunk_FUN_006af330_007a32d0;
LAB_006a9f44:
    ppppppuVar10 = param_2[6];
    if (ppppppuVar10 == (undefined8 ******)0x0) goto LAB_006aa130;
    if (ppppppuVar8 != (undefined8 ******)0x0) {
      local_d0 = param_2;
      if (*ppppppuVar8 != (undefined8 *****)0xffffffffffffffff) {
        pppppppuStack_88 = &local_d0;
        local_b0 = &local_90;
        local_90 = pppppppuVar12;
        FUN_00710f84(ppppppuVar8,&local_b0,FUN_006bd98c);
      }
      ppppppuVar10 = param_2[6];
      ppppppuVar8 = param_2[3];
      if (*(char *)((long)ppppppuVar10[2] + 3) != '\x03') {
        if (ppppppuVar8 != (undefined8 ******)0x0) {
          local_d0 = param_2;
          if (*ppppppuVar8 != (undefined8 *****)0xffffffffffffffff) {
            pppppppuStack_88 = &local_d0;
            local_b0 = &local_90;
            local_90 = pppppppuVar12;
            FUN_00710f84(ppppppuVar8,&local_b0,FUN_006bd98c);
          }
          ppppppuVar10 = param_2[6];
          ppppppuVar8 = param_2[3];
        }
        if (*(char *)((long)ppppppuVar10[2] + 3) != '\0') {
          ppppppuVar13 = param_2[1];
          if (ppppppuVar8 != (undefined8 ******)0x0) {
            local_78 = param_2;
            if (*ppppppuVar8 != (undefined8 *****)0xffffffffffffffff) {
              pppppppuStack_60 = &local_78;
              local_70 = &local_68;
              local_68 = pppppppuVar12;
              FUN_00710f84(ppppppuVar8,&local_70,FUN_006bd98c);
            }
            ppppppuVar10 = param_2[6];
          }
          goto LAB_006aa040;
        }
      }
      goto LAB_006aa130;
    }
    if ((*(char *)((long)ppppppuVar10[2] + 3) != '\x03') &&
       (*(char *)((long)ppppppuVar10[2] + 3) != '\0')) {
      ppppppuVar13 = param_2[1];
LAB_006aa040:
      FUN_00714534(local_e8,"Enum type \"",ppppppuVar10[1] + 3);
                    /* try { // try from 006aa058 to 006aa067 has its CatchHandler @ 006aa2e8 */
      puVar9 = (undefined8 *)FUN_00713bdc(local_e8,"\" is not a proto3 enum, but is used in \"");
      local_c0 = (void *)puVar9[2];
      uStack_c8 = puVar9[1];
      local_d0 = (undefined8 *******)*puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      pppppuVar11 = param_2[4][1];
      ppppuVar1 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar11 + 3) >> 1);
      ppppuVar5 = (undefined8 ****)((long)pppppuVar11 + 0x19);
      if ((*(byte *)(pppppuVar11 + 3) & 1) != 0) {
        ppppuVar1 = pppppuVar11[4];
        ppppuVar5 = pppppuVar11[5];
      }
                    /* try { // try from 006aa0a4 to 006aa0ab has its CatchHandler @ 006aa2c8 */
      puVar9 = (undefined8 *)FUN_0071302c(&local_d0,ppppuVar5,ppppuVar1);
      local_a0 = (void *)puVar9[2];
      uStack_a8 = puVar9[1];
      local_b0 = (undefined8 *******)*puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 006aa0c4 to 006aa0d3 has its CatchHandler @ 006aa2a8 */
      puVar9 = (undefined8 *)FUN_00713bdc(&local_b0,"\" which is a proto3 message type.");
      local_80 = (void *)puVar9[2];
      pppppppuStack_88 = (undefined8 *******)puVar9[1];
      local_90 = (undefined8 *******)*puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 006aa0ec to 006aa103 has its CatchHandler @ 006aa258 */
      FUN_00695b70(param_1,ppppppuVar13 + 3,param_3,2,&local_90);
      if (((ulong)local_90 & 1) != 0) {
        free(local_80);
      }
      if (((ulong)local_b0 & 1) != 0) {
        free(local_a0);
      }
      if (((ulong)local_d0 & 1) != 0) {
        free(local_c0);
      }
      if (((ulong)local_e8[0] & 1) != 0) {
        free(local_d8);
      }
      ppppppuVar8 = param_2[3];
      goto LAB_006aa130;
    }
  }
  else {
    pppppuVar11 = param_2[4][1];
    if (((DAT_007aeb78 & 1) == 0) && (iVar6 = FUN_00739c1c(&DAT_007aeb78), iVar6 != 0)) {
                    /* try { // try from 006aa208 to 006aa21f has its CatchHandler @ 006aa234 */
      lVar7 = FUN_006b3da4();
      FUN_0066ee94(FUN_006b4150,lVar7);
      DAT_007aeb70 = lVar7;
      FUN_00739d60(&DAT_007aeb78);
    }
    lVar7 = FUN_006b42f0(DAT_007aeb70,pppppuVar11 + 3);
    if (DAT_007aeb70 + 8 != lVar7) goto LAB_006a9dd8;
    FUN_00695cf0(param_1,param_2[1] + 3,param_3,3,
                 "Extensions in proto3 are only allowed for defining options.");
    bVar2 = *(byte *)((long)param_2 + 1);
    if ((bVar2 & 0x60) == 0x40) goto LAB_006a9ec0;
LAB_006a9de8:
    if ((bVar2 & 1) != 0) goto LAB_006a9ee8;
LAB_006a9dec:
    ppppppuVar8 = param_2[3];
    if (ppppppuVar8 == (undefined8 ******)0x0) goto LAB_006a9f18;
LAB_006a9dfc:
    pppppppuVar12 = (undefined8 *******)PTR_thunk_FUN_006af330_007a32d0;
    local_d0 = (undefined8 *******)PTR_thunk_FUN_006af330_007a32d0;
    local_e8[0] = param_2;
    if (*ppppppuVar8 != (undefined8 *****)0xffffffffffffffff) {
      local_90 = &local_d0;
      pppppppuStack_88 = local_e8;
      local_b0 = &local_90;
      FUN_00710f84(ppppppuVar8,&local_b0,FUN_00685640);
    }
    ppppppuVar8 = param_2[3];
    if (*(char *)((long)param_2 + 2) == '\x0e') {
      if (ppppppuVar8 != (undefined8 ******)0x0) {
        local_d0 = param_2;
        if (*ppppppuVar8 != (undefined8 *****)0xffffffffffffffff) {
          pppppppuStack_88 = &local_d0;
          local_b0 = &local_90;
          local_90 = pppppppuVar12;
          FUN_00710f84(ppppppuVar8,&local_b0,FUN_006bd98c);
        }
        ppppppuVar8 = param_2[3];
        if (*(char *)((long)param_2 + 2) != '\x0e') goto LAB_006aa130;
      }
      goto LAB_006a9f44;
    }
LAB_006aa130:
    if ((ppppppuVar8 != (undefined8 ******)0x0) &&
       (local_e8[0] = param_2, local_d0 = pppppppuVar12,
       *ppppppuVar8 != (undefined8 *****)0xffffffffffffffff)) {
      local_90 = &local_d0;
      pppppppuStack_88 = local_e8;
      local_b0 = &local_90;
      FUN_00710f84(ppppppuVar8,&local_b0,FUN_00685640);
    }
  }
  cVar3 = *(char *)((long)param_2 + 2);
LAB_006aa170:
  if (cVar3 == '\n') {
    FUN_00695cf0(param_1,param_2[1] + 3,param_3,2,"Groups are not supported in proto3 syntax.");
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006aa310  FUN_006aa310 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006aa310(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  byte local_148 [16];
  void *local_138;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong *local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  ulong *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (0 < *(int *)(param_2 + 0x70)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_006aa310(param_1,*(long *)(param_2 + 0x38) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar11 * 8 + 8));
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x88;
    } while (lVar11 < *(int *)(param_2 + 0x70));
  }
  iVar8 = *(int *)(param_2 + 0x74);
  if (0 < iVar8) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar12 = *(long *)(param_2 + 0x40) + lVar10;
      if ((0 < *(int *)(lVar12 + 4)) && (*(int *)(*(long *)(lVar12 + 0x28) + 4) != 0)) {
        FUN_00695cf0(param_1,*(long *)(*(long *)(param_2 + 0x40) + lVar10 + 8) + 0x18,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x58) + lVar11 * 8 + 8) + 0x28) + 8),
                     1,"The first enum value must be zero in proto3.");
        iVar8 = *(int *)(param_2 + 0x74);
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x48;
    } while (lVar11 < iVar8);
  }
  if (0 < *(int *)(param_2 + 4)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_006a9d64(param_1,*(long *)(param_2 + 0x28) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar11 * 8 + 8));
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x48;
    } while (lVar11 < *(int *)(param_2 + 4));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_006a9d64(param_1,*(long *)(param_2 + 0x50) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar11 * 8 + 8));
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x48;
    } while (lVar11 < *(int *)(param_2 + 0x7c));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,
                 *(undefined8 *)(*(long *)(param_3 + 0x70) + 8),1,
                 "Extension ranges are not allowed in proto3.");
  }
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,0,
                 "MessageSet is not supported in proto3.");
  }
  local_90 = 0;
  uStack_88 = 0;
  local_98 = &local_90;
  if (*(int *)(param_2 + 4) < 1) {
    FUN_006bcb24(&local_98,0);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return;
    }
  }
  else {
    lVar11 = 0;
    do {
      pbVar9 = *(byte **)(*(long *)(param_2 + 0x28) + lVar11 * 0x48 + 8);
      local_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = 0;
      uVar2 = *(ulong *)(pbVar9 + 8);
      pbVar3 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar3 = pbVar9 + 1;
        uVar2 = (ulong)(*pbVar9 >> 1);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        bVar4 = *pbVar3;
        if (bVar4 != 0x5f) {
          bVar1 = bVar4 | 0x20;
          if (0x19 < bVar4 - 0x41) {
            bVar1 = bVar4;
          }
                    /* try { // try from 006aa700 to 006aa707 has its CatchHandler @ 006aa8e0 */
          FUN_007132e8(&local_b0,bVar1);
        }
        pbVar3 = pbVar3 + 1;
      }
                    /* try { // try from 006aa574 to 006aa57f has its CatchHandler @ 006aa8a0 */
      puVar6 = (undefined8 *)FUN_006bcb74(&local_98,&local_b0);
      if (&local_90 == puVar6) {
        lVar12 = *(long *)(param_2 + 0x28);
                    /* try { // try from 006aa714 to 006aa72b has its CatchHandler @ 006aa7fc */
        local_d0 = &local_b0;
        lVar10 = FUN_006bcc9c(&local_98,&local_b0,&DAT_0021094f,&local_d0,&local_f0);
        *(long *)(lVar10 + 0x38) = lVar12 + lVar11 * 0x48;
      }
      else {
        lVar12 = *(long *)(param_2 + 8);
        uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar11 * 8 + 8);
                    /* try { // try from 006aa5a8 to 006aa5b7 has its CatchHandler @ 006aa86c */
        FUN_00714534(local_148,"The JSON camel-case name of field \"",
                     *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar11 * 0x48 + 8));
                    /* try { // try from 006aa5b8 to 006aa5c7 has its CatchHandler @ 006aa800 */
        puVar7 = (ulong *)FUN_00713bdc(local_148,"\" conflicts with field \"");
        local_120 = (void *)puVar7[2];
        uStack_128 = puVar7[1];
        local_130 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006aa5e4 to 006aa623 has its CatchHandler @ 006aa8b0 */
        local_78 = &local_b0;
        lVar10 = FUN_006bcc9c(&local_98,&local_b0,&DAT_0021094f,&local_78,&uStack_79);
        pbVar9 = *(byte **)(*(long *)(lVar10 + 0x38) + 8);
        uVar2 = *(ulong *)(pbVar9 + 8);
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar3 = pbVar9 + 1;
          uVar2 = (ulong)(*pbVar9 >> 1);
        }
        puVar7 = (ulong *)FUN_0071302c(&local_130,pbVar3,uVar2);
        local_100 = (void *)puVar7[2];
        uStack_108 = puVar7[1];
        local_110 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006aa63c to 006aa64b has its CatchHandler @ 006aa85c */
        puVar7 = (ulong *)FUN_00713bdc(&local_110,"\". This is not ");
        local_e0 = (void *)puVar7[2];
        uStack_e8 = puVar7[1];
        local_f0 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006aa664 to 006aa673 has its CatchHandler @ 006aa870 */
        puVar6 = (undefined8 *)FUN_00713bdc(&local_f0,"allowed in proto3.");
        local_c0 = (void *)puVar6[2];
        uStack_c8 = puVar6[1];
        local_d0 = (ulong *)*puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 006aa68c to 006aa6a3 has its CatchHandler @ 006aa810 */
        FUN_00695b70(param_1,lVar12 + 0x18,uVar13,0,&local_d0);
        if (((ulong)local_d0 & 1) != 0) {
          free(local_c0);
        }
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
        if ((local_130 & 1) != 0) {
          free(local_120);
        }
        if ((local_148[0] & 1) != 0) {
          free(local_138);
        }
      }
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 4));
    FUN_006bcb24(&local_98,local_90);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006aa920  FUN_006aa920 =====

void FUN_006aa920(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  size_t __n;
  long *plVar11;
  long lVar12;
  byte *__s1;
  undefined8 uVar13;
  byte *pbVar14;
  undefined **local_98 [2];
  void *local_88;
  undefined *local_80;
  long *plStack_78;
  void *local_70;
  long local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar11 = *(long **)(param_2 + 0x18);
  if ((plVar11 != (long *)0x0) && (local_60 = param_2, *plVar11 != -1)) {
    plStack_78 = &local_60;
    local_80 = PTR_thunk_FUN_006af330_007a32d0;
    local_98[0] = &local_80;
    FUN_00710f84(plVar11,local_98,FUN_006bd98c);
  }
  lVar12 = *(long *)(param_2 + 0x30);
  if ((*(byte *)(param_2 + 2) & 0xfe) != 10) {
    lVar12 = 0;
  }
  if (((((*(int *)(lVar12 + 0x7c) == 0) && (((*(byte *)(param_2 + 1) ^ 0xff) & 0x60) == 0)) &&
       (*(int *)(lVar12 + 0x78) == 0)) &&
      ((*(int *)(lVar12 + 0x70) == 0 && (*(int *)(lVar12 + 0x74) == 0)))) &&
     (*(int *)(lVar12 + 4) == 2)) {
    uVar13 = *(undefined8 *)(lVar12 + 8);
    FUN_006aaebc(local_98,*(undefined8 *)(param_2 + 8),0);
                    /* try { // try from 006aa9fc to 006aaa0b has its CatchHandler @ 006aac28 */
    puVar9 = (undefined8 *)FUN_00713bdc(local_98,"Entry");
    local_70 = (void *)puVar9[2];
    plStack_78 = (long *)puVar9[1];
    local_80 = (undefined *)*puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    uVar10 = FUN_006a5330(uVar13,&local_80);
    if ((uVar10 & 1) == 0) {
      bVar7 = *(long *)(param_2 + 0x20) != *(long *)(lVar12 + 0x18);
    }
    else {
      bVar7 = true;
    }
    if (((ulong)local_80 & 1) != 0) {
      free(local_70);
    }
    if (((ulong)local_98[0] & 1) != 0) {
      free(local_88);
    }
    if (!bVar7) {
      bVar7 = *(char *)(*(long *)(lVar12 + 0x20) + 0x4b) != '\0';
      lVar1 = 0;
      if (bVar7) {
        lVar1 = *(long *)(lVar12 + 0x28);
      }
      lVar2 = 0;
      if (bVar7) {
        lVar2 = *(long *)(lVar12 + 0x28) + 0x48;
      }
      if (((*(byte *)(lVar1 + 1) & 0x60) == 0x20) && (*(int *)(lVar1 + 4) == 1)) {
        pbVar14 = *(byte **)(lVar1 + 8);
        __n = strlen("key");
        bVar4 = *pbVar14;
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar14 + 8);
        }
        if (__n == sVar3) {
          if (__n == 0xffffffffffffffff) {
            uVar13 = 0xffffffffffffffff;
            if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 006aac1c to 006aac23 has its CatchHandler @ 006aac24 */
                    /* WARNING: Subroutine does not return */
              FUN_0030b8f4(pbVar14);
            }
            goto LAB_006aac08;
          }
          __s1 = *(byte **)(pbVar14 + 0x10);
          if ((bVar4 & 1) == 0) {
            __s1 = pbVar14 + 1;
          }
          iVar8 = memcmp(__s1,&DAT_001e2b47,__n);
          if ((((iVar8 == 0) && ((*(byte *)(lVar2 + 1) & 0x60) == 0x20)) &&
              (*(int *)(lVar2 + 4) == 2)) &&
             (uVar10 = FUN_006aafd4(*(undefined8 *)(lVar2 + 8),"value"), (uVar10 & 1) == 0)) {
            iVar8 = FUN_0068c8b4(lVar1);
            uVar5 = iVar8 - 1;
            if ((uVar5 < 0xe) && ((0x2e03U >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
              FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                           &DAT_00210950 + *(int *)(&DAT_00210950 + (ulong)uVar5 * 4));
            }
            iVar8 = FUN_0068c8b4(lVar2);
            if ((iVar8 == 0xe) &&
               (lVar12 = FUN_0068f648(lVar2), *(int *)(*(long *)(lVar12 + 0x28) + 4) != 0)) {
              FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                           "Enum value in map must define 0 as the first value.");
            }
            uVar13 = 1;
            if (*(long *)(lVar6 + 0x28) == local_58) {
              return;
            }
            goto LAB_006aac08;
          }
        }
      }
    }
  }
  uVar13 = 0;
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_006aac08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


// ===== 006aac54  FUN_006aac54 =====

void FUN_006aac54(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code **local_78;
  long *plStack_70;
  void *local_68;
  long local_60;
  code *local_58;
  code ***local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(*(long *)(param_2 + 0x38) + 0x4c);
  if (uVar1 != 0) {
    plVar4 = *(long **)(param_2 + 0x18);
    if ((plVar4 != (long *)0x0) &&
       (local_58 = thunk_FUN_006af330, local_60 = param_2, *plVar4 != -1)) {
      local_78 = &local_58;
      plStack_70 = &local_60;
      local_50 = &local_78;
      FUN_00710f84(plVar4,&local_50,FUN_00685640);
    }
    if ((0x12 < *(byte *)(param_2 + 2)) ||
       ((1 << (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 0x50058U) == 0)) {
      FUN_00695cf0(param_1,*(long *)(param_2 + 8) + 0x18,param_3,2,
                   "jstype is only allowed on int64, uint64, sint64, fixed64 or sfixed64 fields.");
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
      goto LAB_006aadbc;
    }
    if (2 < uVar1) {
      lVar5 = *(long *)(param_2 + 8);
      lVar3 = FUN_006bdad8();
      FUN_00714534(&local_78,"Illegal jstype for int64, uint64, sint64, fixed64 or sfixed64 field: "
                   ,*(undefined8 *)(*(long *)(lVar3 + 0x28) + (long)(int)uVar1 * 0x20 + 8));
                    /* try { // try from 006aad44 to 006aad5b has its CatchHandler @ 006aadc0 */
      FUN_00695b70(param_1,lVar5 + 0x18,param_3,2,&local_78);
      if (((ulong)local_78 & 1) != 0) {
        free(local_68);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006aadbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006aadec  FUN_006aadec =====

void FUN_006aadec(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  bVar2 = *param_2;
  uVar5 = *(ulong *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar5;
  }
                    /* try { // try from 006aae20 to 006aae23 has its CatchHandler @ 006aae9c */
  FUN_00712ea8(param_1,uVar7);
  uVar7 = *(ulong *)(param_2 + 8);
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
  }
  if (uVar7 != 0) {
    bVar3 = false;
    do {
      bVar2 = *pbVar6;
      uVar4 = (uint)bVar2;
      if (uVar4 != 0x5f) {
        uVar1 = bVar2 - 0x20;
        if (!(bool)(bVar3 & uVar4 - 0x61 < 0x1a)) {
          uVar1 = (uint)bVar2;
        }
                    /* try { // try from 006aae80 to 006aae87 has its CatchHandler @ 006aaea0 */
        FUN_007132e8(param_1,uVar1);
      }
      uVar7 = uVar7 - 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = uVar4 == 0x5f;
    } while (uVar7 != 0);
  }
  return;
}


// ===== 006aaebc  FUN_006aaebc =====

void FUN_006aaebc(byte *param_1,byte *param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  bVar4 = *param_2;
  uVar7 = *(ulong *)(param_2 + 8);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar8 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar8 = uVar7;
  }
                    /* try { // try from 006aaef8 to 006aaefb has its CatchHandler @ 006aafb4 */
  FUN_00712ea8(param_1,uVar8);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
  if (uVar8 != 0) {
    bVar4 = param_3 ^ 1;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)bVar2;
      if (uVar6 != 0x5f) {
        uVar1 = bVar2 - 0x20;
        if ((bVar4 & uVar6 - 0x61 < 0x1a) == 0) {
          uVar1 = (uint)bVar2;
        }
                    /* try { // try from 006aaf58 to 006aaf5f has its CatchHandler @ 006aafb8 */
        FUN_007132e8(param_1,uVar1);
      }
      uVar8 = uVar8 - 1;
      pbVar5 = pbVar5 + 1;
      bVar4 = uVar6 == 0x5f;
    } while (uVar8 != 0);
  }
  if ((param_3 & 1) != 0) {
    bVar3 = (*param_1 & 1) != 0;
    uVar8 = (ulong)(*param_1 >> 1);
    if (bVar3) {
      uVar8 = *(ulong *)(param_1 + 8);
    }
    if (uVar8 != 0) {
      pbVar5 = *(byte **)(param_1 + 0x10);
      if (!bVar3) {
        pbVar5 = param_1 + 1;
      }
      bVar2 = *pbVar5;
      bVar4 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        bVar4 = bVar2;
      }
      *pbVar5 = bVar4;
    }
  }
  return;
}


// ===== 006aafd4  FUN_006aafd4 =====

bool FUN_006aafd4(byte *param_1,char *param_2)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t __n;
  byte *__s1;
  
  __n = strlen(param_2);
  bVar2 = *param_1;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    if (__n != 0xffffffffffffffff) {
      __s1 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = param_1 + 1;
      }
      iVar3 = memcmp(__s1,param_2,__n);
      return iVar3 != 0;
    }
                    /* try { // try from 006ab050 to 006ab057 has its CatchHandler @ 006ab058 */
                    /* WARNING: Subroutine does not return */
    FUN_0030b8f4(param_1);
  }
  return true;
}


// ===== 006ab05c  FUN_006ab05c =====

void FUN_006ab05c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_89;
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[3] = (long)(param_1 + 4);
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = (long)(param_1 + 7);
  param_1[8] = 0;
                    /* try { // try from 006ab0b4 to 006ab0bb has its CatchHandler @ 006ab150 */
  FUN_006db6ec(param_1 + 9);
  if (*param_1 == 0) {
                    /* try { // try from 006ab0c4 to 006ab0db has its CatchHandler @ 006ab140 */
    FUN_00675e64(auStack_88,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1c6a);
                    /* try { // try from 006ab0dc to 006ab0ef has its CatchHandler @ 006ab130 */
    uVar2 = FUN_00675a58(auStack_88,"CHECK failed: builder_: ");
                    /* try { // try from 006ab0f0 to 006ab0f7 has its CatchHandler @ 006ab12c */
    FUN_00675ac0(&uStack_89,uVar2);
    FUN_00675e7c(auStack_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ab188  FUN_006ab188 =====

void FUN_006ab188(long param_1)

{
  FUN_006db720(param_1 + 0x48);
  FUN_006bd278(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  FUN_006bd218(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 006ab1c0  FUN_006ab1c0 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_006ab1c0(long *param_1,long *param_2,code *******param_3,long *param_4)

{
  int *piVar1;
  code ****ppppcVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  code *******pppppppcVar6;
  bool bVar7;
  int iVar8;
  size_t __n;
  long lVar9;
  code ******ppppppcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulong uVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte bVar17;
  undefined8 *puVar18;
  long lVar19;
  code ******ppppppcVar20;
  code *****pppppcVar21;
  long *plVar22;
  byte *pbVar23;
  code ******ppppppcVar24;
  undefined8 *__ptr;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  code ****ppppcVar28;
  code *******pppppppcVar29;
  code ******ppppppcVar30;
  long *plVar31;
  byte *pbVar32;
  void *pvVar33;
  code *******pppppppcVar34;
  undefined8 *puVar35;
  code ******ppppppcVar36;
  undefined1 *puVar37;
  undefined8 local_190;
  ulong local_188;
  void *local_180;
  code *******local_178 [2];
  void *local_168;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  code *******local_140;
  undefined8 uStack_138;
  void *local_130;
  code *******local_120;
  undefined8 uStack_118;
  void *local_110;
  code *******local_100;
  ulong *puStack_f8;
  void *local_f0;
  code ******local_e8;
  code ******local_e0;
  code ******local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined1 *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  code *******local_a0;
  code *******pppppppcStack_98;
  void *local_90;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1[2] + 0x20) == 0) {
    pppppppcVar34 = (code *******)strlen("Option must have a name.");
    if ((code *******)0xfffffffffffffff7 < pppppppcVar34) {
LAB_006ac5a0:
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_a0);
      }
      goto LAB_006ac9ec;
    }
    if (pppppppcVar34 < (code *******)0x17) {
      pvVar33 = (void *)((ulong)&local_a0 | 1);
      local_a0 = (code *******)CONCAT71(local_a0._1_7_,(char)((int)pppppppcVar34 << 1));
      if (pppppppcVar34 != (code *******)0x0) goto LAB_006ab364;
    }
    else {
      uVar14 = ((ulong)pppppppcVar34 & 0xfffffffffffffff8) + 8;
      if (((ulong)pppppppcVar34 | 7) != 0x17) {
        uVar14 = (ulong)pppppppcVar34 | 7;
      }
      pvVar33 = (void *)FUN_00759c3c(uVar14 + 1);
      local_a0 = (code *******)(uVar14 + 1 | 1);
      pppppppcStack_98 = pppppppcVar34;
      local_90 = pvVar33;
LAB_006ab364:
      memcpy(pvVar33,"Option must have a name.",(size_t)pppppppcVar34);
    }
    *(undefined1 *)((long)pvVar33 + (long)pppppppcVar34) = 0;
                    /* try { // try from 006ab384 to 006ab393 has its CatchHandler @ 006ac8e8 */
    FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
LAB_006ab4ac:
    if (((ulong)local_a0 & 1) != 0) {
      free(local_90);
    }
    pppppppcVar34 = (code *******)0x0;
  }
  else {
    pbVar32 = (byte *)(*(ulong *)(*(long *)(*(long *)(param_1[2] + 0x28) + 8) + 0x18) &
                      0xfffffffffffffffc);
    __n = strlen("uninterpreted_option");
    bVar17 = *pbVar32;
    sVar13 = (ulong)(bVar17 >> 1);
    if ((bVar17 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar32 + 8);
    }
    if (__n == sVar13) {
      if (__n == 0xffffffffffffffff) {
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006ac604 to 006ac60b has its CatchHandler @ 006ac8dc */
                    /* WARNING: Subroutine does not return */
          FUN_0030b8f4(pbVar32);
        }
        goto LAB_006ac9ec;
      }
      pbVar23 = *(byte **)(pbVar32 + 0x10);
      if ((bVar17 & 1) == 0) {
        pbVar23 = pbVar32 + 1;
      }
      iVar8 = memcmp(pbVar23,"uninterpreted_option",__n);
      if (iVar8 != 0) goto LAB_006ab26c;
      pppppppcVar34 =
           (code *******)strlen("Option must not use reserved name \"uninterpreted_option\".");
      if ((code *******)0xfffffffffffffff7 < pppppppcVar34) goto LAB_006ac5a0;
      if (pppppppcVar34 < (code *******)0x17) {
        pvVar33 = (void *)((ulong)&local_a0 | 1);
        local_a0 = (code *******)CONCAT71(local_a0._1_7_,(char)((int)pppppppcVar34 << 1));
        if (pppppppcVar34 != (code *******)0x0) goto LAB_006ab47c;
      }
      else {
        uVar14 = ((ulong)pppppppcVar34 & 0xfffffffffffffff8) + 8;
        if (((ulong)pppppppcVar34 | 7) != 0x17) {
          uVar14 = (ulong)pppppppcVar34 | 7;
        }
        pvVar33 = (void *)FUN_00759c3c(uVar14 + 1);
        local_a0 = (code *******)(uVar14 + 1 | 1);
        pppppppcStack_98 = pppppppcVar34;
        local_90 = pvVar33;
LAB_006ab47c:
        memcpy(pvVar33,"Option must not use reserved name \"uninterpreted_option\".",
               (size_t)pppppppcVar34);
      }
      *(undefined1 *)((long)pvVar33 + (long)pppppppcVar34) = 0;
                    /* try { // try from 006ab49c to 006ab4ab has its CatchHandler @ 006ac8d4 */
      FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
      goto LAB_006ab4ac;
    }
LAB_006ab26c:
    puVar35 = (undefined8 *)*param_1;
    lVar9 = (**(code **)(*param_2 + 0x80))();
    ppppppcVar10 = (code ******)FUN_0069689c(puVar35,*puVar35,*(long *)(lVar9 + 8) + 0x18,1);
    bVar17 = *(byte *)ppppppcVar10;
    ppppppcVar24 = (code ******)0x0;
    if (bVar17 < 5) {
      if (bVar17 < 3) {
        if ((bVar17 != 1) && (bVar17 != 2)) goto LAB_006ab410;
LAB_006ab3f4:
        ppppppcVar24 = (code ******)ppppppcVar10[2];
        if (ppppppcVar24 == (code ******)puVar35[10]) goto LAB_006ab4d4;
      }
      else {
        if (bVar17 == 3) goto LAB_006ab408;
        if (bVar17 == 4) goto LAB_006ab3f4;
LAB_006ab410:
        if (ppppppcVar24 == (code ******)puVar35[10]) goto LAB_006ab4d4;
      }
LAB_006ab41c:
      for (plVar22 = (long *)puVar35[0xd]; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        if ((code ******)plVar22[4] <= ppppppcVar24) {
          if (ppppppcVar24 <= (code ******)plVar22[4]) goto LAB_006ab4d4;
          plVar22 = plVar22 + 1;
        }
      }
    }
    else {
      if (bVar17 < 8) {
        if (bVar17 != 5) {
          if (bVar17 == 7) goto LAB_006ab3f4;
          goto LAB_006ab410;
        }
LAB_006ab408:
        ppppppcVar24 = (code ******)ppppppcVar10[2][2];
        goto LAB_006ab410;
      }
      if (bVar17 == 8) goto LAB_006ab408;
      if (bVar17 == 9) {
        ppppppcVar24 = ppppppcVar10;
        if (ppppppcVar10 != (code ******)puVar35[10]) goto LAB_006ab41c;
      }
      else {
        if (bVar17 != 10) goto LAB_006ab410;
        ppppppcVar24 = (code ******)ppppppcVar10[1];
        if (ppppppcVar24 != (code ******)puVar35[10]) goto LAB_006ab41c;
      }
LAB_006ab4d4:
      puVar25 = puVar35 + 0x15;
      puVar11 = (undefined8 *)*puVar25;
      __ptr = puVar25;
      puVar27 = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        do {
          lVar9 = 8;
          if (ppppppcVar24 <= (code ******)puVar27[4]) {
            lVar9 = 0;
            __ptr = puVar27;
          }
          puVar18 = (undefined8 *)((long)puVar27 + lVar9);
          puVar27 = (undefined8 *)*puVar18;
        } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
        if ((__ptr != puVar25) && ((code ******)__ptr[4] <= ppppppcVar24)) {
          puVar27 = (undefined8 *)__ptr[1];
          puVar25 = __ptr;
          if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
            do {
              puVar18 = (undefined8 *)puVar25[2];
              bVar7 = (undefined8 *)*puVar18 != puVar25;
              puVar25 = puVar18;
            } while (bVar7);
          }
          else {
            do {
              puVar18 = puVar27;
              puVar27 = (undefined8 *)*puVar18;
            } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
          }
          if ((undefined8 *)puVar35[0x14] == __ptr) {
            puVar35[0x14] = puVar18;
          }
          puVar35[0x16] = puVar35[0x16] + -1;
          FUN_00328dd0(puVar11,__ptr);
          free(__ptr);
          bVar17 = *(byte *)ppppppcVar10;
        }
      }
    }
    if ((bVar17 != 1) &&
       (ppppppcVar10 = (code ******)(**(code **)(*param_2 + 0x80))(),
       ppppppcVar10 == (code ******)0x0)) {
      FUN_00675e64(&local_a0,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                   ,0x1ce5);
                    /* try { // try from 006ab5b0 to 006ab5c3 has its CatchHandler @ 006ac8c4 */
      uVar12 = FUN_00675a58(&local_a0,"CHECK failed: options_descriptor: ");
                    /* try { // try from 006ab5c4 to 006ab5cb has its CatchHandler @ 006ac8c0 */
      FUN_00675ac0(&local_b8,uVar12);
      FUN_00675e7c(&local_a0);
      ppppppcVar10 = (code ******)0x0;
    }
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    sVar13 = strlen("");
    if (0xfffffffffffffff7 < sVar13) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006ac57c to 006ac583 has its CatchHandler @ 006ac91c */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_d0);
      }
      goto LAB_006ac9ec;
    }
    if (sVar13 < 0x17) {
      puVar37 = (undefined1 *)((ulong)&local_d0 | 1);
      local_d0 = CONCAT71(local_d0._1_7_,(char)((int)sVar13 << 1));
      if (sVar13 != 0) goto LAB_006ab890;
      *puVar37 = 0;
      pvVar33 = (void *)*param_4;
      sVar13 = param_4[1] - (long)pvVar33;
      if (sVar13 == 0) goto LAB_006ab8b8;
LAB_006ab62c:
      local_d8 = (code ******)0x0;
      local_e0 = (code ******)0x0;
      local_e8 = (code ******)0x0;
      if ((long)sVar13 < 0) {
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006ac5d0 to 006ac5d7 has its CatchHandler @ 006ac908 */
          FUN_004b6308(&local_e8);
LAB_006ac5d8:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006ac5ec to 006ac5ef has its CatchHandler @ 006ac924 */
            FUN_002f9ee0();
          }
        }
        goto LAB_006ac9ec;
      }
                    /* try { // try from 006ab630 to 006ab637 has its CatchHandler @ 006ac908 */
      local_e8 = (code ******)FUN_00759c3c(sVar13);
      ppppppcVar24 = (code ******)((long)local_e8 + sVar13);
      local_e0 = local_e8;
      local_d8 = ppppppcVar24;
      memcpy(local_e8,pvVar33,sVar13);
      local_e0 = ppppppcVar24;
      if (0 < *(int *)(param_1[2] + 0x20)) goto LAB_006ab8c8;
LAB_006ab664:
      pppppppcVar34 = (code *******)0x0;
    }
    else {
      uVar14 = (sVar13 & 0xfffffffffffffff8) + 8;
      if ((sVar13 | 7) != 0x17) {
        uVar14 = sVar13 | 7;
      }
                    /* try { // try from 006ab878 to 006ab87f has its CatchHandler @ 006ac91c */
      puVar37 = (undefined1 *)FUN_00759c3c(uVar14 + 1);
      local_d0 = uVar14 + 1 | 1;
      local_c8 = sVar13;
      local_c0 = puVar37;
LAB_006ab890:
      memset(puVar37,0,sVar13);
      puVar37[sVar13] = 0;
      pvVar33 = (void *)*param_4;
      sVar13 = param_4[1] - (long)pvVar33;
      if (sVar13 != 0) goto LAB_006ab62c;
LAB_006ab8b8:
      local_d8 = (code ******)0x0;
      local_e0 = (code ******)0x0;
      local_e8 = (code ******)0x0;
      if (*(int *)(param_1[2] + 0x20) < 1) goto LAB_006ab664;
LAB_006ab8c8:
      lVar9 = 1;
      do {
        lVar19 = *param_1;
        if ((*(byte *)(lVar19 + 0xd8) & 1) == 0) {
          *(undefined2 *)(lVar19 + 0xd8) = 0;
        }
        else {
          **(undefined1 **)(lVar19 + 0xe8) = 0;
          *(undefined8 *)(lVar19 + 0xe0) = 0;
        }
        lVar19 = *(long *)(*(long *)(param_1[2] + 0x28) + lVar9 * 8);
        uVar14 = local_d0 >> 1 & 0x7f;
        if ((local_d0 & 1) != 0) {
          uVar14 = local_c8;
        }
        uVar26 = *(ulong *)(lVar19 + 0x18);
        if (uVar14 != 0) {
                    /* try { // try from 006ab94c to 006ab95b has its CatchHandler @ 006ac998 */
          FUN_00713bdc(&local_d0,&DAT_001c773b);
          lVar19 = *(long *)(*(long *)(param_1[2] + 0x28) + lVar9 * 8);
        }
        pbVar32 = (byte *)(uVar26 & 0xfffffffffffffffc);
        if (*(char *)(lVar19 + 0x20) != '\0') {
                    /* try { // try from 006ab974 to 006ab987 has its CatchHandler @ 006ac974 */
          FUN_00714534(&local_100,&DAT_001d8d1c,pbVar32);
                    /* try { // try from 006ab988 to 006ab997 has its CatchHandler @ 006ac95c */
          puVar35 = (undefined8 *)FUN_00713bdc(&local_100,&DAT_001d047f);
          local_90 = (void *)puVar35[2];
          pppppppcStack_98 = (code *******)puVar35[1];
          local_a0 = (code *******)*puVar35;
          puVar35[1] = 0;
          puVar35[2] = 0;
          *puVar35 = 0;
          pppppppcVar34 = (code *******)((ulong)local_a0 >> 1 & 0x7f);
          pvVar33 = (void *)((ulong)&local_a0 | 1);
          if (((ulong)local_a0 & 1) != 0) {
            pppppppcVar34 = pppppppcStack_98;
            pvVar33 = local_90;
          }
                    /* try { // try from 006ab9cc to 006ab9d3 has its CatchHandler @ 006ac944 */
          FUN_0071302c(&local_d0,pvVar33,pppppppcVar34);
          if (((ulong)local_a0 & 1) != 0) {
            free(local_90);
          }
          if (((ulong)local_100 & 1) != 0) {
            free(local_f0);
          }
          plVar22 = (long *)*param_1;
                    /* try { // try from 006ab9f8 to 006aba4f has its CatchHandler @ 006ac994 */
          pppppppcVar34 = (code *******)FUN_00696e18(plVar22,pbVar32,param_1[1],0,1);
          cVar3 = *(char *)pppppppcVar34;
          if (cVar3 == '\0') {
            lVar19 = *plVar22;
            if (*(char *)(lVar19 + 0x2a) == '\0') goto LAB_006abd24;
            uVar14 = *(ulong *)(pbVar32 + 8);
            pbVar23 = *(byte **)(pbVar32 + 0x10);
            if ((*pbVar32 & 1) == 0) {
              pbVar23 = pbVar32 + 1;
              uVar14 = (ulong)(*pbVar32 >> 1);
            }
            if ((long)uVar14 < 0) {
                    /* try { // try from 006abd08 to 006abd1f has its CatchHandler @ 006ac994 */
              FUN_00676318(uVar14,"string length exceeds max size");
            }
            pppppppcVar34 = (code *******)FUN_006972c8(lVar19,pbVar23,uVar14,0);
            cVar3 = *(char *)pppppppcVar34;
          }
          if (cVar3 == '\x02') goto LAB_006abad4;
LAB_006abd24:
          plVar22 = (long *)*param_1;
          if (*(char *)(*plVar22 + 0x2a) != '\0') goto LAB_006abfb0;
          uVar14 = (ulong)(*(byte *)(plVar22 + 0x1b) >> 1);
          if ((*(byte *)(plVar22 + 0x1b) & 1) != 0) {
            uVar14 = plVar22[0x1c];
          }
          if (uVar14 == 0) {
                    /* try { // try from 006ac1f0 to 006ac203 has its CatchHandler @ 006ac6e8 */
            FUN_00714534(&local_120,"Option \"",&local_d0);
                    /* try { // try from 006ac204 to 006ac213 has its CatchHandler @ 006ac6d0 */
            puVar35 = (undefined8 *)FUN_00713bdc(&local_120,"\" unknown. Ensure that your proto");
            local_f0 = (void *)puVar35[2];
            puStack_f8 = (ulong *)puVar35[1];
            local_100 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac22c to 006ac23b has its CatchHandler @ 006ac6b0 */
            puVar35 = (undefined8 *)
                      FUN_00713bdc(&local_100,
                                   " definition file imports the proto which defines the option.");
            local_90 = (void *)puVar35[2];
            pppppppcStack_98 = (code *******)puVar35[1];
            local_a0 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac25c to 006ac26b has its CatchHandler @ 006ac67c */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
            if (((ulong)local_a0 & 1) != 0) {
              free(local_90);
            }
            local_168 = local_110;
            pppppppcVar34 = local_120;
            if (((ulong)local_100 & 1) != 0) {
              free(local_f0);
              local_168 = local_110;
              pppppppcVar34 = local_120;
            }
          }
          else {
                    /* try { // try from 006abd4c to 006abd5f has its CatchHandler @ 006ac7b8 */
            FUN_00714534(local_178,"Option \"",&local_d0);
                    /* try { // try from 006abd60 to 006abd6f has its CatchHandler @ 006ac7a8 */
            puVar16 = (ulong *)FUN_00713bdc(local_178,"\" is resolved to \"(");
            local_150 = (void *)puVar16[2];
            uStack_158 = puVar16[1];
            local_160 = *puVar16;
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
            lVar19 = *param_1;
            uVar14 = (ulong)(*(byte *)(lVar19 + 0xd8) >> 1);
            lVar9 = lVar19 + 0xd9;
            if ((*(byte *)(lVar19 + 0xd8) & 1) != 0) {
              uVar14 = *(ulong *)(lVar19 + 0xe0);
              lVar9 = *(long *)(lVar19 + 0xe8);
            }
                    /* try { // try from 006abda8 to 006abdaf has its CatchHandler @ 006ac798 */
            puVar35 = (undefined8 *)FUN_0071302c(&local_160,lVar9,uVar14);
            local_130 = (void *)puVar35[2];
            uStack_138 = puVar35[1];
            local_140 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006abdc8 to 006abdd7 has its CatchHandler @ 006ac788 */
            puVar35 = (undefined8 *)
                      FUN_00713bdc(&local_140,
                                   ")\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading \'.\'(i.e., \"(."
                                  );
            local_110 = (void *)puVar35[2];
            uStack_118 = puVar35[1];
            local_120 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
            uVar14 = local_d0 >> 1 & 0x7f;
            if ((local_d0 & 1) != 0) {
              uVar14 = local_c8;
            }
            if (uVar14 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006ac620 to 006ac643 has its CatchHandler @ 006ac870 */
                    /* WARNING: Subroutine does not return */
                FUN_0030b8f4(&local_190);
              }
              goto LAB_006ac9ec;
            }
            puVar37 = (undefined1 *)((ulong)&local_d0 | 2);
            uVar26 = uVar14 - 1;
            if ((local_d0 & 1) != 0) {
              puVar37 = local_c0 + 1;
            }
            if (0xfffffffffffffff7 < uVar26) {
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_190);
              }
              goto LAB_006ac9ec;
            }
            if (uVar14 < 0x18) {
              pvVar33 = (void *)((ulong)&local_190 | 1);
              local_190 = (code *******)CONCAT71(local_190._1_7_,(char)((int)uVar26 << 1));
              if (uVar26 != 0) goto LAB_006ac2b8;
            }
            else {
              uVar14 = (uVar26 & 0xfffffffffffffff8) + 8;
              if ((uVar26 | 7) != 0x17) {
                uVar14 = uVar26 | 7;
              }
                    /* try { // try from 006ac2a0 to 006ac2a7 has its CatchHandler @ 006ac870 */
              pvVar33 = (void *)FUN_00759c3c(uVar14 + 1);
              local_190 = (code *******)(uVar14 + 1 | 1);
              local_188 = uVar26;
              local_180 = pvVar33;
LAB_006ac2b8:
              memmove(pvVar33,puVar37,uVar26);
            }
            *(undefined1 *)((long)pvVar33 + uVar26) = 0;
            uVar14 = local_188;
            pvVar33 = local_180;
            if (((ulong)local_190 & 1) == 0) {
              uVar14 = (ulong)local_190 >> 1 & 0x7f;
              pvVar33 = (void *)((long)&local_190 + 1);
            }
                    /* try { // try from 006ac2e8 to 006ac2ef has its CatchHandler @ 006ac768 */
            puVar35 = (undefined8 *)FUN_0071302c(&local_120,pvVar33,uVar14);
            local_f0 = (void *)puVar35[2];
            puStack_f8 = (ulong *)puVar35[1];
            local_100 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac308 to 006ac317 has its CatchHandler @ 006ac748 */
            puVar35 = (undefined8 *)
                      FUN_00713bdc(&local_100,"\") to start from the outermost scope.");
            local_90 = (void *)puVar35[2];
            pppppppcStack_98 = (code *******)puVar35[1];
            local_a0 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac338 to 006ac347 has its CatchHandler @ 006ac6f4 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
            if (((ulong)local_a0 & 1) != 0) {
              free(local_90);
            }
            if (((ulong)local_100 & 1) != 0) {
              free(local_f0);
            }
            if (((ulong)local_190 & 1) != 0) {
              free(local_180);
            }
            if (((ulong)local_120 & 1) != 0) {
              free(local_110);
            }
            if (((ulong)local_140 & 1) != 0) {
              free(local_130);
            }
            pppppppcVar34 = local_178[0];
            if ((local_160 & 1) != 0) {
              free(local_150);
              pppppppcVar34 = local_178[0];
            }
          }
joined_r0x006ac280:
          if (((ulong)pppppppcVar34 & 1) != 0) {
            free(local_168);
          }
          goto LAB_006ac414;
        }
        uVar14 = *(ulong *)(pbVar32 + 8);
        pbVar23 = *(byte **)(pbVar32 + 0x10);
        if ((*pbVar32 & 1) == 0) {
          pbVar23 = pbVar32 + 1;
          uVar14 = (ulong)(*pbVar32 >> 1);
        }
                    /* try { // try from 006aba7c to 006ababb has its CatchHandler @ 006ac998 */
        FUN_0071302c(&local_d0,pbVar23,uVar14);
        ppppcVar28 = ppppppcVar10[2][0x10];
        pbVar23 = pbVar32 + 1;
        uVar14 = (ulong)(*pbVar32 >> 1);
        if ((*pbVar32 & 1) != 0) {
          pbVar23 = *(byte **)(pbVar32 + 0x10);
          uVar14 = *(ulong *)(pbVar32 + 8);
        }
        if ((long)uVar14 < 0) {
          FUN_00676318(uVar14,"string length exceeds max size");
        }
        pppppppcVar34 = (code *******)FUN_0068cc6c(ppppcVar28,ppppppcVar10,pbVar23,uVar14);
        if ((*(char *)pppppppcVar34 != '\x02') ||
           ((*(byte *)((long)pppppppcVar34 + 1) >> 3 & 1) != 0)) goto LAB_006abd24;
LAB_006abad4:
        ppppppcVar24 = local_e8;
        ppppppcVar20 = pppppppcVar34[4];
        if (ppppppcVar20 != ppppppcVar10) {
          if ((ppppppcVar20 == (code ******)0x0) || (((ulong)*ppppppcVar20 & 0x100) == 0)) {
                    /* try { // try from 006abed4 to 006abee7 has its CatchHandler @ 006ac868 */
            FUN_00714534(&local_140,"Option field \"",&local_d0);
                    /* try { // try from 006abee8 to 006abef7 has its CatchHandler @ 006ac850 */
            puVar35 = (undefined8 *)
                      FUN_00713bdc(&local_140,"\" is not a field or extension of message \"");
            local_110 = (void *)puVar35[2];
            uStack_118 = puVar35[1];
            local_120 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
            pppppcVar21 = ppppppcVar10[1];
            ppppcVar28 = pppppcVar21[1];
            ppppcVar2 = pppppcVar21[2];
            if ((*(byte *)pppppcVar21 & 1) == 0) {
              ppppcVar2 = (code ****)((long)pppppcVar21 + 1);
              ppppcVar28 = (code ****)(ulong)(*(byte *)pppppcVar21 >> 1);
            }
                    /* try { // try from 006abf2c to 006abf33 has its CatchHandler @ 006ac830 */
            puVar35 = (undefined8 *)FUN_0071302c(&local_120,ppppcVar2,ppppcVar28);
            local_f0 = (void *)puVar35[2];
            puStack_f8 = (ulong *)puVar35[1];
            local_100 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006abf4c to 006abf5b has its CatchHandler @ 006ac810 */
            puVar35 = (undefined8 *)FUN_00713bdc(&local_100,&DAT_001f097e);
            local_90 = (void *)puVar35[2];
            pppppppcStack_98 = (code *******)puVar35[1];
            local_a0 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006abf7c to 006abf8b has its CatchHandler @ 006ac7d4 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
            if (((ulong)local_a0 & 1) != 0) {
              free(local_90);
            }
            if (((ulong)local_100 & 1) != 0) {
              free(local_f0);
            }
            local_168 = local_130;
            pppppppcVar34 = local_140;
            if (((ulong)local_120 & 1) != 0) {
              free(local_110);
              local_168 = local_130;
              pppppppcVar34 = local_140;
            }
            goto joined_r0x006ac280;
          }
LAB_006abfb0:
                    /* try { // try from 006abfb4 to 006abfbb has its CatchHandler @ 006ac924 */
          FUN_006ac9f0(pppppppcVar34,param_1[2],param_2);
          pppppppcVar34 = (code *******)0x1;
          goto LAB_006ac4d0;
        }
        iVar8 = *(int *)((long)pppppppcVar34 + 4);
        if (local_e0 < local_d8) {
          ppppppcVar30 = (code ******)((long)local_e0 + 4);
          *(int *)local_e0 = iVar8;
        }
        else {
          sVar13 = (long)local_e0 - (long)local_e8;
          lVar19 = (long)sVar13 >> 2;
          uVar14 = lVar19 + 1;
          if (uVar14 >> 0x3e != 0) {
            if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 006ac548 to 006ac567 has its CatchHandler @ 006ac978 */
              FUN_004b6308(&local_e8);
LAB_006ac550:
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_006ac9ec;
          }
          uVar26 = (long)local_d8 - (long)local_e8 >> 1;
          if (uVar26 <= uVar14) {
            uVar26 = uVar14;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_d8 - (long)local_e8)) {
            uVar26 = 0x3fffffffffffffff;
          }
          if (uVar26 == 0) {
            ppppppcVar20 = (code ******)0x0;
          }
          else {
            if (uVar26 >> 0x3e != 0) goto LAB_006ac550;
                    /* try { // try from 006abb40 to 006abb43 has its CatchHandler @ 006ac918 */
            ppppppcVar20 = (code ******)FUN_00759c3c(uVar26 << 2);
          }
          piVar1 = (int *)((long)ppppppcVar20 + lVar19 * 4);
          ppppppcVar36 = (code ******)((long)ppppppcVar20 + uVar26 * 4);
          ppppppcVar30 = (code ******)(piVar1 + 1);
          *piVar1 = iVar8;
          memcpy(ppppppcVar20,ppppppcVar24,sVar13);
          local_e8 = ppppppcVar20;
          local_d8 = ppppppcVar36;
          if (ppppppcVar24 != (code ******)0x0) {
            local_e0 = ppppppcVar30;
            free(ppppppcVar24);
          }
        }
        iVar8 = *(int *)(param_1[2] + 0x20);
        local_e0 = ppppppcVar30;
        if (lVar9 + -1 < (long)iVar8 + -1) {
          ppppppcVar10 = pppppppcVar34[3];
          if ((ppppppcVar10 != (code ******)0x0) &&
             (local_120 = (code *******)thunk_FUN_006af330, local_140 = pppppppcVar34,
             *ppppppcVar10 != (code *****)0xffffffffffffffff)) {
            local_a0 = (code *******)&local_120;
            pppppppcStack_98 = (code *******)&local_140;
            local_100 = (code *******)&local_a0;
                    /* try { // try from 006abbd8 to 006abc67 has its CatchHandler @ 006ac998 */
            FUN_00710f84(ppppppcVar10,&local_100,FUN_00685640);
          }
          plVar22 = local_b8;
          if (((ulong)*pppppppcVar34 & 0xfe0000) == 0xa0000) {
            if (((*(byte *)((long)pppppppcVar34 + 1) ^ 0xff) & 0x60) != 0) {
              if (local_b0 < local_a8) {
                plVar31 = local_b0 + 1;
                *local_b0 = (long)pppppppcVar34;
              }
              else {
                sVar13 = (long)local_b0 - (long)local_b8;
                lVar19 = (long)sVar13 >> 3;
                uVar14 = lVar19 + 1;
                if (uVar14 >> 0x3d != 0) {
                  if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_006ac9ec;
                    /* try { // try from 006ac598 to 006ac59f has its CatchHandler @ 006ac924 */
                  FUN_00685d28(&local_b8);
                  goto LAB_006ac5a0;
                }
                uVar26 = (long)local_a8 - (long)local_b8 >> 2;
                if (uVar26 <= uVar14) {
                  uVar26 = uVar14;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_a8 - (long)local_b8)) {
                  uVar26 = 0x1fffffffffffffff;
                }
                if (uVar26 == 0) {
                  plVar15 = (long *)0x0;
                }
                else {
                  if (uVar26 >> 0x3d != 0) goto LAB_006ac5d8;
                  plVar15 = (long *)FUN_00759c3c(uVar26 << 3);
                }
                plVar31 = plVar15 + lVar19 + 1;
                plVar15[lVar19] = (long)pppppppcVar34;
                memcpy(plVar15,plVar22,sVar13);
                local_b8 = plVar15;
                local_a8 = plVar15 + uVar26;
                if (plVar22 != (long *)0x0) {
                  free(plVar22);
                }
              }
              ppppppcVar10 = pppppppcVar34[3];
              local_b0 = plVar31;
              if ((ppppppcVar10 != (code ******)0x0) &&
                 (local_120 = pppppppcVar34, *ppppppcVar10 != (code *****)0xffffffffffffffff)) {
                pppppppcStack_98 = (code *******)&local_120;
                local_a0 = (code *******)PTR_thunk_FUN_006af330_007a32d0;
                local_100 = (code *******)&local_a0;
                    /* try { // try from 006abcd8 to 006abd03 has its CatchHandler @ 006ac998 */
                FUN_00710f84(ppppppcVar10,&local_100,FUN_006bd98c);
              }
              ppppppcVar10 = pppppppcVar34[6];
              iVar8 = *(int *)(param_1[2] + 0x20);
              if (((ulong)*pppppppcVar34 & 0xfe0000) != 0xa0000) {
                ppppppcVar10 = (code ******)0x0;
              }
              goto LAB_006ab8f8;
            }
                    /* try { // try from 006ac01c to 006ac02f has its CatchHandler @ 006ac7c4 */
            FUN_00714534(&local_100,"Option field \"",&local_d0);
                    /* try { // try from 006ac030 to 006ac03f has its CatchHandler @ 006ac7c0 */
            puVar35 = (undefined8 *)
                      FUN_00713bdc(&local_100,
                                   "\" is a repeated message. Repeated message options must be initialized using an aggregate value."
                                  );
            local_90 = (void *)puVar35[2];
            pppppppcStack_98 = (code *******)puVar35[1];
            local_a0 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac060 to 006ac06f has its CatchHandler @ 006ac7bc */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
          }
          else {
                    /* try { // try from 006abfc4 to 006abfd7 has its CatchHandler @ 006ac7d0 */
            FUN_00714534(&local_100,"Option \"",&local_d0);
                    /* try { // try from 006abfd8 to 006abfe7 has its CatchHandler @ 006ac7cc */
            puVar35 = (undefined8 *)FUN_00713bdc(&local_100,"\" is an atomic type, not a message.");
            local_90 = (void *)puVar35[2];
            pppppppcStack_98 = (code *******)puVar35[1];
            local_a0 = (code *******)*puVar35;
            puVar35[1] = 0;
            puVar35[2] = 0;
            *puVar35 = 0;
                    /* try { // try from 006ac008 to 006ac017 has its CatchHandler @ 006ac7c8 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_a0);
          }
          local_168 = local_f0;
          pppppppcVar34 = local_100;
          if (((ulong)local_a0 & 1) != 0) {
            free(local_90);
            local_168 = local_f0;
            pppppppcVar34 = local_100;
          }
          goto joined_r0x006ac280;
        }
LAB_006ab8f8:
        bVar7 = lVar9 < iVar8;
        lVar9 = lVar9 + 1;
      } while (bVar7);
    }
    plVar15 = local_b0;
    plVar22 = local_b8;
    if (((*(byte *)((long)pppppppcVar34 + 1) ^ 0xff) & 0x60) == 0) {
LAB_006ab6b8:
                    /* try { // try from 006ab6b8 to 006ab6bf has its CatchHandler @ 006ac8d8 */
      local_178[0] = (code *******)FUN_00759c3c(0x18);
      *local_178[0] = (code ******)0x0;
      local_178[0][1] = (code ******)0x0;
      local_178[0][2] = (code ******)0x0;
                    /* try { // try from 006ab6d0 to 006ab6db has its CatchHandler @ 006ac904 */
      uVar14 = FUN_006ad04c(param_1,pppppppcVar34,local_178[0]);
      puVar5 = PTR_thunk_FUN_006af330_007a32d0;
      if ((uVar14 & 1) == 0) {
        pppppppcVar34 = (code *******)0x0;
      }
      else {
        if (local_b0 != local_b8) {
          plVar22 = local_b0;
          do {
                    /* try { // try from 006ab720 to 006ab727 has its CatchHandler @ 006ac93c */
            local_190 = (code *******)FUN_00759c3c(0x18);
            *local_190 = (code ******)0x0;
            local_190[1] = (code ******)0x0;
            local_190[2] = (code ******)0x0;
            plVar15 = plVar22 + -1;
            pppppppcVar29 = (code *******)*plVar15;
            ppppppcVar10 = pppppppcVar29[3];
            if ((ppppppcVar10 != (code ******)0x0) &&
               (local_120 = (code *******)puVar5, local_140 = pppppppcVar29,
               *ppppppcVar10 != (code *****)0xffffffffffffffff)) {
              local_100 = (code *******)&local_a0;
                    /* try { // try from 006ab764 to 006ab76f has its CatchHandler @ 006ac97c */
              local_a0 = (code *******)&local_120;
              pppppppcStack_98 = (code *******)&local_140;
              FUN_00710f84(ppppppcVar10,&local_100,FUN_00685640);
            }
            pppppppcVar6 = local_190;
            if (*(char *)((long)pppppppcVar29 + 2) == '\n') {
                    /* try { // try from 006ab818 to 006ab82b has its CatchHandler @ 006ac97c */
              uVar12 = FUN_006fb3b0(local_190,*(undefined4 *)(*plVar15 + 4));
              pppppppcVar29 = local_178[0];
              FUN_006facf4(uVar12,local_178[0]);
            }
            else {
              if (*(char *)((long)pppppppcVar29 + 2) != '\v') {
                    /* try { // try from 006ac0c8 to 006ac0df has its CatchHandler @ 006ac6f0 */
                FUN_00675e64(&local_a0,3,
                             "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                             ,0x1d79);
                    /* try { // try from 006ac0e0 to 006ac14b has its CatchHandler @ 006ac86c */
                uVar12 = FUN_00675a58(&local_a0,"Invalid wire type for CPPTYPE_MESSAGE: ");
                uVar14 = plVar22[-1];
                plVar22 = *(long **)(uVar14 + 0x18);
                if ((plVar22 != (long *)0x0) &&
                   (local_140 = (code *******)puVar5, local_160 = uVar14, *plVar22 != -1)) {
                  local_100 = (code *******)&local_140;
                  puStack_f8 = &local_160;
                  local_120 = (code *******)&local_100;
                  FUN_00710f84(plVar22,&local_120,FUN_00685640);
                }
                uVar12 = FUN_00675d6c(uVar12,*(undefined1 *)(uVar14 + 2));
                    /* try { // try from 006ac14c to 006ac153 has its CatchHandler @ 006ac6ec */
                FUN_00675ac0(&local_100,uVar12);
                FUN_00675e7c(&local_a0);
                pppppppcVar34 = local_190;
                local_190 = (code *******)0x0;
                if (pppppppcVar34 != (code *******)0x0) {
                  ppppppcVar10 = *pppppppcVar34;
                  if (ppppppcVar10 != pppppppcVar34[1]) {
                    /* try { // try from 006ac174 to 006ac17b has its CatchHandler @ 006ac678 */
                    FUN_006fa9f8(pppppppcVar34);
                    ppppppcVar10 = *pppppppcVar34;
                  }
                  if (ppppppcVar10 != (code ******)0x0) {
                    pppppppcVar34[1] = ppppppcVar10;
                    free(ppppppcVar10);
                  }
                  free(pppppppcVar34);
                  pppppppcVar34 = (code *******)0x0;
                }
                goto LAB_006ac498;
              }
                    /* try { // try from 006ab790 to 006ab7a7 has its CatchHandler @ 006ac928 */
              uVar12 = FUN_006fb29c(local_190,*(undefined4 *)(*plVar15 + 4));
              pppppppcVar29 = local_178[0];
              uVar14 = FUN_006fb80c(local_178[0],uVar12);
              if ((uVar14 & 1) == 0) {
                    /* try { // try from 006ab7ac to 006ab7c3 has its CatchHandler @ 006ac8e4 */
                FUN_00675e64(&local_a0,3,
                             "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                             ,0x1d6c);
                    /* try { // try from 006ab7c4 to 006ab7f7 has its CatchHandler @ 006ac92c */
                uVar12 = FUN_00675a58(&local_a0,
                                      "CHECK failed: unknown_fields->SerializeToString(outstr): ");
                uVar12 = FUN_00675a58(uVar12,
                                      "Unexpected failure while serializing option submessage ");
                uVar12 = FUN_00675a80(uVar12,&local_d0);
                uVar12 = FUN_00675a58(uVar12,&DAT_001f097e);
                    /* try { // try from 006ab7f8 to 006ab7ff has its CatchHandler @ 006ac8e0 */
                FUN_00675ac0(&local_100,uVar12);
                FUN_00675e7c(&local_a0);
              }
            }
            local_178[0] = pppppppcVar6;
            local_190 = (code *******)0x0;
            if (pppppppcVar29 != (code *******)0x0) {
              ppppppcVar10 = *pppppppcVar29;
              if (ppppppcVar10 != pppppppcVar29[1]) {
                    /* try { // try from 006ab844 to 006ab84b has its CatchHandler @ 006ac900 */
                FUN_006fa9f8(pppppppcVar29);
                ppppppcVar10 = *pppppppcVar29;
              }
              if (ppppppcVar10 != (code ******)0x0) {
                pppppppcVar29[1] = ppppppcVar10;
                free(ppppppcVar10);
              }
              free(pppppppcVar29);
            }
            plVar22 = plVar15;
          } while (plVar15 != local_b8);
        }
                    /* try { // try from 006abe5c to 006abe73 has its CatchHandler @ 006ac904 */
        (**(code **)(*param_2 + 0x80))();
        uVar12 = FUN_00679604(extraout_x1_00,param_2);
        FUN_006facf4(uVar12,local_178[0]);
        if (((*(byte *)((long)pppppppcVar34 + 1) ^ 0xff) & 0x60) == 0) {
          local_a0 = &local_e8;
                    /* try { // try from 006abe8c to 006abea7 has its CatchHandler @ 006ac8bc */
          lVar9 = FUN_006bd2c8(param_1 + 6,&local_e8,&DAT_0021094f,&local_a0,&local_100);
          ppppppcVar10 = local_e8;
          iVar8 = *(int *)(lVar9 + 0x38);
          *(int *)(lVar9 + 0x38) = iVar8 + 1;
          if (local_e0 < local_d8) {
            *(int *)local_e0 = iVar8;
            local_e0 = (code ******)((long)local_e0 + 4);
          }
          else {
            sVar13 = (long)local_e0 - (long)local_e8;
            lVar9 = (long)sVar13 >> 2;
            uVar14 = lVar9 + 1;
            if (uVar14 >> 0x3e != 0) {
              if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_006ac9ec;
                    /* try { // try from 006ac658 to 006ac677 has its CatchHandler @ 006ac8bc */
              FUN_004b6308(&local_e8);
LAB_006ac660:
              if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
              goto LAB_006ac9ec;
            }
            uVar26 = (long)local_d8 - (long)local_e8 >> 1;
            if (uVar26 <= uVar14) {
              uVar26 = uVar14;
            }
            if (0x7ffffffffffffffb < (ulong)((long)local_d8 - (long)local_e8)) {
              uVar26 = 0x3fffffffffffffff;
            }
            if (uVar26 == 0) {
              ppppppcVar24 = (code ******)0x0;
            }
            else {
              if (uVar26 >> 0x3e != 0) goto LAB_006ac660;
                    /* try { // try from 006ac1e4 to 006ac1e7 has its CatchHandler @ 006ac8bc */
              ppppppcVar24 = (code ******)FUN_00759c3c(uVar26 << 2);
            }
            piVar1 = (int *)((long)ppppppcVar24 + lVar9 * 4);
            ppppppcVar20 = (code ******)((long)ppppppcVar24 + uVar26 * 4);
            ppppppcVar36 = (code ******)(piVar1 + 1);
            *piVar1 = iVar8;
            memcpy(ppppppcVar24,ppppppcVar10,sVar13);
            local_e8 = ppppppcVar24;
            local_e0 = ppppppcVar36;
            local_d8 = ppppppcVar20;
            if (ppppppcVar10 != (code ******)0x0) {
              free(ppppppcVar10);
              local_e0 = ppppppcVar36;
            }
          }
        }
                    /* try { // try from 006ac45c to 006ac493 has its CatchHandler @ 006ac904 */
        local_a0 = param_3;
        lVar9 = FUN_006bd5dc(param_1 + 3,param_3,&DAT_0021094f,&local_a0,&local_100);
        if ((code *******)(lVar9 + 0x38) != &local_e8) {
          FUN_0064466c();
        }
        pppppppcVar34 = (code *******)0x1;
      }
LAB_006ac498:
      pppppppcVar29 = local_178[0];
      local_178[0] = (code *******)0x0;
      if (pppppppcVar29 != (code *******)0x0) {
        ppppppcVar10 = *pppppppcVar29;
        if (ppppppcVar10 != pppppppcVar29[1]) {
                    /* try { // try from 006ac4b0 to 006ac4b7 has its CatchHandler @ 006ac8b8 */
          FUN_006fa9f8(pppppppcVar29);
          ppppppcVar10 = *pppppppcVar29;
        }
        if (ppppppcVar10 != (code ******)0x0) {
          pppppppcVar29[1] = ppppppcVar10;
          free(ppppppcVar10);
        }
        free(pppppppcVar29);
      }
    }
    else {
                    /* try { // try from 006ab688 to 006ab6b3 has its CatchHandler @ 006ac8fc */
      (**(code **)(*param_2 + 0x80))();
      uVar12 = FUN_006795dc(extraout_x1,param_2);
      uVar14 = FUN_006acc34(param_1,plVar22,plVar15,pppppppcVar34,&local_d0,uVar12);
      if ((uVar14 & 1) != 0) goto LAB_006ab6b8;
LAB_006ac414:
      pppppppcVar34 = (code *******)0x0;
    }
LAB_006ac4d0:
    if (local_e8 != (code ******)0x0) {
      local_e0 = local_e8;
      free(local_e8);
    }
    if ((local_d0 & 1) != 0) {
      free(local_c0);
    }
    if (local_b8 != (long *)0x0) {
      free(local_b8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return (ulong)pppppppcVar34 & 0xffffffff;
  }
LAB_006ac9ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ac9f0  FUN_006ac9f0 =====

void FUN_006ac9f0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  void *pvVar7;
  undefined1 uStack_89;
  undefined8 local_88;
  size_t local_80;
  void *local_78;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = (**(code **)(*param_3 + 0x80))(param_3);
  sVar4 = strlen("uninterpreted_option");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_006acc30;
  }
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_006aca9c;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
    pvVar7 = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = sVar4;
    local_78 = pvVar7;
LAB_006aca9c:
    memcpy(pvVar7,"uninterpreted_option",sVar4);
  }
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x80);
  pvVar7 = local_78;
  sVar4 = local_80;
  if ((local_88 & 1) == 0) {
    pvVar7 = (void *)((long)&local_88 + 1);
    sVar4 = local_88 >> 1 & 0x7f;
  }
  if ((long)sVar4 < 0) {
                    /* try { // try from 006acbbc to 006acbd3 has its CatchHandler @ 006acc04 */
    FUN_00676318(sVar4,"string length exceeds max size");
  }
                    /* try { // try from 006acadc to 006acaeb has its CatchHandler @ 006acc04 */
  pcVar5 = (char *)FUN_0068cc6c(uVar6,lVar3,pvVar7,sVar4);
  if (*pcVar5 == '\x02') {
    if ((pcVar5[1] & 8U) != 0) {
      pcVar5 = (char *)0x0;
    }
  }
  else {
    pcVar5 = (char *)0x0;
  }
  if ((local_88 & 1) != 0) {
    free(local_78);
  }
  if (pcVar5 == (char *)0x0) {
    FUN_00675e64(&local_88,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1df0);
                    /* try { // try from 006acb40 to 006acb53 has its CatchHandler @ 006acbf4 */
    uVar6 = FUN_00675a58(&local_88,"CHECK failed: field != nullptr: ");
                    /* try { // try from 006acb54 to 006acb5b has its CatchHandler @ 006acbf0 */
    FUN_00675ac0(&uStack_89,uVar6);
    FUN_00675e7c(&local_88);
  }
  (**(code **)(*param_3 + 0x80))(param_3);
  uVar6 = FUN_0068347c(extraout_x1,param_3,pcVar5,0);
  FUN_006e51bc(uVar6,param_2);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_006acc30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006acc34  FUN_006acc34 =====

void FUN_006acc34(undefined8 *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  uint uVar1;
  code cVar2;
  long lVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  long lVar16;
  code *pcVar17;
  int *piVar18;
  long lVar19;
  code **local_c0;
  code **ppcStack_b8;
  void *local_b0;
  code ***local_90 [2];
  code **local_80;
  code *local_78;
  code *pcStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  piVar18 = (int *)*param_6;
  iVar14 = (int)((ulong)(param_6[1] - (long)piVar18) >> 4);
  if (param_2 == param_3) {
    if (0 < iVar14) {
      uVar13 = (ulong)(param_6[1] - (long)piVar18) >> 4 & 0x7fffffff;
      uVar9 = 0;
      do {
        if (*piVar18 == *(int *)(param_4 + 4)) {
          FUN_00714534(local_90,"Option \"",param_5);
                    /* try { // try from 006ace6c to 006ace7b has its CatchHandler @ 006acfd4 */
          puVar10 = (undefined8 *)FUN_00713bdc(local_90,"\" was already set.");
          local_b0 = (void *)puVar10[2];
          ppcStack_b8 = (code **)puVar10[1];
          local_c0 = (code **)*puVar10;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
                    /* try { // try from 006ace9c to 006aceab has its CatchHandler @ 006acf90 */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],7,&local_c0);
          if (((ulong)local_c0 & 1) != 0) {
            free(local_b0);
          }
          ppcVar6 = ppcStack_b8;
          ppcVar5 = ppcStack_b8;
          ppcVar4 = (code **)((ulong)local_90[0] & 1);
          goto joined_r0x006acec0;
        }
        uVar9 = uVar9 + 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != uVar9);
      bVar7 = uVar13 <= uVar9;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_006ad048;
    }
  }
  else if (0 < iVar14) {
    lVar19 = 0;
    lVar16 = 0;
    do {
      pcVar17 = (code *)*param_2;
      if (*(int *)((long)piVar18 + lVar19) == *(int *)(pcVar17 + 4)) {
        plVar8 = *(long **)(pcVar17 + 0x18);
        if ((plVar8 != (long *)0x0) &&
           (pcStack_70 = thunk_FUN_006af330, local_78 = pcVar17, *plVar8 != -1)) {
          local_c0 = &pcStack_70;
          ppcStack_b8 = &local_78;
          local_90[0] = &local_c0;
          FUN_00710f84(plVar8,local_90,FUN_00685640);
        }
        cVar2 = pcVar17[2];
        if (cVar2 == (code)0xa) {
          if ((*(int *)((long)piVar18 + lVar19 + 4) == 4) &&
             (uVar9 = FUN_006acc34(param_1,param_2 + 1,param_3,param_4,param_5,
                                   *(undefined8 *)((long)piVar18 + lVar19 + 8)),
             ppcVar5 = ppcStack_b8, (uVar9 & 1) == 0)) goto LAB_006acecc;
        }
        else {
          if (cVar2 != (code)0xb) {
            FUN_00675e64(&local_c0,3,
                         "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                         ,0x1e2c);
                    /* try { // try from 006acf00 to 006acf1b has its CatchHandler @ 006ad000 */
            uVar11 = FUN_00675a58(&local_c0,"Invalid wire type for CPPTYPE_MESSAGE: ");
            uVar11 = FUN_00675d6c(uVar11,cVar2);
                    /* try { // try from 006acf1c to 006acf23 has its CatchHandler @ 006acf8c */
            FUN_00675ac0(local_90,uVar11);
            FUN_00675e7c(&local_c0);
            bVar7 = false;
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return;
            }
            goto LAB_006ad048;
          }
          if (*(int *)((long)piVar18 + lVar19 + 4) == 3) {
            local_c0 = (code **)0x0;
            ppcStack_b8 = (code **)0x0;
            local_b0 = (void *)0x0;
            pbVar12 = *(byte **)((long)piVar18 + lVar19 + 8);
            pbVar15 = *(byte **)(pbVar12 + 0x10);
            bVar7 = (*pbVar12 & 1) == 0;
            if (bVar7) {
              pbVar15 = pbVar12 + 1;
            }
            uVar1 = (uint)(*pbVar12 >> 1);
            if (!bVar7) {
              uVar1 = *(uint *)(pbVar12 + 8);
            }
                    /* try { // try from 006acd68 to 006acd8f has its CatchHandler @ 006ad028 */
            uVar9 = FUN_006fb714(&local_c0,pbVar15,uVar1);
            if (((uVar9 & 1) != 0) &&
               (uVar9 = FUN_006acc34(param_1,param_2 + 1,param_3,param_4,param_5,&local_c0),
               (uVar9 & 1) == 0)) {
              ppcVar6 = local_c0;
              ppcVar5 = ppcStack_b8;
              local_80 = local_c0;
              ppcVar4 = local_c0;
              if (local_c0 != ppcStack_b8) {
                    /* try { // try from 006acf70 to 006acf77 has its CatchHandler @ 006acf88 */
                FUN_006fa9f8(&local_c0);
                ppcVar6 = local_c0;
                ppcVar5 = ppcStack_b8;
                local_80 = local_c0;
                ppcVar4 = local_c0;
              }
joined_r0x006acec0:
              ppcStack_b8 = ppcVar6;
              if (ppcVar4 != (code **)0x0) {
                free(local_80);
                ppcVar5 = ppcStack_b8;
              }
LAB_006acecc:
              ppcStack_b8 = ppcVar5;
              bVar7 = false;
              if (*(long *)(lVar3 + 0x28) == local_68) {
                return;
              }
              goto LAB_006ad048;
            }
            if (local_c0 != ppcStack_b8) {
                    /* try { // try from 006acda0 to 006acda7 has its CatchHandler @ 006ad024 */
              FUN_006fa9f8(&local_c0);
            }
            if (local_c0 != (code **)0x0) {
              ppcStack_b8 = local_c0;
              free(local_c0);
            }
          }
        }
      }
      piVar18 = (int *)*param_6;
      lVar16 = lVar16 + 1;
      lVar19 = lVar19 + 0x10;
    } while (lVar16 < (int)((ulong)(param_6[1] - (long)piVar18) >> 4));
  }
  bVar7 = true;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_006ad048:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


// ===== 006ad04c  FUN_006ad04c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006ad04c(undefined8 *param_1,undefined *param_2,undefined8 param_3)

{
  size_t __n;
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  void *__ptr;
  undefined ***pppuVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  byte *pbVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  byte bVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *__ptr_00;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 uVar26;
  float fVar27;
  double dVar28;
  byte local_148 [16];
  void *local_138;
  undefined ***local_130;
  undefined8 uStack_128;
  void *local_120;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  undefined *local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined ***local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined **local_90;
  undefined **ppuStack_88;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar13 = *(long **)(param_2 + 0x18);
  if ((plVar13 != (long *)0x0) &&
     (local_d0 = PTR_thunk_FUN_006af330_007a32d0, local_f0 = param_2, *plVar13 != -1)) {
    local_90 = &local_d0;
    ppuStack_88 = &local_f0;
    local_b0 = &local_90;
    FUN_00710f84(plVar13,&local_b0,FUN_00685640);
  }
  uVar12 = (ulong)(byte)param_2[2];
  iVar6 = *(int *)(PTR_DAT_007a32d8 + uVar12 * 4);
  if (iVar6 < 6) {
    if (iVar6 < 3) {
      if (iVar6 == 1) {
        lVar14 = param_1[2];
        if ((*(uint *)(lVar14 + 0x10) >> 3 & 1) == 0) {
          if ((*(uint *)(lVar14 + 0x10) >> 4 & 1) == 0) {
            FUN_00714534(&local_b0,"Value must be integer for int32 option \"",
                         *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad2d0 to 006ad2df has its CatchHandler @ 006ae2f0 */
            puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
            local_80 = (void *)puVar7[2];
            ppuStack_88 = (undefined **)puVar7[1];
            local_90 = (undefined **)*puVar7;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
                    /* try { // try from 006ad300 to 006ad30f has its CatchHandler @ 006ae2d8 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
          }
          else {
            uVar24 = *(ulong *)(lVar14 + 0x50);
            if (-0x80000001 < (long)uVar24) {
              uVar23 = *(undefined4 *)(param_2 + 4);
              plVar13 = (long *)FUN_0068c8b4(param_2);
              uVar12 = (ulong)plVar13 & 0xffffffff;
              goto LAB_006adb88;
            }
            FUN_00714534(&local_b0,"Value out of range for int32 option \"",
                         *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad8d4 to 006ad8e3 has its CatchHandler @ 006ae0cc */
            puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
            local_80 = (void *)puVar7[2];
            ppuStack_88 = (undefined **)puVar7[1];
            local_90 = (undefined **)*puVar7;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
                    /* try { // try from 006ad904 to 006ad913 has its CatchHandler @ 006ae0c0 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
          }
        }
        else {
          uVar24 = *(ulong *)(lVar14 + 0x48);
          if (uVar24 >> 0x1f == 0) {
            plVar13 = *(long **)(param_2 + 0x18);
            uVar23 = *(undefined4 *)(param_2 + 4);
            if (plVar13 != (long *)0x0) {
              local_d0 = PTR_thunk_FUN_006af330_007a32d0;
              local_f0 = param_2;
              if (*plVar13 != -1) {
                local_90 = &local_d0;
                ppuStack_88 = &local_f0;
                local_b0 = &local_90;
                plVar13 = (long *)FUN_00710f84(plVar13,&local_b0,FUN_00685640);
              }
              uVar12 = (ulong)(byte)param_2[2];
            }
LAB_006adb88:
            FUN_006ae470(plVar13,uVar23,uVar24 & 0xffffffff,uVar12,param_3);
            goto LAB_006ade58;
          }
          FUN_00714534(&local_b0,"Value out of range for int32 option \"",
                       *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad650 to 006ad65f has its CatchHandler @ 006ae2e8 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
          local_80 = (void *)puVar7[2];
          ppuStack_88 = (undefined **)puVar7[1];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006ad680 to 006ad68f has its CatchHandler @ 006ae2d4 */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        }
      }
      else {
        if (iVar6 != 2) goto LAB_006ade58;
        lVar14 = param_1[2];
        if ((*(uint *)(lVar14 + 0x10) >> 3 & 1) == 0) {
          if ((*(uint *)(lVar14 + 0x10) >> 4 & 1) != 0) {
            plVar13 = *(long **)(param_2 + 0x18);
            uVar23 = *(undefined4 *)(param_2 + 4);
            lVar14 = *(long *)(lVar14 + 0x50);
joined_r0x006ad534:
            if (plVar13 != (long *)0x0) {
              local_d0 = PTR_thunk_FUN_006af330_007a32d0;
              local_f0 = param_2;
              if (*plVar13 != -1) {
                local_90 = &local_d0;
                ppuStack_88 = &local_f0;
                local_b0 = &local_90;
                plVar13 = (long *)FUN_00710f84(plVar13,&local_b0,FUN_00685640);
              }
              uVar12 = (ulong)(byte)param_2[2];
            }
            FUN_006ae5b0(plVar13,uVar23,lVar14,uVar12,param_3);
            goto LAB_006ade58;
          }
          FUN_00714534(&local_b0,"Value must be integer for int64 option \"",
                       *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad1ec to 006ad1fb has its CatchHandler @ 006ae2f8 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
          local_80 = (void *)puVar7[2];
          ppuStack_88 = (undefined **)puVar7[1];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006ad21c to 006ad22b has its CatchHandler @ 006ae2dc */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        }
        else {
          lVar14 = *(long *)(lVar14 + 0x48);
          if (-1 < lVar14) {
            plVar13 = *(long **)(param_2 + 0x18);
            uVar23 = *(undefined4 *)(param_2 + 4);
            goto joined_r0x006ad534;
          }
          FUN_00714534(&local_b0,"Value out of range for int64 option \"",
                       *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ada08 to 006ada17 has its CatchHandler @ 006ae2c0 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
          local_80 = (void *)puVar7[2];
          ppuStack_88 = (undefined **)puVar7[1];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006ada38 to 006ada47 has its CatchHandler @ 006ae2bc */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        }
      }
    }
    else {
      if (iVar6 != 3) {
        if (iVar6 == 4) {
          if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) == 0) {
            FUN_00714534(&local_b0,"Value must be non-negative integer for uint64 option \"",
                         *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad478 to 006ad487 has its CatchHandler @ 006ae368 */
            puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
            local_80 = (void *)puVar7[2];
            ppuStack_88 = (undefined **)puVar7[1];
            local_90 = (undefined **)*puVar7;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
                    /* try { // try from 006ad4a8 to 006ad4b7 has its CatchHandler @ 006ae314 */
            FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
            goto LAB_006ada48;
          }
          plVar13 = *(long **)(param_2 + 0x18);
          uVar23 = *(undefined4 *)(param_2 + 4);
          uVar26 = *(undefined8 *)(param_1[2] + 0x48);
          if (plVar13 != (long *)0x0) {
            local_d0 = PTR_thunk_FUN_006af330_007a32d0;
            local_f0 = param_2;
            if (*plVar13 != -1) {
              local_90 = &local_d0;
              ppuStack_88 = &local_f0;
              local_b0 = &local_90;
              plVar13 = (long *)FUN_00710f84(plVar13,&local_b0,FUN_00685640);
            }
            uVar12 = (ulong)(byte)param_2[2];
          }
          FUN_006ae7f8(plVar13,uVar23,uVar26,uVar12,param_3);
        }
        else if (iVar6 == 5) {
          lVar14 = param_1[2];
          uVar2 = *(uint *)(lVar14 + 0x10);
          if ((uVar2 >> 5 & 1) == 0) {
            if ((uVar2 >> 3 & 1) == 0) {
              if ((uVar2 >> 4 & 1) == 0) {
                FUN_00714534(&local_b0,"Value must be number for double option \"",
                             *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad138 to 006ad147 has its CatchHandler @ 006ae0dc */
                puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
                local_80 = (void *)puVar7[2];
                ppuStack_88 = (undefined **)puVar7[1];
                local_90 = (undefined **)*puVar7;
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                    /* try { // try from 006ad168 to 006ad177 has its CatchHandler @ 006ae0c8 */
                FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
                goto LAB_006ada48;
              }
              dVar28 = (double)*(long *)(lVar14 + 0x50);
            }
            else {
              dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + 0x48));
            }
          }
          else {
            dVar28 = *(double *)(lVar14 + 0x58);
          }
          FUN_006fb194(param_3,*(undefined4 *)(param_2 + 4),dVar28);
        }
        goto LAB_006ade58;
      }
      if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) == 0) {
        FUN_00714534(&local_b0,"Value must be non-negative integer for uint32 option \"",
                     *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad3a8 to 006ad3b7 has its CatchHandler @ 006ae378 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
        local_80 = (void *)puVar7[2];
        ppuStack_88 = (undefined **)puVar7[1];
        local_90 = (undefined **)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006ad3d8 to 006ad3e7 has its CatchHandler @ 006ae31c */
        FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
      }
      else {
        uVar24 = *(ulong *)(param_1[2] + 0x48);
        if (uVar24 >> 0x20 == 0) {
          plVar13 = *(long **)(param_2 + 0x18);
          uVar23 = *(undefined4 *)(param_2 + 4);
          if (plVar13 != (long *)0x0) {
            local_d0 = PTR_thunk_FUN_006af330_007a32d0;
            local_f0 = param_2;
            if (*plVar13 != -1) {
              local_90 = &local_d0;
              ppuStack_88 = &local_f0;
              local_b0 = &local_90;
              plVar13 = (long *)FUN_00710f84(plVar13,&local_b0,FUN_00685640);
            }
            uVar12 = (ulong)(byte)param_2[2];
          }
          FUN_006ae6ec(plVar13,uVar23,uVar24 & 0xffffffff,uVar12,param_3);
          goto LAB_006ade58;
        }
        FUN_00714534(&local_b0,"Value out of range for uint32 option \"",
                     *(undefined8 *)(param_2 + 8));
                    /* try { // try from 006ad6c0 to 006ad6cf has its CatchHandler @ 006ae2e0 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
        local_80 = (void *)puVar7[2];
        ppuStack_88 = (undefined **)puVar7[1];
        local_90 = (undefined **)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006ad6f0 to 006ad6ff has its CatchHandler @ 006ae2d0 */
        FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
      }
    }
LAB_006ada48:
    __ptr = local_a0;
    pppuVar4 = local_b0;
    if (((ulong)local_90 & 1) != 0) {
      free(local_80);
      __ptr = local_a0;
      pppuVar4 = local_b0;
    }
joined_r0x006ae034:
    if (((ulong)pppuVar4 & 1) != 0) {
      free(__ptr);
    }
LAB_006ada68:
    sVar8 = 0;
  }
  else {
    if (iVar6 < 8) {
      if (iVar6 == 6) {
        lVar14 = param_1[2];
        uVar2 = *(uint *)(lVar14 + 0x10);
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 3 & 1) == 0) {
            if ((uVar2 >> 4 & 1) == 0) {
              FUN_00714534(&local_b0,"Value must be number for float option \"",
                           *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad340 to 006ad34f has its CatchHandler @ 006ae0d4 */
              puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
              local_80 = (void *)puVar7[2];
              ppuStack_88 = (undefined **)puVar7[1];
              local_90 = (undefined **)*puVar7;
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
                    /* try { // try from 006ad370 to 006ad37f has its CatchHandler @ 006ae0c4 */
              FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
              goto LAB_006ada48;
            }
            fVar27 = (float)*(long *)(lVar14 + 0x50);
          }
          else {
            fVar27 = (float)*(ulong *)(lVar14 + 0x48);
          }
        }
        else {
          fVar27 = (float)*(double *)(lVar14 + 0x58);
        }
        FUN_006fb08c(param_3,*(undefined4 *)(param_2 + 4),fVar27);
      }
      else if (iVar6 == 7) {
        if ((*(byte *)(param_1[2] + 0x10) & 1) == 0) {
          FUN_00714534(&local_b0,"Value must be identifier for boolean option \"",
                       *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad264 to 006ad273 has its CatchHandler @ 006ae380 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
          local_80 = (void *)puVar7[2];
          ppuStack_88 = (undefined **)puVar7[1];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006ad294 to 006ad2a3 has its CatchHandler @ 006ae320 */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
          goto LAB_006ada48;
        }
        pbVar25 = (byte *)(*(ulong *)(param_1[2] + 0x30) & 0xfffffffffffffffc);
        sVar8 = strlen("true");
        bVar16 = *pbVar25;
        __n = (ulong)(bVar16 >> 1);
        if ((bVar16 & 1) != 0) {
          __n = *(size_t *)(pbVar25 + 8);
        }
        if (sVar8 != __n) {
LAB_006ad594:
          sVar8 = strlen("false");
          if (sVar8 == __n) {
            if (__n == 0xffffffffffffffff) {
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 006ae0a4 to 006ae0ab has its CatchHandler @ 006ae2c8 */
                    /* WARNING: Subroutine does not return */
                FUN_0030b8f4(pbVar25);
              }
              goto LAB_006ae35c;
            }
            pbVar9 = *(byte **)(pbVar25 + 0x10);
            if ((bVar16 & 1) == 0) {
              pbVar9 = pbVar25 + 1;
            }
            iVar6 = memcmp(pbVar9,"false",__n);
            if (iVar6 == 0) {
              lVar14 = 0;
              goto LAB_006adbbc;
            }
          }
          FUN_00714534(&local_b0,"Value must be \"true\" or \"false\" for boolean option \"",
                       *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad5e8 to 006ad5f7 has its CatchHandler @ 006ae308 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
          local_80 = (void *)puVar7[2];
          ppuStack_88 = (undefined **)puVar7[1];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006ad618 to 006ad627 has its CatchHandler @ 006ae304 */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
          goto LAB_006ada48;
        }
        if (sVar8 == 0xffffffffffffffff) {
          sVar8 = 0xffffffffffffffff;
          if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 006ae08c to 006ae093 has its CatchHandler @ 006ae2cc */
                    /* WARNING: Subroutine does not return */
            FUN_0030b8f4(pbVar25);
          }
          goto LAB_006ae35c;
        }
        pbVar9 = *(byte **)(pbVar25 + 0x10);
        if ((bVar16 & 1) == 0) {
          pbVar9 = pbVar25 + 1;
        }
        iVar6 = memcmp(pbVar9,&DAT_001d5ef8,sVar8);
        if (iVar6 != 0) goto LAB_006ad594;
        lVar14 = 1;
LAB_006adbbc:
        uVar23 = *(undefined4 *)(param_2 + 4);
        goto LAB_006ade50;
      }
    }
    else if (iVar6 == 8) {
      lVar14 = param_1[2];
      if ((*(byte *)(lVar14 + 0x10) & 1) == 0) {
        FUN_00714534(&local_b0,"Value must be identifier for enum-valued option \"",
                     *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad410 to 006ad41f has its CatchHandler @ 006ae370 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
        local_80 = (void *)puVar7[2];
        ppuStack_88 = (undefined **)puVar7[1];
        local_90 = (undefined **)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006ad440 to 006ad44f has its CatchHandler @ 006ae318 */
        FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        goto LAB_006ada48;
      }
      plVar13 = *(long **)(param_2 + 0x18);
      if (plVar13 != (long *)0x0) {
        local_d0 = param_2;
        if (*plVar13 != -1) {
          ppuStack_88 = &local_d0;
          local_90 = (undefined **)PTR_thunk_FUN_006af330_007a32d0;
          local_b0 = &local_90;
          FUN_00710f84(plVar13,&local_b0,FUN_006bd98c);
        }
        uVar12 = (ulong)(byte)param_2[2];
        lVar14 = param_1[2];
      }
      lVar17 = *(long *)(param_2 + 0x30);
      uVar24 = *(ulong *)(lVar14 + 0x30);
      if ((int)uVar12 != 0xe) {
        lVar17 = 0;
      }
      lVar14 = *(long *)(*(long *)(lVar17 + 0x10) + 0x18);
      if (((DAT_007aeb58 & 1) == 0) && (iVar6 = FUN_00739c1c(&DAT_007aeb58), iVar6 != 0)) {
                    /* try { // try from 006ae050 to 006ae067 has its CatchHandler @ 006ae0ac */
        lVar11 = FUN_0068b93c();
        FUN_0066ee94(PTR_FUN_007a32c8,lVar11);
        DAT_007aeb50 = lVar11;
        FUN_00739d60(&DAT_007aeb58);
      }
      lVar11 = DAT_007aeb50;
      pbVar25 = (byte *)(uVar24 & 0xfffffffffffffffc);
      FUN_006c2a80(PTR_PTR_007a33a8);
      if (lVar14 == lVar11) {
        pbVar9 = (byte *)FUN_0068ced0(lVar17,pbVar25);
      }
      else {
        lVar14 = *(long *)(lVar17 + 8);
        if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
          ppuStack_88 = *(undefined ***)(lVar14 + 0x20);
          local_90 = *(undefined ***)(lVar14 + 0x18);
          local_80 = *(void **)(lVar14 + 0x28);
        }
        else {
          FUN_002fb36c(&local_90,*(undefined8 *)(lVar14 + 0x28),*(undefined8 *)(lVar14 + 0x20));
        }
        bVar16 = **(byte **)(lVar17 + 8);
        ppuVar1 = (undefined **)((ulong)local_90 >> 1 & 0x7f);
        if (((ulong)local_90 & 1) != 0) {
          ppuVar1 = ppuStack_88;
        }
        uVar12 = (ulong)(bVar16 >> 1);
        if ((bVar16 & 1) != 0) {
          uVar12 = *(ulong *)(*(byte **)(lVar17 + 8) + 8);
        }
                    /* try { // try from 006adabc to 006adae7 has its CatchHandler @ 006ae388 */
        FUN_00713cc0(&local_90,(long)ppuVar1 - uVar12,0);
        uVar12 = *(ulong *)(pbVar25 + 8);
        pbVar9 = *(byte **)(pbVar25 + 0x10);
        if ((*pbVar25 & 1) == 0) {
          pbVar9 = pbVar25 + 1;
          uVar12 = (ulong)(*pbVar25 >> 1);
        }
        FUN_0071302c(&local_90,pbVar9,uVar12);
        puVar7 = (undefined8 *)*param_1;
                    /* try { // try from 006adaf0 to 006adaff has its CatchHandler @ 006ae300 */
        pbVar9 = (byte *)FUN_0069689c(puVar7,*puVar7,&local_90,1);
        bVar16 = *pbVar9;
        pbVar19 = (byte *)0x0;
        pbVar20 = pbVar19;
        if (bVar16 < 5) {
          if (bVar16 < 3) {
            if ((bVar16 == 1) || (bVar16 == 2)) {
LAB_006adbe8:
              pbVar20 = *(byte **)(pbVar9 + 0x10);
            }
          }
          else {
            if (bVar16 == 3) goto LAB_006adbf0;
            if (bVar16 == 4) goto LAB_006adbe8;
          }
        }
        else if (bVar16 < 8) {
          if (bVar16 == 5) goto LAB_006adbf0;
          if (bVar16 == 7) goto LAB_006adbe8;
        }
        else if (bVar16 == 8) {
LAB_006adbf0:
          pbVar20 = *(byte **)(*(long *)(pbVar9 + 0x10) + 0x10);
        }
        else {
          pbVar20 = pbVar9;
          if ((bVar16 != 9) && (pbVar20 = pbVar19, bVar16 == 10)) {
            pbVar20 = *(byte **)(pbVar9 + 8);
          }
        }
        if (pbVar20 == (byte *)puVar7[10]) {
LAB_006adc3c:
          puVar21 = puVar7 + 0x15;
          puVar15 = (undefined8 *)*puVar21;
          __ptr_00 = puVar21;
          puVar22 = puVar15;
          if (puVar15 != (undefined8 *)0x0) {
            do {
              lVar14 = 8;
              if (pbVar20 <= (byte *)puVar22[4]) {
                lVar14 = 0;
                __ptr_00 = puVar22;
              }
              puVar18 = (undefined8 *)((long)puVar22 + lVar14);
              puVar22 = (undefined8 *)*puVar18;
            } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
            if ((__ptr_00 != puVar21) && ((byte *)__ptr_00[4] <= pbVar20)) {
              puVar22 = (undefined8 *)__ptr_00[1];
              puVar21 = __ptr_00;
              if ((undefined8 *)__ptr_00[1] == (undefined8 *)0x0) {
                do {
                  puVar18 = (undefined8 *)puVar21[2];
                  bVar5 = (undefined8 *)*puVar18 != puVar21;
                  puVar21 = puVar18;
                } while (bVar5);
              }
              else {
                do {
                  puVar18 = puVar22;
                  puVar22 = (undefined8 *)*puVar18;
                } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
              }
              if ((undefined8 *)puVar7[0x14] == __ptr_00) {
                puVar7[0x14] = puVar18;
              }
              puVar7[0x16] = puVar7[0x16] + -1;
              FUN_00328dd0(puVar15,__ptr_00);
              free(__ptr_00);
              bVar16 = *pbVar9;
            }
          }
        }
        else {
          for (plVar13 = (long *)puVar7[0xd]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
            if ((byte *)plVar13[4] <= pbVar20) {
              if (pbVar20 <= (byte *)plVar13[4]) goto LAB_006adc3c;
              plVar13 = plVar13 + 1;
            }
          }
        }
        if (bVar16 == 5) {
LAB_006add00:
          if (*(long *)(pbVar9 + 0x10) == lVar17) goto LAB_006ade20;
                    /* try { // try from 006add10 to 006add23 has its CatchHandler @ 006ae2b8 */
          FUN_00714534(local_148,"Enum type \"",*(long *)(lVar17 + 8) + 0x18);
                    /* try { // try from 006add24 to 006add33 has its CatchHandler @ 006ae2a8 */
          puVar7 = (undefined8 *)FUN_00713bdc(local_148,"\" has no value named \"");
          local_120 = (void *)puVar7[2];
          uStack_128 = puVar7[1];
          local_130 = (undefined ***)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006add4c to 006add5b has its CatchHandler @ 006ae298 */
          FUN_00696434(&local_110,&local_130,pbVar25);
                    /* try { // try from 006add5c to 006add6b has its CatchHandler @ 006ae288 */
          puVar7 = (undefined8 *)FUN_00713bdc(&local_110,"\" for option \"");
          local_e0 = (void *)puVar7[2];
          uStack_e8 = puVar7[1];
          local_f0 = (undefined *)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006add88 to 006add97 has its CatchHandler @ 006ae238 */
          FUN_00696434(&local_d0,&local_f0,*(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006add98 to 006adda7 has its CatchHandler @ 006ae218 */
          puVar7 = (undefined8 *)
                   FUN_00713bdc(&local_d0,"\". This appears to be a value from a sibling type.");
          local_a0 = (void *)puVar7[2];
          uStack_a8 = puVar7[1];
          local_b0 = (undefined ***)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 006addc8 to 006addd7 has its CatchHandler @ 006ae1c4 */
          FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_b0);
          if (((ulong)local_b0 & 1) != 0) {
            free(local_a0);
          }
          if (((ulong)local_d0 & 1) != 0) {
            free(local_c0);
          }
          if (((ulong)local_f0 & 1) != 0) {
            free(local_e0);
          }
          if ((local_110 & 1) != 0) {
            free(local_100);
          }
          if (((ulong)local_130 & 1) != 0) {
            free(local_120);
          }
          if ((local_148[0] & 1) != 0) {
            free(local_138);
          }
          bVar5 = false;
          pbVar9 = (byte *)0x0;
        }
        else {
          if (bVar16 == 6) {
            pbVar9 = pbVar9 + -1;
            goto LAB_006add00;
          }
          pbVar9 = (byte *)0x0;
LAB_006ade20:
          bVar5 = true;
        }
        if (((ulong)local_90 & 1) != 0) {
          free(local_80);
        }
        if (!bVar5) goto LAB_006ada68;
      }
      if (pbVar9 == (byte *)0x0) {
        lVar14 = FUN_0068f648(param_2);
        FUN_00714534(&local_130,"Enum type \"",*(long *)(lVar14 + 8) + 0x18);
                    /* try { // try from 006adeac to 006adebb has its CatchHandler @ 006ae1b0 */
        puVar10 = (ulong *)FUN_00713bdc(&local_130,"\" has no value named \"");
        local_100 = (void *)puVar10[2];
        uStack_108 = puVar10[1];
        local_110 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 006aded4 to 006adee3 has its CatchHandler @ 006ae1a0 */
        FUN_00696434(&local_f0,&local_110,pbVar25);
                    /* try { // try from 006adee4 to 006adef3 has its CatchHandler @ 006ae190 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_f0,"\" for option \"");
        local_c0 = (void *)puVar7[2];
        uStack_c8 = puVar7[1];
        local_d0 = (undefined *)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006adf10 to 006adf1f has its CatchHandler @ 006ae150 */
        FUN_00696434(&local_b0,&local_d0,*(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006adf20 to 006adf2f has its CatchHandler @ 006ae130 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
        local_80 = (void *)puVar7[2];
        ppuStack_88 = (undefined **)puVar7[1];
        local_90 = (undefined **)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006adf50 to 006adf5f has its CatchHandler @ 006ae0e4 */
        FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        if (((ulong)local_90 & 1) != 0) {
          free(local_80);
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        if (((ulong)local_d0 & 1) != 0) {
          free(local_c0);
        }
        if (((ulong)local_f0 & 1) != 0) {
          free(local_e0);
        }
        __ptr = local_120;
        pppuVar4 = local_130;
        if ((local_110 & 1) != 0) {
          free(local_100);
          __ptr = local_120;
          pppuVar4 = local_130;
        }
        goto joined_r0x006ae034;
      }
      uVar23 = *(undefined4 *)(param_2 + 4);
      lVar14 = (long)*(int *)(pbVar9 + 4);
LAB_006ade50:
      FUN_006faf8c(param_3,uVar23,lVar14);
    }
    else if (iVar6 == 9) {
      if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) == 0) {
        FUN_00714534(&local_b0,"Value must be quoted string for string option \"",
                     *(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006ad4e0 to 006ad4ef has its CatchHandler @ 006ae360 */
        puVar7 = (undefined8 *)FUN_00713bdc(&local_b0,&DAT_001f097e);
        local_80 = (void *)puVar7[2];
        ppuStack_88 = (undefined **)puVar7[1];
        local_90 = (undefined **)*puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 006ad510 to 006ad51f has its CatchHandler @ 006ae310 */
        FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
        goto LAB_006ada48;
      }
      uVar12 = *(ulong *)(param_1[2] + 0x38);
      uVar26 = FUN_006fb29c(param_3,*(undefined4 *)(param_2 + 4));
      FUN_007139b0(uVar26,uVar12 & 0xfffffffffffffffc);
    }
    else if ((iVar6 == 10) && (uVar12 = FUN_006ae900(param_1,param_2,param_3), (uVar12 & 1) == 0))
    goto LAB_006ada68;
LAB_006ade58:
    sVar8 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_006ae35c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar8);
}


// ===== 006ae39c  FUN_006ae39c =====

void FUN_006ae39c(undefined8 *param_1)

{
  void *__ptr;
  long *__ptr_00;
  
  __ptr_00 = (long *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (long *)0x0) {
    __ptr = (void *)*__ptr_00;
    if (__ptr != (void *)__ptr_00[1]) {
                    /* try { // try from 006ae3c0 to 006ae3c7 has its CatchHandler @ 006ae3f4 */
      FUN_006fa9f8(__ptr_00);
      __ptr = (void *)*__ptr_00;
    }
    if (__ptr != (void *)0x0) {
      __ptr_00[1] = (long)__ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 006ae3f8  FUN_006ae3f8 =====

void FUN_006ae3f8(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 006ae410 to 006ae413 has its CatchHandler @ 006ae41c */
    FUN_00675910();
  }
  return;
}


// ===== 006ae420  FUN_006ae420 =====

void FUN_006ae420(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)param_1[1]) {
                    /* try { // try from 006ae440 to 006ae447 has its CatchHandler @ 006ae46c */
    FUN_006fa9f8(param_1);
    __ptr = (void *)*param_1;
  }
  if (__ptr != (void *)0x0) {
    param_1[1] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 006ae470  FUN_006ae470 =====

void FUN_006ae470(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0x11) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(param_5,param_2,param_3 << 1 ^ param_3 >> 0x1f);
      return;
    }
  }
  else if (param_4 == 0xf) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006fb08c(param_5);
      return;
    }
  }
  else if (param_4 == 5) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(param_5,param_2,(long)param_3);
      return;
    }
  }
  else {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1f95);
                    /* try { // try from 006ae538 to 006ae553 has its CatchHandler @ 006ae588 */
    uVar2 = FUN_00675a58(auStack_58,"Invalid wire type for CPPTYPE_INT32: ");
    uVar2 = FUN_00675d6c(uVar2,param_4);
                    /* try { // try from 006ae554 to 006ae55b has its CatchHandler @ 006ae584 */
    FUN_00675ac0(&uStack_59,uVar2);
    FUN_00675e7c(auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ae5b0  FUN_006ae5b0 =====

void FUN_006ae5b0(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0x12) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(param_5,param_2,param_3 << 1 ^ param_3 >> 0x3f);
      return;
    }
  }
  else if (param_4 == 0x10) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006fb194(param_5);
      return;
    }
  }
  else if (param_4 == 3) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(param_5);
      return;
    }
  }
  else {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1fac);
                    /* try { // try from 006ae674 to 006ae68f has its CatchHandler @ 006ae6c4 */
    uVar2 = FUN_00675a58(auStack_58,"Invalid wire type for CPPTYPE_INT64: ");
    uVar2 = FUN_00675d6c(uVar2,param_4);
                    /* try { // try from 006ae690 to 006ae697 has its CatchHandler @ 006ae6c0 */
    FUN_00675ac0(&uStack_59,uVar2);
    FUN_00675e7c(auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ae6ec  FUN_006ae6ec =====

void FUN_006ae6ec(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_4 == 7) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006fb08c(param_5);
      return;
    }
  }
  else if (param_4 == 0xd) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(param_5,param_2,param_3);
      return;
    }
  }
  else {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1fbe);
                    /* try { // try from 006ae780 to 006ae79b has its CatchHandler @ 006ae7d0 */
    uVar2 = FUN_00675a58(auStack_58,"Invalid wire type for CPPTYPE_UINT32: ");
    uVar2 = FUN_00675d6c(uVar2,param_4);
                    /* try { // try from 006ae79c to 006ae7a3 has its CatchHandler @ 006ae7cc */
    FUN_00675ac0(&uStack_59,uVar2);
    FUN_00675e7c(auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ae7f8  FUN_006ae7f8 =====

void FUN_006ae7f8(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w3;
  undefined8 in_x4;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (in_w3 == 6) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006fb194(in_x4);
      return;
    }
  }
  else if (in_w3 == 4) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_006faf8c(in_x4);
      return;
    }
  }
  else {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1fd0);
                    /* try { // try from 006ae888 to 006ae8a3 has its CatchHandler @ 006ae8d8 */
    uVar2 = FUN_00675a58(auStack_58,"Invalid wire type for CPPTYPE_UINT64: ");
    uVar2 = FUN_00675d6c(uVar2,in_w3);
                    /* try { // try from 006ae8a4 to 006ae8ab has its CatchHandler @ 006ae8d4 */
    FUN_00675ac0(&uStack_59,uVar2);
    FUN_00675e7c(auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ae900  FUN_006ae900 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_006ae900(undefined8 *param_1,undefined **param_2,undefined8 param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  undefined ***pppuVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  char cVar15;
  byte *pbVar16;
  undefined *puVar17;
  undefined1 uStack_151;
  undefined **local_150;
  undefined8 uStack_148;
  void *local_140;
  void *local_138;
  undefined **local_130;
  undefined ***pppuStack_128;
  void *local_120;
  undefined *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined ***local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined8 local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0;
  undefined *puStack_98;
  undefined ***local_90;
  undefined **ppuStack_88;
  void *local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) == 0) {
    FUN_00714534(&local_f8,"Option \"",param_2[1] + 0x18);
                    /* try { // try from 006ae95c to 006ae96b has its CatchHandler @ 006af078 */
    puVar10 = (ulong *)FUN_00713bdc(&local_f8,
                                    "\" is a message. To set the entire message, use syntax like \""
                                   );
    local_d0 = (void *)puVar10[2];
    uStack_d8 = puVar10[1];
    local_e0 = (undefined ***)*puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    pbVar16 = param_2[1];
    uVar3 = *(ulong *)(pbVar16 + 8);
    pbVar4 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar4 = pbVar16 + 1;
      uVar3 = (ulong)(*pbVar16 >> 1);
    }
                    /* try { // try from 006ae9a0 to 006ae9a7 has its CatchHandler @ 006af068 */
    puVar11 = (undefined8 *)FUN_0071302c(&local_e0,pbVar4,uVar3);
    local_b0 = (void *)puVar11[2];
    uStack_b8 = puVar11[1];
    local_c0 = (undefined ***)*puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
                    /* try { // try from 006ae9c0 to 006ae9cf has its CatchHandler @ 006af058 */
    puVar10 = (ulong *)FUN_00713bdc(&local_c0,
                                    " = { <proto text format> }\". To set fields within it, use syntax like \""
                                   );
    local_140 = (void *)puVar10[2];
    uStack_148 = puVar10[1];
    local_150 = (undefined **)*puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    pbVar16 = param_2[1];
    uVar3 = *(ulong *)(pbVar16 + 8);
    pbVar4 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar4 = pbVar16 + 1;
      uVar3 = (ulong)(*pbVar16 >> 1);
    }
                    /* try { // try from 006aea04 to 006aea0b has its CatchHandler @ 006af010 */
    puVar11 = (undefined8 *)FUN_0071302c(&local_150,pbVar4,uVar3);
    local_80 = (void *)puVar11[2];
    ppuStack_88 = (undefined **)puVar11[1];
    local_90 = (undefined ***)*puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
                    /* try { // try from 006aea24 to 006aea33 has its CatchHandler @ 006aefe8 */
    puVar11 = (undefined8 *)FUN_00713bdc(&local_90,".foo = value\".");
    local_120 = (void *)puVar11[2];
    pppuStack_128 = (undefined ***)puVar11[1];
    local_130 = (undefined **)*puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
                    /* try { // try from 006aea54 to 006aea63 has its CatchHandler @ 006aef9c */
    FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_130);
    if (((ulong)local_130 & 1) != 0) {
      free(local_120);
    }
    if (((ulong)local_90 & 1) != 0) {
      free(local_80);
    }
    if (((ulong)local_150 & 1) != 0) {
      free(local_140);
    }
    if (((ulong)local_c0 & 1) != 0) {
      free(local_b0);
    }
    if (((ulong)local_e0 & 1) != 0) {
      free(local_d0);
    }
    if (((ulong)local_f8 & 1) != 0) {
      free(local_e8);
    }
    uVar9 = 0;
  }
  else {
    plVar12 = (long *)param_2[3];
    if ((plVar12 != (long *)0x0) && (local_150 = param_2, *plVar12 != -1)) {
      pppuStack_128 = &local_150;
      local_130 = (undefined **)PTR_thunk_FUN_006af330_007a32d0;
      local_90 = &local_130;
      FUN_00710f84(plVar12,&local_90,FUN_006bd98c);
    }
    puVar17 = param_2[6];
    if (((ulong)*param_2 & 0xfe0000) != 0xa0000) {
      puVar17 = (undefined *)0x0;
    }
    plVar12 = (long *)FUN_006db814(param_1 + 9,puVar17);
    plVar12 = (long *)(**(code **)(*plVar12 + 0x18))(plVar12,0);
    if (plVar12 == (long *)0x0) {
                    /* try { // try from 006aeb1c to 006aeb33 has its CatchHandler @ 006aef14 */
      FUN_00675e64(&local_130,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                   ,0x1f66);
                    /* try { // try from 006aeb34 to 006aeb4f has its CatchHandler @ 006aef8c */
      uVar13 = FUN_00675a58(&local_130,"CHECK failed: dynamic.get() != nullptr: ");
      uVar13 = FUN_00675a58(uVar13,"Could not create an instance of ");
      local_150 = (undefined **)((ulong)local_150 & 0xffffffffff000000);
                    /* try { // try from 006aeb5c to 006aeb6b has its CatchHandler @ 006aef10 */
      FUN_00692e50(&local_90,param_2,&local_150);
                    /* try { // try from 006aeb6c to 006aeb7b has its CatchHandler @ 006aeef8 */
      uVar13 = FUN_00675a80(uVar13,&local_90);
                    /* try { // try from 006aeb7c to 006aeb83 has its CatchHandler @ 006aeef4 */
      FUN_00675ac0(&local_c0,uVar13);
      if (((ulong)local_90 & 1) != 0) {
        free(local_80);
      }
      FUN_00675e7c(&local_130);
    }
    local_150 = &PTR_FUN_007993e0;
    uStack_148 = 0;
    uStack_f0 = *param_1;
    local_140 = (void *)0x0;
    local_138 = (void *)0x0;
    local_f8 = PTR_DAT_007a3318 + 0x10;
                    /* try { // try from 006aebc0 to 006aebc7 has its CatchHandler @ 006af050 */
    FUN_006eaef8(&local_90);
    local_90 = &local_150;
    ppuStack_88 = &local_f8;
                    /* try { // try from 006aebdc to 006aebeb has its CatchHandler @ 006af008 */
    uVar9 = FUN_006eb2f4(&local_90,*(ulong *)(param_1[2] + 0x40) & 0xfffffffffffffffc,plVar12);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 006aec74 to 006aec83 has its CatchHandler @ 006aef88 */
      FUN_00714534(&local_e0,"Error while parsing option value for \"",param_2[1]);
                    /* try { // try from 006aec84 to 006aec93 has its CatchHandler @ 006aef74 */
      puVar10 = (ulong *)FUN_00713bdc(&local_e0,&DAT_001fb26c);
      local_b0 = (void *)puVar10[2];
      uStack_b8 = puVar10[1];
      local_c0 = (undefined ***)*puVar10;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      pvVar2 = (void *)(uStack_148 >> 1 & 0x7f);
      pvVar6 = (void *)((long)&uStack_148 + 1);
      if ((uStack_148 & 1) != 0) {
        pvVar2 = local_140;
        pvVar6 = local_138;
      }
                    /* try { // try from 006aeccc to 006aecd3 has its CatchHandler @ 006aef54 */
      puVar11 = (undefined8 *)FUN_0071302c(&local_c0,pvVar6,pvVar2);
      local_120 = (void *)puVar11[2];
      pppuStack_128 = (undefined ***)puVar11[1];
      local_130 = (undefined **)*puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
                    /* try { // try from 006aecf4 to 006aed03 has its CatchHandler @ 006aef20 */
      FUN_00695b70(*param_1,param_1[1] + 0x18,param_1[2],8,&local_130);
      if (((ulong)local_130 & 1) != 0) {
        free(local_120);
      }
      pvVar2 = local_d0;
      pppuVar7 = local_e0;
      if (((ulong)local_c0 & 1) != 0) {
        free(local_b0);
        pvVar2 = local_d0;
        pppuVar7 = local_e0;
      }
    }
    else {
      local_c0 = (undefined ***)0x0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
                    /* try { // try from 006aebfc to 006aec6b has its CatchHandler @ 006af090 */
      FUN_0066ee04(plVar12,&local_c0);
      plVar14 = (long *)param_2[3];
      if ((plVar14 != (long *)0x0) &&
         (puStack_98 = PTR_thunk_FUN_006af330_007a32d0, local_a0 = param_2, *plVar14 != -1)) {
        local_130 = &puStack_98;
        pppuStack_128 = &local_a0;
        local_e0 = &local_130;
        FUN_00710f84(plVar14,&local_e0,FUN_00685640);
      }
      cVar15 = *(char *)((long)param_2 + 2);
      if (cVar15 == '\v') {
        uVar13 = FUN_006fb29c(param_3,*(undefined4 *)((long)param_2 + 4));
        FUN_007139b0(uVar13,&local_c0);
        pvVar2 = local_b0;
        pppuVar7 = local_c0;
      }
      else {
        plVar14 = (long *)param_2[3];
        if (plVar14 != (long *)0x0) {
          puStack_98 = PTR_thunk_FUN_006af330_007a32d0;
          local_a0 = param_2;
          if (*plVar14 != -1) {
            local_130 = &puStack_98;
            pppuStack_128 = &local_a0;
            local_e0 = &local_130;
                    /* try { // try from 006aeda8 to 006aedb7 has its CatchHandler @ 006af090 */
            FUN_00710f84(plVar14,&local_e0,FUN_00685640);
          }
          cVar15 = *(char *)((long)param_2 + 2);
        }
        if (cVar15 != '\n') {
                    /* try { // try from 006aedc4 to 006aeddb has its CatchHandler @ 006aeef0 */
          FUN_00675e64(&local_130,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x1f7a);
                    /* try { // try from 006aeddc to 006aedef has its CatchHandler @ 006aeee0 */
          uVar13 = FUN_00675a58(&local_130,
                                "CHECK failed: (option_field->type()) == (FieldDescriptor::TYPE_GROUP): "
                               );
                    /* try { // try from 006aedf0 to 006aedf7 has its CatchHandler @ 006aeedc */
          FUN_00675ac0(&uStack_151,uVar13);
          FUN_00675e7c(&local_130);
        }
                    /* try { // try from 006aee04 to 006aee2f has its CatchHandler @ 006aef1c */
        uVar13 = FUN_006fb3b0(param_3,*(undefined4 *)((long)param_2 + 4));
        bVar8 = ((ulong)local_c0 & 1) == 0;
        pvVar2 = local_b0;
        if (bVar8) {
          pvVar2 = (void *)((long)&local_c0 + 1);
        }
        uVar1 = (uint)((byte)local_c0 >> 1);
        if (!bVar8) {
          uVar1 = (uint)uStack_b8;
        }
        FUN_006fb714(uVar13,pvVar2,uVar1);
        pvVar2 = local_b0;
        pppuVar7 = local_c0;
      }
    }
    if (((ulong)pppuVar7 & 1) != 0) {
      free(pvVar2);
    }
    FUN_006eaf0c(&local_90);
    FUN_006eadd4(&local_f8);
    local_150 = &PTR_FUN_007993e0;
    if ((uStack_148 & 1) != 0) {
      free(local_138);
    }
    FUN_006dbee8(&local_150);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006af0ec  FUN_006af0ec =====

void FUN_006af0ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007993e0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_006dbee8(param_1);
  return;
}


// ===== 006af12c  FUN_006af12c =====

void FUN_006af12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  char *__dest;
  ulong local_98;
  ulong uStack_90;
  char *local_88;
  undefined8 local_80;
  ulong uStack_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = param_2;
  uStack_60 = param_3;
  uVar3 = FUN_00675c30(&local_80,&local_68);
  uVar5 = (ulong)((byte)local_80 >> 1);
  bVar6 = (byte)local_80 & 1;
  uVar1 = uVar5;
  if ((local_80 & 1) != 0) {
    uVar1 = uStack_78;
  }
  if (uVar1 != 0) {
    pcVar4 = local_70;
    if ((local_80 & 1) == 0) {
      pcVar4 = (char *)((long)&local_80 + 1);
    }
    if (*pcVar4 == '.') {
      uVar5 = uVar1 - 1;
      pcVar4 = (char *)((ulong)&local_80 | 2);
      if ((local_80 & 1) != 0) {
        pcVar4 = local_70 + 1;
      }
      if (0xfffffffffffffff7 < uVar5) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 006af2f4 to 006af2fb has its CatchHandler @ 006af2fc */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_98);
        }
        goto LAB_006af32c;
      }
      if (uVar1 < 0x18) {
        __dest = (char *)((ulong)&local_98 | 1);
        local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar5 << 1));
        if (uVar5 != 0) goto LAB_006af2a8;
        *__dest = '\0';
        if ((local_80 & 1) != 0) goto LAB_006af1e0;
      }
      else {
        uVar1 = (uVar5 & 0xfffffffffffffff8) + 8;
        if ((uVar5 | 7) != 0x17) {
          uVar1 = uVar5 | 7;
        }
                    /* try { // try from 006af290 to 006af297 has its CatchHandler @ 006af2fc */
        __dest = (char *)FUN_00759c3c(uVar1 + 1);
        local_98 = uVar1 + 1 | 1;
        uStack_90 = uVar5;
        local_88 = __dest;
LAB_006af2a8:
        memmove(__dest,pcVar4,uVar5);
        __dest[uVar5] = '\0';
        if (((byte)local_80 & 1) != 0) {
LAB_006af1e0:
          free(local_70);
        }
      }
      uStack_78 = uStack_90;
      local_80 = local_98;
      uVar1 = local_80;
      local_80._0_1_ = (byte)local_98;
      local_70 = local_88;
      uVar5 = (ulong)((byte)local_80 >> 1);
      bVar6 = (byte)local_80 & 1;
      local_80 = uVar1;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = local_70;
  uVar1 = uStack_78;
  if (bVar6 == 0) {
    pcVar4 = (char *)((long)&local_80 + 1);
    uVar1 = uVar5;
  }
  if ((long)uVar1 < 0) {
                    /* try { // try from 006af2c8 to 006af2df has its CatchHandler @ 006af300 */
    FUN_00676318(uVar1,"string length exceeds max size");
  }
                    /* try { // try from 006af220 to 006af22f has its CatchHandler @ 006af300 */
  uVar3 = FUN_00688c70(uVar3,param_1,pcVar4,uVar1);
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_006af32c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006af330  FUN_006af330 =====

void FUN_006af330(long param_1)

{
  ulong __n;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  void *__dest;
  ulong local_d8;
  ulong local_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte local_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  byte *local_90;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 2) & 1) == 0) {
    FUN_00675e64(&local_a0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1ffc);
                    /* try { // try from 006af380 to 006af393 has its CatchHandler @ 006af794 */
    uVar5 = FUN_00675a58(&local_a0,"CHECK failed: file()->finished_building_ == true: ");
                    /* try { // try from 006af394 to 006af39b has its CatchHandler @ 006af790 */
    FUN_00675ac0(&local_c0,uVar5);
    FUN_00675e7c(&local_a0);
  }
  pcVar12 = (char *)(*(long *)(param_1 + 0x18) + 8);
  sVar6 = strlen(pcVar12);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  sVar7 = strlen(pcVar12);
  if ((long)sVar7 < 0) {
    FUN_00676318(sVar7,"string length exceeds max size");
  }
  pcVar8 = (char *)FUN_006af12c(uVar5,pcVar12,sVar7,0);
  if (*pcVar8 == '\x04') {
    *(char **)(param_1 + 0x30) = pcVar8;
    *(undefined1 *)(param_1 + 2) = 0xe;
    if (pcVar12[sVar6 + 1] == '\0') {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar13 = *(long *)(pcVar8 + 8);
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar13 + 0x18);
        local_90 = *(byte **)(lVar13 + 0x28);
        uStack_98 = (undefined2)*(undefined8 *)(lVar13 + 0x20);
        uStack_96 = (undefined6)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x10);
        local_a0 = (byte)uVar5;
        bStack_9f = (byte)((ulong)uVar5 >> 8);
        uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
      }
      else {
        FUN_002fb36c(&local_a0,*(undefined8 *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x20));
      }
      uVar9 = FUN_007135a0(&local_a0,0x2e,0xffffffffffffffff);
      if (uVar9 == 0xffffffffffffffff) {
                    /* try { // try from 006af4c0 to 006af4cb has its CatchHandler @ 006af6f8 */
        FUN_0071396c(&local_a0,pcVar12 + sVar6 + 1);
      }
      else {
        __n = CONCAT62(uStack_96,uStack_98);
        pbVar1 = local_90;
        if ((local_a0 & 1) == 0) {
          pbVar1 = &bStack_9f;
          __n = (ulong)(local_a0 >> 1);
        }
        if (uVar9 <= __n) {
          __n = uVar9;
        }
        if (0xfffffffffffffff7 < __n) {
          if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 006af6e8 to 006af6ef has its CatchHandler @ 006af764 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_d8);
          }
          goto LAB_006af7b0;
        }
        if (__n < 0x17) {
          __dest = (void *)((ulong)&local_d8 | 1);
          local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n << 1));
          if (__n != 0) goto LAB_006af500;
        }
        else {
          uVar9 = (__n & 0xfffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar9 = __n | 7;
          }
                    /* try { // try from 006af4e8 to 006af4ef has its CatchHandler @ 006af764 */
          __dest = (void *)FUN_00759c3c(uVar9 + 1);
          local_d8 = uVar9 + 1 | 1;
          local_d0 = __n;
          local_c8 = __dest;
LAB_006af500:
          memmove(__dest,pbVar1,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006af514 to 006af523 has its CatchHandler @ 006af744 */
        puVar10 = (ulong *)FUN_00713bdc(&local_d8,&DAT_001c773b);
        local_b0 = (void *)puVar10[2];
        uStack_b8 = puVar10[1];
        local_c0 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
                    /* try { // try from 006af53c to 006af547 has its CatchHandler @ 006af6fc */
        pbVar11 = (byte *)FUN_00713bdc(&local_c0,pcVar12 + sVar6 + 1);
        bVar2 = *pbVar11;
        uVar5 = *(undefined8 *)(pbVar11 + 8);
        pbVar1 = *(byte **)(pbVar11 + 0x10);
        bVar3 = pbVar11[1];
        uVar14 = *(undefined8 *)(pbVar11 + 2);
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
        pbVar11[0x10] = 0;
        pbVar11[0x11] = 0;
        pbVar11[0x12] = 0;
        pbVar11[0x13] = 0;
        pbVar11[0x14] = 0;
        pbVar11[0x15] = 0;
        pbVar11[0x16] = 0;
        pbVar11[0x17] = 0;
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        local_68 = (undefined6)uVar14;
        uStack_62 = (undefined2)uVar5;
        uStack_60 = (undefined6)((ulong)uVar5 >> 0x10);
        if ((local_a0 & 1) != 0) {
          free(local_90);
        }
        uStack_9e = local_68;
        uStack_98 = uStack_62;
        uStack_96 = uStack_60;
        local_a0 = bVar2;
        bStack_9f = bVar3;
        local_90 = pbVar1;
        if ((local_c0 & 1) != 0) {
          free(local_b0);
        }
        if ((local_d8 & 1) != 0) {
          free(local_c8);
        }
      }
      uVar9 = CONCAT62(uStack_96,uStack_98);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      pbVar1 = local_90;
      if ((local_a0 & 1) == 0) {
        pbVar1 = &bStack_9f;
        uVar9 = (ulong)(local_a0 >> 1);
      }
      if ((long)uVar9 < 0) {
                    /* try { // try from 006af6bc to 006af6d3 has its CatchHandler @ 006af768 */
        FUN_00676318(uVar9,"string length exceeds max size");
      }
                    /* try { // try from 006af5d8 to 006af5e7 has its CatchHandler @ 006af768 */
      pcVar12 = (char *)FUN_006af12c(uVar5,pbVar1,uVar9,0);
      if (*pcVar12 == '\x05') {
LAB_006af600:
        *(char **)(param_1 + 0x40) = pcVar12;
      }
      else {
        if (*pcVar12 == '\x06') {
          pcVar12 = pcVar12 + -1;
          goto LAB_006af600;
        }
        pcVar12 = (char *)0x0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
        pcVar12 = *(char **)(param_1 + 0x40);
      }
      if (pcVar12 != (char *)0x0) goto LAB_006af668;
    }
    if (*(int *)(pcVar8 + 4) == 0) {
      FUN_00675e64(&local_a0,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                   ,0x201f);
                    /* try { // try from 006af63c to 006af64f has its CatchHandler @ 006af6f4 */
      uVar5 = FUN_00675a58(&local_a0,"CHECK failed: enum_type->value_count(): ");
                    /* try { // try from 006af650 to 006af657 has its CatchHandler @ 006af6f0 */
      FUN_00675ac0(&local_c0,uVar5);
      FUN_00675e7c(&local_a0);
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pcVar8 + 0x28);
  }
  else if (*pcVar8 == '\x01') {
    *(char **)(param_1 + 0x30) = pcVar8;
    *(undefined1 *)(param_1 + 2) = 0xb;
  }
LAB_006af668:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_006af7b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006af7b4  thunk_FUN_006af330 =====

void thunk_FUN_006af330(long param_1)

{
  ulong __n;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  void *__dest;
  ulong uStack_d8;
  ulong uStack_d0;
  void *pvStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  void *pvStack_b0;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  byte *pbStack_90;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 2) & 1) == 0) {
    FUN_00675e64(&bStack_a0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x1ffc);
    uVar5 = FUN_00675a58(&bStack_a0,"CHECK failed: file()->finished_building_ == true: ");
    FUN_00675ac0(&uStack_c0,uVar5);
    FUN_00675e7c(&bStack_a0);
  }
  pcVar12 = (char *)(*(long *)(param_1 + 0x18) + 8);
  sVar6 = strlen(pcVar12);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  sVar7 = strlen(pcVar12);
  if ((long)sVar7 < 0) {
    FUN_00676318(sVar7,"string length exceeds max size");
  }
  pcVar8 = (char *)FUN_006af12c(uVar5,pcVar12,sVar7,0);
  if (*pcVar8 == '\x04') {
    *(char **)(param_1 + 0x30) = pcVar8;
    *(undefined1 *)(param_1 + 2) = 0xe;
    if (pcVar12[sVar6 + 1] == '\0') {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar13 = *(long *)(pcVar8 + 8);
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar13 + 0x18);
        pbStack_90 = *(byte **)(lVar13 + 0x28);
        uStack_98 = (undefined2)*(undefined8 *)(lVar13 + 0x20);
        uStack_96 = (undefined6)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x10);
        bStack_a0 = (byte)uVar5;
        bStack_9f = (byte)((ulong)uVar5 >> 8);
        uStack_9e = (undefined6)((ulong)uVar5 >> 0x10);
      }
      else {
        FUN_002fb36c(&bStack_a0,*(undefined8 *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x20));
      }
      uVar9 = FUN_007135a0(&bStack_a0,0x2e,0xffffffffffffffff);
      if (uVar9 == 0xffffffffffffffff) {
        FUN_0071396c(&bStack_a0,pcVar12 + sVar6 + 1);
      }
      else {
        __n = CONCAT62(uStack_96,uStack_98);
        pbVar1 = pbStack_90;
        if ((bStack_a0 & 1) == 0) {
          pbVar1 = &bStack_9f;
          __n = (ulong)(bStack_a0 >> 1);
        }
        if (uVar9 <= __n) {
          __n = uVar9;
        }
        if (0xfffffffffffffff7 < __n) {
          if (*(long *)(lVar4 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&uStack_d8);
          }
          goto LAB_006af7b0;
        }
        if (__n < 0x17) {
          __dest = (void *)((ulong)&uStack_d8 | 1);
          uStack_d8 = CONCAT71(uStack_d8._1_7_,(char)((int)__n << 1));
          if (__n != 0) goto LAB_006af500;
        }
        else {
          uVar9 = (__n & 0xfffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar9 = __n | 7;
          }
          __dest = (void *)FUN_00759c3c(uVar9 + 1);
          uStack_d8 = uVar9 + 1 | 1;
          uStack_d0 = __n;
          pvStack_c8 = __dest;
LAB_006af500:
          memmove(__dest,pbVar1,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        puVar10 = (ulong *)FUN_00713bdc(&uStack_d8,&DAT_001c773b);
        pvStack_b0 = (void *)puVar10[2];
        uStack_b8 = puVar10[1];
        uStack_c0 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        pbVar11 = (byte *)FUN_00713bdc(&uStack_c0,pcVar12 + sVar6 + 1);
        bVar2 = *pbVar11;
        uVar5 = *(undefined8 *)(pbVar11 + 8);
        pbVar1 = *(byte **)(pbVar11 + 0x10);
        bVar3 = pbVar11[1];
        uVar14 = *(undefined8 *)(pbVar11 + 2);
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
        pbVar11[0x10] = 0;
        pbVar11[0x11] = 0;
        pbVar11[0x12] = 0;
        pbVar11[0x13] = 0;
        pbVar11[0x14] = 0;
        pbVar11[0x15] = 0;
        pbVar11[0x16] = 0;
        pbVar11[0x17] = 0;
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        uStack_68 = (undefined6)uVar14;
        uStack_62 = (undefined2)uVar5;
        uStack_60 = (undefined6)((ulong)uVar5 >> 0x10);
        if ((bStack_a0 & 1) != 0) {
          free(pbStack_90);
        }
        uStack_9e = uStack_68;
        uStack_98 = uStack_62;
        uStack_96 = uStack_60;
        bStack_a0 = bVar2;
        bStack_9f = bVar3;
        pbStack_90 = pbVar1;
        if ((uStack_c0 & 1) != 0) {
          free(pvStack_b0);
        }
        if ((uStack_d8 & 1) != 0) {
          free(pvStack_c8);
        }
      }
      uVar9 = CONCAT62(uStack_96,uStack_98);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      pbVar1 = pbStack_90;
      if ((bStack_a0 & 1) == 0) {
        pbVar1 = &bStack_9f;
        uVar9 = (ulong)(bStack_a0 >> 1);
      }
      if ((long)uVar9 < 0) {
        FUN_00676318(uVar9,"string length exceeds max size");
      }
      pcVar12 = (char *)FUN_006af12c(uVar5,pbVar1,uVar9,0);
      if (*pcVar12 == '\x05') {
LAB_006af600:
        *(char **)(param_1 + 0x40) = pcVar12;
      }
      else {
        if (*pcVar12 == '\x06') {
          pcVar12 = pcVar12 + -1;
          goto LAB_006af600;
        }
        pcVar12 = (char *)0x0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      if ((bStack_a0 & 1) != 0) {
        free(pbStack_90);
        pcVar12 = *(char **)(param_1 + 0x40);
      }
      if (pcVar12 != (char *)0x0) goto LAB_006af668;
    }
    if (*(int *)(pcVar8 + 4) == 0) {
      FUN_00675e64(&bStack_a0,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                   ,0x201f);
      uVar5 = FUN_00675a58(&bStack_a0,"CHECK failed: enum_type->value_count(): ");
      FUN_00675ac0(&uStack_c0,uVar5);
      FUN_00675e7c(&bStack_a0);
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(pcVar8 + 0x28);
  }
  else if (*pcVar8 == '\x01') {
    *(char **)(param_1 + 0x30) = pcVar8;
    *(undefined1 *)(param_1 + 2) = 0xb;
  }
LAB_006af668:
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
LAB_006af7b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006af7b8  FUN_006af7b8 =====

long FUN_006af7b8(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined *local_48;
  undefined ***local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((byte)param_1[1] >> 3 & 1) != 0) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x48) != '\0')) {
    plVar4 = *(long **)(param_1 + 0x18);
    if ((plVar4 != (long *)0x0) &&
       (local_48 = PTR_thunk_FUN_006af330_007a32d0, local_80 = param_1, *plVar4 != -1)) {
      local_78 = &local_48;
      local_40 = &local_78;
      ppuStack_70 = &local_80;
      FUN_00710f84(plVar4,&local_40,FUN_00685640);
    }
    if ((param_1[2] == '\v') && ((param_1[1] & 0x60) == 0x20)) {
      if (((byte)param_1[1] >> 3 & 1) == 0) {
        FUN_00675e64(&local_78,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.h"
                     ,0x8e6);
                    /* try { // try from 006af880 to 006af893 has its CatchHandler @ 006af9a4 */
        uVar3 = FUN_00675a58(&local_78,"CHECK failed: is_extension_: ");
                    /* try { // try from 006af894 to 006af89b has its CatchHandler @ 006af9a0 */
        FUN_00675ac0(&local_40,uVar3);
        FUN_00675e7c(&local_78);
      }
      plVar4 = *(long **)(param_1 + 0x18);
      puVar6 = *(undefined **)(param_1 + 0x28);
      if ((plVar4 != (long *)0x0) && (local_48 = param_1, *plVar4 != -1)) {
        ppuStack_70 = &local_48;
        local_78 = (undefined **)PTR_thunk_FUN_006af330_007a32d0;
        local_40 = &local_78;
        FUN_00710f84(plVar4,&local_40,FUN_006bd98c);
      }
      bVar5 = param_1[2] & 0xfe;
      puVar1 = *(undefined **)(param_1 + 0x30);
      if (bVar5 != 10) {
        puVar1 = (undefined *)0x0;
      }
      if (puVar6 == puVar1) {
        plVar4 = *(long **)(param_1 + 0x18);
        puVar6 = *(undefined **)(param_1 + 0x30);
        if (plVar4 != (long *)0x0) {
          local_48 = param_1;
          if (*plVar4 != -1) {
            ppuStack_70 = &local_48;
            local_78 = (undefined **)PTR_thunk_FUN_006af330_007a32d0;
            local_40 = &local_78;
            FUN_00710f84(plVar4,&local_40,FUN_006bd98c);
          }
          bVar5 = param_1[2] & 0xfe;
          puVar6 = *(undefined **)(param_1 + 0x30);
        }
        param_1 = puVar6;
        if (bVar5 != 10) {
          param_1 = (undefined *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(long *)(param_1 + 8) + 0x18;
}


// ===== 006af9cc  FUN_006af9cc =====

void FUN_006af9cc(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t __n;
  void *__dest;
  char *__s;
  undefined8 uVar5;
  long lVar6;
  undefined1 uStack_99;
  ulong local_98;
  size_t local_90;
  void *local_88;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    FUN_00675e64(&local_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x204d);
                    /* try { // try from 006afa2c to 006afa3f has its CatchHandler @ 006afb8c */
    uVar5 = FUN_00675a58(&local_98,"CHECK failed: finished_building_ == true: ");
                    /* try { // try from 006afa40 to 006afa47 has its CatchHandler @ 006afb88 */
    FUN_00675ac0(&uStack_99,uVar5);
    FUN_00675e7c(&local_98);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar2) {
    lVar6 = 0;
    __s = (char *)(*(long *)(param_1 + 0x20) + 8);
    do {
      sVar4 = strlen(__s);
      if (*__s != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        __n = strlen(__s);
        if (0xfffffffffffffff7 < __n) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_98);
          }
          goto LAB_006afbc8;
        }
        if (__n < 0x17) {
          local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_98 | 1);
          if (__n != 0) goto LAB_006afb04;
        }
        else {
          uVar1 = (__n & 0xfffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar1 = __n | 7;
          }
          __dest = (void *)FUN_00759c3c(uVar1 + 1);
          local_98 = uVar1 + 1 | 1;
          local_90 = __n;
          local_88 = __dest;
LAB_006afb04:
          memmove(__dest,__s,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006afb18 to 006afb23 has its CatchHandler @ 006afb9c */
        uVar5 = FUN_0068baf0(uVar5,&local_98);
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6 * 8) = uVar5;
        if ((local_98 & 1) != 0) {
          free(local_88);
        }
      }
      lVar6 = lVar6 + 1;
      __s = __s + sVar4 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x28));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_006afbc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006afbcc  thunk_FUN_006af9cc =====

void thunk_FUN_006af9cc(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t __n;
  void *__dest;
  char *__s;
  undefined8 uVar5;
  long lVar6;
  undefined1 uStack_99;
  ulong uStack_98;
  size_t sStack_90;
  void *pvStack_88;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    FUN_00675e64(&uStack_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x204d);
    uVar5 = FUN_00675a58(&uStack_98,"CHECK failed: finished_building_ == true: ");
    FUN_00675ac0(&uStack_99,uVar5);
    FUN_00675e7c(&uStack_98);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar2) {
    lVar6 = 0;
    __s = (char *)(*(long *)(param_1 + 0x20) + 8);
    do {
      sVar4 = strlen(__s);
      if (*__s != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        __n = strlen(__s);
        if (0xfffffffffffffff7 < __n) {
          if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&uStack_98);
          }
          goto LAB_006afbc8;
        }
        if (__n < 0x17) {
          uStack_98 = CONCAT71(uStack_98._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&uStack_98 | 1);
          if (__n != 0) goto LAB_006afb04;
        }
        else {
          uVar1 = (__n & 0xfffffffffffffff8) + 8;
          if ((__n | 7) != 0x17) {
            uVar1 = __n | 7;
          }
          __dest = (void *)FUN_00759c3c(uVar1 + 1);
          uStack_98 = uVar1 + 1 | 1;
          sStack_90 = __n;
          pvStack_88 = __dest;
LAB_006afb04:
          memmove(__dest,__s,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        uVar5 = FUN_0068baf0(uVar5,&uStack_98);
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar6 * 8) = uVar5;
        if ((uStack_98 & 1) != 0) {
          free(pvStack_88);
        }
      }
      lVar6 = lVar6 + 1;
      __s = __s + sVar4 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x28));
  }
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_006afbc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006afbd0  FUN_006afbd0 =====

long * FUN_006afbd0(long *param_1,undefined8 *param_2)

{
  byte *__s2;
  size_t __n;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = (byte *)*param_2;
  __n = param_2[1];
  if ((long)__n < 1) {
    uVar7 = 0;
    uVar9 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar4 = __s2;
    do {
      pbVar5 = pbVar4 + 1;
      uVar7 = uVar7 * 5 + (ulong)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < __s2 + __n);
    uVar9 = param_1[1];
  }
  if (uVar9 == 0) {
    return (long *)0x0;
  }
  uVar11 = NEON_cnt(uVar9,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar3 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar3 < 2) {
    uVar8 = uVar9 - 1 & uVar7;
  }
  else {
    uVar8 = uVar7;
    if (uVar9 <= uVar7) {
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar7 / uVar9;
      }
      uVar8 = uVar7 - uVar8 * uVar9;
    }
  }
  plVar6 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          if (uVar7 == plVar6[1]) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar6[1];
          if (uVar7 == uVar3) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else {
            if (uVar9 <= uVar3) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar3 / uVar9;
              }
              uVar3 = uVar3 - uVar1 * uVar9;
            }
            if (uVar3 != uVar8) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    return plVar6;
  }
  return (long *)0x0;
}


// ===== 006afd7c  FUN_006afd7c =====

void FUN_006afd7c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006afd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// ===== 006afd90  FUN_006afd90 =====

long * FUN_006afd90(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  
  auVar9 = FUN_006aff00(param_2);
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar8 = NEON_cnt(uVar6,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar4 = (long)auVar9._8_4_ * 0x1000193 ^ auVar9._0_8_ * 0x100011b;
    uVar2 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
    if (uVar2 < 2) {
      uVar5 = uVar4 & uVar6 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar4 / uVar6;
        }
        uVar5 = uVar4 - uVar5 * uVar6;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar2 < 2) {
        do {
          if (uVar4 == plVar3[1]) {
            auVar9 = FUN_006aff00(plVar3 + 2);
            auVar10 = FUN_006aff00(param_2);
            if (auVar9 == auVar10) {
              return plVar3;
            }
          }
          else if ((plVar3[1] & uVar6 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar2 = plVar3[1];
        if (uVar4 == uVar2) {
          auVar9 = FUN_006aff00(plVar3 + 2);
          auVar10 = FUN_006aff00(param_2);
          if (auVar9 == auVar10) {
            return plVar3;
          }
        }
        else {
          if (uVar6 <= uVar2) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar2 / uVar6;
            }
            uVar2 = uVar2 - uVar1 * uVar6;
          }
          if (uVar2 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 006aff00  FUN_006aff00 =====

void FUN_006aff00(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)*param_1;
  cVar1 = *pcVar4;
  if (cVar1 == '\v') {
    uVar3 = *(undefined8 *)(pcVar4 + 0x18);
  }
  else if (cVar1 == '\x05') {
    uVar3 = *(undefined8 *)(pcVar4 + 0x10);
  }
  else if (cVar1 == '\x02') {
    uVar3 = *(undefined8 *)(pcVar4 + 0x20);
  }
  else {
    FUN_00675e64(auStack_58,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x311);
                    /* try { // try from 006aff74 to 006aff87 has its CatchHandler @ 006affc8 */
    uVar3 = FUN_00675a58(auStack_58,"CHECK failed: false: ");
                    /* try { // try from 006aff88 to 006aff8f has its CatchHandler @ 006affc4 */
    FUN_00675ac0(&uStack_59,uVar3);
    FUN_00675e7c(auStack_58);
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 006afff0  FUN_006afff0 =====

long FUN_006afff0(long param_1,ulong param_2,long *param_3)

{
  byte *__s2;
  size_t __n;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = (byte *)param_3[1];
  __n = param_3[2];
  if ((long)__n < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    pbVar6 = __s2;
    do {
      pbVar7 = pbVar6 + 1;
      uVar3 = uVar3 * 5 + (ulong)*pbVar6;
      pbVar6 = pbVar7;
    } while (pbVar7 < __s2 + __n);
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar8 = *param_3;
  uVar11 = NEON_cnt(param_2,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar3 = uVar3 ^ lVar8 * 0x1000193;
  uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar5 < 2) {
    uVar9 = uVar3 & param_2 - 1;
  }
  else {
    uVar9 = uVar3;
    if (param_2 <= uVar3) {
      uVar9 = 0;
      if (param_2 != 0) {
        uVar9 = uVar3 / param_2;
      }
      uVar9 = uVar3 - uVar9 * param_2;
    }
  }
  plVar4 = *(long **)(param_1 + uVar9 * 8);
  if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
    if (uVar5 < 2) {
      if (__n == 0) {
        do {
          if (uVar3 == plVar4[1]) {
            if ((plVar4[2] == lVar8) && (plVar4[4] == 0)) goto LAB_006b015c;
          }
          else if ((plVar4[1] & param_2 - 1) != uVar9) {
            return 0;
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (uVar3 == plVar4[1]) {
          if (((plVar4[2] == lVar8) && (plVar4[4] == __n)) &&
             ((__s2 == (byte *)plVar4[3] || (iVar2 = memcmp((byte *)plVar4[3],__s2,__n), iVar2 == 0)
              ))) {
LAB_006b015c:
            return plVar4[5];
          }
        }
        else if ((plVar4[1] & param_2 - 1) != uVar9) {
          return 0;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      if (__n == 0) {
        do {
          uVar5 = plVar4[1];
          if (uVar3 == uVar5) {
            if ((plVar4[2] == lVar8) && (plVar4[4] == 0)) goto LAB_006b015c;
          }
          else {
            if (param_2 <= uVar5) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar5 / param_2;
              }
              uVar5 = uVar5 - uVar1 * param_2;
            }
            if (uVar5 != uVar9) {
              return 0;
            }
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar4[1];
        if (uVar3 == uVar5) {
          if (((plVar4[2] == lVar8) && (plVar4[4] == __n)) &&
             ((__s2 == (byte *)plVar4[3] || (iVar2 = memcmp((byte *)plVar4[3],__s2,__n), iVar2 == 0)
              ))) goto LAB_006b015c;
        }
        else {
          if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar9) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 006b0258  FUN_006b0258 =====

void FUN_006b0258(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*param_1)(*(undefined8 *)((undefined8 *)*param_1)[1]);
  return;
}


// ===== 006b026c  FUN_006b026c =====

long * FUN_006b026c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  
  auVar9 = FUN_006aff00(param_2);
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar8 = NEON_cnt(uVar6,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar4 = (long)auVar9._8_4_ * 0x1000193 ^ auVar9._0_8_ * 0x100011b;
    uVar2 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
    if (uVar2 < 2) {
      uVar5 = uVar4 & uVar6 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar4 / uVar6;
        }
        uVar5 = uVar4 - uVar5 * uVar6;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == uVar4) {
            auVar9 = FUN_006aff00(plVar3 + 2);
            auVar10 = FUN_006aff00(param_2);
            if (auVar9 == auVar10) {
              return plVar3;
            }
          }
          else if ((plVar3[1] & uVar6 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar2 = plVar3[1];
        if (uVar2 == uVar4) {
          auVar9 = FUN_006aff00(plVar3 + 2);
          auVar10 = FUN_006aff00(param_2);
          if (auVar9 == auVar10) {
            return plVar3;
          }
        }
        else {
          if (uVar6 <= uVar2) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar2 / uVar6;
            }
            uVar2 = uVar2 - uVar1 * uVar6;
          }
          if (uVar2 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 006b03dc  FUN_006b03dc =====

long FUN_006b03dc(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == 0) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006b0424 to 006b0437 has its CatchHandler @ 006b04d8 */
    uVar3 = FUN_00675a58(auStack_68,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006b0438 to 006b043f has its CatchHandler @ 006b04d4 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  lVar2 = param_1[0x14];
  lVar4 = param_1[1];
  param_2 = (int)lVar2 + param_2;
  *(int *)(param_1 + 0x14) = param_2;
  if (*(int *)((long)param_1 + 0x6c) < param_2) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006b0484 to 006b0497 has its CatchHandler @ 006b04e0 */
    uVar3 = FUN_00675a58(auStack_68,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006b0498 to 006b049f has its CatchHandler @ 006b04dc */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar4 + (long)(int)lVar2 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b0508  FUN_006b0508 =====

void FUN_006b0508(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x48);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          free(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x40);
    }
    *(byte **)(param_1 + 0x48) = pbVar2;
    free(pbVar3);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    free(*(void **)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    free(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 006b05a4  FUN_006b05a4 =====

void FUN_006b05a4(undefined8 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  byte *pbVar7;
  byte *local_288;
  byte *local_280;
  undefined8 local_278;
  undefined8 local_270;
  ulong uStack_268;
  void *local_260;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_100;
  undefined4 local_f8;
  byte *local_d0;
  uint local_c8;
  long local_a0;
  uint local_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if ((*param_3 & 1) == 0) {
    uStack_268 = param_3[1];
    local_270 = *param_3;
    local_260 = (void *)param_3[2];
  }
  else {
    FUN_002fb36c(&local_270,param_3[2],param_3[1]);
  }
                    /* try { // try from 006b0600 to 006b060b has its CatchHandler @ 006b07f8 */
  FUN_00676c18(&local_270);
  uVar1 = uStack_268;
  pvVar3 = local_260;
  if ((local_270 & 1) == 0) {
    uVar1 = local_270 >> 1 & 0x7f;
    pvVar3 = (void *)((long)&local_270 + 1);
  }
  if ((long)uVar1 < 0) {
                    /* try { // try from 006b07c8 to 006b07e3 has its CatchHandler @ 006b07e8 */
    FUN_00676318(uVar1,"string length exceeds max size");
  }
  local_288 = (byte *)0x0;
  local_280 = (byte *)0x0;
  local_278 = 0;
                    /* try { // try from 006b0630 to 006b0643 has its CatchHandler @ 006b07ec */
  FUN_00676d5c(pvVar3,uVar1,&DAT_001e2980,&local_288);
  pbVar5 = local_280;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_288 != local_280) {
    pbVar7 = local_288;
    do {
      local_98 = (uint)(*(byte *)(param_2 + 0x68) >> 1);
      local_a0 = param_2 + 0x69;
      if ((*(byte *)(param_2 + 0x68) & 1) != 0) {
        local_98 = (uint)*(undefined8 *)(param_2 + 0x70);
        local_a0 = *(long *)(param_2 + 0x78);
      }
      local_d0 = *(byte **)(pbVar7 + 0x10);
      bVar6 = (*pbVar7 & 1) == 0;
      if (bVar6) {
        local_d0 = pbVar7 + 1;
      }
      local_100 = 0;
      local_f8 = 0xffffffff;
      local_c8 = (uint)(*pbVar7 >> 1);
      if (!bVar6) {
        local_c8 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      local_130 = 0;
      local_128 = 0xffffffff;
      local_160 = 0;
      local_158 = 0xffffffff;
      local_190 = 0;
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
                    /* try { // try from 006b06fc to 006b072b has its CatchHandler @ 006b0804 */
      FUN_006ea47c(param_1,"$0// $1\n",&local_a0,&local_d0,&local_100,&local_130,&local_160,
                   &local_190,&local_1c0,&local_1f0,&local_220,&local_250);
      pbVar7 = pbVar7 + 0x18;
    } while (pbVar7 != pbVar5);
  }
  pbVar5 = local_288;
  pbVar7 = local_280;
  if (local_288 != (byte *)0x0) {
    while (pbVar4 = pbVar7, pbVar4 != pbVar5) {
      pbVar7 = pbVar4 + -0x18;
      if ((*pbVar7 & 1) != 0) {
        free(*(void **)(pbVar4 + -8));
      }
    }
    local_280 = pbVar5;
    free(local_288);
  }
  if ((local_270 & 1) != 0) {
    free(local_260);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b0850  FUN_006b0850 =====

ulong FUN_006b0850(undefined4 param_1,long *param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined1 uStack_169;
  undefined1 auStack_168 [48];
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  uint local_120;
  undefined8 local_11c;
  undefined2 local_114;
  uint local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 uStack_100;
  long local_f8;
  undefined1 *puStack_f0;
  byte local_e8;
  undefined1 auStack_e7 [7];
  uint local_e0;
  undefined1 *local_d8;
  undefined1 auStack_d0 [104];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = (**(code **)(*param_2 + 0x80))(param_2);
  if (*(long *)(*(long *)(lVar4 + 0x10) + 0x18) != param_3) {
    lVar4 = (**(code **)(*param_2 + 0x80))(param_2);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    lVar10 = *(long *)(lVar4 + 8);
    uVar8 = (ulong)(*(byte *)(lVar10 + 0x18) >> 1);
    lVar4 = lVar10 + 0x19;
    if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
      uVar8 = *(ulong *)(lVar10 + 0x20);
      lVar4 = *(long *)(lVar10 + 0x28);
    }
    if ((long)uVar8 < 0) {
      FUN_00676318(uVar8,"string length exceeds max size");
      pcVar6 = (char *)FUN_00688c70(uVar5,param_3,lVar4,uVar8);
      cVar1 = *pcVar6;
    }
    else {
      pcVar6 = (char *)FUN_00688c70(uVar5,param_3,lVar4);
      cVar1 = *pcVar6;
    }
    if (cVar1 == '\x01') {
      FUN_006db6ec(auStack_d0);
                    /* try { // try from 006b0908 to 006b0923 has its CatchHandler @ 006b0b8c */
      plVar7 = (long *)FUN_006db814(auStack_d0,pcVar6);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,0);
                    /* try { // try from 006b0924 to 006b0937 has its CatchHandler @ 006b0b00 */
      FUN_0066ee24(&local_e8,param_2);
      local_128 = 0;
      local_11c = 0;
      local_114 = 0;
      local_138 = local_d8;
      if ((local_e8 & 1) == 0) {
        local_138 = auStack_e7;
        local_e0 = (uint)(local_e8 >> 1);
      }
      puStack_130 = local_138 + (int)local_e0;
      local_104 = *(undefined4 *)PTR_DAT_007a3238;
      puStack_f0 = auStack_d0;
      local_10c = 0x7ff8000000000000;
                    /* try { // try from 006b0994 to 006b099f has its CatchHandler @ 006b0b1c */
      local_120 = local_e0;
      local_110 = local_e0;
      uStack_100 = local_104;
      local_f8 = param_3;
      uVar8 = FUN_0066e874(plVar7,&local_138);
      plVar9 = plVar7;
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 006b09a8 to 006b09bf has its CatchHandler @ 006b0afc */
        FUN_00675e64(auStack_168,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0xb3f);
                    /* try { // try from 006b09c0 to 006b09f7 has its CatchHandler @ 006b0b0c */
        uVar5 = FUN_00675a58(auStack_168,"Found invalid proto option data for: ");
        lVar4 = (**(code **)(*param_2 + 0x80))(param_2);
        uVar5 = FUN_00675a80(uVar5,*(long *)(lVar4 + 8) + 0x18);
                    /* try { // try from 006b09f8 to 006b09ff has its CatchHandler @ 006b0af8 */
        FUN_00675ac0(&uStack_169,uVar5);
        FUN_00675e7c(auStack_168);
        plVar9 = param_2;
      }
                    /* try { // try from 006b0a0c to 006b0a17 has its CatchHandler @ 006b0b1c */
      uVar3 = FUN_006b0bac(param_1,plVar9,param_4);
      FUN_0066c1f4(&local_138);
      if ((local_e8 & 1) != 0) {
        free(local_d8);
      }
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN_006db720(auStack_d0);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return (ulong)(uVar3 & 1);
      }
      goto LAB_006b0b88;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    uVar8 = FUN_006b0bac(param_1,param_2,param_4);
    return uVar8;
  }
LAB_006b0b88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b0bac  FUN_006b0bac =====

/* WARNING: Removing unreachable block (ram,0x006b0f60) */

void FUN_006b0bac(int param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__src;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined2 uVar9;
  byte *pbVar10;
  undefined6 *puVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 extraout_x1;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  void *pvVar25;
  size_t __n;
  undefined6 *local_128;
  undefined8 local_120;
  void *local_118;
  long *local_110;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined6 **local_d0;
  ulong local_c8;
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  long local_88;
  undefined6 local_80;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined6 uStack_78;
  undefined1 uStack_72;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  pbVar4 = (byte *)*param_3;
  pbVar22 = (byte *)param_3[1];
  while (pbVar10 = pbVar22, pbVar10 != pbVar4) {
    pbVar22 = pbVar10 + -0x18;
    if ((*pbVar22 & 1) != 0) {
      free(*(void **)(pbVar10 + -8));
    }
  }
  param_3[1] = (long)pbVar4;
  (**(code **)(*param_2 + 0x80))(param_2);
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  local_90 = 0;
                    /* try { // try from 006b0c40 to 006b0c4f has its CatchHandler @ 006b1220 */
  FUN_0067cb28(extraout_x1,param_2,&local_a0);
  plVar12 = local_98;
  if (local_a0 != local_98) {
    puVar17 = (undefined8 *)((ulong)&local_128 | 2);
    plVar14 = local_a0;
    do {
      lVar24 = *plVar14;
      bVar2 = *(byte *)(lVar24 + 1) & 0x60;
      if (bVar2 == 0x60) {
                    /* try { // try from 006b0ccc to 006b0cdb has its CatchHandler @ 006b1230 */
        iVar13 = FUN_0067c384(extraout_x1,param_2,lVar24);
        if (0 < iVar13) goto LAB_006b0cf0;
      }
      else {
        iVar13 = 1;
LAB_006b0cf0:
        iVar23 = 0;
        do {
          plVar15 = *(long **)(lVar24 + 0x18);
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = (void *)0x0;
          if (plVar15 != (long *)0x0) {
            local_80 = 0x6af7b4;
            uStack_7a = 0;
            uStack_79 = 0;
            local_88 = lVar24;
            if (*plVar15 != -1) {
              local_128 = &local_80;
              local_120 = &local_88;
              local_d0 = &local_128;
                    /* try { // try from 006b0d48 to 006b0d57 has its CatchHandler @ 006b127c */
              FUN_00710f84(plVar15,&local_d0,FUN_00685640);
            }
          }
          if ((*(byte *)(lVar24 + 2) & 0xfe) == 10) {
            local_d0 = (undefined6 **)0x0;
            local_c8 = 0;
            local_c0 = (void *)0x0;
                    /* try { // try from 006b0d70 to 006b0d77 has its CatchHandler @ 006b1244 */
            FUN_006ec384(&local_128);
            local_120._0_3_ = CONCAT12(1,(undefined2)local_120);
            iVar3 = iVar23;
            if (bVar2 != 0x60) {
              iVar3 = -1;
            }
            local_128 = (undefined6 *)CONCAT44(local_128._4_4_,param_1 + 1);
                    /* try { // try from 006b0d94 to 006b0df7 has its CatchHandler @ 006b12b0 */
            FUN_006ee1c8(&local_128,param_2,lVar24,iVar3,&local_d0);
            FUN_00713bdc(&local_b8,&DAT_001f90d6);
            uVar1 = (ulong)local_d0 >> 1 & 0x7f;
            pvVar25 = (void *)((ulong)&local_d0 | 1);
            if (((ulong)local_d0 & 1) != 0) {
              uVar1 = local_c8;
              pvVar25 = local_c0;
            }
            FUN_0071302c(&local_b8,pvVar25,uVar1);
            FUN_0071341c(&local_b8,(long)(param_1 << 1),0x20);
            FUN_00713bdc(&local_b8,&DAT_001bb609);
            FUN_006b137c(auStack_f0,local_e8);
            FUN_006b13d4(auStack_108,local_100);
            plVar15 = local_110;
            local_110 = (long *)0x0;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (((ulong)local_d0 & 1) != 0) {
              free(local_c0);
            }
          }
          else {
            iVar3 = iVar23;
            if (bVar2 != 0x60) {
              iVar3 = -1;
            }
                    /* try { // try from 006b0e4c to 006b0e5b has its CatchHandler @ 006b127c */
            FUN_006ef878(param_2,lVar24,iVar3,&local_b8);
          }
          local_128 = (undefined6 *)0x0;
          local_120 = (long *)0x0;
          local_118 = (void *)0x0;
          if ((*(byte *)(lVar24 + 1) >> 3 & 1) == 0) {
                    /* try { // try from 006b0e74 to 006b0e7b has its CatchHandler @ 006b124c */
            FUN_007139b0(&local_128,*(undefined8 *)(lVar24 + 8));
          }
          else {
                    /* try { // try from 006b0e84 to 006b0e97 has its CatchHandler @ 006b1250 */
            FUN_00714534(&local_d0,&DAT_001e2504,*(long *)(lVar24 + 8) + 0x18);
                    /* try { // try from 006b0e98 to 006b0ea7 has its CatchHandler @ 006b1254 */
            puVar16 = (undefined8 *)FUN_00713bdc(&local_d0,&DAT_001d047f);
            uVar5 = puVar16[1];
            pvVar25 = (void *)puVar16[2];
            uVar9 = *(undefined2 *)puVar16;
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
            local_80 = (undefined6)*(undefined8 *)((long)puVar16 + 2);
            uStack_7a = (undefined1)uVar5;
            uStack_79 = (undefined1)((ulong)uVar5 >> 8);
            uStack_78 = (undefined6)((ulong)uVar5 >> 0x10);
            if (((ulong)local_128 & 1) != 0) {
              free(local_118);
            }
            local_128 = (undefined6 *)CONCAT62(local_128._2_6_,uVar9);
            *puVar17 = CONCAT17(uStack_79,CONCAT16(uStack_7a,local_80));
            *(ulong *)((long)puVar17 + 6) = CONCAT62(uStack_78,CONCAT11(uStack_79,uStack_7a));
            local_118 = pvVar25;
            if (((ulong)local_d0 & 1) != 0) {
              free(local_c0);
            }
          }
          puVar11 = local_128;
          plVar15 = (long *)((ulong)local_128 >> 1 & 0x7f);
          if (((ulong)local_128 & 1) != 0) {
            plVar15 = local_120;
          }
          puVar16 = (undefined8 *)strlen(" = ");
          uVar1 = (long)plVar15 + (long)puVar16;
          if (0xfffffffffffffff7 < uVar1) {
            if (*(long *)(lVar8 + 0x28) == local_70) {
                    /* try { // try from 006b11e4 to 006b11eb has its CatchHandler @ 006b129c */
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_d0);
            }
            goto LAB_006b1324;
          }
          if (uVar1 < 0x17) {
            local_c8 = 0;
            local_c0 = (void *)0x0;
            local_d0 = (undefined6 **)(ulong)(byte)(((uint)uVar1 & 0xff) << 1);
            pvVar25 = (void *)((ulong)&local_d0 | 1);
          }
          else {
            uVar20 = (uVar1 & 0xfffffffffffffff8) + 8;
            if ((uVar1 | 7) != 0x17) {
              uVar20 = uVar1 | 7;
            }
                    /* try { // try from 006b1054 to 006b105b has its CatchHandler @ 006b1264 */
            local_c0 = (void *)FUN_00759c3c(uVar20 + 1);
            local_d0 = (undefined6 **)(uVar20 + 1 | 1);
            local_c8 = uVar1;
            pvVar25 = local_c0;
          }
          if (plVar15 != (long *)0x0) {
            __src = (void *)((ulong)&local_128 | 1);
            if (((ulong)puVar11 & 1) != 0) {
              __src = local_118;
            }
            memmove(pvVar25,__src,(size_t)plVar15);
          }
          if (puVar16 != (undefined8 *)0x0) {
            memcpy((void *)((long)pvVar25 + (long)plVar15),&DAT_001d8638,(size_t)puVar16);
          }
          *(undefined1 *)((long)pvVar25 + (long)plVar15 + (long)puVar16) = 0;
          uVar1 = local_b8 >> 1 & 0x7f;
          pvVar25 = (void *)((ulong)&local_b8 | 1);
          if ((local_b8 & 1) != 0) {
            uVar1 = local_b0;
            pvVar25 = local_a8;
          }
                    /* try { // try from 006b0fbc to 006b0fc3 has its CatchHandler @ 006b1284 */
          puVar16 = (undefined8 *)FUN_0071302c(&local_d0,pvVar25,uVar1);
          uVar5 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = *(undefined1 *)puVar16;
          uVar21 = *(undefined8 *)((long)puVar16 + 1);
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          puVar18 = (undefined1 *)param_3[1];
          local_80 = (undefined6)uVar21;
          uStack_7a = (undefined1)((ulong)uVar21 >> 0x30);
          uStack_79 = (undefined1)uVar5;
          uStack_78 = (undefined6)((ulong)uVar5 >> 8);
          uStack_72 = (undefined1)((ulong)uVar5 >> 0x38);
          if (puVar18 < (undefined1 *)param_3[2]) {
            *puVar18 = uVar7;
            *(ulong *)(puVar18 + 1) = CONCAT17(uStack_79,(int7)uVar21);
            *(undefined8 *)(puVar18 + 8) = uVar5;
            *(undefined8 *)(puVar18 + 0x10) = uVar6;
            param_3[1] = (long)(puVar18 + 0x18);
          }
          else {
            pvVar25 = (void *)*param_3;
            __n = (long)puVar18 - (long)pvVar25;
            uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar1) {
              if (*(long *)(lVar8 + 0x28) == local_70) {
                    /* try { // try from 006b1200 to 006b121f has its CatchHandler @ 006b1268 */
                puVar16 = (undefined8 *)FUN_00304228(param_3);
LAB_006b1208:
                if (*(long *)(lVar8 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                  FUN_002f9ee0();
                }
              }
              goto LAB_006b1324;
            }
            lVar19 = param_3[2] - (long)pvVar25 >> 3;
            uVar20 = lVar19 * 0x5555555555555556;
            if (uVar20 < uVar1 || uVar20 - uVar1 == 0) {
              uVar20 = uVar1;
            }
            if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
              uVar20 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar20 == 0) {
              lVar19 = 0;
            }
            else {
              if (0xaaaaaaaaaaaaaaa < uVar20) goto LAB_006b1208;
                    /* try { // try from 006b10e8 to 006b10eb has its CatchHandler @ 006b1240 */
              lVar19 = FUN_00759c3c(uVar20 * 0x18);
            }
            puVar18 = (undefined1 *)(lVar19 + ((long)__n >> 3) * 8);
            *(ulong *)(puVar18 + 1) = CONCAT17(uStack_79,CONCAT16(uStack_7a,local_80));
            *(ulong *)(puVar18 + 8) = CONCAT17(uStack_72,CONCAT61(uStack_78,uStack_79));
            *(undefined8 *)(puVar18 + 0x10) = uVar6;
            *puVar18 = uVar7;
            memcpy(puVar18 + -__n,pvVar25,__n);
            *param_3 = (long)(puVar18 + -__n);
            param_3[1] = (long)(puVar18 + 0x18);
            param_3[2] = lVar19 + uVar20 * 0x18;
            if (pvVar25 != (void *)0x0) {
              free(pvVar25);
            }
            param_3[1] = (long)(puVar18 + 0x18);
          }
          if (((ulong)local_d0 & 1) != 0) {
            free(local_c0);
          }
          if (((ulong)local_128 & 1) != 0) {
            free(local_118);
          }
          if ((local_b8 & 1) != 0) {
            free(local_a8);
          }
          iVar23 = iVar23 + 1;
        } while (iVar13 != iVar23);
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar12);
  }
  lVar24 = *param_3;
  lVar19 = param_3[1];
  if (local_a0 != (long *)0x0) {
    local_98 = local_a0;
    free(local_a0);
  }
  puVar16 = (undefined8 *)(ulong)(lVar24 != lVar19);
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
LAB_006b1324:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar16);
}


// ===== 006b1328  FUN_006b1328 =====

void FUN_006b1328(long param_1)

{
  long *plVar1;
  
  FUN_006b137c(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  FUN_006b13d4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006b136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 006b137c  FUN_006b137c =====

void FUN_006b137c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b137c(param_1,*param_2);
    FUN_006b137c(param_1,param_2[1]);
    plVar1 = (long *)param_2[5];
    param_2[5] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006b13d4  FUN_006b13d4 =====

void FUN_006b13d4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b13d4(param_1,*param_2);
    FUN_006b13d4(param_1,param_2[1]);
    plVar1 = (long *)param_2[5];
    param_2[5] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006b142c  FUN_006b142c =====

void FUN_006b142c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  byte *local_78;
  ulong local_70;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (pbVar1 != pbVar2) {
    local_70 = *(ulong *)(pbVar1 + 8);
    local_78 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      local_78 = pbVar1 + 1;
      local_70 = (ulong)(*pbVar1 >> 1);
    }
                    /* try { // try from 006b1488 to 006b1493 has its CatchHandler @ 006b1514 */
    FUN_006789c4(param_1,&local_78);
    while (pbVar4 = pbVar1 + 0x18, pbVar4 != pbVar2) {
                    /* try { // try from 006b14a0 to 006b14db has its CatchHandler @ 006b1518 */
      FUN_00713bdc(param_1,param_3);
      local_78 = *(byte **)(pbVar1 + 0x28);
      bVar5 = (*pbVar4 & 1) == 0;
      if (bVar5) {
        local_78 = pbVar1 + 0x19;
      }
      local_70 = (ulong)(*pbVar4 >> 1);
      if (!bVar5) {
        local_70 = *(ulong *)(pbVar1 + 0x20);
      }
      FUN_006789c4(param_1,&local_78);
      pbVar1 = pbVar4;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006b1548  FUN_006b1548 =====

void FUN_006b1548(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00688324();
    free(param_1);
    return;
  }
  return;
}


// ===== 006b1574  FUN_006b1574 =====

void FUN_006b1574(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined1 uStack_99;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_2;
  iVar7 = *(int *)(param_1 + 8);
  if (lVar4 != 0) {
    FUN_00675e64(auStack_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x172);
                    /* try { // try from 006b15cc to 006b15df has its CatchHandler @ 006b1a6c */
    uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b15e0 to 006b15e7 has its CatchHandler @ 006b1a68 */
    FUN_00675ac0(&uStack_99,uVar3);
    FUN_00675e7c(auStack_98);
    lVar4 = *param_2;
  }
  *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar7 * 0x88;
  iVar7 = *(int *)(param_1 + 8);
  if (lVar4 != 0) {
    FUN_00675e64(auStack_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x172);
                    /* try { // try from 006b1624 to 006b1637 has its CatchHandler @ 006b1a64 */
    uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1638 to 006b163f has its CatchHandler @ 006b1a60 */
    FUN_00675ac0(&uStack_99,uVar3);
    FUN_00675e7c(auStack_98);
  }
  *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar7 * 2;
  plVar5 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar1 = plVar5 + *(int *)(param_1 + 8);
    do {
      lVar4 = *plVar5;
      if ((*(byte *)(lVar4 + 0x10) >> 1 & 1) != 0) {
        if (*param_2 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b16c0 to 006b16cf has its CatchHandler @ 006b1a7c */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b16d0 to 006b16d7 has its CatchHandler @ 006b1a78 */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
        }
        *(int *)(param_2 + 0xf) = (int)param_2[0xf] + 1;
      }
      FUN_006b1574(lVar4 + 0x30,param_2);
      FUN_006b1f28(lVar4 + 0x18,param_2);
      FUN_006b1f28(lVar4 + 0x78,param_2);
      iVar7 = *(int *)(lVar4 + 0x68);
      if (*param_2 != 0) {
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1730 to 006b173f has its CatchHandler @ 006b1a9c */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1740 to 006b1747 has its CatchHandler @ 006b1aa4 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
      }
      *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar7 * 0x10;
      plVar6 = (long *)0x0;
      if (*(long *)(lVar4 + 0x70) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x70) + 8);
      }
      if (*(int *)(lVar4 + 0x68) != 0) {
        lVar9 = (long)*(int *)(lVar4 + 0x68) << 3;
        do {
          if ((*(byte *)(*plVar6 + 0x10) & 1) != 0) {
            if (*param_2 != 0) {
              FUN_00675e64(auStack_98,3,
                           "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                           ,0x172);
                    /* try { // try from 006b17bc to 006b17cb has its CatchHandler @ 006b1ab4 */
              uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b17cc to 006b17d3 has its CatchHandler @ 006b1ab0 */
              FUN_00675ac0(&uStack_99,uVar3);
              FUN_00675e7c(auStack_98);
            }
            *(int *)(param_2 + 0x11) = (int)param_2[0x11] + 1;
          }
          lVar9 = lVar9 + -8;
          plVar6 = plVar6 + 1;
        } while (lVar9 != 0);
      }
      iVar7 = *(int *)(lVar4 + 0xb0);
      if (*param_2 == 0) {
        iVar7 = (int)param_2[0xd] + iVar7 * 8;
        *(int *)(param_2 + 0xd) = iVar7;
        iVar8 = *(int *)(lVar4 + 200);
LAB_006b18d4:
        *(int *)(param_2 + 0xd) = iVar7 + iVar8 * 8;
        iVar7 = *(int *)(lVar4 + 200);
      }
      else {
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1800 to 006b180f has its CatchHandler @ 006b1a94 */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1810 to 006b1817 has its CatchHandler @ 006b1aa0 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        iVar7 = (int)param_2[0xd] + iVar7 * 8;
        *(int *)(param_2 + 0xd) = iVar7;
        iVar8 = *(int *)(lVar4 + 200);
        if (*param_2 == 0) goto LAB_006b18d4;
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1850 to 006b185f has its CatchHandler @ 006b1a80 */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1860 to 006b1867 has its CatchHandler @ 006b1a88 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar8 * 8;
        iVar7 = *(int *)(lVar4 + 200);
        if (*param_2 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b189c to 006b18ab has its CatchHandler @ 006b1a74 */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b18ac to 006b18b3 has its CatchHandler @ 006b1a70 */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
        }
      }
      *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar7;
      FUN_006b1adc(lVar4 + 0x48,param_2);
      iVar7 = *(int *)(lVar4 + 0x98);
      if (*param_2 == 0) {
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar7 * 0x28;
        iVar7 = *(int *)(lVar4 + 0x98) << 1;
      }
      else {
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1918 to 006b1927 has its CatchHandler @ 006b1a90 */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1928 to 006b192f has its CatchHandler @ 006b1a98 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar7 * 0x28;
        iVar7 = *(int *)(lVar4 + 0x98) << 1;
        if (*param_2 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b1968 to 006b1977 has its CatchHandler @ 006b1a84 */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1978 to 006b197f has its CatchHandler @ 006b1a8c */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
        }
      }
      *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar7;
      plVar6 = (long *)0x0;
      if (*(long *)(lVar4 + 0xa0) != 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0xa0) + 8);
      }
      if (*(int *)(lVar4 + 0x98) != 0) {
        lVar4 = (long)*(int *)(lVar4 + 0x98) << 3;
        do {
          if ((*(byte *)(*plVar6 + 0x10) >> 1 & 1) != 0) {
            if (*param_2 != 0) {
              FUN_00675e64(auStack_98,3,
                           "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                           ,0x172);
                    /* try { // try from 006b1a0c to 006b1a1b has its CatchHandler @ 006b1aac */
              uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1a1c to 006b1a23 has its CatchHandler @ 006b1aa8 */
              FUN_00675ac0(&uStack_99,uVar3);
              FUN_00675e7c(auStack_98);
            }
            *(int *)((long)param_2 + 0x8c) = *(int *)((long)param_2 + 0x8c) + 1;
          }
          lVar4 = lVar4 + -8;
          plVar6 = plVar6 + 1;
        } while (lVar4 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b1adc  FUN_006b1adc =====

void FUN_006b1adc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined1 uStack_99;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_2;
  iVar4 = *(int *)(param_1 + 8);
  if (lVar5 != 0) {
    FUN_00675e64(auStack_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x172);
                    /* try { // try from 006b1b34 to 006b1b47 has its CatchHandler @ 006b1ec8 */
    uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1b48 to 006b1b4f has its CatchHandler @ 006b1ec4 */
    FUN_00675ac0(&uStack_99,uVar3);
    FUN_00675e7c(auStack_98);
    lVar5 = *param_2;
  }
  *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar4 * 0x48;
  iVar4 = *(int *)(param_1 + 8);
  if (lVar5 != 0) {
    FUN_00675e64(auStack_98,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x172);
                    /* try { // try from 006b1b8c to 006b1b9f has its CatchHandler @ 006b1ec0 */
    uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1ba0 to 006b1ba7 has its CatchHandler @ 006b1ebc */
    FUN_00675ac0(&uStack_99,uVar3);
    FUN_00675e7c(auStack_98);
  }
  *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar4 * 2;
  plVar6 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar1 = plVar6 + *(int *)(param_1 + 8);
    do {
      lVar7 = *plVar6;
      lVar5 = *param_2;
      if ((*(byte *)(lVar7 + 0x10) >> 1 & 1) != 0) {
        if (lVar5 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b1c4c to 006b1c5b has its CatchHandler @ 006b1ed8 */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1c5c to 006b1c63 has its CatchHandler @ 006b1ed4 */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
          lVar5 = *param_2;
        }
        *(int *)(param_2 + 0x10) = (int)param_2[0x10] + 1;
      }
      iVar4 = *(int *)(lVar7 + 0x20);
      if (lVar5 == 0) {
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar4 * 0x20;
        iVar4 = *(int *)(lVar7 + 0x20) << 1;
      }
      else {
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1c98 to 006b1ca7 has its CatchHandler @ 006b1eec */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1ca8 to 006b1caf has its CatchHandler @ 006b1ef4 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar4 * 0x20;
        iVar4 = *(int *)(lVar7 + 0x20) << 1;
        if (*param_2 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b1ce8 to 006b1cf7 has its CatchHandler @ 006b1ee4 */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1cf8 to 006b1cff has its CatchHandler @ 006b1ee0 */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
        }
      }
      *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar4;
      plVar9 = (long *)0x0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        plVar9 = (long *)(*(long *)(lVar7 + 0x28) + 8);
      }
      if (*(int *)(lVar7 + 0x20) != 0) {
        lVar5 = (long)*(int *)(lVar7 + 0x20) << 3;
        do {
          if ((*(byte *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
            if (*param_2 != 0) {
              FUN_00675e64(auStack_98,3,
                           "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                           ,0x172);
                    /* try { // try from 006b1d8c to 006b1d9b has its CatchHandler @ 006b1f00 */
              uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1d9c to 006b1da3 has its CatchHandler @ 006b1efc */
              FUN_00675ac0(&uStack_99,uVar3);
              FUN_00675e7c(auStack_98);
            }
            *(int *)((long)param_2 + 0x84) = *(int *)((long)param_2 + 0x84) + 1;
          }
          lVar5 = lVar5 + -8;
          plVar9 = plVar9 + 1;
        } while (lVar5 != 0);
      }
      iVar4 = *(int *)(lVar7 + 0x38);
      if (*param_2 == 0) {
        iVar4 = (int)param_2[0xd] + iVar4 * 8;
        *(int *)(param_2 + 0xd) = iVar4;
        iVar8 = *(int *)(lVar7 + 0x50);
LAB_006b1c00:
        *(int *)(param_2 + 0xd) = iVar4 + iVar8 * 8;
        iVar4 = *(int *)(lVar7 + 0x50);
      }
      else {
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1dd0 to 006b1ddf has its CatchHandler @ 006b1ef8 */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1de0 to 006b1de7 has its CatchHandler @ 006b1ef0 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        iVar4 = (int)param_2[0xd] + iVar4 * 8;
        *(int *)(param_2 + 0xd) = iVar4;
        iVar8 = *(int *)(lVar7 + 0x50);
        if (*param_2 == 0) goto LAB_006b1c00;
        FUN_00675e64(auStack_98,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x172);
                    /* try { // try from 006b1e1c to 006b1e2b has its CatchHandler @ 006b1edc */
        uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1e2c to 006b1e33 has its CatchHandler @ 006b1ee8 */
        FUN_00675ac0(&uStack_99,uVar3);
        FUN_00675e7c(auStack_98);
        *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar8 * 8;
        iVar4 = *(int *)(lVar7 + 0x50);
        if (*param_2 != 0) {
          FUN_00675e64(auStack_98,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b1e68 to 006b1e77 has its CatchHandler @ 006b1ed0 */
          uVar3 = FUN_00675a58(auStack_98,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1e78 to 006b1e7f has its CatchHandler @ 006b1ecc */
          FUN_00675ac0(&uStack_99,uVar3);
          FUN_00675e7c(auStack_98);
        }
      }
      plVar6 = plVar6 + 1;
      *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + iVar4;
    } while (plVar6 != plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b1f28  FUN_006b1f28 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b1f28(long param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  byte **ppbVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined8 uVar35;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong local_140;
  byte *pbStack_138;
  byte *local_130;
  byte local_128 [8];
  byte *local_120;
  byte *local_118;
  ulong local_110;
  byte *pbStack_108;
  byte *local_100;
  undefined1 uStack_f1;
  undefined1 auStack_f0 [48];
  byte *local_c0;
  size_t local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *pbStack_98;
  byte *local_90;
  byte *pbStack_88;
  byte *local_80 [2];
  
  lVar3 = tpidr_el0;
  local_80[0] = *(byte **)(lVar3 + 0x28);
  iVar8 = *(int *)(param_1 + 8);
  if (*param_2 != 0) {
    FUN_00675e64(&local_c0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x172);
                    /* try { // try from 006b1f88 to 006b1f9b has its CatchHandler @ 006b2a6c */
    uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b1f9c to 006b1fa3 has its CatchHandler @ 006b2a68 */
    FUN_00675ac0(auStack_f0,uVar9);
    FUN_00675e7c(&local_c0);
  }
  *(int *)(param_2 + 0xd) = (int)param_2[0xd] + iVar8 * 0x48;
  plVar19 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar19 = (long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar1 = plVar19 + *(int *)(param_1 + 8);
    do {
      lVar23 = *plVar19;
      uVar16 = *(uint *)(lVar23 + 0x10);
      if ((uVar16 >> 5 & 1) != 0) {
        if (*param_2 != 0) {
          FUN_00675e64(&local_c0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b2084 to 006b2093 has its CatchHandler @ 006b2a90 */
          uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b2094 to 006b209b has its CatchHandler @ 006b2a8c */
          FUN_00675ac0(auStack_f0,uVar9);
          FUN_00675e7c(&local_c0);
        }
        *(int *)((long)param_2 + 0x7c) = *(int *)((long)param_2 + 0x7c) + 1;
        uVar16 = *(uint *)(lVar23 + 0x10);
      }
      uVar20 = *(ulong *)(lVar23 + 0x18);
      if ((uVar16 >> 4 & 1) == 0) {
        puVar26 = (ulong *)0x0;
        if (*param_2 == 0) goto LAB_006b211c;
LAB_006b20c8:
        FUN_00675e64(&local_c0,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                     ,0x1a0);
                    /* try { // try from 006b20dc to 006b20eb has its CatchHandler @ 006b2abc */
        uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b20ec to 006b20f3 has its CatchHandler @ 006b2ac0 */
        FUN_00675ac0(auStack_f0,uVar9);
        FUN_00675e7c(&local_c0);
        uVar10 = (ulong)*(byte *)(uVar20 & 0xfffffffffffffffc);
        if (puVar26 == (ulong *)0x0) goto LAB_006b2128;
LAB_006b21a0:
        puVar25 = (ulong *)(uVar20 & 0xfffffffffffffffc);
        if ((uVar10 & 1) == 0) {
          local_100 = (byte *)puVar25[2];
          pbStack_108 = (byte *)puVar25[1];
          local_110 = *puVar25;
        }
        else {
          FUN_002fb36c(&local_110,puVar25[2],puVar25[1]);
        }
        pbVar11 = (byte *)((ulong)&local_110 | 1);
        pbVar2 = (byte *)(local_110 >> 1 & 0x7f);
        if ((local_110 & 1) != 0) {
          pbVar11 = local_100;
          pbVar2 = pbStack_108;
        }
        if (pbVar2 != (byte *)0x0) {
          pbVar15 = pbVar11;
          if ((byte *)0x7 < pbVar2) {
            if (pbVar2 < (byte *)0x10) {
              pbVar13 = (byte *)0x0;
            }
            else {
              pbVar13 = (byte *)((ulong)pbVar2 & 0xfffffffffffffff0);
              pbVar15 = pbVar11 + 7;
              pbVar18 = pbVar13;
              do {
                uVar35 = *(undefined8 *)(pbVar15 + 1);
                uVar9 = *(undefined8 *)(pbVar15 + -7);
                auVar43[0] = (byte)uVar9 + 0xbf;
                bVar28 = (byte)((ulong)uVar9 >> 8);
                auVar43[1] = bVar28 + 0xbf;
                bVar29 = (byte)((ulong)uVar9 >> 0x10);
                auVar43[2] = bVar29 + 0xbf;
                bVar30 = (byte)((ulong)uVar9 >> 0x18);
                auVar43[3] = bVar30 + 0xbf;
                bVar31 = (byte)((ulong)uVar9 >> 0x20);
                auVar43[4] = bVar31 + 0xbf;
                bVar32 = (byte)((ulong)uVar9 >> 0x28);
                auVar43[5] = bVar32 + 0xbf;
                bVar33 = (byte)((ulong)uVar9 >> 0x30);
                auVar43[6] = bVar33 + 0xbf;
                bVar34 = (byte)((ulong)uVar9 >> 0x38);
                auVar43[7] = bVar34 + 0xbf;
                auVar43[8] = (byte)uVar35 + 0xbf;
                bVar36 = (byte)((ulong)uVar35 >> 8);
                auVar43[9] = bVar36 + 0xbf;
                bVar37 = (byte)((ulong)uVar35 >> 0x10);
                auVar43[10] = bVar37 + 0xbf;
                bVar38 = (byte)((ulong)uVar35 >> 0x18);
                auVar43[0xb] = bVar38 + 0xbf;
                bVar39 = (byte)((ulong)uVar35 >> 0x20);
                auVar43[0xc] = bVar39 + 0xbf;
                bVar40 = (byte)((ulong)uVar35 >> 0x28);
                auVar43[0xd] = bVar40 + 0xbf;
                bVar41 = (byte)((ulong)uVar35 >> 0x30);
                auVar43[0xe] = bVar41 + 0xbf;
                bVar42 = (byte)((ulong)uVar35 >> 0x38);
                auVar43[0xf] = bVar42 + 0xbf;
                auVar44[8] = 0x1a;
                auVar44._0_8_ = 0x1a1a1a1a1a1a1a1a;
                auVar44[9] = 0x1a;
                auVar44[10] = 0x1a;
                auVar44[0xb] = 0x1a;
                auVar44[0xc] = 0x1a;
                auVar44[0xd] = 0x1a;
                auVar44[0xe] = 0x1a;
                auVar44[0xf] = 0x1a;
                auVar44 = NEON_cmhi(auVar44,auVar43,1);
                if ((auVar44 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                  pbVar15[-7] = (byte)uVar9 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                  pbVar15[-6] = bVar28 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                  pbVar15[-5] = bVar29 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                  pbVar15[-4] = bVar30 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                  pbVar15[-3] = bVar31 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                  pbVar15[-2] = bVar32 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                  pbVar15[-1] = bVar33 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                  *pbVar15 = bVar34 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                  pbVar15[1] = (byte)uVar35 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                  pbVar15[2] = bVar36 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                  pbVar15[3] = bVar37 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                  pbVar15[4] = bVar38 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                  pbVar15[5] = bVar39 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                  pbVar15[6] = bVar40 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                  pbVar15[7] = bVar41 | 0x20;
                }
                if ((auVar44 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                  pbVar15[8] = bVar42 | 0x20;
                }
                pbVar18 = pbVar18 + -0x10;
                pbVar15 = pbVar15 + 0x10;
              } while (pbVar18 != (byte *)0x0);
              if (pbVar2 == pbVar13) goto LAB_006b250c;
              if (((uint)pbVar2 >> 3 & 1) == 0) {
                pbVar15 = pbVar11 + (long)pbVar13;
                goto LAB_006b2718;
              }
            }
            pbVar17 = (byte *)((ulong)pbVar2 & 0xfffffffffffffff8);
            pbVar15 = pbVar11 + (long)pbVar17;
            lVar14 = (long)pbVar13 - (long)pbVar17;
            pbVar18 = pbVar11 + (long)(pbVar13 + 3);
            do {
              uVar9 = *(undefined8 *)(pbVar18 + -3);
              bVar28 = (byte)((ulong)uVar9 >> 8);
              bVar29 = (byte)((ulong)uVar9 >> 0x10);
              bVar30 = (byte)((ulong)uVar9 >> 0x18);
              bVar31 = (byte)((ulong)uVar9 >> 0x20);
              bVar32 = (byte)((ulong)uVar9 >> 0x28);
              bVar33 = (byte)((ulong)uVar9 >> 0x30);
              bVar34 = (byte)((ulong)uVar9 >> 0x38);
              uVar20 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                                 CONCAT17(bVar34 + 0xbf,
                                          CONCAT16(bVar33 + 0xbf,
                                                   CONCAT15(bVar32 + 0xbf,
                                                            CONCAT14(bVar31 + 0xbf,
                                                                     CONCAT13(bVar30 + 0xbf,
                                                                              CONCAT12(bVar29 + 0xbf
                                                                                       ,CONCAT11(
                                                  bVar28 + 0xbf,(byte)uVar9 + 0xbf))))))),1);
              if ((uVar20 & 1) != 0) {
                pbVar18[-3] = (byte)uVar9 | 0x20;
              }
              if ((uVar20 & 0x100) != 0) {
                pbVar18[-2] = bVar28 | 0x20;
              }
              if ((uVar20 & 0x10000) != 0) {
                pbVar18[-1] = bVar29 | 0x20;
              }
              if ((uVar20 & 0x1000000) != 0) {
                *pbVar18 = bVar30 | 0x20;
              }
              if ((uVar20 & 0x100000000) != 0) {
                pbVar18[1] = bVar31 | 0x20;
              }
              if ((uVar20 & 0x10000000000) != 0) {
                pbVar18[2] = bVar32 | 0x20;
              }
              if ((uVar20 & 0x1000000000000) != 0) {
                pbVar18[3] = bVar33 | 0x20;
              }
              if ((uVar20 & 0x100000000000000) != 0) {
                pbVar18[4] = bVar34 | 0x20;
              }
              lVar14 = lVar14 + 8;
              pbVar18 = pbVar18 + 8;
            } while (lVar14 != 0);
            if (pbVar2 == pbVar17) goto LAB_006b250c;
          }
LAB_006b2718:
          do {
            if (*pbVar15 - 0x41 < 0x1a) {
              *pbVar15 = *pbVar15 | 0x20;
            }
            pbVar15 = pbVar15 + 1;
          } while (pbVar15 != pbVar11 + (long)pbVar2);
        }
LAB_006b250c:
                    /* try { // try from 006b250c to 006b251b has its CatchHandler @ 006b2ad0 */
        FUN_006aaebc(local_128,puVar25,1);
        if (puVar26 == (ulong *)0x0) {
                    /* try { // try from 006b253c to 006b2557 has its CatchHandler @ 006b2aac */
          FUN_006aadec(&local_140,puVar25);
        }
        else if ((*puVar26 & 1) == 0) {
          local_130 = (byte *)puVar26[2];
          pbStack_138 = (byte *)puVar26[1];
          local_140 = *puVar26;
        }
        else {
          FUN_002fb36c(&local_140,puVar26[2],puVar26[1]);
        }
        local_b8 = 0;
        pbVar11 = (byte *)puVar25[1];
        local_c0 = (byte *)puVar25[2];
        if (((byte)*puVar25 & 1) == 0) {
          local_c0 = (byte *)((long)puVar25 + 1);
          pbVar11 = (byte *)(ulong)(byte)((byte)*puVar25 >> 1);
        }
        if ((long)pbVar11 < 0) {
                    /* try { // try from 006b29d8 to 006b2a23 has its CatchHandler @ 006b2ae0 */
          FUN_00676318(pbVar11,"string length exceeds max size");
        }
        local_a8 = (byte *)0x0;
        pbVar2 = (byte *)(local_110 >> 1 & 0x7f);
        local_b0 = (byte *)((ulong)&local_110 | 1);
        if ((local_110 & 1) != 0) {
          pbVar2 = pbStack_108;
          local_b0 = local_100;
        }
        local_b8 = (size_t)pbVar11;
        if ((long)pbVar2 < 0) {
          FUN_00676318(pbVar2,"string length exceeds max size");
        }
        pbStack_98 = (byte *)0x0;
        pbVar11 = (byte *)(ulong)(local_128[0] >> 1);
        local_a0 = (byte *)((ulong)local_128 | 1);
        if ((local_128[0] & 1) != 0) {
          pbVar11 = local_120;
          local_a0 = local_118;
        }
        local_a8 = pbVar2;
        if ((long)pbVar11 < 0) {
          FUN_00676318(pbVar11,"string length exceeds max size");
        }
        pbStack_88 = (byte *)0x0;
        pbVar2 = (byte *)(local_140 >> 1 & 0x7f);
        local_90 = (byte *)((ulong)&local_140 | 1);
        if ((local_140 & 1) != 0) {
          pbVar2 = pbStack_138;
          local_90 = local_130;
        }
        pbStack_98 = pbVar11;
        if ((long)pbVar2 < 0) {
          FUN_00676318(pbVar2,"string length exceeds max size");
        }
                    /* try { // try from 006b25f8 to 006b260f has its CatchHandler @ 006b2ae0 */
        pbStack_88 = pbVar2;
        FUN_006b2b48(&local_c0,local_80,auStack_f0,4,1);
        pbVar2 = local_a8;
        pbVar11 = local_b0;
        if ((byte *)local_b8 == local_a8) {
          bVar4 = false;
          ppbVar21 = &local_c0;
          ppbVar22 = &local_a0;
          if ((byte *)local_b8 == (byte *)0x0) {
LAB_006b26ec:
            bVar4 = false;
            lVar14 = 0x30;
          }
          else {
            lVar14 = 0x30;
            if (local_c0 != local_b0) {
              iVar8 = memcmp(local_c0,local_b0,local_b8);
              if (iVar8 != 0) goto LAB_006b2660;
              goto LAB_006b26ec;
            }
          }
LAB_006b26f4:
          pbVar11 = ppbVar21[1];
          if (pbVar11 == ppbVar21[5]) {
LAB_006b281c:
            ppbVar27 = ppbVar21;
            if (pbVar11 != (byte *)0x0) {
              if ((*ppbVar21 != *ppbVar22) &&
                 (iVar8 = memcmp(*ppbVar21,*ppbVar22,(size_t)pbVar11), iVar8 != 0))
              goto LAB_006b2838;
            }
          }
          else {
LAB_006b2838:
            pbVar11 = *ppbVar22;
            ppbVar27 = ppbVar21 + 2;
            ppbVar21[3] = ppbVar22[1];
            ppbVar21[2] = pbVar11;
          }
          if (!bVar4) {
            pbVar11 = ppbVar27[1];
            if (pbVar11 == ppbVar22[3]) {
              if (pbVar11 != (byte *)0x0) {
                if ((*ppbVar27 != *(byte **)((long)&local_c0 + lVar14)) &&
                   (iVar8 = memcmp(*ppbVar27,*(byte **)((long)&local_c0 + lVar14),(size_t)pbVar11),
                   iVar8 != 0)) goto LAB_006b2898;
              }
            }
            else {
LAB_006b2898:
              pbVar11 = *(byte **)((long)&local_c0 + lVar14);
              ppbVar27[3] = *(byte **)((long)&local_b8 + lVar14);
              ppbVar27[2] = pbVar11;
              ppbVar27 = ppbVar27 + 2;
            }
          }
LAB_006b28ac:
          ppbVar21 = ppbVar27 + 2;
        }
        else {
LAB_006b2660:
          pbVar18 = pbStack_98;
          pbVar15 = local_a0;
          if (pbVar2 == pbStack_98) {
            bVar4 = true;
            ppbVar22 = &local_90;
            ppbVar21 = &local_b0;
            if (pbVar2 != (byte *)0x0) {
              lVar14 = 0x40;
              if (pbVar11 == local_a0) goto LAB_006b26f4;
              iVar8 = memcmp(pbVar11,local_a0,(size_t)pbVar2);
              if (iVar8 != 0) goto LAB_006b26a4;
            }
            bVar4 = true;
            lVar14 = 0x40;
            pbVar11 = local_a8;
            if (local_a8 == pbStack_88) goto LAB_006b281c;
            goto LAB_006b2838;
          }
LAB_006b26a4:
          ppbVar21 = local_80;
          if ((pbVar18 == pbStack_88) &&
             (((ppbVar27 = &local_a0, pbVar18 == (byte *)0x0 || (pbVar15 == local_90)) ||
              (iVar8 = memcmp(pbVar15,local_90,(size_t)pbVar18), iVar8 == 0)))) goto LAB_006b28ac;
        }
        if (*param_2 != 0) {
                    /* try { // try from 006b28bc to 006b28cf has its CatchHandler @ 006b2aa8 */
          FUN_00675e64(auStack_f0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b28d8 to 006b28e7 has its CatchHandler @ 006b2a94 */
          uVar9 = FUN_00675a58(auStack_f0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b28e8 to 006b28ef has its CatchHandler @ 006b2a98 */
          FUN_00675ac0(&uStack_f1,uVar9);
          FUN_00675e7c(auStack_f0);
        }
        *(int *)((long)param_2 + 0x6c) =
             (int)((ulong)((long)ppbVar21 - (long)&local_c0) >> 4) + 1 +
             *(int *)((long)param_2 + 0x6c);
        if ((local_140 & 1) != 0) {
          free(local_130);
        }
        if ((local_128[0] & 1) != 0) {
          free(local_118);
        }
        if ((local_110 & 1) == 0) {
          uVar16 = *(uint *)(lVar23 + 0x10);
        }
        else {
          free(local_100);
          uVar16 = *(uint *)(lVar23 + 0x10);
        }
      }
      else {
        puVar26 = (ulong *)(*(ulong *)(lVar23 + 0x38) & 0xfffffffffffffffc);
        if (*param_2 != 0) goto LAB_006b20c8;
LAB_006b211c:
        uVar10 = (ulong)*(byte *)(uVar20 & 0xfffffffffffffffc);
        if (puVar26 != (ulong *)0x0) goto LAB_006b21a0;
LAB_006b2128:
        uVar24 = uVar20 & 0xfffffffffffffffc;
        pbVar11 = *(byte **)(uVar24 + 0x10);
        if ((uVar10 & 1) == 0) {
          pbVar11 = (byte *)(uVar24 + 1);
        }
        if (0x19 < *pbVar11 - 0x61) goto LAB_006b21a0;
        uVar12 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          uVar12 = *(ulong *)(uVar24 + 8);
        }
        if (uVar12 == 0) {
          lVar14 = *param_2;
LAB_006b27a8:
          if (lVar14 != 0) {
            FUN_00675e64(&local_c0,3,
                         "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                         ,0x172);
                    /* try { // try from 006b27c0 to 006b27cf has its CatchHandler @ 006b2a80 */
            uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b27d0 to 006b27d7 has its CatchHandler @ 006b2a7c */
            FUN_00675ac0(auStack_f0,uVar9);
            FUN_00675e7c(&local_c0);
          }
          *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + 2;
          uVar16 = *(uint *)(lVar23 + 0x10);
        }
        else {
          bVar4 = false;
          do {
            uVar16 = (uint)*pbVar11;
            bVar6 = 0x19 < uVar16 - 0x61;
            bVar7 = 9 < uVar16 - 0x30;
            if ((uVar16 != 0x5f) && (bVar6 && bVar7)) goto LAB_006b21a0;
            pbVar11 = pbVar11 + 1;
            bVar5 = bVar4;
            if (uVar16 == 0x5f) {
              bVar5 = true;
            }
            if (bVar6 && bVar7) {
              bVar4 = bVar5;
            }
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          lVar14 = *param_2;
          if (!bVar4) goto LAB_006b27a8;
          if (lVar14 != 0) {
            FUN_00675e64(&local_c0,3,
                         "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                         ,0x172);
                    /* try { // try from 006b2768 to 006b2777 has its CatchHandler @ 006b2a64 */
            uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b2778 to 006b277f has its CatchHandler @ 006b2a60 */
            FUN_00675ac0(auStack_f0,uVar9);
            FUN_00675e7c(&local_c0);
          }
          *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + 3;
          uVar16 = *(uint *)(lVar23 + 0x10);
        }
      }
      if ((((uVar16 ^ 0xffffffff) & 0x408) == 0) &&
         ((*(int *)(lVar23 + 0x58) == 0xc || (*(int *)(lVar23 + 0x58) == 9)))) {
        if (*param_2 != 0) {
          FUN_00675e64(&local_c0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                       ,0x172);
                    /* try { // try from 006b29b4 to 006b29c3 has its CatchHandler @ 006b2a88 */
          uVar9 = FUN_00675a58(&local_c0,"CHECK failed: !has_allocated(): ");
                    /* try { // try from 006b29c4 to 006b29cb has its CatchHandler @ 006b2a84 */
          FUN_00675ac0(auStack_f0,uVar9);
          FUN_00675e7c(&local_c0);
        }
        *(int *)((long)param_2 + 0x6c) = *(int *)((long)param_2 + 0x6c) + 1;
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
  }
  if (*(byte **)(lVar3 + 0x28) != local_80[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006b2b48  FUN_006b2b48 =====

void FUN_006b2b48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 uint param_5)

{
  bool bVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
LAB_006b2b88:
  puVar8 = param_2 + -2;
  do {
    param_4 = -param_4;
    puVar9 = param_1;
    do {
      param_1 = puVar9;
      param_4 = param_4 + 1;
      uVar12 = (long)param_2 - (long)param_1 >> 4;
      if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
        if (uVar12 < 2) goto LAB_006b2fa4;
        if (uVar12 == 2) {
          puVar8 = param_2 + -2;
          uVar12 = param_2[-1];
          uVar13 = param_1[1];
          sVar2 = uVar12;
          if (uVar13 <= uVar12) {
            sVar2 = uVar13;
          }
          iVar5 = memcmp((void *)*puVar8,(void *)*param_1,sVar2);
          if ((iVar5 < 0) || ((uVar12 < uVar13 && (iVar5 == 0)))) {
            uVar15 = param_1[1];
            uVar14 = *param_1;
            uVar16 = *puVar8;
            param_1[1] = param_2[-1];
            *param_1 = uVar16;
            param_2[-1] = uVar15;
            *puVar8 = uVar14;
          }
          goto LAB_006b2fa4;
        }
      }
      else {
        if (uVar12 == 3) {
          if (*(long *)(lVar4 + 0x28) == lVar7) {
            FUN_006b3054(param_1,param_1 + 2,puVar8,param_3);
            return;
          }
          goto LAB_006b3050;
        }
        if (uVar12 == 4) {
          if (*(long *)(lVar4 + 0x28) == lVar7) {
            FUN_006b3810(param_1,param_1 + 2,param_1 + 4,puVar8,param_3);
            return;
          }
          goto LAB_006b3050;
        }
        if (uVar12 == 5) {
          if (*(long *)(lVar4 + 0x28) == lVar7) {
            FUN_006b391c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar8,param_3);
            return;
          }
          goto LAB_006b3050;
        }
      }
      if ((long)uVar12 < 0x18) {
        puVar8 = param_1 + 2;
        if ((param_5 & 1) == 0) {
          if (param_1 != param_2 && puVar8 != param_2) {
            do {
              puVar9 = puVar8;
              pvVar3 = (void *)param_1[2];
              uVar12 = param_1[3];
              uVar13 = param_1[1];
              sVar2 = uVar12;
              if (uVar13 <= uVar12) {
                sVar2 = uVar13;
              }
              iVar5 = memcmp(pvVar3,(void *)*param_1,sVar2);
              if ((iVar5 < 0) || ((uVar12 < uVar13 && (iVar5 == 0)))) {
                do {
                  puVar8 = param_1;
                  param_1 = puVar8 + -2;
                  uVar13 = puVar8[-1];
                  puVar8[3] = puVar8[1];
                  puVar8[2] = *puVar8;
                  sVar2 = uVar12;
                  if (uVar13 <= uVar12) {
                    sVar2 = uVar13;
                  }
                  iVar5 = memcmp(pvVar3,(void *)*param_1,sVar2);
                } while ((iVar5 < 0) || ((uVar12 < uVar13 && (iVar5 == 0))));
                *puVar8 = pvVar3;
                puVar8[1] = uVar12;
              }
              puVar8 = puVar9 + 2;
              param_1 = puVar9;
            } while (puVar8 != param_2);
          }
          goto LAB_006b2fa4;
        }
        if (param_1 == param_2 || puVar8 == param_2) goto LAB_006b2fa4;
        lVar10 = 0;
        puVar9 = param_1;
        goto LAB_006b2eb0;
      }
      if (param_4 == 1) {
        if (param_1 != param_2) {
          uVar13 = uVar12 - 2 >> 1;
          puVar8 = param_1 + uVar13 * 2;
          lVar10 = uVar13 + 1;
          do {
            FUN_006b3a60(param_1,param_3,uVar12,puVar8);
            lVar10 = lVar10 + -1;
            puVar8 = puVar8 + -2;
          } while (lVar10 != 0);
          do {
            FUN_006b3bdc(param_1,param_2,param_3,uVar12);
            param_2 = param_2 + -2;
            bVar1 = 2 < uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar1);
        }
        goto LAB_006b2fa4;
      }
      uVar13 = uVar12 >> 1;
      puVar9 = param_1 + uVar13 * 2;
      if (uVar12 < 0x81) {
        FUN_006b3054(puVar9,param_1,puVar8,param_3);
      }
      else {
        FUN_006b3054(param_1,puVar9,puVar8,param_3);
        puVar6 = param_1 + 2;
        FUN_006b3054(puVar6,param_1 + uVar13 * 2 + -2,param_2 + -4,param_3);
        FUN_006b3054(param_1 + 4,puVar6 + uVar13 * 2,param_2 + -6,param_3);
        FUN_006b3054(param_1 + uVar13 * 2 + -2,puVar9,puVar6 + uVar13 * 2,param_3);
        uVar16 = param_1[1];
        uVar14 = *param_1;
        uVar15 = *puVar9;
        param_1[1] = puVar9[1];
        *param_1 = uVar15;
        puVar9[1] = uVar16;
        *puVar9 = uVar14;
      }
      if ((param_5 & 1) == 0) {
        uVar12 = param_1[-1];
        uVar13 = param_1[1];
        sVar2 = uVar12;
        if (uVar13 <= uVar12) {
          sVar2 = uVar13;
        }
        iVar5 = memcmp((void *)param_1[-2],(void *)*param_1,sVar2);
        if ((-1 < iVar5) && ((uVar13 <= uVar12 || (iVar5 != 0)))) {
          param_1 = (undefined8 *)FUN_006b31e8(param_1,param_2,param_3);
          goto LAB_006b2d28;
        }
      }
      auVar17 = FUN_006b33c0(param_1,param_2,param_3);
      puVar6 = auVar17._0_8_;
      if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
      uVar12 = FUN_006b3594(param_1,puVar6,param_3);
      uVar13 = FUN_006b3594(puVar6 + 2,param_2,param_3);
      if ((uVar13 & 1) != 0) {
        param_4 = -param_4;
        param_2 = puVar6;
        if ((uVar12 & 1) == 0) goto LAB_006b2b88;
        goto LAB_006b2fa4;
      }
      puVar9 = puVar6 + 2;
    } while ((uVar12 & 1) != 0);
    FUN_006b2b48(param_1,puVar6,param_3,-param_4,param_5 & 1);
    param_1 = puVar6 + 2;
LAB_006b2d28:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_006b2eb0:
  puVar6 = puVar8;
  pvVar3 = (void *)puVar9[2];
  uVar12 = puVar9[3];
  uVar13 = puVar9[1];
  sVar2 = uVar12;
  if (uVar13 <= uVar12) {
    sVar2 = uVar13;
  }
  iVar5 = memcmp(pvVar3,(void *)*puVar9,sVar2);
  if ((iVar5 < 0) || ((uVar12 < uVar13 && (iVar5 == 0)))) {
    uVar14 = *puVar9;
    puVar6[1] = puVar9[1];
    *puVar6 = uVar14;
    puVar8 = param_1;
    lVar11 = lVar10;
    if (puVar9 != param_1) {
      do {
        puVar9 = (undefined8 *)((long)param_1 + lVar11);
        uVar13 = puVar9[-1];
        sVar2 = uVar12;
        if (uVar13 <= uVar12) {
          sVar2 = uVar13;
        }
        iVar5 = memcmp(pvVar3,(void *)puVar9[-2],sVar2);
        if ((-1 < iVar5) && ((uVar13 <= uVar12 || (iVar5 != 0)))) {
          puVar8 = (undefined8 *)((long)param_1 + lVar11);
          break;
        }
        lVar11 = lVar11 + -0x10;
        puVar9[1] = puVar9[-1];
        *puVar9 = puVar9[-2];
      } while (lVar11 != 0);
    }
    *puVar8 = pvVar3;
    puVar8[1] = uVar12;
  }
  lVar10 = lVar10 + 0x10;
  puVar8 = puVar6 + 2;
  puVar9 = puVar6;
  if (puVar6 + 2 == param_2) {
LAB_006b2fa4:
    if (*(long *)(lVar4 + 0x28) == lVar7) {
      return;
    }
LAB_006b3050:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_006b2eb0;
}


// ===== 006b3054  FUN_006b3054 =====

void FUN_006b3054(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  void *__s1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  __s1 = (void *)*param_2;
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  sVar1 = uVar2;
  if (uVar3 <= uVar2) {
    sVar1 = uVar3;
  }
  iVar5 = memcmp(__s1,(void *)*param_1,sVar1);
  if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
    uVar3 = param_3[1];
    sVar1 = uVar3;
    if (uVar2 <= uVar3) {
      sVar1 = uVar2;
    }
    iVar5 = memcmp((void *)*param_3,__s1,sVar1);
    if ((iVar5 < 0) || ((uVar3 < uVar2 && (iVar5 == 0)))) {
      uVar8 = *param_3;
      uVar10 = param_1[1];
      uVar9 = *param_1;
      uVar6 = 1;
      param_1[1] = param_3[1];
      *param_1 = uVar8;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      goto LAB_006b31b8;
    }
    uVar6 = *param_2;
    uVar9 = param_1[1];
    uVar8 = *param_1;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_2[1] = uVar9;
    *param_2 = uVar8;
    uVar2 = param_3[1];
    uVar3 = param_2[1];
    sVar1 = uVar2;
    if (uVar3 <= uVar2) {
      sVar1 = uVar3;
    }
    iVar5 = memcmp((void *)*param_3,(void *)*param_2,sVar1);
    if ((-1 < iVar5) && ((uVar6 = 1, uVar3 <= uVar2 || (iVar5 != 0)))) goto LAB_006b31b8;
    uVar6 = *param_3;
    uVar9 = param_2[1];
    uVar8 = *param_2;
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_3[1] = uVar9;
    *param_3 = uVar8;
  }
  else {
    uVar3 = param_3[1];
    sVar1 = uVar3;
    if (uVar2 <= uVar3) {
      sVar1 = uVar2;
    }
    iVar5 = memcmp((void *)*param_3,__s1,sVar1);
    if ((-1 < iVar5) && ((uVar6 = 0, uVar2 <= uVar3 || (iVar5 != 0)))) goto LAB_006b31b8;
    uVar6 = *param_3;
    uVar9 = param_2[1];
    uVar8 = *param_2;
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_3[1] = uVar9;
    *param_3 = uVar8;
    uVar2 = param_2[1];
    uVar3 = param_1[1];
    sVar1 = uVar2;
    if (uVar3 <= uVar2) {
      sVar1 = uVar3;
    }
    iVar5 = memcmp((void *)*param_2,(void *)*param_1,sVar1);
    if ((-1 < iVar5) && ((uVar6 = 1, uVar3 <= uVar2 || (iVar5 != 0)))) goto LAB_006b31b8;
    uVar6 = *param_2;
    uVar9 = param_1[1];
    uVar8 = *param_1;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_2[1] = uVar9;
    *param_2 = uVar8;
  }
  uVar6 = 2;
LAB_006b31b8:
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 006b31e8  FUN_006b31e8 =====

undefined8 * FUN_006b31e8(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *__s1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  void *__s2;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  __s1 = (void *)*param_1;
  uVar2 = param_1[1];
  __s2 = (void *)param_2[-2];
  uVar9 = param_2[-1];
  sVar1 = uVar2;
  if (uVar9 <= uVar2) {
    sVar1 = uVar9;
  }
  iVar6 = memcmp(__s1,__s2,sVar1);
  if ((iVar6 < 0) || ((uVar2 < uVar9 && (iVar6 == 0)))) {
    puVar5 = param_1 + 2;
    do {
      puVar8 = puVar5;
      uVar3 = puVar8[1];
      sVar1 = uVar2;
      if (uVar3 <= uVar2) {
        sVar1 = uVar3;
      }
      iVar6 = memcmp(__s1,(void *)*puVar8,sVar1);
    } while ((-1 < iVar6) && ((puVar5 = puVar8 + 2, uVar3 <= uVar2 || (iVar6 != 0))));
  }
  else {
    puVar5 = param_1 + 2;
    while (puVar8 = puVar5, puVar8 < param_2) {
      uVar3 = puVar8[1];
      sVar1 = uVar2;
      if (uVar3 <= uVar2) {
        sVar1 = uVar3;
      }
      iVar6 = memcmp(__s1,(void *)*puVar8,sVar1);
      if ((iVar6 < 0) || ((puVar5 = puVar8 + 2, uVar2 < uVar3 && (iVar6 == 0)))) break;
    }
  }
  if (puVar8 < param_2) {
    param_2 = param_2 + -2;
    while( true ) {
      sVar1 = uVar2;
      if (uVar9 <= uVar2) {
        sVar1 = uVar9;
      }
      iVar6 = memcmp(__s1,__s2,sVar1);
      if ((-1 < iVar6) && ((uVar9 <= uVar2 || (iVar6 != 0)))) break;
      __s2 = (void *)param_2[-2];
      uVar9 = param_2[-1];
      param_2 = param_2 + -2;
    }
  }
  while (puVar8 < param_2) {
    uVar12 = puVar8[1];
    uVar10 = *puVar8;
    uVar11 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar11;
    param_2[1] = uVar12;
    *param_2 = uVar10;
    puVar5 = puVar8 + 2;
    do {
      puVar8 = puVar5;
      uVar9 = puVar8[1];
      sVar1 = uVar2;
      if (uVar9 <= uVar2) {
        sVar1 = uVar9;
      }
      iVar6 = memcmp(__s1,(void *)*puVar8,sVar1);
    } while ((-1 < iVar6) && ((puVar5 = puVar8 + 2, uVar9 <= uVar2 || (iVar6 != 0))));
    puVar5 = param_2 + -2;
    do {
      param_2 = puVar5;
      uVar9 = param_2[1];
      sVar1 = uVar2;
      if (uVar9 <= uVar2) {
        sVar1 = uVar9;
      }
      iVar6 = memcmp(__s1,(void *)*param_2,sVar1);
      puVar5 = param_2 + -2;
    } while ((iVar6 < 0) || ((uVar2 < uVar9 && (iVar6 == 0))));
  }
  if (puVar8 + -2 != param_1) {
    uVar10 = puVar8[-2];
    param_1[1] = puVar8[-1];
    *param_1 = uVar10;
  }
  puVar8[-2] = __s1;
  puVar8[-1] = uVar2;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}


// ===== 006b33c0  FUN_006b33c0 =====

void FUN_006b33c0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  lVar10 = 0;
  __s2 = (void *)*param_1;
  uVar3 = param_1[1];
  while( true ) {
    uVar4 = *(ulong *)((long)param_1 + lVar10 + 0x18);
    sVar2 = uVar4;
    if (uVar3 <= uVar4) {
      sVar2 = uVar3;
    }
    iVar7 = memcmp(*(void **)((long)param_1 + lVar10 + 0x10),__s2,sVar2);
    if ((-1 < iVar7) && ((uVar3 <= uVar4 || (iVar7 != 0)))) break;
    lVar10 = lVar10 + 0x10;
  }
  puVar1 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
  puVar11 = (undefined8 *)(param_2 + -0x10);
  if (lVar10 == 0) {
    while (puVar9 = puVar11 + 2, puVar1 < puVar9) {
      uVar4 = puVar11[1];
      sVar2 = uVar4;
      if (uVar3 <= uVar4) {
        sVar2 = uVar3;
      }
      iVar7 = memcmp((void *)*puVar11,__s2,sVar2);
      puVar9 = puVar11;
      if ((iVar7 < 0) || ((puVar11 = puVar11 + -2, uVar4 < uVar3 && (iVar7 == 0)))) break;
    }
  }
  else {
    do {
      puVar9 = puVar11;
      uVar4 = puVar9[1];
      sVar2 = uVar4;
      if (uVar3 <= uVar4) {
        sVar2 = uVar3;
      }
      iVar7 = memcmp((void *)*puVar9,__s2,sVar2);
    } while ((-1 < iVar7) && ((puVar11 = puVar9 + -2, uVar3 <= uVar4 || (iVar7 != 0))));
  }
  puVar11 = puVar1;
  puVar12 = puVar9;
  if (puVar1 < puVar9) {
    do {
      uVar15 = puVar11[1];
      uVar13 = *puVar11;
      uVar14 = *puVar12;
      puVar11[1] = puVar12[1];
      *puVar11 = uVar14;
      puVar12[1] = uVar15;
      *puVar12 = uVar13;
      puVar6 = puVar11 + 2;
      do {
        puVar11 = puVar6;
        uVar4 = puVar11[1];
        sVar2 = uVar4;
        if (uVar3 <= uVar4) {
          sVar2 = uVar3;
        }
        iVar7 = memcmp((void *)*puVar11,__s2,sVar2);
        puVar6 = puVar11 + 2;
      } while ((iVar7 < 0) || ((uVar4 < uVar3 && (iVar7 == 0))));
      puVar6 = puVar12 + -2;
      do {
        puVar12 = puVar6;
        uVar4 = puVar12[1];
        sVar2 = uVar4;
        if (uVar3 <= uVar4) {
          sVar2 = uVar3;
        }
        iVar7 = memcmp((void *)*puVar12,__s2,sVar2);
      } while ((-1 < iVar7) && ((puVar6 = puVar12 + -2, uVar3 <= uVar4 || (iVar7 != 0))));
    } while (puVar11 < puVar12);
  }
  puVar12 = puVar11 + -2;
  if (puVar12 != param_1) {
    uVar13 = *puVar12;
    param_1[1] = puVar11[-1];
    *param_1 = uVar13;
  }
  puVar11[-2] = __s2;
  puVar11[-1] = uVar3;
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar12,puVar9 <= puVar1);
  }
  return;
}


// ===== 006b3594  FUN_006b3594 =====

void FUN_006b3594(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *__s1;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar8 = tpidr_el0;
  uVar7 = (long)param_2 - (long)param_1 >> 4;
  lVar9 = *(long *)(lVar8 + 0x28);
  if ((long)uVar7 < 3) {
    if (1 < uVar7) {
      if (uVar7 == 2) {
        puVar14 = param_2 + -2;
        uVar7 = param_2[-1];
        uVar3 = param_1[1];
        sVar2 = uVar7;
        if (uVar3 <= uVar7) {
          sVar2 = uVar3;
        }
        iVar5 = memcmp((void *)*puVar14,(void *)*param_1,sVar2);
        if ((iVar5 < 0) || ((uVar7 < uVar3 && (iVar5 == 0)))) {
          uVar15 = *puVar14;
          uVar17 = param_1[1];
          uVar16 = *param_1;
          param_1[1] = param_2[-1];
          *param_1 = uVar15;
          param_2[-1] = uVar17;
          *puVar14 = uVar16;
          lVar8 = *(long *)(lVar8 + 0x28);
          goto joined_r0x006b36a8;
        }
      }
      else {
LAB_006b36b0:
        FUN_006b3054(param_1,param_1 + 2,param_1 + 4,param_3);
        if (param_1 + 6 != param_2) {
          lVar13 = 0;
          iVar5 = 0;
          puVar14 = param_1 + 4;
          puVar12 = param_1 + 6;
          do {
            __s1 = (void *)*puVar12;
            uVar7 = puVar12[1];
            uVar3 = puVar14[1];
            sVar2 = uVar7;
            if (uVar3 <= uVar7) {
              sVar2 = uVar3;
            }
            iVar6 = memcmp(__s1,(void *)*puVar14,sVar2);
            if ((iVar6 < 0) || ((uVar7 < uVar3 && (iVar6 == 0)))) {
              uVar15 = *puVar14;
              puVar12[1] = puVar14[1];
              *puVar12 = uVar15;
              lVar11 = lVar13;
              do {
                puVar14 = (undefined8 *)((long)param_1 + lVar11 + 0x10);
                uVar3 = *(ulong *)((long)param_1 + lVar11 + 0x18);
                sVar2 = uVar7;
                if (uVar3 <= uVar7) {
                  sVar2 = uVar3;
                }
                iVar6 = memcmp(__s1,(void *)*puVar14,sVar2);
                if ((-1 < iVar6) && ((uVar3 <= uVar7 || (iVar6 != 0)))) {
                  *(void **)((long)param_1 + lVar11 + 0x20) = __s1;
                  *(ulong *)((long)param_1 + lVar11 + 0x28) = uVar7;
                  goto joined_r0x006b36f4;
                }
                lVar10 = lVar11 + -0x10;
                *(undefined8 *)((long)param_1 + lVar11 + 0x28) =
                     *(undefined8 *)((long)param_1 + lVar11 + 0x18);
                *(undefined8 *)((long)param_1 + lVar11 + 0x20) = *puVar14;
                lVar11 = lVar10;
              } while (lVar10 != -0x20);
              *param_1 = __s1;
              param_1[1] = uVar7;
joined_r0x006b36f4:
              iVar5 = iVar5 + 1;
              if (iVar5 == 8) {
                bVar4 = puVar12 + 2 == param_2;
                goto LAB_006b37f8;
              }
            }
            puVar1 = puVar12 + 2;
            lVar13 = lVar13 + 0x10;
            puVar14 = puVar12;
            puVar12 = puVar1;
          } while (puVar1 != param_2);
          bVar4 = true;
LAB_006b37f8:
          lVar8 = *(long *)(lVar8 + 0x28);
          goto joined_r0x006b36a8;
        }
      }
    }
  }
  else {
    if (uVar7 == 3) {
      FUN_006b3054(param_1,param_1 + 2,param_2 + -2,param_3);
      lVar8 = *(long *)(lVar8 + 0x28);
joined_r0x006b36a8:
      bVar4 = true;
      goto joined_r0x006b36a8;
    }
    if (uVar7 != 4) {
      if (uVar7 == 5) {
        FUN_006b391c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
        bVar4 = true;
        lVar8 = *(long *)(lVar8 + 0x28);
        goto joined_r0x006b36a8;
      }
      goto LAB_006b36b0;
    }
    FUN_006b3810(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
  }
  bVar4 = true;
  lVar8 = *(long *)(lVar8 + 0x28);
joined_r0x006b36a8:
  if (lVar8 == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


// ===== 006b3810  FUN_006b3810 =====

void FUN_006b3810(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  FUN_006b3054();
  uVar2 = param_4[1];
  uVar3 = param_3[1];
  sVar1 = uVar2;
  if (uVar3 <= uVar2) {
    sVar1 = uVar3;
  }
  iVar5 = memcmp((void *)*param_4,(void *)*param_3,sVar1);
  if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
    uVar7 = *param_4;
    uVar9 = param_3[1];
    uVar8 = *param_3;
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_4[1] = uVar9;
    *param_4 = uVar8;
    uVar2 = param_3[1];
    uVar3 = param_2[1];
    sVar1 = uVar2;
    if (uVar3 <= uVar2) {
      sVar1 = uVar3;
    }
    iVar5 = memcmp((void *)*param_3,(void *)*param_2,sVar1);
    if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
      uVar7 = *param_3;
      uVar9 = param_2[1];
      uVar8 = *param_2;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_3[1] = uVar9;
      *param_3 = uVar8;
      uVar2 = param_2[1];
      uVar3 = param_1[1];
      sVar1 = uVar2;
      if (uVar3 <= uVar2) {
        sVar1 = uVar3;
      }
      iVar5 = memcmp((void *)*param_2,(void *)*param_1,sVar1);
      if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
        uVar7 = *param_2;
        uVar9 = param_1[1];
        uVar8 = *param_1;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_2[1] = uVar9;
        *param_2 = uVar8;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b391c  FUN_006b391c =====

void FUN_006b391c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  FUN_006b3810();
  uVar2 = param_5[1];
  uVar3 = param_4[1];
  sVar1 = uVar2;
  if (uVar3 <= uVar2) {
    sVar1 = uVar3;
  }
  iVar5 = memcmp((void *)*param_5,(void *)*param_4,sVar1);
  if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
    uVar7 = *param_5;
    uVar9 = param_4[1];
    uVar8 = *param_4;
    param_4[1] = param_5[1];
    *param_4 = uVar7;
    param_5[1] = uVar9;
    *param_5 = uVar8;
    uVar2 = param_4[1];
    uVar3 = param_3[1];
    sVar1 = uVar2;
    if (uVar3 <= uVar2) {
      sVar1 = uVar3;
    }
    iVar5 = memcmp((void *)*param_4,(void *)*param_3,sVar1);
    if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
      uVar7 = *param_4;
      uVar9 = param_3[1];
      uVar8 = *param_3;
      param_3[1] = param_4[1];
      *param_3 = uVar7;
      param_4[1] = uVar9;
      *param_4 = uVar8;
      uVar2 = param_3[1];
      uVar3 = param_2[1];
      sVar1 = uVar2;
      if (uVar3 <= uVar2) {
        sVar1 = uVar3;
      }
      iVar5 = memcmp((void *)*param_3,(void *)*param_2,sVar1);
      if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
        uVar7 = *param_3;
        uVar9 = param_2[1];
        uVar8 = *param_2;
        param_2[1] = param_3[1];
        *param_2 = uVar7;
        param_3[1] = uVar9;
        *param_3 = uVar8;
        uVar2 = param_2[1];
        uVar3 = param_1[1];
        sVar1 = uVar2;
        if (uVar3 <= uVar2) {
          sVar1 = uVar3;
        }
        iVar5 = memcmp((void *)*param_2,(void *)*param_1,sVar1);
        if ((iVar5 < 0) || ((uVar2 < uVar3 && (iVar5 == 0)))) {
          uVar7 = *param_2;
          uVar9 = param_1[1];
          uVar8 = *param_1;
          param_1[1] = param_2[1];
          *param_1 = uVar7;
          param_2[1] = uVar9;
          *param_2 = uVar8;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b3a60  FUN_006b3a60 =====

void FUN_006b3a60(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t sVar2;
  void *__s2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  if (1 < param_3) {
    uVar6 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar6) {
      lVar5 = (long)param_4 - param_1 >> 3;
      uVar9 = lVar5 + 1;
      uVar1 = lVar5 + 2;
      puVar10 = (undefined8 *)(param_1 + uVar9 * 0x10);
      if ((long)uVar1 < param_3) {
        uVar3 = puVar10[1];
        uVar8 = puVar10[3];
        sVar2 = uVar3;
        if (uVar8 <= uVar3) {
          sVar2 = uVar8;
        }
        iVar4 = memcmp((void *)*puVar10,(void *)puVar10[2],sVar2);
        if ((iVar4 < 0) || ((uVar3 < uVar8 && (iVar4 == 0)))) {
          uVar9 = uVar1;
          puVar10 = puVar10 + 2;
        }
      }
      uVar1 = puVar10[1];
      __s2 = (void *)*param_4;
      uVar3 = param_4[1];
      sVar2 = uVar1;
      if (uVar3 <= uVar1) {
        sVar2 = uVar3;
      }
      iVar4 = memcmp((void *)*puVar10,__s2,sVar2);
      if ((-1 < iVar4) && ((uVar3 <= uVar1 || (iVar4 != 0)))) {
        while( true ) {
          puVar11 = puVar10;
          uVar12 = *puVar11;
          param_4[1] = puVar11[1];
          *param_4 = uVar12;
          if ((long)uVar6 < (long)uVar9) break;
          uVar8 = uVar9 << 1 | 1;
          uVar1 = uVar9 * 2 + 2;
          puVar10 = (undefined8 *)(param_1 + uVar8 * 0x10);
          uVar9 = uVar8;
          if ((long)uVar1 < param_3) {
            uVar8 = puVar10[1];
            uVar7 = puVar10[3];
            sVar2 = uVar8;
            if (uVar7 <= uVar8) {
              sVar2 = uVar7;
            }
            iVar4 = memcmp((void *)*puVar10,(void *)puVar10[2],sVar2);
            if ((iVar4 < 0) || ((uVar8 < uVar7 && (iVar4 == 0)))) {
              uVar9 = uVar1;
              puVar10 = puVar10 + 2;
            }
          }
          uVar1 = puVar10[1];
          sVar2 = uVar1;
          if (uVar3 <= uVar1) {
            sVar2 = uVar3;
          }
          iVar4 = memcmp((void *)*puVar10,__s2,sVar2);
          if ((iVar4 < 0) || ((param_4 = puVar11, uVar1 < uVar3 && (iVar4 == 0)))) break;
        }
        *puVar11 = __s2;
        puVar11[1] = uVar3;
      }
    }
  }
  return;
}


// ===== 006b3bdc  FUN_006b3bdc =====

void FUN_006b3bdc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  size_t sVar4;
  void *__s2;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  if (1 < param_4) {
    uVar18 = param_1[1];
    uVar16 = *param_1;
    puVar9 = param_1;
    uVar14 = 0;
    do {
      uVar3 = uVar14 << 1 | 1;
      uVar1 = uVar14 * 2 + 2;
      puVar2 = puVar9 + uVar14 * 2 + 2;
      puVar12 = puVar2;
      uVar13 = uVar3;
      if ((long)uVar1 < param_4) {
        puVar15 = puVar9 + uVar14 * 2 + 4;
        uVar5 = puVar9[uVar14 * 2 + 5];
        uVar6 = puVar9[uVar14 * 2 + 3];
        sVar4 = uVar6;
        if (uVar5 <= uVar6) {
          sVar4 = uVar5;
        }
        iVar8 = memcmp((void *)puVar9[uVar14 * 2 + 2],(void *)*puVar15,sVar4);
        puVar12 = puVar15;
        uVar13 = uVar1;
        if (((-1 < iVar8) && (puVar12 = puVar2, uVar13 = uVar3, uVar6 < uVar5)) &&
           (puVar12 = puVar15, uVar13 = uVar1, iVar8 != 0)) {
          puVar12 = puVar2;
          uVar13 = uVar3;
        }
      }
      uVar17 = *puVar12;
      puVar9[1] = puVar12[1];
      *puVar9 = uVar17;
      puVar9 = puVar12;
      uVar14 = uVar13;
    } while ((long)uVar13 <= (long)(param_4 - 2U >> 1));
    puVar9 = (undefined8 *)(param_2 + -0x10);
    if (puVar12 == puVar9) {
      puVar12[1] = uVar18;
      *puVar12 = uVar16;
    }
    else {
      uVar17 = *puVar9;
      puVar12[1] = *(undefined8 *)(param_2 + -8);
      *puVar12 = uVar17;
      lVar11 = (long)puVar12 + (0x10 - (long)param_1) >> 4;
      uVar14 = lVar11 - 2;
      *(undefined8 *)(param_2 + -8) = uVar18;
      *puVar9 = uVar16;
      if (1 < lVar11) {
        uVar13 = uVar14 >> 1;
        __s2 = (void *)*puVar12;
        uVar1 = puVar12[1];
        puVar9 = param_1 + uVar13 * 2;
        uVar3 = puVar9[1];
        sVar4 = uVar3;
        if (uVar1 <= uVar3) {
          sVar4 = uVar1;
        }
        iVar8 = memcmp((void *)*puVar9,__s2,sVar4);
        if ((iVar8 < 0) || (uVar3 < uVar1 && iVar8 == 0)) {
          uVar16 = *puVar9;
          puVar12[1] = puVar9[1];
          *puVar12 = uVar16;
          while (1 < uVar14) {
            uVar14 = uVar13 - 1;
            uVar13 = uVar14 >> 1;
            puVar2 = param_1 + uVar13 * 2;
            uVar3 = puVar2[1];
            sVar4 = uVar3;
            if (uVar1 <= uVar3) {
              sVar4 = uVar1;
            }
            iVar8 = memcmp((void *)*puVar2,__s2,sVar4);
            if ((-1 < iVar8) && (uVar1 <= uVar3 || iVar8 != 0)) break;
            uVar16 = *puVar2;
            puVar9[1] = puVar2[1];
            *puVar9 = uVar16;
            puVar9 = puVar2;
          }
          *puVar9 = __s2;
          puVar9[1] = uVar1;
        }
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b3da4  FUN_006b3da4 =====

undefined8 * FUN_006b3da4(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong *puVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00759c3c(0x18);
  lVar8 = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = puVar3 + 1;
  do {
    uVar7 = *(undefined8 *)((long)&PTR_s_FileOptions_00799388 + lVar8);
    __n = strlen("google.protobuf.");
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_a0);
      }
      goto LAB_006b414c;
    }
    if (__n < 0x17) {
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
      pvVar6 = (void *)((ulong)&local_a0 | 1);
      if (__n != 0) goto LAB_006b3e90;
    }
    else {
      uVar5 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar5 = __n | 7;
      }
      pvVar6 = (void *)FUN_00759c3c(uVar5 + 1);
      local_a0 = uVar5 + 1 | 1;
      uStack_98 = __n;
      local_90 = pvVar6;
LAB_006b3e90:
      memcpy(pvVar6,"google.protobuf.",__n);
    }
    *(undefined1 *)((long)pvVar6 + __n) = 0;
                    /* try { // try from 006b3ea4 to 006b3eaf has its CatchHandler @ 006b409c */
    puVar4 = (ulong *)FUN_00713bdc(&local_a0,uVar7);
    local_70 = (void *)puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 006b3ec8 to 006b3ed7 has its CatchHandler @ 006b40a4 */
    FUN_006b4180(puVar3,&local_80,&local_80);
    if ((local_80 & 1) == 0) {
      if ((local_a0 & 1) == 0) goto LAB_006b3ee8;
LAB_006b3f0c:
      free(local_90);
      uVar5 = strlen("proto");
    }
    else {
      free(local_70);
      if ((local_a0 & 1) != 0) goto LAB_006b3f0c;
LAB_006b3ee8:
      uVar5 = strlen("proto");
    }
    if (0xfffffffffffffff7 < uVar5) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b8);
      }
      goto LAB_006b414c;
    }
    if (uVar5 < 0x17) {
      uVar1 = local_b8 >> 8;
      local_b8 = CONCAT71((int7)uVar1,(char)((int)uVar5 << 1));
      pvVar6 = (void *)((ulong)&local_b8 | 1);
      if (uVar5 != 0) goto LAB_006b3f74;
    }
    else {
      uVar1 = (uVar5 & 0xfffffffffffffff8) + 8;
      if ((uVar5 | 7) != 0x17) {
        uVar1 = uVar5 | 7;
      }
      pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
      local_b8 = uVar1 + 1 | 1;
      local_b0 = uVar5;
      local_a8 = pvVar6;
LAB_006b3f74:
      memcpy(pvVar6,"proto",uVar5);
    }
    *(undefined1 *)((long)pvVar6 + uVar5) = 0;
                    /* try { // try from 006b3f88 to 006b3f97 has its CatchHandler @ 006b40c8 */
    puVar4 = (ulong *)FUN_00713bdc(&local_b8,&DAT_001f2c41);
    local_90 = (void *)puVar4[2];
    uStack_98 = puVar4[1];
    local_a0 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 006b3fb0 to 006b3fbb has its CatchHandler @ 006b40d8 */
    puVar4 = (ulong *)FUN_00713bdc(&local_a0,uVar7);
    local_70 = (void *)puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 006b3fd4 to 006b3fe3 has its CatchHandler @ 006b40e8 */
    FUN_006b4180(puVar3,&local_80,&local_80);
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
    if ((local_b8 & 1) != 0) {
      free(local_a8);
    }
    lVar8 = lVar8 + 8;
    if (lVar8 == 0x48) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return puVar3;
      }
LAB_006b414c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 006b4150  FUN_006b4150 =====

void FUN_006b4150(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0047647c(param_1,*(undefined8 *)((long)param_1 + 8));
    free(param_1);
    return;
  }
  return;
}


// ===== 006b4180  FUN_006b4180 =====

undefined1  [16] FUN_006b4180(long *param_1,byte *param_2,long *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  byte *__s1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar9 = param_1 + 1;
  plVar7 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar7 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar9 = plVar7;
        __s2 = (void *)((long)plVar9 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
        if ((*(byte *)(plVar9 + 4) & 1) != 0) {
          __s2 = (void *)plVar9[6];
          uVar3 = plVar9[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        iVar4 = memcmp(__s2,__s1,__n);
        bVar2 = uVar3 < uVar1;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (!bVar2) {
          uVar6 = 0;
          goto LAB_006b42d4;
        }
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar10 = plVar9 + 1;
          goto LAB_006b4268;
        }
      }
      plVar7 = (long *)*plVar9;
      plVar10 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_006b4268:
  plVar5 = (long *)FUN_00759c3c(0x38);
  lVar12 = param_3[1];
  lVar11 = *param_3;
  lVar8 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  plVar5[5] = lVar12;
  plVar5[4] = lVar11;
  plVar5[6] = lVar8;
  param_3[2] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar9;
  *plVar10 = (long)plVar5;
  plVar7 = plVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar7 = (long *)*plVar10;
  }
  FUN_00328410(param_1[1],plVar7);
  uVar6 = 1;
  param_1[2] = param_1[2] + 1;
  plVar9 = plVar5;
LAB_006b42d4:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 006b42f0  FUN_006b42f0 =====

long * FUN_006b42f0(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_006b4348;
LAB_006b437c:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_006b4360;
LAB_006b4394:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_006b4368;
LAB_006b43a0:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_006b437c;
LAB_006b4348:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_006b4394;
LAB_006b4360:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_006b43a0;
LAB_006b4368:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 006b4418  FUN_006b4418 =====

void FUN_006b4418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007993e0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_006dbee8(param_1);
  free(param_1);
  return;
}


// ===== 006b445c  FUN_006b445c =====

void FUN_006b445c(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 8);
  uVar1 = (ulong)(*pbVar3 >> 1);
  if ((*pbVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar1 != 0) {
    FUN_00713bdc(pbVar3,&DAT_001d8635);
  }
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
  FUN_0071302c(pbVar3,pbVar2,uVar1);
  return;
}


// ===== 006b44bc  FUN_006b44bc =====

void FUN_006b44bc(void)

{
  return;
}


// ===== 006b44c0  FUN_006b44c0 =====

void FUN_006b44c0(void *param_1)

{
  FUN_006eadd4();
  free(param_1);
  return;
}


// ===== 006b44e4  FUN_006b44e4 =====

void FUN_006b44e4(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  byte bVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *local_90;
  undefined *local_88;
  undefined ***local_80;
  undefined **local_78;
  undefined **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = (**(code **)(*param_2 + 0x80))(param_2);
  pcVar6 = (char *)FUN_00696e18(*(undefined8 *)(param_1 + 8),param_3,*(long *)(lVar5 + 8) + 0x18,0,1
                               );
  puVar4 = PTR_thunk_FUN_006af330_007a32d0;
  pcVar7 = pcVar6;
  if (*pcVar6 == '\x02') {
LAB_006b4698:
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if ((*pcVar6 == '\x01') && (*(char *)(*(long *)(lVar5 + 0x20) + 0x48) != '\0')) {
      if (*(int *)(pcVar6 + 0x7c) < 1) {
        pcVar7 = (char *)0x0;
        goto LAB_006b4698;
      }
      lVar11 = 0;
      lVar12 = 0;
      do {
        lVar13 = *(long *)(pcVar6 + 0x50);
        puVar1 = (undefined *)(lVar13 + lVar11);
        if (*(long *)(puVar1 + 0x20) == lVar5) {
          plVar8 = *(long **)(puVar1 + 0x18);
          if ((plVar8 != (long *)0x0) && (local_88 = puVar4, local_90 = puVar1, *plVar8 != -1)) {
            local_78 = &local_88;
            local_80 = &local_78;
            local_70 = &local_90;
            FUN_00710f84(plVar8,&local_80,FUN_00685640);
          }
          lVar2 = lVar13 + lVar11;
          if ((*(char *)(lVar2 + 2) == '\v') && ((*(byte *)(lVar2 + 1) & 0x60) == 0x20)) {
            plVar8 = *(long **)(puVar1 + 0x18);
            if (plVar8 == (long *)0x0) {
              bVar9 = 0xb;
            }
            else {
              local_88 = puVar1;
              if (*plVar8 != -1) {
                local_70 = &local_88;
                local_78 = (undefined **)puVar4;
                local_80 = &local_78;
                FUN_00710f84(plVar8,&local_80,FUN_006bd98c);
              }
              bVar9 = *(byte *)(lVar2 + 2);
            }
            pcVar7 = (char *)(lVar13 + lVar11);
            pcVar10 = *(char **)(pcVar7 + 0x30);
            if ((bVar9 & 0xfe) != 10) {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 == pcVar6) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                return;
              }
              goto LAB_006b4690;
            }
          }
        }
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x48;
      } while (lVar12 < *(int *)(pcVar6 + 0x7c));
    }
    pcVar7 = (char *)0x0;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
LAB_006b4690:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar7);
}


// ===== 006b46e0  FUN_006b46e0 =====

char * FUN_006b46e0(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  size_t __n;
  byte bVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  byte *pbVar5;
  
  sVar3 = strlen(PTR_s_type_googleapis_com__007a3130);
  bVar1 = *param_3;
  __n = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  if (sVar3 == __n) {
    if (sVar3 == 0xffffffffffffffff) {
                    /* try { // try from 006b47d4 to 006b47db has its CatchHandler @ 006b47e8 */
                    /* WARNING: Subroutine does not return */
      FUN_0030b8f4(param_3);
    }
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    iVar2 = memcmp(pbVar5,PTR_s_type_googleapis_com__007a3130,sVar3);
    if (iVar2 == 0) goto LAB_006b47a4;
  }
  sVar3 = strlen("type.googleprod.com/");
  if (sVar3 == __n) {
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 006b47dc to 006b47e3 has its CatchHandler @ 006b47e4 */
                    /* WARNING: Subroutine does not return */
      FUN_0030b8f4(param_3);
    }
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    iVar2 = memcmp(pbVar5,PTR_s_type_googleprod_com__007a3138,__n);
    if (iVar2 == 0) {
LAB_006b47a4:
      pcVar4 = (char *)FUN_00696a6c(*(undefined8 *)(param_1 + 8),param_4,1);
      if (*pcVar4 != '\x01') {
        pcVar4 = (char *)0x0;
      }
      return pcVar4;
    }
  }
  return (char *)0x0;
}


// ===== 006b47ec  FUN_006b47ec =====

void FUN_006b47ec(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *__ptr;
  byte *pbVar7;
  
  __ptr = (int *)*param_1;
  *param_1 = 0;
  if (__ptr != (int *)0x0) {
    iVar3 = *__ptr;
    iVar2 = __ptr[1];
    lVar4 = (long)iVar2;
    pbVar7 = (byte *)0x0;
    if (iVar3 != iVar2) {
      pbVar7 = (byte *)((long)__ptr + (long)iVar3);
    }
    pbVar1 = (byte *)0x0;
    if (iVar3 != iVar2) {
      pbVar1 = (byte *)((long)__ptr + lVar4);
    }
    if (pbVar7 != pbVar1) {
      do {
        if ((*pbVar7 & 1) != 0) {
          free(*(void **)(pbVar7 + 0x10));
        }
        pbVar7 = pbVar7 + 0x18;
      } while (pbVar7 != pbVar1);
      iVar2 = __ptr[1];
      lVar4 = (long)iVar2;
    }
    iVar3 = __ptr[2];
    lVar6 = (long)iVar3;
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + lVar4;
    }
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar6;
    }
    if (lVar5 != lVar4) {
      do {
        FUN_006d0150(lVar5);
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != lVar4);
      iVar3 = __ptr[2];
      lVar6 = (long)iVar3;
    }
    iVar2 = __ptr[3];
    lVar5 = (long)iVar2;
    lVar4 = 0;
    if (iVar3 != iVar2) {
      lVar4 = (long)__ptr + lVar6;
    }
    lVar6 = 0;
    if (iVar3 != iVar2) {
      lVar6 = (long)__ptr + lVar5;
    }
    if (lVar4 != lVar6) {
      do {
        FUN_00688324(lVar4);
        lVar4 = lVar4 + 0x118;
      } while (lVar4 != lVar6);
      iVar2 = __ptr[3];
      lVar5 = (long)iVar2;
    }
    iVar3 = __ptr[4];
    lVar6 = (long)iVar3;
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar5;
    }
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + lVar6;
    }
    if (lVar4 != lVar5) {
      do {
        FUN_006ca504(lVar4);
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar5);
      iVar3 = __ptr[4];
      lVar6 = (long)iVar3;
    }
    iVar2 = __ptr[5];
    lVar5 = (long)iVar2;
    lVar4 = 0;
    if (iVar3 != iVar2) {
      lVar4 = (long)__ptr + lVar6;
    }
    lVar6 = 0;
    if (iVar3 != iVar2) {
      lVar6 = (long)__ptr + lVar5;
    }
    if (lVar4 != lVar6) {
      do {
        FUN_006cae4c(lVar4);
        lVar4 = lVar4 + 0x58;
      } while (lVar4 != lVar6);
      iVar2 = __ptr[5];
      lVar5 = (long)iVar2;
    }
    iVar3 = __ptr[6];
    lVar6 = (long)iVar3;
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar5;
    }
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + lVar6;
    }
    if (lVar4 != lVar5) {
      do {
        FUN_006cc15c(lVar4);
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar5);
      iVar3 = __ptr[6];
      lVar6 = (long)iVar3;
    }
    iVar2 = __ptr[7];
    lVar5 = (long)iVar2;
    lVar4 = 0;
    if (iVar3 != iVar2) {
      lVar4 = (long)__ptr + lVar6;
    }
    lVar6 = 0;
    if (iVar3 != iVar2) {
      lVar6 = (long)__ptr + lVar5;
    }
    if (lVar4 != lVar6) {
      do {
        FUN_006cc90c(lVar4);
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar6);
      iVar2 = __ptr[7];
      lVar5 = (long)iVar2;
    }
    iVar3 = __ptr[8];
    lVar6 = (long)iVar3;
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar5;
    }
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + lVar6;
    }
    if (lVar4 != lVar5) {
      do {
        FUN_006c2af8(lVar4);
        lVar4 = lVar4 + 0x48;
      } while (lVar4 != lVar5);
      iVar3 = __ptr[8];
      lVar6 = (long)iVar3;
    }
    iVar2 = __ptr[9];
    lVar5 = (long)iVar2;
    lVar4 = 0;
    if (iVar3 != iVar2) {
      lVar4 = (long)__ptr + lVar6;
    }
    lVar6 = 0;
    if (iVar3 != iVar2) {
      lVar6 = (long)__ptr + lVar5;
    }
    if (lVar4 != lVar6) {
      do {
        FUN_006cbae4(lVar4);
        lVar4 = lVar4 + 0x48;
      } while (lVar4 != lVar6);
      iVar2 = __ptr[9];
      lVar5 = (long)iVar2;
    }
    iVar3 = __ptr[10];
    lVar6 = (long)iVar3;
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar5;
    }
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + lVar6;
    }
    if (lVar4 != lVar5) {
      do {
        FUN_006ccfe0(lVar4);
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar5);
      iVar3 = __ptr[10];
      lVar6 = (long)iVar3;
    }
    iVar2 = __ptr[0xb];
    lVar5 = (long)iVar2;
    lVar4 = 0;
    if (iVar3 != iVar2) {
      lVar4 = (long)__ptr + lVar6;
    }
    lVar6 = 0;
    if (iVar3 != iVar2) {
      lVar6 = (long)__ptr + lVar5;
    }
    if (lVar4 != lVar6) {
      do {
        FUN_006cd6bc(lVar4);
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar6);
      iVar2 = __ptr[0xb];
      lVar5 = (long)iVar2;
    }
    iVar3 = __ptr[0xc];
    lVar4 = 0;
    if (iVar2 != iVar3) {
      lVar4 = (long)__ptr + lVar5;
    }
    lVar5 = 0;
    if (iVar2 != iVar3) {
      lVar5 = (long)__ptr + (long)iVar3;
    }
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0xa8) {
      FUN_006c88e4(lVar4);
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006b4b34  FUN_006b4b34 =====

void FUN_006b4b34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b4b34(param_1,*param_2);
    FUN_006b4b34(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 006b4b78  FUN_006b4b78 =====

void FUN_006b4b78(long *param_1,byte *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b4bc8 to 006b4bcf has its CatchHandler @ 006b5034 */
  uVar7 = FUN_0034bfb4(&local_80,pbVar3,uVar14);
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x25 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar14 <= uVar7) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar7 / uVar14;
        }
        unaff_x25 = uVar7 - uVar10 * uVar14;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar12, plVar8 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar13 < 2) {
        do {
          if (plVar8[1] == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b4d8c;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_006b4d8c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_006b4d8c;
              }
            }
          }
          else if ((plVar8[1] & uVar14 - 1) != unaff_x25) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar8[1];
          if (uVar13 == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b4d8c;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_006b4d8c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_006b4d8c;
              }
            }
          }
          else {
            if (uVar14 <= uVar13) {
              uVar10 = 0;
              if (uVar14 != 0) {
                uVar10 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar10 * uVar14;
            }
            if (uVar13 != unaff_x25) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = param_1 + 2;
  plVar9 = (long *)FUN_00759c3c(0x30);
  bVar4 = *param_3;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  local_80 = plVar9;
  plStack_78 = plVar8;
  if ((bVar4 & 1) == 0) {
    lVar17 = *(long *)param_3;
    lVar11 = *(long *)(param_3 + 0x10);
    plVar9[3] = *(long *)(param_3 + 8);
    plVar9[2] = lVar17;
    plVar9[4] = lVar11;
  }
  else {
                    /* try { // try from 006b4dd0 to 006b4dd7 has its CatchHandler @ 006b500c */
    FUN_002fb36c(plVar9 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  lVar11 = param_1[3];
  fVar18 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(param_3 + 0x18);
  local_70 = 1;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar13 = uVar13 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 006b4e7c to 006b4eff has its CatchHandler @ 006b5008 */
      uVar13 = FUN_00711ce0(uVar13);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar13) {
LAB_006b4e94:
      FUN_006b5088(param_1,uVar13);
    }
    else if (uVar13 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_006b4efc:
        uVar10 = FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_006b4efc;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      if (uVar13 < uVar14) goto LAB_006b4e94;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x006b4f88;
    }
    if (uVar7 < uVar14) {
      plVar9 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x006b4f88;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar7 / uVar14;
    }
    unaff_x25 = uVar7 - uVar13 * uVar14;
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) goto LAB_006b4f34;
LAB_006b4e1c:
    *local_80 = *plVar9;
    *plVar9 = (long)local_80;
  }
  else {
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x006b4f88:
    if (plVar9 != (long *)0x0) goto LAB_006b4e1c;
LAB_006b4f34:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*local_80 != 0) {
      uVar7 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar13 * uVar14;
      }
      *(long **)(*param_1 + uVar7 * 8) = local_80;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  plVar8 = local_80;
LAB_006b4fd8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8,uVar16);
LAB_006b4d8c:
  uVar16 = 0;
  goto LAB_006b4fd8;
}


// ===== 006b5038  FUN_006b5038 =====

void FUN_006b5038(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x10) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x20));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006b5088  FUN_006b5088 =====

void FUN_006b5088(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006b520c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006b520c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006b5260  FUN_006b5260 =====

void FUN_006b5260(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5274  FUN_006b5274 =====

long * FUN_006b5274(long *param_1,undefined8 *param_2)

{
  byte *__s2;
  size_t __n;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = (byte *)*param_2;
  __n = param_2[1];
  if ((long)__n < 1) {
    uVar7 = 0;
    uVar9 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar4 = __s2;
    do {
      pbVar5 = pbVar4 + 1;
      uVar7 = uVar7 * 5 + (ulong)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < __s2 + __n);
    uVar9 = param_1[1];
  }
  if (uVar9 == 0) {
    return (long *)0x0;
  }
  uVar11 = NEON_cnt(uVar9,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar3 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar3 < 2) {
    uVar8 = uVar9 - 1 & uVar7;
  }
  else {
    uVar8 = uVar7;
    if (uVar9 <= uVar7) {
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar7 / uVar9;
      }
      uVar8 = uVar7 - uVar8 * uVar9;
    }
  }
  plVar6 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar6[1];
          if (uVar3 == uVar7) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else {
            if (uVar9 <= uVar3) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar3 / uVar9;
              }
              uVar3 = uVar3 - uVar1 * uVar9;
            }
            if (uVar3 != uVar8) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    return plVar6;
  }
  return (long *)0x0;
}


// ===== 006b5420  FUN_006b5420 =====

void FUN_006b5420(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_006b54ec;
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
    if (uVar9 == uVar3) goto LAB_006b54ec;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_006b54ec:
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
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 006b5554  FUN_006b5554 =====

long * FUN_006b5554(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1 + 1;
  plVar2 = (long *)*plVar4;
  if (plVar2 != (long *)0x0) {
    uVar5 = *param_2;
    plVar6 = plVar2;
    plVar7 = plVar4;
    do {
      if ((ulong)plVar6[4] < uVar5) {
        plVar6 = plVar6 + 1;
        plVar3 = plVar7;
      }
      else {
        plVar3 = plVar6;
        if (((ulong)plVar6[4] <= uVar5) && ((int)plVar6[5] < (int)param_2[1])) {
          plVar6 = plVar6 + 1;
          plVar3 = plVar7;
        }
      }
      plVar6 = (long *)*plVar6;
      plVar7 = plVar3;
    } while (plVar6 != (long *)0x0);
    if ((plVar3 != plVar4) && ((ulong)plVar3[4] <= uVar5)) {
      plVar6 = plVar3;
      if ((uVar5 <= (ulong)plVar3[4]) && (plVar6 = plVar4, (int)plVar3[5] <= (int)param_2[1])) {
        plVar6 = plVar3;
      }
      if (plVar6 != plVar4) {
        plVar4 = plVar6;
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar3 = (long *)plVar4[2];
            bVar1 = (long *)*plVar3 != plVar4;
            plVar4 = plVar3;
          } while (bVar1);
        }
        else {
          do {
            plVar3 = plVar7;
            plVar7 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar6) {
          *param_1 = plVar3;
        }
        param_1[2] = param_1[2] + -1;
        FUN_00328dd0(plVar2,plVar6);
        free(plVar6);
        return (long *)1;
      }
    }
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


// ===== 006b5684  FUN_006b5684 =====

void FUN_006b5684(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  void *__dest;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar4 >> 3)) {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2;
      uVar8 = param_2 - 1 & 0x1fffffffffffffff;
      if (2 < uVar8) {
        uVar8 = uVar8 + 1;
        uVar2 = uVar8 & 0x3ffffffffffffffc;
        puVar3 = puVar4 + 2;
        uVar7 = uVar2;
        do {
          uVar7 = uVar7 - 4;
          puVar3[-1] = &DAT_002108c4;
          puVar3[-2] = &DAT_002108c4;
          puVar3[1] = &DAT_002108c4;
          *puVar3 = &DAT_002108c4;
          puVar3 = puVar3 + 4;
        } while (uVar7 != 0);
        puVar4 = puVar4 + uVar2;
        if (uVar8 == uVar2) goto LAB_006b5770;
      }
      do {
        puVar3 = puVar4 + 1;
        *puVar4 = &DAT_002108c4;
        puVar4 = puVar3;
      } while (puVar3 != puVar5);
    }
LAB_006b5770:
    param_1[1] = puVar5;
    return;
  }
  pvVar10 = (void *)*param_1;
  lVar11 = (long)puVar4 - (long)pvVar10 >> 3;
  uVar8 = lVar11 + param_2;
  if (uVar8 >> 0x3d != 0) {
    FUN_006b5844(param_1);
LAB_006b5840:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar2 = param_1[2] - (long)pvVar10;
  uVar7 = (long)uVar2 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar2) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_006b5840;
    __dest = (void *)FUN_00759c3c(uVar7 << 3);
  }
  puVar1 = PTR_DAT_007a32a8;
  puVar5 = (undefined8 *)((long)__dest + lVar11 * 8);
  uVar8 = param_2 - 1 & 0x1fffffffffffffff;
  puVar3 = puVar5;
  if (2 < uVar8) {
    uVar8 = uVar8 + 1;
    uVar9 = uVar8 & 0x3ffffffffffffffc;
    puVar3 = puVar5 + uVar9;
    puVar6 = puVar5 + 2;
    uVar2 = uVar9;
    do {
      uVar2 = uVar2 - 4;
      puVar6[-1] = puVar1;
      puVar6[-2] = puVar1;
      puVar6[1] = puVar1;
      *puVar6 = puVar1;
      puVar6 = puVar6 + 4;
    } while (uVar2 != 0);
    if (uVar8 == uVar9) goto LAB_006b57e4;
  }
  do {
    puVar6 = puVar3 + 1;
    *puVar3 = &DAT_002108c4;
    puVar3 = puVar6;
  } while (puVar6 != puVar5 + param_2);
LAB_006b57e4:
  memcpy(__dest,pvVar10,(long)puVar4 - (long)pvVar10);
  pvVar10 = (void *)*param_1;
  *param_1 = __dest;
  param_1[1] = puVar5 + param_2;
  param_1[2] = (void *)((long)__dest + uVar7 * 8);
  if (pvVar10 == (void *)0x0) {
    return;
  }
  free(pvVar10);
  return;
}


// ===== 006b5844  FUN_006b5844 =====

void FUN_006b5844(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5858  FUN_006b5858 =====

void FUN_006b5858(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 3;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_006b5984(param_1);
LAB_006b5980:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) goto LAB_006b5980;
      __dest = (void *)FUN_00759c3c(uVar3 << 3);
    }
    __s = (void *)((long)__dest + lVar4 * 8);
    memset(__s,0,param_2 * 8);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 8);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 006b5984  FUN_006b5984 =====

void FUN_006b5984(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5998  FUN_006b5998 =====

void FUN_006b5998(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar4 >> 4)) {
    puVar3 = puVar4;
    if (param_2 != 0) {
      puVar3 = puVar4 + param_2 * 2;
      uVar1 = param_2 - 1 & 0xfffffffffffffff;
      puVar5 = puVar4;
      if (uVar1 != 0) {
        uVar1 = uVar1 + 1;
        uVar2 = uVar1 & 0x1ffffffffffffffe;
        puVar5 = puVar4 + uVar2 * 2;
        puVar4 = puVar4 + 2;
        uVar6 = uVar2;
        do {
          puVar4[-2] = 0;
          uVar6 = uVar6 - 2;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + -1) = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          puVar4 = puVar4 + 4;
        } while (uVar6 != 0);
        if (uVar1 == uVar2) goto LAB_006b5ad4;
      }
      do {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar3);
    }
LAB_006b5ad4:
    param_1[1] = puVar3;
    return;
  }
  pvVar9 = (void *)*param_1;
  lVar10 = (long)puVar4 - (long)pvVar9 >> 4;
  uVar1 = lVar10 + param_2;
  if (uVar1 >> 0x3c != 0) {
    FUN_006b5b6c(param_1);
LAB_006b5b68:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar2 = param_1[2] - (long)pvVar9;
  uVar6 = (long)uVar2 >> 3;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffef < uVar2) {
    uVar6 = 0xfffffffffffffff;
  }
  if (uVar6 == 0) {
    __dest = (void *)0x0;
    puVar3 = (undefined8 *)(lVar10 * 0x10);
    puVar5 = puVar3 + param_2 * 2;
  }
  else {
    if (uVar6 >> 0x3c != 0) goto LAB_006b5b68;
    __dest = (void *)FUN_00759c3c(uVar6 << 4);
    puVar3 = (undefined8 *)((long)__dest + lVar10 * 0x10);
    puVar5 = puVar3 + param_2 * 2;
  }
  uVar1 = param_2 - 1 & 0xfffffffffffffff;
  if (uVar1 != 0) {
    uVar1 = uVar1 + 1;
    uVar7 = uVar1 & 0x1ffffffffffffffe;
    puVar8 = puVar3 + 2;
    uVar2 = uVar7;
    do {
      puVar8[-2] = 0;
      uVar2 = uVar2 - 2;
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + -1) = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      puVar8 = puVar8 + 4;
    } while (uVar2 != 0);
    puVar3 = puVar3 + uVar7 * 2;
    if (uVar1 == uVar7) goto LAB_006b5b0c;
  }
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar5);
LAB_006b5b0c:
  memcpy(__dest,pvVar9,(long)puVar4 - (long)pvVar9);
  pvVar9 = (void *)*param_1;
  *param_1 = __dest;
  param_1[1] = puVar5;
  param_1[2] = (void *)((long)__dest + uVar6 * 0x10);
  if (pvVar9 != (void *)0x0) {
    free(pvVar9);
    return;
  }
  return;
}


// ===== 006b5b6c  FUN_006b5b6c =====

void FUN_006b5b6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5b80  FUN_006b5b80 =====

void FUN_006b5b80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5b94  FUN_006b5b94 =====

void FUN_006b5b94(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 3;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_006b5cc0(param_1);
LAB_006b5cbc:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) goto LAB_006b5cbc;
      __dest = (void *)FUN_00759c3c(uVar3 << 3);
    }
    __s = (void *)((long)__dest + lVar4 * 8);
    memset(__s,0,param_2 * 8);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 8);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 006b5cc0  FUN_006b5cc0 =====

void FUN_006b5cc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b5cd4  FUN_006b5cd4 =====

int * FUN_006b5cd4(long param_1,int *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  void *__dest;
  int iVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  void *__src;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar19 = iVar4 * 0x18 + iVar3;
  iVar17 = iVar19 + param_2[2] * 0x30;
  iVar6 = iVar17 + param_2[3] * 0x118;
  iVar7 = iVar6 + param_2[4] * 0x50;
  iVar8 = iVar7 + param_2[5] * 0x58;
  iVar9 = iVar8 + param_2[6] * 0x50;
  iVar10 = iVar9 + param_2[7] * 0x50;
  iVar11 = iVar10 + param_2[8] * 0x48;
  iVar12 = iVar11 + param_2[9] * 0x48;
  iVar13 = iVar12 + param_2[10] * 0x50;
  iVar14 = iVar13 + param_2[0xb] * 0x50;
  iVar15 = iVar14 + param_2[0xc] * 0xa8;
  piVar16 = (int *)FUN_00759c3c((long)iVar15 + 0x38);
  iVar3 = iVar3 + 0x38;
  iVar19 = iVar19 + 0x38;
  *piVar16 = iVar3;
  piVar16[1] = iVar19;
  iVar17 = iVar17 + 0x38;
  piVar16[2] = iVar17;
  piVar16[3] = iVar6 + 0x38;
  piVar16[4] = iVar7 + 0x38;
  piVar16[5] = iVar8 + 0x38;
  piVar16[6] = iVar9 + 0x38;
  piVar16[7] = iVar10 + 0x38;
  piVar16[8] = iVar11 + 0x38;
  piVar16[9] = iVar12 + 0x38;
  piVar16[10] = iVar13 + 0x38;
  piVar16[0xb] = iVar14 + 0x38;
  piVar16[0xc] = iVar15 + 0x38;
  if (iVar4 * 0x18 != 0) {
    memset((void *)((long)piVar16 + (long)iVar3),0,
           ((((long)iVar19 - (long)iVar3) - 0x18U) / 0x18) * 0x18 + 0x18);
    iVar19 = piVar16[1];
    iVar17 = piVar16[2];
  }
  if (iVar19 == iVar17) {
    iVar3 = piVar16[3];
    if (iVar17 != iVar3) goto LAB_006b5ee8;
LAB_006b5e3c:
    iVar3 = piVar16[4];
    if (iVar17 != iVar3) goto LAB_006b5f18;
LAB_006b5e48:
    iVar3 = piVar16[5];
    if (iVar17 != iVar3) goto LAB_006b5f50;
LAB_006b5e54:
    iVar3 = piVar16[6];
    if (iVar17 != iVar3) goto LAB_006b5f88;
LAB_006b5e60:
    iVar3 = piVar16[7];
    if (iVar17 != iVar3) goto LAB_006b5fc0;
LAB_006b5e6c:
    iVar3 = piVar16[8];
    if (iVar17 != iVar3) goto LAB_006b5ff8;
LAB_006b5e78:
    iVar3 = piVar16[9];
    if (iVar17 != iVar3) goto LAB_006b6030;
LAB_006b5e84:
    iVar3 = piVar16[10];
    if (iVar17 != iVar3) goto LAB_006b6068;
LAB_006b5e90:
    iVar3 = piVar16[0xb];
    if (iVar17 != iVar3) goto LAB_006b60a0;
LAB_006b5e9c:
    iVar3 = piVar16[0xc];
    if (iVar17 != iVar3) goto LAB_006b60d8;
  }
  else {
    lVar22 = (long)piVar16 + (long)iVar19;
    lVar21 = (long)iVar17 - (long)iVar19;
    do {
      FUN_006d0124(lVar22,0,0);
      lVar21 = lVar21 + -0x30;
      lVar22 = lVar22 + 0x30;
    } while (lVar21 != 0);
    iVar17 = piVar16[2];
    iVar3 = piVar16[3];
    if (iVar17 == iVar3) goto LAB_006b5e3c;
LAB_006b5ee8:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006882d4(lVar22);
      lVar21 = lVar21 + -0x118;
      lVar22 = lVar22 + 0x118;
    } while (lVar21 != 0);
    iVar17 = piVar16[3];
    iVar3 = piVar16[4];
    if (iVar17 == iVar3) goto LAB_006b5e48;
LAB_006b5f18:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006ca4a4(lVar22,0,0);
      lVar21 = lVar21 + -0x50;
      lVar22 = lVar22 + 0x50;
    } while (lVar21 != 0);
    iVar17 = piVar16[4];
    iVar3 = piVar16[5];
    if (iVar17 == iVar3) goto LAB_006b5e54;
LAB_006b5f50:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006cade8(lVar22,0,0);
      lVar21 = lVar21 + -0x58;
      lVar22 = lVar22 + 0x58;
    } while (lVar21 != 0);
    iVar17 = piVar16[5];
    iVar3 = piVar16[6];
    if (iVar17 == iVar3) goto LAB_006b5e60;
LAB_006b5f88:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006cc0fc(lVar22,0,0);
      lVar21 = lVar21 + -0x50;
      lVar22 = lVar22 + 0x50;
    } while (lVar21 != 0);
    iVar17 = piVar16[6];
    iVar3 = piVar16[7];
    if (iVar17 == iVar3) goto LAB_006b5e6c;
LAB_006b5fc0:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006cc8ac(lVar22,0,0);
      lVar21 = lVar21 + -0x50;
      lVar22 = lVar22 + 0x50;
    } while (lVar21 != 0);
    iVar17 = piVar16[7];
    iVar3 = piVar16[8];
    if (iVar17 == iVar3) goto LAB_006b5e78;
LAB_006b5ff8:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006c2a98(lVar22,0,0);
      lVar21 = lVar21 + -0x48;
      lVar22 = lVar22 + 0x48;
    } while (lVar21 != 0);
    iVar17 = piVar16[8];
    iVar3 = piVar16[9];
    if (iVar17 == iVar3) goto LAB_006b5e84;
LAB_006b6030:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006cba84(lVar22,0,0);
      lVar21 = lVar21 + -0x48;
      lVar22 = lVar22 + 0x48;
    } while (lVar21 != 0);
    iVar17 = piVar16[9];
    iVar3 = piVar16[10];
    if (iVar17 == iVar3) goto LAB_006b5e90;
LAB_006b6068:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006ccf80(lVar22,0,0);
      lVar21 = lVar21 + -0x50;
      lVar22 = lVar22 + 0x50;
    } while (lVar21 != 0);
    iVar17 = piVar16[10];
    iVar3 = piVar16[0xb];
    if (iVar17 == iVar3) goto LAB_006b5e9c;
LAB_006b60a0:
    lVar22 = (long)piVar16 + (long)iVar17;
    lVar21 = (long)iVar3 - (long)iVar17;
    do {
      FUN_006cd658(lVar22,0,0);
      lVar21 = lVar21 + -0x50;
      lVar22 = lVar22 + 0x50;
    } while (lVar21 != 0);
    iVar17 = piVar16[0xb];
    iVar3 = piVar16[0xc];
    if (iVar17 != iVar3) {
LAB_006b60d8:
      lVar22 = (long)piVar16 + (long)iVar17;
      lVar21 = (long)iVar3 - (long)iVar17;
      do {
        FUN_006c8844(lVar22,0,0);
        lVar21 = lVar21 + -0xa8;
        lVar22 = lVar22 + 0xa8;
      } while (lVar21 != 0);
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0xd8);
  if (puVar5 < *(undefined8 **)(param_1 + 0xe0)) {
    puVar23 = puVar5 + 1;
    *puVar5 = piVar16;
  }
  else {
    __src = *(void **)(param_1 + 0xd0);
    lVar22 = (long)puVar5 - (long)__src >> 3;
    uVar1 = lVar22 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_006b5b80();
LAB_006b61c8:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar18 = (long)*(undefined8 **)(param_1 + 0xe0) - (long)__src;
    uVar20 = (long)uVar18 >> 2;
    if (uVar20 <= uVar1) {
      uVar20 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar18) {
      uVar20 = 0x1fffffffffffffff;
    }
    if (uVar20 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_006b61c8;
      __dest = (void *)FUN_00759c3c(uVar20 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar22 * 8);
    puVar23 = puVar2 + 1;
    *puVar2 = piVar16;
    memcpy(__dest,__src,(long)puVar5 - (long)__src);
    *(void **)(param_1 + 0xd0) = __dest;
    *(undefined8 **)(param_1 + 0xd8) = puVar23;
    *(void **)(param_1 + 0xe0) = (void *)((long)__dest + uVar20 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar23;
  return piVar16;
}


// ===== 006b61cc  FUN_006b61cc =====

undefined1  [16] FUN_006b61cc(long *param_1,undefined8 *param_2,long *param_3)

{
  byte *__s2;
  size_t __n;
  int iVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  undefined2 uVar13;
  undefined8 uVar14;
  float fVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  __s2 = (byte *)*param_2;
  __n = param_2[1];
  uVar11 = 0;
  if (0 < (long)__n) {
    pbVar4 = __s2;
    do {
      pbVar5 = pbVar4 + 1;
      uVar11 = uVar11 * 5 + (ulong)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < __s2 + __n);
  }
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar8 * uVar12;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar6, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == uVar11) {
            if ((plVar10[3] == __n) &&
               (((__n == 0 || (__s2 == (byte *)plVar10[2])) ||
                (iVar1 = memcmp((byte *)plVar10[2],__s2,__n), iVar1 == 0)))) goto LAB_006b6330;
          }
          else if ((plVar10[1] & uVar12 - 1) != unaff_x26) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar11) {
            if ((plVar10[3] == __n) &&
               (((__n == 0 || (__s2 == (byte *)plVar10[2])) ||
                (iVar1 = memcmp((byte *)plVar10[2],__s2,__n), iVar1 == 0)))) goto LAB_006b6330;
          }
          else {
            if (uVar12 <= uVar7) {
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar8 * uVar12;
            }
            if (uVar7 != unaff_x26) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)FUN_00759c3c(0x28);
  lVar2 = param_1[3];
  lVar16 = param_3[1];
  lVar9 = *param_3;
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[3] = lVar16;
  plVar10[2] = lVar9;
  fVar15 = *(float *)(param_1 + 4);
  plVar10[4] = param_3[2];
  if ((uVar12 == 0) || (fVar15 * (float)uVar12 < (float)(lVar2 + 1))) {
    if (uVar12 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar7 = uVar7 | uVar12 << 1;
    uVar8 = (ulong)((float)(lVar2 + 1) / fVar15);
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
                    /* try { // try from 006b63d0 to 006b6453 has its CatchHandler @ 006b6524 */
      uVar7 = FUN_00711ce0(uVar7);
      uVar12 = param_1[1];
    }
    if (uVar12 < uVar7) {
LAB_006b63e8:
      FUN_006b6538(param_1,uVar7);
    }
    else if (uVar7 < uVar12) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar12 < 3) {
LAB_006b6450:
        uVar8 = FUN_00711ce0();
      }
      else {
        uVar14 = NEON_cnt(uVar12,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        if (1 < (CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff)) goto LAB_006b6450;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar12) goto LAB_006b63e8;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar7 * uVar12;
      }
    }
  }
  lVar2 = *param_1;
  plVar3 = *(long **)(lVar2 + unaff_x26 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    lVar9 = *plVar3;
    *plVar3 = (long)plVar10;
    *plVar10 = lVar9;
    *(long **)(lVar2 + unaff_x26 * 8) = plVar3;
    if (*plVar10 != 0) {
      uVar11 = *(ulong *)(*plVar10 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar7 * uVar12;
      }
      plVar3 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_006b64f0;
    }
  }
  else {
    *plVar10 = *plVar3;
LAB_006b64f0:
    *plVar3 = (long)plVar10;
  }
  uVar14 = 1;
  param_1[3] = param_1[3] + 1;
LAB_006b6504:
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = plVar10;
  return auVar17;
LAB_006b6330:
  uVar14 = 0;
  goto LAB_006b6504;
}


// ===== 006b6538  FUN_006b6538 =====

void FUN_006b6538(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006b66bc:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006b66bc;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006b6710  FUN_006b6710 =====

long * FUN_006b6710(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar15 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b6760 to 006b6767 has its CatchHandler @ 006b6b74 */
  plVar8 = (long *)FUN_0034bfb4(&local_80,pbVar3,uVar15);
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar19 = NEON_cnt(plVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar17 <= plVar8) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar17);
      }
    }
    puVar14 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar14 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar14, plVar16 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      plVar10 = plVar8;
      if (uVar15 < 2) {
        do {
          if ((long *)plVar16[1] == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b6904;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_006b6904;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_006b6904;
              }
            }
          }
          else if ((long *)((ulong)plVar16[1] & (long)plVar17 - 1U) != unaff_x26) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          plVar9 = (long *)plVar16[1];
          if (plVar9 == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b6904;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_006b6904;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_006b6904;
              }
            }
          }
          else {
            if (plVar17 <= plVar9) {
              uVar15 = 0;
              if (plVar17 != (long *)0x0) {
                uVar15 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar17);
            }
            if (plVar9 != unaff_x26) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar9 = param_1 + 2;
  plVar16 = (long *)FUN_00759c3c(0x30);
  plVar10 = (long *)*param_4;
  *plVar16 = 0;
  plVar16[1] = (long)plVar8;
  lVar13 = plVar10[1];
  lVar11 = *plVar10;
  plVar16[4] = plVar10[2];
  plVar16[3] = lVar13;
  plVar16[2] = lVar11;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  lVar11 = param_1[3];
  fVar20 = *(float *)(param_1 + 4);
  plVar16[5] = 0;
  local_70 = 1;
  plVar10 = plVar16;
  local_80 = plVar16;
  plStack_78 = plVar9;
  if ((plVar17 == (long *)0x0) || (fVar20 * (float)plVar17 < (float)(lVar11 + 1))) {
    if (plVar17 < (long *)0x3) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar17 = (long *)(uVar15 | (long)plVar17 << 1);
    plVar12 = (long *)(long)((float)(lVar11 + 1) / fVar20);
    if (plVar17 <= plVar12) {
      plVar17 = plVar12;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)0x2;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
                    /* try { // try from 006b69d4 to 006b6a57 has its CatchHandler @ 006b6b4c */
      plVar10 = (long *)FUN_00711ce0(plVar17);
      plVar17 = plVar10;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar17) {
LAB_006b69ec:
      plVar10 = (long *)FUN_006b6bc8(param_1,plVar17);
    }
    else if (plVar17 < plVar12) {
      plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_006b6a54:
        plVar10 = (long *)FUN_00711ce0();
      }
      else {
        uVar19 = NEON_cnt(plVar12,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff)) goto LAB_006b6a54;
        if ((long *)0x1 < plVar10) {
          plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
        }
      }
      if (plVar17 <= plVar10) {
        plVar17 = plVar10;
      }
      if (plVar17 < plVar12) goto LAB_006b69ec;
    }
    plVar17 = (long *)param_1[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
      goto joined_r0x006b6acc;
    }
    if (plVar8 < plVar17) {
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)plVar8 * 8);
      unaff_x26 = plVar8;
      goto joined_r0x006b6acc;
    }
    uVar15 = 0;
    if (plVar17 != (long *)0x0) {
      uVar15 = (ulong)plVar8 / (ulong)plVar17;
    }
    unaff_x26 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
    if (plVar12 == (long *)0x0) goto LAB_006b6a88;
LAB_006b697c:
    *plVar16 = *plVar12;
LAB_006b6b04:
    *plVar12 = (long)plVar16;
  }
  else {
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
joined_r0x006b6acc:
    if (plVar12 != (long *)0x0) goto LAB_006b697c;
LAB_006b6a88:
    lVar13 = *plVar9;
    *plVar9 = (long)plVar16;
    *plVar16 = lVar13;
    *(long **)(lVar11 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar16 != 0) {
      plVar8 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      plVar12 = (long *)(*param_1 + (long)plVar8 * 8);
      goto LAB_006b6b04;
    }
  }
  uVar19 = 1;
  param_1[3] = param_1[3] + 1;
LAB_006b6b18:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10,uVar19);
LAB_006b6904:
  uVar19 = 0;
  goto LAB_006b6b18;
}


// ===== 006b6b78  FUN_006b6b78 =====

void FUN_006b6b78(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x10) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x20));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006b6bc8  FUN_006b6bc8 =====

void FUN_006b6bc8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006b6d4c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006b6d4c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006b6da0  FUN_006b6da0 =====

void FUN_006b6da0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b6dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(*(undefined8 *)((undefined8 *)*param_1)[1]);
  return;
}


// ===== 006b6db0  FUN_006b6db0 =====

long * FUN_006b6db0(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b6df8 to 006b6dff has its CatchHandler @ 006b7000 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_006b6fc8:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b6fcc;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_006b6fc8;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b6fcc;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_006b6fc8;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_006b6fcc:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b7004  FUN_006b7004 =====

void FUN_006b7004(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b7004(param_1,*param_2);
    FUN_006b7004(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006b7054  FUN_006b7054 =====

void FUN_006b7054(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0068b788();
    free(param_1);
    return;
  }
  return;
}


// ===== 006b7080  FUN_006b7080 =====

long * FUN_006b7080(long *param_1,byte *param_2,long *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long lVar21;
  long lVar22;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b70d0 to 006b70d7 has its CatchHandler @ 006b74dc */
  plVar8 = (long *)FUN_0034bfb4(&local_80,pbVar3,uVar14);
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar19 = NEON_cnt(plVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar14 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar14 < 2) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar17 <= plVar8) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar17);
      }
    }
    puVar13 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar13, plVar16 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      plVar9 = plVar8;
      if (uVar14 < 2) {
        do {
          if ((long *)plVar16[1] == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b7274;
                uVar14 = 0;
                while (*(byte *)((long)plVar16 + uVar14 + 0x11) == pbVar3[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar4 >> 1 == uVar14) goto LAB_006b7274;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar9 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_006b7274;
              }
            }
          }
          else if ((long *)((ulong)plVar16[1] & (long)plVar17 - 1U) != unaff_x26) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          plVar10 = (long *)plVar16[1];
          if (plVar10 == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_006b7274;
                uVar14 = 0;
                while (*(byte *)((long)plVar16 + uVar14 + 0x11) == pbVar3[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar4 >> 1 == uVar14) goto LAB_006b7274;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar9 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_006b7274;
              }
            }
          }
          else {
            if (plVar17 <= plVar10) {
              uVar14 = 0;
              if (plVar17 != (long *)0x0) {
                uVar14 = (ulong)plVar10 / (ulong)plVar17;
              }
              plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar17);
            }
            if (plVar10 != unaff_x26) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar10 = param_1 + 2;
  plVar16 = (long *)FUN_00759c3c(0x28);
  lVar22 = param_3[1];
  lVar21 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar11 = param_3[2];
  param_3[2] = 0;
  lVar15 = param_1[3];
  plVar16[3] = lVar22;
  plVar16[2] = lVar21;
  fVar20 = *(float *)(param_1 + 4);
  plVar16[4] = lVar11;
  *plVar16 = 0;
  plVar16[1] = (long)plVar8;
  local_70 = 1;
  plVar9 = plVar16;
  local_80 = plVar16;
  plStack_78 = plVar10;
  if ((plVar17 == (long *)0x0) || (fVar20 * (float)plVar17 < (float)(lVar15 + 1))) {
    if (plVar17 < (long *)0x3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar17 = (long *)(uVar14 | (long)plVar17 << 1);
    plVar12 = (long *)(long)((float)(lVar15 + 1) / fVar20);
    if (plVar17 <= plVar12) {
      plVar17 = plVar12;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)0x2;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
                    /* try { // try from 006b733c to 006b73bf has its CatchHandler @ 006b74b4 */
      plVar9 = (long *)FUN_00711ce0(plVar17);
      plVar17 = plVar9;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar17) {
LAB_006b7354:
      plVar9 = (long *)FUN_005a4404(param_1,plVar17);
    }
    else if (plVar17 < plVar12) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_006b73bc:
        plVar9 = (long *)FUN_00711ce0();
      }
      else {
        uVar19 = NEON_cnt(plVar12,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff)) goto LAB_006b73bc;
        if ((long *)0x1 < plVar9) {
          plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
        }
      }
      if (plVar17 <= plVar9) {
        plVar17 = plVar9;
      }
      if (plVar17 < plVar12) goto LAB_006b7354;
    }
    plVar17 = (long *)param_1[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
      goto joined_r0x006b7434;
    }
    if (plVar8 < plVar17) {
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)plVar8 * 8);
      unaff_x26 = plVar8;
      goto joined_r0x006b7434;
    }
    uVar14 = 0;
    if (plVar17 != (long *)0x0) {
      uVar14 = (ulong)plVar8 / (ulong)plVar17;
    }
    unaff_x26 = (long *)((long)plVar8 - uVar14 * (long)plVar17);
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
    if (plVar12 == (long *)0x0) goto LAB_006b73f0;
LAB_006b72e4:
    *plVar16 = *plVar12;
LAB_006b746c:
    *plVar12 = (long)plVar16;
  }
  else {
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
joined_r0x006b7434:
    if (plVar12 != (long *)0x0) goto LAB_006b72e4;
LAB_006b73f0:
    lVar15 = *plVar10;
    *plVar10 = (long)plVar16;
    *plVar16 = lVar15;
    *(long **)(lVar11 + (long)unaff_x26 * 8) = plVar10;
    if (*plVar16 != 0) {
      plVar8 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar14 = 0;
        if (plVar17 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar17);
      }
      plVar12 = (long *)(*param_1 + (long)plVar8 * 8);
      goto LAB_006b746c;
    }
  }
  uVar19 = 1;
  param_1[3] = param_1[3] + 1;
LAB_006b7480:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar9,uVar19);
LAB_006b7274:
  uVar19 = 0;
  goto LAB_006b7480;
}


// ===== 006b74e0  FUN_006b74e0 =====

void FUN_006b74e0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b74e0(param_1,*param_2);
    FUN_006b74e0(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 006b7524  FUN_006b7524 =====

void FUN_006b7524(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *local_88;
  byte *local_80;
  long *local_78;
  byte **ppbStack_70;
  byte **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar8 = param_1 + 2;
  lVar3 = *plVar8;
  pbVar6 = (byte *)*param_1;
  if ((ulong)((lVar3 - (long)pbVar6 >> 3) * -0x5555555555555555) < param_4) {
    if (pbVar6 != (byte *)0x0) {
      pbVar4 = (byte *)param_1[1];
      pbVar9 = pbVar6;
      if (pbVar4 != pbVar6) {
        do {
          pbVar9 = pbVar4 + -0x18;
          if ((*pbVar9 & 1) != 0) {
            free(*(void **)(pbVar4 + -8));
          }
          pbVar4 = pbVar9;
        } while (pbVar9 != pbVar6);
        pbVar9 = (byte *)*param_1;
      }
      param_1[1] = pbVar6;
      free(pbVar9);
      lVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 < 0xaaaaaaaaaaaaaab) {
      uVar5 = (lVar3 >> 3) * 0x5555555555555556;
      if (uVar5 < param_4 || uVar5 - param_4 == 0) {
        uVar5 = param_4;
      }
      if (0x555555555555554 < (ulong)((lVar3 >> 3) * -0x5555555555555555)) {
        uVar5 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar5 < 0xaaaaaaaaaaaaaab) {
        local_88 = (byte *)FUN_00759c3c(uVar5 * 0x18);
        ppbStack_70 = &local_88;
        param_1[2] = local_88 + uVar5 * 0x18;
        local_68 = &local_80;
        *param_1 = local_88;
        param_1[1] = local_88;
        local_60 = 0;
        local_80 = local_88;
        local_78 = plVar8;
        if (param_2 != param_3) {
          do {
            while (pbVar6 = (byte *)*param_2, (*pbVar6 & 1) != 0) {
                    /* try { // try from 006b77c0 to 006b77c3 has its CatchHandler @ 006b7830 */
              FUN_002fb36c(local_80,*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
              param_2 = param_2 + 1;
              local_80 = local_80 + 0x18;
              if (param_2 == param_3) goto LAB_006b77e4;
            }
            uVar10 = *(undefined8 *)(pbVar6 + 8);
            uVar2 = *(undefined8 *)pbVar6;
            *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
            pbVar6 = local_80 + 0x18;
            *(undefined8 *)(local_80 + 8) = uVar10;
            *(undefined8 *)local_80 = uVar2;
            param_2 = param_2 + 1;
            local_80 = pbVar6;
          } while (param_2 != param_3);
        }
LAB_006b77e4:
        param_1[1] = local_80;
        goto LAB_006b77e8;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar2 = FUN_00304228(param_1);
                    /* catch() { ... } // from try @ 006b7660 with catch @ 006b782c */
                    /* catch() { ... } // from try @ 006b77c0 with catch @ 006b7830 */
      FUN_0030423c(&local_78);
      param_1[1] = pbVar6;
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar2);
      }
    }
  }
  else {
    pbVar9 = (byte *)param_1[1];
    lVar3 = (long)pbVar9 - (long)pbVar6 >> 3;
    if ((ulong)(lVar3 * -0x5555555555555555) < param_4) {
      puVar7 = param_2 + lVar3 * 0xaaaaaaaaaaaaaab;
      if (pbVar9 != pbVar6) {
        lVar3 = lVar3 * 0x5555555555555558;
        do {
          FUN_007139b0(pbVar6,*param_2);
          lVar3 = lVar3 + -8;
          pbVar6 = pbVar6 + 0x18;
          param_2 = param_2 + 1;
        } while (lVar3 != 0);
        pbVar6 = (byte *)param_1[1];
      }
      ppbStack_70 = &local_88;
      local_68 = &local_80;
      local_60 = 0;
      local_78 = plVar8;
      local_80 = pbVar6;
      local_88 = pbVar6;
      for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
        while (pbVar6 = (byte *)*puVar7, (*pbVar6 & 1) != 0) {
                    /* try { // try from 006b7660 to 006b7663 has its CatchHandler @ 006b782c */
          FUN_002fb36c(local_80,*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
          puVar7 = puVar7 + 1;
          local_80 = local_80 + 0x18;
          if (puVar7 == param_3) goto LAB_006b767c;
        }
        uVar10 = *(undefined8 *)(pbVar6 + 8);
        uVar2 = *(undefined8 *)pbVar6;
        *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)(local_80 + 8) = uVar10;
        *(undefined8 *)local_80 = uVar2;
        local_80 = local_80 + 0x18;
      }
LAB_006b767c:
      param_1[1] = local_80;
    }
    else {
      if (param_2 != param_3) {
        do {
          puVar7 = param_2 + 1;
          FUN_007139b0(pbVar6,*param_2);
          pbVar6 = pbVar6 + 0x18;
          param_2 = puVar7;
        } while (puVar7 != param_3);
        pbVar9 = (byte *)param_1[1];
      }
      while (pbVar4 = pbVar9, pbVar4 != pbVar6) {
        pbVar9 = pbVar4 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
      }
      param_1[1] = pbVar6;
    }
LAB_006b77e8:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b785c  FUN_006b785c =====

void FUN_006b785c(byte *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x30);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x38) = __ptr;
    free(__ptr);
  }
  if ((param_1[0x18] & 1) != 0) {
    free(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 006b78b0  FUN_006b78b0 =====

void FUN_006b78b0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b78b0(param_1,*param_2);
    FUN_006b78b0(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 006b78f4  FUN_006b78f4 =====

void FUN_006b78f4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  void *__ptr;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *__ptr_00;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar9 = *param_2;
    puVar12 = puVar7 + 0xb;
    puVar7[2] = param_2[2];
    puVar7[1] = uVar11;
    *puVar7 = uVar9;
    uVar11 = param_2[4];
    uVar9 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar7[5] = param_2[5];
    puVar7[4] = uVar11;
    puVar7[3] = uVar9;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    uVar9 = param_2[6];
    puVar7[7] = param_2[7];
    puVar7[6] = uVar9;
    puVar7[8] = param_2[8];
    uVar9 = param_2[9];
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    puVar7[10] = param_2[10];
    puVar7[9] = uVar9;
  }
  else {
    lVar4 = (long)puVar7 - *param_1 >> 3;
    uVar1 = lVar4 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
      FUN_006b7cfc();
LAB_006b7b84:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar6 * 0x5d1745d1745d1746;
    if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
      uVar10 = uVar1;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar10 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar10) goto LAB_006b7b84;
      lVar6 = FUN_00759c3c(uVar10 * 0x58);
    }
    uVar15 = param_2[1];
    uVar14 = *param_2;
    uVar9 = param_2[2];
    puVar7 = (undefined8 *)(lVar6 + lVar4 * 8);
    *param_2 = 0;
    param_2[1] = 0;
    uVar11 = param_2[8];
    puVar7[1] = uVar15;
    *puVar7 = uVar14;
    uVar15 = param_2[4];
    uVar14 = param_2[3];
    puVar12 = puVar7 + 0xb;
    param_2[2] = 0;
    param_2[3] = 0;
    puVar7[2] = uVar9;
    uVar9 = param_2[5];
    puVar7[4] = uVar15;
    puVar7[3] = uVar14;
    uVar15 = param_2[7];
    uVar14 = param_2[6];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    pbVar13 = (byte *)*param_1;
    __ptr_00 = (byte *)param_1[1];
    puVar7[7] = uVar15;
    puVar7[6] = uVar14;
    uVar15 = param_2[10];
    uVar14 = param_2[9];
    puVar7[5] = uVar9;
    puVar7[8] = uVar11;
    puVar7[10] = uVar15;
    puVar7[9] = uVar14;
    puVar7 = (undefined8 *)((long)puVar7 + ((long)pbVar13 - (long)__ptr_00));
    pbVar5 = pbVar13;
    puVar8 = puVar7;
    if ((long)pbVar13 - (long)__ptr_00 != 0) {
      do {
        uVar11 = *(undefined8 *)(pbVar5 + 8);
        uVar9 = *(undefined8 *)pbVar5;
        puVar8[2] = *(undefined8 *)(pbVar5 + 0x10);
        puVar8[1] = uVar11;
        *puVar8 = uVar9;
        uVar11 = *(undefined8 *)(pbVar5 + 0x20);
        uVar9 = *(undefined8 *)(pbVar5 + 0x18);
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbVar5[0x10] = 0;
        pbVar5[0x11] = 0;
        pbVar5[0x12] = 0;
        pbVar5[0x13] = 0;
        pbVar5[0x14] = 0;
        pbVar5[0x15] = 0;
        pbVar5[0x16] = 0;
        pbVar5[0x17] = 0;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        puVar8[5] = *(undefined8 *)(pbVar5 + 0x28);
        puVar8[4] = uVar11;
        puVar8[3] = uVar9;
        pbVar5[0x20] = 0;
        pbVar5[0x21] = 0;
        pbVar5[0x22] = 0;
        pbVar5[0x23] = 0;
        pbVar5[0x24] = 0;
        pbVar5[0x25] = 0;
        pbVar5[0x26] = 0;
        pbVar5[0x27] = 0;
        pbVar5[0x28] = 0;
        pbVar5[0x29] = 0;
        pbVar5[0x2a] = 0;
        pbVar5[0x2b] = 0;
        pbVar5[0x2c] = 0;
        pbVar5[0x2d] = 0;
        pbVar5[0x2e] = 0;
        pbVar5[0x2f] = 0;
        pbVar5[0x18] = 0;
        pbVar5[0x19] = 0;
        pbVar5[0x1a] = 0;
        pbVar5[0x1b] = 0;
        pbVar5[0x1c] = 0;
        pbVar5[0x1d] = 0;
        pbVar5[0x1e] = 0;
        pbVar5[0x1f] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        uVar9 = *(undefined8 *)(pbVar5 + 0x30);
        puVar8[7] = *(undefined8 *)(pbVar5 + 0x38);
        puVar8[6] = uVar9;
        puVar8[8] = *(undefined8 *)(pbVar5 + 0x40);
        uVar9 = *(undefined8 *)(pbVar5 + 0x48);
        pbVar5[0x30] = 0;
        pbVar5[0x31] = 0;
        pbVar5[0x32] = 0;
        pbVar5[0x33] = 0;
        pbVar5[0x34] = 0;
        pbVar5[0x35] = 0;
        pbVar5[0x36] = 0;
        pbVar5[0x37] = 0;
        pbVar5[0x38] = 0;
        pbVar5[0x39] = 0;
        pbVar5[0x3a] = 0;
        pbVar5[0x3b] = 0;
        pbVar5[0x3c] = 0;
        pbVar5[0x3d] = 0;
        pbVar5[0x3e] = 0;
        pbVar5[0x3f] = 0;
        pbVar5[0x40] = 0;
        pbVar5[0x41] = 0;
        pbVar5[0x42] = 0;
        pbVar5[0x43] = 0;
        pbVar5[0x44] = 0;
        pbVar5[0x45] = 0;
        pbVar5[0x46] = 0;
        pbVar5[0x47] = 0;
        pbVar2 = pbVar5 + 0x58;
        puVar8[10] = *(undefined8 *)(pbVar5 + 0x50);
        puVar8[9] = uVar9;
        pbVar5 = pbVar2;
        puVar8 = puVar8 + 0xb;
      } while (pbVar2 != __ptr_00);
      do {
        __ptr = *(void **)(pbVar13 + 0x30);
        if (__ptr != (void *)0x0) {
          *(void **)(pbVar13 + 0x38) = __ptr;
          free(__ptr);
        }
        if ((pbVar13[0x18] & 1) == 0) {
          bVar3 = *pbVar13;
        }
        else {
          free(*(void **)(pbVar13 + 0x28));
          bVar3 = *pbVar13;
        }
        if ((bVar3 & 1) != 0) {
          free(*(void **)(pbVar13 + 0x10));
        }
        pbVar13 = pbVar13 + 0x58;
      } while (pbVar13 != __ptr_00);
      __ptr_00 = (byte *)*param_1;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar12;
    param_1[2] = lVar6 + uVar10 * 0x58;
    if (__ptr_00 != (byte *)0x0) {
      free(__ptr_00);
      param_1[1] = (long)puVar12;
      return;
    }
  }
  param_1[1] = (long)puVar12;
  return;
}


// ===== 006b7b88  FUN_006b7b88 =====

void FUN_006b7b88(byte *param_1,byte *param_2,byte *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  void *__src;
  byte bVar1;
  size_t __n;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)param_1 = uVar2;
    bVar1 = *param_3;
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    bVar1 = *param_3;
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    __src = (void *)*param_4;
    __n = param_4[1] - (long)__src;
  }
  else {
                    /* try { // try from 006b7bd4 to 006b7bdb has its CatchHandler @ 006b7c94 */
    FUN_002fb36c(param_1 + 0x18,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    __src = (void *)*param_4;
    __n = param_4[1] - (long)__src;
  }
  if (__n == 0) {
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x50) = param_6;
    return;
  }
  if (-1 < (long)__n) {
                    /* try { // try from 006b7c50 to 006b7c57 has its CatchHandler @ 006b7ca4 */
    __dest = (void *)FUN_00759c3c(__n);
    *(void **)(param_1 + 0x30) = __dest;
    *(void **)(param_1 + 0x38) = __dest;
    *(size_t *)(param_1 + 0x40) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(size_t *)(param_1 + 0x38) = (long)__dest + __n;
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x50) = param_6;
    return;
  }
                    /* try { // try from 006b7c8c to 006b7c93 has its CatchHandler @ 006b7ca4 */
  uVar2 = FUN_004b6308(param_1 + 0x30);
                    /* catch() { ... } // from try @ 006b7bd4 with catch @ 006b7c94 */
  if ((*param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar2);
  }
  free(*(void **)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  FUN_00755eac(uVar2);
}


// ===== 006b7cfc  FUN_006b7cfc =====

void FUN_006b7cfc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006b7d10  FUN_006b7d10 =====

long * FUN_006b7d10(long *param_1,byte *param_2,byte *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  byte *__s1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x28);
  plVar12 = param_1 + 1;
  plVar9 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar12 = plVar9;
        __s2 = (void *)((long)plVar12 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
        if ((*(byte *)(plVar12 + 4) & 1) != 0) {
          __s2 = (void *)plVar12[6];
          uVar3 = plVar12[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,__s1,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar11 = *(long *)(lVar11 + 0x28);
          plVar9 = plVar12;
          goto joined_r0x006b7eac;
        }
        plVar9 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_006b7e0c;
        }
      }
      plVar9 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_006b7e0c:
  plVar9 = (long *)FUN_00759c3c(0x38);
  if ((*param_3 & 1) == 0) {
    lVar14 = *(long *)param_3;
    lVar10 = *(long *)(param_3 + 0x10);
    plVar9[5] = *(long *)(param_3 + 8);
    plVar9[4] = lVar14;
    plVar9[6] = lVar10;
  }
  else {
                    /* try { // try from 006b7e40 to 006b7e47 has its CatchHandler @ 006b7ed4 */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar12 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar12 = (long *)*plVar13;
  }
  uVar6 = FUN_00328410(param_1[1],plVar12);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x006b7eac:
  if (lVar11 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 006b7efc  FUN_006b7efc =====

long * FUN_006b7efc(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_006b7f54;
LAB_006b7f88:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_006b7f6c;
LAB_006b7fa0:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_006b7f74;
LAB_006b7fac:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_006b7f88;
LAB_006b7f54:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_006b7fa0;
LAB_006b7f6c:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_006b7fac;
LAB_006b7f74:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 006b8024  FUN_006b8024 =====

long * FUN_006b8024(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b806c to 006b8073 has its CatchHandler @ 006b8274 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_006b823c:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b8240;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_006b823c;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b8240;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_006b823c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_006b8240:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b8278  FUN_006b8278 =====

/* WARNING: Removing unreachable block (ram,0x006b85f4) */

void FUN_006b8278(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  size_t __n_00;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  ulong *puVar18;
  undefined8 *__ptr;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006b82e4 to 006b82f7 has its CatchHandler @ 006b875c */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006b82f8 to 006b82ff has its CatchHandler @ 006b8758 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  iVar8 = *(int *)((long)param_8 + 0xac);
  lVar24 = param_8[4];
  iVar1 = iVar8 + 1;
  *(int *)((long)param_8 + 0xac) = iVar1;
  if ((int)param_8[0xf] < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006b8340 to 006b8353 has its CatchHandler @ 006b87ac */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006b8354 to 006b835b has its CatchHandler @ 006b87a8 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  uVar13 = FUN_006c29e8(param_4);
  if ((uVar13 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar13 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar13) {
      if (*(long *)(lVar9 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006b87d0;
    }
    if (uVar13 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar13 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar13 & 0xfffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar5 = uVar13 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar13;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar19 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar19 = param_2 + 1;
      }
      memmove(__dest,pbVar19,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar13 = *(ulong *)(param_3 + 8);
    pbVar19 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar19 = param_3 + 1;
      uVar13 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006b864c to 006b8653 has its CatchHandler @ 006b8778 */
    puVar18 = (ulong *)FUN_0071302c(&local_80,pbVar19,uVar13);
    local_d0 = (void *)puVar18[2];
    uStack_d8 = puVar18[1];
    local_e0 = *puVar18;
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
                    /* try { // try from 006b866c to 006b8687 has its CatchHandler @ 006b8760 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar24 = lVar24 + (long)iVar8 * 0x50;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006b8384 to 006b838f has its CatchHandler @ 006b8790 */
    thunk_FUN_0066e8b0(lVar24,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x20) = lVar24;
    if (0 < *(int *)(lVar24 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar24);
                    /* try { // try from 006b83cc to 006b83d7 has its CatchHandler @ 006b8748 */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar14 = (long *)FUN_006fa958();
      if (*plVar14 != plVar14[1]) {
LAB_006b8424:
        uVar13 = *(ulong *)(param_7 + 8);
        pbVar19 = *(byte **)(param_7 + 0x10);
        uVar12 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar19 = param_7 + 1;
          uVar13 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar13 < 0) {
          FUN_00676318(uVar13,"string length exceeds max size");
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19,uVar13);
          cVar6 = *pcVar15;
        }
        else {
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19);
          cVar6 = *pcVar15;
        }
        if (cVar6 == '\x01') {
          lVar24 = *plVar14;
          lVar23 = plVar14[1];
          if (0 < (int)((ulong)(lVar23 - lVar24) >> 4)) {
            lVar22 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar15;
              if (*pcVar15 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar16 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar24 + lVar22 * 0x10));
              if ((lVar16 != 0) && (puVar17 = (undefined8 *)*puVar2, puVar17 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar21 = puVar17;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar16 + 0x10) <= (ulong)puVar21[4]) {
                    lVar4 = 0;
                    __ptr = puVar21;
                  }
                  puVar21 = *(undefined8 **)((long)puVar21 + lVar4);
                } while (puVar21 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar16 + 0x10))) {
                  puVar21 = __ptr;
                  puVar10 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar20 = (undefined8 *)puVar21[2];
                      bVar11 = (undefined8 *)*puVar20 != puVar21;
                      puVar21 = puVar20;
                    } while (bVar11);
                  }
                  else {
                    do {
                      puVar20 = puVar10;
                      puVar10 = (undefined8 *)*puVar20;
                    } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar20;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar17,__ptr);
                  free(__ptr);
                  lVar24 = *plVar14;
                  lVar23 = plVar14[1];
                }
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)((ulong)(lVar23 - lVar24) >> 4));
          }
        }
      }
    }
    else {
      uVar13 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar14 = (long *)(uVar13 + 8);
      if (*plVar14 != *(long *)(uVar13 + 0x10)) goto LAB_006b8424;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
LAB_006b87d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b87d4  FUN_006b87d4 =====

long * FUN_006b87d4(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 006b881c to 006b8823 has its CatchHandler @ 006b8a24 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_006b89ec:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b89f0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_006b89ec;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_006b89f0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_006b89ec;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_006b89f0:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b8a28  FUN_006b8a28 =====

undefined1  [16] FUN_006b8a28(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar8 = param_1[1];
  uVar5 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (uVar2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar5 = uVar5 ^ uVar5 >> 0x2f;
  uVar9 = uVar5 * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar9) {
            if (plVar6[2] == uVar2) {
LAB_006b8b54:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar6;
              return auVar13;
            }
          }
          else if ((plVar6[1] & uVar8 - 1) != unaff_x24) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar9) {
            if (plVar6[2] == uVar2) goto LAB_006b8b54;
          }
          else {
            if (uVar8 <= uVar7) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar1 * uVar8;
            }
            if (uVar7 != unaff_x24) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  auVar14._0_8_ = (long *)FUN_00759c3c(0x30);
  lVar4 = param_1[3];
  plVar6 = (long *)*param_4;
  *auVar14._0_8_ = 0;
  fVar12 = *(float *)(param_1 + 4);
  lVar3 = *plVar6;
  auVar14._0_8_[3] = 0;
  auVar14._0_8_[4] = 0;
  auVar14._0_8_[5] = 0;
  auVar14._0_8_[1] = uVar9;
  auVar14._0_8_[2] = lVar3;
  *(undefined4 *)(auVar14._0_8_ + 5) = 10;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar4 + 1))) {
    if (uVar8 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar7 = (ulong)((float)(lVar4 + 1) / fVar12);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
                    /* try { // try from 006b8c24 to 006b8ca7 has its CatchHandler @ 006b8d84 */
      uVar2 = FUN_00711ce0(uVar2);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar2) {
LAB_006b8c3c:
      FUN_006b8d98(param_1,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_006b8ca4:
        uVar7 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_006b8ca4;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar8) goto LAB_006b8c3c;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
      goto joined_r0x006b8d20;
    }
    if (uVar9 < uVar8) {
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + uVar5 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x006b8d20;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar2 * uVar8;
    lVar3 = *param_1;
    plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) goto LAB_006b8cd8;
LAB_006b8bcc:
    *auVar14._0_8_ = *plVar6;
  }
  else {
    lVar3 = *param_1;
    plVar6 = *(long **)(lVar3 + unaff_x24 * 8);
joined_r0x006b8d20:
    if (plVar6 != (long *)0x0) goto LAB_006b8bcc;
LAB_006b8cd8:
    plVar6 = param_1 + 2;
    lVar4 = *plVar6;
    *plVar6 = (long)auVar14._0_8_;
    *auVar14._0_8_ = lVar4;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar6;
    if (*auVar14._0_8_ == 0) goto LAB_006b8d5c;
    uVar2 = *(ulong *)(*auVar14._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar5 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar6 = (long)auVar14._0_8_;
LAB_006b8d5c:
  param_1[3] = param_1[3] + 1;
  auVar14._8_8_ = 1;
  return auVar14;
}


// ===== 006b8d98  FUN_006b8d98 =====

void FUN_006b8d98(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006b8f1c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006b8f1c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006b8f70  FUN_006b8f70 =====

ulong FUN_006b8f70(undefined8 *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  void *__src;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *__s2;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *__dest;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  plVar13 = (long *)*param_1;
  lVar11 = *plVar13;
  puVar10 = (undefined8 *)plVar13[1];
  lVar7 = (long)puVar10 - lVar11 >> 3;
  uVar16 = lVar7 * -0x5555555555555555;
  if ((long)puVar10 - lVar11 != 0) {
    uVar15 = 0;
    uVar3 = uVar16;
    if (uVar16 < 2) {
      uVar3 = 1;
    }
    pbVar17 = (byte *)(lVar11 + 1);
    do {
      if (uVar15 != 1) {
        pbVar9 = (byte *)(lVar11 + uVar15 * 0x18);
        bVar4 = *param_2;
        bVar5 = *pbVar9;
        uVar8 = (ulong)(bVar5 >> 1);
        sVar1 = uVar8;
        if ((bVar5 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar9 + 8);
        }
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_2 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_2 + 1;
          if ((bVar4 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar5 & 1) == 0) {
            pbVar9 = pbVar17;
            if (bVar5 < 2) {
              return uVar15;
            }
            while (*pbVar9 == *__s2) {
              uVar8 = uVar8 - 1;
              __s2 = __s2 + 1;
              pbVar9 = pbVar9 + 1;
              if (uVar8 == 0) {
                return uVar15;
              }
            }
          }
          else {
            iVar6 = memcmp(*(void **)(pbVar9 + 0x10),__s2,*(size_t *)(pbVar9 + 8));
            if (iVar6 == 0) {
              return uVar15;
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
      pbVar17 = pbVar17 + 0x18;
    } while (uVar15 != uVar3);
  }
  if (puVar10 < (undefined8 *)plVar13[2]) {
    uVar18 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)param_2;
    puVar14 = puVar10 + 3;
    puVar10[2] = *(undefined8 *)(param_2 + 0x10);
    puVar10[1] = uVar18;
    *puVar10 = uVar12;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  else {
    uVar16 = uVar16 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar16) {
      FUN_00304228(plVar13);
LAB_006b91a8:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar11 = plVar13[2] - lVar11 >> 3;
    uVar15 = lVar11 * 0x5555555555555556;
    if (uVar15 < uVar16 || uVar15 - uVar16 == 0) {
      uVar15 = uVar16;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar15 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar15) goto LAB_006b91a8;
      lVar11 = FUN_00759c3c(uVar15 * 0x18);
    }
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar19 = *(undefined8 *)(param_2 + 8);
    uVar18 = *(undefined8 *)param_2;
    puVar10 = (undefined8 *)(lVar11 + lVar7 * 8);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    puVar10[2] = uVar12;
    puVar14 = puVar10 + 3;
    puVar10[1] = uVar19;
    *puVar10 = uVar18;
    __src = (void *)*plVar13;
    __dest = (void *)((long)puVar10 - (plVar13[1] - (long)__src));
    memcpy(__dest,__src,plVar13[1] - (long)__src);
    *plVar13 = (long)__dest;
    plVar13[1] = (long)puVar14;
    plVar13[2] = lVar11 + uVar15 * 0x18;
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  plVar13[1] = (long)puVar14;
  return (((long *)*param_1)[1] - *(long *)*param_1 >> 3) * -0x5555555555555555 - 1;
}


// ===== 006b91ac  FUN_006b91ac =====

/* WARNING: Removing unreachable block (ram,0x006b9528) */

void FUN_006b91ac(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  size_t __n_00;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  ulong *puVar17;
  undefined8 *__ptr;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006b9218 to 006b922b has its CatchHandler @ 006b9690 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006b922c to 006b9233 has its CatchHandler @ 006b968c */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  lVar23 = param_8[0x16];
  lVar22 = param_8[5];
  iVar1 = (int)lVar23 + 1;
  *(int *)(param_8 + 0x16) = iVar1;
  if (*(int *)((long)param_8 + 0x7c) < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006b9274 to 006b9287 has its CatchHandler @ 006b96e0 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006b9288 to 006b928f has its CatchHandler @ 006b96dc */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  uVar12 = FUN_006c457c(param_4);
  if ((uVar12 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar12 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar12) {
      if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006b9704;
    }
    if (uVar12 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar12 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar5 = uVar12 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar12;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar18 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar18 = param_2 + 1;
      }
      memmove(__dest,pbVar18,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar12 = *(ulong *)(param_3 + 8);
    pbVar18 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar18 = param_3 + 1;
      uVar12 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006b9580 to 006b9587 has its CatchHandler @ 006b96ac */
    puVar17 = (ulong *)FUN_0071302c(&local_80,pbVar18,uVar12);
    local_d0 = (void *)puVar17[2];
    uStack_d8 = puVar17[1];
    local_e0 = *puVar17;
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
                    /* try { // try from 006b95a0 to 006b95bb has its CatchHandler @ 006b9694 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar22 = lVar22 + (long)(int)lVar23 * 0x58;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006b92b8 to 006b92c3 has its CatchHandler @ 006b96c4 */
    thunk_FUN_0066e8b0(lVar22,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x38) = lVar22;
    if (0 < *(int *)(lVar22 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar22);
                    /* try { // try from 006b9300 to 006b930b has its CatchHandler @ 006b967c */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar13 = (long *)FUN_006fa958();
      if (*plVar13 != plVar13[1]) {
LAB_006b9358:
        uVar12 = *(ulong *)(param_7 + 8);
        pbVar18 = *(byte **)(param_7 + 0x10);
        uVar11 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar18 = param_7 + 1;
          uVar12 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar12 < 0) {
          FUN_00676318(uVar12,"string length exceeds max size");
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18,uVar12);
          cVar6 = *pcVar14;
        }
        else {
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18);
          cVar6 = *pcVar14;
        }
        if (cVar6 == '\x01') {
          lVar23 = *plVar13;
          lVar22 = plVar13[1];
          if (0 < (int)((ulong)(lVar22 - lVar23) >> 4)) {
            lVar21 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar14;
              if (*pcVar14 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar15 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar23 + lVar21 * 0x10));
              if ((lVar15 != 0) && (puVar16 = (undefined8 *)*puVar2, puVar16 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar20 = puVar16;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar15 + 0x10) <= (ulong)puVar20[4]) {
                    lVar4 = 0;
                    __ptr = puVar20;
                  }
                  puVar20 = *(undefined8 **)((long)puVar20 + lVar4);
                } while (puVar20 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar15 + 0x10))) {
                  puVar20 = __ptr;
                  puVar9 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar19 = (undefined8 *)puVar20[2];
                      bVar10 = (undefined8 *)*puVar19 != puVar20;
                      puVar20 = puVar19;
                    } while (bVar10);
                  }
                  else {
                    do {
                      puVar19 = puVar9;
                      puVar9 = (undefined8 *)*puVar19;
                    } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar19;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar16,__ptr);
                  free(__ptr);
                  lVar23 = *plVar13;
                  lVar22 = plVar13[1];
                }
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)((ulong)(lVar22 - lVar23) >> 4));
          }
        }
      }
    }
    else {
      uVar12 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar13 = (long *)(uVar12 + 8);
      if (*plVar13 != *(long *)(uVar12 + 0x10)) goto LAB_006b9358;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_006b9704:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b9708  FUN_006b9708 =====

/* WARNING: Removing unreachable block (ram,0x006b9a84) */

void FUN_006b9708(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  size_t __n_00;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  ulong *puVar17;
  undefined8 *__ptr;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006b9774 to 006b9787 has its CatchHandler @ 006b9bec */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006b9788 to 006b978f has its CatchHandler @ 006b9be8 */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  lVar23 = param_8[0x18];
  lVar22 = param_8[9];
  iVar1 = (int)lVar23 + 1;
  *(int *)(param_8 + 0x18) = iVar1;
  if (*(int *)((long)param_8 + 0x8c) < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006b97d0 to 006b97e3 has its CatchHandler @ 006b9c3c */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006b97e4 to 006b97eb has its CatchHandler @ 006b9c38 */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  uVar12 = FUN_006c4ed4(param_4);
  if ((uVar12 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar12 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar12) {
      if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006b9c60;
    }
    if (uVar12 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar12 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar5 = uVar12 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar12;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar18 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar18 = param_2 + 1;
      }
      memmove(__dest,pbVar18,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar12 = *(ulong *)(param_3 + 8);
    pbVar18 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar18 = param_3 + 1;
      uVar12 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006b9adc to 006b9ae3 has its CatchHandler @ 006b9c08 */
    puVar17 = (ulong *)FUN_0071302c(&local_80,pbVar18,uVar12);
    local_d0 = (void *)puVar17[2];
    uStack_d8 = puVar17[1];
    local_e0 = *puVar17;
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
                    /* try { // try from 006b9afc to 006b9b17 has its CatchHandler @ 006b9bf0 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar22 = lVar22 + (long)(int)lVar23 * 0x48;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006b9814 to 006b981f has its CatchHandler @ 006b9c20 */
    thunk_FUN_0066e8b0(lVar22,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x18) = lVar22;
    if (0 < *(int *)(lVar22 + 0x30)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar22);
                    /* try { // try from 006b985c to 006b9867 has its CatchHandler @ 006b9bd8 */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar13 = (long *)FUN_006fa958();
      if (*plVar13 != plVar13[1]) {
LAB_006b98b4:
        uVar12 = *(ulong *)(param_7 + 8);
        pbVar18 = *(byte **)(param_7 + 0x10);
        uVar11 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar18 = param_7 + 1;
          uVar12 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar12 < 0) {
          FUN_00676318(uVar12,"string length exceeds max size");
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18,uVar12);
          cVar6 = *pcVar14;
        }
        else {
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18);
          cVar6 = *pcVar14;
        }
        if (cVar6 == '\x01') {
          lVar23 = *plVar13;
          lVar22 = plVar13[1];
          if (0 < (int)((ulong)(lVar22 - lVar23) >> 4)) {
            lVar21 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar14;
              if (*pcVar14 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar15 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar23 + lVar21 * 0x10));
              if ((lVar15 != 0) && (puVar16 = (undefined8 *)*puVar2, puVar16 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar20 = puVar16;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar15 + 0x10) <= (ulong)puVar20[4]) {
                    lVar4 = 0;
                    __ptr = puVar20;
                  }
                  puVar20 = *(undefined8 **)((long)puVar20 + lVar4);
                } while (puVar20 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar15 + 0x10))) {
                  puVar20 = __ptr;
                  puVar9 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar19 = (undefined8 *)puVar20[2];
                      bVar10 = (undefined8 *)*puVar19 != puVar20;
                      puVar20 = puVar19;
                    } while (bVar10);
                  }
                  else {
                    do {
                      puVar19 = puVar9;
                      puVar9 = (undefined8 *)*puVar19;
                    } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar19;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar16,__ptr);
                  free(__ptr);
                  lVar23 = *plVar13;
                  lVar22 = plVar13[1];
                }
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)((ulong)(lVar22 - lVar23) >> 4));
          }
        }
      }
    }
    else {
      uVar12 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar13 = (long *)(uVar12 + 8);
      if (*plVar13 != *(long *)(uVar12 + 0x10)) goto LAB_006b98b4;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_006b9c60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006b9c64  FUN_006b9c64 =====

void FUN_006b9c64(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006b9c64(param_1,*param_2);
    FUN_006b9c64(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006b9cb4  FUN_006b9cb4 =====

undefined1  [16] FUN_006b9cb4(long *param_1,byte *param_2,long *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  long lVar2;
  byte *__s1;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar10 = param_1 + 1;
  plVar9 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar10 = plVar9;
        __s2 = (void *)((long)plVar10 + 0x21);
        uVar5 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
        if ((*(byte *)(plVar10 + 4) & 1) != 0) {
          __s2 = (void *)plVar10[6];
          uVar5 = plVar10[5];
        }
        __n = uVar5;
        if (uVar1 <= uVar5) {
          __n = uVar1;
        }
        iVar6 = memcmp(__s1,__s2,__n);
        bVar4 = uVar1 < uVar5;
        if (iVar6 != 0) {
          bVar4 = iVar6 < 0;
        }
        if (bVar4) break;
        iVar6 = memcmp(__s2,__s1,__n);
        bVar4 = uVar5 < uVar1;
        if (iVar6 != 0) {
          bVar4 = iVar6 < 0;
        }
        if (!bVar4) {
          uVar8 = 0;
          goto LAB_006b9e08;
        }
        plVar9 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar11 = plVar10 + 1;
          goto LAB_006b9d9c;
        }
      }
      plVar9 = (long *)*plVar10;
      plVar11 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
LAB_006b9d9c:
  plVar7 = (long *)FUN_00759c3c(0x40);
  lVar2 = param_3[2];
  lVar3 = param_3[3];
  lVar13 = param_3[1];
  lVar12 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar7[5] = lVar13;
  plVar7[4] = lVar12;
  plVar7[6] = lVar2;
  plVar7[7] = lVar3;
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = (long)plVar10;
  *plVar11 = (long)plVar7;
  plVar9 = plVar7;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar9 = (long *)*plVar11;
  }
  FUN_00328410(param_1[1],plVar9);
  uVar8 = 1;
  param_1[2] = param_1[2] + 1;
  plVar10 = plVar7;
LAB_006b9e08:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = plVar10;
  return auVar14;
}


// ===== 006b9e24  FUN_006b9e24 =====

void FUN_006b9e24(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x20) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x30));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006b9e74  FUN_006b9e74 =====

long * FUN_006b9e74(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x28);
  plVar12 = param_1 + 1;
  plVar9 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar12 = plVar9;
        __s2 = (void *)((long)plVar12 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
        if ((*(byte *)(plVar12 + 4) & 1) != 0) {
          __s2 = (void *)plVar12[6];
          uVar3 = plVar12[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(pbVar10,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,pbVar10,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar11 = *(long *)(lVar11 + 0x28);
          plVar9 = plVar12;
          goto joined_r0x006ba018;
        }
        plVar9 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_006b9f70;
        }
      }
      plVar9 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_006b9f70:
  plVar9 = (long *)FUN_00759c3c(0x40);
  pbVar10 = (byte *)*param_4;
  if ((*pbVar10 & 1) == 0) {
    lVar15 = *(long *)(pbVar10 + 8);
    lVar14 = *(long *)pbVar10;
    plVar9[6] = *(long *)(pbVar10 + 0x10);
    plVar9[5] = lVar15;
    plVar9[4] = lVar14;
  }
  else {
                    /* try { // try from 006b9fa8 to 006b9faf has its CatchHandler @ 006ba040 */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  plVar9[7] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar12 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar12 = (long *)*plVar13;
  }
  uVar6 = FUN_00328410(param_1[1],plVar12);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x006ba018:
  if (lVar11 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 006ba068  FUN_006ba068 =====

/* WARNING: Removing unreachable block (ram,0x006ba3e4) */

void FUN_006ba068(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  size_t __n_00;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  ulong *puVar18;
  undefined8 *__ptr;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006ba0d4 to 006ba0e7 has its CatchHandler @ 006ba54c */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006ba0e8 to 006ba0ef has its CatchHandler @ 006ba548 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  iVar8 = *(int *)((long)param_8 + 0xb4);
  lVar24 = param_8[6];
  iVar1 = iVar8 + 1;
  *(int *)((long)param_8 + 0xb4) = iVar1;
  if ((int)param_8[0x10] < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006ba130 to 006ba143 has its CatchHandler @ 006ba59c */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006ba144 to 006ba14b has its CatchHandler @ 006ba598 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  uVar13 = FUN_006c64b4(param_4);
  if ((uVar13 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar13 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar13) {
      if (*(long *)(lVar9 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006ba5c0;
    }
    if (uVar13 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar13 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar13 & 0xfffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar5 = uVar13 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar13;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar19 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar19 = param_2 + 1;
      }
      memmove(__dest,pbVar19,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar13 = *(ulong *)(param_3 + 8);
    pbVar19 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar19 = param_3 + 1;
      uVar13 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006ba43c to 006ba443 has its CatchHandler @ 006ba568 */
    puVar18 = (ulong *)FUN_0071302c(&local_80,pbVar19,uVar13);
    local_d0 = (void *)puVar18[2];
    uStack_d8 = puVar18[1];
    local_e0 = *puVar18;
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
                    /* try { // try from 006ba45c to 006ba477 has its CatchHandler @ 006ba550 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar24 = lVar24 + (long)iVar8 * 0x50;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006ba174 to 006ba17f has its CatchHandler @ 006ba580 */
    thunk_FUN_0066e8b0(lVar24,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x20) = lVar24;
    if (0 < *(int *)(lVar24 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar24);
                    /* try { // try from 006ba1bc to 006ba1c7 has its CatchHandler @ 006ba538 */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar14 = (long *)FUN_006fa958();
      if (*plVar14 != plVar14[1]) {
LAB_006ba214:
        uVar13 = *(ulong *)(param_7 + 8);
        pbVar19 = *(byte **)(param_7 + 0x10);
        uVar12 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar19 = param_7 + 1;
          uVar13 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar13 < 0) {
          FUN_00676318(uVar13,"string length exceeds max size");
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19,uVar13);
          cVar6 = *pcVar15;
        }
        else {
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19);
          cVar6 = *pcVar15;
        }
        if (cVar6 == '\x01') {
          lVar24 = *plVar14;
          lVar23 = plVar14[1];
          if (0 < (int)((ulong)(lVar23 - lVar24) >> 4)) {
            lVar22 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar15;
              if (*pcVar15 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar16 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar24 + lVar22 * 0x10));
              if ((lVar16 != 0) && (puVar17 = (undefined8 *)*puVar2, puVar17 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar21 = puVar17;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar16 + 0x10) <= (ulong)puVar21[4]) {
                    lVar4 = 0;
                    __ptr = puVar21;
                  }
                  puVar21 = *(undefined8 **)((long)puVar21 + lVar4);
                } while (puVar21 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar16 + 0x10))) {
                  puVar21 = __ptr;
                  puVar10 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar20 = (undefined8 *)puVar21[2];
                      bVar11 = (undefined8 *)*puVar20 != puVar21;
                      puVar21 = puVar20;
                    } while (bVar11);
                  }
                  else {
                    do {
                      puVar20 = puVar10;
                      puVar10 = (undefined8 *)*puVar20;
                    } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar20;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar17,__ptr);
                  free(__ptr);
                  lVar24 = *plVar14;
                  lVar23 = plVar14[1];
                }
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)((ulong)(lVar23 - lVar24) >> 4));
          }
        }
      }
    }
    else {
      uVar13 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar14 = (long *)(uVar13 + 8);
      if (*plVar14 != *(long *)(uVar13 + 0x10)) goto LAB_006ba214;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
LAB_006ba5c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ba5c4  FUN_006ba5c4 =====

/* WARNING: Removing unreachable block (ram,0x006ba940) */

void FUN_006ba5c4(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  size_t __n_00;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  ulong *puVar17;
  undefined8 *__ptr;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006ba630 to 006ba643 has its CatchHandler @ 006baaa8 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006ba644 to 006ba64b has its CatchHandler @ 006baaa4 */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  lVar23 = param_8[0x17];
  lVar22 = param_8[7];
  iVar1 = (int)lVar23 + 1;
  *(int *)(param_8 + 0x17) = iVar1;
  if (*(int *)((long)param_8 + 0x84) < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006ba68c to 006ba69f has its CatchHandler @ 006baaf8 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006ba6a0 to 006ba6a7 has its CatchHandler @ 006baaf4 */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  uVar12 = FUN_006c6f00(param_4);
  if ((uVar12 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar12 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar12) {
      if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006bab1c;
    }
    if (uVar12 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar12 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar5 = uVar12 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar12;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar18 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar18 = param_2 + 1;
      }
      memmove(__dest,pbVar18,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar12 = *(ulong *)(param_3 + 8);
    pbVar18 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar18 = param_3 + 1;
      uVar12 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006ba998 to 006ba99f has its CatchHandler @ 006baac4 */
    puVar17 = (ulong *)FUN_0071302c(&local_80,pbVar18,uVar12);
    local_d0 = (void *)puVar17[2];
    uStack_d8 = puVar17[1];
    local_e0 = *puVar17;
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
                    /* try { // try from 006ba9b8 to 006ba9d3 has its CatchHandler @ 006baaac */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar22 = lVar22 + (long)(int)lVar23 * 0x50;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006ba6d0 to 006ba6db has its CatchHandler @ 006baadc */
    thunk_FUN_0066e8b0(lVar22,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x18) = lVar22;
    if (0 < *(int *)(lVar22 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar22);
                    /* try { // try from 006ba718 to 006ba723 has its CatchHandler @ 006baa94 */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar13 = (long *)FUN_006fa958();
      if (*plVar13 != plVar13[1]) {
LAB_006ba770:
        uVar12 = *(ulong *)(param_7 + 8);
        pbVar18 = *(byte **)(param_7 + 0x10);
        uVar11 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar18 = param_7 + 1;
          uVar12 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar12 < 0) {
          FUN_00676318(uVar12,"string length exceeds max size");
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18,uVar12);
          cVar6 = *pcVar14;
        }
        else {
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18);
          cVar6 = *pcVar14;
        }
        if (cVar6 == '\x01') {
          lVar23 = *plVar13;
          lVar22 = plVar13[1];
          if (0 < (int)((ulong)(lVar22 - lVar23) >> 4)) {
            lVar21 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar14;
              if (*pcVar14 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar15 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar23 + lVar21 * 0x10));
              if ((lVar15 != 0) && (puVar16 = (undefined8 *)*puVar2, puVar16 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar20 = puVar16;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar15 + 0x10) <= (ulong)puVar20[4]) {
                    lVar4 = 0;
                    __ptr = puVar20;
                  }
                  puVar20 = *(undefined8 **)((long)puVar20 + lVar4);
                } while (puVar20 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar15 + 0x10))) {
                  puVar20 = __ptr;
                  puVar9 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar19 = (undefined8 *)puVar20[2];
                      bVar10 = (undefined8 *)*puVar19 != puVar20;
                      puVar20 = puVar19;
                    } while (bVar10);
                  }
                  else {
                    do {
                      puVar19 = puVar9;
                      puVar9 = (undefined8 *)*puVar19;
                    } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar19;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar16,__ptr);
                  free(__ptr);
                  lVar23 = *plVar13;
                  lVar22 = plVar13[1];
                }
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)((ulong)(lVar22 - lVar23) >> 4));
          }
        }
      }
    }
    else {
      uVar12 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar13 = (long *)(uVar12 + 8);
      if (*plVar13 != *(long *)(uVar12 + 0x10)) goto LAB_006ba770;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_006bab1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006bab20  FUN_006bab20 =====

/* WARNING: Removing unreachable block (ram,0x006bae9c) */

void FUN_006bab20(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  size_t __n_00;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  ulong *puVar18;
  undefined8 *__ptr;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006bab8c to 006bab9f has its CatchHandler @ 006bb004 */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006baba0 to 006baba7 has its CatchHandler @ 006bb000 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  iVar8 = *(int *)((long)param_8 + 0xc4);
  lVar24 = param_8[10];
  iVar1 = iVar8 + 1;
  *(int *)((long)param_8 + 0xc4) = iVar1;
  if ((int)param_8[0x12] < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006babe8 to 006babfb has its CatchHandler @ 006bb054 */
    uVar12 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006babfc to 006bac03 has its CatchHandler @ 006bb050 */
    FUN_00675ac0(&local_80,uVar12);
    FUN_00675e7c(&local_e0);
  }
  uVar13 = FUN_006c7a64(param_4);
  if ((uVar13 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar13 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar13) {
      if (*(long *)(lVar9 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006bb078;
    }
    if (uVar13 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar13 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar13 & 0xfffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar5 = uVar13 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar13;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar19 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar19 = param_2 + 1;
      }
      memmove(__dest,pbVar19,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar13 = *(ulong *)(param_3 + 8);
    pbVar19 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar19 = param_3 + 1;
      uVar13 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006baef4 to 006baefb has its CatchHandler @ 006bb020 */
    puVar18 = (ulong *)FUN_0071302c(&local_80,pbVar19,uVar13);
    local_d0 = (void *)puVar18[2];
    uStack_d8 = puVar18[1];
    local_e0 = *puVar18;
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
                    /* try { // try from 006baf14 to 006baf2f has its CatchHandler @ 006bb008 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar24 = lVar24 + (long)iVar8 * 0x50;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006bac2c to 006bac37 has its CatchHandler @ 006bb038 */
    thunk_FUN_0066e8b0(lVar24,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x18) = lVar24;
    if (0 < *(int *)(lVar24 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar24);
                    /* try { // try from 006bac74 to 006bac7f has its CatchHandler @ 006baff0 */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar14 = (long *)FUN_006fa958();
      if (*plVar14 != plVar14[1]) {
LAB_006baccc:
        uVar13 = *(ulong *)(param_7 + 8);
        pbVar19 = *(byte **)(param_7 + 0x10);
        uVar12 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar19 = param_7 + 1;
          uVar13 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar13 < 0) {
          FUN_00676318(uVar13,"string length exceeds max size");
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19,uVar13);
          cVar6 = *pcVar15;
        }
        else {
          pcVar15 = (char *)FUN_00688e84(uVar12,pbVar19);
          cVar6 = *pcVar15;
        }
        if (cVar6 == '\x01') {
          lVar24 = *plVar14;
          lVar23 = plVar14[1];
          if (0 < (int)((ulong)(lVar23 - lVar24) >> 4)) {
            lVar22 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar15;
              if (*pcVar15 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar16 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar24 + lVar22 * 0x10));
              if ((lVar16 != 0) && (puVar17 = (undefined8 *)*puVar2, puVar17 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar21 = puVar17;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar16 + 0x10) <= (ulong)puVar21[4]) {
                    lVar4 = 0;
                    __ptr = puVar21;
                  }
                  puVar21 = *(undefined8 **)((long)puVar21 + lVar4);
                } while (puVar21 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar16 + 0x10))) {
                  puVar21 = __ptr;
                  puVar10 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar20 = (undefined8 *)puVar21[2];
                      bVar11 = (undefined8 *)*puVar20 != puVar21;
                      puVar21 = puVar20;
                    } while (bVar11);
                  }
                  else {
                    do {
                      puVar20 = puVar10;
                      puVar10 = (undefined8 *)*puVar20;
                    } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar20;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar17,__ptr);
                  free(__ptr);
                  lVar24 = *plVar14;
                  lVar23 = plVar14[1];
                }
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)((ulong)(lVar23 - lVar24) >> 4));
          }
        }
      }
    }
    else {
      uVar13 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar14 = (long *)(uVar13 + 8);
      if (*plVar14 != *(long *)(uVar13 + 0x10)) goto LAB_006baccc;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
LAB_006bb078:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006bb07c  FUN_006bb07c =====

/* WARNING: Removing unreachable block (ram,0x006bb3f8) */

void FUN_006bb07c(undefined8 *param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                 undefined8 param_6,byte *param_7,long *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  size_t __n;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  size_t __n_00;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  ulong *puVar17;
  undefined8 *__ptr;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (*param_8 == 0) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x187);
                    /* try { // try from 006bb0e8 to 006bb0fb has its CatchHandler @ 006bb560 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: has_allocated(): ");
                    /* try { // try from 006bb0fc to 006bb103 has its CatchHandler @ 006bb55c */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  lVar23 = param_8[0x19];
  lVar22 = param_8[0xb];
  iVar1 = (int)lVar23 + 1;
  *(int *)(param_8 + 0x19) = iVar1;
  if (*(int *)((long)param_8 + 0x94) < iVar1) {
    FUN_00675e64(&local_e0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x18d);
                    /* try { // try from 006bb144 to 006bb157 has its CatchHandler @ 006bb5b0 */
    uVar11 = FUN_00675a58(&local_e0,"CHECK failed: (used) <= (total_.template Get<TypeToUse>()): ");
                    /* try { // try from 006bb158 to 006bb15f has its CatchHandler @ 006bb5ac */
    FUN_00675ac0(&local_80,uVar11);
    FUN_00675e7c(&local_e0);
  }
  uVar12 = FUN_006c8794(param_4);
  if ((uVar12 & 1) == 0) {
    bVar7 = *param_2;
    __n = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    __n_00 = strlen(".");
    uVar12 = __n + __n_00;
    if (0xfffffffffffffff7 < uVar12) {
      if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006bb5d4;
    }
    if (uVar12 < 0x17) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)(((uint)uVar12 & 0xff) << 1);
      __dest = (void *)((long)&local_80 + 1);
    }
    else {
      uVar5 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar5 = uVar12 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_80 = uVar5 + 1 | 1;
      local_78 = uVar12;
      local_70 = __dest;
    }
    if (__n != 0) {
      pbVar18 = *(byte **)(param_2 + 0x10);
      if ((bVar7 & 1) == 0) {
        pbVar18 = param_2 + 1;
      }
      memmove(__dest,pbVar18,__n);
    }
    if (__n_00 != 0) {
      memcpy((void *)((long)__dest + __n),&DAT_001c773b,__n_00);
    }
    bVar7 = *param_3;
    uVar12 = *(ulong *)(param_3 + 8);
    pbVar18 = *(byte **)(param_3 + 0x10);
    *(undefined1 *)((long)((long)__dest + __n) + __n_00) = 0;
    if ((bVar7 & 1) == 0) {
      pbVar18 = param_3 + 1;
      uVar12 = (ulong)(bVar7 >> 1);
    }
                    /* try { // try from 006bb450 to 006bb457 has its CatchHandler @ 006bb57c */
    puVar17 = (ulong *)FUN_0071302c(&local_80,pbVar18,uVar12);
    local_d0 = (void *)puVar17[2];
    uStack_d8 = puVar17[1];
    local_e0 = *puVar17;
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
                    /* try { // try from 006bb470 to 006bb48b has its CatchHandler @ 006bb564 */
    FUN_00695cf0(param_1,&local_e0,param_4,7,"Uninterpreted option is missing name or value.");
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  else {
    lVar22 = lVar22 + (long)(int)lVar23 * 0x50;
    FUN_0066ee24(&local_e0,param_4);
                    /* try { // try from 006bb188 to 006bb193 has its CatchHandler @ 006bb594 */
    thunk_FUN_0066e8b0(lVar22,&local_e0);
    if ((local_e0 & 1) != 0) {
      free(local_d0);
    }
    *(long *)(param_5 + 0x38) = lVar22;
    if (0 < *(int *)(lVar22 + 0x38)) {
      FUN_006b7b88(&local_e0,param_2,param_3,param_6,param_4,lVar22);
                    /* try { // try from 006bb1d0 to 006bb1db has its CatchHandler @ 006bb54c */
      FUN_006b78f4(param_1 + 3,&local_e0);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        free(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
    }
    if ((*(ulong *)(param_4 + 8) & 1) == 0) {
      plVar13 = (long *)FUN_006fa958();
      if (*plVar13 != plVar13[1]) {
LAB_006bb228:
        uVar12 = *(ulong *)(param_7 + 8);
        pbVar18 = *(byte **)(param_7 + 0x10);
        uVar11 = param_1[1];
        if ((*param_7 & 1) == 0) {
          pbVar18 = param_7 + 1;
          uVar12 = (ulong)(*param_7 >> 1);
        }
        if ((long)uVar12 < 0) {
          FUN_00676318(uVar12,"string length exceeds max size");
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18,uVar12);
          cVar6 = *pcVar14;
        }
        else {
          pcVar14 = (char *)FUN_00688e84(uVar11,pbVar18);
          cVar6 = *pcVar14;
        }
        if (cVar6 == '\x01') {
          lVar23 = *plVar13;
          lVar22 = plVar13[1];
          if (0 < (int)((ulong)(lVar22 - lVar23) >> 4)) {
            lVar21 = 0;
            puVar2 = param_1 + 0x15;
            do {
              pcVar3 = pcVar14;
              if (*pcVar14 != '\x01') {
                pcVar3 = (char *)0x0;
              }
              lVar15 = FUN_0068c558(*param_1,pcVar3,*(undefined4 *)(lVar23 + lVar21 * 0x10));
              if ((lVar15 != 0) && (puVar16 = (undefined8 *)*puVar2, puVar16 != (undefined8 *)0x0))
              {
                __ptr = puVar2;
                puVar20 = puVar16;
                do {
                  lVar4 = 8;
                  if (*(ulong *)(lVar15 + 0x10) <= (ulong)puVar20[4]) {
                    lVar4 = 0;
                    __ptr = puVar20;
                  }
                  puVar20 = *(undefined8 **)((long)puVar20 + lVar4);
                } while (puVar20 != (undefined8 *)0x0);
                if ((__ptr != puVar2) && ((ulong)__ptr[4] <= *(ulong *)(lVar15 + 0x10))) {
                  puVar20 = __ptr;
                  puVar9 = (undefined8 *)__ptr[1];
                  if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
                    do {
                      puVar19 = (undefined8 *)puVar20[2];
                      bVar10 = (undefined8 *)*puVar19 != puVar20;
                      puVar20 = puVar19;
                    } while (bVar10);
                  }
                  else {
                    do {
                      puVar19 = puVar9;
                      puVar9 = (undefined8 *)*puVar19;
                    } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
                  }
                  if ((undefined8 *)param_1[0x14] == __ptr) {
                    param_1[0x14] = puVar19;
                  }
                  param_1[0x16] = param_1[0x16] + -1;
                  FUN_00328dd0(puVar16,__ptr);
                  free(__ptr);
                  lVar23 = *plVar13;
                  lVar22 = plVar13[1];
                }
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)((ulong)(lVar22 - lVar23) >> 4));
          }
        }
      }
    }
    else {
      uVar12 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffc;
      plVar13 = (long *)(uVar12 + 8);
      if (*plVar13 != *(long *)(uVar12 + 0x10)) goto LAB_006bb228;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_006bb5d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006bb5d8  FUN_006bb5d8 =====

long * FUN_006bb5d8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar6 = plVar7[1];
        if (uVar6 == uVar4) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 006bb6e8  FUN_006bb6e8 =====

void FUN_006bb6e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006bb6fc  FUN_006bb6fc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006bb6fc(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  
LAB_006bb724:
  puVar16 = param_2 + -1;
  puVar18 = param_1;
LAB_006bb72c:
  do {
    param_1 = puVar18;
    uVar11 = (long)param_2 - (long)param_1 >> 3;
    if (uVar11 - 2 != 0 && 1 < (long)uVar11) {
      if (uVar11 == 3) {
        uVar12 = *param_1;
        uVar15 = param_1[1];
        iVar10 = (int)uVar12;
        iVar13 = (int)uVar15;
        iVar9 = (int)((ulong)uVar12 >> 0x20);
        iVar7 = (int)((ulong)uVar15 >> 0x20);
        if ((iVar13 < iVar10) || ((iVar13 <= iVar10 && (iVar7 < iVar9)))) {
          uVar24 = param_2[-1];
          if (((int)uVar24 < iVar13) ||
             (((int)uVar24 <= iVar13 && ((int)((ulong)uVar24 >> 0x20) < iVar7)))) {
            *param_1 = uVar24;
          }
          else {
            *param_1 = uVar15;
            param_1[1] = uVar12;
            uVar15 = param_2[-1];
            if (iVar10 <= (int)uVar15) {
              if (iVar10 < (int)uVar15) {
                return;
              }
              if (iVar9 <= (int)((ulong)uVar15 >> 0x20)) {
                return;
              }
            }
            param_1[1] = uVar15;
          }
          param_2[-1] = uVar12;
          return;
        }
        uVar12 = param_2[-1];
        if (iVar13 <= (int)uVar12) {
          if (iVar13 < (int)uVar12) {
            return;
          }
          if (iVar7 <= (int)((ulong)uVar12 >> 0x20)) {
            return;
          }
        }
        param_1[1] = uVar12;
        param_2[-1] = uVar15;
        uVar12 = *param_1;
        uVar15 = param_1[1];
        if ((int)uVar15 < (int)uVar12) goto LAB_006bc4c0;
      }
      else {
        if (uVar11 == 4) {
          FUN_006bc988(param_1,param_1 + 1,param_1 + 2,puVar16);
          return;
        }
        if (uVar11 != 5) goto LAB_006bb768;
        FUN_006bc988(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
        uVar12 = param_2[-1];
        uVar15 = param_1[3];
        if ((int)uVar15 <= (int)uVar12) {
          if ((int)uVar15 < (int)uVar12) {
            return;
          }
          if ((int)((ulong)uVar15 >> 0x20) <= (int)((ulong)uVar12 >> 0x20)) {
            return;
          }
        }
        param_1[3] = uVar12;
        param_2[-1] = uVar15;
        uVar12 = param_1[2];
        uVar15 = param_1[3];
        iVar10 = (int)uVar15;
        iVar13 = (int)((ulong)uVar15 >> 0x20);
        if ((int)uVar12 <= iVar10) {
          if ((int)uVar12 < iVar10) {
            return;
          }
          if ((int)((ulong)uVar12 >> 0x20) <= iVar13) {
            return;
          }
        }
        uVar24 = param_1[1];
        param_1[2] = uVar15;
        param_1[3] = uVar12;
        if ((int)uVar24 <= iVar10) {
          if ((int)uVar24 < iVar10) {
            return;
          }
          if ((int)((ulong)uVar24 >> 0x20) <= iVar13) {
            return;
          }
        }
        uVar12 = *param_1;
        param_1[1] = uVar15;
        param_1[2] = uVar24;
        if (iVar10 < (int)uVar12) goto LAB_006bc4c0;
      }
      if ((int)uVar12 < (int)uVar15) {
        return;
      }
      if ((int)((ulong)uVar12 >> 0x20) <= (int)((ulong)uVar15 >> 0x20)) {
        return;
      }
LAB_006bc4c0:
      *param_1 = uVar15;
      param_1[1] = uVar12;
      return;
    }
    if (uVar11 < 2) {
      return;
    }
    if (uVar11 == 2) {
      uVar12 = param_2[-1];
      uVar15 = *param_1;
      if ((int)uVar15 <= (int)uVar12) {
        if ((int)uVar15 < (int)uVar12) {
          return;
        }
        if ((int)((ulong)uVar15 >> 0x20) <= (int)((ulong)uVar12 >> 0x20)) {
          return;
        }
      }
      *param_1 = uVar12;
      param_2[-1] = uVar15;
      return;
    }
LAB_006bb768:
    if ((long)uVar11 < 0x18) {
      puVar18 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar18 == param_2) {
          return;
        }
        do {
          puVar16 = puVar18;
          uVar12 = *param_1;
          uVar15 = param_1[1];
          iVar10 = (int)uVar15;
          iVar13 = (int)((ulong)uVar15 >> 0x20);
          if ((iVar10 < (int)uVar12) ||
             ((iVar10 <= (int)uVar12 && (iVar13 < (int)((ulong)uVar12 >> 0x20))))) {
            do {
              do {
                puVar18 = param_1;
                param_1 = puVar18 + -1;
                uVar24 = *param_1;
                puVar18[1] = uVar12;
                uVar12 = uVar24;
              } while (iVar10 < (int)uVar24);
            } while ((iVar10 <= (int)uVar24) && (iVar13 < (int)((ulong)uVar24 >> 0x20)));
            *puVar18 = uVar15;
          }
          puVar18 = puVar16 + 1;
          param_1 = puVar16;
        } while (puVar18 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar18 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar16 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar11 - 2 >> 1;
      uVar8 = uVar17;
      goto LAB_006bc190;
    }
    puVar18 = param_1 + (uVar11 >> 1);
    if (uVar11 < 0x81) {
      uVar15 = *param_1;
      uVar12 = *puVar18;
      iVar10 = (int)uVar12;
      iVar13 = (int)uVar15;
      iVar9 = (int)((ulong)uVar12 >> 0x20);
      iVar7 = (int)((ulong)uVar15 >> 0x20);
      if ((iVar13 < iVar10) || ((iVar13 <= iVar10 && (iVar7 < iVar9)))) {
        uVar24 = param_2[-1];
        if (((int)uVar24 < iVar13) ||
           (((int)uVar24 <= iVar13 && ((int)((ulong)uVar24 >> 0x20) < iVar7)))) {
          *puVar18 = uVar24;
        }
        else {
          *puVar18 = uVar15;
          *param_1 = uVar12;
          uVar15 = param_2[-1];
          if ((iVar10 <= (int)uVar15) &&
             ((iVar10 < (int)uVar15 || (iVar9 <= (int)((ulong)uVar15 >> 0x20))))) goto LAB_006bb948;
          *param_1 = uVar15;
        }
        param_2[-1] = uVar12;
      }
      else {
        uVar12 = param_2[-1];
        if (((int)uVar12 < iVar13) ||
           (((int)uVar12 <= iVar13 && ((int)((ulong)uVar12 >> 0x20) < iVar7)))) {
          *param_1 = uVar12;
          param_2[-1] = uVar15;
          uVar12 = *param_1;
          uVar15 = *puVar18;
          if (((int)uVar12 < (int)uVar15) ||
             (((int)uVar12 <= (int)uVar15 &&
              ((int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar15 >> 0x20))))) {
            *puVar18 = uVar12;
            *param_1 = uVar15;
          }
        }
      }
    }
    else {
      uVar15 = *puVar18;
      uVar12 = *param_1;
      iVar10 = (int)uVar12;
      iVar13 = (int)uVar15;
      iVar9 = (int)((ulong)uVar12 >> 0x20);
      iVar7 = (int)((ulong)uVar15 >> 0x20);
      if ((iVar13 < iVar10) || ((iVar13 <= iVar10 && (iVar7 < iVar9)))) {
        uVar24 = param_2[-1];
        if (((int)uVar24 < iVar13) ||
           (((int)uVar24 <= iVar13 && ((int)((ulong)uVar24 >> 0x20) < iVar7)))) {
          *param_1 = uVar24;
        }
        else {
          *param_1 = uVar15;
          *puVar18 = uVar12;
          uVar15 = param_2[-1];
          if ((iVar10 <= (int)uVar15) &&
             ((iVar10 < (int)uVar15 || (iVar9 <= (int)((ulong)uVar15 >> 0x20))))) goto LAB_006bb7dc;
          *puVar18 = uVar15;
        }
        param_2[-1] = uVar12;
      }
      else {
        uVar12 = param_2[-1];
        if (((int)uVar12 < iVar13) ||
           (((int)uVar12 <= iVar13 && ((int)((ulong)uVar12 >> 0x20) < iVar7)))) {
          *puVar18 = uVar12;
          param_2[-1] = uVar15;
          uVar12 = *puVar18;
          uVar15 = *param_1;
          if (((int)uVar12 < (int)uVar15) ||
             (((int)uVar12 <= (int)uVar15 &&
              ((int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar15 >> 0x20))))) {
            *param_1 = uVar12;
            *puVar18 = uVar15;
          }
        }
      }
LAB_006bb7dc:
      lVar19 = (uVar11 >> 1) - 1;
      uVar12 = param_1[1];
      uVar15 = param_1[lVar19];
      iVar10 = (int)uVar12;
      iVar13 = (int)uVar15;
      iVar9 = (int)((ulong)uVar12 >> 0x20);
      iVar7 = (int)((ulong)uVar15 >> 0x20);
      if ((iVar13 < iVar10) || ((iVar13 <= iVar10 && (iVar7 < iVar9)))) {
        uVar24 = param_2[-2];
        if (((int)uVar24 < iVar13) ||
           (((int)uVar24 <= iVar13 && ((int)((ulong)uVar24 >> 0x20) < iVar7)))) {
          param_1[1] = uVar24;
        }
        else {
          param_1[1] = uVar15;
          param_1[lVar19] = uVar12;
          uVar15 = param_2[-2];
          if ((iVar10 <= (int)uVar15) &&
             ((iVar10 < (int)uVar15 || (iVar9 <= (int)((ulong)uVar15 >> 0x20))))) goto LAB_006bb834;
          param_1[lVar19] = uVar15;
        }
        param_2[-2] = uVar12;
      }
      else {
        uVar12 = param_2[-2];
        if (((int)uVar12 < iVar13) ||
           (((int)uVar12 <= iVar13 && ((int)((ulong)uVar12 >> 0x20) < iVar7)))) {
          param_1[lVar19] = uVar12;
          param_2[-2] = uVar15;
          uVar12 = param_1[lVar19];
          uVar15 = param_1[1];
          if (((int)uVar12 < (int)uVar15) ||
             (((int)uVar12 <= (int)uVar15 &&
              ((int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar15 >> 0x20))))) {
            param_1[1] = uVar12;
            param_1[lVar19] = uVar15;
          }
        }
      }
LAB_006bb834:
      puVar14 = puVar18 + 1;
      uVar15 = *puVar14;
      uVar12 = param_1[2];
      iVar10 = (int)uVar12;
      iVar13 = (int)uVar15;
      iVar9 = (int)((ulong)uVar12 >> 0x20);
      iVar7 = (int)((ulong)uVar15 >> 0x20);
      if ((iVar13 < iVar10) || ((iVar13 <= iVar10 && (iVar7 < iVar9)))) {
        uVar24 = param_2[-3];
        if (((int)uVar24 < iVar13) ||
           (((int)uVar24 <= iVar13 && ((int)((ulong)uVar24 >> 0x20) < iVar7)))) {
          param_1[2] = uVar24;
        }
        else {
          param_1[2] = uVar15;
          *puVar14 = uVar12;
          uVar15 = param_2[-3];
          if ((iVar10 <= (int)uVar15) &&
             ((iVar10 < (int)uVar15 || (iVar9 <= (int)((ulong)uVar15 >> 0x20))))) goto LAB_006bb888;
          *puVar14 = uVar15;
        }
        param_2[-3] = uVar12;
      }
      else {
        uVar12 = param_2[-3];
        if (((int)uVar12 < iVar13) ||
           (((int)uVar12 <= iVar13 && ((int)((ulong)uVar12 >> 0x20) < iVar7)))) {
          *puVar14 = uVar12;
          param_2[-3] = uVar15;
          uVar12 = *puVar14;
          uVar15 = param_1[2];
          if (((int)uVar12 < (int)uVar15) ||
             (((int)uVar12 <= (int)uVar15 &&
              ((int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar15 >> 0x20))))) {
            param_1[2] = uVar12;
            *puVar14 = uVar15;
          }
        }
      }
LAB_006bb888:
      uVar12 = *puVar18;
      uVar15 = param_1[lVar19];
      iVar10 = (int)uVar15;
      iVar13 = (int)uVar12;
      iVar7 = (int)((ulong)uVar15 >> 0x20);
      iVar9 = (int)((ulong)uVar12 >> 0x20);
      if (iVar13 < iVar10) {
        uVar24 = *puVar14;
LAB_006bb914:
        iVar23 = (int)uVar24;
        if ((iVar23 < iVar13) ||
           ((iVar26 = (int)((ulong)uVar24 >> 0x20), iVar23 <= iVar13 && (iVar26 < iVar9)))) {
          param_1[lVar19] = uVar24;
          goto LAB_006bb938;
        }
        param_1[lVar19] = uVar12;
        *puVar18 = uVar15;
        if ((iVar23 < iVar10) || ((uVar12 = uVar15, iVar23 <= iVar10 && (iVar26 < iVar7)))) {
          *puVar18 = uVar24;
          uVar12 = uVar24;
          goto LAB_006bb938;
        }
      }
      else {
        uVar24 = *puVar14;
        if ((iVar13 <= iVar10) && (iVar9 < iVar7)) goto LAB_006bb914;
        iVar23 = (int)uVar24;
        iVar26 = (int)((ulong)uVar24 >> 0x20);
        if ((iVar13 <= iVar23) && ((iVar13 < iVar23 || (iVar9 <= iVar26)))) goto LAB_006bb93c;
        *puVar18 = uVar24;
        *puVar14 = uVar12;
        if ((iVar10 <= iVar23) && ((uVar12 = uVar24, iVar10 < iVar23 || (iVar7 <= iVar26))))
        goto LAB_006bb93c;
        param_1[lVar19] = uVar24;
        puVar14 = puVar18;
        uVar12 = uVar15;
LAB_006bb938:
        *puVar14 = uVar15;
      }
LAB_006bb93c:
      uVar15 = *param_1;
      *param_1 = uVar12;
      *puVar18 = uVar15;
    }
LAB_006bb948:
    uVar12 = *param_1;
    param_3 = param_3 + -1;
    iVar10 = (int)uVar12;
    iVar13 = (int)((ulong)uVar12 >> 0x20);
    if ((param_4 & 1) != 0) {
LAB_006bb978:
      lVar19 = 0;
      while( true ) {
        uVar15 = *(undefined8 *)((long)param_1 + lVar19 + 8);
        if ((iVar10 <= (int)uVar15) &&
           ((iVar10 < (int)uVar15 || (iVar13 <= (int)((ulong)uVar15 >> 0x20))))) break;
        lVar19 = lVar19 + 8;
      }
      puVar14 = (undefined8 *)((long)param_1 + lVar19);
      puVar18 = puVar14 + 1;
      puVar20 = puVar16;
      if (lVar19 == 0) {
        while (puVar27 = puVar20, puVar25 = puVar27 + 1, puVar18 < puVar27 + 1) {
          iVar7 = (int)*puVar27;
          puVar25 = puVar27;
          if ((iVar7 < iVar10) ||
             ((puVar20 = puVar27 + -1, iVar7 <= iVar10 && ((int)((ulong)*puVar27 >> 0x20) < iVar13))
             )) break;
        }
      }
      else {
        do {
          puVar25 = puVar20;
          iVar7 = (int)*puVar25;
          if (iVar7 < iVar10) break;
          puVar20 = puVar25 + -1;
        } while ((iVar10 < iVar7) || (iVar13 <= (int)((ulong)*puVar25 >> 0x20)));
      }
      if (puVar18 < puVar25) {
        uVar24 = *puVar25;
        puVar20 = puVar18;
        puVar27 = puVar25;
        do {
          *puVar20 = uVar24;
          *puVar27 = uVar15;
          do {
            do {
              puVar14 = puVar20;
              puVar20 = puVar14 + 1;
              uVar15 = *puVar20;
            } while ((int)uVar15 < iVar10);
          } while (((int)uVar15 <= iVar10) && ((int)((ulong)uVar15 >> 0x20) < iVar13));
          puVar4 = puVar27 + -1;
          do {
            puVar27 = puVar4;
            uVar24 = *puVar27;
            if ((int)uVar24 < iVar10) break;
            puVar4 = puVar27 + -1;
          } while ((iVar10 < (int)uVar24) || (iVar13 <= (int)((ulong)uVar24 >> 0x20)));
        } while (puVar20 < puVar27);
      }
      if (puVar14 != param_1) {
        *param_1 = *puVar14;
      }
      *puVar14 = uVar12;
      if (puVar25 <= puVar18) {
        uVar11 = FUN_006bc50c(param_1,puVar14);
        uVar8 = FUN_006bc50c(puVar14 + 1,param_2);
        if ((uVar8 & 1) != 0) goto LAB_006bbf2c;
        puVar18 = puVar14 + 1;
        if ((uVar11 & 1) != 0) goto LAB_006bb72c;
      }
      FUN_006bb6fc(param_1,puVar14,param_3,param_4 & 1);
      param_4 = 0;
      puVar18 = puVar14 + 1;
      goto LAB_006bb72c;
    }
    iVar7 = (int)param_1[-1];
    if ((iVar7 < iVar10) || ((iVar7 <= iVar10 && ((int)((ulong)param_1[-1] >> 0x20) < iVar13))))
    goto LAB_006bb978;
    uVar15 = *puVar16;
    if ((iVar10 < (int)uVar15) ||
       ((iVar10 <= (int)uVar15 && (iVar13 < (int)((ulong)uVar15 >> 0x20))))) {
      puVar14 = param_1 + 1;
      do {
        puVar18 = puVar14;
        iVar7 = (int)*puVar18;
        if (iVar10 < iVar7) break;
        puVar14 = puVar18 + 1;
      } while ((iVar7 < iVar10) || ((int)((ulong)*puVar18 >> 0x20) <= iVar13));
    }
    else {
      puVar14 = param_1 + 1;
      while (puVar18 = puVar14, puVar18 < param_2) {
        iVar7 = (int)*puVar18;
        if ((iVar10 < iVar7) ||
           ((puVar14 = puVar18 + 1, iVar10 <= iVar7 && (iVar13 < (int)((ulong)*puVar18 >> 0x20)))))
        break;
      }
    }
    puVar14 = puVar16;
    puVar20 = param_2;
    if (puVar18 < param_2) {
      while ((iVar10 < (int)uVar15 ||
             ((puVar20 = puVar14, iVar10 <= (int)uVar15 && (iVar13 < (int)((ulong)uVar15 >> 0x20))))
             )) {
        uVar15 = puVar14[-1];
        puVar14 = puVar14 + -1;
      }
    }
    if (puVar18 < puVar20) {
      uVar15 = *puVar18;
      uVar24 = *puVar20;
      do {
        *puVar18 = uVar24;
        *puVar20 = uVar15;
        puVar14 = puVar18 + 1;
        do {
          puVar18 = puVar14;
          uVar15 = *puVar18;
          if (iVar10 < (int)uVar15) break;
          puVar14 = puVar18 + 1;
        } while (((int)uVar15 < iVar10) || ((int)((ulong)uVar15 >> 0x20) <= iVar13));
        do {
          do {
            puVar20 = puVar20 + -1;
            uVar24 = *puVar20;
          } while (iVar10 < (int)uVar24);
        } while ((iVar10 <= (int)uVar24) && (iVar13 < (int)((ulong)uVar24 >> 0x20)));
      } while (puVar18 < puVar20);
    }
    puVar14 = puVar18 + -1;
    if (puVar14 != param_1) {
      *param_1 = *puVar14;
    }
    param_4 = 0;
    *puVar14 = uVar12;
  } while( true );
LAB_006bc0f0:
  uVar12 = *puVar16;
  uVar15 = puVar16[1];
  iVar10 = (int)uVar15;
  iVar13 = (int)((ulong)uVar15 >> 0x20);
  if ((iVar10 < (int)uVar12) || ((iVar10 <= (int)uVar12 && (iVar13 < (int)((ulong)uVar12 >> 0x20))))
     ) {
    puVar16[1] = uVar12;
    puVar14 = param_1;
    lVar22 = lVar19;
    if (puVar16 != param_1) {
      do {
        uVar12 = ((undefined8 *)((long)param_1 + lVar22))[-1];
        if (((int)uVar12 <= iVar10) &&
           (((int)uVar12 < iVar10 || ((int)((ulong)uVar12 >> 0x20) <= iVar13)))) {
          puVar14 = (undefined8 *)((long)param_1 + lVar22);
          break;
        }
        lVar3 = lVar22 + -8;
        *(undefined8 *)((long)param_1 + lVar22) = uVar12;
        lVar22 = lVar3;
      } while (lVar3 != 0);
    }
    *puVar14 = uVar15;
  }
  puVar14 = puVar18 + 1;
  lVar19 = lVar19 + 8;
  puVar16 = puVar18;
  puVar18 = puVar14;
  if (puVar14 == param_2) {
    return;
  }
  goto LAB_006bc0f0;
LAB_006bc190:
  do {
    if ((long)uVar8 <= (long)uVar17) {
      uVar21 = uVar8 << 1 | 1;
      uVar1 = uVar8 * 2 + 2;
      puVar18 = param_1 + uVar21;
      if ((long)uVar1 < (long)uVar11) {
        uVar12 = puVar18[1];
        iVar10 = (int)*puVar18;
        iVar13 = (int)uVar12;
        if ((iVar10 < iVar13) ||
           ((iVar10 <= iVar13 && ((int)((ulong)*puVar18 >> 0x20) < (int)((ulong)uVar12 >> 0x20)))))
        {
          uVar21 = uVar1;
          puVar18 = puVar18 + 1;
        }
      }
      puVar16 = param_1 + uVar8;
      uVar15 = *puVar18;
      uVar12 = *puVar16;
      iVar10 = (int)uVar12;
      if ((iVar10 <= (int)uVar15) &&
         ((iVar13 = (int)((ulong)uVar12 >> 0x20), iVar10 < (int)uVar15 ||
          (iVar13 <= (int)((ulong)uVar15 >> 0x20))))) {
        while (puVar14 = puVar18, *puVar16 = uVar15, (long)uVar21 <= (long)uVar17) {
          uVar2 = uVar21 << 1 | 1;
          uVar1 = uVar21 * 2 + 2;
          puVar18 = param_1 + uVar2;
          uVar21 = uVar2;
          if ((long)uVar1 < (long)uVar11) {
            uVar15 = puVar18[1];
            iVar7 = (int)*puVar18;
            iVar9 = (int)uVar15;
            if ((iVar7 < iVar9) ||
               ((iVar7 <= iVar9 && ((int)((ulong)*puVar18 >> 0x20) < (int)((ulong)uVar15 >> 0x20))))
               ) {
              uVar21 = uVar1;
              puVar18 = puVar18 + 1;
            }
          }
          uVar15 = *puVar18;
          if (((int)uVar15 < iVar10) ||
             ((puVar16 = puVar14, (int)uVar15 <= iVar10 && ((int)((ulong)uVar15 >> 0x20) < iVar13)))
             ) break;
        }
        *puVar14 = uVar12;
      }
    }
    bVar5 = uVar8 != 0;
    uVar8 = uVar8 - 1;
  } while (bVar5);
  do {
    uVar12 = *param_1;
    puVar18 = param_1;
    uVar8 = 0;
    do {
      uVar1 = uVar8 << 1 | 1;
      uVar17 = uVar8 * 2 + 2;
      puVar16 = puVar18 + uVar8 + 1;
      puVar14 = puVar16;
      uVar21 = uVar1;
      if ((long)uVar17 < (long)uVar11) {
        puVar20 = puVar18 + uVar8 + 2;
        iVar10 = (int)puVar18[uVar8 + 1];
        iVar13 = (int)*puVar20;
        puVar14 = puVar20;
        uVar21 = uVar17;
        if (((iVar13 <= iVar10) && (puVar14 = puVar16, uVar21 = uVar1, iVar10 <= iVar13)) &&
           (puVar14 = puVar20, uVar21 = uVar17,
           (int)((ulong)*puVar20 >> 0x20) <= (int)((ulong)puVar18[uVar8 + 1] >> 0x20))) {
          puVar14 = puVar16;
          uVar21 = uVar1;
        }
      }
      *puVar18 = *puVar14;
      puVar18 = puVar14;
      uVar8 = uVar21;
    } while ((long)uVar21 <= (long)(uVar11 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar14 == param_2) {
      *puVar14 = uVar12;
    }
    else {
      lVar19 = (long)puVar14 + (8 - (long)param_1) >> 3;
      *puVar14 = *param_2;
      *param_2 = uVar12;
      uVar8 = lVar19 - 2;
      if (1 < lVar19) {
        uVar17 = uVar8 >> 1;
        uVar12 = *puVar14;
        uVar15 = param_1[uVar17];
        iVar10 = (int)uVar12;
        iVar13 = (int)((ulong)uVar12 >> 0x20);
        if (iVar10 <= (int)uVar15) {
          bVar5 = false;
          bVar6 = false;
          if ((int)uVar15 <= iVar10) {
            iVar7 = (int)((ulong)uVar15 >> 0x20);
            bVar6 = SBORROW4(iVar7,iVar13);
            bVar5 = iVar7 - iVar13 < 0;
          }
          if (bVar5 == bVar6) goto LAB_006bc2ac;
        }
        *puVar14 = uVar15;
        puVar18 = param_1 + uVar17;
        while (1 < uVar8) {
          uVar8 = uVar17 - 1;
          uVar17 = uVar8 >> 1;
          uVar15 = param_1[uVar17];
          if (iVar10 <= (int)uVar15) {
            bVar5 = false;
            bVar6 = false;
            if ((int)uVar15 <= iVar10) {
              iVar7 = (int)((ulong)uVar15 >> 0x20);
              bVar6 = SBORROW4(iVar7,iVar13);
              bVar5 = iVar7 - iVar13 < 0;
            }
            if (bVar5 == bVar6) break;
          }
          *puVar18 = uVar15;
          puVar18 = param_1 + uVar17;
        }
        *puVar18 = uVar12;
      }
    }
LAB_006bc2ac:
    bVar5 = (long)uVar11 < 3;
    uVar11 = uVar11 - 1;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_006bbf2c:
  param_2 = puVar14;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB_006bb724;
}


// ===== 006bc50c  FUN_006bc50c =====

bool FUN_006bc50c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      uVar9 = param_2[-1];
      uVar6 = *param_1;
      if ((int)uVar6 <= (int)uVar9) {
        if ((int)uVar6 < (int)uVar9) {
          return true;
        }
        if ((int)((ulong)uVar6 >> 0x20) <= (int)((ulong)uVar9 >> 0x20)) {
          return true;
        }
      }
      *param_1 = uVar9;
      param_2[-1] = uVar6;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      uVar6 = *param_1;
      uVar9 = param_1[1];
      iVar4 = (int)uVar6;
      iVar8 = (int)uVar9;
      iVar5 = (int)((ulong)uVar6 >> 0x20);
      iVar11 = (int)((ulong)uVar9 >> 0x20);
      if ((iVar8 < iVar4) || ((iVar8 <= iVar4 && (iVar11 < iVar5)))) {
        uVar13 = param_2[-1];
        if (((int)uVar13 < iVar8) ||
           (((int)uVar13 <= iVar8 && ((int)((ulong)uVar13 >> 0x20) < iVar11)))) {
          *param_1 = uVar13;
          param_2[-1] = uVar6;
          return true;
        }
        *param_1 = uVar9;
        param_1[1] = uVar6;
        uVar9 = param_2[-1];
        if (((int)uVar9 < iVar4) || (((int)uVar9 <= iVar4 && ((int)((ulong)uVar9 >> 0x20) < iVar5)))
           ) {
          param_1[1] = uVar9;
          param_2[-1] = uVar6;
          return true;
        }
      }
      else {
        uVar6 = param_2[-1];
        if (((int)uVar6 < iVar8) ||
           (((int)uVar6 <= iVar8 && ((int)((ulong)uVar6 >> 0x20) < iVar11)))) {
          param_1[1] = uVar6;
          param_2[-1] = uVar9;
          uVar6 = *param_1;
          uVar9 = param_1[1];
          if (((int)uVar9 < (int)uVar6) ||
             (((int)uVar9 <= (int)uVar6 &&
              ((int)((ulong)uVar9 >> 0x20) < (int)((ulong)uVar6 >> 0x20))))) {
            *param_1 = uVar9;
            param_1[1] = uVar6;
            return true;
          }
        }
      }
      return true;
    }
    if (uVar2 == 4) {
      FUN_006bc988(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar2 == 5) {
      FUN_006bc988(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      uVar6 = param_2[-1];
      uVar9 = param_1[3];
      if ((int)uVar9 <= (int)uVar6) {
        if ((int)uVar9 < (int)uVar6) {
          return true;
        }
        if ((int)((ulong)uVar9 >> 0x20) <= (int)((ulong)uVar6 >> 0x20)) {
          return true;
        }
      }
      param_1[3] = uVar6;
      param_2[-1] = uVar9;
      uVar6 = param_1[2];
      uVar9 = param_1[3];
      iVar5 = (int)uVar9;
      iVar4 = (int)((ulong)uVar9 >> 0x20);
      if ((int)uVar6 <= iVar5) {
        if ((int)uVar6 < iVar5) {
          return true;
        }
        if ((int)((ulong)uVar6 >> 0x20) <= iVar4) {
          return true;
        }
      }
      uVar13 = param_1[1];
      param_1[2] = uVar9;
      param_1[3] = uVar6;
      if ((int)uVar13 <= iVar5) {
        if ((int)uVar13 < iVar5) {
          return true;
        }
        if ((int)((ulong)uVar13 >> 0x20) <= iVar4) {
          return true;
        }
      }
      uVar6 = *param_1;
      param_1[1] = uVar9;
      param_1[2] = uVar13;
      if ((int)uVar6 <= iVar5) {
        if ((int)uVar6 < iVar5) {
          return true;
        }
        if ((int)((ulong)uVar6 >> 0x20) <= iVar4) {
          return true;
        }
      }
      *param_1 = uVar9;
      param_1[1] = uVar6;
      return true;
    }
  }
  puVar3 = param_1 + 2;
  uVar6 = *param_1;
  puVar7 = param_1 + 1;
  uVar9 = *puVar7;
  iVar5 = (int)uVar6;
  iVar4 = (int)uVar9;
  iVar8 = (int)((ulong)uVar6 >> 0x20);
  iVar11 = (int)((ulong)uVar9 >> 0x20);
  if ((iVar4 < iVar5) || ((iVar4 <= iVar5 && (iVar11 < iVar8)))) {
    uVar13 = *puVar3;
    iVar12 = (int)uVar13;
    if ((iVar12 < iVar4) ||
       ((iVar14 = (int)((ulong)uVar13 >> 0x20), iVar12 <= iVar4 && (iVar14 < iVar11)))) {
      *param_1 = uVar13;
      puVar7 = puVar3;
    }
    else {
      *param_1 = uVar9;
      param_1[1] = uVar6;
      if ((iVar5 <= iVar12) && ((iVar5 < iVar12 || (iVar8 <= iVar14)))) goto LAB_006bc740;
      *puVar7 = uVar13;
      puVar7 = puVar3;
    }
  }
  else {
    uVar13 = *puVar3;
    iVar12 = (int)uVar13;
    iVar14 = (int)((ulong)uVar13 >> 0x20);
    if ((iVar4 <= iVar12) && ((iVar4 < iVar12 || (iVar11 <= iVar14)))) goto LAB_006bc740;
    *puVar7 = uVar13;
    *puVar3 = uVar9;
    if ((iVar5 <= iVar12) && ((iVar5 < iVar12 || (iVar8 <= iVar14)))) goto LAB_006bc740;
    *param_1 = uVar13;
  }
  *puVar7 = uVar6;
LAB_006bc740:
  if (param_1 + 3 != param_2) {
    lVar10 = 0;
    iVar5 = 0;
    puVar7 = param_1 + 3;
    do {
      uVar6 = *puVar7;
      uVar9 = *puVar3;
      iVar8 = (int)uVar6;
      iVar4 = (int)((ulong)uVar6 >> 0x20);
      if ((iVar8 < (int)uVar9) || ((iVar8 <= (int)uVar9 && (iVar4 < (int)((ulong)uVar9 >> 0x20)))))
      {
        *puVar7 = uVar9;
        lVar16 = lVar10;
        do {
          uVar9 = *(undefined8 *)((long)param_1 + lVar16 + 8);
          if (((int)uVar9 <= iVar8) &&
             (((int)uVar9 < iVar8 || ((int)((ulong)uVar9 >> 0x20) <= iVar4)))) {
            *(undefined8 *)((long)param_1 + lVar16 + 0x10) = uVar6;
            goto joined_r0x006bc7f0;
          }
          lVar15 = lVar16 + -8;
          *(undefined8 *)((long)param_1 + lVar16 + 0x10) = uVar9;
          lVar16 = lVar15;
        } while (lVar15 != -0x10);
        *param_1 = uVar6;
joined_r0x006bc7f0:
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return puVar7 + 1 == param_2;
        }
      }
      puVar1 = puVar7 + 1;
      lVar10 = lVar10 + 8;
      puVar3 = puVar7;
      puVar7 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}


// ===== 006bc988  FUN_006bc988 =====

void FUN_006bc988(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar2 = *param_2;
  uVar4 = *param_1;
  iVar1 = (int)uVar2;
  iVar3 = (int)uVar4;
  iVar5 = (int)(uVar2 >> 0x20);
  iVar8 = (int)(uVar4 >> 0x20);
  if ((iVar1 < iVar3) || ((iVar1 <= iVar3 && (iVar5 < iVar8)))) {
    uVar6 = *param_3;
    if (((int)uVar6 < iVar1) || (((int)uVar6 <= iVar1 && ((int)(uVar6 >> 0x20) < iVar5)))) {
      *param_1 = uVar6;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar4;
      uVar6 = *param_3;
      if ((iVar3 <= (int)uVar6) &&
         ((uVar2 = uVar6, iVar3 < (int)uVar6 || (iVar8 <= (int)(uVar6 >> 0x20)))))
      goto LAB_006bc9e8;
      *param_2 = uVar6;
    }
    *param_3 = uVar4;
    uVar6 = uVar4;
    uVar2 = uVar4 & 0xffffffff;
  }
  else {
    uVar6 = *param_3;
    if (((int)uVar6 < iVar1) || (((int)uVar6 <= iVar1 && ((int)(uVar6 >> 0x20) < iVar5)))) {
      *param_2 = uVar6;
      *param_3 = uVar2;
      uVar4 = *param_2;
      uVar7 = *param_1;
      if (((int)uVar4 < (int)uVar7) ||
         ((uVar6 = uVar2, uVar2 = uVar2 & 0xffffffff, (int)uVar4 <= (int)uVar7 &&
          ((int)(uVar4 >> 0x20) < (int)(uVar7 >> 0x20))))) {
        *param_1 = uVar4;
        *param_2 = uVar7;
        uVar6 = *param_3;
        uVar2 = uVar6 & 0xffffffff;
      }
    }
    else {
      uVar2 = uVar6 & 0xffffffff;
    }
  }
LAB_006bc9e8:
  uVar4 = *param_4;
  if (((int)uVar4 < (int)uVar2) ||
     (((int)uVar4 <= (int)uVar2 && ((int)(uVar4 >> 0x20) < (int)(uVar6 >> 0x20))))) {
    *param_3 = uVar4;
    *param_4 = uVar6;
    uVar2 = *param_3;
    uVar4 = *param_2;
    if (((int)uVar2 < (int)uVar4) ||
       (((int)uVar2 <= (int)uVar4 && ((int)(uVar2 >> 0x20) < (int)(uVar4 >> 0x20))))) {
      *param_2 = uVar2;
      *param_3 = uVar4;
      uVar2 = *param_2;
      uVar4 = *param_1;
      if (((int)uVar2 < (int)uVar4) ||
         (((int)uVar2 <= (int)uVar4 && ((int)(uVar2 >> 0x20) < (int)(uVar4 >> 0x20))))) {
        *param_1 = uVar2;
        *param_2 = uVar4;
      }
    }
  }
  return;
}


// ===== 006bcb24  FUN_006bcb24 =====

void FUN_006bcb24(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006bcb24(param_1,*param_2);
    FUN_006bcb24(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006bcb74  FUN_006bcb74 =====

long * FUN_006bcb74(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_006bcbcc;
LAB_006bcc00:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_006bcbe4;
LAB_006bcc18:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_006bcbec;
LAB_006bcc24:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_006bcc00;
LAB_006bcbcc:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_006bcc18;
LAB_006bcbe4:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_006bcc24;
LAB_006bcbec:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 006bcc9c  FUN_006bcc9c =====

long * FUN_006bcc9c(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x28);
  plVar12 = param_1 + 1;
  plVar9 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar12 = plVar9;
        __s2 = (void *)((long)plVar12 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
        if ((*(byte *)(plVar12 + 4) & 1) != 0) {
          __s2 = (void *)plVar12[6];
          uVar3 = plVar12[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(pbVar10,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,pbVar10,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar11 = *(long *)(lVar11 + 0x28);
          plVar9 = plVar12;
          goto joined_r0x006bce40;
        }
        plVar9 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_006bcd98;
        }
      }
      plVar9 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_006bcd98:
  plVar9 = (long *)FUN_00759c3c(0x40);
  pbVar10 = (byte *)*param_4;
  if ((*pbVar10 & 1) == 0) {
    lVar15 = *(long *)(pbVar10 + 8);
    lVar14 = *(long *)pbVar10;
    plVar9[6] = *(long *)(pbVar10 + 0x10);
    plVar9[5] = lVar15;
    plVar9[4] = lVar14;
  }
  else {
                    /* try { // try from 006bcdd0 to 006bcdd7 has its CatchHandler @ 006bce68 */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  plVar9[7] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar12 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar12 = (long *)*plVar13;
  }
  uVar6 = FUN_00328410(param_1[1],plVar12);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x006bce40:
  if (lVar11 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 006bce90  FUN_006bce90 =====

void FUN_006bce90(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x20) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x30));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006bcee0  FUN_006bcee0 =====

void FUN_006bcee0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006bcee0(param_1,*param_2);
    FUN_006bcee0(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      free((void *)param_2[7]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006bcf30  FUN_006bcf30 =====

void FUN_006bcf30(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006bcf30(param_1,*param_2);
    FUN_006bcf30(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006bcf80  FUN_006bcf80 =====

undefined1  [16] FUN_006bcf80(long *param_1,byte *param_2,long *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  long lVar2;
  byte *__s1;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  plVar10 = param_1 + 1;
  plVar9 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar10 = plVar9;
        __s2 = (void *)((long)plVar10 + 0x21);
        uVar5 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
        if ((*(byte *)(plVar10 + 4) & 1) != 0) {
          __s2 = (void *)plVar10[6];
          uVar5 = plVar10[5];
        }
        __n = uVar5;
        if (uVar1 <= uVar5) {
          __n = uVar1;
        }
        iVar6 = memcmp(__s1,__s2,__n);
        bVar4 = uVar1 < uVar5;
        if (iVar6 != 0) {
          bVar4 = iVar6 < 0;
        }
        if (bVar4) break;
        iVar6 = memcmp(__s2,__s1,__n);
        bVar4 = uVar5 < uVar1;
        if (iVar6 != 0) {
          bVar4 = iVar6 < 0;
        }
        if (!bVar4) {
          uVar8 = 0;
          goto LAB_006bd0d4;
        }
        plVar9 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar11 = plVar10 + 1;
          goto LAB_006bd068;
        }
      }
      plVar9 = (long *)*plVar10;
      plVar11 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
LAB_006bd068:
  plVar7 = (long *)FUN_00759c3c(0x40);
  lVar2 = param_3[2];
  lVar3 = param_3[3];
  lVar13 = param_3[1];
  lVar12 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar7[5] = lVar13;
  plVar7[4] = lVar12;
  plVar7[6] = lVar2;
  plVar7[7] = lVar3;
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = (long)plVar10;
  *plVar11 = (long)plVar7;
  plVar9 = plVar7;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar9 = (long *)*plVar11;
  }
  FUN_00328410(param_1[1],plVar9);
  uVar8 = 1;
  param_1[2] = param_1[2] + 1;
  plVar10 = plVar7;
LAB_006bd0d4:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = plVar10;
  return auVar14;
}


// ===== 006bd0f0  FUN_006bd0f0 =====

long * FUN_006bd0f0(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_006bd148;
LAB_006bd17c:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_006bd160;
LAB_006bd194:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_006bd168;
LAB_006bd1a0:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_006bd17c;
LAB_006bd148:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_006bd194;
LAB_006bd160:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_006bd1a0;
LAB_006bd168:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 006bd218  FUN_006bd218 =====

void FUN_006bd218(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_006bd218(param_1,*param_2);
    FUN_006bd218(param_1,param_2[1]);
    pvVar1 = (void *)param_2[7];
    if (pvVar1 != (void *)0x0) {
      param_2[8] = pvVar1;
      free(pvVar1);
    }
    pvVar1 = (void *)param_2[4];
    if (pvVar1 != (void *)0x0) {
      param_2[5] = pvVar1;
      free(pvVar1);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006bd278  FUN_006bd278 =====

void FUN_006bd278(undefined8 param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_006bd278(param_1,*param_2);
    FUN_006bd278(param_1,param_2[1]);
    __ptr = (void *)param_2[4];
    if (__ptr != (void *)0x0) {
      param_2[5] = __ptr;
      free(__ptr);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 006bd2c8  FUN_006bd2c8 =====

void FUN_006bd2c8(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  size_t __n;
  long *plVar3;
  void *__dest;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long *local_70;
  long *plStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar13 = param_1 + 1;
  plVar3 = (long *)*plVar13;
  plVar5 = plVar13;
  plVar14 = plVar13;
  if (plVar3 == (long *)0x0) {
LAB_006bd428:
    auVar15 = FUN_00759c3c(0x40,param_2);
    plVar3 = auVar15._0_8_;
    param_4 = (undefined8 *)*param_4;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar12 = plVar3 + 4;
    *plVar12 = 0;
    pvVar7 = (void *)*param_4;
    local_60 = 0;
    __n = param_4[1] - (long)pvVar7;
    local_70 = plVar3;
    plStack_68 = plVar13;
    if (__n != 0) {
      if ((long)__n < 0) {
        if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 006bd550 to 006bd557 has its CatchHandler @ 006bd558 */
          uVar4 = FUN_004b6308(plVar12);
                    /* catch() { ... } // from try @ 006bd45c with catch @ 006bd558
                       catch() { ... } // from try @ 006bd550 with catch @ 006bd558 */
          pvVar7 = (void *)*plVar12;
          if (pvVar7 != (void *)0x0) {
            plVar3[5] = (long)pvVar7;
            free(pvVar7);
          }
          auVar15 = FUN_006bd590(&local_70);
          if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar4);
          }
        }
        goto LAB_006bd53c;
      }
                    /* try { // try from 006bd45c to 006bd463 has its CatchHandler @ 006bd558 */
      __dest = (void *)FUN_00759c3c(__n);
      plVar3[4] = (long)__dest;
      plVar3[5] = (long)__dest;
      plVar3[6] = (long)__dest + __n;
      memcpy(__dest,pvVar7,__n);
      plVar3[5] = (long)__dest + __n;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)plVar5;
    *plVar14 = (long)plVar3;
    plVar5 = (long *)*param_1;
    *(undefined4 *)(plVar3 + 7) = 0;
    if (*plVar5 != 0) {
      *param_1 = *plVar5;
      plVar3 = (long *)*plVar14;
    }
    FUN_00328410(param_1[1],plVar3);
    auVar15._8_8_ = 1;
    auVar15._0_8_ = local_70;
    param_1[2] = param_1[2] + 1;
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
  }
  else {
    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    if (piVar1 != piVar2) {
LAB_006bd39c:
      plVar5 = plVar3;
      piVar10 = (int *)plVar5[4];
      piVar9 = piVar1;
      piVar11 = piVar10;
      while (piVar8 = piVar1, piVar11 != (int *)plVar5[5]) {
        if (piVar9 == piVar2) {
LAB_006bd390:
          plVar3 = (long *)*plVar5;
          plVar14 = plVar5;
          if ((long *)*plVar5 != (long *)0x0) goto LAB_006bd39c;
          goto LAB_006bd428;
        }
        if (*piVar9 < *piVar11) goto LAB_006bd390;
        if (*piVar11 < *piVar9) break;
        piVar9 = piVar9 + 1;
        piVar11 = piVar11 + 1;
      }
      do {
        piVar9 = piVar8 + 1;
        if (piVar10 == (int *)plVar5[5]) goto LAB_006bd41c;
        if (*piVar10 < *piVar8) goto LAB_006bd41c;
        if ((*piVar8 < *piVar10) || (piVar10 = piVar10 + 1, piVar8 = piVar9, piVar9 == piVar2)) {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = plVar5;
          if (*(long *)(lVar6 + 0x28) == local_58) {
            return;
          }
          goto LAB_006bd53c;
        }
      } while( true );
    }
    piVar9 = (int *)plVar3[4];
    piVar10 = (int *)plVar3[5];
    piVar11 = piVar1;
    plVar5 = plVar3;
    if (piVar9 == piVar10) {
      lVar6 = *(long *)(lVar6 + 0x28);
    }
    else {
      do {
        while (piVar8 = piVar9 + 1, piVar11 != piVar2) {
          if (*piVar11 < *piVar9) break;
          plVar3 = plVar5;
          if ((*piVar9 < *piVar11) || (piVar11 = piVar11 + 1, piVar9 = piVar8, piVar8 == piVar10))
          goto LAB_006bd4fc;
        }
        plVar3 = (long *)*plVar5;
        plVar14 = plVar5;
        if (plVar3 == (long *)0x0) goto LAB_006bd428;
        piVar9 = (int *)plVar3[4];
        piVar10 = (int *)plVar3[5];
        param_2 = (long *)0x0;
        piVar11 = piVar1;
        plVar5 = plVar3;
      } while (piVar9 != piVar10);
LAB_006bd4fc:
      lVar6 = *(long *)(lVar6 + 0x28);
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = plVar3;
    if (lVar6 == local_58) {
      return;
    }
  }
LAB_006bd53c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar15._0_8_,auVar15._8_8_);
LAB_006bd41c:
  plVar3 = (long *)plVar5[1];
  if ((long *)plVar5[1] == (long *)0x0) {
    plVar14 = plVar5 + 1;
    goto LAB_006bd428;
  }
  goto LAB_006bd39c;
}


// ===== 006bd590  FUN_006bd590 =====

void FUN_006bd590(undefined8 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  
  __ptr_00 = (void *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') &&
       (__ptr = *(void **)((long)__ptr_00 + 0x20), __ptr != (void *)0x0)) {
      *(void **)((long)__ptr_00 + 0x28) = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 006bd5dc  FUN_006bd5dc =====

void FUN_006bd5dc(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  size_t __n;
  long *plVar3;
  void *__dest;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long *local_70;
  long *plStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar12 = param_1 + 1;
  plVar3 = (long *)*plVar12;
  plVar13 = plVar12;
  plVar14 = plVar12;
  if (plVar3 == (long *)0x0) {
LAB_006bd73c:
    auVar15 = FUN_00759c3c(0x50,param_2);
    plVar3 = auVar15._0_8_;
    param_4 = (undefined8 *)*param_4;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar11 = plVar3 + 4;
    *plVar11 = 0;
    pvVar6 = (void *)*param_4;
    local_60 = 0;
    __n = param_4[1] - (long)pvVar6;
    local_70 = plVar3;
    plStack_68 = plVar12;
    if (__n != 0) {
      if ((long)__n < 0) {
        if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 006bd868 to 006bd86f has its CatchHandler @ 006bd870 */
          uVar4 = FUN_004b6308(plVar11);
                    /* catch() { ... } // from try @ 006bd770 with catch @ 006bd870
                       catch() { ... } // from try @ 006bd868 with catch @ 006bd870 */
          pvVar6 = (void *)*plVar11;
          if (pvVar6 != (void *)0x0) {
            plVar3[5] = (long)pvVar6;
            free(pvVar6);
          }
          auVar15 = FUN_006bd8a8(&local_70);
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar4);
          }
        }
        goto LAB_006bd854;
      }
                    /* try { // try from 006bd770 to 006bd777 has its CatchHandler @ 006bd870 */
      __dest = (void *)FUN_00759c3c(__n);
      plVar3[4] = (long)__dest;
      plVar3[5] = (long)__dest;
      plVar3[6] = (long)__dest + __n;
      memcpy(__dest,pvVar6,__n);
      plVar3[5] = (long)__dest + __n;
    }
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)plVar13;
    *plVar14 = (long)plVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      plVar3 = (long *)*plVar14;
    }
    FUN_00328410(param_1[1],plVar3);
    auVar15._8_8_ = 1;
    auVar15._0_8_ = local_70;
    param_1[2] = param_1[2] + 1;
    if (*(long *)(lVar5 + 0x28) == local_58) {
      return;
    }
  }
  else {
    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    if (piVar1 != piVar2) {
LAB_006bd6b0:
      plVar13 = plVar3;
      piVar9 = (int *)plVar13[4];
      piVar8 = piVar1;
      piVar10 = piVar9;
      while (piVar7 = piVar1, piVar10 != (int *)plVar13[5]) {
        if (piVar8 == piVar2) {
LAB_006bd6a4:
          plVar3 = (long *)*plVar13;
          plVar14 = plVar13;
          if ((long *)*plVar13 != (long *)0x0) goto LAB_006bd6b0;
          goto LAB_006bd73c;
        }
        if (*piVar8 < *piVar10) goto LAB_006bd6a4;
        if (*piVar10 < *piVar8) break;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
      do {
        piVar8 = piVar7 + 1;
        if (piVar9 == (int *)plVar13[5]) goto LAB_006bd730;
        if (*piVar9 < *piVar7) goto LAB_006bd730;
        if ((*piVar7 < *piVar9) || (piVar9 = piVar9 + 1, piVar7 = piVar8, piVar8 == piVar2)) {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = plVar13;
          if (*(long *)(lVar5 + 0x28) == local_58) {
            return;
          }
          goto LAB_006bd854;
        }
      } while( true );
    }
    piVar8 = (int *)plVar3[4];
    piVar9 = (int *)plVar3[5];
    piVar10 = piVar1;
    plVar13 = plVar3;
    if (piVar8 == piVar9) {
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    else {
      do {
        while (piVar7 = piVar8 + 1, piVar10 != piVar2) {
          if (*piVar10 < *piVar8) break;
          plVar3 = plVar13;
          if ((*piVar8 < *piVar10) || (piVar10 = piVar10 + 1, piVar8 = piVar7, piVar7 == piVar9))
          goto LAB_006bd814;
        }
        plVar3 = (long *)*plVar13;
        plVar14 = plVar13;
        if (plVar3 == (long *)0x0) goto LAB_006bd73c;
        piVar8 = (int *)plVar3[4];
        piVar9 = (int *)plVar3[5];
        param_2 = (long *)0x0;
        piVar10 = piVar1;
        plVar13 = plVar3;
      } while (piVar8 != piVar9);
LAB_006bd814:
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = plVar3;
    if (lVar5 == local_58) {
      return;
    }
  }
LAB_006bd854:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar15._0_8_,auVar15._8_8_);
LAB_006bd730:
  plVar3 = (long *)plVar13[1];
  if ((long *)plVar13[1] == (long *)0x0) {
    plVar14 = plVar13 + 1;
    goto LAB_006bd73c;
  }
  goto LAB_006bd6b0;
}


// ===== 006bd8a8  FUN_006bd8a8 =====

void FUN_006bd8a8(undefined8 *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      pvVar1 = *(void **)((long)__ptr + 0x38);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)__ptr + 0x40) = pvVar1;
        free(pvVar1);
      }
      pvVar1 = *(void **)((long)__ptr + 0x20);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)__ptr + 0x28) = pvVar1;
        free(pvVar1);
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 006bd904  FUN_006bd904 =====

void FUN_006bd904(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = param_4 - param_5;
  if (iVar4 != 0 && param_5 <= (int)param_4) {
    uVar3 = *param_1;
    puVar5 = param_2 + param_5;
    do {
      uVar1 = FUN_006d218c(uVar3);
      iVar4 = iVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
  }
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    do {
      FUN_006bd97c(*param_3,*param_2);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


// ===== 006bd97c  FUN_006bd97c =====

void FUN_006bd97c(undefined8 param_1,undefined8 param_2)

{
  FUN_006cff1c(param_2,param_1);
  return;
}


// ===== 006bd98c  FUN_006bd98c =====

void FUN_006bd98c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006bd998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(*(undefined8 *)((undefined8 *)*param_1)[1]);
  return;
}


// ===== 006bd99c  FUN_006bd99c =====

void FUN_006bd99c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006bd9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(*(undefined8 *)((undefined8 *)*param_1)[1]);
  return;
}


// ===== 006bd9ac  FUN_006bd9ac =====

void FUN_006bd9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)(*(undefined8 **)*param_1)[1];
  lVar6 = *(long *)(*(long *)**(undefined8 **)*param_1 + 0x10);
  if ((*(byte *)(lVar6 + 2) & 1) == 0) {
    FUN_00675e64(auStack_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/descriptor.cc"
                 ,0x2087);
                    /* try { // try from 006bda04 to 006bda17 has its CatchHandler @ 006bdaa4 */
    uVar3 = FUN_00675a58(auStack_78,"CHECK failed: file->finished_building_: ");
                    /* try { // try from 006bda18 to 006bda1f has its CatchHandler @ 006bdaa0 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(auStack_78);
  }
  lVar7 = puVar1[1];
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  sVar4 = strlen((char *)(lVar7 + 8));
  if ((long)sVar4 < 0) {
    FUN_00676318(sVar4,"string length exceeds max size");
  }
  pcVar5 = (char *)FUN_006af12c(uVar3,lVar7 + 8,sVar4,0);
  if (*pcVar5 != '\x01') {
    pcVar5 = (char *)0x0;
  }
  *puVar1 = pcVar5;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006bdacc  FUN_006bdacc =====

undefined * FUN_006bdacc(void)

{
  return &DAT_007aaa00;
}


// ===== 006bdad8  FUN_006bdad8 =====

undefined8 FUN_006bdad8(void)

{
  FUN_00684e4c(PTR_DAT_007a3330,0);
  return DAT_007aeba0;
}


// ===== 006bdb00  FUN_006bdb00 =====

void FUN_006bdb00(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3338;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006bdb2c  FUN_006bdb2c =====

void FUN_006bdb2c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006bdb4c to 006bdb4f has its CatchHandler @ 006bdbb4 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[4] != 0) && (param_1[2] == 0)) {
                    /* try { // try from 006bdb68 to 006bdb6b has its CatchHandler @ 006bdbb0 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006bdbb8  FUN_006bdbb8 =====

void FUN_006bdbb8(void *param_1)

{
  FUN_006bdb2c();
  free(param_1);
  return;
}


// ===== 006bdbdc  FUN_006bdbdc =====

void FUN_006bdbdc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 006bdbe4  FUN_006bdbe4 =====

void FUN_006bdbe4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar1 = puVar1 + 1;
      FUN_006be28c(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006bdc4c  FUN_006bdc4c =====

byte * FUN_006bdc4c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        return pbVar4;
      }
      auVar6 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar4 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_006bdc9c;
      }
      auVar6 = FUN_0066fe50(param_2);
      uVar3 = auVar6._8_4_;
    }
    else {
LAB_006bdc9c:
      auVar6._8_4_ = uVar3;
      auVar6._0_8_ = pbVar4;
      auVar6._12_4_ = 0;
    }
    param_2 = auVar6._0_8_;
    if (uVar3 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == (int *)0x0) {
LAB_006bdd38:
          uVar2 = FUN_006d168c(*(undefined8 *)(param_1 + 0x10));
          uVar2 = FUN_00675990(param_1 + 0x10,uVar2);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar2,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          if (*piVar5 <= iVar1) goto LAB_006bdd38;
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      uVar3 = auVar6._8_4_;
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        if (param_2 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar3 - 1;
          return param_2;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar2 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,uVar2,param_2,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,
                                       param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
  } while( true );
}


// ===== 006bde44  FUN_006bde44 =====

undefined8 FUN_006bde44(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(1,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


// ===== 006bded4  FUN_006bded4 =====

undefined4 FUN_006bded4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006bdedc  FUN_006bdedc =====

void FUN_006bdedc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = lVar2 << 3;
    do {
      lVar1 = FUN_006bf528(*puVar3);
      lVar4 = lVar4 + -8;
      lVar2 = lVar1 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x28);
  return;
}


// ===== 006bdf60  FUN_006bdf60 =====

void FUN_006bdf60(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar3 = FUN_00675710(param_1 + 0x10,iVar1);
    FUN_006d251c(param_1 + 0x10,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    iVar2 = **(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18) + iVar1;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x20) = iVar1;
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006be008  FUN_006be008 =====

undefined ** FUN_006be008(void)

{
  return &PTR_FUN_0079a628;
}


// ===== 006be014  FUN_006be014 =====

bool FUN_006be014(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  do {
    iVar1 = (int)uVar3;
    if (iVar1 < 1) break;
    uVar2 = FUN_006bfd88(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 8));
    uVar3 = uVar3 - 1;
  } while ((uVar2 & 1) != 0);
  return iVar1 < 1;
}


// ===== 006be068  FUN_006be068 =====

void FUN_006be068(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aebc0);
  return;
}


// ===== 006be080  FUN_006be080 =====

void FUN_006be080(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3348;
  param_1[3] = param_2;
  param_1[4] = 0;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x15] = param_2;
  param_1[0x16] = (long)puVar2;
  param_1[0x17] = (long)puVar2;
  param_1[0x18] = (long)puVar2;
  return;
}


// ===== 006be0e4  FUN_006be0e4 =====

void FUN_006be0e4(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006be104 to 006be113 has its CatchHandler @ 006be158 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006be15c(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006be15c  FUN_006be15c =====

void FUN_006be15c(undefined **param_1)

{
  undefined *puVar1;
  
  FUN_00675290(param_1 + 3);
  if ((param_1[8] != (undefined *)0x0) && (param_1[6] == (undefined *)0x0)) {
                    /* try { // try from 006be188 to 006be18b has its CatchHandler @ 006be25c */
    FUN_00675910();
  }
  if ((param_1[0xb] != (undefined *)0x0) && (param_1[9] == (undefined *)0x0)) {
                    /* try { // try from 006be1a0 to 006be1a3 has its CatchHandler @ 006be258 */
    FUN_00675910();
  }
  if ((param_1[0xe] != (undefined *)0x0) && (param_1[0xc] == (undefined *)0x0)) {
                    /* try { // try from 006be1b8 to 006be1bb has its CatchHandler @ 006be254 */
    FUN_00675910();
  }
  if ((param_1[0x11] != (undefined *)0x0) && (param_1[0xf] == (undefined *)0x0)) {
                    /* try { // try from 006be1d0 to 006be1d3 has its CatchHandler @ 006be250 */
    FUN_00675910();
  }
  FUN_00673a60(param_1 + 0x12);
  FUN_00673a60(param_1 + 0x14);
  FUN_00663a20(param_1 + 0x16);
  FUN_00663a20(param_1 + 0x17);
  FUN_00663a20(param_1 + 0x18);
  if (param_1 != &PTR_PTR_FUN_007aa178) {
    puVar1 = param_1[0x19];
    if (puVar1 != (undefined *)0x0) {
      FUN_006c88e4(puVar1);
      free(puVar1);
    }
    puVar1 = param_1[0x1a];
    if (puVar1 != (undefined *)0x0) {
      FUN_006d0150(puVar1);
      free(puVar1);
      return;
    }
  }
  return;
}


// ===== 006be260  FUN_006be260 =====

void FUN_006be260(void *param_1)

{
  FUN_006be0e4();
  free(param_1);
  return;
}


// ===== 006be284  FUN_006be284 =====

void FUN_006be284(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006be28c  FUN_006be28c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006be28c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    do {
      while (pbVar4 = (byte *)*puVar3, (*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
        if (uVar2 == 0) goto LAB_006be2ec;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
LAB_006be2ec:
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c11a8(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c5628(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c70d4(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c3258(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_006be4b8(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0xd0);
      uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        puVar3 = *(undefined8 **)(lVar5 + 0x20);
        do {
          puVar3 = puVar3 + 1;
          FUN_006cf3e8(*puVar3);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar5 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006be4b8  FUN_006be4b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006be4b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  
  FUN_006667cc(param_1 + 0x10);
  uVar4 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar2 = puVar2 + 1;
      FUN_006ce578(*puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
  }
  if ((uVar1 & 0xfc00) != 0) {
    *(undefined2 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if ((uVar1 & 0xf0000) != 0) {
    *(undefined2 *)(param_1 + 0x9e) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 1;
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 006be738  FUN_006be738 =====

void FUN_006be738(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar1 = puVar1 + 1;
      FUN_006cf3e8(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006be7a0  FUN_006be7a0 =====

byte * FUN_006be7a0(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong *puVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  
  puVar7 = PTR_PTR_007a2ea8;
  puVar6 = PTR_FUN_007a2ca8;
LAB_006be7f4:
  if ((byte *)*param_3 <= param_2) {
    iVar2 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar2) {
      if (param_3[2] == 0 && 0 < iVar2) {
        return (byte *)0x0;
      }
      return param_2;
    }
    auVar18 = FUN_0066f53c(param_3,iVar2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar18._0_8_;
    if ((auVar18 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar16 = param_2 + 1;
  uVar14 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar14 = (uVar14 + (uint)*pbVar16 * 0x80) - 0x80;
    if (-1 < (char)*pbVar16) {
      pbVar16 = param_2 + 2;
      goto LAB_006be828;
    }
    auVar18 = FUN_0066fe50(param_2);
    uVar14 = (uint)(auVar18._8_8_ >> 3) & 0x1fffffff;
    auVar3 = auVar18;
    if (6 < uVar14) goto LAB_006be9dc;
LAB_006be834:
    auVar18 = auVar3;
    lVar10 = auVar18._0_8_;
    uVar11 = auVar18._8_4_;
    if (uVar14 < 4) {
      if (uVar14 == 1) {
        if ((uVar11 & 0xff) == 10) {
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          lVar12 = param_1 + 0xb0;
LAB_006be7dc:
          uVar9 = FUN_0066399c(lVar12,puVar13);
          param_2 = (byte *)FUN_0066ff90(uVar9,lVar10,param_3);
          goto LAB_006be7ec;
        }
      }
      else if (uVar14 == 2) {
        if ((uVar11 & 0xff) == 0x12) {
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          lVar12 = param_1 + 0xb8;
          goto LAB_006be7dc;
        }
      }
      else if ((uVar14 == 3) && ((uVar11 & 0xff) == 0x1a)) {
        param_2 = (byte *)(lVar10 + -1);
        do {
          piVar15 = *(int **)(param_1 + 0x28);
          if (piVar15 == (int *)0x0) {
LAB_006be8a4:
            if (*(long *)(param_1 + 0x18) == 0) {
              puVar8 = (undefined8 *)FUN_00759c3c(0x18);
            }
            else {
              auVar18 = FUN_00663600(*(long *)(param_1 + 0x18),0x18,puVar7);
              puVar8 = auVar18._0_8_;
              *auVar18._8_8_ = puVar8;
              auVar18._8_8_[1] = puVar6;
            }
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            uVar9 = FUN_00675990(param_1 + 0x18,puVar8);
            param_2 = (byte *)FUN_0066ff90(uVar9,param_2 + 1,param_3);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x20);
            if (*piVar15 <= iVar2) goto LAB_006be8a4;
            *(int *)(param_1 + 0x20) = iVar2 + 1;
            param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2),
                                           param_2 + 1,param_3);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
        goto LAB_006be7f4;
      }
    }
    else if (uVar14 == 4) {
      if ((uVar11 & 0xff) == 0x22) {
        param_2 = (byte *)(lVar10 + -1);
        do {
          piVar15 = *(int **)(param_1 + 0x40);
          if (piVar15 == (int *)0x0) {
LAB_006beaf8:
            uVar9 = FUN_006d180c(*(undefined8 *)(param_1 + 0x30));
            uVar9 = FUN_00675990(param_1 + 0x30,uVar9);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar9,param_2 + 1);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x38);
            if (*piVar15 <= iVar2) goto LAB_006beaf8;
            *(int *)(param_1 + 0x38) = iVar2 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2),
                                           param_2 + 1);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
        goto LAB_006be7f4;
      }
    }
    else if (uVar14 == 5) {
      if ((uVar11 & 0xff) == 0x2a) {
        param_2 = (byte *)(lVar10 + -1);
        do {
          piVar15 = *(int **)(param_1 + 0x58);
          if (piVar15 == (int *)0x0) {
LAB_006bed20:
            uVar9 = FUN_006d1a8c(*(undefined8 *)(param_1 + 0x48));
            uVar9 = FUN_00675990(param_1 + 0x48,uVar9);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar9,param_2 + 1);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x50);
            if (*piVar15 <= iVar2) goto LAB_006bed20;
            *(int *)(param_1 + 0x50) = iVar2 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2),
                                           param_2 + 1);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
        goto LAB_006be7f4;
      }
    }
    else if ((uVar14 == 6) && ((uVar11 & 0xff) == 0x32)) {
      param_2 = (byte *)(lVar10 + -1);
      do {
        piVar15 = *(int **)(param_1 + 0x70);
        if (piVar15 == (int *)0x0) {
LAB_006be97c:
          uVar9 = FUN_006d1b8c(*(undefined8 *)(param_1 + 0x60));
          uVar9 = FUN_00675990(param_1 + 0x60,uVar9);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar9,param_2 + 1);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x68);
          if (*piVar15 <= iVar2) goto LAB_006be97c;
          *(int *)(param_1 + 0x68) = iVar2 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2),
                                         param_2 + 1);
        }
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x32));
      goto LAB_006be7f4;
    }
  }
  else {
LAB_006be828:
    auVar3._8_4_ = uVar14;
    auVar3._0_8_ = pbVar16;
    auVar3._12_4_ = 0;
    auVar18._8_4_ = uVar14;
    auVar18._0_8_ = pbVar16;
    auVar18._12_4_ = 0;
    uVar14 = uVar14 >> 3;
    if (uVar14 < 7) goto LAB_006be834;
LAB_006be9dc:
    lVar10 = auVar18._0_8_;
    uVar11 = auVar18._8_4_;
    if (9 < uVar14) {
      if (uVar14 != 10) {
        if (uVar14 != 0xb) {
          if ((uVar14 != 0xc) || ((uVar11 & 0xff) != 0x62)) goto LAB_006beed4;
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          lVar12 = param_1 + 0xc0;
          goto LAB_006be7dc;
        }
        if ((uVar11 & 0xff) != 0x58) {
          if ((uVar11 & 0xff) == 0x5a) {
            lVar12 = param_1 + 0xa0;
            goto LAB_006beec4;
          }
          goto LAB_006beed4;
        }
        param_2 = (byte *)(lVar10 + -1);
        do {
          bVar1 = param_2[1];
          pbVar16 = param_2 + 2;
          auVar5[8] = bVar1;
          auVar5._0_8_ = pbVar16;
          auVar5._9_3_ = 0;
          auVar20[8] = bVar1;
          auVar20._0_8_ = pbVar16;
          auVar20._9_3_ = 0;
          if ((char)bVar1 < '\0') {
            iVar2 = (uint)bVar1 + (uint)*pbVar16 * 0x80 + -0x80;
            if ((char)*pbVar16 < '\0') {
              auVar20 = FUN_0066fc04(param_2 + 1,iVar2);
              uVar17 = (ulong)*(uint *)(param_1 + 0xa0);
              auVar5 = auVar20;
              if (*(uint *)(param_1 + 0xa0) == *(uint *)(param_1 + 0xa4)) goto LAB_006bee0c;
              goto LAB_006bee4c;
            }
            auVar20._8_4_ = iVar2;
            auVar20._0_8_ = param_2 + 3;
            uVar17 = (ulong)*(uint *)(param_1 + 0xa0);
            auVar5 = auVar20;
            if (*(uint *)(param_1 + 0xa0) != *(uint *)(param_1 + 0xa4)) goto LAB_006bee4c;
LAB_006bee0c:
            param_2 = auVar20._0_8_;
            iVar2 = (int)uVar17 + 1;
            FUN_00673968(param_1 + 0xa0,iVar2);
            *(int *)(*(long *)(param_1 + 0xa8) + uVar17 * 4) = auVar20._8_4_;
            *(int *)(param_1 + 0xa0) = iVar2;
          }
          else {
            uVar17 = (ulong)*(uint *)(param_1 + 0xa0);
            if (*(uint *)(param_1 + 0xa0) == *(uint *)(param_1 + 0xa4)) goto LAB_006bee0c;
LAB_006bee4c:
            param_2 = auVar5._0_8_;
            *(int *)(*(long *)(param_1 + 0xa8) + uVar17 * 4) = auVar5._8_4_;
            *(int *)(param_1 + 0xa0) = (int)uVar17 + 1;
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x58));
        goto LAB_006be7f4;
      }
      if ((uVar11 & 0xff) == 0x50) {
        param_2 = (byte *)(lVar10 + -1);
        do {
          bVar1 = param_2[1];
          pbVar16 = param_2 + 2;
          auVar4[8] = bVar1;
          auVar4._0_8_ = pbVar16;
          auVar4._9_3_ = 0;
          auVar19[8] = bVar1;
          auVar19._0_8_ = pbVar16;
          auVar19._9_3_ = 0;
          if ((char)bVar1 < '\0') {
            iVar2 = (uint)bVar1 + (uint)*pbVar16 * 0x80 + -0x80;
            if ((char)*pbVar16 < '\0') {
              auVar19 = FUN_0066fc04(param_2 + 1,iVar2);
              uVar17 = (ulong)*(uint *)(param_1 + 0x90);
              auVar4 = auVar19;
              if (*(uint *)(param_1 + 0x90) == *(uint *)(param_1 + 0x94)) goto LAB_006bec34;
              goto LAB_006bec74;
            }
            auVar19._8_4_ = iVar2;
            auVar19._0_8_ = param_2 + 3;
            uVar17 = (ulong)*(uint *)(param_1 + 0x90);
            auVar4 = auVar19;
            if (*(uint *)(param_1 + 0x90) != *(uint *)(param_1 + 0x94)) goto LAB_006bec74;
LAB_006bec34:
            param_2 = auVar19._0_8_;
            iVar2 = (int)uVar17 + 1;
            FUN_00673968(param_1 + 0x90,iVar2);
            *(int *)(*(long *)(param_1 + 0x98) + uVar17 * 4) = auVar19._8_4_;
            *(int *)(param_1 + 0x90) = iVar2;
          }
          else {
            uVar17 = (ulong)*(uint *)(param_1 + 0x90);
            if (*(uint *)(param_1 + 0x90) == *(uint *)(param_1 + 0x94)) goto LAB_006bec34;
LAB_006bec74:
            param_2 = auVar4._0_8_;
            *(int *)(*(long *)(param_1 + 0x98) + uVar17 * 4) = auVar4._8_4_;
            *(int *)(param_1 + 0x90) = (int)uVar17 + 1;
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x50));
        goto LAB_006be7f4;
      }
      if ((uVar11 & 0xff) != 0x52) goto LAB_006beed4;
      lVar12 = param_1 + 0x90;
LAB_006beec4:
      param_2 = (byte *)FUN_006700c8(lVar12,lVar10,param_3);
      goto LAB_006be7ec;
    }
    if (uVar14 == 7) {
      if ((uVar11 & 0xff) != 0x3a) goto LAB_006beed4;
      param_2 = (byte *)(lVar10 + -1);
      do {
        piVar15 = *(int **)(param_1 + 0x88);
        if (piVar15 == (int *)0x0) {
LAB_006beb90:
          uVar9 = FUN_006d190c(*(undefined8 *)(param_1 + 0x78));
          uVar9 = FUN_00675990(param_1 + 0x78,uVar9);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar9,param_2 + 1);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x80);
          if (*piVar15 <= iVar2) goto LAB_006beb90;
          *(int *)(param_1 + 0x80) = iVar2 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar15 + (long)iVar2 * 2 + 2),
                                         param_2 + 1);
        }
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x3a));
      goto LAB_006be7f4;
    }
    if (uVar14 == 8) {
      if ((uVar11 & 0xff) == 0x42) {
        lVar12 = *(long *)(param_1 + 200);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if (lVar12 == 0) {
          puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar13 = (ulong *)*puVar13;
          }
          lVar12 = FUN_006d1c8c(puVar13);
          *(long *)(param_1 + 200) = lVar12;
        }
        goto LAB_006beda0;
      }
    }
    else if ((uVar14 == 9) && ((uVar11 & 0xff) == 0x4a)) {
      lVar12 = *(long *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar12 == 0) {
        puVar13 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar13 = (ulong *)*puVar13;
        }
        lVar12 = FUN_006d220c(puVar13);
        *(long *)(param_1 + 0xd0) = lVar12;
      }
LAB_006beda0:
      param_2 = (byte *)FUN_0066fa8c(param_3,lVar12,lVar10);
      goto LAB_006be7ec;
    }
  }
LAB_006beed4:
  pbVar16 = auVar18._0_8_;
  uVar14 = auVar18._8_4_;
  if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
    if (pbVar16 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar14 - 1;
      return pbVar16;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar10 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar10 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar18._8_8_ & 0xffffffff,lVar10,pbVar16,param_3);
LAB_006be7ec:
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_006be7f4;
}


// ===== 006bef8c  FUN_006bef8c =====

undefined1 * FUN_006bef8c(long param_1,undefined1 *param_2,long *param_3)

{
  byte *__src;
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
joined_r0x006bf16c:
    if ((uVar3 >> 1 & 1) != 0) goto LAB_006bf03c;
LAB_006befbc:
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  else {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
      goto joined_r0x006bf16c;
    }
    param_2[1] = (char)sVar1;
    *param_2 = 10;
    pvVar2 = (void *)((ulong)pbVar9 | 1);
    if ((*pbVar9 & 1) != 0) {
      pvVar2 = *(void **)(pbVar9 + 0x10);
    }
    memcpy(param_2 + 2,pvVar2,sVar1);
    param_2 = param_2 + 2 + sVar1;
    if ((uVar3 >> 1 & 1) == 0) goto LAB_006befbc;
LAB_006bf03c:
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      uVar4 = *(uint *)(param_1 + 0x20);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,2);
      uVar4 = *(uint *)(param_1 + 0x20);
    }
  }
  if (0 < (int)uVar4) {
    lVar8 = 0;
    do {
      while( true ) {
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x28) + lVar8 + 8);
        sVar1 = (ulong)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar9 + 8);
        }
        if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) break;
        *param_2 = 0x1a;
        param_2[1] = (char)sVar1;
        __src = pbVar9 + 1;
        if ((*pbVar9 & 1) != 0) {
          __src = *(byte **)(pbVar9 + 0x10);
        }
        memcpy(param_2 + 2,__src,sVar1);
        param_2 = param_2 + 2 + sVar1;
        lVar8 = lVar8 + 8;
        if ((ulong)uVar4 * 8 - lVar8 == 0) goto LAB_006bf190;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,3);
      lVar8 = lVar8 + 8;
    } while ((ulong)uVar4 * 8 - lVar8 != 0);
  }
LAB_006bf190:
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar12 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(4,lVar8,*(undefined4 *)(lVar8 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar12 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(5,lVar8,*(undefined4 *)(lVar8 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar12 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(6,lVar8,*(undefined4 *)(lVar8 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  iVar5 = *(int *)(param_1 + 0x80);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar12 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(7,lVar8,*(undefined4 *)(lVar8 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  if ((uVar3 >> 3 & 1) == 0) {
    if ((uVar3 >> 4 & 1) == 0) goto LAB_006bf278;
LAB_006bf2a4:
    param_2 = (undefined1 *)
              FUN_00678d18(9,*(long *)(param_1 + 0xd0),
                           *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x28),param_2,param_3);
    uVar4 = *(uint *)(param_1 + 0x90);
  }
  else {
    param_2 = (undefined1 *)
              FUN_00678d18(8,*(long *)(param_1 + 200),
                           *(undefined4 *)(*(long *)(param_1 + 200) + 0x2c),param_2,param_3);
    if ((uVar3 >> 4 & 1) != 0) goto LAB_006bf2a4;
LAB_006bf278:
    uVar4 = *(uint *)(param_1 + 0x90);
  }
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      if (param_2 < (undefined1 *)*param_3) {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x98) + uVar13 * 4);
        *param_2 = 0x50;
        param_2[1] = (char)uVar6;
        if (0x7f < uVar6) goto LAB_006bf308;
LAB_006bf2d4:
        param_2 = param_2 + 2;
      }
      else {
        param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
        uVar6 = *(uint *)(*(long *)(param_1 + 0x98) + uVar13 * 4);
        *param_2 = 0x50;
        param_2[1] = (char)uVar6;
        if (uVar6 < 0x80) goto LAB_006bf2d4;
LAB_006bf308:
        uVar10 = (ulong)(long)(int)uVar6 >> 7;
        param_2[1] = (byte)uVar6 | 0x80;
        param_2[2] = (char)uVar10;
        param_2 = param_2 + 3;
        puVar7 = param_2;
        if (0x3fff < uVar6) {
          do {
            uVar11 = uVar10 >> 0xe;
            uVar10 = uVar10 >> 7;
            puVar7[-1] = puVar7[-1] | 0x80;
            param_2 = puVar7 + 1;
            *puVar7 = (char)uVar10;
            puVar7 = param_2;
          } while (uVar11 != 0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      if (param_2 < (undefined1 *)*param_3) {
        uVar6 = *(uint *)(*(long *)(param_1 + 0xa8) + uVar13 * 4);
        *param_2 = 0x58;
        param_2[1] = (char)uVar6;
        if (0x7f < uVar6) goto LAB_006bf3bc;
LAB_006bf388:
        param_2 = param_2 + 2;
      }
      else {
        param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
        uVar6 = *(uint *)(*(long *)(param_1 + 0xa8) + uVar13 * 4);
        *param_2 = 0x58;
        param_2[1] = (char)uVar6;
        if (uVar6 < 0x80) goto LAB_006bf388;
LAB_006bf3bc:
        uVar10 = (ulong)(long)(int)uVar6 >> 7;
        param_2[1] = (byte)uVar6 | 0x80;
        param_2[2] = (char)uVar10;
        param_2 = param_2 + 3;
        puVar7 = param_2;
        if (0x3fff < uVar6) {
          do {
            uVar11 = uVar10 >> 0xe;
            uVar10 = uVar10 >> 7;
            puVar7[-1] = puVar7[-1] | 0x80;
            param_2 = puVar7 + 1;
            *puVar7 = (char)uVar10;
            puVar7 = param_2;
          } while (uVar11 != 0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,0xc);
      uVar13 = *(ulong *)(param_1 + 8);
      goto joined_r0x006bf4cc;
    }
    param_2[1] = (char)sVar1;
    *param_2 = 0x62;
    pvVar2 = (void *)((ulong)pbVar9 | 1);
    if ((*pbVar9 & 1) != 0) {
      pvVar2 = *(void **)(pbVar9 + 0x10);
    }
    memcpy(param_2 + 2,pvVar2,sVar1);
    param_2 = param_2 + 2 + sVar1;
  }
  uVar13 = *(ulong *)(param_1 + 8);
joined_r0x006bf4cc:
  if ((uVar13 & 1) != 0) {
    puVar7 = (undefined1 *)FUN_006fc418((uVar13 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar7;
  }
  return param_2;
}


// ===== 006bf4f8  FUN_006bf4f8 =====

undefined4 FUN_006bf4f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006bf500  FUN_006bf500 =====

undefined4 FUN_006bf500(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006bf508  FUN_006bf508 =====

undefined4 FUN_006bf508(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006bf510  FUN_006bf510 =====

undefined4 FUN_006bf510(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006bf518  FUN_006bf518 =====

undefined4 FUN_006bf518(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006bf520  FUN_006bf520 =====

undefined4 FUN_006bf520(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 006bf528  FUN_006bf528 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006bf528(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  uVar11 = uVar8;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar10 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar10 = puVar10 + 1;
      bVar4 = *(byte *)*puVar10;
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar10 + 8);
      }
      uVar8 = uVar8 - 1;
      uVar11 = uVar1 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar8 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x38);
  lVar12 = uVar11 + (long)iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_006c1f44(*puVar10);
      lVar13 = lVar13 + -8;
      lVar12 = lVar6 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  lVar12 = lVar12 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_006c5eac(*puVar10);
      lVar13 = lVar13 + -8;
      lVar12 = lVar6 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  lVar12 = lVar12 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_006c762c(*puVar10);
      lVar13 = lVar13 + -8;
      lVar12 = lVar6 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x80);
  lVar12 = lVar12 + iVar5;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      lVar6 = FUN_006c3fbc(*puVar10);
      lVar13 = lVar13 + -8;
      lVar12 = lVar6 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  lVar13 = FUN_006792fc(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x90);
  lVar6 = FUN_006792fc(param_1 + 0xa0);
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar12 = lVar13 + lVar6 + (ulong)*(uint *)(param_1 + 0xa0) + lVar12 + (ulong)uVar2;
  if ((uVar3 & 0x1f) != 0) {
    if ((uVar3 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
      bVar4 = *pbVar9;
      uVar11 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar11 = *(ulong *)(pbVar9 + 8);
      }
      lVar12 = lVar12 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
      bVar4 = *pbVar9;
      uVar11 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar11 = *(ulong *)(pbVar9 + 8);
      }
      lVar12 = lVar12 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
      bVar4 = *pbVar9;
      uVar11 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar11 = *(ulong *)(pbVar9 + 8);
      }
      lVar12 = lVar12 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      lVar13 = FUN_006c9bd8(*(undefined8 *)(param_1 + 200));
      lVar12 = lVar12 + lVar13 + (ulong)(((uint)LZCOUNT((uint)lVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xd0);
      lVar13 = (long)*(int *)(lVar6 + 0x18);
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(lVar6 + 0x20) != 0) {
        puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 8);
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        lVar13 = 0;
      }
      else {
        lVar14 = lVar13 << 3;
        do {
          lVar7 = FUN_006cfd8c(*puVar10);
          lVar14 = lVar14 + -8;
          lVar13 = lVar7 + lVar13 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
          ;
          puVar10 = puVar10 + 1;
        } while (lVar14 != 0);
      }
      lVar13 = FUN_006e5694(lVar6,lVar13,lVar6 + 0x28);
      lVar12 = lVar12 + lVar13 + (ulong)(((uint)LZCOUNT((uint)lVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
  }
  FUN_006e5694(param_1,lVar12,param_1 + 0x14);
  return;
}


// ===== 006bf8d8  FUN_006bf8d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006bf8d8(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined *puVar11;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_005d663c(param_1 + 0x18,uVar5,lVar10 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x40);
    uVar5 = FUN_00675710(param_1 + 0x30,iVar2);
    FUN_006d25a4(param_1 + 0x30,uVar5,lVar10 + 8,iVar2,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar3 = **(int **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x40) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x58);
    uVar5 = FUN_00675710(param_1 + 0x48,iVar2);
    FUN_006d262c(param_1 + 0x48,uVar5,lVar10 + 8,iVar2,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar3 = **(int **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x50) + iVar2;
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x58) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x70);
    uVar5 = FUN_00675710(param_1 + 0x60,iVar2);
    FUN_006d26b4(param_1 + 0x60,uVar5,lVar10 + 8,iVar2,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar3 = **(int **)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x68) + iVar2;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x70) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x88);
    uVar5 = FUN_00675710(param_1 + 0x78,iVar2);
    FUN_006d273c(param_1 + 0x78,uVar5,lVar10 + 8,iVar2,
                 **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    iVar3 = **(int **)(param_1 + 0x88);
    iVar2 = *(int *)(param_1 + 0x80) + iVar2;
    *(int *)(param_1 + 0x80) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x88) = iVar2;
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    piVar9 = (int *)(param_1 + 0x90);
    iVar2 = *piVar9;
    FUN_00673968(piVar9,iVar2 + *(int *)(param_2 + 0x90));
    pvVar7 = *(void **)(param_2 + 0x98);
    *piVar9 = *piVar9 + *(int *)(param_2 + 0x90);
    memcpy((void *)(*(long *)(param_1 + 0x98) + (long)iVar2 * 4),pvVar7,
           (long)*(int *)(param_2 + 0x90) << 2);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    piVar9 = (int *)(param_1 + 0xa0);
    iVar2 = *piVar9;
    FUN_00673968(piVar9,iVar2 + *(int *)(param_2 + 0xa0));
    pvVar7 = *(void **)(param_2 + 0xa8);
    *piVar9 = *piVar9 + *(int *)(param_2 + 0xa0);
    memcpy((void *)(*(long *)(param_1 + 0xa8) + (long)iVar2 * 4),pvVar7,
           (long)*(int *)(param_2 + 0xa0) << 2);
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 0x1f) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xb0,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xb0,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xb8,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xb8,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xc0,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xc0,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 3 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_006d1c8c(puVar6);
        *(long *)(param_1 + 200) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa590;
      if (*(undefined ***)(param_2 + 200) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 200);
      }
      FUN_006c9fd4(lVar10,ppuVar1);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_006d220c(puVar6);
        *(long *)(param_1 + 0xd0) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa960;
      if (*(undefined ***)(param_2 + 0xd0) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xd0);
      }
      iVar2 = *(int *)(ppuVar1 + 3);
      if (iVar2 != 0) {
        puVar11 = ppuVar1[4];
        uVar5 = FUN_00675710(lVar10 + 0x10,iVar2);
        FUN_006bd904(lVar10 + 0x10,uVar5,puVar11 + 8,iVar2,
                     **(int **)(lVar10 + 0x20) - *(int *)(lVar10 + 0x18));
        iVar3 = **(int **)(lVar10 + 0x20);
        iVar2 = *(int *)(lVar10 + 0x18) + iVar2;
        *(int *)(lVar10 + 0x18) = iVar2;
        if (iVar3 < iVar2) {
          **(int **)(lVar10 + 0x20) = iVar2;
        }
      }
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar10 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006bfd7c  FUN_006bfd7c =====

undefined ** FUN_006bfd7c(void)

{
  return &PTR_FUN_0079a638;
}


// ===== 006bfd88  FUN_006bfd88 =====

undefined8 FUN_006bfd88(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x38);
  while (0 < (int)uVar7) {
    uVar3 = FUN_006c26b0(*(undefined8 *)(*(long *)(param_1 + 0x40) + uVar7 * 8));
    uVar7 = uVar7 - 1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  while (0 < (int)uVar7) {
    uVar3 = FUN_006c6344(*(undefined8 *)(*(long *)(param_1 + 0x58) + uVar7 * 8));
    uVar7 = uVar7 - 1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  while (0 < (int)uVar7) {
    uVar3 = FUN_006c78f4(*(undefined8 *)(*(long *)(param_1 + 0x70) + uVar7 * 8));
    uVar7 = uVar7 - 1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x88) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 5 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x40);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x38)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 200);
    uVar7 = FUN_00667e24(lVar4 + 0x10);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (0 < (int)*(uint *)(lVar4 + 0x38)) {
      uVar7 = (ulong)*(uint *)(lVar4 + 0x38);
      do {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar7 - 1) * 8);
        uVar3 = (ulong)*(uint *)(lVar5 + 0x20);
        while (0 < (int)uVar3) {
          lVar2 = uVar3 * 8;
          uVar3 = uVar3 - 1;
          if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0
             ) {
            return 0;
          }
        }
        bVar1 = 1 < (long)uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
      return 1;
    }
  }
  return 1;
}


// ===== 006bff6c  FUN_006bff6c =====

undefined8 FUN_006bff6c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006bffe4:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006bffe4;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c0004  FUN_006c0004 =====

void FUN_006c0004(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aebd0);
  return;
}


// ===== 006c001c  FUN_006c001c =====

void FUN_006c001c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3370;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006c0044  FUN_006c0044 =====

void FUN_006c0044(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c0064 to 006c0067 has its CatchHandler @ 006c00d8 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007aa250) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_006c2af8(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c00dc  FUN_006c00dc =====

void FUN_006c00dc(void *param_1)

{
  FUN_006c0044();
  free(param_1);
  return;
}


// ===== 006c0100  FUN_006c0100 =====

void FUN_006c0100(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c0108  FUN_006c0108 =====

void FUN_006c0108(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_006667cc(lVar3 + 0x10);
    uVar4 = (ulong)*(uint *)(lVar3 + 0x30);
    if (0 < (int)*(uint *)(lVar3 + 0x30)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x38);
      do {
        puVar2 = puVar2 + 1;
        FUN_006ce578(*puVar2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      *(undefined4 *)(lVar3 + 0x30) = 0;
    }
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      FUN_006622b8((byte *)(lVar3 + 8));
    }
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c01b0  FUN_006c01b0 =====

void FUN_006c01b0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c0220  FUN_006c0220 =====

byte * FUN_006c0220(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  uVar8 = 0;
LAB_006c0264:
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar6 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar6 = param_2;
        }
        goto LAB_006c044c;
      }
      auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      pbVar6 = param_2;
      if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c044c;
    }
    pbVar6 = param_2 + 1;
    uVar7 = (uint)*param_2;
    if ((char)*param_2 < '\0') break;
LAB_006c0298:
    auVar2._8_4_ = uVar7;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar9._8_4_ = uVar7;
    auVar9._0_8_ = pbVar6;
    auVar9._12_4_ = 0;
    uVar7 = uVar7 >> 3;
    if (uVar7 != 3) goto LAB_006c02a4;
LAB_006c0348:
    if ((auVar9._8_4_ & 0xff) != 0x1a) goto LAB_006c0380;
    lVar5 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if (lVar5 == 0) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar5 = FUN_006d188c(puVar3);
      *(long *)(param_1 + 0x18) = lVar5;
    }
    param_2 = (byte *)FUN_0066fa8c(param_3,lVar5,auVar9._0_8_);
joined_r0x006c03b0:
    if (param_2 == (byte *)0x0) {
      pbVar6 = (byte *)0x0;
LAB_006c044c:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
      return pbVar6;
    }
  }
  uVar7 = (uVar7 + (uint)*pbVar6 * 0x80) - 0x80;
  if (-1 < (char)*pbVar6) {
    pbVar6 = param_2 + 2;
    goto LAB_006c0298;
  }
  auVar9 = FUN_0066fe50();
  uVar7 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
  auVar2 = auVar9;
  if (uVar7 == 3) goto LAB_006c0348;
LAB_006c02a4:
  auVar9 = auVar2;
  pbVar6 = auVar9._0_8_;
  if (uVar7 == 2) {
    if ((auVar9._8_4_ & 0xff) == 0x10) {
      uVar8 = uVar8 | 4;
      param_2 = pbVar6 + 1;
      uVar7 = (uint)*pbVar6;
      if ((char)*pbVar6 < '\0') {
        uVar7 = (uVar7 + (uint)*param_2 * 0x80) - 0x80;
        if ((char)*param_2 < '\0') {
          auVar10 = FUN_0066fc04(pbVar6);
          param_2 = auVar10._0_8_;
          *(int *)(param_1 + 0x24) = auVar10._8_4_;
          goto joined_r0x006c03b0;
        }
        param_2 = pbVar6 + 2;
      }
      *(uint *)(param_1 + 0x24) = uVar7;
      goto LAB_006c0264;
    }
  }
  else if ((uVar7 == 1) && ((auVar9._8_4_ & 0xff) == 8)) {
    uVar8 = uVar8 | 2;
    param_2 = pbVar6 + 1;
    uVar7 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
      uVar7 = (uVar7 + (uint)*param_2 * 0x80) - 0x80;
      if ((char)*param_2 < '\0') {
        auVar10 = FUN_0066fc04(pbVar6);
        param_2 = auVar10._0_8_;
        *(int *)(param_1 + 0x20) = auVar10._8_4_;
        goto joined_r0x006c03b0;
      }
      param_2 = pbVar6 + 2;
    }
    *(uint *)(param_1 + 0x20) = uVar7;
    goto LAB_006c0264;
  }
LAB_006c0380:
  pbVar6 = auVar9._0_8_;
  uVar7 = auVar9._8_4_;
  if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
    if (pbVar6 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar7 - 1;
    }
    goto LAB_006c044c;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar4 = FUN_00661fa4(param_1 + 8);
    param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,uVar4,pbVar6,param_3);
  }
  else {
    param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,
                                   (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar6,param_3
                                  );
  }
  goto joined_r0x006c03b0;
}


// ===== 006c048c  FUN_006c048c =====

undefined1 * FUN_006c048c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x24);
      *param_2 = 0x10;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x24);
      *param_2 = 0x10;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(3,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 006c0624  FUN_006c0624 =====

undefined4 FUN_006c0624(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 006c062c  FUN_006c062c =====

void FUN_006c062c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      lVar4 = FUN_0066a944(lVar5 + 0x10);
      iVar2 = *(int *)(lVar5 + 0x30);
      lVar4 = lVar4 + (long)iVar2 * 2;
      puVar6 = (undefined8 *)0x0;
      if (*(long *)(lVar5 + 0x38) != 0) {
        puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + 8);
      }
      if (iVar2 != 0) {
        lVar7 = (long)iVar2 << 3;
        do {
          lVar3 = FUN_006cee4c(*puVar6);
          lVar7 = lVar7 + -8;
          lVar4 = lVar3 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar4 = FUN_006e5694(lVar5,lVar4,lVar5 + 0x40);
      lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = lVar4 + ((LZCOUNT((long)*(int *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_006e5694(param_1,lVar4 + ((LZCOUNT((long)*(int *)(param_1 + 0x24) | 1) ^ 0x3fU) * 9 + 0x89
                                   >> 6),param_1 + 0x14);
      return;
    }
  }
  FUN_006e5694(param_1,lVar4,param_1 + 0x14);
  return;
}


// ===== 006c0764  FUN_006c0764 =====

void FUN_006c0764(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar7 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = FUN_006d188c(puVar5);
        *(long *)(param_1 + 0x18) = lVar7;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa380;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      iVar3 = *(int *)(ppuVar1 + 6);
      if (iVar3 != 0) {
        puVar8 = ppuVar1[7];
        uVar6 = FUN_00675710(lVar7 + 0x28,iVar3);
        FUN_006d2998(lVar7 + 0x28,uVar6,puVar8 + 8,iVar3,
                     **(int **)(lVar7 + 0x38) - *(int *)(lVar7 + 0x30));
        iVar4 = **(int **)(lVar7 + 0x38);
        iVar3 = *(int *)(lVar7 + 0x30) + iVar3;
        *(int *)(lVar7 + 0x30) = iVar3;
        if (iVar4 < iVar3) {
          **(int **)(lVar7 + 0x38) = iVar3;
        }
      }
      FUN_00666818(lVar7 + 0x10,PTR_PTR_007a3380,ppuVar1 + 2);
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar7 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c08cc  FUN_006c08cc =====

undefined ** FUN_006c08cc(void)

{
  return &PTR_FUN_0079a648;
}


// ===== 006c08d8  FUN_006c08d8 =====

undefined8 FUN_006c08d8(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  uVar3 = FUN_00667e24(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c0960:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x30) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x30);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c0960;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c0980  FUN_006c0980 =====

undefined8 FUN_006c0980(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c09f8:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x30) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c09f8;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c0a18  FUN_006c0a18 =====

void FUN_006c0a18(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aebe0);
  return;
}


// ===== 006c0a30  FUN_006c0a30 =====

void FUN_006c0a30(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3390;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006c0a54  FUN_006c0a54 =====

void FUN_006c0a54(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = param_1 + 1;
  uVar1 = *puVar2;
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 006c0a70 to 006c0a77 has its CatchHandler @ 006c0abc */
    FUN_00662218(puVar2);
    uVar1 = *puVar2;
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)uVar1 >> 1 & 1) != 0) && (__ptr = (void *)(uVar1 - 2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c0ac0  FUN_006c0ac0 =====

void FUN_006c0ac0(void *param_1)

{
  FUN_006c0a54();
  free(param_1);
  return;
}


// ===== 006c0ae4  FUN_006c0ae4 =====

void FUN_006c0ae4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c0aec  FUN_006c0aec =====

void FUN_006c0aec(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006c0b10  FUN_006c0b10 =====

byte * FUN_006c0b10(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  uVar6 = 0;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar4 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar4 = param_2;
          }
          goto LAB_006c0cdc;
        }
        auVar7 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar7._0_8_;
        pbVar4 = param_2;
        if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c0cdc;
      }
      pbVar4 = param_2 + 1;
      uVar5 = (uint)*param_2;
      if ((char)*param_2 < '\0') break;
LAB_006c0b74:
      auVar2._8_4_ = uVar5;
      auVar2._0_8_ = pbVar4;
      auVar2._12_4_ = 0;
      auVar7._8_4_ = uVar5;
      auVar7._0_8_ = pbVar4;
      auVar7._12_4_ = 0;
      uVar5 = uVar5 >> 3;
      if (uVar5 != 2) goto LAB_006c0b80;
LAB_006c0be4:
      pbVar4 = auVar7._0_8_;
      if ((auVar7._8_4_ & 0xff) != 0x10) goto LAB_006c0c24;
      uVar6 = uVar6 | 2;
      param_2 = pbVar4 + 1;
      uVar5 = (uint)*pbVar4;
      if ((char)*pbVar4 < '\0') {
        uVar5 = (uVar5 + (uint)*param_2 * 0x80) - 0x80;
        if (-1 < (char)*param_2) {
          param_2 = pbVar4 + 2;
          goto LAB_006c0c1c;
        }
        auVar8 = FUN_0066fc04(pbVar4);
        param_2 = auVar8._0_8_;
        *(int *)(param_1 + 0x1c) = auVar8._8_4_;
joined_r0x006c0c54:
        if (param_2 == (byte *)0x0) {
          pbVar4 = (byte *)0x0;
LAB_006c0cdc:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
          return pbVar4;
        }
      }
      else {
LAB_006c0c1c:
        *(uint *)(param_1 + 0x1c) = uVar5;
      }
    }
    uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
    if (-1 < (char)*pbVar4) {
      pbVar4 = param_2 + 2;
      goto LAB_006c0b74;
    }
    auVar7 = FUN_0066fe50();
    uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar7;
    if (uVar5 == 2) goto LAB_006c0be4;
LAB_006c0b80:
    auVar7 = auVar2;
    pbVar4 = auVar7._0_8_;
    if ((uVar5 != 1) || ((auVar7._8_4_ & 0xff) != 8)) {
LAB_006c0c24:
      pbVar4 = auVar7._0_8_;
      uVar5 = auVar7._8_4_;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        if (pbVar4 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar5 - 1;
        }
        goto LAB_006c0cdc;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar3 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,uVar3,pbVar4,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar4,
                                       param_3);
      }
      goto joined_r0x006c0c54;
    }
    uVar6 = uVar6 | 1;
    param_2 = pbVar4 + 1;
    uVar5 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') {
      uVar5 = (uVar5 + (uint)*param_2 * 0x80) - 0x80;
      if ((char)*param_2 < '\0') {
        auVar8 = FUN_0066fc04(pbVar4);
        param_2 = auVar8._0_8_;
        *(int *)(param_1 + 0x18) = auVar8._8_4_;
        goto joined_r0x006c0c54;
      }
      param_2 = pbVar4 + 2;
    }
    *(uint *)(param_1 + 0x18) = uVar5;
  } while( true );
}


// ===== 006c0d1c  FUN_006c0d1c =====

undefined1 * FUN_006c0d1c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar2 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x10;
      param_2[1] = (char)uVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar1 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x10;
      param_2[1] = (char)uVar1;
    }
    if (uVar1 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar1 >> 7;
      param_2[1] = (byte)uVar1 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar1) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 006c0e9c  FUN_006c0e9c =====

void FUN_006c0e9c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (LZCOUNT((long)*(int *)(param_1 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((LZCOUNT((long)*(int *)(param_1 + 0x1c) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    FUN_006e5694(param_1,uVar2,param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,0,param_1 + 0x14);
  return;
}


// ===== 006c0f08  FUN_006c0f08 =====

void FUN_006c0f08(long param_1,long param_2)

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
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c0f54  FUN_006c0f54 =====

undefined ** FUN_006c0f54(void)

{
  return &PTR_FUN_0079a658;
}


// ===== 006c0f60  FUN_006c0f60 =====

undefined8 FUN_006c0f60(void)

{
  return 1;
}


// ===== 006c0f68  FUN_006c0f68 =====

void FUN_006c0f68(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aebf0);
  return;
}


// ===== 006c0f80  FUN_006c0f80 =====

void FUN_006c0f80(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a33a0;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = (long)puVar2;
  return;
}


// ===== 006c0fe8  FUN_006c0fe8 =====

void FUN_006c0fe8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c1008 to 006c1017 has its CatchHandler @ 006c105c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006c1060(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c1060  FUN_006c1060 =====

void FUN_006c1060(undefined **param_1)

{
  undefined *__ptr;
  
  if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 006c1080 to 006c1083 has its CatchHandler @ 006c1178 */
    FUN_00675910();
  }
  if ((param_1[8] != (undefined *)0x0) && (param_1[6] == (undefined *)0x0)) {
                    /* try { // try from 006c1098 to 006c109b has its CatchHandler @ 006c1174 */
    FUN_00675910();
  }
  if ((param_1[0xb] != (undefined *)0x0) && (param_1[9] == (undefined *)0x0)) {
                    /* try { // try from 006c10b0 to 006c10b3 has its CatchHandler @ 006c1170 */
    FUN_00675910();
  }
  if ((param_1[0xe] != (undefined *)0x0) && (param_1[0xc] == (undefined *)0x0)) {
                    /* try { // try from 006c10c8 to 006c10cb has its CatchHandler @ 006c116c */
    FUN_00675910();
  }
  if ((param_1[0x11] != (undefined *)0x0) && (param_1[0xf] == (undefined *)0x0)) {
                    /* try { // try from 006c10e0 to 006c10e3 has its CatchHandler @ 006c1168 */
    FUN_00675910();
  }
  if ((param_1[0x14] != (undefined *)0x0) && (param_1[0x12] == (undefined *)0x0)) {
                    /* try { // try from 006c10f8 to 006c10fb has its CatchHandler @ 006c1164 */
    FUN_00675910();
  }
  if ((param_1[0x17] != (undefined *)0x0) && (param_1[0x15] == (undefined *)0x0)) {
                    /* try { // try from 006c1110 to 006c1113 has its CatchHandler @ 006c1160 */
    FUN_00675910();
  }
  FUN_00675290(param_1 + 0x18);
  FUN_00663a20(param_1 + 0x1b);
  if ((param_1 != &PTR_PTR_FUN_007aa298) && (__ptr = param_1[0x1c], __ptr != (undefined *)0x0)) {
    FUN_006ca504(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c117c  FUN_006c117c =====

void FUN_006c117c(void *param_1)

{
  FUN_006c0fe8();
  free(param_1);
  return;
}


// ===== 006c11a0  FUN_006c11a0 =====

void FUN_006c11a0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c11a8  FUN_006c11a8 =====

void FUN_006c11a8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c3258(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c11a8(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c5628(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c0108(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c3258(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x98);
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c472c(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0xb0);
  if (0 < (int)*(uint *)(param_1 + 0xb0)) {
    plVar4 = *(long **)(param_1 + 0xb8);
    do {
      plVar4 = plVar4 + 1;
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8();
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 200);
  if (0 < (int)*(uint *)(param_1 + 200)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      while (pbVar5 = (byte *)*puVar3, (*pbVar5 & 1) != 0) {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 1;
        if (uVar6 == 0) goto LAB_006c1348;
      }
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      uVar6 = uVar6 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0);
LAB_006c1348:
    *(undefined4 *)(param_1 + 200) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xe0);
      FUN_006667cc(lVar2 + 0x10);
      uVar6 = (ulong)*(uint *)(lVar2 + 0x38);
      if (0 < (int)*(uint *)(lVar2 + 0x38)) {
        puVar3 = *(undefined8 **)(lVar2 + 0x40);
        do {
          puVar3 = puVar3 + 1;
          FUN_006ce578(*puVar3);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        *(undefined4 *)(lVar2 + 0x38) = 0;
      }
      *(undefined4 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar2 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c1404  FUN_006c1404 =====

void FUN_006c1404(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c147c  FUN_006c147c =====

byte * FUN_006c147c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  
  puVar4 = PTR_PTR_007a2ea8;
  puVar3 = PTR_FUN_007a2ca8;
LAB_006c14d0:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar13 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar13 = param_2;
      }
      return pbVar13;
    }
    auVar14 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar14._0_8_;
    if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar13 = param_2 + 1;
  uVar11 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar11 = (uVar11 + (uint)*pbVar13 * 0x80) - 0x80;
    if (-1 < (char)*pbVar13) {
      pbVar13 = param_2 + 2;
      goto LAB_006c1504;
    }
    auVar14 = FUN_0066fe50(param_2);
    uVar11 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar14;
    if (5 < uVar11) goto LAB_006c1688;
LAB_006c1510:
    auVar14 = auVar2;
    lVar7 = auVar14._0_8_;
    uVar8 = auVar14._8_4_;
    if (uVar11 < 3) {
      if (uVar11 == 1) {
        if ((uVar8 & 0xff) == 10) {
          puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
          uVar5 = FUN_0066399c(param_1 + 0xd8,puVar10);
          param_2 = (byte *)FUN_0066ff90(uVar5,lVar7,param_3);
          goto LAB_006c14c8;
        }
      }
      else if ((uVar11 == 2) && ((uVar8 & 0xff) == 0x12)) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0x28);
          if (piVar12 == (int *)0x0) {
LAB_006c1628:
            uVar5 = FUN_006d190c(*(undefined8 *)(param_1 + 0x18));
            uVar5 = FUN_00675990(param_1 + 0x18,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar12 <= iVar1) goto LAB_006c1628;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
        goto LAB_006c14d0;
      }
    }
    else if (uVar11 == 3) {
      if ((uVar8 & 0xff) == 0x1a) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0x40);
          if (piVar12 == (int *)0x0) {
LAB_006c18d0:
            uVar5 = FUN_006d180c(*(undefined8 *)(param_1 + 0x30));
            uVar5 = FUN_00675990(param_1 + 0x30,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar12 <= iVar1) goto LAB_006c18d0;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
        goto LAB_006c14d0;
      }
    }
    else if (uVar11 == 4) {
      if ((uVar8 & 0xff) == 0x22) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0x58);
          if (piVar12 == (int *)0x0) {
LAB_006c1a00:
            uVar5 = FUN_006d1a8c(*(undefined8 *)(param_1 + 0x48));
            uVar5 = FUN_00675990(param_1 + 0x48,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x50);
            if (*piVar12 <= iVar1) goto LAB_006c1a00;
            *(int *)(param_1 + 0x50) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
        goto LAB_006c14d0;
      }
    }
    else if ((uVar11 == 5) && ((uVar8 & 0xff) == 0x2a)) {
      param_2 = (byte *)(lVar7 + -1);
      do {
        piVar12 = *(int **)(param_1 + 0x70);
        if (piVar12 == (int *)0x0) {
LAB_006c1580:
          uVar5 = FUN_006d170c(*(undefined8 *)(param_1 + 0x60));
          uVar5 = FUN_00675990(param_1 + 0x60,uVar5);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x68);
          if (*piVar12 <= iVar1) goto LAB_006c1580;
          *(int *)(param_1 + 0x68) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
      goto LAB_006c14d0;
    }
  }
  else {
LAB_006c1504:
    auVar2._8_4_ = uVar11;
    auVar2._0_8_ = pbVar13;
    auVar2._12_4_ = 0;
    auVar14._8_4_ = uVar11;
    auVar14._0_8_ = pbVar13;
    auVar14._12_4_ = 0;
    uVar11 = uVar11 >> 3;
    if (uVar11 < 6) goto LAB_006c1510;
LAB_006c1688:
    lVar7 = auVar14._0_8_;
    uVar8 = auVar14._8_4_;
    if (uVar11 < 8) {
      if (uVar11 == 6) {
        if ((uVar8 & 0xff) != 0x32) goto LAB_006c1ae0;
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0x88);
          if (piVar12 == (int *)0x0) {
LAB_006c1838:
            uVar5 = FUN_006d190c(*(undefined8 *)(param_1 + 0x78));
            uVar5 = FUN_00675990(param_1 + 0x78,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x80);
            if (*piVar12 <= iVar1) goto LAB_006c1838;
            *(int *)(param_1 + 0x80) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x32));
        goto LAB_006c14d0;
      }
      if ((uVar11 != 7) || ((uVar8 & 0xff) != 0x3a)) goto LAB_006c1ae0;
      lVar9 = *(long *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar9 == 0) {
        puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        lVar9 = FUN_006d1d0c(puVar10);
        *(long *)(param_1 + 0xe0) = lVar9;
      }
      param_2 = (byte *)FUN_0066fa8c(param_3,lVar9,lVar7);
      goto LAB_006c14c8;
    }
    if (uVar11 == 8) {
      if ((uVar8 & 0xff) == 0x42) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0xa0);
          if (piVar12 == (int *)0x0) {
LAB_006c1968:
            uVar5 = FUN_006d198c(*(undefined8 *)(param_1 + 0x90));
            uVar5 = FUN_00675990(param_1 + 0x90,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x98);
            if (*piVar12 <= iVar1) goto LAB_006c1968;
            *(int *)(param_1 + 0x98) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x42));
        goto LAB_006c14d0;
      }
    }
    else {
      if (uVar11 == 9) {
        if ((uVar8 & 0xff) != 0x4a) goto LAB_006c1ae0;
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0xb8);
          if (piVar12 == (int *)0x0) {
LAB_006c1a98:
            uVar5 = FUN_006d178c(*(undefined8 *)(param_1 + 0xa8));
            uVar5 = FUN_00675990(param_1 + 0xa8,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xb0);
            if (*piVar12 <= iVar1) goto LAB_006c1a98;
            *(int *)(param_1 + 0xb0) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x4a));
        goto LAB_006c14d0;
      }
      if ((uVar11 == 10) && ((uVar8 & 0xff) == 0x52)) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar12 = *(int **)(param_1 + 0xd0);
          if (piVar12 == (int *)0x0) {
LAB_006c16f8:
            if (*(long *)(param_1 + 0xc0) == 0) {
              puVar6 = (undefined8 *)FUN_00759c3c(0x18);
            }
            else {
              auVar14 = FUN_00663600(*(long *)(param_1 + 0xc0),0x18,puVar4);
              puVar6 = auVar14._0_8_;
              *auVar14._8_8_ = puVar6;
              auVar14._8_8_[1] = puVar3;
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            uVar5 = FUN_00675990(param_1 + 0xc0,puVar6);
            param_2 = (byte *)FUN_0066ff90(uVar5,param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 200);
            if (*piVar12 <= iVar1) goto LAB_006c16f8;
            *(int *)(param_1 + 200) = iVar1 + 1;
            param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                           param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x52));
        goto LAB_006c14d0;
      }
    }
  }
LAB_006c1ae0:
  pbVar13 = auVar14._0_8_;
  uVar11 = auVar14._8_4_;
  if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
    if (pbVar13 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar11 - 1;
      return pbVar13;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar7 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar14._8_8_ & 0xffffffff,lVar7,pbVar13,param_3);
LAB_006c14c8:
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_006c14d0;
}


// ===== 006c1bd0  FUN_006c1bd0 =====

undefined1 * FUN_006c1bd0(long param_1,undefined1 *param_2,long *param_3)

{
  void *__src;
  size_t sVar1;
  byte *__src_00;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
      iVar3 = *(int *)(param_1 + 0x20);
      goto joined_r0x006c1c6c;
    }
    param_2[1] = (char)sVar1;
    *param_2 = 10;
    __src = (void *)((ulong)pbVar6 | 1);
    if ((*pbVar6 & 1) != 0) {
      __src = *(void **)(pbVar6 + 0x10);
    }
    memcpy(param_2 + 2,__src,sVar1);
    param_2 = param_2 + 2 + sVar1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
joined_r0x006c1c6c:
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(2,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(3,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(4,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(5,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(6,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(7,*(long *)(param_1 + 0xe0),
                           *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x2c),param_2,param_3);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(8,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(9,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (0 < (int)*(uint *)(param_1 + 200)) {
    lVar8 = (ulong)*(uint *)(param_1 + 200) * 8;
    lVar5 = 0;
    do {
      while( true ) {
        pbVar6 = *(byte **)(*(long *)(param_1 + 0xd0) + lVar5 + 8);
        sVar1 = (ulong)(*pbVar6 >> 1);
        if ((*pbVar6 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar6 + 8);
        }
        if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) break;
        *param_2 = 0x52;
        param_2[1] = (char)sVar1;
        __src_00 = pbVar6 + 1;
        if ((*pbVar6 & 1) != 0) {
          __src_00 = *(byte **)(pbVar6 + 0x10);
        }
        memcpy(param_2 + 2,__src_00,sVar1);
        param_2 = param_2 + 2 + sVar1;
        lVar5 = lVar5 + 8;
        if (lVar8 - lVar5 == 0) goto LAB_006c1ebc;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,10);
      lVar5 = lVar5 + 8;
    } while (lVar8 - lVar5 != 0);
  }
LAB_006c1ebc:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar4 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar4;
}


// ===== 006c1f24  FUN_006c1f24 =====

undefined4 FUN_006c1f24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c1f2c  FUN_006c1f2c =====

undefined4 FUN_006c1f2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c1f34  FUN_006c1f34 =====

undefined4 FUN_006c1f34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c1f3c  FUN_006c1f3c =====

undefined4 FUN_006c1f3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c1f44  FUN_006c1f44 =====

void FUN_006c1f44(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar9 = (long)*(int *)(param_1 + 0x20);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar9 = 0;
  }
  else {
    lVar11 = lVar9 << 3;
    do {
      lVar5 = FUN_006c3fbc(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar9 = lVar9 + iVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006c1f44(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  lVar9 = lVar9 + iVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006c5eac(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  lVar9 = lVar9 + iVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006c062c(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x80);
  lVar9 = lVar9 + iVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006c3fbc(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x98);
  lVar9 = lVar9 + iVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006c4b80(*puVar7);
      lVar11 = lVar11 + -8;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  lVar9 = lVar9 + iVar4;
  plVar10 = (long *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0xb8) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = *plVar10;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        uVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (LZCOUNT((long)*(int *)(lVar5 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          uVar6 = uVar6 + ((LZCOUNT((long)*(int *)(lVar5 + 0x1c) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
        }
      }
      lVar5 = FUN_006e5694(lVar5,uVar6,lVar5 + 0x14);
      lVar11 = lVar11 + -8;
      plVar10 = plVar10 + 1;
      lVar9 = lVar5 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar11 != 0);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 200);
  lVar9 = lVar9 + uVar6;
  if (0 < (int)*(uint *)(param_1 + 200)) {
    puVar7 = *(undefined8 **)(param_1 + 0xd0);
    do {
      puVar7 = puVar7 + 1;
      bVar3 = *(byte *)*puVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar7 + 8);
      }
      uVar6 = uVar6 - 1;
      lVar9 = uVar1 + lVar9 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      bVar3 = *pbVar8;
      uVar6 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar9 = lVar9 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar11 = FUN_006cab6c(*(undefined8 *)(param_1 + 0xe0));
      lVar9 = lVar9 + lVar11 + (ulong)(((uint)LZCOUNT((uint)lVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
  }
  FUN_006e5694(param_1,lVar9,param_1 + 0x14);
  return;
}


// ===== 006c22ec  FUN_006c22ec =====

void FUN_006c22ec(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_006d273c(param_1 + 0x18,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x40);
    uVar5 = FUN_00675710(param_1 + 0x30,iVar2);
    FUN_006d25a4(param_1 + 0x30,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar3 = **(int **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x40) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x58);
    uVar5 = FUN_00675710(param_1 + 0x48,iVar2);
    FUN_006d262c(param_1 + 0x48,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar3 = **(int **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x50) + iVar2;
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x58) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x70);
    uVar5 = FUN_00675710(param_1 + 0x60,iVar2);
    FUN_006d27c4(param_1 + 0x60,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar3 = **(int **)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x68) + iVar2;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x70) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x88);
    uVar5 = FUN_00675710(param_1 + 0x78,iVar2);
    FUN_006d273c(param_1 + 0x78,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    iVar3 = **(int **)(param_1 + 0x88);
    iVar2 = *(int *)(param_1 + 0x80) + iVar2;
    *(int *)(param_1 + 0x80) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x88) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x98);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0xa0);
    uVar5 = FUN_00675710(param_1 + 0x90,iVar2);
    FUN_006d284c(param_1 + 0x90,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0xa0) - *(int *)(param_1 + 0x98));
    iVar3 = **(int **)(param_1 + 0xa0);
    iVar2 = *(int *)(param_1 + 0x98) + iVar2;
    *(int *)(param_1 + 0x98) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0xa0) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0xb0);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0xb8);
    uVar5 = FUN_00675710(param_1 + 0xa8,iVar2);
    FUN_006d28d4(param_1 + 0xa8,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0));
    iVar3 = **(int **)(param_1 + 0xb8);
    iVar2 = *(int *)(param_1 + 0xb0) + iVar2;
    *(int *)(param_1 + 0xb0) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0xb8) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 200);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0xd0);
    uVar5 = FUN_00675710(param_1 + 0xc0,iVar2);
    FUN_005d663c(param_1 + 0xc0,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0xd0) - *(int *)(param_1 + 200));
    iVar3 = **(int **)(param_1 + 0xd0);
    iVar2 = *(int *)(param_1 + 200) + iVar2;
    *(int *)(param_1 + 200) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0xd0) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 3) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0xd8);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0xd8,uVar7 & 0xfffffffffffffffc,puVar6);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_006d1d0c(puVar6);
        *(long *)(param_1 + 0xe0) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa638;
      if (*(undefined ***)(param_2 + 0xe0) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xe0);
      }
      FUN_006cac2c(lVar8,ppuVar1);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c26a4  FUN_006c26a4 =====

undefined ** FUN_006c26a4(void)

{
  return &PTR_FUN_0079a668;
}


// ===== 006c26b0  FUN_006c26b0 =====

undefined8 FUN_006c26b0(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 5 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x40);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x38)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x38);
  while (0 < (int)uVar7) {
    uVar3 = FUN_006c26b0(*(undefined8 *)(*(long *)(param_1 + 0x40) + uVar7 * 8));
    uVar7 = uVar7 - 1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  while (0 < (int)uVar7) {
    uVar3 = FUN_006c6344(*(undefined8 *)(*(long *)(param_1 + 0x58) + uVar7 * 8));
    uVar7 = uVar7 - 1;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x70) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x18);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x30)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x30);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x88) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 5 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x40);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x38)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x98);
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 1 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x20);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x30)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x30);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  if (((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) &&
     (uVar7 = FUN_006c29e8(*(undefined8 *)(param_1 + 0xe0)), (uVar7 & 1) == 0)) {
    return 0;
  }
  return 1;
}


// ===== 006c29e8  FUN_006c29e8 =====

undefined8 FUN_006c29e8(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c2a60:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c2a60;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c2a80  FUN_006c2a80 =====

void FUN_006c2a80(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec00);
  return;
}


// ===== 006c2a98  FUN_006c2a98 =====

void FUN_006c2a98(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a33c0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006c2ac8 to 006c2acb has its CatchHandler @ 006c2ae4 */
  FUN_00663dac(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 006c2af8  FUN_006c2af8 =====

void FUN_006c2af8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c2b18 to 006c2b1b has its CatchHandler @ 006c2b88 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[7] != 0) && (param_1[5] == 0)) {
                    /* try { // try from 006c2b3c to 006c2b3f has its CatchHandler @ 006c2b84 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c2b8c  FUN_006c2b8c =====

void FUN_006c2b8c(void *param_1)

{
  FUN_006c2af8();
  free(param_1);
  return;
}


// ===== 006c2bb0  FUN_006c2bb0 =====

void FUN_006c2bb0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 006c2bb8  FUN_006c2bb8 =====

byte * FUN_006c2bb8(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar3 = PTR_PTR_007a3380;
LAB_006c2c10:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar6 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar6) {
        if (param_3[2] == 0 && 0 < iVar6) {
          return (byte *)0x0;
        }
        return param_2;
      }
      auVar10 = FUN_0066f53c(param_3,iVar6,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar10._0_8_;
      if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    bVar2 = *param_2;
    auVar10[8] = bVar2;
    auVar10._0_8_ = param_2 + 1;
    auVar10._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      iVar6 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
      if ((char)bVar1 < '\0') {
        auVar10 = FUN_0066fe50(param_2);
        param_2 = auVar10._0_8_;
        iVar6 = auVar10._8_4_;
      }
      else {
        param_2 = param_2 + 2;
        auVar10._8_4_ = iVar6;
        auVar10._0_8_ = param_2;
        auVar10._12_4_ = 0;
      }
      if (iVar6 == 0x1f3a) {
        param_2 = param_2 + -2;
        do {
          piVar8 = *(int **)(param_1 + 0x38);
          if (piVar8 == (int *)0x0) {
LAB_006c2cf0:
            uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x28));
            uVar4 = FUN_00675990(param_1 + 0x28,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
          }
          else {
            iVar6 = *(int *)(param_1 + 0x30);
            if (*piVar8 <= iVar6) goto LAB_006c2cf0;
            *(int *)(param_1 + 0x30) = iVar6 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar6 * 2 + 2),
                                           param_2 + 2);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
        goto LAB_006c2c10;
      }
    }
    pbVar7 = auVar10._0_8_;
    uVar5 = auVar10._8_4_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      if (pbVar7 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar5 - 1;
        return pbVar7;
      }
      return (byte *)0x0;
    }
    uVar9 = auVar10._8_8_ & 0xffffffff;
    if (uVar5 >> 6 < 0x7d) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar4 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(uVar9,uVar4,pbVar7,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(uVar9,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                       pbVar7,param_3);
      }
    }
    else {
      param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar9,pbVar7,puVar3,param_1 + 8,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006c2dd8  FUN_006c2dd8 =====

undefined8 FUN_006c2dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(999,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = FUN_00668058(param_1 + 0x10,PTR_PTR_007a3380,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


// ===== 006c2e94  FUN_006c2e94 =====

undefined4 FUN_006c2e94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c2e9c  FUN_006c2e9c =====

void FUN_006c2e9c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_0066a944(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = lVar2 + (long)iVar1 * 2;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      lVar3 = FUN_006cee4c(*puVar4);
      lVar5 = lVar5 + -8;
      lVar2 = lVar3 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x40);
  return;
}


// ===== 006c2f24  FUN_006c2f24 =====

void FUN_006c2f24(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x38);
    uVar3 = FUN_00675710(param_1 + 0x28,iVar1);
    FUN_006d2998(param_1 + 0x28,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
    iVar2 = **(int **)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x30) + iVar1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x38) = iVar1;
    }
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3380,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c2fe0  FUN_006c2fe0 =====

undefined ** FUN_006c2fe0(void)

{
  return &PTR_FUN_0079a678;
}


// ===== 006c2fec  FUN_006c2fec =====

void FUN_006c2fec(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar5 = (ulong)*(uint *)(param_1 + 0x30);
    if (0 < (int)*(uint *)(param_1 + 0x30)) {
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      do {
        puVar4 = puVar4 + 1;
        FUN_006ce578(*puVar4);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    pbVar6 = (byte *)(param_1 + 8);
    if ((*pbVar6 & 1) != 0) {
      FUN_006622b8(pbVar6);
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 != 0) {
      lVar7 = *(long *)(param_2 + 0x38);
      uVar3 = FUN_00675710(param_1 + 0x28,iVar1);
      FUN_006d2998(param_1 + 0x28,uVar3,lVar7 + 8,iVar1,
                   **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30));
      iVar2 = **(int **)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x30) + iVar1;
      *(int *)(param_1 + 0x30) = iVar1;
      if (iVar2 < iVar1) {
        **(int **)(param_1 + 0x38) = iVar1;
      }
    }
    FUN_00666818(param_1 + 0x10,PTR_PTR_007a3380,param_2 + 0x10);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      FUN_006621e0(pbVar6,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
      return;
    }
  }
  return;
}


// ===== 006c3100  FUN_006c3100 =====

void FUN_006c3100(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec10);
  return;
}


// ===== 006c3118  FUN_006c3118 =====

void FUN_006c3118(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = PTR_DAT_007a33d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0x100000001;
  param_1[3] = (long)&DAT_007aea80;
  param_1[4] = (long)&DAT_007aea80;
  param_1[5] = (long)&DAT_007aea80;
  param_1[6] = (long)&DAT_007aea80;
  param_1[7] = (long)&DAT_007aea80;
  return;
}


// ===== 006c3168  FUN_006c3168 =====

void FUN_006c3168(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c3188 to 006c31fb has its CatchHandler @ 006c3228 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    FUN_00663a20(param_1 + 4);
    FUN_00663a20(param_1 + 5);
    FUN_00663a20(param_1 + 6);
    FUN_00663a20(param_1 + 7);
    if ((param_1 != &PTR_PTR_FUN_007aa3c8) && (puVar2 = param_1[8], puVar2 != (undefined *)0x0)) {
      FUN_006cae4c(puVar2);
      free(puVar2);
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c322c  FUN_006c322c =====

void FUN_006c322c(void *param_1)

{
  FUN_006c3168();
  free(param_1);
  return;
}


// ===== 006c3250  FUN_006c3250 =====

void FUN_006c3250(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c3258  FUN_006c3258 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c3258(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_006c33c0(*(undefined8 *)(param_1 + 0x40));
    }
  }
  if ((uVar1 & 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0x100000001;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8();
    return;
  }
  return;
}


// ===== 006c33c0  FUN_006c33c0 =====

void FUN_006c33c0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 0x7f) != 0) {
    *(undefined8 *)(param_1 + 0x4d) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c3448  FUN_006c3448 =====

byte * FUN_006c3448(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  uVar12 = 0;
LAB_006c3488:
  if ((byte *)*param_3 <= param_2) {
    iVar3 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar3) {
      pbVar11 = (byte *)0x0;
      if (param_3[2] != 0 || iVar3 < 1) {
        pbVar11 = param_2;
      }
      goto LAB_006c39a0;
    }
    auVar14 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar14._0_8_;
    pbVar11 = param_2;
    if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c39a0;
  }
  pbVar11 = param_2 + 1;
  bVar2 = *param_2;
  auVar4[8] = bVar2;
  auVar4._0_8_ = pbVar11;
  auVar4._9_7_ = 0;
  auVar14[8] = bVar2;
  auVar14._0_8_ = pbVar11;
  auVar14._9_7_ = 0;
  if ((char)bVar2 < '\0') {
    uVar10 = ((uint)bVar2 + (uint)*pbVar11 * 0x80) - 0x80;
    if ((char)*pbVar11 < '\0') {
      auVar14 = FUN_0066fe50();
      uVar10 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
      auVar4 = auVar14;
      goto joined_r0x006c362c;
    }
    auVar4._8_4_ = uVar10;
    auVar4._0_8_ = param_2 + 2;
    auVar4._12_4_ = 0;
    auVar14._8_4_ = uVar10;
    auVar14._0_8_ = param_2 + 2;
    auVar14._12_4_ = 0;
    uVar10 = uVar10 >> 3;
    if (5 < uVar10) goto LAB_006c34b0;
LAB_006c3528:
    auVar14 = auVar4;
    pbVar11 = auVar14._0_8_;
    uVar8 = auVar14._8_4_;
    if (uVar10 < 3) {
      if (uVar10 == 1) {
        if ((uVar8 & 0xff) == 10) {
          puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar7 = param_1 + 0x18;
          goto LAB_006c3474;
        }
      }
      else if ((uVar10 == 2) && ((uVar8 & 0xff) == 0x12)) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = param_1 + 0x20;
LAB_006c3474:
        uVar6 = FUN_0066399c(lVar7,puVar5);
        param_2 = (byte *)FUN_0066ff90(uVar6,pbVar11,param_3);
        goto joined_r0x006c3898;
      }
    }
    else if (uVar10 == 3) {
      if ((uVar8 & 0xff) == 0x18) {
        uVar12 = uVar12 | 0x40;
        param_2 = pbVar11 + 1;
        uVar10 = (uint)*pbVar11;
        if ((char)*pbVar11 < '\0') {
          uVar10 = (uVar10 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar15 = FUN_0066fc04(pbVar11);
            param_2 = auVar15._0_8_;
            *(int *)(param_1 + 0x48) = auVar15._8_4_;
            goto joined_r0x006c3898;
          }
          param_2 = pbVar11 + 2;
        }
        *(uint *)(param_1 + 0x48) = uVar10;
        goto LAB_006c3488;
      }
    }
    else if (uVar10 == 4) {
      if ((uVar8 & 0xff) == 0x20) {
        bVar2 = *pbVar11;
        auVar13._8_8_ = (long)(char)bVar2;
        auVar13._0_8_ = pbVar11 + 1;
        if ((long)(char)bVar2 < 0) {
          bVar1 = pbVar11[1];
          if ((char)bVar1 < '\0') {
            auVar13 = FUN_0066fd14(pbVar11);
            if (auVar13._0_8_ == 0) goto LAB_006c39c4;
          }
          else {
            auVar13._8_4_ = (uint)bVar1 * 0x80 + (uint)bVar2 + -0x80;
            auVar13._0_8_ = pbVar11 + 2;
            auVar13._12_4_ = 0;
          }
        }
        param_2 = auVar13._0_8_;
        if (auVar13._8_4_ - 1U < 3) {
          *(int *)(param_1 + 0x54) = auVar13._8_4_;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
        }
        else {
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            lVar7 = FUN_00661fa4(param_1 + 8);
          }
          else {
            lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
          }
          uVar6 = 4;
LAB_006c3924:
          param_2 = auVar13._0_8_;
          FUN_006faf8c(lVar7,uVar6,auVar13._8_8_);
        }
        goto LAB_006c3488;
      }
    }
    else if ((uVar10 == 5) && ((uVar8 & 0xff) == 0x28)) {
      bVar2 = *pbVar11;
      auVar13._8_8_ = (long)(char)bVar2;
      auVar13._0_8_ = pbVar11 + 1;
      if ((long)(char)bVar2 < 0) {
        bVar1 = pbVar11[1];
        if ((char)bVar1 < '\0') {
          auVar13 = FUN_0066fd14(pbVar11);
          if (auVar13._0_8_ == 0) goto LAB_006c39c4;
        }
        else {
          auVar13._8_4_ = (uint)bVar1 * 0x80 + (uint)bVar2 + -0x80;
          auVar13._0_8_ = pbVar11 + 2;
          auVar13._12_4_ = 0;
        }
      }
      param_2 = auVar13._0_8_;
      if (0x11 < auVar13._8_4_ - 1U) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          lVar7 = FUN_00661fa4(param_1 + 8);
        }
        else {
          lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
        }
        uVar6 = 5;
        goto LAB_006c3924;
      }
      *(int *)(param_1 + 0x58) = auVar13._8_4_;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
      goto LAB_006c3488;
    }
  }
  else {
    uVar10 = (uint)(bVar2 >> 3);
joined_r0x006c362c:
    if (uVar10 < 6) goto LAB_006c3528;
LAB_006c34b0:
    pbVar11 = auVar14._0_8_;
    uVar8 = auVar14._8_4_;
    if (uVar10 < 9) {
      if (uVar10 == 6) {
        if ((uVar8 & 0xff) != 0x32) goto LAB_006c379c;
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = param_1 + 0x28;
        goto LAB_006c3474;
      }
      if (uVar10 == 7) {
        if ((uVar8 & 0xff) == 0x3a) {
          puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar7 = param_1 + 0x30;
          goto LAB_006c3474;
        }
        goto LAB_006c379c;
      }
      if ((uVar10 != 8) || ((uVar8 & 0xff) != 0x42)) goto LAB_006c379c;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      if (*(long *)(param_1 + 0x40) == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        uVar6 = FUN_006d1d8c(puVar5);
        *(undefined8 *)(param_1 + 0x40) = uVar6;
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,pbVar11);
      }
      else {
        param_2 = (byte *)FUN_0066fa8c(param_3,*(long *)(param_1 + 0x40),pbVar11);
      }
      goto joined_r0x006c3898;
    }
    if (uVar10 == 9) {
      if ((uVar8 & 0xff) == 0x48) {
        uVar12 = uVar12 | 0x80;
        param_2 = pbVar11 + 1;
        uVar10 = (uint)*pbVar11;
        if ((char)*pbVar11 < '\0') {
          uVar10 = (uVar10 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar15 = FUN_0066fc04(pbVar11);
            param_2 = auVar15._0_8_;
            *(int *)(param_1 + 0x4c) = auVar15._8_4_;
            goto joined_r0x006c3898;
          }
          param_2 = pbVar11 + 2;
        }
        *(uint *)(param_1 + 0x4c) = uVar10;
        goto LAB_006c3488;
      }
    }
    else {
      if (uVar10 != 10) {
        if ((uVar10 != 0x11) || ((uVar8 & 0xff) != 0x88)) goto LAB_006c379c;
        uVar12 = uVar12 | 0x100;
        param_2 = pbVar11 + 1;
        uVar9 = (ulong)(char)*pbVar11;
        if ((long)uVar9 < 0) {
          uVar9 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
          if ((char)*param_2 < '\0') {
            auVar14 = FUN_0066fd14(pbVar11);
            param_2 = auVar14._0_8_;
            *(bool *)(param_1 + 0x50) = auVar14._8_8_ != 0;
            goto joined_r0x006c3898;
          }
          param_2 = pbVar11 + 2;
        }
        *(bool *)(param_1 + 0x50) = uVar9 != 0;
        goto LAB_006c3488;
      }
      if ((uVar8 & 0xff) == 0x52) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = param_1 + 0x38;
        goto LAB_006c3474;
      }
    }
  }
LAB_006c379c:
  pbVar11 = auVar14._0_8_;
  uVar10 = auVar14._8_4_;
  if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
    if (pbVar11 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar10 - 1;
    }
    goto LAB_006c39a0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar6 = FUN_00661fa4(param_1 + 8);
    param_2 = (byte *)FUN_006fbab8(auVar14._8_8_ & 0xffffffff,uVar6,pbVar11,param_3);
  }
  else {
    param_2 = (byte *)FUN_006fbab8(auVar14._8_8_ & 0xffffffff,
                                   (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar11,
                                   param_3);
  }
joined_r0x006c3898:
  if (param_2 == (byte *)0x0) {
LAB_006c39c4:
    pbVar11 = (byte *)0x0;
LAB_006c39a0:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar12;
    return pbVar11;
  }
  goto LAB_006c3488;
}


// ===== 006c39e8  FUN_006c39e8 =====

/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_006c39e8(long param_1,undefined2 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy((undefined2 *)((long)param_2 + 2U),pvVar2,sVar1);
      param_2 = (undefined2 *)((long)param_2 + 2U + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,2);
    }
  }
  if ((uVar3 >> 6 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar5 = *(uint *)(param_1 + 0x48);
      *(undefined1 *)param_2 = 0x18;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar5 = *(uint *)(param_1 + 0x48);
      *(undefined1 *)param_2 = 0x18;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    if (uVar5 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar8 = (ulong)(long)(int)uVar5 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar5 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar6 = param_2;
      if (0x3fff < uVar5) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = *(byte *)((long)puVar6 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          *(char *)puVar6 = (char)uVar8;
          puVar6 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 >> 9 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar5 = *(uint *)(param_1 + 0x54);
      *(undefined1 *)param_2 = 0x20;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar5 = *(uint *)(param_1 + 0x54);
      *(undefined1 *)param_2 = 0x20;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    if (uVar5 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar8 = (ulong)(long)(int)uVar5 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar5 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar6 = param_2;
      if (0x3fff < uVar5) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = *(byte *)((long)puVar6 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          *(char *)puVar6 = (char)uVar8;
          puVar6 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 >> 10 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar5 = *(uint *)(param_1 + 0x58);
      *(undefined1 *)param_2 = 0x28;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar5 = *(uint *)(param_1 + 0x58);
      *(undefined1 *)param_2 = 0x28;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    if (uVar5 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar8 = (ulong)(long)(int)uVar5 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar5 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar6 = param_2;
      if (0x3fff < uVar5) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = *(byte *)((long)puVar6 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          *(char *)puVar6 = (char)uVar8;
          puVar6 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x32;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,6);
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x3a;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy((undefined2 *)((long)param_2 + 2U),pvVar2,sVar1);
      param_2 = (undefined2 *)((long)param_2 + 2U + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,7);
    }
  }
  if ((uVar3 >> 5 & 1) != 0) {
    param_2 = (undefined2 *)
              FUN_00678d18(8,*(long *)(param_1 + 0x40),
                           *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2c),param_2,param_3);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar5 = *(uint *)(param_1 + 0x4c);
      *(undefined1 *)param_2 = 0x48;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar5 = *(uint *)(param_1 + 0x4c);
      *(undefined1 *)param_2 = 0x48;
      *(char *)((long)param_2 + 1) = (char)uVar5;
    }
    if (uVar5 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar8 = (ulong)(long)(int)uVar5 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar5 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar6 = param_2;
      if (0x3fff < uVar5) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = *(byte *)((long)puVar6 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          *(char *)puVar6 = (char)uVar8;
          puVar6 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 >> 4 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x52;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,10);
    }
  }
  if ((uVar3 >> 8 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar4 = *(undefined1 *)(param_1 + 0x50);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar4;
    param_2 = (undefined2 *)((long)param_2 + 3);
    uVar8 = *(ulong *)(param_1 + 8);
  }
  if ((uVar8 & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined2 *)FUN_006fc418((uVar8 & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar6;
}


// ===== 006c3fb4  FUN_006c3fb4 =====

undefined4 FUN_006c3fb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c3fbc  FUN_006c3fbc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c3fbc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar4 = FUN_006cb7d8(*(undefined8 *)(param_1 + 0x40));
      lVar5 = lVar5 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x48) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 >> 7 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x4c) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
  }
  if ((uVar2 & 0x700) != 0) {
    if ((uVar2 & 0x100) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x54) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0x58) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar5,param_1 + 0x14);
  return;
}


// ===== 006c4248  FUN_006c4248 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c4248(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x20,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x20,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x28,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x28,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x30,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x30,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 4 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x38,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x38,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_006d1d8c(puVar4);
        *(long *)(param_1 + 0x40) = lVar3;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa688;
      if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x40);
      }
      FUN_006cb8e4(lVar3,ppuVar1);
    }
    if ((uVar2 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar2 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((uVar2 & 0x700) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    }
    if ((uVar2 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar2 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c44c8  FUN_006c44c8 =====

undefined ** FUN_006c44c8(void)

{
  return &PTR_FUN_0079a688;
}


// ===== 006c44d4  FUN_006c44d4 =====

undefined8 FUN_006c44d4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_00667e24(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c455c:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c455c;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c457c  FUN_006c457c =====

undefined8 FUN_006c457c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c45f4:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c45f4;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c4614  FUN_006c4614 =====

void FUN_006c4614(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec20);
  return;
}


// ===== 006c462c  FUN_006c462c =====

void FUN_006c462c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a33f0;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 006c465c  FUN_006c465c =====

void FUN_006c465c(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c467c to 006c46cf has its CatchHandler @ 006c46fc */
    uVar1 = FUN_00662218();
  }
  if (((uVar1 == 0) && (FUN_00663a20(param_1 + 3), param_1 != &PTR_PTR_FUN_007aa428)) &&
     (puVar2 = param_1[4], puVar2 != (undefined *)0x0)) {
    FUN_006cbae4(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c4700  FUN_006c4700 =====

void FUN_006c4700(void *param_1)

{
  FUN_006c465c();
  free(param_1);
  return;
}


// ===== 006c4724  FUN_006c4724 =====

void FUN_006c4724(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c472c  FUN_006c472c =====

void FUN_006c472c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      FUN_006667cc(lVar4 + 0x10);
      uVar5 = (ulong)*(uint *)(lVar4 + 0x30);
      if (0 < (int)*(uint *)(lVar4 + 0x30)) {
        puVar2 = *(undefined8 **)(lVar4 + 0x38);
        do {
          puVar2 = puVar2 + 1;
          FUN_006ce578(*puVar2);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 0x30) = 0;
      }
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar4 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006c47f4  FUN_006c47f4 =====

void FUN_006c47f4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c4864  FUN_006c4864 =====

byte * FUN_006c4864(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar7 = param_2;
          }
          return pbVar7;
        }
        auVar8 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar8._0_8_;
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar7 = param_2 + 1;
      uVar6 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar6 = (uVar6 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = param_2 + 2;
        break;
      }
      auVar8 = FUN_0066fe50();
      uVar6 = (uint)(auVar8._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar8;
      if (uVar6 == 2) goto LAB_006c493c;
LAB_006c48e0:
      auVar8 = auVar2;
      if ((uVar6 == 1) && ((auVar8._8_4_ & 0xff) == 10)) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        uVar3 = FUN_0066399c(param_1 + 0x18,puVar4);
        param_2 = (byte *)FUN_0066ff90(uVar3,auVar8._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
LAB_006c4970:
        pbVar7 = auVar8._0_8_;
        uVar6 = auVar8._8_4_;
        if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
          if (pbVar7 != (byte *)0x0) {
            *(uint *)(param_3 + 10) = uVar6 - 1;
            return pbVar7;
          }
          return (byte *)0x0;
        }
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar3 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(auVar8._8_8_ & 0xffffffff,uVar3,pbVar7,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          param_2 = (byte *)FUN_006fbab8(auVar8._8_8_ & 0xffffffff,
                                         (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar7,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
    }
    auVar2._8_4_ = uVar6;
    auVar2._0_8_ = pbVar7;
    auVar2._12_4_ = 0;
    auVar8._8_4_ = uVar6;
    auVar8._0_8_ = pbVar7;
    auVar8._12_4_ = 0;
    uVar6 = uVar6 >> 3;
    if (uVar6 != 2) goto LAB_006c48e0;
LAB_006c493c:
    if ((auVar8._8_4_ & 0xff) != 0x12) goto LAB_006c4970;
    lVar5 = *(long *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    if (lVar5 == 0) {
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = FUN_006d1e0c(puVar4);
      *(long *)(param_1 + 0x20) = lVar5;
    }
    param_2 = (byte *)FUN_0066fa8c(param_3,lVar5,auVar8._0_8_);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006c4a60  FUN_006c4a60 =====

undefined1 * FUN_006c4a60(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      __n = *(size_t *)(pbVar3 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)__n;
      *param_2 = 10;
      __src = (void *)((ulong)pbVar3 | 1);
      if ((*pbVar3 & 1) != 0) {
        __src = *(void **)(pbVar3 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x20),
                           *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,param_3);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    puVar2 = (undefined1 *)FUN_006fc418((uVar4 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar2;
  }
  return param_2;
}


// ===== 006c4b78  FUN_006c4b78 =====

undefined4 FUN_006c4b78(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 006c4b80  FUN_006c4b80 =====

void FUN_006c4b80(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar8;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar8 + 8);
    }
    lVar7 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    FUN_006e5694(param_1,lVar7,param_1 + 0x14);
    return;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  lVar5 = FUN_0066a944(lVar9 + 0x10);
  iVar4 = *(int *)(lVar9 + 0x30);
  lVar5 = lVar5 + (long)iVar4 * 2;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(lVar9 + 0x38) != 0) {
    puVar10 = (undefined8 *)(*(long *)(lVar9 + 0x38) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_006cee4c(*puVar10);
      lVar11 = lVar11 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  lVar5 = FUN_006e5694(lVar9,lVar5,lVar9 + 0x40);
  FUN_006e5694(param_1,lVar7 + lVar5 +
                       (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1,
               param_1 + 0x14);
  return;
}


// ===== 006c4cb4  FUN_006c4cb4 =====

void FUN_006c4cb4(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x18);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0x18,uVar7 & 0xfffffffffffffffc,puVar6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_006d1e0c(puVar6);
        *(long *)(param_1 + 0x20) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa6e0;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x20);
      }
      iVar3 = *(int *)(ppuVar1 + 6);
      if (iVar3 != 0) {
        puVar9 = ppuVar1[7];
        uVar5 = FUN_00675710(lVar8 + 0x28,iVar3);
        FUN_006d2998(lVar8 + 0x28,uVar5,puVar9 + 8,iVar3,
                     **(int **)(lVar8 + 0x38) - *(int *)(lVar8 + 0x30));
        iVar4 = **(int **)(lVar8 + 0x38);
        iVar3 = *(int *)(lVar8 + 0x30) + iVar3;
        *(int *)(lVar8 + 0x30) = iVar3;
        if (iVar4 < iVar3) {
          **(int **)(lVar8 + 0x38) = iVar3;
        }
      }
      FUN_00666818(lVar8 + 0x10,PTR_PTR_007a3400,ppuVar1 + 2);
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar8 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c4e20  FUN_006c4e20 =====

undefined ** FUN_006c4e20(void)

{
  return &PTR_FUN_0079a698;
}


// ===== 006c4e2c  FUN_006c4e2c =====

undefined8 FUN_006c4e2c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_00667e24(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c4eb4:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x30) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x30);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c4eb4;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c4ed4  FUN_006c4ed4 =====

undefined8 FUN_006c4ed4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c4f4c:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x30) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c4f4c;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c4f6c  FUN_006c4f6c =====

void FUN_006c4f6c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec30);
  return;
}


// ===== 006c4f84  FUN_006c4f84 =====

void FUN_006c4f84(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3410;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 006c4fa8  FUN_006c4fa8 =====

void FUN_006c4fa8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = param_1 + 1;
  uVar1 = *puVar2;
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 006c4fc4 to 006c4fcb has its CatchHandler @ 006c5010 */
    FUN_00662218(puVar2);
    uVar1 = *puVar2;
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)uVar1 >> 1 & 1) != 0) && (__ptr = (void *)(uVar1 - 2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c5014  FUN_006c5014 =====

void FUN_006c5014(void *param_1)

{
  FUN_006c4fa8();
  free(param_1);
  return;
}


// ===== 006c5038  FUN_006c5038 =====

void FUN_006c5038(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c5040  FUN_006c5040 =====

void FUN_006c5040(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006c5064  FUN_006c5064 =====

byte * FUN_006c5064(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  uVar6 = 0;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar4 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar4 = param_2;
          }
          goto LAB_006c5230;
        }
        auVar7 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar7._0_8_;
        pbVar4 = param_2;
        if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c5230;
      }
      pbVar4 = param_2 + 1;
      uVar5 = (uint)*param_2;
      if ((char)*param_2 < '\0') break;
LAB_006c50c8:
      auVar2._8_4_ = uVar5;
      auVar2._0_8_ = pbVar4;
      auVar2._12_4_ = 0;
      auVar7._8_4_ = uVar5;
      auVar7._0_8_ = pbVar4;
      auVar7._12_4_ = 0;
      uVar5 = uVar5 >> 3;
      if (uVar5 != 2) goto LAB_006c50d4;
LAB_006c5138:
      pbVar4 = auVar7._0_8_;
      if ((auVar7._8_4_ & 0xff) != 0x10) goto LAB_006c5178;
      uVar6 = uVar6 | 2;
      param_2 = pbVar4 + 1;
      uVar5 = (uint)*pbVar4;
      if ((char)*pbVar4 < '\0') {
        uVar5 = (uVar5 + (uint)*param_2 * 0x80) - 0x80;
        if (-1 < (char)*param_2) {
          param_2 = pbVar4 + 2;
          goto LAB_006c5170;
        }
        auVar8 = FUN_0066fc04(pbVar4);
        param_2 = auVar8._0_8_;
        *(int *)(param_1 + 0x1c) = auVar8._8_4_;
joined_r0x006c51a8:
        if (param_2 == (byte *)0x0) {
          pbVar4 = (byte *)0x0;
LAB_006c5230:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
          return pbVar4;
        }
      }
      else {
LAB_006c5170:
        *(uint *)(param_1 + 0x1c) = uVar5;
      }
    }
    uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
    if (-1 < (char)*pbVar4) {
      pbVar4 = param_2 + 2;
      goto LAB_006c50c8;
    }
    auVar7 = FUN_0066fe50();
    uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar7;
    if (uVar5 == 2) goto LAB_006c5138;
LAB_006c50d4:
    auVar7 = auVar2;
    pbVar4 = auVar7._0_8_;
    if ((uVar5 != 1) || ((auVar7._8_4_ & 0xff) != 8)) {
LAB_006c5178:
      pbVar4 = auVar7._0_8_;
      uVar5 = auVar7._8_4_;
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        if (pbVar4 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar5 - 1;
        }
        goto LAB_006c5230;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar3 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,uVar3,pbVar4,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar4,
                                       param_3);
      }
      goto joined_r0x006c51a8;
    }
    uVar6 = uVar6 | 1;
    param_2 = pbVar4 + 1;
    uVar5 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') {
      uVar5 = (uVar5 + (uint)*param_2 * 0x80) - 0x80;
      if ((char)*param_2 < '\0') {
        auVar8 = FUN_0066fc04(pbVar4);
        param_2 = auVar8._0_8_;
        *(int *)(param_1 + 0x18) = auVar8._8_4_;
        goto joined_r0x006c51a8;
      }
      param_2 = pbVar4 + 2;
    }
    *(uint *)(param_1 + 0x18) = uVar5;
  } while( true );
}


// ===== 006c5270  FUN_006c5270 =====

undefined1 * FUN_006c5270(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar2 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x10;
      param_2[1] = (char)uVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar1 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x10;
      param_2[1] = (char)uVar1;
    }
    if (uVar1 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar1 >> 7;
      param_2[1] = (byte)uVar1 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar1) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 006c53f0  FUN_006c53f0 =====

void FUN_006c53f0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (LZCOUNT((long)*(int *)(param_1 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((LZCOUNT((long)*(int *)(param_1 + 0x1c) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    FUN_006e5694(param_1,uVar2,param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,0,param_1 + 0x14);
  return;
}


// ===== 006c545c  FUN_006c545c =====

void FUN_006c545c(long param_1,long param_2)

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
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c54a8  FUN_006c54a8 =====

undefined ** FUN_006c54a8(void)

{
  return &PTR_FUN_0079a6a8;
}


// ===== 006c54b4  FUN_006c54b4 =====

undefined8 FUN_006c54b4(void)

{
  return 1;
}


// ===== 006c54bc  FUN_006c54bc =====

void FUN_006c54bc(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec40);
  return;
}


// ===== 006c54d4  FUN_006c54d4 =====

void FUN_006c54d4(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3420;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = (long)puVar2;
  return;
}


// ===== 006c5518  FUN_006c5518 =====

void FUN_006c5518(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c5538 to 006c553b has its CatchHandler @ 006c55f8 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 006c5598 to 006c559b has its CatchHandler @ 006c55f4 */
      FUN_00675910();
    }
    if ((param_1[8] != (undefined *)0x0) && (param_1[6] == (undefined *)0x0)) {
                    /* try { // try from 006c55b0 to 006c55b3 has its CatchHandler @ 006c55f0 */
      FUN_00675910();
    }
    FUN_00675290(param_1 + 9);
                    /* try { // try from 006c55bc to 006c55c3 has its CatchHandler @ 006c55f8 */
    FUN_00663a20(param_1 + 0xc);
    if ((param_1 != &PTR_PTR_FUN_007aa470) && (puVar2 = param_1[0xd], puVar2 != (undefined *)0x0)) {
      FUN_006cc15c(puVar2);
      free(puVar2);
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c55fc  FUN_006c55fc =====

void FUN_006c55fc(void *param_1)

{
  FUN_006c5518();
  free(param_1);
  return;
}


// ===== 006c5620  FUN_006c5620 =====

void FUN_006c5620(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c5628  FUN_006c5628 =====

void FUN_006c5628(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar3 = puVar3 + 1;
      FUN_006c6668(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    plVar4 = *(long **)(param_1 + 0x40);
    do {
      plVar4 = plVar4 + 1;
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8();
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while (pbVar5 = (byte *)*puVar3, (*pbVar5 & 1) != 0) {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 1;
        if (uVar6 == 0) goto LAB_006c5700;
      }
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      uVar6 = uVar6 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0);
LAB_006c5700:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x68);
      FUN_006667cc(lVar2 + 0x10);
      uVar6 = (ulong)*(uint *)(lVar2 + 0x38);
      if (0 < (int)*(uint *)(lVar2 + 0x38)) {
        puVar3 = *(undefined8 **)(lVar2 + 0x40);
        do {
          puVar3 = puVar3 + 1;
          FUN_006ce578(*puVar3);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        *(undefined4 *)(lVar2 + 0x38) = 0;
      }
      *(undefined2 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar2 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c57bc  FUN_006c57bc =====

void FUN_006c57bc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c5834  FUN_006c5834 =====

byte * FUN_006c5834(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  
  puVar4 = PTR_PTR_007a2ea8;
  puVar3 = PTR_FUN_007a2ca8;
LAB_006c5888:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar13 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar13 = param_2;
      }
      return pbVar13;
    }
    auVar14 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar14._0_8_;
    if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar13 = param_2 + 1;
  uVar11 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar11 = (uVar11 + (uint)*pbVar13 * 0x80) - 0x80;
    if (-1 < (char)*pbVar13) {
      pbVar13 = param_2 + 2;
      goto LAB_006c58bc;
    }
    auVar14 = FUN_0066fe50(param_2);
    uVar11 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar14;
    if (uVar11 < 3) goto LAB_006c5a84;
LAB_006c58c8:
    auVar14 = auVar2;
    lVar8 = auVar14._0_8_;
    uVar9 = auVar14._8_4_;
    if (uVar11 == 3) {
      if ((uVar9 & 0xff) != 0x1a) goto LAB_006c5b68;
      lVar10 = *(long *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar10 == 0) {
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar10 = FUN_006d1e8c(puVar7);
        *(long *)(param_1 + 0x68) = lVar10;
      }
      param_2 = (byte *)FUN_0066fa8c(param_3,lVar10,lVar8);
      goto LAB_006c5880;
    }
    if (uVar11 == 4) {
      if ((uVar9 & 0xff) != 0x22) goto LAB_006c5b68;
      param_2 = (byte *)(lVar8 + -1);
      do {
        piVar12 = *(int **)(param_1 + 0x40);
        if (piVar12 == (int *)0x0) {
LAB_006c5a24:
          uVar6 = FUN_006d1a0c(*(undefined8 *)(param_1 + 0x30));
          uVar6 = FUN_00675990(param_1 + 0x30,uVar6);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x38);
          if (*piVar12 <= iVar1) goto LAB_006c5a24;
          *(int *)(param_1 + 0x38) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
      goto LAB_006c5888;
    }
    if ((uVar11 == 5) && ((uVar9 & 0xff) == 0x2a)) {
      param_2 = (byte *)(lVar8 + -1);
      do {
        piVar12 = *(int **)(param_1 + 0x58);
        if (piVar12 == (int *)0x0) {
LAB_006c5930:
          if (*(long *)(param_1 + 0x48) == 0) {
            puVar5 = (undefined8 *)FUN_00759c3c(0x18);
          }
          else {
            auVar14 = FUN_00663600(*(long *)(param_1 + 0x48),0x18,puVar4);
            puVar5 = auVar14._0_8_;
            *auVar14._8_8_ = puVar5;
            auVar14._8_8_[1] = puVar3;
          }
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          uVar6 = FUN_00675990(param_1 + 0x48,puVar5);
          param_2 = (byte *)FUN_0066ff90(uVar6,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x50);
          if (*piVar12 <= iVar1) goto LAB_006c5930;
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),param_2 + 1,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
      goto LAB_006c5888;
    }
  }
  else {
LAB_006c58bc:
    auVar2._8_4_ = uVar11;
    auVar2._0_8_ = pbVar13;
    auVar2._12_4_ = 0;
    auVar14._8_4_ = uVar11;
    auVar14._0_8_ = pbVar13;
    auVar14._12_4_ = 0;
    uVar11 = uVar11 >> 3;
    if (2 < uVar11) goto LAB_006c58c8;
LAB_006c5a84:
    if (uVar11 == 1) {
      if ((auVar14._8_4_ & 0xff) != 10) goto LAB_006c5b68;
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
      uVar6 = FUN_0066399c(param_1 + 0x60,puVar7);
      param_2 = (byte *)FUN_0066ff90(uVar6,auVar14._0_8_,param_3);
      goto LAB_006c5880;
    }
    if ((uVar11 == 2) && ((auVar14._8_4_ & 0xff) == 0x12)) {
      param_2 = (byte *)(auVar14._0_8_ + -1);
      do {
        piVar12 = *(int **)(param_1 + 0x28);
        if (piVar12 == (int *)0x0) {
LAB_006c5ae4:
          uVar6 = FUN_006d1b0c(*(undefined8 *)(param_1 + 0x18));
          uVar6 = FUN_00675990(param_1 + 0x18,uVar6);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar6,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x20);
          if (*piVar12 <= iVar1) goto LAB_006c5ae4;
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar12 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
      goto LAB_006c5888;
    }
  }
LAB_006c5b68:
  pbVar13 = auVar14._0_8_;
  uVar11 = auVar14._8_4_;
  if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
    if (pbVar13 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar11 - 1;
      return pbVar13;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar8 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar8 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar14._8_8_ & 0xffffffff,lVar8,pbVar13,param_3);
LAB_006c5880:
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_006c5888;
}


// ===== 006c5c58  FUN_006c5c58 =====

undefined1 * FUN_006c5c58(long param_1,undefined1 *param_2,long *param_3)

{
  void *__src;
  size_t sVar1;
  byte *__src_00;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
      iVar3 = *(int *)(param_1 + 0x20);
      goto joined_r0x006c5cf4;
    }
    param_2[1] = (char)sVar1;
    *param_2 = 10;
    __src = (void *)((ulong)pbVar6 | 1);
    if ((*pbVar6 & 1) != 0) {
      __src = *(void **)(pbVar6 + 0x10);
    }
    memcpy(param_2 + 2,__src,sVar1);
    param_2 = param_2 + 2 + sVar1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
joined_r0x006c5cf4:
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(2,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(3,*(long *)(param_1 + 0x68),
                           *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2c),param_2,param_3);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar7 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(4,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    lVar8 = (ulong)*(uint *)(param_1 + 0x50) * 8;
    lVar5 = 0;
    do {
      while( true ) {
        pbVar6 = *(byte **)(*(long *)(param_1 + 0x58) + lVar5 + 8);
        sVar1 = (ulong)(*pbVar6 >> 1);
        if ((*pbVar6 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar6 + 8);
        }
        if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) break;
        *param_2 = 0x2a;
        param_2[1] = (char)sVar1;
        __src_00 = pbVar6 + 1;
        if ((*pbVar6 & 1) != 0) {
          __src_00 = *(byte **)(pbVar6 + 0x10);
        }
        memcpy(param_2 + 2,__src_00,sVar1);
        param_2 = param_2 + 2 + sVar1;
        lVar5 = lVar5 + 8;
        if (lVar8 - lVar5 == 0) goto LAB_006c5e2c;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,5);
      lVar5 = lVar5 + 8;
    } while (lVar8 - lVar5 != 0);
  }
LAB_006c5e2c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar4 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar4;
}


// ===== 006c5e94  FUN_006c5e94 =====

undefined4 FUN_006c5e94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c5e9c  FUN_006c5e9c =====

undefined4 FUN_006c5e9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c5ea4  FUN_006c5ea4 =====

undefined4 FUN_006c5ea4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c5eac  FUN_006c5eac =====

void FUN_006c5eac(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = (long)*(int *)(param_1 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar10 = 0;
  }
  else {
    lVar12 = lVar10 << 3;
    do {
      lVar5 = FUN_006c6be4(*puVar8);
      lVar12 = lVar12 + -8;
      lVar10 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar8 = puVar8 + 1;
    } while (lVar12 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar10 = lVar10 + iVar4;
  plVar11 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar12 = (long)iVar4 << 3;
    do {
      lVar5 = *plVar11;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        uVar7 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (LZCOUNT((long)*(int *)(lVar5 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          uVar7 = uVar7 + ((LZCOUNT((long)*(int *)(lVar5 + 0x1c) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
        }
      }
      lVar5 = FUN_006e5694(lVar5,uVar7,lVar5 + 0x14);
      lVar12 = lVar12 + -8;
      plVar11 = plVar11 + 1;
      lVar10 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar12 != 0);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  lVar10 = lVar10 + uVar7;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar8 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar8 = puVar8 + 1;
      bVar3 = *(byte *)*puVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar8 + 8);
      }
      uVar7 = uVar7 - 1;
      lVar10 = uVar1 + lVar10 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      bVar3 = *pbVar9;
      uVar7 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      lVar10 = lVar10 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x68);
      lVar12 = FUN_0066a944(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x38);
      lVar12 = lVar12 + (long)iVar4 * 2;
      puVar8 = (undefined8 *)0x0;
      if (*(long *)(lVar5 + 0x40) != 0) {
        puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x40) + 8);
      }
      if (iVar4 != 0) {
        lVar13 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_006cee4c(*puVar8);
          lVar13 = lVar13 + -8;
          lVar12 = lVar6 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
          ;
          puVar8 = puVar8 + 1;
        } while (lVar13 != 0);
      }
      uVar2 = *(uint *)(lVar5 + 0x28);
      if ((uVar2 & 3) != 0) {
        lVar12 = lVar12 + (ulong)(uVar2 & 2) + ((ulong)uVar2 & 1) * 2;
      }
      lVar12 = FUN_006e5694(lVar5,lVar12,lVar5 + 0x2c);
      lVar10 = lVar10 + lVar12 + (ulong)(((uint)LZCOUNT((uint)lVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
               1;
    }
  }
  FUN_006e5694(param_1,lVar10,param_1 + 0x14);
  return;
}


// ===== 006c614c  FUN_006c614c =====

void FUN_006c614c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_006d2a20(param_1 + 0x18,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x40);
    uVar5 = FUN_00675710(param_1 + 0x30,iVar2);
    FUN_006d2aa8(param_1 + 0x30,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar3 = **(int **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x40) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x58);
    uVar5 = FUN_00675710(param_1 + 0x48,iVar2);
    FUN_005d663c(param_1 + 0x48,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar3 = **(int **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x50) + iVar2;
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x58) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 3) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x60);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0x60,uVar7 & 0xfffffffffffffffc,puVar6);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_006d1e8c(puVar6);
        *(long *)(param_1 + 0x68) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa728;
      if (*(undefined ***)(param_2 + 0x68) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x68);
      }
      FUN_006cc718(lVar8,ppuVar1);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c6338  FUN_006c6338 =====

undefined ** FUN_006c6338(void)

{
  return &PTR_FUN_0079a6b8;
}


// ===== 006c6344  FUN_006c6344 =====

undefined8 FUN_006c6344(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 1 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x20);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x38)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x68);
    uVar7 = FUN_00667e24(lVar4 + 0x10);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if ((int)*(uint *)(lVar4 + 0x38) < 1) {
      return 1;
    }
    uVar7 = (ulong)*(uint *)(lVar4 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar7 - 1) * 8);
      uVar3 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar3) {
        lVar2 = uVar3 * 8;
        uVar3 = uVar3 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        {
          return 0;
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  return 1;
}


// ===== 006c64b4  FUN_006c64b4 =====

undefined8 FUN_006c64b4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c652c:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c652c;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c654c  FUN_006c654c =====

void FUN_006c654c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec50);
  return;
}


// ===== 006c6564  FUN_006c6564 =====

void FUN_006c6564(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3440;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 006c6598  FUN_006c6598 =====

void FUN_006c6598(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c65b8 to 006c660b has its CatchHandler @ 006c6638 */
    uVar1 = FUN_00662218();
  }
  if (((uVar1 == 0) && (FUN_00663a20(param_1 + 3), param_1 != &PTR_PTR_FUN_007aa4e0)) &&
     (puVar2 = param_1[4], puVar2 != (undefined *)0x0)) {
    FUN_006cc90c(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c663c  FUN_006c663c =====

void FUN_006c663c(void *param_1)

{
  FUN_006c6598();
  free(param_1);
  return;
}


// ===== 006c6660  FUN_006c6660 =====

void FUN_006c6660(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c6668  FUN_006c6668 =====

void FUN_006c6668(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      FUN_006667cc(lVar4 + 0x10);
      uVar5 = (ulong)*(uint *)(lVar4 + 0x38);
      if (0 < (int)*(uint *)(lVar4 + 0x38)) {
        puVar2 = *(undefined8 **)(lVar4 + 0x40);
        do {
          puVar2 = puVar2 + 1;
          FUN_006ce578(*puVar2);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 0x38) = 0;
      }
      *(undefined1 *)(lVar4 + 0x48) = 0;
      *(undefined4 *)(lVar4 + 0x28) = 0;
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar4 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006c673c  FUN_006c673c =====

void FUN_006c673c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c67b4  FUN_006c67b4 =====

byte * FUN_006c67b4(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  uVar10 = 0;
  if (param_2 < (byte *)*param_3) goto LAB_006c6810;
LAB_006c6978:
  do {
    iVar3 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar3) {
      pbVar9 = (byte *)0x0;
      if (param_3[2] != 0 || iVar3 < 1) {
        pbVar9 = param_2;
      }
LAB_006c6a00:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
      return pbVar9;
    }
    auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    pbVar9 = param_2;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c6a00;
LAB_006c6810:
    do {
      while( true ) {
        pbVar9 = param_2 + 1;
        uVar8 = (uint)*param_2;
        if (-1 < (char)*param_2) break;
        uVar8 = (uVar8 + (uint)*pbVar9 * 0x80) - 0x80;
        if (-1 < (char)*pbVar9) {
          pbVar9 = param_2 + 2;
          break;
        }
        auVar11 = FUN_0066fe50();
        uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        auVar4 = auVar11;
        if (uVar8 != 3) goto LAB_006c6844;
LAB_006c68dc:
        if ((auVar11._8_4_ & 0xff) == 0x1a) {
          lVar7 = *(long *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if (lVar7 == 0) {
            puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar6 = (ulong *)*puVar6;
            }
            lVar7 = FUN_006d1f0c(puVar6);
            *(long *)(param_1 + 0x20) = lVar7;
          }
          param_2 = (byte *)FUN_0066fa8c(param_3,lVar7,auVar11._0_8_);
        }
        else {
LAB_006c6910:
          pbVar9 = auVar11._0_8_;
          uVar8 = auVar11._8_4_;
          if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
            if (pbVar9 != (byte *)0x0) {
              *(uint *)(param_3 + 10) = uVar8 - 1;
            }
            goto LAB_006c6a00;
          }
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            uVar5 = FUN_00661fa4(param_1 + 8);
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,uVar5,pbVar9,param_3);
          }
          else {
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,
                                           (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar9
                                           ,param_3);
          }
        }
joined_r0x006c688c:
        if (param_2 == (byte *)0x0) {
          pbVar9 = (byte *)0x0;
          goto LAB_006c6a00;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_006c6978;
      }
      auVar4._8_4_ = uVar8;
      auVar4._0_8_ = pbVar9;
      auVar4._12_4_ = 0;
      auVar11._8_4_ = uVar8;
      auVar11._0_8_ = pbVar9;
      auVar11._12_4_ = 0;
      uVar8 = uVar8 >> 3;
      if (uVar8 == 3) goto LAB_006c68dc;
LAB_006c6844:
      auVar11 = auVar4;
      pbVar9 = auVar11._0_8_;
      if (uVar8 != 2) {
        if ((uVar8 != 1) || ((auVar11._8_4_ & 0xff) != 10)) goto LAB_006c6910;
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        uVar5 = FUN_0066399c(param_1 + 0x18,puVar6);
        param_2 = (byte *)FUN_0066ff90(uVar5,pbVar9,param_3);
        goto joined_r0x006c688c;
      }
      if ((auVar11._8_4_ & 0xff) != 0x10) goto LAB_006c6910;
      param_2 = pbVar9 + 1;
      bVar2 = *pbVar9;
      if (-1 < (char)bVar2) {
        *(uint *)(param_1 + 0x28) = (uint)bVar2;
        uVar10 = 4;
        if ((byte *)*param_3 <= param_2) break;
        goto LAB_006c6810;
      }
      bVar1 = *param_2;
      if ((char)bVar1 < '\0') {
        auVar12 = FUN_0066fc04(pbVar9);
        param_2 = auVar12._0_8_;
        uVar10 = 4;
        *(int *)(param_1 + 0x28) = auVar12._8_4_;
        goto joined_r0x006c688c;
      }
      param_2 = pbVar9 + 2;
      *(uint *)(param_1 + 0x28) = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
      uVar10 = 4;
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


// ===== 006c6a40  FUN_006c6a40 =====

undefined1 * FUN_006c6a40(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      __n = *(size_t *)(pbVar4 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)__n;
      *param_2 = 10;
      __src = (void *)((ulong)pbVar4 | 1);
      if ((*pbVar4 & 1) != 0) {
        __src = *(void **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x28);
      *param_2 = 0x10;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x28);
      *param_2 = 0x10;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar5 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar5;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar6 = uVar5 >> 0xe;
          uVar5 = uVar5 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar5;
          puVar3 = param_2;
        } while (uVar6 != 0);
      }
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(3,*(long *)(param_1 + 0x20),
                           *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 006c6bdc  FUN_006c6bdc =====

undefined4 FUN_006c6bdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c6be4  FUN_006c6be4 =====

void FUN_006c6be4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) == 0) {
    lVar7 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      bVar3 = *pbVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      lVar5 = FUN_0066a944(lVar9 + 0x10);
      iVar4 = *(int *)(lVar9 + 0x38);
      lVar5 = lVar5 + (long)iVar4 * 2;
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(lVar9 + 0x40) != 0) {
        puVar10 = (undefined8 *)(*(long *)(lVar9 + 0x40) + 8);
      }
      if (iVar4 != 0) {
        lVar11 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_006cee4c(*puVar10);
          lVar11 = lVar11 + -8;
          lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
      lVar5 = FUN_006e5694(lVar9,lVar5 + ((ulong)*(uint *)(lVar9 + 0x28) & 1) * 2,lVar9 + 0x2c);
      lVar7 = lVar7 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar7 = lVar7 + ((LZCOUNT((long)*(int *)(param_1 + 0x28) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 006c6d40  FUN_006c6d40 =====

void FUN_006c6d40(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_006d1f0c(puVar4);
        *(long *)(param_1 + 0x20) = lVar3;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa778;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x20);
      }
      FUN_006cce00(lVar3,ppuVar1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 006c6e4c  FUN_006c6e4c =====

undefined ** FUN_006c6e4c(void)

{
  return &PTR_FUN_0079a6c8;
}


// ===== 006c6e58  FUN_006c6e58 =====

undefined8 FUN_006c6e58(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_00667e24(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c6ee0:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c6ee0;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c6f00  FUN_006c6f00 =====

undefined8 FUN_006c6f00(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c6f78:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c6f78;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c6f98  FUN_006c6f98 =====

void FUN_006c6f98(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec60);
  return;
}


// ===== 006c6fb0  FUN_006c6fb0 =====

void FUN_006c6fb0(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3460;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[6] = (long)&DAT_007aea80;
  return;
}


// ===== 006c6fe8  FUN_006c6fe8 =====

void FUN_006c6fe8(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c7008 to 006c700b has its CatchHandler @ 006c70a4 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 006c7068 to 006c706b has its CatchHandler @ 006c70a0 */
      FUN_00675910();
    }
                    /* try { // try from 006c706c to 006c7073 has its CatchHandler @ 006c70a4 */
    FUN_00663a20(param_1 + 6);
    if ((param_1 != &PTR_PTR_FUN_007aa510) && (puVar2 = param_1[7], puVar2 != (undefined *)0x0)) {
      FUN_006ccfe0(puVar2);
      free(puVar2);
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c70a8  FUN_006c70a8 =====

void FUN_006c70a8(void *param_1)

{
  FUN_006c6fe8();
  free(param_1);
  return;
}


// ===== 006c70cc  FUN_006c70cc =====

void FUN_006c70cc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c70d4  FUN_006c70d4 =====

void FUN_006c70d4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar2 = puVar2 + 1;
      FUN_006c7c30(*puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      FUN_006667cc(lVar5 + 0x10);
      uVar4 = (ulong)*(uint *)(lVar5 + 0x38);
      if (0 < (int)*(uint *)(lVar5 + 0x38)) {
        puVar2 = *(undefined8 **)(lVar5 + 0x40);
        do {
          puVar2 = puVar2 + 1;
          FUN_006ce578(*puVar2);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined1 *)(lVar5 + 0x48) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        FUN_006622b8((byte *)(lVar5 + 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c71c8  FUN_006c71c8 =====

void FUN_006c71c8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c7240  FUN_006c7240 =====

byte * FUN_006c7240(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
LAB_006c7280:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar8 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar8 = param_2;
        }
        return pbVar8;
      }
      auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar8 = param_2 + 1;
    uVar6 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar6 = (uVar6 + (uint)*pbVar8 * 0x80) - 0x80;
      if (-1 < (char)*pbVar8) {
        pbVar8 = param_2 + 2;
        goto LAB_006c72b4;
      }
      auVar9 = FUN_0066fe50(param_2);
      uVar6 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar9;
      if (uVar6 == 3) goto LAB_006c73bc;
LAB_006c72c0:
      auVar9 = auVar2;
      if (uVar6 == 2) {
        if ((auVar9._8_4_ & 0xff) != 0x12) goto LAB_006c73f0;
        param_2 = (byte *)(auVar9._0_8_ + -1);
        do {
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
LAB_006c735c:
            uVar3 = FUN_006d1c0c(*(undefined8 *)(param_1 + 0x18));
            uVar3 = FUN_00675990(param_1 + 0x18,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar7 <= iVar1) goto LAB_006c735c;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
        goto LAB_006c7280;
      }
      if ((uVar6 != 1) || ((auVar9._8_4_ & 0xff) != 10)) goto LAB_006c73f0;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar3 = FUN_0066399c(param_1 + 0x30,puVar5);
      param_2 = (byte *)FUN_0066ff90(uVar3,auVar9._0_8_,param_3);
    }
    else {
LAB_006c72b4:
      auVar2._8_4_ = uVar6;
      auVar2._0_8_ = pbVar8;
      auVar2._12_4_ = 0;
      auVar9._8_4_ = uVar6;
      auVar9._0_8_ = pbVar8;
      auVar9._12_4_ = 0;
      uVar6 = uVar6 >> 3;
      if (uVar6 != 3) goto LAB_006c72c0;
LAB_006c73bc:
      if ((auVar9._8_4_ & 0xff) == 0x1a) {
        lVar4 = *(long *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (lVar4 == 0) {
          puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar4 = FUN_006d1f8c(puVar5);
          *(long *)(param_1 + 0x38) = lVar4;
        }
        param_2 = (byte *)FUN_0066fa8c(param_3,lVar4,auVar9._0_8_);
        goto LAB_006c7278;
      }
LAB_006c73f0:
      pbVar8 = auVar9._0_8_;
      uVar6 = auVar9._8_4_;
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        if (pbVar8 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar6 - 1;
          return pbVar8;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar4 = FUN_00661fa4(param_1 + 8);
      }
      else {
        lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
      }
      param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,lVar4,pbVar8,param_3);
    }
LAB_006c7278:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006c74d4  FUN_006c74d4 =====

undefined1 * FUN_006c74d4(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      __n = *(size_t *)(pbVar5 + 8);
    }
    if ((0x7f < (long)__n) || ((*param_3 - (long)param_2) + 0xe < (long)__n)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
      iVar2 = *(int *)(param_1 + 0x20);
      goto joined_r0x006c756c;
    }
    param_2[1] = (char)__n;
    *param_2 = 10;
    __src = (void *)((ulong)pbVar5 | 1);
    if ((*pbVar5 & 1) != 0) {
      __src = *(void **)(pbVar5 + 0x10);
    }
    memcpy(param_2 + 2,__src,__n);
    param_2 = param_2 + 2 + __n;
  }
  iVar2 = *(int *)(param_1 + 0x20);
joined_r0x006c756c:
  if (iVar2 != 0) {
    iVar6 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar6 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(2,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(3,*(long *)(param_1 + 0x38),
                           *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x2c),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 006c761c  FUN_006c761c =====

undefined4 FUN_006c761c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006c7624  FUN_006c7624 =====

undefined4 FUN_006c7624(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c762c  FUN_006c762c =====

void FUN_006c762c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar10 = lVar8 << 3;
    do {
      lVar5 = FUN_006c83b8(*puVar9);
      lVar10 = lVar10 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      lVar10 = FUN_0066a944(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x38);
      lVar10 = lVar10 + (long)iVar4 * 2;
      puVar9 = (undefined8 *)0x0;
      if (*(long *)(lVar5 + 0x40) != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x40) + 8);
      }
      if (iVar4 != 0) {
        lVar11 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_006cee4c(*puVar9);
          lVar11 = lVar11 + -8;
          lVar10 = lVar6 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
          ;
          puVar9 = puVar9 + 1;
        } while (lVar11 != 0);
      }
      if ((*(uint *)(lVar5 + 0x28) & 1) != 0) {
        lVar10 = lVar10 + 3;
      }
      lVar10 = FUN_006e5694(lVar5,lVar10,lVar5 + 0x2c);
      lVar8 = lVar8 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
  }
  FUN_006e5694(param_1,lVar8,param_1 + 0x14);
  return;
}


// ===== 006c77b4  FUN_006c77b4 =====

void FUN_006c77b4(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_006d2b6c(param_1 + 0x18,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 3) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x30);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_006636d4(param_1 + 0x30,uVar7 & 0xfffffffffffffffc,puVar6);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_006d1f8c(puVar6);
        *(long *)(param_1 + 0x38) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa7c8;
      if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x38);
      }
      FUN_006cd4d8(lVar8,ppuVar1);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c78e8  FUN_006c78e8 =====

undefined ** FUN_006c78e8(void)

{
  return &PTR_FUN_0079a6d8;
}


// ===== 006c78f4  FUN_006c78f4 =====

undefined8 FUN_006c78f4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (uVar7 - 1) * 8 + 8);
      if ((*(byte *)(lVar4 + 0x10) >> 3 & 1) != 0) {
        lVar4 = *(long *)(lVar4 + 0x30);
        uVar3 = FUN_00667e24(lVar4 + 0x10);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (0 < (int)*(uint *)(lVar4 + 0x38)) {
          uVar3 = (ulong)*(uint *)(lVar4 + 0x38);
          do {
            lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar3 - 1) * 8);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
            while (0 < (int)uVar6) {
              lVar2 = uVar6 * 8;
              uVar6 = uVar6 - 1;
              if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3)
                  != 0) {
                return 0;
              }
            }
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    uVar7 = FUN_00667e24(lVar4 + 0x10);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if ((int)*(uint *)(lVar4 + 0x38) < 1) {
      return 1;
    }
    uVar7 = (ulong)*(uint *)(lVar4 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 8 + (uVar7 - 1) * 8);
      uVar3 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar3) {
        lVar2 = uVar3 * 8;
        uVar3 = uVar3 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        {
          return 0;
        }
      }
      bVar1 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
  }
  return 1;
}


// ===== 006c7a64  FUN_006c7a64 =====

undefined8 FUN_006c7a64(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c7adc:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c7adc;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c7afc  FUN_006c7afc =====

void FUN_006c7afc(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec70);
  return;
}


// ===== 006c7b14  FUN_006c7b14 =====

void FUN_006c7b14(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a3480 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  *(undefined8 *)((long)param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x2a) = 0;
  param_1[3] = (long)puVar2;
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar2;
  return;
}


// ===== 006c7b50  FUN_006c7b50 =====

void FUN_006c7b50(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c7b70 to 006c7bd3 has its CatchHandler @ 006c7c00 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    FUN_00663a20(param_1 + 4);
    FUN_00663a20(param_1 + 5);
    if ((param_1 != &PTR_PTR_FUN_007aa550) && (puVar2 = param_1[6], puVar2 != (undefined *)0x0)) {
      FUN_006cd6bc(puVar2);
      free(puVar2);
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 006c7c04  FUN_006c7c04 =====

void FUN_006c7c04(void *param_1)

{
  FUN_006c7b50();
  free(param_1);
  return;
}


// ===== 006c7c28  FUN_006c7c28 =====

void FUN_006c7c28(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006c7c30  FUN_006c7c30 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c7c30(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar2 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_006c7d14(*(undefined8 *)(param_1 + 0x30));
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 006c7d14  FUN_006c7d14 =====

void FUN_006c7d14(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_006667cc(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_006ce578(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 006c7d98  FUN_006c7d98 =====

byte * FUN_006c7d98(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  long lVar4;
  
  uVar10 = 0;
LAB_006c7dd8:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar9 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar9 = param_2;
      }
      goto LAB_006c80c0;
    }
    auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    pbVar9 = param_2;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c80c0;
  }
  pbVar9 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar9 * 0x80) - 0x80;
    if (-1 < (char)*pbVar9) {
      pbVar9 = param_2 + 2;
      goto LAB_006c7e0c;
    }
    auVar11 = FUN_0066fe50();
    uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar11;
    if (uVar8 < 4) goto LAB_006c7e18;
LAB_006c7ec8:
    pbVar9 = auVar11._0_8_;
    uVar5 = auVar11._8_4_;
    if (uVar8 == 4) {
      if ((uVar5 & 0xff) != 0x22) goto LAB_006c7fa4;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (*(long *)(param_1 + 0x30) == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        uVar3 = FUN_006d200c(puVar6);
        *(undefined8 *)(param_1 + 0x30) = uVar3;
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,pbVar9);
      }
      else {
        param_2 = (byte *)FUN_0066fa8c(param_3,*(long *)(param_1 + 0x30),pbVar9);
      }
joined_r0x006c80a4:
      if (param_2 == (byte *)0x0) {
        pbVar9 = (byte *)0x0;
LAB_006c80c0:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
        return pbVar9;
      }
      goto LAB_006c7dd8;
    }
    if (uVar8 == 5) {
      if ((uVar5 & 0xff) != 0x28) goto LAB_006c7fa4;
      uVar10 = uVar10 | 0x10;
      param_2 = pbVar9 + 1;
      uVar7 = (ulong)(char)*pbVar9;
      if ((long)uVar7 < 0) {
        uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar9) - 0x80);
        if ((char)*param_2 < '\0') {
          auVar11 = FUN_0066fd14(pbVar9);
          param_2 = auVar11._0_8_;
          *(bool *)(param_1 + 0x38) = auVar11._8_8_ != 0;
          goto joined_r0x006c80a4;
        }
        param_2 = pbVar9 + 2;
      }
      *(bool *)(param_1 + 0x38) = uVar7 != 0;
      goto LAB_006c7dd8;
    }
    if ((uVar8 == 6) && ((uVar5 & 0xff) == 0x30)) {
      uVar10 = uVar10 | 0x20;
      param_2 = pbVar9 + 1;
      uVar7 = (ulong)(char)*pbVar9;
      if ((long)uVar7 < 0) {
        uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar9) - 0x80);
        if ((char)*param_2 < '\0') {
          auVar11 = FUN_0066fd14(pbVar9);
          param_2 = auVar11._0_8_;
          *(bool *)(param_1 + 0x39) = auVar11._8_8_ != 0;
          goto joined_r0x006c80a4;
        }
        param_2 = pbVar9 + 2;
      }
      *(bool *)(param_1 + 0x39) = uVar7 != 0;
      goto LAB_006c7dd8;
    }
  }
  else {
LAB_006c7e0c:
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar9;
    auVar2._12_4_ = 0;
    auVar11._8_4_ = uVar8;
    auVar11._0_8_ = pbVar9;
    auVar11._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (3 < uVar8) goto LAB_006c7ec8;
LAB_006c7e18:
    auVar11 = auVar2;
    uVar5 = auVar11._8_4_;
    if (uVar8 != 1) {
      if (uVar8 == 2) {
        if ((uVar5 & 0xff) == 0x12) {
          puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
          lVar4 = param_1 + 0x20;
          goto LAB_006c7dc4;
        }
        goto LAB_006c7fa4;
      }
      if ((uVar8 != 3) || ((uVar5 & 0xff) != 0x1a)) goto LAB_006c7fa4;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar4 = param_1 + 0x28;
LAB_006c7dc4:
      uVar3 = FUN_0066399c(lVar4,puVar6);
      param_2 = (byte *)FUN_0066ff90(uVar3,auVar11._0_8_,param_3);
      goto joined_r0x006c80a4;
    }
    if ((uVar5 & 0xff) == 10) {
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar4 = param_1 + 0x18;
      goto LAB_006c7dc4;
    }
  }
LAB_006c7fa4:
  pbVar9 = auVar11._0_8_;
  uVar8 = auVar11._8_4_;
  if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
    if (pbVar9 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
    }
    goto LAB_006c80c0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar3 = FUN_00661fa4(param_1 + 8);
    param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,uVar3,pbVar9,param_3);
  }
  else {
    param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,
                                   (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar9,param_3
                                  );
  }
  goto joined_r0x006c80a4;
}


// ===== 006c8108  FUN_006c8108 =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_006c8108(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar6 | 1);
      if ((*pbVar6 & 1) != 0) {
        pvVar2 = *(void **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar6 | 1);
      if ((*pbVar6 & 1) != 0) {
        pvVar2 = *(void **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,2);
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x1a;
      pvVar2 = (void *)((ulong)pbVar6 | 1);
      if ((*pbVar6 & 1) != 0) {
        pvVar2 = *(void **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,3);
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(4,*(long *)(param_1 + 0x30),
                           *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c),param_2,param_3);
  }
  if ((uVar3 >> 4 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar4 = *(undefined1 *)(param_1 + 0x38);
    *param_2 = 0x28;
    param_2[1] = uVar4;
    param_2 = param_2 + 2;
  }
  if ((uVar3 >> 5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar4 = *(undefined1 *)(param_1 + 0x39);
    *param_2 = 0x30;
    param_2[1] = uVar4;
    param_2 = param_2 + 2;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    puVar5 = (undefined1 *)FUN_006fc418((uVar7 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar5;
  }
  return param_2;
}


// ===== 006c83b0  FUN_006c83b0 =====

undefined4 FUN_006c83b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 006c83b8  FUN_006c83b8 =====

void FUN_006c83b8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    lVar4 = FUN_006cdc58(*(undefined8 *)(param_1 + 0x30));
    lVar6 = lVar6 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  FUN_006e5694(param_1,lVar6 + (ulong)((uVar2 >> 4 & 2) + (uVar2 >> 3 & 2)),param_1 + 0x14);
  return;
}


// ===== 006c8534  FUN_006c8534 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c8534(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x18,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x20,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x20,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x28,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x28,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar3 == 0) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar3 = FUN_006d200c(puVar4);
        *(long *)(param_1 + 0x30) = lVar3;
      }
      ppuVar1 = &PTR_PTR_FUN_007aa818;
      if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x30);
      }
      FUN_006cdd1c(lVar3,ppuVar1);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar2 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006c86e0  FUN_006c86e0 =====

undefined ** FUN_006c86e0(void)

{
  return &PTR_FUN_0079a6e8;
}


// ===== 006c86ec  FUN_006c86ec =====

undefined8 FUN_006c86ec(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  uVar3 = FUN_00667e24(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c8774:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c8774;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c8794  FUN_006c8794 =====

undefined8 FUN_006c8794(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_00667e24(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_006c880c:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8 + (uVar3 - 1) * 8);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x20);
      while (0 < (int)uVar6) {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 - 1;
        if (((*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) ^ 0xffffffff) & 3) != 0)
        goto LAB_006c880c;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


// ===== 006c882c  FUN_006c882c =====

void FUN_006c882c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec80);
  return;
}


// ===== 006c8844  FUN_006c8844 =====

void FUN_006c8844(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34a0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006c8874 to 006c8877 has its CatchHandler @ 006c88d0 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((long)param_1 + 0xa4) = 1;
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
  param_1[8] = 0;
  param_1[7] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x12] = (long)PTR_DAT_007a2ea0;
  param_1[0x13] = 0;
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar2;
  param_1[0xb] = (long)puVar2;
  param_1[0xc] = (long)puVar2;
  param_1[0xd] = (long)puVar2;
  param_1[0xe] = (long)puVar2;
  param_1[0xf] = (long)puVar2;
  param_1[0x10] = (long)puVar2;
  param_1[0x11] = (long)puVar2;
  return;
}


// ===== 006c88e4  FUN_006c88e4 =====

void FUN_006c88e4(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006c8904 to 006c8913 has its CatchHandler @ 006c8958 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006c895c(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006c895c  FUN_006c895c =====

void FUN_006c895c(long param_1)

{
  FUN_00663dbc(param_1 + 0x10);
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x30) == 0)) {
                    /* try { // try from 006c8988 to 006c898b has its CatchHandler @ 006c89e4 */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0x48);
  FUN_00663a20(param_1 + 0x50);
  FUN_00663a20(param_1 + 0x58);
  FUN_00663a20(param_1 + 0x60);
  FUN_00663a20(param_1 + 0x68);
  FUN_00663a20(param_1 + 0x70);
  FUN_00663a20(param_1 + 0x78);
  FUN_00663a20(param_1 + 0x80);
  FUN_00663a20(param_1 + 0x88);
  FUN_00663a20(param_1 + 0x90);
  return;
}


// ===== 006c89e8  FUN_006c89e8 =====

void FUN_006c89e8(void *param_1)

{
  FUN_006c88e4();
  free(param_1);
  return;
}


// ===== 006c8a0c  FUN_006c8a0c =====

void FUN_006c8a0c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006c8a14  FUN_006c8a14 =====

byte * FUN_006c8a14(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  puVar2 = PTR_PTR_007a3358;
LAB_006c8a6c:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar7 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar7 = param_2;
        }
        goto LAB_006c926c;
      }
      auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      pbVar7 = param_2;
      if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006c926c;
    }
    pbVar7 = param_2 + 1;
    uVar6 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar6 = (uVar6 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = param_2 + 2;
        goto LAB_006c8aa0;
      }
      auVar9 = FUN_0066fe50();
      uVar6 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
    }
    else {
LAB_006c8aa0:
      auVar9._8_4_ = uVar6;
      auVar9._0_8_ = pbVar7;
      auVar9._12_4_ = 0;
      uVar6 = uVar6 >> 3;
    }
    pbVar7 = auVar9._0_8_;
    if (uVar6 - 1 < 0x2d) {
                    /* WARNING: Could not recover jumptable at 0x006c8abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar7 = (byte *)(*(code *)(&UNK_006c8ac0 +
                                 (ulong)*(ushort *)(&DAT_00210988 + (ulong)(uVar6 - 1) * 2) * 4))();
      return pbVar7;
    }
    uVar4 = auVar9._8_4_;
    if ((uVar6 != 999) || ((uVar4 & 0xff) != 0x3a)) break;
    param_2 = pbVar7 + -2;
    do {
      piVar5 = *(int **)(param_1 + 0x40);
      if (piVar5 == (int *)0x0) {
LAB_006c8b58:
        uVar3 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
        uVar3 = FUN_00675990(param_1 + 0x30,uVar3);
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 2);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        if (*piVar5 <= iVar1) goto LAB_006c8b58;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                       param_2 + 2);
      }
      if (param_2 == (byte *)0x0) goto LAB_006c9268;
    } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
  } while( true );
  if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
    if (pbVar7 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar4 - 1;
    }
    goto LAB_006c926c;
  }
  uVar8 = auVar9._8_8_ & 0xffffffff;
  if (uVar4 >> 6 < 0x7d) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_00661fa4(param_1 + 8);
      param_2 = (byte *)FUN_006fbab8(uVar8,uVar3,pbVar7,param_3);
    }
    else {
      param_2 = (byte *)FUN_006fbab8(uVar8,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar7
                                     ,param_3);
    }
  }
  else {
    param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar8,pbVar7,puVar2,param_1 + 8,param_3);
  }
  if (param_2 == (byte *)0x0) {
LAB_006c9268:
    pbVar7 = (byte *)0x0;
LAB_006c926c:
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    return pbVar7;
  }
  goto LAB_006c8a6c;
}


// ===== 006c92b0  FUN_006c92b0 =====

/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_006c92b0(long param_1,undefined2 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,1,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x42;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,8,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 0x12 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar6 = *(uint *)(param_1 + 0xa0);
      *(undefined1 *)param_2 = 0x48;
      *(char *)((long)param_2 + 1) = (char)uVar6;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar6 = *(uint *)(param_1 + 0xa0);
      *(undefined1 *)param_2 = 0x48;
      *(char *)((long)param_2 + 1) = (char)uVar6;
    }
    if (uVar6 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar10 = (ulong)(long)(int)uVar6 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar6 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar10;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar7 = param_2;
      if (0x3fff < uVar6) {
        do {
          uVar11 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          *(byte *)((long)puVar7 + -1) = *(byte *)((long)puVar7 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          *(char *)puVar7 = (char)uVar10;
          puVar7 = param_2;
        } while (uVar11 != 0);
      }
    }
  }
  if ((uVar3 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x98);
    *(undefined1 *)param_2 = 0x50;
    *(undefined1 *)((long)param_2 + 1) = uVar5;
    param_2 = param_2 + 1;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x5a;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined2 *)((long)param_2 + 2U),pvVar2,sVar1);
      param_2 = (undefined2 *)((long)param_2 + 2U + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0xb,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9b);
    *param_2 = 0x180;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9c);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0xf & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9d);
    *param_2 = 400;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x99);
    *param_2 = 0x1a0;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0x11 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9f);
    *param_2 = 0x1b8;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9a);
    *param_2 = 0x1d8;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 0x13 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0xa4);
    *param_2 = 0x1f8;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 3 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2a2;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x24,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 4 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2aa;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x25,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 5 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2ba;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x27,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 6 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2c2;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x28,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 7 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2ca;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x29,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar5 = *(undefined1 *)(param_1 + 0x9e);
    *param_2 = 0x2d0;
    *(undefined1 *)(param_2 + 1) = uVar5;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)((long)param_2 + 2) = (char)sVar1;
      *param_2 = 0x2e2;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x2c,pbVar9,param_2);
    }
  }
  if ((uVar3 >> 9 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)(param_2 + 1) = (char)sVar1;
      *param_2 = 0x2ea;
      pvVar2 = (void *)((ulong)pbVar9 | 1);
      if ((*pbVar9 & 1) != 0) {
        pvVar2 = *(void **)(pbVar9 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
      iVar4 = *(int *)(param_1 + 0x38);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x2d,pbVar9,param_2);
      iVar4 = *(int *)(param_1 + 0x38);
    }
  }
  if (iVar4 != 0) {
    iVar12 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar12 * 8 + 8);
      param_2 = (undefined2 *)FUN_00678d18(999,lVar8,*(undefined4 *)(lVar8 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar4 != iVar12);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined2 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a3358,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined2 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar7;
}


// ===== 006c9bd8  FUN_006c9bd8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c9bd8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar5 = FUN_0066a944(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = lVar5 + (long)iVar4 * 2;
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar9 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_006cee4c(*puVar8);
      lVar9 = lVar9 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    lVar5 = lVar5 + ((ulong)(uVar2 >> 9) & 2);
    if ((uVar2 & 0x800) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x1000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x2000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x4000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x8000) != 0) {
      lVar5 = lVar5 + 3;
    }
  }
  if ((uVar2 & 0xf0000) != 0) {
    if ((uVar2 & 0x10000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 & 0x20000) != 0) {
      lVar5 = lVar5 + 3;
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0xa0) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 & 0x80000) != 0) {
      lVar5 = lVar5 + 3;
    }
  }
  FUN_006e5694(param_1,lVar5,param_1 + 0x2c);
  return;
}


// ===== 006c9fd4  FUN_006c9fd4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006c9fd4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x48,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x48,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x50);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x50,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x50,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x58);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x58,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x58,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x60);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x60,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x60,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 4 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x68,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x68,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x70);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x70,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x70,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x78);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x78,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x78,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 7 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x80,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x80,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
  }
  if ((uVar3 & 0xff00) != 0) {
    if ((uVar3 >> 8 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x88);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x88,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x88,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 9 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x90);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x90,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x90,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
    }
    if ((uVar3 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  if ((uVar3 & 0xf0000) != 0) {
    if ((uVar3 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
    }
    if ((uVar3 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
    if ((uVar3 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a3358,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006ca448  FUN_006ca448 =====

undefined ** FUN_006ca448(void)

{
  return &PTR_FUN_0079a6f8;
}


// ===== 006ca454  FUN_006ca454 =====

void FUN_006ca454(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_006be4b8();
    FUN_006c9fd4(param_1,param_2);
    return;
  }
  return;
}


// ===== 006ca48c  FUN_006ca48c =====

void FUN_006ca48c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aec90);
  return;
}


// ===== 006ca4a4  FUN_006ca4a4 =====

void FUN_006ca4a4(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34b0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006ca4d4 to 006ca4d7 has its CatchHandler @ 006ca4f0 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}


// ===== 006ca504  FUN_006ca504 =====

void FUN_006ca504(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006ca524 to 006ca527 has its CatchHandler @ 006ca594 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006ca548 to 006ca54b has its CatchHandler @ 006ca590 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006ca598  FUN_006ca598 =====

void FUN_006ca598(void *param_1)

{
  FUN_006ca504();
  free(param_1);
  return;
}


// ===== 006ca5bc  FUN_006ca5bc =====

void FUN_006ca5bc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006ca5c4  FUN_006ca5c4 =====

byte * FUN_006ca5c4(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  puVar3 = PTR_PTR_007a33b0;
  uVar11 = 0;
LAB_006ca60c:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar10 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar10 = param_2;
      }
      goto LAB_006ca970;
    }
    auVar12 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar12._0_8_;
    pbVar10 = param_2;
    if ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006ca970;
  }
  pbVar10 = param_2 + 1;
  uVar7 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar7 = (uVar7 + (uint)*pbVar10 * 0x80) - 0x80;
    if (-1 < (char)*pbVar10) {
      pbVar10 = param_2 + 2;
      goto LAB_006ca640;
    }
    auVar12 = FUN_0066fe50(param_2);
    uVar7 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar12;
    if (2 < uVar7) goto LAB_006ca64c;
LAB_006ca7ac:
    pbVar10 = auVar12._0_8_;
    if (uVar7 == 1) {
      if ((auVar12._8_4_ & 0xff) == 8) {
        uVar11 = uVar11 | 1;
        param_2 = pbVar10 + 1;
        uVar9 = (ulong)(char)*pbVar10;
        if ((long)uVar9 < 0) {
          uVar9 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar10) - 0x80);
          if ((char)*param_2 < '\0') {
            auVar12 = FUN_0066fd14(pbVar10);
            param_2 = auVar12._0_8_;
            *(bool *)(param_1 + 0x48) = auVar12._8_8_ != 0;
            goto joined_r0x006ca744;
          }
          param_2 = pbVar10 + 2;
        }
        *(bool *)(param_1 + 0x48) = uVar9 != 0;
        goto LAB_006ca60c;
      }
    }
    else if ((uVar7 == 2) && ((auVar12._8_4_ & 0xff) == 0x10)) {
      uVar11 = uVar11 | 2;
      param_2 = pbVar10 + 1;
      uVar9 = (ulong)(char)*pbVar10;
      if ((long)uVar9 < 0) {
        uVar9 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar10) - 0x80);
        if ((char)*param_2 < '\0') {
          auVar12 = FUN_0066fd14(pbVar10);
          param_2 = auVar12._0_8_;
          *(bool *)(param_1 + 0x49) = auVar12._8_8_ != 0;
          goto joined_r0x006ca744;
        }
        param_2 = pbVar10 + 2;
      }
      *(bool *)(param_1 + 0x49) = uVar9 != 0;
      goto LAB_006ca60c;
    }
  }
  else {
LAB_006ca640:
    auVar2._8_4_ = uVar7;
    auVar2._0_8_ = pbVar10;
    auVar2._12_4_ = 0;
    auVar12._8_4_ = uVar7;
    auVar12._0_8_ = pbVar10;
    auVar12._12_4_ = 0;
    uVar7 = uVar7 >> 3;
    if (uVar7 < 3) goto LAB_006ca7ac;
LAB_006ca64c:
    auVar12 = auVar2;
    pbVar10 = auVar12._0_8_;
    uVar6 = auVar12._8_4_;
    if (uVar7 == 3) {
      if ((uVar6 & 0xff) != 0x18) goto LAB_006ca84c;
      uVar11 = uVar11 | 4;
      param_2 = pbVar10 + 1;
      uVar9 = (ulong)(char)*pbVar10;
      if ((long)uVar9 < 0) {
        uVar9 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar10) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar10 + 2;
          goto LAB_006ca600;
        }
        auVar12 = FUN_0066fd14(pbVar10);
        param_2 = auVar12._0_8_;
        *(bool *)(param_1 + 0x4a) = auVar12._8_8_ != 0;
joined_r0x006ca744:
        if (param_2 == (byte *)0x0) {
LAB_006ca96c:
          pbVar10 = (byte *)0x0;
LAB_006ca970:
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar11;
          return pbVar10;
        }
      }
      else {
LAB_006ca600:
        *(bool *)(param_1 + 0x4a) = uVar9 != 0;
      }
      goto LAB_006ca60c;
    }
    if (uVar7 != 7) {
      if ((uVar7 != 999) || ((uVar6 & 0xff) != 0x3a)) goto LAB_006ca84c;
      param_2 = pbVar10 + -2;
      do {
        piVar8 = *(int **)(param_1 + 0x40);
        if (piVar8 == (int *)0x0) {
LAB_006ca6b0:
          uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
          uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x38);
          if (*piVar8 <= iVar1) goto LAB_006ca6b0;
          *(int *)(param_1 + 0x38) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2),
                                         param_2 + 2);
        }
        if (param_2 == (byte *)0x0) goto LAB_006ca96c;
      } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
      goto LAB_006ca60c;
    }
    if ((uVar6 & 0xff) == 0x38) {
      uVar11 = uVar11 | 8;
      param_2 = pbVar10 + 1;
      uVar9 = (ulong)(char)*pbVar10;
      if ((long)uVar9 < 0) {
        uVar9 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar10) - 0x80);
        if ((char)*param_2 < '\0') {
          auVar12 = FUN_0066fd14(pbVar10);
          param_2 = auVar12._0_8_;
          *(bool *)(param_1 + 0x4b) = auVar12._8_8_ != 0;
          goto joined_r0x006ca744;
        }
        param_2 = pbVar10 + 2;
      }
      *(bool *)(param_1 + 0x4b) = uVar9 != 0;
      goto LAB_006ca60c;
    }
  }
LAB_006ca84c:
  pbVar10 = auVar12._0_8_;
  uVar7 = auVar12._8_4_;
  if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
    if (pbVar10 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar7 - 1;
    }
    goto LAB_006ca970;
  }
  uVar9 = auVar12._8_8_ & 0xffffffff;
  if (uVar7 >> 6 < 0x7d) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_00661fa4(param_1 + 8);
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
    }
    param_2 = (byte *)FUN_006fbab8(uVar9,lVar5,pbVar10,param_3);
  }
  else {
    param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar9,pbVar10,puVar3,param_1 + 8,param_3);
  }
  goto joined_r0x006ca744;
}


// ===== 006ca9b4  FUN_006ca9b4 =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_006ca9b4(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 8;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x49);
    *param_2 = 0x10;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x4a);
    *param_2 = 0x18;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 3 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x4b);
    *param_2 = 0x38;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    iVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar6 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(999,lVar5,*(undefined4 *)(lVar5 + 0x14),param_2,param_3);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined1 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a33b0,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar4 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar4;
}


// ===== 006cab6c  FUN_006cab6c =====

void FUN_006cab6c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = FUN_0066a944(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_006cee4c(*puVar5);
      lVar6 = lVar6 + -8;
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0xf) != 0) {
    lVar3 = lVar3 + ((ulong)uVar1 & 2) + ((ulong)uVar1 & 1) * 2 + (ulong)(uVar1 >> 1 & 2) +
            (ulong)(uVar1 >> 2 & 2);
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x2c);
  return;
}


// ===== 006cac2c  FUN_006cac2c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006cac2c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar4,lVar5 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 0xf) != 0) {
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a33b0,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 006cad40  FUN_006cad40 =====

undefined ** FUN_006cad40(void)

{
  return &PTR_FUN_0079a708;
}


// ===== 006cad4c  FUN_006cad4c =====

void FUN_006cad4c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    FUN_006667cc(param_1 + 0x10);
    uVar2 = (ulong)*(uint *)(param_1 + 0x38);
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      do {
        puVar1 = puVar1 + 1;
        FUN_006ce578(*puVar1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_006622b8();
    }
    FUN_006cac2c(param_1,param_2);
    return;
  }
  return;
}


// ===== 006cadd0  FUN_006cadd0 =====

void FUN_006cadd0(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aeca0);
  return;
}


// ===== 006cade8  FUN_006cade8 =====

void FUN_006cade8(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34c0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006cae18 to 006cae1b has its CatchHandler @ 006cae38 */
  FUN_00663dac(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  return;
}


// ===== 006cae4c  FUN_006cae4c =====

void FUN_006cae4c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cae6c to 006cae6f has its CatchHandler @ 006caedc */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[8] != 0) && (param_1[6] == 0)) {
                    /* try { // try from 006cae90 to 006cae93 has its CatchHandler @ 006caed8 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006caee0  FUN_006caee0 =====

void FUN_006caee0(void *param_1)

{
  FUN_006cae4c();
  free(param_1);
  return;
}


// ===== 006caf04  FUN_006caf04 =====

void FUN_006caf04(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 006caf0c  FUN_006caf0c =====

byte * FUN_006caf0c(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar3 = PTR_PTR_007a33e0;
  uVar12 = 0;
LAB_006caf54:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar11 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar11 = param_2;
        }
        goto LAB_006cb47c;
      }
      auVar14 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar14._0_8_;
      pbVar11 = param_2;
      if ((auVar14 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006cb47c;
    }
    pbVar11 = param_2 + 1;
    uVar8 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar11 * 0x80) - 0x80;
      if (-1 < (char)*pbVar11) {
        pbVar11 = param_2 + 2;
        goto LAB_006caf88;
      }
      auVar14 = FUN_0066fe50(param_2);
      uVar8 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar14;
      if (uVar8 < 6) goto LAB_006caf94;
LAB_006cb064:
      pbVar11 = auVar14._0_8_;
      uVar5 = auVar14._8_4_;
      if (uVar8 < 0xf) {
        if (uVar8 == 6) {
          if ((uVar5 & 0xff) == 0x30) {
            pbVar10 = pbVar11 + 1;
            uVar6 = (ulong)(char)*pbVar11;
            if ((long)uVar6 < 0) {
              uVar6 = (ulong)(((uint)*pbVar10 * 0x80 + (uint)*pbVar11) - 0x80);
              if (-1 < (char)*pbVar10) {
                pbVar10 = pbVar11 + 2;
                goto LAB_006cb234;
              }
              auVar13 = FUN_0066fd14(pbVar11);
              if (auVar13._0_8_ == 0) goto LAB_006cb478;
              uVar8 = auVar13._8_4_;
            }
            else {
LAB_006cb234:
              auVar13._8_8_ = uVar6;
              auVar13._0_8_ = pbVar10;
              uVar8 = (uint)uVar6;
            }
            param_2 = auVar13._0_8_;
            if (2 < uVar8) {
              if ((*(ulong *)(param_1 + 8) & 1) == 0) {
                lVar4 = FUN_00661fa4(param_1 + 8);
                uVar7 = 6;
              }
              else {
                uVar7 = 6;
                lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
              }
              goto LAB_006cb39c;
            }
            *(int *)(param_1 + 0x4c) = auVar13._8_4_;
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            goto LAB_006caf54;
          }
        }
        else if ((uVar8 == 10) && ((uVar5 & 0xff) == 0x50)) {
          uVar12 = uVar12 | 0x40;
          param_2 = pbVar11 + 1;
          uVar6 = (ulong)(char)*pbVar11;
          if ((long)uVar6 < 0) {
            uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
            if ((char)*param_2 < '\0') {
              auVar14 = FUN_0066fd14(pbVar11);
              param_2 = auVar14._0_8_;
              *(bool *)(param_1 + 0x54) = auVar14._8_8_ != 0;
              goto joined_r0x006cb310;
            }
            param_2 = pbVar11 + 2;
          }
          *(bool *)(param_1 + 0x54) = uVar6 != 0;
          goto LAB_006caf54;
        }
      }
      else if (uVar8 == 0xf) {
        if ((uVar5 & 0xff) == 0x78) {
          uVar12 = uVar12 | 0x10;
          param_2 = pbVar11 + 1;
          uVar6 = (ulong)(char)*pbVar11;
          if ((long)uVar6 < 0) {
            uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
            if ((char)*param_2 < '\0') {
              auVar14 = FUN_0066fd14(pbVar11);
              param_2 = auVar14._0_8_;
              *(bool *)(param_1 + 0x52) = auVar14._8_8_ != 0;
              goto joined_r0x006cb310;
            }
            param_2 = pbVar11 + 2;
          }
          *(bool *)(param_1 + 0x52) = uVar6 != 0;
          goto LAB_006caf54;
        }
      }
      else if ((uVar8 == 999) && ((uVar5 & 0xff) == 0x3a)) {
        param_2 = pbVar11 + -2;
        do {
          piVar9 = *(int **)(param_1 + 0x40);
          if (piVar9 == (int *)0x0) {
LAB_006cb120:
            uVar7 = FUN_006d210c(*(undefined8 *)(param_1 + 0x30));
            uVar7 = FUN_00675990(param_1 + 0x30,uVar7);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar7,param_2 + 2);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar9 <= iVar1) goto LAB_006cb120;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 2);
          }
          if (param_2 == (byte *)0x0) goto LAB_006cb478;
        } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
        goto LAB_006caf54;
      }
LAB_006cb2a4:
      pbVar11 = auVar14._0_8_;
      uVar8 = auVar14._8_4_;
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        if (pbVar11 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
        }
        goto LAB_006cb47c;
      }
      uVar6 = auVar14._8_8_ & 0xffffffff;
      if (uVar8 >> 6 < 0x7d) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          lVar4 = FUN_00661fa4(param_1 + 8);
        }
        else {
          lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
        }
        param_2 = (byte *)FUN_006fbab8(uVar6,lVar4,pbVar11,param_3);
      }
      else {
        param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar6,pbVar11,puVar3,param_1 + 8,param_3);
      }
    }
    else {
LAB_006caf88:
      auVar2._8_4_ = uVar8;
      auVar2._0_8_ = pbVar11;
      auVar2._12_4_ = 0;
      auVar14._8_4_ = uVar8;
      auVar14._0_8_ = pbVar11;
      auVar14._12_4_ = 0;
      uVar8 = uVar8 >> 3;
      if (5 < uVar8) goto LAB_006cb064;
LAB_006caf94:
      auVar14 = auVar2;
      pbVar11 = auVar14._0_8_;
      uVar5 = auVar14._8_4_;
      if (uVar8 < 3) {
        if (uVar8 == 1) {
          if ((uVar5 & 0xff) != 8) goto LAB_006cb2a4;
          pbVar10 = pbVar11 + 1;
          uVar6 = (ulong)(char)*pbVar11;
          if ((long)uVar6 < 0) {
            uVar6 = (ulong)(((uint)*pbVar10 * 0x80 + (uint)*pbVar11) - 0x80);
            if (-1 < (char)*pbVar10) {
              pbVar10 = pbVar11 + 2;
              goto LAB_006cb19c;
            }
            auVar13 = FUN_0066fd14(pbVar11);
            if (auVar13._0_8_ == 0) goto LAB_006cb478;
            uVar8 = auVar13._8_4_;
          }
          else {
LAB_006cb19c:
            auVar13._8_8_ = uVar6;
            auVar13._0_8_ = pbVar10;
            uVar8 = (uint)uVar6;
          }
          param_2 = auVar13._0_8_;
          if (uVar8 < 3) {
            *(int *)(param_1 + 0x48) = auVar13._8_4_;
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else {
            if ((*(ulong *)(param_1 + 8) & 1) == 0) {
              lVar4 = FUN_00661fa4(param_1 + 8);
            }
            else {
              lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
            }
            uVar7 = 1;
LAB_006cb39c:
            param_2 = auVar13._0_8_;
            FUN_006faf8c(lVar4,uVar7,auVar13._8_8_);
          }
        }
        else {
          if ((uVar8 != 2) || ((uVar5 & 0xff) != 0x10)) goto LAB_006cb2a4;
          uVar12 = uVar12 | 4;
          param_2 = pbVar11 + 1;
          uVar6 = (ulong)(char)*pbVar11;
          if ((long)uVar6 < 0) {
            uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
            if ((char)*param_2 < '\0') {
              auVar14 = FUN_0066fd14(pbVar11);
              param_2 = auVar14._0_8_;
              *(bool *)(param_1 + 0x50) = auVar14._8_8_ != 0;
              goto joined_r0x006cb310;
            }
            param_2 = pbVar11 + 2;
          }
          *(bool *)(param_1 + 0x50) = uVar6 != 0;
        }
        goto LAB_006caf54;
      }
      if (uVar8 == 3) {
        if ((uVar5 & 0xff) != 0x18) goto LAB_006cb2a4;
        uVar12 = uVar12 | 0x20;
        param_2 = pbVar11 + 1;
        uVar6 = (ulong)(char)*pbVar11;
        if ((long)uVar6 < 0) {
          uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
          if ((char)*param_2 < '\0') {
            auVar14 = FUN_0066fd14(pbVar11);
            param_2 = auVar14._0_8_;
            *(bool *)(param_1 + 0x53) = auVar14._8_8_ != 0;
            goto joined_r0x006cb310;
          }
          param_2 = pbVar11 + 2;
        }
        *(bool *)(param_1 + 0x53) = uVar6 != 0;
        goto LAB_006caf54;
      }
      if ((uVar8 != 5) || ((uVar5 & 0xff) != 0x28)) goto LAB_006cb2a4;
      uVar12 = uVar12 | 8;
      param_2 = pbVar11 + 1;
      uVar6 = (ulong)(char)*pbVar11;
      if (-1 < (long)uVar6) {
LAB_006cb03c:
        *(bool *)(param_1 + 0x51) = uVar6 != 0;
        goto LAB_006caf54;
      }
      uVar6 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
      if (-1 < (char)*param_2) {
        param_2 = pbVar11 + 2;
        goto LAB_006cb03c;
      }
      auVar14 = FUN_0066fd14(pbVar11);
      param_2 = auVar14._0_8_;
      *(bool *)(param_1 + 0x51) = auVar14._8_8_ != 0;
    }
joined_r0x006cb310:
    if (param_2 == (byte *)0x0) {
LAB_006cb478:
      pbVar11 = (byte *)0x0;
LAB_006cb47c:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar12;
      return pbVar11;
    }
  } while( true );
}


// ===== 006cb4c0  FUN_006cb4c0 =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_006cb4c0(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar4 = *(uint *)(param_1 + 0x48);
      *param_2 = 8;
      param_2[1] = (char)uVar4;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x48);
      *param_2 = 8;
      param_2[1] = (char)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar7 = (ulong)(long)(int)uVar4 >> 7;
      param_2[1] = (byte)uVar4 | 0x80;
      param_2[2] = (char)uVar7;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar8 = uVar7 >> 0xe;
          uVar7 = uVar7 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar7;
          puVar5 = param_2;
        } while (uVar8 != 0);
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x50);
    *param_2 = 0x10;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x53);
    *param_2 = 0x18;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x51);
    *param_2 = 0x28;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar4 = *(uint *)(param_1 + 0x4c);
      *param_2 = 0x30;
      param_2[1] = (char)uVar4;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x4c);
      *param_2 = 0x30;
      param_2[1] = (char)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar7 = (ulong)(long)(int)uVar4 >> 7;
      param_2[1] = (byte)uVar4 | 0x80;
      param_2[2] = (char)uVar7;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar8 = uVar7 >> 0xe;
          uVar7 = uVar7 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar7;
          puVar5 = param_2;
        } while (uVar8 != 0);
      }
    }
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x54);
    *param_2 = 0x50;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x52);
    *param_2 = 0x78;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    iVar9 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar9 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(999,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = (undefined1 *)
              FUN_00668058(param_1 + 0x10,PTR_PTR_007a33e0,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar5 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar5;
  }
  return param_2;
}


// ===== 006cb7d8  FUN_006cb7d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cb7d8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint5 uVar7;
  undefined1 auVar8 [16];
  
  lVar3 = FUN_0066a944(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_006cee4c(*puVar5);
      lVar6 = lVar6 + -8;
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = lVar3 + ((LZCOUNT((long)*(int *)(param_1 + 0x48) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = lVar3 + ((LZCOUNT((long)*(int *)(param_1 + 0x4c) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar1;
    auVar8._12_4_ = uVar1;
    auVar8 = NEON_ushl(auVar8,_DAT_002006b0,4);
    uVar7 = CONCAT14(auVar8[4],(uint)(auVar8[0] & 2)) & 0x2ffffffff;
    lVar3 = lVar3 + (ulong)((int)uVar7 + (uint)(byte)(uVar7 >> 0x20) +
                            (uint)(auVar8[8] & 2) + (uint)(auVar8[0xc] & 2) + (uVar1 >> 5 & 2));
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x2c);
  return;
}


// ===== 006cb8e4  FUN_006cb8e4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006cb8e4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006d2998(param_1 + 0x30,uVar4,lVar5 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 0x7f) != 0) {
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  FUN_00666818(param_1 + 0x10,PTR_PTR_007a33e0,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 006cba28  FUN_006cba28 =====

undefined ** FUN_006cba28(void)

{
  return &PTR_FUN_0079a718;
}


// ===== 006cba34  FUN_006cba34 =====

void FUN_006cba34(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_006c33c0();
    FUN_006cb8e4(param_1,param_2);
    return;
  }
  return;
}


// ===== 006cba6c  FUN_006cba6c =====

void FUN_006cba6c(void)

{
  FUN_00684dd0(PTR_FUN_007a3328,&DAT_007aebb8,&DAT_007aecb0);
  return;
}


// ===== 006cba84  FUN_006cba84 =====

void FUN_006cba84(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a34d0 + 0x10);
  param_1[1] = uVar1;
                    /* try { // try from 006cbab4 to 006cbab7 has its CatchHandler @ 006cbad0 */
  FUN_00663dac(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 006cbae4  FUN_006cbae4 =====

void FUN_006cbae4(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 006cbb04 to 006cbb07 has its CatchHandler @ 006cbb74 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663dbc(param_1 + 2);
    if ((param_1[7] != 0) && (param_1[5] == 0)) {
                    /* try { // try from 006cbb28 to 006cbb2b has its CatchHandler @ 006cbb70 */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006cbb78  FUN_006cbb78 =====

void FUN_006cbb78(void *param_1)

{
  FUN_006cbae4();
  free(param_1);
  return;
}


// ===== 006cbb9c  FUN_006cbb9c =====

void FUN_006cbb9c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 006cbba4  FUN_006cbba4 =====

byte * FUN_006cbba4(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar3 = PTR_PTR_007a3400;
LAB_006cbbfc:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar6 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar6) {
        if (param_3[2] == 0 && 0 < iVar6) {
          return (byte *)0x0;
        }
        return param_2;
      }
      auVar10 = FUN_0066f53c(param_3,iVar6,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar10._0_8_;
      if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    bVar2 = *param_2;
    auVar10[8] = bVar2;
    auVar10._0_8_ = param_2 + 1;
    auVar10._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      iVar6 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
      if ((char)bVar1 < '\0') {
        auVar10 = FUN_0066fe50(param_2);
        param_2 = auVar10._0_8_;
        iVar6 = auVar10._8_4_;
      }
      else {
        param_2 = param_2 + 2;
        auVar10._8_4_ = iVar6;
        auVar10._0_8_ = param_2;
        auVar10._12_4_ = 0;
      }
      if (iVar6 == 0x1f3a) {
        param_2 = param_2 + -2;
        do {
          piVar8 = *(int **)(param_1 + 0x38);
          if (piVar8 == (int *)0x0) {
LAB_006cbcdc:
            uVar4 = FUN_006d210c(*(undefined8 *)(param_1 + 0x28));
            uVar4 = FUN_00675990(param_1 + 0x28,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
          }
          else {
            iVar6 = *(int *)(param_1 + 0x30);
            if (*piVar8 <= iVar6) goto LAB_006cbcdc;
            *(int *)(param_1 + 0x30) = iVar6 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar6 * 2 + 2),
                                           param_2 + 2);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x3eba));
        goto LAB_006cbbfc;
      }
    }
    pbVar7 = auVar10._0_8_;
    uVar5 = auVar10._8_4_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      if (pbVar7 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar5 - 1;
        return pbVar7;
      }
      return (byte *)0x0;
    }
    uVar9 = auVar10._8_8_ & 0xffffffff;
    if (uVar5 >> 6 < 0x7d) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar4 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(uVar9,uVar4,pbVar7,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(uVar9,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,
                                       pbVar7,param_3);
      }
    }
    else {
      param_2 = (byte *)FUN_006d3624(param_1 + 0x10,uVar9,pbVar7,puVar3,param_1 + 8,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006cbdc4  FUN_006cbdc4 =====

undefined8 FUN_006cbdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(999,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    param_2 = FUN_00668058(param_1 + 0x10,PTR_PTR_007a3400,1000,0x20000000,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


